#include "music.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void music::thread_AUU_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln294_3_fu_6592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        AUU_M_imag_address0 = AUU_M_imag_addr_2_reg_8257.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3580_p1.read());
    } else {
        AUU_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()))) {
        AUU_M_imag_ce0 = ap_const_logic_1;
    } else {
        AUU_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        AUU_M_imag_d0 = complex_M_imag_read_3_reg_2875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_d0 = ap_const_lv32_0;
    } else {
        AUU_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln284_fu_6471_p2.read())))) {
        AUU_M_imag_we0 = ap_const_logic_1;
    } else {
        AUU_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln294_3_fu_6592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        AUU_M_real_address0 = AUU_M_real_addr_2_reg_8252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3580_p1.read());
    } else {
        AUU_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()))) {
        AUU_M_real_ce0 = ap_const_logic_1;
    } else {
        AUU_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        AUU_M_real_d0 = complex_M_real_read_3_reg_2888.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_d0 = ap_const_lv32_0;
    } else {
        AUU_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln284_fu_6471_p2.read())))) {
        AUU_M_real_we0 = ap_const_logic_1;
    } else {
        AUU_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln103_2_fu_4221_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln246_6_fu_4117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln1027_fu_3434_p1.read());
    } else {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_address1() {
    Autocorr_Buffer_M_i_address1 =  (sc_lv<6>) (zext_ln103_1_fu_4210_p1.read());
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
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln103_2_fu_4221_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln246_6_fu_4117_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln1027_fu_3434_p1.read());
    } else {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_address1() {
    Autocorr_Buffer_M_r_address1 =  (sc_lv<6>) (zext_ln103_1_fu_4210_p1.read());
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

void music::thread_B_V_fu_5781_p1() {
    B_V_fu_5781_p1 = r_V_36_fu_5743_p3.read().range(56-1, 0);
}

void music::thread_B_trunc_V_fu_5785_p4() {
    B_trunc_V_fu_5785_p4 = r_V_36_fu_5743_p3.read().range(55, 7);
}

void music::thread_DFTpts_fu_3840_p2() {
    DFTpts_fu_3840_p2 = (!zext_ln160_fu_3830_p1.read().is_01())? sc_lv<11>(): ap_const_lv11_1 << (unsigned short)zext_ln160_fu_3830_p1.read().to_uint();
}

void music::thread_Ex_V_fu_5685_p2() {
    Ex_V_fu_5685_p2 = (!select_ln482_fu_5584_p3.read().is_01() || !zext_ln655_fu_5681_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(select_ln482_fu_5584_p3.read()) - sc_biguint<11>(zext_ln655_fu_5681_p1.read()));
}

void music::thread_FFT_Buffer_im_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln235_fu_3934_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_5_reg_6960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_2_reg_6865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln127_fu_3818_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln230_2_fu_3745_p1.read());
    } else {
        FFT_Buffer_im_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_5_reg_6960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_4_reg_6949.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (sext_ln183_fu_3905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_1_reg_6859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (zext_ln128_fu_3824_p1.read());
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
        FFT_Buffer_im_d0 = temp_1_reg_6876.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_im_d0 = ap_const_lv32_0;
    } else {
        FFT_Buffer_im_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_im_d1 = grp_fu_3045_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_im_d1 = FFT_Buffer_im_q1.read();
    } else {
        FFT_Buffer_im_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln125_reg_6843.read())))) {
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
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln235_fu_3934_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_5_reg_6954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_2_reg_6853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln127_fu_3818_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln230_2_fu_3745_p1.read());
    } else {
        FFT_Buffer_re_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_5_reg_6954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_4_reg_6944.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (sext_ln183_fu_3905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_1_reg_6847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (zext_ln128_fu_3824_p1.read());
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
        FFT_Buffer_re_d0 = temp_reg_6871.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        FFT_Buffer_re_d0 = X_q0.read();
    } else {
        FFT_Buffer_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        FFT_Buffer_re_d1 = grp_fu_3040_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        FFT_Buffer_re_d1 = FFT_Buffer_re_q1.read();
    } else {
        FFT_Buffer_re_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln125_reg_6843.read())))) {
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

void music::thread_Mx_bits_V_2_fu_5601_p2() {
    Mx_bits_V_2_fu_5601_p2 = (!ap_const_lv124_0.is_01() || !p_Val2_74_reg_7954.read().is_01())? sc_lv<124>(): (sc_biguint<124>(ap_const_lv124_0) - sc_biguint<124>(p_Val2_74_reg_7954.read()));
}

void music::thread_Mx_zeros_V_fu_5657_p1() {
    Mx_zeros_V_fu_5657_p1 = tmp_i_i_i7_fu_5649_p3.read().range(6-1, 0);
}

void music::thread_P_sm_address0() {
    P_sm_address0 =  (sc_lv<9>) (zext_ln301_reg_8419.read());
}

void music::thread_P_sm_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        P_sm_ce0 = ap_const_logic_1;
    } else {
        P_sm_ce0 = ap_const_logic_0;
    }
}

void music::thread_P_sm_d0() {
    P_sm_d0 = reg_3308.read();
}

void music::thread_P_sm_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        P_sm_we0 = ap_const_logic_1;
    } else {
        P_sm_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_2_fu_4542_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_4263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_address0 = grp_qrf_basic_fu_2991_Q_M_imag_address0.read();
    } else {
        Q_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        Q_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_ce0 = grp_qrf_basic_fu_2991_Q_M_imag_ce0.read();
    } else {
        Q_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_d0 = grp_qrf_basic_fu_2991_Q_M_imag_d0.read();
    } else {
        Q_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_imag_we0 = grp_qrf_basic_fu_2991_Q_M_imag_we0.read();
    } else {
        Q_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_2_fu_4542_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_4263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_address0 = grp_qrf_basic_fu_2991_Q_M_real_address0.read();
    } else {
        Q_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        Q_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_ce0 = grp_qrf_basic_fu_2991_Q_M_real_ce0.read();
    } else {
        Q_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_d0 = grp_qrf_basic_fu_2991_Q_M_real_d0.read();
    } else {
        Q_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        Q_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        Q_temp_M_real_we0 = grp_qrf_basic_fu_2991_Q_M_real_we0.read();
    } else {
        Q_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_3_fu_4553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4301_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_address0 = grp_qrf_basic_fu_2991_R_M_imag_address0.read();
    } else {
        R_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        R_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_ce0 = grp_qrf_basic_fu_2991_R_M_imag_ce0.read();
    } else {
        R_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_d0 = grp_qrf_basic_fu_2991_R_M_imag_d0.read();
    } else {
        R_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_imag_we0 = grp_qrf_basic_fu_2991_R_M_imag_we0.read();
    } else {
        R_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_3_fu_4553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4301_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_address0 = grp_qrf_basic_fu_2991_R_M_real_address0.read();
    } else {
        R_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()))) {
        R_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_ce0 = grp_qrf_basic_fu_2991_R_M_real_ce0.read();
    } else {
        R_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_d0 = grp_qrf_basic_fu_2991_R_M_real_d0.read();
    } else {
        R_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        R_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        R_temp_M_real_we0 = grp_qrf_basic_fu_2991_R_M_real_we0.read();
    } else {
        R_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4913_p2.read()))) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_6_reg_7595.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4913_p2.read()))) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln68_fu_4928_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_9_reg_7572.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_fu_4851_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4839_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln57_fu_4806_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_5_reg_7506.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln54_fu_4770_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_reg_7451.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_3_reg_7424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_7241.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4339_p1.read());
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
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4913_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4913_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
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
        Rx_temp_M_imag_d0 = grp_fu_3045_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_imag_d0 = reg_3318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_imag_d0 = reg_3334.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()))) {
        Rx_temp_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_imag_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_7447.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4680_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4692_p2.read())))) {
        Rx_temp_M_imag_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4913_p2.read()))) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_6_reg_7590.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4913_p2.read()))) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln68_fu_4928_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_9_reg_7567.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_fu_4851_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4839_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln57_fu_4806_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_5_reg_7501.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln54_fu_4770_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_reg_7451.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_3_reg_7419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_7241.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4339_p1.read());
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
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4913_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4913_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
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
        Rx_temp_M_real_d0 = grp_fu_3040_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        Rx_temp_M_real_d0 = reg_3308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        Rx_temp_M_real_d0 = reg_3231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()))) {
        Rx_temp_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        Rx_temp_M_real_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_7447.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4680_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4692_p2.read())))) {
        Rx_temp_M_real_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_fu_5374_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_fu_5380_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_fu_5374_p2.read())))) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln255_3_fu_5350_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read())) {
        U_M_imag_address0 = U_M_imag_addr_5_reg_7705.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln76_1_fu_5024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        U_M_imag_address0 = U_M_imag_addr_3_reg_7605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4951_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        U_M_imag_address0 = U_M_imag_addr_2_reg_7393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_7241.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3472_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_fu_5374_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_fu_5380_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_fu_5374_p2.read())))) {
        U_M_imag_ce0 = ap_const_logic_1;
    } else {
        U_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_imag_d0 = reg_3318.read();
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
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4717_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_imag_we0 = ap_const_logic_1;
    } else {
        U_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_fu_5374_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_fu_5380_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_fu_5374_p2.read())))) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln255_3_fu_5350_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read())) {
        U_M_real_address0 = U_M_real_addr_5_reg_7700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln76_1_fu_5024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        U_M_real_address0 = U_M_real_addr_3_reg_7600.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read())) {
        U_M_real_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4951_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        U_M_real_address0 = U_M_real_addr_2_reg_7388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_7241.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3472_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_fu_5374_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_fu_5380_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln253_fu_5329_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_fu_5374_p2.read())))) {
        U_M_real_ce0 = ap_const_logic_1;
    } else {
        U_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_real_d0 = reg_3308.read();
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
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4717_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        U_M_real_we0 = ap_const_logic_1;
    } else {
        U_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln275_3_fu_6390_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_1_reg_7821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_2_reg_7826.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3510_p1.read());
    } else {
        Un_M_imag_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_imag_address1() {
    Un_M_imag_address1 =  (sc_lv<3>) (zext_ln275_2_fu_6379_p1.read());
}

void music::thread_Un_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read())))) {
        Un_M_imag_ce0 = ap_const_logic_1;
    } else {
        Un_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        Un_M_imag_ce1 = ap_const_logic_1;
    } else {
        Un_M_imag_ce1 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read())))) {
        Un_M_imag_d0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_d0 = ap_const_lv32_0;
    } else {
        Un_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read())))) {
        Un_M_imag_we0 = ap_const_logic_1;
    } else {
        Un_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln275_3_fu_6390_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read()))) {
        Un_M_real_address0 = Un_M_real_addr_1_reg_7811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read()))) {
        Un_M_real_address0 = Un_M_real_addr_2_reg_7816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3510_p1.read());
    } else {
        Un_M_real_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_real_address1() {
    Un_M_real_address1 =  (sc_lv<3>) (zext_ln275_2_fu_6379_p1.read());
}

void music::thread_Un_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read())))) {
        Un_M_real_ce0 = ap_const_logic_1;
    } else {
        Un_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        Un_M_real_ce1 = ap_const_logic_1;
    } else {
        Un_M_real_ce1 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read())))) {
        Un_M_real_d0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_d0 = ap_const_lv32_0;
    } else {
        Un_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln254_reg_7849.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln256_reg_7853.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln254_reg_7849.read())))) {
        Un_M_real_we0 = ap_const_logic_1;
    } else {
        Un_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_X_address0() {
    X_address0 =  (sc_lv<16>) (zext_ln230_1_fu_3740_p1.read());
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
        Xj_f_M_imag_address0 =  (sc_lv<16>) (zext_ln246_5_fu_4106_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        Xj_f_M_imag_address0 =  (sc_lv<16>) (zext_ln235_3_fu_3988_p1.read());
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
        Xj_f_M_real_address0 =  (sc_lv<16>) (zext_ln246_5_fu_4106_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        Xj_f_M_real_address0 =  (sc_lv<16>) (zext_ln235_3_fu_3988_p1.read());
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln294_4_fu_6609_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln285_2_fu_6517_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln266_1_fu_6263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3644_p1.read());
    } else {
        a_theta_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) && 
          esl_seteq<1,1,1>(ap_block_state294_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        a_theta_M_imag_d0 = bitcast_ln267_1_fu_6278_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_imag_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) && 
          esl_seteq<1,1,1>(ap_block_state294_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_we0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln294_4_fu_6609_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln285_2_fu_6517_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln266_1_fu_6263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3644_p1.read());
    } else {
        a_theta_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) && 
          esl_seteq<1,1,1>(ap_block_state294_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        a_theta_M_real_d0 = grp_sin_or_cos_float_s_fu_3001_ap_return.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_theta_M_real_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) && 
          esl_seteq<1,1,1>(ap_block_state294_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_we0 = ap_const_logic_1;
    } else {
        a_theta_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_add_ln1027_fu_3638_p2() {
    add_ln1027_fu_3638_p2 = (!phi_mul_reg_1779.read().is_01() || !zext_ln1027_10_fu_3634_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1779.read()) + sc_biguint<11>(zext_ln1027_10_fu_3634_p1.read()));
}

void music::thread_add_ln103_1_fu_4216_p2() {
    add_ln103_1_fu_4216_p2 = (!zext_ln105_1_reg_7084.read().is_01() || !zext_ln103_fu_4201_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln105_1_reg_7084.read()) + sc_biguint<7>(zext_ln103_fu_4201_p1.read()));
}

void music::thread_add_ln103_fu_4205_p2() {
    add_ln103_fu_4205_p2 = (!zext_ln105_reg_7066.read().is_01() || !zext_ln103_fu_4201_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln105_reg_7066.read()) + sc_biguint<7>(zext_ln103_fu_4201_p1.read()));
}

void music::thread_add_ln1044_fu_4587_p2() {
    add_ln1044_fu_4587_p2 = (!zext_ln1044_1_fu_4583_p1.read().is_01() || !zext_ln1044_fu_4571_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_1_fu_4583_p1.read()) + sc_biguint<6>(zext_ln1044_fu_4571_p1.read()));
}

void music::thread_add_ln105_fu_4170_p2() {
    add_ln105_fu_4170_p2 = (!zext_ln99_reg_7071.read().is_01() || !zext_ln105_2_fu_4166_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln99_reg_7071.read()) + sc_biguint<6>(zext_ln105_2_fu_4166_p1.read()));
}

void music::thread_add_ln114_1_fu_5482_p2() {
    add_ln114_1_fu_5482_p2 = (!ap_const_lv11_44D.is_01() || !tmp_V_fu_5462_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_44D) + sc_biguint<11>(tmp_V_fu_5462_p4.read()));
}

void music::thread_add_ln114_fu_5579_p2() {
    add_ln114_fu_5579_p2 = (!ap_const_lv11_403.is_01() || !tmp_V_reg_7904.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_403) + sc_biguint<11>(tmp_V_reg_7904.read()));
}

