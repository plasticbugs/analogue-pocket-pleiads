// Cabinet reverb: a short, dark room around the whole mix. An option, not the
// board -- both games' own audio ends at the mixer in phoenix_audio.sv, and
// this sits after all of it. Off by default.
//
// Ported unchanged in its sound from the Punch-Out!! core's po_reverb, by way
// of Cloak & Dagger's mono cloak_reverb, so the setting means the same thing
// across the cores that have it. This board is mono.
//
// Three parallel feedback comb filters at 29.7, 37.1 and 41.1 ms (mutually
// prime lengths, so their tails do not line up into a ring), each with a
// one-pole low-pass in its loop so the tail darkens as it decays, feedback 5/8
// (about 0.4 s to -60 dB, or 13/16 and about 1.2 s for Heavy); their sum is
// added under the dry signal at 3/16 (Light, Heavy) or 1/4 (Medium).
// Schroeder's arrangement without the allpass stage: at this length and level
// the combs' own density is enough, and the allpass adds nothing a Pocket
// speaker would show.
//
// One sample per ce, with `in` valid alongside it. The work is sequential and
// takes nine clocks of the ~917 available; out_tick marks the clock `out`
// becomes valid, which is what the handover to the audio clock waits for.
// Delay lines in block RAM, 3 x 2048 x 16. All arithmetic is shifts and adds;
// every sum is saturated. Mode 0 passes the input through untouched, with the
// same latency as the other modes, so switching it never clicks.
//
// One departure from the other cores, and it is not a matter of taste. This
// board's mix carries a DC offset -- about +2700 on Phoenix and -2100 on
// Pleiads, of 32767, and MAME's carries the same one, so it is left in the dry
// path. But a feedback comb has a gain of 1/(1-g) at 0 Hz, 2.7x here and 5.3x
// for Heavy, and three of them summed turned Pleiads' -2118 into -6431. That
// put 114,023 samples of a 20 s capture into the rails on Medium -- one in
// eight -- where the dry mix alone has 178. So the send into the combs is
// high-passed at 7.5 Hz and the dry path is not touched: a room has nothing to
// say about 0 Hz, the audible bands measure within 1.5% of the unblocked
// filter on material that does not clip, and the rails count falls to 0 on
// Phoenix and 1,103 on Pleiads.
//
// This is instantiated in phoenix_core and NOT inside phoenix_audio, and that
// is deliberate. The SDC gives every register-to-register path inside
// phoenix_audio eight clocks, which is right for sound generators that have
// hundreds of clocks per sample and wrong for this: the state machine below
// sets a RAM address on one clock and takes the data two clocks later. Inside
// that boundary it would be relaxed along with everything else, meet timing on
// paper, and be free to fail on hardware.

