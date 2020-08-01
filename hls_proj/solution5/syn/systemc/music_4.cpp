#include "music.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void music::thread_AUU_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln389_3_fu_6234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        AUU_M_imag_address0 = AUU_M_imag_addr_2_reg_7868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3312_p1.read());
    } else {
        AUU_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()))) {
        AUU_M_imag_ce0 = ap_const_logic_1;
    } else {
        AUU_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        AUU_M_imag_d0 = complex_M_imag_read_3_reg_2612.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_d0 = ap_const_lv32_0;
    } else {
        AUU_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln364_fu_6113_p2.read())))) {
        AUU_M_imag_we0 = ap_const_logic_1;
    } else {
        AUU_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln389_3_fu_6234_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        AUU_M_real_address0 = AUU_M_real_addr_2_reg_7863.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3312_p1.read());
    } else {
        AUU_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()))) {
        AUU_M_real_ce0 = ap_const_logic_1;
    } else {
        AUU_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        AUU_M_real_d0 = complex_M_real_read_3_reg_2625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_d0 = ap_const_lv32_0;
    } else {
        AUU_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln364_fu_6113_p2.read())))) {
        AUU_M_real_we0 = ap_const_logic_1;
    } else {
        AUU_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln114_7_fu_3962_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln321_5_fu_3858_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln1027_fu_3166_p1.read());
    } else {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_address1() {
    Autocorr_Buffer_M_i_address1 =  (sc_lv<6>) (zext_ln114_6_fu_3951_p1.read());
}

void music::thread_Autocorr_Buffer_M_i_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        Autocorr_Buffer_M_i_d0 = data_addr_2_read_reg_6734.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_i_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln114_7_fu_3962_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln321_5_fu_3858_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln1027_fu_3166_p1.read());
    } else {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_address1() {
    Autocorr_Buffer_M_r_address1 =  (sc_lv<6>) (zext_ln114_6_fu_3951_p1.read());
}

void music::thread_Autocorr_Buffer_M_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        Autocorr_Buffer_M_r_d0 = data_addr_1_read_reg_6729.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_r_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_0;
    }
}

void music::thread_B_V_fu_5396_p1() {
    B_V_fu_5396_p1 = r_V_36_fu_5356_p3.read().range(56-1, 0);
}

void music::thread_B_fourth_power_V_fu_5499_p4() {
    B_fourth_power_V_fu_5499_p4 = r_V_39_fu_5493_p2.read().range(97, 63);
}

void music::thread_B_third_power_V_fu_5483_p4() {
    B_third_power_V_fu_5483_p4 = r_V_38_fu_5478_p2.read().range(97, 56);
}

void music::thread_B_trunc_V_fu_5400_p4() {
    B_trunc_V_fu_5400_p4 = r_V_36_fu_5356_p3.read().range(55, 7);
}

void music::thread_DFTpts_fu_3564_p2() {
    DFTpts_fu_3564_p2 = (!zext_ln225_fu_3554_p1.read().is_01())? sc_lv<11>(): ap_const_lv11_1 << (unsigned short)zext_ln225_fu_3554_p1.read().to_uint();
}

void music::thread_Ex_V_fu_5304_p2() {
    Ex_V_fu_5304_p2 = (!select_ln482_fu_5180_p3.read().is_01() || !zext_ln655_fu_5300_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(select_ln482_fu_5180_p3.read()) - sc_biguint<11>(zext_ln655_fu_5300_p1.read()));
}

void music::thread_FFT_Buffer_im_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln310_fu_3663_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()))) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_5_reg_6597.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_im_address0 = FFT_Buffer_im_addr_2_reg_6507.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln162_fu_3542_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln305_2_fu_3469_p1.read());
    } else {
        FFT_Buffer_im_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_5_reg_6597.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_4_reg_6586.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (sext_ln250_fu_3630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_im_address1 = FFT_Buffer_im_addr_1_reg_6501.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_Buffer_im_address1 =  (sc_lv<10>) (zext_ln163_fu_3548_p1.read());
    } else {
        FFT_Buffer_im_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()))) {
        FFT_Buffer_im_ce0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        FFT_Buffer_im_ce1 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_im_d0 = temp_1_reg_6518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_im_d0 = ap_const_lv32_0;
    } else {
        FFT_Buffer_im_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        FFT_Buffer_im_d1 = grp_fu_2770_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_im_d1 = FFT_Buffer_im_q1.read();
    } else {
        FFT_Buffer_im_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln160_reg_6485.read())))) {
        FFT_Buffer_im_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        FFT_Buffer_im_we1 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln310_fu_3663_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()))) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_5_reg_6591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_re_address0 = FFT_Buffer_re_addr_2_reg_6495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln162_fu_3542_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln305_2_fu_3469_p1.read());
    } else {
        FFT_Buffer_re_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_5_reg_6591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_4_reg_6581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (sext_ln250_fu_3630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_re_address1 = FFT_Buffer_re_addr_1_reg_6489.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_Buffer_re_address1 =  (sc_lv<10>) (zext_ln163_fu_3548_p1.read());
    } else {
        FFT_Buffer_re_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()))) {
        FFT_Buffer_re_ce0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        FFT_Buffer_re_ce1 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        FFT_Buffer_re_d0 = temp_reg_6513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_re_d0 = data_addr_read_reg_6444.read();
    } else {
        FFT_Buffer_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        FFT_Buffer_re_d1 = grp_fu_2765_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        FFT_Buffer_re_d1 = FFT_Buffer_re_q1.read();
    } else {
        FFT_Buffer_re_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln160_reg_6485.read())))) {
        FFT_Buffer_re_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        FFT_Buffer_re_we1 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we1 = ap_const_logic_0;
    }
}

void music::thread_Mx_V_fu_5290_p4() {
    Mx_V_fu_5290_p4 = r_V_35_fu_5284_p2.read().range(123, 61);
}

void music::thread_Mx_bits_V_2_fu_5218_p2() {
    Mx_bits_V_2_fu_5218_p2 = (!ap_const_lv124_0.is_01() || !p_Val2_69_fu_5187_p4.read().is_01())? sc_lv<124>(): (sc_biguint<124>(ap_const_lv124_0) - sc_biguint<124>(p_Val2_69_fu_5187_p4.read()));
}

void music::thread_Mx_zeros_V_fu_5276_p1() {
    Mx_zeros_V_fu_5276_p1 = tmp_i_i_i1_fu_5268_p3.read().range(6-1, 0);
}

void music::thread_P_sm_TDATA() {
    P_sm_TDATA = P_sm_data_1_data_out.read();
}

void music::thread_P_sm_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()))) {
        P_sm_TDATA_blk_n = P_sm_data_1_state.read()[1];
    } else {
        P_sm_TDATA_blk_n = ap_const_logic_1;
    }
}

void music::thread_P_sm_TLAST() {
    P_sm_TLAST = P_sm_last_V_1_data_out.read();
}

void music::thread_P_sm_TUSER() {
    P_sm_TUSER = P_sm_user_V_1_data_out.read();
}

void music::thread_P_sm_TVALID() {
    P_sm_TVALID = P_sm_last_V_1_state.read()[0];
}

void music::thread_P_sm_data_1_ack_in() {
    P_sm_data_1_ack_in = P_sm_data_1_state.read()[1];
}

void music::thread_P_sm_data_1_ack_out() {
    P_sm_data_1_ack_out = P_sm_TREADY.read();
}

void music::thread_P_sm_data_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, P_sm_data_1_sel.read())) {
        P_sm_data_1_data_out = P_sm_data_1_payload_B.read();
    } else {
        P_sm_data_1_data_out = P_sm_data_1_payload_A.read();
    }
}

void music::thread_P_sm_data_1_load_A() {
    P_sm_data_1_load_A = (P_sm_data_1_state_cmp_full.read() & ~P_sm_data_1_sel_wr.read());
}

void music::thread_P_sm_data_1_load_B() {
    P_sm_data_1_load_B = (P_sm_data_1_sel_wr.read() & P_sm_data_1_state_cmp_full.read());
}

void music::thread_P_sm_data_1_sel() {
    P_sm_data_1_sel = P_sm_data_1_sel_rd.read();
}

void music::thread_P_sm_data_1_state_cmp_full() {
    P_sm_data_1_state_cmp_full =  (sc_logic) ((!P_sm_data_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(P_sm_data_1_state.read() != ap_const_lv2_1))[0];
}

void music::thread_P_sm_data_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) && 
         esl_seteq<1,1,1>(P_sm_data_1_ack_in.read(), ap_const_logic_1))) {
        P_sm_data_1_vld_in = ap_const_logic_1;
    } else {
        P_sm_data_1_vld_in = ap_const_logic_0;
    }
}

void music::thread_P_sm_data_1_vld_out() {
    P_sm_data_1_vld_out = P_sm_data_1_state.read()[0];
}

void music::thread_P_sm_last_V_1_ack_in() {
    P_sm_last_V_1_ack_in = P_sm_last_V_1_state.read()[1];
}

void music::thread_P_sm_last_V_1_ack_out() {
    P_sm_last_V_1_ack_out = P_sm_TREADY.read();
}

void music::thread_P_sm_last_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, P_sm_last_V_1_sel.read())) {
        P_sm_last_V_1_data_out = P_sm_last_V_1_payload_B.read();
    } else {
        P_sm_last_V_1_data_out = P_sm_last_V_1_payload_A.read();
    }
}

void music::thread_P_sm_last_V_1_load_A() {
    P_sm_last_V_1_load_A = (P_sm_last_V_1_state_cmp_full.read() & ~P_sm_last_V_1_sel_wr.read());
}

void music::thread_P_sm_last_V_1_load_B() {
    P_sm_last_V_1_load_B = (P_sm_last_V_1_sel_wr.read() & P_sm_last_V_1_state_cmp_full.read());
}

void music::thread_P_sm_last_V_1_sel() {
    P_sm_last_V_1_sel = P_sm_last_V_1_sel_rd.read();
}

void music::thread_P_sm_last_V_1_state_cmp_full() {
    P_sm_last_V_1_state_cmp_full =  (sc_logic) ((!P_sm_last_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(P_sm_last_V_1_state.read() != ap_const_lv2_1))[0];
}

void music::thread_P_sm_last_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) && 
         esl_seteq<1,1,1>(P_sm_data_1_ack_in.read(), ap_const_logic_1))) {
        P_sm_last_V_1_vld_in = ap_const_logic_1;
    } else {
        P_sm_last_V_1_vld_in = ap_const_logic_0;
    }
}

void music::thread_P_sm_last_V_1_vld_out() {
    P_sm_last_V_1_vld_out = P_sm_last_V_1_state.read()[0];
}

void music::thread_P_sm_user_V_1_ack_in() {
    P_sm_user_V_1_ack_in = P_sm_user_V_1_state.read()[1];
}

void music::thread_P_sm_user_V_1_ack_out() {
    P_sm_user_V_1_ack_out = P_sm_TREADY.read();
}

void music::thread_P_sm_user_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, P_sm_user_V_1_sel.read())) {
        P_sm_user_V_1_data_out = P_sm_user_V_1_payload_B.read();
    } else {
        P_sm_user_V_1_data_out = P_sm_user_V_1_payload_A.read();
    }
}

void music::thread_P_sm_user_V_1_load_A() {
    P_sm_user_V_1_load_A = (P_sm_user_V_1_state_cmp_full.read() & ~P_sm_user_V_1_sel_wr.read());
}

void music::thread_P_sm_user_V_1_load_B() {
    P_sm_user_V_1_load_B = (P_sm_user_V_1_sel_wr.read() & P_sm_user_V_1_state_cmp_full.read());
}

void music::thread_P_sm_user_V_1_sel() {
    P_sm_user_V_1_sel = P_sm_user_V_1_sel_rd.read();
}

void music::thread_P_sm_user_V_1_state_cmp_full() {
    P_sm_user_V_1_state_cmp_full =  (sc_logic) ((!P_sm_user_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(P_sm_user_V_1_state.read() != ap_const_lv2_1))[0];
}

void music::thread_P_sm_user_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) && 
         esl_seteq<1,1,1>(P_sm_data_1_ack_in.read(), ap_const_logic_1))) {
        P_sm_user_V_1_vld_in = ap_const_logic_1;
    } else {
        P_sm_user_V_1_vld_in = ap_const_logic_0;
    }
}

void music::thread_P_sm_user_V_1_vld_out() {
    P_sm_user_V_1_vld_out = P_sm_user_V_1_state.read()[0];
}

void music::thread_Q_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln37_2_fu_4283_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_4004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_imag_address0 = grp_qrf_top_fu_2716_Q_M_imag_address0.read();
    } else {
        Q_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()))) {
        Q_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_imag_ce0 = grp_qrf_top_fu_2716_Q_M_imag_ce0.read();
    } else {
        Q_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        Q_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_imag_d0 = grp_qrf_top_fu_2716_Q_M_imag_d0.read();
    } else {
        Q_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        Q_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_imag_we0 = grp_qrf_top_fu_2716_Q_M_imag_we0.read();
    } else {
        Q_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln37_2_fu_4283_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_4004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_real_address0 = grp_qrf_top_fu_2716_Q_M_real_address0.read();
    } else {
        Q_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()))) {
        Q_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_real_ce0 = grp_qrf_top_fu_2716_Q_M_real_ce0.read();
    } else {
        Q_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        Q_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_real_d0 = grp_qrf_top_fu_2716_Q_M_real_d0.read();
    } else {
        Q_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        Q_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        Q_temp_M_real_we0 = grp_qrf_top_fu_2716_Q_M_real_we0.read();
    } else {
        Q_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln37_3_fu_4294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_imag_address0 = grp_qrf_top_fu_2716_R_M_imag_address0.read();
    } else {
        R_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()))) {
        R_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_imag_ce0 = grp_qrf_top_fu_2716_R_M_imag_ce0.read();
    } else {
        R_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        R_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_imag_d0 = grp_qrf_top_fu_2716_R_M_imag_d0.read();
    } else {
        R_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        R_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_imag_we0 = grp_qrf_top_fu_2716_R_M_imag_we0.read();
    } else {
        R_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln37_3_fu_4294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_4042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_real_address0 = grp_qrf_top_fu_2716_R_M_real_address0.read();
    } else {
        R_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()))) {
        R_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_real_ce0 = grp_qrf_top_fu_2716_R_M_real_ce0.read();
    } else {
        R_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        R_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_real_d0 = grp_qrf_top_fu_2716_R_M_real_d0.read();
    } else {
        R_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        R_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        R_temp_M_real_we0 = grp_qrf_top_fu_2716_R_M_real_we0.read();
    } else {
        R_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_4635_p2.read()))) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_5_reg_7271.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_4635_p2.read()))) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln76_fu_4650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_8_reg_7248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln65_fu_4573_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln65_1_fu_4561_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln62_fu_4528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_4_reg_7182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_fu_4492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln56_1_fu_4459_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln51_1_reg_7127.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_2_reg_7100.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4080_p1.read());
    } else {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_4635_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_4635_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        Rx_temp_M_imag_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        Rx_temp_M_imag_d0 = grp_fu_2770_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        Rx_temp_M_imag_d0 = grp_fu_2904_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        Rx_temp_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        Rx_temp_M_imag_d0 = reg_3039.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        Rx_temp_M_imag_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln48_reg_7123.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_4402_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln48_fu_4414_p2.read())))) {
        Rx_temp_M_imag_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_4635_p2.read()))) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_5_reg_7266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_4635_p2.read()))) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln76_fu_4650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_8_reg_7243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln65_fu_4573_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln65_1_fu_4561_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln62_fu_4528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_4_reg_7177.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_fu_4492_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln56_1_fu_4459_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln51_1_reg_7127.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_2_reg_7095.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_4080_p1.read());
    } else {
        Rx_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state143.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln74_fu_4635_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln74_fu_4635_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        Rx_temp_M_real_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        Rx_temp_M_real_d0 = grp_fu_2765_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        Rx_temp_M_real_d0 = grp_fu_2898_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        Rx_temp_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        Rx_temp_M_real_d0 = reg_2964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        Rx_temp_M_real_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln48_reg_7123.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_4402_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln48_fu_4414_p2.read())))) {
        Rx_temp_M_real_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_fu_5003_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_fu_5009_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_fu_5003_p2.read())))) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln332_3_fu_4998_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        U_M_imag_address0 = U_M_imag_addr_5_reg_7393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln85_1_fu_4746_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        U_M_imag_address0 = U_M_imag_addr_3_reg_7281.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (sext_ln76_1_fu_4673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        U_M_imag_address0 = U_M_imag_addr_2_reg_7072.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln24_1_reg_6922.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3204_p1.read());
    } else {
        U_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_fu_5003_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_fu_5009_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_fu_5003_p2.read())))) {
        U_M_imag_ce0 = ap_const_logic_1;
    } else {
        U_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()))) {
        U_M_imag_d0 = grp_fu_2904_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()))) {
        U_M_imag_d0 = ap_const_lv32_0;
    } else {
        U_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln55_fu_4439_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()))) {
        U_M_imag_we0 = ap_const_logic_1;
    } else {
        U_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_fu_5003_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_fu_5009_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_fu_5003_p2.read())))) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln332_3_fu_4998_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        U_M_real_address0 = U_M_real_addr_5_reg_7388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln85_1_fu_4746_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        U_M_real_address0 = U_M_real_addr_3_reg_7276.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        U_M_real_address0 =  (sc_lv<4>) (sext_ln76_1_fu_4673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        U_M_real_address0 = U_M_real_addr_2_reg_7067.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln24_1_reg_6922.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3204_p1.read());
    } else {
        U_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_fu_5003_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_fu_5009_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_fu_5003_p2.read())))) {
        U_M_real_ce0 = ap_const_logic_1;
    } else {
        U_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()))) {
        U_M_real_d0 = grp_fu_2898_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        U_M_real_d0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()))) {
        U_M_real_d0 = ap_const_lv32_0;
    } else {
        U_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln55_fu_4439_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()))) {
        U_M_real_we0 = ap_const_logic_1;
    } else {
        U_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln355_3_fu_6032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_1_reg_7494.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_2_reg_7499.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3242_p1.read());
    } else {
        Un_M_imag_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_imag_address1() {
    Un_M_imag_address1 =  (sc_lv<3>) (zext_ln355_2_fu_6021_p1.read());
}

void music::thread_Un_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read())))) {
        Un_M_imag_ce0 = ap_const_logic_1;
    } else {
        Un_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        Un_M_imag_ce1 = ap_const_logic_1;
    } else {
        Un_M_imag_ce1 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read())))) {
        Un_M_imag_d0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_d0 = ap_const_lv32_0;
    } else {
        Un_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read())))) {
        Un_M_imag_we0 = ap_const_logic_1;
    } else {
        Un_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln355_3_fu_6032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read()))) {
        Un_M_real_address0 = Un_M_real_addr_1_reg_7484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read()))) {
        Un_M_real_address0 = Un_M_real_addr_2_reg_7489.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3242_p1.read());
    } else {
        Un_M_real_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_real_address1() {
    Un_M_real_address1 =  (sc_lv<3>) (zext_ln355_2_fu_6021_p1.read());
}

void music::thread_Un_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read())))) {
        Un_M_real_ce0 = ap_const_logic_1;
    } else {
        Un_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        Un_M_real_ce1 = ap_const_logic_1;
    } else {
        Un_M_real_ce1 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read())))) {
        Un_M_real_d0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_d0 = ap_const_lv32_0;
    } else {
        Un_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln331_reg_7532.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln333_reg_7536.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln331_reg_7532.read())))) {
        Un_M_real_we0 = ap_const_logic_1;
    } else {
        Un_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln389_4_fu_6251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln366_2_fu_6159_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln344_1_fu_5905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3358_p1.read());
    } else {
        a_theta_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,1,1>(ap_block_state206_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        a_theta_M_imag_d0 = bitcast_ln345_1_fu_5920_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_imag_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,1,1>(ap_block_state206_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_we0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln389_4_fu_6251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln366_2_fu_6159_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln344_1_fu_5905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3358_p1.read());
    } else {
        a_theta_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,1,1>(ap_block_state206_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        a_theta_M_real_d0 = grp_sin_or_cos_float_s_fu_2726_ap_return.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_real_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,1,1>(ap_block_state206_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_we0 = ap_const_logic_1;
    } else {
        a_theta_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_add_ln1027_fu_3352_p2() {
    add_ln1027_fu_3352_p2 = (!phi_mul_reg_1861.read().is_01() || !zext_ln1027_10_fu_3348_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1861.read()) + sc_biguint<11>(zext_ln1027_10_fu_3348_p1.read()));
}

void music::thread_add_ln1044_fu_4328_p2() {
    add_ln1044_fu_4328_p2 = (!zext_ln1044_fu_4312_p1.read().is_01() || !zext_ln1044_1_fu_4324_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_fu_4312_p1.read()) + sc_biguint<6>(zext_ln1044_1_fu_4324_p1.read()));
}

void music::thread_add_ln1146_1_fu_5637_p2() {
    add_ln1146_1_fu_5637_p2 = (!zext_ln662_fu_5587_p1.read().is_01() || !zext_ln1146_fu_5627_p1.read().is_01())? sc_lv<38>(): (sc_biguint<38>(zext_ln662_fu_5587_p1.read()) + sc_biguint<38>(zext_ln1146_fu_5627_p1.read()));
}

void music::thread_add_ln1146_2_fu_5647_p2() {
    add_ln1146_2_fu_5647_p2 = (!zext_ln1146_1_fu_5643_p1.read().is_01() || !sext_ln657_fu_5623_p1.read().is_01())? sc_lv<49>(): (sc_biguint<49>(zext_ln1146_1_fu_5643_p1.read()) + sc_bigint<49>(sext_ln657_fu_5623_p1.read()));
}

void music::thread_add_ln1146_fu_5631_p2() {
    add_ln1146_fu_5631_p2 = (!lhs_V_2_fu_5615_p1.read().is_01() || !rhs_V_2_fu_5619_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(lhs_V_2_fu_5615_p1.read()) + sc_bigint<64>(rhs_V_2_fu_5619_p1.read()));
}

void music::thread_add_ln114_1_fu_5097_p2() {
    add_ln114_1_fu_5097_p2 = (!ap_const_lv11_44D.is_01() || !tmp_V_fu_5077_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_44D) + sc_biguint<11>(tmp_V_fu_5077_p4.read()));
}

void music::thread_add_ln114_5_fu_3946_p2() {
    add_ln114_5_fu_3946_p2 = (!zext_ln116_reg_6747.read().is_01() || !zext_ln114_fu_3942_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln116_reg_6747.read()) + sc_biguint<7>(zext_ln114_fu_3942_p1.read()));
}

