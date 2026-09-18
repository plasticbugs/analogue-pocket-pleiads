// TMS36XX melody generator, as MAME models it.
//
// On the real Pleiads board this is an Epson 7910E multi-melody IC. Its ROM
// has never been dumped, so MAME substitutes a TMS3615 with hand-picked
// parameters and flags the driver IMPERFECT_SOUND. That substitute is the best
// reference anyone has and is what this core reproduces -- see
// docs/measurements.md before assuming a difference here is a bug.
//
// Twelve voices in two banks of six. A note write restarts one bank at full
// volume; each voice is a counter-driven square wave whose amplitude decays
// linearly to silence. The whole thing is integer arithmetic in MAME, so it
// ports directly.
//
// MAME's inner `while` loops are replaced by their closed forms. A decay step
// subtracts a constant and adds the sample rate back until positive; writing
// decay as q*rate + r makes the number of steps exactly q or q+1, decided by
// one comparison. That is not an approximation -- it is the same arithmetic,
// and it turns a seven-iteration loop into one cycle.

module tms36xx #(
    parameter int CLK_HZ  = 44_000_000,
    parameter int TMS_CLK = 247,        // the chip's clock pin, in Hz
    // VMAX / decay_time for each of the six footages; 0 disables the voice.
    // Pleiads: decays 0.33, 0.33, 0, 0.33, 0, 0.33 -> 32767/0.33 = 99293.
    parameter int DECAY0 = 99293,
    parameter int DECAY1 = 99293,
    parameter int DECAY2 = 0,
    parameter int DECAY3 = 99293,
    parameter int DECAY4 = 0,
    parameter int DECAY5 = 99293
) (
    input  logic        clk,
    input  logic        reset,

    input  logic        note_we,        // one clock, with the fields below
    input  logic [1:0]  note_octave,
    input  logic [3:0]  note_value,

    output logic [15:0] sample,         // unipolar 0..32767, as MAME's stream is
    output logic        sample_tick,    // one clock when `sample` is new
    output logic [7:0]  phase8,         // position between samples, for interpolation
    output logic [15:0] dbg_freq0,
    output logic [15:0] dbg_vol0
);
    assign dbg_freq0 = freq[0];
    assign dbg_vol0  = vol[0];
    `include "tms36xx_tunes.svh"

    localparam int VMAX  = 32767;
    localparam int RATE  = TMS_CLK * 64;        // the device's own stream rate
    localparam int SPEED = VMAX;                // set_tune_speed is unused here

    // Decay steps per sample, in closed form.
    localparam int D0Q = DECAY0 / RATE, D0R = DECAY0 % RATE;
    localparam int D1Q = DECAY1 / RATE, D1R = DECAY1 % RATE;
    localparam int D2Q = DECAY2 / RATE, D2R = DECAY2 % RATE;
    localparam int D3Q = DECAY3 / RATE, D3R = DECAY3 % RATE;
    localparam int D4Q = DECAY4 / RATE, D4R = DECAY4 % RATE;
    localparam int D5Q = DECAY5 / RATE, D5R = DECAY5 % RATE;

    // A voice is enabled if it has a decay, and each of the six footages has
    // two instances -- hence twelve voices and `voices` counting in twos.
    localparam logic [11:0] ENABLE = {
        (DECAY5 != 0), (DECAY4 != 0), (DECAY3 != 0),
        (DECAY2 != 0), (DECAY1 != 0), (DECAY0 != 0),
        (DECAY5 != 0), (DECAY4 != 0), (DECAY3 != 0),
        (DECAY2 != 0), (DECAY1 != 0), (DECAY0 != 0)};
    localparam int VOICES = 2 * ((DECAY0 != 0) + (DECAY1 != 0) + (DECAY2 != 0)
                               + (DECAY3 != 0) + (DECAY4 != 0) + (DECAY5 != 0));

    // ------------------------------------------------------------- sample rate
    logic [26:0] acc;
    logic        tick;

    always_ff @(posedge clk) begin
        if (reset) begin acc <= '0; tick <= 1'b0; end
        else begin
            tick <= 1'b0;
            if (acc + RATE >= CLK_HZ) begin
                acc  <= acc + RATE - CLK_HZ;
                tick <= 1'b1;
            end else begin
                acc <= acc + RATE;
            end
        end
    end

    // How far the accumulator has travelled towards the next sample, as 0..255.
    // The consumer uses it to interpolate rather than hold, which is measurably
    // closer to what MAME's resampler does -- see docs/measurements.md.
    localparam int PHASE_RECIP = (256 * (1 << 24)) / CLK_HZ;
    assign phase8 = 8'((({8'd0, acc} * PHASE_RECIP) >> 24));

    // ------------------------------------------------------------------ state
    logic [15:0]        vol       [0:11];
    logic signed [23:0] vol_ctr   [0:11];
    logic signed [23:0] ctr       [0:11];
    logic [15:0]        freq      [0:11];
    logic [11:0]        outbit;
    logic signed [23:0] tune_ctr;
    logic signed [23:0] note_ctr;
    logic [2:0]         shift;          // 0 or 6: which bank restarts next
    logic [4:0]         tune_ofs, tune_max;
    logic [1:0]         octave;
    logic               playing;

    typedef enum logic [2:0] { S_IDLE, S_DECAY, S_TUNE, S_RESTART, S_TONE, S_OUT } st_t;
    st_t         state;
    logic [3:0]  vi;
    logic [19:0] sum;

    // Pending note write, applied at the start of the next sample.
    logic        note_pend;
    logic [1:0]  note_oct_l;
    logic [3:0]  note_val_l;

    // Decay constants for the voice being worked on.
    logic [19:0] d_q;
    logic [19:0] d_r;
    always_comb begin
        case (vi % 6)
            0: begin d_q = D0Q; d_r = D0R; end
            1: begin d_q = D1Q; d_r = D1R; end
            2: begin d_q = D2Q; d_r = D2R; end
            3: begin d_q = D3Q; d_r = D3R; end
            4: begin d_q = D4Q; d_r = D4R; end
            default: begin d_q = D5Q; d_r = D5R; end
        endcase
    end

    // Frequency for a restarted voice: entry * (basefreq << octave) / 1024.
    logic [15:0] tune_entry;
    logic [25:0] freq_mul;
    assign tune_entry = TMS_TUNE4[tune_ofs * 6 + vi];
    assign freq_mul   = tune_entry * (TMS_CLK << octave);

    integer i;
    always_ff @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 12; i = i + 1) begin
                vol[i] <= '0; vol_ctr[i] <= '0; ctr[i] <= '0; freq[i] <= '0;
            end
            outbit <= '0; tune_ctr <= '0; note_ctr <= '0; shift <= 3'd0;
            tune_ofs <= '0; tune_max <= '0; octave <= '0; playing <= 1'b0;
            state <= S_IDLE; vi <= '0; sum <= '0; sample <= '0; sample_tick <= 1'b0;
            note_pend <= 1'b0;
        end else begin
            sample_tick <= 1'b0;

            if (note_we) begin
                note_pend  <= 1'b1;
                note_oct_l <= note_octave;
                note_val_l <= note_value;
            end

            case (state)
            S_IDLE: if (tick) begin
                if (note_pend) begin
                    // tms36xx_note_w: reset the counters, then arm one note.
                    note_pend <= 1'b0;
                    if (note_val_l <= 4'd12) begin
                        tune_ctr <= '0; note_ctr <= '0;
                        for (i = 0; i < 12; i = i + 1) begin
                            vol_ctr[i] <= '0; ctr[i] <= '0;
                        end
                        octave   <= note_oct_l;
                        tune_ofs <= {1'b0, note_val_l};
                        tune_max <= {1'b0, note_val_l} + 5'd1;
                        playing  <= 1'b1;
                    end
                end
                sum <= '0; vi <= '0;
                state <= (playing || (note_pend && note_val_l <= 4'd12)) ? S_DECAY : S_OUT;
            end

            // Linear decay of all twelve voices.
            S_DECAY: begin
                if (vol[vi] != 16'd0) begin
                    logic signed [23:0] vc;
                    logic [19:0]        k;
                    vc = vol_ctr[vi] - $signed({4'd0, d_r});
                    k  = d_q;
                    if (vc <= 0) begin vc = vc + RATE; k = d_q + 20'd1; end
                    vol_ctr[vi] <= vc;
                    if ({4'd0, vol[vi]} <= k) begin
                        vol[vi]  <= 16'd0;
                        freq[vi] <= 16'd0;
                    end else begin
                        vol[vi] <= vol[vi] - k[15:0];
                    end
                end
                vi <= vi + 4'd1;
                if (vi == 4'd11) begin vi <= 4'd0; state <= S_TUNE; end
            end

            // Note timing. MAME's step count is (-counter / rate) + 1, and the
            // speed is under three sample periods, so three conditional adds
            // cover every case exactly.
            S_TUNE: begin
                logic signed [23:0] tc;
                logic [2:0]         n;
                tc = tune_ctr - SPEED;
                n  = 3'd0;
                if (tc <= 0) begin tc = tc + RATE; n = 3'd1; end
                if (tc <= 0) begin tc = tc + RATE; n = 3'd2; end
                if (tc <= 0) begin tc = tc + RATE; n = 3'd3; end
                tune_ctr <= tc;
                if (n != 3'd0) begin
                    if (note_ctr - $signed({21'd0, n}) <= 0) begin
                        note_ctr <= note_ctr - $signed({21'd0, n}) + VMAX;
                        if (tune_ofs < tune_max) begin
                            shift <= shift ^ 3'd6;
                            vi    <= 4'd0;
                            state <= S_RESTART;
                        end else state <= S_TONE;
                    end else begin
                        note_ctr <= note_ctr - $signed({21'd0, n});
                        state <= S_TONE;
                    end
                end else state <= S_TONE;
            end

            // Restart one bank of six voices at full volume.
            S_RESTART: begin
                if (tune_entry != 16'd0) begin
                    freq[{1'b0, shift} + vi] <= freq_mul[25:10];
                    vol [{1'b0, shift} + vi] <= VMAX[15:0];
                end
                vi <= vi + 4'd1;
                if (vi == 4'd5) begin
                    vi       <= 4'd0;
                    tune_ofs <= tune_ofs + 5'd1;   // after the restart, as MAME does
                    state    <= S_TONE;
                end
            end

            // Square wave per voice, summed by amplitude.
            S_TONE: begin
                if (ENABLE[vi] && freq[vi] != 16'd0) begin
                    logic signed [23:0] c;
                    logic               ob;
                    c  = ctr[vi] - $signed({8'd0, freq[vi]});
                    ob = outbit[vi];
                    if (c <= 0) begin c = c + RATE; ob = ~ob; end
                    if (c <= 0) begin c = c + RATE; ob = ~ob; end
                    if (c <= 0) begin c = c + RATE; ob = ~ob; end
                    ctr[vi]    <= c;
                    outbit[vi] <= ob;
                    if (ob) sum <= sum + {4'd0, vol[vi]};
                end
                vi <= vi + 4'd1;
                if (vi == 4'd11) state <= S_OUT;
            end

            // MAME normalises by 32768 * voices, so dividing the sum by the
            // voice count leaves a 0..32767 unipolar sample -- which is what
            // its stream carries, DC offset and all.
            S_OUT: begin
                sample      <= (VOICES == 0) ? 16'd0 : 16'(sum / VOICES);
                sample_tick <= 1'b1;
                state       <= S_IDLE;
            end
            default: state <= S_IDLE;
            endcase
        end
    end
endmodule
