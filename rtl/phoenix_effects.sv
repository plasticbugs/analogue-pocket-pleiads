// Phoenix's discrete effect generators.
//
// The board has two, driven by the low bits of the two sound latches:
//
//   effect 1  the shield, the bird explosion, the level 3-4 sirens, the
//             level 5 spaceship. Latch B bits 0-3 are its pitch, bit 4 sweeps
//             it and bit 5 switches a filter in.
//   effect 2  the bird flying and the various hits. Latch A bits 0-3 are its
//             pitch and bits 4-5 pick one of three capacitors, which sets both
//             its rate and its level.
//
// MAME models these as a circuit: two 555s per effect integrated at the
// capacitor, with the edges resolved to sub-sample precision. Every 555 here
// is a *clock* whose divided output is what reaches the speaker, so this works
// in frequency instead -- a lookup against control voltage
// (rtl/phoenix_555_lut.svh) and a phase accumulator. The capacitor waveform is
// never heard.
//
// The one thing that must not be simplified is the counter's OFF state.
// MAME's DISCRETE_NOTE does not count at all while its preload equals the
// counter maximum -- "if (DSS_NOTE__DATA != DSS_NOTE__MAX1)" -- so data 15 is
// silence, not the fastest tone. Both effects sit at 15 for most of a game.
// Running the counter anyway measured as 128x too much energy above 4 kHz.

