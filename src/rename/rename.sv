/**
 * rename.sv:
 *   This file includes rename stage top module.
 */

`include "types.sv"
import types::*;

module rename #(
    parameter dwd,   // decoder width
    parameter rwd,   // rename width
    parameter cwd,   // commit width
    parameter prnum, // number of physical registers
    parameter brsz   // size of branch snapshots
)(
    input  logic clk,
    input  logic rst,
    input  com_bundle_t [cwd-1:0] com_bundle, // commit bundle
    input  red_bundle_t           red_bundle, // redirect bundle
    output logic        [dwd-1:0] ready,      // ready signal
    input  dec_bundle_t [dwd-1:0] dec_bundle, // decoder bundle
    input  logic        [rwd-1:0] rename,     // rename signal
    output ren_bundle_t [rwd-1:0] ren_bundle  // rename bundle
);
    /* pipeline redirect */
    logic redir, rollback, rq_empty;
    logic [7:0] redir_brid;
    always_comb redir      = red_bundle.opid[15];
    always_comb redir_brid = red_bundle.brid;
    always_comb rollback = red_bundle.rollback & rq_empty; // rollback after rename queue empty

    /* rename queue */
    localparam rqsz = 2 * (1 << $clog2(rwd));      // rename queue size
    logic [$clog2(rqsz)-1:0] rq_front;            // front index of rename queue
    logic [$clog2(rqsz):0] rq_num, rq_in, rq_out; // several numbers of queue
    logic        [rwd-1:0][$clog2(rqsz)-1:0] rq_raddr, rq_waddr;   // read/write addresses
    logic        [rwd-1:0]                   rq_wena;              // write enable signal
    ren_bundle_t [rwd-1:0]                   rq_rvalue, rq_wvalue; // read/write values
    always_comb for (int i = 0; i < rwd; i++) rq_raddr[i] = rq_front + $clog2(rqsz)'(i);
    always_comb for (int i = 0; i < rwd; i++) rq_waddr[i] = rq_raddr[i] + $clog2(rqsz)'(rq_num);
    always_comb for (int i = 0; i < rwd; i++) rq_wena[i] = i < 32'(rq_in);
    always_comb rq_empty = ~|rq_num;
    always_ff @(posedge clk) if (rst | redir) rq_front <= 0;
        else rq_front <= rq_front + $clog2(rqsz)'(rq_out);
    always_ff @(posedge clk) if (rst | redir) rq_num <= 0;
        else rq_num <= rq_num + rq_in - rq_out;
    mwpram #(.width($bits(ren_bundle_t)), .depth(rqsz), .rports(rwd), .wports(rwd))
        rq_inst(.clk(clk), .rst(rst),
            .raddr(rq_raddr), .rvalue(rq_rvalue),
            .waddr(rq_waddr), .wvalue(rq_wvalue), .wena(rq_wena));

    /* branch variables */
    logic [rwd-1:0]                   branch; // mark a jump/branch instruction
    logic [rwd-1:0][$clog2(brsz)-1:0] brid;   // branch id
    always_comb for (int i = 0; i < rwd; i++) branch[i] = dec_bundle[i].opid[15] & dec_bundle[i].brid[7];
    always_comb for (int i = 0; i < rwd; i++) brid[i] = $clog2(brsz)'(dec_bundle[i].brid);

    /* free list */
    logic           [prnum-1:0] fl;             // free list
    logic [brsz-1:0][prnum-1:0] fl_snapshots;   // free list snapshots
    logic [rwd:0][prnum-1:0] fl_step;           // stepped free list
    logic [rwd-1:0][$clog2(prnum)-1:0] alloc;   // allocated registers
    logic [rwd-1:0][$clog2(prnum)-1:0] dealloc; // deallocated registers
    always_comb begin
        fl_step = 0;
        fl_step[0] = fl;
        for (int i = 0; i < rwd; i++) begin
            fl_step[0][dealloc[i]] = 1;
            if (rollback) fl_step[0][alloc[i]] = 0;
        end
        for (int i = 1; i <= rwd; i++) begin
            fl_step[i] = fl_step[i - 1];
            if (i - 1 < rq_in) fl_step[i][alloc[i - 1]] = 0;
            fl_step[i][0] = 0;
        end
    end
    always_ff @(posedge clk) begin
        for (int i = 0; i < brsz; i++)
            for (int j = 0; j < rwd; j++)
                if (|dealloc[j]) fl_snapshots[i][dealloc[j]] <= 1;
        for (int i = 0; i < rwd; i++) if (branch[i]) fl_snapshots[brid[i]] <= fl_step[i + 1];
    end
    always_ff @(posedge clk)
        if (rst) fl <= (prnum)'(-1);
        else if (redir & redir_brid[7]) begin
            fl <= fl_snapshots[$clog2(brsz)'(redir_brid)];
            for (int i = 0; i < rwd; i++) if (|dealloc[i]) fl[dealloc[i]] <= 1;
        end else fl <= fl_step[rwd];

    /* map table */
    logic        [64:0][$clog2(prnum)-1:0] mt, mt_snapshot; // map table and branch snapshot
    logic [rwd:0][64:0][$clog2(prnum)-1:0] mt_step;         // stepped map table
    logic [rwd-1:0][2:0]              [6:0] mt_raddr;       // logical registers number [2:0] -> {rs2, rs1, rd}
    logic [rwd-1:0][2:0][$clog2(prnum)-1:0] mt_rvalue;      // physical register number
    logic [rwd-1:0]                   [6:0] mt_waddr;       // remap logical register
    logic [rwd-1:0]     [$clog2(prnum)-1:0] mt_wvalue;      // remap physical register
    logic [rwd-1:0]                         mt_wena;
    mwpram #(.width(65 * $clog2(prnum)), .depth(brsz), .rports(1), .wports(rwd))
        mt_snapshots_inst(.clk(clk), .rst(rst),
            .raddr($clog2(brsz)'(redir_brid)), .rvalue(mt_snapshot),
            .waddr(brid), .wvalue(mt_step[rwd:1]), .wena(branch));
    always_comb for (int i = 0; i < rwd; i++) mt_raddr[i] = {dec_bundle[i].rsa, dec_bundle[i].rda};
    always_comb for (int i = 0; i < rwd; i++)
        if (~rollback)
            {mt_waddr[i], mt_wvalue[i]} = {dec_bundle[i].rda,  $clog2(prnum)'(alloc[i])};
        else if (i < cwd)
            {mt_waddr[i], mt_wvalue[i]} = {com_bundle[i].lrda, $clog2(prnum)'(com_bundle[i].prda[0])};
        else {mt_waddr[i], mt_wvalue[i]} = 0;
    always_comb for (int i = 0; i < rwd; i++) mt_wena[i] = rollback & i < cwd | rq_wena[i];
    always_comb begin
        mt_step = 0;
        mt_step[0] = mt;
        for (int i = 1; i <= rwd; i++) begin
            mt_step[i] = mt_step[i-1];
            if (mt_wena[i-1])
                mt_step[i][mt_waddr[i-1]] = mt_wvalue[i-1];
            mt_step[i][0] = 0; // register `zero` constantly mapped to preg[0]
        end
    end
    always_comb for (int i = 0; i < rwd; i++) // do the mapping
        for (int j = 0; j < 3; j++) mt_rvalue[i][j] = mt_step[i][mt_raddr[i][j]];
    always_ff @(posedge clk)
        if      (rst)                   mt <= 0;
        else if (redir & redir_brid[7]) mt <= mt_snapshot;
        else                            mt <= mt_step[rwd];

    /* allocate and dealloc in freelist */
    logic [rwd-1:0][$clog2(prnum):0] pos;
    logic [rwd-1:0] alloc_valid;
    logic [$clog2(rwd)-1:0] alloc_num;
    firstk #(.width(prnum), .k(rwd)) firstk_inst(.bits(fl & ~(prnum)'(1)), .pos(pos));
    always_comb begin
        alloc_valid = 0; alloc_num = 0;
        alloc = 0; dealloc = 0;
        if (rollback) for (int i = 0; i < rwd; i++) begin
            if (i < cwd)   alloc[i] = $clog2(prnum)'(com_bundle[i].prda[0]);
            if (i < cwd) dealloc[i] = $clog2(prnum)'(com_bundle[i].prda[1]);
        end else begin
            for (int i = 0; i < rwd; i++) if (i < cwd & com_bundle[i].opid[15])
                dealloc[i] = $clog2(prnum)'(com_bundle[i].prda[0]);
            for (int i = 0; i < rwd; i++) if (i < dwd & dec_bundle[i].opid[15])
                if (~|dec_bundle[i].rda)
                    alloc_valid[i] = 1;
                else if (pos[alloc_num][$clog2(prnum)])
                    begin {alloc_valid[i], alloc[i]} = pos[alloc_num]; alloc_num++; end
        end
    end

    /* assign rename queue input and output */
    always_comb for (int i = 0; i < rwd; i++) begin
        rq_wvalue[i].opid    = dec_bundle[i].opid;
        rq_wvalue[i].brid    = dec_bundle[i].brid;
        rq_wvalue[i].ldid    = dec_bundle[i].ldid;
        rq_wvalue[i].stid    = dec_bundle[i].stid;
        rq_wvalue[i].ir      = dec_bundle[i].ir;
        rq_wvalue[i].pc      = dec_bundle[i].pc;
        rq_wvalue[i].pnpc    = dec_bundle[i].pnpc;
        rq_wvalue[i].bank    = dec_bundle[i].bank;
        rq_wvalue[i].pat     = dec_bundle[i].pat;
        rq_wvalue[i].gh      = dec_bundle[i].gh;
        rq_wvalue[i].delta   = dec_bundle[i].delta;
        rq_wvalue[i].fu      = dec_bundle[i].fu;
        rq_wvalue[i].funct   = dec_bundle[i].funct;
        rq_wvalue[i].base    = dec_bundle[i].base;
        rq_wvalue[i].offset  = dec_bundle[i].offset;
        rq_wvalue[i].a       = dec_bundle[i].a;
        rq_wvalue[i].b       = dec_bundle[i].b;
        rq_wvalue[i].branch  = dec_bundle[i].branch;
        rq_wvalue[i].jal     = dec_bundle[i].jal;
        rq_wvalue[i].jalr    = dec_bundle[i].jalr;
        rq_wvalue[i].prsa[0] = 16'(mt_rvalue[i][1]);
        rq_wvalue[i].prsa[1] = 16'(mt_rvalue[i][2]);
        rq_wvalue[i].prda[0] = 16'(mt_rvalue[i][0]); // old value for recovering
        rq_wvalue[i].prda[1] = 16'(mt_wvalue[i]);    // newly allocated value
    end
    always_comb begin
        rq_in = 0;
        ready = 0;
        if (~red_bundle.rollback)
            for (int i = 0; i < dwd; i++)
                if (dec_bundle[i].opid[15] & alloc_valid[i] & rq_in < rqsz - rq_num) begin
                    rq_in++;
                    ready[i] = 1;
                end else break;
    end
    always_comb begin
        rq_out = 0;
        for (int i = 0; i < rwd; i++)
            if ((rename[i] | red_bundle.rollback) & ren_bundle[i].opid[15]) rq_out++;
        if (redir) rq_out = 0;
    end
    always_comb begin
        ren_bundle = rq_rvalue;
        for (int i = 0; i < rwd; i++)
            if (i >= rq_num) ren_bundle[i].opid = 0;
    end
endmodule
