#include "music.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void music::thread_AUU_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln283_3_fu_6249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        AUU_M_imag_address0 = AUU_M_imag_addr_2_reg_8099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3349_p1.read());
    } else {
        AUU_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        AUU_M_imag_ce0 = ap_const_logic_1;
    } else {
        AUU_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        AUU_M_imag_d0 = complex_M_imag_read_3_reg_2640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_d0 = ap_const_lv32_0;
    } else {
        AUU_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln273_fu_6129_p2.read())))) {
        AUU_M_imag_we0 = ap_const_logic_1;
    } else {
        AUU_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln283_3_fu_6249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        AUU_M_real_address0 = AUU_M_real_addr_2_reg_8094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3349_p1.read());
    } else {
        AUU_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        AUU_M_real_ce0 = ap_const_logic_1;
    } else {
        AUU_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        AUU_M_real_d0 = complex_M_real_read_3_reg_2653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_d0 = ap_const_lv32_0;
    } else {
        AUU_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln273_fu_6129_p2.read())))) {
        AUU_M_real_we0 = ap_const_logic_1;
    } else {
        AUU_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln102_2_fu_4017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln234_5_fu_3913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln1027_fu_3203_p1.read());
    } else {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_address1() {
    Autocorr_Buffer_M_i_address1 =  (sc_lv<6>) (zext_ln102_1_fu_4006_p1.read());
}

void music::thread_Autocorr_Buffer_M_i_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()))) {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        Autocorr_Buffer_M_i_d0 = data_addr_2_read_reg_6745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_i_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()))) {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln102_2_fu_4017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln234_5_fu_3913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln1027_fu_3203_p1.read());
    } else {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_address1() {
    Autocorr_Buffer_M_r_address1 =  (sc_lv<6>) (zext_ln102_1_fu_4006_p1.read());
}

void music::thread_Autocorr_Buffer_M_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()))) {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        Autocorr_Buffer_M_r_d0 = data_addr_1_read_reg_6740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_r_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()))) {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_0;
    }
}

void music::thread_B_V_fu_5421_p1() {
    B_V_fu_5421_p1 = r_V_36_fu_5404_p3.read().range(56-1, 0);
}

void music::thread_DFTpts_fu_3619_p2() {
    DFTpts_fu_3619_p2 = (!zext_ln159_fu_3609_p1.read().is_01())? sc_lv<11>(): ap_const_lv11_1 << (unsigned short)zext_ln159_fu_3609_p1.read().to_uint();
}

void music::thread_Ex_V_fu_5346_p2() {
    Ex_V_fu_5346_p2 = (!select_ln482_fu_5318_p3.read().is_01() || !zext_ln655_fu_5343_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(select_ln482_fu_5318_p3.read()) - sc_biguint<11>(zext_ln655_fu_5343_p1.read()));
}

void music::thread_FFT_Buffer_im_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln223_fu_3718_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_5_reg_6608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_2_reg_6518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln126_fu_3597_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln218_2_fu_3524_p1.read());
    } else {
        FFT_Buffer_im_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_5_reg_6608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_4_reg_6597.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (sext_ln182_fu_3685_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_1_reg_6512.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (zext_ln127_fu_3603_p1.read());
    } else {
        FFT_Buffer_im_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        FFT_Buffer_im_ce0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        FFT_Buffer_im_ce1 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        FFT_Buffer_im_d0 = temp_1_reg_6529.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_im_d0 = ap_const_lv32_0;
    } else {
        FFT_Buffer_im_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        FFT_Buffer_im_d1 = reg_3023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        FFT_Buffer_im_d1 = reg_3040.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_im_d1 = FFT_Buffer_im_q1.read();
    } else {
        FFT_Buffer_im_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln124_reg_6496.read())))) {
        FFT_Buffer_im_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        FFT_Buffer_im_we1 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln223_fu_3718_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_5_reg_6602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_2_reg_6506.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln126_fu_3597_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln218_2_fu_3524_p1.read());
    } else {
        FFT_Buffer_re_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_5_reg_6602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_4_reg_6592.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (sext_ln182_fu_3685_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_1_reg_6500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (zext_ln127_fu_3603_p1.read());
    } else {
        FFT_Buffer_re_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        FFT_Buffer_re_ce0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        FFT_Buffer_re_ce1 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        FFT_Buffer_re_d0 = temp_reg_6524.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_re_d0 = data_addr_read_reg_6455.read();
    } else {
        FFT_Buffer_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        FFT_Buffer_re_d1 = reg_3016.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        FFT_Buffer_re_d1 = reg_3034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_re_d1 = FFT_Buffer_re_q1.read();
    } else {
        FFT_Buffer_re_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln124_reg_6496.read())))) {
        FFT_Buffer_re_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        FFT_Buffer_re_we1 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we1 = ap_const_logic_0;
    }
}

void music::thread_Mx_bits_V_2_fu_5254_p2() {
    Mx_bits_V_2_fu_5254_p2 = (!ap_const_lv124_0.is_01() || !p_Val2_69_reg_7678.read().is_01())? sc_lv<124>(): (sc_biguint<124>(ap_const_lv124_0) - sc_biguint<124>(p_Val2_69_reg_7678.read()));
}

void music::thread_Mx_zeros_V_fu_5309_p1() {
    Mx_zeros_V_fu_5309_p1 = tmp_i_i_i1_fu_5301_p3.read().range(6-1, 0);
}

void music::thread_P_sm_address0() {
    P_sm_address0 =  (sc_lv<9>) (zext_ln290_reg_8260.read());
}

void music::thread_P_sm_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        P_sm_ce0 = ap_const_logic_1;
    } else {
        P_sm_ce0 = ap_const_logic_0;
    }
}

void music::thread_P_sm_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        P_sm_we0 = ap_const_logic_1;
    } else {
        P_sm_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_2_fu_4337_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_4058_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_imag_address0 = grp_qrf_top_fu_2756_Q_M_imag_address0.read();
    } else {
        Q_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()))) {
        Q_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_imag_ce0 = grp_qrf_top_fu_2756_Q_M_imag_ce0.read();
    } else {
        Q_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        Q_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_imag_d0 = grp_qrf_top_fu_2756_Q_M_imag_d0.read();
    } else {
        Q_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        Q_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_imag_we0 = grp_qrf_top_fu_2756_Q_M_imag_we0.read();
    } else {
        Q_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_2_fu_4337_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_4058_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_real_address0 = grp_qrf_top_fu_2756_Q_M_real_address0.read();
    } else {
        Q_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()))) {
        Q_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_real_ce0 = grp_qrf_top_fu_2756_Q_M_real_ce0.read();
    } else {
        Q_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        Q_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_real_d0 = grp_qrf_top_fu_2756_Q_M_real_d0.read();
    } else {
        Q_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        Q_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        Q_temp_M_real_we0 = grp_qrf_top_fu_2756_Q_M_real_we0.read();
    } else {
        Q_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_3_fu_4348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4096_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_imag_address0 = grp_qrf_top_fu_2756_R_M_imag_address0.read();
    } else {
        R_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()))) {
        R_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_imag_ce0 = grp_qrf_top_fu_2756_R_M_imag_ce0.read();
    } else {
        R_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        R_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_imag_d0 = grp_qrf_top_fu_2756_R_M_imag_d0.read();
    } else {
        R_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        R_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_imag_we0 = grp_qrf_top_fu_2756_R_M_imag_we0.read();
    } else {
        R_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_3_fu_4348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4096_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_real_address0 = grp_qrf_top_fu_2756_R_M_real_address0.read();
    } else {
        R_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()))) {
        R_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_real_ce0 = grp_qrf_top_fu_2756_R_M_real_ce0.read();
    } else {
        R_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        R_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_real_d0 = grp_qrf_top_fu_2756_R_M_real_d0.read();
    } else {
        R_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        R_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        R_temp_M_real_we0 = grp_qrf_top_fu_2756_R_M_real_we0.read();
    } else {
        R_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4689_p2.read()))) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_5_reg_7277.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4689_p2.read()))) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln68_fu_4704_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_8_reg_7254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_fu_4627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln57_fu_4582_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_4_reg_7188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln54_fu_4546_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4513_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_reg_7133.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_2_reg_7106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4134_p1.read());
    } else {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4689_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4689_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()))) {
        Rx_temp_M_imag_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read())) {
        Rx_temp_M_imag_d0 = reg_3023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        Rx_temp_M_imag_d0 = grp_fu_2908_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        Rx_temp_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        Rx_temp_M_imag_d0 = reg_3063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        Rx_temp_M_imag_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_7129.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4456_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4468_p2.read())))) {
        Rx_temp_M_imag_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4689_p2.read()))) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_5_reg_7272.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4689_p2.read()))) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln68_fu_4704_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_8_reg_7249.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_fu_4627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln57_fu_4582_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_4_reg_7183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln54_fu_4546_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4513_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_reg_7133.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_2_reg_7101.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4134_p1.read());
    } else {
        Rx_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4689_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4689_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()))) {
        Rx_temp_M_real_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        Rx_temp_M_real_d0 = grp_fu_2902_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        Rx_temp_M_real_d0 = temp_mat_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()))) {
        Rx_temp_M_real_d0 = reg_2966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        Rx_temp_M_real_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_7129.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4456_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4468_p2.read())))) {
        Rx_temp_M_real_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_fu_5053_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_fu_5059_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_fu_5053_p2.read())))) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln244_3_fu_5048_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read())) {
        U_M_imag_address0 = U_M_imag_addr_5_reg_7399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln76_1_fu_4800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read())) {
        U_M_imag_address0 = U_M_imag_addr_3_reg_7287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4727_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read())) {
        U_M_imag_address0 = U_M_imag_addr_2_reg_7078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6933.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3241_p1.read());
    } else {
        U_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_fu_5053_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_fu_5059_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_fu_5053_p2.read())))) {
        U_M_imag_ce0 = ap_const_logic_1;
    } else {
        U_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()))) {
        U_M_imag_d0 = grp_fu_2908_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        U_M_imag_d0 = ap_const_lv32_0;
    } else {
        U_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4493_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()))) {
        U_M_imag_we0 = ap_const_logic_1;
    } else {
        U_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_fu_5053_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_fu_5059_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_fu_5053_p2.read())))) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln244_3_fu_5048_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read())) {
        U_M_real_address0 = U_M_real_addr_5_reg_7394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln76_1_fu_4800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read())) {
        U_M_real_address0 = U_M_real_addr_3_reg_7282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        U_M_real_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4727_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read())) {
        U_M_real_address0 = U_M_real_addr_2_reg_7073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6933.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3241_p1.read());
    } else {
        U_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_fu_5053_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_fu_5059_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_fu_5053_p2.read())))) {
        U_M_real_ce0 = ap_const_logic_1;
    } else {
        U_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()))) {
        U_M_real_d0 = grp_fu_2902_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read())) {
        U_M_real_d0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        U_M_real_d0 = ap_const_lv32_0;
    } else {
        U_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4493_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()))) {
        U_M_real_we0 = ap_const_logic_1;
    } else {
        U_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state464.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln264_2_fu_6049_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln264_3_fu_6043_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_1_reg_7530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_2_reg_7535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3279_p1.read());
    } else {
        Un_M_imag_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state464.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read())))) {
        Un_M_imag_ce0 = ap_const_logic_1;
    } else {
        Un_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read())))) {
        Un_M_imag_d0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_d0 = ap_const_lv32_0;
    } else {
        Un_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read())))) {
        Un_M_imag_we0 = ap_const_logic_1;
    } else {
        Un_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state464.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln264_2_fu_6049_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln264_3_fu_6043_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read()))) {
        Un_M_real_address0 = Un_M_real_addr_1_reg_7520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read()))) {
        Un_M_real_address0 = Un_M_real_addr_2_reg_7525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3279_p1.read());
    } else {
        Un_M_real_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state464.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read())))) {
        Un_M_real_ce0 = ap_const_logic_1;
    } else {
        Un_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read())))) {
        Un_M_real_d0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_d0 = ap_const_lv32_0;
    } else {
        Un_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln243_reg_7568.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln245_reg_7572.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln243_reg_7568.read())))) {
        Un_M_real_we0 = ap_const_logic_1;
    } else {
        Un_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln283_4_fu_6266_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln274_2_fu_6169_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln255_1_fu_5922_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3413_p1.read());
    } else {
        a_theta_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) && 
          esl_seteq<1,1,1>(ap_block_state460_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        a_theta_M_imag_d0 = bitcast_ln256_1_fu_5937_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_imag_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) && 
          esl_seteq<1,1,1>(ap_block_state460_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_we0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln283_4_fu_6266_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln274_2_fu_6169_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln255_1_fu_5922_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3413_p1.read());
    } else {
        a_theta_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) && 
          esl_seteq<1,1,1>(ap_block_state460_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        a_theta_M_real_d0 = grp_sin_or_cos_float_s_fu_2766_ap_return.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_real_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) && 
          esl_seteq<1,1,1>(ap_block_state460_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_we0 = ap_const_logic_1;
    } else {
        a_theta_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_add_ln1027_fu_3407_p2() {
    add_ln1027_fu_3407_p2 = (!phi_mul_reg_1889.read().is_01() || !zext_ln1027_10_fu_3403_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1889.read()) + sc_biguint<11>(zext_ln1027_10_fu_3403_p1.read()));
}

void music::thread_add_ln102_1_fu_4012_p2() {
    add_ln102_1_fu_4012_p2 = (!zext_ln104_1_reg_6776.read().is_01() || !zext_ln102_fu_3997_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln104_1_reg_6776.read()) + sc_biguint<7>(zext_ln102_fu_3997_p1.read()));
}

void music::thread_add_ln102_fu_4001_p2() {
    add_ln102_fu_4001_p2 = (!zext_ln104_reg_6758.read().is_01() || !zext_ln102_fu_3997_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln104_reg_6758.read()) + sc_biguint<7>(zext_ln102_fu_3997_p1.read()));
}

void music::thread_add_ln1044_fu_4382_p2() {
    add_ln1044_fu_4382_p2 = (!zext_ln1044_fu_4366_p1.read().is_01() || !zext_ln1044_1_fu_4378_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_fu_4366_p1.read()) + sc_biguint<6>(zext_ln1044_1_fu_4378_p1.read()));
}

void music::thread_add_ln104_fu_3966_p2() {
    add_ln104_fu_3966_p2 = (!zext_ln99_reg_6763.read().is_01() || !zext_ln104_2_fu_3962_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln99_reg_6763.read()) + sc_biguint<6>(zext_ln104_2_fu_3962_p1.read()));
}

void music::thread_add_ln1146_1_fu_5628_p2() {
    add_ln1146_1_fu_5628_p2 = (!zext_ln662_fu_5619_p1.read().is_01() || !zext_ln1146_fu_5625_p1.read().is_01())? sc_lv<38>(): (sc_biguint<38>(zext_ln662_fu_5619_p1.read()) + sc_biguint<38>(zext_ln1146_fu_5625_p1.read()));
}

void music::thread_add_ln1146_2_fu_5638_p2() {
    add_ln1146_2_fu_5638_p2 = (!zext_ln1146_1_fu_5634_p1.read().is_01() || !sext_ln657_fu_5622_p1.read().is_01())? sc_lv<49>(): (sc_biguint<49>(zext_ln1146_1_fu_5634_p1.read()) + sc_bigint<49>(sext_ln657_fu_5622_p1.read()));
}

void music::thread_add_ln1146_fu_5658_p2() {
    add_ln1146_fu_5658_p2 = (!lhs_V_2_fu_5651_p1.read().is_01() || !rhs_V_2_fu_5655_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(lhs_V_2_fu_5651_p1.read()) + sc_bigint<64>(rhs_V_2_fu_5655_p1.read()));
}

void music::thread_add_ln114_1_fu_5147_p2() {
    add_ln114_1_fu_5147_p2 = (!ap_const_lv11_44D.is_01() || !tmp_V_fu_5127_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_44D) + sc_biguint<11>(tmp_V_fu_5127_p4.read()));
}

void music::thread_add_ln114_fu_5313_p2() {
    add_ln114_fu_5313_p2 = (!ap_const_lv11_403.is_01() || !tmp_V_reg_7628.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_403) + sc_biguint<11>(tmp_V_reg_7628.read()));
}

