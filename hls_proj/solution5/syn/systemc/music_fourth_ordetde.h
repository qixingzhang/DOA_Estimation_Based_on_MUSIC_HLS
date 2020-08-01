// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __music_fourth_ordetde_H__
#define __music_fourth_ordetde_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct music_fourth_ordetde_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 52;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(music_fourth_ordetde_ram) {
        ram[0] = "0b0000000000000000000000000000000000000000000000000100";
        ram[1] = "0b1111111101100010000101100101101010100010100000110110";
        ram[2] = "0b1111111011000100001011100011101011100110111111101000";
        ram[3] = "0b1111111000100110010010010010011001101011101010001000";
        ram[4] = "0b1111110110001000011010001010001011000111001101110110";
        ram[5] = "0b1111110011101010100011100011010110000101000110010011";
        ram[6] = "0b1111110001001100101110110110010000100001101110110101";
        ram[7] = "0b1111101110101110111100011011010000000110110000011010";
        ram[8] = "0b1111101100010001001100101010101010000111010010011111";
        ram[9] = "0b1111101001110011011111111100110011011100001010110010";
        ram[10] = "0b1111100111010101110110101010000000100000001100111000";
        ram[11] = "0b1111100100111000010001001010100101001100011010001001";
        ram[12] = "0b1111100010011010101111110110110100110100010010101011";
        ram[13] = "0b1111011111111101010011000111000010000010000100001101";
        ram[14] = "0b1111011101011111111011010011011110110010111010101101";
        ram[15] = "0b1111011011000010101000110100011100010011010001110001";
        ram[16] = "0b1111011000100101011100000010001010111011000011010000";
        ram[17] = "0b1111010110001000010101010100111010001001111010000110";
        ram[18] = "0b1111010011101011010101000100111000100011100000110001";
        ram[19] = "0b1111010001001110011011101010010011101011110011111100";
        ram[20] = "0b1111001110110001101001011101011000000011010010110010";
        ram[21] = "0b1111001100010100111110110110010001000011001111111101";
        ram[22] = "0b1111001001111000011100001101001000111010000011011100";
        ram[23] = "0b1111000111011100000001111010001000100111011100000010";
        ram[24] = "0b1111000100111111110000010101010111111000110000100111";
        ram[25] = "0b1111000010100011100111110110111101000101010010110111";
        ram[26] = "0b1111000000000111101000110110111101001010100000100100";
        ram[27] = "0b1110111101101011110011101101011011101000010110101000";
        ram[28] = "0b1110111011010000001000110010011010011101100011100101";
        ram[29] = "0b1110111000110100101000011101111010000011111010010010";
        ram[30] = "0b1110110110011001010011000111111001001100100100001000";
        ram[31] = "0b1110110011111110001001001000010100111100010110101011";
        ram[32] = "0b1110110001100011001010110111001000101000000100011000";
        ram[33] = "0b1110101111001000011000101100001101110000110010100111";
        ram[34] = "0b1110101100101101110010111111011100000000001100110010";
        ram[35] = "0b1110101010010011011010001000101001000100111000111000";
        ram[36] = "0b1110100111111001001110011111101000101110101100100000";
        ram[37] = "0b1110100101011111010000011100001100101011000001110001";
        ram[38] = "0b1110100011000101100000010110000100100001001011111010";
        ram[39] = "0b1110100000101011111110100100111101101110101110000000";
        ram[40] = "0b1110011110010010101011100000100011100011110000110011";
        ram[41] = "0b1110011011111001100111100000011110111111011000001000";
        ram[42] = "0b1110011001100000110010111100010110101011111010101000";
        ram[43] = "0b1110010111001000001110001011101110111011011000101001";
        ram[44] = "0b1110010100101111111001100110001001100011110010010101";
        ram[45] = "0b1110010010010111110101100011000101111011100001110011";
        ram[46] = "0b1110010000000000000010011010000000110101110000110000";
        ram[47] = "0b1110001101101000100000100010010100011110110011001110";
        ram[48] = "0b1110001011010001010000010011011000011000011110111001";
        ram[49] = "0b1110001000111010010010000100100001010110100101011011";
        ram[50] = "0b1110000110100011100110001101000001011011001101110010";
        ram[51] = "0b1110000100001101001101000100000111110011001110101100";
        ram[52] = "0b1110000001110111000111000001000000110010101001001010";
        ram[53] = "0b1101111111100001010100011010110101110001000100000000";
        ram[54] = "0b1101111101001011110101101000101101000110000110011001";
        ram[55] = "0b1101111010110110101011000001101010000101110101001100";
        ram[56] = "0b1101111000100001110100111100101100111101001110001011";
        ram[57] = "0b1101110110001101010011110000110010101110100110000000";
        ram[58] = "0b1101110011111001000111110100110101001110000101001111";
        ram[59] = "0b1101110001100101010001011111101010111110000110000000";
        ram[60] = "0b1101101111010001110001001000000111001011110011001111";
        ram[61] = "0b1101101100111110100111000100111001101011100110100010";
        ram[62] = "0b1101101010101011110011101100101110110101101001001110";
        ram[63] = "0b1101101000011001010111010110001111100010010010100010";
        ram[64] = "0b1101100110000111010010011000000001000110101001111011";
        ram[65] = "0b1101100011110101100101001000100101010001000110100110";
        ram[66] = "0b1101100001100100001111111110011010000101110010100010";
        ram[67] = "0b1101011111010011010011001111111001111011001011101101";
        ram[68] = "0b1101011101000010101111010011011011010110100111110111";
        ram[69] = "0b1101011010110010100100011111010001001000110110110110";
        ram[70] = "0b1101011000100010110011001001101010001010100111000100";
        ram[71] = "0b1101010110010011011011101000110001011001001010101100";
        ram[72] = "0b1101010100000100011110010010101101110010111011001110";
        ram[73] = "0b1101010001110101111011011101100010010100000001101011";
        ram[74] = "0b1101001111100111110011011111001101110010111010000100";
        ram[75] = "0b1101001101011010000110101101101010111100111101010111";
        ram[76] = "0b1101001011001100110101011110110000010011000111000011";
        ram[77] = "0b1101001001000000000000001000010000000110011110001001";
        ram[78] = "0b1101000110110011100110111111111000010100111110110111";
        ram[79] = "0b1101000100100111101010011011010010100110000011010011";
        ram[80] = "0b1101000010011100001010110000000100000111001101111010";
        ram[81] = "0b1101000000010001001000010011101101101000110101001100";
        ram[82] = "0b1100111110000110100011011011101011011010101110101011";
        ram[83] = "0b1100111011111100011100011101010101001000111011100001";
        ram[84] = "0b1100111001110010110011101101111101111000010101011100";
        ram[85] = "0b1100110111101001101001100010110100000011011101010100";
        ram[86] = "0b1100110101100000111110010001000001010111001000001001";
        ram[87] = "0b1100110011011000110010001101101010101111001111111110";
        ram[88] = "0b1100110001010001000101101101110000010011100010101011";
        ram[89] = "0b1100101111001001111001000110001101010100010011010111";
        ram[90] = "0b1100101101000011001100101011111000000111001011100100";
        ram[91] = "0b1100101010111101000000110011100010000011111101001111";
        ram[92] = "0b1100101000110111010101110001110111100001010110100110";
        ram[93] = "0b1100100110110010001011111011011111110001110100010111";
        ram[94] = "0b1100100100101101100011100100111101000000011000010010";
        ram[95] = "0b1100100010101001011101000010101100001101011100100110";
        ram[96] = "0b1100100000100101111000101001000101001011101011101011";
        ram[97] = "0b1100011110100010110110101100011010011100110110000101";
        ram[98] = "0b1100011100100000010111100000111001001110101010000110";
        ram[99] = "0b1100011010011110011011011010101001010111101101011010";
        ram[100] = "0b1100011000011101000010101101101101010100010101010010";
        ram[101] = "0b1100010110011100001101101110000010000011100001110101";
        ram[102] = "0b1100010100011011111100101111011111000011111000001110";
        ram[103] = "0b1100010010011100010000000101110110010000011111001111";
        ram[104] = "0b1100010000011101001000000100110011111101111011101010";
        ram[105] = "0b1100001110011110100100111111111110110111001110000010";
        ram[106] = "0b1100001100100000100111001010110111111010110001010010";
        ram[107] = "0b1100001010100011001110111000111010010111011001110110";
        ram[108] = "0b1100001000100110011100011101011011101001010110010010";
        ram[109] = "0b1100000110101010010000001011101011010111010000100111";
        ram[110] = "0b1100000100101110101010010110110011001111001111011001";
        ram[111] = "0b1100000010110011101011010001110111000011111001101111";
        ram[112] = "0b1100000000111001010011001111110100101001011010101001";
        ram[113] = "0b1011111110111111100010100011100011110010100110100011";
        ram[114] = "0b1011111101000110011001011111110110001110000000000111";
        ram[115] = "0b1011111011001101111000010111010111100010111110111010";
        ram[116] = "0b1011111001010101111111011100101101001110111000100010";
        ram[117] = "0b1011110111011110101111000010010110100010000110111000";
        ram[118] = "0b1011110101101000000111011010101100011101010011110001";
        ram[119] = "0b1011110011110010001000111000000001101110100010001011";
        ram[120] = "0b1011110001111100110011101100100010101110011010001110";
        ram[121] = "0b1011110000001000001000001010010101011101010101001100";
        ram[122] = "0b1011101110010100000110100011011001100000101011100000";
        ram[123] = "0b1011101100100000101111001001101000000000000010111011";
        ram[124] = "0b1011101010101110000010001110110011100010011101011110";
        ram[125] = "0b1011101000111100000000000100101000001011101010100110";
        ram[126] = "0b1011100111001010101000111100101011011001011000000110";
        ram[127] = "0b1011100101011001111101001000011100000000100100110001";
        ram[128] = "0b1111111111111111111111111111111111111111111111111111";
        ram[129] = "0b1111111111010110101010001001000001100111000100100010";
        ram[130] = "0b1111111110101101010100010101111000000010001111011101";
        ram[131] = "0b1111111110000011111110101010011000000101001100101011";
        ram[132] = "0b1111111101011010101001001010010110100010110001101111";
        ram[133] = "0b1111111100110001010011111001101000001100100011010101";
        ram[134] = "0b1111111100000111111110111100000001110010011010011000";
        ram[135] = "0b1111111011011110101010010101011000000010001001000111";
        ram[136] = "0b1111111010110101010110001001011111100110111111100011";
        ram[137] = "0b1111111010001100000010011100001101001001010001101110";
        ram[138] = "0b1111111001100010101111010001010101001101111011001011";
        ram[139] = "0b1111111000111001011100101100101100010110000101011101";
        ram[140] = "0b1111111000010000001010110010000110111110101100000110";
        ram[141] = "0b1111110111100110111001100101011001100000000010110010";
        ram[142] = "0b1111110110111101101001001010011000001101011001001101";
        ram[143] = "0b1111110110010100011001100100110111010100100001000110";
        ram[144] = "0b1111110101101011001010111000101010111101010010111100";
        ram[145] = "0b1111110101000001111101001001100111001001010011010100";
        ram[146] = "0b1111110100011000110000011011011111110011010111100100";
        ram[147] = "0b1111110011101111100100110010001000101111001011100101";
        ram[148] = "0b1111110011000110011010010001010101101000110110001111";
        ram[149] = "0b1111110010011101010000111100111010000100011111011010";
        ram[150] = "0b1111110001110100001000111000101001011101110100001101";
        ram[151] = "0b1111110001001011000010001000010111000111101100110101";
        ram[152] = "0b1111110000100001111100101111110110001011110010001011";
        ram[153] = "0b1111101111111000111000110010111001101010000001011101";
        ram[154] = "0b1111101111001111110110010101010100011000010011010010";
        ram[155] = "0b1111101110100110110101011010111001000001111111101010";
        ram[156] = "0b1111101101111101110110000111011010000111100100011010";
        ram[157] = "0b1111101101010100111000011110101001111110001001001011";
        ram[158] = "0b1111101100101011111100100100011010101111000101110101";
        ram[159] = "0b1111101100000011000010011100011110010111100111000010";
        ram[160] = "0b1111101011011010001010001010100110101000010100011111";
        ram[161] = "0b1111101010110001010011110010100101000100110101100011";
        ram[162] = "0b1111101010001000011111011000001011000011010110101011";
        ram[163] = "0b1111101001011111101100111111001001101100001111110100";
        ram[164] = "0b1111101000110110111100101011010001111001101000101111";
        ram[165] = "0b1111101000001110001110100000010100010110111111001010";
        ram[166] = "0b1111100111100101100010100010000001100000101011110010";
        ram[167] = "0b1111100110111100111000110100001001100011101000101110";
        ram[168] = "0b1111100110010100010001011010011100011100110110001010";
        ram[169] = "0b1111100101101011101100011000101001111001000000110011";
        ram[170] = "0b1111100101000011001001110010100001010100000110101001";
        ram[171] = "0b1111100100011010101001101011110001111000111100111110";
        ram[172] = "0b1111100011110010001100001000001010100000110110111110";
        ram[173] = "0b1111100011001001110001001011011001110011001001111010";
        ram[174] = "0b1111100010100001011000111001001110000100110011111000";
        ram[175] = "0b1111100001111001000011010101010101011000000001101011";
        ram[176] = "0b1111100001010000110000100011011101011011110100011001";
        ram[177] = "0b1111100000101000100000100111010011101011100110110011";
        ram[178] = "0b1111100000000000010011100100100101001110110100010001";
        ram[179] = "0b1111011111011000001001011110111110111000011110000110";
        ram[180] = "0b1111011110110000000010011010001101000110110001100001";
        ram[181] = "0b1111011110000111111110011001111100000010101110000110";
        ram[182] = "0b1111011101011111111101100001110111011111101011010010";
        ram[183] = "0b1111011100110111111111110101101010111010111110110010";
        ram[184] = "0b1111011100010000000101011001000001011011100011000100";
        ram[185] = "0b1111011011101000001110001111100101110001011100110111";
        ram[186] = "0b1111011011000000011010011101000010010101100010000011";
        ram[187] = "0b1111011010011000101010000101000001001000111111010101";
        ram[188] = "0b1111011001110000111101001011001011110100111111001001";
        ram[189] = "0b1111011001001001010011110011001011101010001111111101";
        ram[190] = "0b1111011000100001101110000000101001100000101001101100";
        ram[191] = "0b1111010111111010001011110111001101110110110110000110";
        ram[192] = "0b1111010111010010101101011010100000110001110101010000";
        ram[193] = "0b1111010110101011010010101110001001111100100101010101";
        ram[194] = "0b1111010110000011111011110101110000100111101001010100";
        ram[195] = "0b1111010101011100101000110100111011101000101110111000";
        ram[196] = "0b1111010100110101011001101111010001011010010101001001";
        ram[197] = "0b1111010100001110001110101000010111111011010100110001";
        ram[198] = "0b1111010011100111000111100011110100101110100100011001";
        ram[199] = "0b1111010011000000000100100101001100111010100010010011";
        ram[200] = "0b1111010010011001000101110000000101001000111000101011";
        ram[201] = "0b1111010001110010001011001000000001100110000110110101";
        ram[202] = "0b1111010001001011010100110000100110000001000110011011";
        ram[203] = "0b1111010000100100100010101101010101101010110011100110";
        ram[204] = "0b1111001111111101110101000001110011010101110011110111";
        ram[205] = "0b1111001111010111001011110001100001010101111101011111";
        ram[206] = "0b1111001110110000100111000000000001011111111110000110";
        ram[207] = "0b1111001110001010000110110000110101001001000010011110";
        ram[208] = "0b1111001101100011101011000111011101000110011110001100";
        ram[209] = "0b1111001100111101010100000111011001101101010010110000";
        ram[210] = "0b1111001100010111000001110100001010110001110110011100";
        ram[211] = "0b1111001011110000110100010001001111100111011100110110";
        ram[212] = "0b1111001011001010101011100010000110111111111110010010";
        ram[213] = "0b1111001010100100100111101010001111001011011111001110";
        ram[214] = "0b1111001001111110101000101101000101110111110111110100";
        ram[215] = "0b1111001001011000101110101110001000010000011100000100";
        ram[216] = "0b1111001000110010111001110000110010111101100011101100";
        ram[217] = "0b1111001000001101001001111000100010000100010001111101";
        ram[218] = "0b1111000111100111011111001000110001000101111101110010";
        ram[219] = "0b1111000111000001111001100100111010111111111001011100";
        ram[220] = "0b1111000110011100011001010000011010001010111010111110";
        ram[221] = "0b1111000101110110111110001110101000011011000100101111";
        ram[222] = "0b1111000101010001101000100010111110111111001100101110";
        ram[223] = "0b1111000100101100011000010000110110100000100110001011";
        ram[224] = "0b1111000100000111001101011011100111000010101000100000";
        ram[225] = "0b1111000011100010001000000110101000000010011001011000";
        ram[226] = "0b1111000010111101001000010101010000010110010011101111";
        ram[227] = "0b1111000010011000001110001010110110001101110001011111";
        ram[228] = "0b1111000001110011011001101010101111010000110011111011";
        ram[229] = "0b1111000001001110101010111000010000011111101100001011";
        ram[230] = "0b1111000000101010000001110110101110010010100100011000";
        ram[231] = "0b1111000000000101011110101001011100011001001000101100";
        ram[232] = "0b1110111111100001000001010011101101111010001111111001";
        ram[233] = "0b1110111110111100101001111000110101010011100100101101";
        ram[234] = "0b1110111110011000011000011100000100011001001111000101";
        ram[235] = "0b1110111101110100001101000000101100010101011100111100";
        ram[236] = "0b1110111101010000000111101001111101101000001011111001";
        ram[237] = "0b1110111100101100001000011011001000000110110010110110";
        ram[238] = "0b1110111100001000001111010111011010111011101010100011";
        ram[239] = "0b1110111011100100011100100010000100100101111000001110";
        ram[240] = "0b1110111011000000101111111110010010111000110110100110";
        ram[241] = "0b1110111010011101001001101111010010111011111111011010";
        ram[242] = "0b1110111001111001101001111000010001001010010101101001";
        ram[243] = "0b1110111001010110010000011100011001010010001111011010";
        ram[244] = "0b1110111000110010111101011110110110010100111111101000";
        ram[245] = "0b1110111000001111110001000010110010100110100000000001";
        ram[246] = "0b1110110111101100101011001011010111101100111011101100";
        ram[247] = "0b1110110111001001101011111011101110100000011000011011";
        ram[248] = "0b1110110110100110110011010110111111001010100010011100";
        ram[249] = "0b1110110110000100000001100000010001000110010101000100";
        ram[250] = "0b1110110101100001010110011010101010111111100110101000";
        ram[251] = "0b1110110100111110110010001001010010110010110010011011";
        ram[252] = "0b1110110100011100010100101111001101101100100010111010";
        ram[253] = "0b1110110011111001111110001111100000001001011101010010";
        ram[254] = "0b1110110011010111101110101101001101110101101011110010";
        ram[255] = "0b1110110010110101100110001011011001101100101000110010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(music_fourth_ordetde) {


static const unsigned DataWidth = 52;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


music_fourth_ordetde_ram* meminst;


SC_CTOR(music_fourth_ordetde) {
meminst = new music_fourth_ordetde_ram("music_fourth_ordetde_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~music_fourth_ordetde() {
    delete meminst;
}


};//endmodule
#endif
