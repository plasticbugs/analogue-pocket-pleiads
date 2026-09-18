// Frozen-state video bench: memories plus the video hardware, with a back door
// for the testbench to load video RAM and set the two write-only registers.
// Nothing here is synthesised into the core.
module tb_video_top (
    input  logic        clk,
    input  logic        reset,

    input  logic [16:0] dl_addr,
    input  logic [7:0]  dl_data,
    input  logic        dl_wr,
    input  logic        dl_done,

    // back door into video RAM, driven as if it were the CPU
    input  logic [12:0] vr_addr,
    input  logic        vr_we,
    input  logic [7:0]  vr_din,

    input  logic [7:0]  videoreg,
    input  logic [7:0]  scroll,
    input  logic        cab_cocktail,

    output logic        game_phoenix,
    output logic        game_known,

    output logic [23:0] rgb,
    output logic        de,
    output logic        hblank,
    output logic        vblank,
    output logic [8:0]  hcnt,
    output logic [7:0]  vcnt
);
    logic [12:0] vram_b_addr;
    logic [7:0]  vram_b_data;
    logic [10:0] bgrom_addr, fgrom_addr;
    logic [7:0]  bgrom_lsb, bgrom_msb, fgrom_lsb, fgrom_msb;
    logic [7:0]  prom_addr, prom_lo, prom_hi;

    phoenix_mem u_mem (
        .clk(clk),
        .dl_addr(dl_addr), .dl_data(dl_data), .dl_wr(dl_wr), .dl_done(dl_done),
        .game_phoenix(game_phoenix), .game_known(game_known),
        .prog_addr(14'd0), .prog_data(),
        .vram_a_addr(vr_addr), .vram_a_we(vr_we), .vram_a_din(vr_din), .vram_a_dout(),
        .vram_b_addr(vram_b_addr), .vram_b_data(vram_b_data),
        .bgrom_addr(bgrom_addr), .bgrom_lsb(bgrom_lsb), .bgrom_msb(bgrom_msb),
        .fgrom_addr(fgrom_addr), .fgrom_lsb(fgrom_lsb), .fgrom_msb(fgrom_msb),
        .prom_addr(prom_addr), .prom_lo(prom_lo), .prom_hi(prom_hi)
    );

    phoenix_video u_video (
        .clk(clk), .reset(reset), .cen_pix(),
        .videoreg(videoreg), .scroll(scroll),
        .cab_cocktail(cab_cocktail), .is_phoenix(game_phoenix),
        .vram_addr(vram_b_addr), .vram_data(vram_b_data),
        .bgrom_addr(bgrom_addr), .bgrom_lsb(bgrom_lsb), .bgrom_msb(bgrom_msb),
        .fgrom_addr(fgrom_addr), .fgrom_lsb(fgrom_lsb), .fgrom_msb(fgrom_msb),
        .prom_addr(prom_addr), .prom_lo(prom_lo), .prom_hi(prom_hi),
        .hcnt(hcnt), .vcnt(vcnt), .vblank_raw(),
        .rgb(rgb), .hsync(), .vsync(), .hblank(hblank), .vblank(vblank), .de(de)
    );
endmodule
