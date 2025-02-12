/**
 * lsu.sv:
 *   Load-store unit. It also handles CSR instructions.
 */

`include "types.sv"
import types::*;

module lsu #(
    parameter iwd  = 4, // issue width
    parameter ewd  = 4, // execution width
    parameter cwd  = 4, // commit width
    parameter mwd  = 1, // memory access width
    parameter lqsz = 8, // load queue size
    parameter sqsz = 8  // store queue size
)(
    input  logic clk,
    input  logic rst,
    input  logic flush,
    input  logic [7:0] nextldid,              // next load ID to commmit
    input  logic [7:0] nextstid,              // next store ID to commmit
    input  com_bundle_t [cwd-1:0] com_bundle, // commit bundle
    output logic                  ready,      // ready for receiving at most `iwd` requests
    input  reg_bundle_t [iwd-1:0] reg_bundle, // requests after register read
    input  logic        [ewd-1:0] claim,      // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] exe_bundle, // execution results
    /* CSR interface */
    output logic        csr_rqst, // CSR writing request
    output logic  [2:0] csr_func, // CSR writing functional code (funct3)
    output logic [11:0] csr_addr, // CSR writing address
    output logic [63:0] csr_wdat, // CSR writing data
    input  logic        csr_excp, // CSR exception
    input  logic [63:0] csr_rdat, // CSR reading data
    input  logic        csr_flsh, // CSR flush signal
    /* DTLB interface */
    output logic [mwd-1:0] [7:0] dt_rqst, // DTLB request ID
    output logic [mwd-1:0][63:0] dt_vadd, // DTLB response ID
    input  logic [mwd-1:0] [7:0] dt_resp, // DTLB virtual address
    input  logic [mwd-1:0] [7:0] dt_perm, // permission for request
    input  logic [mwd-1:0][63:0] dt_padd, // DTLB physical address
    /* DCACHE interface */
    output logic                 dc_flsh, // DCACHE flush signal
    output logic [mwd-1:0] [7:0] dc_rqst, // DCACHE request ID
    output logic [mwd-1:0][63:0] dc_addr, // DCACHE request address
    output logic [mwd-1:0] [7:0] dc_strb, // DCACHE write strobe
    output logic [mwd-1:0][63:0] dc_wdat, // DCACHE write data
    input  logic [mwd-1:0] [7:0] dc_resp, // DCACHE response
    input  logic [mwd-1:0] [7:0] dc_miss, // DCACHE miss signal
    input  logic [mwd-1:0][63:0] dc_rdat  // DCACHE read data
);
    /* request selector */
    reg_bundle_t [iwd-1:0] req_load, req_store;   // requests of load/store operation
    lsu_funct_t  [iwd-1:0] func_load, func_store; // function code
    logic [$clog2(lqsz):0] num_load;              // number of load operation in issued operation
    logic [$clog2(sqsz):0] num_store;             // number of store operation
    always_comb begin
        req_load = 0; req_store = 0;
        num_load = 0; num_store = 0;
        for (int i = 0; i < iwd; i++)
            if (reg_bundle[i].opid[15] & reg_bundle[i].ldid[7]) begin // select load requests and flatten them
                req_load[num_load] = reg_bundle[i];
                num_load++;
            end
        for (int i = 0; i < iwd; i++)
            if (reg_bundle[i].opid[15] & ~reg_bundle[i].ldid[7] & reg_bundle[i].stid[7]) begin
                req_store[num_store] = reg_bundle[i]; // select store requests and flatten them
                num_store++;
            end
    end
    always_comb for (int i = 0; i < iwd; i++) func_load [i] = $bits(lsu_funct_t)'(req_load [i].funct);
    always_comb for (int i = 0; i < iwd; i++) func_store[i] = $bits(lsu_funct_t)'(req_store[i].funct);

    /* store queue */
    logic [$clog2(sqsz)-1:0] sq_front;                       // load queue front index
    logic [$clog2(sqsz):0] sq_in, sq_out, sq_exe;            // load queue numbers
    logic [sqsz-1:0] sq_valid, sq_trans;                     // valid and translated entry
    logic            sq_accsd;                               // accessed and executed front entry
    logic [sqsz-1:0] sq_to_trans;                            // forwarded store queue bits
    logic [mwd-1:0][$clog2(sqsz):0] sq_pos_trans;            // positions to be translated
    logic [sqsz-1:0] [7:0] sq_miss;                          // miss index
    logic [sqsz-1:0][63:0] sq_padd;                          // physical address part of store queue
    logic [sqsz-1:0] [7:0] sq_strb;                          // strobe part of store queue
    logic [sqsz-1:0][63:0] sq_wdat;                          // write data part of store queue
    logic        [iwd-1:0][$clog2(sqsz)-1:0] sq_waddr;       // store queue write index
    exe_bundle_t                             sq_rvalue;      // store queue read value
    exe_bundle_t [iwd-1:0]                   sq_wvalue;      // store queue write value
    logic        [iwd-1:0]                   sq_wena;        // store queue write enable
    logic        [mwd-1:0][$clog2(sqsz)-1:0] sq_vadd_raddr;  // virtual address read index
    logic        [mwd-1:0]            [63:0] sq_vadd_rvalue; // virtual address read value
    logic        [iwd-1:0]            [63:0] sq_vadd_wvalue; // virtual address write value
    logic        [mwd-1:0][$clog2(sqsz)-1:0] sq_rdat_waddr;  // write data read address
    logic                             [63:0] sq_rdat_rvalue; // read data read value
    logic        [mwd-1:0]                   sq_rdat_wena;   // read data write enable
    mwpram #(.width($bits(exe_bundle_t)), .depth(sqsz), .rports(1), .wports(iwd))
        sq_inst(.clk(clk), .rst(rst), .wena(sq_wena),
            .raddr(sq_front), .rvalue(sq_rvalue), .waddr(sq_waddr), .wvalue(sq_wvalue));
    mwpram #(.width(64), .depth(sqsz), .rports(mwd), .wports(iwd))
        sq_vadd_inst(.clk(clk), .rst(rst), .wena(sq_wena),
            .raddr(sq_vadd_raddr), .rvalue(sq_vadd_rvalue), .waddr(sq_waddr), .wvalue(sq_vadd_wvalue));
    mwpram #(.width(64), .depth(sqsz), .rports(1), .wports(mwd))
        sq_rdat_inst(.clk(clk), .rst(rst), .wena(sq_rdat_wena),
            .raddr(sq_front), .rvalue(sq_rdat_rvalue), .waddr(sq_rdat_waddr), .wvalue(dc_rdat));
    firstk #(.width(sqsz), .k(mwd)) pos_sq_trans_inst(.bits(sq_to_trans), .pos(sq_pos_trans));
    always_comb begin
        sq_to_trans = sq_valid & ~sq_trans;
        for (int i = 0; i < mwd; i++) if (dt_resp[i][7:5] == 3'b011) sq_to_trans[$clog2(sqsz)'(dt_resp[i])] = 0;
    end
    always_comb for (int i = 0; i < mwd; i++) sq_vadd_raddr[i] = $clog2(sqsz)'(sq_pos_trans[i]);
    always_comb for (int i = 0; i < iwd; i++) begin
        /* store queue common part with execution bundle */
        sq_waddr [i] = $clog2(sqsz)'(req_store[i].stid);
        sq_wena  [i] = i < 32'(sq_in);
        sq_wvalue[i] = 0;
        sq_wvalue[i].opid = req_store[i].opid;
        sq_wvalue[i].stid = req_store[i].stid;
        sq_wvalue[i].npc  = req_store[i].base[63:0] + 64'(req_store[i].delta);
        sq_wvalue[i].prda = req_store[i].prda[1];
        sq_wvalue[i].tval = func_store[i].csr ? 64'(req_store[i].ir) : req_store[i].prs[0] + req_store[i].b[63:0];
        sq_wvalue[i].mem  = func_store[i].csr ? 0 : ~func_store[i].fence;
        sq_wvalue[i].csr  = func_store[i].csr;
        /* store queue virtual address part */
        sq_vadd_wvalue[i] = (func_store[i].csr ? 0 : req_store[i].prs[0]) + req_store[i].b[63:0];
    end
    always_comb for (int i = 0; i < mwd; i++) begin
        sq_rdat_waddr[i] = $clog2(sqsz)'(dc_resp[i]);
        sq_rdat_wena [i] = dc_resp[i][7:5] == 3'b111;
    end
    always_comb begin
        sq_in = 0; sq_out = 0;
        for (int i = 0; i < iwd; i++)
            if (reg_bundle[i].opid[15] & ~reg_bundle[i].ldid[7] & reg_bundle[i].stid[7]) sq_in++;
        for (int i = 0; i < cwd; i++)
            if (com_bundle[i].opid[15] & ~com_bundle[i].ldid[7] & com_bundle[i].stid[7]) sq_out++;
    end
    always_ff @(posedge clk) if (rst) {sq_valid, sq_trans, sq_accsd} <= 0;
        else begin
            /* address calculated */
            for (int i = 0; i < iwd; i++)
                if (reg_bundle[i].opid[15] & ~reg_bundle[i].ldid[7] & reg_bundle[i].stid[7])
                    sq_valid[$clog2(sqsz)'(reg_bundle[i].stid)] <= 1;
            /* translate store entries */
            for (int i = 0; i < mwd; i++) if (dt_resp[i][7:5] == 3'b011)
                sq_trans[$clog2(sqsz)'(dt_resp[i])] <= 1;
            /* access entries */
            for (int i = 0; i < mwd; i++) begin
                if (dc_resp[i][7:6] == 2'b11 & dc_miss[i][7:6] != 2'b11)
                    for (int j = 0; j < sqsz; j++) if (dc_resp[i] == sq_miss[j]) sq_miss[j] <= 0;
                if (dc_resp[i][7:5] == 3'b111 & dc_miss[i][7:6] == 2'b11) // cache miss
                    sq_miss[$clog2(sqsz)'(dc_resp[i])] <= dc_miss[i];
                if (dc_resp[i][7:5] == 3'b111) sq_accsd <= 1; // store entry
            end
            /* output execution bundles */
            for (int i = 0; i < ewd; i++)
                if (exe_bundle[i].opid[15] & ~exe_bundle[i].ldid[7] & exe_bundle[i].stid[7] & claim[i]) begin
                    sq_valid[sq_front] <= 0;
                    sq_trans[sq_front] <= 0;
                    sq_miss [sq_front] <= 0;
                    sq_accsd <= 0;
                end
        end
    always_ff @(posedge clk) for (int i = 0; i < iwd; i++) if (sq_wena[i]) begin
        case (func_store[i].bits[1:0])
            2'b00: sq_strb[sq_waddr[i]] <= 8'b0000_0001 << sq_vadd_wvalue[i][2:0];
            2'b01: sq_strb[sq_waddr[i]] <= 8'b0000_0011 << sq_vadd_wvalue[i][2:0];
            2'b10: sq_strb[sq_waddr[i]] <= 8'b0000_1111 << sq_vadd_wvalue[i][2:0];
            2'b11: sq_strb[sq_waddr[i]] <= 8'b1111_1111 << sq_vadd_wvalue[i][2:0];
        endcase
        sq_wdat[sq_waddr[i]] <= req_store[i].prs[1] << (8'(sq_vadd_wvalue[i][2:0]) << 3);
    end
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++)
        if (dt_resp[i][7:5] == 3'b011) sq_padd[$clog2(sqsz)'(dt_resp[i])] <= dt_padd[i];
    always_ff @(posedge clk) if (rst) sq_front <= 0; else sq_front <= sq_front + $clog2(sqsz)'(sq_out);

    /* load queue */
    logic [$clog2(lqsz)-1:0] lq_front;                       // load queue front index
    logic [$clog2(lqsz):0] lq_in, lq_out, lq_exe;            // load queue numbers
    logic [lqsz-1:0] lq_valid, lq_trans, lq_accsd;           // valid, translated, checked and accessed entry
    logic [lqsz-1:0] lq_to_trans, lq_to_chckd;               // ready to be translated and checked
    logic [lqsz-1:0] lq_to_accsd, lq_to_exect;               // ready to be accessed and executed
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_trans;            // positions to be translated
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_chckd;            // positions to be checked
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_accsd;            // positions to be accessed
    logic [ewd-1:0][$clog2(lqsz):0] lq_pos_exect;            // positions to be executed
    logic [lqsz-1:0]             [7:0] lq_miss;              // miss index
    logic [lqsz-1:0]             [1:0] lq_chck;              // relevance check
    logic [lqsz-1:0][$clog2(sqsz)-1:0] lq_stid;              // previous store index of load entry
    logic [lqsz-1:0]            [63:0] lq_padd;              // physical address part of load queue
    logic [lqsz-1:0]             [7:0] lq_strb;              // strobe part of load queue
    logic        [ewd-1:0][$clog2(lqsz)-1:0] lq_raddr;       // load queue read index
    logic        [iwd-1:0][$clog2(lqsz)-1:0] lq_waddr;       // load queue write index
    exe_bundle_t [ewd-1:0]                   lq_rvalue;      // load queue read value
    exe_bundle_t [iwd-1:0]                   lq_wvalue;      // load queue write value
    logic        [iwd-1:0]                   lq_wena;        // load queue write enable
    logic        [mwd-1:0][$clog2(lqsz)-1:0] lq_vadd_raddr;  // virtual address read index
    logic        [mwd-1:0]            [63:0] lq_vadd_rvalue; // virtual address read value
    logic        [iwd-1:0]            [63:0] lq_vadd_wvalue; // virtual address write value
    logic      [2*mwd-1:0][$clog2(sqsz)-1:0] lq_rdat_waddr;  // write data read address
    logic        [ewd-1:0]            [63:0] lq_rdat_rvalue; // read data read value
    logic      [2*mwd-1:0]                   lq_rdat_wena;   // read data write enable
    logic      [2*mwd-1:0]            [63:0] lq_rdat_wvalue; // read data write value
    logic        [mwd-1:0]             [7:0] ck_resp;        // relevance checking ID
    logic        [mwd-1:0]             [1:0] ck_rslt;        // relevance checking result
    logic        [mwd-1:0]            [64:0] ck_forw;        // forwarded value (MSB is valid bit)
    mwpram #(.width($bits(exe_bundle_t)), .depth(lqsz), .rports(ewd), .wports(iwd))
        lq_inst(.clk(clk), .rst(rst), .wena(lq_wena),
            .raddr(lq_raddr), .rvalue(lq_rvalue), .waddr(lq_waddr), .wvalue(lq_wvalue));
    mwpram #(.width(64), .depth(lqsz), .rports(mwd), .wports(iwd))
        lq_vadd_inst(.clk(clk), .rst(rst), .wena(lq_wena),
            .raddr(lq_vadd_raddr), .rvalue(lq_vadd_rvalue), .waddr(lq_waddr), .wvalue(lq_vadd_wvalue));
    mwpram #(.width(64), .depth(lqsz), .rports(ewd), .wports(2*mwd))
        lq_rdat_inst(.clk(clk), .rst(rst), .wena(lq_rdat_wena),
            .raddr(lq_raddr), .rvalue(lq_rdat_rvalue), .waddr(lq_rdat_waddr), .wvalue(lq_rdat_wvalue));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_trans_inst(.bits(lq_to_trans), .pos(lq_pos_trans));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_chckd_inst(.bits(lq_to_chckd), .pos(lq_pos_chckd));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_accsd_inst(.bits(lq_to_accsd), .pos(lq_pos_accsd));
    firstk #(.width(lqsz), .k(ewd)) pos_lq_exect_inst(.bits(lq_to_exect), .pos(lq_pos_exect));
    always_comb begin
        lq_to_trans = lq_valid & ~lq_trans;
        lq_to_exect = lq_accsd;
        for (int i = 0; i < lqsz; i++) lq_to_chckd[i] = lq_trans[i] & ~|lq_chck[i];
        for (int i = 0; i < lqsz; i++) lq_to_accsd[i] = |lq_chck[i] & ~lq_accsd[i];
        for (int i = 0; i < lqsz; i++)
            if (lq_chck[i] == 1 & lq_stid[i] != sq_front | lq_miss[i][7:6] == 2'b11) lq_to_accsd[i] = 0;
        /* do some forwarding */
        for (int i = 0; i < mwd; i++) if (dt_resp[i][7:5] == 3'b010) lq_to_trans[$clog2(lqsz)'(dt_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (dt_resp[i][7:5] == 3'b010) lq_to_chckd[$clog2(lqsz)'(dt_resp[i])] = 1;
        for (int i = 0; i < mwd; i++) if (ck_resp[i][7:5] == 3'b110) lq_to_chckd[$clog2(lqsz)'(ck_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (ck_resp[i][7:5] == 3'b110 & ~ck_forw[i][64])
            if (ck_rslt[i] != 1 | lq_stid[$clog2(lqsz)'(ck_resp[i])] == sq_front)
                lq_to_accsd[$clog2(lqsz)'(ck_resp[i])] = 1;
        for (int i = 0; i < mwd; i++) if (dc_resp[i][7:5] == 3'b110) lq_to_accsd[$clog2(lqsz)'(dc_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (dc_resp[i][7:5] == 3'b110 & dc_miss[i][7:6] != 2'b11)
            lq_to_exect[$clog2(lqsz)'(dc_resp[i])] = 1;
    end
    always_comb for (int i = 0; i < ewd; i++) lq_raddr[i] = $clog2(lqsz)'(lq_pos_exect[i]);
    always_comb for (int i = 0; i < mwd; i++) lq_vadd_raddr[i] = $clog2(lqsz)'(lq_pos_trans[i]);
    always_comb for (int i = 0; i < iwd; i++) begin
        /* load queue common part with execution bundle */
        lq_waddr [i] = $clog2(lqsz)'(req_load[i].ldid);
        lq_wena  [i] = i < 32'(lq_in);
        lq_wvalue[i] = 0;
        lq_wvalue[i].opid = req_load[i].opid;
        lq_wvalue[i].ldid = req_load[i].ldid;
        lq_wvalue[i].npc  = req_load[i].base[63:0] + 64'(req_load[i].delta);
        lq_wvalue[i].prda = req_load[i].prda[1];
        lq_wvalue[i].tval = req_load[i].prs[0] + req_load[i].b[63:0];
        /* load queue virtual address part */
        lq_vadd_wvalue[i] = req_load[i].prs[0] + req_load[i].b[63:0];
    end
    always_comb for (int i = 0; i < mwd; i++) begin
        lq_rdat_waddr [i] = $clog2(lqsz)'(dc_resp[i]);
        lq_rdat_wena  [i] = dc_resp[i][7:5] == 3'b110;
        lq_rdat_wvalue[i] = dc_rdat;
        lq_rdat_waddr [mwd + i] = $clog2(lqsz)'(ck_resp[i]);
        lq_rdat_wena  [mwd + i] = ck_resp[i][7:5] == 3'b110 & ck_forw[i][64];
        lq_rdat_wvalue[mwd + i] = ck_forw[i][63:0];
    end
    always_comb begin
        lq_in = 0; lq_out = 0;
        for (int i = 0; i < iwd; i++) if (reg_bundle[i].opid[15] & reg_bundle[i].ldid[7]) lq_in++;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15] & com_bundle[i].ldid[7]) lq_out++;
    end
    always_ff @(posedge clk) if (rst) {lq_valid, lq_trans, lq_accsd, lq_chck, lq_miss} <= 0;
        else begin
            /* address calculated */
            for (int i = 0; i < iwd; i++) if (reg_bundle[i].opid[15] & reg_bundle[i].ldid[7])
                lq_valid[$clog2(lqsz)'(reg_bundle[i].ldid)] <= 1;
            /* translate load entries */
            for (int i = 0; i < mwd; i++) if (dt_resp[i][7:5] == 3'b010)
                lq_trans[$clog2(lqsz)'(dt_resp[i])] <= 1;
            /* check relevance */
            for (int i = 0; i < mwd; i++) if (ck_resp[i][7:5] == 3'b110) begin
                lq_chck[$clog2(lqsz)'(ck_resp[i])] <= ck_rslt[i];
                if (ck_forw[i][64]) lq_accsd[$clog2(lqsz)'(ck_resp[i])] <= 1;
            end
            /* access entries */
            for (int i = 0; i < mwd; i++) begin
                if (dc_resp[i][7:6] == 2'b11 & dc_miss[i][7:6] != 2'b11) begin
                    for (int j = 0; j < lqsz; j++) if (dc_resp[i] == lq_miss[j]) lq_miss[j] <= 0;
                    if (~dc_resp[i][5]) lq_accsd[$clog2(lqsz)'(dc_resp[i])] <= 1; // load entry
                end
                if (dc_resp[i][7:5] == 3'b110 & dc_miss[i][7:6] == 2'b11) // cache miss
                    lq_miss[$clog2(lqsz)'(dc_resp[i])] <= dc_miss[i];
            end
            /* output execution bundles */
            for (int i = 0; i < ewd; i++) if (exe_bundle[i].opid[15] & exe_bundle[i].ldid[7] & claim[i]) begin
                lq_valid[$clog2(lqsz)'(exe_bundle[i].ldid)] <= 0;
                lq_trans[$clog2(lqsz)'(exe_bundle[i].ldid)] <= 0;
                lq_accsd[$clog2(lqsz)'(exe_bundle[i].ldid)] <= 0;
                lq_chck [$clog2(lqsz)'(exe_bundle[i].ldid)] <= 0;
                lq_miss [$clog2(lqsz)'(exe_bundle[i].ldid)] <= 0;
            end
        end
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++)
        if (dt_resp[i][7:5] == 3'b010) lq_padd[$clog2(lqsz)'(dt_resp[i])] <= dt_padd[i];
    always_ff @(posedge clk) for (int i = 0; i < iwd; i++) if (lq_wena[i]) begin
        case (func_load[i].bits[1:0])
            2'b00: lq_strb[lq_waddr[i]] <= 8'b0000_0001 << lq_vadd_wvalue[i][2:0];
            2'b01: lq_strb[lq_waddr[i]] <= 8'b0000_0011 << lq_vadd_wvalue[i][2:0];
            2'b10: lq_strb[lq_waddr[i]] <= 8'b0000_1111 << lq_vadd_wvalue[i][2:0];
            2'b11: lq_strb[lq_waddr[i]] <= 8'b1111_1111 << lq_vadd_wvalue[i][2:0];
        endcase
        lq_stid[lq_waddr[i]] <= $clog2(sqsz)'(req_load[i].stid);
    end
    always_ff @(posedge clk) if (rst) lq_front <= 0; else lq_front <= lq_front + $clog2(lqsz)'(lq_out);

    /* load-store relevance check */
    logic [mwd-1:0][$clog2(sqsz)-1:0] ck_stid;
    logic [mwd-1:0]            [63:0] ck_padd;
    logic [mwd-1:0]             [7:0] ck_strb;
    always_comb for (int i = 0; i < mwd; i++) begin
        ck_stid[i] = lq_stid[$clog2(lqsz)'(lq_pos_chckd[i])];
        ck_padd[i] = lq_padd[$clog2(lqsz)'(lq_pos_chckd[i])];
        ck_strb[i] = lq_strb[$clog2(lqsz)'(lq_pos_chckd[i])];
        for (int j = 0; j < mwd; j++) // do DTLB response forwarding
            if (dt_resp[j][7:5] == 3'b010 & dt_resp[j][4:0] == 5'($clog2(lqsz)'(lq_pos_chckd[i])))
                ck_padd[i] = dt_padd[j];
    end
    always_ff @(posedge clk) if (rst) ck_resp <= 0;
        else for (int i = 0; i < mwd; i++) if (lq_pos_chckd[i][$clog2(lqsz)]) begin
            ck_resp[i] <= {2'b11, 1'b0, 5'($clog2(lqsz)'(lq_pos_chckd[i]))};
            /* result encoding:
             *   2'b00: unchecked
             *   2'b01: unable to be accessed before previous operations
             *   2'b10: able to be accessed but need recheck
             *   2'b11: able to be accessed and need no recheck
             */
            ck_rslt[i] <= 2'b11;
            ck_forw[i] <= 0;
            for (int j = 0; j < sqsz; j++) // find previous store operations
                if ($clog2(sqsz)'(j) < ck_stid[i] - sq_front | ck_stid[i] == sq_front)
                    if (~sq_trans[32'(sq_front) + j]) ck_rslt[i] <= 2'b10;
                    else if (sq_padd[32'(sq_front) + j][63:3] == ck_padd[i][63:3])
                        if (~|(~sq_strb[32'(sq_front) + j] & ck_strb[i])) begin // able to cover
                            ck_rslt[i] <= 2'b11;
                            ck_forw[i] <= {1'b1, sq_wdat[32'(sq_front) + j] >> (6'(ck_padd[i][2:0]) << 3)};
                        end else {ck_forw[i], ck_rslt[i]} <= 'b01;
        end else ck_resp[i] <= 0;

    /* MMU interface */
    logic [31:0] dt_num, dc_num;         // DTLB/DCACHE output number
    logic [$clog2(sqsz)-1:0] next_front; // next front index of store queue
    always_comb next_front = sq_front + $clog2(sqsz)'(sq_out);
    always_comb begin
        dt_rqst = 0; dt_vadd = 0; dt_num = 0;
        for (int i = 0; i < mwd; i++) if (sq_pos_trans[i][$clog2(sqsz)]) begin // untranslated entry in SQ
            if (dt_num >= mwd) break;
            dt_rqst[i] = {2'b01, 1'b1, 5'(sq_pos_trans[i][$clog2(sqsz)-1:0])};
            dt_vadd[i] = sq_vadd_rvalue[i];
            dt_num++;
        end
        for (int i = 0; i < mwd; i++) if (lq_pos_trans[i][$clog2(lqsz)]) begin // untranslated entry in LQ
            if (dt_num >= mwd) break;
            dt_rqst[i] = {2'b01, 1'b0, 5'(lq_pos_trans[i][$clog2(lqsz)-1:0])};
            dt_vadd[i] = lq_vadd_rvalue[i];
            dt_num++;
        end
    end
    always_comb begin
        dc_rqst = 0; dc_addr = 0; dc_strb = 0; dc_wdat = 0; dc_num = 0;
        if (sq_trans[next_front] & ~sq_accsd & next_front == $clog2(sqsz)'(nextstid)) begin // SQ entry to access
            dc_rqst[0] = {2'b11, 1'b1, 5'(next_front)};
            dc_addr[0] = sq_padd[next_front];
            dc_strb[0] = sq_strb[sq_front];
            dc_wdat[0] = sq_wdat[sq_front];
            dc_num = 1;
        end
        for (int j = 0; j < mwd; j++) // do DTLB response forwarding
            if (dt_resp[j][7:5] == 3'b011 & dt_resp[j][4:0] == 5'(next_front)) begin
                dc_rqst[0] = {2'b11, 1'b1, 5'(next_front)};
                dc_addr[0] = dt_padd[j];
                dc_strb[0] = sq_strb[sq_front];
                dc_wdat[0] = sq_wdat[sq_front];
                dc_num = 1;
            end
        for (int i = 0; i < mwd; i++) // cancel request when responsed
            if (dc_resp[i][7:5] == 3'b111 & dc_resp[i][4:0] == 5'(sq_front)) {dc_num, dc_rqst[0]} = 0;
        for (int i = 0; i < mwd; i++) if (lq_pos_accsd[i][$clog2(lqsz)]) begin // LQ entry to access
            if (dc_num >= mwd) break;
            dc_rqst[dc_num] = {2'b11, 1'b0, 5'(lq_pos_accsd[i][$clog2(lqsz)-1:0])};
            dc_addr[dc_num] = lq_padd[$clog2(lqsz)'(lq_pos_accsd[i])];
            dc_strb[dc_num] = 0;
            dc_wdat[dc_num] = 0;
            dc_num++;
        end
    end
    always_comb dc_flsh = flush;

    /* arbitrate execution results */
    always_comb ready = 1;
    always_comb begin
        exe_bundle = 0; sq_exe = 0; lq_exe = 0;
        if (sq_accsd & sq_miss[sq_front][7:5] != 3'b111) begin
            exe_bundle[32'(sq_exe)] = sq_rvalue;
            exe_bundle[32'(sq_exe)].prdv = sq_rdat_rvalue;
            sq_exe = 1;
        end
        for (int i = 0; i < ewd; i++) if (lq_pos_exect[i][$clog2(lqsz)]) begin
            if (sq_exe + lq_exe >= ewd) break;
            exe_bundle[32'(sq_exe) + 32'(lq_exe)] = lq_rvalue[i];
            exe_bundle[32'(sq_exe) + 32'(lq_exe)].prdv = lq_rdat_rvalue[i];
            for (int j = 0; j < mwd; j++)
                if (dc_resp[j][7:5] == 3'b110 & dc_miss[j][7:6] != 2'b11 &
                    lq_raddr[i] == $clog2(lqsz)'(dc_resp[j]))
                    exe_bundle[32'(sq_exe) + 32'(lq_exe)].prdv = dc_rdat[j];
            lq_exe++;
        end
    end
endmodule
