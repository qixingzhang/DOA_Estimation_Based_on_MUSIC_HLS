// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fft_stage_1244 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        X_R_8_address0,
        X_R_8_ce0,
        X_R_8_q0,
        X_R_8_address1,
        X_R_8_ce1,
        X_R_8_q1,
        X_I_8_address0,
        X_I_8_ce0,
        X_I_8_q0,
        X_I_8_address1,
        X_I_8_ce1,
        X_I_8_q1,
        Out_R_9_address0,
        Out_R_9_ce0,
        Out_R_9_we0,
        Out_R_9_d0,
        Out_R_9_address1,
        Out_R_9_ce1,
        Out_R_9_we1,
        Out_R_9_d1,
        Out_I_9_address0,
        Out_I_9_ce0,
        Out_I_9_we0,
        Out_I_9_d0,
        Out_I_9_address1,
        Out_I_9_ce1,
        Out_I_9_we1,
        Out_I_9_d1
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state19 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [9:0] X_R_8_address0;
output   X_R_8_ce0;
input  [31:0] X_R_8_q0;
output  [9:0] X_R_8_address1;
output   X_R_8_ce1;
input  [31:0] X_R_8_q1;
output  [9:0] X_I_8_address0;
output   X_I_8_ce0;
input  [31:0] X_I_8_q0;
output  [9:0] X_I_8_address1;
output   X_I_8_ce1;
input  [31:0] X_I_8_q1;
output  [9:0] Out_R_9_address0;
output   Out_R_9_ce0;
output   Out_R_9_we0;
output  [31:0] Out_R_9_d0;
output  [9:0] Out_R_9_address1;
output   Out_R_9_ce1;
output   Out_R_9_we1;
output  [31:0] Out_R_9_d1;
output  [9:0] Out_I_9_address0;
output   Out_I_9_ce0;
output   Out_I_9_we0;
output  [31:0] Out_I_9_d0;
output  [9:0] Out_I_9_address1;
output   Out_I_9_ce1;
output   Out_I_9_we1;
output  [31:0] Out_I_9_d1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg X_R_8_ce0;
reg X_R_8_ce1;
reg X_I_8_ce0;
reg X_I_8_ce1;
reg Out_R_9_ce0;
reg Out_R_9_we0;
reg Out_R_9_ce1;
reg Out_R_9_we1;
reg Out_I_9_ce0;
reg Out_I_9_we0;
reg Out_I_9_ce1;
reg Out_I_9_we1;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [8:0] W_real270_address0;
reg    W_real270_ce0;
wire   [31:0] W_real270_q0;
wire   [8:0] W_imag262_address0;
reg    W_imag262_ce0;
wire   [31:0] W_imag262_q0;
reg   [9:0] indvar_flatten_reg_188;
reg   [8:0] j_0_reg_199;
reg   [1:0] t_0_reg_210;
wire   [0:0] icmp_ln145_fu_261_p2;
reg   [0:0] icmp_ln145_reg_366;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_state5_pp0_stage0_iter3;
wire    ap_block_state6_pp0_stage0_iter4;
wire    ap_block_state7_pp0_stage0_iter5;
wire    ap_block_state8_pp0_stage0_iter6;
wire    ap_block_state9_pp0_stage0_iter7;
wire    ap_block_state10_pp0_stage0_iter8;
wire    ap_block_state11_pp0_stage0_iter9;
wire    ap_block_state12_pp0_stage0_iter10;
wire    ap_block_state13_pp0_stage0_iter11;
wire    ap_block_state14_pp0_stage0_iter12;
wire    ap_block_state15_pp0_stage0_iter13;
wire    ap_block_state16_pp0_stage0_iter14;
wire    ap_block_state17_pp0_stage0_iter15;
wire    ap_block_state18_pp0_stage0_iter16;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln145_reg_366_pp0_iter1_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter2_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter3_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter4_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter5_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter6_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter7_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter8_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter9_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter10_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter11_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter12_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter13_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter14_reg;
reg   [0:0] icmp_ln145_reg_366_pp0_iter15_reg;
wire   [9:0] add_ln145_fu_267_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [8:0] select_ln145_fu_323_p3;
reg   [8:0] select_ln145_reg_385;
wire   [9:0] i_fu_335_p3;
reg   [9:0] i_reg_390;
reg   [9:0] i_reg_390_pp0_iter1_reg;
reg   [9:0] i_reg_390_pp0_iter2_reg;
reg   [9:0] i_reg_390_pp0_iter3_reg;
reg   [9:0] i_reg_390_pp0_iter4_reg;
reg   [9:0] i_reg_390_pp0_iter5_reg;
reg   [9:0] i_reg_390_pp0_iter6_reg;
reg   [9:0] i_reg_390_pp0_iter7_reg;
reg   [9:0] i_reg_390_pp0_iter8_reg;
wire   [63:0] zext_ln156_fu_349_p1;
reg   [63:0] zext_ln156_reg_395;
reg   [63:0] zext_ln156_reg_395_pp0_iter1_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter2_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter3_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter4_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter5_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter6_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter7_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter8_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter9_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter10_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter11_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter12_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter13_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter14_reg;
reg   [63:0] zext_ln156_reg_395_pp0_iter15_reg;
wire   [1:0] t_fu_355_p2;
reg   [31:0] W_real270_load_reg_416;
reg   [31:0] W_imag262_load_reg_422;
reg   [31:0] X_R_8_load_reg_428;
reg    ap_enable_reg_pp0_iter1;
reg   [31:0] X_I_8_load_reg_434;
wire   [31:0] grp_fu_245_p2;
reg   [31:0] tmp_reg_440;
wire   [31:0] grp_fu_249_p2;
reg   [31:0] tmp_s_reg_445;
wire   [31:0] grp_fu_253_p2;
reg   [31:0] tmp_49_reg_450;
wire   [31:0] grp_fu_257_p2;
reg   [31:0] tmp_50_reg_455;
wire   [63:0] zext_ln158_fu_361_p1;
reg   [63:0] zext_ln158_reg_460;
reg   [63:0] zext_ln158_reg_460_pp0_iter10_reg;
reg   [63:0] zext_ln158_reg_460_pp0_iter11_reg;
reg   [63:0] zext_ln158_reg_460_pp0_iter12_reg;
reg   [63:0] zext_ln158_reg_460_pp0_iter13_reg;
reg   [63:0] zext_ln158_reg_460_pp0_iter14_reg;
reg   [63:0] zext_ln158_reg_460_pp0_iter15_reg;
wire   [31:0] grp_fu_221_p2;
reg   [31:0] temp_R_reg_476;
wire   [31:0] grp_fu_225_p2;
reg   [31:0] temp_I_reg_482;
reg   [31:0] X_R_8_load_1_reg_488;
reg    ap_enable_reg_pp0_iter10;
reg   [31:0] X_I_8_load_1_reg_494;
wire   [31:0] grp_fu_229_p2;
reg   [31:0] tmp_51_reg_500;
wire   [31:0] grp_fu_233_p2;
reg   [31:0] tmp_52_reg_505;
wire   [31:0] grp_fu_237_p2;
reg   [31:0] tmp_53_reg_510;
wire   [31:0] grp_fu_241_p2;
reg   [31:0] tmp_54_reg_515;
reg    ap_block_state1;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter9;
reg    ap_enable_reg_pp0_iter11;
reg    ap_enable_reg_pp0_iter12;
reg    ap_enable_reg_pp0_iter13;
reg    ap_enable_reg_pp0_iter14;
reg    ap_enable_reg_pp0_iter15;
reg    ap_enable_reg_pp0_iter16;
reg   [8:0] ap_phi_mux_j_0_phi_fu_203_p4;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln152_fu_317_p1;
wire   [0:0] icmp_ln148_fu_279_p2;
wire   [8:0] j_fu_273_p2;
wire   [7:0] trunc_ln152_fu_293_p1;
wire   [7:0] trunc_ln152_1_fu_297_p1;
wire   [7:0] select_ln152_2_fu_301_p3;
wire   [8:0] select_ln152_1_v_fu_309_p3;
wire   [1:0] select_ln152_fu_285_p3;
wire   [0:0] trunc_ln149_fu_331_p1;
wire   [9:0] i_lower_fu_343_p2;
wire    ap_CS_fsm_state19;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter10 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
#0 ap_enable_reg_pp0_iter11 = 1'b0;
#0 ap_enable_reg_pp0_iter12 = 1'b0;
#0 ap_enable_reg_pp0_iter13 = 1'b0;
#0 ap_enable_reg_pp0_iter14 = 1'b0;
#0 ap_enable_reg_pp0_iter15 = 1'b0;
#0 ap_enable_reg_pp0_iter16 = 1'b0;
end

