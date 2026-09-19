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
// Each effect ends in a 555 whose control pin is driven, clocking a counter
// that divides it down; the counter's output is what reaches the speaker, so
// that last 555 is modelled by frequency alone against a table of control
// voltage (rtl/phoenix_555_lut.svh) rather than at its capacitor.
//
// Everything *upstream* of that is carried as capacitor voltage, the way
// MAME's dsd_555_astbl carries it. That distinction is not cosmetic. Effect 2
// swings its pitch with two free-running 555s summed onto C22, and the game
// switches C16/C17/C18 under IC44 while it is oscillating -- about ten times a
// second while a bird is on screen. MAME keeps the capacitor voltage across
// the change so the oscillator carries on from wherever it had got to with a
// new time constant; a phase accumulator instead preserves the *fraction* of a
// cycle, which is a different waveform every time the select changes. Carrying
// the capacitor also gets the duty cycle for free: charging is through R1+R2
// and discharging through R2 alone, so the output is high for
// (R1+R2)/(R1+2*R2) of the cycle, never half.
//
// Voltages are in millivolts. The exponential steps are small -- IC51 moves
// 5 parts per million of the way to its rail per tick -- so each one keeps a
// 24-bit residue and only commits whole millivolts. Without that the
// increments truncate to zero and the slow oscillators never start.
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

    // Anti-aliasing by oversampling rather than by computing the fraction of
    // each sample the square spent high.
    //
    // MAME's DISC_OUT_IS_ENERGY is that fraction, and computing it needs a
    // divide by the phase step -- a *variable* divisor, which Quartus builds
    // as a real divider and which took the design from 54 DSP blocks to 81 on
    // a device with 66. Running the oscillators at 4x the output rate and
    // taking a box average instead costs two adders, and at 192 kHz the
    // highest note these effects produce is nowhere near Nyquist.
    localparam int OS     = 4;
    localparam int OSRATE = RATE * OS;
    // 2^32 / 192000, so turning a frequency into phase per tick is a multiply.
    localparam logic [31:0] INV_OSRATE = 32'd22369;

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

    // ------------------------------------------------------- 555 thresholds
    // The internal divider puts the threshold at 2/3 of B+ and the trigger at
    // 1/3. The loaded output level is confirmed on real boards as 4.0 V, not
    // the 3.8 V a default 555 would give.
    localparam logic [12:0] V_TH = 13'd3333;
    localparam logic [12:0] V_TR = 13'd1667;
    localparam logic [12:0] V_CH = 13'd5000;
    localparam logic [12:0] V_HI = 13'd4000;

    // 1 - exp(-dt/tau) in 0.24 at 192 kHz.
    //
    // IC44 charges through R40+R41 = 147k and discharges through R41 = 100k.
    // DISCRETE_COMP_ADDER puts C18 (0.01u) in circuit always and adds C16
    // (0.47u) and C17 (1u) as the two select bits ask, giving 584, 12.2, 5.8
    // and 3.95 Hz.
    localparam logic [23:0] K44_C [0:3] = '{24'd59338, 24'd1238, 24'd589, 24'd402};
    localparam logic [23:0] K44_D [0:3] = '{24'd87154, 24'd1820, 24'd865, 24'd590};
    // IC51: R23 = R24 = 510k with C20, confirmed on real boards as 1uF and not
    // the 10uF in the schematics. 0.943 Hz -- the slow wobble under everything.
    localparam logic [23:0] K51_C = 24'd86;
    localparam logic [23:0] K51_D = 24'd171;
    // C22 is 100uF into R45 || (R46 + R42||Rint), 3052 ohms, so 0.305 s.
    localparam logic [23:0] K22   = 24'd286;

    // Millman weights for the two resistor mixers, in 0.16. Each is
    // sum(V/R) / (sum(1/R) + 1/rF) -- dst_mixer counts the feedback leg in the
    // denominator, and for both of these that leg is the 555's own internal
    // divider. The constant terms are B+ through the upper 5k of that divider.
    localparam logic [15:0] W35_33 = 16'd13159;   // R42 10k
    localparam logic [15:0] W35_34 = 16'd12901;   // R45+R46 10.2k
    localparam logic [12:0] W35_B  = 13'd2008;    // B+ through 5k
    localparam logic [15:0] W38_33 = 16'd10995;   // R42 10k
    localparam logic [15:0] W38_22 = 16'd21558;   // R46 5.1k
    localparam logic [12:0] W38_B  = 13'd1678;    // B+ through 5k

    // --- effect 1 control voltage: the RCDISC4 sweep ------------------------
    // R22=470, R23=100k, R24=33k, C7=6.8u from 12V, as two voltage-divider
    // states with different time constants. Fast when the sweep bit is high
    // (3.137 ms), slow when it is low (168.7 ms) -- that asymmetry is the
    // siren, so pairing each target with the wrong one flattens it.
    localparam logic [12:0] RC4_V0 = 13'd3353;    // sweep bit low
    localparam logic [12:0] RC4_V1 = 13'd553;     // sweep bit high
    localparam logic [23:0] RC4_K0 = 24'd27832;   // goes with RC4_V1, fast
    localparam logic [23:0] RC4_K1 = 24'd518;     // goes with RC4_V0, slow

    // 65536 / ((16 - data) * 2), so the note divider is a multiply.
    logic [15:0] div_recip [0:15];
    initial begin : divtab
        integer d;
        for (d = 0; d < 16; d = d + 1)
            div_recip[d] = 16'(65536 / ((16 - d) * 2));
    end

    // cv_mV * 256/5000, so indexing the frequency table is a multiply.
    localparam logic [15:0] LUT_IDX = 16'd3355;

    // Coupling caps. Each input sees its own resistor in parallel with VR1,
    // and dst_mixer assumes a flat 100k final-stage impedance for C32.
    localparam logic [23:0] HP1_K = 24'd1027;     // (57k||10k) * 10u
    localparam logic [23:0] HP2_K = 24'd1165;     // (30k||10k) * 10u
    localparam logic [23:0] HPO_K = 24'd87;       // 100k * 10u

    // R19+R21 = 57k and R38+R47 = 30k, summed as currents and turned back into
    // a voltage by every leg of the mixer in parallel including VR1, then the
    // netlist's own final gain of 40000. In 0.16, against a level unit of
    // volts * 6553.6.
    localparam logic signed [17:0] G_FX1 = 18'sd27972;
    localparam logic signed [17:0] G_FX2 = 18'sd53147;

    logic [12:0] cv1, ic44_v, ic51_v, c22_v;
    logic        ic44_ff, ic51_ff;
    logic [31:0] cv1_r, ic44_r, ic51_r, c22_r;
    logic [31:0] ph1, ph2;

    logic signed [17:0] snd1, snd2;
    // The coupling caps track non-negative squares, so hp1/hp2 stay positive;
    // hpo tracks the mixed output and can go either way. Every one of these
    // steps is a fraction of a millivolt per tick, so each keeps a 24-bit
    // residue and commits only whole units -- and each is written as two
    // branches with a non-negative difference, so the residue never has to
    // carry a sign.
    logic [15:0]        hp1, hp2;
    logic signed [17:0] hpo;
    logic [31:0]        hp1_r, hp2_r, hpo_r;

    logic [1:0]         os_cnt;
    logic signed [19:0] acc1, acc2;

    /* verilator lint_off BLKSEQ */
    always_ff @(posedge clk) begin
        if (reset) begin
            cv1 = 13'd0; cv1_r = '0;      // dst_rcdisc4 resets the cap empty
            ic44_v = 13'd0; ic44_ff = 1'b1; ic44_r = '0;
            ic51_v = 13'd0; ic51_ff = 1'b1; ic51_r = '0;
            c22_v  = 13'd0; c22_r = '0;   // MAME resets the cap empty
            ph1 = '0; ph2 = '0;
            snd1 = '0; snd2 = '0; acc1 = '0; acc2 = '0; os_cnt = '0;
            hp1 = '0; hp2 = '0; hpo = '0; hp1_r = '0; hp2_r = '0; hpo_r = '0;
            sample = '0; sample_tick = 1'b0;
        end else begin
            sample_tick = 1'b0;
            if (tick) begin
                logic [12:0] tgt, v33, v34, v35, v36, cv2;
                logic [23:0] k;
                logic [15:0] f1, f2;
                logic [7:0]  idx;
                logic [31:0] nfreq, prod;
                logic [3:0]  d1, d2;
                logic [15:0] lvl1, lvl2;
                logic [1:0]  sel;

                // ---- effect 1's sweep ------------------------------------
                tgt = latch_b[4] ? RC4_V1 : RC4_V0;
                k   = latch_b[4] ? RC4_K0 : RC4_K1;
                if (tgt > cv1) begin
                    cv1_r = (cv1_r & 32'h00FF_FFFF) + 32'(tgt - cv1) * 32'(k);
                    cv1   = cv1 + 13'(cv1_r >> 24);
                end else begin
                    cv1_r = (cv1_r & 32'h00FF_FFFF) + 32'(cv1 - tgt) * 32'(k);
                    cv1   = cv1 - 13'(cv1_r >> 24);
                end

                // ---- IC44, whose capacitor the game selects --------------
                sel = latch_a[5:4];
                if (ic44_ff) begin
                    ic44_r = (ic44_r & 32'h00FF_FFFF)
                           + 32'(V_CH - ic44_v) * 32'(K44_C[sel]);
                    ic44_v = ic44_v + 13'(ic44_r >> 24);
                    if (ic44_v >= V_TH) begin ic44_v = V_TH; ic44_ff = 1'b0; end
                end else begin
                    ic44_r = (ic44_r & 32'h00FF_FFFF)
                           + 32'(ic44_v) * 32'(K44_D[sel]);
                    ic44_v = ic44_v - 13'(ic44_r >> 24);
                    if (ic44_v <= V_TR) begin ic44_v = V_TR; ic44_ff = 1'b1; end
                end
                v33 = ic44_ff ? V_HI : 13'd0;

                // ---- IC51, free-running -----------------------------------
                if (ic51_ff) begin
                    ic51_r = (ic51_r & 32'h00FF_FFFF)
                           + 32'(V_CH - ic51_v) * 32'(K51_C);
                    ic51_v = ic51_v + 13'(ic51_r >> 24);
                    if (ic51_v >= V_TH) begin ic51_v = V_TH; ic51_ff = 1'b0; end
                end else begin
                    ic51_r = (ic51_r & 32'h00FF_FFFF)
                           + 32'(ic51_v) * 32'(K51_D);
                    ic51_v = ic51_v - 13'(ic51_r >> 24);
                    if (ic51_v <= V_TR) begin ic51_v = V_TR; ic51_ff = 1'b1; end
                end
                v34 = ic51_ff ? V_HI : 13'd0;

                // ---- both onto C22, then the control voltage --------------
                v35 = 13'(((32'(v33) * 32'(W35_33)
                          + 32'(v34) * 32'(W35_34)) >> 16) + 32'(W35_B));
                v36 = 13'((32'(v34) + 32'(v35)) >> 1);
                if (v36 > c22_v) begin
                    c22_r = (c22_r & 32'h00FF_FFFF) + 32'(v36 - c22_v) * 32'(K22);
                    c22_v = c22_v + 13'(c22_r >> 24);
                end else begin
                    c22_r = (c22_r & 32'h00FF_FFFF) + 32'(c22_v - v36) * 32'(K22);
                    c22_v = c22_v - 13'(c22_r >> 24);
                end
                cv2 = 13'(((32'(v33) * 32'(W38_33)
                          + 32'(c22_v) * 32'(W38_22)) >> 16) + 32'(W38_B));

                // ---- the two note oscillators ----------------------------
                // DISCRETE_NOTE does not count while its preload equals the
                // counter maximum, so data 15 is silence and not the fastest
                // tone. Both effects sit there for most of a game.
                d1 = latch_b[3:0];
                if (d1 == 4'hf) begin
                    lvl1 = 16'd0;
                end else begin
                    prod  = (32'(cv1) * 32'(LUT_IDX)) >> 16;
                    idx   = (prod > 32'd255) ? 8'd255 : 8'(prod);
                    f1    = F555_E1[idx];
                    nfreq = (32'(f1) * 32'(div_recip[d1])) >> 16;
                    ph1   = ph1 + 32'((nfreq * INV_OSRATE));
                    // TTL logic 1 is 3.4 V; the filter switch drops it to
                    // 3.4 * 100k/110k. In volts * 6553.6.
                    lvl1  = ph1[31] ? 16'd0
                                    : (latch_b[5] ? 16'd20265 : 16'd22282);
                end

                d2 = latch_a[3:0];
                if (d2 == 4'hf) begin
                    lvl2 = 16'd0;
                end else begin
                    prod  = (32'(cv2) * 32'(LUT_IDX)) >> 16;
                    idx   = (prod > 32'd255) ? 8'd255 : 8'(prod);
                    f2    = F555_E2[idx];
                    nfreq = (32'(f2) * 32'(div_recip[d2])) >> 16;
                    ph2   = ph2 + 32'((nfreq * INV_OSRATE));
                    // DISCRETE_SWITCH is `SWITCH ? IN1 : IN0` and the netlist
                    // passes IN0 = TTL_1, IN1 = TTL_1/2, so the high select bit
                    // makes this *quieter*. The other way round doubles the
                    // level over exactly the stretch where the game sits on
                    // 0x66 and effect 2 is the loudest thing in the mix.
                    lvl2  = ph2[31] ? 16'd0
                                    : (latch_a[5] ? 16'd11141 : 16'd22282);
                end

                acc1 = acc1 + $signed({4'd0, lvl1});
                acc2 = acc2 + $signed({4'd0, lvl2});
                os_cnt = os_cnt + 2'd1;

                if (os_cnt == 2'd0) begin
                    logic signed [17:0] a1, a2, mix18;
                    logic signed [35:0] mixed;
                    snd1 = 18'(acc1 >>> 2);
                    snd2 = 18'(acc2 >>> 2);
                    acc1 = '0; acc2 = '0;

                    // Each input is AC-coupled by its own 10uF cap, so the DC
                    // the squares carry never reaches the mixer, and C32
                    // blocks what is left of it at the output.
                    if (16'(snd1) > hp1) begin
                        hp1_r = (hp1_r & 32'h00FF_FFFF)
                              + 32'(16'(snd1) - hp1) * 32'(HP1_K);
                        hp1   = hp1 + 16'(hp1_r >> 24);
                    end else begin
                        hp1_r = (hp1_r & 32'h00FF_FFFF)
                              + 32'(hp1 - 16'(snd1)) * 32'(HP1_K);
                        hp1   = hp1 - 16'(hp1_r >> 24);
                    end
                    if (16'(snd2) > hp2) begin
                        hp2_r = (hp2_r & 32'h00FF_FFFF)
                              + 32'(16'(snd2) - hp2) * 32'(HP2_K);
                        hp2   = hp2 + 16'(hp2_r >> 24);
                    end else begin
                        hp2_r = (hp2_r & 32'h00FF_FFFF)
                              + 32'(hp2 - 16'(snd2)) * 32'(HP2_K);
                        hp2   = hp2 - 16'(hp2_r >> 24);
                    end
                    a1 = snd1 - 18'($signed({2'd0, hp1}));
                    a2 = snd2 - 18'($signed({2'd0, hp2}));

                    mixed = ((a1 * G_FX1) + (a2 * G_FX2)) >>> 16;
                    mix18 = 18'(mixed);
                    if (mix18 > hpo) begin
                        hpo_r = (hpo_r & 32'h00FF_FFFF)
                              + 32'(mix18 - hpo) * 32'(HPO_K);
                        hpo   = hpo + 18'($signed({14'd0, hpo_r[31:24]}));
                    end else begin
                        hpo_r = (hpo_r & 32'h00FF_FFFF)
                              + 32'(hpo - mix18) * 32'(HPO_K);
                        hpo   = hpo - 18'($signed({14'd0, hpo_r[31:24]}));
                    end
                    sample = mix18 - hpo;
                    sample_tick = 1'b1;
                end
            end
        end
    end
    /* verilator lint_on BLKSEQ */
endmodule