void music::thread_add_ln114_6_fu_3957_p2() {
    add_ln114_6_fu_3957_p2 = (!zext_ln116_1_reg_6765.read().is_01() || !zext_ln114_fu_3942_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln116_1_reg_6765.read()) + sc_biguint<7>(zext_ln114_fu_3942_p1.read()));
}

void music::thread_add_ln114_fu_5175_p2() {
    add_ln114_fu_5175_p2 = (!ap_const_lv11_403.is_01() || !tmp_V_reg_7587.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_403) + sc_biguint<11>(tmp_V_reg_7587.read()));
}

void music::thread_add_ln116_fu_3911_p2() {
    add_ln116_fu_3911_p2 = (!zext_ln110_reg_6752.read().is_01() || !zext_ln116_2_fu_3907_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln110_reg_6752.read()) + sc_biguint<6>(zext_ln116_2_fu_3907_p1.read()));
}

void music::thread_add_ln13_1_fu_3990_p2() {
    add_ln13_1_fu_3990_p2 = (!phi_ln13_1_reg_2118.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_1_reg_2118.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_fu_3984_p2() {
    add_ln13_fu_3984_p2 = (!phi_ln13_reg_2106.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_reg_2106.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_1_fu_4028_p2() {
    add_ln14_1_fu_4028_p2 = (!phi_ln14_1_reg_2141.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_1_reg_2141.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_fu_4022_p2() {
    add_ln14_fu_4022_p2 = (!phi_ln14_reg_2129.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_reg_2129.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln15_1_fu_4066_p2() {
    add_ln15_1_fu_4066_p2 = (!phi_ln15_1_reg_2164.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln15_1_reg_2164.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln15_fu_4060_p2() {
    add_ln15_fu_4060_p2 = (!phi_ln15_reg_2152.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln15_reg_2152.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln16_1_fu_4104_p2() {
    add_ln16_1_fu_4104_p2 = (!phi_ln16_1_reg_2187.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln16_1_reg_2187.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln16_fu_4098_p2() {
    add_ln16_fu_4098_p2 = (!phi_ln16_reg_2175.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln16_reg_2175.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln24_fu_4176_p2() {
    add_ln24_fu_4176_p2 = (!zext_ln23_reg_6909.read().is_01() || !zext_ln24_fu_4172_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln23_reg_6909.read()) + sc_biguint<6>(zext_ln24_fu_4172_p1.read()));
}

void music::thread_add_ln291_1_fu_3152_p2() {
    add_ln291_1_fu_3152_p2 = (!phi_ln291_1_reg_1746.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln291_1_reg_1746.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln291_fu_3146_p2() {
    add_ln291_fu_3146_p2 = (!phi_ln291_reg_1734.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln291_reg_1734.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_add_ln292_1_fu_3190_p2() {
    add_ln292_1_fu_3190_p2 = (!phi_ln292_1_reg_1769.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln292_1_reg_1769.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln292_fu_3184_p2() {
    add_ln292_fu_3184_p2 = (!phi_ln292_reg_1757.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln292_reg_1757.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln293_fu_3222_p2() {
    add_ln293_fu_3222_p2 = (!phi_ln293_reg_1780.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln293_reg_1780.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln294_1_fu_3260_p2() {
    add_ln294_1_fu_3260_p2 = (!phi_ln294_1_reg_1815.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln294_1_reg_1815.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln294_fu_3254_p2() {
    add_ln294_fu_3254_p2 = (!phi_ln294_reg_1803.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln294_reg_1803.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln295_1_fu_3298_p2() {
    add_ln295_1_fu_3298_p2 = (!phi_ln295_1_reg_1838.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln295_1_reg_1838.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln295_fu_3292_p2() {
    add_ln295_fu_3292_p2 = (!phi_ln295_reg_1826.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln295_reg_1826.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln296_1_fu_3342_p2() {
    add_ln296_1_fu_3342_p2 = (!phi_ln296_1_reg_1873.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln296_1_reg_1873.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln296_2_fu_3330_p2() {
    add_ln296_2_fu_3330_p2 = (!phi_mul_reg_1861.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1861.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln296_fu_3336_p2() {
    add_ln296_fu_3336_p2 = (!phi_ln296_reg_1849.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln296_reg_1849.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln305_1_fu_3445_p2() {
    add_ln305_1_fu_3445_p2 = (!zext_ln304_1_reg_6419.read().is_01() || !zext_ln305_fu_3441_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln304_1_reg_6419.read()) + sc_biguint<17>(zext_ln305_fu_3441_p1.read()));
}

void music::thread_add_ln305_2_fu_3454_p2() {
    add_ln305_2_fu_3454_p2 = (!zext_ln305_1_fu_3450_p1.read().is_01() || !p_cast_reg_6292.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln305_1_fu_3450_p1.read()) + sc_biguint<31>(p_cast_reg_6292.read()));
}

void music::thread_add_ln305_fu_3428_p2() {
    add_ln305_fu_3428_p2 = (!shl_ln_reg_6405.read().is_01() || !zext_ln304_fu_3412_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6405.read()) + sc_biguint<14>(zext_ln304_fu_3412_p1.read()));
}

void music::thread_add_ln310_1_fu_3686_p2() {
    add_ln310_1_fu_3686_p2 = (!zext_ln304_1_reg_6419.read().is_01() || !zext_ln310_1_fu_3682_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln304_1_reg_6419.read()) + sc_biguint<17>(zext_ln310_1_fu_3682_p1.read()));
}

void music::thread_add_ln310_2_fu_3695_p2() {
    add_ln310_2_fu_3695_p2 = (!zext_ln310_2_fu_3691_p1.read().is_01() || !p_cast_reg_6292.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln310_2_fu_3691_p1.read()) + sc_biguint<31>(p_cast_reg_6292.read()));
}

void music::thread_add_ln310_fu_3669_p2() {
    add_ln310_fu_3669_p2 = (!shl_ln_reg_6405.read().is_01() || !zext_ln309_fu_3647_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6405.read()) + sc_biguint<14>(zext_ln309_fu_3647_p1.read()));
}

void music::thread_add_ln311_fu_3710_p2() {
    add_ln311_fu_3710_p2 = (!zext_ln310_2_reg_6621.read().is_01() || !p_cast19_reg_6286.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln310_2_reg_6621.read()) + sc_biguint<31>(p_cast19_reg_6286.read()));
}

void music::thread_add_ln321_1_fu_3814_p2() {
    add_ln321_1_fu_3814_p2 = (!zext_ln319_reg_6689.read().is_01() || !zext_ln321_2_fu_3810_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln319_reg_6689.read()) + sc_biguint<17>(zext_ln321_2_fu_3810_p1.read()));
}

void music::thread_add_ln321_2_fu_3823_p2() {
    add_ln321_2_fu_3823_p2 = (!zext_ln321_3_fu_3819_p1.read().is_01() || !p_cast_reg_6292.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln321_3_fu_3819_p1.read()) + sc_biguint<31>(p_cast_reg_6292.read()));
}

void music::thread_add_ln321_3_fu_3833_p2() {
    add_ln321_3_fu_3833_p2 = (!zext_ln321_reg_6684.read().is_01() || !zext_ln321_1_fu_3806_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln321_reg_6684.read()) + sc_biguint<7>(zext_ln321_1_fu_3806_p1.read()));
}

void music::thread_add_ln321_fu_3777_p2() {
    add_ln321_fu_3777_p2 = (!shl_ln1_fu_3769_p3.read().is_01() || !zext_ln316_reg_6653.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln1_fu_3769_p3.read()) + sc_biguint<14>(zext_ln316_reg_6653.read()));
}

void music::thread_add_ln322_fu_3828_p2() {
    add_ln322_fu_3828_p2 = (!zext_ln321_3_fu_3819_p1.read().is_01() || !p_cast19_reg_6286.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln321_3_fu_3819_p1.read()) + sc_biguint<31>(p_cast19_reg_6286.read()));
}

void music::thread_add_ln332_fu_4993_p2() {
    add_ln332_fu_4993_p2 = (!zext_ln332_reg_7479.read().is_01() || !zext_ln332_2_fu_4989_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln332_reg_7479.read()) + sc_biguint<6>(zext_ln332_2_fu_4989_p1.read()));
}

void music::thread_add_ln339_fu_5015_p2() {
    add_ln339_fu_5015_p2 = (!phi_mul9_reg_2508.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2508.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln344_fu_5059_p2() {
    add_ln344_fu_5059_p2 = (!phi_mul9_reg_2508.read().is_01() || !zext_ln344_fu_5055_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul9_reg_2508.read()) + sc_biguint<11>(zext_ln344_fu_5055_p1.read()));
}

void music::thread_add_ln355_1_fu_6027_p2() {
    add_ln355_1_fu_6027_p2 = (!zext_ln357_1_reg_7755.read().is_01() || !zext_ln355_1_fu_6012_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln357_1_reg_7755.read()) + sc_biguint<5>(zext_ln355_1_fu_6012_p1.read()));
}

void music::thread_add_ln355_fu_6016_p2() {
    add_ln355_fu_6016_p2 = (!zext_ln357_reg_7737.read().is_01() || !zext_ln355_1_fu_6012_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln357_reg_7737.read()) + sc_biguint<5>(zext_ln355_1_fu_6012_p1.read()));
}

void music::thread_add_ln357_fu_5989_p2() {
    add_ln357_fu_5989_p2 = (!zext_ln355_fu_5973_p1.read().is_01() || !zext_ln350_reg_7742.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln355_fu_5973_p1.read()) + sc_biguint<6>(zext_ln350_reg_7742.read()));
}

void music::thread_add_ln366_1_fu_6154_p2() {
    add_ln366_1_fu_6154_p2 = (!zext_ln368_reg_7840.read().is_01() || !phi_mul11_reg_2649.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln368_reg_7840.read()) + sc_biguint<11>(phi_mul11_reg_2649.read()));
}

void music::thread_add_ln366_2_fu_6148_p2() {
    add_ln366_2_fu_6148_p2 = (!phi_mul11_reg_2649.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul11_reg_2649.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln366_fu_6137_p2() {
    add_ln366_fu_6137_p2 = (!zext_ln368_1_reg_7858.read().is_01() || !zext_ln366_fu_6133_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln368_1_reg_7858.read()) + sc_biguint<6>(zext_ln366_fu_6133_p1.read()));
}

void music::thread_add_ln368_fu_6102_p2() {
    add_ln368_fu_6102_p2 = (!zext_ln361_reg_7845.read().is_01() || !zext_ln368_2_fu_6098_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln361_reg_7845.read()) + sc_biguint<12>(zext_ln368_2_fu_6098_p1.read()));
}

void music::thread_add_ln37_1_fu_4289_p2() {
    add_ln37_1_fu_4289_p2 = (!zext_ln37_fu_4262_p1.read().is_01() || !zext_ln32_reg_6956.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln37_fu_4262_p1.read()) + sc_biguint<6>(zext_ln32_reg_6956.read()));
}

void music::thread_add_ln37_fu_4278_p2() {
    add_ln37_fu_4278_p2 = (!zext_ln39_reg_6970.read().is_01() || !zext_ln37_1_fu_4274_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln39_reg_6970.read()) + sc_biguint<6>(zext_ln37_1_fu_4274_p1.read()));
}

void music::thread_add_ln389_1_fu_6246_p2() {
    add_ln389_1_fu_6246_p2 = (!phi_mul13_reg_2694.read().is_01() || !zext_ln389_1_reg_7935.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul13_reg_2694.read()) + sc_biguint<11>(zext_ln389_1_reg_7935.read()));
}

void music::thread_add_ln389_2_fu_6240_p2() {
    add_ln389_2_fu_6240_p2 = (!phi_mul13_reg_2694.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul13_reg_2694.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln389_fu_6229_p2() {
    add_ln389_fu_6229_p2 = (!zext_ln387_reg_7940.read().is_01() || !zext_ln389_2_fu_6225_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln387_reg_7940.read()) + sc_biguint<12>(zext_ln389_2_fu_6225_p1.read()));
}

void music::thread_add_ln39_fu_4239_p2() {
    add_ln39_fu_4239_p2 = (!zext_ln32_reg_6956.read().is_01() || !zext_ln39_fu_4235_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln32_reg_6956.read()) + sc_biguint<6>(zext_ln39_fu_4235_p1.read()));
}

void music::thread_add_ln49_fu_4388_p2() {
    add_ln49_fu_4388_p2 = (!zext_ln49_fu_4372_p1.read().is_01() || !zext_ln49_1_fu_4384_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln49_fu_4372_p1.read()) + sc_biguint<6>(zext_ln49_1_fu_4384_p1.read()));
}

void music::thread_add_ln51_fu_4424_p2() {
    add_ln51_fu_4424_p2 = (!zext_ln49_1_reg_7090.read().is_01() || !zext_ln51_fu_4420_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln49_1_reg_7090.read()) + sc_biguint<6>(zext_ln51_fu_4420_p1.read()));
}

void music::thread_add_ln59_fu_4487_p2() {
    add_ln59_fu_4487_p2 = (!zext_ln56_reg_7168.read().is_01() || !trunc_ln59_fu_4483_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln56_reg_7168.read()) + sc_biguint<6>(trunc_ln59_fu_4483_p1.read()));
}

void music::thread_add_ln65_1_fu_4556_p2() {
    add_ln65_1_fu_4556_p2 = (!zext_ln56_reg_7168.read().is_01() || !trunc_ln65_fu_4547_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln56_reg_7168.read()) + sc_biguint<6>(trunc_ln65_fu_4547_p1.read()));
}

void music::thread_add_ln65_fu_4551_p2() {
    add_ln65_fu_4551_p2 = (!sext_ln62_cast_reg_7215.read().is_01() || !trunc_ln65_fu_4547_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln62_cast_reg_7215.read()) + sc_biguint<6>(trunc_ln65_fu_4547_p1.read()));
}

void music::thread_add_ln76_1_fu_4668_p2() {
    add_ln76_1_fu_4668_p2 = (!sext_ln76_2_cast_fu_4660_p3.read().is_01() || !zext_ln1044_reg_7055.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln76_2_cast_fu_4660_p3.read()) + sc_biguint<6>(zext_ln1044_reg_7055.read()));
}

void music::thread_add_ln76_fu_4645_p2() {
    add_ln76_fu_4645_p2 = (!sext_ln78_reg_7261.read().is_01() || !trunc_ln76_fu_4641_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln78_reg_7261.read()) + sc_biguint<6>(trunc_ln76_fu_4641_p1.read()));
}

void music::thread_add_ln78_fu_4606_p2() {
    add_ln78_fu_4606_p2 = (!sext_ln78_fu_4602_p1.read().is_01() || !zext_ln76_fu_4590_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln78_fu_4602_p1.read()) + sc_biguint<6>(zext_ln76_fu_4590_p1.read()));
}

void music::thread_add_ln80_fu_4618_p2() {
    add_ln80_fu_4618_p2 = (!sext_ln78_fu_4602_p1.read().is_01() || !zext_ln1044_reg_7055.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln78_fu_4602_p1.read()) + sc_biguint<6>(zext_ln1044_reg_7055.read()));
}

void music::thread_add_ln85_fu_4741_p2() {
    add_ln85_fu_4741_p2 = (!zext_ln1044_reg_7055.read().is_01() || !zext_ln85_fu_4737_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_reg_7055.read()) + sc_biguint<6>(zext_ln85_fu_4737_p1.read()));
}

void music::thread_addr_V_fu_5103_p3() {
    addr_V_fu_5103_p3 = (!closepath_fu_5091_p2.read()[0].is_01())? sc_lv<11>(): ((closepath_fu_5091_p2.read()[0].to_bool())? ap_const_lv11_4A: add_ln114_1_fu_5097_p2.read());
}

void music::thread_and_ln300_2_fu_5843_p2() {
    and_ln300_2_fu_5843_p2 = (icmp_ln833_reg_7695.read() & icmp_ln833_1_reg_7626.read());
}

void music::thread_and_ln300_fu_5814_p2() {
    and_ln300_fu_5814_p2 = (icmp_ln833_reg_7695.read() & icmp_ln833_1_reg_7626.read());
}

void music::thread_and_ln97_1_fu_4905_p2() {
    and_ln97_1_fu_4905_p2 = (and_ln97_fu_4899_p2.read() & tmp_25_fu_2923_p2.read());
}

void music::thread_and_ln97_fu_4899_p2() {
    and_ln97_fu_4899_p2 = (or_ln97_fu_4875_p2.read() & or_ln97_1_fu_4893_p2.read());
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

void music::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void music::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void music::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void music::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[118];
}

void music::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void music::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[119];
}

void music::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[120];
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

void music::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
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

void music::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void music::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void music::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void music::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void music::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void music::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void music::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void music::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void music::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void music::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void music::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void music::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void music::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void music::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void music::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
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

void music::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
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

void music::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
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

void music::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[98];
}

void music::thread_ap_block_state112_on_subcall_done() {
    ap_block_state112_on_subcall_done = esl_seteq<1,1,1>(ap_const_logic_0, (ap_sync_grp_qrf_top_fu_2716_ap_ready.read() & ap_sync_grp_qrf_top_fu_2716_ap_done.read()));
}

void music::thread_ap_block_state206_on_subcall_done() {
    ap_block_state206_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2726_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2742_ap_done.read()));
}

void music::thread_ap_block_state232() {
    ap_block_state232 = (esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read())));
}

void music::thread_ap_block_state42_on_subcall_done() {
    ap_block_state42_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2726_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2742_ap_done.read()));
}

void music::thread_ap_block_state54_io() {
    ap_block_state54_io = (esl_seteq<1,1,1>(ap_const_logic_0, data_AWREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, data_WREADY.read()));
}

void music::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) && 
         !(esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read()))) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln394_fu_6257_p2.read()))) {
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

void music::thread_ap_phi_mux_phi_ln293_1_phi_fu_1796_p4() {
    ap_phi_mux_phi_ln293_1_phi_fu_1796_p4 = phi_ln293_1_reg_1792.read();
}

void music::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) && 
         !(esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read()))) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln394_fu_6257_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void music::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2716_ap_done() {
    ap_sync_grp_qrf_top_fu_2716_ap_done = (grp_qrf_top_fu_2716_ap_done.read() | ap_sync_reg_grp_qrf_top_fu_2716_ap_done.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2716_ap_ready() {
    ap_sync_grp_qrf_top_fu_2716_ap_ready = (grp_qrf_top_fu_2716_ap_ready.read() | ap_sync_reg_grp_qrf_top_fu_2716_ap_ready.read());
}

void music::thread_bitcast_ln345_1_fu_5920_p1() {
    bitcast_ln345_1_fu_5920_p1 = xor_ln345_fu_5914_p2.read();
}

void music::thread_bitcast_ln345_fu_5910_p1() {
    bitcast_ln345_fu_5910_p1 = grp_sin_or_cos_float_s_fu_2742_ap_return.read();
}

void music::thread_bitcast_ln444_2_fu_4701_p1() {
    bitcast_ln444_2_fu_4701_p1 = complex_M_imag_read_1_reg_2388.read();
}

void music::thread_bitcast_ln444_fu_4685_p1() {
    bitcast_ln444_fu_4685_p1 = complex_M_real_read_1_reg_2400.read();
}

void music::thread_bitcast_ln512_fu_5900_p1() {
    bitcast_ln512_fu_5900_p1 = p_Result_56_fu_5890_p4.read();
}

void music::thread_bitcast_ln667_2_fu_6038_p1() {
    bitcast_ln667_2_fu_6038_p1 = Un_M_imag_q0.read();
}

void music::thread_bitcast_ln667_4_fu_6165_p1() {
    bitcast_ln667_4_fu_6165_p1 = a_theta_M_imag_q0.read();
}

void music::thread_bitcast_ln667_fu_3968_p1() {
    bitcast_ln667_fu_3968_p1 = Autocorr_Buffer_M_i_q0.read();
}

void music::thread_bitcast_ln97_1_fu_4845_p1() {
    bitcast_ln97_1_fu_4845_p1 = eigval_q1.read();
}

void music::thread_bitcast_ln97_fu_4827_p1() {
    bitcast_ln97_fu_4827_p1 = eigval_q0.read();
}

void music::thread_closepath_fu_5091_p2() {
    closepath_fu_5091_p2 = (!tmp_V_fu_5077_p4.read().is_01() || !ap_const_lv11_3FE.is_01())? sc_lv<1>(): (sc_biguint<11>(tmp_V_fu_5077_p4.read()) < sc_biguint<11>(ap_const_lv11_3FE));
}

void music::thread_count_fu_4306_p2() {
    count_fu_4306_p2 = (!count_0_i_reg_2290.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(count_0_i_reg_2290.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_data_ARADDR() {
    if (esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln322_fu_3848_p1.read());
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln321_4_fu_3838_p1.read());
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln305_3_fu_3459_p1.read());
        } else {
            data_ARADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        data_ARADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)))) {
        data_ARVALID = ap_const_logic_1;
    } else {
        data_ARVALID = ap_const_logic_0;
    }
}

