#include "music.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void music::thread_AUU_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln278_3_fu_6183_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        AUU_M_imag_address0 = AUU_M_imag_addr_2_reg_7853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3293_p1.read());
    } else {
        AUU_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()))) {
        AUU_M_imag_ce0 = ap_const_logic_1;
    } else {
        AUU_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        AUU_M_imag_d0 = complex_M_imag_read_3_reg_2595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_d0 = ap_const_lv32_0;
    } else {
        AUU_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln268_fu_6062_p2.read())))) {
        AUU_M_imag_we0 = ap_const_logic_1;
    } else {
        AUU_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln278_3_fu_6183_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        AUU_M_real_address0 = AUU_M_real_addr_2_reg_7848.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3293_p1.read());
    } else {
        AUU_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()))) {
        AUU_M_real_ce0 = ap_const_logic_1;
    } else {
        AUU_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        AUU_M_real_d0 = complex_M_real_read_3_reg_2608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_d0 = ap_const_lv32_0;
    } else {
        AUU_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln268_fu_6062_p2.read())))) {
        AUU_M_real_we0 = ap_const_logic_1;
    } else {
        AUU_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln102_2_fu_3934_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln230_6_fu_3830_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln1027_fu_3147_p1.read());
    } else {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_address1() {
    Autocorr_Buffer_M_i_address1 =  (sc_lv<6>) (zext_ln102_1_fu_3923_p1.read());
}

void music::thread_Autocorr_Buffer_M_i_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()))) {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        Autocorr_Buffer_M_i_d0 = Xj_f_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_i_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()))) {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln102_2_fu_3934_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln230_6_fu_3830_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln1027_fu_3147_p1.read());
    } else {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_address1() {
    Autocorr_Buffer_M_r_address1 =  (sc_lv<6>) (zext_ln102_1_fu_3923_p1.read());
}

void music::thread_Autocorr_Buffer_M_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()))) {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        Autocorr_Buffer_M_r_d0 = Xj_f_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_r_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()))) {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_0;
    }
}

void music::thread_B_V_fu_5343_p1() {
    B_V_fu_5343_p1 = r_V_36_fu_5326_p3.read().range(56-1, 0);
}

void music::thread_B_trunc_V_fu_5347_p4() {
    B_trunc_V_fu_5347_p4 = r_V_36_fu_5326_p3.read().range(55, 7);
}

void music::thread_DFTpts_fu_3553_p2() {
    DFTpts_fu_3553_p2 = (!zext_ln159_fu_3543_p1.read().is_01())? sc_lv<11>(): ap_const_lv11_1 << (unsigned short)zext_ln159_fu_3543_p1.read().to_uint();
}

void music::thread_Ex_V_fu_5268_p2() {
    Ex_V_fu_5268_p2 = (!select_ln482_fu_5167_p3.read().is_01() || !zext_ln655_fu_5264_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(select_ln482_fu_5167_p3.read()) - sc_biguint<11>(zext_ln655_fu_5264_p1.read()));
}

void music::thread_FFT_Buffer_im_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln219_fu_3647_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_5_reg_6527.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_2_reg_6432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln126_fu_3531_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln214_2_fu_3458_p1.read());
    } else {
        FFT_Buffer_im_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_5_reg_6527.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_4_reg_6516.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (sext_ln182_fu_3618_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_1_reg_6426.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (zext_ln127_fu_3537_p1.read());
    } else {
        FFT_Buffer_im_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        FFT_Buffer_im_ce0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_im_ce1 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        FFT_Buffer_im_d0 = temp_1_reg_6443.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_im_d0 = ap_const_lv32_0;
    } else {
        FFT_Buffer_im_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_im_d1 = grp_fu_2765_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_im_d1 = FFT_Buffer_im_q1.read();
    } else {
        FFT_Buffer_im_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln124_reg_6410.read())))) {
        FFT_Buffer_im_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_im_we1 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln219_fu_3647_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_5_reg_6521.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_2_reg_6420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln126_fu_3531_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln214_2_fu_3458_p1.read());
    } else {
        FFT_Buffer_re_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_5_reg_6521.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_4_reg_6511.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (sext_ln182_fu_3618_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_1_reg_6414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (zext_ln127_fu_3537_p1.read());
    } else {
        FFT_Buffer_re_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        FFT_Buffer_re_ce0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_re_ce1 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        FFT_Buffer_re_d0 = temp_reg_6438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_re_d0 = X_q0.read();
    } else {
        FFT_Buffer_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_re_d1 = grp_fu_2760_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_re_d1 = FFT_Buffer_re_q1.read();
    } else {
        FFT_Buffer_re_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln124_reg_6410.read())))) {
        FFT_Buffer_re_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_re_we1 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we1 = ap_const_logic_0;
    }
}

void music::thread_Mx_bits_V_2_fu_5184_p2() {
    Mx_bits_V_2_fu_5184_p2 = (!ap_const_lv124_0.is_01() || !p_Val2_69_reg_7546.read().is_01())? sc_lv<124>(): (sc_biguint<124>(ap_const_lv124_0) - sc_biguint<124>(p_Val2_69_reg_7546.read()));
}

void music::thread_Mx_zeros_V_fu_5240_p1() {
    Mx_zeros_V_fu_5240_p1 = tmp_i_i_i1_fu_5232_p3.read().range(6-1, 0);
}

void music::thread_P_sm_address0() {
    P_sm_address0 =  (sc_lv<9>) (zext_ln285_reg_8015.read());
}

void music::thread_P_sm_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read())) {
        P_sm_ce0 = ap_const_logic_1;
    } else {
        P_sm_ce0 = ap_const_logic_0;
    }
}

void music::thread_P_sm_d0() {
    P_sm_d0 = reg_3021.read();
}

void music::thread_P_sm_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read())) {
        P_sm_we0 = ap_const_logic_1;
    } else {
        P_sm_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_2_fu_4255_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_3976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_address0 = grp_qrf_top_fu_2711_Q_M_imag_address0.read();
    } else {
        Q_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        Q_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_ce0 = grp_qrf_top_fu_2711_Q_M_imag_ce0.read();
    } else {
        Q_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_d0 = grp_qrf_top_fu_2711_Q_M_imag_d0.read();
    } else {
        Q_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_we0 = grp_qrf_top_fu_2711_Q_M_imag_we0.read();
    } else {
        Q_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_2_fu_4255_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_3976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_address0 = grp_qrf_top_fu_2711_Q_M_real_address0.read();
    } else {
        Q_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        Q_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_ce0 = grp_qrf_top_fu_2711_Q_M_real_ce0.read();
    } else {
        Q_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_d0 = grp_qrf_top_fu_2711_Q_M_real_d0.read();
    } else {
        Q_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_we0 = grp_qrf_top_fu_2711_Q_M_real_we0.read();
    } else {
        Q_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_3_fu_4266_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4014_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_address0 = grp_qrf_top_fu_2711_R_M_imag_address0.read();
    } else {
        R_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        R_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_ce0 = grp_qrf_top_fu_2711_R_M_imag_ce0.read();
    } else {
        R_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_d0 = grp_qrf_top_fu_2711_R_M_imag_d0.read();
    } else {
        R_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_we0 = grp_qrf_top_fu_2711_R_M_imag_we0.read();
    } else {
        R_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_3_fu_4266_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4014_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_address0 = grp_qrf_top_fu_2711_R_M_real_address0.read();
    } else {
        R_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        R_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_ce0 = grp_qrf_top_fu_2711_R_M_real_ce0.read();
    } else {
        R_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_d0 = grp_qrf_top_fu_2711_R_M_real_d0.read();
    } else {
        R_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_we0 = grp_qrf_top_fu_2711_R_M_real_we0.read();
    } else {
        R_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4607_p2.read()))) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_5_reg_7157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4607_p2.read()))) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln68_fu_4622_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_8_reg_7134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_fu_4545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4533_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln57_fu_4500_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_4_reg_7068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln54_fu_4464_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4431_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_reg_7013.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_2_reg_6986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4052_p1.read());
    } else {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4607_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4607_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()))) {
        Rx_temp_M_imag_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        Rx_temp_M_imag_d0 = grp_fu_2765_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_imag_d0 = reg_3031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        Rx_temp_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_imag_d0 = reg_3047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_imag_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_7009.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4374_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4386_p2.read())))) {
        Rx_temp_M_imag_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4607_p2.read()))) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_5_reg_7152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4607_p2.read()))) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln68_fu_4622_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_8_reg_7129.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_fu_4545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4533_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln57_fu_4500_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_4_reg_7063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln54_fu_4464_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4431_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_reg_7013.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_2_reg_6981.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4052_p1.read());
    } else {
        Rx_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4607_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4607_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()))) {
        Rx_temp_M_real_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        Rx_temp_M_real_d0 = grp_fu_2760_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_real_d0 = reg_3021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        Rx_temp_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_real_d0 = reg_2950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_real_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_7009.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4374_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4386_p2.read())))) {
        Rx_temp_M_real_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_fu_4971_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_fu_4977_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_fu_4971_p2.read())))) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln239_3_fu_4966_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read())) {
        U_M_imag_address0 = U_M_imag_addr_5_reg_7267.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln76_1_fu_4718_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        U_M_imag_address0 = U_M_imag_addr_3_reg_7167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        U_M_imag_address0 = U_M_imag_addr_2_reg_6958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6808.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3185_p1.read());
    } else {
        U_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_fu_4971_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_fu_4977_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_fu_4971_p2.read())))) {
        U_M_imag_ce0 = ap_const_logic_1;
    } else {
        U_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_imag_d0 = reg_3031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()))) {
        U_M_imag_d0 = ap_const_lv32_0;
    } else {
        U_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4411_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_imag_we0 = ap_const_logic_1;
    } else {
        U_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_fu_4971_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_fu_4977_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_fu_4971_p2.read())))) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln239_3_fu_4966_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read())) {
        U_M_real_address0 = U_M_real_addr_5_reg_7262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln76_1_fu_4718_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        U_M_real_address0 = U_M_real_addr_3_reg_7162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read())) {
        U_M_real_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        U_M_real_address0 = U_M_real_addr_2_reg_6953.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6808.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3185_p1.read());
    } else {
        U_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_fu_4971_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_fu_4977_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_fu_4971_p2.read())))) {
        U_M_real_ce0 = ap_const_logic_1;
    } else {
        U_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_real_d0 = reg_3021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        U_M_real_d0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()))) {
        U_M_real_d0 = ap_const_lv32_0;
    } else {
        U_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4411_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_real_we0 = ap_const_logic_1;
    } else {
        U_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln259_3_fu_5981_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_1_reg_7398.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_2_reg_7403.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3223_p1.read());
    } else {
        Un_M_imag_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_imag_address1() {
    Un_M_imag_address1 =  (sc_lv<3>) (zext_ln259_2_fu_5970_p1.read());
}

void music::thread_Un_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read())))) {
        Un_M_imag_ce0 = ap_const_logic_1;
    } else {
        Un_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        Un_M_imag_ce1 = ap_const_logic_1;
    } else {
        Un_M_imag_ce1 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read())))) {
        Un_M_imag_d0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_d0 = ap_const_lv32_0;
    } else {
        Un_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read())))) {
        Un_M_imag_we0 = ap_const_logic_1;
    } else {
        Un_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln259_3_fu_5981_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read()))) {
        Un_M_real_address0 = Un_M_real_addr_1_reg_7388.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read()))) {
        Un_M_real_address0 = Un_M_real_addr_2_reg_7393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3223_p1.read());
    } else {
        Un_M_real_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_real_address1() {
    Un_M_real_address1 =  (sc_lv<3>) (zext_ln259_2_fu_5970_p1.read());
}

void music::thread_Un_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read())))) {
        Un_M_real_ce0 = ap_const_logic_1;
    } else {
        Un_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        Un_M_real_ce1 = ap_const_logic_1;
    } else {
        Un_M_real_ce1 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read())))) {
        Un_M_real_d0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_d0 = ap_const_lv32_0;
    } else {
        Un_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln238_reg_7436.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln240_reg_7440.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln238_reg_7436.read())))) {
        Un_M_real_we0 = ap_const_logic_1;
    } else {
        Un_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_X_address0() {
    X_address0 =  (sc_lv<16>) (zext_ln214_1_fu_3453_p1.read());
}

void music::thread_X_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        X_ce0 = ap_const_logic_1;
    } else {
        X_ce0 = ap_const_logic_0;
    }
}

void music::thread_Xj_f_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        Xj_f_M_imag_address0 =  (sc_lv<16>) (zext_ln230_5_fu_3819_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        Xj_f_M_imag_address0 =  (sc_lv<16>) (zext_ln219_3_fu_3701_p1.read());
    } else {
        Xj_f_M_imag_address0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void music::thread_Xj_f_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()))) {
        Xj_f_M_imag_ce0 = ap_const_logic_1;
    } else {
        Xj_f_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Xj_f_M_imag_d0() {
    Xj_f_M_imag_d0 = FFT_Buffer_im_q0.read();
}

void music::thread_Xj_f_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        Xj_f_M_imag_we0 = ap_const_logic_1;
    } else {
        Xj_f_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Xj_f_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        Xj_f_M_real_address0 =  (sc_lv<16>) (zext_ln230_5_fu_3819_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        Xj_f_M_real_address0 =  (sc_lv<16>) (zext_ln219_3_fu_3701_p1.read());
    } else {
        Xj_f_M_real_address0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void music::thread_Xj_f_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()))) {
        Xj_f_M_real_ce0 = ap_const_logic_1;
    } else {
        Xj_f_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Xj_f_M_real_d0() {
    Xj_f_M_real_d0 = FFT_Buffer_re_q0.read();
}

void music::thread_Xj_f_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        Xj_f_M_real_we0 = ap_const_logic_1;
    } else {
        Xj_f_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln278_4_fu_6200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln269_2_fu_6108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln250_1_fu_5854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3357_p1.read());
    } else {
        a_theta_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) && 
          esl_seteq<1,1,1>(ap_block_state297_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        a_theta_M_imag_d0 = bitcast_ln251_1_fu_5869_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_imag_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) && 
          esl_seteq<1,1,1>(ap_block_state297_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_we0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln278_4_fu_6200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln269_2_fu_6108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln250_1_fu_5854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3357_p1.read());
    } else {
        a_theta_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) && 
          esl_seteq<1,1,1>(ap_block_state297_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        a_theta_M_real_d0 = grp_sin_or_cos_float_s_fu_2721_ap_return.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_real_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) && 
          esl_seteq<1,1,1>(ap_block_state297_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_we0 = ap_const_logic_1;
    } else {
        a_theta_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_add_ln1027_fu_3351_p2() {
    add_ln1027_fu_3351_p2 = (!phi_mul_reg_1843.read().is_01() || !zext_ln1027_10_fu_3347_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1843.read()) + sc_biguint<11>(zext_ln1027_10_fu_3347_p1.read()));
}

void music::thread_add_ln102_1_fu_3929_p2() {
    add_ln102_1_fu_3929_p2 = (!zext_ln104_1_reg_6651.read().is_01() || !zext_ln102_fu_3914_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln104_1_reg_6651.read()) + sc_biguint<7>(zext_ln102_fu_3914_p1.read()));
}

void music::thread_add_ln102_fu_3918_p2() {
    add_ln102_fu_3918_p2 = (!zext_ln104_reg_6633.read().is_01() || !zext_ln102_fu_3914_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln104_reg_6633.read()) + sc_biguint<7>(zext_ln102_fu_3914_p1.read()));
}

void music::thread_add_ln1044_fu_4300_p2() {
    add_ln1044_fu_4300_p2 = (!zext_ln1044_fu_4284_p1.read().is_01() || !zext_ln1044_1_fu_4296_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_fu_4284_p1.read()) + sc_biguint<6>(zext_ln1044_1_fu_4296_p1.read()));
}

void music::thread_add_ln104_fu_3883_p2() {
    add_ln104_fu_3883_p2 = (!zext_ln99_reg_6638.read().is_01() || !zext_ln104_2_fu_3879_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln99_reg_6638.read()) + sc_biguint<6>(zext_ln104_2_fu_3879_p1.read()));
}

void music::thread_add_ln1146_1_fu_5554_p2() {
    add_ln1146_1_fu_5554_p2 = (!zext_ln662_fu_5523_p1.read().is_01() || !zext_ln1146_fu_5550_p1.read().is_01())? sc_lv<38>(): (sc_biguint<38>(zext_ln662_fu_5523_p1.read()) + sc_biguint<38>(zext_ln1146_fu_5550_p1.read()));
}

void music::thread_add_ln1146_2_fu_5586_p2() {
    add_ln1146_2_fu_5586_p2 = (!zext_ln1146_1_fu_5583_p1.read().is_01() || !sext_ln657_fu_5574_p1.read().is_01())? sc_lv<49>(): (sc_biguint<49>(zext_ln1146_1_fu_5583_p1.read()) + sc_bigint<49>(sext_ln657_fu_5574_p1.read()));
}

void music::thread_add_ln1146_fu_5577_p2() {
    add_ln1146_fu_5577_p2 = (!lhs_V_2_fu_5567_p1.read().is_01() || !rhs_V_2_fu_5571_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(lhs_V_2_fu_5567_p1.read()) + sc_bigint<64>(rhs_V_2_fu_5571_p1.read()));
}

void music::thread_add_ln114_1_fu_5065_p2() {
    add_ln114_1_fu_5065_p2 = (!ap_const_lv11_44D.is_01() || !tmp_V_fu_5045_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_44D) + sc_biguint<11>(tmp_V_fu_5045_p4.read()));
}

