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
    logic [$clog2(sqsz)-1:0] sq_front, next_front;           // store queue front index
    logic [$clog2(sqsz):0] sq_in, sq_out, sq_exe;            // store queue numbers
    logic [sqsz-1:0] sq_valid, sq_trans, sq_trans_fwd;       // valid and translated entry
    logic [sqsz-1:0] sq_csr, sq_fence;                       // CSRRW and fence entry
    logic [sqsz-1:0] sq_accsd, sq_flush;                     // accessed and flush bit of front entry
    logic [sqsz-1:0] sq_to_trans;                            // forwarded store queue bits
    logic [sqsz-1:0] sq_to_trans_off;                        // forwarded store queue bits with offset
    logic [mwd-1:0][$clog2(sqsz):0] sq_pos_trans;            // positions to be translated
    logic [mwd-1:0][$clog2(sqsz):0] sq_pos_trans_off;        // positions to be translated with offset
    logic [sqsz-1:0] [7:0] sq_miss;                          // miss index
    logic [sqsz-1:0]       sq_pgft, sq_misa;                 // page fault and misalignment bits of store queue
    logic [sqsz-1:0] [1:0] sq_rsrv;                          // reservation bits of store queue
    logic [sqsz-1:0] [1:0] sq_aqrl;                          // acquire and release bits of store queue
    logic [sqsz-1:0][63:0] sq_padd, sq_padd_fwd;             // physical address part of store queue
    logic [lqsz-1:0] [2:0] sq_bits;                          // functional bits of store queue
    logic [sqsz-1:0] [7:0] sq_strb;                          // strobe part of store queue
    logic [sqsz-1:0][63:0] sq_wdat;                          // write data part of store queue
    logic        [iwd-1:0][$clog2(sqsz)-1:0] sq_waddr;       // store queue write index
    exe_bundle_t                             sq_rvalue;      // store queue read value
    exe_bundle_t [iwd-1:0]                   sq_wvalue;      // store queue write value
    logic        [iwd-1:0]                   sq_wena;        // store queue write enable
    logic          [mwd:0][$clog2(sqsz)-1:0] sq_vadd_raddr;  // virtual address read index
    logic          [mwd:0]            [63:0] sq_vadd_rvalue; // virtual address read value
    logic        [iwd-1:0]            [63:0] sq_vadd_wvalue; // virtual address write value
    logic                             [63:0] sq_rdat_rvalue; // read data read value
    logic                 [$clog2(sqsz)-1:0] sq_rdat_waddr;  // write data read address
    logic                                    sq_rdat_wena;   // read data write enable
    logic                             [63:0] sq_rdat_wvalue; // read data write value
    logic sc_fail, sc_succ;                                  // SC fail and success signal
    logic [7:0] topstid, topldid;                            // top store and load ID in ROB
    logic [63:0] sq_rdat_ext;                                // sign-extended DCACHE read data
    mwpram #(.width($bits(exe_bundle_t)), .depth(sqsz), .rports(1), .wports(iwd))
        sq_inst(.clk(clk), .rst(rst), .wena(sq_wena),
            .raddr(sq_front), .rvalue(sq_rvalue), .waddr(sq_waddr), .wvalue(sq_wvalue));
    mwpram #(.width(64), .depth(sqsz), .rports(mwd + 1), .wports(iwd))
        sq_vadd_inst(.clk(clk), .rst(rst), .wena(sq_wena),
            .raddr(sq_vadd_raddr), .rvalue(sq_vadd_rvalue), .waddr(sq_waddr), .wvalue(sq_vadd_wvalue));
    mwpram #(.width(64), .depth(sqsz), .rports(1), .wports(1))
        sq_rdat_inst(.clk(clk), .rst(rst), .wena(sq_rdat_wena),
            .raddr(sq_front), .rvalue(sq_rdat_rvalue), .waddr(sq_rdat_waddr), .wvalue(sq_rdat_wvalue));
    firstk #(.width(sqsz), .k(mwd)) pos_sq_trans_inst(.bits(sq_to_trans_off), .pos(sq_pos_trans_off));
    always_comb begin
        sq_to_trans = sq_valid & ~sq_trans & ~sq_csr & ~sq_fence;
        for (int i = 0; i < mwd; i++) if (dt_resp[i][7:4] == 4'b1101) sq_to_trans[$clog2(sqsz)'(dt_resp[i])] = 0;
        /* offset is used to make older operations higher priority */
        for (int i = 0; i < sqsz; i++) sq_to_trans_off[i] = sq_to_trans[$clog2(sqsz)'(i) + sq_front];
    end
    always_comb for (int i = 0; i < mwd; i++)
        sq_pos_trans[i] = {sq_pos_trans_off[i][$clog2(sqsz)], $clog2(sqsz)'(sq_pos_trans_off[i]) + sq_front};
    always_comb begin
        for (int i = 0; i < mwd; i++) sq_vadd_raddr[i] = $clog2(sqsz)'(sq_pos_trans[i]);
        sq_vadd_raddr[mwd] = $clog2(sqsz)'(sq_front);
    end
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
    always_comb sq_rdat_waddr = sq_front; // `dc_resp[0]` will also indicates front if it is a store response
    always_comb sq_rdat_wena  = csr_rqst | sc_fail | dc_resp[0][7:4] == 4'b1111;
    always_comb if (csr_rqst) sq_rdat_wvalue = csr_rdat;    // CSR request      --+
        else if (sc_fail)     sq_rdat_wvalue = 1;           // SC fails           | three situations
        else                  sq_rdat_wvalue = sq_rdat_ext; // DCACHE responses --+ are exclusive
    always_comb if (sc_succ) sq_rdat_ext = 0;
        else case (sq_bits[sq_rdat_waddr])
            3'b000: sq_rdat_ext = {{56{dc_rdat[0] [7]}}, dc_rdat[0] [7:0]};
            3'b100: sq_rdat_ext = {               56'd0, dc_rdat[0] [7:0]};
            3'b001: sq_rdat_ext = {{48{dc_rdat[0][15]}}, dc_rdat[0][15:0]};
            3'b101: sq_rdat_ext = {               48'd0, dc_rdat[0][15:0]};
            3'b010: sq_rdat_ext = {{32{dc_rdat[0][31]}}, dc_rdat[0][31:0]};
            3'b110: sq_rdat_ext = {               32'd0, dc_rdat[0][31:0]};
            default: sq_rdat_ext = dc_rdat[0];
        endcase
    always_comb begin
        sq_in = 0; sq_out = 0;
        for (int i = 0; i < iwd; i++)
            if (reg_bundle[i].opid[15] & ~reg_bundle[i].ldid[7] & reg_bundle[i].stid[7]) sq_in++;
        for (int i = 0; i < cwd; i++)
            if (com_bundle[i].opid[15] & ~com_bundle[i].ldid[7] & com_bundle[i].stid[7]) sq_out++;
    end
    always_comb begin
        /* this forwarding only used for checking now, there may be more use */
        sq_trans_fwd = sq_trans;
        sq_padd_fwd = sq_padd;
        for (int i = 0; i < mwd; i++)
            if (dt_resp[i][7:4] == 4'b1101) begin
                sq_trans_fwd[$clog2(sqsz)'(dt_resp[i])] = 1;
                sq_padd_fwd[$clog2(sqsz)'(dt_resp[i])] = dt_padd[i];
            end
    end
    always_ff @(posedge clk) if (rst) {topstid, topldid} <= 0;
        else {topstid, topldid} <= {nextstid, nextldid};
    always_ff @(posedge clk) if (rst | flush)
            {sq_valid, sq_csr, sq_fence, sq_trans, sq_accsd, sq_rsrv, sq_aqrl, sq_pgft, sq_misa} <= 0;
        else begin
            /* virtual address calculated */
            for (int i = 0; i < iwd; i++)
                if (req_store[i].opid[15] & ~req_store[i].ldid[7] & req_store[i].stid[7]) begin
                    sq_valid[$clog2(sqsz)'(req_store[i].stid)] <= 1;
                    sq_rsrv [$clog2(sqsz)'(req_store[i].stid)] <= func_store[i].rsrv;
                    sq_aqrl [$clog2(sqsz)'(req_store[i].stid)] <= func_store[i].aqrl;
                    if      (func_store[i].csr)   sq_csr  [$clog2(sqsz)'(req_store[i].stid)] <= 1;
                    else if (func_store[i].fence) begin
                        sq_fence[$clog2(sqsz)'(req_store[i].stid)] <= 1;
                        sq_trans[$clog2(sqsz)'(req_store[i].stid)] <= 1;
                        sq_accsd[$clog2(sqsz)'(req_store[i].stid)] <= 1;
                    end else if (func_store[i].bits[1:0] == 2'b00 & 0 |
                        func_store[i].bits[1:0] == 2'b01 & sq_vadd_wvalue[i][0] |
                        func_store[i].bits[1:0] == 2'b10 & |sq_vadd_wvalue[i][1:0] |
                        func_store[i].bits[1:0] == 2'b11 & |sq_vadd_wvalue[i][2:0]
                    ) begin
                        sq_misa [$clog2(sqsz)'(req_store[i].stid)] <= 1;
                        sq_trans[$clog2(sqsz)'(req_store[i].stid)] <= 1;
                        sq_accsd[$clog2(sqsz)'(req_store[i].stid)] <= 1;
                    end
                end
            /* translate store entries */
            for (int i = 0; i < mwd; i++) if (dt_resp[i][7:4] == 4'b1101) begin
                sq_trans[$clog2(sqsz)'(dt_resp[i])] <= 1;
                /* store permission: DA---W-V */
                if ((dt_perm[i] | 8'b11000101) != dt_perm[i]) begin
                    sq_pgft [$clog2(sqsz)'(dt_resp[i])] <= 1;
                    sq_accsd[$clog2(sqsz)'(dt_resp[i])] <= 1;
                end
            end
            /* access entries */
            for (int i = 0; i < mwd; i++) begin
                if (dc_resp[i][7:5] == 3'b111 & dc_miss[i][7:5] != 3'b111)
                    for (int j = 0; j < sqsz; j++) if (dc_resp[i] == sq_miss[j]) sq_miss[j] <= 0;
                if (dc_resp[i][7:4] == 4'b1111 & dc_miss[i][7:5] == 3'b111) // cache miss
                    sq_miss[$clog2(sqsz)'(dc_resp[i])] <= dc_miss[i];
                if (dc_resp[i][7:4] == 4'b1111 & dc_miss[i][7:5] != 3'b111) sq_accsd[sq_front] <= 1; // store entry
            end
            /* SC fails */
            if (sc_fail) sq_accsd[sq_front] <= 1;
            /* access CSR entries */
            if (csr_rqst) sq_accsd[sq_front] <= 1;
            if (csr_rqst) sq_flush[sq_front] <= csr_flsh;
            if (csr_rqst) sq_pgft[sq_front] <= csr_excp; // use `pgft` as CSR exception signal
            /* output execution bundles */
            for (int i = 0; i < ewd; i++)
                if (exe_bundle[i].opid[15] & ~exe_bundle[i].ldid[7] & exe_bundle[i].stid[7] & claim[i])
                    sq_valid[sq_front] <= 0;
            /* commit entries */
            for (int i = 0; i < cwd; i++)
                if (com_bundle[i].opid[15] & ~com_bundle[i].ldid[7] & com_bundle[i].stid[7]) begin
                    sq_trans[sq_front] <= 0; sq_pgft [sq_front] <= 0;
                    sq_rsrv [sq_front] <= 0; sq_aqrl [sq_front] <= 0;
                    sq_miss [sq_front] <= 0; sq_csr  [sq_front] <= 0;
                    sq_fence[sq_front] <= 0; sq_accsd[sq_front] <= 0;
                    sq_flush[sq_front] <= 0; sq_misa [sq_front] <= 0;
                end
        end
    always_ff @(posedge clk) for (int i = 0; i < iwd; i++) if (sq_wena[i]) begin
        case (func_store[i].bits[1:0])
            2'b00: sq_strb[sq_waddr[i]] <= 8'b0000_0001 << sq_vadd_wvalue[i][2:0];
            2'b01: sq_strb[sq_waddr[i]] <= 8'b0000_0011 << sq_vadd_wvalue[i][2:0];
            2'b10: sq_strb[sq_waddr[i]] <= 8'b0000_1111 << sq_vadd_wvalue[i][2:0];
            2'b11: sq_strb[sq_waddr[i]] <= 8'b1111_1111 << sq_vadd_wvalue[i][2:0];
        endcase
        sq_bits[sq_waddr[i]] <= func_store[i].bits;
        sq_wdat[sq_waddr[i]] <= req_store[i].prs[1] << (8'(sq_vadd_wvalue[i][2:0]) << 3);
        /* CSR instructions make use of existing SQ entries */
        if (func_store[i].csr) begin
            sq_strb[sq_waddr[i]] <= 8'(func_store[i].bits);
            sq_wdat[sq_waddr[i]] <= req_store[i].a[64] ? req_store[i].prs[0] : req_store[i].a[63:0];
        end
    end
    always_ff @(posedge clk) sq_padd <= sq_padd_fwd;
    always_ff @(posedge clk) if (rst | flush) sq_front <= 0; else sq_front <= sq_front + $clog2(sqsz)'(sq_out);

    /* load queue */
    logic [$clog2(lqsz)-1:0] lq_front;                       // load queue front index
    logic [$clog2(lqsz):0] lq_in, lq_out, lq_exe;            // load queue numbers
    logic [lqsz-1:0] lq_valid, lq_trans, lq_accsd;           // valid, translated, checked and accessed entry
    logic [lqsz-1:0] lq_to_trans, lq_to_chckd;               // ready to be translated and checked
    logic [lqsz-1:0] lq_to_accsd, lq_to_exect;               // ready to be accessed and executed
    logic [lqsz-1:0] lq_to_trans_off;                        // ready to be translated (with offset)
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_trans;            // positions to be translated
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_chckd;            // positions to be checked
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_accsd;            // positions to be accessed
    logic [ewd-1:0][$clog2(lqsz):0] lq_pos_exect;            // positions to be executed
    logic [mwd-1:0][$clog2(lqsz):0] lq_pos_trans_off;        // positions to be translated
    logic [lqsz-1:0]             [7:0] lq_miss;              // miss index
    logic [lqsz-1:0]             [1:0] lq_chck, lq_chck_fwd; // relevance check
    logic [lqsz-1:0]                   lq_fail;              // relevance check failure
    logic                              lq_succ;              // relevance check success
    logic [lqsz-1:0][$clog2(sqsz)-1:0] lq_stid;              // previous store index of load entry
    logic [lqsz-1:0]            [63:0] lq_padd;              // physical address part of load queue
    logic [lqsz-1:0]             [1:0] lq_rsrv;              // reservation bits of load queue
    logic [lqsz-1:0]             [1:0] lq_aqrl;              // acquire and release bits of load queue
    logic [lqsz-1:0]                   lq_pgft, lq_misa;     // page fault and misalignment bits of load queue
    logic [lqsz-1:0]             [7:0] lq_strb;              // strobe part of load queue
    logic [lqsz-1:0]             [2:0] lq_bits;              // functional bits of load queue
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
    logic        [mwd-1:0]             [2:0] ck_bits;        // functional bits of relevance check
    mwpram #(.width($bits(exe_bundle_t)), .depth(lqsz), .rports(ewd), .wports(iwd))
        lq_inst(.clk(clk), .rst(rst), .wena(lq_wena),
            .raddr(lq_raddr), .rvalue(lq_rvalue), .waddr(lq_waddr), .wvalue(lq_wvalue));
    mwpram #(.width(64), .depth(lqsz), .rports(mwd), .wports(iwd))
        lq_vadd_inst(.clk(clk), .rst(rst), .wena(lq_wena),
            .raddr(lq_vadd_raddr), .rvalue(lq_vadd_rvalue), .waddr(lq_waddr), .wvalue(lq_vadd_wvalue));
    mwpram #(.width(64), .depth(lqsz), .rports(ewd), .wports(2*mwd))
        lq_rdat_inst(.clk(clk), .rst(rst), .wena(lq_rdat_wena),
            .raddr(lq_raddr), .rvalue(lq_rdat_rvalue), .waddr(lq_rdat_waddr), .wvalue(lq_rdat_wvalue));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_trans_inst(.bits(lq_to_trans_off), .pos(lq_pos_trans_off));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_chckd_inst(.bits(lq_to_chckd), .pos(lq_pos_chckd));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_accsd_inst(.bits(lq_to_accsd), .pos(lq_pos_accsd));
    firstk #(.width(lqsz), .k(ewd)) pos_lq_exect_inst(.bits(lq_to_exect), .pos(lq_pos_exect));
    always_comb begin
        lq_to_trans = lq_valid & ~lq_trans;
        lq_to_exect = lq_valid & (lq_accsd | lq_fail);
        for (int i = 0; i < lqsz; i++) lq_to_chckd[i] = lq_trans[i] & ~|lq_chck[i];
        for (int i = 0; i < lqsz; i++) lq_to_accsd[i] = |lq_chck[i] & ~lq_accsd[i];
        for (int i = 0; i < lqsz; i++)
            if (lq_chck[i] == 2'b01 & lq_stid[i] != sq_front | lq_miss[i][7:5] == 3'b111) lq_to_accsd[i] = 0;
        /* do some forwarding */
        for (int i = 0; i < mwd; i++) if (dt_resp[i][7:4] == 4'b1100) lq_to_trans[$clog2(lqsz)'(dt_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (dt_resp[i][7:4] == 4'b1100) lq_to_chckd[$clog2(lqsz)'(dt_resp[i])] = 1;
        for (int i = 0; i < mwd; i++) if (ck_resp[i][7:4] == 4'b1110) lq_to_chckd[$clog2(lqsz)'(ck_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (ck_resp[i][7:4] == 4'b1110 & ~ck_forw[i][64])
            if (ck_rslt[i] != 1 | lq_stid[$clog2(lqsz)'(ck_resp[i])] == sq_front)
                lq_to_accsd[$clog2(lqsz)'(ck_resp[i])] = 1;
        for (int i = 0; i < mwd; i++) if (dc_resp[i][7:4] == 4'b1110) lq_to_accsd[$clog2(lqsz)'(dc_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (dc_resp[i][7:4] == 4'b1110 & dc_miss[i][7:5] != 3'b111)
            lq_to_exect[$clog2(lqsz)'(dc_resp[i])] = 1;
        for (int i = 0; i < mwd; i++) if (ck_resp[i][7:4] == 4'b1110 & ck_forw[i][64])
            lq_to_exect[$clog2(lqsz)'(ck_resp[i])] = 1;
        if (lq_succ) lq_to_exect[lq_front] = 1; // recheck succeeds
        for (int i = 0; i < lqsz; i++) lq_to_trans_off[i] = lq_to_trans[$clog2(lqsz)'(i) + lq_front];
    end
    always_comb for (int i = 0; i < mwd; i++)
        lq_pos_trans[i] = {lq_pos_trans_off[i][$clog2(lqsz)], $clog2(lqsz)'(lq_pos_trans_off[i]) + lq_front};
    always_comb for (int i = 0; i < ewd; i++) lq_raddr[i] = $clog2(lqsz)'(lq_pos_exect[i]);
    always_comb for (int i = 0; i < mwd; i++) lq_vadd_raddr[i] = $clog2(lqsz)'(lq_pos_trans[i]);
    always_comb for (int i = 0; i < iwd; i++) begin
        /* load queue common part with execution bundle */
        lq_waddr [i] = $clog2(lqsz)'(req_load[i].ldid);
        lq_wena  [i] = i < 32'(lq_in);
        lq_wvalue[i] = 0;
        lq_wvalue[i].opid = req_load[i].opid;
        lq_wvalue[i].ldid = req_load[i].ldid;
        lq_wvalue[i].stid = req_load[i].stid;
        lq_wvalue[i].npc  = req_load[i].base[63:0] + 64'(req_load[i].delta);
        lq_wvalue[i].prda = req_load[i].prda[1];
        lq_wvalue[i].tval = req_load[i].prs[0] + req_load[i].b[63:0];
        /* load queue virtual address part */
        lq_vadd_wvalue[i] = req_load[i].prs[0] + req_load[i].b[63:0];
    end
    always_comb for (int i = 0; i < mwd; i++) begin
        lq_rdat_waddr [i] = $clog2(lqsz)'(dc_resp[i]);
        lq_rdat_wena  [i] = dc_resp[i][7:4] == 4'b1110;
        case (lq_bits[lq_rdat_waddr[i]])
            3'b000: lq_rdat_wvalue[i] = {{56{dc_rdat[i] [7]}}, dc_rdat[i] [7:0]};
            3'b100: lq_rdat_wvalue[i] = {               56'd0, dc_rdat[i] [7:0]};
            3'b001: lq_rdat_wvalue[i] = {{48{dc_rdat[i][15]}}, dc_rdat[i][15:0]};
            3'b101: lq_rdat_wvalue[i] = {               48'd0, dc_rdat[i][15:0]};
            3'b010: lq_rdat_wvalue[i] = {{32{dc_rdat[i][31]}}, dc_rdat[i][31:0]};
            3'b110: lq_rdat_wvalue[i] = {               32'd0, dc_rdat[i][31:0]};
            default: lq_rdat_wvalue[i] = dc_rdat[i];
        endcase
        lq_rdat_waddr [mwd + i] = $clog2(lqsz)'(ck_resp[i]);
        lq_rdat_wena  [mwd + i] = ck_resp[i][7:4] == 4'b1110 & ck_forw[i][64];
        lq_rdat_wvalue[mwd + i] = ck_forw[i][63:0];
    end
    always_comb begin
        lq_in = 0; lq_out = 0;
        for (int i = 0; i < iwd; i++) if (reg_bundle[i].opid[15] & reg_bundle[i].ldid[7]) lq_in++;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15] & com_bundle[i].ldid[7]) lq_out++;
    end
    always_comb begin
        /* this forwarding only used for checking now, there may be more use */
        lq_chck_fwd = lq_chck;
        for (int i = 0; i < mwd; i++)
            if (ck_resp[i][7:4] == 4'b1110) lq_chck_fwd[$clog2(lqsz)'(ck_resp[i])] = ck_rslt[i];
    end
    always_ff @(posedge clk) if (rst | flush)
            {lq_valid, lq_trans, lq_rsrv, lq_aqrl, lq_pgft, lq_misa, lq_accsd, lq_chck, lq_miss, lq_fail} <= 0;
        else begin
            /* virtual address calculated */
            for (int i = 0; i < iwd; i++) if (req_load[i].opid[15] & req_load[i].ldid[7]) begin
                lq_valid[$clog2(lqsz)'(req_load[i].ldid)] <= 1;
                lq_rsrv [$clog2(lqsz)'(req_load[i].ldid)] <= func_load[i].rsrv;
                lq_aqrl [$clog2(lqsz)'(req_load[i].ldid)] <= func_load[i].aqrl;
                if (func_load[i].bits[1:0] == 2'b00 & 0 |
                    func_load[i].bits[1:0] == 2'b01 & lq_vadd_wvalue[i][0] |
                    func_load[i].bits[1:0] == 2'b10 & |lq_vadd_wvalue[i][1:0] |
                    func_load[i].bits[1:0] == 2'b11 & |lq_vadd_wvalue[i][2:0]) begin
                    lq_misa [$clog2(sqsz)'(req_load[i].ldid)] <= 1;
                    lq_trans[$clog2(sqsz)'(req_load[i].ldid)] <= 1;
                    lq_accsd[$clog2(sqsz)'(req_load[i].ldid)] <= 1;
                end
            end
            /* translate load entries */
            for (int i = 0; i < mwd; i++) if (dt_resp[i][7:4] == 4'b1100) begin
                lq_trans[$clog2(lqsz)'(dt_resp[i])] <= 1;
                /* load permission:  -A----RV */
                if ((dt_perm[i] | 8'b01000011) != dt_perm[i]) begin
                    lq_pgft [$clog2(sqsz)'(dt_resp[i])] <= 1;
                    lq_accsd[$clog2(sqsz)'(dt_resp[i])] <= 1;
                end
            end
            /* check relevance */
            for (int i = 0; i < mwd; i++) if (ck_resp[i][7:4] == 4'b1110) begin
                lq_chck[$clog2(lqsz)'(ck_resp[i])] <= ck_rslt[i];
                if (ck_forw[i][64]) lq_accsd[$clog2(lqsz)'(ck_resp[i])] <= 1;
            end
            /* access entries */
            for (int i = 0; i < mwd; i++) begin
                if (dc_resp[i][7:5] == 3'b111 & dc_miss[i][7:5] != 3'b111) begin
                    for (int j = 0; j < lqsz; j++) if (dc_resp[i] == lq_miss[j]) lq_miss[j] <= 0;
                    if (dc_resp[i][7:4] == 4'b1110) lq_accsd[$clog2(lqsz)'(dc_resp[i])] <= 1; // load entry
                end
                if (dc_resp[i][7:4] == 4'b1110 & dc_miss[i][7:5] == 3'b111) // cache miss
                    lq_miss[$clog2(lqsz)'(dc_resp[i])] <= dc_miss[i];
            end
            /* output execution bundles */
            for (int i = 0; i < ewd; i++) if (exe_bundle[i].opid[15] & exe_bundle[i].ldid[7] & claim[i])
                lq_valid[$clog2(lqsz)'(exe_bundle[i].ldid)] <= 0;
            /* relevance recheck */
            for (int i = 0; i < lqsz; i++) if (lq_chck_fwd[i] == 2'b10) // need recheck
                for (int j = 0; j < mwd; j++)
                    if (dt_resp[j][7:4] == 4'b1101 & // store address
                            $clog2(sqsz)'(dt_resp[j]) - sq_front < lq_stid[i] - sq_front |
                        dt_resp[j][7:4] == 4'b1100 & // load address
                            $clog2(lqsz)'(dt_resp[j]) - lq_front < $clog2(lqsz)'(i) - lq_front
                    ) if (dt_padd[j][63:3] == lq_padd[i][63:3]|                                  // same address
                            dt_resp[j][7:4] == 4'b1101 & sq_aqrl[$clog2(sqsz)'(dt_resp[j])][1] | // acquire bit
                            dt_resp[j][7:4] == 4'b1100 & lq_aqrl[$clog2(lqsz)'(dt_resp[j])][1]
                        ) begin
                            lq_fail[i]  <= 1;
                            lq_valid[i] <= 1; // resend failed entry
                        end
            /* commit entries */
            for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15] & com_bundle[i].ldid[7]) begin
                lq_trans[$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_rsrv [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_aqrl [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_pgft [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_misa [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_accsd[$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_chck [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_miss [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
                lq_fail [$clog2(lqsz)'(com_bundle[i].ldid)] <= 0;
            end
        end
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++)
        if (dt_resp[i][7:4] == 4'b1100) lq_padd[$clog2(lqsz)'(dt_resp[i])] <= dt_padd[i];
    always_ff @(posedge clk) for (int i = 0; i < iwd; i++) if (lq_wena[i]) begin
        case (func_load[i].bits[1:0])
            2'b00: lq_strb[lq_waddr[i]] <= 8'b0000_0001 << lq_vadd_wvalue[i][2:0];
            2'b01: lq_strb[lq_waddr[i]] <= 8'b0000_0011 << lq_vadd_wvalue[i][2:0];
            2'b10: lq_strb[lq_waddr[i]] <= 8'b0000_1111 << lq_vadd_wvalue[i][2:0];
            2'b11: lq_strb[lq_waddr[i]] <= 8'b1111_1111 << lq_vadd_wvalue[i][2:0];
        endcase
        lq_stid[lq_waddr[i]] <= $clog2(sqsz)'(req_load[i].stid);
        lq_bits[lq_waddr[i]] <= func_load[i].bits;
    end
    always_ff @(posedge clk) if (rst | flush) lq_front <= 0; else lq_front <= lq_front + $clog2(lqsz)'(lq_out);

    /* reservation set */
    logic [63:0] lr_addr; // reservation address
    logic  [7:0] lr_strb; // reservation size, MSB is reserved bit
    always_ff @(posedge clk) if (rst | sc_succ | sc_fail) lr_strb <= 0;
        else for (int i = 0; i < cwd; i++)
            if (com_bundle[i].opid[15] & com_bundle[i].ldid[7]) // LR committed
                if (lq_rsrv[$clog2(lqsz)'(com_bundle[i].ldid)][0]) begin
                    lr_addr <= lq_padd[$clog2(lqsz)'(com_bundle[i].ldid)];
                    case (lq_bits[$clog2(lqsz)'(com_bundle[i].ldid)][1:0])
                        2'b00: lr_strb <= 8'b0000_0001 << lq_padd[$clog2(lqsz)'(com_bundle[i].ldid)][2:0];
                        2'b01: lr_strb <= 8'b0000_0011 << lq_padd[$clog2(lqsz)'(com_bundle[i].ldid)][2:0];
                        2'b10: lr_strb <= 8'b0000_1111 << lq_padd[$clog2(lqsz)'(com_bundle[i].ldid)][2:0];
                        2'b11: lr_strb <= 8'b1111_1111 << lq_padd[$clog2(lqsz)'(com_bundle[i].ldid)][2:0];
                    endcase
                end
    always_ff @(posedge clk) if (rst | flush | |sq_out) {sc_fail, sc_succ} <= 0;
        else if (sq_trans[sq_front] & sq_rsrv[sq_front][0] & ~sc_fail & ~sc_succ)
            if (~topldid[7] & topstid[7] & sq_front == $clog2(sqsz)'(topstid)) // store front at ROB front
                if (lr_addr[63:3] == sq_padd[sq_front][63:3] & lr_strb == (lr_strb | sq_strb[sq_front]))
                    sc_succ <= 1;
                else sc_fail <= 1;

    /* load-store relevance check */
    logic [mwd-1:0][$clog2(sqsz)-1:0] ck_stid; // store ID of checking operations
    logic [mwd-1:0]            [63:0] ck_padd; // physical address of checking operations
    logic [mwd-1:0]             [7:0] ck_strb; // strobe of checking operations
    logic [mwd-1:0]             [1:0] ck_aqrl; // acquire and release bits of checking operations
    always_comb for (int i = 0; i < mwd; i++) begin
        ck_stid[i] = lq_stid[$clog2(lqsz)'(lq_pos_chckd[i])];
        ck_padd[i] = lq_padd[$clog2(lqsz)'(lq_pos_chckd[i])];
        ck_strb[i] = lq_strb[$clog2(lqsz)'(lq_pos_chckd[i])];
        ck_aqrl[i] = lq_aqrl[$clog2(lqsz)'(lq_pos_chckd[i])];
        for (int j = 0; j < mwd; j++) // do DTLB response forwarding
            if (dt_resp[j][7:4] == 4'b1100 & dt_resp[j][3:0] == 4'($clog2(lqsz)'(lq_pos_chckd[i])))
                ck_padd[i] = dt_padd[j];
    end
    always_comb lq_succ = lq_accsd[lq_front] &
        lq_chck[lq_front] == 2'b10 & ~lq_fail[lq_front] & lq_stid[lq_front] == sq_front;
    /* relevance and consistency check */
    logic [mwd-1:0] [1:0] rslt;
    logic [mwd-1:0][64:0] forw;
    logic [mwd-1:0] [2:0] bits;
    logic uncertain;
    always_comb for (int i = 0; i < mwd; i++) begin
        /* result encoding:
         *   2'b00: unchecked
         *   2'b01: unable to be accessed before previous operations
         *   2'b10: able to be accessed but need recheck
         *   2'b11: able to be accessed and need no recheck
         */
        rslt[i] = 2'b11;
        forw[i] = 0;
        bits[i] = 0;
        uncertain = 0;
        for (int j = 0; j < sqsz; j++) // find previous store operations
            if ($clog2(sqsz)'(j) < ck_stid[i] - sq_front)
                /* when SQ is full, SQ index may be same for load instructions those
                    before all store instructions and those after all instructions,
                    so that there should be one entry to be left for avoidance of this,
                    and this can be limited in decoder */
                if (~sq_trans_fwd[32'(sq_front) + j]) uncertain = 1;
                else if (sq_padd_fwd[32'(sq_front) + j][63:3] == ck_padd[i][63:3])
                    if (~|(~sq_strb[32'(sq_front) + j] & ck_strb[i]) & ~sq_rsrv[32'(sq_front) + j][0]) begin
                        /* able to cover and unconditionally store */
                        rslt[i] = 'b11;
                        bits[i] = lq_bits[$clog2(lqsz)'(lq_pos_chckd[i])];
                        forw[i] = {1'b1, sq_wdat[32'(sq_front) + j] >> (6'(ck_padd[i][2:0]) << 3)};
                    end else {forw[i], rslt[i]} = 'b01;
        for (int j = 0; j < lqsz; j++) // find previous load operations
            if ($clog2(lqsz)'(j) < $clog2(lqsz)'(lq_pos_chckd[i]) - lq_front)
                if (~lq_trans[32'(lq_front) + j]) uncertain = 1;
                else if (lq_padd[32'(lq_front) + j][63:3] == ck_padd[i][63:3])
                    {forw[i], rslt[i]} = 'b01; // CoRR
        if (uncertain & rslt[i] == 'b11) rslt[i] = 'b10; // succeeding untranslated entries
        if (ck_aqrl[i][0])               rslt[i] = 'b01; // release bit
        for (int j = 0; j < sqsz; j++)                   // acquire bit
            if ($clog2(sqsz)'(j) < ck_stid[i] - sq_front) if (sq_aqrl[32'(sq_front) + j][1]) rslt[i] = 'b01;
    end
    always_ff @(posedge clk) if (rst | flush) ck_resp <= 0;
        else for (int i = 0; i < mwd; i++)
            if (lq_pos_chckd[i][$clog2(lqsz)]) begin
                ck_resp[i] <= {3'b111, 1'b0, 4'($clog2(lqsz)'(lq_pos_chckd[i]))};
                ck_rslt[i] <= rslt[i];
                ck_bits[i] <= bits[i];
                ck_forw[i][64] <= forw[i][64];
                case (bits[i])
                    3'b000: ck_forw[i][63:0] <= {{56{forw[i] [7]}}, forw[i] [7:0]};
                    3'b100: ck_forw[i][63:0] <= {            56'd0, forw[i] [7:0]};
                    3'b001: ck_forw[i][63:0] <= {{48{forw[i][15]}}, forw[i][15:0]};
                    3'b101: ck_forw[i][63:0] <= {            48'd0, forw[i][15:0]};
                    3'b010: ck_forw[i][63:0] <= {{32{forw[i][31]}}, forw[i][31:0]};
                    3'b110: ck_forw[i][63:0] <= {            32'd0, forw[i][31:0]};
                    default: ck_forw[i][63:0] <= forw[i][63:0];
                endcase
            end else ck_resp[i] <= 0;

    /* MMU interface */
    logic [31:0] dt_num, dc_num; // DTLB/DCACHE output number
    always_comb next_front = sq_front + $clog2(sqsz)'(sq_out);
    always_comb begin
        csr_rqst = 0; csr_func = 0; csr_addr = 0; csr_wdat = 0;
        if (sq_csr[sq_front] & ~nextldid[7] & nextstid[7] & sq_front == $clog2(sqsz)'(nextstid)) begin
            csr_rqst = ~sq_accsd[sq_front];
            csr_func = sq_strb[sq_front][2:0];
            csr_addr = sq_vadd_rvalue[mwd][11:0];
            csr_wdat = sq_wdat[sq_front];
        end
        if (flush) csr_rqst = 0;
    end
    always_comb begin
        dt_rqst = 0; dt_vadd = 0; dt_num = 0;
        for (int i = 0; i < mwd; i++) if (sq_pos_trans[i][$clog2(sqsz)]) begin // untranslated entry in SQ
            if (dt_num >= mwd) break;
            dt_rqst[i] = {3'b110, 1'b1, 4'(sq_pos_trans[i][$clog2(sqsz)-1:0])};
            dt_vadd[i] = sq_vadd_rvalue[i];
            dt_num++;
        end
        for (int i = 0; i < mwd; i++) if (lq_pos_trans[i][$clog2(lqsz)]) begin // untranslated entry in LQ
            if (dt_num >= mwd) break;
            dt_rqst[i] = {3'b110, 1'b0, 4'(lq_pos_trans[i][$clog2(lqsz)-1:0])};
            dt_vadd[i] = lq_vadd_rvalue[i];
            dt_num++;
        end
        if (flush) dt_rqst = 0;
    end
    always_comb begin
        dc_rqst = 0; dc_addr = 0; dc_strb = 0; dc_wdat = 0; dc_num = 0;
        if (~nextldid[7] & nextstid[7] & next_front == $clog2(sqsz)'(nextstid)) begin
            if (sq_trans[next_front] & sq_miss[next_front][7:5] != 3'b111 & ~sq_accsd[next_front]) begin
                dc_rqst[0] = {3'b111, 1'b1, 4'(next_front)};
                dc_addr[0] = sq_padd[next_front];
                dc_strb[0] = sq_strb[next_front];
                dc_wdat[0] = sq_wdat[next_front];
                dc_num = 1;
            end
            for (int i = 0; i < mwd; i++) // do DTLB response forwarding
                if (dt_resp[i][7:4] == 4'b1101 & dt_resp[i][3:0] == 4'(next_front) &
                    (dt_perm[i] | 8'b11000101) == dt_perm[i]) begin
                    dc_rqst[0] = {3'b111, 1'b1, 4'(next_front)};
                    dc_addr[0] = dt_padd[i];
                    dc_strb[0] = sq_strb[next_front];
                    dc_wdat[0] = sq_wdat[next_front];
                    dc_num = 1;
                end
        end
        if (sq_rsrv[next_front][0] & (~sc_succ | |sq_out)) {dc_num, dc_rqst[0]} = 0;
        for (int i = 0; i < mwd; i++) // cancel request when responsed
            if (dc_resp[i][7:4] == 4'b1111 & dc_resp[i][3:0] == 4'(sq_front)) {dc_num, dc_rqst[0]} = 0;
        for (int i = 0; i < mwd; i++) if (lq_pos_accsd[i][$clog2(lqsz)]) begin // LQ entry to access
            if (dc_num >= mwd) break;
            dc_rqst[dc_num] = {3'b111, 1'b0, 4'(lq_pos_accsd[i][$clog2(lqsz)-1:0])};
            dc_addr[dc_num] = lq_padd[$clog2(lqsz)'(lq_pos_accsd[i])];
            dc_strb[dc_num] = 0;
            dc_wdat[dc_num] = 0;
            dc_num++;
        end
        if (flush) dc_rqst = 0;
    end
    always_comb dc_flsh = flush;

    /* arbitrate execution results */
    logic store_resp; // indicating a store response with data
    always_comb ready = 1;
    always_comb store_resp = dc_resp[0][7:4] == 4'b1111 & dc_miss[0][7:5] != 3'b111;
    always_comb begin
        exe_bundle = 0; sq_exe = 0; lq_exe = 0;
        if (sq_valid[sq_front] & (sq_accsd[sq_front] | store_resp)) begin
            exe_bundle[0]       = sq_rvalue;
            exe_bundle[0].prdv  = sq_rdat_rvalue;
            exe_bundle[0].flush = sq_flush[sq_front];
            if (store_resp) exe_bundle[0].prdv = sq_rdat_ext; // do forwarding
            if (sq_pgft[sq_front]) exe_bundle[0].cause = {2'b10, sq_csr[sq_front] ? 6'd2 : 6'd15};
            if (sq_misa[sq_front]) exe_bundle[0].cause = {2'b10, 6'd6};
            sq_exe = 1;
        end
        for (int i = 0; i < ewd; i++) if (lq_pos_exect[i][$clog2(lqsz)]) begin
            if (sq_exe + lq_exe >= ewd) break;
            exe_bundle[32'(sq_exe) + 32'(lq_exe)]        = lq_rvalue[i];
            exe_bundle[32'(sq_exe) + 32'(lq_exe)].specul = lq_chck[$clog2(lqsz)'(lq_pos_exect[i])] == 2'b10;
            exe_bundle[32'(sq_exe) + 32'(lq_exe)].prdv   = lq_rdat_rvalue[i];
            for (int j = 0; j < mwd; j++) /* do forwarding */
                if (ck_resp[j][7:4] == 4'b1110 & ck_forw[j][64] &
                        lq_raddr[i] == $clog2(lqsz)'(ck_resp[j])) begin
                    exe_bundle[32'(sq_exe) + 32'(lq_exe)].prdv   = ck_forw[j][63:0];
                    exe_bundle[32'(sq_exe) + 32'(lq_exe)].specul = ck_rslt[j] == 2'b10;
                end else if (dc_resp[j][7:4] == 4'b1110 & dc_miss[j][7:5] != 3'b111 &
                        lq_raddr[i] == $clog2(lqsz)'(dc_resp[j]))
                    exe_bundle[32'(sq_exe) + 32'(lq_exe)].prdv = lq_rdat_wvalue[j];
            if ($clog2(lqsz)'(lq_pos_exect[i]) == lq_front & lq_succ)
                exe_bundle[32'(sq_exe) + 32'(lq_exe)].specul = 0;
            if (lq_fail[$clog2(lqsz)'(lq_pos_exect[i])])
                exe_bundle[32'(sq_exe) + 32'(lq_exe)].retry = 1;
            if (lq_pgft[$clog2(lqsz)'(lq_pos_exect[i])])
                if (lq_rsrv[$clog2(lqsz)'(lq_pos_exect[i])][1])
                    exe_bundle[32'(sq_exe) + 32'(lq_exe)].cause = {2'b10, 6'd15};
                else exe_bundle[32'(sq_exe) + 32'(lq_exe)].cause = {2'b10, 6'd13};
            if (lq_misa[$clog2(lqsz)'(lq_pos_exect[i])])
                exe_bundle[32'(sq_exe) + 32'(lq_exe)].cause = {2'b10, 6'd4};
            lq_exe++;
        end
    end
endmodule
