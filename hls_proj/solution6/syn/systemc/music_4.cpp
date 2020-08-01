#include "music.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void music::thread_AUU_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln337_3_fu_5874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        AUU_M_imag_address0 = AUU_M_imag_addr_2_reg_7598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3164_p1.read());
    } else {
        AUU_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()))) {
        AUU_M_imag_ce0 = ap_const_logic_1;
    } else {
        AUU_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        AUU_M_imag_d0 = complex_M_imag_read_3_reg_2478.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_imag_d0 = ap_const_lv32_0;
    } else {
        AUU_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln319_fu_5754_p2.read())))) {
        AUU_M_imag_we0 = ap_const_logic_1;
    } else {
        AUU_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln337_3_fu_5874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        AUU_M_real_address0 = AUU_M_real_addr_2_reg_7593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_address0 =  (sc_lv<11>) (zext_ln1027_5_fu_3164_p1.read());
    } else {
        AUU_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_AUU_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()))) {
        AUU_M_real_ce0 = ap_const_logic_1;
    } else {
        AUU_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_AUU_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        AUU_M_real_d0 = complex_M_real_read_3_reg_2491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        AUU_M_real_d0 = ap_const_lv32_0;
    } else {
        AUU_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_AUU_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln319_fu_5754_p2.read())))) {
        AUU_M_real_we0 = ap_const_logic_1;
    } else {
        AUU_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln102_2_fu_3642_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln278_5_fu_3538_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) (zext_ln1027_fu_3018_p1.read());
    } else {
        Autocorr_Buffer_M_i_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_address1() {
    Autocorr_Buffer_M_i_address1 =  (sc_lv<6>) (zext_ln102_1_fu_3631_p1.read());
}

void music::thread_Autocorr_Buffer_M_i_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()))) {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_i_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        Autocorr_Buffer_M_i_d0 = data_addr_2_read_reg_6235.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_i_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_i_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_i_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()))) {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_i_we0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln102_2_fu_3642_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln278_5_fu_3538_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) (zext_ln1027_fu_3018_p1.read());
    } else {
        Autocorr_Buffer_M_r_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_address1() {
    Autocorr_Buffer_M_r_address1 =  (sc_lv<6>) (zext_ln102_1_fu_3631_p1.read());
}

void music::thread_Autocorr_Buffer_M_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()))) {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce0 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_ce1 = ap_const_logic_0;
    }
}

void music::thread_Autocorr_Buffer_M_r_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        Autocorr_Buffer_M_r_d0 = data_addr_1_read_reg_6230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        Autocorr_Buffer_M_r_d0 = ap_const_lv32_0;
    } else {
        Autocorr_Buffer_M_r_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Autocorr_Buffer_M_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()))) {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_1;
    } else {
        Autocorr_Buffer_M_r_we0 = ap_const_logic_0;
    }
}

void music::thread_B_V_fu_5046_p1() {
    B_V_fu_5046_p1 = r_V_36_fu_5029_p3.read().range(56-1, 0);
}

void music::thread_Ex_V_fu_4971_p2() {
    Ex_V_fu_4971_p2 = (!select_ln482_fu_4943_p3.read().is_01() || !zext_ln655_fu_4968_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(select_ln482_fu_4943_p3.read()) - sc_biguint<11>(zext_ln655_fu_4968_p1.read()));
}

void music::thread_FFT_Buffer_im_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_im_address0 =  (sc_lv<10>) (zext_ln262_2_fu_3321_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_im_address0 = grp_fft_streaming_fu_2582_X_I_address0.read();
    } else {
        FFT_Buffer_im_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_im_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_im_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_im_ce0 = grp_fft_streaming_fu_2582_X_I_ce0.read();
    } else {
        FFT_Buffer_im_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_im_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_im_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_im_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_re_address0 =  (sc_lv<10>) (zext_ln262_2_fu_3321_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_re_address0 = grp_fft_streaming_fu_2582_X_R_address0.read();
    } else {
        FFT_Buffer_re_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_Buffer_re_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_re_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_Buffer_re_ce0 = grp_fft_streaming_fu_2582_X_R_ce0.read();
    } else {
        FFT_Buffer_re_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_Buffer_re_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        FFT_Buffer_re_we0 = ap_const_logic_1;
    } else {
        FFT_Buffer_re_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_im_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_out_im_address0 =  (sc_lv<10>) (zext_ln267_fu_3343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_im_address0 = grp_fft_streaming_fu_2582_OUT_I_address0.read();
    } else {
        FFT_out_im_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_out_im_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_out_im_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_im_ce0 = grp_fft_streaming_fu_2582_OUT_I_ce0.read();
    } else {
        FFT_out_im_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_im_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_im_ce1 = grp_fft_streaming_fu_2582_OUT_I_ce1.read();
    } else {
        FFT_out_im_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_im_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_im_we0 = grp_fft_streaming_fu_2582_OUT_I_we0.read();
    } else {
        FFT_out_im_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_im_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_im_we1 = grp_fft_streaming_fu_2582_OUT_I_we1.read();
    } else {
        FFT_out_im_we1 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_out_re_address0 =  (sc_lv<10>) (zext_ln267_fu_3343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_re_address0 = grp_fft_streaming_fu_2582_OUT_R_address0.read();
    } else {
        FFT_out_re_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void music::thread_FFT_out_re_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        FFT_out_re_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_re_ce0 = grp_fft_streaming_fu_2582_OUT_R_ce0.read();
    } else {
        FFT_out_re_ce0 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_re_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_re_ce1 = grp_fft_streaming_fu_2582_OUT_R_ce1.read();
    } else {
        FFT_out_re_ce1 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_re_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_re_we0 = grp_fft_streaming_fu_2582_OUT_R_we0.read();
    } else {
        FFT_out_re_we0 = ap_const_logic_0;
    }
}

void music::thread_FFT_out_re_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        FFT_out_re_we1 = grp_fft_streaming_fu_2582_OUT_R_we1.read();
    } else {
        FFT_out_re_we1 = ap_const_logic_0;
    }
}

void music::thread_Mx_bits_V_2_fu_4879_p2() {
    Mx_bits_V_2_fu_4879_p2 = (!ap_const_lv124_0.is_01() || !p_Val2_69_reg_7177.read().is_01())? sc_lv<124>(): (sc_biguint<124>(ap_const_lv124_0) - sc_biguint<124>(p_Val2_69_reg_7177.read()));
}

void music::thread_Mx_zeros_V_fu_4934_p1() {
    Mx_zeros_V_fu_4934_p1 = tmp_i_i_i1_fu_4926_p3.read().range(6-1, 0);
}

void music::thread_P_sm_TDATA() {
    P_sm_TDATA = P_sm_data_1_data_out.read();
}

void music::thread_P_sm_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state466.read()))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read()) && 
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_2_fu_3962_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        Q_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_3683_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_imag_address0 = grp_qrf_top_fu_2626_Q_M_imag_address0.read();
    } else {
        Q_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()))) {
        Q_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_imag_ce0 = grp_qrf_top_fu_2626_Q_M_imag_ce0.read();
    } else {
        Q_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        Q_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_imag_d0 = grp_qrf_top_fu_2626_Q_M_imag_d0.read();
    } else {
        Q_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        Q_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_imag_we0 = grp_qrf_top_fu_2626_Q_M_imag_we0.read();
    } else {
        Q_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_2_fu_3962_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        Q_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_6_fu_3683_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_real_address0 = grp_qrf_top_fu_2626_Q_M_real_address0.read();
    } else {
        Q_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Q_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()))) {
        Q_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_real_ce0 = grp_qrf_top_fu_2626_Q_M_real_ce0.read();
    } else {
        Q_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Q_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        Q_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_real_d0 = grp_qrf_top_fu_2626_Q_M_real_d0.read();
    } else {
        Q_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Q_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        Q_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        Q_temp_M_real_we0 = grp_qrf_top_fu_2626_Q_M_real_we0.read();
    } else {
        Q_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln34_3_fu_3973_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        R_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_3721_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_imag_address0 = grp_qrf_top_fu_2626_R_M_imag_address0.read();
    } else {
        R_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()))) {
        R_temp_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_imag_ce0 = grp_qrf_top_fu_2626_R_M_imag_ce0.read();
    } else {
        R_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        R_temp_M_imag_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_imag_d0 = grp_qrf_top_fu_2626_R_M_imag_d0.read();
    } else {
        R_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_imag_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        R_temp_M_imag_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_imag_we0 = grp_qrf_top_fu_2626_R_M_imag_we0.read();
    } else {
        R_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln34_3_fu_3973_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        R_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_7_fu_3721_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_real_address0 = grp_qrf_top_fu_2626_R_M_real_address0.read();
    } else {
        R_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_R_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()))) {
        R_temp_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_real_ce0 = grp_qrf_top_fu_2626_R_M_real_ce0.read();
    } else {
        R_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_R_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        R_temp_M_real_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_real_d0 = grp_qrf_top_fu_2626_R_M_real_d0.read();
    } else {
        R_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_R_temp_M_real_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        R_temp_M_real_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        R_temp_M_real_we0 = grp_qrf_top_fu_2626_R_M_real_we0.read();
    } else {
        R_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4314_p2.read()))) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_5_reg_6782.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4314_p2.read()))) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln68_fu_4329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_8_reg_6759.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_fu_4252_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln57_fu_4207_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_4_reg_6693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (sext_ln54_fu_4171_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4138_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_reg_6638.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        Rx_temp_M_imag_address0 = Rx_temp_M_imag_addr_2_reg_6611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_3759_p1.read());
    } else {
        Rx_temp_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4314_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4314_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()))) {
        Rx_temp_M_imag_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        Rx_temp_M_imag_d0 = reg_2857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        Rx_temp_M_imag_d0 = grp_fu_2773_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        Rx_temp_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        Rx_temp_M_imag_d0 = reg_2873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        Rx_temp_M_imag_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_6634.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4081_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4093_p2.read())))) {
        Rx_temp_M_imag_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4314_p2.read()))) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_5_reg_6777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4314_p2.read()))) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln68_fu_4329_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_8_reg_6754.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_fu_4252_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln59_1_fu_4240_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln57_fu_4207_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_4_reg_6688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (sext_ln54_fu_4171_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln52_1_fu_4138_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_reg_6638.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        Rx_temp_M_real_address0 = Rx_temp_M_real_addr_2_reg_6606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        Rx_temp_M_real_address0 =  (sc_lv<4>) (zext_ln1027_8_fu_3759_p1.read());
    } else {
        Rx_temp_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_Rx_temp_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_4314_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_4314_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()))) {
        Rx_temp_M_real_ce0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Rx_temp_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        Rx_temp_M_real_d0 = grp_fu_2767_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        Rx_temp_M_real_d0 = temp_mat_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()))) {
        Rx_temp_M_real_d0 = reg_2847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        Rx_temp_M_real_d0 = ap_const_lv32_0;
    } else {
        Rx_temp_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Rx_temp_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_reg_6634.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_4081_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln44_fu_4093_p2.read())))) {
        Rx_temp_M_real_we0 = ap_const_logic_1;
    } else {
        Rx_temp_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_fu_4678_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_fu_4684_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_4678_p2.read())))) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln289_3_fu_4673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read())) {
        U_M_imag_address0 = U_M_imag_addr_5_reg_6898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln76_1_fu_4425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read())) {
        U_M_imag_address0 = U_M_imag_addr_3_reg_6792.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4352_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        U_M_imag_address0 = U_M_imag_addr_2_reg_6583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6433.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3056_p1.read());
    } else {
        U_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_fu_4678_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_fu_4684_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_4678_p2.read())))) {
        U_M_imag_ce0 = ap_const_logic_1;
    } else {
        U_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_imag_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()))) {
        U_M_imag_d0 = grp_fu_2773_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()))) {
        U_M_imag_d0 = ap_const_lv32_0;
    } else {
        U_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4118_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()))) {
        U_M_imag_we0 = ap_const_logic_1;
    } else {
        U_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_fu_4678_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_fu_4684_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_4678_p2.read())))) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln289_3_fu_4673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read())) {
        U_M_real_address0 = U_M_real_addr_5_reg_6893.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln76_1_fu_4425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read())) {
        U_M_real_address0 = U_M_real_addr_3_reg_6787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        U_M_real_address0 =  (sc_lv<4>) (sext_ln68_1_fu_4352_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        U_M_real_address0 = U_M_real_addr_2_reg_6578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6433.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        U_M_real_address0 =  (sc_lv<4>) (zext_ln1027_2_fu_3056_p1.read());
    } else {
        U_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_U_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_fu_4678_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_fu_4684_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_4678_p2.read())))) {
        U_M_real_ce0 = ap_const_logic_1;
    } else {
        U_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_U_M_real_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()))) {
        U_M_real_d0 = grp_fu_2767_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        U_M_real_d0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()))) {
        U_M_real_d0 = ap_const_lv32_0;
    } else {
        U_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_U_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_4118_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()))) {
        U_M_real_we0 = ap_const_logic_1;
    } else {
        U_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln310_2_fu_5674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln310_3_fu_5668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_1_reg_7029.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read()))) {
        Un_M_imag_address0 = Un_M_imag_addr_2_reg_7034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3094_p1.read());
    } else {
        Un_M_imag_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read())))) {
        Un_M_imag_ce0 = ap_const_logic_1;
    } else {
        Un_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_imag_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read())))) {
        Un_M_imag_d0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_imag_d0 = ap_const_lv32_0;
    } else {
        Un_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read())))) {
        Un_M_imag_we0 = ap_const_logic_1;
    } else {
        Un_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln310_2_fu_5674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln310_3_fu_5668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read()))) {
        Un_M_real_address0 = Un_M_real_addr_1_reg_7019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read()))) {
        Un_M_real_address0 = Un_M_real_addr_2_reg_7024.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_address0 =  (sc_lv<3>) (zext_ln1027_3_fu_3094_p1.read());
    } else {
        Un_M_real_address0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_Un_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read())))) {
        Un_M_real_ce0 = ap_const_logic_1;
    } else {
        Un_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_Un_M_real_d0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read())))) {
        Un_M_real_d0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        Un_M_real_d0 = ap_const_lv32_0;
    } else {
        Un_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_Un_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_7067.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln290_reg_7071.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_7067.read())))) {
        Un_M_real_we0 = ap_const_logic_1;
    } else {
        Un_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln337_4_fu_5891_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln320_2_fu_5794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln300_1_fu_5547_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_imag_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3210_p1.read());
    } else {
        a_theta_M_imag_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read()) && 
          esl_seteq<1,1,1>(ap_block_state387_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read())) {
        a_theta_M_imag_d0 = bitcast_ln301_1_fu_5562_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_imag_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read()) && 
          esl_seteq<1,1,1>(ap_block_state387_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_imag_we0 = ap_const_logic_1;
    } else {
        a_theta_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln337_4_fu_5891_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln320_2_fu_5794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln300_1_fu_5547_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_real_address0 =  (sc_lv<11>) (zext_ln1027_11_fu_3210_p1.read());
    } else {
        a_theta_M_real_address0 = "XXXXXXXXXXX";
    }
}

void music::thread_a_theta_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read()) && 
          esl_seteq<1,1,1>(ap_block_state387_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_ce0 = ap_const_logic_1;
    } else {
        a_theta_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_a_theta_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read())) {
        a_theta_M_real_d0 = grp_sin_or_cos_float_s_fu_2636_ap_return.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        a_theta_M_real_d0 = ap_const_lv32_0;
    } else {
        a_theta_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_a_theta_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state387.read()) && 
          esl_seteq<1,1,1>(ap_block_state387_on_subcall_done.read(), ap_const_boolean_0)))) {
        a_theta_M_real_we0 = ap_const_logic_1;
    } else {
        a_theta_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_add_ln1027_fu_3204_p2() {
    add_ln1027_fu_3204_p2 = (!phi_mul_reg_1814.read().is_01() || !zext_ln1027_10_fu_3200_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1814.read()) + sc_biguint<11>(zext_ln1027_10_fu_3200_p1.read()));
}

void music::thread_add_ln102_1_fu_3637_p2() {
    add_ln102_1_fu_3637_p2 = (!zext_ln104_1_reg_6266.read().is_01() || !zext_ln102_fu_3622_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln104_1_reg_6266.read()) + sc_biguint<7>(zext_ln102_fu_3622_p1.read()));
}

void music::thread_add_ln102_fu_3626_p2() {
    add_ln102_fu_3626_p2 = (!zext_ln104_reg_6248.read().is_01() || !zext_ln102_fu_3622_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln104_reg_6248.read()) + sc_biguint<7>(zext_ln102_fu_3622_p1.read()));
}

void music::thread_add_ln1044_fu_4007_p2() {
    add_ln1044_fu_4007_p2 = (!zext_ln1044_fu_3991_p1.read().is_01() || !zext_ln1044_1_fu_4003_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_fu_3991_p1.read()) + sc_biguint<6>(zext_ln1044_1_fu_4003_p1.read()));
}

void music::thread_add_ln104_fu_3591_p2() {
    add_ln104_fu_3591_p2 = (!zext_ln99_reg_6253.read().is_01() || !zext_ln104_2_fu_3587_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln99_reg_6253.read()) + sc_biguint<6>(zext_ln104_2_fu_3587_p1.read()));
}

void music::thread_add_ln1146_1_fu_5253_p2() {
    add_ln1146_1_fu_5253_p2 = (!zext_ln662_fu_5244_p1.read().is_01() || !zext_ln1146_fu_5250_p1.read().is_01())? sc_lv<38>(): (sc_biguint<38>(zext_ln662_fu_5244_p1.read()) + sc_biguint<38>(zext_ln1146_fu_5250_p1.read()));
}

