/**
 * tage.sv:
 *   This file includes TAGE branch predictor providing PC for
 *   fetch unit and the fetch unit will write each PC output to
 *   fetch target queue.
 */

`include "types.sv"
import types::*;

module tage #(
    parameter init, // propagated from parent module
    parameter rst_pc,
    parameter cbsz,
    parameter fnum,
    parameter btbsz,
    parameter index,
    parameter tag,
    parameter hist,
    parameter cnt
)(
    input logic clk,
    input logic rst,
    input logic redir,       // redirect signal
    input logic reinf,       // reinforce signal
    input logic [63:0] upc,  // updating PC
    input logic [63:0] unpc, // updating next PC
    input logic [4:0] ubk,   // updating bank
    input logic [3:0] upat,  // updateing old pattern
    input logic [127:0] ugh, // updating global history
    input logic ready,       // ready signal
    output pcg_bundle_t out  // output bundle
);
    /* global registers */
    logic      [4:1][31:0] ipos, tpos;                     // index and tag insertion position
    logic           [63:0] pc;                             // program counter
    logic            [6:0] id;                             // identifier in FTQ
    logic     [8*hist-1:0] gh,  ngh,  ungh,  sgh [fnum:0]; // global history (reg, next, updated next, stepped)
    logic [4:1][index-1:0] ghi, nghi, unghi, sghi[fnum:0]; // folded global history for index
    logic [4:1]  [tag-1:0] ght, nght, unght, sght[fnum:0]; // folded global history for tag
    logic        [cnt-1:0]            unpat;               // pattern
    always_comb for (int i = 1; i <= 4; i++) ipos[i] = (1 << i - 1) * hist % index;
    always_comb for (int i = 1; i <= 4; i++) tpos[i] = (1 << i - 1) * hist % tag;
    always_comb
        /* saturated reinforcement should be filtered at commit module */
        if      (redir & ~upat[cnt-1] | reinf & upat[cnt-1]) unpat = (cnt)'(upat) + 1;
        else if (reinf & ~upat[cnt-1] | redir & upat[cnt-1]) unpat = (cnt)'(upat) - 1;
        else                                                 unpat = (cnt)'(upat);
    always_comb for (int i = 0; i <= fnum; i++) sgh[i] = gh << i; // before current address
    always_comb for (int i = 0; i <= fnum; i++)
        if (i == 0) {sghi[i], sght[i]} = {ghi, ght};
        else for (int j = 1; j <= 4; j++) begin
            sghi[i][j] = {sghi[i-1][j][index-2:0], sghi[i-1][j][index-1]}; // circular shift
            sght[i][j] = {sght[i-1][j][tag  -2:0], sght[i-1][j][tag  -1]};
            sghi[i][j][ipos[j]] ^= sgh[i-1][(hist<<j-1)-1]; // remove highest bit
            sght[i][j][tpos[j]] ^= sgh[i-1][(hist<<j-1)-1];
        end
    always_comb begin
        ngh  = sgh [32'(out.num)] ^ (out.br[64] ? 1 : 0);
        ungh = (8*hist)'(ugh) & ~(8*hist)'(1) ^ (upat[cnt-1] ? 0 : 1);
        for (int i = 1; i <= 4; i++) nghi[i] = sghi[32'(out.num)][i] ^ (out.br[64] ? 1 : 0);
        for (int i = 1; i <= 4; i++) nght[i] = sght[32'(out.num)][i] ^ (out.br[64] ? 1 : 0);
        /* updating folded histories are calculated */
        unghi = 0;
        unght = 0;
        for (int i = 1; i <= 4; i++)
            for (int j = 0; j < hist << i - 1; j++) begin
                unghi[i][j%index] ^= ungh[j];
                unght[i][j%tag]   ^= ungh[j];
            end
    end
    always_ff @(posedge clk)
        if      (rst)   pc <= 64'(rst_pc); // on reset
        else if (redir) pc <= unpc;        // redirect
        else if (ready)
            if (out.br[64]) pc <= bpc;                       // predict as branch
            else            pc <= pc + 64'({out.num, 1'b0}); // predict as not branch
    always_ff @(posedge clk)
        if      (rst)   {gh, ght, ghi} <= 0;
        else if (redir) {gh, ght, ghi} <= {ungh, unght, unghi};
        else if (ready) {gh, ght, ghi} <= {ngh,  nght,  nghi};
    always_ff @(posedge clk) if (rst | redir) id <= 0; else if (ready) id <= id + 7'd1;

    /* bank 0-4 and BTB */
    localparam b0sz = 4 << index, bxsz = 1 << index;
    logic          [b0sz-1:0] m;                  // meta bit of bank 0
    logic          [bxsz-1:0] u[4:1];             // useful bit of bank x
    logic           [cnt-1:0] b0     [b0sz-1:0];  // bank 0 ([cnt-1:0] counter)
    logic       [tag+cnt-1:0] bx[3:1][bxsz-1:0];  // bank x ([tag+cnt-1:cnt] tag, [cnt-1:0] counter)
    logic              [63:0] btb    [btbsz-1:0]; // branch target buffer
    logic         [index+1:0] b0_raddr[fnum-1:0]; // bank 0 reading address
    logic         [index+1:0] b0_waddr;           // bank 0 writing address
    logic                     b0_wena;            // bank 0 write enable
    logic           [cnt-1:0] b0_wvalue;          // bank 0 write value
    logic [$clog2(btbsz)-1:0] btb_waddr;          // BTB write address
    logic                     btb_wena;           // BTB write enable
    logic              [63:0] btb_wvalue;         // BTB write value
    always_comb for (int i = 0; i < fnum; i++) b0_raddr[i] = pc[index+2:1] + (index+2)'(i);
    always_ff @(posedge clk) b0_wena    <= ~rst & (redir | reinf) & ubk[0];
    always_ff @(posedge clk) b0_waddr   <= upc[index+2:1];
    always_ff @(posedge clk) b0_wvalue  <= unpat;
    always_ff @(posedge clk) btb_wena   <= ~rst & redir & ~upat[cnt-1] & ~ubk[4];
    always_ff @(posedge clk) btb_waddr  <= upc[$clog2(btbsz):1];
    always_ff @(posedge clk) btb_wvalue <= unpc;
    always_ff @(posedge clk) if (b0_wena)  b0 [b0_waddr]  <= b0_wvalue;
    always_ff @(posedge clk) if (btb_wena) btb[btb_waddr] <= btb_wvalue;

    /* prediction */
    logic [63:0] bpc; // PC register and branch PC
    always_comb begin
        out.id  = {1'b1, id};
        out.pc  = pc; bpc = 0;
        out.br  = 0; out.bank = 0;
        out.pat = 0; out.gh   = 0;
        out.num = fnum; // `fnum` should be less than the size of `pat`
        for (int i = 0; i < fnum; i++) out.bank[i] = 1;
        for (int i = 0; i < fnum; i++) out.pat [i] = 4'(b0[b0_raddr[i]]);
        for (int i = 0; i < fnum; i++) out.gh  [i] = 128'(sgh[i]) << 1; // after current shifting
        for (int i = 0; i < fnum; i++) if (b0[b0_raddr[i]][1]) begin    // encounter branch
            bpc = btb[$clog2(btbsz)'(b0_raddr[i])];
            out.br = {1'b1, bpc};
            out.gh[i][0] = 1;
            out.num = 8'(i) + 1;
            break;
        end
        if (|out.pc[$clog2(cbsz)-1:1] & ($clog2(cbsz)-1)'(out.num) > -out.pc[$clog2(cbsz)-1:1]) begin
            out.br = 0; // avoid fetch beyond cache block
            out.num = 8'(($clog2(cbsz)-1)'(-out.pc[$clog2(cbsz)-1:1]));
        end
    end

    if (init) initial for (int i = 0; i < b0sz; i++) b0[i] = 0;
endmodule