fft_stage_1237_W_eOg #(
    .DataWidth( 32 ),
    .AddressRange( 512 ),
    .AddressWidth( 9 ))
W_real270_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(W_real270_address0),
    .ce0(W_real270_ce0),
    .q0(W_real270_q0)
);

fft_stage_1237_W_fYi #(
    .DataWidth( 32 ),
    .AddressRange( 512 ),
    .AddressWidth( 9 ))
W_imag262_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(W_imag262_address0),
    .ce0(W_imag262_ce0),
    .q0(W_imag262_q0)
);

music_fsub_32ns_3bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fsub_32ns_3bkb_U120(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_reg_440),
    .din1(tmp_s_reg_445),
    .ce(1'b1),
    .dout(grp_fu_221_p2)
);

music_fadd_32ns_3cud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fadd_32ns_3cud_U121(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_49_reg_450),
    .din1(tmp_50_reg_455),
    .ce(1'b1),
    .dout(grp_fu_225_p2)
);

music_fsub_32ns_3bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fsub_32ns_3bkb_U122(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_R_8_load_1_reg_488),
    .din1(temp_R_reg_476),
    .ce(1'b1),
    .dout(grp_fu_229_p2)
);

music_fsub_32ns_3bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fsub_32ns_3bkb_U123(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_I_8_load_1_reg_494),
    .din1(temp_I_reg_482),
    .ce(1'b1),
    .dout(grp_fu_233_p2)
);