module phoenix_reverb (
    input  logic               clk,
    input  logic               reset,
    input  logic               ce,          // one 48 kHz tick; `in` valid with it
    input  logic        [1:0]  mode,        // 0 off, 1 light, 2 medium, 3 heavy
    input  logic signed [15:0] in,
    output logic signed [15:0] out,         // valid from out_tick until the next one
    output logic               out_tick
);
    localparam logic [10:0] D0 = 11'd1426, D1 = 11'd1781, D2 = 11'd1973;

    logic [10:0] wp;                       // write pointer, common to the three lines
    logic [10:0] ra;
    logic        we;
    logic signed [15:0] wd0, wd1, wd2;
    logic signed [15:0] q0, q1, q2;
    phoenix_delayram #(.AW(11), .DW(16)) u_l0 (.clk(clk), .wa(wp), .we(we), .d(wd0), .ra(ra), .q(q0));
    phoenix_delayram #(.AW(11), .DW(16)) u_l1 (.clk(clk), .wa(wp), .we(we), .d(wd1), .ra(ra), .q(q1));
    phoenix_delayram #(.AW(11), .DW(16)) u_l2 (.clk(clk), .wa(wp), .we(we), .d(wd2), .ra(ra), .q(q2));

    logic signed [15:0] lp0, lp1, lp2;
    logic signed [15:0] x;                 // the input sample being processed
    logic signed [25:0] dc;                // the input's DC, with 10 fractional bits
    logic signed [15:0] send;              // x with that removed: what the room hears
    logic signed [17:0] wet;
    logic signed [15:0] r0, r1, r2;
    logic        [1:0]  mode_q;            // sampled with the input, so a change
                                           // of setting lands on a sample boundary

    // Every extension goes through a declared-signed variable first: a bare
    // concatenation is unsigned in SystemVerilog and would turn the arithmetic
    // shifts below into logical ones (po_reverb's first version pinned its
    // damping states at +32767 that way).
    function automatic logic signed [15:0] sat18(input logic signed [17:0] v);
        sat18 = (v > 18'sd32767) ? 16'sd32767 : (v < -18'sd32768) ? -16'sd32768 : v[15:0];
    endfunction
    function automatic logic signed [17:0] ext18(input logic signed [15:0] v);
        ext18 = 18'(v);                     // sign-extended, signed to signed
    endfunction
    // y += (r - y) / 4, the loop's damping
    function automatic logic signed [15:0] damp(input logic signed [15:0] y, input logic signed [15:0] r);
        logic signed [17:0] d, ys, q;
        ys = ext18(y); d = ext18(r) - ys; q = d >>> 2;
        damp = sat18(ys + q);
    endfunction
    // x + lp * g, what goes back into the line: g = 5/8, or 13/16 for the long tail
    function automatic logic signed [15:0] fb(input logic signed [15:0] xin, input logic signed [15:0] lp, input logic long_tail);
        logic signed [17:0] l, s;
        l = ext18(lp);
        s = long_tail ? ext18(xin) + (l >>> 1) + (l >>> 2) + (l >>> 4)
                      : ext18(xin) + (l >>> 1) + (l >>> 3);
        fb = sat18(s);
    endfunction
    // dry + wet at 3/16 (light; heavy, whose combs ring louder), or 1/4 (medium)
    function automatic logic signed [15:0] mix(input logic signed [15:0] xin, input logic signed [17:0] w, input logic quarter);
        logic signed [17:0] s;
        s = quarter ? ext18(xin) + (w >>> 2) : ext18(xin) + (w >>> 3) + (w >>> 4);
        mix = sat18(s);
    endfunction

    typedef enum logic [3:0] { S_IDLE, S_A0, S_A1, S_A2, S_R0, S_R1, S_R2, S_MIX, S_WR } st_t;
    st_t st;

    always_ff @(posedge clk) begin
        we <= 1'b0;
        out_tick <= 1'b0;
        if (reset) begin
            st <= S_IDLE; wp <= '0; ra <= '0;
            lp0 <= '0; lp1 <= '0; lp2 <= '0;
            out <= '0; x <= '0; wet <= '0;
            r0 <= '0; r1 <= '0; r2 <= '0;
            wd0 <= '0; wd1 <= '0; wd2 <= '0;
            mode_q <= 2'd0; dc <= '0; send <= '0;
        end else begin
            case (st)
                S_IDLE: if (ce) begin x <= in; mode_q <= mode; ra <= wp - D0; st <= S_A0; end
                // each read: the address is set one state before, q is valid
                // two clocks after the address is set
                // dc += (x - dc) / 1024 alongside the first read, then the
                // send is taken from the updated value alongside the second
                S_A0: begin
                    ra <= wp - D1;
                    dc <= dc + 26'(x) - (dc >>> 10);
                    st <= S_A1;
                end
                S_A1: begin
                    r0 <= q0; ra <= wp - D2;                               // q0 = line0[wp-D0]
                    send <= sat18(ext18(x) - 18'(dc >>> 10));
                    st <= S_A2;
                end
                S_A2: begin r1 <= q1; st <= S_R2; end                      // q1 = line1[wp-D1]
                S_R2: begin r2 <= q2; st <= S_R0; end                      // q2 = line2[wp-D2]
                S_R0: begin
                    lp0 <= damp(lp0, r0); lp1 <= damp(lp1, r1); lp2 <= damp(lp2, r2);
                    st <= S_R1;
                end
                S_R1: begin
                    wet <= ext18(lp0) + ext18(lp1) + ext18(lp2);
                    wd0 <= fb(send, lp0, mode_q == 2'd3);
                    wd1 <= fb(send, lp1, mode_q == 2'd3);
                    wd2 <= fb(send, lp2, mode_q == 2'd3);
                    st  <= S_MIX;
                end
                S_MIX: begin
                    case (mode_q)
                        2'd0:    out <= x;                     // off: the dry sample, same latency
                        2'd2:    out <= mix(x, wet, 1'b1);     // medium: 1/4
                        default: out <= mix(x, wet, 1'b0);     // light and heavy: 3/16
                    endcase
                    out_tick <= 1'b1;
                    we <= 1'b1;
                    st <= S_WR;
                end
                S_WR: begin wp <= wp + 11'd1; st <= S_IDLE; end
                default: st <= S_IDLE;
            endcase
        end
    end
endmodule


// A delay line: one write port, one read port, registered read.
module phoenix_delayram #(parameter int AW = 11, parameter int DW = 16) (
    input  logic          clk,
    input  logic [AW-1:0] wa,
    input  logic          we,
    input  logic [DW-1:0] d,
    input  logic [AW-1:0] ra,
    output logic [DW-1:0] q
);
    (* ramstyle = "no_rw_check" *) logic [DW-1:0] mem [0:(1<<AW)-1];
    initial mem = '{default: '0};
    always_ff @(posedge clk) begin
        if (we) mem[wa] <= d;
        q <= mem[ra];
    end
endmodule
