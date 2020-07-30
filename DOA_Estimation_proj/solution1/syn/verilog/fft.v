// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fft (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        X_R_address0,
        X_R_ce0,
        X_R_we0,
        X_R_d0,
        X_R_q0,
        X_R_address1,
        X_R_ce1,
        X_R_we1,
        X_R_d1,
        X_R_q1,
        X_I_address0,
        X_I_ce0,
        X_I_we0,
        X_I_d0,
        X_I_q0,
        X_I_address1,
        X_I_ce1,
        X_I_we1,
        X_I_d1,
        X_I_q1
);

parameter    ap_ST_fsm_state1 = 71'd1;
parameter    ap_ST_fsm_state2 = 71'd2;
parameter    ap_ST_fsm_state3 = 71'd4;
parameter    ap_ST_fsm_state4 = 71'd8;
parameter    ap_ST_fsm_state5 = 71'd16;
parameter    ap_ST_fsm_state6 = 71'd32;
parameter    ap_ST_fsm_state7 = 71'd64;
parameter    ap_ST_fsm_state8 = 71'd128;
parameter    ap_ST_fsm_state9 = 71'd256;
parameter    ap_ST_fsm_state10 = 71'd512;
parameter    ap_ST_fsm_state11 = 71'd1024;
parameter    ap_ST_fsm_state12 = 71'd2048;
parameter    ap_ST_fsm_state13 = 71'd4096;
parameter    ap_ST_fsm_state14 = 71'd8192;
parameter    ap_ST_fsm_state15 = 71'd16384;
parameter    ap_ST_fsm_state16 = 71'd32768;
parameter    ap_ST_fsm_state17 = 71'd65536;
parameter    ap_ST_fsm_state18 = 71'd131072;
parameter    ap_ST_fsm_state19 = 71'd262144;
parameter    ap_ST_fsm_state20 = 71'd524288;
parameter    ap_ST_fsm_state21 = 71'd1048576;
parameter    ap_ST_fsm_state22 = 71'd2097152;
parameter    ap_ST_fsm_state23 = 71'd4194304;
parameter    ap_ST_fsm_state24 = 71'd8388608;
parameter    ap_ST_fsm_state25 = 71'd16777216;
parameter    ap_ST_fsm_state26 = 71'd33554432;
parameter    ap_ST_fsm_state27 = 71'd67108864;
parameter    ap_ST_fsm_state28 = 71'd134217728;
parameter    ap_ST_fsm_state29 = 71'd268435456;
parameter    ap_ST_fsm_state30 = 71'd536870912;
parameter    ap_ST_fsm_state31 = 71'd1073741824;
parameter    ap_ST_fsm_state32 = 71'd2147483648;
parameter    ap_ST_fsm_state33 = 71'd4294967296;
parameter    ap_ST_fsm_state34 = 71'd8589934592;
parameter    ap_ST_fsm_state35 = 71'd17179869184;
parameter    ap_ST_fsm_state36 = 71'd34359738368;
parameter    ap_ST_fsm_state37 = 71'd68719476736;
parameter    ap_ST_fsm_state38 = 71'd137438953472;
parameter    ap_ST_fsm_state39 = 71'd274877906944;
parameter    ap_ST_fsm_state40 = 71'd549755813888;
parameter    ap_ST_fsm_state41 = 71'd1099511627776;
parameter    ap_ST_fsm_state42 = 71'd2199023255552;
parameter    ap_ST_fsm_state43 = 71'd4398046511104;
parameter    ap_ST_fsm_state44 = 71'd8796093022208;
parameter    ap_ST_fsm_state45 = 71'd17592186044416;
parameter    ap_ST_fsm_state46 = 71'd35184372088832;
parameter    ap_ST_fsm_state47 = 71'd70368744177664;
parameter    ap_ST_fsm_state48 = 71'd140737488355328;
parameter    ap_ST_fsm_state49 = 71'd281474976710656;
parameter    ap_ST_fsm_state50 = 71'd562949953421312;
parameter    ap_ST_fsm_state51 = 71'd1125899906842624;
parameter    ap_ST_fsm_state52 = 71'd2251799813685248;
parameter    ap_ST_fsm_state53 = 71'd4503599627370496;
parameter    ap_ST_fsm_state54 = 71'd9007199254740992;
parameter    ap_ST_fsm_state55 = 71'd18014398509481984;
parameter    ap_ST_fsm_state56 = 71'd36028797018963968;
parameter    ap_ST_fsm_state57 = 71'd72057594037927936;
parameter    ap_ST_fsm_state58 = 71'd144115188075855872;
parameter    ap_ST_fsm_state59 = 71'd288230376151711744;
parameter    ap_ST_fsm_state60 = 71'd576460752303423488;
parameter    ap_ST_fsm_state61 = 71'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 71'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 71'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 71'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 71'd18446744073709551616;
parameter    ap_ST_fsm_state66 = 71'd36893488147419103232;
parameter    ap_ST_fsm_state67 = 71'd73786976294838206464;
parameter    ap_ST_fsm_state68 = 71'd147573952589676412928;
parameter    ap_ST_fsm_state69 = 71'd295147905179352825856;
parameter    ap_ST_fsm_state70 = 71'd590295810358705651712;
parameter    ap_ST_fsm_state71 = 71'd1180591620717411303424;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] X_R_address0;
output   X_R_ce0;
output   X_R_we0;
output  [31:0] X_R_d0;
input  [31:0] X_R_q0;
output  [9:0] X_R_address1;
output   X_R_ce1;
output   X_R_we1;
output  [31:0] X_R_d1;
input  [31:0] X_R_q1;
output  [9:0] X_I_address0;
output   X_I_ce0;
output   X_I_we0;
output  [31:0] X_I_d0;
input  [31:0] X_I_q0;
output  [9:0] X_I_address1;
output   X_I_ce1;
output   X_I_we1;
output  [31:0] X_I_d1;
input  [31:0] X_I_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] X_R_address0;
reg X_R_ce0;
reg X_R_we0;
reg[31:0] X_R_d0;
reg X_R_ce1;
reg X_R_we1;
reg[9:0] X_I_address0;
reg X_I_ce0;
reg X_I_we0;
reg[31:0] X_I_d0;
reg X_I_ce1;
reg X_I_we1;

