// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __music_fourth_ordeudo_H__
#define __music_fourth_ordeudo_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct music_fourth_ordeudo_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 44;
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


   SC_CTOR(music_fourth_ordeudo_ram) {
        ram[0] = "0b10110001000010110000110011011001000001001011";
        ram[1] = "0b10110001000010110110111001000001101000101110";
        ram[2] = "0b10110001000011001001001001111010100111101110";
        ram[3] = "0b10110001000011100111100110000001001001111010";
        ram[4] = "0b10110001000100010010001101010000100001100000";
        ram[5] = "0b10110001000101001000111111100010001011110110";
        ram[6] = "0b10110001000110001011111100101101101010010100";
        ram[7] = "0b10110001000111011011000100101000101001000001";
        ram[8] = "0b10110001001000110110010111000110111011011101";
        ram[9] = "0b10110001001010011101110011111010011011111010";
        ram[10] = "0b10110001001100010001011010110011001101110100";
        ram[11] = "0b10110001001110010001001011011111011100110101";
        ram[12] = "0b10110001010000011101000101101011011010010010";
        ram[13] = "0b10110001010010110101001001000001100001111011";
        ram[14] = "0b10110001010101011001010101001010011000000111";
        ram[15] = "0b10110001011000001001101001101100100110111001";
        ram[16] = "0b10110001011011000110000110001101000011110110";
        ram[17] = "0b10110001011110001110101010001110101000111100";
        ram[18] = "0b10110001100001100011010101010010011100100000";
        ram[19] = "0b10110001100101000100000110110111101010111100";
        ram[20] = "0b10110001101000110000111110011011101001001110";
        ram[21] = "0b10110001101100101001111011011001110110011101";
        ram[22] = "0b10110001110000101110111101001011111001001111";
        ram[23] = "0b10110001110101000000000011001001100000110110";
        ram[24] = "0b10110001111001011101001100101000100110110111";
        ram[25] = "0b10110001111110000110011000111101001100000110";
        ram[26] = "0b10110010000010111011100111011001011100010010";
        ram[27] = "0b10110010000111111100110111001101101011100001";
        ram[28] = "0b10110010001101001010000111101000010110010101";
        ram[29] = "0b10110010010010100011010111110110000011001100";
        ram[30] = "0b10110010011000001000100111000001100101001011";
        ram[31] = "0b10110010011101111001110100010011110011001101";
        ram[32] = "0b10110010100011110110111110110011110011110100";
        ram[33] = "0b10110010101010000000000101100110110011111100";
        ram[34] = "0b10110010110000010101000111110000001100000110";
        ram[35] = "0b10110010110110110110000100010001011111000010";
        ram[36] = "0b10110010111101100010111010001010011001011111";
        ram[37] = "0b10110011000100011011101000011000110001110010";
        ram[38] = "0b10110011001011100000001101111000101011111100";
        ram[39] = "0b10110011010010110000101001100100010100111101";
        ram[40] = "0b10110011011010001100111010010100000011110110";
        ram[41] = "0b10110011100001110100111110111110011101010110";
        ram[42] = "0b10110011101001101000110110011000010000001010";
        ram[43] = "0b10110011110001101000011111010100010101001111";
        ram[44] = "0b10110011111001110011111000100011110101101011";
        ram[45] = "0b10110100000010001011000000110110000001010100";
        ram[46] = "0b10110100001010101101110110111000011000101100";
        ram[47] = "0b10110100010011011100011001010110100100110110";
        ram[48] = "0b10110100011100010110100110111010011110001111";
        ram[49] = "0b10110100100101011100011110001100001000111000";
        ram[50] = "0b10110100101110101101111101110001110101111111";
        ram[51] = "0b10110100111000001011000100010000000100011001";
        ram[52] = "0b10110101000001110011110000001001100000001000";
        ram[53] = "0b10110101001011100111111111111111000001110000";
        ram[54] = "0b10110101010101100111110010001111110001111101";
        ram[55] = "0b10110101011111110011000101011001000101011001";
        ram[56] = "0b10110101101010001001110111110110100000100111";
        ram[57] = "0b10110101110100101100001000000001110101111110";
        ram[58] = "0b10110101111111011001110100010011000110010111";
        ram[59] = "0b10110110001010010010111011000000100011010001";
        ram[60] = "0b10110110010101010111011010011110101011010110";
        ram[61] = "0b10110110100000100111010001000000001111111101";
        ram[62] = "0b10110110101100000010011100110110001110011001";
        ram[63] = "0b10110110110111101000111100001111110111111011";
        ram[64] = "0b10110111000011011010101101011010101010110001";
        ram[65] = "0b10110111001111010111101110100010011000111011";
        ram[66] = "0b10110111011011011111111101110001000011011100";
        ram[67] = "0b10110111100111110011011001001110111101110010";
        ram[68] = "0b10110111110100010001111111000010101011001100";
        ram[69] = "0b10111000000000111011101101010001000010011110";
        ram[70] = "0b10111000001101110000100001111101001100101011";
        ram[71] = "0b10111000011010110000011011001000100011001010";
        ram[72] = "0b10111000100111111011010110110010110101111011";
        ram[73] = "0b10111000110101010001010010111010000010010110";
        ram[74] = "0b10111001000010110010001101011010011111100011";
        ram[75] = "0b10111001010000011110000100001110110010111101";
        ram[76] = "0b10111001011110010100110101001111111000110111";
        ram[77] = "0b10111001101100010110011110010101000010001001";
        ram[78] = "0b10111001111010100010111101010011110010011101";
        ram[79] = "0b10111010001000111010010000000000000011010110";
        ram[80] = "0b10111010010111011100010100001100000100111111";
        ram[81] = "0b10111010100110001001000111101000011010110111";
        ram[82] = "0b10111010110101000000101000000011111111111011";
        ram[83] = "0b10111011000100000010110011001100000101001111";
        ram[84] = "0b10111011010011001111100110101100010011001010";
        ram[85] = "0b10111011100010100111000000001110100111000001";
        ram[86] = "0b10111011110010001000111101011011011000111010";
        ram[87] = "0b10111100000001110101011011111001010101101110";
        ram[88] = "0b10111100010001101100011001001101100100010001";
        ram[89] = "0b10111100100001101101110010111011100011001110";
        ram[90] = "0b10111100110001111001100110100101001001110111";
        ram[91] = "0b10111101000010001111110001101010101001111101";
        ram[92] = "0b10111101010010110000010001101010101100111001";
        ram[93] = "0b10111101100011011011000100000010011001011111";
        ram[94] = "0b10111101110100010000000110001101001101010000";
        ram[95] = "0b10111110000101001111010101100101000011100100";
        ram[96] = "0b10111110010110011000101111100010010000111100";
        ram[97] = "0b10111110100111101100010001011011100110000110";
        ram[98] = "0b10111110111001001001111000100110010001101010";
        ram[99] = "0b10111111001010110001100010010101111100000010";
        ram[100] = "0b10111111011100100011001011111100101100110011";
        ram[101] = "0b10111111101110011110110010101011000110110111";
        ram[102] = "0b11000000000000100100010011110000001100010010";
        ram[103] = "0b11000000010010110011101100011001011100110110";
        ram[104] = "0b11000000100101001100111001110010110110100110";
        ram[105] = "0b11000000110111101111111001000110110111100000";
        ram[106] = "0b11000001001010011100100111011110011100001000";
        ram[107] = "0b11000001011101010011000010000001000001111010";
        ram[108] = "0b11000001110000010011000101110100100101111011";
        ram[109] = "0b11000010000011011100101111111101100100110011";
        ram[110] = "0b11000010010110101111111101011110111111011001";
        ram[111] = "0b11000010101010001100101011011010010110000110";
        ram[112] = "0b11000010111101110010110110101111101101000010";
        ram[113] = "0b11000011010001100010011100011101101000011101";
        ram[114] = "0b11000011100101011011011001100001010001010011";
        ram[115] = "0b11000011111001011101101010110110010110000010";
        ram[116] = "0b11000100001101101001001101010111000100100101";
        ram[117] = "0b11000100100001111101111101111100010100000111";
        ram[118] = "0b11000100110110011011111001011101011101101000";
        ram[119] = "0b11000101001011000010111100110000100001001000";
        ram[120] = "0b11000101011111110011000100101010000011100101";
        ram[121] = "0b11000101110100101100001101111101010001110000";
        ram[122] = "0b11000110001001101110010101011011111110001111";
        ram[123] = "0b11000110011110111001010111110110100010101011";
        ram[124] = "0b11000110110100001101010001111100000010100101";
        ram[125] = "0b11000111001001101010000000011010000111111010";
        ram[126] = "0b11000111011111001111011111111101000111001100";
        ram[127] = "0b11000111110100111101101101001111111101010000";
        ram[128] = "0b11101011010101000100001100011001110110100010";
        ram[129] = "0b11101011010101000101001001100110111000111110";
        ram[130] = "0b11101011010101001000000001001101111010101110";
        ram[131] = "0b11101011010101001100110011001110100110100000";
        ram[132] = "0b11101011010101010011011111101000011011001001";
        ram[133] = "0b11101011010101011100000110011010101001100101";
        ram[134] = "0b11101011010101100110100111100100010101010011";
        ram[135] = "0b11101011010101110011000011000100010011010010";
        ram[136] = "0b11101011010110000001011000111001001101010011";
        ram[137] = "0b11101011010110010001101001000001011100100011";
        ram[138] = "0b11101011010110100011110011011011001111110100";
        ram[139] = "0b11101011010110110111111000000100100110001110";
        ram[140] = "0b11101011010111001101110110111011010011011101";
        ram[141] = "0b11101011010111100101101111111100111010111110";
        ram[142] = "0b11101011010111111111100011000110110101011011";
        ram[143] = "0b11101011011000011011010000010110001100110011";
        ram[144] = "0b11101011011000111000110111100111111101101001";
        ram[145] = "0b11101011011001011000011000111000110110111101";
        ram[146] = "0b11101011011001111001110100000101011010111110";
        ram[147] = "0b11101011011010011101001001001001111101101010";
        ram[148] = "0b11101011011011000010011000000010100110110000";
        ram[149] = "0b11101011011011101001100000101011001110110100";
        ram[150] = "0b11101011011100010010100010111111100010110100";
        ram[151] = "0b11101011011100111101011110111011000001110011";
        ram[152] = "0b11101011011101101010010100011000111011010001";
        ram[153] = "0b11101011011110011001000011010100010101001011";
        ram[154] = "0b11101011011111001001101011101000000101001001";
        ram[155] = "0b11101011011111111100001101001110110101101101";
        ram[156] = "0b11101011100000110000101000000011000000111110";
        ram[157] = "0b11101011100001100110111011111110110110100000";
        ram[158] = "0b11101011100010011111001000111100010111010011";
        ram[159] = "0b11101011100011011001001110110101010111111001";
        ram[160] = "0b11101011100100010101001101100011011101111010";
        ram[161] = "0b11101011100101010011000101000000000011001101";
        ram[162] = "0b11101011100110010010110101000100010100011111";
        ram[163] = "0b11101011100111010100011101101001001111010001";
        ram[164] = "0b11101011101000010111111110100111100101100111";
        ram[165] = "0b11101011101001011101010111110111111011010011";
        ram[166] = "0b11101011101010100100101001010010101000100111";
        ram[167] = "0b11101011101011101101110010101111110110101011";
        ram[168] = "0b11101011101100111000110100000111100010010010";
        ram[169] = "0b11101011101110000101101101010001011010010001";
        ram[170] = "0b11101011101111010100011110000101000001001000";
        ram[171] = "0b11101011110000100101000110011001101101010100";
        ram[172] = "0b11101011110001110111100110000110100100110010";
        ram[173] = "0b11101011110011001011111101000010100011011001";
        ram[174] = "0b11101011110100100010001011000100010111011110";
        ram[175] = "0b11101011110101111010010000000010100001000101";
        ram[176] = "0b11101011110111010100001011110011010011001010";
        ram[177] = "0b11101011111000101111111110001100110101100011";
        ram[178] = "0b11101011111010001101100111000101000001010000";
        ram[179] = "0b11101011111011101101000110010001100010101101";
        ram[180] = "0b11101011111101001110011011100111111001100111";
        ram[181] = "0b11101011111110110001100110111101011000000010";
        ram[182] = "0b11101100000000010110101000000111000100000110";
        ram[183] = "0b11101100000001111101011110111001110110101001";
        ram[184] = "0b11101100000011100110001011001010011010111011";
        ram[185] = "0b11101100000101010000101100101101010000000010";
        ram[186] = "0b11101100000110111101000011010110100111110001";
        ram[187] = "0b11101100001000101011001110111010100111110010";
        ram[188] = "0b11101100001010011011001111001101001000001000";
        ram[189] = "0b11101100001100001101000100000001110011010001";
        ram[190] = "0b11101100001110000000101101001100001010001010";
        ram[191] = "0b11101100001111110110001010011111011100100110";
        ram[192] = "0b11101100010001101101011011101110110001001011";
        ram[193] = "0b11101100010011100110100000101101000000110000";
        ram[194] = "0b11101100010101100001011001001100110110000101";
        ram[195] = "0b11101100010111011110000101000000110000010100";
        ram[196] = "0b11101100011001011100100011111011000011100010";
        ram[197] = "0b11101100011011011100110101101101110011011010";
        ram[198] = "0b11101100011101011110111010001010111100001001";
        ram[199] = "0b11101100011111100010110001000100000111110100";
        ram[200] = "0b11101100100001101000011010001010111001000001";
        ram[201] = "0b11101100100011101111110101010000100001011111";
        ram[202] = "0b11101100100101111001000010000110001001110011";
        ram[203] = "0b11101100101000000100000000011100101100111101";
        ram[204] = "0b11101100101010010000110000000100111001000000";
        ram[205] = "0b11101100101100011111010000101111001111101111";
        ram[206] = "0b11101100101110101111100010001100000111000101";
        ram[207] = "0b11101100110001000001100100001011101001010001";
        ram[208] = "0b11101100110011010101010110011101110010100011";
        ram[209] = "0b11101100110101101010111000110010010011000010";
        ram[210] = "0b11101100111000000010001010111000110000011101";
        ram[211] = "0b11101100111010011011001100100000100011011110";
        ram[212] = "0b11101100111100110101111101011000110111101000";
        ram[213] = "0b11101100111111010010011101010000101100010000";
        ram[214] = "0b11101101000001110000101011110110110110000101";
        ram[215] = "0b11101101000100010000101000111001111101001000";
        ram[216] = "0b11101101000110110010010100001000011101000100";
        ram[217] = "0b11101101001001010101101101010000100101011101";
        ram[218] = "0b11101101001011111010110100000000011001101111";
        ram[219] = "0b11101101001110100001101000000101110010010100";
        ram[220] = "0b11101101010001001010001001001110011011001111";
        ram[221] = "0b11101101010011110100010111000111110011110111";
        ram[222] = "0b11101101010110100000010001011111010001001110";
        ram[223] = "0b11101101011001001101111000000001111010101000";
        ram[224] = "0b11101101011011111101001010011100101101110010";
        ram[225] = "0b11101101011110101110001000011100011010010110";
        ram[226] = "0b11101101100001100000110001101101100110100000";
        ram[227] = "0b11101101100100010101000101111100101011101001";
        ram[228] = "0b11101101100111001011000100110101110110111100";
        ram[229] = "0b11101101101010000010101110000101001011000101";
        ram[230] = "0b11101101101100111100000001010110011111000000";
        ram[231] = "0b11101101101111110110111110010101011101010101";
        ram[232] = "0b11101101110010110011100100101101100101111110";
        ram[233] = "0b11101101110101110001110100001010001101010100";
        ram[234] = "0b11101101111000110001101100010110011011100000";
        ram[235] = "0b11101101111011110011001100111101001110110010";
        ram[236] = "0b11101101111110110110010101101001011001001111";
        ram[237] = "0b11101110000001111011000110000101100001000101";
        ram[238] = "0b11101110000101000001011101111100000010110100";
        ram[239] = "0b11101110001000001001011100110111001110001010";
        ram[240] = "0b11101110001011010011000010100001001000000101";
        ram[241] = "0b11101110001110011110001110100011101011010111";
        ram[242] = "0b11101110010001101011000000101000100111001001";
        ram[243] = "0b11101110010100111001011000011001011110101111";
        ram[244] = "0b11101110011000001001010101011111101011001010";
        ram[245] = "0b11101110011011011010110111100100011010110101";
        ram[246] = "0b11101110011110101101111110010000101111110101";
        ram[247] = "0b11101110100010000010101001001101100100010011";
        ram[248] = "0b11101110100101011000111000000011100011011100";
        ram[249] = "0b11101110101000110000101010011011010001101001";
        ram[250] = "0b11101110101100001001111111111101000101111011";
        ram[251] = "0b11101110101111100100111000010001001100101011";
        ram[252] = "0b11101110110011000001010010111111101001011110";
        ram[253] = "0b11101110110110011111001111110000010011110010";
        ram[254] = "0b11101110111001111110101110001010111001001010";
        ram[255] = "0b11101110111101011111101101110110111100001010";


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


SC_MODULE(music_fourth_ordeudo) {


static const unsigned DataWidth = 44;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


music_fourth_ordeudo_ram* meminst;


SC_CTOR(music_fourth_ordeudo) {
meminst = new music_fourth_ordeudo_ram("music_fourth_ordeudo_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~music_fourth_ordeudo() {
    delete meminst;
}


};//endmodule
#endif