void music::thread_add_ln1146_2_fu_5263_p2() {
    add_ln1146_2_fu_5263_p2 = (!zext_ln1146_1_fu_5259_p1.read().is_01() || !sext_ln657_fu_5247_p1.read().is_01())? sc_lv<49>(): (sc_biguint<49>(zext_ln1146_1_fu_5259_p1.read()) + sc_bigint<49>(sext_ln657_fu_5247_p1.read()));
}

void music::thread_add_ln1146_fu_5283_p2() {
    add_ln1146_fu_5283_p2 = (!lhs_V_2_fu_5276_p1.read().is_01() || !rhs_V_2_fu_5280_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(lhs_V_2_fu_5276_p1.read()) + sc_bigint<64>(rhs_V_2_fu_5280_p1.read()));
}

void music::thread_add_ln114_1_fu_4772_p2() {
    add_ln114_1_fu_4772_p2 = (!ap_const_lv11_44D.is_01() || !tmp_V_fu_4752_p4.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_44D) + sc_biguint<11>(tmp_V_fu_4752_p4.read()));
}

void music::thread_add_ln114_fu_4938_p2() {
    add_ln114_fu_4938_p2 = (!ap_const_lv11_403.is_01() || !tmp_V_reg_7127.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_403) + sc_biguint<11>(tmp_V_reg_7127.read()));
}

void music::thread_add_ln11_1_fu_3669_p2() {
    add_ln11_1_fu_3669_p2 = (!phi_ln11_1_reg_1984.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_1_reg_1984.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln11_fu_3663_p2() {
    add_ln11_fu_3663_p2 = (!phi_ln11_reg_1972.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln11_reg_1972.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_1_fu_3707_p2() {
    add_ln12_1_fu_3707_p2 = (!phi_ln12_1_reg_2007.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_1_reg_2007.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln12_fu_3701_p2() {
    add_ln12_fu_3701_p2 = (!phi_ln12_reg_1995.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln12_reg_1995.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_1_fu_3745_p2() {
    add_ln13_1_fu_3745_p2 = (!phi_ln13_1_reg_2030.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_1_reg_2030.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln13_fu_3739_p2() {
    add_ln13_fu_3739_p2 = (!phi_ln13_reg_2018.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln13_reg_2018.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_1_fu_3783_p2() {
    add_ln14_1_fu_3783_p2 = (!phi_ln14_1_reg_2053.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_1_reg_2053.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln14_fu_3777_p2() {
    add_ln14_fu_3777_p2 = (!phi_ln14_reg_2041.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln14_reg_2041.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln22_fu_3855_p2() {
    add_ln22_fu_3855_p2 = (!zext_ln21_reg_6420.read().is_01() || !zext_ln22_fu_3851_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln21_reg_6420.read()) + sc_biguint<6>(zext_ln22_fu_3851_p1.read()));
}

void music::thread_add_ln248_1_fu_3004_p2() {
    add_ln248_1_fu_3004_p2 = (!phi_ln248_1_reg_1699.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln248_1_reg_1699.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln248_fu_2998_p2() {
    add_ln248_fu_2998_p2 = (!phi_ln248_reg_1687.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln248_reg_1687.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_add_ln249_1_fu_3042_p2() {
    add_ln249_1_fu_3042_p2 = (!phi_ln249_1_reg_1722.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln249_1_reg_1722.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln249_fu_3036_p2() {
    add_ln249_fu_3036_p2 = (!phi_ln249_reg_1710.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln249_reg_1710.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln250_fu_3074_p2() {
    add_ln250_fu_3074_p2 = (!phi_ln250_reg_1733.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln250_reg_1733.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln251_1_fu_3112_p2() {
    add_ln251_1_fu_3112_p2 = (!phi_ln251_1_reg_1768.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln251_1_reg_1768.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln251_fu_3106_p2() {
    add_ln251_fu_3106_p2 = (!phi_ln251_reg_1756.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln251_reg_1756.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln252_1_fu_3150_p2() {
    add_ln252_1_fu_3150_p2 = (!phi_ln252_1_reg_1791.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln252_1_reg_1791.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln252_fu_3144_p2() {
    add_ln252_fu_3144_p2 = (!phi_ln252_reg_1779.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln252_reg_1779.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln253_1_fu_3194_p2() {
    add_ln253_1_fu_3194_p2 = (!phi_ln253_1_reg_1826.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_ln253_1_reg_1826.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_add_ln253_2_fu_3182_p2() {
    add_ln253_2_fu_3182_p2 = (!phi_mul_reg_1814.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul_reg_1814.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln253_fu_3188_p2() {
    add_ln253_fu_3188_p2 = (!phi_ln253_reg_1802.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(phi_ln253_reg_1802.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_add_ln262_1_fu_3297_p2() {
    add_ln262_1_fu_3297_p2 = (!zext_ln261_1_reg_6059.read().is_01() || !zext_ln262_fu_3293_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln261_1_reg_6059.read()) + sc_biguint<17>(zext_ln262_fu_3293_p1.read()));
}

void music::thread_add_ln262_2_fu_3306_p2() {
    add_ln262_2_fu_3306_p2 = (!zext_ln262_1_fu_3302_p1.read().is_01() || !p_cast_reg_5932.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln262_1_fu_3302_p1.read()) + sc_biguint<31>(p_cast_reg_5932.read()));
}

void music::thread_add_ln262_fu_3280_p2() {
    add_ln262_fu_3280_p2 = (!shl_ln_reg_6045.read().is_01() || !zext_ln261_fu_3264_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6045.read()) + sc_biguint<14>(zext_ln261_fu_3264_p1.read()));
}

void music::thread_add_ln267_1_fu_3366_p2() {
    add_ln267_1_fu_3366_p2 = (!zext_ln261_1_reg_6059.read().is_01() || !zext_ln267_1_fu_3362_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln261_1_reg_6059.read()) + sc_biguint<17>(zext_ln267_1_fu_3362_p1.read()));
}

void music::thread_add_ln267_2_fu_3375_p2() {
    add_ln267_2_fu_3375_p2 = (!zext_ln267_2_fu_3371_p1.read().is_01() || !p_cast_reg_5932.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln267_2_fu_3371_p1.read()) + sc_biguint<31>(p_cast_reg_5932.read()));
}

void music::thread_add_ln267_fu_3349_p2() {
    add_ln267_fu_3349_p2 = (!shl_ln_reg_6045.read().is_01() || !zext_ln266_fu_3327_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln_reg_6045.read()) + sc_biguint<14>(zext_ln266_fu_3327_p1.read()));
}

void music::thread_add_ln268_fu_3390_p2() {
    add_ln268_fu_3390_p2 = (!zext_ln267_2_reg_6102.read().is_01() || !p_cast18_reg_5926.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln267_2_reg_6102.read()) + sc_biguint<31>(p_cast18_reg_5926.read()));
}

void music::thread_add_ln278_1_fu_3494_p2() {
    add_ln278_1_fu_3494_p2 = (!zext_ln276_reg_6190.read().is_01() || !zext_ln278_2_fu_3490_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(zext_ln276_reg_6190.read()) + sc_biguint<17>(zext_ln278_2_fu_3490_p1.read()));
}

void music::thread_add_ln278_2_fu_3503_p2() {
    add_ln278_2_fu_3503_p2 = (!zext_ln278_3_fu_3499_p1.read().is_01() || !p_cast_reg_5932.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln278_3_fu_3499_p1.read()) + sc_biguint<31>(p_cast_reg_5932.read()));
}

void music::thread_add_ln278_3_fu_3513_p2() {
    add_ln278_3_fu_3513_p2 = (!zext_ln278_reg_6185.read().is_01() || !zext_ln278_1_fu_3486_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln278_reg_6185.read()) + sc_biguint<7>(zext_ln278_1_fu_3486_p1.read()));
}

void music::thread_add_ln278_fu_3457_p2() {
    add_ln278_fu_3457_p2 = (!shl_ln1_fu_3449_p3.read().is_01() || !zext_ln273_reg_6144.read().is_01())? sc_lv<14>(): (sc_biguint<14>(shl_ln1_fu_3449_p3.read()) + sc_biguint<14>(zext_ln273_reg_6144.read()));
}

void music::thread_add_ln279_fu_3508_p2() {
    add_ln279_fu_3508_p2 = (!zext_ln278_3_fu_3499_p1.read().is_01() || !p_cast18_reg_5926.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln278_3_fu_3499_p1.read()) + sc_biguint<31>(p_cast18_reg_5926.read()));
}

void music::thread_add_ln289_fu_4668_p2() {
    add_ln289_fu_4668_p2 = (!zext_ln289_reg_7014.read().is_01() || !zext_ln289_2_fu_4664_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln289_reg_7014.read()) + sc_biguint<6>(zext_ln289_2_fu_4664_p1.read()));
}

void music::thread_add_ln296_fu_4690_p2() {
    add_ln296_fu_4690_p2 = (!phi_mul8_reg_2374.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul8_reg_2374.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln300_fu_4734_p2() {
    add_ln300_fu_4734_p2 = (!phi_mul8_reg_2374.read().is_01() || !zext_ln300_fu_4730_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul8_reg_2374.read()) + sc_biguint<11>(zext_ln300_fu_4730_p1.read()));
}

void music::thread_add_ln310_1_fu_5663_p2() {
    add_ln310_1_fu_5663_p2 = (!zext_ln312_1_reg_7486.read().is_01() || !zext_ln310_1_fu_5654_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln312_1_reg_7486.read()) + sc_biguint<5>(zext_ln310_1_fu_5654_p1.read()));
}

void music::thread_add_ln310_fu_5658_p2() {
    add_ln310_fu_5658_p2 = (!zext_ln312_reg_7468.read().is_01() || !zext_ln310_1_fu_5654_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln312_reg_7468.read()) + sc_biguint<5>(zext_ln310_1_fu_5654_p1.read()));
}

void music::thread_add_ln312_fu_5631_p2() {
    add_ln312_fu_5631_p2 = (!zext_ln310_fu_5615_p1.read().is_01() || !zext_ln306_reg_7473.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln310_fu_5615_p1.read()) + sc_biguint<6>(zext_ln306_reg_7473.read()));
}

void music::thread_add_ln320_1_fu_5789_p2() {
    add_ln320_1_fu_5789_p2 = (!zext_ln322_reg_7570.read().is_01() || !phi_mul10_reg_2515.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln322_reg_7570.read()) + sc_biguint<11>(phi_mul10_reg_2515.read()));
}

void music::thread_add_ln320_2_fu_5783_p2() {
    add_ln320_2_fu_5783_p2 = (!phi_mul10_reg_2515.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul10_reg_2515.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln320_fu_5778_p2() {
    add_ln320_fu_5778_p2 = (!zext_ln322_1_reg_7588.read().is_01() || !zext_ln320_fu_5774_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln322_1_reg_7588.read()) + sc_biguint<6>(zext_ln320_fu_5774_p1.read()));
}

void music::thread_add_ln322_fu_5743_p2() {
    add_ln322_fu_5743_p2 = (!zext_ln316_reg_7575.read().is_01() || !zext_ln322_2_fu_5739_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln316_reg_7575.read()) + sc_biguint<12>(zext_ln322_2_fu_5739_p1.read()));
}

void music::thread_add_ln337_1_fu_5886_p2() {
    add_ln337_1_fu_5886_p2 = (!phi_mul12_reg_2560.read().is_01() || !zext_ln337_1_reg_7670.read().is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul12_reg_2560.read()) + sc_biguint<11>(zext_ln337_1_reg_7670.read()));
}

void music::thread_add_ln337_2_fu_5880_p2() {
    add_ln337_2_fu_5880_p2 = (!phi_mul12_reg_2560.read().is_01() || !ap_const_lv11_169.is_01())? sc_lv<11>(): (sc_biguint<11>(phi_mul12_reg_2560.read()) + sc_biguint<11>(ap_const_lv11_169));
}

void music::thread_add_ln337_fu_5869_p2() {
    add_ln337_fu_5869_p2 = (!zext_ln336_reg_7675.read().is_01() || !zext_ln337_2_fu_5865_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln336_reg_7675.read()) + sc_biguint<12>(zext_ln337_2_fu_5865_p1.read()));
}

void music::thread_add_ln34_1_fu_3968_p2() {
    add_ln34_1_fu_3968_p2 = (!zext_ln34_fu_3941_p1.read().is_01() || !zext_ln30_reg_6467.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln34_fu_3941_p1.read()) + sc_biguint<6>(zext_ln30_reg_6467.read()));
}

void music::thread_add_ln34_fu_3957_p2() {
    add_ln34_fu_3957_p2 = (!zext_ln36_reg_6481.read().is_01() || !zext_ln34_1_fu_3953_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln36_reg_6481.read()) + sc_biguint<6>(zext_ln34_1_fu_3953_p1.read()));
}

void music::thread_add_ln36_fu_3918_p2() {
    add_ln36_fu_3918_p2 = (!zext_ln30_reg_6467.read().is_01() || !zext_ln36_fu_3914_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln30_reg_6467.read()) + sc_biguint<6>(zext_ln36_fu_3914_p1.read()));
}

void music::thread_add_ln45_fu_4067_p2() {
    add_ln45_fu_4067_p2 = (!zext_ln45_fu_4051_p1.read().is_01() || !zext_ln45_1_fu_4063_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_fu_4051_p1.read()) + sc_biguint<6>(zext_ln45_1_fu_4063_p1.read()));
}

void music::thread_add_ln47_fu_4103_p2() {
    add_ln47_fu_4103_p2 = (!zext_ln45_1_reg_6601.read().is_01() || !zext_ln47_fu_4099_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln45_1_reg_6601.read()) + sc_biguint<6>(zext_ln47_fu_4099_p1.read()));
}

void music::thread_add_ln54_fu_4166_p2() {
    add_ln54_fu_4166_p2 = (!zext_ln52_reg_6679.read().is_01() || !trunc_ln54_fu_4162_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_6679.read()) + sc_biguint<6>(trunc_ln54_fu_4162_p1.read()));
}

void music::thread_add_ln59_1_fu_4235_p2() {
    add_ln59_1_fu_4235_p2 = (!zext_ln52_reg_6679.read().is_01() || !trunc_ln59_fu_4226_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln52_reg_6679.read()) + sc_biguint<6>(trunc_ln59_fu_4226_p1.read()));
}

void music::thread_add_ln59_fu_4230_p2() {
    add_ln59_fu_4230_p2 = (!sext_ln57_cast_reg_6726.read().is_01() || !trunc_ln59_fu_4226_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln57_cast_reg_6726.read()) + sc_biguint<6>(trunc_ln59_fu_4226_p1.read()));
}

void music::thread_add_ln68_1_fu_4347_p2() {
    add_ln68_1_fu_4347_p2 = (!sext_ln68_2_cast_fu_4339_p3.read().is_01() || !zext_ln1044_reg_6566.read().is_01())? sc_lv<6>(): (sc_biguint<6>(sext_ln68_2_cast_fu_4339_p3.read()) + sc_biguint<6>(zext_ln1044_reg_6566.read()));
}

void music::thread_add_ln68_fu_4324_p2() {
    add_ln68_fu_4324_p2 = (!sext_ln70_reg_6772.read().is_01() || !trunc_ln68_fu_4320_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_reg_6772.read()) + sc_biguint<6>(trunc_ln68_fu_4320_p1.read()));
}

void music::thread_add_ln70_fu_4285_p2() {
    add_ln70_fu_4285_p2 = (!sext_ln70_fu_4281_p1.read().is_01() || !zext_ln68_fu_4269_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4281_p1.read()) + sc_biguint<6>(zext_ln68_fu_4269_p1.read()));
}

void music::thread_add_ln72_fu_4297_p2() {
    add_ln72_fu_4297_p2 = (!sext_ln70_fu_4281_p1.read().is_01() || !zext_ln1044_reg_6566.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln70_fu_4281_p1.read()) + sc_biguint<6>(zext_ln1044_reg_6566.read()));
}

void music::thread_add_ln76_fu_4420_p2() {
    add_ln76_fu_4420_p2 = (!zext_ln1044_reg_6566.read().is_01() || !zext_ln76_fu_4416_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1044_reg_6566.read()) + sc_biguint<6>(zext_ln76_fu_4416_p1.read()));
}

void music::thread_addr_V_fu_4778_p3() {
    addr_V_fu_4778_p3 = (!closepath_fu_4766_p2.read()[0].is_01())? sc_lv<11>(): ((closepath_fu_4766_p2.read()[0].to_bool())? ap_const_lv11_4A: add_ln114_1_fu_4772_p2.read());
}

void music::thread_and_ln300_2_fu_5482_p2() {
    and_ln300_2_fu_5482_p2 = (icmp_ln833_reg_7229.read() & icmp_ln833_1_reg_7171.read());
}

void music::thread_and_ln300_fu_5460_p2() {
    and_ln300_fu_5460_p2 = (icmp_ln833_reg_7229.read() & icmp_ln833_1_reg_7171.read());
}

void music::thread_and_ln87_1_fu_4580_p2() {
    and_ln87_1_fu_4580_p2 = (and_ln87_fu_4574_p2.read() & grp_fu_2793_p2.read());
}

void music::thread_and_ln87_fu_4574_p2() {
    and_ln87_fu_4574_p2 = (or_ln87_fu_4566_p2.read() & or_ln87_1_fu_4570_p2.read());
}

void music::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void music::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
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

void music::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void music::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void music::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
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

void music::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void music::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void music::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void music::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void music::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[156];
}

void music::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
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

void music::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void music::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
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

void music::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[186];
}

void music::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[187];
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

void music::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[214];
}

void music::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[215];
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

void music::thread_ap_CS_fsm_state232() {
    ap_CS_fsm_state232 = ap_CS_fsm.read()[231];
}

void music::thread_ap_CS_fsm_state233() {
    ap_CS_fsm_state233 = ap_CS_fsm.read()[232];
}

void music::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[236];
}

void music::thread_ap_CS_fsm_state238() {
    ap_CS_fsm_state238 = ap_CS_fsm.read()[237];
}

void music::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void music::thread_ap_CS_fsm_state242() {
    ap_CS_fsm_state242 = ap_CS_fsm.read()[241];
}

void music::thread_ap_CS_fsm_state243() {
    ap_CS_fsm_state243 = ap_CS_fsm.read()[242];
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

void music::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void music::thread_ap_CS_fsm_state271() {
    ap_CS_fsm_state271 = ap_CS_fsm.read()[270];
}

void music::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[271];
}

void music::thread_ap_CS_fsm_state276() {
    ap_CS_fsm_state276 = ap_CS_fsm.read()[275];
}

void music::thread_ap_CS_fsm_state277() {
    ap_CS_fsm_state277 = ap_CS_fsm.read()[276];
}

void music::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void music::thread_ap_CS_fsm_state281() {
    ap_CS_fsm_state281 = ap_CS_fsm.read()[280];
}

void music::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void music::thread_ap_CS_fsm_state292() {
    ap_CS_fsm_state292 = ap_CS_fsm.read()[291];
}

void music::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[292];
}

void music::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[295];
}

void music::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[296];
}

void music::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void music::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
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

void music::thread_ap_CS_fsm_state306() {
    ap_CS_fsm_state306 = ap_CS_fsm.read()[305];
}

void music::thread_ap_CS_fsm_state307() {
    ap_CS_fsm_state307 = ap_CS_fsm.read()[306];
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

void music::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
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

void music::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void music::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[353];
}

void music::thread_ap_CS_fsm_state355() {
    ap_CS_fsm_state355 = ap_CS_fsm.read()[354];
}

void music::thread_ap_CS_fsm_state356() {
    ap_CS_fsm_state356 = ap_CS_fsm.read()[355];
}

void music::thread_ap_CS_fsm_state357() {
    ap_CS_fsm_state357 = ap_CS_fsm.read()[356];
}

void music::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void music::thread_ap_CS_fsm_state361() {
    ap_CS_fsm_state361 = ap_CS_fsm.read()[360];
}

void music::thread_ap_CS_fsm_state362() {
    ap_CS_fsm_state362 = ap_CS_fsm.read()[361];
}

void music::thread_ap_CS_fsm_state363() {
    ap_CS_fsm_state363 = ap_CS_fsm.read()[362];
}

void music::thread_ap_CS_fsm_state364() {
    ap_CS_fsm_state364 = ap_CS_fsm.read()[363];
}

void music::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[364];
}

void music::thread_ap_CS_fsm_state366() {
    ap_CS_fsm_state366 = ap_CS_fsm.read()[365];
}

void music::thread_ap_CS_fsm_state367() {
    ap_CS_fsm_state367 = ap_CS_fsm.read()[366];
}

void music::thread_ap_CS_fsm_state368() {
    ap_CS_fsm_state368 = ap_CS_fsm.read()[367];
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

void music::thread_ap_CS_fsm_state378() {
    ap_CS_fsm_state378 = ap_CS_fsm.read()[377];
}

void music::thread_ap_CS_fsm_state379() {
    ap_CS_fsm_state379 = ap_CS_fsm.read()[378];
}

void music::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
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

void music::thread_ap_CS_fsm_state385() {
    ap_CS_fsm_state385 = ap_CS_fsm.read()[384];
}

void music::thread_ap_CS_fsm_state386() {
    ap_CS_fsm_state386 = ap_CS_fsm.read()[385];
}

void music::thread_ap_CS_fsm_state387() {
    ap_CS_fsm_state387 = ap_CS_fsm.read()[386];
}

void music::thread_ap_CS_fsm_state388() {
    ap_CS_fsm_state388 = ap_CS_fsm.read()[387];
}

void music::thread_ap_CS_fsm_state389() {
    ap_CS_fsm_state389 = ap_CS_fsm.read()[388];
}

void music::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void music::thread_ap_CS_fsm_state390() {
    ap_CS_fsm_state390 = ap_CS_fsm.read()[389];
}

void music::thread_ap_CS_fsm_state391() {
    ap_CS_fsm_state391 = ap_CS_fsm.read()[390];
}

void music::thread_ap_CS_fsm_state392() {
    ap_CS_fsm_state392 = ap_CS_fsm.read()[391];
}

void music::thread_ap_CS_fsm_state395() {
    ap_CS_fsm_state395 = ap_CS_fsm.read()[394];
}

void music::thread_ap_CS_fsm_state396() {
    ap_CS_fsm_state396 = ap_CS_fsm.read()[395];
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

void music::thread_ap_CS_fsm_state413() {
    ap_CS_fsm_state413 = ap_CS_fsm.read()[412];
}

void music::thread_ap_CS_fsm_state414() {
    ap_CS_fsm_state414 = ap_CS_fsm.read()[413];
}

void music::thread_ap_CS_fsm_state418() {
    ap_CS_fsm_state418 = ap_CS_fsm.read()[417];
}

void music::thread_ap_CS_fsm_state419() {
    ap_CS_fsm_state419 = ap_CS_fsm.read()[418];
}

void music::thread_ap_CS_fsm_state423() {
    ap_CS_fsm_state423 = ap_CS_fsm.read()[422];
}

void music::thread_ap_CS_fsm_state424() {
    ap_CS_fsm_state424 = ap_CS_fsm.read()[423];
}

void music::thread_ap_CS_fsm_state425() {
    ap_CS_fsm_state425 = ap_CS_fsm.read()[424];
}

void music::thread_ap_CS_fsm_state426() {
    ap_CS_fsm_state426 = ap_CS_fsm.read()[425];
}

void music::thread_ap_CS_fsm_state427() {
    ap_CS_fsm_state427 = ap_CS_fsm.read()[426];
}

void music::thread_ap_CS_fsm_state430() {
    ap_CS_fsm_state430 = ap_CS_fsm.read()[429];
}

void music::thread_ap_CS_fsm_state431() {
    ap_CS_fsm_state431 = ap_CS_fsm.read()[430];
}

void music::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[434];
}

void music::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[435];
}

void music::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
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

void music::thread_ap_CS_fsm_state446() {
    ap_CS_fsm_state446 = ap_CS_fsm.read()[445];
}

void music::thread_ap_CS_fsm_state447() {
    ap_CS_fsm_state447 = ap_CS_fsm.read()[446];
}

void music::thread_ap_CS_fsm_state448() {
    ap_CS_fsm_state448 = ap_CS_fsm.read()[447];
}

void music::thread_ap_CS_fsm_state449() {
    ap_CS_fsm_state449 = ap_CS_fsm.read()[448];
}

void music::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void music::thread_ap_CS_fsm_state450() {
    ap_CS_fsm_state450 = ap_CS_fsm.read()[449];
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

void music::thread_ap_CS_fsm_state456() {
    ap_CS_fsm_state456 = ap_CS_fsm.read()[455];
}

void music::thread_ap_CS_fsm_state457() {
    ap_CS_fsm_state457 = ap_CS_fsm.read()[456];
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

void music::thread_ap_CS_fsm_state466() {
    ap_CS_fsm_state466 = ap_CS_fsm.read()[465];
}

void music::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void music::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void music::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
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

void music::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[77];
}

void music::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[78];
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

void music::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[96];
}

void music::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[97];
}

void music::thread_ap_block_state144_on_subcall_done() {
    ap_block_state144_on_subcall_done = esl_seteq<1,1,1>(ap_const_logic_0, (ap_sync_grp_qrf_top_fu_2626_ap_ready.read() & ap_sync_grp_qrf_top_fu_2626_ap_done.read()));
}

void music::thread_ap_block_state26_on_subcall_done() {
    ap_block_state26_on_subcall_done = esl_seteq<1,1,1>(ap_const_logic_0, (ap_sync_grp_fft_streaming_fu_2582_ap_ready.read() & ap_sync_grp_fft_streaming_fu_2582_ap_done.read()));
}

void music::thread_ap_block_state29_io() {
    ap_block_state29_io = (esl_seteq<1,1,1>(ap_const_logic_0, data_AWREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, data_WREADY.read()));
}

void music::thread_ap_block_state387_on_subcall_done() {
    ap_block_state387_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2636_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_sin_or_cos_float_s_fu_2652_ap_done.read()));
}

void music::thread_ap_block_state448() {
    ap_block_state448 = (esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read())));
}

