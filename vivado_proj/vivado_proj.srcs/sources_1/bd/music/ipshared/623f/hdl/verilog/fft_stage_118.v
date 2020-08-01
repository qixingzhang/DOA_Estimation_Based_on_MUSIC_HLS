// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fft_stage_118 (
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
        X_R_address1,
        X_R_ce1,
        X_R_q1,
        X_I_address0,
        X_I_ce0,
        X_I_q0,
        X_I_address1,
        X_I_ce1,
        X_I_q1,
        Out_R_address0,
        Out_R_ce0,
        Out_R_we0,
        Out_R_d0,
        Out_R_address1,
        Out_R_ce1,
        Out_R_we1,
        Out_R_d1,
        Out_I_address0,
        Out_I_ce0,
        Out_I_we0,
        Out_I_d0,
        Out_I_address1,
        Out_I_ce1,
        Out_I_we1,
        Out_I_d1
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_pp0_stage0 = 4'd2;
parameter    ap_ST_fsm_pp0_stage1 = 4'd4;
parameter    ap_ST_fsm_state20 = 4'd8;

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
output  [9:0] X_R_address1;
output   X_R_ce1;
input  [31:0] X_R_q1;
output  [9:0] X_I_address0;
output   X_I_ce0;
input  [31:0] X_I_q0;
output  [9:0] X_I_address1;
output   X_I_ce1;
input  [31:0] X_I_q1;
output  [9:0] Out_R_address0;
output   Out_R_ce0;
output   Out_R_we0;
output  [31:0] Out_R_d0;
output  [9:0] Out_R_address1;
output   Out_R_ce1;
output   Out_R_we1;
output  [31:0] Out_R_d1;
output  [9:0] Out_I_address0;
output   Out_I_ce0;
output   Out_I_we0;
output  [31:0] Out_I_d0;
output  [9:0] Out_I_address1;
output   Out_I_ce1;
output   Out_I_we1;
output  [31:0] Out_I_d1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg X_R_ce0;
reg X_R_ce1;
reg X_I_ce0;
reg X_I_ce1;
reg Out_R_ce0;
reg Out_R_we0;
reg Out_R_ce1;
reg Out_R_we1;
reg Out_I_ce0;
reg Out_I_we0;
reg Out_I_ce1;
reg Out_I_we1;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [9:0] indvar_flatten_reg_148;
reg   [0:0] j_0_reg_159;
reg   [9:0] t_0_reg_170;
wire   [31:0] grp_fu_185_p2;
reg   [31:0] reg_198;
wire    ap_CS_fsm_pp0_stage1;
reg    ap_enable_reg_pp0_iter7;
wire    ap_block_state3_pp0_stage1_iter0;
wire    ap_block_state5_pp0_stage1_iter1;
wire    ap_block_state7_pp0_stage1_iter2;
wire    ap_block_state9_pp0_stage1_iter3;
wire    ap_block_state11_pp0_stage1_iter4;
wire    ap_block_state13_pp0_stage1_iter5;
wire    ap_block_state15_pp0_stage1_iter6;
wire    ap_block_state17_pp0_stage1_iter7;
wire    ap_block_state19_pp0_stage1_iter8;
wire    ap_block_pp0_stage1_11001;
reg   [0:0] icmp_ln184_reg_279;
reg   [0:0] icmp_ln184_reg_279_pp0_iter7_reg;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter8;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_state6_pp0_stage0_iter2;
wire    ap_block_state8_pp0_stage0_iter3;
wire    ap_block_state10_pp0_stage0_iter4;
wire    ap_block_state12_pp0_stage0_iter5;
wire    ap_block_state14_pp0_stage0_iter6;
wire    ap_block_state16_pp0_stage0_iter7;
wire    ap_block_state18_pp0_stage0_iter8;
wire    ap_block_pp0_stage0_11001;
wire   [31:0] grp_fu_189_p2;
reg   [31:0] reg_204;
wire   [0:0] icmp_ln184_fu_210_p2;
reg   [0:0] icmp_ln184_reg_279_pp0_iter1_reg;
reg   [0:0] icmp_ln184_reg_279_pp0_iter2_reg;
reg   [0:0] icmp_ln184_reg_279_pp0_iter3_reg;
reg   [0:0] icmp_ln184_reg_279_pp0_iter4_reg;
reg   [0:0] icmp_ln184_reg_279_pp0_iter5_reg;
reg   [0:0] icmp_ln184_reg_279_pp0_iter6_reg;
reg   [0:0] icmp_ln184_reg_279_pp0_iter8_reg;
wire   [9:0] add_ln184_fu_216_p2;
reg   [9:0] add_ln184_reg_283;
reg    ap_enable_reg_pp0_iter0;
wire   [9:0] select_ln184_fu_228_p3;
reg   [9:0] select_ln184_reg_288;
wire   [0:0] j_0_mid2_fu_236_p2;
reg   [0:0] j_0_mid2_reg_293;
wire   [9:0] i_fu_246_p3;
reg   [9:0] i_reg_298;
reg   [9:0] i_reg_298_pp0_iter1_reg;
reg   [9:0] i_reg_298_pp0_iter2_reg;
reg   [9:0] i_reg_298_pp0_iter3_reg;
wire   [63:0] zext_ln194_fu_264_p1;
reg   [63:0] zext_ln194_reg_303;
reg   [63:0] zext_ln194_reg_303_pp0_iter1_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter2_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter3_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter4_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter5_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter6_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter7_reg;
reg   [63:0] zext_ln194_reg_303_pp0_iter8_reg;
reg   [31:0] X_R_load_reg_319;
reg   [31:0] X_R_load_reg_319_pp0_iter1_reg;
reg   [31:0] X_R_load_reg_319_pp0_iter2_reg;
reg   [31:0] X_I_load_reg_325;
reg   [31:0] X_I_load_reg_325_pp0_iter1_reg;
reg   [31:0] X_I_load_reg_325_pp0_iter2_reg;
wire   [9:0] t_fu_270_p2;
reg   [9:0] t_reg_331;
wire   [31:0] grp_fu_193_p2;
reg   [31:0] tmp_1_reg_336;
reg    ap_enable_reg_pp0_iter2;
reg   [31:0] tmp_3_reg_341;
reg    ap_enable_reg_pp0_iter3;
wire   [63:0] zext_ln196_fu_275_p1;
reg   [63:0] zext_ln196_reg_346;
reg   [63:0] zext_ln196_reg_346_pp0_iter5_reg;
reg   [63:0] zext_ln196_reg_346_pp0_iter6_reg;
reg   [63:0] zext_ln196_reg_346_pp0_iter7_reg;
reg   [63:0] zext_ln196_reg_346_pp0_iter8_reg;
reg   [31:0] X_R_load_1_reg_358;
reg    ap_enable_reg_pp0_iter4;
wire   [31:0] grp_fu_181_p2;
reg   [31:0] temp_R_reg_364;
reg    ap_enable_reg_pp0_iter5;
reg   [31:0] temp_I_reg_375;
reg   [31:0] X_I_load_1_reg_381;
reg    ap_block_state1;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage1_subdone;
reg    ap_enable_reg_pp0_iter6;
reg   [9:0] ap_phi_mux_indvar_flatten_phi_fu_152_p4;
wire    ap_block_pp0_stage0;
reg   [0:0] ap_phi_mux_j_0_phi_fu_163_p4;
reg   [9:0] ap_phi_mux_t_0_phi_fu_174_p4;
wire    ap_block_pp0_stage1;
reg   [31:0] grp_fu_181_p0;
reg   [31:0] grp_fu_181_p1;
reg   [31:0] grp_fu_185_p0;
reg   [31:0] grp_fu_185_p1;
reg   [31:0] grp_fu_189_p0;
reg   [31:0] grp_fu_189_p1;
reg   [31:0] grp_fu_193_p0;
wire   [0:0] icmp_ln184_1_fu_222_p2;
wire   [8:0] trunc_ln187_fu_242_p1;
wire   [10:0] zext_ln187_fu_254_p1;
wire   [10:0] i_lower_fu_258_p2;
reg   [1:0] grp_fu_181_opcode;
wire    ap_block_pp0_stage1_00001;
wire    ap_block_pp0_stage0_00001;
wire    ap_CS_fsm_state20;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_condition_446;
reg    ap_condition_450;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
end

