// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __music_ref_4oPi_tasc4_H__
#define __music_ref_4oPi_tasc4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct music_ref_4oPi_tasc4_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 256;
  static const unsigned AddressRange = 10;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(music_ref_4oPi_tasc4_ram) {
        ram[0] = "0b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000101000101111100110000011011011100100111001000100000101010010100111111100001001110101011111010001111101010011010011011101110000";
        ram[1] = "0b0010100010111110011000001101101110010011100100010000010101001010011111110000100111010101111101000111110101001101001101110111000000110110110110001010010101100110010011110001000011100100000100000111111110010100010110001110101011110111101011101111000101011000";
        ram[2] = "0b0011011011011000101001010110011001001111000100001110010000010000011111111001010001011000111010101111011110101110111100010101100001101101110010010001101110001110100100001001001101110100101110000000000110010010010010111011101010000010011101000110010010000111";
        ram[3] = "0b0110110111001001000110111000111010010000100100110111010010111000000000011001001001001011101110101000001001110100011001001000011100111111100001110111101011000111001011000100101001101001110011111011101000100000100011010111110101001011101011101101000100100001";
        ram[4] = "0b0011111110000111011110101100011100101100010010100110100111001111101110100010000010001101011111010100101110101110110100010010000100111010011001110001110000001001101011010001011111011111100100000100111001100100011101011000111001100000110101001100111001111101";
        ram[5] = "0b0011101001100111000111000000100110101101000101111101111110010000010011100110010001110101100011100110000011010100110011100111110100100111001000010001011111100010111011110111111001001010000011101100011111111110001001011111111111110111100000010110011000000011";
        ram[6] = "0b0010011100100001000101111110001011101111011111100100101000001110110001111111111000100101111111111111011110000001011001100000001111111011110010111100010001100010110101101000001010011011010001111101101101001101100111111011001111001001111100101100001001101101";
        ram[7] = "0b1111101111001011110001000110001011010110100000101001101101000111110110110100110110011111101100111100100111110010110000100110110111010011110100011000111111011001101001111001011111111010100010110101110101001001111011101011000111111010111110010111110001011110";
        ram[8] = "0b1101001111010001100011111101100110100111100101111111101010001011010111010100100111101110101100011111101011111001011111000101111011001111010000011100111001111101111000101001010010100100101110101001101011111110110101111110110001000111111000110101011101000010";
        ram[9] = "0b1100111101000001110011100111110111100010100101001010010010111010100110101111111011010111111011000100011111100011010101110100001000010101100000001100110000010001101111110001111011011010111010101111110000110011111011110000100000100110101111010000110110000111";


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


SC_MODULE(music_ref_4oPi_tasc4) {


static const unsigned DataWidth = 256;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


music_ref_4oPi_tasc4_ram* meminst;


SC_CTOR(music_ref_4oPi_tasc4) {
meminst = new music_ref_4oPi_tasc4_ram("music_ref_4oPi_tasc4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~music_ref_4oPi_tasc4() {
    delete meminst;
}


};//endmodule
#endif