void music::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) && 
         !(esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read()))) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln342_fu_5897_p2.read()))) {
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

void music::thread_ap_phi_mux_phi_ln250_1_phi_fu_1749_p4() {
    ap_phi_mux_phi_ln250_1_phi_fu_1749_p4 = phi_ln250_1_reg_1745.read();
}

void music::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) && 
         !(esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read()))) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln342_fu_5897_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void music::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void music::thread_ap_sync_grp_fft_streaming_fu_2582_ap_done() {
    ap_sync_grp_fft_streaming_fu_2582_ap_done = (grp_fft_streaming_fu_2582_ap_done.read() | ap_sync_reg_grp_fft_streaming_fu_2582_ap_done.read());
}

void music::thread_ap_sync_grp_fft_streaming_fu_2582_ap_ready() {
    ap_sync_grp_fft_streaming_fu_2582_ap_ready = (grp_fft_streaming_fu_2582_ap_ready.read() | ap_sync_reg_grp_fft_streaming_fu_2582_ap_ready.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2626_ap_done() {
    ap_sync_grp_qrf_top_fu_2626_ap_done = (grp_qrf_top_fu_2626_ap_done.read() | ap_sync_reg_grp_qrf_top_fu_2626_ap_done.read());
}

void music::thread_ap_sync_grp_qrf_top_fu_2626_ap_ready() {
    ap_sync_grp_qrf_top_fu_2626_ap_ready = (grp_qrf_top_fu_2626_ap_ready.read() | ap_sync_reg_grp_qrf_top_fu_2626_ap_ready.read());
}

void music::thread_bitcast_ln301_1_fu_5562_p1() {
    bitcast_ln301_1_fu_5562_p1 = xor_ln301_fu_5556_p2.read();
}

void music::thread_bitcast_ln301_fu_5552_p1() {
    bitcast_ln301_fu_5552_p1 = grp_sin_or_cos_float_s_fu_2652_ap_return.read();
}

void music::thread_bitcast_ln444_2_fu_4380_p1() {
    bitcast_ln444_2_fu_4380_p1 = complex_M_imag_read_1_reg_2254.read();
}

void music::thread_bitcast_ln444_fu_4364_p1() {
    bitcast_ln444_fu_4364_p1 = complex_M_real_read_1_reg_2266.read();
}

void music::thread_bitcast_ln512_fu_5542_p1() {
    bitcast_ln512_fu_5542_p1 = p_Result_56_fu_5534_p4.read();
}

void music::thread_bitcast_ln667_2_fu_5679_p1() {
    bitcast_ln667_2_fu_5679_p1 = reg_2946.read();
}

void music::thread_bitcast_ln667_4_fu_5805_p1() {
    bitcast_ln667_4_fu_5805_p1 = reg_2959.read();
}

void music::thread_bitcast_ln667_fu_3648_p1() {
    bitcast_ln667_fu_3648_p1 = Autocorr_Buffer_M_i_5_reg_6315.read();
}

void music::thread_bitcast_ln87_1_fu_4524_p1() {
    bitcast_ln87_1_fu_4524_p1 = eigval_q1.read();
}

void music::thread_bitcast_ln87_fu_4506_p1() {
    bitcast_ln87_fu_4506_p1 = eigval_q0.read();
}

void music::thread_closepath_fu_4766_p2() {
    closepath_fu_4766_p2 = (!tmp_V_fu_4752_p4.read().is_01() || !ap_const_lv11_3FE.is_01())? sc_lv<1>(): (sc_biguint<11>(tmp_V_fu_4752_p4.read()) < sc_biguint<11>(ap_const_lv11_3FE));
}

void music::thread_count_fu_3985_p2() {
    count_fu_3985_p2 = (!count_0_i_reg_2156.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(count_0_i_reg_2156.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_data_ARADDR() {
    if (esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln279_fu_3528_p1.read());
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln278_4_fu_3518_p1.read());
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
            data_ARADDR =  (sc_lv<32>) (zext_ln262_3_fu_3311_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
          esl_seteq<1,1,1>(data_ARREADY.read(), ap_const_logic_1)))) {
        data_ARVALID = ap_const_logic_1;
    } else {
        data_ARVALID = ap_const_logic_0;
    }
}

void music::thread_data_AWADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
         esl_seteq<1,1,1>(ap_block_state29_io.read(), ap_const_boolean_0))) {
        data_AWADDR =  (sc_lv<32>) (zext_ln268_fu_3394_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) && 
                esl_seteq<1,1,1>(data_AWREADY.read(), ap_const_logic_1))) {
        data_AWADDR =  (sc_lv<32>) (zext_ln267_3_fu_3380_p1.read());
    } else {
        data_AWADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) && 
          esl_seteq<1,1,1>(data_AWREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(ap_block_state29_io.read(), ap_const_boolean_0)))) {
        data_AWVALID = ap_const_logic_1;
    } else {
        data_AWVALID = ap_const_logic_0;
    }
}

void music::thread_data_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
          esl_seteq<1,1,1>(data_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
          esl_seteq<1,1,1>(data_BVALID.read(), ap_const_logic_1)))) {
        data_BREADY = ap_const_logic_1;
    } else {
        data_BREADY = ap_const_logic_0;
    }
}

void music::thread_data_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) && 
          esl_seteq<1,1,1>(data_RVALID.read(), ap_const_logic_1)))) {
        data_RREADY = ap_const_logic_1;
    } else {
        data_RREADY = ap_const_logic_0;
    }
}

void music::thread_data_WDATA() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        data_WDATA = FFT_out_im_load_reg_6133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        data_WDATA = FFT_out_re_load_reg_6117.read();
    } else {
        data_WDATA =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_data_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(ap_block_state29_io.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
          esl_seteq<1,1,1>(data_WREADY.read(), ap_const_logic_1)))) {
        data_WVALID = ap_const_logic_1;
    } else {
        data_WVALID = ap_const_logic_0;
    }
}

void music::thread_data_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()))) {
        data_blk_n_AR = m_axi_data_ARREADY.read();
    } else {
        data_blk_n_AR = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        data_blk_n_AW = m_axi_data_AWREADY.read();
    } else {
        data_blk_n_AW = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        data_blk_n_B = m_axi_data_BVALID.read();
    } else {
        data_blk_n_B = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()))) {
        data_blk_n_R = m_axi_data_RVALID.read();
    } else {
        data_blk_n_R = ap_const_logic_1;
    }
}

void music::thread_data_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        data_blk_n_W = m_axi_data_WREADY.read();
    } else {
        data_blk_n_W = ap_const_logic_1;
    }
}

void music::thread_eig_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        eig_mat_M_imag_address0 = eig_mat_M_imag_addr_2_reg_6491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6433.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_3797_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        eig_mat_M_imag_address0 = grp_qrf_top_fu_2626_A_M_imag_address0.read();
    } else {
        eig_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()))) {
        eig_mat_M_imag_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        eig_mat_M_imag_ce0 = grp_qrf_top_fu_2626_A_M_imag_ce0.read();
    } else {
        eig_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        eig_mat_M_imag_d0 = complex_M_imag_read_reg_2119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        eig_mat_M_imag_d0 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_3929_p2.read())))) {
        eig_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1044_2_fu_4013_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        eig_mat_M_real_address0 = eig_mat_M_real_addr_3_reg_6486.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_reg_6433.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_9_fu_3797_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        eig_mat_M_real_address0 = grp_qrf_top_fu_2626_A_M_real_address0.read();
    } else {
        eig_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_eig_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()))) {
        eig_mat_M_real_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        eig_mat_M_real_ce0 = grp_qrf_top_fu_2626_A_M_real_ce0.read();
    } else {
        eig_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_eig_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        eig_mat_M_real_d0 = complex_M_real_read_reg_2132.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        eig_mat_M_real_d0 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        eig_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        eig_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_eig_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln33_fu_3929_p2.read())))) {
        eig_mat_M_real_we0 = ap_const_logic_1;
    } else {
        eig_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_eigval_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln87_fu_4496_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        eigval_address0 =  (sc_lv<2>) (zext_ln41_fu_4018_p1.read());
    } else {
        eigval_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_eigval_address1() {
    eigval_address1 =  (sc_lv<2>) (zext_ln87_1_fu_4501_p1.read());
}

void music::thread_eigval_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read()))) {
        eigval_ce0 = ap_const_logic_1;
    } else {
        eigval_ce0 = ap_const_logic_0;
    }
}

void music::thread_eigval_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state331.read())) {
        eigval_ce1 = ap_const_logic_1;
    } else {
        eigval_ce1 = ap_const_logic_0;
    }
}

void music::thread_eigval_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        eigval_we0 = ap_const_logic_1;
    } else {
        eigval_we0 = ap_const_logic_0;
    }
}

void music::thread_fc_address0() {
    fc_address0 =  (sc_lv<10>) (zext_ln274_fu_3420_p1.read());
}

