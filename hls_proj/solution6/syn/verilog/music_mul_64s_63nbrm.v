// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

module music_mul_64s_63nbrm_MulnS_6(clk, ce, a, b, p);
input clk;
input ce;
input[64 - 1 : 0] a; 
input[63 - 1 : 0] b; 
output[126 - 1 : 0] p;

reg signed [64 - 1 : 0] a_reg0;
reg [63 - 1 : 0] b_reg0;
wire signed [126 - 1 : 0] tmp_product;
reg signed [126 - 1 : 0] buff0;
reg signed [126 - 1 : 0] buff1;
reg signed [126 - 1 : 0] buff2;

assign p = buff2;
assign tmp_product = a_reg0 * $signed({1'b0, b_reg0});
always @ (posedge clk) begin
    if (ce) begin
        a_reg0 <= a;
        b_reg0 <= b;
        buff0 <= tmp_product;
        buff1 <= buff0;
        buff2 <= buff1;
    end
end
endmodule
`timescale 1 ns / 1 ps
module music_mul_64s_63nbrm(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



music_mul_64s_63nbrm_MulnS_6 music_mul_64s_63nbrm_MulnS_6_U(
    .clk( clk ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