void music::thread_add_ln114_fu_5162_p2() {
    add_ln114_fu_5162_p2 = (!ap_const_lv11_403.is_01() || !tmp_V_reg_7496.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_403) + sc_biguint<11>(tmp_V_reg_7496.read()));
}

void music::thread_add_ln11_1_fu_3962_p2() {
    add_ln11_1_fu_3962_p2 = (!phi_ln11_1_reg_2101.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_1_reg_2101.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln11_fu_3956_p2() {
    add_ln11_fu_3956_p2 = (!phi_ln11_reg_2089.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_reg_2089.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_1_fu_4000_p2() {
    add_ln12_1_fu_4000_p2 = (!phi_ln12_1_reg_2124.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_1_reg_2124.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_fu_3994_p2() {
    add_ln12_fu_3994_p2 = (!phi_ln12_reg_2112.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_reg_2112.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_1_fu_4038_p2() {
    add_ln13_1_fu_4038_p2 = (!phi_ln13_1_reg_2147.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_1_reg_2147.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_fu_4032_p2() {
    add_ln13_fu_4032_p2 = (!phi_ln13_reg_2135.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_reg_2135.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_1_fu_4076_p2() {
    add_ln14_1_fu_4076_p2 = (!phi_ln14_1_reg_2170.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_1_reg_2170.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_fu_4070_p2() {
    add_ln14_fu_4070_p2 = (!phi_ln14_reg_2158.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_reg_2158.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln200_1_fu_3133_p2() {
    add_ln200_1_fu_3133_p2 = (!phi_ln200_1_reg_1717.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln200_1_reg_1717.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln200_fu_3127_p2() {
    add_ln200_fu_3127_p2 = (!phi_ln200_reg_1705.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln200_reg_1705.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_add_ln201_1_fu_3171_p2() {
    add_ln201_1_fu_3171_p2 = (!phi_ln201_1_reg_1740.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln201_1_reg_1740.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln201_fu_3165_p2() {
    add_ln201_fu_3165_p2 = (!phi_ln201_reg_1728.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln201_reg_1728.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln202_fu_3203_p2() {
    add_ln202_fu_3203_p2 = (!phi_ln202_reg_1751.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln202_reg_1751.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln203_1_fu_3241_p2() {
    add_ln203_1_fu_3241_p2 = (!phi_ln203_1_reg_1786.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln203_1_reg_1786.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln203_fu_3235_p2() {
    add_ln203_fu_3235_p2 = (!phi_ln203_reg_1774.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln203_reg_1774.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln204_1_fu_3279_p2() {
    add_ln204_1_fu_3279_p2 = (!phi_ln204_1_reg_1809.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln204_1_reg_1809.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln204_fu_3273_p2() {
    add_ln204_fu_3273_p2 = (!phi_ln204_reg_1797.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln204_reg_1797.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln205_fu_3311_p2() {
    add_ln205_fu_3311_p2 = (!phi_ln205_reg_1820.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln205_reg_1820.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln206_1_fu_3341_p2() {
    add_ln206_1_fu_3341_p2 = (!phi_ln206_1_reg_1855.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln206_1_reg_1855.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln206_2_fu_3329_p2() {
    add_ln206_2_fu_3329_p2 = (!phi_mul_reg_1843.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1843.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln206_fu_3335_p2() {
    add_ln206_fu_3335_p2 = (!phi_ln206_reg_1831.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln206_reg_1831.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln214_1_fu_3448_p2() {
    add_ln214_1_fu_3448_p2 = (!zext_ln213_1_reg_6355.read().is_01() || !zext_ln214_fu_3444_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln213_1_reg_6355.read()) + sc_biguint<17>(zext_ln214_fu_3444_p1.read()));
}

void music::thread_add_ln214_fu_3431_p2() {
    add_ln214_fu_3431_p2 = (!shl_ln_reg_6337.read().is_01() || !zext_ln213_fu_3415_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6337.read()) + sc_biguint<14>(zext_ln213_fu_3415_p1.read()));
}

void music::thread_add_ln219_1_fu_3683_p2() {
    add_ln219_1_fu_3683_p2 = (!add_ln219_fu_3677_p2.read().is_01() || !zext_ln212_reg_6342.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln219_fu_3677_p2.read()) + sc_biguint<15>(zext_ln212_reg_6342.read()));
}

void music::thread_add_ln219_2_fu_3696_p2() {
    add_ln219_2_fu_3696_p2 = (!tmp_45_cast_fu_3688_p3.read().is_01() || !zext_ln213_1_reg_6355.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_45_cast_fu_3688_p3.read()) + sc_biguint<17>(zext_ln213_1_reg_6355.read()));
}

void music::thread_add_ln219_fu_3677_p2() {
    add_ln219_fu_3677_p2 = (!zext_ln219_2_fu_3673_p1.read().is_01() || !zext_ln219_1_fu_3661_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln219_2_fu_3673_p1.read()) + sc_biguint<15>(zext_ln219_1_fu_3661_p1.read()));
}

void music::thread_add_ln22_fu_4148_p2() {
    add_ln22_fu_4148_p2 = (!zext_ln21_reg_6795.read().is_01() || !zext_ln22_fu_4144_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln21_reg_6795.read()) + sc_biguint<6>(zext_ln22_fu_4144_p1.read()));
}

void music::thread_add_ln230_1_fu_3769_p2() {
    add_ln230_1_fu_3769_p2 = (!zext_ln230_2_fu_3765_p1.read().is_01() || !add_ln230_reg_6579.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln230_2_fu_3765_p1.read()) + sc_biguint<15>(add_ln230_reg_6579.read()));
}

void music::thread_add_ln230_2_fu_3814_p2() {
    add_ln230_2_fu_3814_p2 = (!tmp_36_cast_reg_6592.read().is_01() || !zext_ln230_4_fu_3810_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_36_cast_reg_6592.read()) + sc_biguint<17>(zext_ln230_4_fu_3810_p1.read()));
}

void music::thread_add_ln230_3_fu_3825_p2() {
    add_ln230_3_fu_3825_p2 = (!zext_ln228_reg_6597.read().is_01() || !zext_ln230_3_fu_3806_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln228_reg_6597.read()) + sc_biguint<7>(zext_ln230_3_fu_3806_p1.read()));
}

void music::thread_add_ln230_fu_3747_p2() {
    add_ln230_fu_3747_p2 = (!zext_ln230_1_fu_3743_p1.read().is_01() || !zext_ln230_fu_3731_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln230_1_fu_3743_p1.read()) + sc_biguint<15>(zext_ln230_fu_3731_p1.read()));
}

void music::thread_add_ln239_fu_4961_p2() {
    add_ln239_fu_4961_p2 = (!zext_ln239_reg_7383.read().is_01() || !zext_ln239_2_fu_4957_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln239_reg_7383.read()) + sc_biguint<6>(zext_ln239_2_fu_4957_p1.read()));
}

void music::thread_add_ln246_fu_4983_p2() {
    add_ln246_fu_4983_p2 = (!phi_mul5_reg_2491.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul5_reg_2491.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln250_fu_5027_p2() {
    add_ln250_fu_5027_p2 = (!phi_mul5_reg_2491.read().is_01() || !zext_ln250_fu_5023_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul5_reg_2491.read()) + sc_biguint<11>(zext_ln250_fu_5023_p1.read()));
}

void music::thread_add_ln259_1_fu_5976_p2() {
    add_ln259_1_fu_5976_p2 = (!zext_ln261_1_reg_7740.read().is_01() || !zext_ln259_1_fu_5961_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln261_1_reg_7740.read()) + sc_biguint<5>(zext_ln259_1_fu_5961_p1.read()));
}

void music::thread_add_ln259_fu_5965_p2() {
    add_ln259_fu_5965_p2 = (!zext_ln261_reg_7722.read().is_01() || !zext_ln259_1_fu_5961_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln261_reg_7722.read()) + sc_biguint<5>(zext_ln259_1_fu_5961_p1.read()));
}

void music::thread_add_ln261_fu_5938_p2() {
    add_ln261_fu_5938_p2 = (!zext_ln259_fu_5922_p1.read().is_01() || !zext_ln255_reg_7727.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln259_fu_5922_p1.read()) + sc_biguint<6>(zext_ln255_reg_7727.read()));
}

void music::thread_add_ln269_1_fu_6103_p2() {
    add_ln269_1_fu_6103_p2 = (!zext_ln271_reg_7825.read().is_01() || !phi_mul7_reg_2632.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln271_reg_7825.read()) + sc_biguint<11>(phi_mul7_reg_2632.read()));
}

void music::thread_add_ln269_2_fu_6097_p2() {
    add_ln269_2_fu_6097_p2 = (!phi_mul7_reg_2632.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul7_reg_2632.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln269_fu_6086_p2() {
    add_ln269_fu_6086_p2 = (!zext_ln271_1_reg_7843.read().is_01() || !zext_ln269_fu_6082_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln271_1_reg_7843.read()) + sc_biguint<6>(zext_ln269_fu_6082_p1.read()));
}

void music::thread_add_ln271_fu_6051_p2() {
    add_ln271_fu_6051_p2 = (!zext_ln265_reg_7830.read().is_01() || !zext_ln271_2_fu_6047_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln265_reg_7830.read()) + sc_biguint<12>(zext_ln271_2_fu_6047_p1.read()));
}

void music::thread_add_ln278_1_fu_6195_p2() {
    add_ln278_1_fu_6195_p2 = (!phi_mul9_reg_2689.read().is_01() || !zext_ln278_1_reg_7921.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2689.read()) + sc_biguint<11>(zext_ln278_1_reg_7921.read()));
}

void music::thread_add_ln278_2_fu_6189_p2() {
    add_ln278_2_fu_6189_p2 = (!phi_mul9_reg_2689.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2689.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln278_fu_6178_p2() {
    add_ln278_fu_6178_p2 = (!zext_ln277_reg_7926.read().is_01() || !zext_ln278_2_fu_6174_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln277_reg_7926.read()) + sc_biguint<12>(zext_ln278_2_fu_6174_p1.read()));
}

void music::thread_add_ln34_1_fu_4261_p2() {
    add_ln34_1_fu_4261_p2 = (!zext_ln34_fu_4234_p1.read().is_01() || !zext_ln30_reg_6842.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln34_fu_4234_p1.read()) + sc_biguint<6>(zext_ln30_reg_6842.read()));
}

void music::thread_add_ln34_fu_4250_p2() {
    add_ln34_fu_4250_p2 = (!zext_ln36_reg_6856.read().is_01() || !zext_ln34_1_fu_4246_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln36_reg_6856.read()) + sc_biguint<6>(zext_ln34_1_fu_4246_p1.read()));
}

void music::thread_add_ln36_fu_4211_p2() {
    add_ln36_fu_4211_p2 = (!zext_ln30_reg_6842.read().is_01() || !zext_ln36_fu_4207_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln30_reg_6842.read()) + sc_biguint<6>(zext_ln36_fu_4207_p1.read()));
}

void music::thread_add_ln45_fu_4360_p2() {
    add_ln45_fu_4360_p2 = (!zext_ln45_fu_4344_p1.read().is_01() || !zext_ln45_1_fu_4356_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_fu_4344_p1.read()) + sc_biguint<6>(zext_ln45_1_fu_4356_p1.read()));
}

void music::thread_add_ln47_fu_4396_p2() {
    add_ln47_fu_4396_p2 = (!zext_ln45_1_reg_6976.read().is_01() || !zext_ln47_fu_4392_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_1_reg_6976.read()) + sc_biguint<6>(zext_ln47_fu_4392_p1.read()));
}

void music::thread_add_ln54_fu_4459_p2() {
    add_ln54_fu_4459_p2 = (!zext_ln52_reg_7054.read().is_01() || !trunc_ln54_fu_4455_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_7054.read()) + sc_biguint<6>(trunc_ln54_fu_4455_p1.read()));
}

void music::thread_add_ln59_1_fu_4528_p2() {
    add_ln59_1_fu_4528_p2 = (!zext_ln52_reg_7054.read().is_01() || !trunc_ln59_fu_4519_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_7054.read()) + sc_biguint<6>(trunc_ln59_fu_4519_p1.read()));
}

void music::thread_add_ln59_fu_4523_p2() {
    add_ln59_fu_4523_p2 = (!sext_ln57_cast_reg_7101.read().is_01() || !trunc_ln59_fu_4519_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln57_cast_reg_7101.read()) + sc_biguint<6>(trunc_ln59_fu_4519_p1.read()));
}

void music::thread_add_ln68_1_fu_4640_p2() {
    add_ln68_1_fu_4640_p2 = (!sext_ln68_2_cast_fu_4632_p3.read().is_01() || !zext_ln1044_reg_6941.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln68_2_cast_fu_4632_p3.read()) + sc_biguint<6>(zext_ln1044_reg_6941.read()));
}

void music::thread_add_ln68_fu_4617_p2() {
    add_ln68_fu_4617_p2 = (!sext_ln70_reg_7147.read().is_01() || !trunc_ln68_fu_4613_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_reg_7147.read()) + sc_biguint<6>(trunc_ln68_fu_4613_p1.read()));
}

void music::thread_add_ln70_fu_4578_p2() {
    add_ln70_fu_4578_p2 = (!sext_ln70_fu_4574_p1.read().is_01() || !zext_ln68_fu_4562_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4574_p1.read()) + sc_biguint<6>(zext_ln68_fu_4562_p1.read()));
}

void music::thread_add_ln72_fu_4590_p2() {
    add_ln72_fu_4590_p2 = (!sext_ln70_fu_4574_p1.read().is_01() || !zext_ln1044_reg_6941.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4574_p1.read()) + sc_biguint<6>(zext_ln1044_reg_6941.read()));
}

void music::thread_add_ln76_fu_4713_p2() {
    add_ln76_fu_4713_p2 = (!zext_ln1044_reg_6941.read().is_01() || !zext_ln76_fu_4709_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_reg_6941.read()) + sc_biguint<6>(zext_ln76_fu_4709_p1.read()));
}

void music::thread_addr_V_fu_5071_p3() {
    addr_V_fu_5071_p3 = (!closepath_fu_5059_p2.read()[0].is_01())? sc_lv<11>(): ((closepath_fu_5059_p2.read()[0].to_bool())? ap_const_lv11_4A: add_ln114_1_fu_5065_p2.read());
}

void music::thread_and_ln300_2_fu_5792_p2() {
    and_ln300_2_fu_5792_p2 = (icmp_ln833_reg_7582.read() & icmp_ln833_1_reg_7540.read());
}

void music::thread_and_ln300_fu_5763_p2() {
    and_ln300_fu_5763_p2 = (icmp_ln833_reg_7582.read() & icmp_ln833_1_reg_7540.read());
}

void music::thread_and_ln87_1_fu_4873_p2() {
    and_ln87_1_fu_4873_p2 = (and_ln87_fu_4867_p2.read() & grp_fu_2912_p2.read());
}

void music::thread_and_ln87_fu_4867_p2() {
    and_ln87_fu_4867_p2 = (or_ln87_fu_4859_p2.read() & or_ln87_1_fu_4863_p2.read());
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

void music::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void music::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void music::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
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

void music::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[112];
}

void music::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void music::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void music::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void music::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[121];
}

void music::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[122];
}

void music::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[123];
}

void music::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void music::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void music::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void music::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void music::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void music::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void music::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[129];
}

void music::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[130];
}

void music::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[131];
}

void music::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[132];
}

void music::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[133];
}

void music::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[134];
}

void music::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[135];
}

void music::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void music::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[137];
}

void music::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
}

void music::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void music::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[139];
}

void music::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[140];
}

void music::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[141];
}

void music::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[142];
}

void music::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[143];
}

void music::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void music::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
}

void music::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
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

void music::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void music::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void music::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[156];
}

void music::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[157];
}

void music::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[158];
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

void music::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[167];
}

void music::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[168];
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

void music::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void music::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[179];
}

void music::thread_ap_CS_fsm_state181() {
    ap_CS_fsm_state181 = ap_CS_fsm.read()[180];
}

void music::thread_ap_CS_fsm_state182() {
    ap_CS_fsm_state182 = ap_CS_fsm.read()[181];
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

void music::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void music::thread_ap_CS_fsm_state190() {
    ap_CS_fsm_state190 = ap_CS_fsm.read()[189];
}

void music::thread_ap_CS_fsm_state191() {
    ap_CS_fsm_state191 = ap_CS_fsm.read()[190];
}

void music::thread_ap_CS_fsm_state192() {
    ap_CS_fsm_state192 = ap_CS_fsm.read()[191];
}

void music::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[192];
}

void music::thread_ap_CS_fsm_state194() {
    ap_CS_fsm_state194 = ap_CS_fsm.read()[193];
}

void music::thread_ap_CS_fsm_state195() {
    ap_CS_fsm_state195 = ap_CS_fsm.read()[194];
}

void music::thread_ap_CS_fsm_state196() {
    ap_CS_fsm_state196 = ap_CS_fsm.read()[195];
}

void music::thread_ap_CS_fsm_state197() {
    ap_CS_fsm_state197 = ap_CS_fsm.read()[196];
}

void music::thread_ap_CS_fsm_state198() {
    ap_CS_fsm_state198 = ap_CS_fsm.read()[197];
}

void music::thread_ap_CS_fsm_state199() {
    ap_CS_fsm_state199 = ap_CS_fsm.read()[198];
}

