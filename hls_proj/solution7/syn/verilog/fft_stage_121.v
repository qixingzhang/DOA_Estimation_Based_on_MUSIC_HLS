// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fft_stage_121 (
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
wire   [8:0] W_real40_address0;
reg    W_real40_ce0;
wire   [31:0] W_real40_q0;
wire   [8:0] W_imag31_address0;
reg    W_imag31_ce0;
wire   [31:0] W_imag31_q0;
reg   [9:0] indvar_flatten_reg_188;
reg   [3:0] j_0_reg_199;
reg   [6:0] t_0_reg_210;
wire   [31:0] grp_fu_225_p2;
reg   [31:0] reg_241;
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
reg   [0:0] icmp_ln181_reg_364;
reg   [0:0] icmp_ln181_reg_364_pp0_iter7_reg;
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
wire   [31:0] grp_fu_229_p2;
reg   [31:0] reg_247;
wire   [0:0] icmp_ln181_fu_265_p2;
reg   [0:0] icmp_ln181_reg_364_pp0_iter1_reg;
reg   [0:0] icmp_ln181_reg_364_pp0_iter2_reg;
reg   [0:0] icmp_ln181_reg_364_pp0_iter3_reg;
reg   [0:0] icmp_ln181_reg_364_pp0_iter4_reg;
reg   [0:0] icmp_ln181_reg_364_pp0_iter5_reg;
reg   [0:0] icmp_ln181_reg_364_pp0_iter6_reg;
reg   [0:0] icmp_ln181_reg_364_pp0_iter8_reg;
wire   [9:0] add_ln181_fu_271_p2;
reg   [9:0] add_ln181_reg_368;
reg    ap_enable_reg_pp0_iter0;
wire   [6:0] select_ln181_fu_289_p3;
reg   [6:0] select_ln181_reg_373;
wire   [3:0] select_ln181_15_fu_323_p3;
reg   [3:0] select_ln181_15_reg_388;
wire   [9:0] i_fu_335_p3;
reg   [9:0] i_reg_393;
reg   [9:0] i_reg_393_pp0_iter1_reg;
reg   [9:0] i_reg_393_pp0_iter2_reg;
reg   [9:0] i_reg_393_pp0_iter3_reg;
wire   [63:0] zext_ln194_fu_349_p1;
reg   [63:0] zext_ln194_reg_398;
reg   [63:0] zext_ln194_reg_398_pp0_iter1_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter2_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter3_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter4_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter5_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter6_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter7_reg;
reg   [63:0] zext_ln194_reg_398_pp0_iter8_reg;
reg   [31:0] W_real40_load_reg_414;
reg   [31:0] W_imag31_load_reg_419;
reg   [31:0] X_R_load_reg_424;
reg   [31:0] X_I_load_reg_430;
wire   [6:0] t_fu_355_p2;
reg   [6:0] t_reg_436;
wire   [31:0] grp_fu_233_p2;
reg   [31:0] tmp_reg_441;
reg    ap_enable_reg_pp0_iter2;
wire   [31:0] grp_fu_237_p2;
reg   [31:0] tmp_1_reg_446;
reg   [31:0] tmp_2_reg_451;
reg    ap_enable_reg_pp0_iter3;
reg   [31:0] tmp_3_reg_456;
wire   [63:0] zext_ln196_fu_360_p1;
reg   [63:0] zext_ln196_reg_461;
reg   [63:0] zext_ln196_reg_461_pp0_iter5_reg;
reg   [63:0] zext_ln196_reg_461_pp0_iter6_reg;
reg   [63:0] zext_ln196_reg_461_pp0_iter7_reg;
reg   [63:0] zext_ln196_reg_461_pp0_iter8_reg;
reg   [31:0] X_R_load_1_reg_473;
reg    ap_enable_reg_pp0_iter4;
wire   [31:0] grp_fu_221_p2;
reg   [31:0] temp_R_reg_479;
reg    ap_enable_reg_pp0_iter5;
reg   [31:0] temp_I_reg_490;
reg   [31:0] X_I_load_1_reg_496;
reg    ap_block_state1;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage1_subdone;
reg    ap_enable_reg_pp0_iter6;
reg   [9:0] ap_phi_mux_indvar_flatten_phi_fu_192_p4;
wire    ap_block_pp0_stage0;
reg   [3:0] ap_phi_mux_j_0_phi_fu_203_p4;
reg   [6:0] ap_phi_mux_t_0_phi_fu_214_p4;
wire   [63:0] zext_ln181_fu_317_p1;
wire    ap_block_pp0_stage1;
reg   [31:0] grp_fu_221_p0;
reg   [31:0] grp_fu_221_p1;
reg   [31:0] grp_fu_225_p0;
reg   [31:0] grp_fu_225_p1;
reg   [31:0] grp_fu_229_p0;
reg   [31:0] grp_fu_229_p1;
reg   [31:0] grp_fu_233_p0;
reg   [31:0] grp_fu_237_p0;
wire   [2:0] trunc_ln190_fu_253_p1;
wire   [0:0] icmp_ln184_fu_283_p2;
wire   [3:0] j_fu_277_p2;
wire   [2:0] trunc_ln190_6_fu_297_p1;
wire   [8:0] k_mid1_fu_301_p3;
wire   [8:0] k_fu_257_p3;
wire   [8:0] select_ln181_14_fu_309_p3;
wire   [5:0] trunc_ln187_fu_331_p1;
wire   [9:0] i_lower_fu_343_p2;
reg   [1:0] grp_fu_221_opcode;
wire    ap_block_pp0_stage1_00001;
wire    ap_block_pp0_stage0_00001;
wire    ap_CS_fsm_state20;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_condition_511;
reg    ap_condition_515;

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

