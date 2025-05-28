/**
 * cohub.sv:
 *   This file is the coherence hub for the SoC
 */

module cohub(
    input  logic clk,
    input  logic rst,
    /* memory interface */
    input  logic        s_mem_lock,
    input  logic  [7:0] s_mem_rqst,
    input  logic  [7:0] s_mem_trsc,
    input  logic [63:0] s_mem_addr,
    output logic  [7:0] s_mem_resp,
    output logic  [7:0] s_mem_mesi,
    output logic        m_mem_lock,
    output logic  [7:0] m_mem_rqst,
    output logic  [7:0] m_mem_trsc,
    output logic [63:0] m_mem_addr,
    input  logic  [7:0] m_mem_resp,
    input  logic  [7:0] m_mem_mesi,
    /* MMU interface */
    input  logic        s_mmu_lock,
    input  logic  [7:0] s_mmu_rqst,
    input  logic  [7:0] s_mmu_trsc,
    input  logic [63:0] s_mmu_addr,
    output logic  [7:0] s_mmu_resp,
    output logic  [7:0] s_mmu_mesi,
    output logic        m_mmu_lock,
    output logic  [7:0] m_mmu_rqst,
    output logic  [7:0] m_mmu_trsc,
    output logic [63:0] m_mmu_addr,
    input  logic  [7:0] m_mmu_resp,
    input  logic  [7:0] m_mmu_mesi,
    /* SDC interface */
    input  logic        s_sdc_lock,
    input  logic  [7:0] s_sdc_rqst,
    input  logic  [7:0] s_sdc_trsc,
    input  logic [63:0] s_sdc_addr,
    output logic  [7:0] s_sdc_resp,
    output logic  [7:0] s_sdc_mesi,
    output logic        m_sdc_lock,
    output logic  [7:0] m_sdc_rqst,
    output logic  [7:0] m_sdc_trsc,
    output logic [63:0] m_sdc_addr,
    input  logic  [7:0] m_sdc_resp,
    input  logic  [7:0] m_sdc_mesi
);
    /* unify interfaces */
    localparam pn = 3; // number of ports
    logic [pn-1:0]       s_lock, m_lock;
    logic [pn-1:0] [7:0] s_rqst, m_rqst;
    logic [pn-1:0] [7:0] s_trsc, m_trsc;
    logic [pn-1:0][63:0] s_addr, m_addr;
    logic [pn-1:0] [7:0] s_resp, m_resp;
    logic [pn-1:0] [7:0] s_mesi, m_mesi;
    always_comb s_mem_resp = s_resp[0];
    always_comb s_mem_mesi = s_mesi[0];
    always_comb m_mem_lock = m_lock[0];
    always_comb m_mem_rqst = m_rqst[0];
    always_comb m_mem_trsc = m_trsc[0];
    always_comb m_mem_addr = m_addr[0];
    always_comb s_lock[0] = s_mem_lock;
    always_comb s_rqst[0] = s_mem_rqst;
    always_comb s_trsc[0] = s_mem_trsc;
    always_comb s_addr[0] = s_mem_addr;
    always_comb m_resp[0] = m_mem_resp;
    always_comb m_mesi[0] = m_mem_mesi;
    always_comb s_sdc_resp = s_resp[1];
    always_comb s_sdc_mesi = s_mesi[1];
    always_comb m_sdc_lock = m_lock[1];
    always_comb m_sdc_rqst = m_rqst[1];
    always_comb m_sdc_trsc = m_trsc[1];
    always_comb m_sdc_addr = m_addr[1];
    always_comb s_lock[1] = s_sdc_lock;
    always_comb s_rqst[1] = s_sdc_rqst;
    always_comb s_trsc[1] = s_sdc_trsc;
    always_comb s_addr[1] = s_sdc_addr;
    always_comb m_resp[1] = m_sdc_resp;
    always_comb m_mesi[1] = m_sdc_mesi;
    always_comb s_mmu_resp = s_resp[2];
    always_comb s_mmu_mesi = s_mesi[2];
    always_comb m_mmu_lock = m_lock[2];
    always_comb m_mmu_rqst = m_rqst[2];
    always_comb m_mmu_trsc = m_trsc[2];
    always_comb m_mmu_addr = m_addr[2];
    always_comb s_lock[2] = s_mmu_lock;
    always_comb s_rqst[2] = s_mmu_rqst;
    always_comb s_trsc[2] = s_mmu_trsc;
    always_comb s_addr[2] = s_mmu_addr;
    always_comb m_resp[2] = m_mmu_resp;
    always_comb m_mesi[2] = m_mmu_mesi;

    /* lock logic */
    always_ff @(posedge clk) if (rst) m_lock <= 0; else begin
        /* `s_lock` as lock request from devices,
           `m_lock` as lock confirmation to devices */
        m_lock <= 0;
        for (int i = pn - 1; i >= 0; i--) if (s_lock[i]) m_lock <= 1 << i;
    end

    /* get and buffer slave requests and master responses */
    logic [pn-1:0]   [7:0] rqst_sb;
    logic [pn-1:0]   [7:0] trsc_sb;
    logic [pn-1:0]  [63:0] addr_sb;
    logic [pn-1:0][pn-1:0] sent_sb;
    logic [pn-1:0][pn-1:0] resp_mb;
    logic [pn-1:0]   [7:0] mesi_mb;
    always_ff @(posedge clk) if (rst) rqst_sb <= 0; else
        for (int i = 0; i < pn; i++) if (|s_rqst[i]) begin
            rqst_sb[i] <= s_rqst[i];
            trsc_sb[i] <= s_trsc[i];
            addr_sb[i] <= s_addr[i];
        end
    always_ff @(posedge clk) if (rst) sent_sb <= 0; else begin
        for (int i = 0; i < pn; i++) if (|s_rqst[i]) sent_sb[i] <= 1 << i;
        for (int i = 0; i < pn; i++)
            for (int j = 0; j < pn; j++) if (|rqst_sb[i] & m_rqst[j] == rqst_sb[i])
                sent_sb[i][j] <= 1;
    end
    always_ff @(posedge clk) if (rst) resp_mb <= 0;
        else for (int i = 0; i < pn; i++) begin
            if (|s_rqst[i]) resp_mb[i] <= 1 << i;
            if (|s_resp[i]) resp_mb[i] <= 0;
            if (|s_resp[i]) mesi_mb[i] <= 0;
            for (int j = 0; j < pn; j++) if (|rqst_sb[i] & m_resp[j] == rqst_sb[i]) begin
                resp_mb[i][j] <= 1;
                if (m_mesi[j] == 1) mesi_mb[i] <= m_mesi[j]; // have V state
            end
        end

    /* assemble master requests and slave responses */
    always_comb begin
        m_rqst = 0;
        m_trsc = 0;
        m_addr = 0;
        for (int i = 0; i < pn; i++)
            for (int j = 0; j < pn; j++) if (|rqst_sb[j] & ~sent_sb[j][i]) begin
                m_rqst[i] = rqst_sb[j];
                m_trsc[i] = trsc_sb[j];
                m_addr[i] = addr_sb[j];
                break; // small number has higher priority
            end
    end
    always_comb begin
        s_resp = 0;
        s_mesi = 0;
        for (int i = 0; i < pn; i++) if (&resp_mb[i]) begin // all other ports responsed
            s_resp[i] = rqst_sb[i];
            s_mesi[i] = mesi_mb[i];
        end
    end
endmodule