void music::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void music::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void music::thread_ap_CS_fsm_state200() {
    ap_CS_fsm_state200 = ap_CS_fsm.read()[199];
}

void music::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[200];
}

void music::thread_ap_CS_fsm_state202() {
    ap_CS_fsm_state202 = ap_CS_fsm.read()[201];
}

void music::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[202];
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

void music::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
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

void music::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void music::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[219];
}

void music::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[220];
}

void music::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[221];
}

void music::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[222];
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

void music::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void music::thread_ap_CS_fsm_state230() {
    ap_CS_fsm_state230 = ap_CS_fsm.read()[229];
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

void music::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
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

void music::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[247];
}

void music::thread_ap_CS_fsm_state249() {
    ap_CS_fsm_state249 = ap_CS_fsm.read()[248];
}

void music::thread_ap_CS_fsm_state250() {
    ap_CS_fsm_state250 = ap_CS_fsm.read()[249];
}

void music::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[256];
}

void music::thread_ap_CS_fsm_state258() {
    ap_CS_fsm_state258 = ap_CS_fsm.read()[257];
}

void music::thread_ap_CS_fsm_state259() {
    ap_CS_fsm_state259 = ap_CS_fsm.read()[258];
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

void music::thread_ap_CS_fsm_state267() {
    ap_CS_fsm_state267 = ap_CS_fsm.read()[266];
}

void music::thread_ap_CS_fsm_state268() {
    ap_CS_fsm_state268 = ap_CS_fsm.read()[267];
}

void music::thread_ap_CS_fsm_state269() {
    ap_CS_fsm_state269 = ap_CS_fsm.read()[268];
}

void music::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void music::thread_ap_CS_fsm_state270() {
    ap_CS_fsm_state270 = ap_CS_fsm.read()[269];
}

void music::thread_ap_CS_fsm_state271() {
    ap_CS_fsm_state271 = ap_CS_fsm.read()[270];
}

void music::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[271];
}

void music::thread_ap_CS_fsm_state273() {
    ap_CS_fsm_state273 = ap_CS_fsm.read()[272];
}

void music::thread_ap_CS_fsm_state274() {
    ap_CS_fsm_state274 = ap_CS_fsm.read()[273];
}

void music::thread_ap_CS_fsm_state275() {
    ap_CS_fsm_state275 = ap_CS_fsm.read()[274];
}

void music::thread_ap_CS_fsm_state276() {
    ap_CS_fsm_state276 = ap_CS_fsm.read()[275];
}

void music::thread_ap_CS_fsm_state277() {
    ap_CS_fsm_state277 = ap_CS_fsm.read()[276];
}

void music::thread_ap_CS_fsm_state280() {
    ap_CS_fsm_state280 = ap_CS_fsm.read()[279];
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

void music::thread_ap_CS_fsm_state286() {
    ap_CS_fsm_state286 = ap_CS_fsm.read()[285];
}

void music::thread_ap_CS_fsm_state287() {
    ap_CS_fsm_state287 = ap_CS_fsm.read()[286];
}

void music::thread_ap_CS_fsm_state288() {
    ap_CS_fsm_state288 = ap_CS_fsm.read()[287];
}

void music::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[288];
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

void music::thread_ap_CS_fsm_state300() {
    ap_CS_fsm_state300 = ap_CS_fsm.read()[299];
}

void music::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[300];
}

void music::thread_ap_CS_fsm_state302() {
    ap_CS_fsm_state302 = ap_CS_fsm.read()[301];
}

void music::thread_ap_CS_fsm_state303() {
    ap_CS_fsm_state303 = ap_CS_fsm.read()[302];
}

void music::thread_ap_CS_fsm_state304() {
    ap_CS_fsm_state304 = ap_CS_fsm.read()[303];
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

void music::thread_ap_CS_fsm_state317() {
    ap_CS_fsm_state317 = ap_CS_fsm.read()[316];
}

void music::thread_ap_CS_fsm_state318() {
    ap_CS_fsm_state318 = ap_CS_fsm.read()[317];
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

void music::thread_ap_CS_fsm_state326() {
    ap_CS_fsm_state326 = ap_CS_fsm.read()[325];
}

void music::thread_ap_CS_fsm_state327() {
    ap_CS_fsm_state327 = ap_CS_fsm.read()[326];
}

void music::thread_ap_CS_fsm_state328() {
    ap_CS_fsm_state328 = ap_CS_fsm.read()[327];
}

void music::thread_ap_CS_fsm_state329() {
    ap_CS_fsm_state329 = ap_CS_fsm.read()[328];
}

void music::thread_ap_CS_fsm_state330() {
    ap_CS_fsm_state330 = ap_CS_fsm.read()[329];
}

void music::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[330];
}

void music::thread_ap_CS_fsm_state332() {
    ap_CS_fsm_state332 = ap_CS_fsm.read()[331];
}

void music::thread_ap_CS_fsm_state333() {
    ap_CS_fsm_state333 = ap_CS_fsm.read()[332];
}

void music::thread_ap_CS_fsm_state334() {
    ap_CS_fsm_state334 = ap_CS_fsm.read()[333];
}

void music::thread_ap_CS_fsm_state335() {
    ap_CS_fsm_state335 = ap_CS_fsm.read()[334];
}

void music::thread_ap_CS_fsm_state336() {
    ap_CS_fsm_state336 = ap_CS_fsm.read()[335];
}

void music::thread_ap_CS_fsm_state337() {
    ap_CS_fsm_state337 = ap_CS_fsm.read()[336];
}

void music::thread_ap_CS_fsm_state338() {
    ap_CS_fsm_state338 = ap_CS_fsm.read()[337];
}

void music::thread_ap_CS_fsm_state339() {
    ap_CS_fsm_state339 = ap_CS_fsm.read()[338];
}

void music::thread_ap_CS_fsm_state340() {
    ap_CS_fsm_state340 = ap_CS_fsm.read()[339];
}

void music::thread_ap_CS_fsm_state341() {
    ap_CS_fsm_state341 = ap_CS_fsm.read()[340];
}

void music::thread_ap_CS_fsm_state342() {
    ap_CS_fsm_state342 = ap_CS_fsm.read()[341];
}

void music::thread_ap_CS_fsm_state349() {
    ap_CS_fsm_state349 = ap_CS_fsm.read()[348];
}

void music::thread_ap_CS_fsm_state350() {
    ap_CS_fsm_state350 = ap_CS_fsm.read()[349];
}

void music::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void music::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void music::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void music::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void music::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void music::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void music::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void music::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void music::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void music::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void music::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void music::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void music::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void music::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void music::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void music::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void music::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void music::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void music::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void music::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void music::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void music::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void music::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void music::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void music::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void music::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void music::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
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

void music::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void music::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void music::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void music::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
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

void music::thread_ap_block_state136_on_subcall_done() {
    ap_block_state136_on_subcall_done = esl_seteq<1,1,1>(ap_const_logic_0, (ap_sync_grp_qrf_top_fu_2711_ap_ready.read() & ap_sync_grp_qrf_top_fu_2711_ap_done.read()));
}

void music::thread_ap_block_state297_on_subcall_done() {
    ap_block_state297_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2721_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2737_ap_done.read()));
}

void music::thread_ap_block_state49_on_subcall_done() {
    ap_block_state49_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2721_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2737_ap_done.read()));
}

void music::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln284_fu_6206_p2.read()))) {
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

void music::thread_ap_phi_mux_phi_ln202_1_phi_fu_1767_p4() {
    ap_phi_mux_phi_ln202_1_phi_fu_1767_p4 = phi_ln202_1_reg_1763.read();
}

void music::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln284_fu_6206_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void music::thread_ap_sync_grp_qrf_top_fu_2711_ap_done() {
    ap_sync_grp_qrf_top_fu_2711_ap_done = (grp_qrf_top_fu_2711_ap_done.read() | ap_sync_reg_grp_qrf_top_fu_2711_ap_done.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2711_ap_ready() {
    ap_sync_grp_qrf_top_fu_2711_ap_ready = (grp_qrf_top_fu_2711_ap_ready.read() | ap_sync_reg_grp_qrf_top_fu_2711_ap_ready.read());
}

void music::thread_bitcast_ln251_1_fu_5869_p1() {
    bitcast_ln251_1_fu_5869_p1 = xor_ln251_fu_5863_p2.read();
}

void music::thread_bitcast_ln251_fu_5859_p1() {
    bitcast_ln251_fu_5859_p1 = grp_sin_or_cos_float_s_fu_2737_ap_return.read();
}

void music::thread_bitcast_ln444_2_fu_4673_p1() {
    bitcast_ln444_2_fu_4673_p1 = complex_M_imag_read_1_reg_2371.read();
}

void music::thread_bitcast_ln444_fu_4657_p1() {
    bitcast_ln444_fu_4657_p1 = complex_M_real_read_1_reg_2383.read();
}

void music::thread_bitcast_ln512_fu_5849_p1() {
    bitcast_ln512_fu_5849_p1 = p_Result_56_fu_5839_p4.read();
}

void music::thread_bitcast_ln667_2_fu_5987_p1() {
    bitcast_ln667_2_fu_5987_p1 = Un_M_imag_q0.read();
}

void music::thread_bitcast_ln667_4_fu_6114_p1() {
    bitcast_ln667_4_fu_6114_p1 = a_theta_M_imag_q0.read();
}

void music::thread_bitcast_ln667_fu_3940_p1() {
    bitcast_ln667_fu_3940_p1 = Autocorr_Buffer_M_i_q0.read();
}

void music::thread_bitcast_ln87_1_fu_4817_p1() {
    bitcast_ln87_1_fu_4817_p1 = eigval_q1.read();
}

void music::thread_bitcast_ln87_fu_4799_p1() {
    bitcast_ln87_fu_4799_p1 = eigval_q0.read();
}

void music::thread_closepath_fu_5059_p2() {
    closepath_fu_5059_p2 = (!tmp_V_fu_5045_p4.read().is_01() || !ap_const_lv11_3FE.is_01())? sc_lv<1>(): (sc_biguint<11>(tmp_V_fu_5045_p4.read()) < sc_biguint<11>(ap_const_lv11_3FE));
}

void music::thread_count_fu_4278_p2() {
    count_fu_4278_p2 = (!count_0_i_reg_2273.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(count_0_i_reg_2273.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_eig_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_imag_address0 = eig_mat_M_imag_addr_2_reg_6866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6808.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4090_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        eig_mat_M_imag_address0 = grp_qrf_top_fu_2711_A_M_imag_address0.read();
    } else {
        eig_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()))) {
        eig_mat_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        eig_mat_M_imag_ce0 = grp_qrf_top_fu_2711_A_M_imag_ce0.read();
    } else {
        eig_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_imag_d0 = complex_M_imag_read_reg_2236.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        eig_mat_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        eig_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_4222_p2.read())))) {
        eig_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1044_2_fu_4306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_real_address0 = eig_mat_M_real_addr_3_reg_6861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6808.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4090_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        eig_mat_M_real_address0 = grp_qrf_top_fu_2711_A_M_real_address0.read();
    } else {
        eig_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()))) {
        eig_mat_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        eig_mat_M_real_ce0 = grp_qrf_top_fu_2711_A_M_real_ce0.read();
    } else {
        eig_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_real_d0 = complex_M_real_read_reg_2249.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        eig_mat_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        eig_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_4222_p2.read())))) {
        eig_mat_M_real_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_eigval_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln87_fu_4789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln41_fu_4311_p1.read());
    } else {
        eigval_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_eigval_address1() {
    eigval_address1 =  (sc_lv<2>) (zext_ln87_1_fu_4794_p1.read());
}

void music::thread_eigval_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()))) {
        eigval_ce0 = ap_const_logic_1;
    } else {
        eigval_ce0 = ap_const_logic_0;
    }
}

void music::thread_eigval_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        eigval_ce1 = ap_const_logic_1;
    } else {
        eigval_ce1 = ap_const_logic_0;
    }
}

void music::thread_eigval_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        eigval_we0 = ap_const_logic_1;
    } else {
        eigval_we0 = ap_const_logic_0;
    }
}

void music::thread_fc_address0() {
    fc_address0 =  (sc_lv<10>) (zext_ln226_fu_3718_p1.read());
}

void music::thread_fc_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        fc_ce0 = ap_const_logic_1;
    } else {
        fc_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_4_address0() {
    fourth_order_double_4_address0 =  (sc_lv<8>) (zext_ln498_fu_5445_p1.read());
}

void music::thread_fourth_order_double_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        fourth_order_double_4_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_4_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_5_address0() {
    fourth_order_double_5_address0 =  (sc_lv<8>) (zext_ln498_fu_5445_p1.read());
}

void music::thread_fourth_order_double_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        fourth_order_double_5_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_5_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_6_address0() {
    fourth_order_double_6_address0 =  (sc_lv<8>) (zext_ln498_fu_5445_p1.read());
}

void music::thread_fourth_order_double_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        fourth_order_double_6_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_6_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_7_address0() {
    fourth_order_double_7_address0 =  (sc_lv<8>) (zext_ln498_fu_5445_p1.read());
}

void music::thread_fourth_order_double_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        fourth_order_double_7_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_7_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_s_address0() {
    fourth_order_double_s_address0 =  (sc_lv<8>) (zext_ln498_fu_5445_p1.read());
}

void music::thread_fourth_order_double_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        fourth_order_double_s_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_s_ce0 = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2760_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) && 
          esl_seteq<1,1,1>(ap_block_state49_on_subcall_done.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state205.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()))) {
        grp_fu_2760_ce = ap_const_logic_1;
    } else {
        grp_fu_2760_ce = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2760_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()))) {
        grp_fu_2760_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln169_fu_3580_p2.read())))) {
        grp_fu_2760_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2760_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2760_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read())) {
        grp_fu_2760_p0 = w_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        grp_fu_2760_p0 = complex_M_real_read_4_reg_2666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        grp_fu_2760_p0 = complex_M_real_read_3_reg_2608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read())) {
        grp_fu_2760_p0 = complex_M_real_read_2_reg_2549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        grp_fu_2760_p0 = p_x_assign_reg_2347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        grp_fu_2760_p0 = complex_M_real_read_1_reg_2383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read())) {
        grp_fu_2760_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        grp_fu_2760_p0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        grp_fu_2760_p0 = complex_M_real_read_reg_2249.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        grp_fu_2760_p0 = p_r_M_real_reg_2066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        grp_fu_2760_p0 = FFT_Buffer_re_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()))) {
        grp_fu_2760_p0 = reg_2976.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_2760_p0 = p_x_assign_5_reg_1966.read();
    } else {
        grp_fu_2760_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2760_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read())) {
        grp_fu_2760_p1 = complex_M_real_read_4_reg_2666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        grp_fu_2760_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        grp_fu_2760_p1 = eigval_temp_reg_6963.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()))) {
        grp_fu_2760_p1 = reg_2950.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        grp_fu_2760_p1 = reg_2997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()))) {
        grp_fu_2760_p1 = reg_2982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_2760_p1 = reg_2944.read();
    } else {
        grp_fu_2760_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2765_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()))) {
        grp_fu_2765_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()))) {
        grp_fu_2765_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2765_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2765_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read())) {
        grp_fu_2765_p0 = w_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        grp_fu_2765_p0 = complex_M_imag_read_4_reg_2654.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        grp_fu_2765_p0 = complex_M_imag_read_3_reg_2595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read())) {
        grp_fu_2765_p0 = complex_M_imag_read_2_reg_2536.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        grp_fu_2765_p0 = complex_M_imag_read_1_reg_2371.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read())) {
        grp_fu_2765_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        grp_fu_2765_p0 = complex_M_imag_read_reg_2236.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        grp_fu_2765_p0 = p_r_M_imag_reg_2054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        grp_fu_2765_p0 = FFT_Buffer_im_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()))) {
        grp_fu_2765_p0 = reg_2987.read();
    } else {
        grp_fu_2765_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2765_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state336.read())) {
        grp_fu_2765_p1 = complex_M_imag_read_4_reg_2654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()))) {
        grp_fu_2765_p1 = reg_3003.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()))) {
        grp_fu_2765_p1 = reg_2992.read();
    } else {
        grp_fu_2765_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2802_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2802_p0 = AUU_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2802_p0 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2802_p0 = Un_M_real_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        grp_fu_2802_p0 = reg_2976.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        grp_fu_2802_p0 = reg_2944.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_2802_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        grp_fu_2802_p0 = midsum_reg_7247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2802_p0 = reg_3021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_2802_p0 = p_r_M_real_17_fu_4667_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_2802_p0 = reg_3054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_2802_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2802_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2802_p0 = Autocorr_Buffer_M_r_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2802_p0 = p_r_M_real_reg_2066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2802_p0 = FFT_Buffer_re_q1.read();
    } else {
        grp_fu_2802_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2802_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2802_p1 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2802_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2802_p1 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        grp_fu_2802_p1 = sinpitheta_reg_7703.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        grp_fu_2802_p1 = p_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()))) {
        grp_fu_2802_p1 = midsum_reg_7247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2802_p1 = reg_3021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_2802_p1 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2802_p1 = reg_3054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_2802_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2802_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2802_p1 = Autocorr_Buffer_M_r_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2802_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2802_p1 = c_reg_6496.read();
    } else {
        grp_fu_2802_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2807_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2807_p0 = AUU_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2807_p0 = p_r_M_imag_23_fu_6124_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2807_p0 = Un_M_imag_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_2807_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2807_p0 = reg_3031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_2807_p0 = p_r_M_imag_15_fu_4683_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_2807_p0 = reg_3064.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_2807_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2807_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2807_p0 = Autocorr_Buffer_M_i_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2807_p0 = p_r_M_imag_reg_2054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2807_p0 = FFT_Buffer_im_q1.read();
    } else {
        grp_fu_2807_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2807_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2807_p1 = a_theta_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2807_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2807_p1 = p_t_imag_9_fu_5997_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2807_p1 = reg_3031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_2807_p1 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2807_p1 = reg_3064.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_2807_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2807_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2807_p1 = p_t_imag_fu_3950_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        grp_fu_2807_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2807_p1 = s_reg_6502.read();
    } else {
        grp_fu_2807_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2812_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2812_p0 = AUU_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2812_p0 = p_r_M_imag_23_fu_6124_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2812_p0 = Un_M_imag_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_2812_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_2812_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_2812_p0 = reg_3064.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_2812_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2812_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2812_p0 = Autocorr_Buffer_M_i_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2812_p0 = p_r_M_imag_reg_2054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2812_p0 = FFT_Buffer_im_q1.read();
    } else {
        grp_fu_2812_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2812_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2812_p1 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2812_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2812_p1 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_2812_p1 = midsum_reg_7247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_2812_p1 = U_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_2812_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2812_p1 = reg_3054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2812_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2812_p1 = Autocorr_Buffer_M_r_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2812_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2812_p1 = c_reg_6496.read();
    } else {
        grp_fu_2812_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2817_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2817_p0 = AUU_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2817_p0 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2817_p0 = Un_M_real_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_2817_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_2817_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_2817_p0 = reg_3054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_2817_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2817_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2817_p0 = Autocorr_Buffer_M_r_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2817_p0 = p_r_M_real_reg_2066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2817_p0 = FFT_Buffer_re_q1.read();
    } else {
        grp_fu_2817_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2817_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2817_p1 = a_theta_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        grp_fu_2817_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read())) {
        grp_fu_2817_p1 = p_t_imag_9_fu_5997_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_2817_p1 = U_M_imag_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_2817_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2817_p1 = reg_3064.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_2817_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_2817_p1 = p_t_imag_fu_3950_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        grp_fu_2817_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_2817_p1 = s_reg_6502.read();
    } else {
        grp_fu_2817_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2858_p0() {
    grp_fu_2858_p0 = xor_ln444_1_fu_4677_p2.read();
}

void music::thread_grp_fu_2863_p0() {
    grp_fu_2863_p0 = xor_ln444_fu_4661_p2.read();
}

void music::thread_grp_fu_2893_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read())) {
        grp_fu_2893_p0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_2893_p0 = reg_3092.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()))) {
        grp_fu_2893_p0 = reg_2950.read();
    } else {
        grp_fu_2893_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2893_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read())) {
        grp_fu_2893_p1 = reg_3121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_2893_p1 = reg_3003.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_2893_p1 = reg_2950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        grp_fu_2893_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2893_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2898_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_2898_p0 = tmp_9_i_i_reg_7237.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_2898_p0 = reg_3003.read();
    } else {
        grp_fu_2898_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2898_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_2898_p1 = reg_3003.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_2898_p1 = reg_2950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        grp_fu_2898_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2898_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2904_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read())) {
        grp_fu_2904_p0 = bitcast_ln512_fu_5849_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        grp_fu_2904_p0 = reg_2939.read();
    } else {
        grp_fu_2904_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2907_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state275.read())) {
        grp_fu_2907_p0 = theta_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fu_2907_p0 = fc_q0.read();
    } else {
        grp_fu_2907_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2924_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read())) {
        grp_fu_2924_p1 = ap_const_lv64_3F91DF46A252DD11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        grp_fu_2924_p1 = ap_const_lv64_401921FB54524550;
    } else {
        grp_fu_2924_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2930_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fu_2930_p0 = reg_3016.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_fu_2930_p0 = ap_const_lv64_C01921FB5444261E;
    } else {
        grp_fu_2930_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2930_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fu_2930_p1 = ap_const_lv64_4075400000000000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_fu_2930_p1 = tmp_7_reg_6468.read();
    } else {
        grp_fu_2930_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2936_p0() {
    grp_fu_2936_p0 = esl_zext<32,11>(DFTpts_reg_6451.read());
}

void music::thread_grp_fu_5131_p0() {
    grp_fu_5131_p0 =  (sc_lv<170>) (grp_fu_5131_p00.read());
}

void music::thread_grp_fu_5131_p00() {
    grp_fu_5131_p00 = esl_zext<223,170>(ret_V_22_reg_7525.read());
}

void music::thread_grp_fu_5131_p1() {
    grp_fu_5131_p1 =  (sc_lv<53>) (grp_fu_5131_p10.read());
}

void music::thread_grp_fu_5131_p10() {
    grp_fu_5131_p10 = esl_zext<223,53>(p_Result_50_fu_5117_p3.read());
}

void music::thread_grp_qrf_top_fu_2711_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
         esl_seteq<1,1,1>(ap_block_state136_on_subcall_done.read(), ap_const_boolean_0))) {
        grp_qrf_top_fu_2711_ap_continue = ap_const_logic_1;
    } else {
        grp_qrf_top_fu_2711_ap_continue = ap_const_logic_0;
    }
}

