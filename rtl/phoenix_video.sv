// Phoenix-family video hardware: two 8x8 tilemaps, the foreground over the
// background with pen 0 transparent, through two colour PROMs and a resistor
// ladder.
//
// Written against tools/render_model.py, which is pixel-identical to MAME on
// every captured state. Where this and that disagree, that one is right.
//
// Bandwidth is a non-issue here, so this fetches everything per pixel rather
// than prefetching whole tiles: 8 system clocks per pixel and five memory
// accesses to make, with the memories otherwise idle. Per-tile prefetch would
// save reads nobody needs saved and would bring back the line-start priming
// and scroll-wrap edge cases that per-pixel fetching simply does not have.
//
// Phase within a pixel (BRAM reads are registered, so data lands one phase
// after the address):
//
//   0  address VRAM for the foreground tile code
//   1  code arrives; address the foreground character generator
//   2  address VRAM for the background tile code
//   3  code arrives; address the background character generator;
//      latch the foreground bit planes
//   5  latch the background bit planes
//   6  resolve the pen and address the PROMs (both planes are current by now)
//   7  PROM bits arrive; index the palette LUT
//      and register the colour together with the coordinates it belongs to
//
// The colour therefore leaves this module one pixel behind the free-running
// counters, so the coordinates and the blanking flags are registered out
// alongside it. Consumers use those, never hcnt/vcnt directly.

