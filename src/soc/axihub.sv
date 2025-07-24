/**
 * axihub.sv:
 *   This file is the AXI hub for the SoC
 */
module axihub(
    input  logic clk,
    input  logic rst,
    /* MMU master interface */
    input  logic [63:0] m_mmu_awaddr,
    input  logic  [7:0] m_mmu_awlen,
    input  logic  [2:0] m_mmu_awsize,
    input  logic  [1:0] m_mmu_awburst,
    input  logic        m_mmu_awvalid,
    output logic        m_mmu_awready,
    input  logic [63:0] m_mmu_wdata,
    input  logic  [7:0] m_mmu_wstrb,
    input  logic        m_mmu_wlast,
    input  logic        m_mmu_wvalid,
    output logic        m_mmu_wready,
    output logic  [1:0] m_mmu_bresp,
    output logic        m_mmu_bvalid,
    input  logic        m_mmu_bready,
    input  logic [63:0] m_mmu_araddr,
    input  logic  [7:0] m_mmu_arlen,
    input  logic  [2:0] m_mmu_arsize,
    input  logic  [1:0] m_mmu_arburst,
    input  logic        m_mmu_arvalid,
    output logic        m_mmu_arready,
    output logic [63:0] m_mmu_rdata,
    output logic  [1:0] m_mmu_rresp,
    output logic        m_mmu_rlast,
    output logic        m_mmu_rvalid,
    input  logic        m_mmu_rready,
    /* SDC master interface */
    input  logic [63:0] m_sdc_awaddr,
    input  logic  [7:0] m_sdc_awlen,
    input  logic  [2:0] m_sdc_awsize,
    input  logic  [1:0] m_sdc_awburst,
    input  logic        m_sdc_awvalid,
    output logic        m_sdc_awready,
    input  logic [63:0] m_sdc_wdata,
    input  logic  [7:0] m_sdc_wstrb,
    input  logic        m_sdc_wlast,
    input  logic        m_sdc_wvalid,
    output logic        m_sdc_wready,
    output logic  [1:0] m_sdc_bresp,
    output logic        m_sdc_bvalid,
    input  logic        m_sdc_bready,
    input  logic [63:0] m_sdc_araddr,
    input  logic  [7:0] m_sdc_arlen,
    input  logic  [2:0] m_sdc_arsize,
    input  logic  [1:0] m_sdc_arburst,
    input  logic        m_sdc_arvalid,
    output logic        m_sdc_arready,
    output logic [63:0] m_sdc_rdata,
    output logic  [1:0] m_sdc_rresp,
    output logic        m_sdc_rlast,
    output logic        m_sdc_rvalid,
    input  logic        m_sdc_rready,
    /* DDR slave interface */
    output logic [63:0] s_ddr_awaddr,
    output logic  [7:0] s_ddr_awlen,
    output logic  [2:0] s_ddr_awsize,
    output logic  [1:0] s_ddr_awburst,
    output logic        s_ddr_awvalid,
    input  logic        s_ddr_awready,
    output logic [63:0] s_ddr_wdata,
    output logic  [7:0] s_ddr_wstrb,
    output logic        s_ddr_wlast,
    output logic        s_ddr_wvalid,
    input  logic        s_ddr_wready,
    input  logic  [1:0] s_ddr_bresp,
    input  logic        s_ddr_bvalid,
    output logic        s_ddr_bready,
    output logic [63:0] s_ddr_araddr,
    output logic  [7:0] s_ddr_arlen,
    output logic  [2:0] s_ddr_arsize,
    output logic  [1:0] s_ddr_arburst,
    output logic        s_ddr_arvalid,
    input  logic        s_ddr_arready,
    input  logic [63:0] s_ddr_rdata,
    input  logic  [1:0] s_ddr_rresp,
    input  logic        s_ddr_rlast,
    input  logic        s_ddr_rvalid,
    output logic        s_ddr_rready,
    /* UART slave interface */
    output logic [63:0] s_uart_awaddr,
    output logic  [7:0] s_uart_awlen,
    output logic  [2:0] s_uart_awsize,
    output logic  [1:0] s_uart_awburst,
    output logic        s_uart_awvalid,
    input  logic        s_uart_awready,
    output logic [63:0] s_uart_wdata,
    output logic  [7:0] s_uart_wstrb,
    output logic        s_uart_wlast,
    output logic        s_uart_wvalid,
    input  logic        s_uart_wready,
    input  logic  [1:0] s_uart_bresp,
    input  logic        s_uart_bvalid,
    output logic        s_uart_bready,
    output logic [63:0] s_uart_araddr,
    output logic  [7:0] s_uart_arlen,
    output logic  [2:0] s_uart_arsize,
    output logic  [1:0] s_uart_arburst,
    output logic        s_uart_arvalid,
    input  logic        s_uart_arready,
    input  logic [63:0] s_uart_rdata,
    input  logic  [1:0] s_uart_rresp,
    input  logic        s_uart_rlast,
    input  logic        s_uart_rvalid,
    output logic        s_uart_rready,
    /* SDC slave interface */
    output logic [63:0] s_sdc_awaddr,
    output logic  [7:0] s_sdc_awlen,
    output logic  [2:0] s_sdc_awsize,
    output logic  [1:0] s_sdc_awburst,
    output logic        s_sdc_awvalid,
    input  logic        s_sdc_awready,
    output logic [63:0] s_sdc_wdata,
    output logic  [7:0] s_sdc_wstrb,
    output logic        s_sdc_wlast,
    output logic        s_sdc_wvalid,
    input  logic        s_sdc_wready,
    input  logic  [1:0] s_sdc_bresp,
    input  logic        s_sdc_bvalid,
    output logic        s_sdc_bready,
    output logic [63:0] s_sdc_araddr,
    output logic  [7:0] s_sdc_arlen,
    output logic  [2:0] s_sdc_arsize,
    output logic  [1:0] s_sdc_arburst,
    output logic        s_sdc_arvalid,
    input  logic        s_sdc_arready,
    input  logic [63:0] s_sdc_rdata,
    input  logic  [1:0] s_sdc_rresp,
    input  logic        s_sdc_rlast,
    input  logic        s_sdc_rvalid,
    output logic        s_sdc_rready,
    /* PLIC slave interface */
    output logic [63:0] s_plic_awaddr,
    output logic  [7:0] s_plic_awlen,
    output logic  [2:0] s_plic_awsize,
    output logic  [1:0] s_plic_awburst,
    output logic        s_plic_awvalid,
    input  logic        s_plic_awready,
    output logic [63:0] s_plic_wdata,
    output logic  [7:0] s_plic_wstrb,
    output logic        s_plic_wlast,
    output logic        s_plic_wvalid,
    input  logic        s_plic_wready,
    input  logic  [1:0] s_plic_bresp,
    input  logic        s_plic_bvalid,
    output logic        s_plic_bready,
    output logic [63:0] s_plic_araddr,
    output logic  [7:0] s_plic_arlen,
    output logic  [2:0] s_plic_arsize,
    output logic  [1:0] s_plic_arburst,
    output logic        s_plic_arvalid,
    input  logic        s_plic_arready,
    input  logic [63:0] s_plic_rdata,
    input  logic  [1:0] s_plic_rresp,
    input  logic        s_plic_rlast,
    input  logic        s_plic_rvalid,
    output logic        s_plic_rready,
    /* CLINT slave interface */
    output logic [63:0] s_clint_awaddr,
    output logic  [7:0] s_clint_awlen,
    output logic  [2:0] s_clint_awsize,
    output logic  [1:0] s_clint_awburst,
    output logic        s_clint_awvalid,
    input  logic        s_clint_awready,
    output logic [63:0] s_clint_wdata,
    output logic  [7:0] s_clint_wstrb,
    output logic        s_clint_wlast,
    output logic        s_clint_wvalid,
    input  logic        s_clint_wready,
    input  logic  [1:0] s_clint_bresp,
    input  logic        s_clint_bvalid,
    output logic        s_clint_bready,
    output logic [63:0] s_clint_araddr,
    output logic  [7:0] s_clint_arlen,
    output logic  [2:0] s_clint_arsize,
    output logic  [1:0] s_clint_arburst,
    output logic        s_clint_arvalid,
    input  logic        s_clint_arready,
    input  logic [63:0] s_clint_rdata,
    input  logic  [1:0] s_clint_rresp,
    input  logic        s_clint_rlast,
    input  logic        s_clint_rvalid,
    output logic        s_clint_rready,
    /* ROM slave interface */
    output logic [63:0] s_rom_awaddr,
    output logic  [7:0] s_rom_awlen,
    output logic  [2:0] s_rom_awsize,
    output logic  [1:0] s_rom_awburst,
    output logic        s_rom_awvalid,
    input  logic        s_rom_awready,
    output logic [63:0] s_rom_wdata,
    output logic  [7:0] s_rom_wstrb,
    output logic        s_rom_wlast,
    output logic        s_rom_wvalid,
    input  logic        s_rom_wready,
    input  logic  [1:0] s_rom_bresp,
    input  logic        s_rom_bvalid,
    output logic        s_rom_bready,
    output logic [63:0] s_rom_araddr,
    output logic  [7:0] s_rom_arlen,
    output logic  [2:0] s_rom_arsize,
    output logic  [1:0] s_rom_arburst,
    output logic        s_rom_arvalid,
    input  logic        s_rom_arready,
    input  logic [63:0] s_rom_rdata,
    input  logic  [1:0] s_rom_rresp,
    input  logic        s_rom_rlast,
    input  logic        s_rom_rvalid,
    output logic        s_rom_rready
);
    /* AXI aliases */
    localparam master = 2, slave = 6;
    logic [63:0] m_axi_awaddr  [master-1:0], s_axi_awaddr  [slave-1:0];
    logic  [7:0] m_axi_awlen   [master-1:0], s_axi_awlen   [slave-1:0];
    logic  [2:0] m_axi_awsize  [master-1:0], s_axi_awsize  [slave-1:0];
    logic  [1:0] m_axi_awburst [master-1:0], s_axi_awburst [slave-1:0];
    logic        m_axi_awvalid [master-1:0], s_axi_awvalid [slave-1:0];
    logic        m_axi_awready [master-1:0], s_axi_awready [slave-1:0];
    logic [63:0] m_axi_wdata   [master-1:0], s_axi_wdata   [slave-1:0];
    logic  [7:0] m_axi_wstrb   [master-1:0], s_axi_wstrb   [slave-1:0];
    logic        m_axi_wlast   [master-1:0], s_axi_wlast   [slave-1:0];
    logic        m_axi_wvalid  [master-1:0], s_axi_wvalid  [slave-1:0];
    logic        m_axi_wready  [master-1:0], s_axi_wready  [slave-1:0];
    logic  [1:0] m_axi_bresp   [master-1:0], s_axi_bresp   [slave-1:0];
    logic        m_axi_bvalid  [master-1:0], s_axi_bvalid  [slave-1:0];
    logic        m_axi_bready  [master-1:0], s_axi_bready  [slave-1:0];
    logic [63:0] m_axi_araddr  [master-1:0], s_axi_araddr  [slave-1:0];
    logic  [7:0] m_axi_arlen   [master-1:0], s_axi_arlen   [slave-1:0];
    logic  [2:0] m_axi_arsize  [master-1:0], s_axi_arsize  [slave-1:0];
    logic  [1:0] m_axi_arburst [master-1:0], s_axi_arburst [slave-1:0];
    logic        m_axi_arvalid [master-1:0], s_axi_arvalid [slave-1:0];
    logic        m_axi_arready [master-1:0], s_axi_arready [slave-1:0];
    logic [63:0] m_axi_rdata   [master-1:0], s_axi_rdata   [slave-1:0];
    logic  [1:0] m_axi_rresp   [master-1:0], s_axi_rresp   [slave-1:0];
    logic        m_axi_rlast   [master-1:0], s_axi_rlast   [slave-1:0];
    logic        m_axi_rvalid  [master-1:0], s_axi_rvalid  [slave-1:0];
    logic        m_axi_rready  [master-1:0], s_axi_rready  [slave-1:0];
    /* slave address base and mask */
    logic [slave-1:0][63:0] s_base, s_mask;
    always_comb begin
        /* master interface alias */
        m_axi_awaddr  [0] = m_mmu_awaddr;  m_axi_awaddr  [1] = m_sdc_awaddr;
        m_axi_awlen   [0] = m_mmu_awlen;   m_axi_awlen   [1] = m_sdc_awlen;
        m_axi_awsize  [0] = m_mmu_awsize;  m_axi_awsize  [1] = m_sdc_awsize;
        m_axi_awburst [0] = m_mmu_awburst; m_axi_awburst [1] = m_sdc_awburst;
        m_axi_awvalid [0] = m_mmu_awvalid; m_axi_awvalid [1] = m_sdc_awvalid;
        m_axi_wdata   [0] = m_mmu_wdata;   m_axi_wdata   [1] = m_sdc_wdata;
        m_axi_wstrb   [0] = m_mmu_wstrb;   m_axi_wstrb   [1] = m_sdc_wstrb;
        m_axi_wlast   [0] = m_mmu_wlast;   m_axi_wlast   [1] = m_sdc_wlast;
        m_axi_wvalid  [0] = m_mmu_wvalid;  m_axi_wvalid  [1] = m_sdc_wvalid;
        m_axi_bready  [0] = m_mmu_bready;  m_axi_bready  [1] = m_sdc_bready;
        m_axi_araddr  [0] = m_mmu_araddr;  m_axi_araddr  [1] = m_sdc_araddr;
        m_axi_arlen   [0] = m_mmu_arlen;   m_axi_arlen   [1] = m_sdc_arlen;
        m_axi_arsize  [0] = m_mmu_arsize;  m_axi_arsize  [1] = m_sdc_arsize;
        m_axi_arburst [0] = m_mmu_arburst; m_axi_arburst [1] = m_sdc_arburst;
        m_axi_arvalid [0] = m_mmu_arvalid; m_axi_arvalid [1] = m_sdc_arvalid;
        m_axi_rready  [0] = m_mmu_rready;  m_axi_rready  [1] = m_sdc_rready;
        m_mmu_awready = m_axi_awready [0]; m_sdc_awready = m_axi_awready [1];
        m_mmu_wready  = m_axi_wready  [0]; m_sdc_wready  = m_axi_wready  [1];
        m_mmu_bresp   = m_axi_bresp   [0]; m_sdc_bresp   = m_axi_bresp   [1];
        m_mmu_bvalid  = m_axi_bvalid  [0]; m_sdc_bvalid  = m_axi_bvalid  [1];
        m_mmu_arready = m_axi_arready [0]; m_sdc_arready = m_axi_arready [1];
        m_mmu_rdata   = m_axi_rdata   [0]; m_sdc_rdata   = m_axi_rdata   [1];
        m_mmu_rresp   = m_axi_rresp   [0]; m_sdc_rresp   = m_axi_rresp   [1];
        m_mmu_rlast   = m_axi_rlast   [0]; m_sdc_rlast   = m_axi_rlast   [1];
        m_mmu_rvalid  = m_axi_rvalid  [0]; m_sdc_rvalid  = m_axi_rvalid  [1];
        /* slave interface alias */
        s_base        [0] = 64'h00010000;   s_base        [1] = 64'h02000000;
        s_mask        [0] = 64'h0000ffff;   s_mask        [1] = 64'h0000ffff;
        s_axi_awready [0] = s_rom_awready;  s_axi_awready [1] = s_clint_awready;
        s_axi_wready  [0] = s_rom_wready;   s_axi_wready  [1] = s_clint_wready;
        s_axi_bresp   [0] = s_rom_bresp;    s_axi_bresp   [1] = s_clint_bresp;
        s_axi_bvalid  [0] = s_rom_bvalid;   s_axi_bvalid  [1] = s_clint_bvalid;
        s_axi_arready [0] = s_rom_arready;  s_axi_arready [1] = s_clint_arready;
        s_axi_rdata   [0] = s_rom_rdata;    s_axi_rdata   [1] = s_clint_rdata;
        s_axi_rresp   [0] = s_rom_rresp;    s_axi_rresp   [1] = s_clint_rresp;
        s_axi_rlast   [0] = s_rom_rlast;    s_axi_rlast   [1] = s_clint_rlast;
        s_axi_rvalid  [0] = s_rom_rvalid;   s_axi_rvalid  [1] = s_clint_rvalid;
        s_base        [2] = 64'h0c000000;   s_base        [3] = 64'h60000000;
        s_mask        [2] = 64'h03ffffff;   s_mask        [3] = 64'h0000ffff;
        s_axi_awready [2] = s_plic_awready; s_axi_awready [3] = s_sdc_awready;
        s_axi_wready  [2] = s_plic_wready;  s_axi_wready  [3] = s_sdc_wready;
        s_axi_bresp   [2] = s_plic_bresp;   s_axi_bresp   [3] = s_sdc_bresp;
        s_axi_bvalid  [2] = s_plic_bvalid;  s_axi_bvalid  [3] = s_sdc_bvalid;
        s_axi_arready [2] = s_plic_arready; s_axi_arready [3] = s_sdc_arready;
        s_axi_rdata   [2] = s_plic_rdata;   s_axi_rdata   [3] = s_sdc_rdata;
        s_axi_rresp   [2] = s_plic_rresp;   s_axi_rresp   [3] = s_sdc_rresp;
        s_axi_rlast   [2] = s_plic_rlast;   s_axi_rlast   [3] = s_sdc_rlast;
        s_axi_rvalid  [2] = s_plic_rvalid;  s_axi_rvalid  [3] = s_sdc_rvalid;
        s_base        [4] = 64'h60010000;   s_base        [5] = 64'h80000000;
        s_mask        [4] = 64'h0000ffff;   s_mask        [5] = 64'h3fffffff;
        s_axi_awready [4] = s_uart_awready; s_axi_awready [5] = s_ddr_awready;
        s_axi_wready  [4] = s_uart_wready;  s_axi_wready  [5] = s_ddr_wready;
        s_axi_bresp   [4] = s_uart_bresp;   s_axi_bresp   [5] = s_ddr_bresp;
        s_axi_bvalid  [4] = s_uart_bvalid;  s_axi_bvalid  [5] = s_ddr_bvalid;
        s_axi_arready [4] = s_uart_arready; s_axi_arready [5] = s_ddr_arready;
        s_axi_rdata   [4] = s_uart_rdata;   s_axi_rdata   [5] = s_ddr_rdata;
        s_axi_rresp   [4] = s_uart_rresp;   s_axi_rresp   [5] = s_ddr_rresp;
        s_axi_rlast   [4] = s_uart_rlast;   s_axi_rlast   [5] = s_ddr_rlast;
        s_axi_rvalid  [4] = s_uart_rvalid;  s_axi_rvalid  [5] = s_ddr_rvalid;
        s_rom_awaddr   = s_axi_awaddr  [0];  s_clint_awaddr  = s_axi_awaddr  [1];
        s_rom_awlen    = s_axi_awlen   [0];  s_clint_awlen   = s_axi_awlen   [1];
        s_rom_awsize   = s_axi_awsize  [0];  s_clint_awsize  = s_axi_awsize  [1];
        s_rom_awburst  = s_axi_awburst [0];  s_clint_awburst = s_axi_awburst [1];
        s_rom_awvalid  = s_axi_awvalid [0];  s_clint_awvalid = s_axi_awvalid [1];
        s_rom_wdata    = s_axi_wdata   [0];  s_clint_wdata   = s_axi_wdata   [1];
        s_rom_wstrb    = s_axi_wstrb   [0];  s_clint_wstrb   = s_axi_wstrb   [1];
        s_rom_wlast    = s_axi_wlast   [0];  s_clint_wlast   = s_axi_wlast   [1];
        s_rom_wvalid   = s_axi_wvalid  [0];  s_clint_wvalid  = s_axi_wvalid  [1];
        s_rom_bready   = s_axi_bready  [0];  s_clint_bready  = s_axi_bready  [1];
        s_rom_araddr   = s_axi_araddr  [0];  s_clint_araddr  = s_axi_araddr  [1];
        s_rom_arlen    = s_axi_arlen   [0];  s_clint_arlen   = s_axi_arlen   [1];
        s_rom_arsize   = s_axi_arsize  [0];  s_clint_arsize  = s_axi_arsize  [1];
        s_rom_arburst  = s_axi_arburst [0];  s_clint_arburst = s_axi_arburst [1];
        s_rom_arvalid  = s_axi_arvalid [0];  s_clint_arvalid = s_axi_arvalid [1];
        s_rom_rready   = s_axi_rready  [0];  s_clint_rready  = s_axi_rready  [1];
        s_plic_awaddr  = s_axi_awaddr  [2];  s_sdc_awaddr    = s_axi_awaddr  [3];
        s_plic_awlen   = s_axi_awlen   [2];  s_sdc_awlen     = s_axi_awlen   [3];
        s_plic_awsize  = s_axi_awsize  [2];  s_sdc_awsize    = s_axi_awsize  [3];
        s_plic_awburst = s_axi_awburst [2];  s_sdc_awburst   = s_axi_awburst [3];
        s_plic_awvalid = s_axi_awvalid [2];  s_sdc_awvalid   = s_axi_awvalid [3];
        s_plic_wdata   = s_axi_wdata   [2];  s_sdc_wdata     = s_axi_wdata   [3];
        s_plic_wstrb   = s_axi_wstrb   [2];  s_sdc_wstrb     = s_axi_wstrb   [3];
        s_plic_wlast   = s_axi_wlast   [2];  s_sdc_wlast     = s_axi_wlast   [3];
        s_plic_wvalid  = s_axi_wvalid  [2];  s_sdc_wvalid    = s_axi_wvalid  [3];
        s_plic_bready  = s_axi_bready  [2];  s_sdc_bready    = s_axi_bready  [3];
        s_plic_araddr  = s_axi_araddr  [2];  s_sdc_araddr    = s_axi_araddr  [3];
        s_plic_arlen   = s_axi_arlen   [2];  s_sdc_arlen     = s_axi_arlen   [3];
        s_plic_arsize  = s_axi_arsize  [2];  s_sdc_arsize    = s_axi_arsize  [3];
        s_plic_arburst = s_axi_arburst [2];  s_sdc_arburst   = s_axi_arburst [3];
        s_plic_arvalid = s_axi_arvalid [2];  s_sdc_arvalid   = s_axi_arvalid [3];
        s_plic_rready  = s_axi_rready  [2];  s_sdc_rready    = s_axi_rready  [3];
        s_uart_awaddr  = s_axi_awaddr  [4];  s_ddr_awaddr    = s_axi_awaddr  [5];
        s_uart_awlen   = s_axi_awlen   [4];  s_ddr_awlen     = s_axi_awlen   [5];
        s_uart_awsize  = s_axi_awsize  [4];  s_ddr_awsize    = s_axi_awsize  [5];
        s_uart_awburst = s_axi_awburst [4];  s_ddr_awburst   = s_axi_awburst [5];
        s_uart_awvalid = s_axi_awvalid [4];  s_ddr_awvalid   = s_axi_awvalid [5];
        s_uart_wdata   = s_axi_wdata   [4];  s_ddr_wdata     = s_axi_wdata   [5];
        s_uart_wstrb   = s_axi_wstrb   [4];  s_ddr_wstrb     = s_axi_wstrb   [5];
        s_uart_wlast   = s_axi_wlast   [4];  s_ddr_wlast     = s_axi_wlast   [5];
        s_uart_wvalid  = s_axi_wvalid  [4];  s_ddr_wvalid    = s_axi_wvalid  [5];
        s_uart_bready  = s_axi_bready  [4];  s_ddr_bready    = s_axi_bready  [5];
        s_uart_araddr  = s_axi_araddr  [4];  s_ddr_araddr    = s_axi_araddr  [5];
        s_uart_arlen   = s_axi_arlen   [4];  s_ddr_arlen     = s_axi_arlen   [5];
        s_uart_arsize  = s_axi_arsize  [4];  s_ddr_arsize    = s_axi_arsize  [5];
        s_uart_arburst = s_axi_arburst [4];  s_ddr_arburst   = s_axi_arburst [5];
        s_uart_arvalid = s_axi_arvalid [4];  s_ddr_arvalid   = s_axi_arvalid [5];
        s_uart_rready  = s_axi_rready  [4];  s_ddr_rready    = s_axi_rready  [5];
    end

    /* slave selection function */
    function logic [$clog2(slave)-1:0] select(input logic [63:0] addr);
        select = 0;
        for (int i = 0; i < slave; i++)
            if ((addr & ~s_mask[i]) == s_base[i]) select = $clog2(slave)'(i);
    endfunction

    /* master and slave selection logic */
    logic [$clog2(master)-1:0] m; // master selection
    logic [$clog2(slave) -1:0] s; // slave  selection
    logic c, r, w;                // connect, read and write flags
    always_comb c = r | w;
    always_ff @(posedge clk) if (rst) {m, s, r, w} <= 0; else begin
        /* operate read/write bits when connected */
        if (c & m_axi_arvalid[m] & m_axi_arready[m]) r <= 1;
        if (c & m_axi_awvalid[m] & m_axi_awready[m]) w <= 1;
        if (c & m_axi_rready [m] & m_axi_rvalid [m]) r <= ~m_axi_rlast[m];
        if (c & m_axi_bready [m] & m_axi_bvalid [m]) w <= 0;
        /* check new connection */
        for (int i = 0; i < master; i++) if (~c) begin
            if (m_axi_arvalid[i]) {m, s, r, w} <= {$clog2(master)'(i), select(m_axi_araddr[i]), 1'b1, 1'b0};
            if (m_axi_awvalid[i]) {m, s, r, w} <= {$clog2(master)'(i), select(m_axi_awaddr[i]), 1'b0, 1'b1};
        end
    end

    /* AXI port connection */
    always_comb begin
        for (int i = 0; i < slave;  i++) s_axi_awaddr  [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_awlen   [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_awsize  [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_awburst [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_awvalid [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_wdata   [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_wstrb   [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_wlast   [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_wvalid  [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_bready  [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_araddr  [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_arlen   [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_arsize  [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_arburst [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_arvalid [i] = 0;
        for (int i = 0; i < slave;  i++) s_axi_rready  [i] = 0;
        for (int i = 0; i < master; i++) m_axi_awready [i] = 0;
        for (int i = 0; i < master; i++) m_axi_wready  [i] = 0;
        for (int i = 0; i < master; i++) m_axi_bresp   [i] = 0;
        for (int i = 0; i < master; i++) m_axi_bvalid  [i] = 0;
        for (int i = 0; i < master; i++) m_axi_arready [i] = 0;
        for (int i = 0; i < master; i++) m_axi_rdata   [i] = 0;
        for (int i = 0; i < master; i++) m_axi_rresp   [i] = 0;
        for (int i = 0; i < master; i++) m_axi_rlast   [i] = 0;
        for (int i = 0; i < master; i++) m_axi_rvalid  [i] = 0;
        if (c) s_axi_awaddr [s] = m_axi_awaddr [m];
        if (c) s_axi_awlen  [s] = m_axi_awlen  [m];
        if (c) s_axi_awsize [s] = m_axi_awsize [m];
        if (c) s_axi_awburst[s] = m_axi_awburst[m];
        if (c) s_axi_awvalid[s] = m_axi_awvalid[m];
        if (c) s_axi_wdata  [s] = m_axi_wdata  [m];
        if (c) s_axi_wstrb  [s] = m_axi_wstrb  [m];
        if (c) s_axi_wlast  [s] = m_axi_wlast  [m];
        if (c) s_axi_wvalid [s] = m_axi_wvalid [m];
        if (c) s_axi_bready [s] = m_axi_bready [m];
        if (c) s_axi_araddr [s] = m_axi_araddr [m];
        if (c) s_axi_arlen  [s] = m_axi_arlen  [m];
        if (c) s_axi_arsize [s] = m_axi_arsize [m];
        if (c) s_axi_arburst[s] = m_axi_arburst[m];
        if (c) s_axi_arvalid[s] = m_axi_arvalid[m];
        if (c) s_axi_rready [s] = m_axi_rready [m];
        if (c) m_axi_awready[m] = s_axi_awready[s];
        if (c) m_axi_wready [m] = s_axi_wready [s];
        if (c) m_axi_bresp  [m] = s_axi_bresp  [s];
        if (c) m_axi_bvalid [m] = s_axi_bvalid [s];
        if (c) m_axi_arready[m] = s_axi_arready[s];
        if (c) m_axi_rdata  [m] = s_axi_rdata  [s];
        if (c) m_axi_rresp  [m] = s_axi_rresp  [s];
        if (c) m_axi_rlast  [m] = s_axi_rlast  [s];
        if (c) m_axi_rvalid [m] = s_axi_rvalid [s];
    end
endmodule