fft_stage_119_W_rfYi #(
    .DataWidth( 32 ),
    .AddressRange( 512 ),
    .AddressWidth( 9 ))
W_real40_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(W_real40_address0),
    .ce0(W_real40_ce0),
    .q0(W_real40_q0)
);

fft_stage_119_W_ig8j #(
    .DataWidth( 32 ),
    .AddressRange( 512 ),
    .AddressWidth( 9 ))
W_imag31_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(W_imag31_address0),
    .ce0(W_imag31_ce0),
    .q0(W_imag31_q0)
);

music_faddfsub_32bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_faddfsub_32bkb_U37(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_221_p0),
    .din1(grp_fu_221_p1),
    .opcode(grp_fu_221_opcode),
    .ce(1'b1),
    .dout(grp_fu_221_p2)
);

music_fsub_32ns_3cud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fsub_32ns_3cud_U38(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_225_p0),
    .din1(grp_fu_225_p1),
    .ce(1'b1),
    .dout(grp_fu_225_p2)
);

music_fadd_32ns_3dEe #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fadd_32ns_3dEe_U39(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_229_p0),
    .din1(grp_fu_229_p1),
    .ce(1'b1),
    .dout(grp_fu_229_p2)
);

music_fmul_32ns_3eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3eOg_U40(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_233_p0),
    .din1(W_real40_load_reg_414),
    .ce(1'b1),
    .dout(grp_fu_233_p2)
);

