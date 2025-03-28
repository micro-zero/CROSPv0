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
    parameter usz = 64,
    parameter rst_pc = 32'hc0000000
)(
    input  logic clk,
    input  logic rst,
    input  dec_bundle_t [dwd-1:0] dec_bundle, // decoder bundle
    input  ren_bundle_t [rwd-1:0] ren_bundle, // rename bundle
    input  exe_bundle_t [ewd-1:0] exe_bundle, // execution bundle
    output com_bundle_t [cwd-1:0] com_bundle, // commit bundle
    /* In reorder buffer, no control signal is needed.
       The inputs and outputs are arbitrary,
       for size of in-flight operations is restricted in decoder,
       and no buffering is needed for committed output. */
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
    output logic  [7:0] nextldid,  // next load ID to commit
    output logic  [7:0] nextstid,  // next store ID to commit
    /* fences */
    output logic fencei,           // fence.i committed
    output logic sfence,           // sfence.vma committed
    input  logic core_clr_bsy_valid,
    input  logic [7:0] core_clr_bsy_rob_idx,
    input exe_unit_resp_t core_exe_iresp
);
    /* pipeline redirect and rollback */
    logic redir, rollback, rollback_last;
    always_comb redir = com_bundle[0].redir;

    /* ROB entry */
    logic [$clog2(usz)-1:0] rob_front;                    // front index
    logic [$clog2(usz):0]   rob_num, rob_in, rob_out;     // ROB related numbers
    logic     [cwd-1:0][$clog2(usz)-1:0] rob_raddr;       // ROB read addresses
    logic [usz-1:0] dec, ren, exe, exe_fwd, spc, spc_fwd; // ROB write-back status
    always_ff @(posedge clk) if (rst | redir) rob_front <= 0;
        else rob_front <= rob_front + $clog2(usz)'(rob_out);
    always_ff @(posedge clk) if (rst | redir) rob_num <= 0;
        else if (rollback & ~ren_bundle[0].opid[15])
            rob_num <= 32'(rob_num) < cwd ? 0 : rob_num - $clog2(usz)'(cwd);
        else rob_num <= rob_num + rob_in - rob_out;
    always_comb for (int i = 0; i < cwd; i++)
        if (rollback) rob_raddr[i] = rob_front + $clog2(usz)'(rob_num) - 1 - $clog2(usz)'(i);
        else          rob_raddr[i] = rob_front + $clog2(usz)'(i);

    /* entry modified by decoder results */
    rob_dec_t [cwd-1:0]                  dec_rvalue; // ROB entry reading values
    logic     [dwd-1:0][$clog2(usz)-1:0] dec_waddr;  // ROB write addresses
    rob_dec_t [dwd-1:0]                  dec_wvalue; // ROB write values
    logic     [dwd-1:0]                  dec_wena;   // ROB write enable signals
    always_comb for (int i = 0; i < dwd; i++) begin
        dec_waddr [i]      = $clog2(usz)'(dec_bundle[i].opid);
        dec_wena  [i]      = dec_bundle[i].opid[15];
        dec_wvalue[i].brid = dec_bundle[i].brid;
        dec_wvalue[i].ldid = dec_bundle[i].ldid;
        dec_wvalue[i].stid = dec_bundle[i].stid;
        dec_wvalue[i].pc   = dec_bundle[i].pc;
        dec_wvalue[i].pat  = dec_bundle[i].pat;
        dec_wvalue[i].ir   = dec_bundle[i].ir;
        dec_wvalue[i].call = dec_bundle[i].call;
        dec_wvalue[i].ret  = dec_bundle[i].ret;
        dec_wvalue[i].lrsa = dec_bundle[i].rsa;
        dec_wvalue[i].lrda = dec_bundle[i].rda;
        dec_wvalue[i].funct = dec_bundle[i].funct;
        /* debug signals */
        dec_wvalue[i].branch = dec_bundle[i].branch;
        dec_wvalue[i].jal    = dec_bundle[i].jal;
        dec_wvalue[i].jalr   = dec_bundle[i].jalr;
    end
    always_comb begin
        rob_in = 0;                   // allocate ROB entry after decoding
        for (int i = 0; i < dwd; i++) // only newly added entries cause ROB number increase
            if (dec_wena[i] & {1'b0, dec_waddr[i] - rob_front} >= rob_num) rob_in++;
    end
    mwpram #(.width($bits(rob_dec_t)), .depth(usz), .rports(cwd), .wports(dwd))
        rob_dec_inst(.clk(clk), .rst(rst),
            .raddr(rob_raddr), .rvalue(dec_rvalue),
            .waddr(dec_waddr), .wvalue(dec_wvalue), .wena(dec_wena));

    /* entry modified by rename results */
    rob_ren_t [cwd-1:0]                  ren_rvalue;   // reading values in ROB
    logic     [rwd-1:0][$clog2(usz)-1:0] ren_waddr;    // ROB write addresses after REN stage
    rob_ren_t [rwd-1:0]                  ren_wvalue;   // writing values in ROB
    logic     [rwd-1:0]                  ren_wena;     // ROB write enable signals after REN stage
    always_comb for (int i = 0; i < rwd; i++) begin
        ren_waddr [i]       = $clog2(usz)'(ren_bundle[i].opid);
        ren_wena  [i]       = ren_bundle[i].opid[15];
        ren_wvalue[i].prda  = ren_bundle[i].prda;
    end
    mwpram #(.width($bits(rob_ren_t)), .depth(usz), .rports(cwd), .wports(rwd))
        rob_ren_inst(.clk(clk), .rst(rst),
            .raddr(rob_raddr), .rvalue(ren_rvalue),
            .waddr(ren_waddr), .wvalue(ren_wvalue), .wena(ren_wena));

    /* entry modified by execution results */
    rob_exe_t [cwd-1:0]                  exe_rvalue;     // reading values in ROB
    rob_exe_t [cwd-1:0]                  exe_rvalue_fwd; // forwarded reading values in ROB
    logic     [ewd:0][$clog2(usz)-1:0] exe_waddr;      // ROB write addresses after EXE stage
    rob_exe_t [ewd:0]                  exe_wvalue;     // writing values in ROB
    logic     [ewd:0]                  exe_wena;       // ROB write enable signals after EXE stage
    always_comb for (int i = 0; i <= ewd; i++) begin
        exe_waddr [i]       = $clog2(usz)'(exe_bundle[i].opid);
        exe_wena  [i]       = exe_bundle[i].opid[15];
        exe_wvalue[i].npc   = exe_bundle[i].npc & ~64'd1; // avoid misaligned fetch
        exe_wvalue[i].cause = exe_bundle[i].cause;
        exe_wvalue[i].ret   = exe_bundle[i].ret;
        exe_wvalue[i].flush = exe_bundle[i].flush;
        exe_wvalue[i].retry = exe_bundle[i].retry;
        exe_wvalue[i].mem   = exe_bundle[i].mem;
        exe_wvalue[i].csr   = exe_bundle[i].csr;
        if (i == ewd) begin
            exe_waddr[i] = $clog2(usz)'(core_exe_iresp.uop.rob_idx);
            exe_wena[i] = core_exe_iresp.valid;
            exe_wvalue[i] = 0;
            exe_wvalue[i].npc = 0;
        end
    end
    always_comb for (int i = 0; i < cwd; i++) begin
        exe_rvalue_fwd[i] = exe_rvalue[i];
        for (int j = 0; j <= ewd; j++)
            if (exe_wena[j] & rob_raddr[i] == exe_waddr[j]) exe_rvalue_fwd[i] = exe_wvalue[j];
    end
    mwpram #(.width($bits(rob_exe_t)), .depth(usz), .rports(cwd), .wports(ewd+1))
        rob_exe_inst(.clk(clk), .rst(rst),
            .raddr(rob_raddr), .rvalue(exe_rvalue),
            .waddr(exe_waddr), .wvalue(exe_wvalue), .wena(exe_wena));

    /* write-back signal of each stage */
    logic [15:0] eid_last, eid_new;   // operation ID of the nearest exception
    logic [63:0] tval_last, tval_new; // trap value of the nearest exception
    always_comb begin
        /* store earliest trap value in a single register to save space of ROB */
        eid_new = eid_last;
        tval_new = tval_last;
        for (int i = 0; i <= ewd; i++)
            if (exe_wena[i] & exe_bundle[i].cause[7] & ~rollback) // exception happens
                if (~eid_new[15] | exe_waddr[i] - rob_front < $clog2(usz)'(eid_new) - rob_front) begin
                    eid_new = exe_bundle[i].opid;
                    tval_new = exe_bundle[i].tval;
                end
        for (int i = 0; i < cwd; i++) if (exe_last.cause[7] & ~rollback) eid_new = 0;
    end
    always_comb begin
        exe_fwd = exe;
        spc_fwd = spc;
        for (int i = 0; i <= ewd; i++) if (exe_wena[i]) exe_fwd[$clog2(usz)'(exe_waddr[i])] = 1;
        for (int i = 0; i <= ewd; i++) if (exe_wena[i]) spc_fwd[$clog2(usz)'(exe_waddr[i])] = exe_bundle[i].specul;
    end
    always_ff @(posedge clk) if (rst | redir) {dec, ren, exe, spc} <= 0; else begin
        for (int i = 0; i < dwd; i++) if (dec_wena[i]) dec[$clog2(usz)'(dec_waddr[i])] <= 1;
        for (int i = 0; i < rwd; i++) if (ren_wena[i]) ren[$clog2(usz)'(ren_waddr[i])] <= 1;
        for (int i = 0; i <= ewd; i++) if (exe_wena[i]) exe[$clog2(usz)'(exe_waddr[i])] <= 1;
        for (int i = 0; i <= ewd; i++) if (exe_wena[i]) spc[$clog2(usz)'(exe_waddr[i])] <= exe_bundle[i].specul;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15]) begin
            dec[$clog2(usz)'(com_bundle[i].opid)] <= 0;
            ren[$clog2(usz)'(com_bundle[i].opid)] <= 0;
            exe[$clog2(usz)'(com_bundle[i].opid)] <= 0;
            spc[$clog2(usz)'(com_bundle[i].opid)] <= 0;
        end
        if (core_clr_bsy_valid) exe[$clog2(usz)'(core_clr_bsy_rob_idx)] <= 1;
    end
    always_ff @(posedge clk) if (rst | redir) eid_last  <= 0; else eid_last  <= eid_new;
    always_ff @(posedge clk) if (rst | redir) tval_last <= 0; else tval_last <= tval_new;

    /* ROB commit */
    /* front `cwd` entries consist of `dec_rvalue`, `ren_rvalue`, `exe_rvalue` */
    rob_dec_t dec_last;        // decoder part of last commited entry
    rob_exe_t exe_last;        // execution part of last commited entry
    rob_ren_t ren_last;        // renaming part of last commited entry
    logic [cwd-1:0] com_redir; // redirection of `cwd` instructions to commit
    always_comb begin
        {nextldid, nextstid} = {dec_rvalue[0].ldid, dec_rvalue[0].stid};
        for (int i = 1; i < cwd; i++) if (~com_redir[i] & com_bundle[i - 1].opid[15])
             {nextldid, nextstid} = {dec_rvalue[i].ldid, dec_rvalue[i].stid};
        if (com_bundle[cwd - 1].opid[15]) {nextldid, nextstid} = 0;
    end
    always_comb begin
        com_redir = 0;
        com_redir[0] = |rob_num & dec_rvalue[0].pc != exe_last.npc | // misprediction
                       exe_last.cause[7]                           | // exception
                       exe_last.ret[2]                             | // return from exception
                       exe_last.flush                              | // instructions requiring flush
                       exe_last.retry;                               // instructions requiring retry
        for (int i = 1; i < cwd; i++) if (i < 32'(rob_num))
            com_redir[i] = dec_rvalue[i].pc != exe_rvalue_fwd[i - 1].npc | // misprediction
                           exe_rvalue_fwd[i - 1].cause[7]                | // exception
                           exe_rvalue_fwd[i - 1].ret[2]                  | // return from exception
                           exe_rvalue_fwd[i - 1].flush;                    // instructions requiring flush
    end
    always_comb rollback = (|rob_num | ~rollback_last) &
        (exe_last.cause[7] | exe_last.ret[2] | exe_last.flush | exe_last.retry);
    always_comb begin
        {exception, epc, tval, cause, eret} = 0;
        /* make up commit bundle */
        for (int i = 0; i < cwd; i++) begin
            com_bundle[i].opid     = {1'b1, 15'(rob_raddr[i])};
            com_bundle[i].brid     = dec_rvalue[i].brid;
            com_bundle[i].ldid     = dec_rvalue[i].ldid;
            com_bundle[i].stid     = dec_rvalue[i].stid;
            com_bundle[i].pc       = dec_rvalue[i].pc;
            com_bundle[i].lsu_funct = $bits(lsu_funct_t)'(dec_rvalue[i].funct);
            com_bundle[i].call     = dec_rvalue[i].call;
            com_bundle[i].ret      = dec_rvalue[i].ret;
            com_bundle[i].pat      = dec_rvalue[i].pat;
            com_bundle[i].comp     = ~&dec_rvalue[i].ir[1:0];
            com_bundle[i].lrda     = dec_rvalue[i].lrda;
            com_bundle[i].prda     = ren_rvalue[i].prda;
            com_bundle[i].npc      = exe_rvalue_fwd[i].npc;
            com_bundle[i].redir    = 0;
            com_bundle[i].rollback = rollback;
        end
        if (com_redir[0] & ~rollback) begin
            /* take exception */
            exception = exe_last.cause[7];
            epc       = dec_last.pc;
            tval      = tval_last;
            cause     = {exe_last.cause[6], 63'(exe_last.cause[5:0])};
            /* return from exception */
            eret = exe_last.ret;
            /* set redirection commit bundle */
            com_bundle = 0;
            com_bundle[0].redir = 1;
            com_bundle[0].brid = exception ? 0 : dec_last.brid;
            com_bundle[0].ldid = dec_last.ldid;
            com_bundle[0].stid = dec_last.stid;
            com_bundle[0].pc = dec_last.pc;
            com_bundle[0].pat = dec_last.pat;
            com_bundle[0].comp = ~&dec_last.ir[1:0];
            com_bundle[0].npc = exe_last.npc;
            if (exception) com_bundle[0].npc = tvec;
            if (eret[2])   com_bundle[0].npc = eret[1] ? mepc : sepc;
        end
        /* set validation of commit */
        for (int i = 0; i < cwd; i++) if (i >= rob_num) com_bundle[i].opid = 0;           // exceeds size of queue
        for (int i = 0; i < cwd; i++) if (com_redir[i]) com_bundle[i].opid = 0;           // encounter redirection
        for (int i = 0; i < cwd; i++) if (~exe_fwd[rob_raddr[i]] | spc_fwd[rob_raddr[i]]) // not ready
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
    always_ff @(posedge clk) if (rst) begin
        exe_last <= 0;
        exe_last.npc <= 64'(rst_pc);
    end else if (|rob_out) begin
        dec_last <= dec_rvalue[32'(rob_out) - 1];
        exe_last <= exe_rvalue_fwd[32'(rob_out) - 1];
        ren_last <= ren_rvalue[32'(rob_out) - 1];
    end else if (com_bundle[0].redir) begin
        exe_last.flush <= 0; // clear `flush`, `cause` and `ret` when redirection taken
        exe_last.retry <= 0;
        exe_last.cause <= 0;
        exe_last.ret <= 0;
        exe_last.npc <= com_bundle[0].npc;
    end else if (exe_fwd[rob_raddr[0]] & exe_rvalue_fwd[0].retry)
        exe_last.retry <= 1;
    /* exception requires rollback of last committed instruction which causes exception */
    /* `rollback_last` will delay rollback for one cycle to roll back the last committed */
    always_ff @(posedge clk) if (rst) rollback_last <= 1;
        else if (|rob_out & exe_rvalue_fwd[32'(rob_out) - 1].cause[7]) rollback_last <= 0;
        else if (~|rob_num) rollback_last <= 1;
endmodule