(* fsm_encoding = "none" *) reg   [70:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [31:0] reg_228;
wire    ap_CS_fsm_state48;
wire    ap_CS_fsm_state57;
wire    ap_CS_fsm_state65;
reg   [31:0] reg_235;
wire   [31:0] grp_fu_192_p2;
reg   [31:0] reg_242;
wire    ap_CS_fsm_state70;
wire   [31:0] grp_fu_197_p2;
reg   [31:0] reg_248;
wire   [31:0] zext_ln161_fu_270_p1;
reg   [31:0] zext_ln161_reg_350;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln159_fu_258_p2;
reg   [9:0] trunc_ln_reg_356;
wire   [63:0] grp_fu_225_p1;
reg   [63:0] tmp_reg_362;
wire    ap_CS_fsm_state8;
wire   [63:0] grp_fu_220_p2;
reg   [63:0] tmp_s_reg_367;
wire    ap_CS_fsm_state39;
wire   [31:0] numBF_fu_285_p1;
reg   [31:0] numBF_reg_372;
wire    ap_CS_fsm_state41;
wire   [31:0] grp_fu_217_p1;
reg   [31:0] e_reg_377;
wire   [31:0] i_cast_fu_288_p1;
reg   [31:0] i_cast_reg_382;
wire    ap_CS_fsm_state42;
wire   [9:0] j_fu_297_p2;
reg   [9:0] j_reg_390;
wire   [3:0] stage_fu_303_p2;
wire   [0:0] icmp_ln169_fu_292_p2;
wire   [31:0] grp_sin_or_cos_float_s_fu_152_ap_return;
reg   [31:0] c_reg_400;
wire    ap_CS_fsm_state46;
wire    grp_sin_or_cos_float_s_fu_152_ap_ready;
wire    grp_sin_or_cos_float_s_fu_152_ap_done;
wire    grp_sin_or_cos_float_s_fu_168_ap_ready;
wire    grp_sin_or_cos_float_s_fu_168_ap_done;
reg    ap_block_state46_on_subcall_done;
wire   [31:0] grp_sin_or_cos_float_s_fu_168_ap_return;
reg   [31:0] s_reg_406;
reg   [31:0] a_reg_412;
reg   [9:0] X_R_addr_reg_420;
wire    ap_CS_fsm_state47;
wire   [0:0] icmp_ln177_fu_319_p2;
reg   [9:0] X_I_addr_reg_425;
reg   [9:0] X_R_addr_1_reg_430;
reg   [9:0] X_I_addr_1_reg_435;
wire   [31:0] i_8_fu_342_p2;
reg   [31:0] i_8_reg_440;
wire   [31:0] grp_fu_201_p2;
reg   [31:0] tmp_19_reg_445;
wire    ap_CS_fsm_state52;
wire   [31:0] grp_fu_205_p2;
reg   [31:0] tmp_20_reg_450;
wire   [31:0] grp_fu_209_p2;
reg   [31:0] tmp_21_reg_455;
wire   [31:0] grp_fu_213_p2;
reg   [31:0] tmp_22_reg_460;
reg   [31:0] tmp_23_reg_465;
wire    ap_CS_fsm_state62;
reg   [31:0] tmp_24_reg_470;
wire    grp_sin_or_cos_float_s_fu_152_ap_start;
wire    grp_sin_or_cos_float_s_fu_152_ap_idle;
wire    grp_sin_or_cos_float_s_fu_152_do_cos;
wire    grp_sin_or_cos_float_s_fu_168_ap_start;
wire    grp_sin_or_cos_float_s_fu_168_ap_idle;
wire    grp_sin_or_cos_float_s_fu_168_do_cos;
wire    grp_bit_reverse_fu_184_ap_start;
wire    grp_bit_reverse_fu_184_ap_done;
wire    grp_bit_reverse_fu_184_ap_idle;
wire    grp_bit_reverse_fu_184_ap_ready;
wire   [9:0] grp_bit_reverse_fu_184_X_R_address0;
wire    grp_bit_reverse_fu_184_X_R_ce0;
wire    grp_bit_reverse_fu_184_X_R_we0;
wire   [31:0] grp_bit_reverse_fu_184_X_R_d0;
wire   [9:0] grp_bit_reverse_fu_184_X_R_address1;
wire    grp_bit_reverse_fu_184_X_R_ce1;
wire    grp_bit_reverse_fu_184_X_R_we1;
wire   [31:0] grp_bit_reverse_fu_184_X_R_d1;
wire   [9:0] grp_bit_reverse_fu_184_X_I_address0;
wire    grp_bit_reverse_fu_184_X_I_ce0;
wire    grp_bit_reverse_fu_184_X_I_we0;
wire   [31:0] grp_bit_reverse_fu_184_X_I_d0;
wire   [9:0] grp_bit_reverse_fu_184_X_I_address1;
wire    grp_bit_reverse_fu_184_X_I_ce1;
wire    grp_bit_reverse_fu_184_X_I_we1;
wire   [31:0] grp_bit_reverse_fu_184_X_I_d1;
reg   [3:0] stage_0_reg_108;
wire    ap_CS_fsm_state2;
reg   [9:0] i_reg_120;
reg   [31:0] p_x_assign_reg_131;
reg  signed [31:0] i_0_reg_143;
wire    ap_CS_fsm_state71;
reg    grp_sin_or_cos_float_s_fu_152_ap_start_reg;
wire    ap_CS_fsm_state45;
reg    grp_sin_or_cos_float_s_fu_168_ap_start_reg;
reg    grp_bit_reverse_fu_184_ap_start_reg;
wire  signed [63:0] sext_ln181_fu_330_p1;
wire  signed [63:0] sext_ln184_fu_336_p1;
wire    ap_CS_fsm_state56;
wire    ap_CS_fsm_state63;
wire    ap_CS_fsm_state64;
reg   [31:0] grp_fu_192_p0;
reg   [31:0] grp_fu_192_p1;
wire    ap_CS_fsm_state53;
wire    ap_CS_fsm_state58;
wire    ap_CS_fsm_state66;
reg   [31:0] grp_fu_197_p0;
reg   [31:0] grp_fu_197_p1;
wire    ap_CS_fsm_state49;
wire    ap_CS_fsm_state40;
wire    ap_CS_fsm_state9;
wire   [31:0] grp_fu_225_p0;
wire   [10:0] zext_ln159_fu_254_p1;
wire   [10:0] DFTpts_fu_264_p2;
wire   [21:0] tmp_42_fu_309_p4;
wire   [31:0] i_lower_fu_325_p2;
reg   [1:0] grp_fu_192_opcode;
reg    grp_fu_192_ce;
wire    ap_CS_fsm_state43;
wire    ap_CS_fsm_state44;
wire    ap_CS_fsm_state54;
wire    ap_CS_fsm_state55;
wire    ap_CS_fsm_state59;
wire    ap_CS_fsm_state60;
wire    ap_CS_fsm_state61;
wire    ap_CS_fsm_state67;
wire    ap_CS_fsm_state68;
wire    ap_CS_fsm_state69;
reg   [1:0] grp_fu_197_opcode;
reg   [70:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 71'd1;
#0 grp_sin_or_cos_float_s_fu_152_ap_start_reg = 1'b0;
#0 grp_sin_or_cos_float_s_fu_168_ap_start_reg = 1'b0;
#0 grp_bit_reverse_fu_184_ap_start_reg = 1'b0;
end

sin_or_cos_float_s grp_sin_or_cos_float_s_fu_152(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sin_or_cos_float_s_fu_152_ap_start),
    .ap_done(grp_sin_or_cos_float_s_fu_152_ap_done),
    .ap_idle(grp_sin_or_cos_float_s_fu_152_ap_idle),
    .ap_ready(grp_sin_or_cos_float_s_fu_152_ap_ready),
    .t_in(p_x_assign_reg_131),
    .do_cos(grp_sin_or_cos_float_s_fu_152_do_cos),
    .ap_return(grp_sin_or_cos_float_s_fu_152_ap_return)
);

sin_or_cos_float_s grp_sin_or_cos_float_s_fu_168(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sin_or_cos_float_s_fu_168_ap_start),
    .ap_done(grp_sin_or_cos_float_s_fu_168_ap_done),
    .ap_idle(grp_sin_or_cos_float_s_fu_168_ap_idle),
    .ap_ready(grp_sin_or_cos_float_s_fu_168_ap_ready),
    .t_in(p_x_assign_reg_131),
    .do_cos(grp_sin_or_cos_float_s_fu_168_do_cos),
    .ap_return(grp_sin_or_cos_float_s_fu_168_ap_return)
);

