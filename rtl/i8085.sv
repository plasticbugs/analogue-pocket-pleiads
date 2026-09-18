// Intel 8085A.
//
// Written rather than vendored. The MiSTer Phoenix core runs this board on
// T80 in 8080 mode, which works because the only 8085-only opcode either game
// uses is SIM, and an 8080 reads that as a one-byte NOP. But T80 is VHDL,
// which our simulator cannot read -- taking it would have cost the full-system
// bench, and that bench is the one thing that catches memory-map and
// vblank-timing faults before a twenty-minute synthesis run. An 8085 is a
// small enough processor to write and, more to the point, a cheap one to
// *check*: MAME will hand over its exact bus transaction sequence, and
// matching that is a far stronger statement than "it looked right on
// hardware".
//
// Every opcode is implemented, including the eleven undocumented 8085 ones.
// Neither game reaches them, but four of them (CB D9 DD ED FD) are a different
// *length* on the 8080, so a core that guesses wrong there does not merely get
// one instruction wrong, it loses instruction sync permanently. Implementing
// them costs a few lines and removes the question.
//
// Timing is T-state accurate in total. Counts come from MAME's
// lut_cycles_8085 (ref/mame/i8085.cpp) including the documented extras for
// taken control transfers: JMP 7+3, CALL 9+9, conditional RET 6+6. Within an
// instruction the bus accesses are issued back to back and the remaining
// budget is spent idle. Nothing on this board can tell: memory is
// single-cycle block RAM with no wait states, no DMA and no cycle-sensitive
// I/O, and the one timing-dependent thing the game does -- polling vblank --
// has a 48-line window some 8400 CPU cycles wide.
//
// Flag semantics follow MAME exactly, undocumented bits included: the K flag
// on INX/DCX wrap, V set by the subtract group, X3 always clear, and ANA
// always setting AC.
//
// One `cen` tick is one T-state.