void music::thread_add_ln11_1_fu_4044_p2() {
    add_ln11_1_fu_4044_p2 = (!phi_ln11_1_reg_2146.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_1_reg_2146.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln11_fu_4038_p2() {
    add_ln11_fu_4038_p2 = (!phi_ln11_reg_2134.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_reg_2134.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_1_fu_4082_p2() {
    add_ln12_1_fu_4082_p2 = (!phi_ln12_1_reg_2169.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_1_reg_2169.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_fu_4076_p2() {
    add_ln12_fu_4076_p2 = (!phi_ln12_reg_2157.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_reg_2157.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_1_fu_4120_p2() {
    add_ln13_1_fu_4120_p2 = (!phi_ln13_1_reg_2192.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_1_reg_2192.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_fu_4114_p2() {
    add_ln13_fu_4114_p2 = (!phi_ln13_reg_2180.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_reg_2180.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_1_fu_4158_p2() {
    add_ln14_1_fu_4158_p2 = (!phi_ln14_1_reg_2215.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_1_reg_2215.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_fu_4152_p2() {
    add_ln14_fu_4152_p2 = (!phi_ln14_reg_2203.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_reg_2203.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln204_1_fu_3189_p2() {
    add_ln204_1_fu_3189_p2 = (!phi_ln204_1_reg_1763.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln204_1_reg_1763.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln204_fu_3183_p2() {
    add_ln204_fu_3183_p2 = (!phi_ln204_reg_1751.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln204_reg_1751.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_add_ln205_1_fu_3227_p2() {
    add_ln205_1_fu_3227_p2 = (!phi_ln205_1_reg_1786.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln205_1_reg_1786.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln205_fu_3221_p2() {
    add_ln205_fu_3221_p2 = (!phi_ln205_reg_1774.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln205_reg_1774.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln206_fu_3259_p2() {
    add_ln206_fu_3259_p2 = (!phi_ln206_reg_1797.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln206_reg_1797.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln207_1_fu_3297_p2() {
    add_ln207_1_fu_3297_p2 = (!phi_ln207_1_reg_1832.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln207_1_reg_1832.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln207_fu_3291_p2() {
    add_ln207_fu_3291_p2 = (!phi_ln207_reg_1820.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln207_reg_1820.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln208_1_fu_3335_p2() {
    add_ln208_1_fu_3335_p2 = (!phi_ln208_1_reg_1855.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln208_1_reg_1855.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln208_fu_3329_p2() {
    add_ln208_fu_3329_p2 = (!phi_ln208_reg_1843.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln208_reg_1843.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln209_fu_3367_p2() {
    add_ln209_fu_3367_p2 = (!phi_ln209_reg_1866.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln209_reg_1866.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln210_1_fu_3397_p2() {
    add_ln210_1_fu_3397_p2 = (!phi_ln210_1_reg_1901.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln210_1_reg_1901.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln210_2_fu_3385_p2() {
    add_ln210_2_fu_3385_p2 = (!phi_mul_reg_1889.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1889.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln210_fu_3391_p2() {
    add_ln210_fu_3391_p2 = (!phi_ln210_reg_1877.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln210_reg_1877.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln218_1_fu_3500_p2() {
    add_ln218_1_fu_3500_p2 = (!zext_ln217_1_reg_6430.read().is_01() || !zext_ln218_fu_3496_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln217_1_reg_6430.read()) + sc_biguint<17>(zext_ln218_fu_3496_p1.read()));
}

void music::thread_add_ln218_2_fu_3509_p2() {
    add_ln218_2_fu_3509_p2 = (!zext_ln218_1_fu_3505_p1.read().is_01() || !p_cast_reg_6295.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln218_1_fu_3505_p1.read()) + sc_biguint<31>(p_cast_reg_6295.read()));
}

void music::thread_add_ln218_fu_3483_p2() {
    add_ln218_fu_3483_p2 = (!shl_ln_reg_6416.read().is_01() || !zext_ln217_fu_3467_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6416.read()) + sc_biguint<14>(zext_ln217_fu_3467_p1.read()));
}

void music::thread_add_ln223_1_fu_3741_p2() {
    add_ln223_1_fu_3741_p2 = (!zext_ln217_1_reg_6430.read().is_01() || !zext_ln223_1_fu_3737_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln217_1_reg_6430.read()) + sc_biguint<17>(zext_ln223_1_fu_3737_p1.read()));
}

void music::thread_add_ln223_2_fu_3750_p2() {
    add_ln223_2_fu_3750_p2 = (!zext_ln223_2_fu_3746_p1.read().is_01() || !p_cast_reg_6295.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln223_2_fu_3746_p1.read()) + sc_biguint<31>(p_cast_reg_6295.read()));
}

void music::thread_add_ln223_fu_3724_p2() {
    add_ln223_fu_3724_p2 = (!shl_ln_reg_6416.read().is_01() || !zext_ln222_fu_3702_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6416.read()) + sc_biguint<14>(zext_ln222_fu_3702_p1.read()));
}

void music::thread_add_ln224_fu_3765_p2() {
    add_ln224_fu_3765_p2 = (!zext_ln223_2_reg_6632.read().is_01() || !p_cast19_reg_6289.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln223_2_reg_6632.read()) + sc_biguint<31>(p_cast19_reg_6289.read()));
}

void music::thread_add_ln22_fu_4230_p2() {
    add_ln22_fu_4230_p2 = (!zext_ln21_reg_6920.read().is_01() || !zext_ln22_fu_4226_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln21_reg_6920.read()) + sc_biguint<6>(zext_ln22_fu_4226_p1.read()));
}

void music::thread_add_ln234_1_fu_3869_p2() {
    add_ln234_1_fu_3869_p2 = (!zext_ln232_reg_6700.read().is_01() || !zext_ln234_2_fu_3865_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln232_reg_6700.read()) + sc_biguint<17>(zext_ln234_2_fu_3865_p1.read()));
}

void music::thread_add_ln234_2_fu_3878_p2() {
    add_ln234_2_fu_3878_p2 = (!zext_ln234_3_fu_3874_p1.read().is_01() || !p_cast_reg_6295.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln234_3_fu_3874_p1.read()) + sc_biguint<31>(p_cast_reg_6295.read()));
}

void music::thread_add_ln234_3_fu_3888_p2() {
    add_ln234_3_fu_3888_p2 = (!zext_ln234_reg_6695.read().is_01() || !zext_ln234_1_fu_3861_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln234_reg_6695.read()) + sc_biguint<7>(zext_ln234_1_fu_3861_p1.read()));
}

void music::thread_add_ln234_fu_3832_p2() {
    add_ln234_fu_3832_p2 = (!shl_ln1_fu_3824_p3.read().is_01() || !zext_ln229_reg_6664.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln1_fu_3824_p3.read()) + sc_biguint<14>(zext_ln229_reg_6664.read()));
}

void music::thread_add_ln235_fu_3883_p2() {
    add_ln235_fu_3883_p2 = (!zext_ln234_3_fu_3874_p1.read().is_01() || !p_cast19_reg_6289.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln234_3_fu_3874_p1.read()) + sc_biguint<31>(p_cast19_reg_6289.read()));
}

void music::thread_add_ln244_fu_5043_p2() {
    add_ln244_fu_5043_p2 = (!zext_ln244_reg_7515.read().is_01() || !zext_ln244_2_fu_5039_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln244_reg_7515.read()) + sc_biguint<6>(zext_ln244_2_fu_5039_p1.read()));
}

void music::thread_add_ln251_fu_5065_p2() {
    add_ln251_fu_5065_p2 = (!phi_mul9_reg_2536.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2536.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln255_fu_5109_p2() {
    add_ln255_fu_5109_p2 = (!phi_mul9_reg_2536.read().is_01() || !zext_ln255_fu_5105_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2536.read()) + sc_biguint<11>(zext_ln255_fu_5105_p1.read()));
}

void music::thread_add_ln264_1_fu_6038_p2() {
    add_ln264_1_fu_6038_p2 = (!zext_ln266_1_reg_7987.read().is_01() || !zext_ln264_1_fu_6029_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln266_1_reg_7987.read()) + sc_biguint<5>(zext_ln264_1_fu_6029_p1.read()));
}

void music::thread_add_ln264_fu_6033_p2() {
    add_ln264_fu_6033_p2 = (!zext_ln266_reg_7969.read().is_01() || !zext_ln264_1_fu_6029_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln266_reg_7969.read()) + sc_biguint<5>(zext_ln264_1_fu_6029_p1.read()));
}

void music::thread_add_ln266_fu_6006_p2() {
    add_ln266_fu_6006_p2 = (!zext_ln264_fu_5990_p1.read().is_01() || !zext_ln260_reg_7974.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln264_fu_5990_p1.read()) + sc_biguint<6>(zext_ln260_reg_7974.read()));
}

void music::thread_add_ln274_1_fu_6164_p2() {
    add_ln274_1_fu_6164_p2 = (!zext_ln276_reg_8071.read().is_01() || !phi_mul11_reg_2677.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln276_reg_8071.read()) + sc_biguint<11>(phi_mul11_reg_2677.read()));
}

void music::thread_add_ln274_2_fu_6158_p2() {
    add_ln274_2_fu_6158_p2 = (!phi_mul11_reg_2677.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul11_reg_2677.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln274_fu_6153_p2() {
    add_ln274_fu_6153_p2 = (!zext_ln276_1_reg_8089.read().is_01() || !zext_ln274_fu_6149_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln276_1_reg_8089.read()) + sc_biguint<6>(zext_ln274_fu_6149_p1.read()));
}

void music::thread_add_ln276_fu_6118_p2() {
    add_ln276_fu_6118_p2 = (!zext_ln270_reg_8076.read().is_01() || !zext_ln276_2_fu_6114_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln270_reg_8076.read()) + sc_biguint<12>(zext_ln276_2_fu_6114_p1.read()));
}

void music::thread_add_ln283_1_fu_6261_p2() {
    add_ln283_1_fu_6261_p2 = (!phi_mul13_reg_2734.read().is_01() || !zext_ln283_1_reg_8172.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul13_reg_2734.read()) + sc_biguint<11>(zext_ln283_1_reg_8172.read()));
}

void music::thread_add_ln283_2_fu_6255_p2() {
    add_ln283_2_fu_6255_p2 = (!phi_mul13_reg_2734.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul13_reg_2734.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln283_fu_6244_p2() {
    add_ln283_fu_6244_p2 = (!zext_ln282_reg_8177.read().is_01() || !zext_ln283_2_fu_6240_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln282_reg_8177.read()) + sc_biguint<12>(zext_ln283_2_fu_6240_p1.read()));
}

void music::thread_add_ln34_1_fu_4343_p2() {
    add_ln34_1_fu_4343_p2 = (!zext_ln34_fu_4316_p1.read().is_01() || !zext_ln30_reg_6967.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln34_fu_4316_p1.read()) + sc_biguint<6>(zext_ln30_reg_6967.read()));
}

void music::thread_add_ln34_fu_4332_p2() {
    add_ln34_fu_4332_p2 = (!zext_ln36_reg_6981.read().is_01() || !zext_ln34_1_fu_4328_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln36_reg_6981.read()) + sc_biguint<6>(zext_ln34_1_fu_4328_p1.read()));
}

void music::thread_add_ln36_fu_4293_p2() {
    add_ln36_fu_4293_p2 = (!zext_ln30_reg_6967.read().is_01() || !zext_ln36_fu_4289_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln30_reg_6967.read()) + sc_biguint<6>(zext_ln36_fu_4289_p1.read()));
}

void music::thread_add_ln45_fu_4442_p2() {
    add_ln45_fu_4442_p2 = (!zext_ln45_fu_4426_p1.read().is_01() || !zext_ln45_1_fu_4438_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_fu_4426_p1.read()) + sc_biguint<6>(zext_ln45_1_fu_4438_p1.read()));
}

void music::thread_add_ln47_fu_4478_p2() {
    add_ln47_fu_4478_p2 = (!zext_ln45_1_reg_7096.read().is_01() || !zext_ln47_fu_4474_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_1_reg_7096.read()) + sc_biguint<6>(zext_ln47_fu_4474_p1.read()));
}

void music::thread_add_ln54_fu_4541_p2() {
    add_ln54_fu_4541_p2 = (!zext_ln52_reg_7174.read().is_01() || !trunc_ln54_fu_4537_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_7174.read()) + sc_biguint<6>(trunc_ln54_fu_4537_p1.read()));
}

void music::thread_add_ln59_1_fu_4610_p2() {
    add_ln59_1_fu_4610_p2 = (!zext_ln52_reg_7174.read().is_01() || !trunc_ln59_fu_4601_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_7174.read()) + sc_biguint<6>(trunc_ln59_fu_4601_p1.read()));
}

void music::thread_add_ln59_fu_4605_p2() {
    add_ln59_fu_4605_p2 = (!sext_ln57_cast_reg_7221.read().is_01() || !trunc_ln59_fu_4601_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln57_cast_reg_7221.read()) + sc_biguint<6>(trunc_ln59_fu_4601_p1.read()));
}

void music::thread_add_ln68_1_fu_4722_p2() {
    add_ln68_1_fu_4722_p2 = (!sext_ln68_2_cast_fu_4714_p3.read().is_01() || !zext_ln1044_reg_7061.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln68_2_cast_fu_4714_p3.read()) + sc_biguint<6>(zext_ln1044_reg_7061.read()));
}

void music::thread_add_ln68_fu_4699_p2() {
    add_ln68_fu_4699_p2 = (!sext_ln70_reg_7267.read().is_01() || !trunc_ln68_fu_4695_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_reg_7267.read()) + sc_biguint<6>(trunc_ln68_fu_4695_p1.read()));
}

void music::thread_add_ln70_fu_4660_p2() {
    add_ln70_fu_4660_p2 = (!sext_ln70_fu_4656_p1.read().is_01() || !zext_ln68_fu_4644_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4656_p1.read()) + sc_biguint<6>(zext_ln68_fu_4644_p1.read()));
}

void music::thread_add_ln72_fu_4672_p2() {
    add_ln72_fu_4672_p2 = (!sext_ln70_fu_4656_p1.read().is_01() || !zext_ln1044_reg_7061.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4656_p1.read()) + sc_biguint<6>(zext_ln1044_reg_7061.read()));
}

void music::thread_add_ln76_fu_4795_p2() {
    add_ln76_fu_4795_p2 = (!zext_ln1044_reg_7061.read().is_01() || !zext_ln76_fu_4791_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_reg_7061.read()) + sc_biguint<6>(zext_ln76_fu_4791_p1.read()));
}

void music::thread_addr_V_fu_5153_p3() {
    addr_V_fu_5153_p3 = (!closepath_fu_5141_p2.read()[0].is_01())? sc_lv<11>(): ((closepath_fu_5141_p2.read()[0].to_bool())? ap_const_lv11_4A: add_ln114_1_fu_5147_p2.read());
}

void music::thread_and_ln300_2_fu_5857_p2() {
    and_ln300_2_fu_5857_p2 = (icmp_ln833_reg_7730.read() & icmp_ln833_1_reg_7672.read());
}

void music::thread_and_ln300_fu_5835_p2() {
    and_ln300_fu_5835_p2 = (icmp_ln833_reg_7730.read() & icmp_ln833_1_reg_7672.read());
}

void music::thread_and_ln87_1_fu_4955_p2() {
    and_ln87_1_fu_4955_p2 = (and_ln87_fu_4949_p2.read() & grp_fu_2928_p2.read());
}

void music::thread_and_ln87_fu_4949_p2() {
    and_ln87_fu_4949_p2 = (or_ln87_fu_4941_p2.read() & or_ln87_1_fu_4945_p2.read());
}

void music::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void music::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void music::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void music::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void music::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void music::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void music::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void music::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void music::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[108];
}

void music::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void music::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void music::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
}

void music::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[111];
}

void music::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void music::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void music::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void music::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void music::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void music::thread_ap_CS_fsm_state148() {
    ap_CS_fsm_state148 = ap_CS_fsm.read()[147];
}

void music::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[148];
}

void music::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void music::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[149];
}

void music::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void music::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void music::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[152];
}

void music::thread_ap_CS_fsm_state154() {
    ap_CS_fsm_state154 = ap_CS_fsm.read()[153];
}

void music::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void music::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[159];
}

void music::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[160];
}

void music::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[161];
}

void music::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
}

void music::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void music::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void music::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[165];
}

void music::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[166];
}

void music::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void music::thread_ap_CS_fsm_state170() {
    ap_CS_fsm_state170 = ap_CS_fsm.read()[169];
}

void music::thread_ap_CS_fsm_state171() {
    ap_CS_fsm_state171 = ap_CS_fsm.read()[170];
}

void music::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
}

void music::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[172];
}

void music::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[173];
}

void music::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[174];
}

void music::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[175];
}

void music::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void music::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
}

void music::thread_ap_CS_fsm_state179() {
    ap_CS_fsm_state179 = ap_CS_fsm.read()[178];
}

void music::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void music::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[179];
}

void music::thread_ap_CS_fsm_state183() {
    ap_CS_fsm_state183 = ap_CS_fsm.read()[182];
}

void music::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[183];
}

void music::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[184];
}

void music::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[185];
}

void music::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[186];
}

void music::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[187];
}

void music::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[188];
}

void music::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void music::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[203];
}

void music::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[204];
}

void music::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[205];
}

void music::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[206];
}

void music::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[207];
}

void music::thread_ap_CS_fsm_state209() {
    ap_CS_fsm_state209 = ap_CS_fsm.read()[208];
}

void music::thread_ap_CS_fsm_state210() {
    ap_CS_fsm_state210 = ap_CS_fsm.read()[209];
}

void music::thread_ap_CS_fsm_state211() {
    ap_CS_fsm_state211 = ap_CS_fsm.read()[210];
}

void music::thread_ap_CS_fsm_state212() {
    ap_CS_fsm_state212 = ap_CS_fsm.read()[211];
}

void music::thread_ap_CS_fsm_state213() {
    ap_CS_fsm_state213 = ap_CS_fsm.read()[212];
}

void music::thread_ap_CS_fsm_state214() {
    ap_CS_fsm_state214 = ap_CS_fsm.read()[213];
}

void music::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[214];
}

void music::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[215];
}

void music::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[216];
}

void music::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[217];
}

void music::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[218];
}

void music::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[219];
}

void music::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[220];
}

void music::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[223];
}

void music::thread_ap_CS_fsm_state225() {
    ap_CS_fsm_state225 = ap_CS_fsm.read()[224];
}

void music::thread_ap_CS_fsm_state226() {
    ap_CS_fsm_state226 = ap_CS_fsm.read()[225];
}

void music::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[226];
}

void music::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[227];
}

void music::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[228];
}

void music::thread_ap_CS_fsm_state230() {
    ap_CS_fsm_state230 = ap_CS_fsm.read()[229];
}

void music::thread_ap_CS_fsm_state231() {
    ap_CS_fsm_state231 = ap_CS_fsm.read()[230];
}

void music::thread_ap_CS_fsm_state232() {
    ap_CS_fsm_state232 = ap_CS_fsm.read()[231];
}

void music::thread_ap_CS_fsm_state233() {
    ap_CS_fsm_state233 = ap_CS_fsm.read()[232];
}

void music::thread_ap_CS_fsm_state234() {
    ap_CS_fsm_state234 = ap_CS_fsm.read()[233];
}

void music::thread_ap_CS_fsm_state235() {
    ap_CS_fsm_state235 = ap_CS_fsm.read()[234];
}

void music::thread_ap_CS_fsm_state236() {
    ap_CS_fsm_state236 = ap_CS_fsm.read()[235];
}

void music::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[236];
}

void music::thread_ap_CS_fsm_state238() {
    ap_CS_fsm_state238 = ap_CS_fsm.read()[237];
}

void music::thread_ap_CS_fsm_state239() {
    ap_CS_fsm_state239 = ap_CS_fsm.read()[238];
}

void music::thread_ap_CS_fsm_state240() {
    ap_CS_fsm_state240 = ap_CS_fsm.read()[239];
}

void music::thread_ap_CS_fsm_state241() {
    ap_CS_fsm_state241 = ap_CS_fsm.read()[240];
}

void music::thread_ap_CS_fsm_state242() {
    ap_CS_fsm_state242 = ap_CS_fsm.read()[241];
}

void music::thread_ap_CS_fsm_state243() {
    ap_CS_fsm_state243 = ap_CS_fsm.read()[242];
}

void music::thread_ap_CS_fsm_state244() {
    ap_CS_fsm_state244 = ap_CS_fsm.read()[243];
}

void music::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[244];
}

void music::thread_ap_CS_fsm_state246() {
    ap_CS_fsm_state246 = ap_CS_fsm.read()[245];
}

void music::thread_ap_CS_fsm_state247() {
    ap_CS_fsm_state247 = ap_CS_fsm.read()[246];
}

void music::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void music::thread_ap_CS_fsm_state250() {
    ap_CS_fsm_state250 = ap_CS_fsm.read()[249];
}

void music::thread_ap_CS_fsm_state251() {
    ap_CS_fsm_state251 = ap_CS_fsm.read()[250];
}

void music::thread_ap_CS_fsm_state252() {
    ap_CS_fsm_state252 = ap_CS_fsm.read()[251];
}

void music::thread_ap_CS_fsm_state253() {
    ap_CS_fsm_state253 = ap_CS_fsm.read()[252];
}

void music::thread_ap_CS_fsm_state254() {
    ap_CS_fsm_state254 = ap_CS_fsm.read()[253];
}

void music::thread_ap_CS_fsm_state255() {
    ap_CS_fsm_state255 = ap_CS_fsm.read()[254];
}

void music::thread_ap_CS_fsm_state256() {
    ap_CS_fsm_state256 = ap_CS_fsm.read()[255];
}

void music::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[256];
}

void music::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void music::thread_ap_CS_fsm_state260() {
    ap_CS_fsm_state260 = ap_CS_fsm.read()[259];
}

void music::thread_ap_CS_fsm_state261() {
    ap_CS_fsm_state261 = ap_CS_fsm.read()[260];
}