bit_reverse grp_bit_reverse_fu_184(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_bit_reverse_fu_184_ap_start),
    .ap_done(grp_bit_reverse_fu_184_ap_done),
    .ap_idle(grp_bit_reverse_fu_184_ap_idle),
    .ap_ready(grp_bit_reverse_fu_184_ap_ready),
    .X_R_address0(grp_bit_reverse_fu_184_X_R_address0),
    .X_R_ce0(grp_bit_reverse_fu_184_X_R_ce0),
    .X_R_we0(grp_bit_reverse_fu_184_X_R_we0),
    .X_R_d0(grp_bit_reverse_fu_184_X_R_d0),
    .X_R_q0(X_R_q0),
    .X_R_address1(grp_bit_reverse_fu_184_X_R_address1),
    .X_R_ce1(grp_bit_reverse_fu_184_X_R_ce1),
    .X_R_we1(grp_bit_reverse_fu_184_X_R_we1),
    .X_R_d1(grp_bit_reverse_fu_184_X_R_d1),
    .X_R_q1(X_R_q1),
    .X_I_address0(grp_bit_reverse_fu_184_X_I_address0),
    .X_I_ce0(grp_bit_reverse_fu_184_X_I_ce0),
    .X_I_we0(grp_bit_reverse_fu_184_X_I_we0),
    .X_I_d0(grp_bit_reverse_fu_184_X_I_d0),
    .X_I_q0(X_I_q0),
    .X_I_address1(grp_bit_reverse_fu_184_X_I_address1),
    .X_I_ce1(grp_bit_reverse_fu_184_X_I_ce1),
    .X_I_we1(grp_bit_reverse_fu_184_X_I_we1),
    .X_I_d1(grp_bit_reverse_fu_184_X_I_d1),
    .X_I_q1(X_I_q1)
);

