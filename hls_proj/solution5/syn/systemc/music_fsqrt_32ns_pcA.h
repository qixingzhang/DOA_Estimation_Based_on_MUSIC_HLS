// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __music_fsqrt_32ns_pcA__HH__
#define __music_fsqrt_32ns_pcA__HH__
#include "ACMP_fsqrt.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(music_fsqrt_32ns_pcA) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fsqrt<ID, 5, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_fsqrt_U;

    SC_CTOR(music_fsqrt_32ns_pcA):  ACMP_fsqrt_U ("ACMP_fsqrt_U") {
        ACMP_fsqrt_U.clk(clk);
        ACMP_fsqrt_U.reset(reset);
        ACMP_fsqrt_U.ce(ce);
        ACMP_fsqrt_U.din0(din0);
        ACMP_fsqrt_U.din1(din1);
        ACMP_fsqrt_U.dout(dout);

    }

};

#endif //