void music::thread_data_AWADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(ap_block_state54_io.read(), ap_const_boolean_0))) {
        data_AWADDR =  (sc_lv<32>) (zext_ln311_fu_3714_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
                esl_seteq<1,1,1>(data_AWREADY.read(), ap_const_logic_1))) {
        data_AWADDR =  (sc_lv<32>) (zext_ln310_3_fu_3700_p1.read());
    } else {
        data_AWADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(data_AWREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
          esl_seteq<1,1,1>(ap_block_state54_io.read(), ap_const_boolean_0)))) {
        data_AWVALID = ap_const_logic_1;
    } else {
        data_AWVALID = ap_const_logic_0;
    }
}

void music::thread_data_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) && 
          esl_seteq<1,1,1>(data_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) && 
          esl_seteq<1,1,1>(data_BVALID.read(), ap_const_logic_1)))) {
        data_BREADY = ap_const_logic_1;
    } else {
        data_BREADY = ap_const_logic_0;
    }
}

void music::thread_data_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)))) {
        data_RREADY = ap_const_logic_1;
    } else {
        data_RREADY = ap_const_logic_0;
    }
}

void music::thread_data_WDATA() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        data_WDATA = reg_2983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        data_WDATA = reg_2974.read();
    } else {
        data_WDATA =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
          esl_seteq<1,1,1>(ap_block_state54_io.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) && 
          esl_seteq<1,1,1>(data_WREADY.read(), ap_const_logic_1)))) {
        data_WVALID = ap_const_logic_1;
    } else {
        data_WVALID = ap_const_logic_0;
    }
}

void music::thread_data_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()))) {
        data_blk_n_AR = m_axi_data_ARREADY.read();
    } else {
        data_blk_n_AR = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        data_blk_n_AW = m_axi_data_AWREADY.read();
    } else {
        data_blk_n_AW = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        data_blk_n_B = m_axi_data_BVALID.read();
    } else {
        data_blk_n_B = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()))) {
        data_blk_n_R = m_axi_data_RVALID.read();
    } else {
        data_blk_n_R = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()))) {
        data_blk_n_W = m_axi_data_WREADY.read();
    } else {
        data_blk_n_W = ap_const_logic_1;
    }
}

void music::thread_eig_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        eig_mat_M_imag_address0 = eig_mat_M_imag_addr_2_reg_6980.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln24_1_reg_6922.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4118_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        eig_mat_M_imag_address0 = grp_qrf_top_fu_2716_A_M_imag_address0.read();
    } else {
        eig_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()))) {
        eig_mat_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        eig_mat_M_imag_ce0 = grp_qrf_top_fu_2716_A_M_imag_ce0.read();
    } else {
        eig_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        eig_mat_M_imag_d0 = complex_M_imag_read_reg_2253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        eig_mat_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        eig_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_fu_4250_p2.read())))) {
        eig_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1044_2_fu_4334_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        eig_mat_M_real_address0 = eig_mat_M_real_addr_3_reg_6975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln24_1_reg_6922.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_4118_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        eig_mat_M_real_address0 = grp_qrf_top_fu_2716_A_M_real_address0.read();
    } else {
        eig_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()))) {
        eig_mat_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        eig_mat_M_real_ce0 = grp_qrf_top_fu_2716_A_M_real_ce0.read();
    } else {
        eig_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        eig_mat_M_real_d0 = complex_M_real_read_reg_2266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        eig_mat_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        eig_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_fu_4250_p2.read())))) {
        eig_mat_M_real_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_eigval_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln97_fu_4817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln44_fu_4339_p1.read());
    } else {
        eigval_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_eigval_address1() {
    eigval_address1 =  (sc_lv<2>) (zext_ln97_1_fu_4822_p1.read());
}

void music::thread_eigval_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()))) {
        eigval_ce0 = ap_const_logic_1;
    } else {
        eigval_ce0 = ap_const_logic_0;
    }
}

void music::thread_eigval_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
        eigval_ce1 = ap_const_logic_1;
    } else {
        eigval_ce1 = ap_const_logic_0;
    }
}

void music::thread_eigval_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        eigval_we0 = ap_const_logic_1;
    } else {
        eigval_we0 = ap_const_logic_0;
    }
}

void music::thread_fc_address0() {
    fc_address0 =  (sc_lv<10>) (zext_ln317_fu_3740_p1.read());
}

void music::thread_fc_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        fc_ce0 = ap_const_logic_1;
    } else {
        fc_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_4_address0() {
    fourth_order_double_4_address0 =  (sc_lv<8>) (zext_ln498_fu_5444_p1.read());
}

void music::thread_fourth_order_double_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        fourth_order_double_4_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_4_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_5_address0() {
    fourth_order_double_5_address0 =  (sc_lv<8>) (zext_ln498_fu_5444_p1.read());
}

void music::thread_fourth_order_double_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        fourth_order_double_5_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_5_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_6_address0() {
    fourth_order_double_6_address0 =  (sc_lv<8>) (zext_ln498_fu_5444_p1.read());
}

void music::thread_fourth_order_double_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        fourth_order_double_6_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_6_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_7_address0() {
    fourth_order_double_7_address0 =  (sc_lv<8>) (zext_ln498_fu_5444_p1.read());
}

void music::thread_fourth_order_double_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        fourth_order_double_7_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_7_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_s_address0() {
    fourth_order_double_s_address0 =  (sc_lv<8>) (zext_ln498_fu_5444_p1.read());
}

void music::thread_fourth_order_double_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        fourth_order_double_s_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_s_ce0 = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2765_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
          esl_seteq<1,1,1>(ap_block_state42_on_subcall_done.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()))) {
        grp_fu_2765_ce = ap_const_logic_1;
    } else {
        grp_fu_2765_ce = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2765_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()))) {
        grp_fu_2765_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln235_fu_3592_p2.read())) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()))) {
        grp_fu_2765_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2765_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2765_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        grp_fu_2765_p0 = w_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        grp_fu_2765_p0 = complex_M_real_read_4_reg_2671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2765_p0 = complex_M_real_read_3_reg_2625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_2765_p0 = complex_M_real_read_2_reg_2566.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read())) {
        grp_fu_2765_p0 = p_x_assign_reg_2364.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        grp_fu_2765_p0 = complex_M_real_read_1_reg_2400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        grp_fu_2765_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        grp_fu_2765_p0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_fu_2765_p0 = complex_M_real_read_reg_2266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_fu_2765_p0 = p_r_M_real_reg_2083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()))) {
        grp_fu_2765_p0 = FFT_Buffer_re_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()))) {
        grp_fu_2765_p0 = grp_fu_2803_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        grp_fu_2765_p0 = p_x_assign_5_reg_1984.read();
    } else {
        grp_fu_2765_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2765_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        grp_fu_2765_p1 = complex_M_real_read_4_reg_2671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        grp_fu_2765_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        grp_fu_2765_p1 = eigval_temp_reg_7077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()))) {
        grp_fu_2765_p1 = reg_2964.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()))) {
        grp_fu_2765_p1 = reg_3013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()))) {
        grp_fu_2765_p1 = grp_fu_2809_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        grp_fu_2765_p1 = reg_2958.read();
    } else {
        grp_fu_2765_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2770_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()))) {
        grp_fu_2770_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        grp_fu_2770_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2770_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2770_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2770_p0 = complex_M_imag_read_3_reg_2612.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        grp_fu_2770_p0 = complex_M_imag_read_2_reg_2553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        grp_fu_2770_p0 = complex_M_imag_read_1_reg_2388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        grp_fu_2770_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_fu_2770_p0 = complex_M_imag_read_reg_2253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_fu_2770_p0 = p_r_M_imag_reg_2071.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()))) {
        grp_fu_2770_p0 = FFT_Buffer_im_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()))) {
        grp_fu_2770_p0 = grp_fu_2815_p2.read();
    } else {
        grp_fu_2770_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2770_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        grp_fu_2770_p1 = reg_3019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()))) {
        grp_fu_2770_p1 = grp_fu_2821_p2.read();
    } else {
        grp_fu_2770_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2803_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) && 
          esl_seteq<1,1,1>(grp_scaled_fixed2ieee_fu_2759_ap_done.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state205.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()))) {
        grp_fu_2803_ce = ap_const_logic_1;
    } else {
        grp_fu_2803_ce = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2803_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        grp_fu_2803_p0 = AUU_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2803_p0 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2803_p0 = Un_M_real_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        grp_fu_2803_p0 = reg_2992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read())) {
        grp_fu_2803_p0 = reg_2958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2803_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        grp_fu_2803_p0 = grp_fu_2929_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_fu_2803_p0 = sum_M_real_reg_7356.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        grp_fu_2803_p0 = p_r_M_real_17_fu_4695_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        grp_fu_2803_p0 = reg_3046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        grp_fu_2803_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2803_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2803_p0 = Autocorr_Buffer_M_r_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_2803_p0 = p_r_M_real_reg_2083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2803_p0 = FFT_Buffer_re_q1.read();
    } else {
        grp_fu_2803_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2803_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        grp_fu_2803_p1 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2803_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2803_p1 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        grp_fu_2803_p1 = grp_fu_2914_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read())) {
        grp_fu_2803_p1 = p_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2803_p1 = midsum_reg_7373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        grp_fu_2803_p1 = grp_fu_2929_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_fu_2803_p1 = sum_M_real_reg_7356.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        grp_fu_2803_p1 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_2803_p1 = reg_3046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()))) {
        grp_fu_2803_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2803_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2803_p1 = Autocorr_Buffer_M_r_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_2803_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2803_p1 = c_reg_6566.read();
    } else {
        grp_fu_2803_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2809_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        grp_fu_2809_p0 = AUU_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2809_p0 = p_r_M_imag_23_fu_6175_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2809_p0 = Un_M_imag_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2809_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_fu_2809_p0 = sum_M_imag_reg_7362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        grp_fu_2809_p0 = p_r_M_imag_15_fu_4711_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        grp_fu_2809_p0 = reg_3056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        grp_fu_2809_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2809_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2809_p0 = Autocorr_Buffer_M_i_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_2809_p0 = p_r_M_imag_reg_2071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2809_p0 = FFT_Buffer_im_q1.read();
    } else {
        grp_fu_2809_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2809_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        grp_fu_2809_p1 = a_theta_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2809_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2809_p1 = p_t_imag_9_fu_6048_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        grp_fu_2809_p1 = sum_M_imag_reg_7362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        grp_fu_2809_p1 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_2809_p1 = reg_3056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()))) {
        grp_fu_2809_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2809_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2809_p1 = p_t_imag_fu_3978_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fu_2809_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2809_p1 = s_reg_6572.read();
    } else {
        grp_fu_2809_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2815_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2815_p0 = p_r_M_imag_23_fu_6175_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2815_p0 = Un_M_imag_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2815_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        grp_fu_2815_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        grp_fu_2815_p0 = reg_3056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        grp_fu_2815_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2815_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2815_p0 = Autocorr_Buffer_M_i_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_2815_p0 = p_r_M_imag_reg_2071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2815_p0 = FFT_Buffer_im_q1.read();
    } else {
        grp_fu_2815_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2815_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2815_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2815_p1 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2815_p1 = midsum_reg_7373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        grp_fu_2815_p1 = U_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()))) {
        grp_fu_2815_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_2815_p1 = reg_3046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2815_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2815_p1 = Autocorr_Buffer_M_r_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_2815_p1 = ap_const_lv32_41200000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2815_p1 = c_reg_6566.read();
    } else {
        grp_fu_2815_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2821_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2821_p0 = a_theta_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2821_p0 = Un_M_real_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        grp_fu_2821_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read())) {
        grp_fu_2821_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        grp_fu_2821_p0 = reg_3046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()))) {
        grp_fu_2821_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2821_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2821_p0 = Autocorr_Buffer_M_r_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        grp_fu_2821_p0 = p_r_M_real_reg_2083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2821_p0 = FFT_Buffer_re_q1.read();
    } else {
        grp_fu_2821_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2821_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        grp_fu_2821_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        grp_fu_2821_p1 = p_t_imag_9_fu_6048_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        grp_fu_2821_p1 = U_M_imag_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()))) {
        grp_fu_2821_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_2821_p1 = reg_3056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2821_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_fu_2821_p1 = p_t_imag_fu_3978_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fu_2821_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_fu_2821_p1 = s_reg_6572.read();
    } else {
        grp_fu_2821_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2863_p0() {
    grp_fu_2863_p0 = xor_ln444_1_fu_4705_p2.read();
}

void music::thread_grp_fu_2869_p0() {
    grp_fu_2869_p0 = xor_ln444_fu_4689_p2.read();
}

void music::thread_grp_fu_2898_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()))) {
        grp_fu_2898_p0 = reg_3084.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()))) {
        grp_fu_2898_p0 = reg_2964.read();
    } else {
        grp_fu_2898_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2898_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        grp_fu_2898_p1 = reg_3019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()))) {
        grp_fu_2898_p1 = reg_2964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_fu_2898_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2898_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2904_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        grp_fu_2904_p0 = tmp_9_i_i_reg_7351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()))) {
        grp_fu_2904_p0 = reg_3019.read();
    } else {
        grp_fu_2904_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2904_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        grp_fu_2904_p1 = reg_3019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()))) {
        grp_fu_2904_p1 = reg_2964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_fu_2904_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2904_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2914_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        grp_fu_2914_p0 = bitcast_ln512_fu_5900_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()))) {
        grp_fu_2914_p0 = reg_2953.read();
    } else {
        grp_fu_2914_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2918_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read())) {
        grp_fu_2918_p0 = theta_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        grp_fu_2918_p0 = fc_q0.read();
    } else {
        grp_fu_2918_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2937_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read())) {
        grp_fu_2937_p1 = ap_const_lv64_3F91DF46A252DD11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        grp_fu_2937_p1 = ap_const_lv64_401921FB54524550;
    } else {
        grp_fu_2937_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2944_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        grp_fu_2944_p0 = tmp_s_reg_6671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_fu_2944_p0 = ap_const_lv64_C01921FB5444261E;
    } else {
        grp_fu_2944_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2944_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        grp_fu_2944_p1 = ap_const_lv64_4075400000000000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_fu_2944_p1 = tmp_4_reg_6538.read();
    } else {
        grp_fu_2944_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2950_p0() {
    grp_fu_2950_p0 = esl_zext<32,11>(DFTpts_fu_3564_p2.read());
}

void music::thread_grp_fu_5164_p0() {
    grp_fu_5164_p0 =  (sc_lv<170>) (grp_fu_5164_p00.read());
}

void music::thread_grp_fu_5164_p00() {
    grp_fu_5164_p00 = esl_zext<223,170>(ret_V_22_fu_5146_p4.read());
}

void music::thread_grp_fu_5164_p1() {
    grp_fu_5164_p1 =  (sc_lv<53>) (grp_fu_5164_p10.read());
}

void music::thread_grp_fu_5164_p10() {
    grp_fu_5164_p10 = esl_zext<223,53>(p_Result_50_fu_5130_p3.read());
}

void music::thread_grp_qrf_top_fu_2716_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) && 
         esl_seteq<1,1,1>(ap_block_state112_on_subcall_done.read(), ap_const_boolean_0))) {
        grp_qrf_top_fu_2716_ap_continue = ap_const_logic_1;
    } else {
        grp_qrf_top_fu_2716_ap_continue = ap_const_logic_0;
    }
}

