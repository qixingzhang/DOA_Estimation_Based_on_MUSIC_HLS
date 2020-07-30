// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module bit_reverse (
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

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

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
reg[9:0] X_R_address1;
reg X_R_ce1;
reg X_R_we1;
reg[9:0] X_I_address0;
reg X_I_ce0;
reg X_I_we0;
reg[9:0] X_I_address1;
reg X_I_ce1;
reg X_I_we1;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [9:0] trunc_ln108_fu_129_p1;
wire    ap_CS_fsm_state2;
wire   [31:0] zext_ln108_fu_133_p1;
reg   [31:0] zext_ln108_reg_213;
wire   [10:0] i_14_fu_143_p2;
reg   [10:0] i_14_reg_221;
wire   [3:0] i_fu_155_p2;
wire    ap_CS_fsm_state3;
wire   [31:0] rev_fu_169_p3;
wire   [0:0] icmp_ln110_fu_149_p2;
wire   [9:0] zext_ln112_fu_187_p1;
wire   [0:0] icmp_ln124_fu_191_p2;
reg   [0:0] icmp_ln124_reg_244;
reg   [9:0] X_R_addr_reg_248;
reg   [9:0] X_R_addr_2_reg_253;
reg   [9:0] X_I_addr_reg_258;
reg   [9:0] X_I_addr_2_reg_263;
reg   [31:0] temp_reg_268;
wire    ap_CS_fsm_state4;
reg   [31:0] temp_1_reg_273;
reg   [10:0] input_assign_reg_86;
wire    ap_CS_fsm_state5;
reg   [31:0] reversed_reg_98;
wire   [0:0] icmp_ln122_fu_137_p2;
reg   [3:0] i_0_i_reg_109;
reg   [9:0] p_0_i_reg_120;
wire   [63:0] zext_ln126_fu_196_p1;
wire   [63:0] zext_ln127_fu_202_p1;
wire   [30:0] trunc_ln111_fu_161_p1;
wire   [0:0] trunc_ln110_fu_165_p1;
wire   [8:0] input_assign_1_fu_177_p4;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
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
    if (((icmp_ln122_fu_137_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_0_i_reg_109 <= 4'd0;
    end else if (((icmp_ln110_fu_149_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_0_i_reg_109 <= i_fu_155_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        input_assign_reg_86 <= i_14_reg_221;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        input_assign_reg_86 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln122_fu_137_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        p_0_i_reg_120 <= trunc_ln108_fu_129_p1;
    end else if (((icmp_ln110_fu_149_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        p_0_i_reg_120 <= zext_ln112_fu_187_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln122_fu_137_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        reversed_reg_98 <= 32'd0;
    end else if (((icmp_ln110_fu_149_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        reversed_reg_98 <= rev_fu_169_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln124_fu_191_p2 == 1'd0) & (icmp_ln110_fu_149_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        X_I_addr_2_reg_263 <= zext_ln127_fu_202_p1;
        X_I_addr_reg_258 <= zext_ln126_fu_196_p1;
        X_R_addr_2_reg_253 <= zext_ln127_fu_202_p1;
        X_R_addr_reg_248 <= zext_ln126_fu_196_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_14_reg_221 <= i_14_fu_143_p2;
        zext_ln108_reg_213[10 : 0] <= zext_ln108_fu_133_p1[10 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln110_fu_149_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        icmp_ln124_reg_244 <= icmp_ln124_fu_191_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        temp_1_reg_273 <= X_I_q0;
        temp_reg_268 <= X_R_q0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        X_I_address0 = X_I_addr_reg_258;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        X_I_address0 = zext_ln126_fu_196_p1;
    end else begin
        X_I_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        X_I_address1 = X_I_addr_2_reg_263;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        X_I_address1 = zext_ln127_fu_202_p1;
    end else begin
        X_I_address1 = 'bx;
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
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state5))) begin
        X_I_ce1 = 1'b1;
    end else begin
        X_I_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        X_I_we0 = 1'b1;
    end else begin
        X_I_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln124_reg_244 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        X_I_we1 = 1'b1;
    end else begin
        X_I_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        X_R_address0 = X_R_addr_reg_248;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        X_R_address0 = zext_ln126_fu_196_p1;
    end else begin
        X_R_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        X_R_address1 = X_R_addr_2_reg_253;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        X_R_address1 = zext_ln127_fu_202_p1;
    end else begin
        X_R_address1 = 'bx;
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
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state5))) begin
        X_R_ce1 = 1'b1;
    end else begin
        X_R_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        X_R_we0 = 1'b1;
    end else begin
        X_R_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln124_reg_244 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        X_R_we1 = 1'b1;
    end else begin
        X_R_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln122_fu_137_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((icmp_ln122_fu_137_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
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
            if (((icmp_ln122_fu_137_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln124_fu_191_p2 == 1'd1) & (icmp_ln110_fu_149_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else if (((icmp_ln124_fu_191_p2 == 1'd0) & (icmp_ln110_fu_149_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
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

assign X_I_d0 = X_I_q1;

assign X_I_d1 = temp_1_reg_273;

assign X_R_d0 = X_R_q1;

assign X_R_d1 = temp_reg_268;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign i_14_fu_143_p2 = (11'd1 + input_assign_reg_86);

assign i_fu_155_p2 = (i_0_i_reg_109 + 4'd1);

assign icmp_ln110_fu_149_p2 = ((i_0_i_reg_109 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln122_fu_137_p2 = ((input_assign_reg_86 == 11'd1024) ? 1'b1 : 1'b0);

assign icmp_ln124_fu_191_p2 = ((zext_ln108_reg_213 > reversed_reg_98) ? 1'b1 : 1'b0);

assign input_assign_1_fu_177_p4 = {{p_0_i_reg_120[9:1]}};

assign rev_fu_169_p3 = {{trunc_ln111_fu_161_p1}, {trunc_ln110_fu_165_p1}};

assign trunc_ln108_fu_129_p1 = input_assign_reg_86[9:0];

assign trunc_ln110_fu_165_p1 = p_0_i_reg_120[0:0];

assign trunc_ln111_fu_161_p1 = reversed_reg_98[30:0];

assign zext_ln108_fu_133_p1 = input_assign_reg_86;

assign zext_ln112_fu_187_p1 = input_assign_1_fu_177_p4;

assign zext_ln126_fu_196_p1 = input_assign_reg_86;

assign zext_ln127_fu_202_p1 = reversed_reg_98;

always @ (posedge ap_clk) begin
    zext_ln108_reg_213[31:11] <= 21'b000000000000000000000;
end

endmodule //bit_reverse