module phoenix_effects #(
    parameter int CLK_HZ = 44_000_000,
    parameter int RATE   = 48_000
) (
    input  logic        clk,
    input  logic        reset,

    input  logic [7:0]  latch_a,          // bits 0-3 data, 4-5 frequency select
    input  logic [7:0]  latch_b,          // bits 0-3 data, 4 sweep, 5 filter

    output logic signed [17:0] sample,
    output logic               sample_tick
);
    `include "phoenix_555_lut.svh"

    logic [26:0] acc;
    logic        tick;                 // 192 kHz
    always_ff @(posedge clk) begin
        if (reset) begin acc <= '0; tick <= 1'b0; end
        else begin
            tick <= 1'b0;
            if (acc + OSRATE >= CLK_HZ) begin acc <= acc + OSRATE - CLK_HZ; tick <= 1'b1; end
            else                              acc <= acc + OSRATE;
        end
    end

    // --- effect 1 control voltage: the RCDISC4 sweep ------------------------
    // R22=470, R23=100k, R24=33k, C7=6.8u from 12V, as two voltage-divider
    // states with different time constants. Fast when the sweep bit is high
    // (3.1 ms), slow when it is low (169 ms) -- that asymmetry is the siren.
    // Levels and coefficients in 0.16 of full scale, where full scale is 5 V.
    localparam logic [15:0] RC4_V0 = 16'd10992;   // 3.353 V
    localparam logic [15:0] RC4_V1 = 16'd1812;    // 0.553 V
    // 1 - exp(-dt/tau) in 0.16: tau = 3.137 ms and 168.7 ms at 48 kHz
    localparam logic [15:0] RC4_K0 = 16'd8;
    localparam logic [15:0] RC4_K1 = 16'd413;

    logic [15:0] cv1;
    logic [31:0] ph34;       // IC51, the ~1 Hz wobble -- needs the full width,
                             // at 16 bits its increment rounds to 1 and the
                             // rate comes out 23% low
    logic [15:0] c22;        // the 100uF line under effect 2
    logic [31:0] ph1, ph2, ph33;

    // IC51: 510k/510k/1uF -> 0.943 Hz. In 0.32 phase per sample at 48 kHz.
    localparam logic [31:0] INC34 = 32'd84340;
    // C22 = 100uF into about 3.4k -> 0.34 s; 1 - exp(-dt/tau) in 0.16
    localparam logic [15:0] C22_K = 16'd4;

    // 2^32 / 48000, so dividing a frequency by the sample rate is a multiply.
    // 65536 / ((16 - data) * 2), so the note divider is a multiply.
    logic [15:0] div_recip [0:15];
    initial begin : divtab
        integer d;
        for (d = 0; d < 16; d = d + 1)
            div_recip[d] = 16'(65536 / ((16 - d) * 2));
    end

    // Anti-aliasing by oversampling rather than by computing the fraction of
    // each sample the square spent high.
    //
    // MAME's DISC_OUT_IS_ENERGY is that fraction, and computing it needs a
    // divide by the phase step -- a *variable* divisor, which Quartus builds
    // as a real divider and which took the design from 54 DSP blocks to 81 on
    // a device with 66. Running the oscillators at 4x the output rate and
    // taking a box average instead costs two adders, and at 192 kHz the
    // highest note these effects produce is nowhere near Nyquist.
    localparam int OS    = 4;
    localparam int OSRATE = RATE * OS;
    // 2^32 / 192000, so turning a frequency into phase per tick is a multiply.
    localparam logic [31:0] INV_OSRATE = 32'd22369;

    logic signed [17:0] snd1, snd2;

    logic [1:0]         os_cnt;
    logic signed [19:0] acc1, acc2;

    /* verilator lint_off BLKSEQ */
    always_ff @(posedge clk) begin
        if (reset) begin
            cv1 = RC4_V0; ph34 = '0; c22 = 16'd32768;
            ph1 = '0; ph2 = '0; ph33 = '0;
            snd1 = '0; snd2 = '0; acc1 = '0; acc2 = '0; os_cnt = '0;
            sample = '0; sample_tick = 1'b0;
        end else begin
            sample_tick = 1'b0;
            if (tick) begin
                logic [15:0] tgt, k, f1, f2, cv2;
                logic [31:0] nfreq;
                logic [5:0]  idx;
                logic [3:0]  d1, d2;
                logic [15:0] lvl1, lvl2;

                // ---- effect 1's sweep ------------------------------------
                tgt = latch_b[4] ? RC4_V1 : RC4_V0;
                k   = latch_b[4] ? RC4_K0 : RC4_K1;
                if (tgt > cv1) cv1 = cv1 + 16'((32'(tgt - cv1) * 32'(k)) >> 16);
                else           cv1 = cv1 - 16'((32'(cv1 - tgt) * 32'(k)) >> 16);

                // ---- effect 2's control voltage --------------------------
                ph33 = ph33 + INC34;
                ph34 = ph34 + INC34;
                if (ph34[31]) begin
                    if (c22 < 16'd52428)
                        c22 = c22 + 16'((32'(16'd52428 - c22) * 32'(C22_K)) >> 16);
                end else begin
                    if (c22 > 16'd13107)
                        c22 = c22 - 16'((32'(c22 - 16'd13107) * 32'(C22_K)) >> 16);
                end
                cv2 = 16'((32'(c22) + 32'd32768) >> 1);

                // ---- the two note oscillators ----------------------------
                // DISCRETE_NOTE does not count while its preload equals the
                // counter maximum, so data 15 is silence and not the fastest
                // tone. Both effects sit there for most of a game.
                d1 = latch_b[3:0];
                if (d1 == 4'hf) begin
                    lvl1 = 16'd0;
                end else begin
                    idx   = cv1[15:10];
                    f1    = F555_E1[idx];
                    nfreq = (32'(f1) * 32'(div_recip[d1])) >> 16;
                    ph1   = ph1 + 32'((nfreq * INV_OSRATE));
                    // TTL logic 1 is 3.4 V; the filter switch drops it to
                    // 3.4 * 100k/110k. In 0.16 of a 5 V full scale.
                    lvl1  = ph1[31] ? 16'd0
                                    : (latch_b[5] ? 16'd20265 : 16'd22282);
                end

                d2 = latch_a[3:0];
                if (d2 == 4'hf) begin
                    lvl2 = 16'd0;
                end else begin
                    idx   = cv2[15:10];
                    f2    = F555_E2[idx];
                    nfreq = (32'(f2) * 32'(div_recip[d2])) >> 16;
                    ph2   = ph2 + 32'((nfreq * INV_OSRATE));
                    // The frequency select's high bit halves the level.
                    lvl2  = ph2[31] ? 16'd0
                                    : (latch_a[5] ? 16'd22282 : 16'd11141);
                end

                acc1 = acc1 + $signed({4'd0, lvl1});
                acc2 = acc2 + $signed({4'd0, lvl2});
                os_cnt = os_cnt + 2'd1;

                if (os_cnt == 2'd0) begin
                    snd1 = 18'(acc1 >>> 2);
                    snd2 = 18'(acc2 >>> 2);
                    acc1 = '0; acc2 = '0;
                    // R19+R21 = 57k and R38+R47 = 30k into a 10k feedback,
                    // then the level calibrated against MAME by spectral fit
                    // -- see docs/measurements.md.
                    sample = 18'(((snd1 * 18'sd2874) + (snd2 * 18'sd5461)) >>> 16);
                    sample_tick = 1'b1;
                end
            end
        end
    end
    /* verilator lint_on BLKSEQ */
endmodule
