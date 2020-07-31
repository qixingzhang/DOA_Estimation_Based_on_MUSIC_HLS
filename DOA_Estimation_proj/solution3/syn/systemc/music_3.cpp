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
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_data_AWVALID\" :  \"" << m_axi_data_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_AWREADY\" :  \"" << m_axi_data_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWADDR\" :  \"" << m_axi_data_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWID\" :  \"" << m_axi_data_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWLEN\" :  \"" << m_axi_data_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWSIZE\" :  \"" << m_axi_data_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWBURST\" :  \"" << m_axi_data_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWLOCK\" :  \"" << m_axi_data_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWCACHE\" :  \"" << m_axi_data_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWPROT\" :  \"" << m_axi_data_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWQOS\" :  \"" << m_axi_data_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWREGION\" :  \"" << m_axi_data_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_AWUSER\" :  \"" << m_axi_data_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_WVALID\" :  \"" << m_axi_data_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_WREADY\" :  \"" << m_axi_data_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_WDATA\" :  \"" << m_axi_data_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_WSTRB\" :  \"" << m_axi_data_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_WLAST\" :  \"" << m_axi_data_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_WID\" :  \"" << m_axi_data_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_WUSER\" :  \"" << m_axi_data_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARVALID\" :  \"" << m_axi_data_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_ARREADY\" :  \"" << m_axi_data_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARADDR\" :  \"" << m_axi_data_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARID\" :  \"" << m_axi_data_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARLEN\" :  \"" << m_axi_data_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARSIZE\" :  \"" << m_axi_data_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARBURST\" :  \"" << m_axi_data_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARLOCK\" :  \"" << m_axi_data_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARCACHE\" :  \"" << m_axi_data_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARPROT\" :  \"" << m_axi_data_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARQOS\" :  \"" << m_axi_data_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARREGION\" :  \"" << m_axi_data_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_ARUSER\" :  \"" << m_axi_data_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_RVALID\" :  \"" << m_axi_data_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_RREADY\" :  \"" << m_axi_data_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_RDATA\" :  \"" << m_axi_data_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_RLAST\" :  \"" << m_axi_data_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_RID\" :  \"" << m_axi_data_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_RUSER\" :  \"" << m_axi_data_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_RRESP\" :  \"" << m_axi_data_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_BVALID\" :  \"" << m_axi_data_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_data_BREADY\" :  \"" << m_axi_data_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_BRESP\" :  \"" << m_axi_data_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_BID\" :  \"" << m_axi_data_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_data_BUSER\" :  \"" << m_axi_data_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

