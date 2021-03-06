// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sin_or_cos_float_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        t_in,
        do_cos,
        ap_return
);

parameter    ap_ST_fsm_state1 = 17'd1;
parameter    ap_ST_fsm_state2 = 17'd2;
parameter    ap_ST_fsm_state3 = 17'd4;
parameter    ap_ST_fsm_state4 = 17'd8;
parameter    ap_ST_fsm_state5 = 17'd16;
parameter    ap_ST_fsm_state6 = 17'd32;
parameter    ap_ST_fsm_state7 = 17'd64;
parameter    ap_ST_fsm_state8 = 17'd128;
parameter    ap_ST_fsm_state9 = 17'd256;
parameter    ap_ST_fsm_state10 = 17'd512;
parameter    ap_ST_fsm_state11 = 17'd1024;
parameter    ap_ST_fsm_state12 = 17'd2048;
parameter    ap_ST_fsm_state13 = 17'd4096;
parameter    ap_ST_fsm_state14 = 17'd8192;
parameter    ap_ST_fsm_state15 = 17'd16384;
parameter    ap_ST_fsm_state16 = 17'd32768;
parameter    ap_ST_fsm_state17 = 17'd65536;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] t_in;
input   do_cos;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [16:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] ref_4oPi_table_100_V_address0;
reg    ref_4oPi_table_100_V_ce0;
wire   [99:0] ref_4oPi_table_100_V_q0;
wire   [7:0] second_order_float_2_address0;
reg    second_order_float_2_ce0;
wire   [29:0] second_order_float_2_q0;
wire   [7:0] second_order_float_3_address0;
reg    second_order_float_3_ce0;
wire   [22:0] second_order_float_3_q0;
wire   [7:0] second_order_float_s_address0;
reg    second_order_float_s_ce0;
wire   [14:0] second_order_float_s_q0;
reg   [0:0] p_Result_s_reg_968;
wire   [7:0] tmp_V_fu_236_p4;
reg   [7:0] tmp_V_reg_974;
wire   [22:0] tmp_V_1_fu_246_p1;
reg   [22:0] tmp_V_1_reg_981;
wire   [0:0] closepath_fu_250_p2;
reg   [0:0] closepath_reg_987;
wire   [3:0] trunc_ln601_fu_285_p1;
reg   [3:0] trunc_ln601_reg_998;
reg   [79:0] Med_V_reg_1003;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln833_1_fu_328_p2;
reg   [0:0] icmp_ln833_1_reg_1018;
reg   [57:0] p_Val2_23_reg_1024;
wire    ap_CS_fsm_state7;
reg   [2:0] trunc_ln_i_reg_1030;
wire   [2:0] p_Val2_24_fu_353_p3;
reg   [2:0] p_Val2_24_reg_1035;
wire    ap_CS_fsm_state8;
wire   [57:0] p_Val2_7_fu_368_p3;
reg   [57:0] p_Val2_7_reg_1041;
wire   [4:0] Mx_zeros_V_fu_419_p1;
reg   [4:0] Mx_zeros_V_reg_1046;
reg   [28:0] Mx_V_reg_1052;
wire    ap_CS_fsm_state9;
wire  signed [7:0] Ex_V_fu_456_p2;
reg  signed [7:0] Ex_V_reg_1059;
wire   [0:0] isNeg_fu_466_p3;
reg   [0:0] isNeg_reg_1064;
wire  signed [8:0] ush_fu_480_p3;
reg  signed [8:0] ush_reg_1069;
wire   [0:0] icmp_ln833_fu_488_p2;
reg   [0:0] icmp_ln833_reg_1075;
wire   [0:0] icmp_ln833_2_fu_493_p2;
reg   [0:0] icmp_ln833_2_reg_1081;
wire    ap_CS_fsm_state10;
wire   [0:0] tmp_s_fu_529_p10;
reg   [0:0] tmp_s_reg_1095;
wire   [21:0] B_V_fu_560_p1;
reg   [21:0] B_V_reg_1101;
reg   [14:0] B_trunc_V_reg_1106;
wire   [0:0] xor_ln25_fu_574_p2;
reg   [0:0] xor_ln25_reg_1111;
reg   [14:0] B_squared_V_reg_1131;
wire    ap_CS_fsm_state11;
reg   [28:0] t1_V_reg_1136;
reg   [22:0] second_order_float_6_reg_1141;
reg  signed [14:0] second_order_float_8_reg_1146;
reg   [21:0] trunc_ln1_reg_1151;
wire    ap_CS_fsm_state12;
reg   [13:0] trunc_ln662_2_reg_1156;
wire   [0:0] cos_basis_fu_665_p3;
reg   [0:0] cos_basis_reg_1161;
wire    ap_CS_fsm_state13;
wire   [28:0] select_ln272_1_fu_671_p3;
reg   [28:0] select_ln272_1_reg_1167;
wire   [29:0] ret_V_4_fu_697_p2;
reg   [29:0] ret_V_4_reg_1172;
reg   [28:0] result_V_reg_1177;
wire    ap_CS_fsm_state14;
wire   [8:0] ret_V_fu_735_p2;
reg   [8:0] ret_V_reg_1182;
wire    ap_CS_fsm_state15;
wire   [0:0] and_ln300_fu_857_p2;
reg   [0:0] and_ln300_reg_1187;
wire    ap_CS_fsm_state16;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_ready;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_done;
wire   [0:0] select_ln311_fu_878_p3;
reg   [0:0] select_ln311_reg_1192;
wire   [7:0] ret_V_5_fu_893_p3;
reg   [7:0] ret_V_5_reg_1197;
wire   [22:0] ret_V_6_fu_924_p3;
reg   [22:0] ret_V_6_reg_1202;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_start;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_idle;
wire   [31:0] grp_scaled_fixed2ieee_1_fu_218_ap_return;
reg    grp_scaled_fixed2ieee_1_fu_218_ap_start_reg;
wire   [63:0] zext_ln498_1_fu_280_p1;
wire   [63:0] zext_ln498_fu_594_p1;
wire   [31:0] p_Val2_s_fu_224_p1;
wire   [7:0] add_ln114_1_fu_256_p2;
wire   [7:0] addr_V_fu_262_p3;
wire   [3:0] tmp_1_fu_270_p4;
wire   [99:0] zext_ln744_fu_289_p1;
wire   [99:0] r_V_9_fu_292_p2;
wire   [23:0] p_Result_15_fu_308_p3;
wire   [79:0] grp_fu_322_p0;
wire   [23:0] grp_fu_322_p1;
wire   [103:0] grp_fu_322_p2;
wire   [0:0] trunc_ln745_fu_359_p1;
wire   [57:0] Mx_bits_V_1_fu_363_p2;
wire   [28:0] p_Result_i_i_fu_375_p4;
wire   [29:0] p_Result_16_fu_385_p3;
reg   [29:0] p_Result_8_fu_393_p4;
wire   [31:0] p_Result_17_fu_403_p3;
reg   [31:0] val_assign_fu_411_p3;
wire   [7:0] add_ln114_fu_423_p2;
wire   [57:0] zext_ln1253_fu_435_p1;
wire   [57:0] r_V_10_fu_438_p2;
wire   [7:0] select_ln482_fu_428_p3;
wire   [7:0] zext_ln655_fu_453_p1;
wire  signed [8:0] sext_ln1334_fu_462_p1;
wire   [8:0] sub_ln1311_fu_474_p2;
wire  signed [28:0] sext_ln1311_1_fu_501_p1;
wire   [28:0] lshr_ln1287_fu_507_p2;
wire   [31:0] zext_ln1287_fu_504_p1;
wire  signed [31:0] sext_ln1311_fu_498_p1;
wire   [31:0] zext_ln1287_1_fu_512_p1;
wire   [31:0] shl_ln1253_fu_516_p2;
wire   [31:0] select_ln1310_fu_522_p3;
wire   [0:0] xor_ln25_fu_574_p0;
wire   [0:0] sin_basis_fu_580_p2;
wire   [6:0] p_Result_i_fu_550_p4;
wire   [7:0] p_Result_18_fu_586_p3;
wire   [29:0] r_V_11_fu_954_p2;
wire  signed [22:0] r_V_12_fu_629_p0;
wire   [21:0] r_V_12_fu_629_p1;
wire   [44:0] r_V_12_fu_629_p2;
wire  signed [29:0] r_V_13_fu_961_p2;
wire   [0:0] cos_basis_fu_665_p0;
wire   [0:0] xor_ln271_fu_660_p2;
wire  signed [22:0] sext_ln657_fu_681_p1;
wire  signed [22:0] sext_ln1146_fu_684_p1;
wire   [22:0] add_ln1146_fu_687_p2;
wire  signed [29:0] sext_ln1146_1_fu_693_p1;
wire  signed [29:0] lhs_V_fu_678_p1;
wire  signed [29:0] r_V_14_fu_709_p0;
wire   [28:0] r_V_14_fu_709_p1;
wire   [57:0] r_V_14_fu_709_p2;
wire   [7:0] select_ln272_fu_725_p3;
wire  signed [8:0] rhs_V_fu_731_p1;
wire   [31:0] p_Val2_19_fu_742_p1;
wire   [3:0] p_Result_20_fu_768_p3;
wire   [0:0] tmp_fu_774_p18;
wire   [0:0] tmp_2_fu_812_p18;
wire   [0:0] select_ln307_fu_861_p0;
wire   [0:0] select_ln271_fu_850_p3;
wire   [0:0] or_ln311_fu_873_p2;
wire   [0:0] xor_ln311_fu_868_p2;
wire   [0:0] p_Result_19_fu_746_p3;
wire   [7:0] tmp_V_2_fu_754_p4;
wire   [7:0] select_ln307_fu_861_p3;
wire   [7:0] select_ln311_1_fu_886_p3;
wire   [0:0] and_ln300_1_fu_901_p2;
wire   [0:0] xor_ln300_fu_905_p2;
wire   [0:0] or_ln300_fu_919_p2;
wire   [22:0] select_ln300_2_fu_911_p3;
wire   [22:0] tmp_V_3_fu_764_p1;
wire    ap_CS_fsm_state17;
wire   [0:0] and_ln307_fu_932_p2;
wire   [0:0] p_Repl2_3_fu_936_p3;
wire   [31:0] p_Result_21_fu_942_p4;
wire   [14:0] r_V_11_fu_954_p0;
wire   [29:0] r_V_fu_601_p1;
wire   [14:0] r_V_11_fu_954_p1;
wire   [14:0] r_V_13_fu_961_p0;
reg   [16:0] ap_NS_fsm;
wire   [103:0] grp_fu_322_p00;
wire   [103:0] grp_fu_322_p10;
wire   [44:0] r_V_12_fu_629_p10;
wire   [29:0] r_V_13_fu_961_p00;
wire   [57:0] r_V_14_fu_709_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 17'd1;
#0 grp_scaled_fixed2ieee_1_fu_218_ap_start_reg = 1'b0;
end

