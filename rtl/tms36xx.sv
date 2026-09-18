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
    parameter int CLK_HZ = 44_000_000
) (
    input  logic        clk,
    input  logic        reset,

    // Which board this is. The two games configure the same device very
    // differently -- clock, decays, tune speed, how many voices are enabled,
    // and whether it plays single notes or one of three built-in melodies --
    // so both constant sets are computed at elaboration and selected here.
    input  logic        is_phoenix,

    // Pleiads: a TMS3615 sounding one note at a time.
    input  logic        note_we,
    input  logic [1:0]  note_octave,
    input  logic [3:0]  note_value,

    // Phoenix: an MM6221AA playing tune 1, 2 or 3; tune 0 is silence.
    input  logic        tune_we,
    input  logic [1:0]  tune_num_in,

    output logic [15:0] sample,         // unipolar 0..32767, as MAME's stream is
    output logic        sample_tick,    // one clock when `sample` is new
    output logic [7:0]  phase8,         // position between samples, for interpolation
    output logic [15:0] dbg_freq0,
    output logic [15:0] dbg_vol0
);
    assign dbg_freq0 = freq[0];
    assign dbg_vol0  = vol[0];
    `include "tms36xx_tunes.svh"

    localparam int VMAX = 32767;

    // Pleiads: TMS3615, clock 247, decays 0.33 on voices 0,1,3,5, default
    //          tune speed. 32767/0.33 = 99293.
    // Phoenix: MM6221AA, clock 372, decays 0.50 and 1.05 on voices 0 and 3,
    //          tune speed 0.21. 32767/0.50 = 65534, 32767/1.05 = 31206,
    //          32767/0.21 = 156033.
    localparam int P_CLK = 247, X_CLK = 372;
    localparam int P_RATE = P_CLK * 64;         // 15808
    localparam int X_RATE = X_CLK * 64;         // 23808
    localparam int P_SPEED = VMAX, X_SPEED = 156033;

    localparam int PD [0:5] = '{99293, 99293, 0, 99293, 0, 99293};
    localparam int XD [0:5] = '{65534,     0, 0, 31206, 0,     0};

    logic [31:0] RATE;
    logic [31:0] SPEED;
    logic [15:0] BASEFREQ;
    assign RATE     = is_phoenix ? X_RATE  : P_RATE;
    assign SPEED    = is_phoenix ? X_SPEED : P_SPEED;
    assign BASEFREQ = is_phoenix ? 16'(X_CLK) : 16'(P_CLK);

    // A voice is enabled if it has a decay, and each of the six footages has
    // two instances -- hence twelve voices and `voices` counting in twos.
    localparam logic [11:0] P_ENABLE = 12'b101011_101011;   // voices 0,1,3,5
    localparam logic [11:0] X_ENABLE = 12'b001001_001001;   // voices 0,3
    localparam int P_VOICES_LOG2 = 3;                       // 8 voices
    localparam int X_VOICES_LOG2 = 2;                       // 4 voices

    logic [11:0] ENABLE;
    logic [2:0]  VOICES_LOG2;
    assign ENABLE      = is_phoenix ? X_ENABLE : P_ENABLE;
    assign VOICES_LOG2 = is_phoenix ? 3'(X_VOICES_LOG2) : 3'(P_VOICES_LOG2);

    // ------------------------------------------------------------- sample rate
    logic [26:0] acc;
    logic        tick;

    always_ff @(posedge clk) begin
        if (reset) begin acc <= '0; tick <= 1'b0; end
        else begin
            tick <= 1'b0;
            if ({5'd0, acc} + RATE >= CLK_HZ) begin
                acc  <= 27'({5'd0, acc} + RATE - CLK_HZ);
                tick <= 1'b1;
            end else begin
                acc <= 27'({5'd0, acc} + RATE);
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
    logic [6:0]         tune_ofs, tune_max;
    logic [2:0]         tune_num;
    logic [1:0]         octave;
    logic               playing;

    typedef enum logic [2:0] { S_IDLE, S_DECAY, S_TUNE, S_RESTART, S_TONE, S_OUT } st_t;
    st_t         state;
    logic [3:0]  vi;
    logic [19:0] sum;

    // Pending note or tune write, applied at the start of the next sample.
    logic        note_pend, tune_pend;
    logic [1:0]  note_oct_l;
    logic [3:0]  note_val_l;
    logic [1:0]  tune_l;

    // Decay constants for the voice being worked on.
    // The twelve voices are two banks of the same six footages, so the decay
    // constants repeat with period six. `vi % 6` is a *runtime* modulo and
    // Quartus builds an lpm_divide for it -- about 600 logic elements to
    // subtract six. The voice index only ever reaches 11.
    logic [19:0] d_q;
    logic [19:0] d_r;
    logic [3:0]  d_sel;
    assign d_sel = (vi >= 4'd6) ? (vi - 4'd6) : vi;

    // Decay steps per sample in closed form, for whichever board this is.
    // Both sets fold at elaboration; only the select survives.
    always_comb begin
        automatic int dv = is_phoenix ? XD[d_sel[2:0]] : PD[d_sel[2:0]];
        automatic int rt = is_phoenix ? X_RATE : P_RATE;
        d_q = 20'(dv / rt);
        d_r = 20'(dv % rt);
    end

    // Frequency for a restarted voice: entry * (basefreq << octave) / 1024.
    // One flat ROM holds all four tunes; `tune_base` picks which.
    logic [11:0] tune_base;
    always_comb begin
        case (tune_num)
            3'd1: tune_base = 12'(TMS_BASE_TUNE1);
            3'd2: tune_base = 12'(TMS_BASE_TUNE2);
            3'd3: tune_base = 12'(TMS_BASE_TUNE3);
            default: tune_base = 12'(TMS_BASE_TUNE4);
        endcase
    end

    logic [15:0] tune_entry;
    logic [25:0] freq_mul;
    assign tune_entry = TMS_TUNES[tune_base + 12'(tune_ofs) * 12'd6 + 12'(vi)];
    assign freq_mul   = tune_entry * (BASEFREQ << octave);

    integer i;
    always_ff @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 12; i = i + 1) begin
                vol[i] <= '0; vol_ctr[i] <= '0; ctr[i] <= '0; freq[i] <= '0;
            end
            outbit <= '0; tune_ctr <= '0; note_ctr <= '0; shift <= 3'd0;
            tune_ofs <= '0; tune_max <= '0; octave <= '0; playing <= 1'b0;
            tune_num <= 3'd0;
            state <= S_IDLE; vi <= '0; sum <= '0; sample <= '0; sample_tick <= 1'b0;
            note_pend <= 1'b0; tune_pend <= 1'b0;
        end else begin
            sample_tick <= 1'b0;

            if (note_we) begin
                note_pend  <= 1'b1;
                note_oct_l <= note_octave;
                note_val_l <= note_value;
            end
            if (tune_we) begin
                tune_pend <= 1'b1;
                tune_l    <= tune_num_in;
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
                        tune_num <= 3'd4;                     // the note table
                        tune_ofs <= {3'd0, note_val_l};
                        tune_max <= {3'd0, note_val_l} + 7'd1;
                        playing  <= 1'b1;
                    end
                end
                if (tune_pend) begin
                    // mm6221aa_tune_w: a repeat of the same tune is ignored,
                    // and tune 0 is a null table -- silence, with no state
                    // touched at all.
                    tune_pend <= 1'b0;
                    if ({1'b0, tune_l} != tune_num) begin
                        tune_num <= {1'b0, tune_l};
                        tune_ofs <= 7'd0;
                        tune_max <= 7'd96;
                        octave   <= 2'd0;
                        playing  <= (tune_l != 2'd0);
                    end
                end
                sum <= '0; vi <= '0;
                state <= (playing || (note_pend && note_val_l <= 4'd12)
                                  || (tune_pend && tune_l != 2'd0)) ? S_DECAY : S_OUT;
            end

            // Linear decay of all twelve voices.
            S_DECAY: begin
                if (vol[vi] != 16'd0) begin
                    logic signed [23:0] vc;
                    logic [19:0]        k;
                    vc = vol_ctr[vi] - $signed({4'd0, d_r});
                    k  = d_q;
                    if (vc <= 0) begin vc = vc + $signed(RATE); k = d_q + 20'd1; end
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
                logic [2:0]         n;   // Phoenix's tune speed needs up to 7
                tc = tune_ctr - $signed(SPEED);
                n  = 3'd0;
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd1; end
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd2; end
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd3; end
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd4; end
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd5; end
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd6; end
                if (tc <= 0) begin tc = tc + $signed(RATE); n = 3'd7; end
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
                    tune_ofs <= tune_ofs + 7'd1;   // after the restart, as MAME does
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
                    if (c <= 0) begin c = c + $signed(RATE); ob = ~ob; end
                    if (c <= 0) begin c = c + $signed(RATE); ob = ~ob; end
                    if (c <= 0) begin c = c + $signed(RATE); ob = ~ob; end
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
                // VOICES is 8 for Pleiads and 4 for Phoenix -- both powers of
                // two, so this is a shift. Written as a division Quartus may
                // not fold it and will build a divider instead.
                sample      <= 16'(sum >> VOICES_LOG2);
                sample_tick <= 1'b1;
                state       <= S_IDLE;
            end
            default: state <= S_IDLE;
            endcase
        end
    end
endmodule
