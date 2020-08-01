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

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

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
reg[31:0] ap_return;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
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
wire  signed [14:0] second_order_float_s_q0;
reg   [0:0] p_Result_s_reg_995;
wire   [7:0] tmp_V_fu_236_p4;
reg   [7:0] tmp_V_reg_1001;
wire   [22:0] tmp_V_1_fu_246_p1;
reg   [22:0] tmp_V_1_reg_1008;
wire   [0:0] closepath_fu_250_p2;
reg   [0:0] closepath_reg_1014;
wire   [3:0] trunc_ln601_fu_285_p1;
reg   [3:0] trunc_ln601_reg_1025;
wire    ap_CS_fsm_state2;
wire   [2:0] p_Val2_24_fu_361_p3;
reg   [2:0] p_Val2_24_reg_1036;
wire   [28:0] Mx_V_fu_444_p4;
reg   [28:0] Mx_V_reg_1041;
wire  signed [7:0] Ex_V_fu_458_p2;
reg  signed [7:0] Ex_V_reg_1046;
wire   [0:0] tmp_s_fu_526_p10;
reg   [0:0] tmp_s_reg_1051;
wire   [21:0] B_V_fu_558_p1;
reg   [21:0] B_V_reg_1057;
reg   [14:0] B_trunc_V_reg_1062;
wire   [0:0] xor_ln25_fu_572_p2;
reg   [0:0] xor_ln25_reg_1067;
wire   [0:0] icmp_ln833_fu_599_p2;
reg   [0:0] icmp_ln833_reg_1087;
wire   [0:0] icmp_ln833_1_fu_604_p2;
reg   [0:0] icmp_ln833_1_reg_1093;
wire   [0:0] icmp_ln833_2_fu_609_p2;
reg   [0:0] icmp_ln833_2_reg_1099;
wire   [0:0] cos_basis_fu_619_p3;
reg   [0:0] cos_basis_reg_1107;
wire    ap_CS_fsm_state3;
reg   [28:0] result_V_reg_1112;
wire   [8:0] ret_V_fu_758_p2;
reg   [8:0] ret_V_reg_1117;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_start;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_done;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_idle;
wire    grp_scaled_fixed2ieee_1_fu_218_ap_ready;
wire   [31:0] grp_scaled_fixed2ieee_1_fu_218_ap_return;
reg    grp_scaled_fixed2ieee_1_fu_218_ap_start_reg;
wire    ap_CS_fsm_state4;
wire   [63:0] zext_ln498_1_fu_280_p1;
wire   [63:0] zext_ln498_fu_592_p1;
wire   [31:0] p_Val2_s_fu_224_p1;
wire   [7:0] add_ln114_1_fu_256_p2;
wire   [7:0] addr_V_fu_262_p3;
wire   [3:0] tmp_1_fu_270_p4;
wire   [7:0] add_ln114_fu_289_p2;
wire   [99:0] zext_ln744_fu_308_p1;
wire   [99:0] r_V_9_fu_311_p2;
wire   [79:0] Med_V_fu_317_p4;
wire   [23:0] p_Result_15_fu_301_p3;
wire   [79:0] ret_V_7_fu_335_p0;
wire   [23:0] ret_V_7_fu_335_p1;
wire   [103:0] ret_V_7_fu_335_p2;
wire   [2:0] trunc_ln_i_fu_351_p4;
wire   [57:0] p_Val2_23_fu_341_p4;
wire   [0:0] trunc_ln745_fu_368_p1;
wire   [57:0] Mx_bits_V_1_fu_372_p2;
wire   [57:0] p_Val2_7_fu_378_p3;
wire   [28:0] p_Result_i_i_fu_386_p4;
wire   [29:0] p_Result_16_fu_396_p3;
reg   [29:0] p_Result_8_fu_404_p4;
wire   [31:0] p_Result_17_fu_414_p3;
reg   [31:0] val_assign_fu_422_p3;
wire   [4:0] Mx_zeros_V_fu_430_p1;
wire   [57:0] zext_ln1253_fu_434_p1;
wire   [57:0] r_V_10_fu_438_p2;
wire   [7:0] select_ln482_fu_294_p3;
wire   [7:0] zext_ln655_fu_454_p1;
wire  signed [8:0] sext_ln1334_fu_464_p1;
wire   [0:0] isNeg_fu_468_p3;
wire   [8:0] sub_ln1311_fu_476_p2;
wire  signed [8:0] ush_fu_482_p3;
wire  signed [28:0] sext_ln1311_1_fu_494_p1;
wire   [28:0] lshr_ln1287_fu_502_p2;
wire   [31:0] zext_ln1287_fu_498_p1;
wire  signed [31:0] sext_ln1311_fu_490_p1;
wire   [31:0] zext_ln1287_1_fu_508_p1;
wire   [31:0] shl_ln1253_fu_512_p2;
wire   [31:0] select_ln1310_fu_518_p3;
wire   [0:0] xor_ln25_fu_572_p0;
wire   [0:0] sin_basis_fu_578_p2;
wire   [6:0] p_Result_i_fu_548_p4;
wire   [7:0] p_Result_18_fu_584_p3;
wire   [0:0] cos_basis_fu_619_p0;
wire   [0:0] xor_ln271_fu_614_p2;
wire   [29:0] r_V_11_fu_981_p2;
wire  signed [22:0] r_V_12_fu_668_p0;
wire   [21:0] r_V_12_fu_668_p1;
wire   [44:0] r_V_12_fu_668_p2;
wire   [14:0] B_squared_V_fu_642_p4;
wire  signed [29:0] r_V_13_fu_988_p2;
wire   [28:0] t1_V_fu_651_p4;
wire   [21:0] trunc_ln1_fu_674_p4;
wire   [13:0] trunc_ln662_2_fu_692_p4;
wire  signed [22:0] sext_ln657_fu_705_p1;
wire  signed [22:0] sext_ln1146_fu_709_p1;
wire   [22:0] add_ln1146_fu_713_p2;
wire  signed [29:0] sext_ln1146_1_fu_719_p1;
wire  signed [29:0] lhs_V_fu_701_p1;
wire   [29:0] ret_V_4_fu_723_p2;
wire   [28:0] select_ln272_1_fu_632_p3;
wire  signed [29:0] r_V_14_fu_737_p0;
wire   [28:0] r_V_14_fu_737_p1;
wire   [57:0] r_V_14_fu_737_p2;
wire   [7:0] select_ln272_fu_625_p3;
wire  signed [8:0] rhs_V_fu_754_p1;
wire   [31:0] p_Val2_19_fu_765_p1;
wire   [3:0] p_Result_20_fu_791_p3;
wire   [0:0] tmp_fu_797_p18;
wire   [0:0] tmp_2_fu_835_p18;
wire   [0:0] select_ln307_fu_888_p0;
wire   [0:0] select_ln271_fu_873_p3;
wire   [0:0] or_ln311_fu_900_p2;
wire   [0:0] xor_ln311_fu_895_p2;
wire   [0:0] p_Result_19_fu_769_p3;
wire   [7:0] tmp_V_2_fu_777_p4;
wire   [0:0] and_ln300_fu_880_p2;
wire   [0:0] and_ln307_fu_884_p2;
wire   [0:0] select_ln311_fu_905_p3;
wire   [7:0] select_ln307_fu_888_p3;
wire   [7:0] select_ln311_1_fu_913_p3;
wire   [0:0] and_ln300_1_fu_936_p2;
wire   [0:0] xor_ln300_fu_940_p2;
wire   [0:0] or_ln300_fu_954_p2;
wire   [22:0] select_ln300_2_fu_946_p3;
wire   [22:0] tmp_V_3_fu_787_p1;
wire   [0:0] p_Repl2_3_fu_920_p3;
wire   [7:0] ret_V_5_fu_928_p3;
wire   [22:0] ret_V_6_fu_959_p3;
wire   [31:0] p_Result_21_fu_967_p4;
wire   [14:0] r_V_11_fu_981_p0;
wire   [29:0] r_V_fu_639_p1;
wire   [14:0] r_V_11_fu_981_p1;
wire   [14:0] r_V_13_fu_988_p0;
wire   [31:0] bitcast_ln348_fu_977_p1;
reg   [31:0] ap_return_preg;
reg   [3:0] ap_NS_fsm;
wire   [44:0] r_V_12_fu_668_p10;
wire   [29:0] r_V_13_fu_988_p00;
wire   [57:0] r_V_14_fu_737_p10;
wire   [103:0] ret_V_7_fu_335_p00;
wire   [103:0] ret_V_7_fu_335_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 grp_scaled_fixed2ieee_1_fu_218_ap_start_reg = 1'b0;
#0 ap_return_preg = 32'd0;
end