sin_or_cos_float_VhK #(
    .DataWidth( 100 ),
    .AddressRange( 13 ),
    .AddressWidth( 4 ))
ref_4oPi_table_100_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(ref_4oPi_table_100_V_address0),
    .ce0(ref_4oPi_table_100_V_ce0),
    .q0(ref_4oPi_table_100_V_q0)
);

sin_or_cos_float_WhU #(
    .DataWidth( 30 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
second_order_float_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(second_order_float_2_address0),
    .ce0(second_order_float_2_ce0),
    .q0(second_order_float_2_q0)
);

sin_or_cos_float_Xh4 #(
    .DataWidth( 23 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
second_order_float_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(second_order_float_3_address0),
    .ce0(second_order_float_3_ce0),
    .q0(second_order_float_3_q0)
);

sin_or_cos_float_Yie #(
    .DataWidth( 15 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
second_order_float_s_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(second_order_float_s_address0),
    .ce0(second_order_float_s_ce0),
    .q0(second_order_float_s_q0)
);

scaled_fixed2ieee_1 grp_scaled_fixed2ieee_1_fu_218(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_scaled_fixed2ieee_1_fu_218_ap_start),
    .ap_done(grp_scaled_fixed2ieee_1_fu_218_ap_done),
    .ap_idle(grp_scaled_fixed2ieee_1_fu_218_ap_idle),
    .ap_ready(grp_scaled_fixed2ieee_1_fu_218_ap_ready),
    .in_V(result_V_reg_1177),
    .prescale(ret_V_reg_1182),
    .ap_return(grp_scaled_fixed2ieee_1_fu_218_ap_return)
);

