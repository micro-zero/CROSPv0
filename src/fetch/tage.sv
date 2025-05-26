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
    parameter ghsz,
    parameter fnum,
    parameter btbsz,
    parameter index,
    parameter tag,
    parameter hist,
    parameter cnt
)(
    input logic clk,
    input logic rst,
    input logic redir,            // redirect signal
    input logic reinf,            // reinforce signal
    input logic [63:0] upc,       // updating PC
    input logic [63:0] unpc,      // updating next PC
    input logic [4:0] ubk,        // updating bank
    input logic [7:0] upat,       // updateing pattern
    input logic [7:0] upatb,      // updateing bimodal pattern
    input logic [15:0] ugh,       // updating global history position
    input logic [4:1][15:0] ughi, // updating folded global history for index
    input logic [4:1][15:0] ught, // updating folded global history for tag
    input logic ready,            // ready signal
    output pcg_bundle_t out       // output bundle
);
    /* global registers */
    logic                     [4:1][31:0] ipos, tpos; // index and tag insertion position
    logic                          [63:0] pc;         // program counter
    logic                           [6:0] id;         // identifier in FTQ
    logic                       [cnt-1:0] unpat;      // pattern
    logic                           [4:0] lbk, hbk;   // low/high bank in updating bank
    logic                      [ghsz-1:0] gh;         // global history
    logic              [$clog2(ghsz)-1:0] gh_pos;     // earliest position in global history
    logic [fnum-1:0]   [$clog2(ghsz)-1:0] gh_waddr;   // global history write address
    logic [fnum:0][4:1][$clog2(ghsz)-1:0] gh_raddr;   // global history read address
    /* prefix/suffix meaning:
        u-    updating value
        n-    next cycle value
        s-    stepped value
       -i/-t  for index/tag */
    logic [4:1][index-1:0] ghi, nghi, unghi, sghi[fnum:0]; // folded global history for index
    logic [4:1]  [tag-1:0] ght, nght, unght, sght[fnum:0]; // folded global history for tag
    always_comb for (int i = 1; i <= 4; i++) ipos[i] = (hist << i - 1) % index;
    always_comb for (int i = 1; i <= 4; i++) tpos[i] = (hist << i - 1) % tag;
    always_comb
        if      (reinf & (~|upat[cnt-1:0] | &upat[cnt-1:0])) unpat = (cnt)'(upat); // saturated
        else if (redir & ~upat[cnt-1] | reinf & upat[cnt-1]) unpat = (cnt)'(upat) + 1;
        else if (reinf & ~upat[cnt-1] | redir & upat[cnt-1]) unpat = (cnt)'(upat) - 1;
        else                                                 unpat = (cnt)'(upat);
    always_comb begin
        lbk = 0; hbk = 0;
        for (int i = 4; i >= 0; i--) if (ubk[i]) lbk = 1 << i; // for updating counter
        for (int i = 0; i <= 4; i++) if (ubk[i]) begin         // for allocating entry
            hbk = 1 << i;
            if (lbk == hbk) hbk = 0; else break;
        end
    end
    always_comb for (int i = 0; i < fnum; i++) gh_waddr[i] = gh_pos - 1 - $clog2(ghsz)'(i);
    always_comb for (int i = 0; i <= fnum; i++)
        for (int j = 1; j <= 4; j++)
            if (i == 0) gh_raddr[i][j] = $clog2(ghsz)'(ugh) + $clog2(ghsz)'(hist << j - 1); // used for updating
            else        gh_raddr[i][j] = gh_pos             + $clog2(ghsz)'(hist << j - 1) - $clog2(ghsz)'(i);
    always_comb for (int i = 0; i <= fnum; i++)
        if (i == 0) {sghi[i], sght[i]} = {ghi, ght};
        else for (int j = 1; j <= 4; j++) begin
            sghi[i][j] = {sghi[i-1][j][index-2:0], sghi[i-1][j][index-1]}; // circular shift
            sght[i][j] = {sght[i-1][j][tag  -2:0], sght[i-1][j][tag  -1]};
            sghi[i][j][ipos[j]] ^= gh[gh_raddr[i][j]]; // remove highest bit
            sght[i][j][tpos[j]] ^= gh[gh_raddr[i][j]];
        end
    always_comb begin
        for (int i = 1; i <= 4; i++) begin
            unghi[i] = {ughi[i][index-2:0], ughi[i][index-1]};
            unght[i] = {ught[i][tag  -2:0], ught[i][tag  -1]};
            unghi[i][ipos[i]] ^= gh[gh_raddr[0][i]];
            unght[i][tpos[i]] ^= gh[gh_raddr[0][i]];
            unghi[i][0] ^= ~upat[cnt-1];
            unght[i][0] ^= ~upat[cnt-1];
        end
        for (int i = 1; i <= 4; i++) nghi[i] = sghi[32'(out.num)][i] ^ (out.br[64] ? 1 : 0);
        for (int i = 1; i <= 4; i++) nght[i] = sght[32'(out.num)][i] ^ (out.br[64] ? 1 : 0);
    end
    always_ff @(posedge clk)
        if      (rst)   pc <= 64'(rst_pc); // on reset
        else if (redir) pc <= unpc;        // redirect
        else if (ready)
            if (out.br[64]) pc <= bpc;                       // predict as branch
            else            pc <= pc + 64'({out.num, 1'b0}); // predict as not branch
    always_ff @(posedge clk)
        if      (rst)   {ght, ghi} <= 0;
        else if (redir) {ght, ghi} <= {unght, unghi};
        else if (ready) {ght, ghi} <= {nght,  nghi};
   always_ff @(posedge clk)
       if      (rst)   gh_pos <= 0;
       else if (redir) gh_pos <= $clog2(ghsz)'(ugh);
       else if (ready) gh_pos <= gh_pos - $clog2(ghsz)'(out.num);
    always_ff @(posedge clk)
        if (redir) gh[$clog2(ghsz)'(ugh)] <= upat[cnt-1] ? 0 : 1;
        else for (int i = 0; i < fnum; i++)
            if (i < 32'(out.num)) gh[gh_waddr[i]] <= i == 32'(out.num) - 1 & out.br[64];
    always_ff @(posedge clk) if (rst | redir) id <= 0; else if (ready) id <= id + 7'd1;

    /* bank 0-4 and BTB */
    localparam b0sz = 4 << index, bxsz = 1 << index;
    localparam mintk = (cnt)'(1) << cnt - 1;
    /* entity */
    logic           m0[b0sz-1:0];                                           // bank 0   meta bit
    logic [cnt-1:0] c0[b0sz-1:0];                                           // bank 0   counter
    logic           u1[bxsz-1:0], u2[bxsz-1:0], u3[bxsz-1:0], u4[bxsz-1:0]; // bank 1-4 useful bit
    logic [cnt-1:0] c1[bxsz-1:0], c2[bxsz-1:0], c3[bxsz-1:0], c4[bxsz-1:0]; // bank 1-4 counter
    logic [tag-1:0] t1[bxsz-1:0], t2[bxsz-1:0], t3[bxsz-1:0], t4[bxsz-1:0]; // bank 1-4 tag
    logic    [63:0] btb[btbsz-1:0];                                         // branch target buffer
    /* auxiliary values */
    logic         [index+1:0] b0_raddr[fnum-1:0];  // bank 0 reading address
    logic    [4:1][index-1:0] bx_raddr[fnum-1:0];  // bank x reading address
    logic    [4:1]  [cnt-1:0] cx_rvalue[fnum-1:0]; // bank x counter reading value
    logic    [4:1]  [tag-1:0] tx_rvalue[fnum-1:0]; // bank x tag reading value
    logic    [4:1]            ux_rvalue[fnum-1:0]; // bank x useful bit reading value
    logic         [index+1:0] b0_waddr;            // bank 0 counter writing address
    logic    [4:1][index-1:0] bx_waddr;            // bank x counter/tag writing address
    logic                     m0_wena;             // bank 0 meta bit write enable
    logic                     m0_wvalue;           // bank 0 meta bit write value
    logic                     c0_wena;             // bank 0 counter write enable
    logic           [cnt-1:0] c0_wvalue;           // bank 0 counter write value
    logic    [4:1]            cx_wena, tx_wena;    // bank x counter/tag write enable
    logic    [4:1]            ux_wena;             // bank x useful bit write enable
    logic    [4:1]  [cnt-1:0] cx_wvalue;           // bank x counter write value
    logic    [4:1]  [tag-1:0] tx_wvalue;           // bank x tag write value
    logic [$clog2(btbsz)-1:0] btb_waddr;           // BTB write address
    logic                     btb_wena;            // BTB write enable
    logic              [63:0] btb_wvalue;          // BTB write value
    logic [4:1][index-1:0] ughi_trunc;             // truncated folded global history for index
    logic [4:1][tag  -1:0] ught_trunc;             // truncated folded global history for tag
    /* read from tables */
    always_comb for (int i = 0; i < fnum; i++) begin
        b0_raddr [i] = pc[index+2:1] + (index+2)'(i);
        bx_raddr [i] = sghi[i] ^ {4{b0_raddr[i][index-1:0]}};
        cx_rvalue[i] = {c4[bx_raddr[i][4]], c3[bx_raddr[i][3]], c2[bx_raddr[i][2]], c1[bx_raddr[i][1]]};
        tx_rvalue[i] = {t4[bx_raddr[i][4]], t3[bx_raddr[i][3]], t2[bx_raddr[i][2]], t1[bx_raddr[i][1]]};
        ux_rvalue[i] = {u4[bx_raddr[i][4]], u3[bx_raddr[i][3]], u2[bx_raddr[i][2]], u1[bx_raddr[i][1]]};
    end
    /* assign write addresses and values */
    always_comb for (int i = 1; i <= 4; i++) ughi_trunc[i] = ughi[i][index-1:0];
    always_comb for (int i = 1; i <= 4; i++) ught_trunc[i] = ught[i][tag-1:0];
    always_ff @(posedge clk) b0_waddr  <= upc[index+2:1];
    always_ff @(posedge clk) bx_waddr  <= {4{upc[index:1]}} ^ ughi_trunc;
    always_ff @(posedge clk) m0_wena   <= ~rst & (redir | reinf) & upat[cnt-1] != upatb[cnt-1];
    always_ff @(posedge clk) m0_wvalue <= reinf;
    always_ff @(posedge clk) c0_wena   <= ~rst & (redir | reinf) & ubk[0];
    always_ff @(posedge clk) c0_wvalue <= unpat;
    always_ff @(posedge clk) ux_wena   <= lbk[4:1];
    always_ff @(posedge clk)
        if      (rst)   cx_wena <= 0;
        else if (redir) cx_wena <= lbk[4:1] | hbk[4:1];
        else if (reinf) cx_wena <= lbk[4:1];
        else            cx_wena <= 0;
    always_ff @(posedge clk) for (int i = 1; i <= 4; i++)
        if (hbk[i])                                                           // allocate at i-th bank
            if (upatb[cnt]) cx_wvalue[i] <= ~upat[cnt-1] ? mintk : mintk - 1; // meta bit is set
            else            cx_wvalue[i] <= upatb[cnt-1] ? mintk : mintk - 1; // meta bit is reset
        else                cx_wvalue[i] <= unpat;                            // update related bank
    always_ff @(posedge clk) tx_wena    <= ~rst & redir ? hbk[4:1] : 0;
    always_ff @(posedge clk) tx_wvalue  <= {4{upc[tag:1]}} ^ ught_trunc;
    always_ff @(posedge clk) btb_wena   <= ~rst & redir & ~upat[cnt-1];
    always_ff @(posedge clk) btb_waddr  <= upc[$clog2(btbsz):1];
    always_ff @(posedge clk) btb_wvalue <= unpc;
    /* entity assignment */
    always_ff @(posedge clk) if (c0_wena)    c0[b0_waddr]    <= c0_wvalue;
    always_ff @(posedge clk) if (cx_wena[1]) c1[bx_waddr[1]] <= cx_wvalue[1];
    always_ff @(posedge clk) if (cx_wena[2]) c2[bx_waddr[2]] <= cx_wvalue[2];
    always_ff @(posedge clk) if (cx_wena[3]) c3[bx_waddr[3]] <= cx_wvalue[3];
    always_ff @(posedge clk) if (cx_wena[4]) c4[bx_waddr[4]] <= cx_wvalue[4];
    always_ff @(posedge clk) if (tx_wena[1]) t1[bx_waddr[1]] <= tx_wvalue[1];
    always_ff @(posedge clk) if (tx_wena[2]) t2[bx_waddr[2]] <= tx_wvalue[2];
    always_ff @(posedge clk) if (tx_wena[3]) t3[bx_waddr[3]] <= tx_wvalue[3];
    always_ff @(posedge clk) if (tx_wena[4]) t4[bx_waddr[4]] <= tx_wvalue[4];
    always_ff @(posedge clk) if (btb_wena) btb[btb_waddr] <= btb_wvalue;
    always_ff @(posedge clk) if (m0_wena)              m0[b0_waddr]    <= m0_wvalue;
    always_ff @(posedge clk) if (m0_wena | ux_wena[1]) u1[bx_waddr[1]] <= m0_wvalue;
    always_ff @(posedge clk) if (m0_wena | ux_wena[2]) u2[bx_waddr[2]] <= m0_wvalue;
    always_ff @(posedge clk) if (m0_wena | ux_wena[3]) u3[bx_waddr[3]] <= m0_wvalue;
    always_ff @(posedge clk) if (m0_wena | ux_wena[4]) u4[bx_waddr[4]] <= m0_wvalue;

    /* prediction */
    logic [63:0] bpc; // PC register and branch PC
    always_comb begin
        out.id  = {1'b1, id};
        out.pc  = pc; bpc = 0;
        out.br  = 0;
        out.num = fnum; // `fnum` should be less than the size of `pat`
        for (int i = 0; i < fnum; i++) begin
            out.bank[i] = 1; // first use bimodal result
            out.pat [i] = 8'(c0[b0_raddr[i]]);
            out.patb[i] = 8'({m0[b0_raddr[i]], c0[b0_raddr[i]]});
            out.gh  [i] = 16'(gh_waddr[i]);
            out.ghi [i] = {16'(sghi[i][4]), 16'(sghi[i][3]), 16'(sghi[i][2]), 16'(sghi[i][1])};
            out.ght [i] = {16'(sght[i][4]), 16'(sght[i][3]), 16'(sght[i][2]), 16'(sght[i][1])};
            for (int j = 1; j <= 4; j++)
                if (tx_rvalue[i][j] == (sght[i][j] ^ b0_raddr[i][tag-1:0])) begin
                    out.bank[i] = 1 << j; // highest matched bank
                    out.pat [i] = 8'(cx_rvalue[i][j]);
                end else if (~ux_rvalue[i][j]) out.bank[i][j] = 1; // vacant bank
            if ($countones(out.bank[i]) == 1)                      // no vacant bank
                for (int j = 1; j < 4; j++) if (out.bank[i][j]) out.bank[i][j+1] = 1;
        end
        for (int i = 0; i < fnum; i++) if (out.pat[i][cnt-1]) begin // encounter branch
            bpc = btb[$clog2(btbsz)'(b0_raddr[i])];
            out.br = {1'b1, bpc};
            out.num = 8'(i) + 1;
            break;
        end
        if (|out.pc[$clog2(cbsz)-1:1] & ($clog2(cbsz)-1)'(out.num) > -out.pc[$clog2(cbsz)-1:1]) begin
            out.br = 0; // avoid fetch beyond cache block
            out.num = 8'(($clog2(cbsz)-1)'(-out.pc[$clog2(cbsz)-1:1]));
        end
    end

    if (init) initial for (int i = 0; i < b0sz; i++) {c0[i], m0[i]} = 0;
    if (init) initial for (int i = 0; i < bxsz; i++) {c1[i], u1[i], t1[i], c2[i], u2[i], t2[i]} = 0;
    if (init) initial for (int i = 0; i < bxsz; i++) {c3[i], u3[i], t3[i], c4[i], u4[i], t4[i]} = 0;
endmodule