void music::thread_ap_CS_fsm_state262() {
    ap_CS_fsm_state262 = ap_CS_fsm.read()[261];
}

void music::thread_ap_CS_fsm_state263() {
    ap_CS_fsm_state263 = ap_CS_fsm.read()[262];
}

void music::thread_ap_CS_fsm_state264() {
    ap_CS_fsm_state264 = ap_CS_fsm.read()[263];
}

void music::thread_ap_CS_fsm_state265() {
    ap_CS_fsm_state265 = ap_CS_fsm.read()[264];
}

void music::thread_ap_CS_fsm_state266() {
    ap_CS_fsm_state266 = ap_CS_fsm.read()[265];
}

void music::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void music::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void music::thread_ap_CS_fsm_state281() {
    ap_CS_fsm_state281 = ap_CS_fsm.read()[280];
}

void music::thread_ap_CS_fsm_state282() {
    ap_CS_fsm_state282 = ap_CS_fsm.read()[281];
}

void music::thread_ap_CS_fsm_state283() {
    ap_CS_fsm_state283 = ap_CS_fsm.read()[282];
}

void music::thread_ap_CS_fsm_state284() {
    ap_CS_fsm_state284 = ap_CS_fsm.read()[283];
}

void music::thread_ap_CS_fsm_state285() {
    ap_CS_fsm_state285 = ap_CS_fsm.read()[284];
}

void music::thread_ap_CS_fsm_state288() {
    ap_CS_fsm_state288 = ap_CS_fsm.read()[287];
}

void music::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[288];
}

void music::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void music::thread_ap_CS_fsm_state290() {
    ap_CS_fsm_state290 = ap_CS_fsm.read()[289];
}

void music::thread_ap_CS_fsm_state291() {
    ap_CS_fsm_state291 = ap_CS_fsm.read()[290];
}

void music::thread_ap_CS_fsm_state292() {
    ap_CS_fsm_state292 = ap_CS_fsm.read()[291];
}

void music::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[292];
}

void music::thread_ap_CS_fsm_state294() {
    ap_CS_fsm_state294 = ap_CS_fsm.read()[293];
}

void music::thread_ap_CS_fsm_state295() {
    ap_CS_fsm_state295 = ap_CS_fsm.read()[294];
}

void music::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[295];
}

void music::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[296];
}

void music::thread_ap_CS_fsm_state298() {
    ap_CS_fsm_state298 = ap_CS_fsm.read()[297];
}

void music::thread_ap_CS_fsm_state299() {
    ap_CS_fsm_state299 = ap_CS_fsm.read()[298];
}

void music::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void music::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void music::thread_ap_CS_fsm_state300() {
    ap_CS_fsm_state300 = ap_CS_fsm.read()[299];
}

void music::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[300];
}

void music::thread_ap_CS_fsm_state302() {
    ap_CS_fsm_state302 = ap_CS_fsm.read()[301];
}

void music::thread_ap_CS_fsm_state305() {
    ap_CS_fsm_state305 = ap_CS_fsm.read()[304];
}

void music::thread_ap_CS_fsm_state306() {
    ap_CS_fsm_state306 = ap_CS_fsm.read()[305];
}

void music::thread_ap_CS_fsm_state307() {
    ap_CS_fsm_state307 = ap_CS_fsm.read()[306];
}

void music::thread_ap_CS_fsm_state308() {
    ap_CS_fsm_state308 = ap_CS_fsm.read()[307];
}

void music::thread_ap_CS_fsm_state309() {
    ap_CS_fsm_state309 = ap_CS_fsm.read()[308];
}

void music::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void music::thread_ap_CS_fsm_state310() {
    ap_CS_fsm_state310 = ap_CS_fsm.read()[309];
}

void music::thread_ap_CS_fsm_state311() {
    ap_CS_fsm_state311 = ap_CS_fsm.read()[310];
}

void music::thread_ap_CS_fsm_state312() {
    ap_CS_fsm_state312 = ap_CS_fsm.read()[311];
}

void music::thread_ap_CS_fsm_state313() {
    ap_CS_fsm_state313 = ap_CS_fsm.read()[312];
}

void music::thread_ap_CS_fsm_state314() {
    ap_CS_fsm_state314 = ap_CS_fsm.read()[313];
}

void music::thread_ap_CS_fsm_state315() {
    ap_CS_fsm_state315 = ap_CS_fsm.read()[314];
}

void music::thread_ap_CS_fsm_state316() {
    ap_CS_fsm_state316 = ap_CS_fsm.read()[315];
}

void music::thread_ap_CS_fsm_state319() {
    ap_CS_fsm_state319 = ap_CS_fsm.read()[318];
}

void music::thread_ap_CS_fsm_state320() {
    ap_CS_fsm_state320 = ap_CS_fsm.read()[319];
}

void music::thread_ap_CS_fsm_state321() {
    ap_CS_fsm_state321 = ap_CS_fsm.read()[320];
}

void music::thread_ap_CS_fsm_state322() {
    ap_CS_fsm_state322 = ap_CS_fsm.read()[321];
}

void music::thread_ap_CS_fsm_state323() {
    ap_CS_fsm_state323 = ap_CS_fsm.read()[322];
}

void music::thread_ap_CS_fsm_state324() {
    ap_CS_fsm_state324 = ap_CS_fsm.read()[323];
}

void music::thread_ap_CS_fsm_state325() {
    ap_CS_fsm_state325 = ap_CS_fsm.read()[324];
}

void music::thread_ap_CS_fsm_state340() {
    ap_CS_fsm_state340 = ap_CS_fsm.read()[339];
}

void music::thread_ap_CS_fsm_state341() {
    ap_CS_fsm_state341 = ap_CS_fsm.read()[340];
}

void music::thread_ap_CS_fsm_state344() {
    ap_CS_fsm_state344 = ap_CS_fsm.read()[343];
}

void music::thread_ap_CS_fsm_state345() {
    ap_CS_fsm_state345 = ap_CS_fsm.read()[344];
}

void music::thread_ap_CS_fsm_state346() {
    ap_CS_fsm_state346 = ap_CS_fsm.read()[345];
}

void music::thread_ap_CS_fsm_state347() {
    ap_CS_fsm_state347 = ap_CS_fsm.read()[346];
}

void music::thread_ap_CS_fsm_state348() {
    ap_CS_fsm_state348 = ap_CS_fsm.read()[347];
}

void music::thread_ap_CS_fsm_state349() {
    ap_CS_fsm_state349 = ap_CS_fsm.read()[348];
}

void music::thread_ap_CS_fsm_state350() {
    ap_CS_fsm_state350 = ap_CS_fsm.read()[349];
}

void music::thread_ap_CS_fsm_state351() {
    ap_CS_fsm_state351 = ap_CS_fsm.read()[350];
}

void music::thread_ap_CS_fsm_state352() {
    ap_CS_fsm_state352 = ap_CS_fsm.read()[351];
}

void music::thread_ap_CS_fsm_state353() {
    ap_CS_fsm_state353 = ap_CS_fsm.read()[352];
}

void music::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[353];
}

void music::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void music::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[364];
}

void music::thread_ap_CS_fsm_state366() {
    ap_CS_fsm_state366 = ap_CS_fsm.read()[365];
}

void music::thread_ap_CS_fsm_state369() {
    ap_CS_fsm_state369 = ap_CS_fsm.read()[368];
}

void music::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void music::thread_ap_CS_fsm_state370() {
    ap_CS_fsm_state370 = ap_CS_fsm.read()[369];
}

void music::thread_ap_CS_fsm_state371() {
    ap_CS_fsm_state371 = ap_CS_fsm.read()[370];
}

void music::thread_ap_CS_fsm_state372() {
    ap_CS_fsm_state372 = ap_CS_fsm.read()[371];
}

void music::thread_ap_CS_fsm_state373() {
    ap_CS_fsm_state373 = ap_CS_fsm.read()[372];
}

void music::thread_ap_CS_fsm_state374() {
    ap_CS_fsm_state374 = ap_CS_fsm.read()[373];
}

void music::thread_ap_CS_fsm_state375() {
    ap_CS_fsm_state375 = ap_CS_fsm.read()[374];
}

void music::thread_ap_CS_fsm_state376() {
    ap_CS_fsm_state376 = ap_CS_fsm.read()[375];
}

void music::thread_ap_CS_fsm_state379() {
    ap_CS_fsm_state379 = ap_CS_fsm.read()[378];
}

void music::thread_ap_CS_fsm_state380() {
    ap_CS_fsm_state380 = ap_CS_fsm.read()[379];
}

void music::thread_ap_CS_fsm_state381() {
    ap_CS_fsm_state381 = ap_CS_fsm.read()[380];
}

void music::thread_ap_CS_fsm_state382() {
    ap_CS_fsm_state382 = ap_CS_fsm.read()[381];
}

void music::thread_ap_CS_fsm_state383() {
    ap_CS_fsm_state383 = ap_CS_fsm.read()[382];
}

void music::thread_ap_CS_fsm_state384() {
    ap_CS_fsm_state384 = ap_CS_fsm.read()[383];
}

void music::thread_ap_CS_fsm_state385() {
    ap_CS_fsm_state385 = ap_CS_fsm.read()[384];
}

void music::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void music::thread_ap_CS_fsm_state400() {
    ap_CS_fsm_state400 = ap_CS_fsm.read()[399];
}

void music::thread_ap_CS_fsm_state401() {
    ap_CS_fsm_state401 = ap_CS_fsm.read()[400];
}

void music::thread_ap_CS_fsm_state402() {
    ap_CS_fsm_state402 = ap_CS_fsm.read()[401];
}

void music::thread_ap_CS_fsm_state403() {
    ap_CS_fsm_state403 = ap_CS_fsm.read()[402];
}

void music::thread_ap_CS_fsm_state404() {
    ap_CS_fsm_state404 = ap_CS_fsm.read()[403];
}

void music::thread_ap_CS_fsm_state405() {
    ap_CS_fsm_state405 = ap_CS_fsm.read()[404];
}

void music::thread_ap_CS_fsm_state406() {
    ap_CS_fsm_state406 = ap_CS_fsm.read()[405];
}

void music::thread_ap_CS_fsm_state407() {
    ap_CS_fsm_state407 = ap_CS_fsm.read()[406];
}

void music::thread_ap_CS_fsm_state408() {
    ap_CS_fsm_state408 = ap_CS_fsm.read()[407];
}

void music::thread_ap_CS_fsm_state409() {
    ap_CS_fsm_state409 = ap_CS_fsm.read()[408];
}

void music::thread_ap_CS_fsm_state410() {
    ap_CS_fsm_state410 = ap_CS_fsm.read()[409];
}

void music::thread_ap_CS_fsm_state411() {
    ap_CS_fsm_state411 = ap_CS_fsm.read()[410];
}

void music::thread_ap_CS_fsm_state412() {
    ap_CS_fsm_state412 = ap_CS_fsm.read()[411];
}

void music::thread_ap_CS_fsm_state413() {
    ap_CS_fsm_state413 = ap_CS_fsm.read()[412];
}

void music::thread_ap_CS_fsm_state414() {
    ap_CS_fsm_state414 = ap_CS_fsm.read()[413];
}

void music::thread_ap_CS_fsm_state415() {
    ap_CS_fsm_state415 = ap_CS_fsm.read()[414];
}

void music::thread_ap_CS_fsm_state418() {
    ap_CS_fsm_state418 = ap_CS_fsm.read()[417];
}

void music::thread_ap_CS_fsm_state419() {
    ap_CS_fsm_state419 = ap_CS_fsm.read()[418];
}

void music::thread_ap_CS_fsm_state420() {
    ap_CS_fsm_state420 = ap_CS_fsm.read()[419];
}

void music::thread_ap_CS_fsm_state421() {
    ap_CS_fsm_state421 = ap_CS_fsm.read()[420];
}

void music::thread_ap_CS_fsm_state422() {
    ap_CS_fsm_state422 = ap_CS_fsm.read()[421];
}

void music::thread_ap_CS_fsm_state427() {
    ap_CS_fsm_state427 = ap_CS_fsm.read()[426];
}

void music::thread_ap_CS_fsm_state428() {
    ap_CS_fsm_state428 = ap_CS_fsm.read()[427];
}

void music::thread_ap_CS_fsm_state429() {
    ap_CS_fsm_state429 = ap_CS_fsm.read()[428];
}

void music::thread_ap_CS_fsm_state430() {
    ap_CS_fsm_state430 = ap_CS_fsm.read()[429];
}

void music::thread_ap_CS_fsm_state434() {
    ap_CS_fsm_state434 = ap_CS_fsm.read()[433];
}

void music::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[434];
}

void music::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[435];
}

void music::thread_ap_CS_fsm_state437() {
    ap_CS_fsm_state437 = ap_CS_fsm.read()[436];
}

void music::thread_ap_CS_fsm_state438() {
    ap_CS_fsm_state438 = ap_CS_fsm.read()[437];
}

void music::thread_ap_CS_fsm_state439() {
    ap_CS_fsm_state439 = ap_CS_fsm.read()[438];
}

void music::thread_ap_CS_fsm_state440() {
    ap_CS_fsm_state440 = ap_CS_fsm.read()[439];
}

void music::thread_ap_CS_fsm_state441() {
    ap_CS_fsm_state441 = ap_CS_fsm.read()[440];
}

void music::thread_ap_CS_fsm_state442() {
    ap_CS_fsm_state442 = ap_CS_fsm.read()[441];
}

void music::thread_ap_CS_fsm_state443() {
    ap_CS_fsm_state443 = ap_CS_fsm.read()[442];
}

void music::thread_ap_CS_fsm_state444() {
    ap_CS_fsm_state444 = ap_CS_fsm.read()[443];
}

void music::thread_ap_CS_fsm_state445() {
    ap_CS_fsm_state445 = ap_CS_fsm.read()[444];
}

void music::thread_ap_CS_fsm_state446() {
    ap_CS_fsm_state446 = ap_CS_fsm.read()[445];
}

void music::thread_ap_CS_fsm_state447() {
    ap_CS_fsm_state447 = ap_CS_fsm.read()[446];
}

void music::thread_ap_CS_fsm_state451() {
    ap_CS_fsm_state451 = ap_CS_fsm.read()[450];
}

void music::thread_ap_CS_fsm_state452() {
    ap_CS_fsm_state452 = ap_CS_fsm.read()[451];
}

void music::thread_ap_CS_fsm_state453() {
    ap_CS_fsm_state453 = ap_CS_fsm.read()[452];
}

void music::thread_ap_CS_fsm_state454() {
    ap_CS_fsm_state454 = ap_CS_fsm.read()[453];
}

void music::thread_ap_CS_fsm_state455() {
    ap_CS_fsm_state455 = ap_CS_fsm.read()[454];
}

void music::thread_ap_CS_fsm_state458() {
    ap_CS_fsm_state458 = ap_CS_fsm.read()[457];
}

void music::thread_ap_CS_fsm_state459() {
    ap_CS_fsm_state459 = ap_CS_fsm.read()[458];
}

void music::thread_ap_CS_fsm_state460() {
    ap_CS_fsm_state460 = ap_CS_fsm.read()[459];
}

void music::thread_ap_CS_fsm_state461() {
    ap_CS_fsm_state461 = ap_CS_fsm.read()[460];
}

void music::thread_ap_CS_fsm_state462() {
    ap_CS_fsm_state462 = ap_CS_fsm.read()[461];
}

void music::thread_ap_CS_fsm_state463() {
    ap_CS_fsm_state463 = ap_CS_fsm.read()[462];
}

void music::thread_ap_CS_fsm_state464() {
    ap_CS_fsm_state464 = ap_CS_fsm.read()[463];
}

void music::thread_ap_CS_fsm_state465() {
    ap_CS_fsm_state465 = ap_CS_fsm.read()[464];
}

void music::thread_ap_CS_fsm_state468() {
    ap_CS_fsm_state468 = ap_CS_fsm.read()[467];
}

void music::thread_ap_CS_fsm_state469() {
    ap_CS_fsm_state469 = ap_CS_fsm.read()[468];
}

void music::thread_ap_CS_fsm_state470() {
    ap_CS_fsm_state470 = ap_CS_fsm.read()[469];
}

void music::thread_ap_CS_fsm_state471() {
    ap_CS_fsm_state471 = ap_CS_fsm.read()[470];
}

void music::thread_ap_CS_fsm_state472() {
    ap_CS_fsm_state472 = ap_CS_fsm.read()[471];
}

void music::thread_ap_CS_fsm_state473() {
    ap_CS_fsm_state473 = ap_CS_fsm.read()[472];
}

void music::thread_ap_CS_fsm_state474() {
    ap_CS_fsm_state474 = ap_CS_fsm.read()[473];
}

void music::thread_ap_CS_fsm_state475() {
    ap_CS_fsm_state475 = ap_CS_fsm.read()[474];
}

void music::thread_ap_CS_fsm_state476() {
    ap_CS_fsm_state476 = ap_CS_fsm.read()[475];
}

void music::thread_ap_CS_fsm_state477() {
    ap_CS_fsm_state477 = ap_CS_fsm.read()[476];
}

void music::thread_ap_CS_fsm_state478() {
    ap_CS_fsm_state478 = ap_CS_fsm.read()[477];
}

void music::thread_ap_CS_fsm_state479() {
    ap_CS_fsm_state479 = ap_CS_fsm.read()[478];
}

void music::thread_ap_CS_fsm_state480() {
    ap_CS_fsm_state480 = ap_CS_fsm.read()[479];
}

void music::thread_ap_CS_fsm_state481() {
    ap_CS_fsm_state481 = ap_CS_fsm.read()[480];
}

void music::thread_ap_CS_fsm_state482() {
    ap_CS_fsm_state482 = ap_CS_fsm.read()[481];
}

void music::thread_ap_CS_fsm_state483() {
    ap_CS_fsm_state483 = ap_CS_fsm.read()[482];
}

void music::thread_ap_CS_fsm_state486() {
    ap_CS_fsm_state486 = ap_CS_fsm.read()[485];
}

void music::thread_ap_CS_fsm_state487() {
    ap_CS_fsm_state487 = ap_CS_fsm.read()[486];
}

void music::thread_ap_CS_fsm_state488() {
    ap_CS_fsm_state488 = ap_CS_fsm.read()[487];
}

void music::thread_ap_CS_fsm_state489() {
    ap_CS_fsm_state489 = ap_CS_fsm.read()[488];
}

void music::thread_ap_CS_fsm_state490() {
    ap_CS_fsm_state490 = ap_CS_fsm.read()[489];
}

void music::thread_ap_CS_fsm_state491() {
    ap_CS_fsm_state491 = ap_CS_fsm.read()[490];
}

void music::thread_ap_CS_fsm_state492() {
    ap_CS_fsm_state492 = ap_CS_fsm.read()[491];
}

void music::thread_ap_CS_fsm_state493() {
    ap_CS_fsm_state493 = ap_CS_fsm.read()[492];
}

void music::thread_ap_CS_fsm_state494() {
    ap_CS_fsm_state494 = ap_CS_fsm.read()[493];
}

void music::thread_ap_CS_fsm_state495() {
    ap_CS_fsm_state495 = ap_CS_fsm.read()[494];
}

void music::thread_ap_CS_fsm_state496() {
    ap_CS_fsm_state496 = ap_CS_fsm.read()[495];
}

