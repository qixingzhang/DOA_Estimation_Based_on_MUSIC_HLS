// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fft_streaming_Loop_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        X_R_address0,
        X_R_ce0,
        X_R_q0,
        Stage_R_0_address0,
        Stage_R_0_ce0,
        Stage_R_0_we0,
        Stage_R_0_d0,
        X_I_address0,
        X_I_ce0,
        X_I_q0,
        Stage_I_0_address0,
        Stage_I_0_ce0,
        Stage_I_0_we0,
        Stage_I_0_d0
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [9:0] X_R_address0;
output   X_R_ce0;
input  [31:0] X_R_q0;
output  [9:0] Stage_R_0_address0;
output   Stage_R_0_ce0;
output   Stage_R_0_we0;
output  [31:0] Stage_R_0_d0;
output  [9:0] X_I_address0;
output   X_I_ce0;
input  [31:0] X_I_q0;
output  [9:0] Stage_I_0_address0;
output   Stage_I_0_ce0;
output   Stage_I_0_we0;
output  [31:0] Stage_I_0_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] X_R_address0;
reg X_R_ce0;
reg[9:0] Stage_R_0_address0;
reg Stage_R_0_ce0;
reg Stage_R_0_we0;
reg[9:0] X_I_address0;
reg X_I_ce0;
reg[9:0] Stage_I_0_address0;
reg Stage_I_0_ce0;
reg Stage_I_0_we0;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] zext_ln120_fu_167_p1;
reg   [31:0] zext_ln120_reg_248;
wire    ap_CS_fsm_state2;
wire   [9:0] trunc_ln120_fu_171_p1;
wire   [10:0] i_1_fu_181_p2;
reg   [10:0] i_1_reg_261;
wire   [3:0] i_fu_193_p2;
wire    ap_CS_fsm_state3;
wire   [31:0] rev_fu_207_p3;
wire   [0:0] icmp_ln123_fu_187_p2;
wire   [9:0] zext_ln125_fu_225_p1;
wire   [0:0] icmp_ln139_fu_229_p2;
reg   [0:0] icmp_ln139_reg_284;
wire   [63:0] zext_ln142_fu_234_p1;
reg   [63:0] zext_ln142_reg_288;
wire    ap_CS_fsm_state4;
reg   [10:0] input_assign_reg_124;
reg    ap_block_state1;
wire    ap_CS_fsm_state5;
reg   [31:0] reversed_reg_136;
wire   [0:0] icmp_ln137_fu_175_p2;
reg   [3:0] i_0_i_i_i_reg_147;
reg   [9:0] p_0_i_i_i_reg_158;
wire   [63:0] zext_ln141_fu_240_p1;
wire   [30:0] trunc_ln124_fu_199_p1;
wire   [0:0] trunc_ln123_fu_203_p1;
wire   [8:0] input_assign_1_fu_215_p4;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 5'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((icmp_ln137_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln137_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_0_i_i_i_reg_147 <= 4'd0;
    end else if (((icmp_ln123_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_0_i_i_i_reg_147 <= i_fu_193_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        input_assign_reg_124 <= i_1_reg_261;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        input_assign_reg_124 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln137_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        p_0_i_i_i_reg_158 <= trunc_ln120_fu_171_p1;
    end else if (((icmp_ln123_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        p_0_i_i_i_reg_158 <= zext_ln125_fu_225_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln137_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        reversed_reg_136 <= 32'd0;
    end else if (((icmp_ln123_fu_187_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        reversed_reg_136 <= rev_fu_207_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_261 <= i_1_fu_181_p2;
        zext_ln120_reg_248[10 : 0] <= zext_ln120_fu_167_p1[10 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln123_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        icmp_ln139_reg_284 <= icmp_ln139_fu_229_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln139_fu_229_p2 == 1'd0) & (icmp_ln123_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        zext_ln142_reg_288[31 : 0] <= zext_ln142_fu_234_p1[31 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        Stage_I_0_address0 = zext_ln142_reg_288;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        Stage_I_0_address0 = zext_ln141_fu_240_p1;
    end else begin
        Stage_I_0_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5))) begin
        Stage_I_0_ce0 = 1'b1;
    end else begin
        Stage_I_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((icmp_ln139_reg_284 == 1'd0) & (1'b1 == ap_CS_fsm_state5)))) begin
        Stage_I_0_we0 = 1'b1;
    end else begin
        Stage_I_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        Stage_R_0_address0 = zext_ln142_reg_288;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        Stage_R_0_address0 = zext_ln141_fu_240_p1;
    end else begin
        Stage_R_0_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state5))) begin
        Stage_R_0_ce0 = 1'b1;
    end else begin
        Stage_R_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((icmp_ln139_reg_284 == 1'd0) & (1'b1 == ap_CS_fsm_state5)))) begin
        Stage_R_0_we0 = 1'b1;
    end else begin
        Stage_R_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        X_I_address0 = zext_ln141_fu_240_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        X_I_address0 = zext_ln142_fu_234_p1;
    end else begin
        X_I_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        X_I_ce0 = 1'b1;
    end else begin
        X_I_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        X_R_address0 = zext_ln141_fu_240_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        X_R_address0 = zext_ln142_fu_234_p1;
    end else begin
        X_R_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        X_R_ce0 = 1'b1;
    end else begin
        X_R_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln137_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln137_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln137_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln139_fu_229_p2 == 1'd1) & (icmp_ln123_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else if (((icmp_ln139_fu_229_p2 == 1'd0) & (icmp_ln123_fu_187_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Stage_I_0_d0 = X_I_q0;

assign Stage_R_0_d0 = X_R_q0;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign i_1_fu_181_p2 = (11'd1 + input_assign_reg_124);

assign i_fu_193_p2 = (i_0_i_i_i_reg_147 + 4'd1);

assign icmp_ln123_fu_187_p2 = ((i_0_i_i_i_reg_147 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln137_fu_175_p2 = ((input_assign_reg_124 == 11'd1024) ? 1'b1 : 1'b0);

assign icmp_ln139_fu_229_p2 = ((zext_ln120_reg_248 > reversed_reg_136) ? 1'b1 : 1'b0);

assign input_assign_1_fu_215_p4 = {{p_0_i_i_i_reg_158[9:1]}};

assign rev_fu_207_p3 = {{trunc_ln124_fu_199_p1}, {trunc_ln123_fu_203_p1}};

assign trunc_ln120_fu_171_p1 = input_assign_reg_124[9:0];

assign trunc_ln123_fu_203_p1 = p_0_i_i_i_reg_158[0:0];

assign trunc_ln124_fu_199_p1 = reversed_reg_136[30:0];

assign zext_ln120_fu_167_p1 = input_assign_reg_124;

assign zext_ln125_fu_225_p1 = input_assign_1_fu_215_p4;

assign zext_ln141_fu_240_p1 = input_assign_reg_124;

assign zext_ln142_fu_234_p1 = reversed_reg_136;

always @ (posedge ap_clk) begin
    zext_ln120_reg_248[31:11] <= 21'b000000000000000000000;
    zext_ln142_reg_288[63:32] <= 32'b00000000000000000000000000000000;
end

endmodule //fft_streaming_Loop_1
