// The board's audio section: the melody chip, the effects board, the mixer,
// and the handover to the platform's audio clock.
//
// The two sound sources run at different rates -- the melody chip at its own
// 15808 Hz, the effects board at 48 kHz -- so the melody is interpolated up
// rather than held. Holding it measured 44% too much energy above 4 kHz
// against MAME, which resamples with a filter; interpolating lands at 76% of
// it, closer, and costs one multiply.
//
// The clock-domain crossing is here and is deliberate. METHODOLOGY 5.4 is
// about exactly this: a multi-bit audio sample handed between clock domains
// without a handshake can be latched half-old and half-new, and a torn 16-bit
// sample is not a small error -- one flipped high bit throws the value across
// the range, heard as clicks and static. It defeats every measurement because
// both sides are individually correct. So the sample is held stable and handed
// over with a toggle flag that the receiving side synchronises, from the
// start, rather than retrofitted after the noise shows up on hardware.

module phoenix_audio #(
    parameter int CLK_HZ = 44_000_000,
    parameter int RATE   = 48_000
) (
    input  logic        clk,            // core clock
    input  logic        reset,

    input  logic        is_phoenix,
    input  logic [7:0]  snd_a,
    input  logic [7:0]  snd_b,
    input  logic [7:0]  snd_c,

    // Core-domain output, for benches and for anything staying in this domain.
    output logic signed [15:0] sample,
    output logic               sample_tick,

    // Handover to the platform's audio clock.
    input  logic        clk_audio,
    output logic signed [15:0] audio_out,

    // Observation only.
    output logic [15:0] dbg_tms,
    output logic signed [17:0] dbg_fx,
    output logic [15:0] dbg_freq0,
    output logic [15:0] dbg_vol0,
    output logic [15:0] dbg_pb4,
    output logic        dbg_notes,
    output logic        dbg_poly,
    output logic [15:0] dbg_pa6,
    output logic [15:0] dbg_pc5,
    output logic [15:0] dbg_pa5
);
    assign dbg_tms = tms_sample;
    assign dbg_fx  = fx_sample;
    // ------------------------------------------------------------- melody chip
    // Pleiads' TMS3615 has decays 0.33, 0.33, 0, 0.33, 0, 0.33 -- so
    // 32767/0.33 = 99293 on voices 0, 1, 3 and 5.
    logic [15:0] tms_sample;
    logic        tms_tick;
    logic [7:0]  tms_phase;
    logic        note_we;
    logic [1:0]  note_octave;
    logic [3:0]  note_value;

    tms36xx #(
        .CLK_HZ(CLK_HZ), .TMS_CLK(247),
        .DECAY0(99293), .DECAY1(99293), .DECAY2(0),
        .DECAY3(99293), .DECAY4(0),     .DECAY5(99293)
    ) u_tms (
        .clk(clk), .reset(reset),
        .note_we(note_we), .note_octave(note_octave), .note_value(note_value),
        .sample(tms_sample), .sample_tick(tms_tick), .phase8(tms_phase),
        .dbg_freq0(dbg_freq0), .dbg_vol0(dbg_vol0)
    );

    // A write to sound latch B is a note write: the low four bits are the note
    // and bits 7:6 pick one of three clock inputs. Two of the four encodings
    // are the same because IC2 and IC3 are tied together.
    logic [7:0] snd_b_q, snd_b_r;
    always_ff @(posedge clk) begin
        // Registered on the way in for the same reason the effects board does
        // it: keep every path inside the sound section starting and ending
        // there, so the SDC can describe it.
        snd_b_r <= snd_b;
        if (reset) begin
            snd_b_q <= 8'd0; note_we <= 1'b0;
        end else begin
            note_we <= 1'b0;
            if (snd_b_r != snd_b_q) begin
                snd_b_q     <= snd_b_r;
                note_value  <= snd_b_r[3:0];
                note_octave <= (snd_b_r[7:6] == 2'd3) ? 2'd2 : snd_b_r[7:6];
                note_we     <= 1'b1;
                dbg_notes   <= ~dbg_notes;
            end
        end
    end

    // ----------------------------------------------------------- effects board
    logic signed [17:0] fx_sample;
    logic               fx_tick;

    pleiads_sound #(.CLK_HZ(CLK_HZ), .RATE(RATE)) u_fx (
        .clk(clk), .reset(reset),
        .latch_a(snd_a), .latch_b(snd_b), .latch_c(snd_c),
        .sample(fx_sample), .sample_tick(fx_tick),
        .dbg_pb4(dbg_pb4), .dbg_t1(), .dbg_t4(),
        .dbg_poly(dbg_poly), .dbg_pa6(dbg_pa6), .dbg_pc5(dbg_pc5), .dbg_pa5(dbg_pa5)
    );

    // ------------------------------------------------------------------- mixer
    // MAME routes the melody at 0.75 and the effects at 0.40 into one speaker.
    localparam int G_TMS = 49152;       // 0.75 in 0.16
    localparam int G_FX  = 26214;       // 0.40 in 0.16

    logic [15:0] tms_prev, tms_cur;
    always_ff @(posedge clk) begin
        if (reset) begin tms_prev <= '0; tms_cur <= '0; end
        else if (tms_tick) begin tms_prev <= tms_cur; tms_cur <= tms_sample; end
    end

    logic signed [15:0] fx_clamped;
    always_comb begin
        if      (fx_sample >  18'sd32767) fx_clamped =  16'sd32767;
        else if (fx_sample < -18'sd32768) fx_clamped =  16'sh8000;
        else                              fx_clamped =  16'(fx_sample);
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            sample <= '0; sample_tick <= 1'b0;
        end else begin
            sample_tick <= 1'b0;
            if (fx_tick) begin
                logic signed [31:0] interp, delta;
                logic signed [47:0] mixed;
                // prev + (cur - prev) * phase / 256.
                //
                // The parentheses around the shift are not decoration: `>>>`
                // binds looser than `+` in SystemVerilog, so writing this as
                // `a + b * c >>> 8` shifts the whole sum and turns the
                // interpolator into a differentiator. It lints clean, and the
                // only symptom was that the melody contributed nothing to the
                // mix -- the output peaked at exactly 0.4 x 32767, the effects
                // gain alone, which is what gave it away.
                delta  = $signed({16'd0, tms_cur}) - $signed({16'd0, tms_prev});
                interp = $signed({16'd0, tms_prev})
                       + ((delta * $signed({24'd0, tms_phase})) >>> 8);
                mixed = (interp * G_TMS + 48'($signed(fx_clamped)) * G_FX) >>> 16;
                if      (mixed >  48'sd32767) sample <=  16'sd32767;
                else if (mixed < -48'sd32768) sample <=  16'sh8000;
                else                          sample <= 16'(mixed);
                sample_tick <= 1'b1;
            end
        end
    end

    // --------------------------------------------------- clock domain crossing
    // Hold the sample, flip a toggle, synchronise the toggle on the far side
    // and only then move the data. By the time the receiving side sees the
    // edge, the held value has been stable for three of its clocks.
    logic        snd_tog;
    logic [15:0] snd_hold;

    always_ff @(posedge clk) begin
        if (reset) begin snd_tog <= 1'b0; snd_hold <= '0; end
        else if (sample_tick) begin
            snd_hold <= sample;
            snd_tog  <= ~snd_tog;
        end
    end

    logic [2:0] tog_sync;
    always_ff @(posedge clk_audio) begin
        tog_sync <= {tog_sync[1:0], snd_tog};
        if (tog_sync[2] != tog_sync[1]) audio_out <= snd_hold;
    end
endmodule
