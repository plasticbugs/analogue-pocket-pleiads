// Phoenix-family game core: the 8085, every memory on the board, the video
// hardware, and the address decode that ties them together.
//
// Clocking. One 44 MHz system clock, which is 8x the 5.5 MHz pixel clock and
// 16x the 2.75 MHz the 8085 runs its T-states at. The board's 11 MHz crystal
// divides by two to make both, so everything here stays in one domain and the
// only clock-domain crossing in the whole design is the audio sample on its
// way out to the platform.
//
// Address decode. The board decodes A14..A11 and ignores A15, so every
// register repeats through its 2 KB window and the whole map mirrors into
// 8000-FFFF. MAME's memory map declares narrower 1 KB windows; this is a
// superset of it, and matches the hardware.
//
//   A14 A13 A12 A11
//    0   -   -   -    0000-3FFF  program ROM
//    1   0   0   -    4000-4FFF  video RAM, the page the video register picks
//    1   0   1   0    5000-57FF  video register            (write)
//    1   0   1   1    5800-5FFF  background scroll         (write)
//    1   1   0   0    6000-67FF  sound control A           (write)
//    1   1   0   1    6800-6FFF  sound control B           (write)
//    1   1   1   0    7000-77FF  IN0                       (read)
//    1   1   1   1    7800-7FFF  DSW0                      (read)
//
// There is no work RAM anywhere on this board. The parts of the two video RAM
// pages the tilemaps do not cover -- 340-7FF and B40-FFF -- are the game's
// only scratch, which is why the 4 KB page is fully read/write.