module phoenix_video #(
    parameter int HTOTAL  = 352,
    parameter int HACTIVE = 256,
    parameter int VTOTAL  = 256,
    parameter int VACTIVE = 208,
    // Sync position inside blanking. MAME's set_raw only states where blanking
    // starts and ends, so these are chosen to sit inside it; they affect the
    // scaler's framing, never the pixels.
    parameter int HS_START = 272, parameter int HS_END = 304,
    parameter int VS_START = 216, parameter int VS_END  = 220
) (
    input  logic        clk,
    input  logic        reset,
    output logic        cen_pix,        // one clock in eight, 5.5 MHz

    // Video registers, as the CPU last wrote them.
    input  logic [7:0]  videoreg,
    input  logic [7:0]  scroll,
    input  logic        cab_cocktail,   // the cabinet link
    input  logic        is_phoenix,     // one palette-bank bit instead of two

    // Video-side memory ports. All reads, all registered.
    output logic [12:0] vram_addr,      // {page, offset within the 4K page}
    input  logic [7:0]  vram_data,
    output logic [10:0] bgrom_addr,
    input  logic [7:0]  bgrom_lsb,
    input  logic [7:0]  bgrom_msb,
    output logic [10:0] fgrom_addr,
    input  logic [7:0]  fgrom_lsb,
    input  logic [7:0]  fgrom_msb,
    output logic [7:0]  prom_addr,
    input  logic [7:0]  prom_lo,
    input  logic [7:0]  prom_hi,

    // Free-running raster position, for anything that needs to know where the
    // beam is rather than what colour came out.
    output logic [8:0]  hcnt,
    output logic [7:0]  vcnt,
    output logic        vblank_raw,     // asserted over lines VACTIVE..VTOTAL-1

    // Registered output, one pixel behind the counters.
    output logic [23:0] rgb,
    output logic        hsync,
    output logic        vsync,
    output logic        hblank,
    output logic        vblank,
    output logic        de
);
    `include "phoenix_palette_lut.svh"

    // ---------------------------------------------------------------- timing
    logic [2:0] phase;

    always_ff @(posedge clk) begin
        if (reset) begin
            phase <= '0;
            hcnt  <= '0;
            vcnt  <= '0;
        end else begin
            phase <= phase + 3'd1;
            if (phase == 3'd7) begin
                if (hcnt == 9'(HTOTAL - 1)) begin
                    hcnt <= '0;
                    vcnt <= (vcnt == 8'(VTOTAL - 1)) ? 8'd0 : vcnt + 8'd1;
                end else begin
                    hcnt <= hcnt + 9'd1;
                end
            end
        end
    end

    assign cen_pix    = (phase == 3'd0);
    assign vblank_raw = (vcnt >= 8'(VACTIVE));

    // -------------------------------------------------------------- registers
    // Phoenix has a single palette-select bit; Pleiads has two, and the game
    // walks a four-entry table at $0420 through them, one palette per level.
    logic       page;
    logic [1:0] pal_bank;
    logic       cocktail;

    assign page     = videoreg[0];
    assign pal_bank = is_phoenix ? {1'b0, videoreg[1]} : videoreg[2:1];
    // Cocktail flip follows the page bit, which is how the board alternates
    // the two players' views. The link alone does not flip anything.
    assign cocktail = page & cab_cocktail;

    // ------------------------------------------------------- sampling coords
    // MAME flips the whole 32x32 tilemap, which is 256x256 -- not the 256x208
    // visible window. So a flipped screen row 0 shows tilemap row 255, not row
    // 207, and the normally-unused rows below the visible area come into view.
    logic [7:0] sx, sy, bx;

    assign sx = cocktail ? (8'd255 - hcnt[7:0]) : hcnt[7:0];
    assign sy = cocktail ? (8'd255 - vcnt)      : vcnt;
    assign bx = sx + scroll;                     // background scrolls in x, wraps at 256

    // ------------------------------------------------------------- the fetch
    logic [7:0] fg_code, bg_code;
    logic [7:0] fg_lsb, fg_msb, bg_lsb, bg_msb;
    logic [2:0] fg_fx, bg_fx;
    logic [7:0] fg_col_code, bg_col_code;

    always_comb begin
        vram_addr  = {page, 12'd0};
        bgrom_addr = {bg_code, sy[2:0]};
        fgrom_addr = {fg_code, sy[2:0]};
        case (phase)
            // Foreground tile code: offset row*32 + col inside 000-33F.
            3'd0: vram_addr = {page, 2'b00, sy[7:3], sx[7:3]};
            // Background tile code: the same, offset by 800.
            3'd2: vram_addr = {page, 2'b10, sy[7:3], bx[7:3]};
            default: ;
        endcase
        if (phase == 3'd3) bgrom_addr = {vram_data, sy[2:0]};
        if (phase == 3'd1) fgrom_addr = {vram_data, sy[2:0]};
    end

    // The pen for a given column is bit `fine_x` of each plane byte, counting
    // from the LSB: charlayout's xoffset {7,6,...,0} is in MAME's bit numbering,
    // which starts at the MSB, so column 0 is bit 0. Reading it the other way
    // mirrors every tile about its own centre.
    logic [1:0] fg_pen, bg_pen;
    assign fg_fx  = sx[2:0];
    assign bg_fx  = bx[2:0];
    assign fg_pen = {fg_msb[fg_fx], fg_lsb[fg_fx]};
    assign bg_pen = {bg_msb[bg_fx], bg_lsb[bg_fx]};

    // Colour index. The tile code does double duty: all eight bits address the
    // character generator, and the top three also pick the colour.
    logic [7:0] pen;
    assign fg_col_code = {pal_bank, 1'b1, fg_code[7:5], fg_pen};
    assign bg_col_code = {pal_bank, 1'b0, bg_code[7:5], bg_pen};
    assign pen = (fg_pen != 2'b00) ? fg_col_code : bg_col_code;

    // Pens are bit-swizzled on their way to the PROMs. Pleiads swizzles all
    // eight bits; Phoenix only seven, because it has two palette banks, so its
    // top pen bit is dropped rather than carried.
    logic [7:0] pen_swizzled;
    assign pen_swizzled = {is_phoenix ? 1'b0 : pen[7],
                           pen[6], pen[5], pen[1], pen[0], pen[4], pen[3], pen[2]};

    // Two 256x4 PROMs into a 2-bit-per-channel ladder.
    assign prom_addr = pen_swizzled;

    logic [5:0] pal_index;
    assign pal_index = {prom_hi[0], prom_lo[0],    // red
                        prom_hi[2], prom_lo[2],    // green
                        prom_hi[1], prom_lo[1]};   // blue

    always_ff @(posedge clk) begin
        if (phase == 3'd1) fg_code <= vram_data;
        if (phase == 3'd3) begin
            bg_code <= vram_data;
            fg_lsb  <= fgrom_lsb;
            fg_msb  <= fgrom_msb;
        end
        if (phase == 3'd5) begin
            bg_lsb <= bgrom_lsb;
            bg_msb <= bgrom_msb;
        end
    end

    // Combinational, deliberately. Registering this at phase 5 sampled `pen`
    // on the very edge that latches the background planes, so the PROM was
    // addressed with the *previous* pixel's background bytes. Within a tile
    // those bytes are identical, so the fault showed up only on the first
    // pixel of each background tile and only where the background was not
    // blank -- 0.1% to 0.8% of pixels, clustered, which reads much more like a
    // colour bug than a one-phase timing bug. The memory registers the read
    // anyway, so there is nothing to gain by registering the address too.

    // -------------------------------------------------------- registered out
    logic active;
    assign active = (hcnt < 9'(HACTIVE)) && (vcnt < 8'(VACTIVE));

    always_ff @(posedge clk) begin
        if (reset) begin
            rgb <= '0; hsync <= 1'b0; vsync <= 1'b0;
            hblank <= 1'b1; vblank <= 1'b1; de <= 1'b0;
        end else if (phase == 3'd7) begin
            rgb    <= active ? PAL_LUT[pal_index] : 24'd0;
            de     <= active;
            hblank <= (hcnt >= 9'(HACTIVE));
            vblank <= (vcnt >= 8'(VACTIVE));
            hsync  <= (hcnt >= 9'(HS_START)) && (hcnt < 9'(HS_END));
            vsync  <= (vcnt >= 8'(VS_START)) && (vcnt < 8'(VS_END));
        end
    end
endmodule