void music::thread_grp_qrf_top_fu_2711_ap_start() {
    grp_qrf_top_fu_2711_ap_start = grp_qrf_top_fu_2711_ap_start_reg.read();
}

void music::thread_grp_scaled_fixed2ieee_fu_2754_ap_start() {
    grp_scaled_fixed2ieee_fu_2754_ap_start = grp_scaled_fixed2ieee_fu_2754_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2721_ap_start() {
    grp_sin_or_cos_float_s_fu_2721_ap_start = grp_sin_or_cos_float_s_fu_2721_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2721_do_cos() {
    grp_sin_or_cos_float_s_fu_2721_do_cos =  (sc_logic) (ap_const_lv1_1[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2721_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        grp_sin_or_cos_float_s_fu_2721_t_in = p_x_assign_6_reg_7708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        grp_sin_or_cos_float_s_fu_2721_t_in = p_x_assign_5_reg_1966.read();
    } else {
        grp_sin_or_cos_float_s_fu_2721_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_sin_or_cos_float_s_fu_2737_ap_start() {
    grp_sin_or_cos_float_s_fu_2737_ap_start = grp_sin_or_cos_float_s_fu_2737_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2737_do_cos() {
    grp_sin_or_cos_float_s_fu_2737_do_cos =  (sc_logic) (ap_const_lv1_0[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2737_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        grp_sin_or_cos_float_s_fu_2737_t_in = p_x_assign_6_reg_7708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        grp_sin_or_cos_float_s_fu_2737_t_in = p_x_assign_5_reg_1966.read();
    } else {
        grp_sin_or_cos_float_s_fu_2737_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_i_10_fu_4177_p2() {
    i_10_fu_4177_p2 = (!i17_0_i_reg_2214.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i17_0_i_reg_2214.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_11_fu_4338_p2() {
    i_11_fu_4338_p2 = (!i19_0_i_reg_2285.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i19_0_i_reg_2285.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_12_fu_4730_p2() {
    i_12_fu_4730_p2 = (!i_0_i31_reg_2415.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i31_reg_2415.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_13_fu_4417_p2() {
    i_13_fu_4417_p2 = (!j_14_reg_2308.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_14_reg_2308.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_14_fu_4751_p2() {
    i_14_fu_4751_p2 = (!flag_reg_2427.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(flag_reg_2427.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_15_fu_4695_p2() {
    i_15_fu_4695_p2 = (!i25_0_i_reg_2404.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i25_0_i_reg_2404.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_16_fu_5880_p2() {
    i_16_fu_5880_p2 = (!i_0_reg_2514.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_2514.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_17_fu_6009_p2() {
    i_17_fu_6009_p2 = (!i31_0_reg_2573.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i31_0_reg_2573.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_18_fu_6136_p2() {
    i_18_fu_6136_p2 = (!i34_0_reg_2643.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i34_0_reg_2643.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_4_fu_3490_p2() {
    i_4_fu_3490_p2 = (!i_0_i_i_i_reg_1923.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i_i_i_reg_1923.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_5_cast_fu_3576_p1() {
    i_5_cast_fu_3576_p1 = esl_zext<32,10>(i_5_reg_1955.read());
}

void music::thread_i_6_fu_3478_p2() {
    i_6_fu_3478_p2 = (!ap_const_lv11_1.is_01() || !input_assign_reg_1900.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(input_assign_reg_1900.read()));
}

void music::thread_i_7_fu_3630_p2() {
    i_7_fu_3630_p2 = (!zext_ln161_reg_6462.read().is_01() || !i_0_i_reg_1978.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln161_reg_6462.read()) + sc_bigint<32>(i_0_i_reg_1978.read()));
}

void music::thread_i_8_fu_4114_p2() {
    i_8_fu_4114_p2 = (!i_0_i25_reg_2181.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i25_reg_2181.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_9_fu_4165_p2() {
    i_9_fu_4165_p2 = (!i16_0_i_reg_2203.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i16_0_i_reg_2203.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_fu_6212_p2() {
    i_fu_6212_p2 = (!i36_0_reg_2700.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i36_0_reg_2700.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_lower_fu_3613_p2() {
    i_lower_fu_3613_p2 = (!i_0_i_reg_1978.read().is_01() || !numBF_reg_6473.read().is_01())? sc_lv<32>(): (sc_bigint<32>(i_0_i_reg_1978.read()) + sc_biguint<32>(numBF_reg_6473.read()));
}

void music::thread_icmp_ln101_fu_3894_p2() {
    icmp_ln101_fu_3894_p2 = (!l_0_i_reg_2078.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_i_reg_2078.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln110_fu_3484_p2() {
    icmp_ln110_fu_3484_p2 = (!i_0_i_i_i_reg_1923.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i_reg_1923.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln11_1_fu_3988_p2() {
    icmp_ln11_1_fu_3988_p2 = (!phi_ln11_reg_2089.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_reg_2089.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln11_fu_3982_p2() {
    icmp_ln11_fu_3982_p2 = (!phi_ln11_1_reg_2101.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_1_reg_2101.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln122_fu_3472_p2() {
    icmp_ln122_fu_3472_p2 = (!input_assign_reg_1900.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(input_assign_reg_1900.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln124_fu_3526_p2() {
    icmp_ln124_fu_3526_p2 = (!zext_ln108_reg_6379.read().is_01() || !reversed_reg_1912.read().is_01())? sc_lv<1>(): (sc_biguint<32>(zext_ln108_reg_6379.read()) > sc_biguint<32>(reversed_reg_1912.read()));
}

void music::thread_icmp_ln12_1_fu_4026_p2() {
    icmp_ln12_1_fu_4026_p2 = (!phi_ln12_reg_2112.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_reg_2112.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln12_fu_4020_p2() {
    icmp_ln12_fu_4020_p2 = (!phi_ln12_1_reg_2124.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_1_reg_2124.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_1_fu_4064_p2() {
    icmp_ln13_1_fu_4064_p2 = (!phi_ln13_reg_2135.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_2135.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_fu_4058_p2() {
    icmp_ln13_fu_4058_p2 = (!phi_ln13_1_reg_2147.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_2147.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_1_fu_4102_p2() {
    icmp_ln14_1_fu_4102_p2 = (!phi_ln14_reg_2158.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_reg_2158.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_fu_4096_p2() {
    icmp_ln14_fu_4096_p2 = (!phi_ln14_1_reg_2170.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_1_reg_2170.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln159_fu_3547_p2() {
    icmp_ln159_fu_3547_p2 = (!stage_0_i_reg_1943.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(stage_0_i_reg_1943.read() == ap_const_lv4_B);
}

void music::thread_icmp_ln169_fu_3580_p2() {
    icmp_ln169_fu_3580_p2 = (!i_5_reg_1955.read().is_01() || !trunc_ln6_reg_6456.read().is_01())? sc_lv<1>(): sc_lv<1>(i_5_reg_1955.read() == trunc_ln6_reg_6456.read());
}

void music::thread_icmp_ln177_fu_3607_p2() {
    icmp_ln177_fu_3607_p2 = (!tmp_48_fu_3597_p4.read().is_01() || !ap_const_lv22_1.is_01())? sc_lv<1>(): (sc_bigint<22>(tmp_48_fu_3597_p4.read()) < sc_bigint<22>(ap_const_lv22_1));
}

void music::thread_icmp_ln200_1_fu_3159_p2() {
    icmp_ln200_1_fu_3159_p2 = (!phi_ln200_reg_1705.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln200_reg_1705.read() == ap_const_lv4_9);
}

void music::thread_icmp_ln200_fu_3153_p2() {
    icmp_ln200_fu_3153_p2 = (!phi_ln200_1_reg_1717.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln200_1_reg_1717.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln201_1_fu_3197_p2() {
    icmp_ln201_1_fu_3197_p2 = (!phi_ln201_reg_1728.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln201_reg_1728.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln201_fu_3191_p2() {
    icmp_ln201_fu_3191_p2 = (!phi_ln201_1_reg_1740.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln201_1_reg_1740.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln202_fu_3229_p2() {
    icmp_ln202_fu_3229_p2 = (!phi_ln202_reg_1751.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln202_reg_1751.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln203_1_fu_3267_p2() {
    icmp_ln203_1_fu_3267_p2 = (!phi_ln203_reg_1774.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln203_reg_1774.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln203_fu_3261_p2() {
    icmp_ln203_fu_3261_p2 = (!phi_ln203_1_reg_1786.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln203_1_reg_1786.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln204_1_fu_3305_p2() {
    icmp_ln204_1_fu_3305_p2 = (!phi_ln204_reg_1797.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln204_reg_1797.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln204_fu_3299_p2() {
    icmp_ln204_fu_3299_p2 = (!phi_ln204_1_reg_1809.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln204_1_reg_1809.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln205_fu_3323_p2() {
    icmp_ln205_fu_3323_p2 = (!phi_ln205_reg_1820.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln205_reg_1820.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln206_1_fu_3369_p2() {
    icmp_ln206_1_fu_3369_p2 = (!phi_ln206_reg_1831.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln206_reg_1831.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln206_fu_3363_p2() {
    icmp_ln206_fu_3363_p2 = (!phi_ln206_1_reg_1855.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln206_1_reg_1855.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln20_fu_4108_p2() {
    icmp_ln20_fu_4108_p2 = (!i_0_i25_reg_2181.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i25_reg_2181.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln211_fu_3375_p2() {
    icmp_ln211_fu_3375_p2 = (!l_0_reg_1866.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_1866.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln212_fu_3399_p2() {
    icmp_ln212_fu_3399_p2 = (!n_0_reg_1877.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_1877.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln213_fu_3419_p2() {
    icmp_ln213_fu_3419_p2 = (!j_0_reg_1888.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_1888.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln218_fu_3635_p2() {
    icmp_ln218_fu_3635_p2 = (!j25_0_reg_1987.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j25_0_reg_1987.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln21_fu_4132_p2() {
    icmp_ln21_fu_4132_p2 = (!j_0_i26_reg_2192.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i26_reg_2192.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln225_fu_3706_p2() {
    icmp_ln225_fu_3706_p2 = (!jj_0_reg_1998.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(jj_0_reg_1998.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln227_fu_3753_p2() {
    icmp_ln227_fu_3753_p2 = (!l26_0_reg_2010.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l26_0_reg_2010.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln228_fu_3794_p2() {
    icmp_ln228_fu_3794_p2 = (!n27_0_reg_2021.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n27_0_reg_2021.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln236_fu_4886_p2() {
    icmp_ln236_fu_4886_p2 = (!x_0_reg_2458.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_2458.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln237_fu_4940_p2() {
    icmp_ln237_fu_4940_p2 = (!y_0_reg_2469.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_2469.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln238_fu_4971_p2() {
    icmp_ln238_fu_4971_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_1);
}

void music::thread_icmp_ln240_fu_4977_p2() {
    icmp_ln240_fu_4977_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_0);
}

void music::thread_icmp_ln246_fu_4989_p2() {
    icmp_ln246_fu_4989_p2 = (!x28_0_reg_2480.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x28_0_reg_2480.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln248_fu_5006_p2() {
    icmp_ln248_fu_5006_p2 = (!y29_0_reg_2503.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(y29_0_reg_2503.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln254_fu_5874_p2() {
    icmp_ln254_fu_5874_p2 = (!i_0_reg_2514.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_2514.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln255_fu_5910_p2() {
    icmp_ln255_fu_5910_p2 = (!j30_0_reg_2525.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j30_0_reg_2525.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln258_fu_5949_p2() {
    icmp_ln258_fu_5949_p2 = (!k_0_reg_2562.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2562.read() == ap_const_lv2_2);
}

void music::thread_icmp_ln264_fu_6003_p2() {
    icmp_ln264_fu_6003_p2 = (!i31_0_reg_2573.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i31_0_reg_2573.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln265_fu_6031_p2() {
    icmp_ln265_fu_6031_p2 = (!j32_0_reg_2584.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j32_0_reg_2584.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln268_fu_6062_p2() {
    icmp_ln268_fu_6062_p2 = (!k33_0_reg_2621.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k33_0_reg_2621.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln274_fu_6130_p2() {
    icmp_ln274_fu_6130_p2 = (!i34_0_reg_2643.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i34_0_reg_2643.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln277_fu_6162_p2() {
    icmp_ln277_fu_6162_p2 = (!k35_0_reg_2678.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k35_0_reg_2678.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln27_fu_4159_p2() {
    icmp_ln27_fu_4159_p2 = (!i16_0_i_reg_2203.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i16_0_i_reg_2203.read() == ap_const_lv4_8);
}

void music::thread_icmp_ln284_fu_6206_p2() {
    icmp_ln284_fu_6206_p2 = (!i36_0_reg_2700.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i36_0_reg_2700.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln29_fu_4171_p2() {
    icmp_ln29_fu_4171_p2 = (!i17_0_i_reg_2214.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i17_0_i_reg_2214.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln30_fu_4195_p2() {
    icmp_ln30_fu_4195_p2 = (!j18_0_i_reg_2225.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j18_0_i_reg_2225.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln33_fu_4222_p2() {
    icmp_ln33_fu_4222_p2 = (!k_0_i_reg_2262.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_0_i_reg_2262.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln40_fu_4272_p2() {
    icmp_ln40_fu_4272_p2 = (!count_0_i_reg_2273.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(count_0_i_reg_2273.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln42_fu_4332_p2() {
    icmp_ln42_fu_4332_p2 = (!i19_0_i_reg_2285.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2285.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln43_fu_4374_p2() {
    icmp_ln43_fu_4374_p2 = (!j20_0_i_reg_2297.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j20_0_i_reg_2297.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln44_fu_4386_p2() {
    icmp_ln44_fu_4386_p2 = (!i19_0_i_reg_2285.read().is_01() || !j20_0_i_reg_2297.read().is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2285.read() == j20_0_i_reg_2297.read());
}

void music::thread_icmp_ln51_fu_4411_p2() {
    icmp_ln51_fu_4411_p2 = (!j_14_reg_2308.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_14_reg_2308.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln53_fu_4449_p2() {
    icmp_ln53_fu_4449_p2 = (!j22_0_i_reg_2320.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(j22_0_i_reg_2320.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln56_fu_4482_p2() {
    icmp_ln56_fu_4482_p2 = (!j23_0_in_i_reg_2329.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j23_0_in_i_reg_2329.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln58_fu_4513_p2() {
    icmp_ln58_fu_4513_p2 = (!q_0_i_reg_2338.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(q_0_i_reg_2338.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln67_fu_4607_p2() {
    icmp_ln67_fu_4607_p2 = (!j24_0_in_i_reg_2395.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_in_i_reg_2395.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln75_fu_4689_p2() {
    icmp_ln75_fu_4689_p2 = (!i25_0_i_reg_2404.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i25_0_i_reg_2404.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln81_fu_4724_p2() {
    icmp_ln81_fu_4724_p2 = (!i_0_i31_reg_2415.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i31_reg_2415.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln833_1_fu_5137_p2() {
    icmp_ln833_1_fu_5137_p2 = (!tmp_V_4_reg_7503.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_reg_7503.read() == ap_const_lv52_0);
}

void music::thread_icmp_ln833_2_fu_5287_p2() {
    icmp_ln833_2_fu_5287_p2 = (!tmp_V_reg_7496.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7496.read() == ap_const_lv11_7FF);
}

void music::thread_icmp_ln833_fu_5282_p2() {
    icmp_ln833_fu_5282_p2 = (!tmp_V_reg_7496.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7496.read() == ap_const_lv11_0);
}

void music::thread_icmp_ln84_fu_4745_p2() {
    icmp_ln84_fu_4745_p2 = (!flag_reg_2427.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(flag_reg_2427.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln86_fu_4763_p2() {
    icmp_ln86_fu_4763_p2 = (!j_0_in_i_reg_2449.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_in_i_reg_2449.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln87_1_fu_4841_p2() {
    icmp_ln87_1_fu_4841_p2 = (!trunc_ln87_fu_4813_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_fu_4813_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_2_fu_4847_p2() {
    icmp_ln87_2_fu_4847_p2 = (!tmp_24_fu_4821_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_24_fu_4821_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln87_3_fu_4853_p2() {
    icmp_ln87_3_fu_4853_p2 = (!trunc_ln87_1_fu_4831_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_1_fu_4831_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_fu_4835_p2() {
    icmp_ln87_fu_4835_p2 = (!tmp_22_fu_4803_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_4803_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln98_fu_3835_p2() {
    icmp_ln98_fu_3835_p2 = (!x_0_i_reg_2032.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_i_reg_2032.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln99_fu_3863_p2() {
    icmp_ln99_fu_3863_p2 = (!y_0_i_reg_2043.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_i_reg_2043.read() == ap_const_lv3_4);
}

void music::thread_input_assign_1_fu_3512_p4() {
    input_assign_1_fu_3512_p4 = p_0_i_i_i_reg_1934.read().range(9, 1);
}

void music::thread_j_10_fu_4601_p2() {
    j_10_fu_4601_p2 = (!j24_0_in_i_reg_2395.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j24_0_in_i_reg_2395.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_11_fu_4476_p2() {
    j_11_fu_4476_p2 = (!j23_0_in_i_reg_2329.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j23_0_in_i_reg_2329.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_12_fu_5916_p2() {
    j_12_fu_5916_p2 = (!j30_0_reg_2525.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j30_0_reg_2525.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_13_fu_6037_p2() {
    j_13_fu_6037_p2 = (!j32_0_reg_2584.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j32_0_reg_2584.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_15_fu_4757_p2() {
    j_15_fu_4757_p2 = (!j_0_in_i_reg_2449.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_0_in_i_reg_2449.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_1_fu_3641_p2() {
    j_1_fu_3641_p2 = (!j25_0_reg_1987.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j25_0_reg_1987.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_j_2_fu_3585_p2() {
    j_2_fu_3585_p2 = (!i_5_reg_1955.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_5_reg_1955.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void music::thread_j_3_fu_4138_p2() {
    j_3_fu_4138_p2 = (!j_0_i26_reg_2192.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_i26_reg_2192.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_5_fu_4201_p2() {
    j_5_fu_4201_p2 = (!j18_0_i_reg_2225.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j18_0_i_reg_2225.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_7_fu_4879_p3() {
    j_7_fu_4879_p3 = (!and_ln87_1_fu_4873_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln87_1_fu_4873_p2.read()[0].to_bool())? j_15_reg_7294.read(): flag_0_i_reg_2439.read());
}

void music::thread_j_8_fu_4470_p2() {
    j_8_fu_4470_p2 = (!ap_const_lv32_1.is_01() || !j22_0_i_reg_2320.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j22_0_i_reg_2320.read()));
}

void music::thread_j_9_fu_4380_p2() {
    j_9_fu_4380_p2 = (!j20_0_i_reg_2297.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j20_0_i_reg_2297.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_fu_3425_p2() {
    j_fu_3425_p2 = (!j_0_reg_1888.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_reg_1888.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_jj_fu_3712_p2() {
    jj_fu_3712_p2 = (!jj_0_reg_1998.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(jj_0_reg_1998.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_k_2_fu_5955_p2() {
    k_2_fu_5955_p2 = (!k_0_reg_2562.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_2562.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_k_3_fu_6168_p2() {
    k_3_fu_6168_p2 = (!k35_0_reg_2678.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k35_0_reg_2678.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_4_fu_6068_p2() {
    k_4_fu_6068_p2 = (!k33_0_reg_2621.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k33_0_reg_2621.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_fu_4228_p2() {
    k_fu_4228_p2 = (!k_0_i_reg_2262.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_0_i_reg_2262.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_l_1_fu_3759_p2() {
    l_1_fu_3759_p2 = (!l26_0_reg_2010.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l26_0_reg_2010.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_2_fu_3900_p2() {
    l_2_fu_3900_p2 = (!l_0_i_reg_2078.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_i_reg_2078.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_fu_3381_p2() {
    l_fu_3381_p2 = (!l_0_reg_1866.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_reg_1866.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_lhs_V_2_fu_5567_p1() {
    lhs_V_2_fu_5567_p1 = esl_sext<64,63>(t1_V_fu_5560_p3.read());
}

void music::thread_m_fu_4651_p2() {
    m_fu_4651_p2 = (!m_0_i_reg_2359.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<3>(): (sc_bigint<3>(m_0_i_reg_2359.read()) + sc_bigint<3>(ap_const_lv3_7));
}

void music::thread_n_1_fu_3405_p2() {
    n_1_fu_3405_p2 = (!n_0_reg_1877.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n_0_reg_1877.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_n_fu_3800_p2() {
    n_fu_3800_p2 = (!n27_0_reg_2021.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n27_0_reg_2021.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_numBF_fu_3573_p1() {
    numBF_fu_3573_p1 = esl_zext<32,10>(trunc_ln6_reg_6456.read());
}

void music::thread_or_ln241_fu_4924_p2() {
    or_ln241_fu_4924_p2 = (tmp_57_fu_4910_p3.read() | ap_const_lv4_1);
}

void music::thread_or_ln300_fu_5810_p2() {
    or_ln300_fu_5810_p2 = (and_ln300_fu_5763_p2.read() | icmp_ln833_2_reg_7588.read());
}

void music::thread_or_ln311_fu_5772_p2() {
    or_ln311_fu_5772_p2 = (icmp_ln833_2_reg_7588.read() | select_ln271_fu_5756_p3.read());
}

void music::thread_or_ln87_1_fu_4863_p2() {
    or_ln87_1_fu_4863_p2 = (icmp_ln87_3_reg_7360.read() | icmp_ln87_2_reg_7355.read());
}

void music::thread_or_ln87_fu_4859_p2() {
    or_ln87_fu_4859_p2 = (icmp_ln87_1_reg_7350.read() | icmp_ln87_reg_7345.read());
}

void music::thread_p_Repl2_6_fu_5785_p3() {
    p_Repl2_6_fu_5785_p3 = (!and_ln300_fu_5763_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln300_fu_5763_p2.read()[0].to_bool())? results_sign_V_2_reg_7490.read(): select_ln311_fu_5777_p3.read());
}

void music::thread_p_Result_50_fu_5117_p3() {
    p_Result_50_fu_5117_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_7503.read());
}

void music::thread_p_Result_51_fu_5206_p3() {
    p_Result_51_fu_5206_p3 = esl_concat<61,1>(p_Result_i_i_i_87_fu_5196_p4.read(), ap_const_lv1_1);
}

void music::thread_p_Result_52_fu_5224_p3() {
    p_Result_52_fu_5224_p3 = esl_concat<2,62>(ap_const_lv2_3, p_Result_s_fu_5214_p4.read());
}

void music::thread_p_Result_53_fu_5438_p3() {
    p_Result_53_fu_5438_p3 = esl_concat<1,7>(sin_basis_fu_5432_p2.read(), p_Result_i_i_reg_7595.read());
}

void music::thread_p_Result_54_fu_5652_p3() {
    p_Result_54_fu_5652_p3 = p_Val2_65_fu_5649_p1.read().range(63, 63);
}

void music::thread_p_Result_55_fu_5674_p3() {
    p_Result_55_fu_5674_p3 = esl_concat<1,3>(results_sign_V_2_reg_7490.read(), p_Val2_70_reg_7557.read());
}

void music::thread_p_Result_56_fu_5839_p4() {
    p_Result_56_fu_5839_p4 = esl_concat<12,52>(esl_concat<1,11>(p_Repl2_6_fu_5785_p3.read(), ret_V_20_fu_5815_p3.read()), ret_V_21_fu_5831_p3.read());
}

void music::thread_p_Result_i_i_i_87_fu_5196_p4() {
    p_Result_i_i_i_87_fu_5196_p4 = p_Val2_49_fu_5189_p3.read().range(123, 63);
}

void music::thread_p_Result_i_i_i_fu_5079_p4() {
    p_Result_i_i_i_fu_5079_p4 = addr_V_fu_5071_p3.read().range(10, 7);
}

void music::thread_p_Result_s_fu_5214_p4() {
    p_Result_s_fu_5214_p4 = p_Result_51_fu_5206_p3.read().range(0, 61);
}

void music::thread_p_Val2_49_fu_5189_p3() {
    p_Val2_49_fu_5189_p3 = (!trunc_ln745_fu_5180_p1.read()[0].is_01())? sc_lv<124>(): ((trunc_ln745_fu_5180_p1.read()[0].to_bool())? Mx_bits_V_2_fu_5184_p2.read(): p_Val2_69_reg_7546.read());
}

void music::thread_p_Val2_65_fu_5649_p1() {
    p_Val2_65_fu_5649_p1 = resultf_reg_7693.read();
}

void music::thread_p_Val2_70_fu_5174_p3() {
    p_Val2_70_fu_5174_p3 = (!closepath_reg_7509.read()[0].is_01())? sc_lv<3>(): ((closepath_reg_7509.read()[0].to_bool())? ap_const_lv3_0: trunc_ln_i_i_reg_7552.read());
}

void music::thread_p_Val2_s_fu_5033_p1() {
    p_Val2_s_fu_5033_p1 = reg_3016.read();
}

void music::thread_p_address0() {
    p_address0 =  (sc_lv<2>) (zext_ln247_fu_5001_p1.read());
}

void music::thread_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read())) {
        p_ce0 = ap_const_logic_1;
    } else {
        p_ce0 = ap_const_logic_0;
    }
}

void music::thread_p_r_M_imag_15_fu_4683_p1() {
    p_r_M_imag_15_fu_4683_p1 = xor_ln444_1_fu_4677_p2.read();
}

void music::thread_p_r_M_imag_23_fu_6124_p1() {
    p_r_M_imag_23_fu_6124_p1 = xor_ln667_2_fu_6118_p2.read();
}

void music::thread_p_r_M_real_17_fu_4667_p1() {
    p_r_M_real_17_fu_4667_p1 = xor_ln444_fu_4661_p2.read();
}

void music::thread_p_t_imag_9_fu_5997_p1() {
    p_t_imag_9_fu_5997_p1 = xor_ln667_1_fu_5991_p2.read();
}

void music::thread_p_t_imag_fu_3950_p1() {
    p_t_imag_fu_3950_p1 = xor_ln667_fu_3944_p2.read();
}

void music::thread_q_1_fu_4539_p2() {
    q_1_fu_4539_p2 = (!ap_const_lv32_1.is_01() || !q_0_i_reg_2338.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(q_0_i_reg_2338.read()));
}

void music::thread_r_V_20_fu_5321_p2() {
    r_V_20_fu_5321_p2 = (!zext_ln1287_fu_5312_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7563.read() << (unsigned short)zext_ln1287_fu_5312_p1.read().to_uint();
}

void music::thread_r_V_22_fu_5357_p1() {
    r_V_22_fu_5357_p1 = esl_zext<98,49>(B_trunc_V_fu_5347_p4.read());
}

void music::thread_r_V_25_fu_5398_p1() {
    r_V_25_fu_5398_p1 = esl_zext<98,49>(B_squared_V_reg_7610.read());
}

void music::thread_r_V_34_fu_5101_p2() {
    r_V_34_fu_5101_p2 = (!zext_ln744_fu_5098_p1.read().is_01())? sc_lv<256>(): ref_4oPi_table_256_V_q0.read() << (unsigned short)zext_ln744_fu_5098_p1.read().to_uint();
}

void music::thread_r_V_35_fu_5248_p2() {
    r_V_35_fu_5248_p2 = (!zext_ln1253_fu_5244_p1.read().is_01())? sc_lv<124>(): p_Val2_49_fu_5189_p3.read() << (unsigned short)zext_ln1253_fu_5244_p1.read().to_uint();
}

void music::thread_r_V_36_fu_5326_p3() {
    r_V_36_fu_5326_p3 = (!isNeg_reg_7576.read()[0].is_01())? sc_lv<63>(): ((isNeg_reg_7576.read()[0].to_bool())? r_V_fu_5316_p2.read(): r_V_20_fu_5321_p2.read());
}

void music::thread_r_V_37_fu_5361_p0() {
    r_V_37_fu_5361_p0 =  (sc_lv<49>) (r_V_22_fu_5357_p1.read());
}

void music::thread_r_V_37_fu_5361_p1() {
    r_V_37_fu_5361_p1 =  (sc_lv<49>) (r_V_22_fu_5357_p1.read());
}

void music::thread_r_V_37_fu_5361_p2() {
    r_V_37_fu_5361_p2 = (!r_V_37_fu_5361_p0.read().is_01() || !r_V_37_fu_5361_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_37_fu_5361_p0.read()) * sc_biguint<49>(r_V_37_fu_5361_p1.read());
}

void music::thread_r_V_38_fu_5401_p0() {
    r_V_38_fu_5401_p0 =  (sc_lv<49>) (r_V_25_fu_5398_p1.read());
}

void music::thread_r_V_38_fu_5401_p1() {
    r_V_38_fu_5401_p1 =  (sc_lv<49>) (r_V_22_reg_7605.read());
}

void music::thread_r_V_38_fu_5401_p2() {
    r_V_38_fu_5401_p2 = (!r_V_38_fu_5401_p0.read().is_01() || !r_V_38_fu_5401_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_38_fu_5401_p0.read()) * sc_biguint<49>(r_V_38_fu_5401_p1.read());
}

void music::thread_r_V_39_fu_5416_p0() {
    r_V_39_fu_5416_p0 =  (sc_lv<49>) (r_V_25_fu_5398_p1.read());
}

void music::thread_r_V_39_fu_5416_p1() {
    r_V_39_fu_5416_p1 =  (sc_lv<49>) (r_V_25_fu_5398_p1.read());
}

void music::thread_r_V_39_fu_5416_p2() {
    r_V_39_fu_5416_p2 = (!r_V_39_fu_5416_p0.read().is_01() || !r_V_39_fu_5416_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_39_fu_5416_p0.read()) * sc_biguint<49>(r_V_39_fu_5416_p1.read());
}

void music::thread_r_V_40_fu_5461_p0() {
    r_V_40_fu_5461_p0 =  (sc_lv<56>) (r_V_40_fu_5461_p00.read());
}

void music::thread_r_V_40_fu_5461_p00() {
    r_V_40_fu_5461_p00 = esl_zext<108,56>(B_V_reg_7600.read());
}

void music::thread_r_V_40_fu_5461_p1() {
    r_V_40_fu_5461_p1 = fourth_order_double_5_q0.read();
}

void music::thread_r_V_40_fu_5461_p2() {
    r_V_40_fu_5461_p2 = (!r_V_40_fu_5461_p0.read().is_01() || !r_V_40_fu_5461_p1.read().is_01())? sc_lv<108>(): sc_biguint<56>(r_V_40_fu_5461_p0.read()) * sc_bigint<52>(r_V_40_fu_5461_p1.read());
}

void music::thread_r_V_41_fu_5484_p0() {
    r_V_41_fu_5484_p0 =  (sc_lv<49>) (r_V_41_fu_5484_p00.read());
}

void music::thread_r_V_41_fu_5484_p00() {
    r_V_41_fu_5484_p00 = esl_zext<93,49>(B_squared_V_reg_7610.read());
}

void music::thread_r_V_41_fu_5484_p1() {
    r_V_41_fu_5484_p1 = fourth_order_double_6_q0.read();
}

void music::thread_r_V_41_fu_5484_p2() {
    r_V_41_fu_5484_p2 = (!r_V_41_fu_5484_p0.read().is_01() || !r_V_41_fu_5484_p1.read().is_01())? sc_lv<93>(): sc_biguint<49>(r_V_41_fu_5484_p0.read()) * sc_bigint<44>(r_V_41_fu_5484_p1.read());
}

void music::thread_r_V_42_fu_5507_p0() {
    r_V_42_fu_5507_p0 =  (sc_lv<42>) (r_V_42_fu_5507_p00.read());
}

void music::thread_r_V_42_fu_5507_p00() {
    r_V_42_fu_5507_p00 = esl_zext<75,42>(B_third_power_V_reg_7623.read());
}

void music::thread_r_V_42_fu_5507_p1() {
    r_V_42_fu_5507_p1 =  (sc_lv<33>) (r_V_42_fu_5507_p10.read());
}

void music::thread_r_V_42_fu_5507_p10() {
    r_V_42_fu_5507_p10 = esl_zext<75,33>(fourth_order_double_7_q0.read());
}

void music::thread_r_V_42_fu_5507_p2() {
    r_V_42_fu_5507_p2 = (!r_V_42_fu_5507_p0.read().is_01() || !r_V_42_fu_5507_p1.read().is_01())? sc_lv<75>(): sc_biguint<42>(r_V_42_fu_5507_p0.read()) * sc_biguint<33>(r_V_42_fu_5507_p1.read());
}

void music::thread_r_V_43_fu_5534_p0() {
    r_V_43_fu_5534_p0 =  (sc_lv<35>) (r_V_43_fu_5534_p00.read());
}

void music::thread_r_V_43_fu_5534_p00() {
    r_V_43_fu_5534_p00 = esl_zext<60,35>(B_fourth_power_V_reg_7628.read());
}

void music::thread_r_V_43_fu_5534_p1() {
    r_V_43_fu_5534_p1 =  (sc_lv<25>) (r_V_43_fu_5534_p10.read());
}

void music::thread_r_V_43_fu_5534_p10() {
    r_V_43_fu_5534_p10 = esl_zext<60,25>(fourth_order_double_s_q0.read());
}

void music::thread_r_V_43_fu_5534_p2() {
    r_V_43_fu_5534_p2 = (!r_V_43_fu_5534_p0.read().is_01() || !r_V_43_fu_5534_p1.read().is_01())? sc_lv<60>(): sc_biguint<35>(r_V_43_fu_5534_p0.read()) * sc_biguint<25>(r_V_43_fu_5534_p1.read());
}

void music::thread_r_V_44_fu_5621_p0() {
    r_V_44_fu_5621_p0 = ret_V_reg_7678.read();
}

void music::thread_r_V_44_fu_5621_p1() {
    r_V_44_fu_5621_p1 =  (sc_lv<63>) (r_V_44_fu_5621_p10.read());
}

void music::thread_r_V_44_fu_5621_p10() {
    r_V_44_fu_5621_p10 = esl_zext<126,63>(select_ln272_2_fu_5608_p3.read());
}

void music::thread_r_V_44_fu_5621_p2() {
    r_V_44_fu_5621_p2 = (!r_V_44_fu_5621_p0.read().is_01() || !r_V_44_fu_5621_p1.read().is_01())? sc_lv<126>(): sc_bigint<64>(r_V_44_fu_5621_p0.read()) * sc_biguint<63>(r_V_44_fu_5621_p1.read());
}

void music::thread_r_V_fu_5316_p2() {
    r_V_fu_5316_p2 = (!zext_ln1287_fu_5312_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7563.read() >> (unsigned short)zext_ln1287_fu_5312_p1.read().to_uint();
}

void music::thread_ref_4oPi_table_256_V_address0() {
    ref_4oPi_table_256_V_address0 =  (sc_lv<4>) (zext_ln635_fu_5089_p1.read());
}

void music::thread_ref_4oPi_table_256_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_1;
    } else {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_0;
    }
}

void music::thread_ret_V_19_fu_5642_p2() {
    ret_V_19_fu_5642_p2 = (!ap_const_lv12_0.is_01() || !rhs_V_3_fu_5638_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(rhs_V_3_fu_5638_p1.read()));
}

void music::thread_ret_V_20_fu_5815_p3() {
    ret_V_20_fu_5815_p3 = (!or_ln300_fu_5810_p2.read()[0].is_01())? sc_lv<11>(): ((or_ln300_fu_5810_p2.read()[0].to_bool())? select_ln300_4_fu_5802_p3.read(): tmp_V_5_fu_5660_p4.read());
}

void music::thread_ret_V_21_fu_5831_p3() {
    ret_V_21_fu_5831_p3 = (!or_ln300_fu_5810_p2.read()[0].is_01())? sc_lv<52>(): ((or_ln300_fu_5810_p2.read()[0].to_bool())? select_ln300_6_fu_5823_p3.read(): tmp_V_6_fu_5670_p1.read());
}

void music::thread_ret_V_fu_5596_p2() {
    ret_V_fu_5596_p2 = (!sext_ln1146_fu_5592_p1.read().is_01() || !add_ln1146_fu_5577_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(sext_ln1146_fu_5592_p1.read()) + sc_biguint<64>(add_ln1146_fu_5577_p2.read()));
}

void music::thread_rev_fu_3504_p3() {
    rev_fu_3504_p3 = esl_concat<31,1>(trunc_ln111_fu_3496_p1.read(), trunc_ln110_fu_3500_p1.read());
}

void music::thread_rhs_V_2_fu_5571_p1() {
    rhs_V_2_fu_5571_p1 = esl_sext<64,56>(trunc_ln9_reg_7663.read());
}

void music::thread_rhs_V_3_fu_5638_p1() {
    rhs_V_3_fu_5638_p1 = esl_sext<12,11>(select_ln272_fu_5602_p3.read());
}

void music::thread_select_ln271_fu_5756_p3() {
    select_ln271_fu_5756_p3 = (!cos_basis_reg_7616.read()[0].is_01())? sc_lv<1>(): ((cos_basis_reg_7616.read()[0].to_bool())? tmp_27_fu_5680_p18.read(): tmp_28_fu_5718_p18.read());
}

void music::thread_select_ln272_2_fu_5608_p3() {
    select_ln272_2_fu_5608_p3 = (!cos_basis_reg_7616.read()[0].is_01())? sc_lv<63>(): ((cos_basis_reg_7616.read()[0].to_bool())? ap_const_lv63_7FFFFFFFFFFFFFFF: Mx_V_reg_7563.read());
}

void music::thread_select_ln272_fu_5602_p3() {
    select_ln272_fu_5602_p3 = (!cos_basis_reg_7616.read()[0].is_01())? sc_lv<11>(): ((cos_basis_reg_7616.read()[0].to_bool())? ap_const_lv11_0: Ex_V_reg_7570.read());
}

void music::thread_select_ln300_4_fu_5802_p3() {
    select_ln300_4_fu_5802_p3 = (!xor_ln300_fu_5796_p2.read()[0].is_01())? sc_lv<11>(): ((xor_ln300_fu_5796_p2.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void music::thread_select_ln300_6_fu_5823_p3() {
    select_ln300_6_fu_5823_p3 = (!xor_ln300_fu_5796_p2.read()[0].is_01())? sc_lv<52>(): ((xor_ln300_fu_5796_p2.read()[0].to_bool())? ap_const_lv52_FFFFFFFFFFFFF: ap_const_lv52_0);
}

void music::thread_select_ln311_fu_5777_p3() {
    select_ln311_fu_5777_p3 = (!or_ln311_fu_5772_p2.read()[0].is_01())? sc_lv<1>(): ((or_ln311_fu_5772_p2.read()[0].to_bool())? xor_ln311_fu_5767_p2.read(): p_Result_54_fu_5652_p3.read());
}

void music::thread_select_ln482_fu_5167_p3() {
    select_ln482_fu_5167_p3 = (!closepath_reg_7509.read()[0].is_01())? sc_lv<11>(): ((closepath_reg_7509.read()[0].to_bool())? add_ln114_fu_5162_p2.read(): ap_const_lv11_0);
}

void music::thread_sext_ln1067_fu_4322_p1() {
    sext_ln1067_fu_4322_p1 = esl_sext<4,3>(xor_ln1067_fu_4316_p2.read());
}

void music::thread_sext_ln1146_fu_5592_p1() {
    sext_ln1146_fu_5592_p1 = esl_sext<64,49>(add_ln1146_2_fu_5586_p2.read());
}

void music::thread_sext_ln1311_fu_5308_p1() {
    sext_ln1311_fu_5308_p1 = esl_sext<32,12>(ush_fu_5301_p3.read());
}

void music::thread_sext_ln1334_fu_5292_p1() {
    sext_ln1334_fu_5292_p1 = esl_sext<12,11>(Ex_V_reg_7570.read());
}

void music::thread_sext_ln182_fu_3618_p1() {
    sext_ln182_fu_3618_p1 = esl_sext<64,32>(i_lower_fu_3613_p2.read());
}

void music::thread_sext_ln185_fu_3624_p1() {
    sext_ln185_fu_3624_p1 = esl_sext<64,32>(i_0_i_reg_1978.read());
}

void music::thread_sext_ln54_fu_4464_p1() {
    sext_ln54_fu_4464_p1 = esl_sext<64,6>(add_ln54_fu_4459_p2.read());
}

void music::thread_sext_ln57_cast_fu_4506_p3() {
    sext_ln57_cast_fu_4506_p3 = esl_concat<4,2>(trunc_ln57_reg_7086.read(), ap_const_lv2_0);
}

void music::thread_sext_ln57_fu_4500_p1() {
    sext_ln57_fu_4500_p1 = esl_sext<64,34>(tmp_63_fu_4492_p3.read());
}

void music::thread_sext_ln59_1_fu_4533_p1() {
    sext_ln59_1_fu_4533_p1 = esl_sext<64,6>(add_ln59_1_fu_4528_p2.read());
}

void music::thread_sext_ln59_fu_4545_p1() {
    sext_ln59_fu_4545_p1 = esl_sext<64,6>(add_ln59_reg_7109.read());
}

void music::thread_sext_ln657_fu_5574_p1() {
    sext_ln657_fu_5574_p1 = esl_sext<49,48>(trunc_ln662_1_reg_7668.read());
}

void music::thread_sext_ln65_fu_4550_p1() {
    sext_ln65_fu_4550_p1 = esl_sext<32,3>(m_0_i_reg_2359.read());
}

void music::thread_sext_ln68_1_fu_4645_p1() {
    sext_ln68_1_fu_4645_p1 = esl_sext<64,6>(add_ln68_1_fu_4640_p2.read());
}

void music::thread_sext_ln68_2_cast_fu_4632_p3() {
    sext_ln68_2_cast_fu_4632_p3 = esl_concat<4,2>(trunc_ln68_1_fu_4628_p1.read(), ap_const_lv2_0);
}

void music::thread_sext_ln68_fu_4622_p1() {
    sext_ln68_fu_4622_p1 = esl_sext<64,6>(add_ln68_fu_4617_p2.read());
}

void music::thread_sext_ln70_fu_4574_p1() {
    sext_ln70_fu_4574_p1 = esl_sext<6,5>(tmp_59_fu_4566_p3.read());
}

void music::thread_sext_ln87_1_fu_4774_p1() {
    sext_ln87_1_fu_4774_p1 = esl_sext<64,32>(j_15_fu_4757_p2.read());
}

void music::thread_sext_ln87_fu_4769_p1() {
    sext_ln87_fu_4769_p1 = esl_sext<64,32>(flag_0_i_reg_2439.read());
}

void music::thread_sext_ln92_fu_4779_p1() {
    sext_ln92_fu_4779_p1 = esl_sext<64,32>(flag_0_i_reg_2439.read());
}

void music::thread_shl_ln_fu_3387_p3() {
    shl_ln_fu_3387_p3 = esl_concat<4,10>(l_0_reg_1866.read(), ap_const_lv10_0);
}

void music::thread_sin_basis_fu_5432_p2() {
    sin_basis_fu_5432_p2 = (cos_basis_fu_5377_p10.read() ^ ap_const_lv1_1);
}

void music::thread_sort_index_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read())) {
        sort_index_address0 = sort_index_addr_2_reg_7319.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4763_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln92_fu_4779_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4763_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln87_fu_4769_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        sort_index_address0 =  (sc_lv<2>) (zext_ln82_fu_4736_p1.read());
    } else {
        sort_index_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln238_fu_4952_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read())) {
        sort_index_address1 = sort_index_addr_1_reg_7313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4763_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln93_fu_4784_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4763_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (sext_ln87_1_fu_4774_p1.read());
    } else {
        sort_index_address1 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4763_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4763_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()))) {
        sort_index_ce0 = ap_const_logic_1;
    } else {
        sort_index_ce0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4763_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4763_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()))) {
        sort_index_ce1 = ap_const_logic_1;
    } else {
        sort_index_ce1 = ap_const_logic_0;
    }
}

void music::thread_sort_index_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read())) {
        sort_index_d0 = sort_index_load_reg_7370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        sort_index_d0 = i_0_i31_reg_2415.read();
    } else {
        sort_index_d0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_sort_index_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_fu_4724_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()))) {
        sort_index_we0 = ap_const_logic_1;
    } else {
        sort_index_we0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read())) {
        sort_index_we1 = ap_const_logic_1;
    } else {
        sort_index_we1 = ap_const_logic_0;
    }
}

void music::thread_stage_fu_3591_p2() {
    stage_fu_3591_p2 = (!stage_0_i_reg_1943.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(stage_0_i_reg_1943.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_sub_ln1311_fu_5295_p2() {
    sub_ln1311_fu_5295_p2 = (!ap_const_lv12_0.is_01() || !sext_ln1334_fu_5292_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(sext_ln1334_fu_5292_p1.read()));
}

void music::thread_t1_V_fu_5560_p3() {
    t1_V_fu_5560_p3 = esl_concat<59,4>(p_Val2_58_reg_7658.read(), ap_const_lv4_0);
}

void music::thread_temp_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln269_1_fu_6091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_5_reg_7750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_fu_4153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_1_reg_6661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3255_p1.read());
    } else {
        temp_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()))) {
        temp_mat_M_imag_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        temp_mat_M_imag_d0 = complex_M_imag_read_2_reg_2536.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_imag_d0 = reg_3031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln258_fu_5949_p2.read())))) {
        temp_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln269_1_fu_6091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_5_reg_7745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4401_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_fu_4153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_1_reg_6656.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3255_p1.read());
    } else {
        temp_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()))) {
        temp_mat_M_real_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read())) {
        temp_mat_M_real_d0 = complex_M_real_read_2_reg_2549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_real_d0 = reg_3021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln258_fu_5949_p2.read())))) {
        temp_mat_M_real_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_theta_address0() {
    theta_address0 =  (sc_lv<9>) (zext_ln249_fu_5018_p1.read());
}

void music::thread_theta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state274.read())) {
        theta_ce0 = ap_const_logic_1;
    } else {
        theta_ce0 = ap_const_logic_0;
    }
}

void music::thread_tmp_22_fu_4803_p4() {
    tmp_22_fu_4803_p4 = bitcast_ln87_fu_4799_p1.read().range(30, 23);
}

void music::thread_tmp_24_fu_4821_p4() {
    tmp_24_fu_4821_p4 = bitcast_ln87_1_fu_4817_p1.read().range(30, 23);
}

void music::thread_tmp_26_fu_3139_p3() {
    tmp_26_fu_3139_p3 = esl_concat<4,2>(phi_ln200_reg_1705.read(), phi_ln200_1_reg_1717.read());
}

void music::thread_tmp_33_fu_3723_p3() {
    tmp_33_fu_3723_p3 = esl_concat<11,3>(jj_0_reg_1998.read(), ap_const_lv3_0);
}

void music::thread_tmp_34_fu_3735_p3() {
    tmp_34_fu_3735_p3 = esl_concat<11,1>(jj_0_reg_1998.read(), ap_const_lv1_0);
}

void music::thread_tmp_36_cast_fu_3774_p3() {
    tmp_36_cast_fu_3774_p3 = esl_concat<15,2>(add_ln230_1_fu_3769_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_37_fu_3782_p3() {
    tmp_37_fu_3782_p3 = esl_concat<4,2>(l26_0_reg_2010.read(), ap_const_lv2_0);
}

void music::thread_tmp_38_fu_3436_p3() {
    tmp_38_fu_3436_p3 = esl_concat<14,2>(add_ln214_fu_3431_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_39_fu_3851_p3() {
    tmp_39_fu_3851_p3 = esl_concat<3,2>(x_0_i_reg_2032.read(), ap_const_lv2_0);
}

void music::thread_tmp_40_fu_3177_p3() {
    tmp_40_fu_3177_p3 = esl_concat<2,2>(phi_ln201_reg_1728.read(), phi_ln201_1_reg_1740.read());
}

void music::thread_tmp_41_fu_3906_p3() {
    tmp_41_fu_3906_p3 = esl_concat<4,2>(l_0_i_reg_2078.read(), ap_const_lv2_0);
}

void music::thread_tmp_42_fu_3653_p3() {
    tmp_42_fu_3653_p3 = esl_concat<11,3>(j25_0_reg_1987.read(), ap_const_lv3_0);
}

void music::thread_tmp_43_fu_3665_p3() {
    tmp_43_fu_3665_p3 = esl_concat<11,1>(j25_0_reg_1987.read(), ap_const_lv1_0);
}

void music::thread_tmp_44_fu_3215_p3() {
    tmp_44_fu_3215_p3 = esl_concat<2,1>(phi_ln202_reg_1751.read(), phi_ln202_1_reg_1763.read());
}

void music::thread_tmp_45_cast_fu_3688_p3() {
    tmp_45_cast_fu_3688_p3 = esl_concat<15,2>(add_ln219_1_fu_3683_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_45_fu_3247_p3() {
    tmp_45_fu_3247_p3 = esl_concat<2,2>(phi_ln203_reg_1774.read(), phi_ln203_1_reg_1786.read());
}

void music::thread_tmp_46_fu_3285_p3() {
    tmp_46_fu_3285_p3 = esl_concat<9,2>(phi_ln204_reg_1797.read(), phi_ln204_1_reg_1809.read());
}

void music::thread_tmp_47_fu_3968_p3() {
    tmp_47_fu_3968_p3 = esl_concat<2,2>(phi_ln11_reg_2089.read(), phi_ln11_1_reg_2101.read());
}

void music::thread_tmp_48_fu_3597_p4() {
    tmp_48_fu_3597_p4 = i_0_i_reg_1978.read().range(31, 10);
}

void music::thread_tmp_49_fu_4120_p3() {
    tmp_49_fu_4120_p3 = esl_concat<3,2>(i_0_i25_reg_2181.read(), ap_const_lv2_0);
}

void music::thread_tmp_50_fu_4288_p3() {
    tmp_50_fu_4288_p3 = esl_concat<3,2>(count_0_i_reg_2273.read(), ap_const_lv2_0);
}

void music::thread_tmp_51_fu_4183_p3() {
    tmp_51_fu_4183_p3 = esl_concat<3,2>(i17_0_i_reg_2214.read(), ap_const_lv2_0);
}

void music::thread_tmp_52_fu_4348_p3() {
    tmp_52_fu_4348_p3 = esl_concat<3,2>(i19_0_i_reg_2285.read(), ap_const_lv2_0);
}

void music::thread_tmp_53_fu_4437_p3() {
    tmp_53_fu_4437_p3 = esl_concat<2,2>(j_14_reg_2308.read(), ap_const_lv2_0);
}

void music::thread_tmp_54_fu_4423_p3() {
    tmp_54_fu_4423_p3 = esl_concat<2,2>(j_14_reg_2308.read(), j_14_reg_2308.read());
}

void music::thread_tmp_55_fu_4238_p3() {
    tmp_55_fu_4238_p3 = esl_concat<3,2>(k_0_i_reg_2262.read(), ap_const_lv2_0);
}

void music::thread_tmp_56_fu_4898_p3() {
    tmp_56_fu_4898_p3 = esl_concat<3,2>(x_0_reg_2458.read(), ap_const_lv2_0);
}

void music::thread_tmp_57_fu_4910_p3() {
    tmp_57_fu_4910_p3 = esl_concat<3,1>(x_0_reg_2458.read(), ap_const_lv1_0);
}

void music::thread_tmp_58_fu_4930_p3() {
    tmp_58_fu_4930_p3 = esl_concat<60,4>(ap_const_lv60_0, or_ln241_fu_4924_p2.read());
}

void music::thread_tmp_59_fu_4566_p3() {
    tmp_59_fu_4566_p3 = esl_concat<3,2>(m_0_i_reg_2359.read(), ap_const_lv2_0);
}

void music::thread_tmp_60_fu_4006_p3() {
    tmp_60_fu_4006_p3 = esl_concat<2,2>(phi_ln12_reg_2112.read(), phi_ln12_1_reg_2124.read());
}

void music::thread_tmp_61_fu_4701_p3() {
    tmp_61_fu_4701_p3 = esl_concat<3,2>(i25_0_i_reg_2404.read(), ap_const_lv2_0);
}

void music::thread_tmp_62_fu_4044_p3() {
    tmp_62_fu_4044_p3 = esl_concat<2,2>(phi_ln13_reg_2135.read(), phi_ln13_1_reg_2147.read());
}

void music::thread_tmp_63_fu_4492_p3() {
    tmp_63_fu_4492_p3 = esl_concat<32,2>(j_11_fu_4476_p2.read(), j_14_reg_2308.read());
}

void music::thread_tmp_64_fu_5886_p3() {
    tmp_64_fu_5886_p3 = esl_concat<3,1>(i_0_reg_2514.read(), ap_const_lv1_0);
}

void music::thread_tmp_65_fu_5898_p3() {
    tmp_65_fu_5898_p3 = esl_concat<3,2>(i_0_reg_2514.read(), ap_const_lv2_0);
}

void music::thread_tmp_66_fu_5513_p4() {
    tmp_66_fu_5513_p4 = r_V_42_fu_5507_p2.read().range(74, 38);
}

void music::thread_tmp_67_fu_5540_p4() {
    tmp_67_fu_5540_p4 = r_V_43_fu_5534_p2.read().range(59, 31);
}

void music::thread_tmp_68_fu_6019_p3() {
    tmp_68_fu_6019_p3 = esl_concat<9,2>(i31_0_reg_2573.read(), ap_const_lv2_0);
}

void music::thread_tmp_69_fu_5926_p3() {
    tmp_69_fu_5926_p3 = esl_concat<3,1>(j30_0_reg_2525.read(), ap_const_lv1_0);
}

void music::thread_tmp_70_fu_6150_p3() {
    tmp_70_fu_6150_p3 = esl_concat<9,2>(i34_0_reg_2643.read(), ap_const_lv2_0);
}

void music::thread_tmp_71_fu_6074_p3() {
    tmp_71_fu_6074_p3 = esl_concat<3,2>(k33_0_reg_2621.read(), ap_const_lv2_0);
}

void music::thread_tmp_72_fu_4082_p3() {
    tmp_72_fu_4082_p3 = esl_concat<2,2>(phi_ln14_reg_2158.read(), phi_ln14_1_reg_2170.read());
}

void music::thread_tmp_73_fu_4554_p3() {
    tmp_73_fu_4554_p3 = m_0_i_reg_2359.read().range(2, 2);
}

void music::thread_tmp_V_4_fu_5055_p1() {
    tmp_V_4_fu_5055_p1 = p_Val2_s_fu_5033_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_5_fu_5660_p4() {
    tmp_V_5_fu_5660_p4 = p_Val2_65_fu_5649_p1.read().range(62, 52);
}

void music::thread_tmp_V_6_fu_5670_p1() {
    tmp_V_6_fu_5670_p1 = p_Val2_65_fu_5649_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_fu_5045_p4() {
    tmp_V_fu_5045_p4 = p_Val2_s_fu_5033_p1.read().range(62, 52);
}

void music::thread_tmp_i_i_i1_fu_5232_p3() {
    tmp_i_i_i1_fu_5232_p3 = esl_cttz<64,64>(p_Result_52_fu_5224_p3.read());
}

void music::thread_trunc_ln108_fu_3464_p1() {
    trunc_ln108_fu_3464_p1 = input_assign_reg_1900.read().range(10-1, 0);
}

void music::thread_trunc_ln110_fu_3500_p1() {
    trunc_ln110_fu_3500_p1 = p_0_i_i_i_reg_1934.read().range(1-1, 0);
}

void music::thread_trunc_ln111_fu_3496_p1() {
    trunc_ln111_fu_3496_p1 = reversed_reg_1912.read().range(31-1, 0);
}

void music::thread_trunc_ln54_fu_4455_p1() {
    trunc_ln54_fu_4455_p1 = j22_0_i_reg_2320.read().range(6-1, 0);
}

void music::thread_trunc_ln57_fu_4488_p1() {
    trunc_ln57_fu_4488_p1 = j_11_fu_4476_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln59_fu_4519_p1() {
    trunc_ln59_fu_4519_p1 = q_0_i_reg_2338.read().range(6-1, 0);
}

void music::thread_trunc_ln601_fu_5094_p1() {
    trunc_ln601_fu_5094_p1 = addr_V_fu_5071_p3.read().range(7-1, 0);
}

void music::thread_trunc_ln68_1_fu_4628_p1() {
    trunc_ln68_1_fu_4628_p1 = j_10_fu_4601_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln68_fu_4613_p1() {
    trunc_ln68_fu_4613_p1 = j_10_fu_4601_p2.read().range(6-1, 0);
}

void music::thread_trunc_ln745_fu_5180_p1() {
    trunc_ln745_fu_5180_p1 = p_Val2_70_fu_5174_p3.read().range(1-1, 0);
}

void music::thread_trunc_ln87_1_fu_4831_p1() {
    trunc_ln87_1_fu_4831_p1 = bitcast_ln87_1_fu_4817_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln87_fu_4813_p1() {
    trunc_ln87_fu_4813_p1 = bitcast_ln87_fu_4799_p1.read().range(23-1, 0);
}

void music::thread_ush_fu_5301_p3() {
    ush_fu_5301_p3 = (!isNeg_reg_7576.read()[0].is_01())? sc_lv<12>(): ((isNeg_reg_7576.read()[0].to_bool())? sub_ln1311_fu_5295_p2.read(): sext_ln1334_fu_5292_p1.read());
}

void music::thread_w_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read())) {
        w_M_imag_address0 = w_M_imag_addr_1_reg_7969.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        w_M_imag_address0 =  (sc_lv<9>) (zext_ln278_reg_7915.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_imag_address0 =  (sc_lv<9>) (zext_ln205_fu_3317_p1.read());
    } else {
        w_M_imag_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()))) {
        w_M_imag_ce0 = ap_const_logic_1;
    } else {
        w_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read())) {
        w_M_imag_d0 = grp_fu_2765_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_imag_d0 = ap_const_lv32_0;
    } else {
        w_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_w_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()))) {
        w_M_imag_we0 = ap_const_logic_1;
    } else {
        w_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_w_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln285_fu_6218_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read())) {
        w_M_real_address0 = w_M_real_addr_2_reg_7964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln278_reg_7915.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln205_fu_3317_p1.read());
    } else {
        w_M_real_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()))) {
        w_M_real_ce0 = ap_const_logic_1;
    } else {
        w_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read())) {
        w_M_real_d0 = grp_fu_2760_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_real_d0 = ap_const_lv32_0;
    } else {
        w_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_w_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()))) {
        w_M_real_we0 = ap_const_logic_1;
    } else {
        w_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_x_1_fu_4892_p2() {
    x_1_fu_4892_p2 = (!x_0_reg_2458.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_2458.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_2_fu_4995_p2() {
    x_2_fu_4995_p2 = (!x28_0_reg_2480.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x28_0_reg_2480.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_fu_3841_p2() {
    x_fu_3841_p2 = (!x_0_i_reg_2032.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_i_reg_2032.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_xor_ln1067_fu_4316_p2() {
    xor_ln1067_fu_4316_p2 = (count_0_i_reg_2273.read() ^ ap_const_lv3_4);
}

void music::thread_xor_ln202_fu_3209_p2() {
    xor_ln202_fu_3209_p2 = (phi_ln202_1_reg_1763.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln251_fu_5863_p2() {
    xor_ln251_fu_5863_p2 = (bitcast_ln251_fu_5859_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln300_fu_5796_p2() {
    xor_ln300_fu_5796_p2 = (and_ln300_2_fu_5792_p2.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln311_fu_5767_p2() {
    xor_ln311_fu_5767_p2 = (icmp_ln833_2_reg_7588.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln444_1_fu_4677_p2() {
    xor_ln444_1_fu_4677_p2 = (bitcast_ln444_2_fu_4673_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln444_fu_4661_p2() {
    xor_ln444_fu_4661_p2 = (bitcast_ln444_fu_4657_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_1_fu_5991_p2() {
    xor_ln667_1_fu_5991_p2 = (bitcast_ln667_2_fu_5987_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_2_fu_6118_p2() {
    xor_ln667_2_fu_6118_p2 = (bitcast_ln667_4_fu_6114_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_fu_3944_p2() {
    xor_ln667_fu_3944_p2 = (bitcast_ln667_fu_3940_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_y_1_fu_5012_p2() {
    y_1_fu_5012_p2 = (!y29_0_reg_2503.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(y29_0_reg_2503.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_y_2_fu_4946_p2() {
    y_2_fu_4946_p2 = (!y_0_reg_2469.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_2469.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_y_fu_3869_p2() {
    y_fu_3869_p2 = (!y_0_i_reg_2043.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_i_reg_2043.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_zext_ln1027_10_fu_3347_p1() {
    zext_ln1027_10_fu_3347_p1 = esl_zext<11,9>(phi_ln206_1_reg_1855.read());
}

void music::thread_zext_ln1027_11_fu_3357_p1() {
    zext_ln1027_11_fu_3357_p1 = esl_zext<64,11>(add_ln1027_fu_3351_p2.read());
}

void music::thread_zext_ln1027_2_fu_3185_p1() {
    zext_ln1027_2_fu_3185_p1 = esl_zext<64,4>(tmp_40_fu_3177_p3.read());
}

void music::thread_zext_ln1027_3_fu_3223_p1() {
    zext_ln1027_3_fu_3223_p1 = esl_zext<64,3>(tmp_44_fu_3215_p3.read());
}

void music::thread_zext_ln1027_4_fu_3255_p1() {
    zext_ln1027_4_fu_3255_p1 = esl_zext<64,4>(tmp_45_fu_3247_p3.read());
}

void music::thread_zext_ln1027_5_fu_3293_p1() {
    zext_ln1027_5_fu_3293_p1 = esl_zext<64,11>(tmp_46_fu_3285_p3.read());
}

void music::thread_zext_ln1027_6_fu_3976_p1() {
    zext_ln1027_6_fu_3976_p1 = esl_zext<64,4>(tmp_47_fu_3968_p3.read());
}

void music::thread_zext_ln1027_7_fu_4014_p1() {
    zext_ln1027_7_fu_4014_p1 = esl_zext<64,4>(tmp_60_fu_4006_p3.read());
}

void music::thread_zext_ln1027_8_fu_4052_p1() {
    zext_ln1027_8_fu_4052_p1 = esl_zext<64,4>(tmp_62_fu_4044_p3.read());
}

void music::thread_zext_ln1027_9_fu_4090_p1() {
    zext_ln1027_9_fu_4090_p1 = esl_zext<64,4>(tmp_72_fu_4082_p3.read());
}

void music::thread_zext_ln1027_fu_3147_p1() {
    zext_ln1027_fu_3147_p1 = esl_zext<64,6>(tmp_26_fu_3139_p3.read());
}

void music::thread_zext_ln102_1_fu_3923_p1() {
    zext_ln102_1_fu_3923_p1 = esl_zext<64,7>(add_ln102_fu_3918_p2.read());
}

void music::thread_zext_ln102_2_fu_3934_p1() {
    zext_ln102_2_fu_3934_p1 = esl_zext<64,7>(add_ln102_1_fu_3929_p2.read());
}

void music::thread_zext_ln102_fu_3914_p1() {
    zext_ln102_fu_3914_p1 = esl_zext<7,6>(tmp_41_fu_3906_p3.read());
}

void music::thread_zext_ln1044_1_fu_4296_p1() {
    zext_ln1044_1_fu_4296_p1 = esl_zext<6,5>(tmp_50_fu_4288_p3.read());
}

void music::thread_zext_ln1044_2_fu_4306_p1() {
    zext_ln1044_2_fu_4306_p1 = esl_zext<64,6>(add_ln1044_fu_4300_p2.read());
}

void music::thread_zext_ln1044_fu_4284_p1() {
    zext_ln1044_fu_4284_p1 = esl_zext<6,3>(count_0_i_reg_2273.read());
}

void music::thread_zext_ln104_1_fu_3875_p1() {
    zext_ln104_1_fu_3875_p1 = esl_zext<7,3>(y_0_i_reg_2043.read());
}

void music::thread_zext_ln104_2_fu_3879_p1() {
    zext_ln104_2_fu_3879_p1 = esl_zext<6,3>(y_0_i_reg_2043.read());
}

void music::thread_zext_ln104_3_fu_3888_p1() {
    zext_ln104_3_fu_3888_p1 = esl_zext<64,6>(add_ln104_fu_3883_p2.read());
}

void music::thread_zext_ln104_fu_3847_p1() {
    zext_ln104_fu_3847_p1 = esl_zext<7,3>(x_0_i_reg_2032.read());
}

void music::thread_zext_ln1067_fu_4326_p1() {
    zext_ln1067_fu_4326_p1 = esl_zext<64,4>(sext_ln1067_fu_4322_p1.read());
}

void music::thread_zext_ln108_fu_3468_p1() {
    zext_ln108_fu_3468_p1 = esl_zext<32,11>(input_assign_reg_1900.read());
}

void music::thread_zext_ln112_fu_3522_p1() {
    zext_ln112_fu_3522_p1 = esl_zext<10,9>(input_assign_1_fu_3512_p4.read());
}

void music::thread_zext_ln1146_1_fu_5583_p1() {
    zext_ln1146_1_fu_5583_p1 = esl_zext<49,38>(add_ln1146_1_reg_7673.read());
}

void music::thread_zext_ln1146_fu_5550_p1() {
    zext_ln1146_fu_5550_p1 = esl_zext<38,29>(tmp_67_fu_5540_p4.read());
}

void music::thread_zext_ln1253_fu_5244_p1() {
    zext_ln1253_fu_5244_p1 = esl_zext<124,6>(Mx_zeros_V_fu_5240_p1.read());
}

void music::thread_zext_ln126_fu_3531_p1() {
    zext_ln126_fu_3531_p1 = esl_zext<64,11>(input_assign_reg_1900.read());
}

void music::thread_zext_ln127_fu_3537_p1() {
    zext_ln127_fu_3537_p1 = esl_zext<64,32>(reversed_reg_1912.read());
}

void music::thread_zext_ln1287_fu_5312_p1() {
    zext_ln1287_fu_5312_p1 = esl_zext<63,32>(sext_ln1311_fu_5308_p1.read());
}

void music::thread_zext_ln159_fu_3543_p1() {
    zext_ln159_fu_3543_p1 = esl_zext<11,4>(stage_0_i_reg_1943.read());
}

void music::thread_zext_ln161_fu_3569_p1() {
    zext_ln161_fu_3569_p1 = esl_zext<32,11>(DFTpts_reg_6451.read());
}

void music::thread_zext_ln205_fu_3317_p1() {
    zext_ln205_fu_3317_p1 = esl_zext<64,9>(phi_ln205_reg_1820.read());
}

void music::thread_zext_ln212_fu_3395_p1() {
    zext_ln212_fu_3395_p1 = esl_zext<15,4>(l_0_reg_1866.read());
}

void music::thread_zext_ln213_1_fu_3411_p1() {
    zext_ln213_1_fu_3411_p1 = esl_zext<17,3>(n_0_reg_1877.read());
}

void music::thread_zext_ln213_fu_3415_p1() {
    zext_ln213_fu_3415_p1 = esl_zext<14,11>(j_0_reg_1888.read());
}

void music::thread_zext_ln214_1_fu_3453_p1() {
    zext_ln214_1_fu_3453_p1 = esl_zext<64,17>(add_ln214_1_fu_3448_p2.read());
}

void music::thread_zext_ln214_2_fu_3458_p1() {
    zext_ln214_2_fu_3458_p1 = esl_zext<64,11>(j_0_reg_1888.read());
}

void music::thread_zext_ln214_fu_3444_p1() {
    zext_ln214_fu_3444_p1 = esl_zext<17,16>(tmp_38_fu_3436_p3.read());
}

void music::thread_zext_ln219_1_fu_3661_p1() {
    zext_ln219_1_fu_3661_p1 = esl_zext<15,14>(tmp_42_fu_3653_p3.read());
}

void music::thread_zext_ln219_2_fu_3673_p1() {
    zext_ln219_2_fu_3673_p1 = esl_zext<15,12>(tmp_43_fu_3665_p3.read());
}

void music::thread_zext_ln219_3_fu_3701_p1() {
    zext_ln219_3_fu_3701_p1 = esl_zext<64,17>(add_ln219_2_reg_6546.read());
}

void music::thread_zext_ln219_fu_3647_p1() {
    zext_ln219_fu_3647_p1 = esl_zext<64,11>(j25_0_reg_1987.read());
}

void music::thread_zext_ln21_fu_4128_p1() {
    zext_ln21_fu_4128_p1 = esl_zext<6,5>(tmp_49_fu_4120_p3.read());
}

void music::thread_zext_ln226_fu_3718_p1() {
    zext_ln226_fu_3718_p1 = esl_zext<64,11>(jj_0_reg_1998.read());
}

void music::thread_zext_ln228_fu_3790_p1() {
    zext_ln228_fu_3790_p1 = esl_zext<7,6>(tmp_37_fu_3782_p3.read());
}

void music::thread_zext_ln22_1_fu_4153_p1() {
    zext_ln22_1_fu_4153_p1 = esl_zext<64,6>(add_ln22_fu_4148_p2.read());
}

void music::thread_zext_ln22_fu_4144_p1() {
    zext_ln22_fu_4144_p1 = esl_zext<6,3>(j_0_i26_reg_2192.read());
}

void music::thread_zext_ln230_1_fu_3743_p1() {
    zext_ln230_1_fu_3743_p1 = esl_zext<15,12>(tmp_34_fu_3735_p3.read());
}

void music::thread_zext_ln230_2_fu_3765_p1() {
    zext_ln230_2_fu_3765_p1 = esl_zext<15,4>(l26_0_reg_2010.read());
}

void music::thread_zext_ln230_3_fu_3806_p1() {
    zext_ln230_3_fu_3806_p1 = esl_zext<7,3>(n27_0_reg_2021.read());
}

void music::thread_zext_ln230_4_fu_3810_p1() {
    zext_ln230_4_fu_3810_p1 = esl_zext<17,3>(n27_0_reg_2021.read());
}

void music::thread_zext_ln230_5_fu_3819_p1() {
    zext_ln230_5_fu_3819_p1 = esl_zext<64,17>(add_ln230_2_fu_3814_p2.read());
}

void music::thread_zext_ln230_6_fu_3830_p1() {
    zext_ln230_6_fu_3830_p1 = esl_zext<64,7>(add_ln230_3_reg_6620.read());
}

void music::thread_zext_ln230_fu_3731_p1() {
    zext_ln230_fu_3731_p1 = esl_zext<15,14>(tmp_33_fu_3723_p3.read());
}

void music::thread_zext_ln238_fu_4952_p1() {
    zext_ln238_fu_4952_p1 = esl_zext<64,3>(y_0_reg_2469.read());
}

void music::thread_zext_ln239_1_fu_4918_p1() {
    zext_ln239_1_fu_4918_p1 = esl_zext<64,4>(tmp_57_fu_4910_p3.read());
}

void music::thread_zext_ln239_2_fu_4957_p1() {
    zext_ln239_2_fu_4957_p1 = esl_zext<6,3>(y_0_reg_2469.read());
}

void music::thread_zext_ln239_3_fu_4966_p1() {
    zext_ln239_3_fu_4966_p1 = esl_zext<64,6>(add_ln239_reg_7416.read());
}

void music::thread_zext_ln239_fu_4906_p1() {
    zext_ln239_fu_4906_p1 = esl_zext<6,5>(tmp_56_fu_4898_p3.read());
}

void music::thread_zext_ln247_fu_5001_p1() {
    zext_ln247_fu_5001_p1 = esl_zext<64,3>(x28_0_reg_2480.read());
}

void music::thread_zext_ln249_fu_5018_p1() {
    zext_ln249_fu_5018_p1 = esl_zext<64,9>(y29_0_reg_2503.read());
}

void music::thread_zext_ln250_1_fu_5854_p1() {
    zext_ln250_1_fu_5854_p1 = esl_zext<64,11>(add_ln250_reg_7475.read());
}

void music::thread_zext_ln250_fu_5023_p1() {
    zext_ln250_fu_5023_p1 = esl_zext<11,9>(y29_0_reg_2503.read());
}

void music::thread_zext_ln255_fu_5906_p1() {
    zext_ln255_fu_5906_p1 = esl_zext<6,5>(tmp_65_fu_5898_p3.read());
}

void music::thread_zext_ln259_1_fu_5961_p1() {
    zext_ln259_1_fu_5961_p1 = esl_zext<5,2>(k_0_reg_2562.read());
}

void music::thread_zext_ln259_2_fu_5970_p1() {
    zext_ln259_2_fu_5970_p1 = esl_zext<64,5>(add_ln259_fu_5965_p2.read());
}

void music::thread_zext_ln259_3_fu_5981_p1() {
    zext_ln259_3_fu_5981_p1 = esl_zext<64,5>(add_ln259_1_fu_5976_p2.read());
}

void music::thread_zext_ln259_fu_5922_p1() {
    zext_ln259_fu_5922_p1 = esl_zext<6,3>(j30_0_reg_2525.read());
}

void music::thread_zext_ln261_1_fu_5934_p1() {
    zext_ln261_1_fu_5934_p1 = esl_zext<5,4>(tmp_69_fu_5926_p3.read());
}

void music::thread_zext_ln261_2_fu_5943_p1() {
    zext_ln261_2_fu_5943_p1 = esl_zext<64,6>(add_ln261_fu_5938_p2.read());
}

void music::thread_zext_ln261_fu_5894_p1() {
    zext_ln261_fu_5894_p1 = esl_zext<5,4>(tmp_64_fu_5886_p3.read());
}

void music::thread_zext_ln265_fu_6027_p1() {
    zext_ln265_fu_6027_p1 = esl_zext<12,11>(tmp_68_fu_6019_p3.read());
}

void music::thread_zext_ln269_1_fu_6091_p1() {
    zext_ln269_1_fu_6091_p1 = esl_zext<64,6>(add_ln269_fu_6086_p2.read());
}

void music::thread_zext_ln269_2_fu_6108_p1() {
    zext_ln269_2_fu_6108_p1 = esl_zext<64,11>(add_ln269_1_fu_6103_p2.read());
}

void music::thread_zext_ln269_fu_6082_p1() {
    zext_ln269_fu_6082_p1 = esl_zext<6,5>(tmp_71_fu_6074_p3.read());
}

void music::thread_zext_ln271_1_fu_6043_p1() {
    zext_ln271_1_fu_6043_p1 = esl_zext<6,3>(j32_0_reg_2584.read());
}

void music::thread_zext_ln271_2_fu_6047_p1() {
    zext_ln271_2_fu_6047_p1 = esl_zext<12,3>(j32_0_reg_2584.read());
}

void music::thread_zext_ln271_3_fu_6056_p1() {
    zext_ln271_3_fu_6056_p1 = esl_zext<64,12>(add_ln271_fu_6051_p2.read());
}

void music::thread_zext_ln271_fu_6015_p1() {
    zext_ln271_fu_6015_p1 = esl_zext<11,9>(i31_0_reg_2573.read());
}

void music::thread_zext_ln277_fu_6158_p1() {
    zext_ln277_fu_6158_p1 = esl_zext<12,11>(tmp_70_fu_6150_p3.read());
}

void music::thread_zext_ln278_1_fu_6146_p1() {
    zext_ln278_1_fu_6146_p1 = esl_zext<11,9>(i34_0_reg_2643.read());
}

void music::thread_zext_ln278_2_fu_6174_p1() {
    zext_ln278_2_fu_6174_p1 = esl_zext<12,3>(k35_0_reg_2678.read());
}

void music::thread_zext_ln278_3_fu_6183_p1() {
    zext_ln278_3_fu_6183_p1 = esl_zext<64,12>(add_ln278_fu_6178_p2.read());
}

void music::thread_zext_ln278_4_fu_6200_p1() {
    zext_ln278_4_fu_6200_p1 = esl_zext<64,11>(add_ln278_1_fu_6195_p2.read());
}

void music::thread_zext_ln278_fu_6142_p1() {
    zext_ln278_fu_6142_p1 = esl_zext<64,9>(i34_0_reg_2643.read());
}

void music::thread_zext_ln285_fu_6218_p1() {
    zext_ln285_fu_6218_p1 = esl_zext<64,9>(i36_0_reg_2700.read());
}

void music::thread_zext_ln30_fu_4191_p1() {
    zext_ln30_fu_4191_p1 = esl_zext<6,5>(tmp_51_fu_4183_p3.read());
}

void music::thread_zext_ln34_1_fu_4246_p1() {
    zext_ln34_1_fu_4246_p1 = esl_zext<6,5>(tmp_55_fu_4238_p3.read());
}

void music::thread_zext_ln34_2_fu_4255_p1() {
    zext_ln34_2_fu_4255_p1 = esl_zext<64,6>(add_ln34_fu_4250_p2.read());
}

void music::thread_zext_ln34_3_fu_4266_p1() {
    zext_ln34_3_fu_4266_p1 = esl_zext<64,6>(add_ln34_1_fu_4261_p2.read());
}

void music::thread_zext_ln34_fu_4234_p1() {
    zext_ln34_fu_4234_p1 = esl_zext<6,3>(k_0_i_reg_2262.read());
}

void music::thread_zext_ln36_1_fu_4216_p1() {
    zext_ln36_1_fu_4216_p1 = esl_zext<64,6>(add_ln36_fu_4211_p2.read());
}

void music::thread_zext_ln36_fu_4207_p1() {
    zext_ln36_fu_4207_p1 = esl_zext<6,3>(j18_0_i_reg_2225.read());
}

void music::thread_zext_ln41_fu_4311_p1() {
    zext_ln41_fu_4311_p1 = esl_zext<64,3>(count_0_i_reg_2273.read());
}

void music::thread_zext_ln45_1_fu_4356_p1() {
    zext_ln45_1_fu_4356_p1 = esl_zext<6,5>(tmp_52_fu_4348_p3.read());
}

void music::thread_zext_ln45_2_fu_4366_p1() {
    zext_ln45_2_fu_4366_p1 = esl_zext<64,6>(add_ln45_fu_4360_p2.read());
}

void music::thread_zext_ln45_fu_4344_p1() {
    zext_ln45_fu_4344_p1 = esl_zext<6,3>(i19_0_i_reg_2285.read());
}

void music::thread_zext_ln47_1_fu_4401_p1() {
    zext_ln47_1_fu_4401_p1 = esl_zext<64,6>(add_ln47_fu_4396_p2.read());
}

void music::thread_zext_ln47_fu_4392_p1() {
    zext_ln47_fu_4392_p1 = esl_zext<6,3>(j20_0_i_reg_2297.read());
}

void music::thread_zext_ln498_fu_5445_p1() {
    zext_ln498_fu_5445_p1 = esl_zext<64,8>(p_Result_53_fu_5438_p3.read());
}

void music::thread_zext_ln51_fu_4407_p1() {
    zext_ln51_fu_4407_p1 = esl_zext<32,2>(j_14_reg_2308.read());
}

void music::thread_zext_ln52_1_fu_4431_p1() {
    zext_ln52_1_fu_4431_p1 = esl_zext<64,4>(tmp_54_fu_4423_p3.read());
}

void music::thread_zext_ln52_fu_4445_p1() {
    zext_ln52_fu_4445_p1 = esl_zext<6,4>(tmp_53_fu_4437_p3.read());
}

void music::thread_zext_ln635_fu_5089_p1() {
    zext_ln635_fu_5089_p1 = esl_zext<64,4>(p_Result_i_i_i_fu_5079_p4.read());
}

void music::thread_zext_ln655_fu_5264_p1() {
    zext_ln655_fu_5264_p1 = esl_zext<11,6>(Mx_zeros_V_fu_5240_p1.read());
}

void music::thread_zext_ln662_fu_5523_p1() {
    zext_ln662_fu_5523_p1 = esl_zext<38,37>(tmp_66_fu_5513_p4.read());
}

void music::thread_zext_ln68_fu_4562_p1() {
    zext_ln68_fu_4562_p1 = esl_zext<6,3>(m_0_i_reg_2359.read());
}

void music::thread_zext_ln70_fu_4584_p1() {
    zext_ln70_fu_4584_p1 = esl_zext<64,6>(add_ln70_fu_4578_p2.read());
}

void music::thread_zext_ln72_fu_4595_p1() {
    zext_ln72_fu_4595_p1 = esl_zext<64,6>(add_ln72_fu_4590_p2.read());
}

void music::thread_zext_ln744_fu_5098_p1() {
    zext_ln744_fu_5098_p1 = esl_zext<256,7>(trunc_ln601_reg_7520.read());
}

void music::thread_zext_ln76_1_fu_4718_p1() {
    zext_ln76_1_fu_4718_p1 = esl_zext<64,6>(add_ln76_fu_4713_p2.read());
}

void music::thread_zext_ln76_fu_4709_p1() {
    zext_ln76_fu_4709_p1 = esl_zext<6,5>(tmp_61_fu_4701_p3.read());
}

void music::thread_zext_ln82_fu_4736_p1() {
    zext_ln82_fu_4736_p1 = esl_zext<64,3>(i_0_i31_reg_2415.read());
}

void music::thread_zext_ln85_fu_4741_p1() {
    zext_ln85_fu_4741_p1 = esl_zext<32,2>(flag_reg_2427.read());
}

void music::thread_zext_ln87_1_fu_4794_p1() {
    zext_ln87_1_fu_4794_p1 = esl_zext<64,3>(sort_index_q1.read());
}

void music::thread_zext_ln87_fu_4789_p1() {
    zext_ln87_fu_4789_p1 = esl_zext<64,3>(sort_index_q0.read());
}

void music::thread_zext_ln93_fu_4784_p1() {
    zext_ln93_fu_4784_p1 = esl_zext<64,2>(flag_reg_2427.read());
}

void music::thread_zext_ln99_fu_3859_p1() {
    zext_ln99_fu_3859_p1 = esl_zext<6,5>(tmp_39_fu_3851_p3.read());
}

}

