// Every memory on the board, plus the router that fills them from the ROM
// image and the checksum that works out which game this is.
//
// The whole board is 24.5 KB of ROM and 8 KB of RAM, so all of it lives in
// block RAM and every access is single-cycle and deterministic. There is no
// SDRAM in this design, and so no arbiter, no fetch latency and no bandwidth
// budget to blow (METHODOLOGY 6).
//
// ROM image layout, as tools/mra_build.py assembles it:
//
//   0000-3FFF  16K  program
//   4000-47FF   2K  background character generator, plane 1 (LSB)
//   4800-4FFF   2K  background character generator, plane 0 (MSB)
//   5000-57FF   2K  foreground character generator, plane 1 (LSB)
//   5800-5FFF   2K  foreground character generator, plane 0 (MSB)
//   6000-60FF  256  colour PROM, low bits
//   6100-61FF  256  colour PROM, high bits
//
// Pleiads and Phoenix are the same board with different sound, and their
// images are byte-identical in size and layout, so one core takes both and
// tells them apart by summing the program region as it goes past. That costs
// an adder and two comparators and works with any correctly built image --
// no header, no side-channel, nothing for a third-party builder to omit.

module phoenix_mem (
    input  logic        clk,

    // ROM image download
    input  logic [16:0] dl_addr,
    input  logic [7:0]  dl_data,
    input  logic        dl_wr,
    input  logic        dl_done,

    output logic        game_phoenix,   // 0 = Pleiads, 1 = Phoenix
    output logic        game_known,     // the sum matched something we support

    // CPU program fetch
    input  logic [13:0] prog_addr,
    output logic [7:0]  prog_data,

    // CPU video RAM port: {page, offset}
    input  logic [12:0] vram_a_addr,
    input  logic        vram_a_we,
    input  logic [7:0]  vram_a_din,
    output logic [7:0]  vram_a_dout,

    // Video-side ports
    input  logic [12:0] vram_b_addr,
    output logic [7:0]  vram_b_data,
    input  logic [10:0] bgrom_addr,
    output logic [7:0]  bgrom_lsb,
    output logic [7:0]  bgrom_msb,
    input  logic [10:0] fgrom_addr,
    output logic [7:0]  fgrom_lsb,
    output logic [7:0]  fgrom_msb,
    input  logic [7:0]  prom_addr,
    output logic [7:0]  prom_lo,
    output logic [7:0]  prom_hi
);
    // Byte sums of the 16 KB program region. Generated and checked by
    // tools/gen_game_ids.py against the built images.
    localparam logic [31:0] SUM_PLEIADS = 32'h0016D34B;
    localparam logic [31:0] SUM_PHOENIX = 32'h0015FA42;

    // ------------------------------------------------------ download routing
    logic sel_prog, sel_bgl, sel_bgm, sel_fgl, sel_fgm, sel_pl, sel_ph;

    assign sel_prog = dl_wr && (dl_addr <  17'h04000);
    assign sel_bgl  = dl_wr && (dl_addr >= 17'h04000) && (dl_addr < 17'h04800);
    assign sel_bgm  = dl_wr && (dl_addr >= 17'h04800) && (dl_addr < 17'h05000);
    assign sel_fgl  = dl_wr && (dl_addr >= 17'h05000) && (dl_addr < 17'h05800);
    assign sel_fgm  = dl_wr && (dl_addr >= 17'h05800) && (dl_addr < 17'h06000);
    assign sel_pl   = dl_wr && (dl_addr >= 17'h06000) && (dl_addr < 17'h06100);
    assign sel_ph   = dl_wr && (dl_addr >= 17'h06100) && (dl_addr < 17'h06200);

    // ---------------------------------------------------------- game detect
    logic [31:0] prog_sum;

    always_ff @(posedge clk) begin
        if (dl_wr && dl_addr == 17'd0) prog_sum <= 32'd0 + 32'(dl_data);
        else if (sel_prog)             prog_sum <= prog_sum + 32'(dl_data);

        if (dl_done) begin
            game_phoenix <= (prog_sum == SUM_PHOENIX);
            game_known   <= (prog_sum == SUM_PHOENIX) || (prog_sum == SUM_PLEIADS);
        end
    end

    // ---------------------------------------------------------------- program
    phoenix_dpram #(.AW(14), .DW(8)) u_prog (
        .clk(clk),
        .a_addr(sel_prog ? dl_addr[13:0] : prog_addr),
        .a_we(sel_prog), .a_din(dl_data), .a_dout(prog_data),
        .b_addr(14'd0), .b_dout()
    );

    // --------------------------------------------------------------- video RAM
    // 2 pages x 4 KB. Only the selected page is visible to the CPU and to the
    // video at once; the unselected page keeps its contents. Note the game has
    // no work RAM anywhere else on the board -- the parts of these pages the
    // tilemaps do not cover (340-7FF and B40-FFF) are its only scratch.
    phoenix_dpram #(.AW(13), .DW(8)) u_vram (
        .clk(clk),
        .a_addr(vram_a_addr), .a_we(vram_a_we), .a_din(vram_a_din), .a_dout(vram_a_dout),
        .b_addr(vram_b_addr), .b_dout(vram_b_data)
    );

    // --------------------------------------------- character generators
    // Kept as separate per-plane memories so a tile row arrives as two bytes
    // in one read, with no byte-enable write anywhere.
    phoenix_dpram #(.AW(11), .DW(8)) u_bgl (
        .clk(clk), .a_addr(dl_addr[10:0]), .a_we(sel_bgl), .a_din(dl_data), .a_dout(),
        .b_addr(bgrom_addr), .b_dout(bgrom_lsb));
    phoenix_dpram #(.AW(11), .DW(8)) u_bgm (
        .clk(clk), .a_addr(dl_addr[10:0]), .a_we(sel_bgm), .a_din(dl_data), .a_dout(),
        .b_addr(bgrom_addr), .b_dout(bgrom_msb));
    phoenix_dpram #(.AW(11), .DW(8)) u_fgl (
        .clk(clk), .a_addr(dl_addr[10:0]), .a_we(sel_fgl), .a_din(dl_data), .a_dout(),
        .b_addr(fgrom_addr), .b_dout(fgrom_lsb));
    phoenix_dpram #(.AW(11), .DW(8)) u_fgm (
        .clk(clk), .a_addr(dl_addr[10:0]), .a_we(sel_fgm), .a_din(dl_data), .a_dout(),
        .b_addr(fgrom_addr), .b_dout(fgrom_msb));

    // ------------------------------------------------------------ colour PROMs
    phoenix_dpram #(.AW(8), .DW(8)) u_pl (
        .clk(clk), .a_addr(dl_addr[7:0]), .a_we(sel_pl), .a_din(dl_data), .a_dout(),
        .b_addr(prom_addr), .b_dout(prom_lo));
    phoenix_dpram #(.AW(8), .DW(8)) u_ph (
        .clk(clk), .a_addr(dl_addr[7:0]), .a_we(sel_ph), .a_din(dl_data), .a_dout(),
        .b_addr(prom_addr), .b_dout(prom_hi));
endmodule