void music::thread_ap_CS_fsm_state497() {
    ap_CS_fsm_state497 = ap_CS_fsm.read()[496];
}

void music::thread_ap_CS_fsm_state498() {
    ap_CS_fsm_state498 = ap_CS_fsm.read()[497];
}

void music::thread_ap_CS_fsm_state499() {
    ap_CS_fsm_state499 = ap_CS_fsm.read()[498];
}

void music::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void music::thread_ap_CS_fsm_state500() {
    ap_CS_fsm_state500 = ap_CS_fsm.read()[499];
}

void music::thread_ap_CS_fsm_state503() {
    ap_CS_fsm_state503 = ap_CS_fsm.read()[502];
}

void music::thread_ap_CS_fsm_state504() {
    ap_CS_fsm_state504 = ap_CS_fsm.read()[503];
}

void music::thread_ap_CS_fsm_state505() {
    ap_CS_fsm_state505 = ap_CS_fsm.read()[504];
}

void music::thread_ap_CS_fsm_state506() {
    ap_CS_fsm_state506 = ap_CS_fsm.read()[505];
}

void music::thread_ap_CS_fsm_state507() {
    ap_CS_fsm_state507 = ap_CS_fsm.read()[506];
}

void music::thread_ap_CS_fsm_state508() {
    ap_CS_fsm_state508 = ap_CS_fsm.read()[507];
}

void music::thread_ap_CS_fsm_state509() {
    ap_CS_fsm_state509 = ap_CS_fsm.read()[508];
}

void music::thread_ap_CS_fsm_state510() {
    ap_CS_fsm_state510 = ap_CS_fsm.read()[509];
}

void music::thread_ap_CS_fsm_state511() {
    ap_CS_fsm_state511 = ap_CS_fsm.read()[510];
}

void music::thread_ap_CS_fsm_state512() {
    ap_CS_fsm_state512 = ap_CS_fsm.read()[511];
}

void music::thread_ap_CS_fsm_state513() {
    ap_CS_fsm_state513 = ap_CS_fsm.read()[512];
}

void music::thread_ap_CS_fsm_state514() {
    ap_CS_fsm_state514 = ap_CS_fsm.read()[513];
}

void music::thread_ap_CS_fsm_state515() {
    ap_CS_fsm_state515 = ap_CS_fsm.read()[514];
}

void music::thread_ap_CS_fsm_state516() {
    ap_CS_fsm_state516 = ap_CS_fsm.read()[515];
}

void music::thread_ap_CS_fsm_state517() {
    ap_CS_fsm_state517 = ap_CS_fsm.read()[516];
}

void music::thread_ap_CS_fsm_state518() {
    ap_CS_fsm_state518 = ap_CS_fsm.read()[517];
}

void music::thread_ap_CS_fsm_state519() {
    ap_CS_fsm_state519 = ap_CS_fsm.read()[518];
}

void music::thread_ap_CS_fsm_state520() {
    ap_CS_fsm_state520 = ap_CS_fsm.read()[519];
}

void music::thread_ap_CS_fsm_state521() {
    ap_CS_fsm_state521 = ap_CS_fsm.read()[520];
}

void music::thread_ap_CS_fsm_state522() {
    ap_CS_fsm_state522 = ap_CS_fsm.read()[521];
}

void music::thread_ap_CS_fsm_state523() {
    ap_CS_fsm_state523 = ap_CS_fsm.read()[522];
}

void music::thread_ap_CS_fsm_state538() {
    ap_CS_fsm_state538 = ap_CS_fsm.read()[537];
}

void music::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void music::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void music::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void music::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void music::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void music::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void music::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void music::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void music::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void music::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void music::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void music::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[75];
}

void music::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[76];
}

void music::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void music::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[79];
}

void music::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[80];
}

void music::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[81];
}

void music::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[82];
}

void music::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[83];
}

void music::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[84];
}

void music::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[85];
}

void music::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[86];
}

void music::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[87];
}

void music::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[88];
}

void music::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void music::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[89];
}

void music::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[90];
}

void music::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[91];
}

void music::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[92];
}

void music::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[93];
}

void music::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[94];
}

void music::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[95];
}

void music::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[96];
}

void music::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[97];
}

void music::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[98];
}

void music::thread_ap_block_state102_io() {
    ap_block_state102_io = (esl_seteq<1,1,1>(ap_const_logic_0, data_AWREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, data_WREADY.read()));
}

void music::thread_ap_block_state217_on_subcall_done() {
    ap_block_state217_on_subcall_done = esl_seteq<1,1,1>(ap_const_logic_0, (ap_sync_grp_qrf_top_fu_2756_ap_ready.read() & ap_sync_grp_qrf_top_fu_2756_ap_done.read()));
}

void music::thread_ap_block_state460_on_subcall_done() {
    ap_block_state460_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2766_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2782_ap_done.read()));
}

void music::thread_ap_block_state74_on_subcall_done() {
    ap_block_state74_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2766_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2782_ap_done.read()));
}

void music::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln289_fu_6272_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void music::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void music::thread_ap_phi_mux_phi_ln206_1_phi_fu_1813_p4() {
    ap_phi_mux_phi_ln206_1_phi_fu_1813_p4 = phi_ln206_1_reg_1809.read();
}

void music::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln289_fu_6272_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void music::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2756_ap_done() {
    ap_sync_grp_qrf_top_fu_2756_ap_done = (grp_qrf_top_fu_2756_ap_done.read() | ap_sync_reg_grp_qrf_top_fu_2756_ap_done.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2756_ap_ready() {
    ap_sync_grp_qrf_top_fu_2756_ap_ready = (grp_qrf_top_fu_2756_ap_ready.read() | ap_sync_reg_grp_qrf_top_fu_2756_ap_ready.read());
}

void music::thread_bitcast_ln256_1_fu_5937_p1() {
    bitcast_ln256_1_fu_5937_p1 = xor_ln256_fu_5931_p2.read();
}

void music::thread_bitcast_ln256_fu_5927_p1() {
    bitcast_ln256_fu_5927_p1 = grp_sin_or_cos_float_s_fu_2782_ap_return.read();
}

void music::thread_bitcast_ln444_2_fu_4755_p1() {
    bitcast_ln444_2_fu_4755_p1 = complex_M_imag_read_1_reg_2416.read();
}

void music::thread_bitcast_ln444_fu_4739_p1() {
    bitcast_ln444_fu_4739_p1 = complex_M_real_read_1_reg_2428.read();
}

void music::thread_bitcast_ln512_fu_5917_p1() {
    bitcast_ln512_fu_5917_p1 = p_Result_56_fu_5909_p4.read();
}

void music::thread_bitcast_ln667_2_fu_6054_p1() {
    bitcast_ln667_2_fu_6054_p1 = reg_3129.read();
}

void music::thread_bitcast_ln667_4_fu_6180_p1() {
    bitcast_ln667_4_fu_6180_p1 = reg_3143.read();
}

void music::thread_bitcast_ln667_fu_4023_p1() {
    bitcast_ln667_fu_4023_p1 = Autocorr_Buffer_M_i_5_reg_6825.read();
}

void music::thread_bitcast_ln87_1_fu_4899_p1() {
    bitcast_ln87_1_fu_4899_p1 = eigval_q1.read();
}

void music::thread_bitcast_ln87_fu_4881_p1() {
    bitcast_ln87_fu_4881_p1 = eigval_q0.read();
}

void music::thread_closepath_fu_5141_p2() {
    closepath_fu_5141_p2 = (!tmp_V_fu_5127_p4.read().is_01() || !ap_const_lv11_3FE.is_01())? sc_lv<1>(): (sc_biguint<11>(tmp_V_fu_5127_p4.read()) < sc_biguint<11>(ap_const_lv11_3FE));
}

void music::thread_count_fu_4360_p2() {
    count_fu_4360_p2 = (!count_0_i_reg_2318.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(count_0_i_reg_2318.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_data_ARADDR() {
    if (esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln235_fu_3903_p1.read());
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln234_4_fu_3893_p1.read());
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln218_3_fu_3514_p1.read());
        } else {
            data_ARADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        data_ARADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)))) {
        data_ARVALID = ap_const_logic_1;
    } else {
        data_ARVALID = ap_const_logic_0;
    }
}

void music::thread_data_AWADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && 
         esl_seteq<1,1,1>(ap_block_state102_io.read(), ap_const_boolean_0))) {
        data_AWADDR =  (sc_lv<32>) (zext_ln224_fu_3769_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
                esl_seteq<1,1,1>(data_AWREADY.read(), ap_const_logic_1))) {
        data_AWADDR =  (sc_lv<32>) (zext_ln223_3_fu_3755_p1.read());
    } else {
        data_AWADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) && 
          esl_seteq<1,1,1>(data_AWREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && 
          esl_seteq<1,1,1>(ap_block_state102_io.read(), ap_const_boolean_0)))) {
        data_AWVALID = ap_const_logic_1;
    } else {
        data_AWVALID = ap_const_logic_0;
    }
}

void music::thread_data_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) && 
          esl_seteq<1,1,1>(data_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) && 
          esl_seteq<1,1,1>(data_BVALID.read(), ap_const_logic_1)))) {
        data_BREADY = ap_const_logic_1;
    } else {
        data_BREADY = ap_const_logic_0;
    }
}

void music::thread_data_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)))) {
        data_RREADY = ap_const_logic_1;
    } else {
        data_RREADY = ap_const_logic_0;
    }
}

void music::thread_data_WDATA() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        data_WDATA = reg_2986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read())) {
        data_WDATA = reg_2977.read();
    } else {
        data_WDATA =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) && 
          esl_seteq<1,1,1>(ap_block_state102_io.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) && 
          esl_seteq<1,1,1>(data_WREADY.read(), ap_const_logic_1)))) {
        data_WVALID = ap_const_logic_1;
    } else {
        data_WVALID = ap_const_logic_0;
    }
}

void music::thread_data_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()))) {
        data_blk_n_AR = m_axi_data_ARREADY.read();
    } else {
        data_blk_n_AR = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        data_blk_n_AW = m_axi_data_AWREADY.read();
    } else {
        data_blk_n_AW = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        data_blk_n_B = m_axi_data_BVALID.read();
    } else {
        data_blk_n_B = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()))) {
        data_blk_n_R = m_axi_data_RVALID.read();
    } else {
        data_blk_n_R = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        data_blk_n_W = m_axi_data_WREADY.read();
    } else {
        data_blk_n_W = ap_const_logic_1;
    }
}

void music::thread_eig_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        eig_mat_M_imag_address0 = eig_mat_M_imag_addr_2_reg_6991.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6933.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4172_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        eig_mat_M_imag_address0 = grp_qrf_top_fu_2756_A_M_imag_address0.read();
    } else {
        eig_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        eig_mat_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        eig_mat_M_imag_ce0 = grp_qrf_top_fu_2756_A_M_imag_ce0.read();
    } else {
        eig_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        eig_mat_M_imag_d0 = complex_M_imag_read_reg_2281.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        eig_mat_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        eig_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_4304_p2.read())))) {
        eig_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1044_2_fu_4388_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        eig_mat_M_real_address0 = eig_mat_M_real_addr_3_reg_6986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6933.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4172_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        eig_mat_M_real_address0 = grp_qrf_top_fu_2756_A_M_real_address0.read();
    } else {
        eig_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        eig_mat_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        eig_mat_M_real_ce0 = grp_qrf_top_fu_2756_A_M_real_ce0.read();
    } else {
        eig_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        eig_mat_M_real_d0 = complex_M_real_read_reg_2294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        eig_mat_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        eig_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_4304_p2.read())))) {
        eig_mat_M_real_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_eigval_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln87_fu_4871_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln41_fu_4393_p1.read());
    } else {
        eigval_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_eigval_address1() {
    eigval_address1 =  (sc_lv<2>) (zext_ln87_1_fu_4876_p1.read());
}

void music::thread_eigval_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()))) {
        eigval_ce0 = ap_const_logic_1;
    } else {
        eigval_ce0 = ap_const_logic_0;
    }
}

void music::thread_eigval_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read())) {
        eigval_ce1 = ap_const_logic_1;
    } else {
        eigval_ce1 = ap_const_logic_0;
    }
}

void music::thread_eigval_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        eigval_we0 = ap_const_logic_1;
    } else {
        eigval_we0 = ap_const_logic_0;
    }
}

void music::thread_fc_address0() {
    fc_address0 =  (sc_lv<10>) (zext_ln230_fu_3795_p1.read());
}

