/**
 * crospaxi.sv:
 *   This is an implemention of CROSP core with AXI interface.
 */

`include "types.sv"
import types::*;

module crospaxi #(
    parameter init   = 1,            // whether to initialize some RAM
    parameter hpm    = 1,            // whether to enable hardware performance monitor
    parameter fwd    = 2,            // fetch width
    parameter dwd    = 2,            // decode width
    parameter rwd    = 2,            // rename width
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
    parameter btbsz  = 512,          // BTB size
    parameter index  = 9,            // TAGE index length
    parameter tag    = 8,            // TAGE tag length
    parameter hist   = 100,          // TAGE history length
    parameter cnt    = 2,            // TAGE counter length
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
    output logic      [63:0] dbg_cycle,
    output logic      [95:0] dbg_pcir0,
    output logic      [95:0] dbg_pcir1,
    output logic      [31:0] dbg_ospid,
    output logic       [1:0] dbg_level,
    output logic [11:0][3:0] dbg_event,
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
    output logic [63:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    output logic [63:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready
);
    /* MMU */
    logic [255:0] fl_data, fl_inst;
    logic        fnci;
    logic  [2:0] fncv;
    logic [15:0] fncv_asid;
    logic [63:0] fncv_vadd;
    logic  [7:0] it_rqst; logic  [7:0] dt_rqst;
    logic [63:0] it_vadd; logic [63:0] dt_vadd;
    logic [63:0] it_satp; logic [63:0] dt_satp;
    logic  [7:0] it_resp; logic  [7:0] dt_resp;
    logic  [7:0] it_perm; logic  [7:0] dt_perm;
    logic [63:0] it_padd; logic [63:0] dt_padd;
    logic  [7:0] dc_rqst; logic  [7:0] ic_rqst;
    logic [63:0] dc_addr; logic [63:0] ic_addr;
    logic  [2:0] dc_bits;
    logic [63:0] dc_wdat;
    logic  [7:0] dc_resp; logic  [7:0] ic_resp;
    logic [63:0] dc_rdat; logic [63:0] ic_rdat;
    logic  [7:0] dc_miss;
    mmu mmu_inst(
        .clk(clk), .rst(rst), .fnci(fnci), .flush(fl_inst | fl_data),
        .fncv(fncv), .fncv_asid(fncv_asid), .fncv_vadd(fncv_vadd),
        .s_dt_rqst(dt_rqst), .s_it_rqst(it_rqst),
        .s_dt_vadd(dt_vadd), .s_it_vadd(it_vadd),
        .s_dt_satp(dt_satp), .s_it_satp(it_satp),
        .s_dt_resp(dt_resp), .s_it_resp(it_resp),
        .s_dt_perm(dt_perm), .s_it_perm(it_perm),
        .s_dt_padd(dt_padd), .s_it_padd(it_padd),
        .s_dc_rqst(dc_rqst), .s_ic_rqst(ic_rqst),
        .s_dc_addr(dc_addr), .s_ic_addr(ic_addr),
        .s_dc_bits(dc_bits),
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
        .m_axi_awaddr(m_axi_awaddr),
        .m_axi_awlen(m_axi_awlen),
        .m_axi_awsize(m_axi_awsize),
        .m_axi_awburst(m_axi_awburst),
        .m_axi_awvalid(m_axi_awvalid),
        .m_axi_awready(m_axi_awready),
        .m_axi_wdata(m_axi_wdata),
        .m_axi_wstrb(m_axi_wstrb),
        .m_axi_wlast(m_axi_wlast),
        .m_axi_wvalid(m_axi_wvalid),
        .m_axi_wready(m_axi_wready),
        .m_axi_bresp(m_axi_bresp),
        .m_axi_bvalid(m_axi_bvalid),
        .m_axi_bready(m_axi_bready),
        .m_axi_araddr(m_axi_araddr),
        .m_axi_arlen(m_axi_arlen),
        .m_axi_arsize(m_axi_arsize),
        .m_axi_arburst(m_axi_arburst),
        .m_axi_arvalid(m_axi_arvalid),
        .m_axi_arready(m_axi_arready),
        .m_axi_rdata(m_axi_rdata),
        .m_axi_rresp(m_axi_rresp),
        .m_axi_rlast(m_axi_rlast),
        .m_axi_rvalid(m_axi_rvalid),
        .m_axi_rready(m_axi_rready)
    );

    /* instantiate and connect */
    localparam ghsz = 1 << $clog2(8 * hist + 2 * (opsz + fqsz) + ftqsz * fnum);
    fet_bundle_t [fwd-1:0] fet_bundle;
    dec_bundle_t [dwd-1:0] dec_bundle;
    ren_bundle_t [rwd-1:0] ren_bundle;
    iss_bundle_t [ewd-1:0] iss_bundle, lsu_bundle;
    exe_bundle_t [ewd-1:0] exe_bundle;
    com_bundle_t [cwd-1:0] com_bundle;
    red_bundle_t           red_bundle;
    logic [fwd-1:0] dec_ready;
    logic [dwd-1:0] ren_ready;
    logic [rwd-1:0] iss_ready;
    logic [rwd-1:0][1:0] busy_resp;
    logic [2*rwd-1:0][63:0] reg_resp;
    logic        [4:0][ewd-1:0] fu_claim;
    exe_bundle_t [4:0][ewd-1:0] fu_resp;
    logic        [4:0]          fu_ready;
    logic        csr_rqst, csr_excp, csr_flsh, csr_intl;
    logic  [6:0] csr_intg;
    logic  [2:0] csr_func;
    logic [11:0] csr_addr;
    logic [63:0] csr_wdat, csr_rdat;
    logic [11:0][3:0] csr_pmd;
    logic [63:0] csr_status, csr_tvec, csr_mepc, csr_sepc, csr_fcsr;
    logic [15:0] [7:0] pmpcfg;
    logic [15:0][53:0] pmpaddr;
    logic exception, frd;
    logic [63:0] epc, tval, cause;
    logic [2:0] eret;
    logic [4:0] fflags;
    logic [15:0] top_opid, saf_opid;
    logic [2*mwd-1:0][15:0] lsu_safe;
    logic [3*mwd-1:0][15:0] lsu_unsf;
    fetch #(.init(init), .rst_pc(rst_pc), .fwd(fwd),
        .cbsz(cbsz), .ghsz(ghsz), .fqsz(fqsz), .ftqsz(ftqsz), .fnum(fnum),
        .rassz(rassz), .btbsz(btbsz), .index(index), .tag(tag), .hist(hist), .cnt(cnt))
        fet_inst(clk, rst, red_bundle, dec_ready, fet_bundle,
            csr_inst.level, pmpcfg, pmpaddr, fl_inst,
            it_rqst, it_vadd, it_resp, it_perm, it_padd,
            ic_rqst, ic_addr, ic_resp, ic_rdat);
    decoder #(.fwd(fwd), .dwd(dwd), .cwd(cwd),
        .dqsz(2*dwd), .opsz(opsz), .brsz(brsz), .ldsz(lqsz), .stsz(sqsz))
        dec_inst(clk, rst, csr_intl, csr_intg, csr_status, csr_fcsr,
            com_bundle, red_bundle, dec_ready, fet_bundle, ren_ready, dec_bundle);
    rename #(.dwd(dwd), .rwd(rwd), .cwd(cwd), .prnum(prnum), .brsz(brsz))
        ren_inst(clk, rst, com_bundle, red_bundle, ren_ready, dec_bundle, iss_ready, ren_bundle);
    prf #(.prnum(prnum), .rwd(rwd), .ewd(ewd), .cwd(cwd), .opsz(opsz))
        prf_inst(clk, rst, ren_bundle, exe_bundle, red_bundle, iss_ready, busy_resp, reg_resp);
    csr #(.hpm(hpm)) csr_inst(clk, rst, csr_rqst, csr_func, csr_addr, csr_wdat, csr_rdat,
        exception, epc, tval, cause, eret, frd, fflags,
        csr_excp, csr_intl, csr_intg, csr_flsh, mip_ext, mtime, csr_pmd,
        csr_status, csr_tvec, csr_mepc, csr_sepc, csr_fcsr, it_satp, dt_satp, pmpcfg, pmpaddr);
    issue #(.rwd(rwd), .ewd(ewd), .cwd(cwd), .opsz(opsz), .iqsz(iqsz))
        iss_inst(clk, rst, fu_ready, busy_resp, reg_resp,
            exe_bundle, red_bundle, iss_ready, ren_bundle, iss_bundle, lsu_bundle);
    execute #(.ewd(ewd), .opsz(opsz), .prnum(prnum)) exe_inst(clk, rst, exe_bundle, fu_resp, fu_claim);
    commit #(.rst_pc(rst_pc), .dwd(dwd), .rwd(rwd), .ewd(ewd), .cwd(cwd), .mwd(mwd), .opsz(opsz), .cnt(cnt))
        com_inst(clk, rst, dec_bundle, ren_bundle, exe_bundle, com_bundle, red_bundle,
            csr_tvec, csr_mepc, csr_sepc, exception, epc, tval, cause, eret, frd, fflags,
            lsu_safe, lsu_unsf, top_opid, saf_opid, fnci, fncv, fncv_asid, fncv_vadd);
    alu #(.ewd(ewd), .opsz(opsz))
        alu_inst(clk, rst, red_bundle, fu_ready[0], iss_bundle, fu_claim[0], fu_resp[0], csr_inst.level,
            csr_inst.mstatus[20] & csr_inst.level == 2'b01, csr_inst.mstatus[22] & csr_inst.level == 2'b01);
    fpu #(.ewd(ewd), .opsz(opsz))
        fpu_inst(clk, rst, red_bundle, fu_ready[2], iss_bundle, fu_claim[2], fu_resp[2]);
    mul #(.ewd(ewd), .opsz(opsz))
        mul_inst(clk, rst, red_bundle, fu_ready[3], iss_bundle, fu_claim[3], fu_resp[3]);
    div #(.ewd(ewd), .opsz(opsz))
        div_inst(clk, rst, red_bundle, fu_ready[4], iss_bundle, fu_claim[4], fu_resp[4]);
    lsu #(.ewd(ewd), .cwd(cwd), .mwd(mwd), .lqsz(lqsz), .sqsz(sqsz), .opsz(opsz))
        lsu_inst(clk, rst, lsu_safe, lsu_unsf, top_opid, saf_opid, red_bundle, com_bundle,
            fu_ready[1], lsu_bundle, fu_claim[1], fu_resp[1],
            csr_rqst, csr_func, csr_addr, csr_wdat, csr_excp, csr_rdat, csr_flsh,
            csr_inst.mstatus[17] ? csr_inst.mstatus[12:11] : csr_inst.level,
            pmpcfg, pmpaddr, fl_data, fl_inst | fl_data,
            dt_rqst, dt_vadd, dt_resp, dt_perm, dt_padd,
            dc_rqst, dc_addr, dc_bits, dc_wdat, dc_resp, dc_miss, dc_rdat);

    /* performance monitor */
    always_comb begin
        /* `csr_pmd` record the delta of counters within current cycle */
        csr_pmd[0]  = 0;                                         // no event
        csr_pmd[1]  = 1;                                         // cycle
        csr_pmd[2]  = 4'(com_inst.inst_ret);                     // instructions retired
        csr_pmd[3]  = fet_inst.fredir ? 1 : 0;                   // frontend redirect
        csr_pmd[4]  = fet_inst.bredir ? 1 : 0;                   // backend redirect
        csr_pmd[5]  = dc_resp[7:4] == 4'b1110 ? 1 : 0;           // load access
        csr_pmd[6]  = dc_resp[7:4] == 4'b1111 ? 1 : 0;           // store access
        csr_pmd[7]  = mmu_inst.itlb.fill ? 1 : 0;                // ITLB miss
        csr_pmd[8]  = mmu_inst.dtlb.fill ? 1 : 0;                // DTLB miss
        csr_pmd[9]  = mmu_inst.icache.mshr_out ? 1 : 0;          // ICACHE miss
        csr_pmd[10] = dc_resp[7:5] == 3'b111 & |dc_miss ? 1 : 0; // DCACHE miss
        csr_pmd[11] = mmu_inst.stlb.fill ? 1 : 0;                // STLB miss
    end

    /* HINT instruction to get PID in OS */
    logic                  [opsz-1:0] hint_slli;
    logic          [$clog2(opsz)-1:0] hint_raddr;
    logic [ewd-1:0][$clog2(opsz)-1:0] hint_waddr;
    logic                      [63:0] hint_rvalue;
    logic [ewd-1:0]            [63:0] hint_wvalue;
    logic [ewd-1:0]                   hint_wena;
    mwpram #(.width(64), .depth(opsz), .rports(1), .wports(ewd))
        rob_hint_inst(.clk(clk), .rst(rst),
            .raddr(hint_raddr), .rvalue(hint_rvalue),
            .waddr(hint_waddr), .wvalue(hint_wvalue), .wena(hint_wena));
    always_comb begin
        hint_raddr = 0;
        for (int i = 0; i < cwd; i++)
            if (com_bundle[i].opid[15] & hint_slli[$clog2(opsz)'(com_bundle[i].opid)])
                hint_raddr = $clog2(opsz)'(com_bundle[i].opid);
    end
    always_comb for (int i = 0; i < ewd; i++) begin
        hint_waddr [i] = $clog2(opsz)'(iss_bundle[i].opid);
        hint_wena  [i] = iss_bundle[i].opid[15];
        hint_wvalue[i] = iss_bundle[i].prsv[0]; // use first oprand as HINT value
    end
    always_ff @(posedge clk) if (rst) hint_slli <= 0; else
        for (int i = 0; i < dwd; i++) if (dec_bundle[i].opid[15])
            hint_slli[$clog2(opsz)'(dec_bundle[i].opid)] <=
                dec_bundle[i].ir[11:7]  == 5'd0   & dec_bundle[i].ir[6:0]   == 7'b0010011 &
                dec_bundle[i].ir[14:12] == 3'b001 & dec_bundle[i].ir[31:26] == 6'd0;

    /* debug ports */
    always_comb dbg_level = csr_inst.level;
    always_comb dbg_event = csr_pmd;
    always_ff @(posedge clk) if (rst) dbg_cycle <= 0; else dbg_cycle <= dbg_cycle + 1;
    always_ff @(posedge clk) if (rst) {dbg_pcir0, dbg_pcir1} <= 0; else begin
        if (com_bundle[0].opid[15]) dbg_pcir0 <= {com_bundle[0].pc, com_bundle[0].ir};
        if (com_bundle[1].opid[15]) dbg_pcir1 <= {com_bundle[1].pc, com_bundle[1].ir};
    end
    always_ff @(posedge clk) if (rst) dbg_ospid <= 0; else
        for (int i = 0; i < cwd; i++)
            if (com_bundle[i].opid[15] & hint_slli[$clog2(opsz)'(com_bundle[i].opid)])
                dbg_ospid <= hint_rvalue[31:0];
endmodule