module i8085 (
    input  logic        clk,
    input  logic        cen,
    input  logic        reset,

    output logic [15:0] addr,
    output logic [7:0]  dout,
    input  logic [7:0]  din,
    output logic        mreq,
    output logic        we,
    output logic        io,

    input  logic        sid,
    output logic        sod,

    // Observation only: high during the opcode fetch T-state, so a bench can
    // find instruction boundaries and time each instruction.
    output logic        fetching
);
    // ------------------------------------------------------------- registers
    logic [7:0]  rb, rc, rd_, re, rh, rl, ra, fl;
    logic [15:0] sp, pc, wz, tmp;
    logic [7:0]  ir, tleft, im;
    logic [3:0]  ustep;

    typedef enum logic [1:0] { S_FETCH, S_LATCH, S_EXEC, S_SPEND } state_t;
    state_t state;

    localparam int F_C = 0, F_V = 1, F_P = 2, F_X3 = 3, F_H = 4, F_K = 5,
                   F_Z = 6, F_S = 7;

    assign fetching = (state == S_FETCH);

    wire [2:0]  ddd = ir[5:3];
    wire [2:0]  sss = ir[2:0];
    wire [1:0]  rp  = ir[5:4];
    wire [2:0]  cc  = ir[5:3];
    wire        src_m = (sss == 3'd6);
    wire        dst_m = (ddd == 3'd6);
    wire [15:0] hl = {rh, rl};
    wire [15:0] bc = {rb, rc};
    wire [15:0] de = {rd_, re};

    // ------------------------------------------------------------- selectors
    logic [7:0]  src_reg;
    always_comb case (sss)
        3'd0: src_reg = rb; 3'd1: src_reg = rc; 3'd2: src_reg = rd_;
        3'd3: src_reg = re; 3'd4: src_reg = rh; 3'd5: src_reg = rl;
        3'd6: src_reg = 8'd0; default: src_reg = ra;
    endcase

    logic [15:0] rp_val;
    always_comb case (rp)
        2'd0: rp_val = bc; 2'd1: rp_val = de; 2'd2: rp_val = hl; default: rp_val = sp;
    endcase

    // PUSH/POP use AF where the other pair encodings use SP.
    logic [15:0] push_val;
    always_comb case (rp)
        2'd0: push_val = bc; 2'd1: push_val = de; 2'd2: push_val = hl;
        default: push_val = {ra, fl & ~(8'd1 << F_X3)};
    endcase

    logic cond;
    always_comb case (cc)
        3'd0: cond = ~fl[F_Z]; 3'd1: cond =  fl[F_Z];
        3'd2: cond = ~fl[F_C]; 3'd3: cond =  fl[F_C];
        3'd4: cond = ~fl[F_P]; 3'd5: cond =  fl[F_P];
        3'd6: cond = ~fl[F_S]; default: cond = fl[F_S];
    endcase

    function automatic logic [7:0] zsp(input logic [7:0] v);
        zsp       = 8'd0;
        zsp[F_Z]  = (v == 8'd0);
        zsp[F_S]  = v[7];
        zsp[F_P]  = ~^v;
    endfunction

    // ALU, selected by the opcode's bits 5:3 in both the register and the
    // immediate forms: ADD ADC SUB SBB ANA XRA ORA CMP. Returns {result, flags}.
    function automatic logic [15:0] alu(input logic [2:0] op, input logic [7:0] acc,
                                        input logic [7:0] v,  input logic cin);
        logic [8:0] q;
        logic [7:0] f, res;
        begin
            q = 9'd0; f = 8'd0; res = 8'd0;
            case (op)
                3'd0, 3'd1: begin
                    q   = {1'b0, acc} + {1'b0, v} + {8'd0, (op == 3'd1) ? cin : 1'b0};
                    res = q[7:0];
                    f   = zsp(res);
                    f[F_C] = q[8];
                    f[F_H] = acc[4] ^ res[4] ^ v[4];
                end
                3'd2, 3'd3, 3'd7: begin
                    q   = {1'b0, acc} - {1'b0, v} - {8'd0, (op == 3'd3) ? cin : 1'b0};
                    res = q[7:0];
                    f   = zsp(res);
                    f[F_C] = q[8];
                    f[F_H] = ~(acc[4] ^ res[4] ^ v[4]);
                    f[F_V] = 1'b1;                      // MAME sets V on the subtract group
                    if (op == 3'd7) res = acc;          // CMP keeps the accumulator
                end
                3'd4: begin res = acc & v; f = zsp(res); f[F_H] = 1'b1; end
                3'd5: begin res = acc ^ v; f = zsp(res); end
                default: begin res = acc | v; f = zsp(res); end
            endcase
            alu = {res, f};
        end
    endfunction

    // -------------------------------------------------------- cycle counts
    logic [7:0] cyc_lut [0:255];
    initial begin : cycles
        integer i;
        for (i = 0; i < 256; i = i + 1) cyc_lut[i] = 8'd4;
        for (i = 'h40; i <= 'h7f; i = i + 1)
            cyc_lut[i] = (((i & 'h07) == 'h06) || ((i & 'hf8) == 'h70)) ? 8'd7 : 8'd4;
        cyc_lut['h76] = 8'd5;
        for (i = 'h80; i <= 'hbf; i = i + 1)
            cyc_lut[i] = ((i & 'h07) == 'h06) ? 8'd7 : 8'd4;
        for (i = 0; i <= 'h3f; i = i + 1)
            case (i & 'h0f)
                'h01:        cyc_lut[i] = 8'd10;   // LXI
                'h02, 'h0a:  cyc_lut[i] = 8'd7;    // STAX / LDAX
                'h03, 'h0b:  cyc_lut[i] = 8'd6;    // INX / DCX
                'h06, 'h0e:  cyc_lut[i] = 8'd7;    // MVI
                'h09:        cyc_lut[i] = 8'd10;   // DAD
                default:     cyc_lut[i] = 8'd4;
            endcase
        cyc_lut['h10] = 8'd7;  cyc_lut['h18] = 8'd7;    // ARHL, RDEL
        cyc_lut['h22] = 8'd16; cyc_lut['h2a] = 8'd16;   // SHLD, LHLD
        cyc_lut['h28] = 8'd10; cyc_lut['h38] = 8'd10;   // LDHI, LDSI
        cyc_lut['h32] = 8'd13; cyc_lut['h3a] = 8'd13;   // STA, LDA
        cyc_lut['h34] = 8'd10; cyc_lut['h35] = 8'd10;   // INR M, DCR M
        cyc_lut['h36] = 8'd10;                          // MVI M
        for (i = 'hc0; i <= 'hff; i = i + 1)
            case (i & 'h0f)
                'h00, 'h08: cyc_lut[i] = 8'd6;     // conditional RET
                'h01:       cyc_lut[i] = 8'd10;    // POP
                'h02, 'h0a: cyc_lut[i] = 8'd7;     // conditional JMP
                'h04, 'h0c: cyc_lut[i] = 8'd9;     // conditional CALL
                'h05:       cyc_lut[i] = 8'd12;    // PUSH
                'h06, 'h0e: cyc_lut[i] = 8'd7;     // ALU immediate
                'h07, 'h0f: cyc_lut[i] = 8'd12;    // RST
                default:    cyc_lut[i] = 8'd6;
            endcase
        cyc_lut['hc3] = 8'd7;  cyc_lut['hc9] = 8'd10;   // JMP, RET
        cyc_lut['hcb] = 8'd6;  cyc_lut['hcd] = 8'd9;    // RSTV, CALL
        cyc_lut['hd3] = 8'd10; cyc_lut['hd9] = 8'd10;   // OUT, SHLX
        cyc_lut['hdb] = 8'd10; cyc_lut['hdd] = 8'd7;    // IN, JNK
        cyc_lut['he3] = 8'd16; cyc_lut['he9] = 8'd6;    // XTHL, PCHL
        cyc_lut['heb] = 8'd4;  cyc_lut['hed] = 8'd10;   // XCHG, LHLX
        cyc_lut['hf3] = 8'd4;  cyc_lut['hf9] = 8'd6;    // DI, SPHL
        cyc_lut['hfb] = 8'd4;  cyc_lut['hfd] = 8'd7;    // EI, JK
    end

    // `tleft` is decremented once at the top of every enabled clock. A branch
    // that has just discovered it is taken owes extra T-states, and its write
    // to `tleft` replaces that decrement -- so it adds BONUS-1, not BONUS.
    // Getting this wrong makes every taken branch one cycle long, which is
    // invisible until the game's speed is compared against MAME.
    localparam logic [7:0] BONUS_JMP  = 8'd3 - 8'd1;
    localparam logic [7:0] BONUS_CALL = 8'd9 - 8'd1;
    localparam logic [7:0] BONUS_RET  = 8'd6 - 8'd1;

    logic [15:0] alu_out;

    always_ff @(posedge clk) begin
        if (reset) begin
            state <= S_FETCH; pc <= '0; sp <= '0; ustep <= '0; tleft <= '0;
            ra <= '0; rb <= '0; rc <= '0; rd_ <= '0; re <= '0; rh <= '0; rl <= '0;
            wz <= '0; tmp <= '0; ir <= '0; im <= '0; sod <= 1'b0;
            fl <= 8'h02;
            addr <= '0; dout <= '0; mreq <= 1'b0; we <= 1'b0; io <= 1'b0;
        end else if (cen) begin
            if (tleft != 8'd0) tleft <= tleft - 8'd1;
            mreq <= 1'b0; we <= 1'b0; io <= 1'b0;

            case (state)
            S_FETCH: begin
                addr <= pc; mreq <= 1'b1;
                tleft <= 8'd0;
                state <= S_LATCH;
            end

            S_LATCH: begin
                ir    <= din;
                pc    <= pc + 16'd1;
                tleft <= cyc_lut[din] - 8'd2;      // the two ticks just spent
                ustep <= 4'd0;
                state <= S_EXEC;
            end

            S_EXEC: begin
                ustep <= ustep + 4'd1;
                // The overlap here is the design, not an accident: casez takes
                // the first match, so every opcode that sits inside a general
                // pattern but does not behave like it -- JMP inside Jcc, RET
                // inside Rcc, XCHG and DI inside nothing in particular -- is
                // listed above the pattern that would otherwise swallow it.
                // Reordering this case changes what the processor does.
                /* verilator lint_off CASEOVERLAP */
                casez (ir)
                // ============================== specific opcodes come first,
                // because casez takes the first match and several of these sit
                // inside the general patterns further down.

                8'h07: begin ra <= {ra[6:0], ra[7]};   fl[F_C] <= ra[7]; state <= S_SPEND; end
                8'h0f: begin ra <= {ra[0], ra[7:1]};   fl[F_C] <= ra[0]; state <= S_SPEND; end
                8'h17: begin ra <= {ra[6:0], fl[F_C]}; fl[F_C] <= ra[7]; state <= S_SPEND; end
                8'h1f: begin ra <= {fl[F_C], ra[7:1]}; fl[F_C] <= ra[0]; state <= S_SPEND; end
                8'h2f: begin ra <= ~ra;                state <= S_SPEND; end
                8'h37: begin fl[F_C] <= 1'b1;          state <= S_SPEND; end
                8'h3f: begin fl[F_C] <= ~fl[F_C];      state <= S_SPEND; end

                8'h27: begin                                    // DAA
                    logic [7:0] t, nf;
                    t = ra;
                    if (fl[F_H] || ra[3:0] > 4'd9) t = t + 8'h06;
                    if (fl[F_C] || ra > 8'h99)     t = t + 8'h60;
                    nf      = (fl & 8'h23) | zsp(t);
                    nf[F_C] = fl[F_C] | (ra > 8'h99);
                    nf[F_H] = ra[4] ^ t[4];
                    fl <= nf; ra <= t; state <= S_SPEND;
                end

                8'h08: begin                                    // DSUB (8085)
                    logic [16:0] q;
                    logic [7:0]  nf;
                    q  = {1'b0, hl} - {1'b0, bc};
                    nf = zsp(q[7:0]);
                    nf[F_Z] = (q[15:0] == 16'd0);
                    nf[F_C] = q[16];
                    nf[F_H] = ~(rl[4] ^ q[4] ^ rc[4]);
                    nf[F_V] = 1'b1;
                    {rh, rl} <= q[15:0]; fl <= nf; state <= S_SPEND;
                end
                8'h10: begin                                    // ARHL (8085)
                    fl[F_C] <= rl[0];
                    {rh, rl} <= {rh[7], rh, rl[7:1]};
                    state <= S_SPEND;
                end
                8'h18: begin                                    // RDEL (8085)
                    {rd_, re} <= {de[14:0], fl[F_C]};
                    fl[F_C] <= de[15];
                    fl[F_V] <= de[15] ^ de[14];
                    state <= S_SPEND;
                end
                8'h20: begin ra <= {sid, im[6:0]}; state <= S_SPEND; end   // RIM
                8'h30: begin                                               // SIM
                    im <= ra;
                    if (ra[6]) sod <= ra[7];        // bit 6 is the serial-out enable
                    state <= S_SPEND;
                end
                8'h28, 8'h38: case (ustep)                      // LDHI / LDSI (8085)
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    default: begin
                        {rd_, re} <= (ir[4] ? sp : hl) + {8'd0, din};
                        pc <= pc + 16'd1; state <= S_SPEND;
                    end
                endcase

                8'h22: case (ustep)                             // SHLD
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                addr <= pc + 16'd1; mreq <= 1'b1; end
                    4'd2: begin wz[15:8] <= din; pc <= pc + 16'd1; end
                    4'd3: begin addr <= wz; dout <= rl; mreq <= 1'b1; we <= 1'b1; end
                    default: begin addr <= wz + 16'd1; dout <= rh; mreq <= 1'b1; we <= 1'b1;
                                   state <= S_SPEND; end
                endcase
                8'h2a: case (ustep)                             // LHLD
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                addr <= pc + 16'd1; mreq <= 1'b1; end
                    4'd2: begin wz[15:8] <= din; pc <= pc + 16'd1; end
                    4'd3: begin addr <= wz; mreq <= 1'b1; end
                    4'd4: begin rl <= din; addr <= wz + 16'd1; mreq <= 1'b1; end
                    default: begin rh <= din; state <= S_SPEND; end
                endcase
                8'h32: case (ustep)                             // STA
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                addr <= pc + 16'd1; mreq <= 1'b1; end
                    4'd2: begin pc <= pc + 16'd1;
                                addr <= {din, wz[7:0]}; dout <= ra; mreq <= 1'b1; we <= 1'b1; end
                    default: state <= S_SPEND;
                endcase
                8'h3a: case (ustep)                             // LDA
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                addr <= pc + 16'd1; mreq <= 1'b1; end
                    4'd2: begin pc <= pc + 16'd1; addr <= {din, wz[7:0]}; mreq <= 1'b1; end
                    default: begin ra <= din; state <= S_SPEND; end
                endcase

                8'h76: state <= S_SPEND;                        // HLT

                8'hc3, 8'hdd, 8'hfd: begin                      // JMP, JNK, JK
                    logic tk;
                    tk = (ir == 8'hc3) || (ir == 8'hdd && !fl[F_K])
                                       || (ir == 8'hfd &&  fl[F_K]);
                    if (!tk) begin pc <= pc + 16'd2; state <= S_SPEND; end
                    else case (ustep)
                        4'd0: begin tleft <= tleft + BONUS_JMP; addr <= pc; mreq <= 1'b1; end
                        4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                    addr <= pc + 16'd1; mreq <= 1'b1; end
                        default: begin pc <= {din, wz[7:0]}; state <= S_SPEND; end
                    endcase
                end

                8'hc9: case (ustep)                             // RET
                    4'd0: begin addr <= sp; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; addr <= sp + 16'd1; mreq <= 1'b1; end
                    default: begin pc <= {din, wz[7:0]}; sp <= sp + 16'd2; state <= S_SPEND; end
                endcase

                8'hcd: case (ustep)                             // CALL
                    4'd0: begin tleft <= tleft + BONUS_CALL; addr <= pc; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                addr <= pc + 16'd1; mreq <= 1'b1; end
                    4'd2: begin
                        logic [15:0] ret;
                        ret = pc + 16'd1;               // past the third byte
                        wz[15:8] <= din; pc <= ret; tmp <= ret;
                        addr <= sp - 16'd1; dout <= ret[15:8]; mreq <= 1'b1; we <= 1'b1;
                    end
                    4'd3: begin addr <= sp - 16'd2; dout <= tmp[7:0]; mreq <= 1'b1; we <= 1'b1; end
                    default: begin sp <= sp - 16'd2; pc <= wz; state <= S_SPEND; end
                endcase

                8'hcb: begin                                    // RSTV (8085)
                    if (fl[F_V]) case (ustep)
                        4'd0: begin addr <= sp - 16'd1; dout <= pc[15:8]; mreq <= 1'b1; we <= 1'b1; end
                        4'd1: begin addr <= sp - 16'd2; dout <= pc[7:0];  mreq <= 1'b1; we <= 1'b1; end
                        default: begin sp <= sp - 16'd2; pc <= 16'h0040; state <= S_SPEND; end
                    endcase
                    else state <= S_SPEND;
                end

                8'hd3: case (ustep)                             // OUT
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin pc <= pc + 16'd1; addr <= {din, din}; dout <= ra;
                                mreq <= 1'b1; we <= 1'b1; io <= 1'b1; end
                    default: state <= S_SPEND;
                endcase
                8'hdb: case (ustep)                             // IN
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin pc <= pc + 16'd1; addr <= {din, din}; mreq <= 1'b1; io <= 1'b1; end
                    default: begin ra <= din; state <= S_SPEND; end
                endcase

                8'hd9: case (ustep)                             // SHLX (8085)
                    4'd0: begin addr <= de;          dout <= rl; mreq <= 1'b1; we <= 1'b1; end
                    4'd1: begin addr <= de + 16'd1;  dout <= rh; mreq <= 1'b1; we <= 1'b1; end
                    default: state <= S_SPEND;
                endcase
                8'hed: case (ustep)                             // LHLX (8085)
                    4'd0: begin addr <= de; mreq <= 1'b1; end
                    4'd1: begin rl <= din; addr <= de + 16'd1; mreq <= 1'b1; end
                    default: begin rh <= din; state <= S_SPEND; end
                endcase

                8'he3: case (ustep)                             // XTHL
                    4'd0: begin addr <= sp; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; addr <= sp + 16'd1; mreq <= 1'b1; end
                    4'd2: begin wz[15:8] <= din; addr <= sp; dout <= rl; mreq <= 1'b1; we <= 1'b1; end
                    4'd3: begin addr <= sp + 16'd1; dout <= rh; mreq <= 1'b1; we <= 1'b1; end
                    default: begin {rh, rl} <= wz; state <= S_SPEND; end
                endcase

                8'he9: begin pc <= hl; state <= S_SPEND; end                       // PCHL
                8'heb: begin {rh, rl} <= de; {rd_, re} <= hl; state <= S_SPEND; end // XCHG
                8'hf9: begin sp <= hl; state <= S_SPEND; end                       // SPHL
                8'hf3, 8'hfb: state <= S_SPEND;                                    // DI / EI

                // ============================== general patterns

                8'b00??_?000: state <= S_SPEND;                 // NOP and friends

                8'b00??_0001: case (ustep)                      // LXI rp,d16
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                addr <= pc + 16'd1; mreq <= 1'b1; end
                    default: begin
                        pc <= pc + 16'd1;
                        case (rp)
                            2'd0: {rb, rc}  <= {din, wz[7:0]};
                            2'd1: {rd_, re} <= {din, wz[7:0]};
                            2'd2: {rh, rl}  <= {din, wz[7:0]};
                            default: sp     <= {din, wz[7:0]};
                        endcase
                        state <= S_SPEND;
                    end
                endcase

                8'b000?_0010: begin                             // STAX B/D
                    addr <= ir[4] ? de : bc; dout <= ra; mreq <= 1'b1; we <= 1'b1;
                    state <= S_SPEND;
                end
                8'b000?_1010: case (ustep)                      // LDAX B/D
                    4'd0: begin addr <= ir[4] ? de : bc; mreq <= 1'b1; end
                    default: begin ra <= din; state <= S_SPEND; end
                endcase

                8'b00??_?011: begin                             // INX / DCX
                    logic [15:0] nv;
                    nv = ir[3] ? (rp_val - 16'd1) : (rp_val + 16'd1);
                    case (rp)
                        2'd0: {rb, rc}  <= nv;
                        2'd1: {rd_, re} <= nv;
                        2'd2: {rh, rl}  <= nv;
                        default: sp     <= nv;
                    endcase
                    fl[F_K] <= ir[3] ? (nv == 16'hffff) : (nv == 16'h0000);
                    state <= S_SPEND;
                end

                8'b00??_1001: begin                             // DAD rp
                    logic [16:0] q;
                    q = {1'b0, hl} + {1'b0, rp_val};
                    {rh, rl} <= q[15:0];
                    fl[F_C]  <= q[16];
                    state <= S_SPEND;
                end

                8'b00??_?10?: begin                             // INR / DCR
                    logic [7:0] s, v, nf;
                    s = dst_m ? din : src_reg_from_ddd;
                    v = ir[0] ? (s - 8'd1) : (s + 8'd1);
                    nf = zsp(v);
                    nf[F_C] = fl[F_C];
                    nf[F_K] = fl[F_K];
                    nf[F_H] = ir[0] ? (s[3:0] != 4'h0) : (s[3:0] == 4'hf);
                    nf[F_V] = ir[0];
                    if (dst_m) case (ustep)
                        4'd0: begin addr <= hl; mreq <= 1'b1; end
                        4'd1: begin fl <= nf; addr <= hl; dout <= v; mreq <= 1'b1; we <= 1'b1; end
                        default: state <= S_SPEND;
                    endcase
                    else begin
                        fl <= nf;
                        case (ddd)
                            3'd0: rb <= v; 3'd1: rc <= v; 3'd2: rd_ <= v; 3'd3: re <= v;
                            3'd4: rh <= v; 3'd5: rl <= v; default: ra <= v;
                        endcase
                        state <= S_SPEND;
                    end
                end

                8'b00??_?110: begin                             // MVI r,d8
                    if (dst_m) case (ustep)
                        4'd0: begin addr <= pc; mreq <= 1'b1; end
                        4'd1: begin pc <= pc + 16'd1;
                                    addr <= hl; dout <= din; mreq <= 1'b1; we <= 1'b1; end
                        default: state <= S_SPEND;
                    endcase
                    else case (ustep)
                        4'd0: begin addr <= pc; mreq <= 1'b1; end
                        default: begin
                            pc <= pc + 16'd1;
                            case (ddd)
                                3'd0: rb <= din; 3'd1: rc <= din; 3'd2: rd_ <= din;
                                3'd3: re <= din; 3'd4: rh <= din; 3'd5: rl <= din;
                                default: ra <= din;
                            endcase
                            state <= S_SPEND;
                        end
                    endcase
                end

                8'b01??_????: begin                             // MOV
                    if (src_m) case (ustep)
                        4'd0: begin addr <= hl; mreq <= 1'b1; end
                        default: begin
                            case (ddd)
                                3'd0: rb <= din; 3'd1: rc <= din; 3'd2: rd_ <= din;
                                3'd3: re <= din; 3'd4: rh <= din; 3'd5: rl <= din;
                                default: ra <= din;
                            endcase
                            state <= S_SPEND;
                        end
                    endcase
                    else if (dst_m) begin
                        addr <= hl; dout <= src_reg; mreq <= 1'b1; we <= 1'b1;
                        state <= S_SPEND;
                    end else begin
                        case (ddd)
                            3'd0: rb <= src_reg; 3'd1: rc <= src_reg; 3'd2: rd_ <= src_reg;
                            3'd3: re <= src_reg; 3'd4: rh <= src_reg; 3'd5: rl <= src_reg;
                            default: ra <= src_reg;
                        endcase
                        state <= S_SPEND;
                    end
                end

                8'b10??_????: begin                             // ALU A,r
                    if (src_m) case (ustep)
                        4'd0: begin addr <= hl; mreq <= 1'b1; end
                        default: begin
                            alu_out = alu(ddd, ra, din, fl[F_C]);
                            ra <= alu_out[15:8]; fl <= alu_out[7:0];
                            state <= S_SPEND;
                        end
                    endcase
                    else begin
                        alu_out = alu(ddd, ra, src_reg, fl[F_C]);
                        ra <= alu_out[15:8]; fl <= alu_out[7:0];
                        state <= S_SPEND;
                    end
                end

                8'b11??_?110: case (ustep)                      // ALU A,d8
                    4'd0: begin addr <= pc; mreq <= 1'b1; end
                    default: begin
                        alu_out = alu(ddd, ra, din, fl[F_C]);
                        ra <= alu_out[15:8]; fl <= alu_out[7:0];
                        pc <= pc + 16'd1;
                        state <= S_SPEND;
                    end
                endcase

                8'b11??_0001: case (ustep)                      // POP
                    4'd0: begin addr <= sp; mreq <= 1'b1; end
                    4'd1: begin wz[7:0] <= din; addr <= sp + 16'd1; mreq <= 1'b1; end
                    default: begin
                        sp <= sp + 16'd2;
                        case (rp)
                            2'd0: {rb, rc}  <= {din, wz[7:0]};
                            2'd1: {rd_, re} <= {din, wz[7:0]};
                            2'd2: {rh, rl}  <= {din, wz[7:0]};
                            // X3 always reads back 0; V always reads back 1 on
                            // this part, matching MAME's PUSH-side masking.
                            default: begin ra <= din;
                                           fl <= (wz[7:0] & ~(8'd1 << F_X3)) | (8'd1 << F_V); end
                        endcase
                        state <= S_SPEND;
                    end
                endcase

                8'b11??_0101: case (ustep)                      // PUSH
                    4'd0: begin addr <= sp - 16'd1; dout <= push_val[15:8];
                                mreq <= 1'b1; we <= 1'b1; end
                    default: begin addr <= sp - 16'd2; dout <= push_val[7:0];
                                   mreq <= 1'b1; we <= 1'b1;
                                   sp <= sp - 16'd2; state <= S_SPEND; end
                endcase

                // A conditional transfer that is not taken skips its two
                // operand bytes without reading them. That is what MAME does,
                // and the T-state counts agree with it: 7 not taken against 10
                // taken for a jump leaves no room for two extra read cycles.
                // Nothing on this board can tell the difference anyway -- the
                // operands always sit in ROM, where a read has no side effect
                // -- but the bus traces have to agree transaction for
                // transaction for the bench to mean anything.
                8'b11??_?010: begin                             // Jcc
                    if (!cond) begin pc <= pc + 16'd2; state <= S_SPEND; end
                    else case (ustep)
                        4'd0: begin tleft <= tleft + BONUS_JMP; addr <= pc; mreq <= 1'b1; end
                        4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                    addr <= pc + 16'd1; mreq <= 1'b1; end
                        default: begin pc <= {din, wz[7:0]}; state <= S_SPEND; end
                    endcase
                end

                8'b11??_?100: begin                             // Ccc
                    if (!cond) begin pc <= pc + 16'd2; state <= S_SPEND; end
                    else case (ustep)
                        4'd0: begin tleft <= tleft + BONUS_CALL; addr <= pc; mreq <= 1'b1; end
                        4'd1: begin wz[7:0] <= din; pc <= pc + 16'd1;
                                    addr <= pc + 16'd1; mreq <= 1'b1; end
                        4'd2: begin
                            logic [15:0] ret;
                            ret = pc + 16'd1;
                            wz[15:8] <= din; pc <= ret; tmp <= ret;
                            addr <= sp - 16'd1; dout <= ret[15:8]; mreq <= 1'b1; we <= 1'b1;
                        end
                        4'd3: begin addr <= sp - 16'd2; dout <= tmp[7:0]; mreq <= 1'b1; we <= 1'b1; end
                        default: begin sp <= sp - 16'd2; pc <= wz; state <= S_SPEND; end
                    endcase
                end

                8'b11??_?000: begin                             // Rcc
                    if (!cond) state <= S_SPEND;
                    else case (ustep)
                        4'd0: begin tleft <= tleft + BONUS_RET; addr <= sp; mreq <= 1'b1; end
                        4'd1: begin wz[7:0] <= din; addr <= sp + 16'd1; mreq <= 1'b1; end
                        default: begin pc <= {din, wz[7:0]}; sp <= sp + 16'd2; state <= S_SPEND; end
                    endcase
                end

                8'b11??_?111: case (ustep)                      // RST n
                    4'd0: begin addr <= sp - 16'd1; dout <= pc[15:8]; mreq <= 1'b1; we <= 1'b1; end
                    4'd1: begin addr <= sp - 16'd2; dout <= pc[7:0];  mreq <= 1'b1; we <= 1'b1; end
                    default: begin sp <= sp - 16'd2; pc <= {10'd0, ir[5:3], 3'd0};
                                   state <= S_SPEND; end
                endcase

                default: state <= S_SPEND;
                endcase
                /* verilator lint_on CASEOVERLAP */
            end

            // Spend what is left of the instruction's budget. Nothing on this
            // board can observe the idling, but the game's speed depends on
            // the total being right.
            S_SPEND: if (tleft <= 8'd1) state <= S_FETCH;
            endcase
        end
    end

    // INR/DCR on a register needs the source selected by ddd, not sss.
    logic [7:0] src_reg_from_ddd;
    always_comb case (ddd)
        3'd0: src_reg_from_ddd = rb; 3'd1: src_reg_from_ddd = rc;
        3'd2: src_reg_from_ddd = rd_; 3'd3: src_reg_from_ddd = re;
        3'd4: src_reg_from_ddd = rh; 3'd5: src_reg_from_ddd = rl;
        3'd6: src_reg_from_ddd = 8'd0; default: src_reg_from_ddd = ra;
    endcase
endmodule
