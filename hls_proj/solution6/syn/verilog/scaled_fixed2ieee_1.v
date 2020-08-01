// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module scaled_fixed2ieee_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_V,
        prescale,
        ap_return
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;
parameter    ap_const_lv32_0 = 32'd0;


input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [28:0] in_V;
input  [8:0] prescale;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[31:0] ap_return;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [1:0] i_fu_272_p2;
reg   [1:0] i_reg_474;
wire    ap_CS_fsm_state2;
wire   [63:0] zext_ln307_fu_278_p1;
reg   [63:0] zext_ln307_reg_479;
wire   [0:0] icmp_ln306_fu_266_p2;
wire   [27:0] trunc_ln313_fu_302_p1;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln313_fu_306_p2;
reg   [0:0] icmp_ln313_reg_494;
wire   [1:0] i_1_fu_312_p2;
reg   [1:0] i_1_reg_498;
wire   [31:0] c_q0;
reg   [31:0] c_load_reg_508;
wire    ap_CS_fsm_state5;
reg   [0:0] isNeg_reg_515;
wire   [31:0] sub_ln1311_fu_331_p2;
reg   [31:0] sub_ln1311_reg_521;
wire   [31:0] shift_fu_337_p2;
wire    ap_CS_fsm_state6;
wire   [28:0] r_V_fu_370_p1;
wire   [27:0] trunc_ln1287_fu_374_p1;
wire   [0:0] icmp_ln1452_fu_383_p2;
reg   [0:0] icmp_ln1452_reg_545;
wire   [0:0] icmp_ln316_fu_378_p2;
reg   [0:0] out_bits_V_address0;
reg    out_bits_V_ce0;
reg    out_bits_V_we0;
wire   [31:0] out_bits_V_d0;
wire   [31:0] out_bits_V_q0;
wire   [0:0] out_bits_V_address1;
reg    out_bits_V_ce1;
reg    out_bits_V_we1;
wire   [31:0] out_bits_V_d1;
reg   [0:0] c_address0;
reg    c_ce0;
reg    c_we0;
reg   [31:0] c_d0;
reg   [1:0] i1_0_reg_147;
wire    ap_CS_fsm_state3;
reg   [28:0] p_0107_0_reg_158;
reg   [31:0] shift_0_reg_168;
reg   [1:0] i2_0_reg_180;
reg   [27:0] p_Val2_s_reg_191;
reg   [31:0] shift_1_reg_200;
wire   [63:0] zext_ln314_fu_318_p1;
wire   [15:0] p_Result_1_fu_210_p4;
wire   [16:0] tmp_3_fu_220_p3;
wire   [12:0] trunc_ln566_fu_241_p1;
wire   [13:0] tmp_4_fu_245_p3;
reg   [31:0] p_Result_s_fu_283_p4;
wire   [31:0] zext_ln1287_fu_347_p1;
wire   [31:0] ush_fu_342_p3;
wire   [31:0] lshr_ln1287_fu_351_p2;
wire   [31:0] shl_ln1253_fu_357_p2;
wire   [31:0] select_ln1310_fu_363_p3;
wire    ap_CS_fsm_state7;
wire   [8:0] sub_ln324_fu_388_p2;
wire  signed [31:0] sext_ln324_fu_393_p1;
wire   [31:0] newexp_fu_397_p2;
wire   [0:0] tmp_fu_403_p3;
wire   [0:0] or_ln330_fu_411_p2;
wire   [22:0] phitmp1_fu_420_p4;
wire   [7:0] empty_61_fu_416_p1;
wire   [7:0] out_exp_V_fu_438_p3;
wire   [22:0] significand_V_fu_430_p3;
wire   [31:0] p_Result_22_fu_446_p4;
wire   [31:0] bitcast_ln348_fu_456_p1;
reg   [31:0] ap_return_preg;
reg   [6:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
#0 ap_return_preg = 32'd0;
end

scaled_fixed2ieeeThq #(
    .DataWidth( 32 ),
    .AddressRange( 2 ),
    .AddressWidth( 1 ))
out_bits_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(out_bits_V_address0),
    .ce0(out_bits_V_ce0),
    .we0(out_bits_V_we0),
    .d0(out_bits_V_d0),
    .q0(out_bits_V_q0),
    .address1(out_bits_V_address1),
    .ce1(out_bits_V_ce1),
    .we1(out_bits_V_we1),
    .d1(out_bits_V_d1)
);