music_fmul_32ns_3eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3eOg_U41(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_237_p0),
    .din1(W_imag31_load_reg_419),
    .ce(1'b1),
    .dout(grp_fu_237_p2)
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
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364 == 1'd0))) begin
        indvar_flatten_reg_188 <= add_ln181_reg_368;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_188 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364 == 1'd0))) begin
        j_0_reg_199 <= select_ln181_15_reg_388;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_0_reg_199 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364 == 1'd0))) begin
        t_0_reg_210 <= t_reg_436;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        t_0_reg_210 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (icmp_ln181_reg_364 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        W_imag31_load_reg_419 <= W_imag31_q0;
        W_real40_load_reg_414 <= W_real40_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1) & (icmp_ln181_reg_364_pp0_iter5_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        X_I_load_1_reg_496 <= X_I_q1;
        temp_I_reg_490 <= grp_fu_221_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln181_reg_364 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        X_I_load_reg_430 <= X_I_q0;
        X_R_load_reg_424 <= X_R_q0;
        t_reg_436 <= t_fu_355_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter4 == 1'b1) & (icmp_ln181_reg_364_pp0_iter4_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        X_R_load_1_reg_473 <= X_R_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln181_reg_368 <= add_ln181_fu_271_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_fu_265_p2 == 1'd0))) begin
        i_reg_393 <= i_fu_335_p3;
        select_ln181_reg_373 <= select_ln181_fu_289_p3;
        zext_ln194_reg_398[9 : 0] <= zext_ln194_fu_349_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_393_pp0_iter1_reg <= i_reg_393;
        i_reg_393_pp0_iter2_reg <= i_reg_393_pp0_iter1_reg;
        i_reg_393_pp0_iter3_reg <= i_reg_393_pp0_iter2_reg;
        icmp_ln181_reg_364 <= icmp_ln181_fu_265_p2;
        icmp_ln181_reg_364_pp0_iter1_reg <= icmp_ln181_reg_364;
        icmp_ln181_reg_364_pp0_iter2_reg <= icmp_ln181_reg_364_pp0_iter1_reg;
        icmp_ln181_reg_364_pp0_iter3_reg <= icmp_ln181_reg_364_pp0_iter2_reg;
        icmp_ln181_reg_364_pp0_iter4_reg <= icmp_ln181_reg_364_pp0_iter3_reg;
        icmp_ln181_reg_364_pp0_iter5_reg <= icmp_ln181_reg_364_pp0_iter4_reg;
        icmp_ln181_reg_364_pp0_iter6_reg <= icmp_ln181_reg_364_pp0_iter5_reg;
        icmp_ln181_reg_364_pp0_iter7_reg <= icmp_ln181_reg_364_pp0_iter6_reg;
        icmp_ln181_reg_364_pp0_iter8_reg <= icmp_ln181_reg_364_pp0_iter7_reg;
        zext_ln194_reg_398_pp0_iter1_reg[9 : 0] <= zext_ln194_reg_398[9 : 0];
        zext_ln194_reg_398_pp0_iter2_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter1_reg[9 : 0];
        zext_ln194_reg_398_pp0_iter3_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter2_reg[9 : 0];
        zext_ln194_reg_398_pp0_iter4_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter3_reg[9 : 0];
        zext_ln194_reg_398_pp0_iter5_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter4_reg[9 : 0];
        zext_ln194_reg_398_pp0_iter6_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter5_reg[9 : 0];
        zext_ln194_reg_398_pp0_iter7_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter6_reg[9 : 0];
        zext_ln194_reg_398_pp0_iter8_reg[9 : 0] <= zext_ln194_reg_398_pp0_iter7_reg[9 : 0];
        zext_ln196_reg_461_pp0_iter5_reg[9 : 0] <= zext_ln196_reg_461[9 : 0];
        zext_ln196_reg_461_pp0_iter6_reg[9 : 0] <= zext_ln196_reg_461_pp0_iter5_reg[9 : 0];
        zext_ln196_reg_461_pp0_iter7_reg[9 : 0] <= zext_ln196_reg_461_pp0_iter6_reg[9 : 0];
        zext_ln196_reg_461_pp0_iter8_reg[9 : 0] <= zext_ln196_reg_461_pp0_iter7_reg[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((((ap_enable_reg_pp0_iter7 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (icmp_ln181_reg_364_pp0_iter7_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001)) | ((ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364_pp0_iter7_reg == 1'd0)))) begin
        reg_241 <= grp_fu_225_p2;
        reg_247 <= grp_fu_229_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_fu_265_p2 == 1'd0))) begin
        select_ln181_15_reg_388 <= select_ln181_15_fu_323_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter5 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364_pp0_iter4_reg == 1'd0))) begin
        temp_R_reg_479 <= grp_fu_221_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln181_reg_364_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        tmp_1_reg_446 <= grp_fu_237_p2;
        tmp_reg_441 <= grp_fu_233_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364_pp0_iter2_reg == 1'd0))) begin
        tmp_2_reg_451 <= grp_fu_233_p2;
        tmp_3_reg_456 <= grp_fu_237_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364_pp0_iter3_reg == 1'd0))) begin
        zext_ln196_reg_461[9 : 0] <= zext_ln196_fu_360_p1[9 : 0];
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        Out_I_ce0 = 1'b1;
    end else begin
        Out_I_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        Out_I_ce1 = 1'b1;
    end else begin
        Out_I_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1) & (icmp_ln181_reg_364_pp0_iter8_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        Out_I_we0 = 1'b1;
    end else begin
        Out_I_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter8 == 1'b1) & (icmp_ln181_reg_364_pp0_iter8_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001))) begin
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
    if (((ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364_pp0_iter7_reg == 1'd0))) begin
        Out_R_we0 = 1'b1;
    end else begin
        Out_R_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter8 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln181_reg_364_pp0_iter7_reg == 1'd0))) begin
        Out_R_we1 = 1'b1;
    end else begin
        Out_R_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        W_imag31_ce0 = 1'b1;
    end else begin
        W_imag31_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        W_real40_ce0 = 1'b1;
    end else begin
        W_real40_ce0 = 1'b0;
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
    if ((icmp_ln181_fu_265_p2 == 1'd1)) begin
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
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln181_reg_364 == 1'd0))) begin
        ap_phi_mux_indvar_flatten_phi_fu_192_p4 = add_ln181_reg_368;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_192_p4 = indvar_flatten_reg_188;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln181_reg_364 == 1'd0))) begin
        ap_phi_mux_j_0_phi_fu_203_p4 = select_ln181_15_reg_388;
    end else begin
        ap_phi_mux_j_0_phi_fu_203_p4 = j_0_reg_199;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln181_reg_364 == 1'd0))) begin
        ap_phi_mux_t_0_phi_fu_214_p4 = t_reg_436;
    end else begin
        ap_phi_mux_t_0_phi_fu_214_p4 = t_0_reg_210;
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
        if ((1'b1 == ap_condition_515)) begin
            grp_fu_221_opcode = 2'd1;
        end else if ((1'b1 == ap_condition_511)) begin
            grp_fu_221_opcode = 2'd0;
        end else begin
            grp_fu_221_opcode = 'bx;
        end
    end else begin
        grp_fu_221_opcode = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter3 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_221_p0 = tmp_2_reg_451;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_221_p0 = tmp_reg_441;
        end else begin
            grp_fu_221_p0 = 'bx;
        end
    end else begin
        grp_fu_221_p0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter3 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_221_p1 = tmp_3_reg_456;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_221_p1 = tmp_1_reg_446;
        end else begin
            grp_fu_221_p1 = 'bx;
        end
    end else begin
        grp_fu_221_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_225_p0 = X_I_load_1_reg_496;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_225_p0 = X_R_load_1_reg_473;
    end else begin
        grp_fu_225_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_225_p1 = temp_I_reg_490;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_225_p1 = temp_R_reg_479;
    end else begin
        grp_fu_225_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_229_p0 = X_I_load_1_reg_496;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_229_p0 = X_R_load_1_reg_473;
    end else begin
        grp_fu_229_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter6 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_229_p1 = temp_I_reg_490;
    end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        grp_fu_229_p1 = temp_R_reg_479;
    end else begin
        grp_fu_229_p1 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter1 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_233_p0 = X_I_load_reg_430;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_233_p0 = X_R_load_reg_424;
        end else begin
            grp_fu_233_p0 = 'bx;
        end
    end else begin
        grp_fu_233_p0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter1 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            grp_fu_237_p0 = X_R_load_reg_424;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_fu_237_p0 = X_I_load_reg_430;
        end else begin
            grp_fu_237_p0 = 'bx;
        end
    end else begin
        grp_fu_237_p0 = 'bx;
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
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln181_fu_265_p2 == 1'd1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln181_fu_265_p2 == 1'd1))) begin
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

assign Out_I_address0 = zext_ln194_reg_398_pp0_iter8_reg;

assign Out_I_address1 = zext_ln196_reg_461_pp0_iter8_reg;

assign Out_I_d0 = reg_241;

assign Out_I_d1 = reg_247;

assign Out_R_address0 = zext_ln194_reg_398_pp0_iter7_reg;

assign Out_R_address1 = zext_ln196_reg_461_pp0_iter7_reg;

assign Out_R_d0 = reg_241;

assign Out_R_d1 = reg_247;

assign W_imag31_address0 = zext_ln181_fu_317_p1;

assign W_real40_address0 = zext_ln181_fu_317_p1;

assign X_I_address0 = zext_ln194_fu_349_p1;

assign X_I_address1 = zext_ln196_reg_461;

assign X_R_address0 = zext_ln194_fu_349_p1;

assign X_R_address1 = zext_ln196_fu_360_p1;

assign add_ln181_fu_271_p2 = (10'd1 + ap_phi_mux_indvar_flatten_phi_fu_192_p4);

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
    ap_condition_511 = ((1'b0 == ap_block_pp0_stage1_00001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (icmp_ln181_reg_364_pp0_iter3_reg == 1'd0));
end

always @ (*) begin
    ap_condition_515 = ((1'b0 == ap_block_pp0_stage0_00001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln181_reg_364_pp0_iter2_reg == 1'd0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign i_fu_335_p3 = {{trunc_ln187_fu_331_p1}, {select_ln181_15_fu_323_p3}};

assign i_lower_fu_343_p2 = (10'd8 + i_fu_335_p3);

assign icmp_ln181_fu_265_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_192_p4 == 10'd512) ? 1'b1 : 1'b0);

assign icmp_ln184_fu_283_p2 = ((ap_phi_mux_t_0_phi_fu_214_p4 == 7'd64) ? 1'b1 : 1'b0);

assign j_fu_277_p2 = (4'd1 + ap_phi_mux_j_0_phi_fu_203_p4);

assign k_fu_257_p3 = {{trunc_ln190_fu_253_p1}, {6'd0}};

assign k_mid1_fu_301_p3 = {{trunc_ln190_6_fu_297_p1}, {6'd0}};

assign select_ln181_14_fu_309_p3 = ((icmp_ln184_fu_283_p2[0:0] === 1'b1) ? k_mid1_fu_301_p3 : k_fu_257_p3);

assign select_ln181_15_fu_323_p3 = ((icmp_ln184_fu_283_p2[0:0] === 1'b1) ? j_fu_277_p2 : ap_phi_mux_j_0_phi_fu_203_p4);

assign select_ln181_fu_289_p3 = ((icmp_ln184_fu_283_p2[0:0] === 1'b1) ? 7'd0 : ap_phi_mux_t_0_phi_fu_214_p4);

assign t_fu_355_p2 = (7'd1 + select_ln181_reg_373);

assign trunc_ln187_fu_331_p1 = select_ln181_fu_289_p3[5:0];

assign trunc_ln190_6_fu_297_p1 = j_fu_277_p2[2:0];

assign trunc_ln190_fu_253_p1 = ap_phi_mux_j_0_phi_fu_203_p4[2:0];

assign zext_ln181_fu_317_p1 = select_ln181_14_fu_309_p3;

assign zext_ln194_fu_349_p1 = i_lower_fu_343_p2;

assign zext_ln196_fu_360_p1 = i_reg_393_pp0_iter3_reg;

always @ (posedge ap_clk) begin
    zext_ln194_reg_398[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter1_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter2_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter3_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter4_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter5_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter6_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter7_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln194_reg_398_pp0_iter8_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_461[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_461_pp0_iter5_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_461_pp0_iter6_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_461_pp0_iter7_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln196_reg_461_pp0_iter8_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //fft_stage_121