music_faddfsub_32ibs #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_faddfsub_32ibs_U23(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_192_p0),
    .din1(grp_fu_192_p1),
    .opcode(grp_fu_192_opcode),
    .ce(grp_fu_192_ce),
    .dout(grp_fu_192_p2)
);

music_faddfsub_32ibs #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_faddfsub_32ibs_U24(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_197_p0),
    .din1(grp_fu_197_p1),
    .opcode(grp_fu_197_opcode),
    .ce(1'b1),
    .dout(grp_fu_197_p2)
);

music_fmul_32ns_3jbC #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3jbC_U25(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_228),
    .din1(c_reg_400),
    .ce(1'b1),
    .dout(grp_fu_201_p2)
);

music_fmul_32ns_3jbC #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3jbC_U26(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_235),
    .din1(s_reg_406),
    .ce(1'b1),
    .dout(grp_fu_205_p2)
);

music_fmul_32ns_3jbC #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3jbC_U27(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_235),
    .din1(c_reg_400),
    .ce(1'b1),
    .dout(grp_fu_209_p2)
);

music_fmul_32ns_3jbC #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
music_fmul_32ns_3jbC_U28(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_228),
    .din1(s_reg_406),
    .ce(1'b1),
    .dout(grp_fu_213_p2)
);

music_fptrunc_64nkbM #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
music_fptrunc_64nkbM_U29(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_s_reg_367),
    .ce(1'b1),
    .dout(grp_fu_217_p1)
);

