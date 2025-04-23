/**
 * def.sv:
 *   This file handles some default logic.
 */

module def(
    input  logic        clk,
    input  logic        rst,
    output logic        zero1,
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
    input  logic  [7:0] m_mem_mesi
);
    always_comb zero1 = 0;
    always_ff @(posedge clk) if (rst) s_mem_resp <= 0; else s_mem_resp <= s_mem_rqst;
    always_ff @(posedge clk) if (rst) s_mem_mesi <= 0; else s_mem_mesi <= 1;
    always_ff @(posedge clk) if (rst) m_mem_rqst <= 0; else m_mem_rqst <= 0;
    always_ff @(posedge clk) if (rst) m_mem_trsc <= 0; else m_mem_trsc <= 0;
    always_ff @(posedge clk) if (rst) m_mem_addr <= 0; else m_mem_addr <= 0;
endmodule
