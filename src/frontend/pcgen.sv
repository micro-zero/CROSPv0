/**
 * pcgen.sv:
 *   This file includes PC generation module, i.e. branch
 *   predictor, providing PC for frontend and the frontend will
 *   write each PC output to fetch target queue.
 */

`include "types.sv"
import types::*;

module pcgen #(
    parameter init, // propagated from parent module
    parameter rst_pc,
    parameter cbsz,
    parameter fnum,
    parameter phtsz,
    parameter btbsz
)(
    input logic clk,
    input logic rst,
    input logic redir,       // redirect signal
    input logic reinf,       // reinforce signal
    input logic [63:0] upc,  // updating PC
    input logic [63:0] unpc, // updating next PC
    input logic [1:0] upat,  // updateing old pattern
    input logic ready,       // ready signal
    output pcg_bundle_t out  // output bundle
);
    /* original registers */
    logic [63:0] pc_r; // program counter
    logic  [6:0] id_r; // identifier in FTQ

    /* PHT and BTB */
    logic               [1:0] pht[phtsz-1:0];      // pattern history table
    logic              [63:0] btb[btbsz-1:0];      // branch target buffer
    logic [$clog2(phtsz)-1:0] pht_raddr[fnum-1:0]; // PHT reading address
    logic [$clog2(phtsz)-1:0] pht_waddr;           // PHT write address
    logic [$clog2(btbsz)-1:0] btb_waddr;           // BTB write address
    logic                     pht_wena;            // PHT write enable
    logic                     btb_wena;            // BTB write enable
    logic               [1:0] pht_wvalue;          // PHT write value
    logic              [63:0] btb_wvalue;          // BTB write value
    always_comb for (int i = 0; i < fnum; i++) pht_raddr[i] = pc_r[$clog2(phtsz):1] + $clog2(phtsz)'(i);
    always_ff @(posedge clk) pht_waddr <= upc[$clog2(phtsz):1];
    always_ff @(posedge clk) btb_waddr <= upc[$clog2(btbsz):1];
    /* write channel of PHT and BTB is buffered for one cycle to improve timing */
    always_ff @(posedge clk) if (rst) {pht_wena, btb_wena} <= 0;
        else if (redir) begin // update tables after mispredict
            pht_wena   <= 1;
            btb_wena   <= upat == 2'b01; // new BTB entry required
            pht_wvalue <= upat[0] ? 2'b10 : 2'b01;
            btb_wvalue <= unpc;
        end else if (reinf) begin // reinforce pattern history
            pht_wena   <= 1;
            btb_wena   <= 0;
            pht_wvalue <= upat[1] ? 2'b11 : 2'b00;
        end else {pht_wena, btb_wena} <= 0;
    always_ff @(posedge clk) if (pht_wena) pht[pht_waddr] <= pht_wvalue;
    always_ff @(posedge clk) if (btb_wena) btb[btb_waddr] <= btb_wvalue;

    logic [63:0] bpc; // PC register and branch PC
    always_ff @(posedge clk)
        if (rst | redir) id_r <= 0;
        else if (ready)  id_r <= id_r + 7'd1;
    always_ff @(posedge clk)
        if      (rst)   pc_r <= 64'(rst_pc); // on reset
        else if (redir) pc_r <= unpc;        // redirect
        else if (ready)                      // frontend ready to get a new PC
            if (out.br[64]) pc_r <= bpc;                         // predict as branch
            else            pc_r <= pc_r + 64'({out.num, 1'b0}); // predict as not branch
    always_comb begin
        out.id = {1'b1, id_r};
        out.pc = pc_r;
        out.br = 0;
        out.num = fnum;
        out.pat = 0;
        bpc = 0;
        for (int i = 0; i < fnum; i++) out.pat[i] = pht[pht_raddr[i]];
        for (int i = 0; i < fnum; i++) if (pht[pht_raddr[i]][1]) begin // encounter branch
            out.num = 8'(i) + 1;
            bpc = btb[$clog2(btbsz)'(pht_raddr[i])];
            out.br = {1'b1, bpc};
            break;
        end
        if (|out.pc[$clog2(cbsz)-1:1] & ($clog2(cbsz)-1)'(out.num) > -out.pc[$clog2(cbsz)-1:1]) begin
            out.br = 0;
            out.num = 8'(($clog2(cbsz)-1)'(-out.pc[$clog2(cbsz)-1:1]));
        end
    end

    if (init) initial for (int i = 0; i < phtsz; i++) pht[i] = 0;
endmodule
