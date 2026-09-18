// Pleiads' analogue effects board, as MAME models it.
//
// Four 556-timer tones, a noise source built on a 4006 shift register, and
// five RC envelope followers, driven by three control latches. MAME's model is
// behavioural -- its author's comments mark most component values unknown
// (`10u??`, `330K??`) -- so matching MAME is the achievable target and matching
// the 1981 board is not. docs/measurements.md says what that means for how
// this is checked.
//
// The body of the per-sample block uses **blocking** assignments throughout,
// deliberately. MAME's model is sequential imperative code in which later
// statements read what earlier ones just wrote; blocking assignment inside one
// always_ff reproduces that statement for statement, which is exactly what is
// wanted when the C is the specification. Every variable here is written in
// this block and nowhere else, so it synthesises as ordinary registers.
//
// MAME's arithmetic is integer except for the charge and discharge time
// constants, which are compile-time doubles used as divisors. Each becomes a
// 12-bit fixed-point reciprocal computed at elaboration, so
// `(VMAX - level) / charge_time` is a multiply and a shift. Worst-case
// relative error is under 0.03%, against a model whose component values are
// guesses to begin with.
//
// Several of MAME's quirks are reproduced on purpose and marked where they
// appear. They change the sound, and the sound is what we are matching.

module pleiads_sound #(
    parameter int CLK_HZ = 44_000_000,
    parameter int RATE   = 48_000        // MAME's machine sample rate
) (
    input  logic        clk,
    input  logic        reset,

    input  logic [7:0]  latch_a,
    input  logic [7:0]  latch_b,
    input  logic [7:0]  latch_c,

    output logic signed [17:0] sample,
    output logic               sample_tick,
    output logic [15:0]        dbg_pb4,
    output logic               dbg_t1,
    output logic               dbg_t4,
    output logic               dbg_poly,
    output logic [15:0]        dbg_pa6,
    output logic [15:0]        dbg_pc5,
    output logic [15:0]        dbg_pa5
);
    assign dbg_pb4  = pb4_lvl;
    assign dbg_t1   = t1_out;
    assign dbg_t4   = t4_out;
    assign dbg_poly = polybit;
    assign dbg_pa6  = pa6_lvl;
    assign dbg_pc5  = pc5_lvl;
    assign dbg_pa5  = pa5_lvl;
    localparam int VMAX    = 32767;
    localparam int PC4_MIN = (VMAX * 7) / 50;
    localparam int TONE1_CLOCK = 8000;

    // 1/time as 12.12 fixed point, from the time constant in microseconds so
    // the elaboration arithmetic stays in integers.
    //
    // The 64-bit literals are load-bearing. Written as `(4096 * 1000000) / us`
    // the numerator is 4 096 000 000, which does not fit in the 32-bit signed
    // integer a bare literal expression defaults to; it wraps negative and
    // every time constant comes out wrong. Nothing warns. The symptom was that
    // PB4 never charged, tones 2 and 3 never swept, and the effects board sat
    // at a constant -16383 -- which reads as a dead module, not as arithmetic.
    `define KRECIP(us) int'((64'd4096 * 64'd1000000) / 64'd``us)

    localparam int KA5_C = `KRECIP(3300000);   // 3.3 s
    localparam int KA5_D = `KRECIP(2200000);   // 2.2 s
    localparam int KA6_C = `KRECIP(726);       // 0.000726 s
    localparam int KA6_D = `KRECIP(100000);    // the poly-gated path's hard-coded 0.1 s
    localparam int KB4_C = `KRECIP(100000);    // 0.1 s
    localparam int KB4_D = `KRECIP(100000);
    localparam int KC4_C = `KRECIP(66000);     // 0.066 s
    localparam int KC4_D = `KRECIP(22000);     // 0.022 s
    localparam int KC5_C = `KRECIP(3300);      // 0.0033 s
    localparam int KC5_D = `KRECIP(100000);    // 0.1 s

    localparam int T2_MAX = 351, T3_MAX = 582, T4_MAX = 1315;
    localparam int NOISE_FREQ = 1412;
    localparam int PA5_R = 33, PC5_R = 47, POLY_R = 47, OPAMP_R = 20;

    // ------------------------------------------------------------ sample rate
    logic [26:0] acc;
    logic        tick;
    always_ff @(posedge clk) begin
        if (reset) begin acc <= '0; tick <= 1'b0; end
        else begin
            tick <= 1'b0;
            if (acc + RATE >= CLK_HZ) begin acc <= acc + RATE - CLK_HZ; tick <= 1'b1; end
            else                            acc <= acc + RATE;
        end
    end

    // ------------------------------------------------------------------ state
    logic signed [31:0] t1_ctr, t2_ctr, t3_ctr, t4_ctr, noise_ctr;
    logic [3:0]         t1_div;
    logic               t1_out, t2_out, t3_out, t4_out;
    logic [15:0]        pa5_lvl, pa6_lvl, pb4_lvl, pc4_lvl, pc5_lvl;
    logic signed [31:0] pa5_ctr, pa6_ctr, pb4_ctr, pc4_ctr, pc5_ctr;
    logic [17:0]        lfsr;
    logic               polybit;

    // One envelope step. Returns {counter, level} packed, rather than writing
    // them through `inout` arguments: a task with inout arguments looked
    // right, linted clean, and silently never wrote its results back, so PB4
    // never charged and tones 2 and 3 never swept. An explicit return leaves
    // nothing to interpret.
    //
    // `n_on_discharge` picks between adding n*rate and adding rate on the way
    // down, because MAME does both: PB4 and PC4 add n*rate, PC5 and PA5 add
    // only rate.
    function automatic logic [47:0] rc_step(
            input logic [15:0] level, input logic signed [31:0] counter,
            input logic charging, input logic [15:0] floor_lvl,
            input int k_charge, input int k_discharge, input logic n_on_discharge);
        logic [47:0]        rate_val;
        logic [31:0]        n;
        logic [15:0]        l;
        logic signed [31:0] c;
        begin
            l = level; c = counter;
            if (charging) begin
                if (l < 16'(VMAX)) begin
                    rate_val = (48'(16'(VMAX) - l) * 48'(k_charge)) >> 12;
                    c = c - $signed(rate_val[31:0]);
                    if (c <= 0) begin
                        n = (32'(-c) / RATE) + 32'd1;
                        c = c + $signed(n * RATE);
                        l = ({16'd0, l} + n > 32'(VMAX)) ? 16'(VMAX) : l + n[15:0];
                    end
                end
            end else begin
                if (l > floor_lvl) begin
                    rate_val = (48'(l - floor_lvl) * 48'(k_discharge)) >> 12;
                    c = c - $signed(rate_val[31:0]);
                    if (c <= 0) begin
                        n = (32'(-c) / RATE) + 32'd1;
                        c = c + $signed(n_on_discharge ? (n * RATE) : 32'(RATE));
                        l = ({16'd0, l} < {16'd0, floor_lvl} + n) ? floor_lvl : l - n[15:0];
                    end
                end
            end
            rc_step = {c, l};
        end
    endfunction

    /* verilator lint_off BLKSEQ */
    always_ff @(posedge clk) begin
        // Blocking throughout, including reset. Every variable in this block is
        // written here and nowhere else, so this is a single sequential
        // process and blocking assignment reproduces MAME's C statement for
        // statement -- which is the whole point.
        //
        // Mixing the two styles is what broke it the first time: the reset
        // branch used `<=` while the envelope task wrote its inout arguments
        // with `=`. The charge on PB4 then never took, tones 2 and 3 never
        // swept, and the effects board sat at a large negative DC. Verilator's
        // BLKANDNBLK check does not see it, because the blocking half happens
        // inside a task.
        if (reset) begin
            t1_ctr = '0; t2_ctr = '0; t3_ctr = '0; t4_ctr = '0; noise_ctr = '0;
            t1_div = '0; t1_out = 1'b0; t2_out = 1'b0; t3_out = 1'b0; t4_out = 1'b0;
            pa5_lvl = '0; pa6_lvl = '0; pb4_lvl = '0;
            pc4_lvl = 16'(PC4_MIN); pc5_lvl = '0;
            pa5_ctr = '0; pa6_ctr = '0; pb4_ctr = '0; pc4_ctr = '0; pc5_ctr = '0;
            lfsr = '0; polybit = 1'b0;
            sample = '0; sample_tick = 1'b0;
        end else begin
            sample_tick = 1'b0;
            if (tick) begin
                logic signed [17:0] s_t1, s_t23, s_t4, s_noise;
                logic [15:0]        lvl23, lvl4;
                logic [31:0]        n, step;
                logic signed [31:0] c;

                // ---- tone 1: a fixed 8 kHz clock divided by 1..15 ----------
                if (latch_a[3:0] != 4'hf) begin
                    t1_ctr = t1_ctr - TONE1_CLOCK;
                    // One step at most: the divider's clock is well below the
                    // sample rate. A data-dependent loop here would not
                    // synthesise and would not bound in simulation either.
                    if (t1_ctr <= 0) begin
                        t1_ctr = t1_ctr + RATE;
                        t1_div = t1_div + 4'd1;
                        // MAME counts up to 16 and reloads from the latch.
                        if (t1_div == 4'd0) begin
                            t1_div = latch_a[3:0];
                            t1_out = ~t1_out;
                        end
                    end
                end
                s_t1 = t1_out ? 18'sd32767 : -18'sd32767;

                // ---- tones 2 and 3: the upper 556, swept by PB4 ------------
                {pb4_ctr, pb4_lvl} = rc_step(pb4_lvl, pb4_ctr, latch_b[4],
                                             16'd0, KB4_C, KB4_D, 1'b1);
                lvl23 = 16'(VMAX) - pb4_lvl;

                if (latch_b[5] && lvl23 < 16'(VMAX)) begin
                    t2_ctr = t2_ctr - $signed(32'((T2_MAX * 32'(lvl23)) / 32768));
                    if (t2_ctr <= 0) begin
                        n = (32'(-t2_ctr) / RATE) + 32'd1;
                        t2_ctr = t2_ctr + $signed(n * RATE);
                        t2_out = t2_out ^ n[0];
                    end
                    // MAME divides by 33768 here, not 32768, and takes its step
                    // count from tone2's counter rather than tone3's. Both look
                    // like slips; both are what we are matching.
                    step = 32'(T3_MAX / 3) + (32'(T3_MAX * 2 / 3) * 32'(lvl23)) / 33768;
                    t3_ctr = t3_ctr - $signed(step);
                    if (t3_ctr <= 0) begin
                        n = (32'(-t2_ctr) / RATE) + 32'd1;
                        t3_ctr = t3_ctr + RATE;
                        t3_out = t3_out ^ n[0];
                    end
                end
                s_t23 = latch_b[5]
                      ? (((t2_out ? 18'sd32767 : -18'sd32767)
                        + (t3_out ? 18'sd32767 : -18'sd32767)) / 18'sd2)
                      : 18'sd0;

                // ---- tone 4: the lower 556, gated by the polynomial bit ----
                {pc4_ctr, pc4_lvl} = rc_step(pc4_lvl, pc4_ctr, latch_c[4],
                                             16'(PC4_MIN), KC4_C, KC4_D, 1'b1);
                {pc5_ctr, pc5_lvl} = rc_step(pc5_lvl, pc5_ctr, latch_c[5],
                                             16'd0, KC5_C, KC5_D, 1'b0);
                {pa5_ctr, pa5_lvl} = rc_step(pa5_lvl, pa5_ctr, latch_a[5],
                                             16'd0, KA5_C, KA5_D, 1'b0);

                // Two resistors divide the op-amp output between 0 V and the
                // level, or the level and 5 V, depending on the noise bit.
                lvl4 = polybit
                     ? pc4_lvl + 16'((32'(16'(VMAX) - pc4_lvl) * OPAMP_R) / (OPAMP_R + POLY_R))
                     : 16'((32'(pc4_lvl) * POLY_R) / (OPAMP_R + POLY_R));

                t4_ctr = t4_ctr - $signed(32'((T4_MAX * 32'(lvl4)) / 32768));
                if (t4_ctr <= 0) begin
                    n = (32'(-t4_ctr) / RATE) + 32'd1;
                    t4_ctr = t4_ctr + $signed(n * RATE);
                    t4_out = t4_out ^ n[0];
                end
                s_t4 = 18'((32'(pc5_lvl) * PA5_R) / (PA5_R + PC5_R)
                         + (32'(pa5_lvl) * PC5_R) / (PA5_R + PC5_R));
                if (!t4_out) s_t4 = -s_t4;

                // ---- noise: the 4006 shift register ------------------------
                // PA6 charges on latch A bit 6 and only discharges while the
                // polynomial bit is high, with a hard-coded constant rather
                // than the one in its own struct.
                if (latch_a[6]) begin
                    {pa6_ctr, pa6_lvl} = rc_step(pa6_lvl, pa6_ctr, 1'b1,
                                                 16'd0, KA6_C, KA6_D, 1'b1);
                end else if (polybit) begin
                    {pa6_ctr, pa6_lvl} = rc_step(pa6_lvl, pa6_ctr, 1'b0,
                                                 16'd0, KA6_C, KA6_D, 1'b1);
                end

                noise_ctr = noise_ctr - $signed(32'(latch_a[4] ? (NOISE_FREQ * 2 / 3)
                                                               : (NOISE_FREQ * 1 / 3)));
                if (noise_ctr <= 0) begin
                    n = (32'(-noise_ctr) / RATE) + 32'd1;
                    noise_ctr = noise_ctr + $signed(n * RATE);
                    // MAME precomputes the sequence into a table and indexes
                    // it; clocking the register itself gives the same bits and
                    // costs eighteen flops instead of 32 KB. The output bit is
                    // the register's LSB *before* the shift, and the feedback
                    // is 1 when bits 16 and 17 agree.
                    for (int j = 0; j < 4; j++) begin
                        if (32'(j) < n) begin
                            polybit = lfsr[0];
                            lfsr    = {lfsr[16:0], ~(lfsr[16] ^ lfsr[17])};
                        end
                    end
                end

                s_noise = polybit ? 18'(pa6_lvl) : -18'(pa6_lvl);
                if (latch_a[7]) s_noise = polybit ? (s_noise + 18'sd32767)
                                                  : (s_noise - 18'sd32767);
                s_noise = s_noise / 18'sd2;

                sample      = (s_t1 / 18'sd2) + (s_t23 / 18'sd2) + s_t4 + s_noise;
                sample_tick = 1'b1;
            end
        end
    end
    /* verilator lint_on BLKSEQ */
endmodule
