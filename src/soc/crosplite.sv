/**
 * crosplite.sv:
 *   This is an implemention of CROSP core with AXI interface
 *   and Xilinx UART-lite converter for HTIF console protocol.
 */

`include "types.sv"
import types::*;

module crosplite #(
    parameter init   = 1,            // whether to initialize some RAM
    parameter pwd    = 4,            // pipeline width
    parameter rst_pc = 64'hc0000000, // PC on reset
    parameter tohost = 64'd0,        // TOHOST address
    parameter frhost = 64'd0,        // FROMHOST address
    parameter dcbase = 64'h80000000, // memory base address
    parameter uart   = 64'h10000000  // UART-lite register base address
)(
    input  logic        clk,
    input  logic        rst,
    input  logic [63:0] mip_ext,
    input  logic [63:0] mtime,
    output logic [63:0] dp0,
    output logic [63:0] dp1,
    output logic [63:0] dp2,
    /* coherence interface */
    input  logic  [7:0] s_coh_rqst,
    input  logic  [7:0] s_coh_trsc,
    input  logic [63:0] s_coh_addr,
    output logic  [7:0] s_coh_resp,
    output logic  [7:0] m_coh_rqst,
    output logic  [7:0] m_coh_trsc,
    output logic [63:0] m_coh_addr,
    input  logic  [7:0] m_coh_resp,
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
    /* HTIF filter */
    logic at_htif, on_htif, use_htif, fr_update;
    logic [7:0] uart_stt;
    logic [63:0] waddr, wdata;
    logic [63:0] frhost_reg, tohost_reg; // memory-mapped HTIF registers
    /* HTIF slave interface */
    logic        s_axi_awready;
    logic        s_axi_wready;
    logic  [7:0] s_axi_bid;
    logic  [1:0] s_axi_bresp;
    logic        s_axi_bvalid;
    logic        s_axi_arready;
    logic  [7:0] s_axi_rid;
    logic [63:0] s_axi_rdata;
    logic  [1:0] s_axi_rresp;
    logic        s_axi_rlast;
    logic        s_axi_rvalid;
    logic        m_axi_awvalid_uart, m_axi_awvalid_l1;
    logic  [7:0] m_axi_awlen_uart,   m_axi_awlen_l1;
    logic [63:0] m_axi_awaddr_uart,  m_axi_awaddr_l1;
    logic        m_axi_wvalid_uart,  m_axi_wvalid_l1;
    logic  [7:0] m_axi_wstrb_uart,   m_axi_wstrb_l1;
    logic [63:0] m_axi_wdata_uart,   m_axi_wdata_l1;
    logic        m_axi_wlast_uart,   m_axi_wlast_l1;
    logic        m_axi_bready_uart,  m_axi_bready_l1;
    logic        m_axi_arvalid_uart, m_axi_arvalid_l1;
    logic [63:0] m_axi_araddr_uart,  m_axi_araddr_l1;
    logic  [7:0] m_axi_arlen_uart,   m_axi_arlen_l1;
    logic        m_axi_rready_uart,  m_axi_rready_l1;
    always_comb use_htif = at_htif | on_htif;
    always_comb at_htif = // request for an HTIF transaction
        m_axi_arvalid_l1 & ~|m_axi_arlen_l1 & (m_axi_araddr_l1 == tohost | m_axi_araddr_l1 == frhost) |
        m_axi_awvalid_l1 & ~|m_axi_awlen_l1 & (m_axi_awaddr_l1 == tohost | m_axi_awaddr_l1 == frhost);
    always_ff @(posedge clk) if (rst) begin
        on_htif <= 0;
        uart_stt <= 0;
        fr_update <= 0;
        tohost_reg <= 0;
        frhost_reg <= 0;
        s_axi_awready <= 1;
        s_axi_arready <= 1;
        s_axi_wready <= 1;
        s_axi_rvalid <= 0;
        s_axi_bvalid <= 0;
        m_axi_awvalid_uart <= 0;
        m_axi_wvalid_uart  <= 0;
        m_axi_bready_uart  <= 0;
        m_axi_arvalid_uart <= 0;
        m_axi_rready_uart  <= 0;
    end else if (use_htif) begin
        on_htif <= 1;
        /* slave for HTIF register RW */
        if (m_axi_arvalid_l1 & s_axi_arready) begin // AR handshake
            s_axi_arready <= 0;
            s_axi_rvalid <= 1;
            s_axi_rdata <= m_axi_araddr_l1 == tohost ? tohost_reg : frhost_reg;
            if (m_axi_araddr_l1 == frhost & ~|frhost_reg) fr_update <= 1;
        end
        if (~s_axi_awready & ~s_axi_wready & ~|uart_stt) begin // AW and W handshake
            s_axi_bvalid <= 1;
            if (waddr == tohost) tohost_reg <= wdata;
            if (waddr == frhost) frhost_reg <= wdata;
        end
        if (m_axi_awvalid_l1 & s_axi_awready) {s_axi_awready, waddr} <= {1'b0, m_axi_awaddr_l1}; // AW handshake
        if (m_axi_wvalid_l1 & s_axi_wready) {s_axi_wready, wdata} <= {1'b0, m_axi_wdata_l1};     // W  handshake
        if (s_axi_rvalid & m_axi_rready_l1) begin                                                // R  handshake
            {s_axi_rvalid, s_axi_arready} <= 1;
            if (fr_update)
                /* stop receiving transactions when entering UART transaction after HTIF transaction done */
                {s_axi_awready, s_axi_arready, s_axi_wready, uart_stt} <= 1;
            else on_htif <= 0;
        end
        if (s_axi_bvalid & m_axi_bready_l1) begin                                                // B  handshake
            {s_axi_bvalid, s_axi_awready, s_axi_wready} <= 3;
            if (tohost_reg[63:56] == 1 & tohost_reg[55:48] == 1) // console write
                {s_axi_awready, s_axi_arready, s_axi_wready, uart_stt} <= 1;
            else {on_htif, tohost_reg} <= 0;
        end
        /* master for UART-Lite register RW */
        case (uart_stt)
            1: begin // uart request detected, setting read address
                m_axi_arvalid_uart <= 1;
                m_axi_arlen_uart <= 0;
                m_axi_araddr_uart <= uart + 8; // status register
                uart_stt <= 2;
            end
            2: if (m_axi_arready) begin // waiting for AR handshake
                m_axi_arvalid_uart <= 0;
                m_axi_rready_uart <= 1;
                uart_stt <= 3;
            end
            3: if (m_axi_rvalid) begin // waiting for R handshake
                m_axi_rready_uart <= 0;
                if (fr_update)
                    if (m_axi_rdata[0]) uart_stt <= 7; // Rx FIFO valid data
                    else {frhost_reg, uart_stt} <= 10;
                else if (m_axi_rdata[3]) uart_stt <= 1; // Tx FIFO full
                else uart_stt <= 4;
            end
            4: begin // setting AW and W channel
                m_axi_awvalid_uart <= 1;
                m_axi_wvalid_uart <= 1;
                m_axi_awlen_uart <= 0;
                m_axi_awaddr_uart <= uart; // Tx/Rx FIFO
                m_axi_wlast_uart <= 1;
                m_axi_wstrb_uart <= 8'b00010000;
                m_axi_wdata_uart <= {32'(tohost_reg), 32'd0};
                uart_stt <= 5;
            end
            5: begin // waiting for AW and W handshake
                if (m_axi_awready) m_axi_awvalid_uart <= 0;
                if (m_axi_wready) m_axi_wvalid_uart <= 0;
                if (~m_axi_awvalid_uart & ~m_axi_wvalid_uart) begin
                    m_axi_bready_uart <= 1;
                    uart_stt <= 6;
                end
            end
            6: if (m_axi_bvalid) begin // waiting for B handshake
                m_axi_bready_uart <= 0;
                tohost_reg <= 0;
                uart_stt <= 10;
            end
            7: begin // Rx data detected, setting read address
                m_axi_arvalid_uart <= 1;
                m_axi_arlen_uart <= 0;
                m_axi_araddr_uart <= uart; // Tx/Rx FIFO
                uart_stt <= 8;
            end
            8: if (m_axi_arready) begin // waiting for AR handshake
                m_axi_arvalid_uart <= 0;
                m_axi_rready_uart <= 1;
                uart_stt <= 9;
            end
            9: if (m_axi_rvalid) begin // waiting for R handshake
                m_axi_rready_uart <= 0;
                frhost_reg <= {8'd1, 8'd0, 48'(m_axi_rdata[7:0])};
                uart_stt <= 10;
            end
            10: begin // recovering and returning to idle
                s_axi_awready <= 1;
                s_axi_arready <= 1;
                s_axi_wready <= 1;
                on_htif <= 0;
                fr_update <= 0;
                uart_stt <= 0;
            end
        endcase
    end
    always_comb s_axi_bid = 0;
    always_comb s_axi_bresp = 0;
    always_comb s_axi_rid = 0;
    always_comb s_axi_rresp = 0;
    always_comb s_axi_rlast = 1;

    /* MMU */
    logic fnci, fncv;
    logic  [7:0] it_rqst; logic  [7:0] dt_rqst;
    logic [63:0] it_vadd; logic [63:0] dt_vadd;
    logic [63:0] it_satp; logic [63:0] dt_satp;
    logic  [7:0] it_resp; logic  [7:0] dt_resp;
    logic  [7:0] it_perm; logic  [7:0] dt_perm;
    logic [63:0] it_padd; logic [63:0] dt_padd;
    logic        dc_flsh; logic        ic_flsh;
    logic  [7:0] dc_rqst; logic  [7:0] ic_rqst;
    logic [63:0] dc_addr; logic [63:0] ic_addr;
    logic  [7:0] dc_strb;
    logic [63:0] dc_wdat;
    logic  [7:0] dc_resp; logic  [7:0] ic_resp;
    logic [63:0] dc_rdat; logic [63:0] ic_rdat;
    logic  [7:0] dc_miss;
    mmu mmu_inst(
        .clk(clk), .rst(rst), .fnci(fnci), .fncv(fncv),
        .s_dt_rqst(dt_rqst), .s_it_rqst(it_rqst),
        .s_dt_vadd(dt_vadd), .s_it_vadd(it_vadd),
        .s_dt_satp(dt_satp), .s_it_satp(it_satp),
        .s_dt_resp(dt_resp), .s_it_resp(it_resp),
        .s_dt_perm(dt_perm), .s_it_perm(it_perm),
        .s_dt_padd(dt_padd), .s_it_padd(it_padd),
        .s_dc_flsh(dc_flsh), .s_ic_flsh(ic_flsh),
        .s_dc_rqst(dc_rqst), .s_ic_rqst(ic_rqst),
        .s_dc_addr(dc_addr), .s_ic_addr(ic_addr),
        .s_dc_strb(dc_strb),
        .s_dc_wdat(dc_wdat),
        .s_dc_resp(dc_resp), .s_ic_resp(ic_resp),
        .s_dc_rdat(dc_rdat), .s_ic_rdat(ic_rdat),
        .s_dc_miss(dc_miss),
        .s_coh_rqst(s_coh_rqst),
        .s_coh_trsc(s_coh_trsc),
        .s_coh_addr(s_coh_addr),
        .s_coh_resp(s_coh_resp),
        .m_coh_rqst(m_coh_rqst),
        .m_coh_trsc(m_coh_trsc),
        .m_coh_addr(m_coh_addr),
        .m_coh_resp(m_coh_resp),
        .m_axi_awid(m_axi_awid),
        .m_axi_awaddr(m_axi_awaddr_l1),
        .m_axi_awlen(m_axi_awlen_l1),
        .m_axi_awsize(m_axi_awsize),
        .m_axi_awburst(m_axi_awburst),
        .m_axi_awlock(m_axi_awlock),
        .m_axi_awcache(m_axi_awcache),
        .m_axi_awprot(m_axi_awprot),
        .m_axi_awqos(m_axi_awqos),
        .m_axi_awvalid(m_axi_awvalid_l1),
        .m_axi_awready(use_htif ? s_axi_awready : m_axi_awready),
        .m_axi_wdata(m_axi_wdata_l1),
        .m_axi_wstrb(m_axi_wstrb_l1),
        .m_axi_wlast(m_axi_wlast_l1),
        .m_axi_wvalid(m_axi_wvalid_l1),
        .m_axi_wready(use_htif ? s_axi_wready : m_axi_wready),
        .m_axi_bid(use_htif ? s_axi_bid : m_axi_bid),
        .m_axi_bresp(use_htif ? s_axi_bresp : m_axi_bresp),
        .m_axi_bvalid(use_htif ? s_axi_bvalid : m_axi_bvalid),
        .m_axi_bready(m_axi_bready_l1),
        .m_axi_arid(m_axi_arid),
        .m_axi_araddr(m_axi_araddr_l1),
        .m_axi_arlen(m_axi_arlen_l1),
        .m_axi_arsize(m_axi_arsize),
        .m_axi_arburst(m_axi_arburst),
        .m_axi_arlock(m_axi_arlock),
        .m_axi_arcache(m_axi_arcache),
        .m_axi_arprot(m_axi_arprot),
        .m_axi_arqos(m_axi_arqos),
        .m_axi_arvalid(m_axi_arvalid_l1),
        .m_axi_arready(use_htif ? s_axi_arready : m_axi_arready),
        .m_axi_rid(use_htif ? s_axi_rid : m_axi_rid),
        .m_axi_rdata(use_htif ? s_axi_rdata : m_axi_rdata),
        .m_axi_rresp(use_htif ? s_axi_rresp : m_axi_rresp),
        .m_axi_rlast(use_htif ? s_axi_rlast : m_axi_rlast),
        .m_axi_rvalid(use_htif ? s_axi_rvalid : m_axi_rvalid),
        .m_axi_rready(m_axi_rready_l1)
    );
    always_comb m_axi_awvalid = use_htif ? m_axi_awvalid_uart : m_axi_awvalid_l1; // filtered by HTIF handler
    always_comb m_axi_awlen   = use_htif ? m_axi_awlen_uart   : m_axi_awlen_l1;
    always_comb m_axi_awaddr  = use_htif ? m_axi_awaddr_uart  : m_axi_awaddr_l1;
    always_comb m_axi_wvalid  = use_htif ? m_axi_wvalid_uart  : m_axi_wvalid_l1;
    always_comb m_axi_wstrb   = use_htif ? m_axi_wstrb_uart   : m_axi_wstrb_l1;
    always_comb m_axi_wdata   = use_htif ? m_axi_wdata_uart   : m_axi_wdata_l1;
    always_comb m_axi_wlast   = use_htif ? m_axi_wlast_uart   : m_axi_wlast_l1;
    always_comb m_axi_bready  = use_htif ? m_axi_bready_uart  : m_axi_bready_l1;
    always_comb m_axi_arvalid = use_htif ? m_axi_arvalid_uart : m_axi_arvalid_l1;
    always_comb m_axi_arlen   = use_htif ? m_axi_arlen_uart   : m_axi_arlen_l1;
    always_comb m_axi_araddr  = use_htif ? m_axi_araddr_uart  : m_axi_araddr_l1;
    always_comb m_axi_rready  = use_htif ? m_axi_rready_uart  : m_axi_rready_l1;

    /* instantiate and connect */
    fet_bundle_t [pwd-1:0] fet_bundle;
    dec_bundle_t [pwd-1:0] dec_bundle;
    ren_bundle_t [pwd-1:0] ren_bundle;
    iss_bundle_t [pwd-1:0] iss_bundle;
    exe_bundle_t [pwd-1:0] exe_bundle;
    com_bundle_t [pwd-1:0] com_bundle;
    logic [pwd-1:0] dec_ready;
    logic [pwd-1:0] ren_ready;
    logic [pwd-1:0] iss_ready;
    logic [pwd-1:0] exe_ready;
    logic [pwd-1:0][1:0] busy_resp;
    logic [2*pwd-1:0][63:0] reg_resp;
    reg_bundle_t      [pwd-1:0] fu_req;
    logic        [4:0][pwd-1:0] fu_claim;
    exe_bundle_t [4:0][pwd-1:0] fu_resp;
    logic        [4:0]      fu_ready;
    logic        csr_rqst, csr_excp, csr_flsh;
    logic  [6:0] csr_intr;
    logic  [2:0] csr_func;
    logic [11:0] csr_addr;
    logic [63:0] csr_wdat, csr_rdat;
    logic [63:0] csr_status, csr_tvec, csr_mepc, csr_sepc;
    logic exception;
    logic [63:0] epc, tval, cause;
    logic [2:0] eret;
    logic [7:0] nextldid, nextstid;
    frontend #(.init(init), .rst_pc(rst_pc), .fwd(pwd), .cwd(pwd))
        fe_inst(clk, rst, com_bundle, dec_ready, fet_bundle,
            it_rqst, it_vadd, it_resp, it_perm, it_padd,
            ic_flsh, ic_rqst, ic_addr, ic_resp, ic_rdat);
    decoder #(.fwd(pwd), .dwd(pwd), .ewd(pwd), .cwd(pwd))
        dec_inst(clk, rst, csr_intr, csr_status, com_bundle, dec_ready, fet_bundle, ren_ready, dec_bundle);
    rename #(.dwd(pwd), .rwd(pwd), .cwd(pwd))
        ren_inst(clk, rst, com_bundle, ren_ready, dec_bundle, iss_ready, ren_bundle);
    prf #(.rwd(pwd), .iwd(pwd), .ewd(pwd), .cwd(pwd))
        prf_inst(clk, rst, ren_bundle, iss_bundle, exe_bundle, com_bundle, busy_resp, reg_resp);
    csr csr_inst(clk, rst, csr_rqst, csr_func, csr_addr, csr_wdat, csr_rdat,
        exception, epc, tval, cause, eret,
        csr_excp, csr_intr, csr_flsh,
        mip_ext, mtime, 64'(com_inst.rob_out), csr_status, csr_tvec, csr_mepc, csr_sepc, it_satp, dt_satp);
    issue #(.rwd(pwd), .iwd(pwd), .ewd(pwd), .cwd(pwd))
        iss_inst(clk, rst, fu_ready, busy_resp, exe_bundle, com_bundle, iss_ready, ren_bundle, (pwd)'(-1), iss_bundle);
    execute #(.iwd(pwd), .ewd(pwd))
        exe_inst(clk, rst, reg_resp, iss_bundle, fu_req, (pwd)'(-1), exe_bundle, fu_resp, fu_claim);
    commit #(.rst_pc(rst_pc), .dwd(pwd), .rwd(pwd), .ewd(pwd), .cwd(pwd))
        com_inst(clk, rst, dec_bundle, ren_bundle, exe_bundle, com_bundle,
            csr_tvec, csr_mepc, csr_sepc, exception, epc, tval, cause, eret, nextldid, nextstid, fnci, fncv);
    alu #(.iwd(pwd), .ewd(pwd))
        alu_inst(clk, rst, dec_inst.redir, fu_ready[0], fu_req, fu_claim[0], fu_resp[0], csr_inst.level);
    fpu #(.iwd(pwd), .ewd(pwd))
        fpu_inst(clk, rst, dec_inst.redir, fu_ready[2], fu_req, fu_claim[2], fu_resp[2]);
    mul #(.iwd(pwd), .ewd(pwd))
        mul_inst(clk, rst, dec_inst.redir, fu_ready[3], fu_req, fu_claim[3], fu_resp[3]);
    div #(.iwd(pwd), .ewd(pwd))
        div_inst(clk, rst, dec_inst.redir, fu_ready[4], fu_req, fu_claim[4], fu_resp[4]);

    /* verilator lint_off WIDTHEXPAND */
    /* verilator lint_off WIDTHTRUNC */
    logic [pwd-1:0] dis_st_valids_i, dis_ld_valids_i;
    lsu_funct_t [pwd-1:0] dis_uops_i, core_commit_uops_i;
    logic [pwd-1:0] [7:0] new_ldq_idx_o;
    logic [pwd-1:0] [7:0] new_stq_idx_o;
    logic [pwd-1:0] ldq_full_o, stq_full_o;
    logic lsu_fencei_rdy_o;
    logic s1_kill_o;
    func_unit_resp_t exe_req_i;
    exe_unit_resp_t core_exe_iresp_o;
    dc_req_t dmem_req_o;
    logic dmem_req_valid_o;
    logic dmem_release_ready_o;
    logic dmem_release_valid_i;
    addr_t dmem_release_address_i;
    dc_resp_t dmem_resp_i;
    dc_req_t dmem_nack_i;
    brupdate_t dmem_brupdate_o;
    logic dmem_exception_o;
    logic [6:0] dmem_rob_pnr_idx_o;
    logic [6:0] dmem_rob_head_idx_o;
    logic dmem_force_order_o;
    logic dmem_ordered_i;
    logic core_clr_bsy_valid_o;
    logic [7:0] core_clr_bsy_rob_idx_o;
    logic core_clr_rob_unsafe_valid_o;
    logic [6:0] core_clr_rob_unsafe_idx_o;
    xcpt_t core_lxcpt_o;
    logic core_lxcpt_valid_o;
    logic core_spec_ld_wakeup_valid_o;
    prf_id_t core_spec_ld_wakeup_o;
    logic core_load_miss_o;
    always_comb for (int i = 0; i < pwd; i++) begin
        dis_st_valids_i[i] = dec_bundle[i].opid & ~dec_bundle[i].ldid[7] & dec_bundle[i].stid[7];
        dis_ld_valids_i[i] = dec_bundle[i].opid & dec_bundle[i].ldid[7];
        dis_uops_i[i] = $bits(lsu_funct_t)'(dec_bundle[i].funct[i]);
    end
    always_comb begin
        exe_req_i = 0;
        for (int i = 0; i < pwd; i++) if (fu_req[i].fu[1]) begin
            exe_req_i.data = fu_req[i].prs[1];
            exe_req_i.addr = fu_req[i].prs[0];
            exe_req_i.offset = fu_req[i].b[63:0];
            exe_req_i.mxcpt_valid = 0;
            exe_req_i.sfence = 0;
            exe_req_i.uop = fu_req[i].funct;
            exe_req_i.valid = fu_req[i].opid[15];
        end
    end
    LSU lsu_inst(
        .clk(clk),
        .rst(rst),
        .dis_st_valids_i(dis_st_valids_i),
        .dis_ld_valids_i(dis_ld_valids_i),
        .dis_uops_i(dis_uops_i),
        .new_ldq_idx_o(new_ldq_idx_o),
        .new_stq_idx_o(new_stq_idx_o),
        .ldq_full_o(ldq_full_o),
        .stq_full_o(stq_full_o),
        .lsu_fencei_rdy_o(lsu_fencei_rdy_o),
        .core_exception_i(com_bundle[0].redir),
        .exe_req_i(exe_req_i),
        .core_exe_iresp_o(core_exe_iresp_o),
        .s1_kill_o(s1_kill_o),
        .dmem_req_o(dmem_req_o),
        .dmem_req_valid_o(dmem_req_valid_o),
        .dmem_release_ready_o(dmem_release_ready_o),
        .dmem_release_valid_i(0),
        .dmem_release_address_i(0),
        .dmem_resp_i(dmem_resp_i),
        .dmem_req_ready_i(1),
        .dmem_nack_i(dmem_nack_i),
        .dmem_brupdate_o(dmem_brupdate_o),
        .dmem_exception_o(dmem_exception_o),
        .dmem_rob_pnr_idx_o(dmem_rob_pnr_idx_o),
        .dmem_rob_head_idx_o(dmem_rob_pnr_idx_o),
        .dmem_force_order_o(dmem_force_order_o),
        .dmem_ordered_i(dmem_ordered_i),
        .core_rob_head_idx_i(com_inst.rob_front),
        .core_rob_pnr_idx_i(com_inst.rob_front),
        .commit_load_at_rob_head_i(|nextldid),
        .core_commit_valids_i(com_bundle[0].opid[15]),
        .core_commit_uops_i(core_commit_uops_i),
        .core_clr_bsy_valid_o(core_clr_bsy_valid_o),
        .core_clr_bsy_rob_idx_o(core_clr_bsy_rob_idx_o),
        .core_clr_rob_unsafe_valid_o(core_clr_rob_unsafe_valid_o),
        .core_clr_rob_unsafe_idx_o(core_clr_rob_unsafe_idx_o),
        .core_lxcpt_o(core_lxcpt_o),
        .core_lxcpt_valid_o(core_lxcpt_valid_o),
        .core_brupdate_i(com_bundle[0]),
        .core_spec_ld_wakeup_valid_o(core_spec_ld_wakeup_valid_o),
        .core_spec_ld_wakeup_o(core_spec_ld_wakeup_o),
        .core_load_miss_o(core_load_miss_o)
    );

    /* debug ports */
    always_comb dp0 = csr_inst.mcycle;
    always_ff @(posedge clk) if (rst) dp1 <= 0; else if (com_bundle[0].opid[15]) dp1 <= com_bundle[0].pc;
    always_ff @(posedge clk) if (rst) dp2 <= 0; else if (com_bundle[1].opid[15]) dp2 <= com_bundle[1].pc;
endmodule