module phoenix_core (
    input  logic        clk,            // 44.0 MHz
    input  logic        reset,

    // ROM image download
    input  logic [16:0] dl_addr,
    input  logic [7:0]  dl_data,
    input  logic        dl_wr,
    input  logic        dl_done,
    output logic        game_phoenix,
    output logic        game_known,

    // Controls, all active high here; the core inverts them on the way in.
    input  logic        coin1,
    input  logic        start1,
    input  logic        start2,
    input  logic        p1_left,
    input  logic        p1_right,
    input  logic        p1_fire,
    input  logic        p1_fire2,       // Phoenix only: the barrier
    input  logic        p2_left,
    input  logic        p2_right,
    input  logic        p2_fire,
    input  logic        p2_fire2,
    input  logic [6:0]  dsw,
    input  logic        cab_cocktail,

    // Video out
    output logic [23:0] rgb,
    output logic        hsync,
    output logic        vsync,
    output logic        hblank,
    output logic        vblank,
    output logic        de,
    output logic        cen_pix,

    // Sound control latches, for the sound sections to consume
    output logic [7:0]  snd_a,
    output logic [7:0]  snd_b,
    output logic [7:0]  snd_c,

    // Observation port for the benches; unused in synthesis
    output logic [15:0] dbg_addr,
    output logic [7:0]  dbg_data,
    output logic        dbg_we,
    output logic        dbg_stb,
    output logic        dbg_fetch,
    output logic [8:0]  dbg_hcnt,
    output logic [7:0]  dbg_vcnt
);
    // ------------------------------------------------------------ clock enables
    logic [3:0] div;
    logic       cen_cpu;

    always_ff @(posedge clk) begin
        if (reset) div <= 4'd0;
        else       div <= div + 4'd1;
    end
    assign cen_cpu = (div == 4'd0);

    // ------------------------------------------------------------------- CPU
    logic [15:0] cpu_addr;
    logic [7:0]  cpu_dout, cpu_din;
    logic        cpu_mreq, cpu_we, cpu_io, cpu_fetch;
    logic        cpu_fetch_q;

    i8085 u_cpu (
        .clk(clk), .cen(cen_cpu), .reset(reset),
        .addr(cpu_addr), .dout(cpu_dout), .din(cpu_din),
        .mreq(cpu_mreq), .we(cpu_we), .io(cpu_io),
        .sid(1'b0), .sod(), .fetching(cpu_fetch)
    );

    // ------------------------------------------------------------- decode
    logic sel_rom, sel_vram, sel_vreg, sel_scroll, sel_snda, sel_sndb;
    logic sel_in0, sel_dsw;

    assign sel_rom    = ~cpu_addr[14];
    assign sel_vram   =  cpu_addr[14] & ~cpu_addr[13] & ~cpu_addr[12];
    assign sel_vreg   =  cpu_addr[14] & ~cpu_addr[13] &  cpu_addr[12] & ~cpu_addr[11];
    assign sel_scroll =  cpu_addr[14] & ~cpu_addr[13] &  cpu_addr[12] &  cpu_addr[11];
    assign sel_snda   =  cpu_addr[14] &  cpu_addr[13] & ~cpu_addr[12] & ~cpu_addr[11];
    assign sel_sndb   =  cpu_addr[14] &  cpu_addr[13] & ~cpu_addr[12] &  cpu_addr[11];
    assign sel_in0    =  cpu_addr[14] &  cpu_addr[13] &  cpu_addr[12] & ~cpu_addr[11];
    assign sel_dsw    =  cpu_addr[14] &  cpu_addr[13] &  cpu_addr[12] &  cpu_addr[11];

    // A write lands exactly once per CPU write cycle. The CPU holds address,
    // data and `we` for a whole T-state, which is sixteen system clocks, so
    // without this the memory would see sixteen identical writes.
    logic wr_pulse;
    assign wr_pulse = cpu_mreq & cpu_we & (div == 4'd1);

    // ----------------------------------------------------------- registers
    logic [7:0] videoreg, scroll;

    always_ff @(posedge clk) begin
        if (reset) begin
            videoreg <= 8'd0; scroll <= 8'd0;
            snd_a <= 8'd0; snd_b <= 8'd0; snd_c <= 8'd0;
        end else if (wr_pulse) begin
            if (sel_vreg) begin
                videoreg <= cpu_dout;
                // Every video register write is also sound control C. That is
                // the board, not a shortcut: the same latch drives both.
                snd_c    <= cpu_dout;
            end
            if (sel_scroll) scroll <= cpu_dout;
            if (sel_snda)   snd_a  <= cpu_dout;
            if (sel_sndb)   snd_b  <= cpu_dout;
        end
    end

    // ------------------------------------------------------------ protection
    // Three custom-marked chips (T-X, T-Y, T-Z -- a 74LS669, 74LS83 and 74LS74
    // with modified pinouts) answer a question latched from the video register.
    // MAME reduces the whole thing to this lookup, and measurement confirmed
    // the port bit is the inverse of its return value.
    logic prot_answer;
    always_comb begin
        case (videoreg & 8'hfc)
            8'h0c, 8'h30: prot_answer = 1'b1;
            default:      prot_answer = 1'b0;
        endcase
    end

    // ---------------------------------------------------------------- inputs
    // The joystick nibble is multiplexed by cocktail mode, which follows the
    // video register's page bit. All bits are active low.
    logic cocktail;
    assign cocktail = videoreg[0] & cab_cocktail;

    logic [3:0] ctrl_nibble;
    assign ctrl_nibble = cocktail
        ? ~{p2_fire2, p2_left, p2_right, p2_fire}
        : ~{p1_fire2, p1_left, p1_right, p1_fire};

    logic [7:0] in0, dsw0;
    // Pleiads has one button and puts protection on bit 3; Phoenix has two
    // buttons and nothing on bit 3.
    assign in0 = {ctrl_nibble,
                  game_phoenix ? 1'b1 : ~prot_answer,
                  ~start2, ~start1, ~coin1};
    assign dsw0 = {~vblank_raw, dsw};

    // ------------------------------------------------------------ memories
    logic [7:0]  prog_data, vram_dout;
    logic [12:0] vram_b_addr;
    logic [7:0]  vram_b_data;
    logic [10:0] bgrom_addr, fgrom_addr;
    logic [7:0]  bgrom_lsb, bgrom_msb, fgrom_lsb, fgrom_msb;
    logic [7:0]  prom_addr, prom_lo, prom_hi;
    logic        vblank_raw;

    phoenix_mem u_mem (
        .clk(clk),
        .dl_addr(dl_addr), .dl_data(dl_data), .dl_wr(dl_wr), .dl_done(dl_done),
        .game_phoenix(game_phoenix), .game_known(game_known),
        .prog_addr(cpu_addr[13:0]), .prog_data(prog_data),
        .vram_a_addr({videoreg[0], cpu_addr[11:0]}),
        .vram_a_we(wr_pulse & sel_vram), .vram_a_din(cpu_dout), .vram_a_dout(vram_dout),
        .vram_b_addr(vram_b_addr), .vram_b_data(vram_b_data),
        .bgrom_addr(bgrom_addr), .bgrom_lsb(bgrom_lsb), .bgrom_msb(bgrom_msb),
        .fgrom_addr(fgrom_addr), .fgrom_lsb(fgrom_lsb), .fgrom_msb(fgrom_msb),
        .prom_addr(prom_addr), .prom_lo(prom_lo), .prom_hi(prom_hi)
    );

    // Read mux. Unmapped space floats high, which is what an undriven bus with
    // pull-ups does and what the game would see on the board.
    always_comb begin
        if      (sel_rom)  cpu_din = prog_data;
        else if (sel_vram) cpu_din = vram_dout;
        else if (sel_in0)  cpu_din = in0;
        else if (sel_dsw)  cpu_din = dsw0;
        else               cpu_din = 8'hff;
    end

    // ------------------------------------------------------------------ video
    phoenix_video u_video (
        .clk(clk), .reset(reset), .cen_pix(cen_pix),
        .videoreg(videoreg), .scroll(scroll),
        .cab_cocktail(cab_cocktail), .is_phoenix(game_phoenix),
        .vram_addr(vram_b_addr), .vram_data(vram_b_data),
        .bgrom_addr(bgrom_addr), .bgrom_lsb(bgrom_lsb), .bgrom_msb(bgrom_msb),
        .fgrom_addr(fgrom_addr), .fgrom_lsb(fgrom_lsb), .fgrom_msb(fgrom_msb),
        .prom_addr(prom_addr), .prom_lo(prom_lo), .prom_hi(prom_hi),
        .hcnt(dbg_hcnt), .vcnt(dbg_vcnt), .vblank_raw(vblank_raw),
        .rgb(rgb), .hsync(hsync), .vsync(vsync),
        .hblank(hblank), .vblank(vblank), .de(de)
    );

    // ------------------------------------------------------------ bench port
    // One strobe per CPU bus cycle, so a bench can log the transaction
    // sequence and diff it against MAME's.
    //
    // The strobe deliberately sits late in the cycle. The CPU registers the
    // address on the enabled edge (div 0), the memory samples it on the next
    // edge, and its registered output only appears at div 2. Strobing at div 1
    // logged every read with the *previous* transaction's data -- addresses
    // all correct, data shifted by one, which looks exactly like a broken
    // processor and is in fact a broken probe. The CPU itself samples sixteen
    // clocks later and was never affected.
    assign dbg_addr = cpu_addr;
    assign dbg_data = cpu_we ? cpu_dout : cpu_din;
    assign dbg_we   = cpu_we;
    assign dbg_stb  = cpu_mreq & (div == 4'd4);
    // `fetching` is asserted during the T-state that presents PC; by the time
    // the strobe fires the CPU has moved on to latching, so the flag is held.
    always_ff @(posedge clk) if (cen_cpu) cpu_fetch_q <= cpu_fetch;
    assign dbg_fetch = cpu_fetch_q;
endmodule