void music::thread_fc_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        fc_ce0 = ap_const_logic_1;
    } else {
        fc_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_4_address0() {
    fourth_order_double_4_address0 =  (sc_lv<8>) (zext_ln498_fu_5127_p1.read());
}

void music::thread_fourth_order_double_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        fourth_order_double_4_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_4_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_5_address0() {
    fourth_order_double_5_address0 =  (sc_lv<8>) (zext_ln498_fu_5127_p1.read());
}

void music::thread_fourth_order_double_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        fourth_order_double_5_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_5_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_6_address0() {
    fourth_order_double_6_address0 =  (sc_lv<8>) (zext_ln498_fu_5127_p1.read());
}

void music::thread_fourth_order_double_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        fourth_order_double_6_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_6_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_7_address0() {
    fourth_order_double_7_address0 =  (sc_lv<8>) (zext_ln498_fu_5127_p1.read());
}

void music::thread_fourth_order_double_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        fourth_order_double_7_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_7_ce0 = ap_const_logic_0;
    }
}

void music::thread_fourth_order_double_s_address0() {
    fourth_order_double_s_address0 =  (sc_lv<8>) (zext_ln498_fu_5127_p1.read());
}

void music::thread_fourth_order_double_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        fourth_order_double_s_ce0 = ap_const_logic_1;
    } else {
        fourth_order_double_s_ce0 = ap_const_logic_0;
    }
}

void music::thread_grp_fft_streaming_fu_2582_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
         esl_seteq<1,1,1>(ap_block_state26_on_subcall_done.read(), ap_const_boolean_0))) {
        grp_fft_streaming_fu_2582_ap_continue = ap_const_logic_1;
    } else {
        grp_fft_streaming_fu_2582_ap_continue = ap_const_logic_0;
    }
}

void music::thread_grp_fft_streaming_fu_2582_ap_start() {
    grp_fft_streaming_fu_2582_ap_start = grp_fft_streaming_fu_2582_ap_start_reg.read();
}

void music::thread_grp_fu_2673_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state396.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()))) {
        grp_fu_2673_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read()))) {
        grp_fu_2673_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2673_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2673_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read())) {
        grp_fu_2673_p0 = reg_2964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        grp_fu_2673_p0 = complex_M_real_read_4_reg_2537.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read())) {
        grp_fu_2673_p0 = complex_M_real_read_3_reg_2491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read())) {
        grp_fu_2673_p0 = complex_M_real_read_2_reg_2432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read())) {
        grp_fu_2673_p0 = p_x_assign_reg_2230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read())) {
        grp_fu_2673_p0 = complex_M_real_read_1_reg_2266.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2673_p0 = reg_2900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        grp_fu_2673_p0 = reg_2866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        grp_fu_2673_p0 = complex_M_real_read_reg_2132.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_fu_2673_p0 = p_r_M_real_reg_1949.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state396.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()))) {
        grp_fu_2673_p0 = reg_2826.read();
    } else {
        grp_fu_2673_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2673_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state442.read())) {
        grp_fu_2673_p1 = complex_M_real_read_4_reg_2537.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        grp_fu_2673_p1 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        grp_fu_2673_p1 = eigval_temp_reg_6588.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()))) {
        grp_fu_2673_p1 = reg_2847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state396.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()))) {
        grp_fu_2673_p1 = reg_2832.read();
    } else {
        grp_fu_2673_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2677_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()))) {
        grp_fu_2677_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state396.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read()))) {
        grp_fu_2677_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2677_opcode =  (sc_lv<2>) ("XX");
    }
}

void music::thread_grp_fu_2677_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read())) {
        grp_fu_2677_p0 = complex_M_imag_read_3_reg_2478.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read())) {
        grp_fu_2677_p0 = complex_M_imag_read_2_reg_2419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read())) {
        grp_fu_2677_p0 = complex_M_imag_read_1_reg_2254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        grp_fu_2677_p0 = reg_2909.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read())) {
        grp_fu_2677_p0 = complex_M_imag_read_reg_2119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_fu_2677_p0 = p_r_M_imag_reg_1937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state396.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()))) {
        grp_fu_2677_p0 = reg_2837.read();
    } else {
        grp_fu_2677_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2677_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state238.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state401.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read()))) {
        grp_fu_2677_p1 = reg_2857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state396.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state414.read()))) {
        grp_fu_2677_p1 = reg_2842.read();
    } else {
        grp_fu_2677_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2699_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        grp_fu_2699_p0 = p_r_M_real_24_reg_7718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2699_p0 = reg_2952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2699_p0 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read())) {
        grp_fu_2699_p0 = reg_2826.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read())) {
        grp_fu_2699_p0 = tpf_reg_6172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        grp_fu_2699_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        grp_fu_2699_p0 = midsum_reg_6878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        grp_fu_2699_p0 = reg_2939.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        grp_fu_2699_p0 = p_r_M_real_17_fu_4374_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        grp_fu_2699_p0 = reg_2880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        grp_fu_2699_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2699_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2699_p0 = p_r_M_real_10_reg_6320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_2699_p0 = p_r_M_real_reg_1949.read();
    } else {
        grp_fu_2699_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2699_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        grp_fu_2699_p1 = reg_2952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2699_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2699_p1 = p_t_real_9_reg_7534.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read())) {
        grp_fu_2699_p1 = sinpitheta_reg_7449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read())) {
        grp_fu_2699_p1 = p_load_reg_7093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()))) {
        grp_fu_2699_p1 = midsum_reg_6878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        grp_fu_2699_p1 = reg_2939.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        grp_fu_2699_p1 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        grp_fu_2699_p1 = reg_2880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()))) {
        grp_fu_2699_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2699_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2699_p1 = p_t_real_reg_6309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_2699_p1 = ap_const_lv32_41200000;
    } else {
        grp_fu_2699_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2705_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        grp_fu_2705_p0 = p_r_M_imag_22_reg_7723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2705_p0 = p_r_M_imag_23_fu_5815_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2705_p0 = Un_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        grp_fu_2705_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        grp_fu_2705_p0 = sum_M_imag_reg_6867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        grp_fu_2705_p0 = p_r_M_imag_15_fu_4390_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        grp_fu_2705_p0 = reg_2890.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        grp_fu_2705_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2705_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2705_p0 = p_r_M_imag_9_reg_6326.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_2705_p0 = p_r_M_imag_reg_1937.read();
    } else {
        grp_fu_2705_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2705_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        grp_fu_2705_p1 = reg_2959.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2705_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2705_p1 = p_t_imag_9_fu_5689_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        grp_fu_2705_p1 = sum_M_imag_reg_6867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        grp_fu_2705_p1 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        grp_fu_2705_p1 = reg_2890.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()))) {
        grp_fu_2705_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2705_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2705_p1 = p_t_imag_fu_3657_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        grp_fu_2705_p1 = ap_const_lv32_0;
    } else {
        grp_fu_2705_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2711_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2711_p0 = p_r_M_imag_23_fu_5815_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2711_p0 = Un_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        grp_fu_2711_p0 = U_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        grp_fu_2711_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        grp_fu_2711_p0 = reg_2890.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        grp_fu_2711_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2711_p0 = R_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2711_p0 = p_r_M_imag_9_reg_6326.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_2711_p0 = p_r_M_imag_reg_1937.read();
    } else {
        grp_fu_2711_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2711_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2711_p1 = temp_mat_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2711_p1 = p_t_real_9_reg_7534.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        grp_fu_2711_p1 = midsum_reg_6878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        grp_fu_2711_p1 = U_M_real_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()))) {
        grp_fu_2711_p1 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        grp_fu_2711_p1 = reg_2880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2711_p1 = Q_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2711_p1 = p_t_real_reg_6309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_2711_p1 = ap_const_lv32_41200000;
    } else {
        grp_fu_2711_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2717_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2717_p0 = reg_2952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2717_p0 = Un_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        grp_fu_2717_p0 = U_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        grp_fu_2717_p0 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        grp_fu_2717_p0 = reg_2880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        grp_fu_2717_p0 = Rx_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2717_p0 = R_temp_M_real_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2717_p0 = p_r_M_real_10_reg_6320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        grp_fu_2717_p0 = p_r_M_real_reg_1949.read();
    } else {
        grp_fu_2717_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2717_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        grp_fu_2717_p1 = temp_mat_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state392.read())) {
        grp_fu_2717_p1 = p_t_imag_9_fu_5689_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        grp_fu_2717_p1 = U_M_imag_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()))) {
        grp_fu_2717_p1 = Rx_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        grp_fu_2717_p1 = reg_2890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        grp_fu_2717_p1 = Q_temp_M_imag_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_2717_p1 = p_t_imag_fu_3657_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()))) {
        grp_fu_2717_p1 = ap_const_lv32_0;
    } else {
        grp_fu_2717_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2745_p0() {
    grp_fu_2745_p0 = xor_ln444_1_fu_4384_p2.read();
}

void music::thread_grp_fu_2750_p0() {
    grp_fu_2750_p0 = xor_ln444_fu_4368_p2.read();
}

void music::thread_grp_fu_2767_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state465.read()) && 
          esl_seteq<1,1,1>(P_sm_data_1_ack_in.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state195.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state197.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state198.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state205.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state254.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state264.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state316.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state319.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state451.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state455.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state461.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state464.read()))) {
        grp_fu_2767_ce = ap_const_logic_1;
    } else {
        grp_fu_2767_ce = ap_const_logic_0;
    }
}

void music::thread_grp_fu_2767_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read())) {
        grp_fu_2767_p0 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()))) {
        grp_fu_2767_p0 = reg_2918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()))) {
        grp_fu_2767_p0 = reg_2847.read();
    } else {
        grp_fu_2767_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2767_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read())) {
        grp_fu_2767_p1 = reg_2964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read())) {
        grp_fu_2767_p1 = reg_2857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()))) {
        grp_fu_2767_p1 = reg_2847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2767_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2767_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2773_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read())) {
        grp_fu_2773_p0 = tmp_9_i_i_reg_6862.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()))) {
        grp_fu_2773_p0 = reg_2857.read();
    } else {
        grp_fu_2773_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2773_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read())) {
        grp_fu_2773_p1 = reg_2857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()))) {
        grp_fu_2773_p1 = reg_2847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fu_2773_p1 = ap_const_lv32_42C80000;
    } else {
        grp_fu_2773_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2785_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read())) {
        grp_fu_2785_p0 = bitcast_ln512_fu_5542_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        grp_fu_2785_p0 = tmp_3_reg_6167.read();
    } else {
        grp_fu_2785_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2788_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read())) {
        grp_fu_2788_p0 = theta_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_fu_2788_p0 = fc_q0.read();
    } else {
        grp_fu_2788_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_2805_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read())) {
        grp_fu_2805_p1 = ap_const_lv64_3F91DF46A252DD11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_fu_2805_p1 = ap_const_lv64_401921FB54524550;
    } else {
        grp_fu_2805_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_grp_fu_4838_p0() {
    grp_fu_4838_p0 =  (sc_lv<170>) (grp_fu_4838_p00.read());
}

void music::thread_grp_fu_4838_p00() {
    grp_fu_4838_p00 = esl_zext<223,170>(ret_V_22_reg_7156.read());
}

void music::thread_grp_fu_4838_p1() {
    grp_fu_4838_p1 =  (sc_lv<53>) (grp_fu_4838_p10.read());
}

void music::thread_grp_fu_4838_p10() {
    grp_fu_4838_p10 = esl_zext<223,53>(p_Result_50_fu_4824_p3.read());
}

void music::thread_grp_fu_5063_p0() {
    grp_fu_5063_p0 =  (sc_lv<49>) (r_V_22_fu_5060_p1.read());
}

void music::thread_grp_fu_5063_p1() {
    grp_fu_5063_p1 =  (sc_lv<49>) (r_V_22_fu_5060_p1.read());
}

void music::thread_grp_fu_5103_p0() {
    grp_fu_5103_p0 =  (sc_lv<49>) (r_V_25_fu_5100_p1.read());
}

void music::thread_grp_fu_5103_p1() {
    grp_fu_5103_p1 =  (sc_lv<49>) (r_V_22_reg_7257.read());
}

void music::thread_grp_fu_5108_p0() {
    grp_fu_5108_p0 =  (sc_lv<49>) (r_V_25_fu_5100_p1.read());
}

void music::thread_grp_fu_5108_p1() {
    grp_fu_5108_p1 =  (sc_lv<49>) (r_V_25_fu_5100_p1.read());
}

void music::thread_grp_fu_5162_p0() {
    grp_fu_5162_p0 =  (sc_lv<56>) (grp_fu_5162_p00.read());
}

void music::thread_grp_fu_5162_p00() {
    grp_fu_5162_p00 = esl_zext<108,56>(B_V_reg_7247.read());
}

void music::thread_grp_fu_5174_p0() {
    grp_fu_5174_p0 =  (sc_lv<49>) (grp_fu_5174_p00.read());
}

void music::thread_grp_fu_5174_p00() {
    grp_fu_5174_p00 = esl_zext<93,49>(B_squared_V_reg_7264.read());
}

void music::thread_grp_fu_5186_p0() {
    grp_fu_5186_p0 =  (sc_lv<42>) (grp_fu_5186_p00.read());
}

void music::thread_grp_fu_5186_p00() {
    grp_fu_5186_p00 = esl_zext<75,42>(B_third_power_V_reg_7309.read());
}

void music::thread_grp_fu_5186_p1() {
    grp_fu_5186_p1 =  (sc_lv<33>) (grp_fu_5186_p10.read());
}

void music::thread_grp_fu_5186_p10() {
    grp_fu_5186_p10 = esl_zext<75,33>(fourth_order_double_14_reg_7334.read());
}

void music::thread_grp_fu_5311_p1() {
    grp_fu_5311_p1 =  (sc_lv<63>) (grp_fu_5311_p10.read());
}

void music::thread_grp_fu_5311_p10() {
    grp_fu_5311_p10 = esl_zext<126,63>(select_ln272_2_fu_5298_p3.read());
}

void music::thread_grp_qrf_top_fu_2626_ap_continue() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) && 
         esl_seteq<1,1,1>(ap_block_state144_on_subcall_done.read(), ap_const_boolean_0))) {
        grp_qrf_top_fu_2626_ap_continue = ap_const_logic_1;
    } else {
        grp_qrf_top_fu_2626_ap_continue = ap_const_logic_0;
    }
}

void music::thread_grp_qrf_top_fu_2626_ap_start() {
    grp_qrf_top_fu_2626_ap_start = grp_qrf_top_fu_2626_ap_start_reg.read();
}

