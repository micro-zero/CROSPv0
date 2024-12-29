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
    parameter mwd    = 2,            // memory request width
    parameter rst_pc = 64'hc0000000, // PC on reset
    parameter tohost = 64'd0,        // TOHOST address
    parameter frhost = 64'd0,        // FROMHOST address
    parameter dcbase = 64'h80000000, // memory base address
    parameter uart   = 64'h10000000  // UART-lite register base address
)(
    input  logic        clk,
    input  logic        rst,
    input  logic        sync_rqst,
    input  logic        sync_invl,
    output logic        sync_done,
    input  logic [63:0] mip_ext,
    input  logic [63:0] mtime,
    output logic [63:0] dp0,
    output logic [63:0] dp1,
    output logic [63:0] dp2,
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

    /* L1 memory */
    logic             s_global_fnci;
    logic             s_global_fncv;
    logic      [63:0] s_icache_satp;
    logic       [7:0] s_icache_rqst;
    logic             s_icache_flsh;
    logic      [63:0] s_icache_addr;
    logic       [7:0] s_icache_done;
    logic             s_icache_pgft;
    logic      [63:0] s_icache_data;
    logic      [63:0] s_dcache_satp;
    logic             s_dcache_flsh;
    logic       [7:0] s_dcache_cfrm;
    logic [1:0] [7:0] s_dcache_rqst;
    logic [1:0]       s_dcache_fnce;
    logic [1:0] [1:0] s_dcache_rsrv;
    logic [1:0] [1:0] s_dcache_aqrl;
    logic [1:0] [2:0] s_dcache_bits;
    logic [1:0]       s_dcache_wena;
    logic [1:0][63:0] s_dcache_addr;
    logic [1:0][63:0] s_dcache_wdat;
    logic [1:0] [7:0] s_dcache_done;
    logic [1:0] [7:0] s_dcache_excp;
    logic [1:0][63:0] s_dcache_rdat;
    l1 #(.init(init), .memwd(mwd), .dcbase(dcbase), .tohost(tohost), .frhost(frhost)) l1_inst(
        .clk(clk), .rst(rst),
        .s_global_fnci(s_global_fnci),
        .s_global_fncv(s_global_fncv),
        .s_synchr_rqst(sync_rqst),
        .s_synchr_invl(sync_invl),
        .s_synchr_done(sync_done),
        .s_icache_satp(s_icache_satp),
        .s_icache_rqst(s_icache_rqst),
        .s_icache_flsh(s_icache_flsh),
        .s_icache_addr(s_icache_addr),
        .s_icache_done(s_icache_done),
        .s_icache_pgft(s_icache_pgft),
        .s_icache_data(s_icache_data),
        .s_dcache_satp(s_dcache_satp),
        .s_dcache_flsh(s_dcache_flsh),
        .s_dcache_cfrm(s_dcache_cfrm),
        .s_dcache_rqst(s_dcache_rqst),
        .s_dcache_fnce(s_dcache_fnce),
        .s_dcache_aqrl(s_dcache_aqrl),
        .s_dcache_rsrv(s_dcache_rsrv),
        .s_dcache_bits(s_dcache_bits),
        .s_dcache_wena(s_dcache_wena),
        .s_dcache_addr(s_dcache_addr),
        .s_dcache_wdat(s_dcache_wdat),
        .s_dcache_done(s_dcache_done),
        .s_dcache_excp(s_dcache_excp),
        .s_dcache_rdat(s_dcache_rdat),
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
    logic [7:0] nextlsid;
    frontend #(.init(init), .rst_pc(rst_pc), .fwd(pwd), .cwd(pwd))
        fe_inst(clk, rst, com_bundle, dec_ready, fet_bundle,
            s_icache_rqst, s_icache_addr, s_icache_flsh, s_icache_done, |s_icache_pgft, s_icache_data);
    decoder #(.fwd(pwd), .dwd(pwd), .ewd(pwd), .cwd(pwd))
        dec_inst(clk, rst, csr_intr, csr_status, exe_bundle, com_bundle, dec_ready, fet_bundle, ren_ready, dec_bundle);
    rename #(.dwd(pwd), .rwd(pwd), .cwd(pwd))
        ren_inst(clk, rst, com_bundle, ren_ready, dec_bundle, iss_ready, ren_bundle);
    prf #(.rwd(pwd), .iwd(pwd), .ewd(pwd), .cwd(pwd))
        prf_inst(clk, rst, ren_bundle, iss_bundle, exe_bundle, com_bundle, busy_resp, reg_resp);
    csr csr_inst(clk, rst, csr_rqst, csr_func, csr_addr, csr_wdat, csr_rdat,
        exception, epc, tval, cause, eret,
        csr_excp, csr_intr, csr_flsh,
        mip_ext, mtime, 64'(com_inst.rob_out), csr_status, csr_tvec, csr_mepc, csr_sepc, s_icache_satp, s_dcache_satp);
    issue #(.rwd(pwd), .iwd(pwd), .ewd(pwd), .cwd(pwd), .mwd(mwd))
        iss_inst(clk, rst, fu_ready, busy_resp, exe_bundle, com_bundle, iss_ready, ren_bundle, (pwd)'(-1), iss_bundle);
    execute #(.iwd(pwd), .ewd(pwd))
        exe_inst(clk, rst, reg_resp, iss_bundle, fu_req, (pwd)'(-1), exe_bundle, fu_resp, fu_claim);
    commit #(.rst_pc(rst_pc), .dwd(pwd), .rwd(pwd), .ewd(pwd), .cwd(pwd))
        com_inst(clk, rst, dec_bundle, ren_bundle, exe_bundle, com_bundle,
            csr_tvec, csr_mepc, csr_sepc, exception, epc, tval, cause, eret, nextlsid, s_global_fnci, s_global_fncv);
    alu #(.iwd(pwd), .ewd(pwd))
        alu_inst(clk, rst, dec_inst.redir, fu_ready[0], fu_req, fu_claim[0], fu_resp[0], csr_inst.level);
    fpu #(.iwd(pwd), .ewd(pwd))
        fpu_inst(clk, rst, dec_inst.redir, fu_ready[2], fu_req, fu_claim[2], fu_resp[2]);
    mul #(.iwd(pwd), .ewd(pwd))
        mul_inst(clk, rst, dec_inst.redir, fu_ready[3], fu_req, fu_claim[3], fu_resp[3]);
    div #(.iwd(pwd), .ewd(pwd))
        div_inst(clk, rst, dec_inst.redir, fu_ready[4], fu_req, fu_claim[4], fu_resp[4]);
    lsu #(.iwd(pwd), .ewd(pwd), .mwd(mwd))
        lsu_inst(clk, rst, dec_inst.redir, nextlsid,
            fu_ready[1], fu_req, fu_claim[1], fu_resp[1],
            csr_rqst, csr_func, csr_addr, csr_wdat, csr_excp, csr_rdat, csr_flsh,
            s_dcache_flsh, s_dcache_cfrm, s_dcache_rqst, s_dcache_fnce, s_dcache_aqrl,
            s_dcache_rsrv, s_dcache_bits, s_dcache_wena, s_dcache_addr,
            s_dcache_wdat, s_dcache_done, s_dcache_excp, s_dcache_rdat);

    /* debug ports */
    always_comb dp0 = csr_inst.mcycle;
    always_ff @(posedge clk) if (rst) dp1 <= 0; else if (com_bundle[0].opid[15]) dp1 <= com_bundle[0].pc;
    always_ff @(posedge clk) if (rst) dp2 <= 0; else if (com_bundle[1].opid[15]) dp2 <= com_bundle[1].pc;
endmodule
