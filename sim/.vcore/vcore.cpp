// DESCRIPTION: Verilator generated C++
// Wrapper functions for DPI protected library

#include "Vvcore.h"
#include "verilated_dpi.h"

#include <cstdio>
#include <cstdlib>

// Container class to house verilated object and sequence number
class Vvcore_container: public Vvcore {
  public:
    long long m_seqnum;
    Vvcore_container(const char* scopep__V):
    Vvcore(scopep__V) {}
};

extern "C" {
    
    // Checks to make sure the .sv wrapper and library agree
    void vcore_protectlib_check_hash(int protectlib_hash__V) {
        const int expected_hash__V = 2788900680U;
        if (protectlib_hash__V != expected_hash__V) {
            fprintf(stderr, "%%Error: cannot use vcore library, Verliog (%u) and library (%u) hash values do not agree\n", protectlib_hash__V, expected_hash__V);
            std::exit(EXIT_FAILURE);
        }
    }
    
    // Creates an instance of the library module at initial-time
    // (one for each instance in the user's design) also evaluates
    // the library module's initial process
    void* vcore_protectlib_create(const char* scopep__V) {
        Vvcore_container* const handlep__V = new Vvcore_container{scopep__V};
        return handlep__V;
    }
    
    // Updates all non-clock inputs and retrieves the results
    long long vcore_protectlib_combo_update(
        void* vhandlep__V
        , svLogic rst
        , const svLogicVecVal* s_coh_rqst
        , const svLogicVecVal* s_coh_trsc
        , svLogicVecVal* s_coh_resp
        , svLogicVecVal* m_coh_rqst
        , svLogicVecVal* m_coh_trsc
        , const svLogicVecVal* m_coh_resp
        , svLogicVecVal* m_axi_awid
        , svLogicVecVal* m_axi_awlen
        , svLogicVecVal* m_axi_awsize
        , svLogicVecVal* m_axi_awburst
        , svLogic* m_axi_awlock
        , svLogicVecVal* m_axi_awcache
        , svLogicVecVal* m_axi_awprot
        , svLogicVecVal* m_axi_awqos
        , svLogic* m_axi_awvalid
        , svLogic m_axi_awready
        , svLogicVecVal* m_axi_wstrb
        , svLogic* m_axi_wlast
        , svLogic* m_axi_wvalid
        , svLogic m_axi_wready
        , const svLogicVecVal* m_axi_bid
        , const svLogicVecVal* m_axi_bresp
        , svLogic m_axi_bvalid
        , svLogic* m_axi_bready
        , svLogicVecVal* m_axi_arid
        , svLogicVecVal* m_axi_arlen
        , svLogicVecVal* m_axi_arsize
        , svLogicVecVal* m_axi_arburst
        , svLogic* m_axi_arlock
        , svLogicVecVal* m_axi_arcache
        , svLogicVecVal* m_axi_arprot
        , svLogicVecVal* m_axi_arqos
        , svLogic* m_axi_arvalid
        , svLogic m_axi_arready
        , const svLogicVecVal* m_axi_rid
        , const svLogicVecVal* m_axi_rresp
        , svLogic m_axi_rlast
        , svLogic m_axi_rvalid
        , svLogic* m_axi_rready
        , svLogic* cmt_mexc
        , svLogic* cmt_sexc
        , svLogic* cmt_int
        , svLogic* cmt_ret
        , svLogic* del_csrw
        , svLogicVecVal* del_memw
        , svLogicVecVal* del_csra
        , const svLogicVecVal* mip_ext
        , const svLogicVecVal* mtime
        , const svLogicVecVal* s_coh_addr
        , svLogicVecVal* m_coh_addr
        , svLogicVecVal* m_axi_awaddr
        , svLogicVecVal* m_axi_wdata
        , svLogicVecVal* m_axi_araddr
        , const svLogicVecVal* m_axi_rdata
        , svLogicVecVal* cmt_mstatus
        , svLogicVecVal* cmt_misa
        , svLogicVecVal* cmt_mtvec
        , svLogicVecVal* cmt_mcause
        , svLogicVecVal* cmt_mepc
        , svLogicVecVal* cmt_mtval
        , svLogicVecVal* cmt_stvec
        , svLogicVecVal* cmt_scause
        , svLogicVecVal* cmt_sepc
        , svLogicVecVal* cmt_stval
        , svLogicVecVal* cmt_mip
        , svLogicVecVal* cmt_mcycle
        , svLogicVecVal* cmt_minstret
        , svLogicVecVal* cmt_mtime
        , svLogicVecVal* del_csrv
        , svLogicVecVal* del_mema
        , svLogicVecVal* del_memv
        , svLogicVecVal* stallpc
        , svLogicVecVal* bmisp
        , svLogicVecVal* fmisp
        , svLogicVecVal* brmisp
        , svLogicVecVal* jmisp
        , svLogicVecVal* jrmisp
        , svLogicVecVal* icmiss
        , svLogicVecVal* dcmiss
        , svLogicVecVal* stmiss
        , svLogicVecVal* itmiss
        , svLogicVecVal* dtmiss
        , svLogicVecVal* loads
        , svLogicVecVal* stores
        , svLogic* cmt
        , svLogicVecVal* cmt_level
        , svLogicVecVal* cmt_pc
        , svLogicVecVal* cmt_ir
        , svLogic* cmt_gpr
        , svLogic* cmt_csr
        , svLogic* cmt_mem
        , svLogic* del_gprw
        , svLogicVecVal* del_gpra
        , svLogicVecVal* del_gprv
    )
    {
        Vvcore_container* const handlep__V = static_cast<Vvcore_container*>(vhandlep__V);
        handlep__V->rst = rst;
        handlep__V->s_coh_rqst = VL_SET_I_SVLV(s_coh_rqst);
        handlep__V->s_coh_trsc = VL_SET_I_SVLV(s_coh_trsc);
        handlep__V->m_coh_resp = VL_SET_I_SVLV(m_coh_resp);
        handlep__V->m_axi_awready = m_axi_awready;
        handlep__V->m_axi_wready = m_axi_wready;
        handlep__V->m_axi_bid = VL_SET_I_SVLV(m_axi_bid);
        handlep__V->m_axi_bresp = VL_SET_I_SVLV(m_axi_bresp);
        handlep__V->m_axi_bvalid = m_axi_bvalid;
        handlep__V->m_axi_arready = m_axi_arready;
        handlep__V->m_axi_rid = VL_SET_I_SVLV(m_axi_rid);
        handlep__V->m_axi_rresp = VL_SET_I_SVLV(m_axi_rresp);
        handlep__V->m_axi_rlast = m_axi_rlast;
        handlep__V->m_axi_rvalid = m_axi_rvalid;
        handlep__V->mip_ext = VL_SET_Q_SVLV(mip_ext);
        handlep__V->mtime = VL_SET_Q_SVLV(mtime);
        handlep__V->s_coh_addr = VL_SET_Q_SVLV(s_coh_addr);
        handlep__V->m_axi_rdata = VL_SET_Q_SVLV(m_axi_rdata);
        handlep__V->eval();
        for (size_t s_coh_resp__Vidx = 0; s_coh_resp__Vidx < 1; ++s_coh_resp__Vidx) VL_SET_SVLV_I(8, s_coh_resp + 1 * s_coh_resp__Vidx, handlep__V->s_coh_resp);
        for (size_t m_coh_rqst__Vidx = 0; m_coh_rqst__Vidx < 1; ++m_coh_rqst__Vidx) VL_SET_SVLV_I(8, m_coh_rqst + 1 * m_coh_rqst__Vidx, handlep__V->m_coh_rqst);
        for (size_t m_coh_trsc__Vidx = 0; m_coh_trsc__Vidx < 1; ++m_coh_trsc__Vidx) VL_SET_SVLV_I(8, m_coh_trsc + 1 * m_coh_trsc__Vidx, handlep__V->m_coh_trsc);
        for (size_t m_axi_awid__Vidx = 0; m_axi_awid__Vidx < 1; ++m_axi_awid__Vidx) VL_SET_SVLV_I(8, m_axi_awid + 1 * m_axi_awid__Vidx, handlep__V->m_axi_awid);
        for (size_t m_axi_awlen__Vidx = 0; m_axi_awlen__Vidx < 1; ++m_axi_awlen__Vidx) VL_SET_SVLV_I(8, m_axi_awlen + 1 * m_axi_awlen__Vidx, handlep__V->m_axi_awlen);
        for (size_t m_axi_awsize__Vidx = 0; m_axi_awsize__Vidx < 1; ++m_axi_awsize__Vidx) VL_SET_SVLV_I(3, m_axi_awsize + 1 * m_axi_awsize__Vidx, handlep__V->m_axi_awsize);
        for (size_t m_axi_awburst__Vidx = 0; m_axi_awburst__Vidx < 1; ++m_axi_awburst__Vidx) VL_SET_SVLV_I(2, m_axi_awburst + 1 * m_axi_awburst__Vidx, handlep__V->m_axi_awburst);
        for (size_t m_axi_awlock__Vidx = 0; m_axi_awlock__Vidx < 1; ++m_axi_awlock__Vidx) *m_axi_awlock = handlep__V->m_axi_awlock;
        for (size_t m_axi_awcache__Vidx = 0; m_axi_awcache__Vidx < 1; ++m_axi_awcache__Vidx) VL_SET_SVLV_I(4, m_axi_awcache + 1 * m_axi_awcache__Vidx, handlep__V->m_axi_awcache);
        for (size_t m_axi_awprot__Vidx = 0; m_axi_awprot__Vidx < 1; ++m_axi_awprot__Vidx) VL_SET_SVLV_I(3, m_axi_awprot + 1 * m_axi_awprot__Vidx, handlep__V->m_axi_awprot);
        for (size_t m_axi_awqos__Vidx = 0; m_axi_awqos__Vidx < 1; ++m_axi_awqos__Vidx) VL_SET_SVLV_I(4, m_axi_awqos + 1 * m_axi_awqos__Vidx, handlep__V->m_axi_awqos);
        for (size_t m_axi_awvalid__Vidx = 0; m_axi_awvalid__Vidx < 1; ++m_axi_awvalid__Vidx) *m_axi_awvalid = handlep__V->m_axi_awvalid;
        for (size_t m_axi_wstrb__Vidx = 0; m_axi_wstrb__Vidx < 1; ++m_axi_wstrb__Vidx) VL_SET_SVLV_I(8, m_axi_wstrb + 1 * m_axi_wstrb__Vidx, handlep__V->m_axi_wstrb);
        for (size_t m_axi_wlast__Vidx = 0; m_axi_wlast__Vidx < 1; ++m_axi_wlast__Vidx) *m_axi_wlast = handlep__V->m_axi_wlast;
        for (size_t m_axi_wvalid__Vidx = 0; m_axi_wvalid__Vidx < 1; ++m_axi_wvalid__Vidx) *m_axi_wvalid = handlep__V->m_axi_wvalid;
        for (size_t m_axi_bready__Vidx = 0; m_axi_bready__Vidx < 1; ++m_axi_bready__Vidx) *m_axi_bready = handlep__V->m_axi_bready;
        for (size_t m_axi_arid__Vidx = 0; m_axi_arid__Vidx < 1; ++m_axi_arid__Vidx) VL_SET_SVLV_I(8, m_axi_arid + 1 * m_axi_arid__Vidx, handlep__V->m_axi_arid);
        for (size_t m_axi_arlen__Vidx = 0; m_axi_arlen__Vidx < 1; ++m_axi_arlen__Vidx) VL_SET_SVLV_I(8, m_axi_arlen + 1 * m_axi_arlen__Vidx, handlep__V->m_axi_arlen);
        for (size_t m_axi_arsize__Vidx = 0; m_axi_arsize__Vidx < 1; ++m_axi_arsize__Vidx) VL_SET_SVLV_I(3, m_axi_arsize + 1 * m_axi_arsize__Vidx, handlep__V->m_axi_arsize);
        for (size_t m_axi_arburst__Vidx = 0; m_axi_arburst__Vidx < 1; ++m_axi_arburst__Vidx) VL_SET_SVLV_I(2, m_axi_arburst + 1 * m_axi_arburst__Vidx, handlep__V->m_axi_arburst);
        for (size_t m_axi_arlock__Vidx = 0; m_axi_arlock__Vidx < 1; ++m_axi_arlock__Vidx) *m_axi_arlock = handlep__V->m_axi_arlock;
        for (size_t m_axi_arcache__Vidx = 0; m_axi_arcache__Vidx < 1; ++m_axi_arcache__Vidx) VL_SET_SVLV_I(4, m_axi_arcache + 1 * m_axi_arcache__Vidx, handlep__V->m_axi_arcache);
        for (size_t m_axi_arprot__Vidx = 0; m_axi_arprot__Vidx < 1; ++m_axi_arprot__Vidx) VL_SET_SVLV_I(3, m_axi_arprot + 1 * m_axi_arprot__Vidx, handlep__V->m_axi_arprot);
        for (size_t m_axi_arqos__Vidx = 0; m_axi_arqos__Vidx < 1; ++m_axi_arqos__Vidx) VL_SET_SVLV_I(4, m_axi_arqos + 1 * m_axi_arqos__Vidx, handlep__V->m_axi_arqos);
        for (size_t m_axi_arvalid__Vidx = 0; m_axi_arvalid__Vidx < 1; ++m_axi_arvalid__Vidx) *m_axi_arvalid = handlep__V->m_axi_arvalid;
        for (size_t m_axi_rready__Vidx = 0; m_axi_rready__Vidx < 1; ++m_axi_rready__Vidx) *m_axi_rready = handlep__V->m_axi_rready;
        for (size_t cmt_mexc__Vidx = 0; cmt_mexc__Vidx < 1; ++cmt_mexc__Vidx) *cmt_mexc = handlep__V->cmt_mexc;
        for (size_t cmt_sexc__Vidx = 0; cmt_sexc__Vidx < 1; ++cmt_sexc__Vidx) *cmt_sexc = handlep__V->cmt_sexc;
        for (size_t cmt_int__Vidx = 0; cmt_int__Vidx < 1; ++cmt_int__Vidx) *cmt_int = handlep__V->cmt_int;
        for (size_t cmt_ret__Vidx = 0; cmt_ret__Vidx < 1; ++cmt_ret__Vidx) *cmt_ret = handlep__V->cmt_ret;
        for (size_t del_csrw__Vidx = 0; del_csrw__Vidx < 1; ++del_csrw__Vidx) *del_csrw = handlep__V->del_csrw;
        for (size_t del_memw__Vidx = 0; del_memw__Vidx < 1; ++del_memw__Vidx) VL_SET_SVLV_I(8, del_memw + 1 * del_memw__Vidx, handlep__V->del_memw);
        for (size_t del_csra__Vidx = 0; del_csra__Vidx < 1; ++del_csra__Vidx) VL_SET_SVLV_I(12, del_csra + 1 * del_csra__Vidx, handlep__V->del_csra);
        for (size_t m_coh_addr__Vidx = 0; m_coh_addr__Vidx < 1; ++m_coh_addr__Vidx) VL_SET_SVLV_Q(64, m_coh_addr + 2 * m_coh_addr__Vidx, handlep__V->m_coh_addr);
        for (size_t m_axi_awaddr__Vidx = 0; m_axi_awaddr__Vidx < 1; ++m_axi_awaddr__Vidx) VL_SET_SVLV_Q(64, m_axi_awaddr + 2 * m_axi_awaddr__Vidx, handlep__V->m_axi_awaddr);
        for (size_t m_axi_wdata__Vidx = 0; m_axi_wdata__Vidx < 1; ++m_axi_wdata__Vidx) VL_SET_SVLV_Q(64, m_axi_wdata + 2 * m_axi_wdata__Vidx, handlep__V->m_axi_wdata);
        for (size_t m_axi_araddr__Vidx = 0; m_axi_araddr__Vidx < 1; ++m_axi_araddr__Vidx) VL_SET_SVLV_Q(64, m_axi_araddr + 2 * m_axi_araddr__Vidx, handlep__V->m_axi_araddr);
        for (size_t cmt_mstatus__Vidx = 0; cmt_mstatus__Vidx < 1; ++cmt_mstatus__Vidx) VL_SET_SVLV_Q(64, cmt_mstatus + 2 * cmt_mstatus__Vidx, handlep__V->cmt_mstatus);
        for (size_t cmt_misa__Vidx = 0; cmt_misa__Vidx < 1; ++cmt_misa__Vidx) VL_SET_SVLV_Q(64, cmt_misa + 2 * cmt_misa__Vidx, handlep__V->cmt_misa);
        for (size_t cmt_mtvec__Vidx = 0; cmt_mtvec__Vidx < 1; ++cmt_mtvec__Vidx) VL_SET_SVLV_Q(64, cmt_mtvec + 2 * cmt_mtvec__Vidx, handlep__V->cmt_mtvec);
        for (size_t cmt_mcause__Vidx = 0; cmt_mcause__Vidx < 1; ++cmt_mcause__Vidx) VL_SET_SVLV_Q(64, cmt_mcause + 2 * cmt_mcause__Vidx, handlep__V->cmt_mcause);
        for (size_t cmt_mepc__Vidx = 0; cmt_mepc__Vidx < 1; ++cmt_mepc__Vidx) VL_SET_SVLV_Q(64, cmt_mepc + 2 * cmt_mepc__Vidx, handlep__V->cmt_mepc);
        for (size_t cmt_mtval__Vidx = 0; cmt_mtval__Vidx < 1; ++cmt_mtval__Vidx) VL_SET_SVLV_Q(64, cmt_mtval + 2 * cmt_mtval__Vidx, handlep__V->cmt_mtval);
        for (size_t cmt_stvec__Vidx = 0; cmt_stvec__Vidx < 1; ++cmt_stvec__Vidx) VL_SET_SVLV_Q(64, cmt_stvec + 2 * cmt_stvec__Vidx, handlep__V->cmt_stvec);
        for (size_t cmt_scause__Vidx = 0; cmt_scause__Vidx < 1; ++cmt_scause__Vidx) VL_SET_SVLV_Q(64, cmt_scause + 2 * cmt_scause__Vidx, handlep__V->cmt_scause);
        for (size_t cmt_sepc__Vidx = 0; cmt_sepc__Vidx < 1; ++cmt_sepc__Vidx) VL_SET_SVLV_Q(64, cmt_sepc + 2 * cmt_sepc__Vidx, handlep__V->cmt_sepc);
        for (size_t cmt_stval__Vidx = 0; cmt_stval__Vidx < 1; ++cmt_stval__Vidx) VL_SET_SVLV_Q(64, cmt_stval + 2 * cmt_stval__Vidx, handlep__V->cmt_stval);
        for (size_t cmt_mip__Vidx = 0; cmt_mip__Vidx < 1; ++cmt_mip__Vidx) VL_SET_SVLV_Q(64, cmt_mip + 2 * cmt_mip__Vidx, handlep__V->cmt_mip);
        for (size_t cmt_mcycle__Vidx = 0; cmt_mcycle__Vidx < 1; ++cmt_mcycle__Vidx) VL_SET_SVLV_Q(64, cmt_mcycle + 2 * cmt_mcycle__Vidx, handlep__V->cmt_mcycle);
        for (size_t cmt_minstret__Vidx = 0; cmt_minstret__Vidx < 1; ++cmt_minstret__Vidx) VL_SET_SVLV_Q(64, cmt_minstret + 2 * cmt_minstret__Vidx, handlep__V->cmt_minstret);
        for (size_t cmt_mtime__Vidx = 0; cmt_mtime__Vidx < 1; ++cmt_mtime__Vidx) VL_SET_SVLV_Q(64, cmt_mtime + 2 * cmt_mtime__Vidx, handlep__V->cmt_mtime);
        for (size_t del_csrv__Vidx = 0; del_csrv__Vidx < 1; ++del_csrv__Vidx) VL_SET_SVLV_Q(64, del_csrv + 2 * del_csrv__Vidx, handlep__V->del_csrv);
        for (size_t del_mema__Vidx = 0; del_mema__Vidx < 1; ++del_mema__Vidx) VL_SET_SVLV_Q(64, del_mema + 2 * del_mema__Vidx, handlep__V->del_mema);
        for (size_t del_memv__Vidx = 0; del_memv__Vidx < 1; ++del_memv__Vidx) VL_SET_SVLV_Q(64, del_memv + 2 * del_memv__Vidx, handlep__V->del_memv);
        for (size_t stallpc__Vidx = 0; stallpc__Vidx < 1; ++stallpc__Vidx) VL_SET_SVLV_Q(64, stallpc + 2 * stallpc__Vidx, handlep__V->stallpc);
        for (size_t bmisp__Vidx = 0; bmisp__Vidx < 1; ++bmisp__Vidx) VL_SET_SVLV_Q(64, bmisp + 2 * bmisp__Vidx, handlep__V->bmisp);
        for (size_t fmisp__Vidx = 0; fmisp__Vidx < 1; ++fmisp__Vidx) VL_SET_SVLV_Q(64, fmisp + 2 * fmisp__Vidx, handlep__V->fmisp);
        for (size_t brmisp__Vidx = 0; brmisp__Vidx < 1; ++brmisp__Vidx) VL_SET_SVLV_Q(64, brmisp + 2 * brmisp__Vidx, handlep__V->brmisp);
        for (size_t jmisp__Vidx = 0; jmisp__Vidx < 1; ++jmisp__Vidx) VL_SET_SVLV_Q(64, jmisp + 2 * jmisp__Vidx, handlep__V->jmisp);
        for (size_t jrmisp__Vidx = 0; jrmisp__Vidx < 1; ++jrmisp__Vidx) VL_SET_SVLV_Q(64, jrmisp + 2 * jrmisp__Vidx, handlep__V->jrmisp);
        for (size_t icmiss__Vidx = 0; icmiss__Vidx < 1; ++icmiss__Vidx) VL_SET_SVLV_Q(64, icmiss + 2 * icmiss__Vidx, handlep__V->icmiss);
        for (size_t dcmiss__Vidx = 0; dcmiss__Vidx < 1; ++dcmiss__Vidx) VL_SET_SVLV_Q(64, dcmiss + 2 * dcmiss__Vidx, handlep__V->dcmiss);
        for (size_t stmiss__Vidx = 0; stmiss__Vidx < 1; ++stmiss__Vidx) VL_SET_SVLV_Q(64, stmiss + 2 * stmiss__Vidx, handlep__V->stmiss);
        for (size_t itmiss__Vidx = 0; itmiss__Vidx < 1; ++itmiss__Vidx) VL_SET_SVLV_Q(64, itmiss + 2 * itmiss__Vidx, handlep__V->itmiss);
        for (size_t dtmiss__Vidx = 0; dtmiss__Vidx < 1; ++dtmiss__Vidx) VL_SET_SVLV_Q(64, dtmiss + 2 * dtmiss__Vidx, handlep__V->dtmiss);
        for (size_t loads__Vidx = 0; loads__Vidx < 1; ++loads__Vidx) VL_SET_SVLV_Q(64, loads + 2 * loads__Vidx, handlep__V->loads);
        for (size_t stores__Vidx = 0; stores__Vidx < 1; ++stores__Vidx) VL_SET_SVLV_Q(64, stores + 2 * stores__Vidx, handlep__V->stores);
        for (size_t cmt__Vidx = 0; cmt__Vidx < 4; ++cmt__Vidx) cmt[cmt__Vidx] = (&handlep__V->cmt[0])[cmt__Vidx];
        for (size_t cmt_level__Vidx = 0; cmt_level__Vidx < 4; ++cmt_level__Vidx) VL_SET_SVLV_I(2, cmt_level + 1 * cmt_level__Vidx, (&handlep__V->cmt_level[0])[cmt_level__Vidx]);
        for (size_t cmt_pc__Vidx = 0; cmt_pc__Vidx < 4; ++cmt_pc__Vidx) VL_SET_SVLV_Q(64, cmt_pc + 2 * cmt_pc__Vidx, (&handlep__V->cmt_pc[0])[cmt_pc__Vidx]);
        for (size_t cmt_ir__Vidx = 0; cmt_ir__Vidx < 4; ++cmt_ir__Vidx) VL_SET_SVLV_I(32, cmt_ir + 1 * cmt_ir__Vidx, (&handlep__V->cmt_ir[0])[cmt_ir__Vidx]);
        for (size_t cmt_gpr__Vidx = 0; cmt_gpr__Vidx < 4; ++cmt_gpr__Vidx) cmt_gpr[cmt_gpr__Vidx] = (&handlep__V->cmt_gpr[0])[cmt_gpr__Vidx];
        for (size_t cmt_csr__Vidx = 0; cmt_csr__Vidx < 4; ++cmt_csr__Vidx) cmt_csr[cmt_csr__Vidx] = (&handlep__V->cmt_csr[0])[cmt_csr__Vidx];
        for (size_t cmt_mem__Vidx = 0; cmt_mem__Vidx < 4; ++cmt_mem__Vidx) cmt_mem[cmt_mem__Vidx] = (&handlep__V->cmt_mem[0])[cmt_mem__Vidx];
        for (size_t del_gprw__Vidx = 0; del_gprw__Vidx < 4; ++del_gprw__Vidx) del_gprw[del_gprw__Vidx] = (&handlep__V->del_gprw[0])[del_gprw__Vidx];
        for (size_t del_gpra__Vidx = 0; del_gpra__Vidx < 4; ++del_gpra__Vidx) VL_SET_SVLV_I(6, del_gpra + 1 * del_gpra__Vidx, (&handlep__V->del_gpra[0])[del_gpra__Vidx]);
        for (size_t del_gprv__Vidx = 0; del_gprv__Vidx < 4; ++del_gprv__Vidx) VL_SET_SVLV_Q(64, del_gprv + 2 * del_gprv__Vidx, (&handlep__V->del_gprv[0])[del_gprv__Vidx]);
        return handlep__V->m_seqnum++;
    }
    
    // Updates all clocks and retrieves the results
    long long vcore_protectlib_seq_update(
        void* vhandlep__V
        , svLogic clk
        , svLogicVecVal* s_coh_resp
        , svLogicVecVal* m_coh_rqst
        , svLogicVecVal* m_coh_trsc
        , svLogicVecVal* m_axi_awid
        , svLogicVecVal* m_axi_awlen
        , svLogicVecVal* m_axi_awsize
        , svLogicVecVal* m_axi_awburst
        , svLogic* m_axi_awlock
        , svLogicVecVal* m_axi_awcache
        , svLogicVecVal* m_axi_awprot
        , svLogicVecVal* m_axi_awqos
        , svLogic* m_axi_awvalid
        , svLogicVecVal* m_axi_wstrb
        , svLogic* m_axi_wlast
        , svLogic* m_axi_wvalid
        , svLogic* m_axi_bready
        , svLogicVecVal* m_axi_arid
        , svLogicVecVal* m_axi_arlen
        , svLogicVecVal* m_axi_arsize
        , svLogicVecVal* m_axi_arburst
        , svLogic* m_axi_arlock
        , svLogicVecVal* m_axi_arcache
        , svLogicVecVal* m_axi_arprot
        , svLogicVecVal* m_axi_arqos
        , svLogic* m_axi_arvalid
        , svLogic* m_axi_rready
        , svLogic* cmt_mexc
        , svLogic* cmt_sexc
        , svLogic* cmt_int
        , svLogic* cmt_ret
        , svLogic* del_csrw
        , svLogicVecVal* del_memw
        , svLogicVecVal* del_csra
        , svLogicVecVal* m_coh_addr
        , svLogicVecVal* m_axi_awaddr
        , svLogicVecVal* m_axi_wdata
        , svLogicVecVal* m_axi_araddr
        , svLogicVecVal* cmt_mstatus
        , svLogicVecVal* cmt_misa
        , svLogicVecVal* cmt_mtvec
        , svLogicVecVal* cmt_mcause
        , svLogicVecVal* cmt_mepc
        , svLogicVecVal* cmt_mtval
        , svLogicVecVal* cmt_stvec
        , svLogicVecVal* cmt_scause
        , svLogicVecVal* cmt_sepc
        , svLogicVecVal* cmt_stval
        , svLogicVecVal* cmt_mip
        , svLogicVecVal* cmt_mcycle
        , svLogicVecVal* cmt_minstret
        , svLogicVecVal* cmt_mtime
        , svLogicVecVal* del_csrv
        , svLogicVecVal* del_mema
        , svLogicVecVal* del_memv
        , svLogicVecVal* stallpc
        , svLogicVecVal* bmisp
        , svLogicVecVal* fmisp
        , svLogicVecVal* brmisp
        , svLogicVecVal* jmisp
        , svLogicVecVal* jrmisp
        , svLogicVecVal* icmiss
        , svLogicVecVal* dcmiss
        , svLogicVecVal* stmiss
        , svLogicVecVal* itmiss
        , svLogicVecVal* dtmiss
        , svLogicVecVal* loads
        , svLogicVecVal* stores
        , svLogic* cmt
        , svLogicVecVal* cmt_level
        , svLogicVecVal* cmt_pc
        , svLogicVecVal* cmt_ir
        , svLogic* cmt_gpr
        , svLogic* cmt_csr
        , svLogic* cmt_mem
        , svLogic* del_gprw
        , svLogicVecVal* del_gpra
        , svLogicVecVal* del_gprv
    )
    {
        Vvcore_container* const handlep__V = static_cast<Vvcore_container*>(vhandlep__V);
        handlep__V->clk = clk;
        handlep__V->eval();
        for (size_t s_coh_resp__Vidx = 0; s_coh_resp__Vidx < 1; ++s_coh_resp__Vidx) VL_SET_SVLV_I(8, s_coh_resp + 1 * s_coh_resp__Vidx, handlep__V->s_coh_resp);
        for (size_t m_coh_rqst__Vidx = 0; m_coh_rqst__Vidx < 1; ++m_coh_rqst__Vidx) VL_SET_SVLV_I(8, m_coh_rqst + 1 * m_coh_rqst__Vidx, handlep__V->m_coh_rqst);
        for (size_t m_coh_trsc__Vidx = 0; m_coh_trsc__Vidx < 1; ++m_coh_trsc__Vidx) VL_SET_SVLV_I(8, m_coh_trsc + 1 * m_coh_trsc__Vidx, handlep__V->m_coh_trsc);
        for (size_t m_axi_awid__Vidx = 0; m_axi_awid__Vidx < 1; ++m_axi_awid__Vidx) VL_SET_SVLV_I(8, m_axi_awid + 1 * m_axi_awid__Vidx, handlep__V->m_axi_awid);
        for (size_t m_axi_awlen__Vidx = 0; m_axi_awlen__Vidx < 1; ++m_axi_awlen__Vidx) VL_SET_SVLV_I(8, m_axi_awlen + 1 * m_axi_awlen__Vidx, handlep__V->m_axi_awlen);
        for (size_t m_axi_awsize__Vidx = 0; m_axi_awsize__Vidx < 1; ++m_axi_awsize__Vidx) VL_SET_SVLV_I(3, m_axi_awsize + 1 * m_axi_awsize__Vidx, handlep__V->m_axi_awsize);
        for (size_t m_axi_awburst__Vidx = 0; m_axi_awburst__Vidx < 1; ++m_axi_awburst__Vidx) VL_SET_SVLV_I(2, m_axi_awburst + 1 * m_axi_awburst__Vidx, handlep__V->m_axi_awburst);
        for (size_t m_axi_awlock__Vidx = 0; m_axi_awlock__Vidx < 1; ++m_axi_awlock__Vidx) *m_axi_awlock = handlep__V->m_axi_awlock;
        for (size_t m_axi_awcache__Vidx = 0; m_axi_awcache__Vidx < 1; ++m_axi_awcache__Vidx) VL_SET_SVLV_I(4, m_axi_awcache + 1 * m_axi_awcache__Vidx, handlep__V->m_axi_awcache);
        for (size_t m_axi_awprot__Vidx = 0; m_axi_awprot__Vidx < 1; ++m_axi_awprot__Vidx) VL_SET_SVLV_I(3, m_axi_awprot + 1 * m_axi_awprot__Vidx, handlep__V->m_axi_awprot);
        for (size_t m_axi_awqos__Vidx = 0; m_axi_awqos__Vidx < 1; ++m_axi_awqos__Vidx) VL_SET_SVLV_I(4, m_axi_awqos + 1 * m_axi_awqos__Vidx, handlep__V->m_axi_awqos);
        for (size_t m_axi_awvalid__Vidx = 0; m_axi_awvalid__Vidx < 1; ++m_axi_awvalid__Vidx) *m_axi_awvalid = handlep__V->m_axi_awvalid;
        for (size_t m_axi_wstrb__Vidx = 0; m_axi_wstrb__Vidx < 1; ++m_axi_wstrb__Vidx) VL_SET_SVLV_I(8, m_axi_wstrb + 1 * m_axi_wstrb__Vidx, handlep__V->m_axi_wstrb);
        for (size_t m_axi_wlast__Vidx = 0; m_axi_wlast__Vidx < 1; ++m_axi_wlast__Vidx) *m_axi_wlast = handlep__V->m_axi_wlast;
        for (size_t m_axi_wvalid__Vidx = 0; m_axi_wvalid__Vidx < 1; ++m_axi_wvalid__Vidx) *m_axi_wvalid = handlep__V->m_axi_wvalid;
        for (size_t m_axi_bready__Vidx = 0; m_axi_bready__Vidx < 1; ++m_axi_bready__Vidx) *m_axi_bready = handlep__V->m_axi_bready;
        for (size_t m_axi_arid__Vidx = 0; m_axi_arid__Vidx < 1; ++m_axi_arid__Vidx) VL_SET_SVLV_I(8, m_axi_arid + 1 * m_axi_arid__Vidx, handlep__V->m_axi_arid);
        for (size_t m_axi_arlen__Vidx = 0; m_axi_arlen__Vidx < 1; ++m_axi_arlen__Vidx) VL_SET_SVLV_I(8, m_axi_arlen + 1 * m_axi_arlen__Vidx, handlep__V->m_axi_arlen);
        for (size_t m_axi_arsize__Vidx = 0; m_axi_arsize__Vidx < 1; ++m_axi_arsize__Vidx) VL_SET_SVLV_I(3, m_axi_arsize + 1 * m_axi_arsize__Vidx, handlep__V->m_axi_arsize);
        for (size_t m_axi_arburst__Vidx = 0; m_axi_arburst__Vidx < 1; ++m_axi_arburst__Vidx) VL_SET_SVLV_I(2, m_axi_arburst + 1 * m_axi_arburst__Vidx, handlep__V->m_axi_arburst);
        for (size_t m_axi_arlock__Vidx = 0; m_axi_arlock__Vidx < 1; ++m_axi_arlock__Vidx) *m_axi_arlock = handlep__V->m_axi_arlock;
        for (size_t m_axi_arcache__Vidx = 0; m_axi_arcache__Vidx < 1; ++m_axi_arcache__Vidx) VL_SET_SVLV_I(4, m_axi_arcache + 1 * m_axi_arcache__Vidx, handlep__V->m_axi_arcache);
        for (size_t m_axi_arprot__Vidx = 0; m_axi_arprot__Vidx < 1; ++m_axi_arprot__Vidx) VL_SET_SVLV_I(3, m_axi_arprot + 1 * m_axi_arprot__Vidx, handlep__V->m_axi_arprot);
        for (size_t m_axi_arqos__Vidx = 0; m_axi_arqos__Vidx < 1; ++m_axi_arqos__Vidx) VL_SET_SVLV_I(4, m_axi_arqos + 1 * m_axi_arqos__Vidx, handlep__V->m_axi_arqos);
        for (size_t m_axi_arvalid__Vidx = 0; m_axi_arvalid__Vidx < 1; ++m_axi_arvalid__Vidx) *m_axi_arvalid = handlep__V->m_axi_arvalid;
        for (size_t m_axi_rready__Vidx = 0; m_axi_rready__Vidx < 1; ++m_axi_rready__Vidx) *m_axi_rready = handlep__V->m_axi_rready;
        for (size_t cmt_mexc__Vidx = 0; cmt_mexc__Vidx < 1; ++cmt_mexc__Vidx) *cmt_mexc = handlep__V->cmt_mexc;
        for (size_t cmt_sexc__Vidx = 0; cmt_sexc__Vidx < 1; ++cmt_sexc__Vidx) *cmt_sexc = handlep__V->cmt_sexc;
        for (size_t cmt_int__Vidx = 0; cmt_int__Vidx < 1; ++cmt_int__Vidx) *cmt_int = handlep__V->cmt_int;
        for (size_t cmt_ret__Vidx = 0; cmt_ret__Vidx < 1; ++cmt_ret__Vidx) *cmt_ret = handlep__V->cmt_ret;
        for (size_t del_csrw__Vidx = 0; del_csrw__Vidx < 1; ++del_csrw__Vidx) *del_csrw = handlep__V->del_csrw;
        for (size_t del_memw__Vidx = 0; del_memw__Vidx < 1; ++del_memw__Vidx) VL_SET_SVLV_I(8, del_memw + 1 * del_memw__Vidx, handlep__V->del_memw);
        for (size_t del_csra__Vidx = 0; del_csra__Vidx < 1; ++del_csra__Vidx) VL_SET_SVLV_I(12, del_csra + 1 * del_csra__Vidx, handlep__V->del_csra);
        for (size_t m_coh_addr__Vidx = 0; m_coh_addr__Vidx < 1; ++m_coh_addr__Vidx) VL_SET_SVLV_Q(64, m_coh_addr + 2 * m_coh_addr__Vidx, handlep__V->m_coh_addr);
        for (size_t m_axi_awaddr__Vidx = 0; m_axi_awaddr__Vidx < 1; ++m_axi_awaddr__Vidx) VL_SET_SVLV_Q(64, m_axi_awaddr + 2 * m_axi_awaddr__Vidx, handlep__V->m_axi_awaddr);
        for (size_t m_axi_wdata__Vidx = 0; m_axi_wdata__Vidx < 1; ++m_axi_wdata__Vidx) VL_SET_SVLV_Q(64, m_axi_wdata + 2 * m_axi_wdata__Vidx, handlep__V->m_axi_wdata);
        for (size_t m_axi_araddr__Vidx = 0; m_axi_araddr__Vidx < 1; ++m_axi_araddr__Vidx) VL_SET_SVLV_Q(64, m_axi_araddr + 2 * m_axi_araddr__Vidx, handlep__V->m_axi_araddr);
        for (size_t cmt_mstatus__Vidx = 0; cmt_mstatus__Vidx < 1; ++cmt_mstatus__Vidx) VL_SET_SVLV_Q(64, cmt_mstatus + 2 * cmt_mstatus__Vidx, handlep__V->cmt_mstatus);
        for (size_t cmt_misa__Vidx = 0; cmt_misa__Vidx < 1; ++cmt_misa__Vidx) VL_SET_SVLV_Q(64, cmt_misa + 2 * cmt_misa__Vidx, handlep__V->cmt_misa);
        for (size_t cmt_mtvec__Vidx = 0; cmt_mtvec__Vidx < 1; ++cmt_mtvec__Vidx) VL_SET_SVLV_Q(64, cmt_mtvec + 2 * cmt_mtvec__Vidx, handlep__V->cmt_mtvec);
        for (size_t cmt_mcause__Vidx = 0; cmt_mcause__Vidx < 1; ++cmt_mcause__Vidx) VL_SET_SVLV_Q(64, cmt_mcause + 2 * cmt_mcause__Vidx, handlep__V->cmt_mcause);
        for (size_t cmt_mepc__Vidx = 0; cmt_mepc__Vidx < 1; ++cmt_mepc__Vidx) VL_SET_SVLV_Q(64, cmt_mepc + 2 * cmt_mepc__Vidx, handlep__V->cmt_mepc);
        for (size_t cmt_mtval__Vidx = 0; cmt_mtval__Vidx < 1; ++cmt_mtval__Vidx) VL_SET_SVLV_Q(64, cmt_mtval + 2 * cmt_mtval__Vidx, handlep__V->cmt_mtval);
        for (size_t cmt_stvec__Vidx = 0; cmt_stvec__Vidx < 1; ++cmt_stvec__Vidx) VL_SET_SVLV_Q(64, cmt_stvec + 2 * cmt_stvec__Vidx, handlep__V->cmt_stvec);
        for (size_t cmt_scause__Vidx = 0; cmt_scause__Vidx < 1; ++cmt_scause__Vidx) VL_SET_SVLV_Q(64, cmt_scause + 2 * cmt_scause__Vidx, handlep__V->cmt_scause);
        for (size_t cmt_sepc__Vidx = 0; cmt_sepc__Vidx < 1; ++cmt_sepc__Vidx) VL_SET_SVLV_Q(64, cmt_sepc + 2 * cmt_sepc__Vidx, handlep__V->cmt_sepc);
        for (size_t cmt_stval__Vidx = 0; cmt_stval__Vidx < 1; ++cmt_stval__Vidx) VL_SET_SVLV_Q(64, cmt_stval + 2 * cmt_stval__Vidx, handlep__V->cmt_stval);
        for (size_t cmt_mip__Vidx = 0; cmt_mip__Vidx < 1; ++cmt_mip__Vidx) VL_SET_SVLV_Q(64, cmt_mip + 2 * cmt_mip__Vidx, handlep__V->cmt_mip);
        for (size_t cmt_mcycle__Vidx = 0; cmt_mcycle__Vidx < 1; ++cmt_mcycle__Vidx) VL_SET_SVLV_Q(64, cmt_mcycle + 2 * cmt_mcycle__Vidx, handlep__V->cmt_mcycle);
        for (size_t cmt_minstret__Vidx = 0; cmt_minstret__Vidx < 1; ++cmt_minstret__Vidx) VL_SET_SVLV_Q(64, cmt_minstret + 2 * cmt_minstret__Vidx, handlep__V->cmt_minstret);
        for (size_t cmt_mtime__Vidx = 0; cmt_mtime__Vidx < 1; ++cmt_mtime__Vidx) VL_SET_SVLV_Q(64, cmt_mtime + 2 * cmt_mtime__Vidx, handlep__V->cmt_mtime);
        for (size_t del_csrv__Vidx = 0; del_csrv__Vidx < 1; ++del_csrv__Vidx) VL_SET_SVLV_Q(64, del_csrv + 2 * del_csrv__Vidx, handlep__V->del_csrv);
        for (size_t del_mema__Vidx = 0; del_mema__Vidx < 1; ++del_mema__Vidx) VL_SET_SVLV_Q(64, del_mema + 2 * del_mema__Vidx, handlep__V->del_mema);
        for (size_t del_memv__Vidx = 0; del_memv__Vidx < 1; ++del_memv__Vidx) VL_SET_SVLV_Q(64, del_memv + 2 * del_memv__Vidx, handlep__V->del_memv);
        for (size_t stallpc__Vidx = 0; stallpc__Vidx < 1; ++stallpc__Vidx) VL_SET_SVLV_Q(64, stallpc + 2 * stallpc__Vidx, handlep__V->stallpc);
        for (size_t bmisp__Vidx = 0; bmisp__Vidx < 1; ++bmisp__Vidx) VL_SET_SVLV_Q(64, bmisp + 2 * bmisp__Vidx, handlep__V->bmisp);
        for (size_t fmisp__Vidx = 0; fmisp__Vidx < 1; ++fmisp__Vidx) VL_SET_SVLV_Q(64, fmisp + 2 * fmisp__Vidx, handlep__V->fmisp);
        for (size_t brmisp__Vidx = 0; brmisp__Vidx < 1; ++brmisp__Vidx) VL_SET_SVLV_Q(64, brmisp + 2 * brmisp__Vidx, handlep__V->brmisp);
        for (size_t jmisp__Vidx = 0; jmisp__Vidx < 1; ++jmisp__Vidx) VL_SET_SVLV_Q(64, jmisp + 2 * jmisp__Vidx, handlep__V->jmisp);
        for (size_t jrmisp__Vidx = 0; jrmisp__Vidx < 1; ++jrmisp__Vidx) VL_SET_SVLV_Q(64, jrmisp + 2 * jrmisp__Vidx, handlep__V->jrmisp);
        for (size_t icmiss__Vidx = 0; icmiss__Vidx < 1; ++icmiss__Vidx) VL_SET_SVLV_Q(64, icmiss + 2 * icmiss__Vidx, handlep__V->icmiss);
        for (size_t dcmiss__Vidx = 0; dcmiss__Vidx < 1; ++dcmiss__Vidx) VL_SET_SVLV_Q(64, dcmiss + 2 * dcmiss__Vidx, handlep__V->dcmiss);
        for (size_t stmiss__Vidx = 0; stmiss__Vidx < 1; ++stmiss__Vidx) VL_SET_SVLV_Q(64, stmiss + 2 * stmiss__Vidx, handlep__V->stmiss);
        for (size_t itmiss__Vidx = 0; itmiss__Vidx < 1; ++itmiss__Vidx) VL_SET_SVLV_Q(64, itmiss + 2 * itmiss__Vidx, handlep__V->itmiss);
        for (size_t dtmiss__Vidx = 0; dtmiss__Vidx < 1; ++dtmiss__Vidx) VL_SET_SVLV_Q(64, dtmiss + 2 * dtmiss__Vidx, handlep__V->dtmiss);
        for (size_t loads__Vidx = 0; loads__Vidx < 1; ++loads__Vidx) VL_SET_SVLV_Q(64, loads + 2 * loads__Vidx, handlep__V->loads);
        for (size_t stores__Vidx = 0; stores__Vidx < 1; ++stores__Vidx) VL_SET_SVLV_Q(64, stores + 2 * stores__Vidx, handlep__V->stores);
        for (size_t cmt__Vidx = 0; cmt__Vidx < 4; ++cmt__Vidx) cmt[cmt__Vidx] = (&handlep__V->cmt[0])[cmt__Vidx];
        for (size_t cmt_level__Vidx = 0; cmt_level__Vidx < 4; ++cmt_level__Vidx) VL_SET_SVLV_I(2, cmt_level + 1 * cmt_level__Vidx, (&handlep__V->cmt_level[0])[cmt_level__Vidx]);
        for (size_t cmt_pc__Vidx = 0; cmt_pc__Vidx < 4; ++cmt_pc__Vidx) VL_SET_SVLV_Q(64, cmt_pc + 2 * cmt_pc__Vidx, (&handlep__V->cmt_pc[0])[cmt_pc__Vidx]);
        for (size_t cmt_ir__Vidx = 0; cmt_ir__Vidx < 4; ++cmt_ir__Vidx) VL_SET_SVLV_I(32, cmt_ir + 1 * cmt_ir__Vidx, (&handlep__V->cmt_ir[0])[cmt_ir__Vidx]);
        for (size_t cmt_gpr__Vidx = 0; cmt_gpr__Vidx < 4; ++cmt_gpr__Vidx) cmt_gpr[cmt_gpr__Vidx] = (&handlep__V->cmt_gpr[0])[cmt_gpr__Vidx];
        for (size_t cmt_csr__Vidx = 0; cmt_csr__Vidx < 4; ++cmt_csr__Vidx) cmt_csr[cmt_csr__Vidx] = (&handlep__V->cmt_csr[0])[cmt_csr__Vidx];
        for (size_t cmt_mem__Vidx = 0; cmt_mem__Vidx < 4; ++cmt_mem__Vidx) cmt_mem[cmt_mem__Vidx] = (&handlep__V->cmt_mem[0])[cmt_mem__Vidx];
        for (size_t del_gprw__Vidx = 0; del_gprw__Vidx < 4; ++del_gprw__Vidx) del_gprw[del_gprw__Vidx] = (&handlep__V->del_gprw[0])[del_gprw__Vidx];
        for (size_t del_gpra__Vidx = 0; del_gpra__Vidx < 4; ++del_gpra__Vidx) VL_SET_SVLV_I(6, del_gpra + 1 * del_gpra__Vidx, (&handlep__V->del_gpra[0])[del_gpra__Vidx]);
        for (size_t del_gprv__Vidx = 0; del_gprv__Vidx < 4; ++del_gprv__Vidx) VL_SET_SVLV_Q(64, del_gprv + 2 * del_gprv__Vidx, (&handlep__V->del_gprv[0])[del_gprv__Vidx]);
        return handlep__V->m_seqnum++;
    }
    
    // Need to convince some simulators that the input to the module
    // must be evaluated before evaluating the clock edge
    void vcore_protectlib_combo_ignore(
        void* vhandlep__V
        , svLogic rst
        , const svLogicVecVal* s_coh_rqst
        , const svLogicVecVal* s_coh_trsc
        , const svLogicVecVal* m_coh_resp
        , svLogic m_axi_awready
        , svLogic m_axi_wready
        , const svLogicVecVal* m_axi_bid
        , const svLogicVecVal* m_axi_bresp
        , svLogic m_axi_bvalid
        , svLogic m_axi_arready
        , const svLogicVecVal* m_axi_rid
        , const svLogicVecVal* m_axi_rresp
        , svLogic m_axi_rlast
        , svLogic m_axi_rvalid
        , const svLogicVecVal* mip_ext
        , const svLogicVecVal* mtime
        , const svLogicVecVal* s_coh_addr
        , const svLogicVecVal* m_axi_rdata
    )
    { }
    
    // Evaluates the library module's final process
    void vcore_protectlib_final(void* vhandlep__V) {
        Vvcore_container* const handlep__V = static_cast<Vvcore_container*>(vhandlep__V);
        handlep__V->final();
        delete handlep__V;
    }
    
    // Enables the library module's tracing
    // Only usable when used with called from Verilator
    void vcore_protectlib_trace(void* vhandlep__V, void* tfp, int levels, int options) {
        Vvcore_container* const handlep__V = static_cast<Vvcore_container*>(vhandlep__V);
        handlep__V->trace(static_cast<VerilatedVcdC*>(tfp), levels, options);
    }
    
}