scaled_fixed2ieeeUhA #(
    .DataWidth( 32 ),
    .AddressRange( 2 ),
    .AddressWidth( 1 ))
c_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_address0),
    .ce0(c_ce0),
    .we0(c_we0),
    .d0(c_d0),
    .q0(c_q0)
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
                ap_return_preg[0] <= 1'b0;
        ap_return_preg[1] <= 1'b0;
        ap_return_preg[2] <= 1'b0;
        ap_return_preg[3] <= 1'b0;
        ap_return_preg[4] <= 1'b0;
        ap_return_preg[5] <= 1'b0;
        ap_return_preg[6] <= 1'b0;
        ap_return_preg[7] <= 1'b0;
        ap_return_preg[8] <= 1'b0;
        ap_return_preg[9] <= 1'b0;
        ap_return_preg[10] <= 1'b0;
        ap_return_preg[11] <= 1'b0;
        ap_return_preg[12] <= 1'b0;
        ap_return_preg[13] <= 1'b0;
        ap_return_preg[14] <= 1'b0;
        ap_return_preg[15] <= 1'b0;
        ap_return_preg[16] <= 1'b0;
        ap_return_preg[17] <= 1'b0;
        ap_return_preg[18] <= 1'b0;
        ap_return_preg[19] <= 1'b0;
        ap_return_preg[20] <= 1'b0;
        ap_return_preg[21] <= 1'b0;
        ap_return_preg[22] <= 1'b0;
        ap_return_preg[23] <= 1'b0;
        ap_return_preg[24] <= 1'b0;
        ap_return_preg[25] <= 1'b0;
        ap_return_preg[26] <= 1'b0;
        ap_return_preg[27] <= 1'b0;
        ap_return_preg[28] <= 1'b0;
        ap_return_preg[29] <= 1'b0;
        ap_return_preg[30] <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state7)) begin
                        ap_return_preg[30 : 0] <= bitcast_ln348_fu_456_p1[30 : 0];
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i1_0_reg_147 <= i_reg_474;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i1_0_reg_147 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln306_fu_266_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i2_0_reg_180 <= 2'd0;
    end else if (((icmp_ln316_fu_378_p2 == 1'd1) & (icmp_ln313_reg_494 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        i2_0_reg_180 <= i_1_reg_498;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln306_fu_266_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        p_0107_0_reg_158 <= in_V;
    end else if (((icmp_ln316_fu_378_p2 == 1'd1) & (icmp_ln313_reg_494 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        p_0107_0_reg_158 <= r_V_fu_370_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln316_fu_378_p2 == 1'd0) & (icmp_ln313_reg_494 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        p_Val2_s_reg_191 <= trunc_ln1287_fu_374_p1;
    end else if (((icmp_ln313_fu_306_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        p_Val2_s_reg_191 <= trunc_ln313_fu_302_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln306_fu_266_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        shift_0_reg_168 <= 32'd0;
    end else if (((icmp_ln316_fu_378_p2 == 1'd1) & (icmp_ln313_reg_494 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        shift_0_reg_168 <= shift_fu_337_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln316_fu_378_p2 == 1'd0) & (icmp_ln313_reg_494 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        shift_1_reg_200 <= shift_fu_337_p2;
    end else if (((icmp_ln313_fu_306_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        shift_1_reg_200 <= shift_0_reg_168;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c_load_reg_508 <= c_q0;
        isNeg_reg_515 <= c_q0[32'd31];
        sub_ln1311_reg_521 <= sub_ln1311_fu_331_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_1_reg_498 <= i_1_fu_312_p2;
        icmp_ln313_reg_494 <= icmp_ln313_fu_306_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_474 <= i_fu_272_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & ((icmp_ln313_reg_494 == 1'd1) | (icmp_ln316_fu_378_p2 == 1'd0)))) begin
        icmp_ln1452_reg_545 <= icmp_ln1452_fu_383_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln306_fu_266_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln307_reg_479[1 : 0] <= zext_ln307_fu_278_p1[1 : 0];
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_return = bitcast_ln348_fu_456_p1;
    end else begin
        ap_return = ap_return_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        c_address0 = zext_ln314_fu_318_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        c_address0 = zext_ln307_reg_479;
    end else begin
        c_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        c_we0 = 1'b1;
    end else begin
        c_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        out_bits_V_address0 = zext_ln307_fu_278_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        out_bits_V_address0 = 64'd0;
    end else begin
        out_bits_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        out_bits_V_ce0 = 1'b1;
    end else begin
        out_bits_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        out_bits_V_ce1 = 1'b1;
    end else begin
        out_bits_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        out_bits_V_we0 = 1'b1;
    end else begin
        out_bits_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        out_bits_V_we1 = 1'b1;
    end else begin
        out_bits_V_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln306_fu_266_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state4 : begin
            if (((icmp_ln313_fu_306_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & ((icmp_ln313_reg_494 == 1'd1) | (icmp_ln316_fu_378_p2 == 1'd0)))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign bitcast_ln348_fu_456_p1 = p_Result_22_fu_446_p4;


always @ (p_Result_s_fu_283_p4) begin
    if (p_Result_s_fu_283_p4[0] == 1'b1) begin
        c_d0 = 32'd0;
    end else if (p_Result_s_fu_283_p4[1] == 1'b1) begin
        c_d0 = 32'd1;
    end else if (p_Result_s_fu_283_p4[2] == 1'b1) begin
        c_d0 = 32'd2;
    end else if (p_Result_s_fu_283_p4[3] == 1'b1) begin
        c_d0 = 32'd3;
    end else if (p_Result_s_fu_283_p4[4] == 1'b1) begin
        c_d0 = 32'd4;
    end else if (p_Result_s_fu_283_p4[5] == 1'b1) begin
        c_d0 = 32'd5;
    end else if (p_Result_s_fu_283_p4[6] == 1'b1) begin
        c_d0 = 32'd6;
    end else if (p_Result_s_fu_283_p4[7] == 1'b1) begin
        c_d0 = 32'd7;
    end else if (p_Result_s_fu_283_p4[8] == 1'b1) begin
        c_d0 = 32'd8;
    end else if (p_Result_s_fu_283_p4[9] == 1'b1) begin
        c_d0 = 32'd9;
    end else if (p_Result_s_fu_283_p4[10] == 1'b1) begin
        c_d0 = 32'd10;
    end else if (p_Result_s_fu_283_p4[11] == 1'b1) begin
        c_d0 = 32'd11;
    end else if (p_Result_s_fu_283_p4[12] == 1'b1) begin
        c_d0 = 32'd12;
    end else if (p_Result_s_fu_283_p4[13] == 1'b1) begin
        c_d0 = 32'd13;
    end else if (p_Result_s_fu_283_p4[14] == 1'b1) begin
        c_d0 = 32'd14;
    end else if (p_Result_s_fu_283_p4[15] == 1'b1) begin
        c_d0 = 32'd15;
    end else if (p_Result_s_fu_283_p4[16] == 1'b1) begin
        c_d0 = 32'd16;
    end else if (p_Result_s_fu_283_p4[17] == 1'b1) begin
        c_d0 = 32'd17;
    end else if (p_Result_s_fu_283_p4[18] == 1'b1) begin
        c_d0 = 32'd18;
    end else if (p_Result_s_fu_283_p4[19] == 1'b1) begin
        c_d0 = 32'd19;
    end else if (p_Result_s_fu_283_p4[20] == 1'b1) begin
        c_d0 = 32'd20;
    end else if (p_Result_s_fu_283_p4[21] == 1'b1) begin
        c_d0 = 32'd21;
    end else if (p_Result_s_fu_283_p4[22] == 1'b1) begin
        c_d0 = 32'd22;
    end else if (p_Result_s_fu_283_p4[23] == 1'b1) begin
        c_d0 = 32'd23;
    end else if (p_Result_s_fu_283_p4[24] == 1'b1) begin
        c_d0 = 32'd24;
    end else if (p_Result_s_fu_283_p4[25] == 1'b1) begin
        c_d0 = 32'd25;
    end else if (p_Result_s_fu_283_p4[26] == 1'b1) begin
        c_d0 = 32'd26;
    end else if (p_Result_s_fu_283_p4[27] == 1'b1) begin
        c_d0 = 32'd27;
    end else if (p_Result_s_fu_283_p4[28] == 1'b1) begin
        c_d0 = 32'd28;
    end else if (p_Result_s_fu_283_p4[29] == 1'b1) begin
        c_d0 = 32'd29;
    end else if (p_Result_s_fu_283_p4[30] == 1'b1) begin
        c_d0 = 32'd30;
    end else if (p_Result_s_fu_283_p4[31] == 1'b1) begin
        c_d0 = 32'd31;
    end else begin
        c_d0 = 32'd32;
    end
end

assign empty_61_fu_416_p1 = newexp_fu_397_p2[7:0];

assign i_1_fu_312_p2 = (2'd1 + i2_0_reg_180);

assign i_fu_272_p2 = (i1_0_reg_147 + 2'd1);

assign icmp_ln1452_fu_383_p2 = ((in_V == 29'd0) ? 1'b1 : 1'b0);

assign icmp_ln306_fu_266_p2 = ((i1_0_reg_147 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln313_fu_306_p2 = ((i2_0_reg_180 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln316_fu_378_p2 = ((c_load_reg_508 == 32'd16) ? 1'b1 : 1'b0);

assign lshr_ln1287_fu_351_p2 = zext_ln1287_fu_347_p1 >> ush_fu_342_p3;

assign newexp_fu_397_p2 = ($signed(sext_ln324_fu_393_p1) - $signed(shift_1_reg_200));

assign or_ln330_fu_411_p2 = (tmp_fu_403_p3 | icmp_ln1452_reg_545);

assign out_bits_V_address1 = 64'd1;

assign out_bits_V_d0 = {{tmp_3_fu_220_p3}, {ap_const_lv32_0[14:0]}};

assign out_bits_V_d1 = {{tmp_4_fu_245_p3}, {ap_const_lv32_0[17:0]}};

assign out_exp_V_fu_438_p3 = ((or_ln330_fu_411_p2[0:0] === 1'b1) ? 8'd0 : empty_61_fu_416_p1);

assign p_Result_1_fu_210_p4 = {{in_V[28:13]}};

assign p_Result_22_fu_446_p4 = {{{{1'd0}, {out_exp_V_fu_438_p3}}}, {significand_V_fu_430_p3}};

integer ap_tvar_int_0;

always @ (out_bits_V_q0) begin
    for (ap_tvar_int_0 = 32 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 31 - 0) begin
            p_Result_s_fu_283_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            p_Result_s_fu_283_p4[ap_tvar_int_0] = out_bits_V_q0[31 - ap_tvar_int_0];
        end
    end
end

assign phitmp1_fu_420_p4 = {{p_Val2_s_reg_191[27:5]}};

assign r_V_fu_370_p1 = select_ln1310_fu_363_p3[28:0];

assign select_ln1310_fu_363_p3 = ((isNeg_reg_515[0:0] === 1'b1) ? lshr_ln1287_fu_351_p2 : shl_ln1253_fu_357_p2);

assign sext_ln324_fu_393_p1 = $signed(sub_ln324_fu_388_p2);

assign shift_fu_337_p2 = (c_load_reg_508 + shift_0_reg_168);

assign shl_ln1253_fu_357_p2 = zext_ln1287_fu_347_p1 << ush_fu_342_p3;

assign significand_V_fu_430_p3 = ((or_ln330_fu_411_p2[0:0] === 1'b1) ? 23'd0 : phitmp1_fu_420_p4);

assign sub_ln1311_fu_331_p2 = (32'd0 - c_q0);

assign sub_ln324_fu_388_p2 = (9'd127 - prescale);

assign tmp_3_fu_220_p3 = {{p_Result_1_fu_210_p4}, {1'd1}};

assign tmp_4_fu_245_p3 = {{trunc_ln566_fu_241_p1}, {1'd1}};

assign tmp_fu_403_p3 = newexp_fu_397_p2[32'd31];

assign trunc_ln1287_fu_374_p1 = select_ln1310_fu_363_p3[27:0];

assign trunc_ln313_fu_302_p1 = p_0107_0_reg_158[27:0];

assign trunc_ln566_fu_241_p1 = in_V[12:0];

assign ush_fu_342_p3 = ((isNeg_reg_515[0:0] === 1'b1) ? sub_ln1311_reg_521 : c_load_reg_508);

assign zext_ln1287_fu_347_p1 = p_0107_0_reg_158;

assign zext_ln307_fu_278_p1 = i1_0_reg_147;

assign zext_ln314_fu_318_p1 = i2_0_reg_180;

always @ (posedge ap_clk) begin
    zext_ln307_reg_479[63:2] <= 62'b00000000000000000000000000000000000000000000000000000000000000;
    ap_return_preg[31] <= 1'b0;
end

endmodule //scaled_fixed2ieee_1
