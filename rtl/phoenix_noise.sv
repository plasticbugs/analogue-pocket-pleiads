// Phoenix's custom sound board.
//
// Unlike Pleiads', this one makes *only* noise -- the melody is the MM6221AA
// and the effects are a separate discrete netlist. Two RC envelopes on sound
// latch A set the noise's rate and level, and a 4006 shift register makes the
// noise itself.
//
//   bit 6 low  charges C24 through R51+R49 (1.33k), high discharges it
//              through R52 (20k). Note the inversion: the board uses
//              VMAX - C24, so a *low* bit is a *high* level.
//   bit 7 high charges C25 through R50+R53 (1.33k), low discharges it
//              through R54 (47k).
//
// The two levels are averaged to set the noise clock between 588 Hz and
// 6913 Hz -- an NE555 whose timing resistor is shunted by a transistor the
// envelope drives. One output is gated by the raw polynomial bit and the
// other by a 400 Hz low-passed copy of it, which is MAME's stand-in for the
// filter on that half of the circuit.
//
// Same arithmetic as rtl/pleiads_sound.sv: constant divisions are multiplies
// by reciprocals that tools/gen_recip.py proves exact over the operand's real
// range, because a real divider costs about 670 logic elements here.

module phoenix_noise #(
    parameter int CLK_HZ = 44_000_000,
    parameter int RATE   = 48_000
) (
    input  logic        clk,
    input  logic        reset,
    input  logic [7:0]  latch_a,

    output logic [16:0] sample,      // 0..65534, unipolar as MAME's is
    output logic        sample_tick
);
    localparam int VMAX = 32767;

    // 1/(R*C) in 12.12 fixed point, from the time constant in microseconds.
    // 64-bit literals: 4096 * 1000000 does not fit in the 32-bit signed
    // integer a bare expression defaults to.
    `define NRECIP(us) int'((64'd4096 * 64'd1000000) / 64'd``us)

    // C24 = C25 = 6.8uF.
    localparam int KC24_C = `NRECIP(9044);    // (330+1000) * 6.8u = 9.044 ms
    localparam int KC24_D = `NRECIP(136000);  //        20000 * 6.8u = 136 ms
    localparam int KC25_C = `NRECIP(9044);    // (1000+330) * 6.8u = 9.044 ms
    localparam int KC25_D = `NRECIP(319600);  //        47000 * 6.8u = 319.6 ms

    localparam int RATE_S = 41, RATE_M = 45812985;   // /48000, exact for x < 2^26

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

    function automatic logic [25:0] div_rate(input logic [25:0] x);
        logic [51:0] t;
        begin
            t = x * 26'(RATE_M);
            div_rate = t[51:RATE_S];
        end
    endfunction

    // One envelope step; returns {counter, level} packed. An `inout` task
    // silently drops its results here, so the result is returned explicitly.
    function automatic logic [47:0] rc_step(
            input logic [15:0] level, input logic signed [31:0] counter,
            input logic charging, input int k_charge, input int k_discharge);
        logic [15:0]        delta;
        logic [39:0]        prod;
        logic [39:0]        rate_val;
        logic [31:0]        n;
        logic [15:0]        l;
        logic signed [31:0] c;
        begin
            l = level; c = counter;
            if (charging) begin
                if (l < 16'(VMAX)) begin
                    delta    = 16'(VMAX) - l;
                    // The product needs a wide home before the shift: in
                    // (a * b) >> s the multiply's width is max(width(a),
                    // width(b)), so writing it inline truncates it.
                    prod     = delta * 24'(k_charge);
                    rate_val = prod >> 12;
                    c = c - $signed(rate_val[31:0]);
                    if (c <= 0) begin
                        n = 32'(div_rate(26'(-c))) + 32'd1;
                        c = c + $signed(n * RATE);
                        l = ({16'd0, l} + n > 32'(VMAX)) ? 16'(VMAX) : l + n[15:0];
                    end
                end
            end else begin
                if (l > 16'd0) begin
                    delta    = l;
                    prod     = delta * 24'(k_discharge);
                    rate_val = prod >> 12;
                    c = c - $signed(rate_val[31:0]);
                    if (c <= 0) begin
                        n = 32'(div_rate(26'(-c))) + 32'd1;
                        c = c + $signed(n * RATE);
                        l = ({16'd0, l} < n) ? 16'd0 : l - n[15:0];
                    end
                end
            end
            rc_step = {c, l};
        end
    endfunction

    logic [15:0]        c24_lvl, c25_lvl;
    logic signed [31:0] c24_ctr, c25_ctr;
    logic signed [31:0] noise_ctr, lp_ctr;
    logic [17:0]        lfsr;
    logic               polybit, lp_polybit;

    /* verilator lint_off BLKSEQ */
    always_ff @(posedge clk) begin
        if (reset) begin
            c24_lvl = '0; c25_lvl = '0; c24_ctr = '0; c25_ctr = '0;
            noise_ctr = '0; lp_ctr = '0; lfsr = '0;
            polybit = 1'b0; lp_polybit = 1'b0;
            sample = '0; sample_tick = 1'b0;
        end else begin
            sample_tick = 1'b0;
            if (tick) begin
                logic [15:0] vc24, vc25, level;
                logic [15:0] freq;
                logic [31:0] n;
                logic [16:0] total;

                {c24_ctr, c24_lvl} = rc_step(c24_lvl, c24_ctr, ~latch_a[6],
                                             KC24_C, KC24_D);
                vc24 = 16'(VMAX) - c24_lvl;
                {c25_ctr, c25_lvl} = rc_step(c25_lvl, c25_ctr, latch_a[7],
                                             KC25_C, KC25_D);
                vc25 = c25_lvl;

                // The mean of the two, which is what drives the transistor
                // setting the 555's rate.
                level = (vc24 < vc25) ? (vc24 + ((vc25 - vc24) >> 1))
                                      : (vc25 + ((vc24 - vc25) >> 1));
                // 588 + 6325 * level / 32768
                freq = 16'd588 + 16'((32'd6325 * 32'(level)) >> 15);

                noise_ctr = noise_ctr - $signed({16'd0, freq});
                if (noise_ctr <= 0) begin
                    n = 32'(div_rate(26'(-noise_ctr))) + 32'd1;
                    noise_ctr = noise_ctr + $signed(n * RATE);
                    // The 4006 itself rather than MAME's precomputed table:
                    // output is the register's LSB *before* the shift, and the
                    // feedback is 1 when bits 16 and 17 agree.
                    for (int j = 0; j < 4; j++) begin
                        if (32'(j) < n) begin
                            polybit = lfsr[0];
                            lfsr    = {lfsr[16:0], ~(lfsr[16] ^ lfsr[17])};
                        end
                    end
                end

                total = 17'd0;
                if (!polybit) total = total + {1'b0, vc24};

                lp_ctr = lp_ctr - 32'sd400;
                if (lp_ctr <= 0) begin
                    lp_ctr = lp_ctr + $signed(32'(RATE));
                    lp_polybit = polybit;
                end
                if (!lp_polybit) total = total + {1'b0, vc25};

                sample      = total;
                sample_tick = 1'b1;
            end
        end
    end
    /* verilator lint_on BLKSEQ */
endmodule
