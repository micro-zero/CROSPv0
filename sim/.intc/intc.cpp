// DESCRIPTION: Verilator generated C++
// Wrapper functions for DPI protected library

#include "Vintc.h"
#include "verilated_dpi.h"

#include <cstdio>
#include <cstdlib>

// Container class to house verilated object and sequence number
class Vintc_container: public Vintc {
  public:
    long long m_seqnum;
    Vintc_container(const char* scopep__V):
    Vintc(scopep__V) {}
};

extern "C" {
    
    // Checks to make sure the .sv wrapper and library agree
    void intc_protectlib_check_hash(int protectlib_hash__V) {
        const int expected_hash__V = 1882607743U;
        if (protectlib_hash__V != expected_hash__V) {
            fprintf(stderr, "%%Error: cannot use intc library, Verliog (%u) and library (%u) hash values do not agree\n", protectlib_hash__V, expected_hash__V);
            std::exit(EXIT_FAILURE);
        }
    }
    
    // Creates an instance of the library module at initial-time
    // (one for each instance in the user's design) also evaluates
    // the library module's initial process
    void* intc_protectlib_create(const char* scopep__V) {
        Vintc_container* const handlep__V = new Vintc_container{scopep__V};
        return handlep__V;
    }
    
    // Updates all non-clock inputs and retrieves the results
    long long intc_protectlib_combo_update(
        void* vhandlep__V
        , svLogic rst
        , const svLogicVecVal* s_axi_awid
        , const svLogicVecVal* s_axi_awlen
        , const svLogicVecVal* s_axi_awsize
        , const svLogicVecVal* s_axi_awburst
        , svLogic s_axi_awlock
        , const svLogicVecVal* s_axi_awcache
        , const svLogicVecVal* s_axi_awprot
        , const svLogicVecVal* s_axi_awregion
        , const svLogicVecVal* s_axi_awqos
        , svLogic s_axi_awvalid
        , svLogic* s_axi_awready
        , const svLogicVecVal* s_axi_wstrb
        , svLogic s_axi_wlast
        , svLogic s_axi_wvalid
        , svLogic* s_axi_wready
        , svLogicVecVal* s_axi_bid
        , svLogicVecVal* s_axi_bresp
        , svLogic* s_axi_bvalid
        , svLogic s_axi_bready
        , const svLogicVecVal* s_axi_arid
        , const svLogicVecVal* s_axi_arlen
        , const svLogicVecVal* s_axi_arsize
        , const svLogicVecVal* s_axi_arburst
        , svLogic s_axi_arlock
        , const svLogicVecVal* s_axi_arcache
        , const svLogicVecVal* s_axi_arprot
        , const svLogicVecVal* s_axi_arregion
        , const svLogicVecVal* s_axi_arqos
        , svLogic s_axi_arvalid
        , svLogic* s_axi_arready
        , svLogicVecVal* s_axi_rid
        , svLogicVecVal* s_axi_rresp
        , svLogic* s_axi_rlast
        , svLogic* s_axi_rvalid
        , svLogic s_axi_rready
        , svLogicVecVal* int_pend
        , svLogicVecVal* int_time
        , const svLogicVecVal* s_axi_awaddr
        , const svLogicVecVal* s_axi_wdata
        , const svLogicVecVal* s_axi_araddr
        , svLogicVecVal* s_axi_rdata
    )
    {
        Vintc_container* const handlep__V = static_cast<Vintc_container*>(vhandlep__V);
        handlep__V->rst = rst;
        handlep__V->s_axi_awid = VL_SET_I_SVLV(s_axi_awid);
        handlep__V->s_axi_awlen = VL_SET_I_SVLV(s_axi_awlen);
        handlep__V->s_axi_awsize = VL_SET_I_SVLV(s_axi_awsize);
        handlep__V->s_axi_awburst = VL_SET_I_SVLV(s_axi_awburst);
        handlep__V->s_axi_awlock = s_axi_awlock;
        handlep__V->s_axi_awcache = VL_SET_I_SVLV(s_axi_awcache);
        handlep__V->s_axi_awprot = VL_SET_I_SVLV(s_axi_awprot);
        handlep__V->s_axi_awregion = VL_SET_I_SVLV(s_axi_awregion);
        handlep__V->s_axi_awqos = VL_SET_I_SVLV(s_axi_awqos);
        handlep__V->s_axi_awvalid = s_axi_awvalid;
        handlep__V->s_axi_wstrb = VL_SET_I_SVLV(s_axi_wstrb);
        handlep__V->s_axi_wlast = s_axi_wlast;
        handlep__V->s_axi_wvalid = s_axi_wvalid;
        handlep__V->s_axi_bready = s_axi_bready;
        handlep__V->s_axi_arid = VL_SET_I_SVLV(s_axi_arid);
        handlep__V->s_axi_arlen = VL_SET_I_SVLV(s_axi_arlen);
        handlep__V->s_axi_arsize = VL_SET_I_SVLV(s_axi_arsize);
        handlep__V->s_axi_arburst = VL_SET_I_SVLV(s_axi_arburst);
        handlep__V->s_axi_arlock = s_axi_arlock;
        handlep__V->s_axi_arcache = VL_SET_I_SVLV(s_axi_arcache);
        handlep__V->s_axi_arprot = VL_SET_I_SVLV(s_axi_arprot);
        handlep__V->s_axi_arregion = VL_SET_I_SVLV(s_axi_arregion);
        handlep__V->s_axi_arqos = VL_SET_I_SVLV(s_axi_arqos);
        handlep__V->s_axi_arvalid = s_axi_arvalid;
        handlep__V->s_axi_rready = s_axi_rready;
        handlep__V->s_axi_awaddr = VL_SET_Q_SVLV(s_axi_awaddr);
        handlep__V->s_axi_wdata = VL_SET_Q_SVLV(s_axi_wdata);
        handlep__V->s_axi_araddr = VL_SET_Q_SVLV(s_axi_araddr);
        handlep__V->eval();
        for (size_t s_axi_awready__Vidx = 0; s_axi_awready__Vidx < 1; ++s_axi_awready__Vidx) *s_axi_awready = handlep__V->s_axi_awready;
        for (size_t s_axi_wready__Vidx = 0; s_axi_wready__Vidx < 1; ++s_axi_wready__Vidx) *s_axi_wready = handlep__V->s_axi_wready;
        for (size_t s_axi_bid__Vidx = 0; s_axi_bid__Vidx < 1; ++s_axi_bid__Vidx) VL_SET_SVLV_I(8, s_axi_bid + 1 * s_axi_bid__Vidx, handlep__V->s_axi_bid);
        for (size_t s_axi_bresp__Vidx = 0; s_axi_bresp__Vidx < 1; ++s_axi_bresp__Vidx) VL_SET_SVLV_I(2, s_axi_bresp + 1 * s_axi_bresp__Vidx, handlep__V->s_axi_bresp);
        for (size_t s_axi_bvalid__Vidx = 0; s_axi_bvalid__Vidx < 1; ++s_axi_bvalid__Vidx) *s_axi_bvalid = handlep__V->s_axi_bvalid;
        for (size_t s_axi_arready__Vidx = 0; s_axi_arready__Vidx < 1; ++s_axi_arready__Vidx) *s_axi_arready = handlep__V->s_axi_arready;
        for (size_t s_axi_rid__Vidx = 0; s_axi_rid__Vidx < 1; ++s_axi_rid__Vidx) VL_SET_SVLV_I(8, s_axi_rid + 1 * s_axi_rid__Vidx, handlep__V->s_axi_rid);
        for (size_t s_axi_rresp__Vidx = 0; s_axi_rresp__Vidx < 1; ++s_axi_rresp__Vidx) VL_SET_SVLV_I(2, s_axi_rresp + 1 * s_axi_rresp__Vidx, handlep__V->s_axi_rresp);
        for (size_t s_axi_rlast__Vidx = 0; s_axi_rlast__Vidx < 1; ++s_axi_rlast__Vidx) *s_axi_rlast = handlep__V->s_axi_rlast;
        for (size_t s_axi_rvalid__Vidx = 0; s_axi_rvalid__Vidx < 1; ++s_axi_rvalid__Vidx) *s_axi_rvalid = handlep__V->s_axi_rvalid;
        for (size_t int_pend__Vidx = 0; int_pend__Vidx < 1; ++int_pend__Vidx) VL_SET_SVLV_Q(64, int_pend + 2 * int_pend__Vidx, handlep__V->int_pend);
        for (size_t int_time__Vidx = 0; int_time__Vidx < 1; ++int_time__Vidx) VL_SET_SVLV_Q(64, int_time + 2 * int_time__Vidx, handlep__V->int_time);
        for (size_t s_axi_rdata__Vidx = 0; s_axi_rdata__Vidx < 1; ++s_axi_rdata__Vidx) VL_SET_SVLV_Q(64, s_axi_rdata + 2 * s_axi_rdata__Vidx, handlep__V->s_axi_rdata);
        return handlep__V->m_seqnum++;
    }
    
    // Updates all clocks and retrieves the results
    long long intc_protectlib_seq_update(
        void* vhandlep__V
        , svLogic clk
        , svLogic* s_axi_awready
        , svLogic* s_axi_wready
        , svLogicVecVal* s_axi_bid
        , svLogicVecVal* s_axi_bresp
        , svLogic* s_axi_bvalid
        , svLogic* s_axi_arready
        , svLogicVecVal* s_axi_rid
        , svLogicVecVal* s_axi_rresp
        , svLogic* s_axi_rlast
        , svLogic* s_axi_rvalid
        , svLogicVecVal* int_pend
        , svLogicVecVal* int_time
        , svLogicVecVal* s_axi_rdata
    )
    {
        Vintc_container* const handlep__V = static_cast<Vintc_container*>(vhandlep__V);
        handlep__V->clk = clk;
        handlep__V->eval();
        for (size_t s_axi_awready__Vidx = 0; s_axi_awready__Vidx < 1; ++s_axi_awready__Vidx) *s_axi_awready = handlep__V->s_axi_awready;
        for (size_t s_axi_wready__Vidx = 0; s_axi_wready__Vidx < 1; ++s_axi_wready__Vidx) *s_axi_wready = handlep__V->s_axi_wready;
        for (size_t s_axi_bid__Vidx = 0; s_axi_bid__Vidx < 1; ++s_axi_bid__Vidx) VL_SET_SVLV_I(8, s_axi_bid + 1 * s_axi_bid__Vidx, handlep__V->s_axi_bid);
        for (size_t s_axi_bresp__Vidx = 0; s_axi_bresp__Vidx < 1; ++s_axi_bresp__Vidx) VL_SET_SVLV_I(2, s_axi_bresp + 1 * s_axi_bresp__Vidx, handlep__V->s_axi_bresp);
        for (size_t s_axi_bvalid__Vidx = 0; s_axi_bvalid__Vidx < 1; ++s_axi_bvalid__Vidx) *s_axi_bvalid = handlep__V->s_axi_bvalid;
        for (size_t s_axi_arready__Vidx = 0; s_axi_arready__Vidx < 1; ++s_axi_arready__Vidx) *s_axi_arready = handlep__V->s_axi_arready;
        for (size_t s_axi_rid__Vidx = 0; s_axi_rid__Vidx < 1; ++s_axi_rid__Vidx) VL_SET_SVLV_I(8, s_axi_rid + 1 * s_axi_rid__Vidx, handlep__V->s_axi_rid);
        for (size_t s_axi_rresp__Vidx = 0; s_axi_rresp__Vidx < 1; ++s_axi_rresp__Vidx) VL_SET_SVLV_I(2, s_axi_rresp + 1 * s_axi_rresp__Vidx, handlep__V->s_axi_rresp);
        for (size_t s_axi_rlast__Vidx = 0; s_axi_rlast__Vidx < 1; ++s_axi_rlast__Vidx) *s_axi_rlast = handlep__V->s_axi_rlast;
        for (size_t s_axi_rvalid__Vidx = 0; s_axi_rvalid__Vidx < 1; ++s_axi_rvalid__Vidx) *s_axi_rvalid = handlep__V->s_axi_rvalid;
        for (size_t int_pend__Vidx = 0; int_pend__Vidx < 1; ++int_pend__Vidx) VL_SET_SVLV_Q(64, int_pend + 2 * int_pend__Vidx, handlep__V->int_pend);
        for (size_t int_time__Vidx = 0; int_time__Vidx < 1; ++int_time__Vidx) VL_SET_SVLV_Q(64, int_time + 2 * int_time__Vidx, handlep__V->int_time);
        for (size_t s_axi_rdata__Vidx = 0; s_axi_rdata__Vidx < 1; ++s_axi_rdata__Vidx) VL_SET_SVLV_Q(64, s_axi_rdata + 2 * s_axi_rdata__Vidx, handlep__V->s_axi_rdata);
        return handlep__V->m_seqnum++;
    }
    
    // Need to convince some simulators that the input to the module
    // must be evaluated before evaluating the clock edge
    void intc_protectlib_combo_ignore(
        void* vhandlep__V
        , svLogic rst
        , const svLogicVecVal* s_axi_awid
        , const svLogicVecVal* s_axi_awlen
        , const svLogicVecVal* s_axi_awsize
        , const svLogicVecVal* s_axi_awburst
        , svLogic s_axi_awlock
        , const svLogicVecVal* s_axi_awcache
        , const svLogicVecVal* s_axi_awprot
        , const svLogicVecVal* s_axi_awregion
        , const svLogicVecVal* s_axi_awqos
        , svLogic s_axi_awvalid
        , const svLogicVecVal* s_axi_wstrb
        , svLogic s_axi_wlast
        , svLogic s_axi_wvalid
        , svLogic s_axi_bready
        , const svLogicVecVal* s_axi_arid
        , const svLogicVecVal* s_axi_arlen
        , const svLogicVecVal* s_axi_arsize
        , const svLogicVecVal* s_axi_arburst
        , svLogic s_axi_arlock
        , const svLogicVecVal* s_axi_arcache
        , const svLogicVecVal* s_axi_arprot
        , const svLogicVecVal* s_axi_arregion
        , const svLogicVecVal* s_axi_arqos
        , svLogic s_axi_arvalid
        , svLogic s_axi_rready
        , const svLogicVecVal* s_axi_awaddr
        , const svLogicVecVal* s_axi_wdata
        , const svLogicVecVal* s_axi_araddr
    )
    { }
    
    // Evaluates the library module's final process
    void intc_protectlib_final(void* vhandlep__V) {
        Vintc_container* const handlep__V = static_cast<Vintc_container*>(vhandlep__V);
        handlep__V->final();
        delete handlep__V;
    }
    
    // Enables the library module's tracing
    // Only usable when used with called from Verilator
    void intc_protectlib_trace(void* vhandlep__V, void* tfp, int levels, int options) {
        Vintc_container* const handlep__V = static_cast<Vintc_container*>(vhandlep__V);
        handlep__V->trace(static_cast<VerilatedVcdC*>(tfp), levels, options);
    }
    
}