music_mul_80ns_24Zio #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 80 ),
    .din1_WIDTH( 24 ),
    .dout_WIDTH( 104 ))
music_mul_80ns_24Zio_U215(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_322_p0),
    .din1(grp_fu_322_p1),
    .ce(1'b1),
    .dout(grp_fu_322_p2)
);

music_mux_83_1_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 3 ),
    .dout_WIDTH( 1 ))
music_mux_83_1_1_1_U216(
    .din0(1'd0),
    .din1(1'd1),
    .din2(1'd1),
    .din3(1'd0),
    .din4(1'd0),
    .din5(1'd1),
    .din6(1'd1),
    .din7(1'd0),
    .din8(p_Val2_24_reg_1035),
    .dout(tmp_s_fu_529_p10)
);

music_mux_164_1_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 4 ),
    .dout_WIDTH( 1 ))
music_mux_164_1_1_1_U217(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd0),
    .din3(1'd1),
    .din4(1'd1),
    .din5(1'd1),
    .din6(1'd1),
    .din7(1'd0),
    .din8(1'd0),
    .din9(1'd1),
    .din10(1'd1),
    .din11(1'd1),
    .din12(1'd1),
    .din13(1'd0),
    .din14(1'd0),
    .din15(1'd0),
    .din16(p_Result_20_fu_768_p3),
    .dout(tmp_fu_774_p18)
);

music_mux_164_1_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 4 ),
    .dout_WIDTH( 1 ))
music_mux_164_1_1_1_U218(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd1),
    .din3(1'd0),
    .din4(1'd1),
    .din5(1'd1),
    .din6(1'd0),
    .din7(1'd1),
    .din8(1'd1),
    .din9(1'd0),
    .din10(1'd1),
    .din11(1'd1),
    .din12(1'd0),
    .din13(1'd1),
    .din14(1'd0),
    .din15(1'd0),
    .din16(p_Result_20_fu_768_p3),
    .dout(tmp_2_fu_812_p18)
);

music_mul_mul_15n0iy #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 30 ))
music_mul_mul_15n0iy_U219(
    .din0(r_V_11_fu_954_p0),
    .din1(r_V_11_fu_954_p1),
    .dout(r_V_11_fu_954_p2)
);

music_mul_mul_15n1iI #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 30 ))
music_mul_mul_15n1iI_U220(
    .din0(r_V_13_fu_961_p0),
    .din1(second_order_float_8_reg_1146),
    .dout(r_V_13_fu_961_p2)
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
        grp_scaled_fixed2ieee_1_fu_218_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state15)) begin
            grp_scaled_fixed2ieee_1_fu_218_ap_start_reg <= 1'b1;
        end else if ((grp_scaled_fixed2ieee_1_fu_218_ap_ready == 1'b1)) begin
            grp_scaled_fixed2ieee_1_fu_218_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        B_V_reg_1101 <= B_V_fu_560_p1;
        B_trunc_V_reg_1106 <= {{select_ln1310_fu_522_p3[21:7]}};
        tmp_s_reg_1095 <= tmp_s_fu_529_p10;
        xor_ln25_reg_1111 <= xor_ln25_fu_574_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        B_squared_V_reg_1131 <= {{r_V_11_fu_954_p2[29:15]}};
        second_order_float_6_reg_1141 <= second_order_float_3_q0;
        second_order_float_8_reg_1146 <= second_order_float_s_q0;
        t1_V_reg_1136 <= {{second_order_float_2_q0[29:1]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        Ex_V_reg_1059 <= Ex_V_fu_456_p2;
        Mx_V_reg_1052 <= {{r_V_10_fu_438_p2[57:29]}};
        icmp_ln833_2_reg_1081 <= icmp_ln833_2_fu_493_p2;
        icmp_ln833_reg_1075 <= icmp_ln833_fu_488_p2;
        isNeg_reg_1064 <= Ex_V_fu_456_p2[32'd7];
        ush_reg_1069 <= ush_fu_480_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        Med_V_reg_1003 <= {{r_V_9_fu_292_p2[99:20]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        Mx_zeros_V_reg_1046 <= Mx_zeros_V_fu_419_p1;
        p_Val2_24_reg_1035 <= p_Val2_24_fu_353_p3;
        p_Val2_7_reg_1041 <= p_Val2_7_fu_368_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
        and_ln300_reg_1187 <= and_ln300_fu_857_p2;
        ret_V_5_reg_1197 <= ret_V_5_fu_893_p3;
        ret_V_6_reg_1202 <= ret_V_6_fu_924_p3;
        select_ln311_reg_1192 <= select_ln311_fu_878_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        closepath_reg_987 <= closepath_fu_250_p2;
        p_Result_s_reg_968 <= p_Val2_s_fu_224_p1[32'd31];
        tmp_V_1_reg_981 <= tmp_V_1_fu_246_p1;
        tmp_V_reg_974 <= {{p_Val2_s_fu_224_p1[30:23]}};
        trunc_ln601_reg_998 <= trunc_ln601_fu_285_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        cos_basis_reg_1161 <= cos_basis_fu_665_p3;
        ret_V_4_reg_1172 <= ret_V_4_fu_697_p2;
        select_ln272_1_reg_1167 <= select_ln272_1_fu_671_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        icmp_ln833_1_reg_1018 <= icmp_ln833_1_fu_328_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        p_Val2_23_reg_1024 <= {{grp_fu_322_p2[76:19]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        result_V_reg_1177 <= {{r_V_14_fu_709_p2[57:29]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        ret_V_reg_1182 <= ret_V_fu_735_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        trunc_ln1_reg_1151 <= {{r_V_12_fu_629_p2[44:23]}};
        trunc_ln662_2_reg_1156 <= {{r_V_13_fu_961_p2[29:16]}};
    end
end

always @ (posedge ap_clk) begin
    if (((closepath_reg_987 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        trunc_ln_i_reg_1030 <= {{grp_fu_322_p2[79:77]}};
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state17)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ref_4oPi_table_100_V_ce0 = 1'b1;
    end else begin
        ref_4oPi_table_100_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        second_order_float_2_ce0 = 1'b1;
    end else begin
        second_order_float_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        second_order_float_3_ce0 = 1'b1;
    end else begin
        second_order_float_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        second_order_float_s_ce0 = 1'b1;
    end else begin
        second_order_float_s_ce0 = 1'b0;
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
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
            if (((grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign B_V_fu_560_p1 = select_ln1310_fu_522_p3[21:0];

assign Ex_V_fu_456_p2 = (select_ln482_fu_428_p3 - zext_ln655_fu_453_p1);

assign Mx_bits_V_1_fu_363_p2 = (58'd0 - p_Val2_23_reg_1024);

assign Mx_zeros_V_fu_419_p1 = val_assign_fu_411_p3[4:0];

assign add_ln1146_fu_687_p2 = ($signed(sext_ln657_fu_681_p1) + $signed(sext_ln1146_fu_684_p1));

assign add_ln114_1_fu_256_p2 = ($signed(8'd194) + $signed(tmp_V_fu_236_p4));

assign add_ln114_fu_423_p2 = ($signed(8'd131) + $signed(tmp_V_reg_974));

assign addr_V_fu_262_p3 = ((closepath_fu_250_p2[0:0] === 1'b1) ? 8'd63 : add_ln114_1_fu_256_p2);

assign and_ln300_1_fu_901_p2 = (icmp_ln833_reg_1075 & icmp_ln833_1_reg_1018);

assign and_ln300_fu_857_p2 = (icmp_ln833_reg_1075 & icmp_ln833_1_reg_1018);

assign and_ln307_fu_932_p2 = (xor_ln25_reg_1111 & p_Result_s_reg_968);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_return = p_Result_21_fu_942_p4;

assign closepath_fu_250_p2 = ((tmp_V_fu_236_p4 < 8'd126) ? 1'b1 : 1'b0);

assign cos_basis_fu_665_p0 = do_cos;

assign cos_basis_fu_665_p3 = ((cos_basis_fu_665_p0[0:0] === 1'b1) ? xor_ln271_fu_660_p2 : tmp_s_reg_1095);

assign grp_fu_322_p0 = grp_fu_322_p00;

assign grp_fu_322_p00 = Med_V_reg_1003;

assign grp_fu_322_p1 = grp_fu_322_p10;

assign grp_fu_322_p10 = p_Result_15_fu_308_p3;

assign grp_scaled_fixed2ieee_1_fu_218_ap_start = grp_scaled_fixed2ieee_1_fu_218_ap_start_reg;

assign icmp_ln833_1_fu_328_p2 = ((tmp_V_1_reg_981 == 23'd0) ? 1'b1 : 1'b0);

assign icmp_ln833_2_fu_493_p2 = ((tmp_V_reg_974 == 8'd255) ? 1'b1 : 1'b0);

assign icmp_ln833_fu_488_p2 = ((tmp_V_reg_974 == 8'd0) ? 1'b1 : 1'b0);

assign isNeg_fu_466_p3 = Ex_V_fu_456_p2[32'd7];

assign lhs_V_fu_678_p1 = $signed(t1_V_reg_1136);

assign lshr_ln1287_fu_507_p2 = Mx_V_reg_1052 >> sext_ln1311_1_fu_501_p1;

assign or_ln300_fu_919_p2 = (icmp_ln833_2_reg_1081 | and_ln300_fu_857_p2);

assign or_ln311_fu_873_p2 = (select_ln271_fu_850_p3 | icmp_ln833_2_reg_1081);

assign p_Repl2_3_fu_936_p3 = ((and_ln300_reg_1187[0:0] === 1'b1) ? and_ln307_fu_932_p2 : select_ln311_reg_1192);

assign p_Result_15_fu_308_p3 = {{1'd1}, {tmp_V_1_reg_981}};

assign p_Result_16_fu_385_p3 = {{p_Result_i_i_fu_375_p4}, {1'd1}};

assign p_Result_17_fu_403_p3 = {{2'd3}, {p_Result_8_fu_393_p4}};

assign p_Result_18_fu_586_p3 = {{sin_basis_fu_580_p2}, {p_Result_i_fu_550_p4}};

assign p_Result_19_fu_746_p3 = p_Val2_19_fu_742_p1[32'd31];

assign p_Result_20_fu_768_p3 = {{p_Result_s_reg_968}, {p_Val2_24_reg_1035}};

assign p_Result_21_fu_942_p4 = {{{p_Repl2_3_fu_936_p3}, {ret_V_5_reg_1197}}, {ret_V_6_reg_1202}};

integer ap_tvar_int_0;

always @ (p_Result_16_fu_385_p3) begin
    for (ap_tvar_int_0 = 30 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 29 - 0) begin
            p_Result_8_fu_393_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            p_Result_8_fu_393_p4[ap_tvar_int_0] = p_Result_16_fu_385_p3[29 - ap_tvar_int_0];
        end
    end
end

assign p_Result_i_fu_550_p4 = {{select_ln1310_fu_522_p3[28:22]}};

assign p_Result_i_i_fu_375_p4 = {{p_Val2_7_fu_368_p3[57:29]}};

assign p_Val2_19_fu_742_p1 = grp_scaled_fixed2ieee_1_fu_218_ap_return;

assign p_Val2_24_fu_353_p3 = ((closepath_reg_987[0:0] === 1'b1) ? 3'd0 : trunc_ln_i_reg_1030);

assign p_Val2_7_fu_368_p3 = ((trunc_ln745_fu_359_p1[0:0] === 1'b1) ? Mx_bits_V_1_fu_363_p2 : p_Val2_23_reg_1024);

assign p_Val2_s_fu_224_p1 = t_in;

assign r_V_10_fu_438_p2 = p_Val2_7_reg_1041 << zext_ln1253_fu_435_p1;

assign r_V_11_fu_954_p0 = r_V_fu_601_p1;

assign r_V_11_fu_954_p1 = r_V_fu_601_p1;

assign r_V_12_fu_629_p0 = second_order_float_6_reg_1141;

assign r_V_12_fu_629_p1 = r_V_12_fu_629_p10;

assign r_V_12_fu_629_p10 = B_V_reg_1101;

assign r_V_12_fu_629_p2 = ($signed(r_V_12_fu_629_p0) * $signed({{1'b0}, {r_V_12_fu_629_p1}}));

assign r_V_13_fu_961_p0 = r_V_13_fu_961_p00;

assign r_V_13_fu_961_p00 = B_squared_V_reg_1131;

assign r_V_14_fu_709_p0 = ret_V_4_reg_1172;

assign r_V_14_fu_709_p1 = r_V_14_fu_709_p10;

assign r_V_14_fu_709_p10 = select_ln272_1_reg_1167;

assign r_V_14_fu_709_p2 = ($signed(r_V_14_fu_709_p0) * $signed({{1'b0}, {r_V_14_fu_709_p1}}));

assign r_V_9_fu_292_p2 = ref_4oPi_table_100_V_q0 << zext_ln744_fu_289_p1;

assign r_V_fu_601_p1 = B_trunc_V_reg_1106;

assign ref_4oPi_table_100_V_address0 = zext_ln498_1_fu_280_p1;

assign ret_V_4_fu_697_p2 = ($signed(sext_ln1146_1_fu_693_p1) + $signed(lhs_V_fu_678_p1));

assign ret_V_5_fu_893_p3 = ((and_ln300_fu_857_p2[0:0] === 1'b1) ? select_ln307_fu_861_p3 : select_ln311_1_fu_886_p3);

assign ret_V_6_fu_924_p3 = ((or_ln300_fu_919_p2[0:0] === 1'b1) ? select_ln300_2_fu_911_p3 : tmp_V_3_fu_764_p1);

assign ret_V_fu_735_p2 = ($signed(9'd0) - $signed(rhs_V_fu_731_p1));

assign rhs_V_fu_731_p1 = $signed(select_ln272_fu_725_p3);

assign second_order_float_2_address0 = zext_ln498_fu_594_p1;

assign second_order_float_3_address0 = zext_ln498_fu_594_p1;

assign second_order_float_s_address0 = zext_ln498_fu_594_p1;

assign select_ln1310_fu_522_p3 = ((isNeg_reg_1064[0:0] === 1'b1) ? zext_ln1287_1_fu_512_p1 : shl_ln1253_fu_516_p2);

assign select_ln271_fu_850_p3 = ((cos_basis_reg_1161[0:0] === 1'b1) ? tmp_fu_774_p18 : tmp_2_fu_812_p18);

assign select_ln272_1_fu_671_p3 = ((cos_basis_fu_665_p3[0:0] === 1'b1) ? 29'd536870911 : Mx_V_reg_1052);

assign select_ln272_fu_725_p3 = ((cos_basis_reg_1161[0:0] === 1'b1) ? 8'd0 : Ex_V_reg_1059);

assign select_ln300_2_fu_911_p3 = ((xor_ln300_fu_905_p2[0:0] === 1'b1) ? 23'd8388607 : 23'd0);

assign select_ln307_fu_861_p0 = do_cos;

assign select_ln307_fu_861_p3 = ((select_ln307_fu_861_p0[0:0] === 1'b1) ? 8'd127 : 8'd0);

assign select_ln311_1_fu_886_p3 = ((icmp_ln833_2_reg_1081[0:0] === 1'b1) ? 8'd255 : tmp_V_2_fu_754_p4);

assign select_ln311_fu_878_p3 = ((or_ln311_fu_873_p2[0:0] === 1'b1) ? xor_ln311_fu_868_p2 : p_Result_19_fu_746_p3);

assign select_ln482_fu_428_p3 = ((closepath_reg_987[0:0] === 1'b1) ? add_ln114_fu_423_p2 : 8'd0);

assign sext_ln1146_1_fu_693_p1 = $signed(add_ln1146_fu_687_p2);

assign sext_ln1146_fu_684_p1 = $signed(trunc_ln662_2_reg_1156);

assign sext_ln1311_1_fu_501_p1 = ush_reg_1069;

assign sext_ln1311_fu_498_p1 = ush_reg_1069;

assign sext_ln1334_fu_462_p1 = Ex_V_fu_456_p2;

assign sext_ln657_fu_681_p1 = $signed(trunc_ln1_reg_1151);

assign shl_ln1253_fu_516_p2 = zext_ln1287_fu_504_p1 << sext_ln1311_fu_498_p1;

assign sin_basis_fu_580_p2 = (xor_ln25_fu_574_p2 ^ tmp_s_fu_529_p10);

assign sub_ln1311_fu_474_p2 = ($signed(9'd0) - $signed(sext_ln1334_fu_462_p1));

assign tmp_1_fu_270_p4 = {{addr_V_fu_262_p3[7:4]}};

assign tmp_V_1_fu_246_p1 = p_Val2_s_fu_224_p1[22:0];

assign tmp_V_2_fu_754_p4 = {{p_Val2_19_fu_742_p1[30:23]}};

assign tmp_V_3_fu_764_p1 = p_Val2_19_fu_742_p1[22:0];

assign tmp_V_fu_236_p4 = {{p_Val2_s_fu_224_p1[30:23]}};

assign trunc_ln601_fu_285_p1 = addr_V_fu_262_p3[3:0];

assign trunc_ln745_fu_359_p1 = p_Val2_24_fu_353_p3[0:0];

assign ush_fu_480_p3 = ((isNeg_fu_466_p3[0:0] === 1'b1) ? sub_ln1311_fu_474_p2 : sext_ln1334_fu_462_p1);


always @ (p_Result_17_fu_403_p3) begin
    if (p_Result_17_fu_403_p3[0] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd0;
    end else if (p_Result_17_fu_403_p3[1] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd1;
    end else if (p_Result_17_fu_403_p3[2] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd2;
    end else if (p_Result_17_fu_403_p3[3] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd3;
    end else if (p_Result_17_fu_403_p3[4] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd4;
    end else if (p_Result_17_fu_403_p3[5] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd5;
    end else if (p_Result_17_fu_403_p3[6] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd6;
    end else if (p_Result_17_fu_403_p3[7] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd7;
    end else if (p_Result_17_fu_403_p3[8] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd8;
    end else if (p_Result_17_fu_403_p3[9] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd9;
    end else if (p_Result_17_fu_403_p3[10] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd10;
    end else if (p_Result_17_fu_403_p3[11] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd11;
    end else if (p_Result_17_fu_403_p3[12] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd12;
    end else if (p_Result_17_fu_403_p3[13] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd13;
    end else if (p_Result_17_fu_403_p3[14] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd14;
    end else if (p_Result_17_fu_403_p3[15] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd15;
    end else if (p_Result_17_fu_403_p3[16] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd16;
    end else if (p_Result_17_fu_403_p3[17] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd17;
    end else if (p_Result_17_fu_403_p3[18] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd18;
    end else if (p_Result_17_fu_403_p3[19] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd19;
    end else if (p_Result_17_fu_403_p3[20] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd20;
    end else if (p_Result_17_fu_403_p3[21] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd21;
    end else if (p_Result_17_fu_403_p3[22] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd22;
    end else if (p_Result_17_fu_403_p3[23] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd23;
    end else if (p_Result_17_fu_403_p3[24] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd24;
    end else if (p_Result_17_fu_403_p3[25] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd25;
    end else if (p_Result_17_fu_403_p3[26] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd26;
    end else if (p_Result_17_fu_403_p3[27] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd27;
    end else if (p_Result_17_fu_403_p3[28] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd28;
    end else if (p_Result_17_fu_403_p3[29] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd29;
    end else if (p_Result_17_fu_403_p3[30] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd30;
    end else if (p_Result_17_fu_403_p3[31] == 1'b1) begin
        val_assign_fu_411_p3 = 32'd31;
    end else begin
        val_assign_fu_411_p3 = 32'd32;
    end
end

assign xor_ln25_fu_574_p0 = do_cos;

assign xor_ln25_fu_574_p2 = (xor_ln25_fu_574_p0 ^ 1'd1);

assign xor_ln271_fu_660_p2 = (tmp_s_reg_1095 ^ 1'd1);

assign xor_ln300_fu_905_p2 = (1'd1 ^ and_ln300_1_fu_901_p2);

assign xor_ln311_fu_868_p2 = (icmp_ln833_2_reg_1081 ^ 1'd1);

assign zext_ln1253_fu_435_p1 = Mx_zeros_V_reg_1046;

assign zext_ln1287_1_fu_512_p1 = lshr_ln1287_fu_507_p2;

assign zext_ln1287_fu_504_p1 = Mx_V_reg_1052;

assign zext_ln498_1_fu_280_p1 = tmp_1_fu_270_p4;

assign zext_ln498_fu_594_p1 = p_Result_18_fu_586_p3;

assign zext_ln655_fu_453_p1 = Mx_zeros_V_reg_1046;

assign zext_ln744_fu_289_p1 = trunc_ln601_reg_998;

endmodule //sin_or_cos_float_s