void music::thread_grp_qrf_top_fu_2716_ap_start() {
    grp_qrf_top_fu_2716_ap_start = grp_qrf_top_fu_2716_ap_start_reg.read();
}

void music::thread_grp_scaled_fixed2ieee_fu_2759_ap_start() {
    grp_scaled_fixed2ieee_fu_2759_ap_start = grp_scaled_fixed2ieee_fu_2759_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2726_ap_start() {
    grp_sin_or_cos_float_s_fu_2726_ap_start = grp_sin_or_cos_float_s_fu_2726_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2726_do_cos() {
    grp_sin_or_cos_float_s_fu_2726_do_cos =  (sc_logic) (ap_const_lv1_1[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2726_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        grp_sin_or_cos_float_s_fu_2726_t_in = p_x_assign_6_reg_7723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        grp_sin_or_cos_float_s_fu_2726_t_in = p_x_assign_5_reg_1984.read();
    } else {
        grp_sin_or_cos_float_s_fu_2726_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_sin_or_cos_float_s_fu_2742_ap_start() {
    grp_sin_or_cos_float_s_fu_2742_ap_start = grp_sin_or_cos_float_s_fu_2742_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2742_do_cos() {
    grp_sin_or_cos_float_s_fu_2742_do_cos =  (sc_logic) (ap_const_lv1_0[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2742_t_in() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        grp_sin_or_cos_float_s_fu_2742_t_in = p_x_assign_6_reg_7723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        grp_sin_or_cos_float_s_fu_2742_t_in = p_x_assign_5_reg_1984.read();
    } else {
        grp_sin_or_cos_float_s_fu_2742_t_in =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_i_10_fu_4205_p2() {
    i_10_fu_4205_p2 = (!i17_0_i_reg_2231.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i17_0_i_reg_2231.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_11_fu_4366_p2() {
    i_11_fu_4366_p2 = (!i19_0_i_reg_2302.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i19_0_i_reg_2302.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_12_fu_4758_p2() {
    i_12_fu_4758_p2 = (!i_0_i49_reg_2432.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i49_reg_2432.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_13_fu_4445_p2() {
    i_13_fu_4445_p2 = (!j_14_reg_2325.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_14_reg_2325.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_14_fu_4779_p2() {
    i_14_fu_4779_p2 = (!flag_reg_2444.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(flag_reg_2444.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_15_fu_4723_p2() {
    i_15_fu_4723_p2 = (!i25_0_i_reg_2421.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i25_0_i_reg_2421.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_16_fu_5931_p2() {
    i_16_fu_5931_p2 = (!i_0_reg_2531.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_2531.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_17_fu_6060_p2() {
    i_17_fu_6060_p2 = (!i30_0_reg_2590.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i30_0_reg_2590.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_18_fu_6187_p2() {
    i_18_fu_6187_p2 = (!i33_0_reg_2660.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i33_0_reg_2660.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_4_fu_3501_p2() {
    i_4_fu_3501_p2 = (!i_0_i_i_i_reg_1941.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_i_i_i_reg_1941.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_5_cast_fu_3588_p1() {
    i_5_cast_fu_3588_p1 = esl_zext<32,10>(i_5_reg_1973.read());
}

void music::thread_i_6_fu_3489_p2() {
    i_6_fu_3489_p2 = (!ap_const_lv11_1.is_01() || !input_assign_reg_1918.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(input_assign_reg_1918.read()));
}

void music::thread_i_7_fu_3642_p2() {
    i_7_fu_3642_p2 = (!zext_ln227_reg_6526.read().is_01() || !i_0_i_reg_1996.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln227_reg_6526.read()) + sc_bigint<32>(i_0_i_reg_1996.read()));
}

void music::thread_i_8_fu_4142_p2() {
    i_8_fu_4142_p2 = (!i_0_i43_reg_2198.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i43_reg_2198.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_9_fu_4193_p2() {
    i_9_fu_4193_p2 = (!i16_0_i_reg_2220.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i16_0_i_reg_2220.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_fu_6263_p2() {
    i_fu_6263_p2 = (!p_016_rec_reg_2705.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(p_016_rec_reg_2705.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_lower_fu_3625_p2() {
    i_lower_fu_3625_p2 = (!i_0_i_reg_1996.read().is_01() || !numBF_reg_6543.read().is_01())? sc_lv<32>(): (sc_bigint<32>(i_0_i_reg_1996.read()) + sc_biguint<32>(numBF_reg_6543.read()));
}

void music::thread_icmp_ln109_fu_3863_p2() {
    icmp_ln109_fu_3863_p2 = (!x_0_i_reg_2049.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_i_reg_2049.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln110_fu_3891_p2() {
    icmp_ln110_fu_3891_p2 = (!y_0_i_reg_2060.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_i_reg_2060.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln112_fu_3922_p2() {
    icmp_ln112_fu_3922_p2 = (!l_0_i_reg_2095.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_i_reg_2095.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln123_fu_3495_p2() {
    icmp_ln123_fu_3495_p2 = (!i_0_i_i_i_reg_1941.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_i_reg_1941.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln13_1_fu_4016_p2() {
    icmp_ln13_1_fu_4016_p2 = (!phi_ln13_reg_2106.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_2106.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_fu_4010_p2() {
    icmp_ln13_fu_4010_p2 = (!phi_ln13_1_reg_2118.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_2118.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_1_fu_4054_p2() {
    icmp_ln14_1_fu_4054_p2 = (!phi_ln14_reg_2129.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_reg_2129.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_fu_4048_p2() {
    icmp_ln14_fu_4048_p2 = (!phi_ln14_1_reg_2141.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_1_reg_2141.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln158_fu_3483_p2() {
    icmp_ln158_fu_3483_p2 = (!input_assign_reg_1918.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(input_assign_reg_1918.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln15_1_fu_4092_p2() {
    icmp_ln15_1_fu_4092_p2 = (!phi_ln15_reg_2152.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln15_reg_2152.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln15_fu_4086_p2() {
    icmp_ln15_fu_4086_p2 = (!phi_ln15_1_reg_2164.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln15_1_reg_2164.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln160_fu_3537_p2() {
    icmp_ln160_fu_3537_p2 = (!zext_ln120_reg_6454.read().is_01() || !reversed_reg_1930.read().is_01())? sc_lv<1>(): (sc_biguint<32>(zext_ln120_reg_6454.read()) > sc_biguint<32>(reversed_reg_1930.read()));
}

void music::thread_icmp_ln16_1_fu_4130_p2() {
    icmp_ln16_1_fu_4130_p2 = (!phi_ln16_reg_2175.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln16_reg_2175.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln16_fu_4124_p2() {
    icmp_ln16_fu_4124_p2 = (!phi_ln16_1_reg_2187.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln16_1_reg_2187.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln225_fu_3558_p2() {
    icmp_ln225_fu_3558_p2 = (!stage_0_i_reg_1961.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(stage_0_i_reg_1961.read() == ap_const_lv4_B);
}

void music::thread_icmp_ln22_fu_4136_p2() {
    icmp_ln22_fu_4136_p2 = (!i_0_i43_reg_2198.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i43_reg_2198.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln235_fu_3592_p2() {
    icmp_ln235_fu_3592_p2 = (!i_5_reg_1973.read().is_01() || !trunc_ln6_reg_6532.read().is_01())? sc_lv<1>(): sc_lv<1>(i_5_reg_1973.read() == trunc_ln6_reg_6532.read());
}

void music::thread_icmp_ln23_fu_4160_p2() {
    icmp_ln23_fu_4160_p2 = (!j_0_i44_reg_2209.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i44_reg_2209.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln243_fu_3619_p2() {
    icmp_ln243_fu_3619_p2 = (!tmp_68_fu_3609_p4.read().is_01() || !ap_const_lv22_1.is_01())? sc_lv<1>(): (sc_bigint<22>(tmp_68_fu_3609_p4.read()) < sc_bigint<22>(ap_const_lv22_1));
}

void music::thread_icmp_ln291_1_fu_3178_p2() {
    icmp_ln291_1_fu_3178_p2 = (!phi_ln291_reg_1734.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln291_reg_1734.read() == ap_const_lv4_9);
}

void music::thread_icmp_ln291_fu_3172_p2() {
    icmp_ln291_fu_3172_p2 = (!phi_ln291_1_reg_1746.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln291_1_reg_1746.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln292_1_fu_3216_p2() {
    icmp_ln292_1_fu_3216_p2 = (!phi_ln292_reg_1757.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln292_reg_1757.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln292_fu_3210_p2() {
    icmp_ln292_fu_3210_p2 = (!phi_ln292_1_reg_1769.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln292_1_reg_1769.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln293_fu_3248_p2() {
    icmp_ln293_fu_3248_p2 = (!phi_ln293_reg_1780.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln293_reg_1780.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln294_1_fu_3286_p2() {
    icmp_ln294_1_fu_3286_p2 = (!phi_ln294_reg_1803.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln294_reg_1803.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln294_fu_3280_p2() {
    icmp_ln294_fu_3280_p2 = (!phi_ln294_1_reg_1815.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln294_1_reg_1815.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln295_1_fu_3324_p2() {
    icmp_ln295_1_fu_3324_p2 = (!phi_ln295_reg_1826.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln295_reg_1826.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln295_fu_3318_p2() {
    icmp_ln295_fu_3318_p2 = (!phi_ln295_1_reg_1838.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln295_1_reg_1838.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln296_1_fu_3370_p2() {
    icmp_ln296_1_fu_3370_p2 = (!phi_ln296_reg_1849.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln296_reg_1849.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln296_fu_3364_p2() {
    icmp_ln296_fu_3364_p2 = (!phi_ln296_1_reg_1873.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln296_1_reg_1873.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln29_fu_4187_p2() {
    icmp_ln29_fu_4187_p2 = (!i16_0_i_reg_2220.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i16_0_i_reg_2220.read() == ap_const_lv4_8);
}

void music::thread_icmp_ln302_fu_3376_p2() {
    icmp_ln302_fu_3376_p2 = (!l_0_reg_1884.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_1884.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln303_fu_3396_p2() {
    icmp_ln303_fu_3396_p2 = (!n_0_reg_1895.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_1895.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln304_fu_3416_p2() {
    icmp_ln304_fu_3416_p2 = (!j_0_reg_1906.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_1906.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln309_fu_3651_p2() {
    icmp_ln309_fu_3651_p2 = (!j24_0_reg_2005.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_reg_2005.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln316_fu_3728_p2() {
    icmp_ln316_fu_3728_p2 = (!jj_0_reg_2016.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(jj_0_reg_2016.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln318_fu_3745_p2() {
    icmp_ln318_fu_3745_p2 = (!l25_0_reg_2027.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l25_0_reg_2027.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln319_fu_3794_p2() {
    icmp_ln319_fu_3794_p2 = (!n26_0_reg_2038.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n26_0_reg_2038.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln31_fu_4199_p2() {
    icmp_ln31_fu_4199_p2 = (!i17_0_i_reg_2231.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i17_0_i_reg_2231.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln329_fu_4918_p2() {
    icmp_ln329_fu_4918_p2 = (!x_0_reg_2475.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_2475.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln32_fu_4223_p2() {
    icmp_ln32_fu_4223_p2 = (!j18_0_i_reg_2242.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j18_0_i_reg_2242.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln330_fu_4972_p2() {
    icmp_ln330_fu_4972_p2 = (!y_0_reg_2486.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_2486.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln331_fu_5003_p2() {
    icmp_ln331_fu_5003_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_1);
}

void music::thread_icmp_ln333_fu_5009_p2() {
    icmp_ln333_fu_5009_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_0);
}

void music::thread_icmp_ln339_fu_5021_p2() {
    icmp_ln339_fu_5021_p2 = (!x27_0_reg_2497.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x27_0_reg_2497.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln341_fu_5038_p2() {
    icmp_ln341_fu_5038_p2 = (!y28_0_reg_2520.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(y28_0_reg_2520.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln349_fu_5925_p2() {
    icmp_ln349_fu_5925_p2 = (!i_0_reg_2531.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_2531.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln350_fu_5961_p2() {
    icmp_ln350_fu_5961_p2 = (!j29_0_reg_2542.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j29_0_reg_2542.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln353_fu_6000_p2() {
    icmp_ln353_fu_6000_p2 = (!k_0_reg_2579.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2579.read() == ap_const_lv2_2);
}

void music::thread_icmp_ln35_fu_4250_p2() {
    icmp_ln35_fu_4250_p2 = (!k_0_i_reg_2279.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_0_i_reg_2279.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln360_fu_6054_p2() {
    icmp_ln360_fu_6054_p2 = (!i30_0_reg_2590.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i30_0_reg_2590.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln361_fu_6082_p2() {
    icmp_ln361_fu_6082_p2 = (!j31_0_reg_2601.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j31_0_reg_2601.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln364_fu_6113_p2() {
    icmp_ln364_fu_6113_p2 = (!k32_0_reg_2638.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k32_0_reg_2638.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln384_fu_6181_p2() {
    icmp_ln384_fu_6181_p2 = (!i33_0_reg_2660.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i33_0_reg_2660.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln387_fu_6213_p2() {
    icmp_ln387_fu_6213_p2 = (!k34_0_reg_2683.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k34_0_reg_2683.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln394_fu_6257_p2() {
    icmp_ln394_fu_6257_p2 = (!p_016_rec_reg_2705.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(p_016_rec_reg_2705.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln396_fu_6274_p2() {
    icmp_ln396_fu_6274_p2 = (!p_016_rec_reg_2705.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(p_016_rec_reg_2705.read() == ap_const_lv9_0);
}

void music::thread_icmp_ln397_fu_6280_p2() {
    icmp_ln397_fu_6280_p2 = (!p_016_rec_reg_2705.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(p_016_rec_reg_2705.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln43_fu_4300_p2() {
    icmp_ln43_fu_4300_p2 = (!count_0_i_reg_2290.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(count_0_i_reg_2290.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln45_fu_4360_p2() {
    icmp_ln45_fu_4360_p2 = (!i19_0_i_reg_2302.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2302.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln46_fu_4402_p2() {
    icmp_ln46_fu_4402_p2 = (!j20_0_i_reg_2314.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j20_0_i_reg_2314.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln48_fu_4414_p2() {
    icmp_ln48_fu_4414_p2 = (!i19_0_i_reg_2302.read().is_01() || !j20_0_i_reg_2314.read().is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2302.read() == j20_0_i_reg_2314.read());
}

void music::thread_icmp_ln55_fu_4439_p2() {
    icmp_ln55_fu_4439_p2 = (!j_14_reg_2325.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_14_reg_2325.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln57_fu_4477_p2() {
    icmp_ln57_fu_4477_p2 = (!j22_0_i_reg_2337.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(j22_0_i_reg_2337.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln61_fu_4510_p2() {
    icmp_ln61_fu_4510_p2 = (!j23_0_in_i_reg_2346.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j23_0_in_i_reg_2346.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln63_fu_4541_p2() {
    icmp_ln63_fu_4541_p2 = (!q_0_i_reg_2355.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(q_0_i_reg_2355.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln74_fu_4635_p2() {
    icmp_ln74_fu_4635_p2 = (!j24_0_in_i_reg_2412.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_in_i_reg_2412.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln833_1_fu_5170_p2() {
    icmp_ln833_1_fu_5170_p2 = (!tmp_V_4_reg_7594.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_reg_7594.read() == ap_const_lv52_0);
}

void music::thread_icmp_ln833_2_fu_5458_p2() {
    icmp_ln833_2_fu_5458_p2 = (!tmp_V_reg_7587.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7587.read() == ap_const_lv11_7FF);
}

void music::thread_icmp_ln833_fu_5453_p2() {
    icmp_ln833_fu_5453_p2 = (!tmp_V_reg_7587.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7587.read() == ap_const_lv11_0);
}

void music::thread_icmp_ln83_fu_4717_p2() {
    icmp_ln83_fu_4717_p2 = (!i25_0_i_reg_2421.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i25_0_i_reg_2421.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln91_fu_4752_p2() {
    icmp_ln91_fu_4752_p2 = (!i_0_i49_reg_2432.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i49_reg_2432.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln94_fu_4773_p2() {
    icmp_ln94_fu_4773_p2 = (!flag_reg_2444.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(flag_reg_2444.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln96_fu_4791_p2() {
    icmp_ln96_fu_4791_p2 = (!j_0_in_i_reg_2466.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_in_i_reg_2466.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln97_1_fu_4869_p2() {
    icmp_ln97_1_fu_4869_p2 = (!trunc_ln97_fu_4841_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln97_fu_4841_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln97_2_fu_4881_p2() {
    icmp_ln97_2_fu_4881_p2 = (!tmp_23_fu_4849_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_fu_4849_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln97_3_fu_4887_p2() {
    icmp_ln97_3_fu_4887_p2 = (!trunc_ln97_1_fu_4859_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln97_1_fu_4859_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln97_fu_4863_p2() {
    icmp_ln97_fu_4863_p2 = (!tmp_21_fu_4831_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_fu_4831_p4.read() != ap_const_lv8_FF);
}

void music::thread_input_assign_1_fu_3523_p4() {
    input_assign_1_fu_3523_p4 = p_0_i_i_i_reg_1952.read().range(9, 1);
}

void music::thread_isNeg_fu_5314_p3() {
    isNeg_fu_5314_p3 = Ex_V_fu_5304_p2.read().range(10, 10);
}

void music::thread_j_10_fu_4629_p2() {
    j_10_fu_4629_p2 = (!j24_0_in_i_reg_2412.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j24_0_in_i_reg_2412.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_11_fu_4504_p2() {
    j_11_fu_4504_p2 = (!j23_0_in_i_reg_2346.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j23_0_in_i_reg_2346.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_12_fu_5967_p2() {
    j_12_fu_5967_p2 = (!j29_0_reg_2542.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j29_0_reg_2542.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_13_fu_6088_p2() {
    j_13_fu_6088_p2 = (!j31_0_reg_2601.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j31_0_reg_2601.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_15_fu_4785_p2() {
    j_15_fu_4785_p2 = (!j_0_in_i_reg_2466.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_0_in_i_reg_2466.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_1_fu_3657_p2() {
    j_1_fu_3657_p2 = (!j24_0_reg_2005.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j24_0_reg_2005.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_j_2_fu_3597_p2() {
    j_2_fu_3597_p2 = (!i_5_reg_1973.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_5_reg_1973.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void music::thread_j_3_fu_4166_p2() {
    j_3_fu_4166_p2 = (!j_0_i44_reg_2209.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_i44_reg_2209.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_5_fu_4229_p2() {
    j_5_fu_4229_p2 = (!j18_0_i_reg_2242.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j18_0_i_reg_2242.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_7_fu_4911_p3() {
    j_7_fu_4911_p3 = (!and_ln97_1_fu_4905_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln97_1_fu_4905_p2.read()[0].to_bool())? j_15_reg_7420.read(): flag_0_i_reg_2456.read());
}

void music::thread_j_8_fu_4498_p2() {
    j_8_fu_4498_p2 = (!ap_const_lv32_1.is_01() || !j22_0_i_reg_2337.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j22_0_i_reg_2337.read()));
}

void music::thread_j_9_fu_4408_p2() {
    j_9_fu_4408_p2 = (!j20_0_i_reg_2314.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j20_0_i_reg_2314.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_fu_3422_p2() {
    j_fu_3422_p2 = (!j_0_reg_1906.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_reg_1906.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_jj_fu_3734_p2() {
    jj_fu_3734_p2 = (!jj_0_reg_2016.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(jj_0_reg_2016.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_k_2_fu_6006_p2() {
    k_2_fu_6006_p2 = (!k_0_reg_2579.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_2579.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_k_3_fu_6219_p2() {
    k_3_fu_6219_p2 = (!k34_0_reg_2683.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k34_0_reg_2683.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_4_fu_6119_p2() {
    k_4_fu_6119_p2 = (!k32_0_reg_2638.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k32_0_reg_2638.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_fu_4256_p2() {
    k_fu_4256_p2 = (!k_0_i_reg_2279.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_0_i_reg_2279.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_l_1_fu_3751_p2() {
    l_1_fu_3751_p2 = (!l25_0_reg_2027.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l25_0_reg_2027.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_2_fu_3928_p2() {
    l_2_fu_3928_p2 = (!l_0_i_reg_2095.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_i_reg_2095.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_fu_3382_p2() {
    l_fu_3382_p2 = (!l_0_reg_1884.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_reg_1884.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_lhs_V_2_fu_5615_p1() {
    lhs_V_2_fu_5615_p1 = esl_sext<64,63>(t1_V_fu_5509_p3.read());
}

void music::thread_m_fu_4679_p2() {
    m_fu_4679_p2 = (!m_0_i_reg_2376.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<3>(): (sc_bigint<3>(m_0_i_reg_2376.read()) + sc_bigint<3>(ap_const_lv3_7));
}

void music::thread_n_1_fu_3402_p2() {
    n_1_fu_3402_p2 = (!n_0_reg_1895.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n_0_reg_1895.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_n_fu_3800_p2() {
    n_fu_3800_p2 = (!n26_0_reg_2038.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n26_0_reg_2038.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_numBF_fu_3585_p1() {
    numBF_fu_3585_p1 = esl_zext<32,10>(trunc_ln6_reg_6532.read());
}

void music::thread_or_ln300_fu_5861_p2() {
    or_ln300_fu_5861_p2 = (and_ln300_fu_5814_p2.read() | icmp_ln833_2_reg_7701.read());
}

void music::thread_or_ln311_fu_5823_p2() {
    or_ln311_fu_5823_p2 = (icmp_ln833_2_reg_7701.read() | select_ln271_fu_5807_p3.read());
}

void music::thread_or_ln334_fu_4956_p2() {
    or_ln334_fu_4956_p2 = (tmp_51_fu_4942_p3.read() | ap_const_lv4_1);
}

void music::thread_or_ln97_1_fu_4893_p2() {
    or_ln97_1_fu_4893_p2 = (icmp_ln97_3_fu_4887_p2.read() | icmp_ln97_2_fu_4881_p2.read());
}

void music::thread_or_ln97_fu_4875_p2() {
    or_ln97_fu_4875_p2 = (icmp_ln97_1_fu_4869_p2.read() | icmp_ln97_fu_4863_p2.read());
}

void music::thread_p_Repl2_6_fu_5836_p3() {
    p_Repl2_6_fu_5836_p3 = (!and_ln300_fu_5814_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln300_fu_5814_p2.read()[0].to_bool())? results_sign_V_2_reg_7581.read(): select_ln311_fu_5828_p3.read());
}

void music::thread_p_Result_50_fu_5130_p3() {
    p_Result_50_fu_5130_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_7594.read());
}

void music::thread_p_Result_51_fu_5242_p3() {
    p_Result_51_fu_5242_p3 = esl_concat<61,1>(p_Result_i_i_i_87_fu_5232_p4.read(), ap_const_lv1_1);
}

void music::thread_p_Result_52_fu_5260_p3() {
    p_Result_52_fu_5260_p3 = esl_concat<2,62>(ap_const_lv2_3, p_Result_s_fu_5250_p4.read());
}

void music::thread_p_Result_53_fu_5436_p3() {
    p_Result_53_fu_5436_p3 = esl_concat<1,7>(sin_basis_fu_5430_p2.read(), p_Result_i_i_fu_5386_p4.read());
}

void music::thread_p_Result_54_fu_5703_p3() {
    p_Result_54_fu_5703_p3 = p_Val2_65_fu_5699_p1.read().range(63, 63);
}

void music::thread_p_Result_55_fu_5725_p3() {
    p_Result_55_fu_5725_p3 = esl_concat<1,3>(results_sign_V_2_reg_7581.read(), p_Val2_70_reg_7632.read());
}

void music::thread_p_Result_56_fu_5890_p4() {
    p_Result_56_fu_5890_p4 = esl_concat<12,52>(esl_concat<1,11>(p_Repl2_6_fu_5836_p3.read(), ret_V_20_fu_5866_p3.read()), ret_V_21_fu_5882_p3.read());
}

void music::thread_p_Result_i_i_fu_5386_p4() {
    p_Result_i_i_fu_5386_p4 = r_V_36_fu_5356_p3.read().range(62, 56);
}

void music::thread_p_Result_i_i_i_87_fu_5232_p4() {
    p_Result_i_i_i_87_fu_5232_p4 = p_Val2_49_fu_5224_p3.read().range(123, 63);
}

void music::thread_p_Result_i_i_i_fu_5111_p4() {
    p_Result_i_i_i_fu_5111_p4 = addr_V_fu_5103_p3.read().range(10, 7);
}

void music::thread_p_Result_s_fu_5250_p4() {
    p_Result_s_fu_5250_p4 = p_Result_51_fu_5242_p3.read().range(0, 61);
}

void music::thread_p_Val2_49_fu_5224_p3() {
    p_Val2_49_fu_5224_p3 = (!trunc_ln745_fu_5214_p1.read()[0].is_01())? sc_lv<124>(): ((trunc_ln745_fu_5214_p1.read()[0].to_bool())? Mx_bits_V_2_fu_5218_p2.read(): p_Val2_69_fu_5187_p4.read());
}

void music::thread_p_Val2_65_fu_5699_p1() {
    p_Val2_65_fu_5699_p1 = grp_scaled_fixed2ieee_fu_2759_ap_return.read();
}

void music::thread_p_Val2_69_fu_5187_p4() {
    p_Val2_69_fu_5187_p4 = grp_fu_5164_p2.read().range(166, 43);
}

void music::thread_p_Val2_70_fu_5207_p3() {
    p_Val2_70_fu_5207_p3 = (!closepath_reg_7600.read()[0].is_01())? sc_lv<3>(): ((closepath_reg_7600.read()[0].to_bool())? ap_const_lv3_0: trunc_ln_i_i_fu_5197_p4.read());
}

void music::thread_p_Val2_s_fu_5065_p1() {
    p_Val2_s_fu_5065_p1 = grp_fu_2937_p2.read();
}

void music::thread_p_address0() {
    p_address0 =  (sc_lv<2>) (zext_ln340_fu_5033_p1.read());
}

void music::thread_p_cast19_fu_3128_p1() {
    p_cast19_fu_3128_p1 = esl_zext<31,30>(tmp_40_fu_3118_p4.read());
}

void music::thread_p_cast_fu_3142_p1() {
    p_cast_fu_3142_p1 = esl_zext<31,30>(tmp_41_fu_3132_p4.read());
}

void music::thread_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state195.read())) {
        p_ce0 = ap_const_logic_1;
    } else {
        p_ce0 = ap_const_logic_0;
    }
}

void music::thread_p_r_M_imag_15_fu_4711_p1() {
    p_r_M_imag_15_fu_4711_p1 = xor_ln444_1_fu_4705_p2.read();
}

void music::thread_p_r_M_imag_23_fu_6175_p1() {
    p_r_M_imag_23_fu_6175_p1 = xor_ln667_2_fu_6169_p2.read();
}

void music::thread_p_r_M_real_17_fu_4695_p1() {
    p_r_M_real_17_fu_4695_p1 = xor_ln444_fu_4689_p2.read();
}

void music::thread_p_t_imag_9_fu_6048_p1() {
    p_t_imag_9_fu_6048_p1 = xor_ln667_1_fu_6042_p2.read();
}

void music::thread_p_t_imag_fu_3978_p1() {
    p_t_imag_fu_3978_p1 = xor_ln667_fu_3972_p2.read();
}

void music::thread_q_1_fu_4567_p2() {
    q_1_fu_4567_p2 = (!ap_const_lv32_1.is_01() || !q_0_i_reg_2355.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(q_0_i_reg_2355.read()));
}

void music::thread_r_V_20_fu_5350_p2() {
    r_V_20_fu_5350_p2 = (!zext_ln1287_fu_5340_p1.read().is_01())? sc_lv<63>(): Mx_V_fu_5290_p4.read() << (unsigned short)zext_ln1287_fu_5340_p1.read().to_uint();
}

void music::thread_r_V_22_fu_5410_p1() {
    r_V_22_fu_5410_p1 = esl_zext<98,49>(B_trunc_V_fu_5400_p4.read());
}

void music::thread_r_V_25_fu_5475_p1() {
    r_V_25_fu_5475_p1 = esl_zext<98,49>(B_squared_V_reg_7664.read());
}

void music::thread_r_V_34_fu_5140_p2() {
    r_V_34_fu_5140_p2 = (!zext_ln744_fu_5137_p1.read().is_01())? sc_lv<256>(): ref_4oPi_table_256_V_q0.read() << (unsigned short)zext_ln744_fu_5137_p1.read().to_uint();
}

void music::thread_r_V_35_fu_5284_p2() {
    r_V_35_fu_5284_p2 = (!zext_ln1253_fu_5280_p1.read().is_01())? sc_lv<124>(): p_Val2_49_fu_5224_p3.read() << (unsigned short)zext_ln1253_fu_5280_p1.read().to_uint();
}

void music::thread_r_V_36_fu_5356_p3() {
    r_V_36_fu_5356_p3 = (!isNeg_fu_5314_p3.read()[0].is_01())? sc_lv<63>(): ((isNeg_fu_5314_p3.read()[0].to_bool())? r_V_fu_5344_p2.read(): r_V_20_fu_5350_p2.read());
}

void music::thread_r_V_37_fu_5414_p0() {
    r_V_37_fu_5414_p0 =  (sc_lv<49>) (r_V_22_fu_5410_p1.read());
}

void music::thread_r_V_37_fu_5414_p1() {
    r_V_37_fu_5414_p1 =  (sc_lv<49>) (r_V_22_fu_5410_p1.read());
}

void music::thread_r_V_37_fu_5414_p2() {
    r_V_37_fu_5414_p2 = (!r_V_37_fu_5414_p0.read().is_01() || !r_V_37_fu_5414_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_37_fu_5414_p0.read()) * sc_biguint<49>(r_V_37_fu_5414_p1.read());
}

void music::thread_r_V_38_fu_5478_p0() {
    r_V_38_fu_5478_p0 =  (sc_lv<49>) (r_V_25_fu_5475_p1.read());
}

void music::thread_r_V_38_fu_5478_p1() {
    r_V_38_fu_5478_p1 =  (sc_lv<49>) (r_V_22_reg_7659.read());
}

void music::thread_r_V_38_fu_5478_p2() {
    r_V_38_fu_5478_p2 = (!r_V_38_fu_5478_p0.read().is_01() || !r_V_38_fu_5478_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_38_fu_5478_p0.read()) * sc_biguint<49>(r_V_38_fu_5478_p1.read());
}

void music::thread_r_V_39_fu_5493_p0() {
    r_V_39_fu_5493_p0 =  (sc_lv<49>) (r_V_25_fu_5475_p1.read());
}

void music::thread_r_V_39_fu_5493_p1() {
    r_V_39_fu_5493_p1 =  (sc_lv<49>) (r_V_25_fu_5475_p1.read());
}

void music::thread_r_V_39_fu_5493_p2() {
    r_V_39_fu_5493_p2 = (!r_V_39_fu_5493_p0.read().is_01() || !r_V_39_fu_5493_p1.read().is_01())? sc_lv<98>(): sc_biguint<49>(r_V_39_fu_5493_p0.read()) * sc_biguint<49>(r_V_39_fu_5493_p1.read());
}

void music::thread_r_V_40_fu_5524_p0() {
    r_V_40_fu_5524_p0 =  (sc_lv<56>) (r_V_40_fu_5524_p00.read());
}

void music::thread_r_V_40_fu_5524_p00() {
    r_V_40_fu_5524_p00 = esl_zext<108,56>(B_V_reg_7654.read());
}

void music::thread_r_V_40_fu_5524_p1() {
    r_V_40_fu_5524_p1 = fourth_order_double_5_q0.read();
}

void music::thread_r_V_40_fu_5524_p2() {
    r_V_40_fu_5524_p2 = (!r_V_40_fu_5524_p0.read().is_01() || !r_V_40_fu_5524_p1.read().is_01())? sc_lv<108>(): sc_biguint<56>(r_V_40_fu_5524_p0.read()) * sc_bigint<52>(r_V_40_fu_5524_p1.read());
}

void music::thread_r_V_41_fu_5547_p0() {
    r_V_41_fu_5547_p0 =  (sc_lv<49>) (r_V_41_fu_5547_p00.read());
}

void music::thread_r_V_41_fu_5547_p00() {
    r_V_41_fu_5547_p00 = esl_zext<93,49>(B_squared_V_reg_7664.read());
}

void music::thread_r_V_41_fu_5547_p1() {
    r_V_41_fu_5547_p1 = fourth_order_double_6_q0.read();
}

void music::thread_r_V_41_fu_5547_p2() {
    r_V_41_fu_5547_p2 = (!r_V_41_fu_5547_p0.read().is_01() || !r_V_41_fu_5547_p1.read().is_01())? sc_lv<93>(): sc_biguint<49>(r_V_41_fu_5547_p0.read()) * sc_bigint<44>(r_V_41_fu_5547_p1.read());
}

void music::thread_r_V_42_fu_5571_p0() {
    r_V_42_fu_5571_p0 =  (sc_lv<42>) (r_V_42_fu_5571_p00.read());
}

void music::thread_r_V_42_fu_5571_p00() {
    r_V_42_fu_5571_p00 = esl_zext<75,42>(B_third_power_V_fu_5483_p4.read());
}

void music::thread_r_V_42_fu_5571_p1() {
    r_V_42_fu_5571_p1 =  (sc_lv<33>) (r_V_42_fu_5571_p10.read());
}

void music::thread_r_V_42_fu_5571_p10() {
    r_V_42_fu_5571_p10 = esl_zext<75,33>(fourth_order_double_7_q0.read());
}

void music::thread_r_V_42_fu_5571_p2() {
    r_V_42_fu_5571_p2 = (!r_V_42_fu_5571_p0.read().is_01() || !r_V_42_fu_5571_p1.read().is_01())? sc_lv<75>(): sc_biguint<42>(r_V_42_fu_5571_p0.read()) * sc_biguint<33>(r_V_42_fu_5571_p1.read());
}

void music::thread_r_V_43_fu_5599_p0() {
    r_V_43_fu_5599_p0 =  (sc_lv<35>) (r_V_43_fu_5599_p00.read());
}

void music::thread_r_V_43_fu_5599_p00() {
    r_V_43_fu_5599_p00 = esl_zext<60,35>(B_fourth_power_V_fu_5499_p4.read());
}

void music::thread_r_V_43_fu_5599_p1() {
    r_V_43_fu_5599_p1 =  (sc_lv<25>) (r_V_43_fu_5599_p10.read());
}

void music::thread_r_V_43_fu_5599_p10() {
    r_V_43_fu_5599_p10 = esl_zext<60,25>(fourth_order_double_s_q0.read());
}

void music::thread_r_V_43_fu_5599_p2() {
    r_V_43_fu_5599_p2 = (!r_V_43_fu_5599_p0.read().is_01() || !r_V_43_fu_5599_p1.read().is_01())? sc_lv<60>(): sc_biguint<35>(r_V_43_fu_5599_p0.read()) * sc_biguint<25>(r_V_43_fu_5599_p1.read());
}

void music::thread_r_V_44_fu_5671_p0() {
    r_V_44_fu_5671_p0 = ret_V_fu_5657_p2.read();
}

void music::thread_r_V_44_fu_5671_p1() {
    r_V_44_fu_5671_p1 =  (sc_lv<63>) (r_V_44_fu_5671_p10.read());
}

void music::thread_r_V_44_fu_5671_p10() {
    r_V_44_fu_5671_p10 = esl_zext<126,63>(select_ln272_2_fu_5469_p3.read());
}

void music::thread_r_V_44_fu_5671_p2() {
    r_V_44_fu_5671_p2 = (!r_V_44_fu_5671_p0.read().is_01() || !r_V_44_fu_5671_p1.read().is_01())? sc_lv<126>(): sc_bigint<64>(r_V_44_fu_5671_p0.read()) * sc_biguint<63>(r_V_44_fu_5671_p1.read());
}

void music::thread_r_V_fu_5344_p2() {
    r_V_fu_5344_p2 = (!zext_ln1287_fu_5340_p1.read().is_01())? sc_lv<63>(): Mx_V_fu_5290_p4.read() >> (unsigned short)zext_ln1287_fu_5340_p1.read().to_uint();
}

void music::thread_ref_4oPi_table_256_V_address0() {
    ref_4oPi_table_256_V_address0 =  (sc_lv<4>) (zext_ln635_fu_5121_p1.read());
}

void music::thread_ref_4oPi_table_256_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_1;
    } else {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_0;
    }
}

void music::thread_ret_V_19_fu_5692_p2() {
    ret_V_19_fu_5692_p2 = (!ap_const_lv12_0.is_01() || !rhs_V_3_fu_5688_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(rhs_V_3_fu_5688_p1.read()));
}

void music::thread_ret_V_20_fu_5866_p3() {
    ret_V_20_fu_5866_p3 = (!or_ln300_fu_5861_p2.read()[0].is_01())? sc_lv<11>(): ((or_ln300_fu_5861_p2.read()[0].to_bool())? select_ln300_4_fu_5853_p3.read(): tmp_V_5_fu_5711_p4.read());
}

void music::thread_ret_V_21_fu_5882_p3() {
    ret_V_21_fu_5882_p3 = (!or_ln300_fu_5861_p2.read()[0].is_01())? sc_lv<52>(): ((or_ln300_fu_5861_p2.read()[0].to_bool())? select_ln300_6_fu_5874_p3.read(): tmp_V_6_fu_5721_p1.read());
}

void music::thread_ret_V_22_fu_5146_p4() {
    ret_V_22_fu_5146_p4 = r_V_34_fu_5140_p2.read().range(255, 86);
}

void music::thread_ret_V_fu_5657_p2() {
    ret_V_fu_5657_p2 = (!sext_ln1146_fu_5653_p1.read().is_01() || !add_ln1146_fu_5631_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(sext_ln1146_fu_5653_p1.read()) + sc_biguint<64>(add_ln1146_fu_5631_p2.read()));
}

void music::thread_rev_fu_3515_p3() {
    rev_fu_3515_p3 = esl_concat<31,1>(trunc_ln124_fu_3507_p1.read(), trunc_ln123_fu_3511_p1.read());
}

void music::thread_rhs_V_2_fu_5619_p1() {
    rhs_V_2_fu_5619_p1 = esl_sext<64,56>(trunc_ln9_fu_5530_p4.read());
}

void music::thread_rhs_V_3_fu_5688_p1() {
    rhs_V_3_fu_5688_p1 = esl_sext<12,11>(select_ln272_fu_5463_p3.read());
}

void music::thread_select_ln271_fu_5807_p3() {
    select_ln271_fu_5807_p3 = (!cos_basis_reg_7647.read()[0].is_01())? sc_lv<1>(): ((cos_basis_reg_7647.read()[0].to_bool())? tmp_27_fu_5731_p18.read(): tmp_28_fu_5769_p18.read());
}

void music::thread_select_ln272_2_fu_5469_p3() {
    select_ln272_2_fu_5469_p3 = (!cos_basis_reg_7647.read()[0].is_01())? sc_lv<63>(): ((cos_basis_reg_7647.read()[0].to_bool())? ap_const_lv63_7FFFFFFFFFFFFFFF: Mx_V_reg_7637.read());
}

void music::thread_select_ln272_fu_5463_p3() {
    select_ln272_fu_5463_p3 = (!cos_basis_reg_7647.read()[0].is_01())? sc_lv<11>(): ((cos_basis_reg_7647.read()[0].to_bool())? ap_const_lv11_0: Ex_V_reg_7642.read());
}

void music::thread_select_ln300_4_fu_5853_p3() {
    select_ln300_4_fu_5853_p3 = (!xor_ln300_fu_5847_p2.read()[0].is_01())? sc_lv<11>(): ((xor_ln300_fu_5847_p2.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void music::thread_select_ln300_6_fu_5874_p3() {
    select_ln300_6_fu_5874_p3 = (!xor_ln300_fu_5847_p2.read()[0].is_01())? sc_lv<52>(): ((xor_ln300_fu_5847_p2.read()[0].to_bool())? ap_const_lv52_FFFFFFFFFFFFF: ap_const_lv52_0);
}

void music::thread_select_ln311_fu_5828_p3() {
    select_ln311_fu_5828_p3 = (!or_ln311_fu_5823_p2.read()[0].is_01())? sc_lv<1>(): ((or_ln311_fu_5823_p2.read()[0].to_bool())? xor_ln311_fu_5818_p2.read(): p_Result_54_fu_5703_p3.read());
}

void music::thread_select_ln482_fu_5180_p3() {
    select_ln482_fu_5180_p3 = (!closepath_reg_7600.read()[0].is_01())? sc_lv<11>(): ((closepath_reg_7600.read()[0].to_bool())? add_ln114_fu_5175_p2.read(): ap_const_lv11_0);
}

void music::thread_sext_ln102_fu_4807_p1() {
    sext_ln102_fu_4807_p1 = esl_sext<64,32>(flag_0_i_reg_2456.read());
}

void music::thread_sext_ln1067_fu_4350_p1() {
    sext_ln1067_fu_4350_p1 = esl_sext<4,3>(xor_ln1067_fu_4344_p2.read());
}

void music::thread_sext_ln1146_fu_5653_p1() {
    sext_ln1146_fu_5653_p1 = esl_sext<64,49>(add_ln1146_2_fu_5647_p2.read());
}

void music::thread_sext_ln1311_fu_5336_p1() {
    sext_ln1311_fu_5336_p1 = esl_sext<32,12>(ush_fu_5328_p3.read());
}

void music::thread_sext_ln1334_fu_5310_p1() {
    sext_ln1334_fu_5310_p1 = esl_sext<12,11>(Ex_V_fu_5304_p2.read());
}

void music::thread_sext_ln250_fu_3630_p1() {
    sext_ln250_fu_3630_p1 = esl_sext<64,32>(i_lower_fu_3625_p2.read());
}

void music::thread_sext_ln253_fu_3636_p1() {
    sext_ln253_fu_3636_p1 = esl_sext<64,32>(i_0_i_reg_1996.read());
}

void music::thread_sext_ln59_fu_4492_p1() {
    sext_ln59_fu_4492_p1 = esl_sext<64,6>(add_ln59_fu_4487_p2.read());
}

void music::thread_sext_ln62_cast_fu_4534_p3() {
    sext_ln62_cast_fu_4534_p3 = esl_concat<4,2>(trunc_ln62_reg_7200.read(), ap_const_lv2_0);
}

void music::thread_sext_ln62_fu_4528_p1() {
    sext_ln62_fu_4528_p1 = esl_sext<64,34>(tmp_57_fu_4520_p3.read());
}

void music::thread_sext_ln657_fu_5623_p1() {
    sext_ln657_fu_5623_p1 = esl_sext<49,48>(trunc_ln662_1_fu_5553_p4.read());
}

void music::thread_sext_ln65_1_fu_4561_p1() {
    sext_ln65_1_fu_4561_p1 = esl_sext<64,6>(add_ln65_1_fu_4556_p2.read());
}

void music::thread_sext_ln65_fu_4573_p1() {
    sext_ln65_fu_4573_p1 = esl_sext<64,6>(add_ln65_reg_7223.read());
}

void music::thread_sext_ln71_fu_4578_p1() {
    sext_ln71_fu_4578_p1 = esl_sext<32,3>(m_0_i_reg_2376.read());
}

void music::thread_sext_ln76_1_fu_4673_p1() {
    sext_ln76_1_fu_4673_p1 = esl_sext<64,6>(add_ln76_1_fu_4668_p2.read());
}

void music::thread_sext_ln76_2_cast_fu_4660_p3() {
    sext_ln76_2_cast_fu_4660_p3 = esl_concat<4,2>(trunc_ln76_1_fu_4656_p1.read(), ap_const_lv2_0);
}

void music::thread_sext_ln76_fu_4650_p1() {
    sext_ln76_fu_4650_p1 = esl_sext<64,6>(add_ln76_fu_4645_p2.read());
}

void music::thread_sext_ln78_fu_4602_p1() {
    sext_ln78_fu_4602_p1 = esl_sext<6,5>(tmp_53_fu_4594_p3.read());
}

void music::thread_sext_ln97_1_fu_4802_p1() {
    sext_ln97_1_fu_4802_p1 = esl_sext<64,32>(j_15_fu_4785_p2.read());
}

void music::thread_sext_ln97_fu_4797_p1() {
    sext_ln97_fu_4797_p1 = esl_sext<64,32>(flag_0_i_reg_2456.read());
}

void music::thread_shl_ln1_fu_3769_p3() {
    shl_ln1_fu_3769_p3 = esl_concat<4,10>(l25_0_reg_2027.read(), ap_const_lv10_0);
}

void music::thread_shl_ln_fu_3388_p3() {
    shl_ln_fu_3388_p3 = esl_concat<4,10>(l_0_reg_1884.read(), ap_const_lv10_0);
}

void music::thread_sin_basis_fu_5430_p2() {
    sin_basis_fu_5430_p2 = (cos_basis_fu_5364_p10.read() ^ ap_const_lv1_1);
}

void music::thread_sort_index_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        sort_index_address0 = sort_index_addr_2_reg_7445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln96_fu_4791_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln102_fu_4807_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln96_fu_4791_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln97_fu_4797_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        sort_index_address0 =  (sc_lv<2>) (zext_ln92_fu_4764_p1.read());
    } else {
        sort_index_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read())) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln331_fu_4984_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        sort_index_address1 = sort_index_addr_1_reg_7439.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln96_fu_4791_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln103_fu_4812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln96_fu_4791_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (sext_ln97_1_fu_4802_p1.read());
    } else {
        sort_index_address1 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln96_fu_4791_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln96_fu_4791_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()))) {
        sort_index_ce0 = ap_const_logic_1;
    } else {
        sort_index_ce0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln96_fu_4791_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln96_fu_4791_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()))) {
        sort_index_ce1 = ap_const_logic_1;
    } else {
        sort_index_ce1 = ap_const_logic_0;
    }
}

void music::thread_sort_index_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        sort_index_d0 = sort_index_load_reg_7466.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        sort_index_d0 = i_0_i49_reg_2432.read();
    } else {
        sort_index_d0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_sort_index_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln91_fu_4752_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()))) {
        sort_index_we0 = ap_const_logic_1;
    } else {
        sort_index_we0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        sort_index_we1 = ap_const_logic_1;
    } else {
        sort_index_we1 = ap_const_logic_0;
    }
}

void music::thread_stage_fu_3603_p2() {
    stage_fu_3603_p2 = (!stage_0_i_reg_1961.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(stage_0_i_reg_1961.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_sub_ln1311_fu_5322_p2() {
    sub_ln1311_fu_5322_p2 = (!ap_const_lv12_0.is_01() || !sext_ln1334_fu_5310_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(sext_ln1334_fu_5310_p1.read()));
}

void music::thread_t1_V_fu_5509_p3() {
    t1_V_fu_5509_p3 = esl_concat<59,4>(fourth_order_double_4_q0.read(), ap_const_lv4_0);
}

void music::thread_temp_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln366_1_fu_6142_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_5_reg_7765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln51_1_fu_4429_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln49_2_fu_4394_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln24_1_fu_4181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_1_reg_6775.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3274_p1.read());
    } else {
        temp_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        temp_mat_M_imag_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        temp_mat_M_imag_d0 = complex_M_imag_read_2_reg_2553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        temp_mat_M_imag_d0 = grp_fu_2904_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln353_fu_6000_p2.read())))) {
        temp_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln366_1_fu_6142_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_5_reg_7760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln51_1_fu_4429_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln49_2_fu_4394_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln24_1_fu_4181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_1_reg_6770.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3274_p1.read());
    } else {
        temp_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        temp_mat_M_real_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        temp_mat_M_real_d0 = complex_M_real_read_2_reg_2566.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        temp_mat_M_real_d0 = grp_fu_2898_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln353_fu_6000_p2.read())))) {
        temp_mat_M_real_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_theta_address0() {
    theta_address0 =  (sc_lv<9>) (zext_ln343_fu_5050_p1.read());
}

void music::thread_theta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state198.read())) {
        theta_ce0 = ap_const_logic_1;
    } else {
        theta_ce0 = ap_const_logic_0;
    }
}

void music::thread_tmp_21_fu_4831_p4() {
    tmp_21_fu_4831_p4 = bitcast_ln97_fu_4827_p1.read().range(30, 23);
}

void music::thread_tmp_23_fu_4849_p4() {
    tmp_23_fu_4849_p4 = bitcast_ln97_1_fu_4845_p1.read().range(30, 23);
}

void music::thread_tmp_26_fu_3158_p3() {
    tmp_26_fu_3158_p3 = esl_concat<4,2>(phi_ln291_reg_1734.read(), phi_ln291_1_reg_1746.read());
}

void music::thread_tmp_33_fu_3757_p3() {
    tmp_33_fu_3757_p3 = esl_concat<4,2>(l25_0_reg_2027.read(), ap_const_lv2_0);
}

void music::thread_tmp_34_fu_3782_p3() {
    tmp_34_fu_3782_p3 = esl_concat<14,2>(add_ln321_fu_3777_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_35_fu_3433_p3() {
    tmp_35_fu_3433_p3 = esl_concat<14,2>(add_ln305_fu_3428_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_36_fu_3879_p3() {
    tmp_36_fu_3879_p3 = esl_concat<3,2>(x_0_i_reg_2049.read(), ap_const_lv2_0);
}

void music::thread_tmp_38_fu_3934_p3() {
    tmp_38_fu_3934_p3 = esl_concat<4,2>(l_0_i_reg_2095.read(), ap_const_lv2_0);
}

void music::thread_tmp_39_fu_3674_p3() {
    tmp_39_fu_3674_p3 = esl_concat<14,2>(add_ln310_fu_3669_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_40_fu_3118_p4() {
    tmp_40_fu_3118_p4 = data_im.read().range(31, 2);
}

void music::thread_tmp_41_fu_3132_p4() {
    tmp_41_fu_3132_p4 = data_re.read().range(31, 2);
}

void music::thread_tmp_42_fu_3196_p3() {
    tmp_42_fu_3196_p3 = esl_concat<2,2>(phi_ln292_reg_1757.read(), phi_ln292_1_reg_1769.read());
}

void music::thread_tmp_43_fu_4148_p3() {
    tmp_43_fu_4148_p3 = esl_concat<3,2>(i_0_i43_reg_2198.read(), ap_const_lv2_0);
}

void music::thread_tmp_44_fu_4316_p3() {
    tmp_44_fu_4316_p3 = esl_concat<3,2>(count_0_i_reg_2290.read(), ap_const_lv2_0);
}

void music::thread_tmp_45_fu_4211_p3() {
    tmp_45_fu_4211_p3 = esl_concat<3,2>(i17_0_i_reg_2231.read(), ap_const_lv2_0);
}

void music::thread_tmp_46_fu_4376_p3() {
    tmp_46_fu_4376_p3 = esl_concat<3,2>(i19_0_i_reg_2302.read(), ap_const_lv2_0);
}

void music::thread_tmp_47_fu_4465_p3() {
    tmp_47_fu_4465_p3 = esl_concat<2,2>(j_14_reg_2325.read(), ap_const_lv2_0);
}

void music::thread_tmp_48_fu_4451_p3() {
    tmp_48_fu_4451_p3 = esl_concat<2,2>(j_14_reg_2325.read(), j_14_reg_2325.read());
}

void music::thread_tmp_49_fu_4266_p3() {
    tmp_49_fu_4266_p3 = esl_concat<3,2>(k_0_i_reg_2279.read(), ap_const_lv2_0);
}

void music::thread_tmp_50_fu_4930_p3() {
    tmp_50_fu_4930_p3 = esl_concat<3,2>(x_0_reg_2475.read(), ap_const_lv2_0);
}

void music::thread_tmp_51_fu_4942_p3() {
    tmp_51_fu_4942_p3 = esl_concat<3,1>(x_0_reg_2475.read(), ap_const_lv1_0);
}

void music::thread_tmp_52_fu_4962_p3() {
    tmp_52_fu_4962_p3 = esl_concat<60,4>(ap_const_lv60_0, or_ln334_fu_4956_p2.read());
}

void music::thread_tmp_53_fu_4594_p3() {
    tmp_53_fu_4594_p3 = esl_concat<3,2>(m_0_i_reg_2376.read(), ap_const_lv2_0);
}

void music::thread_tmp_54_fu_3234_p3() {
    tmp_54_fu_3234_p3 = esl_concat<2,1>(phi_ln293_reg_1780.read(), phi_ln293_1_reg_1792.read());
}

void music::thread_tmp_55_fu_4729_p3() {
    tmp_55_fu_4729_p3 = esl_concat<3,2>(i25_0_i_reg_2421.read(), ap_const_lv2_0);
}

void music::thread_tmp_56_fu_3266_p3() {
    tmp_56_fu_3266_p3 = esl_concat<2,2>(phi_ln294_reg_1803.read(), phi_ln294_1_reg_1815.read());
}

void music::thread_tmp_57_fu_4520_p3() {
    tmp_57_fu_4520_p3 = esl_concat<32,2>(j_11_fu_4504_p2.read(), j_14_reg_2325.read());
}

void music::thread_tmp_58_fu_5937_p3() {
    tmp_58_fu_5937_p3 = esl_concat<3,1>(i_0_reg_2531.read(), ap_const_lv1_0);
}

void music::thread_tmp_59_fu_5949_p3() {
    tmp_59_fu_5949_p3 = esl_concat<3,2>(i_0_reg_2531.read(), ap_const_lv2_0);
}

void music::thread_tmp_60_fu_5577_p4() {
    tmp_60_fu_5577_p4 = r_V_42_fu_5571_p2.read().range(74, 38);
}

void music::thread_tmp_61_fu_5605_p4() {
    tmp_61_fu_5605_p4 = r_V_43_fu_5599_p2.read().range(59, 31);
}

void music::thread_tmp_62_fu_6070_p3() {
    tmp_62_fu_6070_p3 = esl_concat<9,2>(i30_0_reg_2590.read(), ap_const_lv2_0);
}

void music::thread_tmp_63_fu_5977_p3() {
    tmp_63_fu_5977_p3 = esl_concat<3,1>(j29_0_reg_2542.read(), ap_const_lv1_0);
}

void music::thread_tmp_64_fu_6201_p3() {
    tmp_64_fu_6201_p3 = esl_concat<9,2>(i33_0_reg_2660.read(), ap_const_lv2_0);
}

void music::thread_tmp_65_fu_6125_p3() {
    tmp_65_fu_6125_p3 = esl_concat<3,2>(k32_0_reg_2638.read(), ap_const_lv2_0);
}

void music::thread_tmp_66_fu_3304_p3() {
    tmp_66_fu_3304_p3 = esl_concat<9,2>(phi_ln295_reg_1826.read(), phi_ln295_1_reg_1838.read());
}

void music::thread_tmp_67_fu_3996_p3() {
    tmp_67_fu_3996_p3 = esl_concat<2,2>(phi_ln13_reg_2106.read(), phi_ln13_1_reg_2118.read());
}

void music::thread_tmp_68_fu_3609_p4() {
    tmp_68_fu_3609_p4 = i_0_i_reg_1996.read().range(31, 10);
}

void music::thread_tmp_69_fu_4034_p3() {
    tmp_69_fu_4034_p3 = esl_concat<2,2>(phi_ln14_reg_2129.read(), phi_ln14_1_reg_2141.read());
}

void music::thread_tmp_70_fu_4072_p3() {
    tmp_70_fu_4072_p3 = esl_concat<2,2>(phi_ln15_reg_2152.read(), phi_ln15_1_reg_2164.read());
}

void music::thread_tmp_71_fu_4110_p3() {
    tmp_71_fu_4110_p3 = esl_concat<2,2>(phi_ln16_reg_2175.read(), phi_ln16_1_reg_2187.read());
}

void music::thread_tmp_72_fu_4582_p3() {
    tmp_72_fu_4582_p3 = m_0_i_reg_2376.read().range(2, 2);
}

void music::thread_tmp_V_4_fu_5087_p1() {
    tmp_V_4_fu_5087_p1 = p_Val2_s_fu_5065_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_5_fu_5711_p4() {
    tmp_V_5_fu_5711_p4 = p_Val2_65_fu_5699_p1.read().range(62, 52);
}

void music::thread_tmp_V_6_fu_5721_p1() {
    tmp_V_6_fu_5721_p1 = p_Val2_65_fu_5699_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_fu_5077_p4() {
    tmp_V_fu_5077_p4 = p_Val2_s_fu_5065_p1.read().range(62, 52);
}

void music::thread_tmp_i_i_i1_fu_5268_p3() {
    tmp_i_i_i1_fu_5268_p3 = esl_cttz<64,64>(p_Result_52_fu_5260_p3.read());
}

void music::thread_trunc_ln120_fu_3475_p1() {
    trunc_ln120_fu_3475_p1 = input_assign_reg_1918.read().range(10-1, 0);
}

void music::thread_trunc_ln123_fu_3511_p1() {
    trunc_ln123_fu_3511_p1 = p_0_i_i_i_reg_1952.read().range(1-1, 0);
}

void music::thread_trunc_ln124_fu_3507_p1() {
    trunc_ln124_fu_3507_p1 = reversed_reg_1930.read().range(31-1, 0);
}

void music::thread_trunc_ln59_fu_4483_p1() {
    trunc_ln59_fu_4483_p1 = j22_0_i_reg_2337.read().range(6-1, 0);
}

void music::thread_trunc_ln601_fu_5126_p1() {
    trunc_ln601_fu_5126_p1 = addr_V_fu_5103_p3.read().range(7-1, 0);
}

void music::thread_trunc_ln62_fu_4516_p1() {
    trunc_ln62_fu_4516_p1 = j_11_fu_4504_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln65_fu_4547_p1() {
    trunc_ln65_fu_4547_p1 = q_0_i_reg_2355.read().range(6-1, 0);
}

void music::thread_trunc_ln662_1_fu_5553_p4() {
    trunc_ln662_1_fu_5553_p4 = r_V_41_fu_5547_p2.read().range(92, 45);
}

void music::thread_trunc_ln745_fu_5214_p1() {
    trunc_ln745_fu_5214_p1 = p_Val2_70_fu_5207_p3.read().range(1-1, 0);
}

void music::thread_trunc_ln76_1_fu_4656_p1() {
    trunc_ln76_1_fu_4656_p1 = j_10_fu_4629_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln76_fu_4641_p1() {
    trunc_ln76_fu_4641_p1 = j_10_fu_4629_p2.read().range(6-1, 0);
}

void music::thread_trunc_ln97_1_fu_4859_p1() {
    trunc_ln97_1_fu_4859_p1 = bitcast_ln97_1_fu_4845_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln97_fu_4841_p1() {
    trunc_ln97_fu_4841_p1 = bitcast_ln97_fu_4827_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln9_fu_5530_p4() {
    trunc_ln9_fu_5530_p4 = r_V_40_fu_5524_p2.read().range(107, 52);
}

void music::thread_trunc_ln_i_i_fu_5197_p4() {
    trunc_ln_i_i_fu_5197_p4 = grp_fu_5164_p2.read().range(169, 167);
}

void music::thread_ush_fu_5328_p3() {
    ush_fu_5328_p3 = (!isNeg_fu_5314_p3.read()[0].is_01())? sc_lv<12>(): ((isNeg_fu_5314_p3.read()[0].to_bool())? sub_ln1311_fu_5322_p2.read(): sext_ln1334_fu_5310_p1.read());
}

void music::thread_w_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        w_address0 =  (sc_lv<9>) (zext_ln395_fu_6269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        w_address0 = w_addr_1_reg_7978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        w_address0 =  (sc_lv<9>) (zext_ln389_reg_7930.read());
    } else {
        w_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) && 
          !(esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read())))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()))) {
        w_ce0 = ap_const_logic_1;
    } else {
        w_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        w_we0 = ap_const_logic_1;
    } else {
        w_we0 = ap_const_logic_0;
    }
}

void music::thread_x_1_fu_4924_p2() {
    x_1_fu_4924_p2 = (!x_0_reg_2475.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_2475.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_2_fu_5027_p2() {
    x_2_fu_5027_p2 = (!x27_0_reg_2497.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x27_0_reg_2497.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_fu_3869_p2() {
    x_fu_3869_p2 = (!x_0_i_reg_2049.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_i_reg_2049.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_xor_ln1067_fu_4344_p2() {
    xor_ln1067_fu_4344_p2 = (count_0_i_reg_2290.read() ^ ap_const_lv3_4);
}

void music::thread_xor_ln293_fu_3228_p2() {
    xor_ln293_fu_3228_p2 = (phi_ln293_1_reg_1792.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln300_fu_5847_p2() {
    xor_ln300_fu_5847_p2 = (and_ln300_2_fu_5843_p2.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln311_fu_5818_p2() {
    xor_ln311_fu_5818_p2 = (icmp_ln833_2_reg_7701.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln345_fu_5914_p2() {
    xor_ln345_fu_5914_p2 = (bitcast_ln345_fu_5910_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln444_1_fu_4705_p2() {
    xor_ln444_1_fu_4705_p2 = (bitcast_ln444_2_fu_4701_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln444_fu_4689_p2() {
    xor_ln444_fu_4689_p2 = (bitcast_ln444_fu_4685_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_1_fu_6042_p2() {
    xor_ln667_1_fu_6042_p2 = (bitcast_ln667_2_fu_6038_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_2_fu_6169_p2() {
    xor_ln667_2_fu_6169_p2 = (bitcast_ln667_4_fu_6165_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_fu_3972_p2() {
    xor_ln667_fu_3972_p2 = (bitcast_ln667_fu_3968_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_y_1_fu_5044_p2() {
    y_1_fu_5044_p2 = (!y28_0_reg_2520.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(y28_0_reg_2520.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_y_2_fu_4978_p2() {
    y_2_fu_4978_p2 = (!y_0_reg_2486.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_2486.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_y_fu_3897_p2() {
    y_fu_3897_p2 = (!y_0_i_reg_2060.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_i_reg_2060.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_zext_ln1027_10_fu_3348_p1() {
    zext_ln1027_10_fu_3348_p1 = esl_zext<11,9>(phi_ln296_1_reg_1873.read());
}

void music::thread_zext_ln1027_11_fu_3358_p1() {
    zext_ln1027_11_fu_3358_p1 = esl_zext<64,11>(add_ln1027_fu_3352_p2.read());
}

void music::thread_zext_ln1027_2_fu_3204_p1() {
    zext_ln1027_2_fu_3204_p1 = esl_zext<64,4>(tmp_42_fu_3196_p3.read());
}

void music::thread_zext_ln1027_3_fu_3242_p1() {
    zext_ln1027_3_fu_3242_p1 = esl_zext<64,3>(tmp_54_fu_3234_p3.read());
}

void music::thread_zext_ln1027_4_fu_3274_p1() {
    zext_ln1027_4_fu_3274_p1 = esl_zext<64,4>(tmp_56_fu_3266_p3.read());
}

void music::thread_zext_ln1027_5_fu_3312_p1() {
    zext_ln1027_5_fu_3312_p1 = esl_zext<64,11>(tmp_66_fu_3304_p3.read());
}

void music::thread_zext_ln1027_6_fu_4004_p1() {
    zext_ln1027_6_fu_4004_p1 = esl_zext<64,4>(tmp_67_fu_3996_p3.read());
}

void music::thread_zext_ln1027_7_fu_4042_p1() {
    zext_ln1027_7_fu_4042_p1 = esl_zext<64,4>(tmp_69_fu_4034_p3.read());
}

void music::thread_zext_ln1027_8_fu_4080_p1() {
    zext_ln1027_8_fu_4080_p1 = esl_zext<64,4>(tmp_70_fu_4072_p3.read());
}

void music::thread_zext_ln1027_9_fu_4118_p1() {
    zext_ln1027_9_fu_4118_p1 = esl_zext<64,4>(tmp_71_fu_4110_p3.read());
}

void music::thread_zext_ln1027_fu_3166_p1() {
    zext_ln1027_fu_3166_p1 = esl_zext<64,6>(tmp_26_fu_3158_p3.read());
}

void music::thread_zext_ln103_fu_4812_p1() {
    zext_ln103_fu_4812_p1 = esl_zext<64,2>(flag_reg_2444.read());
}

void music::thread_zext_ln1044_1_fu_4324_p1() {
    zext_ln1044_1_fu_4324_p1 = esl_zext<6,5>(tmp_44_fu_4316_p3.read());
}

void music::thread_zext_ln1044_2_fu_4334_p1() {
    zext_ln1044_2_fu_4334_p1 = esl_zext<64,6>(add_ln1044_fu_4328_p2.read());
}

void music::thread_zext_ln1044_fu_4312_p1() {
    zext_ln1044_fu_4312_p1 = esl_zext<6,3>(count_0_i_reg_2290.read());
}

void music::thread_zext_ln1067_fu_4354_p1() {
    zext_ln1067_fu_4354_p1 = esl_zext<64,4>(sext_ln1067_fu_4350_p1.read());
}

void music::thread_zext_ln110_fu_3887_p1() {
    zext_ln110_fu_3887_p1 = esl_zext<6,5>(tmp_36_fu_3879_p3.read());
}

void music::thread_zext_ln1146_1_fu_5643_p1() {
    zext_ln1146_1_fu_5643_p1 = esl_zext<49,38>(add_ln1146_1_fu_5637_p2.read());
}

void music::thread_zext_ln1146_fu_5627_p1() {
    zext_ln1146_fu_5627_p1 = esl_zext<38,29>(tmp_61_fu_5605_p4.read());
}

void music::thread_zext_ln114_6_fu_3951_p1() {
    zext_ln114_6_fu_3951_p1 = esl_zext<64,7>(add_ln114_5_fu_3946_p2.read());
}

void music::thread_zext_ln114_7_fu_3962_p1() {
    zext_ln114_7_fu_3962_p1 = esl_zext<64,7>(add_ln114_6_fu_3957_p2.read());
}

void music::thread_zext_ln114_fu_3942_p1() {
    zext_ln114_fu_3942_p1 = esl_zext<7,6>(tmp_38_fu_3934_p3.read());
}

void music::thread_zext_ln116_1_fu_3903_p1() {
    zext_ln116_1_fu_3903_p1 = esl_zext<7,3>(y_0_i_reg_2060.read());
}

void music::thread_zext_ln116_2_fu_3907_p1() {
    zext_ln116_2_fu_3907_p1 = esl_zext<6,3>(y_0_i_reg_2060.read());
}

void music::thread_zext_ln116_3_fu_3916_p1() {
    zext_ln116_3_fu_3916_p1 = esl_zext<64,6>(add_ln116_fu_3911_p2.read());
}

void music::thread_zext_ln116_fu_3875_p1() {
    zext_ln116_fu_3875_p1 = esl_zext<7,3>(x_0_i_reg_2049.read());
}

void music::thread_zext_ln120_fu_3479_p1() {
    zext_ln120_fu_3479_p1 = esl_zext<32,11>(input_assign_reg_1918.read());
}

void music::thread_zext_ln1253_fu_5280_p1() {
    zext_ln1253_fu_5280_p1 = esl_zext<124,6>(Mx_zeros_V_fu_5276_p1.read());
}

void music::thread_zext_ln125_fu_3533_p1() {
    zext_ln125_fu_3533_p1 = esl_zext<10,9>(input_assign_1_fu_3523_p4.read());
}

void music::thread_zext_ln1287_fu_5340_p1() {
    zext_ln1287_fu_5340_p1 = esl_zext<63,32>(sext_ln1311_fu_5336_p1.read());
}

void music::thread_zext_ln162_fu_3542_p1() {
    zext_ln162_fu_3542_p1 = esl_zext<64,11>(input_assign_reg_1918.read());
}

void music::thread_zext_ln163_fu_3548_p1() {
    zext_ln163_fu_3548_p1 = esl_zext<64,32>(reversed_reg_1930.read());
}

void music::thread_zext_ln225_fu_3554_p1() {
    zext_ln225_fu_3554_p1 = esl_zext<11,4>(stage_0_i_reg_1961.read());
}

void music::thread_zext_ln227_fu_3570_p1() {
    zext_ln227_fu_3570_p1 = esl_zext<32,11>(DFTpts_fu_3564_p2.read());
}

void music::thread_zext_ln23_fu_4156_p1() {
    zext_ln23_fu_4156_p1 = esl_zext<6,5>(tmp_43_fu_4148_p3.read());
}

void music::thread_zext_ln24_1_fu_4181_p1() {
    zext_ln24_1_fu_4181_p1 = esl_zext<64,6>(add_ln24_fu_4176_p2.read());
}

void music::thread_zext_ln24_fu_4172_p1() {
    zext_ln24_fu_4172_p1 = esl_zext<6,3>(j_0_i44_reg_2209.read());
}

void music::thread_zext_ln304_1_fu_3408_p1() {
    zext_ln304_1_fu_3408_p1 = esl_zext<17,3>(n_0_reg_1895.read());
}

void music::thread_zext_ln304_fu_3412_p1() {
    zext_ln304_fu_3412_p1 = esl_zext<14,11>(j_0_reg_1906.read());
}

void music::thread_zext_ln305_1_fu_3450_p1() {
    zext_ln305_1_fu_3450_p1 = esl_zext<31,17>(add_ln305_1_fu_3445_p2.read());
}

void music::thread_zext_ln305_2_fu_3469_p1() {
    zext_ln305_2_fu_3469_p1 = esl_zext<64,11>(j_0_reg_1906.read());
}

void music::thread_zext_ln305_3_fu_3459_p1() {
    zext_ln305_3_fu_3459_p1 = esl_zext<64,31>(add_ln305_2_reg_6433.read());
}

void music::thread_zext_ln305_fu_3441_p1() {
    zext_ln305_fu_3441_p1 = esl_zext<17,16>(tmp_35_fu_3433_p3.read());
}

void music::thread_zext_ln309_fu_3647_p1() {
    zext_ln309_fu_3647_p1 = esl_zext<14,11>(j24_0_reg_2005.read());
}

void music::thread_zext_ln310_1_fu_3682_p1() {
    zext_ln310_1_fu_3682_p1 = esl_zext<17,16>(tmp_39_fu_3674_p3.read());
}

void music::thread_zext_ln310_2_fu_3691_p1() {
    zext_ln310_2_fu_3691_p1 = esl_zext<31,17>(add_ln310_1_fu_3686_p2.read());
}

void music::thread_zext_ln310_3_fu_3700_p1() {
    zext_ln310_3_fu_3700_p1 = esl_zext<64,31>(add_ln310_2_reg_6626.read());
}

void music::thread_zext_ln310_fu_3663_p1() {
    zext_ln310_fu_3663_p1 = esl_zext<64,11>(j24_0_reg_2005.read());
}

void music::thread_zext_ln311_fu_3714_p1() {
    zext_ln311_fu_3714_p1 = esl_zext<64,31>(add_ln311_reg_6642.read());
}

void music::thread_zext_ln316_fu_3724_p1() {
    zext_ln316_fu_3724_p1 = esl_zext<14,11>(jj_0_reg_2016.read());
}

void music::thread_zext_ln317_fu_3740_p1() {
    zext_ln317_fu_3740_p1 = esl_zext<64,11>(jj_0_reg_2016.read());
}

void music::thread_zext_ln319_fu_3790_p1() {
    zext_ln319_fu_3790_p1 = esl_zext<17,16>(tmp_34_fu_3782_p3.read());
}

void music::thread_zext_ln321_1_fu_3806_p1() {
    zext_ln321_1_fu_3806_p1 = esl_zext<7,3>(n26_0_reg_2038.read());
}

void music::thread_zext_ln321_2_fu_3810_p1() {
    zext_ln321_2_fu_3810_p1 = esl_zext<17,3>(n26_0_reg_2038.read());
}

void music::thread_zext_ln321_3_fu_3819_p1() {
    zext_ln321_3_fu_3819_p1 = esl_zext<31,17>(add_ln321_1_fu_3814_p2.read());
}

void music::thread_zext_ln321_4_fu_3838_p1() {
    zext_ln321_4_fu_3838_p1 = esl_zext<64,31>(add_ln321_2_reg_6702.read());
}

void music::thread_zext_ln321_5_fu_3858_p1() {
    zext_ln321_5_fu_3858_p1 = esl_zext<64,7>(add_ln321_3_reg_6712.read());
}

void music::thread_zext_ln321_fu_3765_p1() {
    zext_ln321_fu_3765_p1 = esl_zext<7,6>(tmp_33_fu_3757_p3.read());
}

void music::thread_zext_ln322_fu_3848_p1() {
    zext_ln322_fu_3848_p1 = esl_zext<64,31>(add_ln322_reg_6707.read());
}

void music::thread_zext_ln32_fu_4219_p1() {
    zext_ln32_fu_4219_p1 = esl_zext<6,5>(tmp_45_fu_4211_p3.read());
}

void music::thread_zext_ln331_fu_4984_p1() {
    zext_ln331_fu_4984_p1 = esl_zext<64,3>(y_0_reg_2486.read());
}

void music::thread_zext_ln332_1_fu_4950_p1() {
    zext_ln332_1_fu_4950_p1 = esl_zext<64,4>(tmp_51_fu_4942_p3.read());
}

void music::thread_zext_ln332_2_fu_4989_p1() {
    zext_ln332_2_fu_4989_p1 = esl_zext<6,3>(y_0_reg_2486.read());
}

void music::thread_zext_ln332_3_fu_4998_p1() {
    zext_ln332_3_fu_4998_p1 = esl_zext<64,6>(add_ln332_reg_7512.read());
}

void music::thread_zext_ln332_fu_4938_p1() {
    zext_ln332_fu_4938_p1 = esl_zext<6,5>(tmp_50_fu_4930_p3.read());
}

void music::thread_zext_ln340_fu_5033_p1() {
    zext_ln340_fu_5033_p1 = esl_zext<64,3>(x27_0_reg_2497.read());
}

void music::thread_zext_ln343_fu_5050_p1() {
    zext_ln343_fu_5050_p1 = esl_zext<64,9>(y28_0_reg_2520.read());
}

void music::thread_zext_ln344_1_fu_5905_p1() {
    zext_ln344_1_fu_5905_p1 = esl_zext<64,11>(add_ln344_reg_7571.read());
}

void music::thread_zext_ln344_fu_5055_p1() {
    zext_ln344_fu_5055_p1 = esl_zext<11,9>(y28_0_reg_2520.read());
}

void music::thread_zext_ln350_fu_5957_p1() {
    zext_ln350_fu_5957_p1 = esl_zext<6,5>(tmp_59_fu_5949_p3.read());
}

void music::thread_zext_ln355_1_fu_6012_p1() {
    zext_ln355_1_fu_6012_p1 = esl_zext<5,2>(k_0_reg_2579.read());
}

void music::thread_zext_ln355_2_fu_6021_p1() {
    zext_ln355_2_fu_6021_p1 = esl_zext<64,5>(add_ln355_fu_6016_p2.read());
}

void music::thread_zext_ln355_3_fu_6032_p1() {
    zext_ln355_3_fu_6032_p1 = esl_zext<64,5>(add_ln355_1_fu_6027_p2.read());
}

void music::thread_zext_ln355_fu_5973_p1() {
    zext_ln355_fu_5973_p1 = esl_zext<6,3>(j29_0_reg_2542.read());
}

void music::thread_zext_ln357_1_fu_5985_p1() {
    zext_ln357_1_fu_5985_p1 = esl_zext<5,4>(tmp_63_fu_5977_p3.read());
}

void music::thread_zext_ln357_2_fu_5994_p1() {
    zext_ln357_2_fu_5994_p1 = esl_zext<64,6>(add_ln357_fu_5989_p2.read());
}

void music::thread_zext_ln357_fu_5945_p1() {
    zext_ln357_fu_5945_p1 = esl_zext<5,4>(tmp_58_fu_5937_p3.read());
}

void music::thread_zext_ln361_fu_6078_p1() {
    zext_ln361_fu_6078_p1 = esl_zext<12,11>(tmp_62_fu_6070_p3.read());
}

void music::thread_zext_ln366_1_fu_6142_p1() {
    zext_ln366_1_fu_6142_p1 = esl_zext<64,6>(add_ln366_fu_6137_p2.read());
}

void music::thread_zext_ln366_2_fu_6159_p1() {
    zext_ln366_2_fu_6159_p1 = esl_zext<64,11>(add_ln366_1_fu_6154_p2.read());
}

void music::thread_zext_ln366_fu_6133_p1() {
    zext_ln366_fu_6133_p1 = esl_zext<6,5>(tmp_65_fu_6125_p3.read());
}

void music::thread_zext_ln368_1_fu_6094_p1() {
    zext_ln368_1_fu_6094_p1 = esl_zext<6,3>(j31_0_reg_2601.read());
}

void music::thread_zext_ln368_2_fu_6098_p1() {
    zext_ln368_2_fu_6098_p1 = esl_zext<12,3>(j31_0_reg_2601.read());
}

void music::thread_zext_ln368_3_fu_6107_p1() {
    zext_ln368_3_fu_6107_p1 = esl_zext<64,12>(add_ln368_fu_6102_p2.read());
}

void music::thread_zext_ln368_fu_6066_p1() {
    zext_ln368_fu_6066_p1 = esl_zext<11,9>(i30_0_reg_2590.read());
}

void music::thread_zext_ln37_1_fu_4274_p1() {
    zext_ln37_1_fu_4274_p1 = esl_zext<6,5>(tmp_49_fu_4266_p3.read());
}

void music::thread_zext_ln37_2_fu_4283_p1() {
    zext_ln37_2_fu_4283_p1 = esl_zext<64,6>(add_ln37_fu_4278_p2.read());
}

void music::thread_zext_ln37_3_fu_4294_p1() {
    zext_ln37_3_fu_4294_p1 = esl_zext<64,6>(add_ln37_1_fu_4289_p2.read());
}

void music::thread_zext_ln37_fu_4262_p1() {
    zext_ln37_fu_4262_p1 = esl_zext<6,3>(k_0_i_reg_2279.read());
}

void music::thread_zext_ln387_fu_6209_p1() {
    zext_ln387_fu_6209_p1 = esl_zext<12,11>(tmp_64_fu_6201_p3.read());
}

void music::thread_zext_ln389_1_fu_6197_p1() {
    zext_ln389_1_fu_6197_p1 = esl_zext<11,9>(i33_0_reg_2660.read());
}

void music::thread_zext_ln389_2_fu_6225_p1() {
    zext_ln389_2_fu_6225_p1 = esl_zext<12,3>(k34_0_reg_2683.read());
}

void music::thread_zext_ln389_3_fu_6234_p1() {
    zext_ln389_3_fu_6234_p1 = esl_zext<64,12>(add_ln389_fu_6229_p2.read());
}

void music::thread_zext_ln389_4_fu_6251_p1() {
    zext_ln389_4_fu_6251_p1 = esl_zext<64,11>(add_ln389_1_fu_6246_p2.read());
}

void music::thread_zext_ln389_fu_6193_p1() {
    zext_ln389_fu_6193_p1 = esl_zext<64,9>(i33_0_reg_2660.read());
}

void music::thread_zext_ln395_fu_6269_p1() {
    zext_ln395_fu_6269_p1 = esl_zext<64,9>(p_016_rec_reg_2705.read());
}

void music::thread_zext_ln39_1_fu_4244_p1() {
    zext_ln39_1_fu_4244_p1 = esl_zext<64,6>(add_ln39_fu_4239_p2.read());
}

void music::thread_zext_ln39_fu_4235_p1() {
    zext_ln39_fu_4235_p1 = esl_zext<6,3>(j18_0_i_reg_2242.read());
}

void music::thread_zext_ln44_fu_4339_p1() {
    zext_ln44_fu_4339_p1 = esl_zext<64,3>(count_0_i_reg_2290.read());
}

void music::thread_zext_ln498_fu_5444_p1() {
    zext_ln498_fu_5444_p1 = esl_zext<64,8>(p_Result_53_fu_5436_p3.read());
}

void music::thread_zext_ln49_1_fu_4384_p1() {
    zext_ln49_1_fu_4384_p1 = esl_zext<6,5>(tmp_46_fu_4376_p3.read());
}

void music::thread_zext_ln49_2_fu_4394_p1() {
    zext_ln49_2_fu_4394_p1 = esl_zext<64,6>(add_ln49_fu_4388_p2.read());
}

void music::thread_zext_ln49_fu_4372_p1() {
    zext_ln49_fu_4372_p1 = esl_zext<6,3>(i19_0_i_reg_2302.read());
}

void music::thread_zext_ln51_1_fu_4429_p1() {
    zext_ln51_1_fu_4429_p1 = esl_zext<64,6>(add_ln51_fu_4424_p2.read());
}

void music::thread_zext_ln51_fu_4420_p1() {
    zext_ln51_fu_4420_p1 = esl_zext<6,3>(j20_0_i_reg_2314.read());
}

void music::thread_zext_ln55_fu_4435_p1() {
    zext_ln55_fu_4435_p1 = esl_zext<32,2>(j_14_reg_2325.read());
}

void music::thread_zext_ln56_1_fu_4459_p1() {
    zext_ln56_1_fu_4459_p1 = esl_zext<64,4>(tmp_48_fu_4451_p3.read());
}

void music::thread_zext_ln56_fu_4473_p1() {
    zext_ln56_fu_4473_p1 = esl_zext<6,4>(tmp_47_fu_4465_p3.read());
}

void music::thread_zext_ln635_fu_5121_p1() {
    zext_ln635_fu_5121_p1 = esl_zext<64,4>(p_Result_i_i_i_fu_5111_p4.read());
}

void music::thread_zext_ln655_fu_5300_p1() {
    zext_ln655_fu_5300_p1 = esl_zext<11,6>(Mx_zeros_V_fu_5276_p1.read());
}

void music::thread_zext_ln662_fu_5587_p1() {
    zext_ln662_fu_5587_p1 = esl_zext<38,37>(tmp_60_fu_5577_p4.read());
}

void music::thread_zext_ln744_fu_5137_p1() {
    zext_ln744_fu_5137_p1 = esl_zext<256,7>(trunc_ln601_reg_7611.read());
}

void music::thread_zext_ln76_fu_4590_p1() {
    zext_ln76_fu_4590_p1 = esl_zext<6,3>(m_0_i_reg_2376.read());
}

void music::thread_zext_ln78_fu_4612_p1() {
    zext_ln78_fu_4612_p1 = esl_zext<64,6>(add_ln78_fu_4606_p2.read());
}

void music::thread_zext_ln80_fu_4623_p1() {
    zext_ln80_fu_4623_p1 = esl_zext<64,6>(add_ln80_fu_4618_p2.read());
}

void music::thread_zext_ln85_1_fu_4746_p1() {
    zext_ln85_1_fu_4746_p1 = esl_zext<64,6>(add_ln85_fu_4741_p2.read());
}

void music::thread_zext_ln85_fu_4737_p1() {
    zext_ln85_fu_4737_p1 = esl_zext<6,5>(tmp_55_fu_4729_p3.read());
}

void music::thread_zext_ln92_fu_4764_p1() {
    zext_ln92_fu_4764_p1 = esl_zext<64,3>(i_0_i49_reg_2432.read());
}

void music::thread_zext_ln95_fu_4769_p1() {
    zext_ln95_fu_4769_p1 = esl_zext<32,2>(flag_reg_2444.read());
}

void music::thread_zext_ln97_1_fu_4822_p1() {
    zext_ln97_1_fu_4822_p1 = esl_zext<64,3>(sort_index_q1.read());
}

void music::thread_zext_ln97_fu_4817_p1() {
    zext_ln97_fu_4817_p1 = esl_zext<64,3>(sort_index_q0.read());
}

}