music_faddfsub_32bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_faddfsub_32bkb_U5(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_181_p0),
    .din1(grp_fu_181_p1),
    .opcode(grp_fu_181_opcode),
    .ce(1'b1),
    .dout(grp_fu_181_p2)
);

music_fsub_32ns_3cud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fsub_32ns_3cud_U6(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_185_p0),
    .din1(grp_fu_185_p1),
    .ce(1'b1),
    .dout(grp_fu_185_p2)
);

music_fadd_32ns_3dEe #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fadd_32ns_3dEe_U7(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_189_p0),
    .din1(grp_fu_189_p1),
    .ce(1'b1),
    .dout(grp_fu_189_p2)
);

music_fmul_32ns_3eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3eOg_U8(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_193_p0),
    .din1(32'd2147483648),
    .ce(1'b1),
    .dout(grp_fu_193_p2)
);

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
        end else if ((1'b1 == ap_CS_fsm_state20)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter8 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_148 <= add_ln184_reg_283;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_148 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_0_reg_159 <= j_0_mid2_reg_293;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_0_reg_159 <= 1'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        t_0_reg_170 <= t_reg_331;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        t_0_reg_170 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279_pp0_iter5_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        X_I_load_1_reg_381 <= X_I_q1;
        temp_I_reg_375 <= grp_fu_181_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        X_I_load_reg_325 <= X_I_q0;
        X_R_load_reg_319 <= X_R_q0;
        t_reg_331 <= t_fu_270_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        X_I_load_reg_325_pp0_iter1_reg <= X_I_load_reg_325;
        X_I_load_reg_325_pp0_iter2_reg <= X_I_load_reg_325_pp0_iter1_reg;
        X_R_load_reg_319_pp0_iter1_reg <= X_R_load_reg_319;
        X_R_load_reg_319_pp0_iter2_reg <= X_R_load_reg_319_pp0_iter1_reg;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279_pp0_iter4_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        X_R_load_1_reg_358 <= X_R_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln184_reg_283 <= add_ln184_fu_216_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_298 <= i_fu_246_p3;
        select_ln184_reg_288 <= select_ln184_fu_228_p3;
        zext_ln194_reg_303[10 : 0] <= zext_ln194_fu_264_p1[10 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_298_pp0_iter1_reg <= i_reg_298;
        i_reg_298_pp0_iter2_reg <= i_reg_298_pp0_iter1_reg;
        i_reg_298_pp0_iter3_reg <= i_reg_298_pp0_iter2_reg;
        icmp_ln184_reg_279 <= icmp_ln184_fu_210_p2;
        icmp_ln184_reg_279_pp0_iter1_reg <= icmp_ln184_reg_279;
        icmp_ln184_reg_279_pp0_iter2_reg <= icmp_ln184_reg_279_pp0_iter1_reg;
        icmp_ln184_reg_279_pp0_iter3_reg <= icmp_ln184_reg_279_pp0_iter2_reg;
        icmp_ln184_reg_279_pp0_iter4_reg <= icmp_ln184_reg_279_pp0_iter3_reg;
        icmp_ln184_reg_279_pp0_iter5_reg <= icmp_ln184_reg_279_pp0_iter4_reg;
        icmp_ln184_reg_279_pp0_iter6_reg <= icmp_ln184_reg_279_pp0_iter5_reg;
        icmp_ln184_reg_279_pp0_iter7_reg <= icmp_ln184_reg_279_pp0_iter6_reg;
        icmp_ln184_reg_279_pp0_iter8_reg <= icmp_ln184_reg_279_pp0_iter7_reg;
        zext_ln194_reg_303_pp0_iter1_reg[10 : 0] <= zext_ln194_reg_303[10 : 0];
        zext_ln194_reg_303_pp0_iter2_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter1_reg[10 : 0];
        zext_ln194_reg_303_pp0_iter3_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter2_reg[10 : 0];
        zext_ln194_reg_303_pp0_iter4_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter3_reg[10 : 0];
        zext_ln194_reg_303_pp0_iter5_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter4_reg[10 : 0];
        zext_ln194_reg_303_pp0_iter6_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter5_reg[10 : 0];
        zext_ln194_reg_303_pp0_iter7_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter6_reg[10 : 0];
        zext_ln194_reg_303_pp0_iter8_reg[10 : 0] <= zext_ln194_reg_303_pp0_iter7_reg[10 : 0];
        zext_ln196_reg_346_pp0_iter5_reg[9 : 0] <= zext_ln196_reg_346[9 : 0];
        zext_ln196_reg_346_pp0_iter6_reg[9 : 0] <= zext_ln196_reg_346_pp0_iter5_reg[9 : 0];
        zext_ln196_reg_346_pp0_iter7_reg[9 : 0] <= zext_ln196_reg_346_pp0_iter6_reg[9 : 0];
        zext_ln196_reg_346_pp0_iter8_reg[9 : 0] <= zext_ln196_reg_346_pp0_iter7_reg[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_fu_210_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_0_mid2_reg_293 <= j_0_mid2_fu_236_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((((icmp_ln184_reg_279_pp0_iter7_reg == 1'd0) & (ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)) | ((icmp_ln184_reg_279_pp0_iter7_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter7 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        reg_198 <= grp_fu_185_p2;
        reg_204 <= grp_fu_189_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279_pp0_iter4_reg == 1'd0) & (ap_enable_reg_pp0_iter5 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        temp_R_reg_364 <= grp_fu_181_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        tmp_1_reg_336 <= grp_fu_193_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279_pp0_iter2_reg == 1'd0) & (ap_enable_reg_pp0_iter3 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_3_reg_341 <= grp_fu_193_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln184_reg_279_pp0_iter3_reg == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        zext_ln196_reg_346[9 : 0] <= zext_ln196_fu_275_p1[9 : 0];
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        Out_I_ce0 = 1'b1;
    end else begin
        Out_I_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        Out_I_ce1 = 1'b1;
    end else begin
        Out_I_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279_pp0_iter8_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        Out_I_we0 = 1'b1;
    end else begin
        Out_I_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279_pp0_iter8_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        Out_I_we1 = 1'b1;
    end else begin
        Out_I_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_ce0 = 1'b1;
    end else begin
        Out_R_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_ce1 = 1'b1;
    end else begin
        Out_R_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279_pp0_iter7_reg == 1'd0) & (ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_we0 = 1'b1;
    end else begin
        Out_R_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279_pp0_iter7_reg == 1'd0) & (ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_we1 = 1'b1;
    end else begin
        Out_R_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_I_ce0 = 1'b1;
    end else begin
        X_I_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter5 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_I_ce1 = 1'b1;
    end else begin
        X_I_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_R_ce0 = 1'b1;
    end else begin
        X_R_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_R_ce1 = 1'b1;
    end else begin
        X_R_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln184_fu_210_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
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
    if (((ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_indvar_flatten_phi_fu_152_p4 = add_ln184_reg_283;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_152_p4 = indvar_flatten_reg_148;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_j_0_phi_fu_163_p4 = j_0_mid2_reg_293;
    end else begin
        ap_phi_mux_j_0_phi_fu_163_p4 = j_0_reg_159;
    end
end

always @ (*) begin
    if (((icmp_ln184_reg_279 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_t_0_phi_fu_174_p4 = t_reg_331;
    end else begin
        ap_phi_mux_t_0_phi_fu_174_p4 = t_0_reg_170;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter3 == 1'b1)) begin
        if ((1'b1 == ap_condition_450)) begin
            grp_fu_181_opcode = 2'd1;
        end else if ((1'b1 == ap_condition_446)) begin
            grp_fu_181_opcode = 2'd0;
        end else begin
            grp_fu_181_opcode = 'bx;
        end
    end else begin
        grp_fu_181_opcode = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter3 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_181_p0 = X_I_load_reg_325_pp0_iter2_reg;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_181_p0 = X_R_load_reg_319_pp0_iter2_reg;
        end else begin
            grp_fu_181_p0 = 'bx;
        end
    end else begin
        grp_fu_181_p0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter3 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_181_p1 = tmp_3_reg_341;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_181_p1 = tmp_1_reg_336;
        end else begin
            grp_fu_181_p1 = 'bx;
        end
    end else begin
        grp_fu_181_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_185_p0 = X_I_load_1_reg_381;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_185_p0 = X_R_load_1_reg_358;
    end else begin
        grp_fu_185_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_185_p1 = temp_I_reg_375;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_185_p1 = temp_R_reg_364;
    end else begin
        grp_fu_185_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_189_p0 = X_I_load_1_reg_381;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_189_p0 = X_R_load_1_reg_358;
    end else begin
        grp_fu_189_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_189_p1 = temp_I_reg_375;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_189_p1 = temp_R_reg_364;
    end else begin
        grp_fu_189_p1 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter1 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_193_p0 = X_R_load_reg_319;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_193_p0 = X_I_load_reg_325;
        end else begin
            grp_fu_193_p0 = 'bx;
        end
    end else begin
        grp_fu_193_p0 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln184_fu_210_p2 == 1'd1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln184_fu_210_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((~((ap_enable_reg_pp0_iter7 == 1'b0) & (1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1)) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((ap_enable_reg_pp0_iter7 == 1'b0) & (1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Out_I_address0 = zext_ln194_reg_303_pp0_iter8_reg;

assign Out_I_address1 = zext_ln196_reg_346_pp0_iter8_reg;

assign Out_I_d0 = reg_198;

assign Out_I_d1 = reg_204;

assign Out_R_address0 = zext_ln194_reg_303_pp0_iter7_reg;

assign Out_R_address1 = zext_ln196_reg_346_pp0_iter7_reg;

assign Out_R_d0 = reg_198;

assign Out_R_d1 = reg_204;

assign X_I_address0 = zext_ln194_fu_264_p1;

assign X_I_address1 = zext_ln196_reg_346;

assign X_R_address0 = zext_ln194_fu_264_p1;

assign X_R_address1 = zext_ln196_fu_275_p1;

assign add_ln184_fu_216_p2 = (ap_phi_mux_indvar_flatten_phi_fu_152_p4 + 10'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_00001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_00001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state10_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage1_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage1_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp0_stage1_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state17_pp0_stage1_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state18_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state19_pp0_stage1_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage1_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage1_iter3 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_condition_446 = ((icmp_ln184_reg_279_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_00001) & (1'b1 == ap_CS_fsm_pp0_stage1));
end

always @ (*) begin
    ap_condition_450 = ((icmp_ln184_reg_279_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_00001) & (1'b1 == ap_CS_fsm_pp0_stage0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign i_fu_246_p3 = {{trunc_ln187_fu_242_p1}, {j_0_mid2_fu_236_p2}};

assign i_lower_fu_258_p2 = (11'd1 + zext_ln187_fu_254_p1);

assign icmp_ln184_1_fu_222_p2 = ((ap_phi_mux_t_0_phi_fu_174_p4 == 10'd512) ? 1'b1 : 1'b0);

assign icmp_ln184_fu_210_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_152_p4 == 10'd512) ? 1'b1 : 1'b0);

assign j_0_mid2_fu_236_p2 = (icmp_ln184_1_fu_222_p2 | ap_phi_mux_j_0_phi_fu_163_p4);

assign select_ln184_fu_228_p3 = ((icmp_ln184_1_fu_222_p2[0:0] === 1'b1) ? 10'd0 : ap_phi_mux_t_0_phi_fu_174_p4);

assign t_fu_270_p2 = (10'd1 + select_ln184_reg_288);

assign trunc_ln187_fu_242_p1 = select_ln184_fu_228_p3[8:0];

assign zext_ln187_fu_254_p1 = i_fu_246_p3;

assign zext_ln194_fu_264_p1 = i_lower_fu_258_p2;

assign zext_ln196_fu_275_p1 = i_reg_298_pp0_iter3_reg;

always @ (posedge ap_clk) begin
    zext_ln194_reg_303[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter1_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter2_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter3_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter4_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter5_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter6_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter7_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_303_pp0_iter8_reg[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_346[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_346_pp0_iter5_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_346_pp0_iter6_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_346_pp0_iter7_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_346_pp0_iter8_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //fft_stage_118