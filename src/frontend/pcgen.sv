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
    logic [$clog2(phtsz)-1:0] pht_waddr;           // PHT writing address
    logic [$clog2(phtsz)-1:0] pht_raddr[fnum-1:0]; // PHT reading address
    always_comb pht_waddr = upc[$clog2(phtsz):1];
    always_comb for (int i = 0; i < fnum; i++) pht_raddr[i] = pc_r[$clog2(phtsz):1] + $clog2(phtsz)'(i);
    always_ff @(posedge clk) if (redir) begin
        /* update tables after mispredict */
        pht[pht_waddr] <= upat[0] ? 2'b10 : 2'b01;
        if (upat == 2'b01) // new BTB entry required
            btb[$clog2(btbsz)'(pht_waddr)] <= unpc;
    end else if (reinf) // reinforce pattern history
        pht[pht_waddr] <= upat[1] ? 2'b11 : 2'b00;

    logic [63:0] bpc; // PC register and branch PC
    always_ff @(posedge clk)
        if (rst | redir) id_r <= 0;
        else if (ready)  id_r <= id_r + 7'd1;
    always_ff @(posedge clk)
        if      (rst)   pc_r <= 64'(rst_pc); // on reset
        else if (redir) pc_r <= unpc;        // redirect
        else if (ready)                      // frontend ready to get a new PC
            if (out.br[7]) pc_r <= bpc;                         // predict as branch
            else           pc_r <= pc_r + 64'({out.num, 1'b0}); // predict as not branch
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
            out.br = {1'b1, bpc[7:1]};
            break;
        end
        if (|out.pc[$clog2(cbsz)-1:1] & ($clog2(cbsz)-1)'(out.num) > -out.pc[$clog2(cbsz)-1:1]) begin
            out.br = 0;
            out.num = 8'(($clog2(cbsz)-1)'(-out.pc[$clog2(cbsz)-1:1]));
        end
    end

    initial for (int i = 0; i < phtsz; i++) pht[i] = 0;
endmodule