void music::thread_fc_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        fc_ce0 = ap_const_logic_1;
    } else {
        fc_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_4_address0() {
    fourth_order_double_4_address0 =  (sc_lv<8>) (zext_ln498_fu_5502_p1.read());
}

void music::thread_fourth_order_double_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        fourth_order_double_4_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_4_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_5_address0() {
    fourth_order_double_5_address0 =  (sc_lv<8>) (zext_ln498_fu_5502_p1.read());
}

void music::thread_fourth_order_double_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        fourth_order_double_5_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_5_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_6_address0() {
    fourth_order_double_6_address0 =  (sc_lv<8>) (zext_ln498_fu_5502_p1.read());
}

void music::thread_fourth_order_double_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        fourth_order_double_6_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_6_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_7_address0() {
    fourth_order_double_7_address0 =  (sc_lv<8>) (zext_ln498_fu_5502_p1.read());
}

void music::thread_fourth_order_double_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        fourth_order_double_7_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_7_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_s_address0() {
    fourth_order_double_s_address0 =  (sc_lv<8>) (zext_ln498_fu_5502_p1.read());
}

void music::thread_fourth_order_double_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        fourth_order_double_s_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_s_ce0 = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2805_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) && 
          esl_seteq<1,1,1>(ap_block_state74_on_subcall_done.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state180.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state478.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state496.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state251.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state254.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state264.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state351.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state475.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state505.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state506.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state510.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state511.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state512.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state516.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        grp_fu_2805_ce = ap_const_logic_1;
    } else {
        grp_fu_2805_ce = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2805_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        grp_fu_2805_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state251.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln169_fu_3647_p2.read())))) {
        grp_fu_2805_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2805_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2805_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        grp_fu_2805_p0 = reg_3149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read())) {
        grp_fu_2805_p0 = complex_M_real_read_4_reg_2711.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read())) {
        grp_fu_2805_p0 = complex_M_real_read_3_reg_2653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read())) {
        grp_fu_2805_p0 = complex_M_real_read_2_reg_2594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read())) {
        grp_fu_2805_p0 = p_x_assign_reg_2392.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_2805_p0 = complex_M_real_read_1_reg_2428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        grp_fu_2805_p0 = reg_3090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        grp_fu_2805_p0 = reg_3056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        grp_fu_2805_p0 = complex_M_real_read_reg_2294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2805_p0 = p_r_M_real_reg_2111.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()))) {
        grp_fu_2805_p0 = reg_2977.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state251.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        grp_fu_2805_p0 = reg_2995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        grp_fu_2805_p0 = p_x_assign_5_reg_2012.read();
    } else {
        grp_fu_2805_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2805_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        grp_fu_2805_p1 = complex_M_real_read_4_reg_2711.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read())) {
        grp_fu_2805_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        grp_fu_2805_p1 = eigval_temp_reg_7083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()))) {
        grp_fu_2805_p1 = reg_2966.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()))) {
        grp_fu_2805_p1 = reg_3016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state251.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        grp_fu_2805_p1 = reg_3001.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        grp_fu_2805_p1 = reg_2960.read();
    } else {
        grp_fu_2805_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2810_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()))) {
        grp_fu_2810_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read()))) {
        grp_fu_2810_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2810_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2810_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        grp_fu_2810_p0 = w_M_imag_load_reg_8247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read())) {
        grp_fu_2810_p0 = complex_M_imag_read_4_reg_2699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read())) {
        grp_fu_2810_p0 = complex_M_imag_read_3_reg_2640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read())) {
        grp_fu_2810_p0 = complex_M_imag_read_2_reg_2581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_2810_p0 = complex_M_imag_read_1_reg_2416.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        grp_fu_2810_p0 = reg_3099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        grp_fu_2810_p0 = complex_M_imag_read_reg_2281.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2810_p0 = p_r_M_imag_reg_2099.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()))) {
        grp_fu_2810_p0 = reg_2986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        grp_fu_2810_p0 = reg_3006.read();
    } else {
        grp_fu_2810_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2810_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        grp_fu_2810_p1 = complex_M_imag_read_4_reg_2699.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state474.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()))) {
        grp_fu_2810_p1 = reg_3023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        grp_fu_2810_p1 = reg_3011.read();
    } else {
        grp_fu_2810_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2834_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2834_p0 = p_r_M_real_24_reg_8225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2834_p0 = reg_3135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2834_p0 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state455.read())) {
        grp_fu_2834_p0 = reg_2995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        grp_fu_2834_p0 = reg_2960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read())) {
        grp_fu_2834_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        grp_fu_2834_p0 = midsum_reg_7379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_2834_p0 = sum_M_real_reg_7362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read())) {
        grp_fu_2834_p0 = p_r_M_real_17_fu_4749_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        grp_fu_2834_p0 = reg_3070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()))) {
        grp_fu_2834_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2834_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2834_p0 = p_r_M_real_10_reg_6830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_2834_p0 = p_r_M_real_reg_2111.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2834_p0 = reg_2977.read();
    } else {
        grp_fu_2834_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2834_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2834_p1 = reg_3135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2834_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2834_p1 = p_t_real_9_reg_8035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state455.read())) {
        grp_fu_2834_p1 = sinpitheta_reg_7950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        grp_fu_2834_p1 = p_load_reg_7594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()))) {
        grp_fu_2834_p1 = midsum_reg_7379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_2834_p1 = sum_M_real_reg_7362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        grp_fu_2834_p1 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read())) {
        grp_fu_2834_p1 = reg_3070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read()))) {
        grp_fu_2834_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2834_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2834_p1 = p_t_real_reg_6819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_2834_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2834_p1 = c_reg_6577.read();
    } else {
        grp_fu_2834_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2838_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2838_p0 = p_r_M_imag_22_reg_8231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2838_p0 = p_r_M_imag_23_fu_6190_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2838_p0 = Un_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read())) {
        grp_fu_2838_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_2838_p0 = sum_M_imag_reg_7368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read())) {
        grp_fu_2838_p0 = p_r_M_imag_15_fu_4765_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        grp_fu_2838_p0 = reg_3080.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()))) {
        grp_fu_2838_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2838_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2838_p0 = p_r_M_imag_9_reg_6836.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_2838_p0 = p_r_M_imag_reg_2099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2838_p0 = reg_2986.read();
    } else {
        grp_fu_2838_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2838_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2838_p1 = reg_3143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2838_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2838_p1 = p_t_imag_9_fu_6064_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_2838_p1 = sum_M_imag_reg_7368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        grp_fu_2838_p1 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read())) {
        grp_fu_2838_p1 = reg_3080.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read()))) {
        grp_fu_2838_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2838_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2838_p1 = p_t_imag_fu_4032_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        grp_fu_2838_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2838_p1 = s_reg_6583.read();
    } else {
        grp_fu_2838_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2842_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2842_p0 = p_r_M_imag_22_reg_8231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2842_p0 = p_r_M_imag_23_fu_6190_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2842_p0 = Un_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read())) {
        grp_fu_2842_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read())) {
        grp_fu_2842_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        grp_fu_2842_p0 = reg_3080.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()))) {
        grp_fu_2842_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2842_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2842_p0 = p_r_M_imag_9_reg_6836.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_2842_p0 = p_r_M_imag_reg_2099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2842_p0 = reg_2986.read();
    } else {
        grp_fu_2842_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2842_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2842_p1 = reg_3135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2842_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2842_p1 = p_t_real_9_reg_8035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read())) {
        grp_fu_2842_p1 = midsum_reg_7379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        grp_fu_2842_p1 = U_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read()))) {
        grp_fu_2842_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read())) {
        grp_fu_2842_p1 = reg_3070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2842_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2842_p1 = p_t_real_reg_6819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_2842_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2842_p1 = c_reg_6577.read();
    } else {
        grp_fu_2842_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2846_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2846_p0 = p_r_M_real_24_reg_8225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2846_p0 = reg_3135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2846_p0 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read())) {
        grp_fu_2846_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read())) {
        grp_fu_2846_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        grp_fu_2846_p0 = reg_3070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()))) {
        grp_fu_2846_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2846_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2846_p0 = p_r_M_real_10_reg_6830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        grp_fu_2846_p0 = p_r_M_real_reg_2111.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2846_p0 = reg_2977.read();
    } else {
        grp_fu_2846_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2846_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        grp_fu_2846_p1 = reg_3143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        grp_fu_2846_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read())) {
        grp_fu_2846_p1 = p_t_imag_9_fu_6064_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        grp_fu_2846_p1 = U_M_imag_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read()))) {
        grp_fu_2846_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read())) {
        grp_fu_2846_p1 = reg_3080.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2846_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2846_p1 = p_t_imag_fu_4032_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()))) {
        grp_fu_2846_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2846_p1 = s_reg_6583.read();
    } else {
        grp_fu_2846_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2880_p0() {
    grp_fu_2880_p0 = xor_ln444_1_fu_4759_p2.read();
}

void music::thread_grp_fu_2885_p0() {
    grp_fu_2885_p0 = xor_ln444_fu_4743_p2.read();
}

void music::thread_grp_fu_2902_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read())) {
        grp_fu_2902_p0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()))) {
        grp_fu_2902_p0 = reg_3108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()))) {
        grp_fu_2902_p0 = reg_2966.read();
    } else {
        grp_fu_2902_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2902_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read())) {
        grp_fu_2902_p1 = reg_3149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        grp_fu_2902_p1 = reg_3023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()))) {
        grp_fu_2902_p1 = reg_2966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        grp_fu_2902_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2902_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2908_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        grp_fu_2908_p0 = tmp_9_i_i_reg_7357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()))) {
        grp_fu_2908_p0 = reg_3023.read();
    } else {
        grp_fu_2908_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2908_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        grp_fu_2908_p1 = reg_3023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()))) {
        grp_fu_2908_p1 = reg_2966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        grp_fu_2908_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2908_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2920_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read())) {
        grp_fu_2920_p0 = bitcast_ln512_fu_5917_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()))) {
        grp_fu_2920_p0 = reg_2955.read();
    } else {
        grp_fu_2920_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2923_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state420.read())) {
        grp_fu_2923_p0 = theta_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        grp_fu_2923_p0 = fc_q0.read();
    } else {
        grp_fu_2923_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2940_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state422.read())) {
        grp_fu_2940_p1 = ap_const_lv64_3F91DF46A252DD11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        grp_fu_2940_p1 = ap_const_lv64_401921FB54524550;
    } else {
        grp_fu_2940_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2946_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        grp_fu_2946_p0 = reg_3051.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_fu_2946_p0 = ap_const_lv64_C01921FB5444261E;
    } else {
        grp_fu_2946_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2946_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        grp_fu_2946_p1 = ap_const_lv64_4075400000000000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_fu_2946_p1 = tmp_7_reg_6549.read();
    } else {
        grp_fu_2946_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2952_p0() {
    grp_fu_2952_p0 = esl_zext<32,11>(DFTpts_fu_3619_p2.read());
}

void music::thread_grp_fu_5213_p0() {
    grp_fu_5213_p0 =  (sc_lv<170>) (grp_fu_5213_p00.read());
}

void music::thread_grp_fu_5213_p00() {
    grp_fu_5213_p00 = esl_zext<223,170>(ret_V_22_reg_7657.read());
}

void music::thread_grp_fu_5213_p1() {
    grp_fu_5213_p1 =  (sc_lv<53>) (grp_fu_5213_p10.read());
}

void music::thread_grp_fu_5213_p10() {
    grp_fu_5213_p10 = esl_zext<223,53>(p_Result_50_fu_5199_p3.read());
}

void music::thread_grp_fu_5438_p0() {
    grp_fu_5438_p0 =  (sc_lv<49>) (r_V_22_fu_5435_p1.read());
}

void music::thread_grp_fu_5438_p1() {
    grp_fu_5438_p1 =  (sc_lv<49>) (r_V_22_fu_5435_p1.read());
}

void music::thread_grp_fu_5478_p0() {
    grp_fu_5478_p0 =  (sc_lv<49>) (r_V_25_fu_5475_p1.read());
}

void music::thread_grp_fu_5478_p1() {
    grp_fu_5478_p1 =  (sc_lv<49>) (r_V_22_reg_7758.read());
}

void music::thread_grp_fu_5483_p0() {
    grp_fu_5483_p0 =  (sc_lv<49>) (r_V_25_fu_5475_p1.read());
}

void music::thread_grp_fu_5483_p1() {
    grp_fu_5483_p1 =  (sc_lv<49>) (r_V_25_fu_5475_p1.read());
}

void music::thread_grp_fu_5537_p0() {
    grp_fu_5537_p0 =  (sc_lv<56>) (grp_fu_5537_p00.read());
}

void music::thread_grp_fu_5537_p00() {
    grp_fu_5537_p00 = esl_zext<108,56>(B_V_reg_7748.read());
}

void music::thread_grp_fu_5549_p0() {
    grp_fu_5549_p0 =  (sc_lv<49>) (grp_fu_5549_p00.read());
}

void music::thread_grp_fu_5549_p00() {
    grp_fu_5549_p00 = esl_zext<93,49>(B_squared_V_reg_7765.read());
}

void music::thread_grp_fu_5561_p0() {
    grp_fu_5561_p0 =  (sc_lv<42>) (grp_fu_5561_p00.read());
}

void music::thread_grp_fu_5561_p00() {
    grp_fu_5561_p00 = esl_zext<75,42>(B_third_power_V_reg_7810.read());
}

void music::thread_grp_fu_5561_p1() {
    grp_fu_5561_p1 =  (sc_lv<33>) (grp_fu_5561_p10.read());
}

void music::thread_grp_fu_5561_p10() {
    grp_fu_5561_p10 = esl_zext<75,33>(fourth_order_double_14_reg_7835.read());
}

void music::thread_grp_fu_5686_p1() {
    grp_fu_5686_p1 =  (sc_lv<63>) (grp_fu_5686_p10.read());
}

void music::thread_grp_fu_5686_p10() {
    grp_fu_5686_p10 = esl_zext<126,63>(select_ln272_2_fu_5673_p3.read());
}

void music::thread_grp_qrf_top_fu_2756_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
         esl_seteq<1,1,1>(ap_block_state217_on_subcall_done.read(), ap_const_boolean_0))) {
        grp_qrf_top_fu_2756_ap_continue = ap_const_logic_1;
    } else {
        grp_qrf_top_fu_2756_ap_continue = ap_const_logic_0;
    }
}

void music::thread_grp_qrf_top_fu_2756_ap_start() {
    grp_qrf_top_fu_2756_ap_start = grp_qrf_top_fu_2756_ap_start_reg.read();
}