music_ddiv_64ns_6lbW #(
    .ID( 1 ),
    .NUM_STAGE( 31 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
music_ddiv_64ns_6lbW_U30(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(64'd13842132293034190366),
    .din1(tmp_reg_362),
    .ce(1'b1),
    .dout(grp_fu_220_p2)
);

music_sitodp_32nsmb6 #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
music_sitodp_32nsmb6_U31(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_225_p0),
    .ce(1'b1),
    .dout(grp_fu_225_p1)
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
        grp_bit_reverse_fu_184_ap_start_reg <= 1'b0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            grp_bit_reverse_fu_184_ap_start_reg <= 1'b1;
        end else if ((grp_bit_reverse_fu_184_ap_ready == 1'b1)) begin
            grp_bit_reverse_fu_184_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sin_or_cos_float_s_fu_152_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state45)) begin
            grp_sin_or_cos_float_s_fu_152_ap_start_reg <= 1'b1;
        end else if ((grp_sin_or_cos_float_s_fu_152_ap_ready == 1'b1)) begin
            grp_sin_or_cos_float_s_fu_152_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sin_or_cos_float_s_fu_168_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state45)) begin
            grp_sin_or_cos_float_s_fu_168_ap_start_reg <= 1'b1;
        end else if ((grp_sin_or_cos_float_s_fu_168_ap_ready == 1'b1)) begin
            grp_sin_or_cos_float_s_fu_168_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state71)) begin
        i_0_reg_143 <= i_8_reg_440;
    end else if (((1'b0 == ap_block_state46_on_subcall_done) & (1'b1 == ap_CS_fsm_state46))) begin
        i_0_reg_143 <= i_cast_reg_382;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state47) & (icmp_ln177_fu_319_p2 == 1'd0))) begin
        i_reg_120 <= j_reg_390;
    end else if ((1'b1 == ap_CS_fsm_state41)) begin
        i_reg_120 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state47) & (icmp_ln177_fu_319_p2 == 1'd0))) begin
        p_x_assign_reg_131 <= a_reg_412;
    end else if ((1'b1 == ap_CS_fsm_state41)) begin
        p_x_assign_reg_131 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state42) & (icmp_ln169_fu_292_p2 == 1'd1))) begin
        stage_0_reg_108 <= stage_fu_303_p2;
    end else if (((grp_bit_reverse_fu_184_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        stage_0_reg_108 <= 4'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state47) & (icmp_ln177_fu_319_p2 == 1'd1))) begin
        X_I_addr_1_reg_435 <= sext_ln184_fu_336_p1;
        X_I_addr_reg_425 <= sext_ln181_fu_330_p1;
        X_R_addr_1_reg_430 <= sext_ln184_fu_336_p1;
        X_R_addr_reg_420 <= sext_ln181_fu_330_p1;
        i_8_reg_440 <= i_8_fu_342_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_state46_on_subcall_done) & (1'b1 == ap_CS_fsm_state46))) begin
        a_reg_412 <= grp_fu_192_p2;
        c_reg_400 <= grp_sin_or_cos_float_s_fu_152_ap_return;
        s_reg_406 <= grp_sin_or_cos_float_s_fu_168_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state41)) begin
        e_reg_377 <= grp_fu_217_p1;
        numBF_reg_372[9 : 0] <= numBF_fu_285_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        i_cast_reg_382[9 : 0] <= i_cast_fu_288_p1[9 : 0];
        j_reg_390 <= j_fu_297_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state65) | (1'b1 == ap_CS_fsm_state57) | (1'b1 == ap_CS_fsm_state48))) begin
        reg_228 <= X_R_q0;
        reg_235 <= X_I_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state70) | (1'b1 == ap_CS_fsm_state57))) begin
        reg_242 <= grp_fu_192_p2;
        reg_248 <= grp_fu_197_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state52)) begin
        tmp_19_reg_445 <= grp_fu_201_p2;
        tmp_20_reg_450 <= grp_fu_205_p2;
        tmp_21_reg_455 <= grp_fu_209_p2;
        tmp_22_reg_460 <= grp_fu_213_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state62)) begin
        tmp_23_reg_465 <= grp_fu_192_p2;
        tmp_24_reg_470 <= grp_fu_197_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_reg_362 <= grp_fu_225_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state39)) begin
        tmp_s_reg_367 <= grp_fu_220_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln159_fu_258_p2 == 1'd0))) begin
        trunc_ln_reg_356 <= {{DFTpts_fu_264_p2[10:1]}};
        zext_ln161_reg_350[10 : 0] <= zext_ln161_fu_270_p1[10 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state63)) begin
        X_I_address0 = X_I_addr_reg_425;
    end else if (((1'b1 == ap_CS_fsm_state64) | (1'b1 == ap_CS_fsm_state56) | (1'b1 == ap_CS_fsm_state71))) begin
        X_I_address0 = X_I_addr_1_reg_435;
    end else if ((1'b1 == ap_CS_fsm_state47)) begin
        X_I_address0 = sext_ln181_fu_330_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_I_address0 = grp_bit_reverse_fu_184_X_I_address0;
    end else begin
        X_I_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state64) | (1'b1 == ap_CS_fsm_state63) | (1'b1 == ap_CS_fsm_state56) | (1'b1 == ap_CS_fsm_state71) | (1'b1 == ap_CS_fsm_state47))) begin
        X_I_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_I_ce0 = grp_bit_reverse_fu_184_X_I_ce0;
    end else begin
        X_I_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        X_I_ce1 = grp_bit_reverse_fu_184_X_I_ce1;
    end else begin
        X_I_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state71)) begin
        X_I_d0 = reg_248;
    end else if ((1'b1 == ap_CS_fsm_state63)) begin
        X_I_d0 = tmp_24_reg_470;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_I_d0 = grp_bit_reverse_fu_184_X_I_d0;
    end else begin
        X_I_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state63) | (1'b1 == ap_CS_fsm_state71))) begin
        X_I_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_I_we0 = grp_bit_reverse_fu_184_X_I_we0;
    end else begin
        X_I_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        X_I_we1 = grp_bit_reverse_fu_184_X_I_we1;
    end else begin
        X_I_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state63)) begin
        X_R_address0 = X_R_addr_reg_420;
    end else if (((1'b1 == ap_CS_fsm_state64) | (1'b1 == ap_CS_fsm_state56) | (1'b1 == ap_CS_fsm_state71))) begin
        X_R_address0 = X_R_addr_1_reg_430;
    end else if ((1'b1 == ap_CS_fsm_state47)) begin
        X_R_address0 = sext_ln181_fu_330_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_R_address0 = grp_bit_reverse_fu_184_X_R_address0;
    end else begin
        X_R_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state64) | (1'b1 == ap_CS_fsm_state63) | (1'b1 == ap_CS_fsm_state56) | (1'b1 == ap_CS_fsm_state71) | (1'b1 == ap_CS_fsm_state47))) begin
        X_R_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_R_ce0 = grp_bit_reverse_fu_184_X_R_ce0;
    end else begin
        X_R_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        X_R_ce1 = grp_bit_reverse_fu_184_X_R_ce1;
    end else begin
        X_R_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state71)) begin
        X_R_d0 = reg_242;
    end else if ((1'b1 == ap_CS_fsm_state63)) begin
        X_R_d0 = tmp_23_reg_465;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_R_d0 = grp_bit_reverse_fu_184_X_R_d0;
    end else begin
        X_R_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state63) | (1'b1 == ap_CS_fsm_state71))) begin
        X_R_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        X_R_we0 = grp_bit_reverse_fu_184_X_R_we0;
    end else begin
        X_R_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        X_R_we1 = grp_bit_reverse_fu_184_X_R_we1;
    end else begin
        X_R_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state3) & (icmp_ln159_fu_258_p2 == 1'd1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
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
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln159_fu_258_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state69) | (1'b1 == ap_CS_fsm_state68) | (1'b1 == ap_CS_fsm_state67) | (1'b1 == ap_CS_fsm_state61) | (1'b1 == ap_CS_fsm_state60) | (1'b1 == ap_CS_fsm_state59) | (1'b1 == ap_CS_fsm_state55) | (1'b1 == ap_CS_fsm_state54) | (1'b1 == ap_CS_fsm_state44) | (1'b1 == ap_CS_fsm_state43) | (1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state58) | (1'b1 == ap_CS_fsm_state53) | (1'b1 == ap_CS_fsm_state56) | (1'b1 == ap_CS_fsm_state45) | (1'b1 == ap_CS_fsm_state62) | (1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state70) | (1'b1 == ap_CS_fsm_state57) | ((1'b0 == ap_block_state46_on_subcall_done) & (1'b1 == ap_CS_fsm_state46)))) begin
        grp_fu_192_ce = 1'b1;
    end else begin
        grp_fu_192_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state58) | (1'b1 == ap_CS_fsm_state53))) begin
        grp_fu_192_opcode = 2'd1;
    end else if (((1'b1 == ap_CS_fsm_state66) | ((1'b1 == ap_CS_fsm_state42) & (icmp_ln169_fu_292_p2 == 1'd0)))) begin
        grp_fu_192_opcode = 2'd0;
    end else begin
        grp_fu_192_opcode = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state58))) begin
        grp_fu_192_p0 = reg_228;
    end else if ((1'b1 == ap_CS_fsm_state53)) begin
        grp_fu_192_p0 = tmp_19_reg_445;
    end else if ((1'b1 == ap_CS_fsm_state42)) begin
        grp_fu_192_p0 = p_x_assign_reg_131;
    end else begin
        grp_fu_192_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state58))) begin
        grp_fu_192_p1 = reg_242;
    end else if ((1'b1 == ap_CS_fsm_state53)) begin
        grp_fu_192_p1 = tmp_20_reg_450;
    end else if ((1'b1 == ap_CS_fsm_state42)) begin
        grp_fu_192_p1 = e_reg_377;
    end else begin
        grp_fu_192_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state58)) begin
        grp_fu_197_opcode = 2'd1;
    end else if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state53))) begin
        grp_fu_197_opcode = 2'd0;
    end else begin
        grp_fu_197_opcode = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state58))) begin
        grp_fu_197_p0 = reg_235;
    end else if ((1'b1 == ap_CS_fsm_state53)) begin
        grp_fu_197_p0 = tmp_21_reg_455;
    end else begin
        grp_fu_197_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state58))) begin
        grp_fu_197_p1 = reg_248;
    end else if ((1'b1 == ap_CS_fsm_state53)) begin
        grp_fu_197_p1 = tmp_22_reg_460;
    end else begin
        grp_fu_197_p1 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((grp_bit_reverse_fu_184_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln159_fu_258_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            if (((1'b1 == ap_CS_fsm_state42) & (icmp_ln169_fu_292_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state43;
            end
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            if (((1'b0 == ap_block_state46_on_subcall_done) & (1'b1 == ap_CS_fsm_state46))) begin
                ap_NS_fsm = ap_ST_fsm_state47;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state46;
            end
        end
        ap_ST_fsm_state47 : begin
            if (((1'b1 == ap_CS_fsm_state47) & (icmp_ln177_fu_319_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state42;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state48;
            end
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        ap_ST_fsm_state62 : begin
            ap_NS_fsm = ap_ST_fsm_state63;
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state64;
        end
        ap_ST_fsm_state64 : begin
            ap_NS_fsm = ap_ST_fsm_state65;
        end
        ap_ST_fsm_state65 : begin
            ap_NS_fsm = ap_ST_fsm_state66;
        end
        ap_ST_fsm_state66 : begin
            ap_NS_fsm = ap_ST_fsm_state67;
        end
        ap_ST_fsm_state67 : begin
            ap_NS_fsm = ap_ST_fsm_state68;
        end
        ap_ST_fsm_state68 : begin
            ap_NS_fsm = ap_ST_fsm_state69;
        end
        ap_ST_fsm_state69 : begin
            ap_NS_fsm = ap_ST_fsm_state70;
        end
        ap_ST_fsm_state70 : begin
            ap_NS_fsm = ap_ST_fsm_state71;
        end
        ap_ST_fsm_state71 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign DFTpts_fu_264_p2 = 11'd1 << zext_ln159_fu_254_p1;

assign X_I_address1 = grp_bit_reverse_fu_184_X_I_address1;

assign X_I_d1 = grp_bit_reverse_fu_184_X_I_d1;

assign X_R_address1 = grp_bit_reverse_fu_184_X_R_address1;

assign X_R_d1 = grp_bit_reverse_fu_184_X_R_d1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state39 = ap_CS_fsm[32'd38];

assign ap_CS_fsm_state40 = ap_CS_fsm[32'd39];

assign ap_CS_fsm_state41 = ap_CS_fsm[32'd40];

assign ap_CS_fsm_state42 = ap_CS_fsm[32'd41];

assign ap_CS_fsm_state43 = ap_CS_fsm[32'd42];

assign ap_CS_fsm_state44 = ap_CS_fsm[32'd43];

assign ap_CS_fsm_state45 = ap_CS_fsm[32'd44];

assign ap_CS_fsm_state46 = ap_CS_fsm[32'd45];

assign ap_CS_fsm_state47 = ap_CS_fsm[32'd46];

assign ap_CS_fsm_state48 = ap_CS_fsm[32'd47];

assign ap_CS_fsm_state49 = ap_CS_fsm[32'd48];

assign ap_CS_fsm_state52 = ap_CS_fsm[32'd51];

assign ap_CS_fsm_state53 = ap_CS_fsm[32'd52];

assign ap_CS_fsm_state54 = ap_CS_fsm[32'd53];

assign ap_CS_fsm_state55 = ap_CS_fsm[32'd54];

assign ap_CS_fsm_state56 = ap_CS_fsm[32'd55];

assign ap_CS_fsm_state57 = ap_CS_fsm[32'd56];

assign ap_CS_fsm_state58 = ap_CS_fsm[32'd57];

assign ap_CS_fsm_state59 = ap_CS_fsm[32'd58];

assign ap_CS_fsm_state60 = ap_CS_fsm[32'd59];

assign ap_CS_fsm_state61 = ap_CS_fsm[32'd60];

assign ap_CS_fsm_state62 = ap_CS_fsm[32'd61];

assign ap_CS_fsm_state63 = ap_CS_fsm[32'd62];

assign ap_CS_fsm_state64 = ap_CS_fsm[32'd63];

assign ap_CS_fsm_state65 = ap_CS_fsm[32'd64];

assign ap_CS_fsm_state66 = ap_CS_fsm[32'd65];

assign ap_CS_fsm_state67 = ap_CS_fsm[32'd66];

assign ap_CS_fsm_state68 = ap_CS_fsm[32'd67];

assign ap_CS_fsm_state69 = ap_CS_fsm[32'd68];

assign ap_CS_fsm_state70 = ap_CS_fsm[32'd69];

assign ap_CS_fsm_state71 = ap_CS_fsm[32'd70];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state46_on_subcall_done = ((grp_sin_or_cos_float_s_fu_168_ap_done == 1'b0) | (grp_sin_or_cos_float_s_fu_152_ap_done == 1'b0));
end

assign grp_bit_reverse_fu_184_ap_start = grp_bit_reverse_fu_184_ap_start_reg;

assign grp_fu_225_p0 = DFTpts_fu_264_p2;

assign grp_sin_or_cos_float_s_fu_152_ap_start = grp_sin_or_cos_float_s_fu_152_ap_start_reg;

assign grp_sin_or_cos_float_s_fu_152_do_cos = 1'd1;

assign grp_sin_or_cos_float_s_fu_168_ap_start = grp_sin_or_cos_float_s_fu_168_ap_start_reg;

assign grp_sin_or_cos_float_s_fu_168_do_cos = 1'd0;

assign i_8_fu_342_p2 = ($signed(zext_ln161_reg_350) + $signed(i_0_reg_143));

assign i_cast_fu_288_p1 = i_reg_120;

assign i_lower_fu_325_p2 = ($signed(i_0_reg_143) + $signed(numBF_reg_372));

assign icmp_ln159_fu_258_p2 = ((stage_0_reg_108 == 4'd11) ? 1'b1 : 1'b0);

assign icmp_ln169_fu_292_p2 = ((i_reg_120 == trunc_ln_reg_356) ? 1'b1 : 1'b0);

assign icmp_ln177_fu_319_p2 = (($signed(tmp_42_fu_309_p4) < $signed(22'd1)) ? 1'b1 : 1'b0);

assign j_fu_297_p2 = (i_reg_120 + 10'd1);

assign numBF_fu_285_p1 = trunc_ln_reg_356;

assign sext_ln181_fu_330_p1 = $signed(i_lower_fu_325_p2);

assign sext_ln184_fu_336_p1 = i_0_reg_143;

assign stage_fu_303_p2 = (stage_0_reg_108 + 4'd1);

assign tmp_42_fu_309_p4 = {{i_0_reg_143[31:10]}};

assign zext_ln159_fu_254_p1 = stage_0_reg_108;

assign zext_ln161_fu_270_p1 = DFTpts_fu_264_p2;

always @ (posedge ap_clk) begin
    zext_ln161_reg_350[31:11] <= 21'b000000000000000000000;
    numBF_reg_372[31:10] <= 22'b0000000000000000000000;
    i_cast_reg_382[31:10] <= 22'b0000000000000000000000;
end

endmodule //fft