music_fadd_32ns_3cud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fadd_32ns_3cud_U124(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_R_8_load_1_reg_488),
    .din1(temp_R_reg_476),
    .ce(1'b1),
    .dout(grp_fu_237_p2)
);

music_fadd_32ns_3cud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fadd_32ns_3cud_U125(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_I_8_load_1_reg_494),
    .din1(temp_I_reg_482),
    .ce(1'b1),
    .dout(grp_fu_241_p2)
);

music_fmul_32ns_3dEe #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3dEe_U126(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_R_8_load_reg_428),
    .din1(W_real270_load_reg_416),
    .ce(1'b1),
    .dout(grp_fu_245_p2)
);

music_fmul_32ns_3dEe #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3dEe_U127(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_I_8_load_reg_434),
    .din1(W_imag262_load_reg_422),
    .ce(1'b1),
    .dout(grp_fu_249_p2)
);

music_fmul_32ns_3dEe #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3dEe_U128(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_I_8_load_reg_434),
    .din1(W_real270_load_reg_416),
    .ce(1'b1),
    .dout(grp_fu_253_p2)
);

music_fmul_32ns_3dEe #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3dEe_U129(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(X_R_8_load_reg_428),
    .din1(W_imag262_load_reg_422),
    .ce(1'b1),
    .dout(grp_fu_257_p2)
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
        end else if ((1'b1 == ap_CS_fsm_state19)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
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
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter11 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter11 <= ap_enable_reg_pp0_iter10;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter12 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter12 <= ap_enable_reg_pp0_iter11;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter13 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter13 <= ap_enable_reg_pp0_iter12;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter14 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter14 <= ap_enable_reg_pp0_iter13;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter15 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter15 <= ap_enable_reg_pp0_iter14;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter16 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter16 <= ap_enable_reg_pp0_iter15;
        end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter16 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_fu_261_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_188 <= add_ln145_fu_267_p2;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_188 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_0_reg_199 <= select_ln145_reg_385;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_0_reg_199 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_fu_261_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        t_0_reg_210 <= t_fu_355_p2;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        t_0_reg_210 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        W_imag262_load_reg_422 <= W_imag262_q0;
        W_real270_load_reg_416 <= W_real270_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter10 == 1'b1) & (icmp_ln145_reg_366_pp0_iter9_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_I_8_load_1_reg_494 <= X_I_8_q1;
        X_R_8_load_1_reg_488 <= X_R_8_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_I_8_load_reg_434 <= X_I_8_q0;
        X_R_8_load_reg_428 <= X_R_8_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_fu_261_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_390 <= i_fu_335_p3;
        zext_ln156_reg_395[9 : 0] <= zext_ln156_fu_349_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_390_pp0_iter1_reg <= i_reg_390;
        icmp_ln145_reg_366 <= icmp_ln145_fu_261_p2;
        icmp_ln145_reg_366_pp0_iter1_reg <= icmp_ln145_reg_366;
        zext_ln156_reg_395_pp0_iter1_reg[9 : 0] <= zext_ln156_reg_395[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        i_reg_390_pp0_iter2_reg <= i_reg_390_pp0_iter1_reg;
        i_reg_390_pp0_iter3_reg <= i_reg_390_pp0_iter2_reg;
        i_reg_390_pp0_iter4_reg <= i_reg_390_pp0_iter3_reg;
        i_reg_390_pp0_iter5_reg <= i_reg_390_pp0_iter4_reg;
        i_reg_390_pp0_iter6_reg <= i_reg_390_pp0_iter5_reg;
        i_reg_390_pp0_iter7_reg <= i_reg_390_pp0_iter6_reg;
        i_reg_390_pp0_iter8_reg <= i_reg_390_pp0_iter7_reg;
        icmp_ln145_reg_366_pp0_iter10_reg <= icmp_ln145_reg_366_pp0_iter9_reg;
        icmp_ln145_reg_366_pp0_iter11_reg <= icmp_ln145_reg_366_pp0_iter10_reg;
        icmp_ln145_reg_366_pp0_iter12_reg <= icmp_ln145_reg_366_pp0_iter11_reg;
        icmp_ln145_reg_366_pp0_iter13_reg <= icmp_ln145_reg_366_pp0_iter12_reg;
        icmp_ln145_reg_366_pp0_iter14_reg <= icmp_ln145_reg_366_pp0_iter13_reg;
        icmp_ln145_reg_366_pp0_iter15_reg <= icmp_ln145_reg_366_pp0_iter14_reg;
        icmp_ln145_reg_366_pp0_iter2_reg <= icmp_ln145_reg_366_pp0_iter1_reg;
        icmp_ln145_reg_366_pp0_iter3_reg <= icmp_ln145_reg_366_pp0_iter2_reg;
        icmp_ln145_reg_366_pp0_iter4_reg <= icmp_ln145_reg_366_pp0_iter3_reg;
        icmp_ln145_reg_366_pp0_iter5_reg <= icmp_ln145_reg_366_pp0_iter4_reg;
        icmp_ln145_reg_366_pp0_iter6_reg <= icmp_ln145_reg_366_pp0_iter5_reg;
        icmp_ln145_reg_366_pp0_iter7_reg <= icmp_ln145_reg_366_pp0_iter6_reg;
        icmp_ln145_reg_366_pp0_iter8_reg <= icmp_ln145_reg_366_pp0_iter7_reg;
        icmp_ln145_reg_366_pp0_iter9_reg <= icmp_ln145_reg_366_pp0_iter8_reg;
        zext_ln156_reg_395_pp0_iter10_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter9_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter11_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter10_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter12_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter11_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter13_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter12_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter14_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter13_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter15_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter14_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter2_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter1_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter3_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter2_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter4_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter3_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter5_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter4_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter6_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter5_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter7_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter6_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter8_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter7_reg[9 : 0];
        zext_ln156_reg_395_pp0_iter9_reg[9 : 0] <= zext_ln156_reg_395_pp0_iter8_reg[9 : 0];
        zext_ln158_reg_460_pp0_iter10_reg[9 : 0] <= zext_ln158_reg_460[9 : 0];
        zext_ln158_reg_460_pp0_iter11_reg[9 : 0] <= zext_ln158_reg_460_pp0_iter10_reg[9 : 0];
        zext_ln158_reg_460_pp0_iter12_reg[9 : 0] <= zext_ln158_reg_460_pp0_iter11_reg[9 : 0];
        zext_ln158_reg_460_pp0_iter13_reg[9 : 0] <= zext_ln158_reg_460_pp0_iter12_reg[9 : 0];
        zext_ln158_reg_460_pp0_iter14_reg[9 : 0] <= zext_ln158_reg_460_pp0_iter13_reg[9 : 0];
        zext_ln158_reg_460_pp0_iter15_reg[9 : 0] <= zext_ln158_reg_460_pp0_iter14_reg[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_fu_261_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        select_ln145_reg_385 <= select_ln145_fu_323_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366_pp0_iter9_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        temp_I_reg_482 <= grp_fu_225_p2;
        temp_R_reg_476 <= grp_fu_221_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366_pp0_iter4_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_49_reg_450 <= grp_fu_253_p2;
        tmp_50_reg_455 <= grp_fu_257_p2;
        tmp_reg_440 <= grp_fu_245_p2;
        tmp_s_reg_445 <= grp_fu_249_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366_pp0_iter14_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_51_reg_500 <= grp_fu_229_p2;
        tmp_52_reg_505 <= grp_fu_233_p2;
        tmp_53_reg_510 <= grp_fu_237_p2;
        tmp_54_reg_515 <= grp_fu_241_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln145_reg_366_pp0_iter8_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        zext_ln158_reg_460[9 : 0] <= zext_ln158_fu_361_p1[9 : 0];
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_I_9_ce0 = 1'b1;
    end else begin
        Out_I_9_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_I_9_ce1 = 1'b1;
    end else begin
        Out_I_9_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (icmp_ln145_reg_366_pp0_iter15_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_I_9_we0 = 1'b1;
    end else begin
        Out_I_9_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (icmp_ln145_reg_366_pp0_iter15_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_I_9_we1 = 1'b1;
    end else begin
        Out_I_9_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_9_ce0 = 1'b1;
    end else begin
        Out_R_9_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_9_ce1 = 1'b1;
    end else begin
        Out_R_9_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (icmp_ln145_reg_366_pp0_iter15_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_9_we0 = 1'b1;
    end else begin
        Out_R_9_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter16 == 1'b1) & (icmp_ln145_reg_366_pp0_iter15_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        Out_R_9_we1 = 1'b1;
    end else begin
        Out_R_9_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        W_imag262_ce0 = 1'b1;
    end else begin
        W_imag262_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        W_real270_ce0 = 1'b1;
    end else begin
        W_real270_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_I_8_ce0 = 1'b1;
    end else begin
        X_I_8_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_I_8_ce1 = 1'b1;
    end else begin
        X_I_8_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_R_8_ce0 = 1'b1;
    end else begin
        X_R_8_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        X_R_8_ce1 = 1'b1;
    end else begin
        X_R_8_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln145_fu_261_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
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
    if (((ap_enable_reg_pp0_iter16 == 1'b0) & (ap_enable_reg_pp0_iter15 == 1'b0) & (ap_enable_reg_pp0_iter14 == 1'b0) & (ap_enable_reg_pp0_iter13 == 1'b0) & (ap_enable_reg_pp0_iter12 == 1'b0) & (ap_enable_reg_pp0_iter11 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln145_reg_366 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_j_0_phi_fu_203_p4 = select_ln145_reg_385;
    end else begin
        ap_phi_mux_j_0_phi_fu_203_p4 = j_0_reg_199;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
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
            if ((~((icmp_ln145_fu_261_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & ~((ap_enable_reg_pp0_iter15 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter16 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter15 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter16 == 1'b1)) | ((icmp_ln145_fu_261_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Out_I_9_address0 = zext_ln156_reg_395_pp0_iter15_reg;

assign Out_I_9_address1 = zext_ln158_reg_460_pp0_iter15_reg;

assign Out_I_9_d0 = tmp_52_reg_505;

assign Out_I_9_d1 = tmp_54_reg_515;

assign Out_R_9_address0 = zext_ln156_reg_395_pp0_iter15_reg;

assign Out_R_9_address1 = zext_ln158_reg_460_pp0_iter15_reg;

assign Out_R_9_d0 = tmp_51_reg_500;

assign Out_R_9_d1 = tmp_53_reg_510;

assign W_imag262_address0 = zext_ln152_fu_317_p1;

assign W_real270_address0 = zext_ln152_fu_317_p1;

assign X_I_8_address0 = zext_ln156_fu_349_p1;

assign X_I_8_address1 = zext_ln158_fu_361_p1;

assign X_R_8_address0 = zext_ln156_fu_349_p1;

assign X_R_8_address1 = zext_ln158_fu_361_p1;

assign add_ln145_fu_267_p2 = (indvar_flatten_reg_188 + 10'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state10_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter10 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter11 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp0_stage0_iter12 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp0_stage0_iter13 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp0_stage0_iter14 = ~(1'b1 == 1'b1);

assign ap_block_state17_pp0_stage0_iter15 = ~(1'b1 == 1'b1);

assign ap_block_state18_pp0_stage0_iter16 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign i_fu_335_p3 = {{trunc_ln149_fu_331_p1}, {select_ln145_fu_323_p3}};

assign i_lower_fu_343_p2 = (10'd256 + i_fu_335_p3);

assign icmp_ln145_fu_261_p2 = ((indvar_flatten_reg_188 == 10'd512) ? 1'b1 : 1'b0);

assign icmp_ln148_fu_279_p2 = ((t_0_reg_210 == 2'd2) ? 1'b1 : 1'b0);

assign j_fu_273_p2 = (9'd1 + ap_phi_mux_j_0_phi_fu_203_p4);

assign select_ln145_fu_323_p3 = ((icmp_ln148_fu_279_p2[0:0] === 1'b1) ? j_fu_273_p2 : ap_phi_mux_j_0_phi_fu_203_p4);

assign select_ln152_1_v_fu_309_p3 = {{select_ln152_2_fu_301_p3}, {1'd0}};

assign select_ln152_2_fu_301_p3 = ((icmp_ln148_fu_279_p2[0:0] === 1'b1) ? trunc_ln152_fu_293_p1 : trunc_ln152_1_fu_297_p1);

assign select_ln152_fu_285_p3 = ((icmp_ln148_fu_279_p2[0:0] === 1'b1) ? 2'd0 : t_0_reg_210);

assign t_fu_355_p2 = (2'd1 + select_ln152_fu_285_p3);

assign trunc_ln149_fu_331_p1 = select_ln152_fu_285_p3[0:0];

assign trunc_ln152_1_fu_297_p1 = ap_phi_mux_j_0_phi_fu_203_p4[7:0];

assign trunc_ln152_fu_293_p1 = j_fu_273_p2[7:0];

assign zext_ln152_fu_317_p1 = select_ln152_1_v_fu_309_p3;

assign zext_ln156_fu_349_p1 = i_lower_fu_343_p2;

assign zext_ln158_fu_361_p1 = i_reg_390_pp0_iter8_reg;

always @ (posedge ap_clk) begin
    zext_ln156_reg_395[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter1_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter2_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter3_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter4_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter5_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter6_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter7_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter8_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter9_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter10_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter11_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter12_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter13_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter14_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln156_reg_395_pp0_iter15_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460_pp0_iter10_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460_pp0_iter11_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460_pp0_iter12_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460_pp0_iter13_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460_pp0_iter14_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    zext_ln158_reg_460_pp0_iter15_reg[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //fft_stage_1244