void music::thread_grp_scaled_fixed2ieee_fu_2799_ap_start() {
    grp_scaled_fixed2ieee_fu_2799_ap_start = grp_scaled_fixed2ieee_fu_2799_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2766_ap_start() {
    grp_sin_or_cos_float_s_fu_2766_ap_start = grp_sin_or_cos_float_s_fu_2766_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2766_do_cos() {
    grp_sin_or_cos_float_s_fu_2766_do_cos =  (sc_logic) (ap_const_lv1_1[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2766_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        grp_sin_or_cos_float_s_fu_2766_t_in = p_x_assign_6_reg_7955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_sin_or_cos_float_s_fu_2766_t_in = p_x_assign_5_reg_2012.read();
    } else {
        grp_sin_or_cos_float_s_fu_2766_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_sin_or_cos_float_s_fu_2782_ap_start() {
    grp_sin_or_cos_float_s_fu_2782_ap_start = grp_sin_or_cos_float_s_fu_2782_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2782_do_cos() {
    grp_sin_or_cos_float_s_fu_2782_do_cos =  (sc_logic) (ap_const_lv1_0[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2782_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        grp_sin_or_cos_float_s_fu_2782_t_in = p_x_assign_6_reg_7955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_sin_or_cos_float_s_fu_2782_t_in = p_x_assign_5_reg_2012.read();
    } else {
        grp_sin_or_cos_float_s_fu_2782_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_i_10_fu_4259_p2() {
    i_10_fu_4259_p2 = (!i17_0_i_reg_2259.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i17_0_i_reg_2259.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_11_fu_4420_p2() {
    i_11_fu_4420_p2 = (!i19_0_i_reg_2330.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i19_0_i_reg_2330.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_12_fu_4812_p2() {
    i_12_fu_4812_p2 = (!i_0_i31_reg_2460.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i31_reg_2460.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_13_fu_4499_p2() {
    i_13_fu_4499_p2 = (!j_14_reg_2353.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_14_reg_2353.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_14_fu_4833_p2() {
    i_14_fu_4833_p2 = (!flag_reg_2472.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(flag_reg_2472.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_15_fu_4777_p2() {
    i_15_fu_4777_p2 = (!i25_0_i_reg_2449.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i25_0_i_reg_2449.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_16_fu_5948_p2() {
    i_16_fu_5948_p2 = (!i_0_reg_2559.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_2559.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_17_fu_6076_p2() {
    i_17_fu_6076_p2 = (!i31_0_reg_2618.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i31_0_reg_2618.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_18_fu_6202_p2() {
    i_18_fu_6202_p2 = (!i34_0_reg_2688.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i34_0_reg_2688.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_4_fu_3556_p2() {
    i_4_fu_3556_p2 = (!i_0_i_i_i_reg_1969.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i_i_i_reg_1969.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_5_cast_fu_3643_p1() {
    i_5_cast_fu_3643_p1 = esl_zext<32,10>(i_5_reg_2001.read());
}

void music::thread_i_6_fu_3544_p2() {
    i_6_fu_3544_p2 = (!ap_const_lv11_1.is_01() || !input_assign_reg_1946.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(input_assign_reg_1946.read()));
}

void music::thread_i_7_fu_3697_p2() {
    i_7_fu_3697_p2 = (!zext_ln161_reg_6537.read().is_01() || !i_0_i_reg_2024.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln161_reg_6537.read()) + sc_bigint<32>(i_0_i_reg_2024.read()));
}

void music::thread_i_8_fu_4196_p2() {
    i_8_fu_4196_p2 = (!i_0_i25_reg_2226.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i25_reg_2226.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_9_fu_4247_p2() {
    i_9_fu_4247_p2 = (!i16_0_i_reg_2248.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i16_0_i_reg_2248.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_fu_6278_p2() {
    i_fu_6278_p2 = (!i36_0_reg_2745.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i36_0_reg_2745.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_lower_fu_3680_p2() {
    i_lower_fu_3680_p2 = (!i_0_i_reg_2024.read().is_01() || !numBF_reg_6554.read().is_01())? sc_lv<32>(): (sc_bigint<32>(i_0_i_reg_2024.read()) + sc_biguint<32>(numBF_reg_6554.read()));
}

void music::thread_icmp_ln101_fu_3977_p2() {
    icmp_ln101_fu_3977_p2 = (!l_0_i_reg_2123.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_i_reg_2123.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln110_fu_3550_p2() {
    icmp_ln110_fu_3550_p2 = (!i_0_i_i_i_reg_1969.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i_reg_1969.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln11_1_fu_4070_p2() {
    icmp_ln11_1_fu_4070_p2 = (!phi_ln11_reg_2134.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_reg_2134.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln11_fu_4064_p2() {
    icmp_ln11_fu_4064_p2 = (!phi_ln11_1_reg_2146.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_1_reg_2146.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln122_fu_3538_p2() {
    icmp_ln122_fu_3538_p2 = (!input_assign_reg_1946.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(input_assign_reg_1946.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln124_fu_3592_p2() {
    icmp_ln124_fu_3592_p2 = (!zext_ln108_reg_6465.read().is_01() || !reversed_reg_1958.read().is_01())? sc_lv<1>(): (sc_biguint<32>(zext_ln108_reg_6465.read()) > sc_biguint<32>(reversed_reg_1958.read()));
}

void music::thread_icmp_ln12_1_fu_4108_p2() {
    icmp_ln12_1_fu_4108_p2 = (!phi_ln12_reg_2157.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_reg_2157.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln12_fu_4102_p2() {
    icmp_ln12_fu_4102_p2 = (!phi_ln12_1_reg_2169.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_1_reg_2169.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_1_fu_4146_p2() {
    icmp_ln13_1_fu_4146_p2 = (!phi_ln13_reg_2180.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_2180.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_fu_4140_p2() {
    icmp_ln13_fu_4140_p2 = (!phi_ln13_1_reg_2192.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_2192.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_1_fu_4184_p2() {
    icmp_ln14_1_fu_4184_p2 = (!phi_ln14_reg_2203.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_reg_2203.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_fu_4178_p2() {
    icmp_ln14_fu_4178_p2 = (!phi_ln14_1_reg_2215.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_1_reg_2215.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln159_fu_3613_p2() {
    icmp_ln159_fu_3613_p2 = (!stage_0_i_reg_1989.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(stage_0_i_reg_1989.read() == ap_const_lv4_B);
}

void music::thread_icmp_ln169_fu_3647_p2() {
    icmp_ln169_fu_3647_p2 = (!i_5_reg_2001.read().is_01() || !trunc_ln6_reg_6543.read().is_01())? sc_lv<1>(): sc_lv<1>(i_5_reg_2001.read() == trunc_ln6_reg_6543.read());
}

void music::thread_icmp_ln177_fu_3674_p2() {
    icmp_ln177_fu_3674_p2 = (!tmp_68_fu_3664_p4.read().is_01() || !ap_const_lv22_1.is_01())? sc_lv<1>(): (sc_bigint<22>(tmp_68_fu_3664_p4.read()) < sc_bigint<22>(ap_const_lv22_1));
}

void music::thread_icmp_ln204_1_fu_3215_p2() {
    icmp_ln204_1_fu_3215_p2 = (!phi_ln204_reg_1751.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln204_reg_1751.read() == ap_const_lv4_9);
}

void music::thread_icmp_ln204_fu_3209_p2() {
    icmp_ln204_fu_3209_p2 = (!phi_ln204_1_reg_1763.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln204_1_reg_1763.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln205_1_fu_3253_p2() {
    icmp_ln205_1_fu_3253_p2 = (!phi_ln205_reg_1774.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln205_reg_1774.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln205_fu_3247_p2() {
    icmp_ln205_fu_3247_p2 = (!phi_ln205_1_reg_1786.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln205_1_reg_1786.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln206_fu_3285_p2() {
    icmp_ln206_fu_3285_p2 = (!phi_ln206_reg_1797.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln206_reg_1797.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln207_1_fu_3323_p2() {
    icmp_ln207_1_fu_3323_p2 = (!phi_ln207_reg_1820.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln207_reg_1820.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln207_fu_3317_p2() {
    icmp_ln207_fu_3317_p2 = (!phi_ln207_1_reg_1832.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln207_1_reg_1832.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln208_1_fu_3361_p2() {
    icmp_ln208_1_fu_3361_p2 = (!phi_ln208_reg_1843.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln208_reg_1843.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln208_fu_3355_p2() {
    icmp_ln208_fu_3355_p2 = (!phi_ln208_1_reg_1855.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln208_1_reg_1855.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln209_fu_3379_p2() {
    icmp_ln209_fu_3379_p2 = (!phi_ln209_reg_1866.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln209_reg_1866.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln20_fu_4190_p2() {
    icmp_ln20_fu_4190_p2 = (!i_0_i25_reg_2226.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i25_reg_2226.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln210_1_fu_3425_p2() {
    icmp_ln210_1_fu_3425_p2 = (!phi_ln210_reg_1877.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln210_reg_1877.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln210_fu_3419_p2() {
    icmp_ln210_fu_3419_p2 = (!phi_ln210_1_reg_1901.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln210_1_reg_1901.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln215_fu_3431_p2() {
    icmp_ln215_fu_3431_p2 = (!l_0_reg_1912.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_1912.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln216_fu_3451_p2() {
    icmp_ln216_fu_3451_p2 = (!n_0_reg_1923.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_1923.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln217_fu_3471_p2() {
    icmp_ln217_fu_3471_p2 = (!j_0_reg_1934.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_1934.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln21_fu_4214_p2() {
    icmp_ln21_fu_4214_p2 = (!j_0_i26_reg_2237.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i26_reg_2237.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln222_fu_3706_p2() {
    icmp_ln222_fu_3706_p2 = (!j25_0_reg_2033.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j25_0_reg_2033.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln229_fu_3783_p2() {
    icmp_ln229_fu_3783_p2 = (!jj_0_reg_2044.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(jj_0_reg_2044.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln231_fu_3800_p2() {
    icmp_ln231_fu_3800_p2 = (!l26_0_reg_2055.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l26_0_reg_2055.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln232_fu_3849_p2() {
    icmp_ln232_fu_3849_p2 = (!n27_0_reg_2066.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n27_0_reg_2066.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln241_fu_4968_p2() {
    icmp_ln241_fu_4968_p2 = (!x_0_reg_2503.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_2503.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln242_fu_5022_p2() {
    icmp_ln242_fu_5022_p2 = (!y_0_reg_2514.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_2514.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln243_fu_5053_p2() {
    icmp_ln243_fu_5053_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_1);
}

void music::thread_icmp_ln245_fu_5059_p2() {
    icmp_ln245_fu_5059_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_0);
}

void music::thread_icmp_ln251_fu_5071_p2() {
    icmp_ln251_fu_5071_p2 = (!x28_0_reg_2525.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x28_0_reg_2525.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln253_fu_5088_p2() {
    icmp_ln253_fu_5088_p2 = (!y29_0_reg_2548.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(y29_0_reg_2548.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln259_fu_5942_p2() {
    icmp_ln259_fu_5942_p2 = (!i_0_reg_2559.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_2559.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln260_fu_5978_p2() {
    icmp_ln260_fu_5978_p2 = (!j30_0_reg_2570.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j30_0_reg_2570.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln263_fu_6017_p2() {
    icmp_ln263_fu_6017_p2 = (!k_0_reg_2607.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2607.read() == ap_const_lv2_2);
}

void music::thread_icmp_ln269_fu_6070_p2() {
    icmp_ln269_fu_6070_p2 = (!i31_0_reg_2618.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i31_0_reg_2618.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln270_fu_6098_p2() {
    icmp_ln270_fu_6098_p2 = (!j32_0_reg_2629.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j32_0_reg_2629.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln273_fu_6129_p2() {
    icmp_ln273_fu_6129_p2 = (!k33_0_reg_2666.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k33_0_reg_2666.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln279_fu_6196_p2() {
    icmp_ln279_fu_6196_p2 = (!i34_0_reg_2688.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i34_0_reg_2688.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln27_fu_4241_p2() {
    icmp_ln27_fu_4241_p2 = (!i16_0_i_reg_2248.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i16_0_i_reg_2248.read() == ap_const_lv4_8);
}

void music::thread_icmp_ln282_fu_6228_p2() {
    icmp_ln282_fu_6228_p2 = (!k35_0_reg_2723.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k35_0_reg_2723.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln289_fu_6272_p2() {
    icmp_ln289_fu_6272_p2 = (!i36_0_reg_2745.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i36_0_reg_2745.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln29_fu_4253_p2() {
    icmp_ln29_fu_4253_p2 = (!i17_0_i_reg_2259.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i17_0_i_reg_2259.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln30_fu_4277_p2() {
    icmp_ln30_fu_4277_p2 = (!j18_0_i_reg_2270.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j18_0_i_reg_2270.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln33_fu_4304_p2() {
    icmp_ln33_fu_4304_p2 = (!k_0_i_reg_2307.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_0_i_reg_2307.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln40_fu_4354_p2() {
    icmp_ln40_fu_4354_p2 = (!count_0_i_reg_2318.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(count_0_i_reg_2318.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln42_fu_4414_p2() {
    icmp_ln42_fu_4414_p2 = (!i19_0_i_reg_2330.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2330.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln43_fu_4456_p2() {
    icmp_ln43_fu_4456_p2 = (!j20_0_i_reg_2342.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j20_0_i_reg_2342.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln44_fu_4468_p2() {
    icmp_ln44_fu_4468_p2 = (!i19_0_i_reg_2330.read().is_01() || !j20_0_i_reg_2342.read().is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2330.read() == j20_0_i_reg_2342.read());
}

void music::thread_icmp_ln51_fu_4493_p2() {
    icmp_ln51_fu_4493_p2 = (!j_14_reg_2353.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_14_reg_2353.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln53_fu_4531_p2() {
    icmp_ln53_fu_4531_p2 = (!j22_0_i_reg_2365.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(j22_0_i_reg_2365.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln56_fu_4564_p2() {
    icmp_ln56_fu_4564_p2 = (!j23_0_in_i_reg_2374.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j23_0_in_i_reg_2374.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln58_fu_4595_p2() {
    icmp_ln58_fu_4595_p2 = (!q_0_i_reg_2383.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(q_0_i_reg_2383.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln67_fu_4689_p2() {
    icmp_ln67_fu_4689_p2 = (!j24_0_in_i_reg_2440.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_in_i_reg_2440.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln75_fu_4771_p2() {
    icmp_ln75_fu_4771_p2 = (!i25_0_i_reg_2449.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i25_0_i_reg_2449.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln81_fu_4806_p2() {
    icmp_ln81_fu_4806_p2 = (!i_0_i31_reg_2460.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i31_reg_2460.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln833_1_fu_5219_p2() {
    icmp_ln833_1_fu_5219_p2 = (!tmp_V_4_reg_7635.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_reg_7635.read() == ap_const_lv52_0);
}

void music::thread_icmp_ln833_2_fu_5365_p2() {
    icmp_ln833_2_fu_5365_p2 = (!tmp_V_reg_7628.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7628.read() == ap_const_lv11_7FF);
}

void music::thread_icmp_ln833_fu_5360_p2() {
    icmp_ln833_fu_5360_p2 = (!tmp_V_reg_7628.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7628.read() == ap_const_lv11_0);
}

void music::thread_icmp_ln84_fu_4827_p2() {
    icmp_ln84_fu_4827_p2 = (!flag_reg_2472.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(flag_reg_2472.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln86_fu_4845_p2() {
    icmp_ln86_fu_4845_p2 = (!j_0_in_i_reg_2494.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_in_i_reg_2494.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln87_1_fu_4923_p2() {
    icmp_ln87_1_fu_4923_p2 = (!trunc_ln87_fu_4895_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_fu_4895_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_2_fu_4929_p2() {
    icmp_ln87_2_fu_4929_p2 = (!tmp_24_fu_4903_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_24_fu_4903_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln87_3_fu_4935_p2() {
    icmp_ln87_3_fu_4935_p2 = (!trunc_ln87_1_fu_4913_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_1_fu_4913_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_fu_4917_p2() {
    icmp_ln87_fu_4917_p2 = (!tmp_22_fu_4885_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_4885_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln98_fu_3918_p2() {
    icmp_ln98_fu_3918_p2 = (!x_0_i_reg_2077.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_i_reg_2077.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln99_fu_3946_p2() {
    icmp_ln99_fu_3946_p2 = (!y_0_i_reg_2088.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_i_reg_2088.read() == ap_const_lv3_4);
}

void music::thread_input_assign_1_fu_3578_p4() {
    input_assign_1_fu_3578_p4 = p_0_i_i_i_reg_1980.read().range(9, 1);
}

void music::thread_j_10_fu_4683_p2() {
    j_10_fu_4683_p2 = (!j24_0_in_i_reg_2440.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j24_0_in_i_reg_2440.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_11_fu_4558_p2() {
    j_11_fu_4558_p2 = (!j23_0_in_i_reg_2374.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j23_0_in_i_reg_2374.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_12_fu_5984_p2() {
    j_12_fu_5984_p2 = (!j30_0_reg_2570.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j30_0_reg_2570.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_13_fu_6104_p2() {
    j_13_fu_6104_p2 = (!j32_0_reg_2629.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j32_0_reg_2629.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_15_fu_4839_p2() {
    j_15_fu_4839_p2 = (!j_0_in_i_reg_2494.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_0_in_i_reg_2494.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_1_fu_3712_p2() {
    j_1_fu_3712_p2 = (!j25_0_reg_2033.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j25_0_reg_2033.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_j_2_fu_3652_p2() {
    j_2_fu_3652_p2 = (!i_5_reg_2001.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_5_reg_2001.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void music::thread_j_3_fu_4220_p2() {
    j_3_fu_4220_p2 = (!j_0_i26_reg_2237.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_i26_reg_2237.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_5_fu_4283_p2() {
    j_5_fu_4283_p2 = (!j18_0_i_reg_2270.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j18_0_i_reg_2270.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_7_fu_4961_p3() {
    j_7_fu_4961_p3 = (!and_ln87_1_fu_4955_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln87_1_fu_4955_p2.read()[0].to_bool())? j_15_reg_7426.read(): flag_0_i_reg_2484.read());
}

void music::thread_j_8_fu_4552_p2() {
    j_8_fu_4552_p2 = (!ap_const_lv32_1.is_01() || !j22_0_i_reg_2365.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j22_0_i_reg_2365.read()));
}

void music::thread_j_9_fu_4462_p2() {
    j_9_fu_4462_p2 = (!j20_0_i_reg_2342.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j20_0_i_reg_2342.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_fu_3477_p2() {
    j_fu_3477_p2 = (!j_0_reg_1934.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_reg_1934.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_jj_fu_3789_p2() {
    jj_fu_3789_p2 = (!jj_0_reg_2044.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(jj_0_reg_2044.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_k_2_fu_6023_p2() {
    k_2_fu_6023_p2 = (!k_0_reg_2607.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_2607.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_k_3_fu_6234_p2() {
    k_3_fu_6234_p2 = (!k35_0_reg_2723.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k35_0_reg_2723.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_4_fu_6135_p2() {
    k_4_fu_6135_p2 = (!k33_0_reg_2666.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k33_0_reg_2666.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_fu_4310_p2() {
    k_fu_4310_p2 = (!k_0_i_reg_2307.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_0_i_reg_2307.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_l_1_fu_3806_p2() {
    l_1_fu_3806_p2 = (!l26_0_reg_2055.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l26_0_reg_2055.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_2_fu_3983_p2() {
    l_2_fu_3983_p2 = (!l_0_i_reg_2123.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_i_reg_2123.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_fu_3437_p2() {
    l_fu_3437_p2 = (!l_0_reg_1912.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_reg_1912.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_lhs_V_2_fu_5651_p1() {
    lhs_V_2_fu_5651_p1 = esl_sext<64,63>(t1_V_fu_5644_p3.read());
}

void music::thread_m_fu_4733_p2() {
    m_fu_4733_p2 = (!m_0_i_reg_2404.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<3>(): (sc_bigint<3>(m_0_i_reg_2404.read()) + sc_bigint<3>(ap_const_lv3_7));
}

void music::thread_n_1_fu_3457_p2() {
    n_1_fu_3457_p2 = (!n_0_reg_1923.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n_0_reg_1923.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_n_fu_3855_p2() {
    n_fu_3855_p2 = (!n27_0_reg_2066.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n27_0_reg_2066.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_numBF_fu_3640_p1() {
    numBF_fu_3640_p1 = esl_zext<32,10>(trunc_ln6_reg_6543.read());
}

void music::thread_or_ln246_fu_5006_p2() {
    or_ln246_fu_5006_p2 = (tmp_51_fu_4992_p3.read() | ap_const_lv4_1);
}

void music::thread_or_ln300_fu_5875_p2() {
    or_ln300_fu_5875_p2 = (and_ln300_fu_5835_p2.read() | icmp_ln833_2_reg_7736.read());
}

void music::thread_or_ln311_fu_5844_p2() {
    or_ln311_fu_5844_p2 = (icmp_ln833_2_reg_7736.read() | select_ln271_fu_5828_p3.read());
}

void music::thread_or_ln87_1_fu_4945_p2() {
    or_ln87_1_fu_4945_p2 = (icmp_ln87_3_reg_7492.read() | icmp_ln87_2_reg_7487.read());
}

void music::thread_or_ln87_fu_4941_p2() {
    or_ln87_fu_4941_p2 = (icmp_ln87_1_reg_7482.read() | icmp_ln87_reg_7477.read());
}

void music::thread_p_Repl2_6_fu_5904_p3() {
    p_Repl2_6_fu_5904_p3 = (!and_ln300_reg_7925.read()[0].is_01())? sc_lv<1>(): ((and_ln300_reg_7925.read()[0].to_bool())? results_sign_V_2_reg_7622.read(): select_ln311_reg_7930.read());
}

void music::thread_p_Result_50_fu_5199_p3() {
    p_Result_50_fu_5199_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_7635.read());
}

void music::thread_p_Result_51_fu_5276_p3() {
    p_Result_51_fu_5276_p3 = esl_concat<61,1>(p_Result_i_i_i_87_reg_7700.read(), ap_const_lv1_1);
}

void music::thread_p_Result_52_fu_5293_p3() {
    p_Result_52_fu_5293_p3 = esl_concat<2,62>(ap_const_lv2_3, p_Result_s_fu_5283_p4.read());
}

void music::thread_p_Result_53_fu_5495_p3() {
    p_Result_53_fu_5495_p3 = esl_concat<1,7>(sin_basis_fu_5489_p2.read(), p_Result_i_i_reg_7743.read());
}

void music::thread_p_Result_54_fu_5724_p3() {
    p_Result_54_fu_5724_p3 = p_Val2_65_fu_5720_p1.read().range(63, 63);
}

void music::thread_p_Result_55_fu_5746_p3() {
    p_Result_55_fu_5746_p3 = esl_concat<1,3>(results_sign_V_2_reg_7622.read(), p_Val2_70_reg_7689.read());
}

void music::thread_p_Result_56_fu_5909_p4() {
    p_Result_56_fu_5909_p4 = esl_concat<12,52>(esl_concat<1,11>(p_Repl2_6_fu_5904_p3.read(), ret_V_20_reg_7935.read()), ret_V_21_reg_7940.read());
}

void music::thread_p_Result_i_i_i_fu_5161_p4() {
    p_Result_i_i_i_fu_5161_p4 = addr_V_fu_5153_p3.read().range(10, 7);
}

void music::thread_p_Result_s_fu_5283_p4() {
    p_Result_s_fu_5283_p4 = p_Result_51_fu_5276_p3.read().range(0, 61);
}

void music::thread_p_Val2_49_fu_5259_p3() {
    p_Val2_49_fu_5259_p3 = (!trunc_ln745_fu_5250_p1.read()[0].is_01())? sc_lv<124>(): ((trunc_ln745_fu_5250_p1.read()[0].to_bool())? Mx_bits_V_2_fu_5254_p2.read(): p_Val2_69_reg_7678.read());
}

void music::thread_p_Val2_65_fu_5720_p1() {
    p_Val2_65_fu_5720_p1 = grp_scaled_fixed2ieee_fu_2799_ap_return.read();
}

void music::thread_p_Val2_70_fu_5244_p3() {
    p_Val2_70_fu_5244_p3 = (!closepath_reg_7641.read()[0].is_01())? sc_lv<3>(): ((closepath_reg_7641.read()[0].to_bool())? ap_const_lv3_0: trunc_ln_i_i_reg_7684.read());
}

void music::thread_p_Val2_s_fu_5115_p1() {
    p_Val2_s_fu_5115_p1 = reg_3051.read();
}

void music::thread_p_address0() {
    p_address0 =  (sc_lv<2>) (zext_ln252_fu_5083_p1.read());
}

void music::thread_p_cast19_fu_3165_p1() {
    p_cast19_fu_3165_p1 = esl_zext<31,30>(tmp_40_fu_3155_p4.read());
}

void music::thread_p_cast_fu_3179_p1() {
    p_cast_fu_3179_p1 = esl_zext<31,30>(tmp_41_fu_3169_p4.read());
}

void music::thread_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read())) {
        p_ce0 = ap_const_logic_1;
    } else {
        p_ce0 = ap_const_logic_0;
    }
}

void music::thread_p_r_M_imag_15_fu_4765_p1() {
    p_r_M_imag_15_fu_4765_p1 = xor_ln444_1_fu_4759_p2.read();
}

void music::thread_p_r_M_imag_23_fu_6190_p1() {
    p_r_M_imag_23_fu_6190_p1 = xor_ln667_2_fu_6184_p2.read();
}

void music::thread_p_r_M_real_17_fu_4749_p1() {
    p_r_M_real_17_fu_4749_p1 = xor_ln444_fu_4743_p2.read();
}

void music::thread_p_t_imag_9_fu_6064_p1() {
    p_t_imag_9_fu_6064_p1 = xor_ln667_1_fu_6058_p2.read();
}

void music::thread_p_t_imag_fu_4032_p1() {
    p_t_imag_fu_4032_p1 = xor_ln667_fu_4026_p2.read();
}

void music::thread_q_1_fu_4621_p2() {
    q_1_fu_4621_p2 = (!ap_const_lv32_1.is_01() || !q_0_i_reg_2383.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(q_0_i_reg_2383.read()));
}

void music::thread_r_V_20_fu_5399_p2() {
    r_V_20_fu_5399_p2 = (!zext_ln1287_fu_5390_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7711.read() << (unsigned short)zext_ln1287_fu_5390_p1.read().to_uint();
}

void music::thread_r_V_22_fu_5435_p1() {
    r_V_22_fu_5435_p1 = esl_zext<98,49>(B_trunc_V_reg_7753.read());
}

void music::thread_r_V_25_fu_5475_p1() {
    r_V_25_fu_5475_p1 = esl_zext<98,49>(B_squared_V_reg_7765.read());
}

void music::thread_r_V_34_fu_5183_p2() {
    r_V_34_fu_5183_p2 = (!zext_ln744_fu_5180_p1.read().is_01())? sc_lv<256>(): ref_4oPi_table_256_V_q0.read() << (unsigned short)zext_ln744_fu_5180_p1.read().to_uint();
}

void music::thread_r_V_35_fu_5328_p2() {
    r_V_35_fu_5328_p2 = (!zext_ln1253_fu_5325_p1.read().is_01())? sc_lv<124>(): p_Val2_49_reg_7695.read() << (unsigned short)zext_ln1253_fu_5325_p1.read().to_uint();
}

void music::thread_r_V_36_fu_5404_p3() {
    r_V_36_fu_5404_p3 = (!isNeg_reg_7724.read()[0].is_01())? sc_lv<63>(): ((isNeg_reg_7724.read()[0].to_bool())? r_V_fu_5394_p2.read(): r_V_20_fu_5399_p2.read());
}

void music::thread_r_V_43_fu_5573_p0() {
    r_V_43_fu_5573_p0 =  (sc_lv<35>) (r_V_43_fu_5573_p00.read());
}

void music::thread_r_V_43_fu_5573_p00() {
    r_V_43_fu_5573_p00 = esl_zext<60,35>(B_fourth_power_V_reg_7815.read());
}

void music::thread_r_V_43_fu_5573_p1() {
    r_V_43_fu_5573_p1 =  (sc_lv<25>) (r_V_43_fu_5573_p10.read());
}

void music::thread_r_V_43_fu_5573_p10() {
    r_V_43_fu_5573_p10 = esl_zext<60,25>(fourth_order_double_16_reg_7840.read());
}

void music::thread_r_V_43_fu_5573_p2() {
    r_V_43_fu_5573_p2 = (!r_V_43_fu_5573_p0.read().is_01() || !r_V_43_fu_5573_p1.read().is_01())? sc_lv<60>(): sc_biguint<35>(r_V_43_fu_5573_p0.read()) * sc_biguint<25>(r_V_43_fu_5573_p1.read());
}

void music::thread_r_V_fu_5394_p2() {
    r_V_fu_5394_p2 = (!zext_ln1287_fu_5390_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7711.read() >> (unsigned short)zext_ln1287_fu_5390_p1.read().to_uint();
}

void music::thread_ref_4oPi_table_256_V_address0() {
    ref_4oPi_table_256_V_address0 =  (sc_lv<4>) (zext_ln635_fu_5171_p1.read());
}

void music::thread_ref_4oPi_table_256_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read())) {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_1;
    } else {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_0;
    }
}

void music::thread_ret_V_19_fu_5713_p2() {
    ret_V_19_fu_5713_p2 = (!ap_const_lv12_0.is_01() || !rhs_V_3_fu_5709_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(rhs_V_3_fu_5709_p1.read()));
}

void music::thread_ret_V_20_fu_5880_p3() {
    ret_V_20_fu_5880_p3 = (!or_ln300_fu_5875_p2.read()[0].is_01())? sc_lv<11>(): ((or_ln300_fu_5875_p2.read()[0].to_bool())? select_ln300_4_fu_5867_p3.read(): tmp_V_5_fu_5732_p4.read());
}

void music::thread_ret_V_21_fu_5896_p3() {
    ret_V_21_fu_5896_p3 = (!or_ln300_fu_5875_p2.read()[0].is_01())? sc_lv<52>(): ((or_ln300_fu_5875_p2.read()[0].to_bool())? select_ln300_6_fu_5888_p3.read(): tmp_V_6_fu_5742_p1.read());
}

void music::thread_ret_V_fu_5667_p2() {
    ret_V_fu_5667_p2 = (!sext_ln1146_fu_5664_p1.read().is_01() || !add_ln1146_fu_5658_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(sext_ln1146_fu_5664_p1.read()) + sc_biguint<64>(add_ln1146_fu_5658_p2.read()));
}

void music::thread_rev_fu_3570_p3() {
    rev_fu_3570_p3 = esl_concat<31,1>(trunc_ln111_fu_3562_p1.read(), trunc_ln110_fu_3566_p1.read());
}

void music::thread_rhs_V_2_fu_5655_p1() {
    rhs_V_2_fu_5655_p1 = esl_sext<64,56>(trunc_ln9_reg_7880.read());
}

void music::thread_rhs_V_3_fu_5709_p1() {
    rhs_V_3_fu_5709_p1 = esl_sext<12,11>(select_ln272_fu_5692_p3.read());
}

void music::thread_select_ln271_fu_5828_p3() {
    select_ln271_fu_5828_p3 = (!cos_basis_reg_7771.read()[0].is_01())? sc_lv<1>(): ((cos_basis_reg_7771.read()[0].to_bool())? tmp_27_fu_5752_p18.read(): tmp_28_fu_5790_p18.read());
}

void music::thread_select_ln272_2_fu_5673_p3() {
    select_ln272_2_fu_5673_p3 = (!cos_basis_reg_7771.read()[0].is_01())? sc_lv<63>(): ((cos_basis_reg_7771.read()[0].to_bool())? ap_const_lv63_7FFFFFFFFFFFFFFF: Mx_V_reg_7711.read());
}

void music::thread_select_ln272_fu_5692_p3() {
    select_ln272_fu_5692_p3 = (!cos_basis_reg_7771.read()[0].is_01())? sc_lv<11>(): ((cos_basis_reg_7771.read()[0].to_bool())? ap_const_lv11_0: Ex_V_reg_7718.read());
}

void music::thread_select_ln300_4_fu_5867_p3() {
    select_ln300_4_fu_5867_p3 = (!xor_ln300_fu_5861_p2.read()[0].is_01())? sc_lv<11>(): ((xor_ln300_fu_5861_p2.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void music::thread_select_ln300_6_fu_5888_p3() {
    select_ln300_6_fu_5888_p3 = (!xor_ln300_fu_5861_p2.read()[0].is_01())? sc_lv<52>(): ((xor_ln300_fu_5861_p2.read()[0].to_bool())? ap_const_lv52_FFFFFFFFFFFFF: ap_const_lv52_0);
}

void music::thread_select_ln311_fu_5849_p3() {
    select_ln311_fu_5849_p3 = (!or_ln311_fu_5844_p2.read()[0].is_01())? sc_lv<1>(): ((or_ln311_fu_5844_p2.read()[0].to_bool())? xor_ln311_fu_5839_p2.read(): p_Result_54_fu_5724_p3.read());
}

void music::thread_select_ln482_fu_5318_p3() {
    select_ln482_fu_5318_p3 = (!closepath_reg_7641.read()[0].is_01())? sc_lv<11>(): ((closepath_reg_7641.read()[0].to_bool())? add_ln114_fu_5313_p2.read(): ap_const_lv11_0);
}

void music::thread_sext_ln1067_fu_4404_p1() {
    sext_ln1067_fu_4404_p1 = esl_sext<4,3>(xor_ln1067_fu_4398_p2.read());
}

void music::thread_sext_ln1146_fu_5664_p1() {
    sext_ln1146_fu_5664_p1 = esl_sext<64,49>(add_ln1146_2_reg_7895.read());
}

void music::thread_sext_ln1311_fu_5386_p1() {
    sext_ln1311_fu_5386_p1 = esl_sext<32,12>(ush_fu_5379_p3.read());
}

void music::thread_sext_ln1334_fu_5370_p1() {
    sext_ln1334_fu_5370_p1 = esl_sext<12,11>(Ex_V_reg_7718.read());
}

void music::thread_sext_ln182_fu_3685_p1() {
    sext_ln182_fu_3685_p1 = esl_sext<64,32>(i_lower_fu_3680_p2.read());
}

void music::thread_sext_ln185_fu_3691_p1() {
    sext_ln185_fu_3691_p1 = esl_sext<64,32>(i_0_i_reg_2024.read());
}

void music::thread_sext_ln54_fu_4546_p1() {
    sext_ln54_fu_4546_p1 = esl_sext<64,6>(add_ln54_fu_4541_p2.read());
}

void music::thread_sext_ln57_cast_fu_4588_p3() {
    sext_ln57_cast_fu_4588_p3 = esl_concat<4,2>(trunc_ln57_reg_7206.read(), ap_const_lv2_0);
}

void music::thread_sext_ln57_fu_4582_p1() {
    sext_ln57_fu_4582_p1 = esl_sext<64,34>(tmp_57_fu_4574_p3.read());
}

void music::thread_sext_ln59_1_fu_4615_p1() {
    sext_ln59_1_fu_4615_p1 = esl_sext<64,6>(add_ln59_1_fu_4610_p2.read());
}

void music::thread_sext_ln59_fu_4627_p1() {
    sext_ln59_fu_4627_p1 = esl_sext<64,6>(add_ln59_reg_7229.read());
}

void music::thread_sext_ln657_fu_5622_p1() {
    sext_ln657_fu_5622_p1 = esl_sext<49,48>(trunc_ln662_1_reg_7885.read());
}

void music::thread_sext_ln65_fu_4632_p1() {
    sext_ln65_fu_4632_p1 = esl_sext<32,3>(m_0_i_reg_2404.read());
}

void music::thread_sext_ln68_1_fu_4727_p1() {
    sext_ln68_1_fu_4727_p1 = esl_sext<64,6>(add_ln68_1_fu_4722_p2.read());
}

void music::thread_sext_ln68_2_cast_fu_4714_p3() {
    sext_ln68_2_cast_fu_4714_p3 = esl_concat<4,2>(trunc_ln68_1_fu_4710_p1.read(), ap_const_lv2_0);
}

void music::thread_sext_ln68_fu_4704_p1() {
    sext_ln68_fu_4704_p1 = esl_sext<64,6>(add_ln68_fu_4699_p2.read());
}

void music::thread_sext_ln70_fu_4656_p1() {
    sext_ln70_fu_4656_p1 = esl_sext<6,5>(tmp_53_fu_4648_p3.read());
}

void music::thread_sext_ln87_1_fu_4856_p1() {
    sext_ln87_1_fu_4856_p1 = esl_sext<64,32>(j_15_fu_4839_p2.read());
}

void music::thread_sext_ln87_fu_4851_p1() {
    sext_ln87_fu_4851_p1 = esl_sext<64,32>(flag_0_i_reg_2484.read());
}

void music::thread_sext_ln92_fu_4861_p1() {
    sext_ln92_fu_4861_p1 = esl_sext<64,32>(flag_0_i_reg_2484.read());
}

void music::thread_shl_ln1_fu_3824_p3() {
    shl_ln1_fu_3824_p3 = esl_concat<4,10>(l26_0_reg_2055.read(), ap_const_lv10_0);
}

void music::thread_shl_ln_fu_3443_p3() {
    shl_ln_fu_3443_p3 = esl_concat<4,10>(l_0_reg_1912.read(), ap_const_lv10_0);
}

void music::thread_sin_basis_fu_5489_p2() {
    sin_basis_fu_5489_p2 = (cos_basis_fu_5454_p10.read() ^ ap_const_lv1_1);
}

void music::thread_sort_index_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        sort_index_address0 = sort_index_addr_2_reg_7451.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4845_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln92_fu_4861_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4845_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln87_fu_4851_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read())) {
        sort_index_address0 =  (sc_lv<2>) (zext_ln82_fu_4818_p1.read());
    } else {
        sort_index_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln243_fu_5034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state407.read())) {
        sort_index_address1 = sort_index_addr_1_reg_7445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4845_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln93_fu_4866_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4845_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (sext_ln87_1_fu_4856_p1.read());
    } else {
        sort_index_address1 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4845_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4845_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()))) {
        sort_index_ce0 = ap_const_logic_1;
    } else {
        sort_index_ce0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4845_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4845_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state407.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()))) {
        sort_index_ce1 = ap_const_logic_1;
    } else {
        sort_index_ce1 = ap_const_logic_0;
    }
}

void music::thread_sort_index_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        sort_index_d0 = sort_index_load_reg_7502.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read())) {
        sort_index_d0 = i_0_i31_reg_2460.read();
    } else {
        sort_index_d0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_sort_index_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_fu_4806_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()))) {
        sort_index_we0 = ap_const_logic_1;
    } else {
        sort_index_we0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state407.read())) {
        sort_index_we1 = ap_const_logic_1;
    } else {
        sort_index_we1 = ap_const_logic_0;
    }
}

void music::thread_stage_fu_3658_p2() {
    stage_fu_3658_p2 = (!stage_0_i_reg_1989.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(stage_0_i_reg_1989.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_sub_ln1311_fu_5373_p2() {
    sub_ln1311_fu_5373_p2 = (!ap_const_lv12_0.is_01() || !sext_ln1334_fu_5370_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(sext_ln1334_fu_5370_p1.read()));
}

void music::thread_t1_V_fu_5644_p3() {
    t1_V_fu_5644_p3 = esl_concat<59,4>(p_Val2_58_reg_7820.read(), ap_const_lv4_0);
}

void music::thread_temp_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln274_1_fu_6175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_5_reg_7997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4483_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4448_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_fu_4235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_1_reg_6786.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3311_p1.read());
    } else {
        temp_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()))) {
        temp_mat_M_imag_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        temp_mat_M_imag_d0 = complex_M_imag_read_2_reg_2581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        temp_mat_M_imag_d0 = grp_fu_2908_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln263_fu_6017_p2.read())))) {
        temp_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln274_1_fu_6175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_5_reg_7992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4483_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4448_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_fu_4235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_1_reg_6781.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3311_p1.read());
    } else {
        temp_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()))) {
        temp_mat_M_real_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        temp_mat_M_real_d0 = complex_M_real_read_2_reg_2594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        temp_mat_M_real_d0 = grp_fu_2902_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln263_fu_6017_p2.read())))) {
        temp_mat_M_real_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_theta_address0() {
    theta_address0 =  (sc_lv<9>) (zext_ln254_fu_5100_p1.read());
}

void music::thread_theta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read())) {
        theta_ce0 = ap_const_logic_1;
    } else {
        theta_ce0 = ap_const_logic_0;
    }
}

void music::thread_tmp_22_fu_4885_p4() {
    tmp_22_fu_4885_p4 = bitcast_ln87_fu_4881_p1.read().range(30, 23);
}

void music::thread_tmp_24_fu_4903_p4() {
    tmp_24_fu_4903_p4 = bitcast_ln87_1_fu_4899_p1.read().range(30, 23);
}

void music::thread_tmp_26_fu_3195_p3() {
    tmp_26_fu_3195_p3 = esl_concat<4,2>(phi_ln204_reg_1751.read(), phi_ln204_1_reg_1763.read());
}

void music::thread_tmp_33_fu_3812_p3() {
    tmp_33_fu_3812_p3 = esl_concat<4,2>(l26_0_reg_2055.read(), ap_const_lv2_0);
}

void music::thread_tmp_34_fu_3837_p3() {
    tmp_34_fu_3837_p3 = esl_concat<14,2>(add_ln234_fu_3832_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_35_fu_3488_p3() {
    tmp_35_fu_3488_p3 = esl_concat<14,2>(add_ln218_fu_3483_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_36_fu_3934_p3() {
    tmp_36_fu_3934_p3 = esl_concat<3,2>(x_0_i_reg_2077.read(), ap_const_lv2_0);
}

void music::thread_tmp_38_fu_3989_p3() {
    tmp_38_fu_3989_p3 = esl_concat<4,2>(l_0_i_reg_2123.read(), ap_const_lv2_0);
}

void music::thread_tmp_39_fu_3729_p3() {
    tmp_39_fu_3729_p3 = esl_concat<14,2>(add_ln223_fu_3724_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_40_fu_3155_p4() {
    tmp_40_fu_3155_p4 = data_im.read().range(31, 2);
}

void music::thread_tmp_41_fu_3169_p4() {
    tmp_41_fu_3169_p4 = data_re.read().range(31, 2);
}

void music::thread_tmp_42_fu_3233_p3() {
    tmp_42_fu_3233_p3 = esl_concat<2,2>(phi_ln205_reg_1774.read(), phi_ln205_1_reg_1786.read());
}

void music::thread_tmp_43_fu_4202_p3() {
    tmp_43_fu_4202_p3 = esl_concat<3,2>(i_0_i25_reg_2226.read(), ap_const_lv2_0);
}

void music::thread_tmp_44_fu_4370_p3() {
    tmp_44_fu_4370_p3 = esl_concat<3,2>(count_0_i_reg_2318.read(), ap_const_lv2_0);
}

void music::thread_tmp_45_fu_4265_p3() {
    tmp_45_fu_4265_p3 = esl_concat<3,2>(i17_0_i_reg_2259.read(), ap_const_lv2_0);
}

void music::thread_tmp_46_fu_4430_p3() {
    tmp_46_fu_4430_p3 = esl_concat<3,2>(i19_0_i_reg_2330.read(), ap_const_lv2_0);
}

void music::thread_tmp_47_fu_4519_p3() {
    tmp_47_fu_4519_p3 = esl_concat<2,2>(j_14_reg_2353.read(), ap_const_lv2_0);
}

void music::thread_tmp_48_fu_4505_p3() {
    tmp_48_fu_4505_p3 = esl_concat<2,2>(j_14_reg_2353.read(), j_14_reg_2353.read());
}

void music::thread_tmp_49_fu_4320_p3() {
    tmp_49_fu_4320_p3 = esl_concat<3,2>(k_0_i_reg_2307.read(), ap_const_lv2_0);
}

void music::thread_tmp_50_fu_4980_p3() {
    tmp_50_fu_4980_p3 = esl_concat<3,2>(x_0_reg_2503.read(), ap_const_lv2_0);
}

void music::thread_tmp_51_fu_4992_p3() {
    tmp_51_fu_4992_p3 = esl_concat<3,1>(x_0_reg_2503.read(), ap_const_lv1_0);
}

void music::thread_tmp_52_fu_5012_p3() {
    tmp_52_fu_5012_p3 = esl_concat<60,4>(ap_const_lv60_0, or_ln246_fu_5006_p2.read());
}

void music::thread_tmp_53_fu_4648_p3() {
    tmp_53_fu_4648_p3 = esl_concat<3,2>(m_0_i_reg_2404.read(), ap_const_lv2_0);
}

void music::thread_tmp_54_fu_3271_p3() {
    tmp_54_fu_3271_p3 = esl_concat<2,1>(phi_ln206_reg_1797.read(), phi_ln206_1_reg_1809.read());
}

void music::thread_tmp_55_fu_4783_p3() {
    tmp_55_fu_4783_p3 = esl_concat<3,2>(i25_0_i_reg_2449.read(), ap_const_lv2_0);
}

void music::thread_tmp_56_fu_3303_p3() {
    tmp_56_fu_3303_p3 = esl_concat<2,2>(phi_ln207_reg_1820.read(), phi_ln207_1_reg_1832.read());
}

void music::thread_tmp_57_fu_4574_p3() {
    tmp_57_fu_4574_p3 = esl_concat<32,2>(j_11_fu_4558_p2.read(), j_14_reg_2353.read());
}

void music::thread_tmp_58_fu_5954_p3() {
    tmp_58_fu_5954_p3 = esl_concat<3,1>(i_0_reg_2559.read(), ap_const_lv1_0);
}

void music::thread_tmp_59_fu_5966_p3() {
    tmp_59_fu_5966_p3 = esl_concat<3,2>(i_0_reg_2559.read(), ap_const_lv2_0);
}

void music::thread_tmp_62_fu_6086_p3() {
    tmp_62_fu_6086_p3 = esl_concat<9,2>(i31_0_reg_2618.read(), ap_const_lv2_0);
}

void music::thread_tmp_63_fu_5994_p3() {
    tmp_63_fu_5994_p3 = esl_concat<3,1>(j30_0_reg_2570.read(), ap_const_lv1_0);
}

void music::thread_tmp_64_fu_6216_p3() {
    tmp_64_fu_6216_p3 = esl_concat<9,2>(i34_0_reg_2688.read(), ap_const_lv2_0);
}

void music::thread_tmp_65_fu_6141_p3() {
    tmp_65_fu_6141_p3 = esl_concat<3,2>(k33_0_reg_2666.read(), ap_const_lv2_0);
}

void music::thread_tmp_66_fu_3341_p3() {
    tmp_66_fu_3341_p3 = esl_concat<9,2>(phi_ln208_reg_1843.read(), phi_ln208_1_reg_1855.read());
}

void music::thread_tmp_67_fu_4050_p3() {
    tmp_67_fu_4050_p3 = esl_concat<2,2>(phi_ln11_reg_2134.read(), phi_ln11_1_reg_2146.read());
}

void music::thread_tmp_68_fu_3664_p4() {
    tmp_68_fu_3664_p4 = i_0_i_reg_2024.read().range(31, 10);
}

void music::thread_tmp_69_fu_4088_p3() {
    tmp_69_fu_4088_p3 = esl_concat<2,2>(phi_ln12_reg_2157.read(), phi_ln12_1_reg_2169.read());
}

void music::thread_tmp_70_fu_4126_p3() {
    tmp_70_fu_4126_p3 = esl_concat<2,2>(phi_ln13_reg_2180.read(), phi_ln13_1_reg_2192.read());
}

void music::thread_tmp_71_fu_4164_p3() {
    tmp_71_fu_4164_p3 = esl_concat<2,2>(phi_ln14_reg_2203.read(), phi_ln14_1_reg_2215.read());
}

void music::thread_tmp_72_fu_4636_p3() {
    tmp_72_fu_4636_p3 = m_0_i_reg_2404.read().range(2, 2);
}

void music::thread_tmp_V_4_fu_5137_p1() {
    tmp_V_4_fu_5137_p1 = p_Val2_s_fu_5115_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_5_fu_5732_p4() {
    tmp_V_5_fu_5732_p4 = p_Val2_65_fu_5720_p1.read().range(62, 52);
}

void music::thread_tmp_V_6_fu_5742_p1() {
    tmp_V_6_fu_5742_p1 = p_Val2_65_fu_5720_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_fu_5127_p4() {
    tmp_V_fu_5127_p4 = p_Val2_s_fu_5115_p1.read().range(62, 52);
}

void music::thread_tmp_i_i_i1_fu_5301_p3() {
    tmp_i_i_i1_fu_5301_p3 = esl_cttz<64,64>(p_Result_52_fu_5293_p3.read());
}

void music::thread_trunc_ln108_fu_3530_p1() {
    trunc_ln108_fu_3530_p1 = input_assign_reg_1946.read().range(10-1, 0);
}

void music::thread_trunc_ln110_fu_3566_p1() {
    trunc_ln110_fu_3566_p1 = p_0_i_i_i_reg_1980.read().range(1-1, 0);
}

void music::thread_trunc_ln111_fu_3562_p1() {
    trunc_ln111_fu_3562_p1 = reversed_reg_1958.read().range(31-1, 0);
}

void music::thread_trunc_ln54_fu_4537_p1() {
    trunc_ln54_fu_4537_p1 = j22_0_i_reg_2365.read().range(6-1, 0);
}

void music::thread_trunc_ln57_fu_4570_p1() {
    trunc_ln57_fu_4570_p1 = j_11_fu_4558_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln59_fu_4601_p1() {
    trunc_ln59_fu_4601_p1 = q_0_i_reg_2383.read().range(6-1, 0);
}

void music::thread_trunc_ln601_fu_5176_p1() {
    trunc_ln601_fu_5176_p1 = addr_V_fu_5153_p3.read().range(7-1, 0);
}

void music::thread_trunc_ln68_1_fu_4710_p1() {
    trunc_ln68_1_fu_4710_p1 = j_10_fu_4683_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln68_fu_4695_p1() {
    trunc_ln68_fu_4695_p1 = j_10_fu_4683_p2.read().range(6-1, 0);
}

void music::thread_trunc_ln745_fu_5250_p1() {
    trunc_ln745_fu_5250_p1 = p_Val2_70_fu_5244_p3.read().range(1-1, 0);
}

void music::thread_trunc_ln87_1_fu_4913_p1() {
    trunc_ln87_1_fu_4913_p1 = bitcast_ln87_1_fu_4899_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln87_fu_4895_p1() {
    trunc_ln87_fu_4895_p1 = bitcast_ln87_fu_4881_p1.read().range(23-1, 0);
}

void music::thread_ush_fu_5379_p3() {
    ush_fu_5379_p3 = (!isNeg_reg_7724.read()[0].is_01())? sc_lv<12>(): ((isNeg_reg_7724.read()[0].to_bool())? sub_ln1311_fu_5373_p2.read(): sext_ln1334_fu_5370_p1.read());
}

void music::thread_w_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read())) {
        w_M_imag_address0 = w_M_imag_addr_1_reg_8220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        w_M_imag_address0 =  (sc_lv<9>) (zext_ln283_reg_8166.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_imag_address0 =  (sc_lv<9>) (zext_ln209_fu_3373_p1.read());
    } else {
        w_M_imag_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()))) {
        w_M_imag_ce0 = ap_const_logic_1;
    } else {
        w_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read())) {
        w_M_imag_d0 = reg_3023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_imag_d0 = ap_const_lv32_0;
    } else {
        w_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_w_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()))) {
        w_M_imag_we0 = ap_const_logic_1;
    } else {
        w_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_w_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln290_fu_6284_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read())) {
        w_M_real_address0 = w_M_real_addr_2_reg_8215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln283_reg_8166.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln209_fu_3373_p1.read());
    } else {
        w_M_real_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()))) {
        w_M_real_ce0 = ap_const_logic_1;
    } else {
        w_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read())) {
        w_M_real_d0 = reg_2966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_real_d0 = ap_const_lv32_0;
    } else {
        w_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_w_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state520.read()))) {
        w_M_real_we0 = ap_const_logic_1;
    } else {
        w_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_x_1_fu_4974_p2() {
    x_1_fu_4974_p2 = (!x_0_reg_2503.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_2503.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_2_fu_5077_p2() {
    x_2_fu_5077_p2 = (!x28_0_reg_2525.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x28_0_reg_2525.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_fu_3924_p2() {
    x_fu_3924_p2 = (!x_0_i_reg_2077.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_i_reg_2077.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_xor_ln1067_fu_4398_p2() {
    xor_ln1067_fu_4398_p2 = (count_0_i_reg_2318.read() ^ ap_const_lv3_4);
}

void music::thread_xor_ln206_fu_3265_p2() {
    xor_ln206_fu_3265_p2 = (phi_ln206_1_reg_1809.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln256_fu_5931_p2() {
    xor_ln256_fu_5931_p2 = (bitcast_ln256_fu_5927_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln300_fu_5861_p2() {
    xor_ln300_fu_5861_p2 = (and_ln300_2_fu_5857_p2.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln311_fu_5839_p2() {
    xor_ln311_fu_5839_p2 = (icmp_ln833_2_reg_7736.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln444_1_fu_4759_p2() {
    xor_ln444_1_fu_4759_p2 = (bitcast_ln444_2_fu_4755_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln444_fu_4743_p2() {
    xor_ln444_fu_4743_p2 = (bitcast_ln444_fu_4739_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_1_fu_6058_p2() {
    xor_ln667_1_fu_6058_p2 = (bitcast_ln667_2_fu_6054_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_2_fu_6184_p2() {
    xor_ln667_2_fu_6184_p2 = (bitcast_ln667_4_fu_6180_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_fu_4026_p2() {
    xor_ln667_fu_4026_p2 = (bitcast_ln667_fu_4023_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_y_1_fu_5094_p2() {
    y_1_fu_5094_p2 = (!y29_0_reg_2548.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(y29_0_reg_2548.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_y_2_fu_5028_p2() {
    y_2_fu_5028_p2 = (!y_0_reg_2514.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_2514.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_y_fu_3952_p2() {
    y_fu_3952_p2 = (!y_0_i_reg_2088.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_i_reg_2088.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_zext_ln1027_10_fu_3403_p1() {
    zext_ln1027_10_fu_3403_p1 = esl_zext<11,9>(phi_ln210_1_reg_1901.read());
}

void music::thread_zext_ln1027_11_fu_3413_p1() {
    zext_ln1027_11_fu_3413_p1 = esl_zext<64,11>(add_ln1027_fu_3407_p2.read());
}

void music::thread_zext_ln1027_2_fu_3241_p1() {
    zext_ln1027_2_fu_3241_p1 = esl_zext<64,4>(tmp_42_fu_3233_p3.read());
}

void music::thread_zext_ln1027_3_fu_3279_p1() {
    zext_ln1027_3_fu_3279_p1 = esl_zext<64,3>(tmp_54_fu_3271_p3.read());
}

void music::thread_zext_ln1027_4_fu_3311_p1() {
    zext_ln1027_4_fu_3311_p1 = esl_zext<64,4>(tmp_56_fu_3303_p3.read());
}

void music::thread_zext_ln1027_5_fu_3349_p1() {
    zext_ln1027_5_fu_3349_p1 = esl_zext<64,11>(tmp_66_fu_3341_p3.read());
}

void music::thread_zext_ln1027_6_fu_4058_p1() {
    zext_ln1027_6_fu_4058_p1 = esl_zext<64,4>(tmp_67_fu_4050_p3.read());
}

void music::thread_zext_ln1027_7_fu_4096_p1() {
    zext_ln1027_7_fu_4096_p1 = esl_zext<64,4>(tmp_69_fu_4088_p3.read());
}

void music::thread_zext_ln1027_8_fu_4134_p1() {
    zext_ln1027_8_fu_4134_p1 = esl_zext<64,4>(tmp_70_fu_4126_p3.read());
}

void music::thread_zext_ln1027_9_fu_4172_p1() {
    zext_ln1027_9_fu_4172_p1 = esl_zext<64,4>(tmp_71_fu_4164_p3.read());
}

void music::thread_zext_ln1027_fu_3203_p1() {
    zext_ln1027_fu_3203_p1 = esl_zext<64,6>(tmp_26_fu_3195_p3.read());
}

void music::thread_zext_ln102_1_fu_4006_p1() {
    zext_ln102_1_fu_4006_p1 = esl_zext<64,7>(add_ln102_fu_4001_p2.read());
}

void music::thread_zext_ln102_2_fu_4017_p1() {
    zext_ln102_2_fu_4017_p1 = esl_zext<64,7>(add_ln102_1_fu_4012_p2.read());
}

void music::thread_zext_ln102_fu_3997_p1() {
    zext_ln102_fu_3997_p1 = esl_zext<7,6>(tmp_38_fu_3989_p3.read());
}

void music::thread_zext_ln1044_1_fu_4378_p1() {
    zext_ln1044_1_fu_4378_p1 = esl_zext<6,5>(tmp_44_fu_4370_p3.read());
}

void music::thread_zext_ln1044_2_fu_4388_p1() {
    zext_ln1044_2_fu_4388_p1 = esl_zext<64,6>(add_ln1044_fu_4382_p2.read());
}

void music::thread_zext_ln1044_fu_4366_p1() {
    zext_ln1044_fu_4366_p1 = esl_zext<6,3>(count_0_i_reg_2318.read());
}

void music::thread_zext_ln104_1_fu_3958_p1() {
    zext_ln104_1_fu_3958_p1 = esl_zext<7,3>(y_0_i_reg_2088.read());
}

void music::thread_zext_ln104_2_fu_3962_p1() {
    zext_ln104_2_fu_3962_p1 = esl_zext<6,3>(y_0_i_reg_2088.read());
}

void music::thread_zext_ln104_3_fu_3971_p1() {
    zext_ln104_3_fu_3971_p1 = esl_zext<64,6>(add_ln104_fu_3966_p2.read());
}

void music::thread_zext_ln104_fu_3930_p1() {
    zext_ln104_fu_3930_p1 = esl_zext<7,3>(x_0_i_reg_2077.read());
}

void music::thread_zext_ln1067_fu_4408_p1() {
    zext_ln1067_fu_4408_p1 = esl_zext<64,4>(sext_ln1067_fu_4404_p1.read());
}

void music::thread_zext_ln108_fu_3534_p1() {
    zext_ln108_fu_3534_p1 = esl_zext<32,11>(input_assign_reg_1946.read());
}

void music::thread_zext_ln112_fu_3588_p1() {
    zext_ln112_fu_3588_p1 = esl_zext<10,9>(input_assign_1_fu_3578_p4.read());
}

void music::thread_zext_ln1146_1_fu_5634_p1() {
    zext_ln1146_1_fu_5634_p1 = esl_zext<49,38>(add_ln1146_1_fu_5628_p2.read());
}

void music::thread_zext_ln1146_fu_5625_p1() {
    zext_ln1146_fu_5625_p1 = esl_zext<38,29>(tmp_61_reg_7875.read());
}

void music::thread_zext_ln1253_fu_5325_p1() {
    zext_ln1253_fu_5325_p1 = esl_zext<124,6>(Mx_zeros_V_reg_7705.read());
}

void music::thread_zext_ln126_fu_3597_p1() {
    zext_ln126_fu_3597_p1 = esl_zext<64,11>(input_assign_reg_1946.read());
}

void music::thread_zext_ln127_fu_3603_p1() {
    zext_ln127_fu_3603_p1 = esl_zext<64,32>(reversed_reg_1958.read());
}

void music::thread_zext_ln1287_fu_5390_p1() {
    zext_ln1287_fu_5390_p1 = esl_zext<63,32>(sext_ln1311_fu_5386_p1.read());
}

void music::thread_zext_ln159_fu_3609_p1() {
    zext_ln159_fu_3609_p1 = esl_zext<11,4>(stage_0_i_reg_1989.read());
}

void music::thread_zext_ln161_fu_3625_p1() {
    zext_ln161_fu_3625_p1 = esl_zext<32,11>(DFTpts_fu_3619_p2.read());
}

void music::thread_zext_ln209_fu_3373_p1() {
    zext_ln209_fu_3373_p1 = esl_zext<64,9>(phi_ln209_reg_1866.read());
}

void music::thread_zext_ln217_1_fu_3463_p1() {
    zext_ln217_1_fu_3463_p1 = esl_zext<17,3>(n_0_reg_1923.read());
}

void music::thread_zext_ln217_fu_3467_p1() {
    zext_ln217_fu_3467_p1 = esl_zext<14,11>(j_0_reg_1934.read());
}

void music::thread_zext_ln218_1_fu_3505_p1() {
    zext_ln218_1_fu_3505_p1 = esl_zext<31,17>(add_ln218_1_fu_3500_p2.read());
}

void music::thread_zext_ln218_2_fu_3524_p1() {
    zext_ln218_2_fu_3524_p1 = esl_zext<64,11>(j_0_reg_1934.read());
}

void music::thread_zext_ln218_3_fu_3514_p1() {
    zext_ln218_3_fu_3514_p1 = esl_zext<64,31>(add_ln218_2_reg_6444.read());
}

void music::thread_zext_ln218_fu_3496_p1() {
    zext_ln218_fu_3496_p1 = esl_zext<17,16>(tmp_35_fu_3488_p3.read());
}

void music::thread_zext_ln21_fu_4210_p1() {
    zext_ln21_fu_4210_p1 = esl_zext<6,5>(tmp_43_fu_4202_p3.read());
}

void music::thread_zext_ln222_fu_3702_p1() {
    zext_ln222_fu_3702_p1 = esl_zext<14,11>(j25_0_reg_2033.read());
}

void music::thread_zext_ln223_1_fu_3737_p1() {
    zext_ln223_1_fu_3737_p1 = esl_zext<17,16>(tmp_39_fu_3729_p3.read());
}

void music::thread_zext_ln223_2_fu_3746_p1() {
    zext_ln223_2_fu_3746_p1 = esl_zext<31,17>(add_ln223_1_fu_3741_p2.read());
}

void music::thread_zext_ln223_3_fu_3755_p1() {
    zext_ln223_3_fu_3755_p1 = esl_zext<64,31>(add_ln223_2_reg_6637.read());
}

void music::thread_zext_ln223_fu_3718_p1() {
    zext_ln223_fu_3718_p1 = esl_zext<64,11>(j25_0_reg_2033.read());
}

void music::thread_zext_ln224_fu_3769_p1() {
    zext_ln224_fu_3769_p1 = esl_zext<64,31>(add_ln224_reg_6653.read());
}

void music::thread_zext_ln229_fu_3779_p1() {
    zext_ln229_fu_3779_p1 = esl_zext<14,11>(jj_0_reg_2044.read());
}

void music::thread_zext_ln22_1_fu_4235_p1() {
    zext_ln22_1_fu_4235_p1 = esl_zext<64,6>(add_ln22_fu_4230_p2.read());
}

void music::thread_zext_ln22_fu_4226_p1() {
    zext_ln22_fu_4226_p1 = esl_zext<6,3>(j_0_i26_reg_2237.read());
}

void music::thread_zext_ln230_fu_3795_p1() {
    zext_ln230_fu_3795_p1 = esl_zext<64,11>(jj_0_reg_2044.read());
}

void music::thread_zext_ln232_fu_3845_p1() {
    zext_ln232_fu_3845_p1 = esl_zext<17,16>(tmp_34_fu_3837_p3.read());
}

void music::thread_zext_ln234_1_fu_3861_p1() {
    zext_ln234_1_fu_3861_p1 = esl_zext<7,3>(n27_0_reg_2066.read());
}

void music::thread_zext_ln234_2_fu_3865_p1() {
    zext_ln234_2_fu_3865_p1 = esl_zext<17,3>(n27_0_reg_2066.read());
}

void music::thread_zext_ln234_3_fu_3874_p1() {
    zext_ln234_3_fu_3874_p1 = esl_zext<31,17>(add_ln234_1_fu_3869_p2.read());
}

void music::thread_zext_ln234_4_fu_3893_p1() {
    zext_ln234_4_fu_3893_p1 = esl_zext<64,31>(add_ln234_2_reg_6713.read());
}

void music::thread_zext_ln234_5_fu_3913_p1() {
    zext_ln234_5_fu_3913_p1 = esl_zext<64,7>(add_ln234_3_reg_6723.read());
}

void music::thread_zext_ln234_fu_3820_p1() {
    zext_ln234_fu_3820_p1 = esl_zext<7,6>(tmp_33_fu_3812_p3.read());
}

void music::thread_zext_ln235_fu_3903_p1() {
    zext_ln235_fu_3903_p1 = esl_zext<64,31>(add_ln235_reg_6718.read());
}

void music::thread_zext_ln243_fu_5034_p1() {
    zext_ln243_fu_5034_p1 = esl_zext<64,3>(y_0_reg_2514.read());
}

void music::thread_zext_ln244_1_fu_5000_p1() {
    zext_ln244_1_fu_5000_p1 = esl_zext<64,4>(tmp_51_fu_4992_p3.read());
}

void music::thread_zext_ln244_2_fu_5039_p1() {
    zext_ln244_2_fu_5039_p1 = esl_zext<6,3>(y_0_reg_2514.read());
}

void music::thread_zext_ln244_3_fu_5048_p1() {
    zext_ln244_3_fu_5048_p1 = esl_zext<64,6>(add_ln244_reg_7548.read());
}

void music::thread_zext_ln244_fu_4988_p1() {
    zext_ln244_fu_4988_p1 = esl_zext<6,5>(tmp_50_fu_4980_p3.read());
}

void music::thread_zext_ln252_fu_5083_p1() {
    zext_ln252_fu_5083_p1 = esl_zext<64,3>(x28_0_reg_2525.read());
}

void music::thread_zext_ln254_fu_5100_p1() {
    zext_ln254_fu_5100_p1 = esl_zext<64,9>(y29_0_reg_2548.read());
}

void music::thread_zext_ln255_1_fu_5922_p1() {
    zext_ln255_1_fu_5922_p1 = esl_zext<64,11>(add_ln255_reg_7607.read());
}

void music::thread_zext_ln255_fu_5105_p1() {
    zext_ln255_fu_5105_p1 = esl_zext<11,9>(y29_0_reg_2548.read());
}

void music::thread_zext_ln260_fu_5974_p1() {
    zext_ln260_fu_5974_p1 = esl_zext<6,5>(tmp_59_fu_5966_p3.read());
}

void music::thread_zext_ln264_1_fu_6029_p1() {
    zext_ln264_1_fu_6029_p1 = esl_zext<5,2>(k_0_reg_2607.read());
}

void music::thread_zext_ln264_2_fu_6049_p1() {
    zext_ln264_2_fu_6049_p1 = esl_zext<64,5>(add_ln264_reg_8010.read());
}

void music::thread_zext_ln264_3_fu_6043_p1() {
    zext_ln264_3_fu_6043_p1 = esl_zext<64,5>(add_ln264_1_fu_6038_p2.read());
}

void music::thread_zext_ln264_fu_5990_p1() {
    zext_ln264_fu_5990_p1 = esl_zext<6,3>(j30_0_reg_2570.read());
}

void music::thread_zext_ln266_1_fu_6002_p1() {
    zext_ln266_1_fu_6002_p1 = esl_zext<5,4>(tmp_63_fu_5994_p3.read());
}

void music::thread_zext_ln266_2_fu_6011_p1() {
    zext_ln266_2_fu_6011_p1 = esl_zext<64,6>(add_ln266_fu_6006_p2.read());
}

void music::thread_zext_ln266_fu_5962_p1() {
    zext_ln266_fu_5962_p1 = esl_zext<5,4>(tmp_58_fu_5954_p3.read());
}

void music::thread_zext_ln270_fu_6094_p1() {
    zext_ln270_fu_6094_p1 = esl_zext<12,11>(tmp_62_fu_6086_p3.read());
}

void music::thread_zext_ln274_1_fu_6175_p1() {
    zext_ln274_1_fu_6175_p1 = esl_zext<64,6>(add_ln274_reg_8112.read());
}

void music::thread_zext_ln274_2_fu_6169_p1() {
    zext_ln274_2_fu_6169_p1 = esl_zext<64,11>(add_ln274_1_fu_6164_p2.read());
}

void music::thread_zext_ln274_fu_6149_p1() {
    zext_ln274_fu_6149_p1 = esl_zext<6,5>(tmp_65_fu_6141_p3.read());
}

}

