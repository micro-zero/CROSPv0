/**
 * commit.sv:
 *   This file includes reorder buffer module.
 *   Commit module receives data from decode/rename/execute
 *   module, and write into ROB. It commits the front of ROB
 *   when entry executed, and detect redirection and rollback.
 */

`include "types.sv"
import types::*;

module commit #(
    parameter dwd = 4,
    parameter rwd = 4,
    parameter ewd = 4,
    parameter cwd = 4,
    parameter mwd = 1,
    parameter opsz = 64,
    parameter rst_pc = 32'hc0000000
)(
    input  logic clk,
    input  logic rst,
    input  dec_bundle_t [dwd-1:0] dec_bundle, // decoder bundle
    input  ren_bundle_t [rwd-1:0] ren_bundle, // rename bundle
    input  exe_bundle_t [ewd-1:0] exe_bundle, // execution bundle
    output com_bundle_t [cwd-1:0] com_bundle, // commit bundle
    output red_bundle_t           red_bundle, // redirect bundle
    /* exception signals */
    input  logic [63:0] tvec,      // trap vector for jumping
    input  logic [63:0] mepc,      // machine exception PC
    input  logic [63:0] sepc,      // supervisor exception PC
    output logic        exception, // take exception
    output logic [63:0] epc,       // exception PC
    output logic [63:0] tval,      // trap value of exception
    output logic [63:0] cause,     // cause of exception
    /* exception return signals */
    output logic  [2:0] eret,      // exception return bits (MSB is valid bit)
    /* ID control */
    input  logic [2*mwd-1:0][15:0] lsu_safe, // LSU early safe operation ID
    input  logic   [mwd-1:0][15:0] lsu_unsf, // LSU unsafe operation ID
    output logic            [15:0] top_opid, // top operation ID
    output logic            [15:0] saf_opid, // first safe operation ID
    /* fences */
    output logic fencei,           // fence.i committed
    output logic sfence            // sfence.vma committed
);
    /* pipeline redirect and rollback */
    function logic succeed(input logic [15:0] opid);
        succeed = red_bundle.opid[15] & opid[15] &
            $clog2(opsz)'(opid)            - $clog2(opsz)'(red_bundle.topid) >=
            $clog2(opsz)'(red_bundle.opid) - $clog2(opsz)'(red_bundle.topid) + $clog2(opsz)'(1);
    endfunction
    logic redir, rollback, rollback_last;
    always_comb redir = red_bundle.opid[15];

    /* ROB entry */
    logic [$clog2(opsz)-1:0] rob_front, saf_front, saf_next;    // front index
    logic [$clog2(opsz):0]   rob_num, rob_in, rob_out, rob_red; // ROB related numbers
    logic     [cwd-1:0][$clog2(opsz)-1:0] rob_raddr, saf_raddr; // ROB read addresses
    logic [opsz-1:0] ren, exe, spc, saf, saf_fwd;               // ROB write-back status
    always_comb for (int i = 0; i < cwd; i++)
        if (rollback) rob_raddr[i] = rob_front + $clog2(opsz)'(rob_num) - 1 - $clog2(opsz)'(i);
        else          rob_raddr[i] = rob_front + $clog2(opsz)'(i);
    always_comb for (int i = 0; i < cwd; i++) saf_raddr[i] = saf_front + $clog2(opsz)'(i);
    always_comb rob_red = redir ?
        rob_num - {1'b0, $clog2(opsz)'(red_bundle.opid) + $clog2(opsz)'(1) - rob_front} : 0;
    always_comb begin
        saf_next = saf_front;
        for (int i = 0; i < cwd; i++) if (saf_fwd[saf_raddr[i]] &
            $clog2(opsz)'(i) + saf_front - rob_front <
            $clog2(opsz)'(rob_num) - $clog2(opsz)'(rob_red)) saf_next++; else break;
        for (int i = 0; i < mwd; i++)
            if (lsu_unsf[i][15] & $clog2(opsz)'(lsu_unsf[i]) - rob_front < saf_next - rob_front)
                saf_next = $clog2(opsz)'(lsu_unsf[i]); // return to earliest unsafe entry
        if (rob_num == rob_red) saf_next = rob_front;
    end
    always_ff @(posedge clk) if (rst) rob_front <= 0; else rob_front <= rob_front + $clog2(opsz)'(rob_out);
    always_ff @(posedge clk) if (rst) saf_front <= 0; else saf_front <= saf_next;
    always_ff @(posedge clk) if (rst) rob_num <= 0;
        else if (rollback & ~ren_bundle[0].opid[15])
            rob_num <= 32'(rob_num) < cwd ? 0 : rob_num - $clog2(opsz)'(cwd);
        else rob_num <= rob_num + rob_in - rob_out - rob_red;

    /* entry modified by decoder results */
    rob_dec_t [cwd-1:0]                   dec_rvalue; // ROB entry reading values
    logic     [dwd-1:0][$clog2(opsz)-1:0] dec_waddr;  // ROB write addresses
    rob_dec_t [dwd-1:0]                   dec_wvalue; // ROB write values
    logic     [dwd-1:0]                   dec_wena;   // ROB write enable signals
    always_comb for (int i = 0; i < dwd; i++) begin
        dec_waddr [i]       = $clog2(opsz)'(dec_bundle[i].opid);
        dec_wena  [i]       = dec_bundle[i].opid[15];
        dec_wvalue[i].opid  = dec_bundle[i].opid;
        dec_wvalue[i].brid  = dec_bundle[i].brid;
        dec_wvalue[i].ldid  = dec_bundle[i].ldid;
        dec_wvalue[i].stid  = dec_bundle[i].stid;
        dec_wvalue[i].pc    = dec_bundle[i].pc;
        dec_wvalue[i].delta = dec_bundle[i].delta;
        dec_wvalue[i].pat   = dec_bundle[i].pat;
        dec_wvalue[i].ir    = dec_bundle[i].ir;
        dec_wvalue[i].call  = dec_bundle[i].call;
        dec_wvalue[i].ret   = dec_bundle[i].ret;
        dec_wvalue[i].lrsa  = dec_bundle[i].rsa;
        dec_wvalue[i].lrda  = dec_bundle[i].rda;
    end
    always_comb begin
        rob_in = 0;                   // allocate ROB entry after decoding
        for (int i = 0; i < dwd; i++) // only newly added entries cause ROB number increase
            if (dec_wena[i] & {1'b0, dec_waddr[i] - rob_front} >= rob_num) rob_in++;
    end
    mwpram #(.width($bits(rob_dec_t)), .depth(opsz), .rports(cwd), .wports(dwd))
        rob_dec_inst(.clk(clk), .rst(rst),
            .raddr(rob_raddr), .rvalue(dec_rvalue),
            .waddr(dec_waddr), .wvalue(dec_wvalue), .wena(dec_wena));

    /* entry modified by rename results */
    rob_ren_t [cwd-1:0]                   ren_rvalue;   // reading values in ROB
    logic     [rwd-1:0][$clog2(opsz)-1:0] ren_waddr;    // ROB write addresses after REN stage
    rob_ren_t [rwd-1:0]                   ren_wvalue;   // writing values in ROB
    logic     [rwd-1:0]                   ren_wena;     // ROB write enable signals after REN stage
    always_comb for (int i = 0; i < rwd; i++) begin
        ren_waddr [i]       = $clog2(opsz)'(ren_bundle[i].opid);
        ren_wena  [i]       = ren_bundle[i].opid[15];
        ren_wvalue[i].prda  = ren_bundle[i].prda;
    end
    mwpram #(.width($bits(rob_ren_t)), .depth(opsz), .rports(cwd), .wports(rwd))
        rob_ren_inst(.clk(clk), .rst(rst),
            .raddr(rob_raddr), .rvalue(ren_rvalue),
            .waddr(ren_waddr), .wvalue(ren_wvalue), .wena(ren_wena));

    /* entry modified by execution results */
    exe_bundle_t mis_first, mis_bundle, rei_bundle;       // earliest mispredicted and reinforced EXE bundle
    rob_exe_t [cwd-1:0]                   exe_rvalue;     // reading values in ROB
    logic     [ewd-1:0][$clog2(opsz)-1:0] exe_waddr;      // ROB write addresses after EXE stage
    rob_exe_t [ewd-1:0]                   exe_wvalue;     // writing values in ROB
    logic     [ewd-1:0]                   exe_wena;       // ROB write enable signals after EXE stage
    mwpram #(.width($bits(rob_exe_t)), .depth(opsz), .rports(cwd), .wports(ewd))
        rob_exe_inst(.clk(clk), .rst(rst),
            .raddr(rob_raddr), .rvalue(exe_rvalue),
            .waddr(exe_waddr), .wvalue(exe_wvalue), .wena(exe_wena));
    always_comb for (int i = 0; i < ewd; i++) begin
        exe_waddr [i]       = $clog2(opsz)'(exe_bundle[i].opid);
        exe_wena  [i]       = exe_bundle[i].opid[15];
        exe_wvalue[i].cause = exe_bundle[i].cause;
        exe_wvalue[i].eret  = exe_bundle[i].eret;
        exe_wvalue[i].flush = exe_bundle[i].flush;
        exe_wvalue[i].retry = exe_bundle[i].retry;
        exe_wvalue[i].mem   = exe_bundle[i].mem;
        exe_wvalue[i].csr   = exe_bundle[i].csr;
    end
    always_comb begin
        mis_first = 0; // search for earliest misprediction
        for (int i = 0; i < ewd; i++)
            if (exe_bundle[i].opid[15] & exe_bundle[i].misp)
                if (~mis_first.opid[15]) // first mispredicted bundle
                    mis_first = exe_bundle[i];
                else if ($clog2(opsz)'(exe_bundle[i].opid) - $clog2(opsz)'(top_opid) <
                         $clog2(opsz)'(mis_first    .opid) - $clog2(opsz)'(top_opid))
                    mis_first = exe_bundle[i];
    end
    always_ff @(posedge clk) if (rst) mis_bundle <= 0;
        else if (~succeed(mis_first.opid)) mis_bundle <= mis_first;
        else mis_bundle <= 0;
    always_ff @(posedge clk) if (rst) rei_bundle <= 0; else begin
        rei_bundle <= 0;
        for (int i = ewd - 1; i >= 0; i--)
            if (exe_bundle[i].opid[15] & ~succeed(exe_bundle[i].opid) &
                exe_bundle[i].brid[7] & ~exe_bundle[i].misp &
                (exe_bundle[i].pat[0] ^ exe_bundle[i].pat[1])) // weak pattern
                rei_bundle <= exe_bundle[i];
    end

    /* write-back signal of each stage */
    logic [15:0] eid_last, eid_new;   // operation ID of the nearest exception
    logic [63:0] tval_last, tval_new; // trap value of the nearest exception
    always_comb begin
        /* store earliest trap value in a single register to save space of ROB */
        eid_new = eid_last;
        tval_new = tval_last;
        for (int i = 0; i < ewd; i++)
            if (exe_wena[i] & exe_bundle[i].cause[7] & ~rollback) // exception happens
                if (~eid_new[15] | exe_waddr[i] - rob_front < $clog2(opsz)'(eid_new) - rob_front) begin
                    eid_new = exe_bundle[i].opid;
                    tval_new = exe_bundle[i].tval;
                end
        for (int i = 0; i < cwd; i++) if (exe_last.cause[7] & ~rollback) eid_new = 0;
    end
    always_comb begin
        saf_fwd = saf;
        for (int i = 0; i < dwd; i++) if (dec_wena[i]) saf_fwd[$clog2(opsz)'(dec_waddr[i])] = dec_bundle[i].safe;
        for (int i = 0; i < ewd; i++) if (exe_wena[i]) saf_fwd[$clog2(opsz)'(exe_waddr[i])] =
            ~exe_bundle[i].cause[7] & ~exe_bundle[i].eret[2] & ~exe_bundle[i].specul &
            ~exe_bundle[i].misp     & ~exe_bundle[i].flush   & ~exe_bundle[i].retry;
        for (int i = 0; i < 2 * mwd; i++) if (lsu_safe[i][15]) saf_fwd[$clog2(opsz)'(lsu_safe[i])] = 1;
        for (int i = 0; i <     mwd; i++) if (lsu_unsf[i][15]) saf_fwd[$clog2(opsz)'(lsu_unsf[i])] = 0;
        if (red_bundle.opid[15]) saf_fwd[$clog2(opsz)'(red_bundle.opid)] = 1;
    end
    always_ff @(posedge clk) if (rst) saf <= 0; else saf <= saf_fwd;
    always_ff @(posedge clk) if (rst) {ren, exe, spc} <= 0; else begin
        for (int i = 0; i < dwd; i++) if (dec_wena[i]) begin
            ren[$clog2(opsz)'(dec_waddr[i])] <= 0; // clear status when allocating entries
            exe[$clog2(opsz)'(dec_waddr[i])] <= 0;
            spc[$clog2(opsz)'(dec_waddr[i])] <= 0;
        end
        for (int i = 0; i < rwd; i++) if (ren_wena[i]) // set renaming status
            ren[$clog2(opsz)'(ren_waddr[i])] <= 1;
        for (int i = 0; i < ewd; i++) if (exe_wena[i]) begin // set execution status
            exe[$clog2(opsz)'(exe_waddr[i])] <= 1;
            spc[$clog2(opsz)'(exe_waddr[i])] <= exe_bundle[i].specul;
        end
    end
    always_ff @(posedge clk) if (rst | exception | succeed(eid_new))  eid_last <= 0; else  eid_last <=  eid_new;
    always_ff @(posedge clk) if (rst | exception | succeed(eid_new)) tval_last <= 0; else tval_last <= tval_new;

    /* ROB commit */
    /* front `cwd` entries consist of `dec_rvalue`, `ren_rvalue`, `exe_rvalue` */
    rob_dec_t dec_last;      // decoder part of last commited entry
    rob_exe_t exe_last;      // execution part of last commited entry
    rob_ren_t ren_last;      // renaming part of last commited entry
    logic [cwd-1:0] com_exc; // redirection of `cwd` instructions to commit
    always_comb top_opid = {1'b1, 15'(rob_front)};
    always_comb saf_opid = {1'b1, 15'(saf_front)};
    always_comb begin
        com_exc = 0;
        com_exc[0] = exe_last.cause[7] | // exception
                     exe_last.eret[2]  | // return from exception
                     exe_last.flush    | // instructions requiring flush
                     exe_last.retry;     // instructions requiring retry
        for (int i = 1; i < cwd; i++) if (i < 32'(rob_num))
            com_exc[i] = exe_rvalue[i - 1].cause[7] | // exception
                         exe_rvalue[i - 1].eret[2]  | // return from exception
                         exe_rvalue[i - 1].flush    | // instructions requiring flush
                         exe_rvalue[i - 1].retry;
    end
    always_comb rollback = (|rob_num | ~rollback_last) &
        (exe_last.cause[7] | exe_last.eret[2] | exe_last.flush | exe_last.retry);
    always_comb begin
        /* make up commit bundle */
        for (int i = 0; i < cwd; i++) begin
            com_bundle[i].opid     = dec_rvalue[i].opid;
            com_bundle[i].brid     = dec_rvalue[i].brid;
            com_bundle[i].ldid     = dec_rvalue[i].ldid;
            com_bundle[i].stid     = dec_rvalue[i].stid;
            com_bundle[i].pc       = dec_rvalue[i].pc;
            com_bundle[i].call     = dec_rvalue[i].call;
            com_bundle[i].ret      = dec_rvalue[i].ret;
            com_bundle[i].delta    = dec_rvalue[i].delta;
            com_bundle[i].lrda     = dec_rvalue[i].lrda;
            com_bundle[i].prda     = ren_rvalue[i].prda;
            com_bundle[i].rollback = rollback;
        end
        /* set validation of commit */
        for (int i = 0; i < cwd; i++)
            if (i >= 32'(rob_num) - 32'(rob_red)) com_bundle[i].opid = 0;         // exceeds size of queue
        for (int i = 0; i < cwd; i++) if (com_exc[i]) com_bundle[i].opid = 0;     // encounter redirection
        for (int i = 0; i < cwd; i++) if (~exe[rob_raddr[i]] | spc[rob_raddr[i]]) // not ready
            com_bundle[i].opid = 0;
        for (int i = 1; i < cwd; i++)
            for (int j = 0; j < i; j++) begin
                if ((com_bundle[i].call | com_bundle[i].ret) & (com_bundle[j].call | com_bundle[j].ret))
                    com_bundle[i].opid = 0;                          // one call/ret instruction in a single cycle
                if (~com_bundle[j].opid[15]) com_bundle[i].opid = 0; // commit in-order
            end
        /* set validation of rollback */
        if (rollback)
            for (int i = 0; i < cwd; i++) if (i >= rob_num | ~ren[rob_raddr[i]])
                {com_bundle[i].lrda, com_bundle[i].prda} = 0;
        /* rollback of last commit */
        if (~|rob_num & rollback) begin
            com_bundle = 0;
            com_bundle[0].lrda = dec_last.lrda;
            com_bundle[0].prda = ren_last.prda;
            com_bundle[0].rollback = 1;
        end
    end
    always_comb begin
        /* make up redirect bundle */
        {exception, epc, tval, cause, eret, red_bundle} = 0;
        if (rollback)
            red_bundle.rollback = 1; // indicates rolling back while not taking redirection
        else if (com_exc[0]) begin
            /* take exception */
            exception = exe_last.cause[7];
            epc       = dec_last.pc;
            tval      = tval_last;
            cause     = {exe_last.cause[6], 63'(exe_last.cause[5:0])};
            /* return from exception */
            eret = exe_last.eret;
            /* set redirection bundle */
            red_bundle.opid = dec_last.opid;
            red_bundle.brid = dec_last.brid;
            red_bundle.ldid = dec_last.ldid;
            red_bundle.stid = dec_last.stid;
            red_bundle.topid = top_opid;
            if (exe_last.flush)    red_bundle.npc = dec_last.pc + 64'(dec_last.delta);
            if (exe_last.retry)    red_bundle.npc = dec_last.pc;
            if (exe_last.cause[7]) red_bundle.npc = tvec;
            if (exe_last.eret[2])  red_bundle.npc = eret[1] ? mepc : sepc;
        end else if (mis_bundle.opid[15]) begin
            red_bundle.opid = mis_bundle.opid;
            red_bundle.brid = mis_bundle.brid;
            red_bundle.ldid = mis_bundle.ldid;
            red_bundle.stid = mis_bundle.stid;
            red_bundle.topid = top_opid;
            red_bundle.pc = mis_bundle.pc;
            red_bundle.pat = mis_bundle.pat;
            red_bundle.delta = mis_bundle.delta;
            red_bundle.npc = mis_bundle.npc & ~64'd1; // avoid misaligned fetch
            red_bundle.branch = mis_bundle.branch;
            red_bundle.jal = mis_bundle.jal;
            red_bundle.jalr = mis_bundle.jalr;
        end else if (rei_bundle.opid[15]) begin
            red_bundle.opid = 0;
            red_bundle.brid = rei_bundle.brid; // `opid` = 0 and `brid` != 0 means reinforcement
            red_bundle.pc = rei_bundle.pc;
            red_bundle.pat = rei_bundle.pat;
            red_bundle.delta = rei_bundle.delta;
            red_bundle.npc = rei_bundle.npc & ~64'd1;
        end
    end
    always_comb begin
        /* todo: better to be passed from decoder and do precise sfence.vma in L1 memory from LSU */
        fencei = 0; sfence = 0;
        for (int i = 0; i < cwd; i++) begin
            if (com_bundle[i].opid[15] & dec_rvalue[i].ir == 32'h0000100f) fencei = 1;
            if (com_bundle[i].opid[15] & (dec_rvalue[i].ir & 32'hfe007fff) == 32'h12000073) sfence = 1;
        end
    end
    always_comb begin
        rob_out = 0; // release ROB entry after commiting
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15]) rob_out++;
    end
    always_ff @(posedge clk) if (rst) exe_last <= 0;
    else if (|rob_out) begin
        dec_last <= dec_rvalue[32'(rob_out) - 1];
        exe_last <= exe_rvalue[32'(rob_out) - 1];
        ren_last <= ren_rvalue[32'(rob_out) - 1];
    end else if (redir) begin
        exe_last.flush <= 0;
        exe_last.retry <= 0;
        exe_last.cause <= 0;
        exe_last.eret <= 0;
    end else if (~rollback & |rob_num & exe[rob_front] & exe_rvalue[0].retry) begin
        dec_last.pc <= dec_rvalue[0].pc;
        exe_last.retry <= 1;
    end
    /* exception requires rollback of last committed instruction which causes exception */
    /* `rollback_last` will delay rollback for one cycle to roll back the last committed */
    always_ff @(posedge clk) if (rst) rollback_last <= 1;
        else if (|rob_out & exe_rvalue[32'(rob_out) - 1].cause[7]) rollback_last <= 0;
        else if (~|rob_num) rollback_last <= 1;
endmodule
