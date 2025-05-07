/**
 * crospaxi.sv:
 *   This is an implemention of CROSP core with AXI interface.
 */

`include "types.sv"
import types::*;

module crospaxi #(
    parameter init   = 1,            // whether to initialize some RAM
    parameter fwd    = 2,            // fetch width
    parameter dwd    = 2,            // decode width
    parameter rwd    = 2,            // rename width
    parameter iwd    = 3,            // issue width
    parameter ewd    = 2,            // execute width
    parameter cwd    = 2,            // commit width
    parameter mwd    = 1,            // memory access width
    parameter opsz   = 64,           // operation ID size
    parameter brsz   = 16,           // branch snapshot size
    parameter lqsz   = 16,           // load queue size
    parameter sqsz   = 16,           // store queue size
    parameter cbsz   = 64,           // cache block size to avoid fetch beyond cache line
    parameter fqsz   = 16,           // instruction fetch queue size
    parameter ftqsz  = 8,            // fetch target queue size
    parameter rassz  = 8,            // return address stack size
    parameter phtsz  = 4096,         // PHT size
    parameter btbsz  = 512,          // BTB size
    parameter iqsz   = 16,           // OoO issue queue size
    parameter fnum   = 4,            // fetch number in half-words
    parameter prnum  = 96,           // number of physical registers
    parameter rst_pc = 64'hc0000000  // PC on reset
)(
    input  logic        clk,
    input  logic        rst,
    input  logic [63:0] mip_ext,
    input  logic [63:0] mtime,
    /* debug ports */
    output logic [63:0] dbg_cycle,
    output logic [63:0] dbg_pcir0,
    output logic [63:0] dbg_pcir1,
    /* coherence interface */
    input logic         s_coh_lock,
    input  logic  [7:0] s_coh_rqst,
    input  logic  [7:0] s_coh_trsc,
    input  logic [63:0] s_coh_addr,
    output logic  [7:0] s_coh_resp,
    output logic  [7:0] s_coh_mesi,
    output logic        m_coh_lock,
    output logic  [7:0] m_coh_rqst,
    output logic  [7:0] m_coh_trsc,
    output logic [63:0] m_coh_addr,
    input  logic  [7:0] m_coh_resp,
    input  logic  [7:0] m_coh_mesi,
    /* AXI interface */
    output logic  [7:0] m_axi_awid,
    output logic [63:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awlock,
    output logic  [3:0] m_axi_awcache,
    output logic  [2:0] m_axi_awprot,
    output logic  [3:0] m_axi_awqos,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic  [7:0] m_axi_bid,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    output logic  [7:0] m_axi_arid,
    output logic [63:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arlock,
    output logic  [3:0] m_axi_arcache,
    output logic  [2:0] m_axi_arprot,
    output logic  [3:0] m_axi_arqos,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    input  logic  [7:0] m_axi_rid,
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready
);
    /* MMU */
    logic [255:0] fl_data, fl_inst;
    logic fnci, fncv;
    logic  [7:0] it_rqst; logic  [7:0] dt_rqst;
    logic [63:0] it_vadd; logic [63:0] dt_vadd;
    logic [63:0] it_satp; logic [63:0] dt_satp;
    logic  [7:0] it_resp; logic  [7:0] dt_resp;
    logic  [7:0] it_perm; logic  [7:0] dt_perm;
    logic [63:0] it_padd; logic [63:0] dt_padd;
    logic  [7:0] dc_rqst; logic  [7:0] ic_rqst;
    logic [63:0] dc_addr; logic [63:0] ic_addr;
    logic  [7:0] dc_strb;
    logic [63:0] dc_wdat;
    logic  [7:0] dc_resp; logic  [7:0] ic_resp;
    logic [63:0] dc_rdat; logic [63:0] ic_rdat;
    logic  [7:0] dc_miss;
    mmu #(.init(init)) mmu_inst(
        .clk(clk), .rst(rst), .fnci(fnci), .fncv(fncv), .flush(fl_inst | fl_data),
        .s_dt_rqst(dt_rqst), .s_it_rqst(it_rqst),
        .s_dt_vadd(dt_vadd), .s_it_vadd(it_vadd),
        .s_dt_satp(dt_satp), .s_it_satp(it_satp),
        .s_dt_resp(dt_resp), .s_it_resp(it_resp),
        .s_dt_perm(dt_perm), .s_it_perm(it_perm),
        .s_dt_padd(dt_padd), .s_it_padd(it_padd),
        .s_dc_rqst(dc_rqst), .s_ic_rqst(ic_rqst),
        .s_dc_addr(dc_addr), .s_ic_addr(ic_addr),
        .s_dc_strb(dc_strb),
        .s_dc_wdat(dc_wdat),
        .s_dc_resp(dc_resp), .s_ic_resp(ic_resp),
        .s_dc_rdat(dc_rdat), .s_ic_rdat(ic_rdat),
        .s_dc_miss(dc_miss),
        .s_coh_lock(s_coh_lock),
        .s_coh_rqst(s_coh_rqst),
        .s_coh_trsc(s_coh_trsc),
        .s_coh_addr(s_coh_addr),
        .s_coh_resp(s_coh_resp),
        .s_coh_mesi(s_coh_mesi),
        .m_coh_lock(m_coh_lock),
        .m_coh_rqst(m_coh_rqst),
        .m_coh_trsc(m_coh_trsc),
        .m_coh_addr(m_coh_addr),
        .m_coh_resp(m_coh_resp),
        .m_coh_mesi(m_coh_mesi),
        .m_axi_awid(m_axi_awid),
        .m_axi_awaddr(m_axi_awaddr),
        .m_axi_awlen(m_axi_awlen),
        .m_axi_awsize(m_axi_awsize),
        .m_axi_awburst(m_axi_awburst),
        .m_axi_awlock(m_axi_awlock),
        .m_axi_awcache(m_axi_awcache),
        .m_axi_awprot(m_axi_awprot),
        .m_axi_awqos(m_axi_awqos),
        .m_axi_awvalid(m_axi_awvalid),
        .m_axi_awready(m_axi_awready),
        .m_axi_wdata(m_axi_wdata),
        .m_axi_wstrb(m_axi_wstrb),
        .m_axi_wlast(m_axi_wlast),
        .m_axi_wvalid(m_axi_wvalid),
        .m_axi_wready(m_axi_wready),
        .m_axi_bid(m_axi_bid),
        .m_axi_bresp(m_axi_bresp),
        .m_axi_bvalid(m_axi_bvalid),
        .m_axi_bready(m_axi_bready),
        .m_axi_arid(m_axi_arid),
        .m_axi_araddr(m_axi_araddr),
        .m_axi_arlen(m_axi_arlen),
        .m_axi_arsize(m_axi_arsize),
        .m_axi_arburst(m_axi_arburst),
        .m_axi_arlock(m_axi_arlock),
        .m_axi_arcache(m_axi_arcache),
        .m_axi_arprot(m_axi_arprot),
        .m_axi_arqos(m_axi_arqos),
        .m_axi_arvalid(m_axi_arvalid),
        .m_axi_arready(m_axi_arready),
        .m_axi_rid(m_axi_rid),
        .m_axi_rdata(m_axi_rdata),
        .m_axi_rresp(m_axi_rresp),
        .m_axi_rlast(m_axi_rlast),
        .m_axi_rvalid(m_axi_rvalid),
        .m_axi_rready(m_axi_rready)
    );

    /* instantiate and connect */
    fet_bundle_t [fwd-1:0] fet_bundle;
    dec_bundle_t [dwd-1:0] dec_bundle;
    ren_bundle_t [rwd-1:0] ren_bundle;
    iss_bundle_t [iwd-1:0] iss_bundle;
    exe_bundle_t [iwd-1:0] exe_bundle;
    com_bundle_t [cwd-1:0] com_bundle;
    red_bundle_t           red_bundle;
    logic [fwd-1:0] dec_ready;
    logic [dwd-1:0] ren_ready;
    logic [rwd-1:0] iss_ready;
    logic [iwd-1:0] exe_ready;
    logic [rwd-1:0][1:0] busy_resp;
    logic [2*iwd-1:0][63:0] reg_resp;
    reg_bundle_t      [iwd-1:0] fu_req;
    logic        [4:0][ewd-1:0] fu_claim;
    exe_bundle_t [4:0][ewd-1:0] fu_resp;
    logic        [4:0]      fu_ready;
    logic        csr_rqst, csr_excp, csr_flsh, csr_intl;
    logic  [6:0] csr_intg;
    logic  [2:0] csr_func;
    logic [11:0] csr_addr;
    logic [63:0] csr_wdat, csr_rdat;
    logic [63:0] csr_status, csr_tvec, csr_mepc, csr_sepc, csr_fcsr;
    logic exception, frd;
    logic [63:0] epc, tval, cause;
    logic [2:0] eret;
    logic [15:0] top_opid, saf_opid;
    logic [2*mwd-1:0][15:0] lsu_safe, lsu_unsf;
    frontend #(.init(init), .rst_pc(rst_pc), .fwd(fwd), .cwd(cwd),
        .cbsz(cbsz), .fqsz(fqsz), .ftqsz(ftqsz), .fnum(fnum),
        .rassz(rassz), .phtsz(phtsz), .btbsz(btbsz))
        fe_inst(clk, rst, com_bundle, red_bundle, dec_ready, fet_bundle, fl_inst,
            it_rqst, it_vadd, it_resp, it_perm, it_padd,
            ic_rqst, ic_addr, ic_resp, ic_rdat);
    decoder #(.fwd(fwd), .dwd(dwd), .cwd(cwd),
        .dqsz(2*dwd), .opsz(opsz), .brsz(brsz), .ldsz(lqsz), .stsz(sqsz))
        dec_inst(clk, rst, csr_intl, csr_intg, csr_status, csr_fcsr,
            com_bundle, red_bundle, dec_ready, fet_bundle, ren_ready, dec_bundle);
    rename #(.dwd(dwd), .rwd(rwd), .cwd(cwd), .prnum(prnum), .brsz(brsz))
        ren_inst(clk, rst, com_bundle, red_bundle, ren_ready, dec_bundle, iss_ready, ren_bundle);
    prf #(.prnum(prnum), .rwd(rwd), .iwd(iwd), .cwd(cwd), .opsz(opsz))
        prf_inst(clk, rst, ren_bundle, iss_bundle, exe_bundle, red_bundle,
            iss_ready, (iwd)'(-1), busy_resp, reg_resp);
    csr csr_inst(clk, rst, csr_rqst, csr_func, csr_addr, csr_wdat, csr_rdat,
        exception, epc, tval, cause, eret, frd,
        csr_excp, csr_intl, csr_intg, csr_flsh,
        mip_ext, mtime, 64'(com_inst.rob_out),
        csr_status, csr_tvec, csr_mepc, csr_sepc, csr_fcsr, it_satp, dt_satp);
    issue #(.rwd(rwd), .iwd(iwd), .ewd(ewd), .cwd(cwd), .mwd(mwd), .opsz(opsz), .iqsz(iqsz))
        iss_inst(clk, rst, fu_ready, busy_resp,
            exe_bundle, red_bundle, iss_ready, ren_bundle, (iwd)'(-1), iss_bundle);
    execute #(.iwd(iwd), .ewd(ewd), .prnum(prnum))
        exe_inst(clk, rst, reg_resp, iss_bundle, fu_req, (iwd)'(-1), exe_bundle, fu_resp, fu_claim);
    commit #(.rst_pc(rst_pc), .dwd(dwd), .rwd(rwd), .iwd(iwd), .cwd(cwd), .mwd(mwd), .opsz(opsz))
        com_inst(clk, rst, dec_bundle, ren_bundle, exe_bundle, com_bundle, red_bundle,
            csr_tvec, csr_mepc, csr_sepc, exception, epc, tval, cause, eret, frd,
            lsu_safe, lsu_unsf, top_opid, saf_opid, fnci, fncv);
    alu #(.iwd(iwd), .ewd(ewd), .opsz(opsz))
        alu_inst(clk, rst, red_bundle, fu_ready[0], fu_req, fu_claim[0], fu_resp[0], csr_inst.level);
    fpu #(.iwd(iwd), .ewd(ewd), .opsz(opsz))
        fpu_inst(clk, rst, red_bundle, fu_ready[2], fu_req, fu_claim[2], fu_resp[2]);
    mul #(.iwd(iwd), .ewd(ewd), .opsz(opsz))
        mul_inst(clk, rst, red_bundle, fu_ready[3], fu_req, fu_claim[3], fu_resp[3]);
    div #(.iwd(iwd), .ewd(ewd), .opsz(opsz))
        div_inst(clk, rst, red_bundle, fu_ready[4], fu_req, fu_claim[4], fu_resp[4]);
    lsu #(.iwd(iwd), .ewd(ewd), .cwd(cwd), .mwd(mwd), .lqsz(lqsz), .sqsz(sqsz), .opsz(opsz))
        lsu_inst(clk, rst, lsu_safe, lsu_unsf, top_opid, saf_opid, red_bundle, com_bundle,
            fu_ready[1], fu_req, fu_claim[1], fu_resp[1],
            csr_rqst, csr_func, csr_addr, csr_wdat, csr_excp, csr_rdat, csr_flsh,
            fl_data, fl_inst | fl_data,
            dt_rqst, dt_vadd, dt_resp, dt_perm, dt_padd,
            dc_rqst, dc_addr, dc_strb, dc_wdat, dc_resp, dc_miss, dc_rdat);

    /* debug ports */
    always_comb dbg_cycle = csr_inst.mcycle;
    always_ff @(posedge clk) if (rst) {dbg_pcir0, dbg_pcir1} <= 0; else begin
        if (com_bundle[0].opid[15]) dbg_pcir0 <= {com_bundle[0].pc[31:0], com_bundle[0].ir};
        if (com_bundle[1].opid[15]) dbg_pcir1 <= {com_bundle[1].pc[31:0], com_bundle[1].ir};
    end
endmodule