sin_or_cos_float_dEe #(
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

sin_or_cos_float_eOg #(
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

sin_or_cos_float_fYi #(
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

sin_or_cos_float_g8j #(
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
    .in_V(result_V_reg_1112),
    .prescale(ret_V_reg_1117),
    .ap_return(grp_scaled_fixed2ieee_1_fu_218_ap_return)
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
music_mux_83_1_1_1_U5(
    .din0(1'd0),
    .din1(1'd1),
    .din2(1'd1),
    .din3(1'd0),
    .din4(1'd0),
    .din5(1'd1),
    .din6(1'd1),
    .din7(1'd0),
    .din8(p_Val2_24_fu_361_p3),
    .dout(tmp_s_fu_526_p10)
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
music_mux_164_1_1_1_U6(
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
    .din16(p_Result_20_fu_791_p3),
    .dout(tmp_fu_797_p18)
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
music_mux_164_1_1_1_U7(
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
    .din16(p_Result_20_fu_791_p3),
    .dout(tmp_2_fu_835_p18)
);

music_mul_mul_15nhbi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 30 ))
music_mul_mul_15nhbi_U8(
    .din0(r_V_11_fu_981_p0),
    .din1(r_V_11_fu_981_p1),
    .dout(r_V_11_fu_981_p2)
);

music_mul_mul_15nibs #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 15 ),
    .dout_WIDTH( 30 ))
music_mul_mul_15nibs_U9(
    .din0(r_V_13_fu_988_p0),
    .din1(second_order_float_s_q0),
    .dout(r_V_13_fu_988_p2)
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
        ap_return_preg <= 32'd0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state4) & (grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1))) begin
            ap_return_preg <= bitcast_ln348_fu_977_p1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_scaled_fixed2ieee_1_fu_218_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state3)) begin
            grp_scaled_fixed2ieee_1_fu_218_ap_start_reg <= 1'b1;
        end else if ((grp_scaled_fixed2ieee_1_fu_218_ap_ready == 1'b1)) begin
            grp_scaled_fixed2ieee_1_fu_218_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        B_V_reg_1057 <= B_V_fu_558_p1;
        B_trunc_V_reg_1062 <= {{select_ln1310_fu_518_p3[21:7]}};
        Ex_V_reg_1046 <= Ex_V_fu_458_p2;
        Mx_V_reg_1041 <= {{r_V_10_fu_438_p2[57:29]}};
        icmp_ln833_1_reg_1093 <= icmp_ln833_1_fu_604_p2;
        icmp_ln833_2_reg_1099 <= icmp_ln833_2_fu_609_p2;
        icmp_ln833_reg_1087 <= icmp_ln833_fu_599_p2;
        p_Val2_24_reg_1036 <= p_Val2_24_fu_361_p3;
        tmp_s_reg_1051 <= tmp_s_fu_526_p10;
        xor_ln25_reg_1067 <= xor_ln25_fu_572_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        closepath_reg_1014 <= closepath_fu_250_p2;
        p_Result_s_reg_995 <= p_Val2_s_fu_224_p1[32'd31];
        tmp_V_1_reg_1008 <= tmp_V_1_fu_246_p1;
        tmp_V_reg_1001 <= {{p_Val2_s_fu_224_p1[30:23]}};
        trunc_ln601_reg_1025 <= trunc_ln601_fu_285_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        cos_basis_reg_1107 <= cos_basis_fu_619_p3;
        result_V_reg_1112 <= {{r_V_14_fu_737_p2[57:29]}};
        ret_V_reg_1117 <= ret_V_fu_758_p2;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state4) & (grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state4) & (grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) & (grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1))) begin
        ap_return = bitcast_ln348_fu_977_p1;
    end else begin
        ap_return = ap_return_preg;
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
    if ((1'b1 == ap_CS_fsm_state2)) begin
        second_order_float_2_ce0 = 1'b1;
    end else begin
        second_order_float_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        second_order_float_3_ce0 = 1'b1;
    end else begin
        second_order_float_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
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
            if (((1'b1 == ap_CS_fsm_state4) & (grp_scaled_fixed2ieee_1_fu_218_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign B_V_fu_558_p1 = select_ln1310_fu_518_p3[21:0];

assign B_squared_V_fu_642_p4 = {{r_V_11_fu_981_p2[29:15]}};

assign Ex_V_fu_458_p2 = (select_ln482_fu_294_p3 - zext_ln655_fu_454_p1);

assign Med_V_fu_317_p4 = {{r_V_9_fu_311_p2[99:20]}};

assign Mx_V_fu_444_p4 = {{r_V_10_fu_438_p2[57:29]}};

assign Mx_bits_V_1_fu_372_p2 = (58'd0 - p_Val2_23_fu_341_p4);

assign Mx_zeros_V_fu_430_p1 = val_assign_fu_422_p3[4:0];

assign add_ln1146_fu_713_p2 = ($signed(sext_ln657_fu_705_p1) + $signed(sext_ln1146_fu_709_p1));

assign add_ln114_1_fu_256_p2 = ($signed(8'd194) + $signed(tmp_V_fu_236_p4));

assign add_ln114_fu_289_p2 = ($signed(8'd131) + $signed(tmp_V_reg_1001));

assign addr_V_fu_262_p3 = ((closepath_fu_250_p2[0:0] === 1'b1) ? 8'd63 : add_ln114_1_fu_256_p2);

assign and_ln300_1_fu_936_p2 = (icmp_ln833_reg_1087 & icmp_ln833_1_reg_1093);

assign and_ln300_fu_880_p2 = (icmp_ln833_reg_1087 & icmp_ln833_1_reg_1093);

assign and_ln307_fu_884_p2 = (xor_ln25_reg_1067 & p_Result_s_reg_995);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign bitcast_ln348_fu_977_p1 = p_Result_21_fu_967_p4;

assign closepath_fu_250_p2 = ((tmp_V_fu_236_p4 < 8'd126) ? 1'b1 : 1'b0);

assign cos_basis_fu_619_p0 = do_cos;

assign cos_basis_fu_619_p3 = ((cos_basis_fu_619_p0[0:0] === 1'b1) ? xor_ln271_fu_614_p2 : tmp_s_reg_1051);

assign grp_scaled_fixed2ieee_1_fu_218_ap_start = grp_scaled_fixed2ieee_1_fu_218_ap_start_reg;

assign icmp_ln833_1_fu_604_p2 = ((tmp_V_1_reg_1008 == 23'd0) ? 1'b1 : 1'b0);

assign icmp_ln833_2_fu_609_p2 = ((tmp_V_reg_1001 == 8'd255) ? 1'b1 : 1'b0);

assign icmp_ln833_fu_599_p2 = ((tmp_V_reg_1001 == 8'd0) ? 1'b1 : 1'b0);

assign isNeg_fu_468_p3 = Ex_V_fu_458_p2[32'd7];

assign lhs_V_fu_701_p1 = $signed(t1_V_fu_651_p4);

assign lshr_ln1287_fu_502_p2 = Mx_V_fu_444_p4 >> sext_ln1311_1_fu_494_p1;

assign or_ln300_fu_954_p2 = (icmp_ln833_2_reg_1099 | and_ln300_fu_880_p2);

assign or_ln311_fu_900_p2 = (select_ln271_fu_873_p3 | icmp_ln833_2_reg_1099);

assign p_Repl2_3_fu_920_p3 = ((and_ln300_fu_880_p2[0:0] === 1'b1) ? and_ln307_fu_884_p2 : select_ln311_fu_905_p3);

assign p_Result_15_fu_301_p3 = {{1'd1}, {tmp_V_1_reg_1008}};

assign p_Result_16_fu_396_p3 = {{p_Result_i_i_fu_386_p4}, {1'd1}};

assign p_Result_17_fu_414_p3 = {{2'd3}, {p_Result_8_fu_404_p4}};

assign p_Result_18_fu_584_p3 = {{sin_basis_fu_578_p2}, {p_Result_i_fu_548_p4}};

assign p_Result_19_fu_769_p3 = p_Val2_19_fu_765_p1[32'd31];

assign p_Result_20_fu_791_p3 = {{p_Result_s_reg_995}, {p_Val2_24_reg_1036}};

assign p_Result_21_fu_967_p4 = {{{p_Repl2_3_fu_920_p3}, {ret_V_5_fu_928_p3}}, {ret_V_6_fu_959_p3}};

integer ap_tvar_int_0;

always @ (p_Result_16_fu_396_p3) begin
    for (ap_tvar_int_0 = 30 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 29 - 0) begin
            p_Result_8_fu_404_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            p_Result_8_fu_404_p4[ap_tvar_int_0] = p_Result_16_fu_396_p3[29 - ap_tvar_int_0];
        end
    end
end

assign p_Result_i_fu_548_p4 = {{select_ln1310_fu_518_p3[28:22]}};

assign p_Result_i_i_fu_386_p4 = {{p_Val2_7_fu_378_p3[57:29]}};

assign p_Val2_19_fu_765_p1 = grp_scaled_fixed2ieee_1_fu_218_ap_return;

assign p_Val2_23_fu_341_p4 = {{ret_V_7_fu_335_p2[76:19]}};

assign p_Val2_24_fu_361_p3 = ((closepath_reg_1014[0:0] === 1'b1) ? 3'd0 : trunc_ln_i_fu_351_p4);

assign p_Val2_7_fu_378_p3 = ((trunc_ln745_fu_368_p1[0:0] === 1'b1) ? Mx_bits_V_1_fu_372_p2 : p_Val2_23_fu_341_p4);

assign p_Val2_s_fu_224_p1 = t_in;

assign r_V_10_fu_438_p2 = p_Val2_7_fu_378_p3 << zext_ln1253_fu_434_p1;

assign r_V_11_fu_981_p0 = r_V_fu_639_p1;

assign r_V_11_fu_981_p1 = r_V_fu_639_p1;

assign r_V_12_fu_668_p0 = second_order_float_3_q0;

assign r_V_12_fu_668_p1 = r_V_12_fu_668_p10;

assign r_V_12_fu_668_p10 = B_V_reg_1057;

assign r_V_12_fu_668_p2 = ($signed(r_V_12_fu_668_p0) * $signed({{1'b0}, {r_V_12_fu_668_p1}}));

assign r_V_13_fu_988_p0 = r_V_13_fu_988_p00;

assign r_V_13_fu_988_p00 = B_squared_V_fu_642_p4;

assign r_V_14_fu_737_p0 = ret_V_4_fu_723_p2;

assign r_V_14_fu_737_p1 = r_V_14_fu_737_p10;

assign r_V_14_fu_737_p10 = select_ln272_1_fu_632_p3;

assign r_V_14_fu_737_p2 = ($signed(r_V_14_fu_737_p0) * $signed({{1'b0}, {r_V_14_fu_737_p1}}));

assign r_V_9_fu_311_p2 = ref_4oPi_table_100_V_q0 << zext_ln744_fu_308_p1;

assign r_V_fu_639_p1 = B_trunc_V_reg_1062;

assign ref_4oPi_table_100_V_address0 = zext_ln498_1_fu_280_p1;

assign ret_V_4_fu_723_p2 = ($signed(sext_ln1146_1_fu_719_p1) + $signed(lhs_V_fu_701_p1));

assign ret_V_5_fu_928_p3 = ((and_ln300_fu_880_p2[0:0] === 1'b1) ? select_ln307_fu_888_p3 : select_ln311_1_fu_913_p3);

assign ret_V_6_fu_959_p3 = ((or_ln300_fu_954_p2[0:0] === 1'b1) ? select_ln300_2_fu_946_p3 : tmp_V_3_fu_787_p1);

assign ret_V_7_fu_335_p0 = ret_V_7_fu_335_p00;

assign ret_V_7_fu_335_p00 = Med_V_fu_317_p4;

assign ret_V_7_fu_335_p1 = ret_V_7_fu_335_p10;

assign ret_V_7_fu_335_p10 = p_Result_15_fu_301_p3;

assign ret_V_7_fu_335_p2 = (ret_V_7_fu_335_p0 * ret_V_7_fu_335_p1);

assign ret_V_fu_758_p2 = ($signed(9'd0) - $signed(rhs_V_fu_754_p1));

assign rhs_V_fu_754_p1 = $signed(select_ln272_fu_625_p3);

assign second_order_float_2_address0 = zext_ln498_fu_592_p1;

assign second_order_float_3_address0 = zext_ln498_fu_592_p1;

assign second_order_float_s_address0 = zext_ln498_fu_592_p1;

assign select_ln1310_fu_518_p3 = ((isNeg_fu_468_p3[0:0] === 1'b1) ? zext_ln1287_1_fu_508_p1 : shl_ln1253_fu_512_p2);

assign select_ln271_fu_873_p3 = ((cos_basis_reg_1107[0:0] === 1'b1) ? tmp_fu_797_p18 : tmp_2_fu_835_p18);

assign select_ln272_1_fu_632_p3 = ((cos_basis_fu_619_p3[0:0] === 1'b1) ? 29'd536870911 : Mx_V_reg_1041);

assign select_ln272_fu_625_p3 = ((cos_basis_fu_619_p3[0:0] === 1'b1) ? 8'd0 : Ex_V_reg_1046);

assign select_ln300_2_fu_946_p3 = ((xor_ln300_fu_940_p2[0:0] === 1'b1) ? 23'd8388607 : 23'd0);

assign select_ln307_fu_888_p0 = do_cos;

assign select_ln307_fu_888_p3 = ((select_ln307_fu_888_p0[0:0] === 1'b1) ? 8'd127 : 8'd0);

assign select_ln311_1_fu_913_p3 = ((icmp_ln833_2_reg_1099[0:0] === 1'b1) ? 8'd255 : tmp_V_2_fu_777_p4);

assign select_ln311_fu_905_p3 = ((or_ln311_fu_900_p2[0:0] === 1'b1) ? xor_ln311_fu_895_p2 : p_Result_19_fu_769_p3);

assign select_ln482_fu_294_p3 = ((closepath_reg_1014[0:0] === 1'b1) ? add_ln114_fu_289_p2 : 8'd0);

assign sext_ln1146_1_fu_719_p1 = $signed(add_ln1146_fu_713_p2);

assign sext_ln1146_fu_709_p1 = $signed(trunc_ln662_2_fu_692_p4);

assign sext_ln1311_1_fu_494_p1 = ush_fu_482_p3;

assign sext_ln1311_fu_490_p1 = ush_fu_482_p3;

assign sext_ln1334_fu_464_p1 = Ex_V_fu_458_p2;

assign sext_ln657_fu_705_p1 = $signed(trunc_ln1_fu_674_p4);

assign shl_ln1253_fu_512_p2 = zext_ln1287_fu_498_p1 << sext_ln1311_fu_490_p1;

assign sin_basis_fu_578_p2 = (xor_ln25_fu_572_p2 ^ tmp_s_fu_526_p10);

assign sub_ln1311_fu_476_p2 = ($signed(9'd0) - $signed(sext_ln1334_fu_464_p1));

assign t1_V_fu_651_p4 = {{second_order_float_2_q0[29:1]}};

assign tmp_1_fu_270_p4 = {{addr_V_fu_262_p3[7:4]}};

assign tmp_V_1_fu_246_p1 = p_Val2_s_fu_224_p1[22:0];

assign tmp_V_2_fu_777_p4 = {{p_Val2_19_fu_765_p1[30:23]}};

assign tmp_V_3_fu_787_p1 = p_Val2_19_fu_765_p1[22:0];

assign tmp_V_fu_236_p4 = {{p_Val2_s_fu_224_p1[30:23]}};

assign trunc_ln1_fu_674_p4 = {{r_V_12_fu_668_p2[44:23]}};

assign trunc_ln601_fu_285_p1 = addr_V_fu_262_p3[3:0];

assign trunc_ln662_2_fu_692_p4 = {{r_V_13_fu_988_p2[29:16]}};

assign trunc_ln745_fu_368_p1 = p_Val2_24_fu_361_p3[0:0];

assign trunc_ln_i_fu_351_p4 = {{ret_V_7_fu_335_p2[79:77]}};

assign ush_fu_482_p3 = ((isNeg_fu_468_p3[0:0] === 1'b1) ? sub_ln1311_fu_476_p2 : sext_ln1334_fu_464_p1);


always @ (p_Result_17_fu_414_p3) begin
    if (p_Result_17_fu_414_p3[0] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd0;
    end else if (p_Result_17_fu_414_p3[1] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd1;
    end else if (p_Result_17_fu_414_p3[2] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd2;
    end else if (p_Result_17_fu_414_p3[3] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd3;
    end else if (p_Result_17_fu_414_p3[4] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd4;
    end else if (p_Result_17_fu_414_p3[5] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd5;
    end else if (p_Result_17_fu_414_p3[6] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd6;
    end else if (p_Result_17_fu_414_p3[7] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd7;
    end else if (p_Result_17_fu_414_p3[8] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd8;
    end else if (p_Result_17_fu_414_p3[9] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd9;
    end else if (p_Result_17_fu_414_p3[10] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd10;
    end else if (p_Result_17_fu_414_p3[11] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd11;
    end else if (p_Result_17_fu_414_p3[12] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd12;
    end else if (p_Result_17_fu_414_p3[13] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd13;
    end else if (p_Result_17_fu_414_p3[14] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd14;
    end else if (p_Result_17_fu_414_p3[15] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd15;
    end else if (p_Result_17_fu_414_p3[16] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd16;
    end else if (p_Result_17_fu_414_p3[17] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd17;
    end else if (p_Result_17_fu_414_p3[18] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd18;
    end else if (p_Result_17_fu_414_p3[19] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd19;
    end else if (p_Result_17_fu_414_p3[20] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd20;
    end else if (p_Result_17_fu_414_p3[21] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd21;
    end else if (p_Result_17_fu_414_p3[22] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd22;
    end else if (p_Result_17_fu_414_p3[23] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd23;
    end else if (p_Result_17_fu_414_p3[24] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd24;
    end else if (p_Result_17_fu_414_p3[25] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd25;
    end else if (p_Result_17_fu_414_p3[26] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd26;
    end else if (p_Result_17_fu_414_p3[27] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd27;
    end else if (p_Result_17_fu_414_p3[28] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd28;
    end else if (p_Result_17_fu_414_p3[29] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd29;
    end else if (p_Result_17_fu_414_p3[30] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd30;
    end else if (p_Result_17_fu_414_p3[31] == 1'b1) begin
        val_assign_fu_422_p3 = 32'd31;
    end else begin
        val_assign_fu_422_p3 = 32'd32;
    end
end

assign xor_ln25_fu_572_p0 = do_cos;

assign xor_ln25_fu_572_p2 = (xor_ln25_fu_572_p0 ^ 1'd1);

assign xor_ln271_fu_614_p2 = (tmp_s_reg_1051 ^ 1'd1);

assign xor_ln300_fu_940_p2 = (1'd1 ^ and_ln300_1_fu_936_p2);

assign xor_ln311_fu_895_p2 = (icmp_ln833_2_reg_1099 ^ 1'd1);

assign zext_ln1253_fu_434_p1 = Mx_zeros_V_fu_430_p1;

assign zext_ln1287_1_fu_508_p1 = lshr_ln1287_fu_502_p2;

assign zext_ln1287_fu_498_p1 = Mx_V_fu_444_p4;

assign zext_ln498_1_fu_280_p1 = tmp_1_fu_270_p4;

assign zext_ln498_fu_592_p1 = p_Result_18_fu_584_p3;

assign zext_ln655_fu_454_p1 = Mx_zeros_V_fu_430_p1;

assign zext_ln744_fu_308_p1 = trunc_ln601_reg_1025;

endmodule //sin_or_cos_float_s