void music::thread_grp_scaled_fixed2ieee_fu_2667_ap_start() {
    grp_scaled_fixed2ieee_fu_2667_ap_start = grp_scaled_fixed2ieee_fu_2667_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2636_ap_start() {
    grp_sin_or_cos_float_s_fu_2636_ap_start = grp_sin_or_cos_float_s_fu_2636_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2636_do_cos() {
    grp_sin_or_cos_float_s_fu_2636_do_cos =  (sc_logic) (ap_const_lv1_1[0]);
}

void music::thread_grp_sin_or_cos_float_s_fu_2652_ap_start() {
    grp_sin_or_cos_float_s_fu_2652_ap_start = grp_sin_or_cos_float_s_fu_2652_ap_start_reg.read();
}

void music::thread_grp_sin_or_cos_float_s_fu_2652_do_cos() {
    grp_sin_or_cos_float_s_fu_2652_do_cos =  (sc_logic) (ap_const_lv1_0[0]);
}

void music::thread_i_10_fu_4458_p2() {
    i_10_fu_4458_p2 = (!flag_reg_2310.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(flag_reg_2310.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_11_fu_4402_p2() {
    i_11_fu_4402_p2 = (!i25_0_i_reg_2287.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i25_0_i_reg_2287.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_12_fu_5573_p2() {
    i_12_fu_5573_p2 = (!i_0_reg_2397.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_2397.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_13_fu_5701_p2() {
    i_13_fu_5701_p2 = (!i30_0_reg_2456.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i30_0_reg_2456.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_14_fu_5827_p2() {
    i_14_fu_5827_p2 = (!i33_0_reg_2526.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i33_0_reg_2526.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_i_4_fu_3821_p2() {
    i_4_fu_3821_p2 = (!i_0_i_reg_2064.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i_reg_2064.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_5_fu_3872_p2() {
    i_5_fu_3872_p2 = (!i16_0_i_reg_2086.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i16_0_i_reg_2086.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_i_6_fu_3884_p2() {
    i_6_fu_3884_p2 = (!i17_0_i_reg_2097.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i17_0_i_reg_2097.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_7_fu_4045_p2() {
    i_7_fu_4045_p2 = (!i19_0_i_reg_2168.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i19_0_i_reg_2168.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_8_fu_4437_p2() {
    i_8_fu_4437_p2 = (!i_0_i44_reg_2298.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_i44_reg_2298.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_i_9_fu_4124_p2() {
    i_9_fu_4124_p2 = (!j_13_reg_2191.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_13_reg_2191.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_i_fu_5903_p2() {
    i_fu_5903_p2 = (!p_016_rec_reg_2571.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(p_016_rec_reg_2571.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_icmp_ln101_fu_3602_p2() {
    icmp_ln101_fu_3602_p2 = (!l_0_i_reg_1961.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_i_reg_1961.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln11_1_fu_3695_p2() {
    icmp_ln11_1_fu_3695_p2 = (!phi_ln11_reg_1972.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_reg_1972.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln11_fu_3689_p2() {
    icmp_ln11_fu_3689_p2 = (!phi_ln11_1_reg_1984.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln11_1_reg_1984.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln12_1_fu_3733_p2() {
    icmp_ln12_1_fu_3733_p2 = (!phi_ln12_reg_1995.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_reg_1995.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln12_fu_3727_p2() {
    icmp_ln12_fu_3727_p2 = (!phi_ln12_1_reg_2007.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln12_1_reg_2007.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_1_fu_3771_p2() {
    icmp_ln13_1_fu_3771_p2 = (!phi_ln13_reg_2018.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_2018.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln13_fu_3765_p2() {
    icmp_ln13_fu_3765_p2 = (!phi_ln13_1_reg_2030.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_2030.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_1_fu_3809_p2() {
    icmp_ln14_1_fu_3809_p2 = (!phi_ln14_reg_2041.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_reg_2041.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln14_fu_3803_p2() {
    icmp_ln14_fu_3803_p2 = (!phi_ln14_1_reg_2053.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln14_1_reg_2053.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln20_fu_3815_p2() {
    icmp_ln20_fu_3815_p2 = (!i_0_i_reg_2064.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_reg_2064.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln21_fu_3839_p2() {
    icmp_ln21_fu_3839_p2 = (!j_0_i_reg_2075.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i_reg_2075.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln248_1_fu_3030_p2() {
    icmp_ln248_1_fu_3030_p2 = (!phi_ln248_reg_1687.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln248_reg_1687.read() == ap_const_lv4_9);
}

void music::thread_icmp_ln248_fu_3024_p2() {
    icmp_ln248_fu_3024_p2 = (!phi_ln248_1_reg_1699.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln248_1_reg_1699.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln249_1_fu_3068_p2() {
    icmp_ln249_1_fu_3068_p2 = (!phi_ln249_reg_1710.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln249_reg_1710.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln249_fu_3062_p2() {
    icmp_ln249_fu_3062_p2 = (!phi_ln249_1_reg_1722.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln249_1_reg_1722.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln250_fu_3100_p2() {
    icmp_ln250_fu_3100_p2 = (!phi_ln250_reg_1733.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln250_reg_1733.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln251_1_fu_3138_p2() {
    icmp_ln251_1_fu_3138_p2 = (!phi_ln251_reg_1756.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln251_reg_1756.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln251_fu_3132_p2() {
    icmp_ln251_fu_3132_p2 = (!phi_ln251_1_reg_1768.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln251_1_reg_1768.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln252_1_fu_3176_p2() {
    icmp_ln252_1_fu_3176_p2 = (!phi_ln252_reg_1779.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln252_reg_1779.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln252_fu_3170_p2() {
    icmp_ln252_fu_3170_p2 = (!phi_ln252_1_reg_1791.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln252_1_reg_1791.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln253_1_fu_3222_p2() {
    icmp_ln253_1_fu_3222_p2 = (!phi_ln253_reg_1802.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln253_reg_1802.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln253_fu_3216_p2() {
    icmp_ln253_fu_3216_p2 = (!phi_ln253_1_reg_1826.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln253_1_reg_1826.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln259_fu_3228_p2() {
    icmp_ln259_fu_3228_p2 = (!l_0_reg_1837.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l_0_reg_1837.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln260_fu_3248_p2() {
    icmp_ln260_fu_3248_p2 = (!n_0_reg_1848.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_1848.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln261_fu_3268_p2() {
    icmp_ln261_fu_3268_p2 = (!j_0_reg_1859.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_1859.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln266_fu_3331_p2() {
    icmp_ln266_fu_3331_p2 = (!j24_0_reg_1871.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_reg_1871.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln273_fu_3408_p2() {
    icmp_ln273_fu_3408_p2 = (!jj_0_reg_1882.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(jj_0_reg_1882.read() == ap_const_lv11_400);
}

void music::thread_icmp_ln275_fu_3425_p2() {
    icmp_ln275_fu_3425_p2 = (!l25_0_reg_1893.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(l25_0_reg_1893.read() == ap_const_lv4_A);
}

void music::thread_icmp_ln276_fu_3474_p2() {
    icmp_ln276_fu_3474_p2 = (!n26_0_reg_1904.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(n26_0_reg_1904.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln27_fu_3866_p2() {
    icmp_ln27_fu_3866_p2 = (!i16_0_i_reg_2086.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i16_0_i_reg_2086.read() == ap_const_lv4_8);
}

void music::thread_icmp_ln286_fu_4593_p2() {
    icmp_ln286_fu_4593_p2 = (!x_0_reg_2341.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_2341.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln287_fu_4647_p2() {
    icmp_ln287_fu_4647_p2 = (!y_0_reg_2352.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_2352.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln288_fu_4678_p2() {
    icmp_ln288_fu_4678_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_1);
}

void music::thread_icmp_ln290_fu_4684_p2() {
    icmp_ln290_fu_4684_p2 = (!sort_index_q1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(sort_index_q1.read() == ap_const_lv3_0);
}

void music::thread_icmp_ln296_fu_4696_p2() {
    icmp_ln296_fu_4696_p2 = (!x27_0_reg_2363.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x27_0_reg_2363.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln298_fu_4713_p2() {
    icmp_ln298_fu_4713_p2 = (!y28_0_reg_2386.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(y28_0_reg_2386.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln29_fu_3878_p2() {
    icmp_ln29_fu_3878_p2 = (!i17_0_i_reg_2097.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i17_0_i_reg_2097.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln305_fu_5567_p2() {
    icmp_ln305_fu_5567_p2 = (!i_0_reg_2397.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_2397.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln306_fu_5603_p2() {
    icmp_ln306_fu_5603_p2 = (!j29_0_reg_2408.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j29_0_reg_2408.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln309_fu_5642_p2() {
    icmp_ln309_fu_5642_p2 = (!k_0_reg_2445.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2445.read() == ap_const_lv2_2);
}

void music::thread_icmp_ln30_fu_3902_p2() {
    icmp_ln30_fu_3902_p2 = (!j18_0_i_reg_2108.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j18_0_i_reg_2108.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln315_fu_5695_p2() {
    icmp_ln315_fu_5695_p2 = (!i30_0_reg_2456.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i30_0_reg_2456.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln316_fu_5723_p2() {
    icmp_ln316_fu_5723_p2 = (!j31_0_reg_2467.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j31_0_reg_2467.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln319_fu_5754_p2() {
    icmp_ln319_fu_5754_p2 = (!k32_0_reg_2504.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k32_0_reg_2504.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln333_fu_5821_p2() {
    icmp_ln333_fu_5821_p2 = (!i33_0_reg_2526.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(i33_0_reg_2526.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln336_fu_5853_p2() {
    icmp_ln336_fu_5853_p2 = (!k34_0_reg_2549.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k34_0_reg_2549.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln33_fu_3929_p2() {
    icmp_ln33_fu_3929_p2 = (!k_0_i_reg_2145.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_0_i_reg_2145.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln342_fu_5897_p2() {
    icmp_ln342_fu_5897_p2 = (!p_016_rec_reg_2571.read().is_01() || !ap_const_lv9_169.is_01())? sc_lv<1>(): sc_lv<1>(p_016_rec_reg_2571.read() == ap_const_lv9_169);
}

void music::thread_icmp_ln344_fu_5914_p2() {
    icmp_ln344_fu_5914_p2 = (!p_016_rec_reg_2571.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(p_016_rec_reg_2571.read() == ap_const_lv9_0);
}

void music::thread_icmp_ln345_fu_5920_p2() {
    icmp_ln345_fu_5920_p2 = (!p_016_rec_reg_2571.read().is_01() || !ap_const_lv9_168.is_01())? sc_lv<1>(): sc_lv<1>(p_016_rec_reg_2571.read() == ap_const_lv9_168);
}

void music::thread_icmp_ln40_fu_3979_p2() {
    icmp_ln40_fu_3979_p2 = (!count_0_i_reg_2156.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(count_0_i_reg_2156.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln42_fu_4039_p2() {
    icmp_ln42_fu_4039_p2 = (!i19_0_i_reg_2168.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2168.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln43_fu_4081_p2() {
    icmp_ln43_fu_4081_p2 = (!j20_0_i_reg_2180.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j20_0_i_reg_2180.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln44_fu_4093_p2() {
    icmp_ln44_fu_4093_p2 = (!i19_0_i_reg_2168.read().is_01() || !j20_0_i_reg_2180.read().is_01())? sc_lv<1>(): sc_lv<1>(i19_0_i_reg_2168.read() == j20_0_i_reg_2180.read());
}

void music::thread_icmp_ln51_fu_4118_p2() {
    icmp_ln51_fu_4118_p2 = (!j_13_reg_2191.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_13_reg_2191.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln53_fu_4156_p2() {
    icmp_ln53_fu_4156_p2 = (!j22_0_i_reg_2203.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(j22_0_i_reg_2203.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln56_fu_4189_p2() {
    icmp_ln56_fu_4189_p2 = (!j23_0_in_i_reg_2212.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j23_0_in_i_reg_2212.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln58_fu_4220_p2() {
    icmp_ln58_fu_4220_p2 = (!q_0_i_reg_2221.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<1>(): sc_lv<1>(q_0_i_reg_2221.read() == ap_const_lv32_4);
}

void music::thread_icmp_ln67_fu_4314_p2() {
    icmp_ln67_fu_4314_p2 = (!j24_0_in_i_reg_2278.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j24_0_in_i_reg_2278.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln75_fu_4396_p2() {
    icmp_ln75_fu_4396_p2 = (!i25_0_i_reg_2287.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i25_0_i_reg_2287.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln81_fu_4431_p2() {
    icmp_ln81_fu_4431_p2 = (!i_0_i44_reg_2298.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i44_reg_2298.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln833_1_fu_4844_p2() {
    icmp_ln833_1_fu_4844_p2 = (!tmp_V_4_reg_7134.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_reg_7134.read() == ap_const_lv52_0);
}

void music::thread_icmp_ln833_2_fu_4990_p2() {
    icmp_ln833_2_fu_4990_p2 = (!tmp_V_reg_7127.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7127.read() == ap_const_lv11_7FF);
}

void music::thread_icmp_ln833_fu_4985_p2() {
    icmp_ln833_fu_4985_p2 = (!tmp_V_reg_7127.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_reg_7127.read() == ap_const_lv11_0);
}

void music::thread_icmp_ln84_fu_4452_p2() {
    icmp_ln84_fu_4452_p2 = (!flag_reg_2310.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(flag_reg_2310.read() == ap_const_lv2_3);
}

void music::thread_icmp_ln86_fu_4470_p2() {
    icmp_ln86_fu_4470_p2 = (!j_0_in_i_reg_2332.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_in_i_reg_2332.read() == ap_const_lv32_3);
}

void music::thread_icmp_ln87_1_fu_4548_p2() {
    icmp_ln87_1_fu_4548_p2 = (!trunc_ln87_fu_4520_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_fu_4520_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_2_fu_4554_p2() {
    icmp_ln87_2_fu_4554_p2 = (!tmp_9_fu_4528_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_9_fu_4528_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln87_3_fu_4560_p2() {
    icmp_ln87_3_fu_4560_p2 = (!trunc_ln87_1_fu_4538_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln87_1_fu_4538_p1.read() == ap_const_lv23_0);
}

void music::thread_icmp_ln87_fu_4542_p2() {
    icmp_ln87_fu_4542_p2 = (!tmp_6_fu_4510_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_fu_4510_p4.read() != ap_const_lv8_FF);
}

void music::thread_icmp_ln98_fu_3543_p2() {
    icmp_ln98_fu_3543_p2 = (!x_0_i_reg_1915.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_i_reg_1915.read() == ap_const_lv3_4);
}

void music::thread_icmp_ln99_fu_3571_p2() {
    icmp_ln99_fu_3571_p2 = (!y_0_i_reg_1926.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_i_reg_1926.read() == ap_const_lv3_4);
}

void music::thread_j_10_fu_4183_p2() {
    j_10_fu_4183_p2 = (!j23_0_in_i_reg_2212.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j23_0_in_i_reg_2212.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_11_fu_5609_p2() {
    j_11_fu_5609_p2 = (!j29_0_reg_2408.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j29_0_reg_2408.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_12_fu_5729_p2() {
    j_12_fu_5729_p2 = (!j31_0_reg_2467.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j31_0_reg_2467.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_14_fu_4464_p2() {
    j_14_fu_4464_p2 = (!j_0_in_i_reg_2332.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_0_in_i_reg_2332.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_1_fu_3337_p2() {
    j_1_fu_3337_p2 = (!j24_0_reg_1871.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j24_0_reg_1871.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_j_2_fu_3845_p2() {
    j_2_fu_3845_p2 = (!j_0_i_reg_2075.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_0_i_reg_2075.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_4_fu_3908_p2() {
    j_4_fu_3908_p2 = (!j18_0_i_reg_2108.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j18_0_i_reg_2108.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_6_fu_4586_p3() {
    j_6_fu_4586_p3 = (!and_ln87_1_fu_4580_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln87_1_fu_4580_p2.read()[0].to_bool())? j_14_reg_6925.read(): flag_0_i_reg_2322.read());
}

void music::thread_j_7_fu_4177_p2() {
    j_7_fu_4177_p2 = (!ap_const_lv32_1.is_01() || !j22_0_i_reg_2203.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j22_0_i_reg_2203.read()));
}

void music::thread_j_8_fu_4087_p2() {
    j_8_fu_4087_p2 = (!j20_0_i_reg_2180.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j20_0_i_reg_2180.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_j_9_fu_4308_p2() {
    j_9_fu_4308_p2 = (!j24_0_in_i_reg_2278.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j24_0_in_i_reg_2278.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void music::thread_j_fu_3274_p2() {
    j_fu_3274_p2 = (!j_0_reg_1859.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_reg_1859.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_jj_fu_3414_p2() {
    jj_fu_3414_p2 = (!jj_0_reg_1882.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(jj_0_reg_1882.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void music::thread_k_2_fu_5648_p2() {
    k_2_fu_5648_p2 = (!k_0_reg_2445.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_2445.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void music::thread_k_3_fu_5859_p2() {
    k_3_fu_5859_p2 = (!k34_0_reg_2549.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k34_0_reg_2549.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_4_fu_5760_p2() {
    k_4_fu_5760_p2 = (!k32_0_reg_2504.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k32_0_reg_2504.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_k_fu_3935_p2() {
    k_fu_3935_p2 = (!k_0_i_reg_2145.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_0_i_reg_2145.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_l_1_fu_3431_p2() {
    l_1_fu_3431_p2 = (!l25_0_reg_1893.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l25_0_reg_1893.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_2_fu_3608_p2() {
    l_2_fu_3608_p2 = (!l_0_i_reg_1961.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_i_reg_1961.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_l_fu_3234_p2() {
    l_fu_3234_p2 = (!l_0_reg_1837.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(l_0_reg_1837.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void music::thread_lhs_V_2_fu_5276_p1() {
    lhs_V_2_fu_5276_p1 = esl_sext<64,63>(t1_V_fu_5269_p3.read());
}

void music::thread_m_fu_4358_p2() {
    m_fu_4358_p2 = (!m_0_i_reg_2242.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<3>(): (sc_bigint<3>(m_0_i_reg_2242.read()) + sc_bigint<3>(ap_const_lv3_7));
}

void music::thread_n_1_fu_3254_p2() {
    n_1_fu_3254_p2 = (!n_0_reg_1848.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n_0_reg_1848.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_n_fu_3480_p2() {
    n_fu_3480_p2 = (!n26_0_reg_1904.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(n26_0_reg_1904.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_or_ln291_fu_4631_p2() {
    or_ln291_fu_4631_p2 = (tmp_38_fu_4617_p3.read() | ap_const_lv4_1);
}

void music::thread_or_ln300_fu_5500_p2() {
    or_ln300_fu_5500_p2 = (and_ln300_fu_5460_p2.read() | icmp_ln833_2_reg_7235.read());
}

void music::thread_or_ln311_fu_5469_p2() {
    or_ln311_fu_5469_p2 = (icmp_ln833_2_reg_7235.read() | select_ln271_fu_5453_p3.read());
}

void music::thread_or_ln87_1_fu_4570_p2() {
    or_ln87_1_fu_4570_p2 = (icmp_ln87_3_reg_6991.read() | icmp_ln87_2_reg_6986.read());
}

void music::thread_or_ln87_fu_4566_p2() {
    or_ln87_fu_4566_p2 = (icmp_ln87_1_reg_6981.read() | icmp_ln87_reg_6976.read());
}

void music::thread_p_Repl2_6_fu_5529_p3() {
    p_Repl2_6_fu_5529_p3 = (!and_ln300_reg_7424.read()[0].is_01())? sc_lv<1>(): ((and_ln300_reg_7424.read()[0].to_bool())? results_sign_V_2_reg_7121.read(): select_ln311_reg_7429.read());
}

void music::thread_p_Result_50_fu_4824_p3() {
    p_Result_50_fu_4824_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_7134.read());
}

void music::thread_p_Result_51_fu_4901_p3() {
    p_Result_51_fu_4901_p3 = esl_concat<61,1>(p_Result_i_i_i_155_reg_7199.read(), ap_const_lv1_1);
}

void music::thread_p_Result_52_fu_4918_p3() {
    p_Result_52_fu_4918_p3 = esl_concat<2,62>(ap_const_lv2_3, p_Result_s_fu_4908_p4.read());
}

void music::thread_p_Result_53_fu_5120_p3() {
    p_Result_53_fu_5120_p3 = esl_concat<1,7>(sin_basis_fu_5114_p2.read(), p_Result_i_i_reg_7242.read());
}

void music::thread_p_Result_54_fu_5349_p3() {
    p_Result_54_fu_5349_p3 = p_Val2_65_fu_5345_p1.read().range(63, 63);
}

void music::thread_p_Result_55_fu_5371_p3() {
    p_Result_55_fu_5371_p3 = esl_concat<1,3>(results_sign_V_2_reg_7121.read(), p_Val2_70_reg_7188.read());
}

void music::thread_p_Result_56_fu_5534_p4() {
    p_Result_56_fu_5534_p4 = esl_concat<12,52>(esl_concat<1,11>(p_Repl2_6_fu_5529_p3.read(), ret_V_20_reg_7434.read()), ret_V_21_reg_7439.read());
}

void music::thread_p_Result_i_i_i_fu_4786_p4() {
    p_Result_i_i_i_fu_4786_p4 = addr_V_fu_4778_p3.read().range(10, 7);
}

void music::thread_p_Result_s_fu_4908_p4() {
    p_Result_s_fu_4908_p4 = p_Result_51_fu_4901_p3.read().range(0, 61);
}

void music::thread_p_Val2_49_fu_4884_p3() {
    p_Val2_49_fu_4884_p3 = (!trunc_ln745_fu_4875_p1.read()[0].is_01())? sc_lv<124>(): ((trunc_ln745_fu_4875_p1.read()[0].to_bool())? Mx_bits_V_2_fu_4879_p2.read(): p_Val2_69_reg_7177.read());
}

void music::thread_p_Val2_65_fu_5345_p1() {
    p_Val2_65_fu_5345_p1 = grp_scaled_fixed2ieee_fu_2667_ap_return.read();
}

void music::thread_p_Val2_70_fu_4869_p3() {
    p_Val2_70_fu_4869_p3 = (!closepath_reg_7140.read()[0].is_01())? sc_lv<3>(): ((closepath_reg_7140.read()[0].to_bool())? ap_const_lv3_0: trunc_ln_i_i_reg_7183.read());
}

void music::thread_p_Val2_s_fu_4740_p1() {
    p_Val2_s_fu_4740_p1 = reg_2821.read();
}

void music::thread_p_address0() {
    p_address0 =  (sc_lv<2>) (zext_ln297_fu_4708_p1.read());
}

void music::thread_p_cast18_fu_2980_p1() {
    p_cast18_fu_2980_p1 = esl_zext<31,30>(tmp_41_fu_2970_p4.read());
}

void music::thread_p_cast_fu_2994_p1() {
    p_cast_fu_2994_p1 = esl_zext<31,30>(tmp_43_fu_2984_p4.read());
}

void music::thread_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read())) {
        p_ce0 = ap_const_logic_1;
    } else {
        p_ce0 = ap_const_logic_0;
    }
}

void music::thread_p_r_M_imag_15_fu_4390_p1() {
    p_r_M_imag_15_fu_4390_p1 = xor_ln444_1_fu_4384_p2.read();
}

void music::thread_p_r_M_imag_23_fu_5815_p1() {
    p_r_M_imag_23_fu_5815_p1 = xor_ln667_2_fu_5809_p2.read();
}

void music::thread_p_r_M_real_17_fu_4374_p1() {
    p_r_M_real_17_fu_4374_p1 = xor_ln444_fu_4368_p2.read();
}

void music::thread_p_t_imag_9_fu_5689_p1() {
    p_t_imag_9_fu_5689_p1 = xor_ln667_1_fu_5683_p2.read();
}

void music::thread_p_t_imag_fu_3657_p1() {
    p_t_imag_fu_3657_p1 = xor_ln667_fu_3651_p2.read();
}

void music::thread_q_1_fu_4246_p2() {
    q_1_fu_4246_p2 = (!ap_const_lv32_1.is_01() || !q_0_i_reg_2221.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(q_0_i_reg_2221.read()));
}

void music::thread_r_V_20_fu_5024_p2() {
    r_V_20_fu_5024_p2 = (!zext_ln1287_fu_5015_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7210.read() << (unsigned short)zext_ln1287_fu_5015_p1.read().to_uint();
}

void music::thread_r_V_22_fu_5060_p1() {
    r_V_22_fu_5060_p1 = esl_zext<98,49>(B_trunc_V_reg_7252.read());
}

void music::thread_r_V_25_fu_5100_p1() {
    r_V_25_fu_5100_p1 = esl_zext<98,49>(B_squared_V_reg_7264.read());
}

void music::thread_r_V_34_fu_4808_p2() {
    r_V_34_fu_4808_p2 = (!zext_ln744_fu_4805_p1.read().is_01())? sc_lv<256>(): ref_4oPi_table_256_V_q0.read() << (unsigned short)zext_ln744_fu_4805_p1.read().to_uint();
}

void music::thread_r_V_35_fu_4953_p2() {
    r_V_35_fu_4953_p2 = (!zext_ln1253_fu_4950_p1.read().is_01())? sc_lv<124>(): p_Val2_49_reg_7194.read() << (unsigned short)zext_ln1253_fu_4950_p1.read().to_uint();
}

void music::thread_r_V_36_fu_5029_p3() {
    r_V_36_fu_5029_p3 = (!isNeg_reg_7223.read()[0].is_01())? sc_lv<63>(): ((isNeg_reg_7223.read()[0].to_bool())? r_V_fu_5019_p2.read(): r_V_20_fu_5024_p2.read());
}

void music::thread_r_V_43_fu_5198_p0() {
    r_V_43_fu_5198_p0 =  (sc_lv<35>) (r_V_43_fu_5198_p00.read());
}

void music::thread_r_V_43_fu_5198_p00() {
    r_V_43_fu_5198_p00 = esl_zext<60,35>(B_fourth_power_V_reg_7314.read());
}

void music::thread_r_V_43_fu_5198_p1() {
    r_V_43_fu_5198_p1 =  (sc_lv<25>) (r_V_43_fu_5198_p10.read());
}

void music::thread_r_V_43_fu_5198_p10() {
    r_V_43_fu_5198_p10 = esl_zext<60,25>(fourth_order_double_16_reg_7339.read());
}

void music::thread_r_V_43_fu_5198_p2() {
    r_V_43_fu_5198_p2 = (!r_V_43_fu_5198_p0.read().is_01() || !r_V_43_fu_5198_p1.read().is_01())? sc_lv<60>(): sc_biguint<35>(r_V_43_fu_5198_p0.read()) * sc_biguint<25>(r_V_43_fu_5198_p1.read());
}

void music::thread_r_V_fu_5019_p2() {
    r_V_fu_5019_p2 = (!zext_ln1287_fu_5015_p1.read().is_01())? sc_lv<63>(): Mx_V_reg_7210.read() >> (unsigned short)zext_ln1287_fu_5015_p1.read().to_uint();
}

void music::thread_ref_4oPi_table_256_V_address0() {
    ref_4oPi_table_256_V_address0 =  (sc_lv<4>) (zext_ln635_fu_4796_p1.read());
}

void music::thread_ref_4oPi_table_256_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_1;
    } else {
        ref_4oPi_table_256_V_ce0 = ap_const_logic_0;
    }
}

void music::thread_ret_V_19_fu_5338_p2() {
    ret_V_19_fu_5338_p2 = (!ap_const_lv12_0.is_01() || !rhs_V_3_fu_5334_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(rhs_V_3_fu_5334_p1.read()));
}

void music::thread_ret_V_20_fu_5505_p3() {
    ret_V_20_fu_5505_p3 = (!or_ln300_fu_5500_p2.read()[0].is_01())? sc_lv<11>(): ((or_ln300_fu_5500_p2.read()[0].to_bool())? select_ln300_4_fu_5492_p3.read(): tmp_V_5_fu_5357_p4.read());
}

void music::thread_ret_V_21_fu_5521_p3() {
    ret_V_21_fu_5521_p3 = (!or_ln300_fu_5500_p2.read()[0].is_01())? sc_lv<52>(): ((or_ln300_fu_5500_p2.read()[0].to_bool())? select_ln300_6_fu_5513_p3.read(): tmp_V_6_fu_5367_p1.read());
}

void music::thread_ret_V_fu_5292_p2() {
    ret_V_fu_5292_p2 = (!sext_ln1146_fu_5289_p1.read().is_01() || !add_ln1146_fu_5283_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(sext_ln1146_fu_5289_p1.read()) + sc_biguint<64>(add_ln1146_fu_5283_p2.read()));
}

void music::thread_rhs_V_2_fu_5280_p1() {
    rhs_V_2_fu_5280_p1 = esl_sext<64,56>(trunc_ln6_reg_7379.read());
}

void music::thread_rhs_V_3_fu_5334_p1() {
    rhs_V_3_fu_5334_p1 = esl_sext<12,11>(select_ln272_fu_5317_p3.read());
}

void music::thread_select_ln271_fu_5453_p3() {
    select_ln271_fu_5453_p3 = (!cos_basis_reg_7270.read()[0].is_01())? sc_lv<1>(): ((cos_basis_reg_7270.read()[0].to_bool())? tmp_14_fu_5377_p18.read(): tmp_15_fu_5415_p18.read());
}

void music::thread_select_ln272_2_fu_5298_p3() {
    select_ln272_2_fu_5298_p3 = (!cos_basis_reg_7270.read()[0].is_01())? sc_lv<63>(): ((cos_basis_reg_7270.read()[0].to_bool())? ap_const_lv63_7FFFFFFFFFFFFFFF: Mx_V_reg_7210.read());
}

void music::thread_select_ln272_fu_5317_p3() {
    select_ln272_fu_5317_p3 = (!cos_basis_reg_7270.read()[0].is_01())? sc_lv<11>(): ((cos_basis_reg_7270.read()[0].to_bool())? ap_const_lv11_0: Ex_V_reg_7217.read());
}

void music::thread_select_ln300_4_fu_5492_p3() {
    select_ln300_4_fu_5492_p3 = (!xor_ln300_fu_5486_p2.read()[0].is_01())? sc_lv<11>(): ((xor_ln300_fu_5486_p2.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void music::thread_select_ln300_6_fu_5513_p3() {
    select_ln300_6_fu_5513_p3 = (!xor_ln300_fu_5486_p2.read()[0].is_01())? sc_lv<52>(): ((xor_ln300_fu_5486_p2.read()[0].to_bool())? ap_const_lv52_FFFFFFFFFFFFF: ap_const_lv52_0);
}

void music::thread_select_ln311_fu_5474_p3() {
    select_ln311_fu_5474_p3 = (!or_ln311_fu_5469_p2.read()[0].is_01())? sc_lv<1>(): ((or_ln311_fu_5469_p2.read()[0].to_bool())? xor_ln311_fu_5464_p2.read(): p_Result_54_fu_5349_p3.read());
}

void music::thread_select_ln482_fu_4943_p3() {
    select_ln482_fu_4943_p3 = (!closepath_reg_7140.read()[0].is_01())? sc_lv<11>(): ((closepath_reg_7140.read()[0].to_bool())? add_ln114_fu_4938_p2.read(): ap_const_lv11_0);
}

void music::thread_sext_ln1067_fu_4029_p1() {
    sext_ln1067_fu_4029_p1 = esl_sext<4,3>(xor_ln1067_fu_4023_p2.read());
}

void music::thread_sext_ln1146_fu_5289_p1() {
    sext_ln1146_fu_5289_p1 = esl_sext<64,49>(add_ln1146_2_reg_7394.read());
}

void music::thread_sext_ln1311_fu_5011_p1() {
    sext_ln1311_fu_5011_p1 = esl_sext<32,12>(ush_fu_5004_p3.read());
}

void music::thread_sext_ln1334_fu_4995_p1() {
    sext_ln1334_fu_4995_p1 = esl_sext<12,11>(Ex_V_reg_7217.read());
}

void music::thread_sext_ln54_fu_4171_p1() {
    sext_ln54_fu_4171_p1 = esl_sext<64,6>(add_ln54_fu_4166_p2.read());
}

void music::thread_sext_ln57_cast_fu_4213_p3() {
    sext_ln57_cast_fu_4213_p3 = esl_concat<4,2>(trunc_ln57_reg_6711.read(), ap_const_lv2_0);
}

void music::thread_sext_ln57_fu_4207_p1() {
    sext_ln57_fu_4207_p1 = esl_sext<64,34>(tmp_44_fu_4199_p3.read());
}

void music::thread_sext_ln59_1_fu_4240_p1() {
    sext_ln59_1_fu_4240_p1 = esl_sext<64,6>(add_ln59_1_fu_4235_p2.read());
}

void music::thread_sext_ln59_fu_4252_p1() {
    sext_ln59_fu_4252_p1 = esl_sext<64,6>(add_ln59_reg_6734.read());
}

void music::thread_sext_ln657_fu_5247_p1() {
    sext_ln657_fu_5247_p1 = esl_sext<49,48>(trunc_ln662_1_reg_7384.read());
}

void music::thread_sext_ln65_fu_4257_p1() {
    sext_ln65_fu_4257_p1 = esl_sext<32,3>(m_0_i_reg_2242.read());
}

void music::thread_sext_ln68_1_fu_4352_p1() {
    sext_ln68_1_fu_4352_p1 = esl_sext<64,6>(add_ln68_1_fu_4347_p2.read());
}

void music::thread_sext_ln68_2_cast_fu_4339_p3() {
    sext_ln68_2_cast_fu_4339_p3 = esl_concat<4,2>(trunc_ln68_1_fu_4335_p1.read(), ap_const_lv2_0);
}

void music::thread_sext_ln68_fu_4329_p1() {
    sext_ln68_fu_4329_p1 = esl_sext<64,6>(add_ln68_fu_4324_p2.read());
}

void music::thread_sext_ln70_fu_4281_p1() {
    sext_ln70_fu_4281_p1 = esl_sext<6,5>(tmp_40_fu_4273_p3.read());
}

void music::thread_sext_ln87_1_fu_4481_p1() {
    sext_ln87_1_fu_4481_p1 = esl_sext<64,32>(j_14_fu_4464_p2.read());
}

void music::thread_sext_ln87_fu_4476_p1() {
    sext_ln87_fu_4476_p1 = esl_sext<64,32>(flag_0_i_reg_2322.read());
}

void music::thread_sext_ln92_fu_4486_p1() {
    sext_ln92_fu_4486_p1 = esl_sext<64,32>(flag_0_i_reg_2322.read());
}

void music::thread_shl_ln1_fu_3449_p3() {
    shl_ln1_fu_3449_p3 = esl_concat<4,10>(l25_0_reg_1893.read(), ap_const_lv10_0);
}

void music::thread_shl_ln_fu_3240_p3() {
    shl_ln_fu_3240_p3 = esl_concat<4,10>(l_0_reg_1837.read(), ap_const_lv10_0);
}

void music::thread_sin_basis_fu_5114_p2() {
    sin_basis_fu_5114_p2 = (cos_basis_fu_5079_p10.read() ^ ap_const_lv1_1);
}

void music::thread_sort_index_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read())) {
        sort_index_address0 = sort_index_addr_2_reg_6950.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4470_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln92_fu_4486_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4470_p2.read()))) {
        sort_index_address0 =  (sc_lv<2>) (sext_ln87_fu_4476_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read())) {
        sort_index_address0 =  (sc_lv<2>) (zext_ln82_fu_4443_p1.read());
    } else {
        sort_index_address0 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln288_fu_4659_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read())) {
        sort_index_address1 = sort_index_addr_1_reg_6944.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4470_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (zext_ln93_fu_4491_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4470_p2.read()))) {
        sort_index_address1 =  (sc_lv<2>) (sext_ln87_1_fu_4481_p1.read());
    } else {
        sort_index_address1 =  (sc_lv<2>) ("XX");
    }
}

void music::thread_sort_index_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4470_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4470_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()))) {
        sort_index_ce0 = ap_const_logic_1;
    } else {
        sort_index_ce0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln86_fu_4470_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln86_fu_4470_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()))) {
        sort_index_ce1 = ap_const_logic_1;
    } else {
        sort_index_ce1 = ap_const_logic_0;
    }
}

void music::thread_sort_index_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read())) {
        sort_index_d0 = sort_index_load_reg_7001.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read())) {
        sort_index_d0 = i_0_i44_reg_2298.read();
    } else {
        sort_index_d0 =  (sc_lv<3>) ("XXX");
    }
}

void music::thread_sort_index_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state328.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_fu_4431_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()))) {
        sort_index_we0 = ap_const_logic_1;
    } else {
        sort_index_we0 = ap_const_logic_0;
    }
}

void music::thread_sort_index_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read())) {
        sort_index_we1 = ap_const_logic_1;
    } else {
        sort_index_we1 = ap_const_logic_0;
    }
}

void music::thread_sub_ln1311_fu_4998_p2() {
    sub_ln1311_fu_4998_p2 = (!ap_const_lv12_0.is_01() || !sext_ln1334_fu_4995_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_bigint<12>(sext_ln1334_fu_4995_p1.read()));
}

void music::thread_t1_V_fu_5269_p3() {
    t1_V_fu_5269_p3 = esl_concat<59,4>(p_Val2_58_reg_7319.read(), ap_const_lv4_0);
}

void music::thread_temp_mat_M_imag_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln320_1_fu_5800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_5_reg_7496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4073_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln22_1_fu_3860_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        temp_mat_M_imag_address0 = temp_mat_M_imag_add_1_reg_6276.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3126_p1.read());
    } else {
        temp_mat_M_imag_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_imag_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        temp_mat_M_imag_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_imag_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        temp_mat_M_imag_d0 = complex_M_imag_read_2_reg_2419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        temp_mat_M_imag_d0 = grp_fu_2773_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_imag_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_imag_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_imag_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln309_fu_5642_p2.read())))) {
        temp_mat_M_imag_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_imag_we0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln320_1_fu_5800_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_5_reg_7491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln47_1_fu_4108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln45_2_fu_4073_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln22_1_fu_3860_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        temp_mat_M_real_address0 = temp_mat_M_real_add_1_reg_6271.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_address0 =  (sc_lv<4>) (zext_ln1027_4_fu_3126_p1.read());
    } else {
        temp_mat_M_real_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void music::thread_temp_mat_M_real_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        temp_mat_M_real_ce0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_ce0 = ap_const_logic_0;
    }
}

void music::thread_temp_mat_M_real_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        temp_mat_M_real_d0 = complex_M_real_read_2_reg_2432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        temp_mat_M_real_d0 = grp_fu_2767_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_mat_M_real_d0 = ap_const_lv32_0;
    } else {
        temp_mat_M_real_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void music::thread_temp_mat_M_real_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln309_fu_5642_p2.read())))) {
        temp_mat_M_real_we0 = ap_const_logic_1;
    } else {
        temp_mat_M_real_we0 = ap_const_logic_0;
    }
}

void music::thread_theta_address0() {
    theta_address0 =  (sc_lv<9>) (zext_ln299_fu_4725_p1.read());
}

void music::thread_theta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read())) {
        theta_ce0 = ap_const_logic_1;
    } else {
        theta_ce0 = ap_const_logic_0;
    }
}

void music::thread_tmp_13_fu_3010_p3() {
    tmp_13_fu_3010_p3 = esl_concat<4,2>(phi_ln248_reg_1687.read(), phi_ln248_1_reg_1699.read());
}

void music::thread_tmp_20_fu_3437_p3() {
    tmp_20_fu_3437_p3 = esl_concat<4,2>(l25_0_reg_1893.read(), ap_const_lv2_0);
}

void music::thread_tmp_21_fu_3462_p3() {
    tmp_21_fu_3462_p3 = esl_concat<14,2>(add_ln278_fu_3457_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_22_fu_3285_p3() {
    tmp_22_fu_3285_p3 = esl_concat<14,2>(add_ln262_fu_3280_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_23_fu_3559_p3() {
    tmp_23_fu_3559_p3 = esl_concat<3,2>(x_0_i_reg_1915.read(), ap_const_lv2_0);
}

void music::thread_tmp_24_fu_3354_p3() {
    tmp_24_fu_3354_p3 = esl_concat<14,2>(add_ln267_fu_3349_p2.read(), ap_const_lv2_0);
}

void music::thread_tmp_26_fu_3614_p3() {
    tmp_26_fu_3614_p3 = esl_concat<4,2>(l_0_i_reg_1961.read(), ap_const_lv2_0);
}

void music::thread_tmp_30_fu_3827_p3() {
    tmp_30_fu_3827_p3 = esl_concat<3,2>(i_0_i_reg_2064.read(), ap_const_lv2_0);
}

void music::thread_tmp_31_fu_3995_p3() {
    tmp_31_fu_3995_p3 = esl_concat<3,2>(count_0_i_reg_2156.read(), ap_const_lv2_0);
}

void music::thread_tmp_32_fu_3890_p3() {
    tmp_32_fu_3890_p3 = esl_concat<3,2>(i17_0_i_reg_2097.read(), ap_const_lv2_0);
}

void music::thread_tmp_33_fu_4055_p3() {
    tmp_33_fu_4055_p3 = esl_concat<3,2>(i19_0_i_reg_2168.read(), ap_const_lv2_0);
}

void music::thread_tmp_34_fu_4144_p3() {
    tmp_34_fu_4144_p3 = esl_concat<2,2>(j_13_reg_2191.read(), ap_const_lv2_0);
}

void music::thread_tmp_35_fu_4130_p3() {
    tmp_35_fu_4130_p3 = esl_concat<2,2>(j_13_reg_2191.read(), j_13_reg_2191.read());
}

void music::thread_tmp_36_fu_3945_p3() {
    tmp_36_fu_3945_p3 = esl_concat<3,2>(k_0_i_reg_2145.read(), ap_const_lv2_0);
}

void music::thread_tmp_37_fu_4605_p3() {
    tmp_37_fu_4605_p3 = esl_concat<3,2>(x_0_reg_2341.read(), ap_const_lv2_0);
}

void music::thread_tmp_38_fu_4617_p3() {
    tmp_38_fu_4617_p3 = esl_concat<3,1>(x_0_reg_2341.read(), ap_const_lv1_0);
}

void music::thread_tmp_39_fu_4637_p3() {
    tmp_39_fu_4637_p3 = esl_concat<60,4>(ap_const_lv60_0, or_ln291_fu_4631_p2.read());
}

void music::thread_tmp_40_fu_4273_p3() {
    tmp_40_fu_4273_p3 = esl_concat<3,2>(m_0_i_reg_2242.read(), ap_const_lv2_0);
}

void music::thread_tmp_41_fu_2970_p4() {
    tmp_41_fu_2970_p4 = data_im.read().range(31, 2);
}

void music::thread_tmp_42_fu_4408_p3() {
    tmp_42_fu_4408_p3 = esl_concat<3,2>(i25_0_i_reg_2287.read(), ap_const_lv2_0);
}

void music::thread_tmp_43_fu_2984_p4() {
    tmp_43_fu_2984_p4 = data_re.read().range(31, 2);
}

void music::thread_tmp_44_fu_4199_p3() {
    tmp_44_fu_4199_p3 = esl_concat<32,2>(j_10_fu_4183_p2.read(), j_13_reg_2191.read());
}

void music::thread_tmp_45_fu_5579_p3() {
    tmp_45_fu_5579_p3 = esl_concat<3,1>(i_0_reg_2397.read(), ap_const_lv1_0);
}

void music::thread_tmp_46_fu_5591_p3() {
    tmp_46_fu_5591_p3 = esl_concat<3,2>(i_0_reg_2397.read(), ap_const_lv2_0);
}

void music::thread_tmp_49_fu_5711_p3() {
    tmp_49_fu_5711_p3 = esl_concat<9,2>(i30_0_reg_2456.read(), ap_const_lv2_0);
}

void music::thread_tmp_50_fu_5619_p3() {
    tmp_50_fu_5619_p3 = esl_concat<3,1>(j29_0_reg_2408.read(), ap_const_lv1_0);
}

void music::thread_tmp_51_fu_5841_p3() {
    tmp_51_fu_5841_p3 = esl_concat<9,2>(i33_0_reg_2526.read(), ap_const_lv2_0);
}

void music::thread_tmp_52_fu_5766_p3() {
    tmp_52_fu_5766_p3 = esl_concat<3,2>(k32_0_reg_2504.read(), ap_const_lv2_0);
}

void music::thread_tmp_53_fu_3048_p3() {
    tmp_53_fu_3048_p3 = esl_concat<2,2>(phi_ln249_reg_1710.read(), phi_ln249_1_reg_1722.read());
}

void music::thread_tmp_54_fu_3086_p3() {
    tmp_54_fu_3086_p3 = esl_concat<2,1>(phi_ln250_reg_1733.read(), phi_ln250_1_reg_1745.read());
}

void music::thread_tmp_55_fu_3118_p3() {
    tmp_55_fu_3118_p3 = esl_concat<2,2>(phi_ln251_reg_1756.read(), phi_ln251_1_reg_1768.read());
}

void music::thread_tmp_56_fu_3156_p3() {
    tmp_56_fu_3156_p3 = esl_concat<9,2>(phi_ln252_reg_1779.read(), phi_ln252_1_reg_1791.read());
}

void music::thread_tmp_57_fu_3675_p3() {
    tmp_57_fu_3675_p3 = esl_concat<2,2>(phi_ln11_reg_1972.read(), phi_ln11_1_reg_1984.read());
}

void music::thread_tmp_58_fu_3713_p3() {
    tmp_58_fu_3713_p3 = esl_concat<2,2>(phi_ln12_reg_1995.read(), phi_ln12_1_reg_2007.read());
}

void music::thread_tmp_59_fu_3751_p3() {
    tmp_59_fu_3751_p3 = esl_concat<2,2>(phi_ln13_reg_2018.read(), phi_ln13_1_reg_2030.read());
}

void music::thread_tmp_60_fu_3789_p3() {
    tmp_60_fu_3789_p3 = esl_concat<2,2>(phi_ln14_reg_2041.read(), phi_ln14_1_reg_2053.read());
}

void music::thread_tmp_61_fu_4261_p3() {
    tmp_61_fu_4261_p3 = m_0_i_reg_2242.read().range(2, 2);
}

void music::thread_tmp_6_fu_4510_p4() {
    tmp_6_fu_4510_p4 = bitcast_ln87_fu_4506_p1.read().range(30, 23);
}

void music::thread_tmp_9_fu_4528_p4() {
    tmp_9_fu_4528_p4 = bitcast_ln87_1_fu_4524_p1.read().range(30, 23);
}

void music::thread_tmp_V_4_fu_4762_p1() {
    tmp_V_4_fu_4762_p1 = p_Val2_s_fu_4740_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_5_fu_5357_p4() {
    tmp_V_5_fu_5357_p4 = p_Val2_65_fu_5345_p1.read().range(62, 52);
}

void music::thread_tmp_V_6_fu_5367_p1() {
    tmp_V_6_fu_5367_p1 = p_Val2_65_fu_5345_p1.read().range(52-1, 0);
}

void music::thread_tmp_V_fu_4752_p4() {
    tmp_V_fu_4752_p4 = p_Val2_s_fu_4740_p1.read().range(62, 52);
}

void music::thread_tmp_i_i_i1_fu_4926_p3() {
    tmp_i_i_i1_fu_4926_p3 = esl_cttz<64,64>(p_Result_52_fu_4918_p3.read());
}

void music::thread_trunc_ln54_fu_4162_p1() {
    trunc_ln54_fu_4162_p1 = j22_0_i_reg_2203.read().range(6-1, 0);
}

void music::thread_trunc_ln57_fu_4195_p1() {
    trunc_ln57_fu_4195_p1 = j_10_fu_4183_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln59_fu_4226_p1() {
    trunc_ln59_fu_4226_p1 = q_0_i_reg_2221.read().range(6-1, 0);
}

void music::thread_trunc_ln601_fu_4801_p1() {
    trunc_ln601_fu_4801_p1 = addr_V_fu_4778_p3.read().range(7-1, 0);
}

void music::thread_trunc_ln68_1_fu_4335_p1() {
    trunc_ln68_1_fu_4335_p1 = j_9_fu_4308_p2.read().range(4-1, 0);
}

void music::thread_trunc_ln68_fu_4320_p1() {
    trunc_ln68_fu_4320_p1 = j_9_fu_4308_p2.read().range(6-1, 0);
}

void music::thread_trunc_ln745_fu_4875_p1() {
    trunc_ln745_fu_4875_p1 = p_Val2_70_fu_4869_p3.read().range(1-1, 0);
}

void music::thread_trunc_ln87_1_fu_4538_p1() {
    trunc_ln87_1_fu_4538_p1 = bitcast_ln87_1_fu_4524_p1.read().range(23-1, 0);
}

void music::thread_trunc_ln87_fu_4520_p1() {
    trunc_ln87_fu_4520_p1 = bitcast_ln87_fu_4506_p1.read().range(23-1, 0);
}

void music::thread_ush_fu_5004_p3() {
    ush_fu_5004_p3 = (!isNeg_reg_7223.read()[0].is_01())? sc_lv<12>(): ((isNeg_reg_7223.read()[0].to_bool())? sub_ln1311_fu_4998_p2.read(): sext_ln1334_fu_4995_p1.read());
}

void music::thread_w_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read())) {
        w_address0 =  (sc_lv<9>) (zext_ln343_fu_5909_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read())) {
        w_address0 = w_addr_1_reg_7713.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        w_address0 =  (sc_lv<9>) (zext_ln337_reg_7665.read());
    } else {
        w_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void music::thread_w_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) && 
          !(esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_1) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_user_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, P_sm_last_V_1_state.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(P_sm_data_1_state.read(), ap_const_lv2_3)) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_user_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, P_sm_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, P_sm_last_V_1_state.read())))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read()))) {
        w_ce0 = ap_const_logic_1;
    } else {
        w_ce0 = ap_const_logic_0;
    }
}

void music::thread_w_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state447.read())) {
        w_we0 = ap_const_logic_1;
    } else {
        w_we0 = ap_const_logic_0;
    }
}

void music::thread_x_1_fu_4599_p2() {
    x_1_fu_4599_p2 = (!x_0_reg_2341.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_2341.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_2_fu_4702_p2() {
    x_2_fu_4702_p2 = (!x27_0_reg_2363.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x27_0_reg_2363.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_x_fu_3549_p2() {
    x_fu_3549_p2 = (!x_0_i_reg_1915.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_i_reg_1915.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_xor_ln1067_fu_4023_p2() {
    xor_ln1067_fu_4023_p2 = (count_0_i_reg_2156.read() ^ ap_const_lv3_4);
}

void music::thread_xor_ln250_fu_3080_p2() {
    xor_ln250_fu_3080_p2 = (phi_ln250_1_reg_1745.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln300_fu_5486_p2() {
    xor_ln300_fu_5486_p2 = (and_ln300_2_fu_5482_p2.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln301_fu_5556_p2() {
    xor_ln301_fu_5556_p2 = (bitcast_ln301_fu_5552_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln311_fu_5464_p2() {
    xor_ln311_fu_5464_p2 = (icmp_ln833_2_reg_7235.read() ^ ap_const_lv1_1);
}

void music::thread_xor_ln444_1_fu_4384_p2() {
    xor_ln444_1_fu_4384_p2 = (bitcast_ln444_2_fu_4380_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln444_fu_4368_p2() {
    xor_ln444_fu_4368_p2 = (bitcast_ln444_fu_4364_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_1_fu_5683_p2() {
    xor_ln667_1_fu_5683_p2 = (bitcast_ln667_2_fu_5679_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_2_fu_5809_p2() {
    xor_ln667_2_fu_5809_p2 = (bitcast_ln667_4_fu_5805_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_xor_ln667_fu_3651_p2() {
    xor_ln667_fu_3651_p2 = (bitcast_ln667_fu_3648_p1.read() ^ ap_const_lv32_80000000);
}

void music::thread_y_1_fu_4719_p2() {
    y_1_fu_4719_p2 = (!y28_0_reg_2386.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(y28_0_reg_2386.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void music::thread_y_2_fu_4653_p2() {
    y_2_fu_4653_p2 = (!y_0_reg_2352.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_2352.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_y_fu_3577_p2() {
    y_fu_3577_p2 = (!y_0_i_reg_1926.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_i_reg_1926.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void music::thread_zext_ln1027_10_fu_3200_p1() {
    zext_ln1027_10_fu_3200_p1 = esl_zext<11,9>(phi_ln253_1_reg_1826.read());
}

void music::thread_zext_ln1027_11_fu_3210_p1() {
    zext_ln1027_11_fu_3210_p1 = esl_zext<64,11>(add_ln1027_fu_3204_p2.read());
}

void music::thread_zext_ln1027_2_fu_3056_p1() {
    zext_ln1027_2_fu_3056_p1 = esl_zext<64,4>(tmp_53_fu_3048_p3.read());
}

void music::thread_zext_ln1027_3_fu_3094_p1() {
    zext_ln1027_3_fu_3094_p1 = esl_zext<64,3>(tmp_54_fu_3086_p3.read());
}

void music::thread_zext_ln1027_4_fu_3126_p1() {
    zext_ln1027_4_fu_3126_p1 = esl_zext<64,4>(tmp_55_fu_3118_p3.read());
}

void music::thread_zext_ln1027_5_fu_3164_p1() {
    zext_ln1027_5_fu_3164_p1 = esl_zext<64,11>(tmp_56_fu_3156_p3.read());
}

void music::thread_zext_ln1027_6_fu_3683_p1() {
    zext_ln1027_6_fu_3683_p1 = esl_zext<64,4>(tmp_57_fu_3675_p3.read());
}

void music::thread_zext_ln1027_7_fu_3721_p1() {
    zext_ln1027_7_fu_3721_p1 = esl_zext<64,4>(tmp_58_fu_3713_p3.read());
}

void music::thread_zext_ln1027_8_fu_3759_p1() {
    zext_ln1027_8_fu_3759_p1 = esl_zext<64,4>(tmp_59_fu_3751_p3.read());
}

void music::thread_zext_ln1027_9_fu_3797_p1() {
    zext_ln1027_9_fu_3797_p1 = esl_zext<64,4>(tmp_60_fu_3789_p3.read());
}

void music::thread_zext_ln1027_fu_3018_p1() {
    zext_ln1027_fu_3018_p1 = esl_zext<64,6>(tmp_13_fu_3010_p3.read());
}

void music::thread_zext_ln102_1_fu_3631_p1() {
    zext_ln102_1_fu_3631_p1 = esl_zext<64,7>(add_ln102_fu_3626_p2.read());
}

void music::thread_zext_ln102_2_fu_3642_p1() {
    zext_ln102_2_fu_3642_p1 = esl_zext<64,7>(add_ln102_1_fu_3637_p2.read());
}

void music::thread_zext_ln102_fu_3622_p1() {
    zext_ln102_fu_3622_p1 = esl_zext<7,6>(tmp_26_fu_3614_p3.read());
}

void music::thread_zext_ln1044_1_fu_4003_p1() {
    zext_ln1044_1_fu_4003_p1 = esl_zext<6,5>(tmp_31_fu_3995_p3.read());
}

void music::thread_zext_ln1044_2_fu_4013_p1() {
    zext_ln1044_2_fu_4013_p1 = esl_zext<64,6>(add_ln1044_fu_4007_p2.read());
}

void music::thread_zext_ln1044_fu_3991_p1() {
    zext_ln1044_fu_3991_p1 = esl_zext<6,3>(count_0_i_reg_2156.read());
}

void music::thread_zext_ln104_1_fu_3583_p1() {
    zext_ln104_1_fu_3583_p1 = esl_zext<7,3>(y_0_i_reg_1926.read());
}

void music::thread_zext_ln104_2_fu_3587_p1() {
    zext_ln104_2_fu_3587_p1 = esl_zext<6,3>(y_0_i_reg_1926.read());
}

void music::thread_zext_ln104_3_fu_3596_p1() {
    zext_ln104_3_fu_3596_p1 = esl_zext<64,6>(add_ln104_fu_3591_p2.read());
}

void music::thread_zext_ln104_fu_3555_p1() {
    zext_ln104_fu_3555_p1 = esl_zext<7,3>(x_0_i_reg_1915.read());
}

void music::thread_zext_ln1067_fu_4033_p1() {
    zext_ln1067_fu_4033_p1 = esl_zext<64,4>(sext_ln1067_fu_4029_p1.read());
}

void music::thread_zext_ln1146_1_fu_5259_p1() {
    zext_ln1146_1_fu_5259_p1 = esl_zext<49,38>(add_ln1146_1_fu_5253_p2.read());
}

void music::thread_zext_ln1146_fu_5250_p1() {
    zext_ln1146_fu_5250_p1 = esl_zext<38,29>(tmp_48_reg_7374.read());
}

void music::thread_zext_ln1253_fu_4950_p1() {
    zext_ln1253_fu_4950_p1 = esl_zext<124,6>(Mx_zeros_V_reg_7204.read());
}

void music::thread_zext_ln1287_fu_5015_p1() {
    zext_ln1287_fu_5015_p1 = esl_zext<63,32>(sext_ln1311_fu_5011_p1.read());
}

void music::thread_zext_ln21_fu_3835_p1() {
    zext_ln21_fu_3835_p1 = esl_zext<6,5>(tmp_30_fu_3827_p3.read());
}

void music::thread_zext_ln22_1_fu_3860_p1() {
    zext_ln22_1_fu_3860_p1 = esl_zext<64,6>(add_ln22_fu_3855_p2.read());
}

void music::thread_zext_ln22_fu_3851_p1() {
    zext_ln22_fu_3851_p1 = esl_zext<6,3>(j_0_i_reg_2075.read());
}

void music::thread_zext_ln261_1_fu_3260_p1() {
    zext_ln261_1_fu_3260_p1 = esl_zext<17,3>(n_0_reg_1848.read());
}

void music::thread_zext_ln261_fu_3264_p1() {
    zext_ln261_fu_3264_p1 = esl_zext<14,11>(j_0_reg_1859.read());
}

void music::thread_zext_ln262_1_fu_3302_p1() {
    zext_ln262_1_fu_3302_p1 = esl_zext<31,17>(add_ln262_1_fu_3297_p2.read());
}

void music::thread_zext_ln262_2_fu_3321_p1() {
    zext_ln262_2_fu_3321_p1 = esl_zext<64,11>(j_0_reg_1859.read());
}

void music::thread_zext_ln262_3_fu_3311_p1() {
    zext_ln262_3_fu_3311_p1 = esl_zext<64,31>(add_ln262_2_reg_6073.read());
}

void music::thread_zext_ln262_fu_3293_p1() {
    zext_ln262_fu_3293_p1 = esl_zext<17,16>(tmp_22_fu_3285_p3.read());
}

void music::thread_zext_ln266_fu_3327_p1() {
    zext_ln266_fu_3327_p1 = esl_zext<14,11>(j24_0_reg_1871.read());
}

void music::thread_zext_ln267_1_fu_3362_p1() {
    zext_ln267_1_fu_3362_p1 = esl_zext<17,16>(tmp_24_fu_3354_p3.read());
}

void music::thread_zext_ln267_2_fu_3371_p1() {
    zext_ln267_2_fu_3371_p1 = esl_zext<31,17>(add_ln267_1_fu_3366_p2.read());
}

void music::thread_zext_ln267_3_fu_3380_p1() {
    zext_ln267_3_fu_3380_p1 = esl_zext<64,31>(add_ln267_2_reg_6107.read());
}

void music::thread_zext_ln267_fu_3343_p1() {
    zext_ln267_fu_3343_p1 = esl_zext<64,11>(j24_0_reg_1871.read());
}

void music::thread_zext_ln268_fu_3394_p1() {
    zext_ln268_fu_3394_p1 = esl_zext<64,31>(add_ln268_reg_6128.read());
}

void music::thread_zext_ln273_fu_3404_p1() {
    zext_ln273_fu_3404_p1 = esl_zext<14,11>(jj_0_reg_1882.read());
}

void music::thread_zext_ln274_fu_3420_p1() {
    zext_ln274_fu_3420_p1 = esl_zext<64,11>(jj_0_reg_1882.read());
}

void music::thread_zext_ln276_fu_3470_p1() {
    zext_ln276_fu_3470_p1 = esl_zext<17,16>(tmp_21_fu_3462_p3.read());
}

void music::thread_zext_ln278_1_fu_3486_p1() {
    zext_ln278_1_fu_3486_p1 = esl_zext<7,3>(n26_0_reg_1904.read());
}

void music::thread_zext_ln278_2_fu_3490_p1() {
    zext_ln278_2_fu_3490_p1 = esl_zext<17,3>(n26_0_reg_1904.read());
}

void music::thread_zext_ln278_3_fu_3499_p1() {
    zext_ln278_3_fu_3499_p1 = esl_zext<31,17>(add_ln278_1_fu_3494_p2.read());
}

void music::thread_zext_ln278_4_fu_3518_p1() {
    zext_ln278_4_fu_3518_p1 = esl_zext<64,31>(add_ln278_2_reg_6203.read());
}

void music::thread_zext_ln278_5_fu_3538_p1() {
    zext_ln278_5_fu_3538_p1 = esl_zext<64,7>(add_ln278_3_reg_6213.read());
}

void music::thread_zext_ln278_fu_3445_p1() {
    zext_ln278_fu_3445_p1 = esl_zext<7,6>(tmp_20_fu_3437_p3.read());
}

void music::thread_zext_ln279_fu_3528_p1() {
    zext_ln279_fu_3528_p1 = esl_zext<64,31>(add_ln279_reg_6208.read());
}

void music::thread_zext_ln288_fu_4659_p1() {
    zext_ln288_fu_4659_p1 = esl_zext<64,3>(y_0_reg_2352.read());
}

void music::thread_zext_ln289_1_fu_4625_p1() {
    zext_ln289_1_fu_4625_p1 = esl_zext<64,4>(tmp_38_fu_4617_p3.read());
}

void music::thread_zext_ln289_2_fu_4664_p1() {
    zext_ln289_2_fu_4664_p1 = esl_zext<6,3>(y_0_reg_2352.read());
}

void music::thread_zext_ln289_3_fu_4673_p1() {
    zext_ln289_3_fu_4673_p1 = esl_zext<64,6>(add_ln289_reg_7047.read());
}

void music::thread_zext_ln289_fu_4613_p1() {
    zext_ln289_fu_4613_p1 = esl_zext<6,5>(tmp_37_fu_4605_p3.read());
}

void music::thread_zext_ln297_fu_4708_p1() {
    zext_ln297_fu_4708_p1 = esl_zext<64,3>(x27_0_reg_2363.read());
}

void music::thread_zext_ln299_fu_4725_p1() {
    zext_ln299_fu_4725_p1 = esl_zext<64,9>(y28_0_reg_2386.read());
}

void music::thread_zext_ln300_1_fu_5547_p1() {
    zext_ln300_1_fu_5547_p1 = esl_zext<64,11>(add_ln300_reg_7106.read());
}

void music::thread_zext_ln300_fu_4730_p1() {
    zext_ln300_fu_4730_p1 = esl_zext<11,9>(y28_0_reg_2386.read());
}

void music::thread_zext_ln306_fu_5599_p1() {
    zext_ln306_fu_5599_p1 = esl_zext<6,5>(tmp_46_fu_5591_p3.read());
}

void music::thread_zext_ln30_fu_3898_p1() {
    zext_ln30_fu_3898_p1 = esl_zext<6,5>(tmp_32_fu_3890_p3.read());
}

void music::thread_zext_ln310_1_fu_5654_p1() {
    zext_ln310_1_fu_5654_p1 = esl_zext<5,2>(k_0_reg_2445.read());
}

void music::thread_zext_ln310_2_fu_5674_p1() {
    zext_ln310_2_fu_5674_p1 = esl_zext<64,5>(add_ln310_reg_7509.read());
}

void music::thread_zext_ln310_3_fu_5668_p1() {
    zext_ln310_3_fu_5668_p1 = esl_zext<64,5>(add_ln310_1_fu_5663_p2.read());
}

void music::thread_zext_ln310_fu_5615_p1() {
    zext_ln310_fu_5615_p1 = esl_zext<6,3>(j29_0_reg_2408.read());
}

void music::thread_zext_ln312_1_fu_5627_p1() {
    zext_ln312_1_fu_5627_p1 = esl_zext<5,4>(tmp_50_fu_5619_p3.read());
}

void music::thread_zext_ln312_2_fu_5636_p1() {
    zext_ln312_2_fu_5636_p1 = esl_zext<64,6>(add_ln312_fu_5631_p2.read());
}

void music::thread_zext_ln312_fu_5587_p1() {
    zext_ln312_fu_5587_p1 = esl_zext<5,4>(tmp_45_fu_5579_p3.read());
}

void music::thread_zext_ln316_fu_5719_p1() {
    zext_ln316_fu_5719_p1 = esl_zext<12,11>(tmp_49_fu_5711_p3.read());
}

void music::thread_zext_ln320_1_fu_5800_p1() {
    zext_ln320_1_fu_5800_p1 = esl_zext<64,6>(add_ln320_reg_7611.read());
}

void music::thread_zext_ln320_2_fu_5794_p1() {
    zext_ln320_2_fu_5794_p1 = esl_zext<64,11>(add_ln320_1_fu_5789_p2.read());
}

void music::thread_zext_ln320_fu_5774_p1() {
    zext_ln320_fu_5774_p1 = esl_zext<6,5>(tmp_52_fu_5766_p3.read());
}

void music::thread_zext_ln322_1_fu_5735_p1() {
    zext_ln322_1_fu_5735_p1 = esl_zext<6,3>(j31_0_reg_2467.read());
}

void music::thread_zext_ln322_2_fu_5739_p1() {
    zext_ln322_2_fu_5739_p1 = esl_zext<12,3>(j31_0_reg_2467.read());
}

void music::thread_zext_ln322_3_fu_5748_p1() {
    zext_ln322_3_fu_5748_p1 = esl_zext<64,12>(add_ln322_fu_5743_p2.read());
}

void music::thread_zext_ln322_fu_5707_p1() {
    zext_ln322_fu_5707_p1 = esl_zext<11,9>(i30_0_reg_2456.read());
}

void music::thread_zext_ln336_fu_5849_p1() {
    zext_ln336_fu_5849_p1 = esl_zext<12,11>(tmp_51_fu_5841_p3.read());
}

void music::thread_zext_ln337_1_fu_5837_p1() {
    zext_ln337_1_fu_5837_p1 = esl_zext<11,9>(i33_0_reg_2526.read());
}

void music::thread_zext_ln337_2_fu_5865_p1() {
    zext_ln337_2_fu_5865_p1 = esl_zext<12,3>(k34_0_reg_2549.read());
}

void music::thread_zext_ln337_3_fu_5874_p1() {
    zext_ln337_3_fu_5874_p1 = esl_zext<64,12>(add_ln337_fu_5869_p2.read());
}

void music::thread_zext_ln337_4_fu_5891_p1() {
    zext_ln337_4_fu_5891_p1 = esl_zext<64,11>(add_ln337_1_fu_5886_p2.read());
}

void music::thread_zext_ln337_fu_5833_p1() {
    zext_ln337_fu_5833_p1 = esl_zext<64,9>(i33_0_reg_2526.read());
}

void music::thread_zext_ln343_fu_5909_p1() {
    zext_ln343_fu_5909_p1 = esl_zext<64,9>(p_016_rec_reg_2571.read());
}

void music::thread_zext_ln34_1_fu_3953_p1() {
    zext_ln34_1_fu_3953_p1 = esl_zext<6,5>(tmp_36_fu_3945_p3.read());
}

void music::thread_zext_ln34_2_fu_3962_p1() {
    zext_ln34_2_fu_3962_p1 = esl_zext<64,6>(add_ln34_fu_3957_p2.read());
}

void music::thread_zext_ln34_3_fu_3973_p1() {
    zext_ln34_3_fu_3973_p1 = esl_zext<64,6>(add_ln34_1_fu_3968_p2.read());
}

void music::thread_zext_ln34_fu_3941_p1() {
    zext_ln34_fu_3941_p1 = esl_zext<6,3>(k_0_i_reg_2145.read());
}

void music::thread_zext_ln36_1_fu_3923_p1() {
    zext_ln36_1_fu_3923_p1 = esl_zext<64,6>(add_ln36_fu_3918_p2.read());
}

void music::thread_zext_ln36_fu_3914_p1() {
    zext_ln36_fu_3914_p1 = esl_zext<6,3>(j18_0_i_reg_2108.read());
}

void music::thread_zext_ln41_fu_4018_p1() {
    zext_ln41_fu_4018_p1 = esl_zext<64,3>(count_0_i_reg_2156.read());
}

void music::thread_zext_ln45_1_fu_4063_p1() {
    zext_ln45_1_fu_4063_p1 = esl_zext<6,5>(tmp_33_fu_4055_p3.read());
}

void music::thread_zext_ln45_2_fu_4073_p1() {
    zext_ln45_2_fu_4073_p1 = esl_zext<64,6>(add_ln45_fu_4067_p2.read());
}

void music::thread_zext_ln45_fu_4051_p1() {
    zext_ln45_fu_4051_p1 = esl_zext<6,3>(i19_0_i_reg_2168.read());
}

void music::thread_zext_ln47_1_fu_4108_p1() {
    zext_ln47_1_fu_4108_p1 = esl_zext<64,6>(add_ln47_fu_4103_p2.read());
}

void music::thread_zext_ln47_fu_4099_p1() {
    zext_ln47_fu_4099_p1 = esl_zext<6,3>(j20_0_i_reg_2180.read());
}

void music::thread_zext_ln498_fu_5127_p1() {
    zext_ln498_fu_5127_p1 = esl_zext<64,8>(p_Result_53_fu_5120_p3.read());
}

void music::thread_zext_ln51_fu_4114_p1() {
    zext_ln51_fu_4114_p1 = esl_zext<32,2>(j_13_reg_2191.read());
}

void music::thread_zext_ln52_1_fu_4138_p1() {
    zext_ln52_1_fu_4138_p1 = esl_zext<64,4>(tmp_35_fu_4130_p3.read());
}

void music::thread_zext_ln52_fu_4152_p1() {
    zext_ln52_fu_4152_p1 = esl_zext<6,4>(tmp_34_fu_4144_p3.read());
}

void music::thread_zext_ln635_fu_4796_p1() {
    zext_ln635_fu_4796_p1 = esl_zext<64,4>(p_Result_i_i_i_fu_4786_p4.read());
}

void music::thread_zext_ln655_fu_4968_p1() {
    zext_ln655_fu_4968_p1 = esl_zext<11,6>(Mx_zeros_V_reg_7204.read());
}

void music::thread_zext_ln662_fu_5244_p1() {
    zext_ln662_fu_5244_p1 = esl_zext<38,37>(tmp_47_reg_7389.read());
}

void music::thread_zext_ln68_fu_4269_p1() {
    zext_ln68_fu_4269_p1 = esl_zext<6,3>(m_0_i_reg_2242.read());
}

void music::thread_zext_ln70_fu_4291_p1() {
    zext_ln70_fu_4291_p1 = esl_zext<64,6>(add_ln70_fu_4285_p2.read());
}

void music::thread_zext_ln72_fu_4302_p1() {
    zext_ln72_fu_4302_p1 = esl_zext<64,6>(add_ln72_fu_4297_p2.read());
}

void music::thread_zext_ln744_fu_4805_p1() {
    zext_ln744_fu_4805_p1 = esl_zext<256,7>(trunc_ln601_reg_7151.read());
}

void music::thread_zext_ln76_1_fu_4425_p1() {
    zext_ln76_1_fu_4425_p1 = esl_zext<64,6>(add_ln76_fu_4420_p2.read());
}

void music::thread_zext_ln76_fu_4416_p1() {
    zext_ln76_fu_4416_p1 = esl_zext<6,5>(tmp_42_fu_4408_p3.read());
}

void music::thread_zext_ln82_fu_4443_p1() {
    zext_ln82_fu_4443_p1 = esl_zext<64,3>(i_0_i44_reg_2298.read());
}

void music::thread_zext_ln85_fu_4448_p1() {
    zext_ln85_fu_4448_p1 = esl_zext<32,2>(flag_reg_2310.read());
}

void music::thread_zext_ln87_1_fu_4501_p1() {
    zext_ln87_1_fu_4501_p1 = esl_zext<64,3>(sort_index_q1.read());
}

void music::thread_zext_ln87_fu_4496_p1() {
    zext_ln87_fu_4496_p1 = esl_zext<64,3>(sort_index_q0.read());
}

void music::thread_zext_ln93_fu_4491_p1() {
    zext_ln93_fu_4491_p1 = esl_zext<64,2>(flag_reg_2310.read());
}

void music::thread_zext_ln99_fu_3567_p1() {
    zext_ln99_fu_3567_p1 = esl_zext<6,5>(tmp_23_fu_3559_p3.read());
}

}

