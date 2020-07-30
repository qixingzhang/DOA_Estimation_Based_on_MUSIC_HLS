#include "music.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void music::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"X_address0\" :  \"" << X_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"X_ce0\" :  \"" << X_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"X_q0\" :  \"" << X_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_real_address0\" :  \"" << Xj_f_M_real_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_real_ce0\" :  \"" << Xj_f_M_real_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_real_we0\" :  \"" << Xj_f_M_real_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_real_d0\" :  \"" << Xj_f_M_real_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Xj_f_M_real_q0\" :  \"" << Xj_f_M_real_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_imag_address0\" :  \"" << Xj_f_M_imag_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_imag_ce0\" :  \"" << Xj_f_M_imag_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_imag_we0\" :  \"" << Xj_f_M_imag_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Xj_f_M_imag_d0\" :  \"" << Xj_f_M_imag_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Xj_f_M_imag_q0\" :  \"" << Xj_f_M_imag_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"P_sm_address0\" :  \"" << P_sm_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"P_sm_ce0\" :  \"" << P_sm_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"P_sm_we0\" :  \"" << P_sm_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"P_sm_d0\" :  \"" << P_sm_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