void music::thread_add_ln11_1_fu_4249_p2() {
    add_ln11_1_fu_4249_p2 = (!phi_ln11_1_reg_2085.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_1_reg_2085.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln11_fu_4243_p2() {
    add_ln11_fu_4243_p2 = (!phi_ln11_reg_2073.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_reg_2073.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_1_fu_4287_p2() {
    add_ln12_1_fu_4287_p2 = (!phi_ln12_1_reg_2108.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_1_reg_2108.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_fu_4281_p2() {
    add_ln12_fu_4281_p2 = (!phi_ln12_reg_2096.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_reg_2096.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_1_fu_4325_p2() {
    add_ln13_1_fu_4325_p2 = (!phi_ln13_1_reg_2131.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_1_reg_2131.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_fu_4319_p2() {
    add_ln13_fu_4319_p2 = (!phi_ln13_reg_2119.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_reg_2119.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_1_fu_4363_p2() {
    add_ln14_1_fu_4363_p2 = (!phi_ln14_1_reg_2154.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_1_reg_2154.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_fu_4357_p2() {
    add_ln14_fu_4357_p2 = (!phi_ln14_reg_2142.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_reg_2142.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln201_1_fu_3420_p2() {
    add_ln201_1_fu_3420_p2 = (!phi_ln201_1_reg_1653.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln201_1_reg_1653.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln201_fu_3414_p2() {
    add_ln201_fu_3414_p2 = (!phi_ln201_reg_1641.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln201_reg_1641.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_add_ln202_1_fu_3458_p2() {
    add_ln202_1_fu_3458_p2 = (!phi_ln202_1_reg_1676.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln202_1_reg_1676.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln202_fu_3452_p2() {
    add_ln202_fu_3452_p2 = (!phi_ln202_reg_1664.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln202_reg_1664.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln203_fu_3490_p2() {
    add_ln203_fu_3490_p2 = (!phi_ln203_reg_1687.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln203_reg_1687.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln204_1_fu_3528_p2() {
    add_ln204_1_fu_3528_p2 = (!phi_ln204_1_reg_1722.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln204_1_reg_1722.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln204_fu_3522_p2() {
    add_ln204_fu_3522_p2 = (!phi_ln204_reg_1710.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln204_reg_1710.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln205_1_fu_3566_p2() {
    add_ln205_1_fu_3566_p2 = (!phi_ln205_1_reg_1745.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln205_1_reg_1745.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln205_fu_3560_p2() {
    add_ln205_fu_3560_p2 = (!phi_ln205_reg_1733.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln205_reg_1733.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln206_fu_3598_p2() {
    add_ln206_fu_3598_p2 = (!phi_ln206_reg_1756.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln206_reg_1756.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln207_1_fu_3628_p2() {
    add_ln207_1_fu_3628_p2 = (!phi_ln207_1_reg_1791.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln207_1_reg_1791.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln207_2_fu_3616_p2() {
    add_ln207_2_fu_3616_p2 = (!phi_mul_reg_1779.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1779.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln207_fu_3622_p2() {
    add_ln207_fu_3622_p2 = (!phi_ln207_reg_1767.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln207_reg_1767.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln22_fu_4435_p2() {
    add_ln22_fu_4435_p2 = (!zext_ln20_reg_7228.read().is_01() || !zext_ln22_fu_4431_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln20_reg_7228.read()) + sc_biguint<6>(zext_ln22_fu_4431_p1.read()));
}

void music::thread_add_ln230_1_fu_3735_p2() {
    add_ln230_1_fu_3735_p2 = (!zext_ln229_1_reg_6788.read().is_01() || !zext_ln230_fu_3731_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln229_1_reg_6788.read()) + sc_biguint<17>(zext_ln230_fu_3731_p1.read()));
}

void music::thread_add_ln230_fu_3718_p2() {
    add_ln230_fu_3718_p2 = (!shl_ln_reg_6746.read().is_01() || !zext_ln229_fu_3702_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6746.read()) + sc_biguint<14>(zext_ln229_fu_3702_p1.read()));
}

void music::thread_add_ln235_1_fu_3970_p2() {
    add_ln235_1_fu_3970_p2 = (!add_ln235_fu_3964_p2.read().is_01() || !zext_ln228_reg_6751.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln235_fu_3964_p2.read()) + sc_biguint<15>(zext_ln228_reg_6751.read()));
}

void music::thread_add_ln235_2_fu_3983_p2() {
    add_ln235_2_fu_3983_p2 = (!tmp_51_cast_fu_3975_p3.read().is_01() || !zext_ln229_1_reg_6788.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_51_cast_fu_3975_p3.read()) + sc_biguint<17>(zext_ln229_1_reg_6788.read()));
}

void music::thread_add_ln235_fu_3964_p2() {
    add_ln235_fu_3964_p2 = (!zext_ln235_2_fu_3960_p1.read().is_01() || !zext_ln235_1_fu_3948_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln235_2_fu_3960_p1.read()) + sc_biguint<15>(zext_ln235_1_fu_3948_p1.read()));
}

void music::thread_add_ln246_1_fu_4056_p2() {
    add_ln246_1_fu_4056_p2 = (!zext_ln246_2_fu_4052_p1.read().is_01() || !add_ln246_reg_7012.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln246_2_fu_4052_p1.read()) + sc_biguint<15>(add_ln246_reg_7012.read()));
}

void music::thread_add_ln246_2_fu_4101_p2() {
    add_ln246_2_fu_4101_p2 = (!tmp_42_cast_reg_7025.read().is_01() || !zext_ln246_4_fu_4097_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_42_cast_reg_7025.read()) + sc_biguint<17>(zext_ln246_4_fu_4097_p1.read()));
}

void music::thread_add_ln246_3_fu_4112_p2() {
    add_ln246_3_fu_4112_p2 = (!zext_ln244_reg_7030.read().is_01() || !zext_ln246_3_fu_4093_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln244_reg_7030.read()) + sc_biguint<7>(zext_ln246_3_fu_4093_p1.read()));
}

void music::thread_add_ln246_fu_4034_p2() {
    add_ln246_fu_4034_p2 = (!zext_ln246_1_fu_4030_p1.read().is_01() || !zext_ln246_fu_4018_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln246_1_fu_4030_p1.read()) + sc_biguint<15>(zext_ln246_fu_4018_p1.read()));
}

void music::thread_add_ln255_fu_5345_p2() {
    add_ln255_fu_5345_p2 = (!zext_ln255_reg_7806.read().is_01() || !zext_ln255_2_fu_5341_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln255_reg_7806.read()) + sc_biguint<6>(zext_ln255_2_fu_5341_p1.read()));
}

void music::thread_add_ln262_fu_5386_p2() {
    add_ln262_fu_5386_p2 = (!phi_mul5_reg_2771.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul5_reg_2771.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln266_fu_5444_p2() {
    add_ln266_fu_5444_p2 = (!phi_mul5_reg_2771.read().is_01() || !zext_ln266_fu_5440_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul5_reg_2771.read()) + sc_biguint<11>(zext_ln266_fu_5440_p1.read()));
}

void music::thread_add_ln275_1_fu_6385_p2() {
    add_ln275_1_fu_6385_p2 = (!zext_ln277_1_reg_8144.read().is_01() || !zext_ln275_1_fu_6370_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln277_1_reg_8144.read()) + sc_biguint<5>(zext_ln275_1_fu_6370_p1.read()));
}

void music::thread_add_ln275_fu_6374_p2() {
    add_ln275_fu_6374_p2 = (!zext_ln277_reg_8126.read().is_01() || !zext_ln275_1_fu_6370_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln277_reg_8126.read()) + sc_biguint<5>(zext_ln275_1_fu_6370_p1.read()));
}

void music::thread_add_ln277_fu_6347_p2() {
    add_ln277_fu_6347_p2 = (!zext_ln275_fu_6331_p1.read().is_01() || !zext_ln271_reg_8131.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln275_fu_6331_p1.read()) + sc_biguint<6>(zext_ln271_reg_8131.read()));
}

void music::thread_add_ln285_1_fu_6512_p2() {
    add_ln285_1_fu_6512_p2 = (!zext_ln287_reg_8229.read().is_01() || !phi_mul7_reg_2912.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln287_reg_8229.read()) + sc_biguint<11>(phi_mul7_reg_2912.read()));
}

void music::thread_add_ln285_2_fu_6506_p2() {
    add_ln285_2_fu_6506_p2 = (!phi_mul7_reg_2912.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul7_reg_2912.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln285_fu_6495_p2() {
    add_ln285_fu_6495_p2 = (!zext_ln287_1_reg_8247.read().is_01() || !zext_ln285_fu_6491_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln287_1_reg_8247.read()) + sc_biguint<6>(zext_ln285_fu_6491_p1.read()));
}

void music::thread_add_ln287_fu_6460_p2() {
    add_ln287_fu_6460_p2 = (!zext_ln281_reg_8234.read().is_01() || !zext_ln287_2_fu_6456_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln281_reg_8234.read()) + sc_biguint<12>(zext_ln287_2_fu_6456_p1.read()));
}

void music::thread_add_ln294_1_fu_6604_p2() {
    add_ln294_1_fu_6604_p2 = (!phi_mul9_reg_2969.read().is_01() || !zext_ln294_1_reg_8325.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2969.read()) + sc_biguint<11>(zext_ln294_1_reg_8325.read()));
}

void music::thread_add_ln294_2_fu_6598_p2() {
    add_ln294_2_fu_6598_p2 = (!phi_mul9_reg_2969.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2969.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln294_fu_6587_p2() {
    add_ln294_fu_6587_p2 = (!zext_ln293_reg_8330.read().is_01() || !zext_ln294_2_fu_6583_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln293_reg_8330.read()) + sc_biguint<12>(zext_ln294_2_fu_6583_p1.read()));
}

void music::thread_add_ln34_1_fu_4548_p2() {
    add_ln34_1_fu_4548_p2 = (!zext_ln34_fu_4521_p1.read().is_01() || !zext_ln30_reg_7277.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln34_fu_4521_p1.read()) + sc_biguint<6>(zext_ln30_reg_7277.read()));
}

void music::thread_add_ln34_fu_4537_p2() {
    add_ln34_fu_4537_p2 = (!zext_ln36_reg_7291.read().is_01() || !zext_ln34_1_fu_4533_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln36_reg_7291.read()) + sc_biguint<6>(zext_ln34_1_fu_4533_p1.read()));
}

void music::thread_add_ln36_fu_4498_p2() {
    add_ln36_fu_4498_p2 = (!zext_ln30_reg_7277.read().is_01() || !zext_ln36_fu_4494_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln30_reg_7277.read()) + sc_biguint<6>(zext_ln36_fu_4494_p1.read()));
}

void music::thread_add_ln45_fu_4666_p2() {
    add_ln45_fu_4666_p2 = (!zext_ln45_fu_4650_p1.read().is_01() || !zext_ln45_1_fu_4662_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_fu_4650_p1.read()) + sc_biguint<6>(zext_ln45_1_fu_4662_p1.read()));
}

void music::thread_add_ln47_fu_4702_p2() {
    add_ln47_fu_4702_p2 = (!zext_ln45_1_reg_7414.read().is_01() || !zext_ln47_fu_4698_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_1_reg_7414.read()) + sc_biguint<6>(zext_ln47_fu_4698_p1.read()));
}

void music::thread_add_ln54_fu_4765_p2() {
    add_ln54_fu_4765_p2 = (!zext_ln52_reg_7492.read().is_01() || !trunc_ln54_fu_4761_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_7492.read()) + sc_biguint<6>(trunc_ln54_fu_4761_p1.read()));
}

void music::thread_add_ln59_1_fu_4834_p2() {
    add_ln59_1_fu_4834_p2 = (!zext_ln52_reg_7492.read().is_01() || !trunc_ln59_fu_4825_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_7492.read()) + sc_biguint<6>(trunc_ln59_fu_4825_p1.read()));
}

void music::thread_add_ln59_fu_4829_p2() {
    add_ln59_fu_4829_p2 = (!sext_ln57_cast_reg_7539.read().is_01() || !trunc_ln59_fu_4825_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln57_cast_reg_7539.read()) + sc_biguint<6>(trunc_ln59_fu_4825_p1.read()));
}

void music::thread_add_ln68_1_fu_4946_p2() {
    add_ln68_1_fu_4946_p2 = (!sext_ln68_2_cast_fu_4938_p3.read().is_01() || !zext_ln1044_reg_7376.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln68_2_cast_fu_4938_p3.read()) + sc_biguint<6>(zext_ln1044_reg_7376.read()));
}

void music::thread_add_ln68_fu_4923_p2() {
    add_ln68_fu_4923_p2 = (!sext_ln70_reg_7585.read().is_01() || !trunc_ln68_fu_4919_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_reg_7585.read()) + sc_biguint<6>(trunc_ln68_fu_4919_p1.read()));
}

void music::thread_add_ln70_fu_4884_p2() {
    add_ln70_fu_4884_p2 = (!sext_ln70_fu_4880_p1.read().is_01() || !zext_ln68_fu_4868_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4880_p1.read()) + sc_biguint<6>(zext_ln68_fu_4868_p1.read()));
}

void music::thread_add_ln72_fu_4896_p2() {
    add_ln72_fu_4896_p2 = (!sext_ln70_fu_4880_p1.read().is_01() || !zext_ln1044_reg_7376.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4880_p1.read()) + sc_biguint<6>(zext_ln1044_reg_7376.read()));
}

void music::thread_add_ln76_fu_5019_p2() {
    add_ln76_fu_5019_p2 = (!zext_ln1044_reg_7376.read().is_01() || !zext_ln76_fu_5015_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_reg_7376.read()) + sc_biguint<6>(zext_ln76_fu_5015_p1.read()));
}

void music::thread_addr_V_fu_5488_p3() {
    addr_V_fu_5488_p3 = (!closepath_fu_5476_p2.read()[0].is_01())? sc_lv<11>(): ((closepath_fu_5476_p2.read()[0].to_bool())? ap_const_lv11_4A: add_ln114_1_fu_5482_p2.read());
}

void music::thread_and_ln300_2_fu_6201_p2() {
    and_ln300_2_fu_6201_p2 = (icmp_ln833_reg_7990.read() & icmp_ln833_1_reg_7948.read());
}

void music::thread_and_ln300_fu_6172_p2() {
    and_ln300_fu_6172_p2 = (icmp_ln833_reg_7990.read() & icmp_ln833_1_reg_7948.read());
}

void music::thread_and_ln87_1_fu_5262_p2() {
    and_ln87_1_fu_5262_p2 = (and_ln87_fu_5256_p2.read() & grp_fu_3195_p2.read());
}

void music::thread_and_ln87_fu_5256_p2() {
    and_ln87_fu_5256_p2 = (or_ln87_fu_5248_p2.read() & or_ln87_1_fu_5252_p2.read());
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

void music::thread_ap_CS_fsm_state278() {
    ap_CS_fsm_state278 = ap_CS_fsm.read()[277];
}

void music::thread_ap_CS_fsm_state279() {
    ap_CS_fsm_state279 = ap_CS_fsm.read()[278];
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

void music::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[342];
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

void music::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[353];
}

void music::thread_ap_CS_fsm_state355() {
    ap_CS_fsm_state355 = ap_CS_fsm.read()[354];
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

void music::thread_ap_block_state294_on_subcall_done() {
    ap_block_state294_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_3001_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_3017_ap_done.read()));
}

void music::thread_ap_block_state49_on_subcall_done() {
    ap_block_state49_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_3001_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_3017_ap_done.read()));
}

void music::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln300_fu_6615_p2.read()))) {
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

void music::thread_ap_phi_mux_phi_ln203_1_phi_fu_1703_p4() {
    ap_phi_mux_phi_ln203_1_phi_fu_1703_p4 = phi_ln203_1_reg_1699.read();
}

void music::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln300_fu_6615_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void music::thread_bitcast_ln267_1_fu_6278_p1() {
    bitcast_ln267_1_fu_6278_p1 = xor_ln267_fu_6272_p2.read();
}

void music::thread_bitcast_ln267_fu_6268_p1() {
    bitcast_ln267_fu_6268_p1 = grp_sin_or_cos_float_s_fu_3017_ap_return.read();
}

void music::thread_bitcast_ln444_2_fu_4979_p1() {
    bitcast_ln444_2_fu_4979_p1 = complex_M_imag_read_1_reg_2355.read();
}

void music::thread_bitcast_ln444_fu_4963_p1() {
    bitcast_ln444_fu_4963_p1 = complex_M_real_read_1_reg_2367.read();
}

void music::thread_bitcast_ln512_fu_6258_p1() {
    bitcast_ln512_fu_6258_p1 = p_Result_62_fu_6248_p4.read();
}

void music::thread_bitcast_ln667_2_fu_6396_p1() {
    bitcast_ln667_2_fu_6396_p1 = Un_M_imag_q0.read();
}

void music::thread_bitcast_ln667_4_fu_6523_p1() {
    bitcast_ln667_4_fu_6523_p1 = a_theta_M_imag_q0.read();
}

void music::thread_bitcast_ln667_fu_4227_p1() {
    bitcast_ln667_fu_4227_p1 = Autocorr_Buffer_M_i_q0.read();
}

void music::thread_bitcast_ln87_1_fu_5188_p1() {
    bitcast_ln87_1_fu_5188_p1 = tmp_22_fu_5155_p6.read();
}

void music::thread_bitcast_ln87_fu_5170_p1() {
    bitcast_ln87_fu_5170_p1 = tmp_20_fu_5116_p6.read();
}

void music::thread_closepath_fu_5476_p2() {
    closepath_fu_5476_p2 = (!tmp_V_fu_5462_p4.read().is_01() || !ap_const_lv11_3FE.is_01())? sc_lv<1>(): (sc_biguint<11>(tmp_V_fu_5462_p4.read()) < sc_biguint<11>(ap_const_lv11_3FE));
}

void music::thread_count_fu_4565_p2() {
    count_fu_4565_p2 = (!count_0_i_reg_2257.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(count_0_i_reg_2257.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_eig_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_imag_address0 = eig_mat_M_imag_addr_2_reg_7301.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_7241.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4377_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        eig_mat_M_imag_address0 = grp_qrf_basic_fu_2991_A_M_imag_address0.read();
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
        eig_mat_M_imag_ce0 = grp_qrf_basic_fu_2991_A_M_imag_ce0.read();
    } else {
        eig_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_imag_d0 = complex_M_imag_read_reg_2220.read();
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
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_4509_p2.read())))) {
        eig_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1044_2_fu_4593_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_real_address0 = eig_mat_M_real_addr_3_reg_7296.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_7241.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4377_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        eig_mat_M_real_address0 = grp_qrf_basic_fu_2991_A_M_real_address0.read();
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
        eig_mat_M_real_ce0 = grp_qrf_basic_fu_2991_A_M_real_ce0.read();
    } else {
        eig_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_real_d0 = complex_M_real_read_reg_2233.read();
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
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_4509_p2.read())))) {
        eig_mat_M_real_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_fc_address0() {
    fc_address0 =  (sc_lv<10>) (zext_ln242_fu_4005_p1.read());
}

void music::thread_fc_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        fc_ce0 = ap_const_logic_1;
    } else {
        fc_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_4_address0() {
    fourth_order_double_4_address0 =  (sc_lv<8>) (zext_ln498_reg_8026.read());
}

void music::thread_fourth_order_double_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        fourth_order_double_4_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_4_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_5_address0() {
    fourth_order_double_5_address0 =  (sc_lv<8>) (zext_ln498_fu_5829_p1.read());
}

void music::thread_fourth_order_double_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        fourth_order_double_5_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_5_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_6_address0() {
    fourth_order_double_6_address0 =  (sc_lv<8>) (zext_ln498_fu_5829_p1.read());
}

void music::thread_fourth_order_double_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        fourth_order_double_6_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_6_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_7_address0() {
    fourth_order_double_7_address0 =  (sc_lv<8>) (zext_ln498_fu_5829_p1.read());
}

void music::thread_fourth_order_double_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        fourth_order_double_7_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_7_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_s_address0() {
    fourth_order_double_s_address0 =  (sc_lv<8>) (zext_ln498_reg_8026.read());
}

void music::thread_fourth_order_double_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        fourth_order_double_s_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_s_ce0 = ap_const_logic_0;
    }
}

void music::thread_grp_fu_3040_ce() {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) || 
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()))) {
        grp_fu_3040_ce = ap_const_logic_1;
    } else {
        grp_fu_3040_ce = ap_const_logic_0;
    }
}

void music::thread_grp_fu_3040_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()))) {
        grp_fu_3040_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read()) || 
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
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln170_fu_3867_p2.read())))) {
        grp_fu_3040_opcode = ap_const_lv2_0;
    } else {
        grp_fu_3040_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_3040_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_3040_p0 = w_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        grp_fu_3040_p0 = complex_M_real_read_4_reg_2946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read())) {
        grp_fu_3040_p0 = complex_M_real_read_3_reg_2888.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read())) {
        grp_fu_3040_p0 = complex_M_real_read_2_reg_2829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        grp_fu_3040_p0 = p_x_assign_reg_2331.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        grp_fu_3040_p0 = complex_M_real_read_1_reg_2367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read())) {
        grp_fu_3040_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        grp_fu_3040_p0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        grp_fu_3040_p0 = complex_M_real_read_reg_2233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        grp_fu_3040_p0 = p_r_M_real_reg_2050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        grp_fu_3040_p0 = FFT_Buffer_re_q0.read();
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
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()))) {
        grp_fu_3040_p0 = reg_3259.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3040_p0 = p_x_assign_5_reg_1902.read();
    } else {
        grp_fu_3040_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3040_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_3040_p1 = complex_M_real_read_4_reg_2946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        grp_fu_3040_p1 = reg_3259.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        grp_fu_3040_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        grp_fu_3040_p1 = eigval_0_reg_7398.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()))) {
        grp_fu_3040_p1 = reg_3231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        grp_fu_3040_p1 = reg_3282.read();
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
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()))) {
        grp_fu_3040_p1 = reg_3266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3040_p1 = reg_3225.read();
    } else {
        grp_fu_3040_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3045_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()))) {
        grp_fu_3045_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()))) {
        grp_fu_3045_opcode = ap_const_lv2_0;
    } else {
        grp_fu_3045_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_3045_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_3045_p0 = w_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        grp_fu_3045_p0 = complex_M_imag_read_4_reg_2934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read())) {
        grp_fu_3045_p0 = complex_M_imag_read_3_reg_2875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read())) {
        grp_fu_3045_p0 = complex_M_imag_read_2_reg_2816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        grp_fu_3045_p0 = complex_M_imag_read_1_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read())) {
        grp_fu_3045_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        grp_fu_3045_p0 = complex_M_imag_read_reg_2220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        grp_fu_3045_p0 = p_r_M_imag_reg_2038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()))) {
        grp_fu_3045_p0 = FFT_Buffer_im_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()))) {
        grp_fu_3045_p0 = reg_3272.read();
    } else {
        grp_fu_3045_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3045_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_3045_p1 = complex_M_imag_read_4_reg_2934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        grp_fu_3045_p1 = reg_3266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()))) {
        grp_fu_3045_p1 = reg_3288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state300.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()))) {
        grp_fu_3045_p1 = reg_3277.read();
    } else {
        grp_fu_3045_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3082_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()))) {
        grp_fu_3082_p0 = reg_3231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3082_p0 = AUU_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3082_p0 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3082_p0 = Un_M_real_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state291.read())) {
        grp_fu_3082_p0 = reg_3259.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read())) {
        grp_fu_3082_p0 = reg_3225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_3082_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        grp_fu_3082_p0 = midsum_reg_7685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_3082_p0 = reg_3308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_3082_p0 = p_r_M_real_12_fu_4973_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_3082_p0 = reg_3341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_3082_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3082_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3082_p0 = Autocorr_Buffer_M_r_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_3082_p0 = p_r_M_real_reg_2050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3082_p0 = FFT_Buffer_re_q1.read();
    } else {
        grp_fu_3082_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3082_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read())) {
        grp_fu_3082_p1 = ap_const_lv32_35800000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        grp_fu_3082_p1 = ap_const_lv32_44800000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3082_p1 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3082_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3082_p1 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state291.read())) {
        grp_fu_3082_p1 = sinpitheta_reg_8107.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state270.read())) {
        grp_fu_3082_p1 = tmp_31_fu_5408_p6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()))) {
        grp_fu_3082_p1 = midsum_reg_7685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_3082_p1 = reg_3308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_3082_p1 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_3082_p1 = reg_3341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_3082_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3082_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3082_p1 = Autocorr_Buffer_M_r_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_3082_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3082_p1 = c_reg_6929.read();
    } else {
        grp_fu_3082_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3087_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()))) {
        grp_fu_3087_p0 = reg_3288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3087_p0 = AUU_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3087_p0 = p_r_M_imag_17_fu_6533_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3087_p0 = Un_M_imag_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_3087_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_3087_p0 = reg_3318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_3087_p0 = p_r_M_imag_11_fu_4989_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_3087_p0 = reg_3351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_3087_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3087_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3087_p0 = Autocorr_Buffer_M_i_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_3087_p0 = p_r_M_imag_reg_2038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3087_p0 = FFT_Buffer_im_q1.read();
    } else {
        grp_fu_3087_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3087_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read())) {
        grp_fu_3087_p1 = ap_const_lv32_35800000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3087_p1 = a_theta_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3087_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3087_p1 = p_t_imag_9_fu_6406_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_3087_p1 = reg_3318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_3087_p1 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_3087_p1 = reg_3351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_3087_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3087_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3087_p1 = p_t_imag_fu_4237_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()))) {
        grp_fu_3087_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3087_p1 = s_reg_6935.read();
    } else {
        grp_fu_3087_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3092_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        grp_fu_3092_p0 = reg_3288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3092_p0 = AUU_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3092_p0 = p_r_M_imag_17_fu_6533_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3092_p0 = Un_M_imag_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_3092_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_3092_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_3092_p0 = reg_3351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_3092_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3092_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3092_p0 = Autocorr_Buffer_M_i_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_3092_p0 = p_r_M_imag_reg_2038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3092_p0 = FFT_Buffer_im_q1.read();
    } else {
        grp_fu_3092_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3092_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        grp_fu_3092_p1 = ap_const_lv32_44800000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3092_p1 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3092_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3092_p1 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_3092_p1 = midsum_reg_7685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_3092_p1 = U_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_3092_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_3092_p1 = reg_3341.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3092_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3092_p1 = Autocorr_Buffer_M_r_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_3092_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3092_p1 = c_reg_6929.read();
    } else {
        grp_fu_3092_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3097_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        grp_fu_3097_p0 = reg_3231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3097_p0 = AUU_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3097_p0 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3097_p0 = Un_M_real_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        grp_fu_3097_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        grp_fu_3097_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read())) {
        grp_fu_3097_p0 = reg_3341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()))) {
        grp_fu_3097_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3097_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3097_p0 = Autocorr_Buffer_M_r_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_3097_p0 = p_r_M_real_reg_2050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3097_p0 = FFT_Buffer_re_q1.read();
    } else {
        grp_fu_3097_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3097_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        grp_fu_3097_p1 = a_theta_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state311.read())) {
        grp_fu_3097_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        grp_fu_3097_p1 = p_t_imag_9_fu_6406_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read())) {
        grp_fu_3097_p1 = U_M_imag_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state185.read()))) {
        grp_fu_3097_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_3097_p1 = reg_3351.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        grp_fu_3097_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        grp_fu_3097_p1 = p_t_imag_fu_4237_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()))) {
        grp_fu_3097_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3097_p1 = s_reg_6935.read();
    } else {
        grp_fu_3097_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3138_p0() {
    grp_fu_3138_p0 = xor_ln444_1_fu_4983_p2.read();
}

void music::thread_grp_fu_3143_p0() {
    grp_fu_3143_p0 = xor_ln444_fu_4967_p2.read();
}

void music::thread_grp_fu_3176_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read())) {
        grp_fu_3176_p0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_3176_p0 = reg_3379.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()))) {
        grp_fu_3176_p0 = reg_3231.read();
    } else {
        grp_fu_3176_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3176_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read())) {
        grp_fu_3176_p1 = reg_3408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_3176_p1 = reg_3288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_3176_p1 = reg_3231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        grp_fu_3176_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_3176_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3181_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_3181_p0 = tmp_9_i_i_reg_7675.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_3181_p0 = reg_3288.read();
    } else {
        grp_fu_3181_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3181_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_3181_p1 = reg_3288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state250.read()))) {
        grp_fu_3181_p1 = reg_3231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        grp_fu_3181_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_3181_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3187_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read())) {
        grp_fu_3187_p0 = bitcast_ln512_fu_6258_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        grp_fu_3187_p0 = reg_3220.read();
    } else {
        grp_fu_3187_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3190_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state273.read())) {
        grp_fu_3190_p0 = theta_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fu_3190_p0 = fc_q0.read();
    } else {
        grp_fu_3190_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3205_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state275.read())) {
        grp_fu_3205_p1 = ap_const_lv64_3F91DF46A252DD11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        grp_fu_3205_p1 = ap_const_lv64_401921FB54524550;
    } else {
        grp_fu_3205_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3211_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fu_3211_p0 = reg_3303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_fu_3211_p0 = ap_const_lv64_C01921FB5444261E;
    } else {
        grp_fu_3211_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3211_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fu_3211_p1 = ap_const_lv64_4075400000000000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_fu_3211_p1 = tmp_5_reg_6901.read();
    } else {
        grp_fu_3211_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_3217_p0() {
    grp_fu_3217_p0 = esl_zext<32,11>(DFTpts_reg_6884.read());
}

void music::thread_grp_fu_5548_p0() {
    grp_fu_5548_p0 =  (sc_lv<170>) (grp_fu_5548_p00.read());
}

void music::thread_grp_fu_5548_p00() {
    grp_fu_5548_p00 = esl_zext<223,170>(ret_V_31_reg_7933.read());
}

void music::thread_grp_fu_5548_p1() {
    grp_fu_5548_p1 =  (sc_lv<53>) (grp_fu_5548_p10.read());
}

void music::thread_grp_fu_5548_p10() {
    grp_fu_5548_p10 = esl_zext<223,53>(p_Result_56_fu_5534_p3.read());
}

void music::thread_grp_qrf_basic_fu_2991_ap_start() {
    grp_qrf_basic_fu_2991_ap_start = grp_qrf_basic_fu_2991_ap_start_reg.read();
}

void music::thread_grp_scaled_fixed2ieee_fu_3034_ap_start() {
    grp_scaled_fixed2ieee_fu_3034_ap_start = grp_scaled_fixed2ieee_fu_3034_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_3001_ap_start() {
    grp_sin_or_cos_float_s_fu_3001_ap_start = grp_sin_or_cos_float_s_fu_3001_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_3001_do_cos() {
    grp_sin_or_cos_float_s_fu_3001_do_cos =  (sc_logic) (ap_const_lv1_1[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_3001_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        grp_sin_or_cos_float_s_fu_3001_t_in = p_x_assign_6_reg_8112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        grp_sin_or_cos_float_s_fu_3001_t_in = p_x_assign_5_reg_1902.read();
    } else {
        grp_sin_or_cos_float_s_fu_3001_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_sin_or_cos_float_s_fu_3017_ap_start() {
    grp_sin_or_cos_float_s_fu_3017_ap_start = grp_sin_or_cos_float_s_fu_3017_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_3017_do_cos() {
    grp_sin_or_cos_float_s_fu_3017_do_cos =  (sc_logic) (ap_const_lv1_0[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_3017_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read())) {
        grp_sin_or_cos_float_s_fu_3017_t_in = p_x_assign_6_reg_8112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        grp_sin_or_cos_float_s_fu_3017_t_in = p_x_assign_5_reg_1902.read();
    } else {
        grp_sin_or_cos_float_s_fu_3017_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_i_10_fu_4464_p2() {
    i_10_fu_4464_p2 = (!i17_0_i_reg_2198.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i17_0_i_reg_2198.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_11_fu_5040_p2() {
    i_11_fu_5040_p2 = (!sort_index_0_reg_2443.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(sort_index_0_reg_2443.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_12_fu_5060_p2() {
    i_12_fu_5060_p2 = (!flag_reg_2574.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(flag_reg_2574.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_13_fu_4644_p2() {
    i_13_fu_4644_p2 = (!i19_0_i_reg_2269.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i19_0_i_reg_2269.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_14_fu_4723_p2() {
    i_14_fu_4723_p2 = (!j_14_reg_2292.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_14_reg_2292.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_15_fu_6289_p2() {
    i_15_fu_6289_p2 = (!i31_0_reg_2794.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i31_0_reg_2794.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_16_fu_5001_p2() {
    i_16_fu_5001_p2 = (!i25_0_i_reg_2388.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i25_0_i_reg_2388.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_17_fu_6418_p2() {
    i_17_fu_6418_p2 = (!i33_0_reg_2853.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i33_0_reg_2853.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_18_fu_6545_p2() {
    i_18_fu_6545_p2 = (!i36_0_reg_2923.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i36_0_reg_2923.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_4_fu_3777_p2() {
    i_4_fu_3777_p2 = (!i_0_i_i_i_reg_1859.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i_i_i_reg_1859.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_6_cast_fu_3863_p1() {
    i_6_cast_fu_3863_p1 = esl_zext<32,10>(i_5_reg_1891.read());
}

void music::thread_i_6_fu_3765_p2() {
    i_6_fu_3765_p2 = (!ap_const_lv11_1.is_01() || !input_assign_reg_1836.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(input_assign_reg_1836.read()));
}

void music::thread_i_7_fu_3917_p2() {
    i_7_fu_3917_p2 = (!zext_ln162_reg_6895.read().is_01() || !i_0_i_reg_1914.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln162_reg_6895.read()) + sc_bigint<32>(i_0_i_reg_1914.read()));
}

void music::thread_i_8_fu_4401_p2() {
    i_8_fu_4401_p2 = (!i_0_i40_reg_2165.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i40_reg_2165.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_9_fu_4452_p2() {
    i_9_fu_4452_p2 = (!i16_0_i_reg_2187.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i16_0_i_reg_2187.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_fu_6621_p2() {
    i_fu_6621_p2 = (!i38_0_reg_2980.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i38_0_reg_2980.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_lower_fu_3900_p2() {
    i_lower_fu_3900_p2 = (!i_0_i_reg_1914.read().is_01() || !numBF_reg_6906.read().is_01())? sc_lv<32>(): (sc_bigint<32>(i_0_i_reg_1914.read()) + sc_biguint<32>(numBF_reg_6906.read()));
}

void music::thread_icmp_ln101_fu_4181_p2() {
    icmp_ln101_fu_4181_p2 = (!l_0_i_reg_2062.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_i_reg_2062.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln111_fu_3771_p2() {
    icmp_ln111_fu_3771_p2 = (!i_0_i_i_i_reg_1859.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i_reg_1859.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln11_1_fu_4275_p2() {
    icmp_ln11_1_fu_4275_p2 = (!phi_ln11_reg_2073.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_reg_2073.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln11_fu_4269_p2() {
    icmp_ln11_fu_4269_p2 = (!phi_ln11_1_reg_2085.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_1_reg_2085.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln123_fu_3759_p2() {
    icmp_ln123_fu_3759_p2 = (!input_assign_reg_1836.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(input_assign_reg_1836.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln125_fu_3813_p2() {
    icmp_ln125_fu_3813_p2 = (!zext_ln109_reg_6812.read().is_01() || !reversed_reg_1848.read().is_01())? sc_lv<1>(): (sc_biguint<32>(zext_ln109_reg_6812.read()) > sc_biguint<32>(reversed_reg_1848.read()));
}

void music::thread_icmp_ln12_1_fu_4313_p2() {
    icmp_ln12_1_fu_4313_p2 = (!phi_ln12_reg_2096.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_reg_2096.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln12_fu_4307_p2() {
    icmp_ln12_fu_4307_p2 = (!phi_ln12_1_reg_2108.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_1_reg_2108.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_1_fu_4351_p2() {
    icmp_ln13_1_fu_4351_p2 = (!phi_ln13_reg_2119.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_2119.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_fu_4345_p2() {
    icmp_ln13_fu_4345_p2 = (!phi_ln13_1_reg_2131.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_2131.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_1_fu_4389_p2() {
    icmp_ln14_1_fu_4389_p2 = (!phi_ln14_reg_2142.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_reg_2142.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_fu_4383_p2() {
    icmp_ln14_fu_4383_p2 = (!phi_ln14_1_reg_2154.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_1_reg_2154.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln160_fu_3834_p2() {
    icmp_ln160_fu_3834_p2 = (!stage_0_i_reg_1879.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(stage_0_i_reg_1879.read() == ap_const_lv4_B);
}

void music::thread_icmp_ln170_fu_3867_p2() {
    icmp_ln170_fu_3867_p2 = (!i_5_reg_1891.read().is_01() || !trunc_ln6_reg_6889.read().is_01())? sc_lv<1>(): sc_lv<1>(i_5_reg_1891.read() == trunc_ln6_reg_6889.read());
}

void music::thread_icmp_ln178_fu_3894_p2() {
    icmp_ln178_fu_3894_p2 = (!tmp_47_fu_3884_p4.read().is_01() || !ap_const_lv22_1.is_01())? sc_lv<1>(): (sc_bigint<22>(tmp_47_fu_3884_p4.read()) < sc_bigint<22>(ap_const_lv22_1));
}

void music::thread_icmp_ln19_fu_4395_p2() {
    icmp_ln19_fu_4395_p2 = (!i_0_i40_reg_2165.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i40_reg_2165.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln201_1_fu_3446_p2() {
    icmp_ln201_1_fu_3446_p2 = (!phi_ln201_reg_1641.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln201_reg_1641.read() == ap_const_lv4_9);
}

void music::thread_icmp_ln201_fu_3440_p2() {
    icmp_ln201_fu_3440_p2 = (!phi_ln201_1_reg_1653.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln201_1_reg_1653.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln202_1_fu_3484_p2() {
    icmp_ln202_1_fu_3484_p2 = (!phi_ln202_reg_1664.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln202_reg_1664.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln202_fu_3478_p2() {
    icmp_ln202_fu_3478_p2 = (!phi_ln202_1_reg_1676.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln202_1_reg_1676.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln203_fu_3516_p2() {
    icmp_ln203_fu_3516_p2 = (!phi_ln203_reg_1687.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln203_reg_1687.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln204_1_fu_3554_p2() {
    icmp_ln204_1_fu_3554_p2 = (!phi_ln204_reg_1710.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln204_reg_1710.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln204_fu_3548_p2() {
    icmp_ln204_fu_3548_p2 = (!phi_ln204_1_reg_1722.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln204_1_reg_1722.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln205_1_fu_3592_p2() {
    icmp_ln205_1_fu_3592_p2 = (!phi_ln205_reg_1733.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln205_reg_1733.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln205_fu_3586_p2() {
    icmp_ln205_fu_3586_p2 = (!phi_ln205_1_reg_1745.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln205_1_reg_1745.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln206_fu_3610_p2() {
    icmp_ln206_fu_3610_p2 = (!phi_ln206_reg_1756.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln206_reg_1756.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln207_1_fu_3656_p2() {
    icmp_ln207_1_fu_3656_p2 = (!phi_ln207_reg_1767.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln207_reg_1767.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln207_fu_3650_p2() {
    icmp_ln207_fu_3650_p2 = (!phi_ln207_1_reg_1791.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln207_1_reg_1791.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln20_fu_4419_p2() {
    icmp_ln20_fu_4419_p2 = (!j_0_i41_reg_2176.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i41_reg_2176.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln227_fu_3662_p2() {
    icmp_ln227_fu_3662_p2 = (!l_0_reg_1802.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_1802.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln228_fu_3686_p2() {
    icmp_ln228_fu_3686_p2 = (!n_0_reg_1813.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_1813.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln229_fu_3706_p2() {
    icmp_ln229_fu_3706_p2 = (!j25_0_reg_1824.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j25_0_reg_1824.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln234_fu_3922_p2() {
    icmp_ln234_fu_3922_p2 = (!j26_0_reg_1923.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j26_0_reg_1923.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln241_fu_3993_p2() {
    icmp_ln241_fu_3993_p2 = (!jj_0_reg_1982.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(jj_0_reg_1982.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln243_fu_4040_p2() {
    icmp_ln243_fu_4040_p2 = (!l27_0_reg_1994.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l27_0_reg_1994.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln244_fu_4081_p2() {
    icmp_ln244_fu_4081_p2 = (!n28_0_reg_2005.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n28_0_reg_2005.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln252_fu_5275_p2() {
    icmp_ln252_fu_5275_p2 = (!x_0_reg_2738.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_2738.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln253_fu_5329_p2() {
    icmp_ln253_fu_5329_p2 = (!y_0_reg_2749.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_2749.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln254_fu_5374_p2() {
    icmp_ln254_fu_5374_p2 = (!tmp_32_fu_5360_p6.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_5360_p6.read() == ap_const_lv32_1);
}

void music::thread_icmp_ln256_fu_5380_p2() {
    icmp_ln256_fu_5380_p2 = (!tmp_32_fu_5360_p6.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_5360_p6.read() == ap_const_lv32_0);
}

void music::thread_icmp_ln262_fu_5392_p2() {
    icmp_ln262_fu_5392_p2 = (!x29_0_reg_2760.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x29_0_reg_2760.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln264_fu_5423_p2() {
    icmp_ln264_fu_5423_p2 = (!y30_0_reg_2783.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(y30_0_reg_2783.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln270_fu_6283_p2() {
    icmp_ln270_fu_6283_p2 = (!i31_0_reg_2794.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i31_0_reg_2794.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln271_fu_6319_p2() {
    icmp_ln271_fu_6319_p2 = (!j32_0_reg_2805.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j32_0_reg_2805.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln274_fu_6358_p2() {
    icmp_ln274_fu_6358_p2 = (!k_0_reg_2842.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2842.read() == ap_const_lv2_2);
}

void music::thread_icmp_ln27_fu_4446_p2() {
    icmp_ln27_fu_4446_p2 = (!i16_0_i_reg_2187.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i16_0_i_reg_2187.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln280_fu_6412_p2() {
    icmp_ln280_fu_6412_p2 = (!i33_0_reg_2853.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i33_0_reg_2853.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln281_fu_6440_p2() {
    icmp_ln281_fu_6440_p2 = (!j34_0_reg_2864.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j34_0_reg_2864.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln284_fu_6471_p2() {
    icmp_ln284_fu_6471_p2 = (!k35_0_reg_2901.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k35_0_reg_2901.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln290_fu_6539_p2() {
    icmp_ln290_fu_6539_p2 = (!i36_0_reg_2923.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i36_0_reg_2923.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln293_fu_6571_p2() {
    icmp_ln293_fu_6571_p2 = (!k37_0_reg_2958.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k37_0_reg_2958.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln29_fu_4458_p2() {
    icmp_ln29_fu_4458_p2 = (!i17_0_i_reg_2198.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i17_0_i_reg_2198.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln300_fu_6615_p2() {
    icmp_ln300_fu_6615_p2 = (!i38_0_reg_2980.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i38_0_reg_2980.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln30_fu_4482_p2() {
    icmp_ln30_fu_4482_p2 = (!j18_0_i_reg_2209.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j18_0_i_reg_2209.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln33_fu_4509_p2() {
    icmp_ln33_fu_4509_p2 = (!k_0_i_reg_2246.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_0_i_reg_2246.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln40_fu_4559_p2() {
    icmp_ln40_fu_4559_p2 = (!count_0_i_reg_2257.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(count_0_i_reg_2257.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln42_fu_4638_p2() {
    icmp_ln42_fu_4638_p2 = (!i19_0_i_reg_2269.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2269.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln43_fu_4680_p2() {
    icmp_ln43_fu_4680_p2 = (!j20_0_i_reg_2281.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j20_0_i_reg_2281.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln44_fu_4692_p2() {
    icmp_ln44_fu_4692_p2 = (!i19_0_i_reg_2269.read().is_01() || !j20_0_i_reg_2281.read().is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2269.read() == j20_0_i_reg_2281.read());
}

void music::thread_icmp_ln51_fu_4717_p2() {
    icmp_ln51_fu_4717_p2 = (!j_14_reg_2292.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_14_reg_2292.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln53_fu_4755_p2() {
    icmp_ln53_fu_4755_p2 = (!j22_0_i_reg_2304.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(j22_0_i_reg_2304.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln56_fu_4788_p2() {
    icmp_ln56_fu_4788_p2 = (!j23_0_in_i_reg_2313.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j23_0_in_i_reg_2313.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln58_fu_4819_p2() {
    icmp_ln58_fu_4819_p2 = (!q_0_i_reg_2322.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(q_0_i_reg_2322.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln67_fu_4913_p2() {
    icmp_ln67_fu_4913_p2 = (!j24_0_in_i_reg_2379.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_in_i_reg_2379.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln75_fu_4995_p2() {
    icmp_ln75_fu_4995_p2 = (!i25_0_i_reg_2388.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i25_0_i_reg_2388.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln81_fu_5034_p2() {
    icmp_ln81_fu_5034_p2 = (!sort_index_0_reg_2443.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_0_reg_2443.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln833_1_fu_5554_p2() {
    icmp_ln833_1_fu_5554_p2 = (!tmp_V_4_reg_7911.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_reg_7911.read() == ap_const_lv52_0);
}

void music::thread_icmp_ln833_2_fu_5704_p2() {
    icmp_ln833_2_fu_5704_p2 = (!tmp_V_reg_7904.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7904.read() == ap_const_lv11_7FF);
}

void music::thread_icmp_ln833_fu_5699_p2() {
    icmp_ln833_fu_5699_p2 = (!tmp_V_reg_7904.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7904.read() == ap_const_lv11_0);
}

void music::thread_icmp_ln84_fu_5054_p2() {
    icmp_ln84_fu_5054_p2 = (!flag_reg_2574.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(flag_reg_2574.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln86_fu_5076_p2() {
    icmp_ln86_fu_5076_p2 = (!j_0_in_i_reg_2596.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_in_i_reg_2596.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln87_1_fu_5212_p2() {
    icmp_ln87_1_fu_5212_p2 = (!trunc_ln87_3_fu_5184_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_3_fu_5184_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_2_fu_5218_p2() {
    icmp_ln87_2_fu_5218_p2 = (!tmp_26_fu_5192_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_fu_5192_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln87_3_fu_5224_p2() {
    icmp_ln87_3_fu_5224_p2 = (!trunc_ln87_4_fu_5202_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_4_fu_5202_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_fu_5206_p2() {
    icmp_ln87_fu_5206_p2 = (!tmp_23_fu_5174_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_fu_5174_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln98_fu_4122_p2() {
    icmp_ln98_fu_4122_p2 = (!x_0_i_reg_2016.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_i_reg_2016.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln99_fu_4150_p2() {
    icmp_ln99_fu_4150_p2 = (!y_0_i_reg_2027.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_i_reg_2027.read() == ap_const_lv3_4);
}

void music::thread_input_assign_1_fu_3799_p4() {
    input_assign_1_fu_3799_p4 = p_0_i_i_i_reg_1870.read().range(9, 1);
}

void music::thread_j_10_fu_4907_p2() {
    j_10_fu_4907_p2 = (!j24_0_in_i_reg_2379.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j24_0_in_i_reg_2379.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_11_fu_4782_p2() {
    j_11_fu_4782_p2 = (!j23_0_in_i_reg_2313.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j23_0_in_i_reg_2313.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_12_fu_6325_p2() {
    j_12_fu_6325_p2 = (!j32_0_reg_2805.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j32_0_reg_2805.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_13_fu_6446_p2() {
    j_13_fu_6446_p2 = (!j34_0_reg_2864.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j34_0_reg_2864.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_15_fu_5070_p2() {
    j_15_fu_5070_p2 = (!ap_const_lv32_1.is_01() || !j_0_in_i_reg_2596.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j_0_in_i_reg_2596.read()));
}

void music::thread_j_1_fu_3928_p2() {
    j_1_fu_3928_p2 = (!j26_0_reg_1923.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j26_0_reg_1923.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_j_2_fu_3872_p2() {
    j_2_fu_3872_p2 = (!i_5_reg_1891.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_5_reg_1891.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void music::thread_j_3_fu_4425_p2() {
    j_3_fu_4425_p2 = (!j_0_i41_reg_2176.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_i41_reg_2176.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_4_fu_4488_p2() {
    j_4_fu_4488_p2 = (!j18_0_i_reg_2209.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j18_0_i_reg_2209.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_6_fu_5268_p3() {
    j_6_fu_5268_p3 = (!and_ln87_1_fu_5262_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln87_1_fu_5262_p2.read()[0].to_bool())? j_15_reg_7743.read(): flag_0_i_reg_2586.read());
}

void music::thread_j_8_fu_4776_p2() {
    j_8_fu_4776_p2 = (!ap_const_lv32_1.is_01() || !j22_0_i_reg_2304.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j22_0_i_reg_2304.read()));
}

void music::thread_j_9_fu_4686_p2() {
    j_9_fu_4686_p2 = (!j20_0_i_reg_2281.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j20_0_i_reg_2281.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_fu_3712_p2() {
    j_fu_3712_p2 = (!j25_0_reg_1824.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j25_0_reg_1824.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_jj_fu_3999_p2() {
    jj_fu_3999_p2 = (!jj_0_reg_1982.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(jj_0_reg_1982.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_k_2_fu_6364_p2() {
    k_2_fu_6364_p2 = (!k_0_reg_2842.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_2842.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_k_3_fu_6577_p2() {
    k_3_fu_6577_p2 = (!k37_0_reg_2958.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k37_0_reg_2958.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_4_fu_6477_p2() {
    k_4_fu_6477_p2 = (!k35_0_reg_2901.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k35_0_reg_2901.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_fu_4515_p2() {
    k_fu_4515_p2 = (!k_0_i_reg_2246.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_0_i_reg_2246.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_l_1_fu_4046_p2() {
    l_1_fu_4046_p2 = (!l27_0_reg_1994.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l27_0_reg_1994.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_2_fu_4187_p2() {
    l_2_fu_4187_p2 = (!l_0_i_reg_2062.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_i_reg_2062.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_fu_3668_p2() {
    l_fu_3668_p2 = (!l_0_reg_1802.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_reg_1802.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_lhs_V_2_fu_5969_p1() {
    lhs_V_2_fu_5969_p1 = esl_sext<64,63>(t1_V_fu_5916_p3.read());
}

void music::thread_m_fu_4957_p2() {
    m_fu_4957_p2 = (!m_0_i_reg_2343.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<3>(): (sc_bigint<3>(m_0_i_reg_2343.read()) + sc_bigint<3>(ap_const_lv3_7));
}

void music::thread_n_1_fu_3692_p2() {
    n_1_fu_3692_p2 = (!n_0_reg_1813.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n_0_reg_1813.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_n_fu_4087_p2() {
    n_fu_4087_p2 = (!n28_0_reg_2005.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n28_0_reg_2005.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_numBF_fu_3860_p1() {
    numBF_fu_3860_p1 = esl_zext<32,10>(trunc_ln6_reg_6889.read());
}

void music::thread_or_ln257_fu_5313_p2() {
    or_ln257_fu_5313_p2 = (tmp_57_fu_5299_p3.read() | ap_const_lv4_1);
}

void music::thread_or_ln300_fu_6219_p2() {
    or_ln300_fu_6219_p2 = (and_ln300_fu_6172_p2.read() | icmp_ln833_2_reg_7996.read());
}

void music::thread_or_ln311_fu_6181_p2() {
    or_ln311_fu_6181_p2 = (icmp_ln833_2_reg_7996.read() | select_ln271_fu_6165_p3.read());
}

void music::thread_or_ln87_1_fu_5252_p2() {
    or_ln87_1_fu_5252_p2 = (icmp_ln87_3_reg_7777.read() | icmp_ln87_2_reg_7772.read());
}

void music::thread_or_ln87_fu_5248_p2() {
    or_ln87_fu_5248_p2 = (icmp_ln87_1_reg_7767.read() | icmp_ln87_reg_7762.read());
}

void music::thread_p_Repl2_6_fu_6194_p3() {
    p_Repl2_6_fu_6194_p3 = (!and_ln300_fu_6172_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln300_fu_6172_p2.read()[0].to_bool())? results_sign_V_2_reg_7898.read(): select_ln311_fu_6186_p3.read());
}

void music::thread_p_Result_56_fu_5534_p3() {
    p_Result_56_fu_5534_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_7911.read());
}

void music::thread_p_Result_57_fu_5623_p3() {
    p_Result_57_fu_5623_p3 = esl_concat<61,1>(p_Result_i_i_i_76_fu_5613_p4.read(), ap_const_lv1_1);
}

void music::thread_p_Result_58_fu_5641_p3() {
    p_Result_58_fu_5641_p3 = esl_concat<2,62>(ap_const_lv2_3, p_Result_s_fu_5631_p4.read());
}

void music::thread_p_Result_59_fu_5821_p3() {
    p_Result_59_fu_5821_p3 = esl_concat<1,7>(sin_basis_fu_5815_p2.read(), p_Result_i_i_fu_5771_p4.read());
}

void music::thread_p_Result_60_fu_6061_p3() {
    p_Result_60_fu_6061_p3 = p_Val2_70_fu_6058_p1.read().range(63, 63);
}

void music::thread_p_Result_61_fu_6083_p3() {
    p_Result_61_fu_6083_p3 = esl_concat<1,3>(results_sign_V_2_reg_7898.read(), p_Val2_75_reg_7965.read());
}

void music::thread_p_Result_62_fu_6248_p4() {
    p_Result_62_fu_6248_p4 = esl_concat<12,52>(esl_concat<1,11>(p_Repl2_6_fu_6194_p3.read(), ret_V_29_fu_6224_p3.read()), ret_V_30_fu_6240_p3.read());
}

void music::thread_p_Result_i_i_fu_5771_p4() {
    p_Result_i_i_fu_5771_p4 = r_V_36_fu_5743_p3.read().range(62, 56);
}

void music::thread_p_Result_i_i_i_76_fu_5613_p4() {
    p_Result_i_i_i_76_fu_5613_p4 = p_Val2_50_fu_5606_p3.read().range(123, 63);
}

void music::thread_p_Result_i_i_i_fu_5496_p4() {
    p_Result_i_i_i_fu_5496_p4 = addr_V_fu_5488_p3.read().range(10, 7);
}

void music::thread_p_Result_s_fu_5631_p4() {
    p_Result_s_fu_5631_p4 = p_Result_57_fu_5623_p3.read().range(0, 61);
}

void music::thread_p_Val2_50_fu_5606_p3() {
    p_Val2_50_fu_5606_p3 = (!trunc_ln745_fu_5597_p1.read()[0].is_01())? sc_lv<124>(): ((trunc_ln745_fu_5597_p1.read()[0].to_bool())? Mx_bits_V_2_fu_5601_p2.read(): p_Val2_74_reg_7954.read());
}

void music::thread_p_Val2_70_fu_6058_p1() {
    p_Val2_70_fu_6058_p1 = resultf_reg_8097.read();
}

void music::thread_p_Val2_75_fu_5591_p3() {
    p_Val2_75_fu_5591_p3 = (!closepath_reg_7917.read()[0].is_01())? sc_lv<3>(): ((closepath_reg_7917.read()[0].to_bool())? ap_const_lv3_0: trunc_ln_i_i_reg_7960.read());
}

void music::thread_p_Val2_s_fu_5450_p1() {
    p_Val2_s_fu_5450_p1 = reg_3303.read();
}

void music::thread_p_r_M_imag_11_fu_4989_p1() {
    p_r_M_imag_11_fu_4989_p1 = xor_ln444_1_fu_4983_p2.read();
}

void music::thread_p_r_M_imag_17_fu_6533_p1() {
    p_r_M_imag_17_fu_6533_p1 = xor_ln667_2_fu_6527_p2.read();
}

void music::thread_p_r_M_real_12_fu_4973_p1() {
    p_r_M_real_12_fu_4973_p1 = xor_ln444_fu_4967_p2.read();
}

void music::thread_p_t_imag_9_fu_6406_p1() {
    p_t_imag_9_fu_6406_p1 = xor_ln667_1_fu_6400_p2.read();
}

void music::thread_p_t_imag_fu_4237_p1() {
    p_t_imag_fu_4237_p1 = xor_ln667_fu_4231_p2.read();
}

void music::thread_q_1_fu_4845_p2() {
    q_1_fu_4845_p2 = (!ap_const_lv32_1.is_01() || !q_0_i_reg_2322.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(q_0_i_reg_2322.read()));
}

void music::thread_r_V_20_fu_5738_p2() {
    r_V_20_fu_5738_p2 = (!zext_ln1287_fu_5729_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7971.read() << (unsigned short)zext_ln1287_fu_5729_p1.read().to_uint();
}

void music::thread_r_V_22_fu_5795_p1() {
    r_V_22_fu_5795_p1 = esl_zext<98,49>(B_trunc_V_fu_5785_p4.read());
}

void music::thread_r_V_25_fu_5836_p1() {
    r_V_25_fu_5836_p1 = esl_zext<98,49>(B_squared_V_reg_8020.read());
}

void music::thread_r_V_34_fu_5518_p2() {
    r_V_34_fu_5518_p2 = (!zext_ln744_fu_5515_p1.read().is_01())? sc_lv<256>(): ref_4oPi_table_256_V_q0.read() << (unsigned short)zext_ln744_fu_5515_p1.read().to_uint();
}

void music::thread_r_V_35_fu_5665_p2() {
    r_V_35_fu_5665_p2 = (!zext_ln1253_fu_5661_p1.read().is_01())? sc_lv<124>(): p_Val2_50_fu_5606_p3.read() << (unsigned short)zext_ln1253_fu_5661_p1.read().to_uint();
}

void music::thread_r_V_36_fu_5743_p3() {
    r_V_36_fu_5743_p3 = (!isNeg_reg_7984.read()[0].is_01())? sc_lv<63>(): ((isNeg_reg_7984.read()[0].to_bool())? r_V_fu_5733_p2.read(): r_V_20_fu_5738_p2.read());
}

void music::thread_r_V_37_fu_5799_p0() {
    r_V_37_fu_5799_p0 =  (sc_lv<49>) (r_V_22_fu_5795_p1.read());
}

void music::thread_r_V_37_fu_5799_p1() {
    r_V_37_fu_5799_p1 =  (sc_lv<49>) (r_V_22_fu_5795_p1.read());
}

void music::thread_r_V_37_fu_5799_p2() {
    r_V_37_fu_5799_p2 = (!r_V_37_fu_5799_p0.read().is_01() || !r_V_37_fu_5799_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_37_fu_5799_p0.read()) * sc_biguint<49>(r_V_37_fu_5799_p1.read());
}

void music::thread_r_V_38_fu_5839_p0() {
    r_V_38_fu_5839_p0 =  (sc_lv<49>) (r_V_25_fu_5836_p1.read());
}

void music::thread_r_V_38_fu_5839_p1() {
    r_V_38_fu_5839_p1 =  (sc_lv<49>) (r_V_22_reg_8015.read());
}

void music::thread_r_V_38_fu_5839_p2() {
    r_V_38_fu_5839_p2 = (!r_V_38_fu_5839_p0.read().is_01() || !r_V_38_fu_5839_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_38_fu_5839_p0.read()) * sc_biguint<49>(r_V_38_fu_5839_p1.read());
}

void music::thread_r_V_39_fu_5854_p0() {
    r_V_39_fu_5854_p0 =  (sc_lv<49>) (r_V_25_fu_5836_p1.read());
}

void music::thread_r_V_39_fu_5854_p1() {
    r_V_39_fu_5854_p1 =  (sc_lv<49>) (r_V_25_fu_5836_p1.read());
}

void music::thread_r_V_39_fu_5854_p2() {
    r_V_39_fu_5854_p2 = (!r_V_39_fu_5854_p0.read().is_01() || !r_V_39_fu_5854_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_39_fu_5854_p0.read()) * sc_biguint<49>(r_V_39_fu_5854_p1.read());
}

void music::thread_r_V_40_fu_5877_p0() {
    r_V_40_fu_5877_p0 =  (sc_lv<56>) (r_V_40_fu_5877_p00.read());
}

void music::thread_r_V_40_fu_5877_p00() {
    r_V_40_fu_5877_p00 = esl_zext<108,56>(B_V_reg_8010.read());
}

void music::thread_r_V_40_fu_5877_p1() {
    r_V_40_fu_5877_p1 = fourth_order_double_5_q0.read();
}

void music::thread_r_V_40_fu_5877_p2() {
    r_V_40_fu_5877_p2 = (!r_V_40_fu_5877_p0.read().is_01() || !r_V_40_fu_5877_p1.read().is_01())? sc_lv<108>(): sc_biguint<56>(r_V_40_fu_5877_p0.read()) * sc_bigint<52>(r_V_40_fu_5877_p1.read());
}

void music::thread_r_V_41_fu_5900_p0() {
    r_V_41_fu_5900_p0 =  (sc_lv<49>) (r_V_41_fu_5900_p00.read());
}

void music::thread_r_V_41_fu_5900_p00() {
    r_V_41_fu_5900_p00 = esl_zext<93,49>(B_squared_V_reg_8020.read());
}

void music::thread_r_V_41_fu_5900_p1() {
    r_V_41_fu_5900_p1 = fourth_order_double_6_q0.read();
}

void music::thread_r_V_41_fu_5900_p2() {
    r_V_41_fu_5900_p2 = (!r_V_41_fu_5900_p0.read().is_01() || !r_V_41_fu_5900_p1.read().is_01())? sc_lv<93>(): sc_biguint<49>(r_V_41_fu_5900_p0.read()) * sc_bigint<44>(r_V_41_fu_5900_p1.read());
}

void music::thread_r_V_42_fu_5930_p0() {
    r_V_42_fu_5930_p0 =  (sc_lv<42>) (r_V_42_fu_5930_p00.read());
}

void music::thread_r_V_42_fu_5930_p00() {
    r_V_42_fu_5930_p00 = esl_zext<75,42>(B_third_power_V_reg_8047.read());
}

void music::thread_r_V_42_fu_5930_p1() {
    r_V_42_fu_5930_p1 =  (sc_lv<33>) (r_V_42_fu_5930_p10.read());
}

void music::thread_r_V_42_fu_5930_p10() {
    r_V_42_fu_5930_p10 = esl_zext<75,33>(fourth_order_double_14_reg_8072.read());
}

void music::thread_r_V_42_fu_5930_p2() {
    r_V_42_fu_5930_p2 = (!r_V_42_fu_5930_p0.read().is_01() || !r_V_42_fu_5930_p1.read().is_01())? sc_lv<75>(): sc_biguint<42>(r_V_42_fu_5930_p0.read()) * sc_biguint<33>(r_V_42_fu_5930_p1.read());
}

void music::thread_r_V_43_fu_5953_p0() {
    r_V_43_fu_5953_p0 =  (sc_lv<35>) (r_V_43_fu_5953_p00.read());
}

void music::thread_r_V_43_fu_5953_p00() {
    r_V_43_fu_5953_p00 = esl_zext<60,35>(B_fourth_power_V_reg_8052.read());
}

void music::thread_r_V_43_fu_5953_p1() {
    r_V_43_fu_5953_p1 =  (sc_lv<25>) (r_V_43_fu_5953_p10.read());
}

void music::thread_r_V_43_fu_5953_p10() {
    r_V_43_fu_5953_p10 = esl_zext<60,25>(fourth_order_double_s_q0.read());
}

void music::thread_r_V_43_fu_5953_p2() {
    r_V_43_fu_5953_p2 = (!r_V_43_fu_5953_p0.read().is_01() || !r_V_43_fu_5953_p1.read().is_01())? sc_lv<60>(): sc_biguint<35>(r_V_43_fu_5953_p0.read()) * sc_biguint<25>(r_V_43_fu_5953_p1.read());
}

void music::thread_r_V_44_fu_6030_p0() {
    r_V_44_fu_6030_p0 = ret_V_reg_8082.read();
}

void music::thread_r_V_44_fu_6030_p1() {
    r_V_44_fu_6030_p1 =  (sc_lv<63>) (r_V_44_fu_6030_p10.read());
}

void music::thread_r_V_44_fu_6030_p10() {
    r_V_44_fu_6030_p10 = esl_zext<126,63>(select_ln272_2_fu_6017_p3.read());
}

void music::thread_r_V_44_fu_6030_p2() {
    r_V_44_fu_6030_p2 = (!r_V_44_fu_6030_p0.read().is_01() || !r_V_44_fu_6030_p1.read().is_01())? sc_lv<126>(): sc_bigint<64>(r_V_44_fu_6030_p0.read()) * sc_biguint<63>(r_V_44_fu_6030_p1.read());
}

void music::thread_r_V_fu_5733_p2() {
    r_V_fu_5733_p2 = (!zext_ln1287_fu_5729_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7971.read() >> (unsigned short)zext_ln1287_fu_5729_p1.read().to_uint();
}

void music::thread_ref_4oPi_table_256_V_address0() {
    ref_4oPi_table_256_V_address0 =  (sc_lv<4>) (zext_ln635_fu_5506_p1.read());
}

void music::thread_ref_4oPi_table_256_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_1;
    } else {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_0;
    }
}

void music::thread_ret_V_28_fu_6051_p2() {
    ret_V_28_fu_6051_p2 = (!ap_const_lv12_0.is_01() || !rhs_V_4_fu_6047_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(rhs_V_4_fu_6047_p1.read()));
}

void music::thread_ret_V_29_fu_6224_p3() {
    ret_V_29_fu_6224_p3 = (!or_ln300_fu_6219_p2.read()[0].is_01())? sc_lv<11>(): ((or_ln300_fu_6219_p2.read()[0].to_bool())? select_ln300_4_fu_6211_p3.read(): tmp_V_5_fu_6069_p4.read());
}

void music::thread_ret_V_30_fu_6240_p3() {
    ret_V_30_fu_6240_p3 = (!or_ln300_fu_6219_p2.read()[0].is_01())? sc_lv<52>(): ((or_ln300_fu_6219_p2.read()[0].to_bool())? select_ln300_6_fu_6232_p3.read(): tmp_V_6_fu_6079_p1.read());
}

void music::thread_ret_V_33_fu_5976_p2() {
    ret_V_33_fu_5976_p2 = (!lhs_V_2_fu_5969_p1.read().is_01() || !rhs_V_3_fu_5973_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(lhs_V_2_fu_5969_p1.read()) + sc_bigint<64>(rhs_V_3_fu_5973_p1.read()));
}

void music::thread_ret_V_34_fu_5985_p2() {
    ret_V_34_fu_5985_p2 = (!ret_V_33_fu_5976_p2.read().is_01() || !sext_ln657_fu_5982_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ret_V_33_fu_5976_p2.read()) + sc_bigint<64>(sext_ln657_fu_5982_p1.read()));
}

void music::thread_ret_V_35_fu_5995_p2() {
    ret_V_35_fu_5995_p2 = (!ret_V_34_fu_5985_p2.read().is_01() || !zext_ln657_fu_5991_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ret_V_34_fu_5985_p2.read()) + sc_biguint<64>(zext_ln657_fu_5991_p1.read()));
}

void music::thread_ret_V_fu_6005_p2() {
    ret_V_fu_6005_p2 = (!ret_V_35_fu_5995_p2.read().is_01() || !zext_ln657_1_fu_6001_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ret_V_35_fu_5995_p2.read()) + sc_biguint<64>(zext_ln657_1_fu_6001_p1.read()));
}

void music::thread_rev_fu_3791_p3() {
    rev_fu_3791_p3 = esl_concat<31,1>(trunc_ln112_fu_3783_p1.read(), trunc_ln111_fu_3787_p1.read());
}

void music::thread_rhs_V_3_fu_5973_p1() {
    rhs_V_3_fu_5973_p1 = esl_sext<64,56>(trunc_ln_reg_8062.read());
}

void music::thread_rhs_V_4_fu_6047_p1() {
    rhs_V_4_fu_6047_p1 = esl_sext<12,11>(select_ln272_fu_6011_p3.read());
}

void music::thread_select_ln271_fu_6165_p3() {
    select_ln271_fu_6165_p3 = (!cos_basis_reg_8003.read()[0].is_01())? sc_lv<1>(): ((cos_basis_reg_8003.read()[0].to_bool())? tmp_34_fu_6089_p18.read(): tmp_35_fu_6127_p18.read());
}

void music::thread_select_ln272_2_fu_6017_p3() {
    select_ln272_2_fu_6017_p3 = (!cos_basis_reg_8003.read()[0].is_01())? sc_lv<63>(): ((cos_basis_reg_8003.read()[0].to_bool())? ap_const_lv63_7FFFFFFFFFFFFFFF: Mx_V_reg_7971.read());
}

void music::thread_select_ln272_fu_6011_p3() {
    select_ln272_fu_6011_p3 = (!cos_basis_reg_8003.read()[0].is_01())? sc_lv<11>(): ((cos_basis_reg_8003.read()[0].to_bool())? ap_const_lv11_0: Ex_V_reg_7978.read());
}

void music::thread_select_ln300_4_fu_6211_p3() {
    select_ln300_4_fu_6211_p3 = (!xor_ln300_fu_6205_p2.read()[0].is_01())? sc_lv<11>(): ((xor_ln300_fu_6205_p2.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void music::thread_select_ln300_6_fu_6232_p3() {
    select_ln300_6_fu_6232_p3 = (!xor_ln300_fu_6205_p2.read()[0].is_01())? sc_lv<52>(): ((xor_ln300_fu_6205_p2.read()[0].to_bool())? ap_const_lv52_FFFFFFFFFFFFF: ap_const_lv52_0);
}

void music::thread_select_ln311_fu_6186_p3() {
    select_ln311_fu_6186_p3 = (!or_ln311_fu_6181_p2.read()[0].is_01())? sc_lv<1>(): ((or_ln311_fu_6181_p2.read()[0].to_bool())? xor_ln311_fu_6176_p2.read(): p_Result_60_fu_6061_p3.read());
}

void music::thread_select_ln482_fu_5584_p3() {
    select_ln482_fu_5584_p3 = (!closepath_reg_7917.read()[0].is_01())? sc_lv<11>(): ((closepath_reg_7917.read()[0].to_bool())? add_ln114_fu_5579_p2.read(): ap_const_lv11_0);
}

void music::thread_sext_ln1067_fu_4604_p1() {
    sext_ln1067_fu_4604_p1 = esl_sext<4,3>(xor_ln1067_fu_4598_p2.read());
}

void music::thread_sext_ln1311_fu_5725_p1() {
    sext_ln1311_fu_5725_p1 = esl_sext<32,12>(ush_fu_5718_p3.read());
}

void music::thread_sext_ln1334_fu_5709_p1() {
    sext_ln1334_fu_5709_p1 = esl_sext<12,11>(Ex_V_reg_7978.read());
}

void music::thread_sext_ln183_fu_3905_p1() {
    sext_ln183_fu_3905_p1 = esl_sext<64,32>(i_lower_fu_3900_p2.read());
}

void music::thread_sext_ln186_fu_3911_p1() {
    sext_ln186_fu_3911_p1 = esl_sext<64,32>(i_0_i_reg_1914.read());
}

void music::thread_sext_ln54_fu_4770_p1() {
    sext_ln54_fu_4770_p1 = esl_sext<64,6>(add_ln54_fu_4765_p2.read());
}

void music::thread_sext_ln57_cast_fu_4812_p3() {
    sext_ln57_cast_fu_4812_p3 = esl_concat<4,2>(trunc_ln57_reg_7524.read(), ap_const_lv2_0);
}

void music::thread_sext_ln57_fu_4806_p1() {
    sext_ln57_fu_4806_p1 = esl_sext<64,34>(tmp_68_fu_4798_p3.read());
}

void music::thread_sext_ln59_1_fu_4839_p1() {
    sext_ln59_1_fu_4839_p1 = esl_sext<64,6>(add_ln59_1_fu_4834_p2.read());
}

void music::thread_sext_ln59_fu_4851_p1() {
    sext_ln59_fu_4851_p1 = esl_sext<64,6>(add_ln59_reg_7547.read());
}

void music::thread_sext_ln657_fu_5982_p1() {
    sext_ln657_fu_5982_p1 = esl_sext<64,48>(trunc_ln662_1_reg_8067.read());
}

void music::thread_sext_ln65_fu_4856_p1() {
    sext_ln65_fu_4856_p1 = esl_sext<32,3>(m_0_i_reg_2343.read());
}

void music::thread_sext_ln68_1_fu_4951_p1() {
    sext_ln68_1_fu_4951_p1 = esl_sext<64,6>(add_ln68_1_fu_4946_p2.read());
}

void music::thread_sext_ln68_2_cast_fu_4938_p3() {
    sext_ln68_2_cast_fu_4938_p3 = esl_concat<4,2>(trunc_ln68_1_fu_4934_p1.read(), ap_const_lv2_0);
}

void music::thread_sext_ln68_fu_4928_p1() {
    sext_ln68_fu_4928_p1 = esl_sext<64,6>(add_ln68_fu_4923_p2.read());
}

void music::thread_sext_ln70_fu_4880_p1() {
    sext_ln70_fu_4880_p1 = esl_sext<6,5>(tmp_62_fu_4872_p3.read());
}

void music::thread_shl_ln_fu_3674_p3() {
    shl_ln_fu_3674_p3 = esl_concat<4,10>(l_0_reg_1802.read(), ap_const_lv10_0);
}

void music::thread_sin_basis_fu_5815_p2() {
    sin_basis_fu_5815_p2 = (cos_basis_fu_5750_p10.read() ^ ap_const_lv1_1);
}

void music::thread_sort_index_0_2_fu_5234_p5() {
    sort_index_0_2_fu_5234_p5 = flag_0_i_reg_2586.read().range(2-1, 0);
}

void music::thread_stage_fu_3878_p2() {
    stage_fu_3878_p2 = (!stage_0_i_reg_1879.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(stage_0_i_reg_1879.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_sub_ln1311_fu_5712_p2() {
    sub_ln1311_fu_5712_p2 = (!ap_const_lv12_0.is_01() || !sext_ln1334_fu_5709_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(sext_ln1334_fu_5709_p1.read()));
}

void music::thread_t1_V_fu_5916_p3() {
    t1_V_fu_5916_p3 = esl_concat<59,4>(fourth_order_double_4_q0.read(), ap_const_lv4_0);
}

void music::thread_temp_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln285_1_fu_6500_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_5_reg_8154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4707_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4672_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_fu_4440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_1_reg_7094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3542_p1.read());
    } else {
        temp_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()))) {
        temp_mat_M_imag_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        temp_mat_M_imag_d0 = complex_M_imag_read_2_reg_2816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_imag_d0 = reg_3318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln274_fu_6358_p2.read())))) {
        temp_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln285_1_fu_6500_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_5_reg_8149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4707_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4672_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_fu_4440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_1_reg_7089.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3542_p1.read());
    } else {
        temp_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()))) {
        temp_mat_M_real_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        temp_mat_M_real_d0 = complex_M_real_read_2_reg_2829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_real_d0 = reg_3308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln274_fu_6358_p2.read())))) {
        temp_mat_M_real_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_theta_address0() {
    theta_address0 =  (sc_lv<9>) (zext_ln265_fu_5435_p1.read());
}

void music::thread_theta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        theta_ce0 = ap_const_logic_1;
    } else {
        theta_ce0 = ap_const_logic_0;
    }
}

void music::thread_tmp_17_fu_3464_p3() {
    tmp_17_fu_3464_p3 = esl_concat<2,2>(phi_ln202_reg_1664.read(), phi_ln202_1_reg_1676.read());
}

void music::thread_tmp_19_fu_5098_p5() {
    tmp_19_fu_5098_p5 = flag_0_i_reg_2586.read().range(2-1, 0);
}

void music::thread_tmp_20_fu_5116_p5() {
    tmp_20_fu_5116_p5 = tmp_19_fu_5098_p6.read().range(2-1, 0);
}

void music::thread_tmp_21_fu_5137_p5() {
    tmp_21_fu_5137_p5 = (!ap_const_lv2_1.is_01() || !trunc_ln86_fu_5066_p1.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(trunc_ln86_fu_5066_p1.read()));
}

void music::thread_tmp_22_fu_5155_p5() {
    tmp_22_fu_5155_p5 = tmp_21_fu_5137_p6.read().range(2-1, 0);
}

void music::thread_tmp_23_fu_5174_p4() {
    tmp_23_fu_5174_p4 = bitcast_ln87_fu_5170_p1.read().range(30, 23);
}

void music::thread_tmp_26_fu_5192_p4() {
    tmp_26_fu_5192_p4 = bitcast_ln87_1_fu_5188_p1.read().range(30, 23);
}

void music::thread_tmp_29_fu_3426_p3() {
    tmp_29_fu_3426_p3 = esl_concat<4,2>(phi_ln201_reg_1641.read(), phi_ln201_1_reg_1653.read());
}

void music::thread_tmp_31_fu_5408_p5() {
    tmp_31_fu_5408_p5 = x29_0_reg_2760.read().range(2-1, 0);
}

void music::thread_tmp_32_fu_5360_p5() {
    tmp_32_fu_5360_p5 = y_0_reg_2749.read().range(2-1, 0);
}

void music::thread_tmp_33_fu_3502_p3() {
    tmp_33_fu_3502_p3 = esl_concat<2,1>(phi_ln203_reg_1687.read(), phi_ln203_1_reg_1699.read());
}

void music::thread_tmp_36_fu_3534_p3() {
    tmp_36_fu_3534_p3 = esl_concat<2,2>(phi_ln204_reg_1710.read(), phi_ln204_1_reg_1722.read());
}

void music::thread_tmp_37_fu_3572_p3() {
    tmp_37_fu_3572_p3 = esl_concat<9,2>(phi_ln205_reg_1733.read(), phi_ln205_1_reg_1745.read());
}

void music::thread_tmp_38_fu_4010_p3() {
    tmp_38_fu_4010_p3 = esl_concat<11,3>(jj_0_reg_1982.read(), ap_const_lv3_0);
}

void music::thread_tmp_39_fu_4022_p3() {
    tmp_39_fu_4022_p3 = esl_concat<11,1>(jj_0_reg_1982.read(), ap_const_lv1_0);
}

void music::thread_tmp_40_fu_4069_p3() {
    tmp_40_fu_4069_p3 = esl_concat<4,2>(l27_0_reg_1994.read(), ap_const_lv2_0);
}

void music::thread_tmp_41_fu_3723_p3() {
    tmp_41_fu_3723_p3 = esl_concat<14,2>(add_ln230_fu_3718_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_42_cast_fu_4061_p3() {
    tmp_42_cast_fu_4061_p3 = esl_concat<15,2>(add_ln246_1_fu_4056_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_42_fu_4138_p3() {
    tmp_42_fu_4138_p3 = esl_concat<3,2>(x_0_i_reg_2016.read(), ap_const_lv2_0);
}

void music::thread_tmp_43_fu_4255_p3() {
    tmp_43_fu_4255_p3 = esl_concat<2,2>(phi_ln11_reg_2073.read(), phi_ln11_1_reg_2085.read());
}

void music::thread_tmp_44_fu_4193_p3() {
    tmp_44_fu_4193_p3 = esl_concat<4,2>(l_0_i_reg_2062.read(), ap_const_lv2_0);
}

void music::thread_tmp_45_fu_3940_p3() {
    tmp_45_fu_3940_p3 = esl_concat<11,3>(j26_0_reg_1923.read(), ap_const_lv3_0);
}

void music::thread_tmp_46_fu_3952_p3() {
    tmp_46_fu_3952_p3 = esl_concat<11,1>(j26_0_reg_1923.read(), ap_const_lv1_0);
}

void music::thread_tmp_47_fu_3884_p4() {
    tmp_47_fu_3884_p4 = i_0_i_reg_1914.read().range(31, 10);
}

void music::thread_tmp_48_fu_4293_p3() {
    tmp_48_fu_4293_p3 = esl_concat<2,2>(phi_ln12_reg_2096.read(), phi_ln12_1_reg_2108.read());
}

void music::thread_tmp_49_fu_4331_p3() {
    tmp_49_fu_4331_p3 = esl_concat<2,2>(phi_ln13_reg_2119.read(), phi_ln13_1_reg_2131.read());
}

void music::thread_tmp_50_fu_4369_p3() {
    tmp_50_fu_4369_p3 = esl_concat<2,2>(phi_ln14_reg_2142.read(), phi_ln14_1_reg_2154.read());
}

void music::thread_tmp_51_cast_fu_3975_p3() {
    tmp_51_cast_fu_3975_p3 = esl_concat<15,2>(add_ln235_1_fu_3970_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_51_fu_4407_p3() {
    tmp_51_fu_4407_p3 = esl_concat<3,2>(i_0_i40_reg_2165.read(), ap_const_lv2_0);
}

void music::thread_tmp_52_fu_4575_p3() {
    tmp_52_fu_4575_p3 = esl_concat<3,2>(count_0_i_reg_2257.read(), ap_const_lv2_0);
}

void music::thread_tmp_53_fu_4470_p3() {
    tmp_53_fu_4470_p3 = esl_concat<3,2>(i17_0_i_reg_2198.read(), ap_const_lv2_0);
}

void music::thread_tmp_54_fu_4654_p3() {
    tmp_54_fu_4654_p3 = esl_concat<3,2>(i19_0_i_reg_2269.read(), ap_const_lv2_0);
}

void music::thread_tmp_55_fu_4525_p3() {
    tmp_55_fu_4525_p3 = esl_concat<3,2>(k_0_i_reg_2246.read(), ap_const_lv2_0);
}

void music::thread_tmp_56_fu_5287_p3() {
    tmp_56_fu_5287_p3 = esl_concat<3,2>(x_0_reg_2738.read(), ap_const_lv2_0);
}

void music::thread_tmp_57_fu_5299_p3() {
    tmp_57_fu_5299_p3 = esl_concat<3,1>(x_0_reg_2738.read(), ap_const_lv1_0);
}

void music::thread_tmp_58_fu_5319_p3() {
    tmp_58_fu_5319_p3 = esl_concat<60,4>(ap_const_lv60_0, or_ln257_fu_5313_p2.read());
}

void music::thread_tmp_59_fu_4743_p3() {
    tmp_59_fu_4743_p3 = esl_concat<2,2>(j_14_reg_2292.read(), ap_const_lv2_0);
}

void music::thread_tmp_60_fu_4729_p3() {
    tmp_60_fu_4729_p3 = esl_concat<2,2>(j_14_reg_2292.read(), j_14_reg_2292.read());
}

void music::thread_tmp_61_fu_4860_p3() {
    tmp_61_fu_4860_p3 = m_0_i_reg_2343.read().range(2, 2);
}

void music::thread_tmp_62_fu_4872_p3() {
    tmp_62_fu_4872_p3 = esl_concat<3,2>(m_0_i_reg_2343.read(), ap_const_lv2_0);
}

void music::thread_tmp_63_fu_6295_p3() {
    tmp_63_fu_6295_p3 = esl_concat<3,1>(i31_0_reg_2794.read(), ap_const_lv1_0);
}

void music::thread_tmp_64_fu_6307_p3() {
    tmp_64_fu_6307_p3 = esl_concat<3,2>(i31_0_reg_2794.read(), ap_const_lv2_0);
}

void music::thread_tmp_65_fu_5936_p4() {
    tmp_65_fu_5936_p4 = r_V_42_fu_5930_p2.read().range(74, 38);
}

void music::thread_tmp_66_fu_5959_p4() {
    tmp_66_fu_5959_p4 = r_V_43_fu_5953_p2.read().range(59, 31);
}

void music::thread_tmp_67_fu_5007_p3() {
    tmp_67_fu_5007_p3 = esl_concat<3,2>(i25_0_i_reg_2388.read(), ap_const_lv2_0);
}

void music::thread_tmp_68_fu_4798_p3() {
    tmp_68_fu_4798_p3 = esl_concat<32,2>(j_11_fu_4782_p2.read(), j_14_reg_2292.read());
}

void music::thread_tmp_69_fu_6428_p3() {
    tmp_69_fu_6428_p3 = esl_concat<9,2>(i33_0_reg_2853.read(), ap_const_lv2_0);
}

void music::thread_tmp_70_fu_6335_p3() {
    tmp_70_fu_6335_p3 = esl_concat<3,1>(j32_0_reg_2805.read(), ap_const_lv1_0);
}

void music::thread_tmp_71_fu_6559_p3() {
    tmp_71_fu_6559_p3 = esl_concat<9,2>(i36_0_reg_2923.read(), ap_const_lv2_0);
}

void music::thread_tmp_72_fu_6483_p3() {
    tmp_72_fu_6483_p3 = esl_concat<3,2>(k35_0_reg_2901.read(), ap_const_lv2_0);
}

void music::thread_tmp_V_4_fu_5472_p1() {
    tmp_V_4_fu_5472_p1 = p_Val2_s_fu_5450_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_5_fu_6069_p4() {
    tmp_V_5_fu_6069_p4 = p_Val2_70_fu_6058_p1.read().range(62, 52);
}

void music::thread_tmp_V_6_fu_6079_p1() {
    tmp_V_6_fu_6079_p1 = p_Val2_70_fu_6058_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_fu_5462_p4() {
    tmp_V_fu_5462_p4 = p_Val2_s_fu_5450_p1.read().range(62, 52);
}

void music::thread_tmp_i_i_i7_fu_5649_p3() {
    tmp_i_i_i7_fu_5649_p3 = esl_cttz<64,64>(p_Result_58_fu_5641_p3.read());
}

void music::thread_trunc_ln109_fu_3751_p1() {
    trunc_ln109_fu_3751_p1 = input_assign_reg_1836.read().range(10-1, 0);
}

void music::thread_trunc_ln111_fu_3787_p1() {
    trunc_ln111_fu_3787_p1 = p_0_i_i_i_reg_1870.read().range(1-1, 0);
}

void music::thread_trunc_ln112_fu_3783_p1() {
    trunc_ln112_fu_3783_p1 = reversed_reg_1848.read().range(31-1, 0);
}

void music::thread_trunc_ln41_fu_4614_p1() {
    trunc_ln41_fu_4614_p1 = count_0_i_reg_2257.read().range(2-1, 0);
}

void music::thread_trunc_ln54_fu_4761_p1() {
    trunc_ln54_fu_4761_p1 = j22_0_i_reg_2304.read().range(6-1, 0);
}

void music::thread_trunc_ln57_fu_4794_p1() {
    trunc_ln57_fu_4794_p1 = j_11_fu_4782_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln59_fu_4825_p1() {
    trunc_ln59_fu_4825_p1 = q_0_i_reg_2322.read().range(6-1, 0);
}

void music::thread_trunc_ln601_fu_5511_p1() {
    trunc_ln601_fu_5511_p1 = addr_V_fu_5488_p3.read().range(7-1, 0);
}

void music::thread_trunc_ln68_1_fu_4934_p1() {
    trunc_ln68_1_fu_4934_p1 = j_10_fu_4907_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln68_fu_4919_p1() {
    trunc_ln68_fu_4919_p1 = j_10_fu_4907_p2.read().range(6-1, 0);
}

void music::thread_trunc_ln745_fu_5597_p1() {
    trunc_ln745_fu_5597_p1 = p_Val2_75_fu_5591_p3.read().range(1-1, 0);
}

void music::thread_trunc_ln82_fu_5046_p1() {
    trunc_ln82_fu_5046_p1 = sort_index_0_reg_2443.read().range(2-1, 0);
}

void music::thread_trunc_ln86_fu_5066_p1() {
    trunc_ln86_fu_5066_p1 = j_0_in_i_reg_2596.read().range(2-1, 0);
}

void music::thread_trunc_ln87_3_fu_5184_p1() {
    trunc_ln87_3_fu_5184_p1 = bitcast_ln87_fu_5170_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln87_4_fu_5202_p1() {
    trunc_ln87_4_fu_5202_p1 = bitcast_ln87_1_fu_5188_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln92_fu_5230_p1() {
    trunc_ln92_fu_5230_p1 = flag_0_i_reg_2586.read().range(2-1, 0);
}

void music::thread_ush_fu_5718_p3() {
    ush_fu_5718_p3 = (!isNeg_reg_7984.read()[0].is_01())? sc_lv<12>(): ((isNeg_reg_7984.read()[0].to_bool())? sub_ln1311_fu_5712_p2.read(): sext_ln1334_fu_5709_p1.read());
}

void music::thread_w_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        w_M_imag_address0 = w_M_imag_addr_1_reg_8373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        w_M_imag_address0 =  (sc_lv<9>) (zext_ln294_reg_8319.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_imag_address0 =  (sc_lv<9>) (zext_ln206_fu_3604_p1.read());
    } else {
        w_M_imag_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()))) {
        w_M_imag_ce0 = ap_const_logic_1;
    } else {
        w_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        w_M_imag_d0 = grp_fu_3045_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_imag_d0 = ap_const_lv32_0;
    } else {
        w_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_w_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()))) {
        w_M_imag_we0 = ap_const_logic_1;
    } else {
        w_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_w_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln301_fu_6627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        w_M_real_address0 = w_M_real_addr_2_reg_8368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln294_reg_8319.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_real_address0 =  (sc_lv<9>) (zext_ln206_fu_3604_p1.read());
    } else {
        w_M_real_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()))) {
        w_M_real_ce0 = ap_const_logic_1;
    } else {
        w_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        w_M_real_d0 = grp_fu_3040_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        w_M_real_d0 = ap_const_lv32_0;
    } else {
        w_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_w_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()))) {
        w_M_real_we0 = ap_const_logic_1;
    } else {
        w_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_x_1_fu_5281_p2() {
    x_1_fu_5281_p2 = (!x_0_reg_2738.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_2738.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_2_fu_5398_p2() {
    x_2_fu_5398_p2 = (!x29_0_reg_2760.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x29_0_reg_2760.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_fu_4128_p2() {
    x_fu_4128_p2 = (!x_0_i_reg_2016.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_i_reg_2016.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_xor_ln1067_fu_4598_p2() {
    xor_ln1067_fu_4598_p2 = (count_0_i_reg_2257.read() ^ ap_const_lv3_4);
}

void music::thread_xor_ln203_fu_3496_p2() {
    xor_ln203_fu_3496_p2 = (phi_ln203_1_reg_1699.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln267_fu_6272_p2() {
    xor_ln267_fu_6272_p2 = (bitcast_ln267_fu_6268_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln300_fu_6205_p2() {
    xor_ln300_fu_6205_p2 = (and_ln300_2_fu_6201_p2.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln311_fu_6176_p2() {
    xor_ln311_fu_6176_p2 = (icmp_ln833_2_reg_7996.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln444_1_fu_4983_p2() {
    xor_ln444_1_fu_4983_p2 = (bitcast_ln444_2_fu_4979_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln444_fu_4967_p2() {
    xor_ln444_fu_4967_p2 = (bitcast_ln444_fu_4963_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_1_fu_6400_p2() {
    xor_ln667_1_fu_6400_p2 = (bitcast_ln667_2_fu_6396_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_2_fu_6527_p2() {
    xor_ln667_2_fu_6527_p2 = (bitcast_ln667_4_fu_6523_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_fu_4231_p2() {
    xor_ln667_fu_4231_p2 = (bitcast_ln667_fu_4227_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_y_1_fu_5429_p2() {
    y_1_fu_5429_p2 = (!y30_0_reg_2783.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(y30_0_reg_2783.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_y_2_fu_5335_p2() {
    y_2_fu_5335_p2 = (!y_0_reg_2749.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_2749.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_y_fu_4156_p2() {
    y_fu_4156_p2 = (!y_0_i_reg_2027.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_i_reg_2027.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_zext_ln1027_10_fu_3634_p1() {
    zext_ln1027_10_fu_3634_p1 = esl_zext<11,9>(phi_ln207_1_reg_1791.read());
}

void music::thread_zext_ln1027_11_fu_3644_p1() {
    zext_ln1027_11_fu_3644_p1 = esl_zext<64,11>(add_ln1027_fu_3638_p2.read());
}

void music::thread_zext_ln1027_2_fu_3472_p1() {
    zext_ln1027_2_fu_3472_p1 = esl_zext<64,4>(tmp_17_fu_3464_p3.read());
}

void music::thread_zext_ln1027_3_fu_3510_p1() {
    zext_ln1027_3_fu_3510_p1 = esl_zext<64,3>(tmp_33_fu_3502_p3.read());
}

void music::thread_zext_ln1027_4_fu_3542_p1() {
    zext_ln1027_4_fu_3542_p1 = esl_zext<64,4>(tmp_36_fu_3534_p3.read());
}

void music::thread_zext_ln1027_5_fu_3580_p1() {
    zext_ln1027_5_fu_3580_p1 = esl_zext<64,11>(tmp_37_fu_3572_p3.read());
}

void music::thread_zext_ln1027_6_fu_4263_p1() {
    zext_ln1027_6_fu_4263_p1 = esl_zext<64,4>(tmp_43_fu_4255_p3.read());
}

void music::thread_zext_ln1027_7_fu_4301_p1() {
    zext_ln1027_7_fu_4301_p1 = esl_zext<64,4>(tmp_48_fu_4293_p3.read());
}

void music::thread_zext_ln1027_8_fu_4339_p1() {
    zext_ln1027_8_fu_4339_p1 = esl_zext<64,4>(tmp_49_fu_4331_p3.read());
}

void music::thread_zext_ln1027_9_fu_4377_p1() {
    zext_ln1027_9_fu_4377_p1 = esl_zext<64,4>(tmp_50_fu_4369_p3.read());
}

void music::thread_zext_ln1027_fu_3434_p1() {
    zext_ln1027_fu_3434_p1 = esl_zext<64,6>(tmp_29_fu_3426_p3.read());
}

void music::thread_zext_ln103_1_fu_4210_p1() {
    zext_ln103_1_fu_4210_p1 = esl_zext<64,7>(add_ln103_fu_4205_p2.read());
}

void music::thread_zext_ln103_2_fu_4221_p1() {
    zext_ln103_2_fu_4221_p1 = esl_zext<64,7>(add_ln103_1_fu_4216_p2.read());
}

void music::thread_zext_ln103_fu_4201_p1() {
    zext_ln103_fu_4201_p1 = esl_zext<7,6>(tmp_44_fu_4193_p3.read());
}

void music::thread_zext_ln1044_1_fu_4583_p1() {
    zext_ln1044_1_fu_4583_p1 = esl_zext<6,5>(tmp_52_fu_4575_p3.read());
}

void music::thread_zext_ln1044_2_fu_4593_p1() {
    zext_ln1044_2_fu_4593_p1 = esl_zext<64,6>(add_ln1044_fu_4587_p2.read());
}

void music::thread_zext_ln1044_fu_4571_p1() {
    zext_ln1044_fu_4571_p1 = esl_zext<6,3>(count_0_i_reg_2257.read());
}

void music::thread_zext_ln105_1_fu_4162_p1() {
    zext_ln105_1_fu_4162_p1 = esl_zext<7,3>(y_0_i_reg_2027.read());
}

void music::thread_zext_ln105_2_fu_4166_p1() {
    zext_ln105_2_fu_4166_p1 = esl_zext<6,3>(y_0_i_reg_2027.read());
}

void music::thread_zext_ln105_3_fu_4175_p1() {
    zext_ln105_3_fu_4175_p1 = esl_zext<64,6>(add_ln105_fu_4170_p2.read());
}

void music::thread_zext_ln105_fu_4134_p1() {
    zext_ln105_fu_4134_p1 = esl_zext<7,3>(x_0_i_reg_2016.read());
}

void music::thread_zext_ln1067_fu_4608_p1() {
    zext_ln1067_fu_4608_p1 = esl_zext<64,4>(sext_ln1067_fu_4604_p1.read());
}

void music::thread_zext_ln109_fu_3755_p1() {
    zext_ln109_fu_3755_p1 = esl_zext<32,11>(input_assign_reg_1836.read());
}

void music::thread_zext_ln113_fu_3809_p1() {
    zext_ln113_fu_3809_p1 = esl_zext<10,9>(input_assign_1_fu_3799_p4.read());
}

void music::thread_zext_ln1253_fu_5661_p1() {
    zext_ln1253_fu_5661_p1 = esl_zext<124,6>(Mx_zeros_V_fu_5657_p1.read());
}

void music::thread_zext_ln127_fu_3818_p1() {
    zext_ln127_fu_3818_p1 = esl_zext<64,11>(input_assign_reg_1836.read());
}

void music::thread_zext_ln1287_fu_5729_p1() {
    zext_ln1287_fu_5729_p1 = esl_zext<63,32>(sext_ln1311_fu_5725_p1.read());
}

void music::thread_zext_ln128_fu_3824_p1() {
    zext_ln128_fu_3824_p1 = esl_zext<64,32>(reversed_reg_1848.read());
}

void music::thread_zext_ln160_fu_3830_p1() {
    zext_ln160_fu_3830_p1 = esl_zext<11,4>(stage_0_i_reg_1879.read());
}

void music::thread_zext_ln162_fu_3856_p1() {
    zext_ln162_fu_3856_p1 = esl_zext<32,11>(DFTpts_reg_6884.read());
}

void music::thread_zext_ln206_fu_3604_p1() {
    zext_ln206_fu_3604_p1 = esl_zext<64,9>(phi_ln206_reg_1756.read());
}

void music::thread_zext_ln20_fu_4415_p1() {
    zext_ln20_fu_4415_p1 = esl_zext<6,5>(tmp_51_fu_4407_p3.read());
}

void music::thread_zext_ln228_fu_3682_p1() {
    zext_ln228_fu_3682_p1 = esl_zext<15,4>(l_0_reg_1802.read());
}

void music::thread_zext_ln229_1_fu_3698_p1() {
    zext_ln229_1_fu_3698_p1 = esl_zext<17,3>(n_0_reg_1813.read());
}

void music::thread_zext_ln229_fu_3702_p1() {
    zext_ln229_fu_3702_p1 = esl_zext<14,11>(j25_0_reg_1824.read());
}

void music::thread_zext_ln22_1_fu_4440_p1() {
    zext_ln22_1_fu_4440_p1 = esl_zext<64,6>(add_ln22_fu_4435_p2.read());
}

void music::thread_zext_ln22_fu_4431_p1() {
    zext_ln22_fu_4431_p1 = esl_zext<6,3>(j_0_i41_reg_2176.read());
}

void music::thread_zext_ln230_1_fu_3740_p1() {
    zext_ln230_1_fu_3740_p1 = esl_zext<64,17>(add_ln230_1_fu_3735_p2.read());
}

void music::thread_zext_ln230_2_fu_3745_p1() {
    zext_ln230_2_fu_3745_p1 = esl_zext<64,11>(j25_0_reg_1824.read());
}

void music::thread_zext_ln230_fu_3731_p1() {
    zext_ln230_fu_3731_p1 = esl_zext<17,16>(tmp_41_fu_3723_p3.read());
}

void music::thread_zext_ln235_1_fu_3948_p1() {
    zext_ln235_1_fu_3948_p1 = esl_zext<15,14>(tmp_45_fu_3940_p3.read());
}

void music::thread_zext_ln235_2_fu_3960_p1() {
    zext_ln235_2_fu_3960_p1 = esl_zext<15,12>(tmp_46_fu_3952_p3.read());
}

void music::thread_zext_ln235_3_fu_3988_p1() {
    zext_ln235_3_fu_3988_p1 = esl_zext<64,17>(add_ln235_2_reg_6979.read());
}

void music::thread_zext_ln235_fu_3934_p1() {
    zext_ln235_fu_3934_p1 = esl_zext<64,11>(j26_0_reg_1923.read());
}

void music::thread_zext_ln242_fu_4005_p1() {
    zext_ln242_fu_4005_p1 = esl_zext<64,11>(jj_0_reg_1982.read());
}

void music::thread_zext_ln244_fu_4077_p1() {
    zext_ln244_fu_4077_p1 = esl_zext<7,6>(tmp_40_fu_4069_p3.read());
}

void music::thread_zext_ln246_1_fu_4030_p1() {
    zext_ln246_1_fu_4030_p1 = esl_zext<15,12>(tmp_39_fu_4022_p3.read());
}

void music::thread_zext_ln246_2_fu_4052_p1() {
    zext_ln246_2_fu_4052_p1 = esl_zext<15,4>(l27_0_reg_1994.read());
}

void music::thread_zext_ln246_3_fu_4093_p1() {
    zext_ln246_3_fu_4093_p1 = esl_zext<7,3>(n28_0_reg_2005.read());
}

void music::thread_zext_ln246_4_fu_4097_p1() {
    zext_ln246_4_fu_4097_p1 = esl_zext<17,3>(n28_0_reg_2005.read());
}

void music::thread_zext_ln246_5_fu_4106_p1() {
    zext_ln246_5_fu_4106_p1 = esl_zext<64,17>(add_ln246_2_fu_4101_p2.read());
}

void music::thread_zext_ln246_6_fu_4117_p1() {
    zext_ln246_6_fu_4117_p1 = esl_zext<64,7>(add_ln246_3_reg_7053.read());
}

void music::thread_zext_ln246_fu_4018_p1() {
    zext_ln246_fu_4018_p1 = esl_zext<15,14>(tmp_38_fu_4010_p3.read());
}

void music::thread_zext_ln255_1_fu_5307_p1() {
    zext_ln255_1_fu_5307_p1 = esl_zext<64,4>(tmp_57_fu_5299_p3.read());
}

void music::thread_zext_ln255_2_fu_5341_p1() {
    zext_ln255_2_fu_5341_p1 = esl_zext<6,3>(y_0_reg_2749.read());
}

void music::thread_zext_ln255_3_fu_5350_p1() {
    zext_ln255_3_fu_5350_p1 = esl_zext<64,6>(add_ln255_fu_5345_p2.read());
}

void music::thread_zext_ln255_fu_5295_p1() {
    zext_ln255_fu_5295_p1 = esl_zext<6,5>(tmp_56_fu_5287_p3.read());
}

void music::thread_zext_ln265_fu_5435_p1() {
    zext_ln265_fu_5435_p1 = esl_zext<64,9>(y30_0_reg_2783.read());
}

void music::thread_zext_ln266_1_fu_6263_p1() {
    zext_ln266_1_fu_6263_p1 = esl_zext<64,11>(add_ln266_reg_7883.read());
}

void music::thread_zext_ln266_fu_5440_p1() {
    zext_ln266_fu_5440_p1 = esl_zext<11,9>(y30_0_reg_2783.read());
}

void music::thread_zext_ln271_fu_6315_p1() {
    zext_ln271_fu_6315_p1 = esl_zext<6,5>(tmp_64_fu_6307_p3.read());
}

void music::thread_zext_ln275_1_fu_6370_p1() {
    zext_ln275_1_fu_6370_p1 = esl_zext<5,2>(k_0_reg_2842.read());
}

void music::thread_zext_ln275_2_fu_6379_p1() {
    zext_ln275_2_fu_6379_p1 = esl_zext<64,5>(add_ln275_fu_6374_p2.read());
}

void music::thread_zext_ln275_3_fu_6390_p1() {
    zext_ln275_3_fu_6390_p1 = esl_zext<64,5>(add_ln275_1_fu_6385_p2.read());
}

void music::thread_zext_ln275_fu_6331_p1() {
    zext_ln275_fu_6331_p1 = esl_zext<6,3>(j32_0_reg_2805.read());
}

void music::thread_zext_ln277_1_fu_6343_p1() {
    zext_ln277_1_fu_6343_p1 = esl_zext<5,4>(tmp_70_fu_6335_p3.read());
}

void music::thread_zext_ln277_2_fu_6352_p1() {
    zext_ln277_2_fu_6352_p1 = esl_zext<64,6>(add_ln277_fu_6347_p2.read());
}

void music::thread_zext_ln277_fu_6303_p1() {
    zext_ln277_fu_6303_p1 = esl_zext<5,4>(tmp_63_fu_6295_p3.read());
}

void music::thread_zext_ln281_fu_6436_p1() {
    zext_ln281_fu_6436_p1 = esl_zext<12,11>(tmp_69_fu_6428_p3.read());
}

void music::thread_zext_ln285_1_fu_6500_p1() {
    zext_ln285_1_fu_6500_p1 = esl_zext<64,6>(add_ln285_fu_6495_p2.read());
}

void music::thread_zext_ln285_2_fu_6517_p1() {
    zext_ln285_2_fu_6517_p1 = esl_zext<64,11>(add_ln285_1_fu_6512_p2.read());
}

void music::thread_zext_ln285_fu_6491_p1() {
    zext_ln285_fu_6491_p1 = esl_zext<6,5>(tmp_72_fu_6483_p3.read());
}

void music::thread_zext_ln287_1_fu_6452_p1() {
    zext_ln287_1_fu_6452_p1 = esl_zext<6,3>(j34_0_reg_2864.read());
}

void music::thread_zext_ln287_2_fu_6456_p1() {
    zext_ln287_2_fu_6456_p1 = esl_zext<12,3>(j34_0_reg_2864.read());
}

void music::thread_zext_ln287_3_fu_6465_p1() {
    zext_ln287_3_fu_6465_p1 = esl_zext<64,12>(add_ln287_fu_6460_p2.read());
}

void music::thread_zext_ln287_fu_6424_p1() {
    zext_ln287_fu_6424_p1 = esl_zext<11,9>(i33_0_reg_2853.read());
}

void music::thread_zext_ln293_fu_6567_p1() {
    zext_ln293_fu_6567_p1 = esl_zext<12,11>(tmp_71_fu_6559_p3.read());
}

void music::thread_zext_ln294_1_fu_6555_p1() {
    zext_ln294_1_fu_6555_p1 = esl_zext<11,9>(i36_0_reg_2923.read());
}

void music::thread_zext_ln294_2_fu_6583_p1() {
    zext_ln294_2_fu_6583_p1 = esl_zext<12,3>(k37_0_reg_2958.read());
}

void music::thread_zext_ln294_3_fu_6592_p1() {
    zext_ln294_3_fu_6592_p1 = esl_zext<64,12>(add_ln294_fu_6587_p2.read());
}

void music::thread_zext_ln294_4_fu_6609_p1() {
    zext_ln294_4_fu_6609_p1 = esl_zext<64,11>(add_ln294_1_fu_6604_p2.read());
}

void music::thread_zext_ln294_fu_6551_p1() {
    zext_ln294_fu_6551_p1 = esl_zext<64,9>(i36_0_reg_2923.read());
}

void music::thread_zext_ln301_fu_6627_p1() {
    zext_ln301_fu_6627_p1 = esl_zext<64,9>(i38_0_reg_2980.read());
}

void music::thread_zext_ln30_fu_4478_p1() {
    zext_ln30_fu_4478_p1 = esl_zext<6,5>(tmp_53_fu_4470_p3.read());
}

void music::thread_zext_ln34_1_fu_4533_p1() {
    zext_ln34_1_fu_4533_p1 = esl_zext<6,5>(tmp_55_fu_4525_p3.read());
}

void music::thread_zext_ln34_2_fu_4542_p1() {
    zext_ln34_2_fu_4542_p1 = esl_zext<64,6>(add_ln34_fu_4537_p2.read());
}

void music::thread_zext_ln34_3_fu_4553_p1() {
    zext_ln34_3_fu_4553_p1 = esl_zext<64,6>(add_ln34_1_fu_4548_p2.read());
}

void music::thread_zext_ln34_fu_4521_p1() {
    zext_ln34_fu_4521_p1 = esl_zext<6,3>(k_0_i_reg_2246.read());
}

void music::thread_zext_ln36_1_fu_4503_p1() {
    zext_ln36_1_fu_4503_p1 = esl_zext<64,6>(add_ln36_fu_4498_p2.read());
}

void music::thread_zext_ln36_fu_4494_p1() {
    zext_ln36_fu_4494_p1 = esl_zext<6,3>(j18_0_i_reg_2209.read());
}

void music::thread_zext_ln45_1_fu_4662_p1() {
    zext_ln45_1_fu_4662_p1 = esl_zext<6,5>(tmp_54_fu_4654_p3.read());
}

void music::thread_zext_ln45_2_fu_4672_p1() {
    zext_ln45_2_fu_4672_p1 = esl_zext<64,6>(add_ln45_fu_4666_p2.read());
}

void music::thread_zext_ln45_fu_4650_p1() {
    zext_ln45_fu_4650_p1 = esl_zext<6,3>(i19_0_i_reg_2269.read());
}

void music::thread_zext_ln47_1_fu_4707_p1() {
    zext_ln47_1_fu_4707_p1 = esl_zext<64,6>(add_ln47_fu_4702_p2.read());
}

void music::thread_zext_ln47_fu_4698_p1() {
    zext_ln47_fu_4698_p1 = esl_zext<6,3>(j20_0_i_reg_2281.read());
}

void music::thread_zext_ln498_fu_5829_p1() {
    zext_ln498_fu_5829_p1 = esl_zext<64,8>(p_Result_59_fu_5821_p3.read());
}

void music::thread_zext_ln51_fu_4713_p1() {
    zext_ln51_fu_4713_p1 = esl_zext<32,2>(j_14_reg_2292.read());
}

void music::thread_zext_ln52_1_fu_4737_p1() {
    zext_ln52_1_fu_4737_p1 = esl_zext<64,4>(tmp_60_fu_4729_p3.read());
}

void music::thread_zext_ln52_fu_4751_p1() {
    zext_ln52_fu_4751_p1 = esl_zext<6,4>(tmp_59_fu_4743_p3.read());
}

void music::thread_zext_ln635_fu_5506_p1() {
    zext_ln635_fu_5506_p1 = esl_zext<64,4>(p_Result_i_i_i_fu_5496_p4.read());
}

void music::thread_zext_ln655_fu_5681_p1() {
    zext_ln655_fu_5681_p1 = esl_zext<11,6>(Mx_zeros_V_fu_5657_p1.read());
}

void music::thread_zext_ln657_1_fu_6001_p1() {
    zext_ln657_1_fu_6001_p1 = esl_zext<64,29>(tmp_66_fu_5959_p4.read());
}

void music::thread_zext_ln657_fu_5991_p1() {
    zext_ln657_fu_5991_p1 = esl_zext<64,37>(tmp_65_fu_5936_p4.read());
}

void music::thread_zext_ln68_fu_4868_p1() {
    zext_ln68_fu_4868_p1 = esl_zext<6,3>(m_0_i_reg_2343.read());
}

void music::thread_zext_ln70_fu_4890_p1() {
    zext_ln70_fu_4890_p1 = esl_zext<64,6>(add_ln70_fu_4884_p2.read());
}

void music::thread_zext_ln72_fu_4901_p1() {
    zext_ln72_fu_4901_p1 = esl_zext<64,6>(add_ln72_fu_4896_p2.read());
}

void music::thread_zext_ln744_fu_5515_p1() {
    zext_ln744_fu_5515_p1 = esl_zext<256,7>(trunc_ln601_reg_7928.read());
}

void music::thread_zext_ln76_1_fu_5024_p1() {
    zext_ln76_1_fu_5024_p1 = esl_zext<64,6>(add_ln76_fu_5019_p2.read());
}

void music::thread_zext_ln76_fu_5015_p1() {
    zext_ln76_fu_5015_p1 = esl_zext<6,5>(tmp_67_fu_5007_p3.read());
}

void music::thread_zext_ln82_fu_5030_p1() {
    zext_ln82_fu_5030_p1 = esl_zext<32,3>(sort_index_0_reg_2443.read());
}

void music::thread_zext_ln85_fu_5050_p1() {
    zext_ln85_fu_5050_p1 = esl_zext<32,2>(flag_reg_2574.read());
}

void music::thread_zext_ln99_fu_4146_p1() {
    zext_ln99_fu_4146_p1 = esl_zext<6,5>(tmp_42_fu_4138_p3.read());
}

}

