// Simple dual-port RAM. Port A reads and writes, port B reads only.
// Both reads are registered, which is what infers M10K on Cyclone V.
//
// Writes are whole bytes -- there is no partial-select write anywhere in this
// design, deliberately: Quartus fails to infer byte enables from a bit-slice
// assignment and explodes the memory into registers instead (METHODOLOGY 5.5).
module phoenix_dpram #(
    parameter int AW = 12,
    parameter int DW = 8
) (
    input  logic          clk,

    input  logic [AW-1:0] a_addr,
    input  logic          a_we,
    input  logic [DW-1:0] a_din,
    output logic [DW-1:0] a_dout,

    input  logic [AW-1:0] b_addr,
    output logic [DW-1:0] b_dout
);
    logic [DW-1:0] mem [0:(1 << AW) - 1];

    always_ff @(posedge clk) begin
        if (a_we) mem[a_addr] <= a_din;
        a_dout <= mem[a_addr];
        b_dout <= mem[b_addr];
    end
endmodule
