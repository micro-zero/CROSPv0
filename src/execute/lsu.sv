/**
 * lsu.sv:
 *   Load-store unit. It also handles CSR instructions.
 */

`include "types.sv"
import types::*;

module lsu #(
    parameter iwd,   // issue width
    parameter ewd,   // execution width
    parameter cwd,   // commit width
    parameter mwd,   // memory access width
    parameter lqsz,  // load queue size
    parameter sqsz,  // store queue size
    parameter opsz   // operation ID size
)(
    input  logic clk,
    input  logic rst,
    output logic [2*mwd-1:0][15:0] lsu_safe,  // already safe operation ID
    output logic [2*mwd-1:0][15:0] lsu_unsf,  // unsafe because fo missing
    input  logic            [15:0] top_opid,  // top operation ID
    input  logic            [15:0] saf_opid,  // next safe operation ID
    input  red_bundle_t           red_bundle, // redirect bundle
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
    /* MMU flush interface */
    output logic [255:0] fl_data, // data request flush bitmap
    input  logic [255:0] fl_btmp, // flush bitmap
    /* DTLB interface */
    output logic [mwd-1:0] [7:0] dt_rqst, // DTLB request ID
    output logic [mwd-1:0][63:0] dt_vadd, // DTLB response ID
    input  logic [mwd-1:0] [7:0] dt_resp, // DTLB virtual address
    input  logic [mwd-1:0] [7:0] dt_perm, // permission for request
    input  logic [mwd-1:0][63:0] dt_padd, // DTLB physical address
    /* DCACHE interface */
    output logic [mwd-1:0] [7:0] dc_rqst, // DCACHE request ID
    output logic [mwd-1:0][63:0] dc_addr, // DCACHE request address
    output logic [mwd-1:0] [7:0] dc_strb, // DCACHE write strobe
    output logic [mwd-1:0][63:0] dc_wdat, // DCACHE write data
    input  logic [mwd-1:0] [7:0] dc_resp, // DCACHE response
    input  logic [mwd-1:0] [7:0] dc_miss, // DCACHE miss signal
    input  logic [mwd-1:0][63:0] dc_rdat  // DCACHE read data
);
    /* utilities */
    `include "pma.sv"
    function logic succeed(input logic [15:0] opid);
        succeed = red_bundle.opid[15] & opid[15] &
            $clog2(opsz)'(opid)            - $clog2(opsz)'(red_bundle.topid) >=
            $clog2(opsz)'(red_bundle.opid) - $clog2(opsz)'(red_bundle.topid) + $clog2(opsz)'(1);
    endfunction
    /* see description of DTLB and DCACHE ID in "mmu.sv" */
    function logic isdts(input logic [7:0] id); isdts = id[7:4] == 4'b1101; endfunction
    function logic isdcs(input logic [7:0] id); isdcs = id[7:4] == 4'b1111; endfunction
    function logic isdtl(input logic [7:0] id); isdtl = id[7:4] == 4'b1100; endfunction
    function logic isdcl(input logic [7:0] id); isdcl = id[7:4] == 4'b1110; endfunction
    logic [7:0] dts[sqsz-1:0], dcs[sqsz-1:0], dtl[lqsz-1:0], dcl[lqsz-1:0]; // request ID constant
    always_comb for (int i = 0; i < sqsz; i++) dts[i] = {3'b110, 1'b1, 4'(i)};
    always_comb for (int i = 0; i < sqsz; i++) dcs[i] = {3'b111, 1'b1, 4'(i)};
    always_comb for (int i = 0; i < lqsz; i++) dtl[i] = {3'b110, 1'b0, 4'(i)};
    always_comb for (int i = 0; i < lqsz; i++) dcl[i] = {3'b111, 1'b0, 4'(i)};

    /* request selector */
    reg_bundle_t [ewd-1:0] req_load, req_store;   // requests of load/store operation
    lsu_funct_t  [ewd-1:0] func_load, func_store; // function code
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
            if (reg_bundle[i].opid[15] & reg_bundle[i].stid[7]) begin
                req_store[num_store] = reg_bundle[i]; // select store requests and flatten them
                num_store++;
            end
    end
    always_comb for (int i = 0; i < ewd; i++) func_load [i] = $bits(lsu_funct_t)'(req_load [i].funct);
    always_comb for (int i = 0; i < ewd; i++) func_store[i] = $bits(lsu_funct_t)'(req_store[i].funct);

    /* execution queue */
    localparam eqsz = 2 * (1 << $clog2(ewd));
    logic [$clog2(eqsz)-1:0] eq_front;
    logic [$clog2(eqsz):0] eq_num, eq_in, eq_out;
    logic [ewd-1:0][$clog2(eqsz)-1:0] eq_raddr, eq_waddr;
    logic [ewd-1:0]                   eq_wena;
    exe_bundle_t [ewd-1:0] eq_rvalue, eq_wvalue;
    logic [eqsz-1:0][15:0] eq_opid;   // operation ID of each entry
    logic [eqsz-1:0]       eq_bubble; // bubble marks
    mwpram #(.width($bits(exe_bundle_t)), .depth(eqsz), .rports(ewd), .wports(ewd))
        eq_inst(.clk(clk), .rst(rst), .raddr(eq_raddr), .rvalue(eq_rvalue),
            .waddr(eq_waddr), .wvalue(eq_wvalue), .wena(eq_wena));
    always_comb for (int i = 0; i < ewd; i++) eq_raddr[i] = eq_front + $clog2(eqsz)'(i);
    always_comb for (int i = 0; i < ewd; i++) eq_waddr[i] = eq_raddr[i] + $clog2(eqsz)'(eq_num);
    always_comb for (int i = 0; i < ewd; i++) eq_wena [i] = i < 32'(eq_in);
    always_ff @(posedge clk) if (rst) eq_opid <= 0;
        else for (int i = 0; i < ewd; i++) if (eq_wena[i]) eq_opid[eq_waddr[i]] <= eq_wvalue[i].opid;
    always_ff @(posedge clk) if (rst) eq_bubble <= 0; else begin
        for (int i = 0; i < eqsz; i++) if (succeed(eq_opid[i])) eq_bubble[i] <= 1;
        for (int i = 0; i < ewd; i++) if (eq_wena[i]) eq_bubble[eq_waddr[i]] <= 0;
    end
    always_ff @(posedge clk) if (rst) eq_front <= 0; else eq_front <= eq_front + $clog2(eqsz)'(eq_out);
    always_ff @(posedge clk) if (rst) eq_num <= 0; else eq_num <= eq_num + eq_in - eq_out;

    /* page fault function:
     *   parameter `perm` is the requested permission,
     *     - permission bits:     DAGUXWRV
     *     - load  permission: 8'b01000011
     *     - store permission: 8'b11000101
     *     - exec  permission: 8'b01001001
     *   permission is satisfied when page permission covers the request */
    logic [mwd-1:0] stpf, ldpf;
    function logic [mwd-1:0] pf(input logic [7:0] req);
        for (int i = 0; i < mwd; i++) pf[i] = (dt_perm[i] | req) != dt_perm[i];
    endfunction
    always_comb stpf = pf(8'b11000101);
    always_comb ldpf = pf(8'b01000011);

    /* store queue */
    logic [$clog2(sqsz)-1:0] sq_front, next_front;           // store queue front index
    logic [$clog2(sqsz):0] sq_in, sq_out;                    // store queue numbers
    logic [sqsz-1:0][$clog2(sqsz)-1:0] sq_index;             // store index related to front
    logic [sqsz-1:0] sq_avalid, sq_dvalid;                   // address and write data valid entry
    logic [sqsz-1:0] sq_trans, sq_trans_fwd;                 // translated entry
    logic [sqsz-1:0] sq_csr, sq_fence;                       // CSRRW and fence entry
    logic [sqsz-1:0] sq_accsd, sq_flush;                     // accessed and flush bit of front entry
    logic [sqsz-1:0] sq_to_trans;                            // ready to be translated
    logic [sqsz-1:0] sq_to_accsd, sq_to_exect;               // ready to be accessed and executed
    logic [sqsz-1:0] sq_to_trans_off;                        // forwarded translated bits with offset
    logic [mwd-1:0][$clog2(sqsz):0] sq_pos_trans;            // positions to be translated
    logic          [$clog2(sqsz):0] sq_pos_accsd;            // positions to be accessed
    logic [ewd-1:0][$clog2(sqsz):0] sq_pos_exect;            // positions to be executed
    logic [mwd-1:0][$clog2(sqsz):0] sq_pos_trans_off;        // positions to be translated with offset
    logic [sqsz-1:0] [7:0] sq_miss;                          // miss index
    logic [sqsz-1:0]       sq_pgft, sq_misa;                 // page fault and misalignment bits of store queue
    logic [sqsz-1:0][15:0] sq_opid;                          // operatio ID of store queue
    logic [sqsz-1:0] [1:0] sq_rsrv;                          // reservation bits of store queue
    logic [sqsz-1:0] [1:0] sq_aqrl;                          // acquire and release bits of store queue
    logic [sqsz-1:0][63:0] sq_padd, sq_padd_fwd;             // physical address part of store queue
    logic [sqsz-1:0] [2:0] sq_bits;                          // functional bits of store queue
    logic [sqsz-1:0] [7:0] sq_strb;                          // strobe part of store queue
    logic [sqsz-1:0][63:0] sq_wdat;                          // write data part of store queue
    logic        [ewd-1:0][$clog2(sqsz)-1:0] sq_raddr;       // store queue read index
    logic        [ewd-1:0][$clog2(sqsz)-1:0] sq_waddr;       // store queue write index
    exe_bundle_t [ewd-1:0]                   sq_rvalue;      // store queue read value
    exe_bundle_t [ewd-1:0]                   sq_wvalue;      // store queue write value
    logic        [ewd-1:0]                   sq_wena;        // store queue write enable
    logic        [mwd-1:0][$clog2(sqsz)-1:0] sq_vadd_raddr;  // virtual address read index
    logic        [mwd-1:0]            [63:0] sq_vadd_rvalue; // virtual address read value
    logic        [ewd-1:0]            [63:0] sq_vadd_wvalue; // virtual address write value
    logic        [ewd-1:0]            [63:0] sq_rdat_rvalue; // read data read value
    logic                 [$clog2(sqsz)-1:0] sq_rdat_waddr;  // write data read address
    logic                                    sq_rdat_wena;   // read data write enable
    logic                             [63:0] sq_rdat_wvalue; // read data write value
    logic sc_fail, sc_succ;                                  // SC fail and success signal
    logic [63:0] sq_rdat_ext;                                // sign-extended DCACHE read data
    mwpram #(.width($bits(exe_bundle_t)), .depth(sqsz), .rports(ewd), .wports(ewd))
        sq_inst(.clk(clk), .rst(rst), .wena(sq_wena),
            .raddr(sq_raddr), .rvalue(sq_rvalue), .waddr(sq_waddr), .wvalue(sq_wvalue));
    mwpram #(.width(64), .depth(sqsz), .rports(mwd), .wports(ewd))
        sq_vadd_inst(.clk(clk), .rst(rst), .wena(sq_wena),
            .raddr(sq_vadd_raddr), .rvalue(sq_vadd_rvalue), .waddr(sq_waddr), .wvalue(sq_vadd_wvalue));
    mwpram #(.width(64), .depth(sqsz), .rports(ewd), .wports(1))
        sq_rdat_inst(.clk(clk), .rst(rst), .wena(sq_rdat_wena),
            .raddr(sq_raddr), .rvalue(sq_rdat_rvalue), .waddr(sq_rdat_waddr), .wvalue(sq_rdat_wvalue));
    firstk #(.width(sqsz), .k(mwd)) pos_sq_trans_inst(.bits(sq_to_trans_off), .pos(sq_pos_trans_off));
    firstk #(.width(sqsz), .k(1))   pos_sq_accsd_inst(.bits(sq_to_accsd), .pos(sq_pos_accsd));
    firstk #(.width(sqsz), .k(ewd)) pos_sq_exect_inst(.bits(sq_to_exect), .pos(sq_pos_exect));
    always_comb for (int i = 0; i < sqsz; i++) sq_index[i] = sq_front + $clog2(sqsz)'(i);
    always_comb begin
        sq_to_trans = sq_avalid & ~sq_trans & ~sq_csr & ~sq_fence;
        sq_to_exect = sq_avalid & sq_accsd;
        for (int i = 0; i < sqsz; i++) sq_to_accsd[i] = sq_avalid[i] & sq_trans[i] & ~sq_accsd[i] & ~|sq_miss[i];
        /* do some forwarding */
        for (int i = 0; i < mwd; i++) if (isdts(dt_resp[i])) sq_to_trans[$clog2(sqsz)'(dt_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (isdts(dt_resp[i]) & ~stpf[i])
            sq_to_accsd[$clog2(sqsz)'(dt_resp[i])] = 1;
        for (int i = 0; i < mwd; i++) if (isdcs(dc_resp[i])) sq_to_accsd[$clog2(sqsz)'(dc_resp[i])] = 0;
        for (int i = 0; i < mwd; i++) if (isdcs(dc_resp[i]) & ~|dc_miss[i])
            sq_to_exect[$clog2(sqsz)'(dc_resp[i])] = 1;
        /* store access additional condition */
        sq_to_accsd &= sq_dvalid;                                                // data valid
        for (int i = 0; i < sqsz; i++) sq_to_accsd[i] &= sq_opid[i] == saf_opid; // ROB confirmation
        for (int i = 0; i < sqsz; i++) sq_to_exect[i] &= ~succeed(sq_opid[i]);   // not being flushed
        for (int i = 0; i < sqsz; i++) if (sq_rsrv[i][0])
            sq_to_accsd[i] &= sc_succ & $clog2(sqsz)'(i) == sq_front; // front SC success
        for (int i = 0; i < mwd; i++)                                 // unsafe cycle
            if (|dc_resp[i] & |dc_miss[i] | |ck_resp[i] & ck_rslt[i] != 2'b11) sq_to_accsd = 0;
        for (int i = 0; i < 2 * mwd; i++) if (lsu_unsf[i][15]) sq_to_accsd = 0;
        /* offset is used to make older operations higher priority */
        for (int i = 0; i < sqsz; i++) sq_to_trans_off[i] = sq_to_trans[sq_index[i]];
    end
    always_comb for (int i = 0; i < mwd; i++)
        sq_pos_trans[i] = {sq_pos_trans_off[i][$clog2(sqsz)], sq_index[$clog2(sqsz)'(sq_pos_trans_off[i])]};
    always_comb for (int i = 0; i < ewd; i++) sq_raddr[i]      = $clog2(sqsz)'(sq_pos_exect[i]);
    always_comb for (int i = 0; i < mwd; i++) sq_vadd_raddr[i] = $clog2(sqsz)'(sq_pos_trans[i]);
    always_comb for (int i = 0; i < ewd; i++) begin
        /* store queue common part with execution bundle */
        sq_waddr [i] = $clog2(sqsz)'(req_store[i].stid);
        sq_wena  [i] = i < 32'(sq_in);
        sq_wvalue[i] = 0;
        sq_wvalue[i].opid  = req_store[i].opid;
        sq_wvalue[i].brid  = req_store[i].brid;
        sq_wvalue[i].ldid  = req_store[i].ldid;
        sq_wvalue[i].stid  = req_store[i].stid;
        sq_wvalue[i].delta = req_store[i].delta;
        sq_wvalue[i].pat   = req_store[i].pat;
        sq_wvalue[i].pc    = req_store[i].pc;
        sq_wvalue[i].npc   = req_store[i].base[63:0] + 64'(req_store[i].delta);
        sq_wvalue[i].prda  = req_store[i].prda[1];
        sq_wvalue[i].tval  = func_store[i].csr ? 64'(req_store[i].ir) : req_store[i].prs[0] + req_store[i].b[63:0];
        sq_wvalue[i].mem   = func_store[i].csr ? 0 : ~func_store[i].fence;
        sq_wvalue[i].csr   = func_store[i].csr;
        /* store queue virtual address part */
        sq_vadd_wvalue[i] = req_store[i].prs[0] + req_store[i].b[63:0];
    end
    always_comb sq_rdat_waddr = csr_rqst | sc_fail ? sq_front : $clog2(sqsz)'(dc_resp[0]);
    always_comb sq_rdat_wena  = csr_rqst | sc_fail | isdcs(dc_resp[0]);
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
        for (int i = 0; i < ewd; i++) if (req_store[i].opid[15]) sq_in++;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15] & com_bundle[i].stid[7]) sq_out++;
    end
    always_comb begin
        /* this forwarding only used for checking now, there may be more use */
        sq_trans_fwd = sq_trans;
        sq_padd_fwd = sq_padd;
        for (int i = 0; i < mwd; i++)
            if (isdts(dt_resp[i])) begin
                sq_trans_fwd[$clog2(sqsz)'(dt_resp[i])] = 1;
                sq_padd_fwd[$clog2(sqsz)'(dt_resp[i])] = dt_padd[i];
            end
    end
    always_ff @(posedge clk) if (rst)
            {sq_avalid, sq_dvalid, sq_csr, sq_fence, sq_flush, sq_trans,
             sq_accsd, sq_rsrv, sq_aqrl, sq_pgft, sq_misa, sq_miss} <= 0;
        else begin
            /* translate store entries */
            for (int i = 0; i < mwd; i++) if (isdts(dt_resp[i])) begin
                sq_trans[$clog2(sqsz)'(dt_resp[i])] <= 1;
                if (stpf[i]) begin
                    sq_pgft [$clog2(sqsz)'(dt_resp[i])] <= 1;
                    sq_accsd[$clog2(sqsz)'(dt_resp[i])] <= 1;
                end
            end
            /* access entries */
            for (int i = 0; i < mwd; i++) begin
                if (|dc_resp[i] & ~|dc_miss[i])
                    for (int j = 0; j < sqsz; j++) if (dc_resp[i] == sq_miss[j]) sq_miss[j] <= 0;
                if (isdcs(dc_resp[i]) & |dc_miss[i]) // cache miss
                    sq_miss[$clog2(sqsz)'(dc_resp[i])] <= fl_btmp[dc_miss[i]] ? 0 : dc_miss[i];
                if (isdcs(dc_resp[i]) & ~|dc_miss[i])
                    sq_accsd[$clog2(sqsz)'(dc_resp[i])] <= 1; // store entry
            end
            for (int i = 0; i < sqsz; i++) if (fl_btmp[sq_miss[i]]) sq_miss[i] <= 0;
            /* SC fails */
            if (sc_fail) sq_accsd[sq_front] <= 1;
            /* access CSR entries */
            if (csr_rqst) sq_accsd[sq_front] <= 1;
            if (csr_rqst) sq_flush[sq_front] <= csr_flsh;
            if (csr_rqst) sq_pgft[sq_front] <= csr_excp; // use `pgft` as CSR exception signal
            /* output execution bundles */
            for (int i = 0; i < ewd; i++)
                if (eq_wvalue[i].opid[15] & eq_wvalue[i].stid[7] & eq_wena[i]) begin
                    sq_avalid[$clog2(sqsz)'(eq_wvalue[i].stid)] <= 0;
                    sq_dvalid[$clog2(sqsz)'(eq_wvalue[i].stid)] <= 0;
                end
            /* commit entries */
            for (int i = 0; i < cwd; i++)
                if (com_bundle[i].opid[15] & com_bundle[i].stid[7]) begin
                    sq_trans[$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_pgft [$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_rsrv [$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_aqrl [$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_miss [$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_csr  [$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_fence[$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_accsd[$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_flush[$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                    sq_misa [$clog2(sqsz)'(com_bundle[i].stid)] <= 0;
                end
            /* flush requests */
            for (int i = 0; i < sqsz; i++) if (fl_data[dcs[i]])
                {sq_avalid[i], sq_dvalid[i], sq_csr[i], sq_fence[i], sq_flush[i], sq_trans[i],
                 sq_accsd[i], sq_rsrv[i], sq_aqrl[i], sq_pgft[i], sq_misa[i], sq_miss[i]} <= 0;
            /* virtual address calculated */
            for (int i = 0; i < ewd; i++) if (sq_wena[i]) begin
                sq_avalid[sq_waddr[i]] <= 1;
                sq_dvalid[sq_waddr[i]] <= ~req_store[i].prsb[1]; // data can be invalid
                sq_opid  [sq_waddr[i]] <= req_store[i].opid;
                sq_rsrv  [sq_waddr[i]] <= func_store[i].rsrv;
                sq_aqrl  [sq_waddr[i]] <= func_store[i].aqrl;
                if      (func_store[i].csr) sq_csr[sq_waddr[i]] <= 1;
                else if (func_store[i].fence) begin
                    sq_fence[sq_waddr[i]] <= 1;
                    sq_trans[sq_waddr[i]] <= 1;
                    sq_accsd[sq_waddr[i]] <= 1;
                end else if (func_store[i].bits[1:0] == 2'b00 & 0 |
                    func_store[i].bits[1:0] == 2'b01 & sq_vadd_wvalue[i][0] |
                    func_store[i].bits[1:0] == 2'b10 & |sq_vadd_wvalue[i][1:0] |
                    func_store[i].bits[1:0] == 2'b11 & |sq_vadd_wvalue[i][2:0]
                ) begin
                    sq_misa [sq_waddr[i]] <= 1;
                    sq_trans[sq_waddr[i]] <= 1;
                    sq_accsd[sq_waddr[i]] <= 1;
                end
            end
        end
    always_ff @(posedge clk) for (int i = 0; i < ewd; i++) if (sq_wena[i]) begin
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
    always_ff @(posedge clk) begin
        sq_padd <= sq_padd_fwd; // not forward CSR address
        for (int i = 0; i < ewd; i++) if (sq_wena[i] & func_store[i].csr)
            sq_padd[sq_waddr[i]] <= req_store[i].b[63:0];
    end
    always_ff @(posedge clk) if (rst) sq_front <= 0; else sq_front <= sq_front + $clog2(sqsz)'(sq_out);

    /* load queue */
    logic [$clog2(lqsz)-1:0] lq_front;                       // load queue front index
    logic [$clog2(lqsz):0] lq_in, lq_out;                    // load queue numbers
    logic [lqsz-1:0][$clog2(lqsz)-1:0] lq_index;             // LQ index related to front
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
    logic [lqsz-1:0][$clog2(sqsz)-1:0] lq_stid;              // previous store index of load entry
    logic [lqsz-1:0]            [63:0] lq_padd;              // physical address part of load queue
    logic [lqsz-1:0]             [1:0] lq_rsrv;              // reservation bits of load queue
    logic [lqsz-1:0]             [1:0] lq_aqrl;              // acquire and release bits of load queue
    logic [lqsz-1:0]                   lq_pgft, lq_misa;     // page fault and misalignment bits of load queue
    logic [lqsz-1:0]            [15:0] lq_opid;              // operatio ID of load queue
    logic [lqsz-1:0]             [7:0] lq_strb;              // strobe part of load queue
    logic [lqsz-1:0]             [2:0] lq_bits;              // functional bits of load queue
    logic [lqsz-1:0]                   lq_float;             // load to a floating-point register
    logic        [ewd-1:0][$clog2(lqsz)-1:0] lq_raddr;       // load queue read index
    logic        [ewd-1:0][$clog2(lqsz)-1:0] lq_waddr;       // load queue write index
    exe_bundle_t [ewd-1:0]                   lq_rvalue;      // load queue read value
    exe_bundle_t [ewd-1:0]                   lq_wvalue;      // load queue write value
    logic        [ewd-1:0]                   lq_wena;        // load queue write enable
    logic        [mwd-1:0][$clog2(lqsz)-1:0] lq_vadd_raddr;  // virtual address read index
    logic        [mwd-1:0]            [63:0] lq_vadd_rvalue; // virtual address read value
    logic        [ewd-1:0]            [63:0] lq_vadd_wvalue; // virtual address write value
    logic      [2*mwd-1:0][$clog2(lqsz)-1:0] lq_rdat_waddr;  // write data read address
    logic        [ewd-1:0]            [63:0] lq_rdat_rvalue; // read data read value
    logic      [2*mwd-1:0]                   lq_rdat_wena;   // read data write enable
    logic      [2*mwd-1:0]            [63:0] lq_rdat_wvalue; // read data write value
    logic        [mwd-1:0]             [7:0] ck_resp;        // relevance checking ID
    logic        [mwd-1:0]             [1:0] ck_rslt;        // relevance checking result
    logic        [mwd-1:0]            [64:0] ck_forw;        // forwarded value (MSB is valid bit)
    logic        [mwd-1:0]             [2:0] ck_bits;        // functional bits of relevance check
    mwpram #(.width($bits(exe_bundle_t)), .depth(lqsz), .rports(ewd), .wports(ewd))
        lq_inst(.clk(clk), .rst(rst), .wena(lq_wena),
            .raddr(lq_raddr), .rvalue(lq_rvalue), .waddr(lq_waddr), .wvalue(lq_wvalue));
    mwpram #(.width(64), .depth(lqsz), .rports(mwd), .wports(ewd))
        lq_vadd_inst(.clk(clk), .rst(rst), .wena(lq_wena),
            .raddr(lq_vadd_raddr), .rvalue(lq_vadd_rvalue), .waddr(lq_waddr), .wvalue(lq_vadd_wvalue));
    mwpram #(.width(64), .depth(lqsz), .rports(ewd), .wports(2*mwd))
        lq_rdat_inst(.clk(clk), .rst(rst), .wena(lq_rdat_wena),
            .raddr(lq_raddr), .rvalue(lq_rdat_rvalue), .waddr(lq_rdat_waddr), .wvalue(lq_rdat_wvalue));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_trans_inst(.bits(lq_to_trans_off), .pos(lq_pos_trans_off));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_chckd_inst(.bits(lq_to_chckd), .pos(lq_pos_chckd));
    firstk #(.width(lqsz), .k(mwd)) pos_lq_accsd_inst(.bits(lq_to_accsd), .pos(lq_pos_accsd));
    firstk #(.width(lqsz), .k(ewd)) pos_lq_exect_inst(.bits(lq_to_exect), .pos(lq_pos_exect));
    always_comb for (int i = 0; i < lqsz; i++) lq_index[i] = lq_front + $clog2(lqsz)'(i);
    always_comb begin
        lq_to_trans = lq_valid & ~lq_trans;
        for (int i = 0; i < lqsz; i++) lq_to_chckd[i] = lq_trans[i] & ~|lq_chck[i];
        for (int i = 0; i < lqsz; i++) lq_to_accsd[i] = lq_trans[i] & ~lq_accsd[i] & ~|lq_miss[i];
        for (int i = 0; i < lqsz; i++) lq_to_accsd[i] &= pma_i(lq_padd[i]) | lq_opid[i] == saf_opid;
        for (int i = 0; i < lqsz; i++) lq_to_exect[i] = lq_valid[i] & (lq_accsd[i] & lq_chck[i][1] | lq_fail[i]);
        /* do some forwarding */
        for (int i = 0; i < mwd; i++) begin
            if (isdtl(dt_resp[i]))                  lq_to_trans[$clog2(lqsz)'(dt_resp[i])] = 0;
            if (isdcl(ck_resp[i]))                  lq_to_chckd[$clog2(lqsz)'(ck_resp[i])] = 0;
            if (isdcl(dc_resp[i]))                  lq_to_accsd[$clog2(lqsz)'(dc_resp[i])] = 0;
            if (isdtl(dt_resp[i]) & ~ldpf[i])       lq_to_chckd[$clog2(lqsz)'(dt_resp[i])] = 1;
            if (isdcl(ck_resp[i]) & ck_forw[i][64]) lq_to_exect[$clog2(lqsz)'(ck_resp[i])] = 1;
            if (isdtl(dt_resp[i]) & ~ldpf[i])       lq_to_accsd[$clog2(lqsz)'(dt_resp[i])] = pma_i(dt_padd[i]);
            if (isdcl(dc_resp[i]) & ~|dc_miss[i])   lq_to_exect[$clog2(lqsz)'(dc_resp[i])] =
                lq_chck[$clog2(lqsz)'(dc_resp[i])][1] | dc_resp[i] == ck_resp[i] & ck_rslt[i][1];
        end
        /* some other conditions */
        for (int i = 0; i < lqsz; i++) lq_to_exect[i] &= ~succeed(lq_opid[i]); // not being flushed
        for (int i = 0; i < lqsz; i++) lq_to_trans_off[i] = lq_to_trans[lq_index[i]];
    end
    always_comb for (int i = 0; i < mwd; i++)
        lq_pos_trans[i] = {lq_pos_trans_off[i][$clog2(lqsz)], lq_index[$clog2(lqsz)'(lq_pos_trans_off[i])]};
    always_comb for (int i = 0; i < ewd; i++) lq_raddr[i] = $clog2(lqsz)'(lq_pos_exect[i]);
    always_comb for (int i = 0; i < mwd; i++) lq_vadd_raddr[i] = $clog2(lqsz)'(lq_pos_trans[i]);
    always_comb for (int i = 0; i < ewd; i++) begin
        /* load queue common part with execution bundle */
        lq_waddr [i] = $clog2(lqsz)'(req_load[i].ldid);
        lq_wena  [i] = i < 32'(lq_in);
        lq_wvalue[i] = 0;
        lq_wvalue[i].opid  = req_load[i].opid;
        lq_wvalue[i].brid  = req_load[i].brid;
        lq_wvalue[i].ldid  = req_load[i].ldid;
        lq_wvalue[i].stid  = req_load[i].stid;
        lq_wvalue[i].delta = req_load[i].delta;
        lq_wvalue[i].pat   = req_load[i].pat;
        lq_wvalue[i].pc    = req_load[i].pc;
        lq_wvalue[i].npc   = req_load[i].base[63:0] + 64'(req_load[i].delta);
        lq_wvalue[i].prda  = req_load[i].prda[1];
        lq_wvalue[i].tval  = req_load[i].prs[0] + req_load[i].b[63:0];
        /* load queue virtual address part */
        lq_vadd_wvalue[i] = req_load[i].prs[0] + req_load[i].b[63:0];
    end
    always_comb for (int i = 0; i < mwd; i++) begin
        lq_rdat_waddr [i] = $clog2(lqsz)'(dc_resp[i]);
        lq_rdat_wena  [i] = isdcl(dc_resp[i]);
        case (lq_bits[lq_rdat_waddr[i]])
            3'b000: lq_rdat_wvalue[i] = {{56{dc_rdat[i] [7]}}, dc_rdat[i] [7:0]};
            3'b100: lq_rdat_wvalue[i] = {               56'd0, dc_rdat[i] [7:0]};
            3'b001: lq_rdat_wvalue[i] = {{48{dc_rdat[i][15]}}, dc_rdat[i][15:0]};
            3'b101: lq_rdat_wvalue[i] = {               48'd0, dc_rdat[i][15:0]};
            3'b010: lq_rdat_wvalue[i] = {{32{dc_rdat[i][31]}}, dc_rdat[i][31:0]};
            3'b110: lq_rdat_wvalue[i] = {               32'd0, dc_rdat[i][31:0]};
            default: lq_rdat_wvalue[i] = dc_rdat[i];
        endcase
        if (lq_float[lq_rdat_waddr[i]] & lq_bits[lq_rdat_waddr[i]][1:0] == 2'b10)
            lq_rdat_wvalue[i][63:32] = -32'd1;
        lq_rdat_waddr [mwd + i] = $clog2(lqsz)'(ck_resp[i]);
        lq_rdat_wena  [mwd + i] = isdcl(ck_resp[i]) & ck_forw[i][64];
        lq_rdat_wvalue[mwd + i] = ck_forw[i][63:0];
    end
    always_comb begin
        lq_in = 0; lq_out = 0;
        for (int i = 0; i < ewd; i++) if (req_load[i].opid[15]) lq_in++;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15] & com_bundle[i].ldid[7]) lq_out++;
    end
    always_comb begin
        /* this forwarding only used for checking now, there may be more use */
        lq_chck_fwd = lq_chck;
        for (int i = 0; i < mwd; i++)
            if (isdcl(ck_resp[i])) lq_chck_fwd[$clog2(lqsz)'(ck_resp[i])] = ck_rslt[i];
    end
    always_ff @(posedge clk) if (rst)
            {lq_valid, lq_trans, lq_rsrv, lq_aqrl, lq_pgft,
             lq_misa, lq_accsd, lq_chck, lq_miss, lq_fail} <= 0;
        else begin
            /* translate load entries */
            for (int i = 0; i < mwd; i++) if (isdtl(dt_resp[i])) begin
                lq_trans[$clog2(lqsz)'(dt_resp[i])] <= 1;
                if (ldpf[i]) begin
                    lq_pgft [$clog2(lqsz)'(dt_resp[i])] <= 1;
                    lq_chck [$clog2(lqsz)'(dt_resp[i])] <= 2'b11;
                    lq_accsd[$clog2(lqsz)'(dt_resp[i])] <= 1;
                end
            end
            /* check relevance */
            for (int i = 0; i < mwd; i++) if (isdcl(ck_resp[i])) begin
                lq_chck[$clog2(lqsz)'(ck_resp[i])] <= ck_rslt[i];
                if (ck_forw[i][64]) lq_accsd[$clog2(lqsz)'(ck_resp[i])] <= 1;
            end
            /* access entries */
            for (int i = 0; i < mwd; i++) begin
                if (|dc_resp[i] & ~|dc_miss[i]) begin
                    for (int j = 0; j < lqsz; j++) if (dc_resp[i] == lq_miss[j]) lq_miss[j] <= 0;
                    if (isdcl(dc_resp[i])) lq_accsd[$clog2(lqsz)'(dc_resp[i])] <= 1; // load entry
                end
                if (isdcl(dc_resp[i]) & |dc_miss[i]) // cache miss
                    lq_miss[$clog2(lqsz)'(dc_resp[i])] <= fl_btmp[dc_miss[i]] ? 0 : dc_miss[i];
            end
            for (int i = 0; i < lqsz; i++) if (fl_btmp[lq_miss[i]]) lq_miss[i] <= 0;
            /* output execution bundles */
            for (int i = 0; i < ewd; i++) if (eq_wvalue[i].opid[15] & eq_wvalue[i].ldid[7] & eq_wena[i])
                lq_valid[$clog2(lqsz)'(eq_wvalue[i].ldid)] <= 0;
            /* relevance recheck */
            for (int i = 0; i < lqsz; i++) if (lq_chck_fwd[i] == 2'b10) // need recheck
                for (int j = 0; j < mwd; j++)
                    if (isdts(dt_resp[j]) & // store address
                            $clog2(sqsz)'(dt_resp[j]) - sq_front < lq_stid[i] - sq_front |
                        0 & isdtl(dt_resp[j]) & // load address
                            $clog2(lqsz)'(dt_resp[j]) - lq_front < $clog2(lqsz)'(i) - lq_front
                    ) if (dt_padd[j][63:3] == lq_padd[i][63:3]|                         // same address
                            isdts(dt_resp[j]) & sq_aqrl[$clog2(sqsz)'(dt_resp[j])][1] | // acquire bit
                            isdtl(dt_resp[j]) & lq_aqrl[$clog2(lqsz)'(dt_resp[j])][1]
                        ) begin
                            lq_fail[i]  <= 1;
                            lq_valid[i] <= 1; // resend failed entry
                        end
            for (int i = 0; i < lqsz; i++)
                /* todo: for some like with AQ/RL bits, it will also require at LQ front,
                need to consider this and distinguish them with normal address relevance
                stall when checking */
                if (lq_chck[i] == 2'b01 & lq_stid[i] == next_front) {lq_accsd[i], lq_chck[i]} <= 'b11;
            if (lq_accsd[lq_front] & lq_chck[lq_front] == 2'b10 & ~lq_fail[lq_front] & // speculation succeeds
                lq_stid[lq_front] == sq_front) {lq_valid[lq_front], lq_chck[lq_front]} <= 3'b111;
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
            /* flush requests */
            for (int i = 0; i < lqsz; i++) if (succeed(lq_opid[i]) | red_bundle.rollback)
                {lq_valid[i], lq_trans[i], lq_rsrv[i], lq_aqrl[i], lq_pgft[i],
                 lq_misa[i], lq_accsd[i], lq_chck[i], lq_miss[i], lq_fail[i]} <= 0;
            /* virtual address calculated */
            for (int i = 0; i < ewd; i++) if (lq_wena[i]) begin
                lq_valid[lq_waddr[i]] <= 1;
                lq_opid [lq_waddr[i]] <= req_load[i].opid;
                lq_rsrv [lq_waddr[i]] <= func_load[i].rsrv;
                lq_aqrl [lq_waddr[i]] <= func_load[i].aqrl;
                if (func_load[i].bits[1:0] == 2'b00 & 0 |
                    func_load[i].bits[1:0] == 2'b01 & lq_vadd_wvalue[i][0] |
                    func_load[i].bits[1:0] == 2'b10 & |lq_vadd_wvalue[i][1:0] |
                    func_load[i].bits[1:0] == 2'b11 & |lq_vadd_wvalue[i][2:0]) begin
                    lq_misa [lq_waddr[i]] <= 1;
                    lq_trans[lq_waddr[i]] <= 1;
                    lq_chck [lq_waddr[i]] <= 2'b11;
                    lq_accsd[lq_waddr[i]] <= 1;
                end
            end
        end
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++)
        if (isdtl(dt_resp[i])) lq_padd[$clog2(lqsz)'(dt_resp[i])] <= dt_padd[i];
    always_ff @(posedge clk) for (int i = 0; i < ewd; i++) if (lq_wena[i]) begin
        case (func_load[i].bits[1:0])
            2'b00: lq_strb[lq_waddr[i]] <= 8'b0000_0001 << lq_vadd_wvalue[i][2:0];
            2'b01: lq_strb[lq_waddr[i]] <= 8'b0000_0011 << lq_vadd_wvalue[i][2:0];
            2'b10: lq_strb[lq_waddr[i]] <= 8'b0000_1111 << lq_vadd_wvalue[i][2:0];
            2'b11: lq_strb[lq_waddr[i]] <= 8'b1111_1111 << lq_vadd_wvalue[i][2:0];
        endcase
        lq_stid [lq_waddr[i]] <= $clog2(sqsz)'(req_load[i].stid);
        lq_bits [lq_waddr[i]] <= func_load[i].bits;
        lq_float[lq_waddr[i]] <= func_load[i].float;
    end
    always_ff @(posedge clk) if (rst) lq_front <= 0; else lq_front <= lq_front + $clog2(lqsz)'(lq_out);

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
    always_ff @(posedge clk) if (rst | |sq_out) {sc_fail, sc_succ} <= 0;
        else if (sq_trans[sq_front] & sq_dvalid[sq_front] & sq_rsrv[sq_front][0] & ~sc_fail & ~sc_succ)
            if (sq_avalid[sq_front] & sq_opid[sq_front] == top_opid) // store front at ROB front
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
            if (isdtl(dt_resp[j]) & dt_resp[j][3:0] == 4'($clog2(lqsz)'(lq_pos_chckd[i])))
                ck_padd[i] = dt_padd[j];
    end
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
        for (int j = 0; j < sqsz; j++) if (~sq_fence[sq_index[j]] & ~sq_csr[sq_index[j]])
            if ($clog2(sqsz)'(j) < ck_stid[i] - sq_front) // find previous store operations
                /* when SQ is full, SQ index may be same for load instructions those
                    before all store instructions and those after all instructions,
                    so that there should be one entry to be left for avoidance of this,
                    and this can be limited in decoder */
                if (~sq_trans_fwd[sq_index[j]]) uncertain = 1;
                else if (sq_padd_fwd[sq_index[j]][63:3] == ck_padd[i][63:3] & |(sq_strb[sq_index[j]] & ck_strb[i]))
                    if (sq_dvalid[sq_index[j]] &               // data ready
                        ~sq_rsrv[sq_index[j]][0] &             // unconditionally store
                        ~|(~sq_strb[sq_index[j]] & ck_strb[i]) // able to cover load address
                    ) begin
                        rslt[i] = 2'b11;
                        bits[i] = lq_bits[$clog2(lqsz)'(lq_pos_chckd[i])];
                        forw[i] = {1'b1, sq_wdat[sq_index[j]] >> (6'(ck_padd[i][2:0]) << 3)};
                    end else rslt[i] = 2'b01;
        // for (int j = 0; j < lqsz; j++) // find previous load operations
        //     if ($clog2(lqsz)'(j) < $clog2(lqsz)'(lq_pos_chckd[i]) - lq_front)
        //         if (~lq_trans[lq_index[j]]) uncertain = 1;
        //         else if (lq_padd[lq_index[j]][63:3] == ck_padd[i][63:3]) rslt[i] = 2'b01; // CoRR
        if (uncertain & rslt[i] == 'b11) rslt[i] = 2'b10; // succeeding untranslated entries
        if (ck_aqrl[i][0])               rslt[i] = 2'b01; // release bit
        for (int j = 0; j < sqsz; j++)                    // acquire bit
            if ($clog2(sqsz)'(j) < ck_stid[i] - sq_front) if (sq_aqrl[sq_index[j]][1]) rslt[i] = 2'b01;
        if (rslt[i] == 2'b01) forw[i] = 0;
    end
    always_ff @(posedge clk) if (rst) ck_resp <= 0;
        else for (int i = 0; i < mwd; i++)
            if (lq_pos_chckd[i][$clog2(lqsz)]) begin
                ck_resp[i] <= dcl[$clog2(lqsz)'(lq_pos_chckd[i])];
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
                if (fl_data[dcl[$clog2(lqsz)'(lq_pos_chckd[i])]]) ck_resp[i] <= 0;
            end else ck_resp[i] <= 0;

    /* MMU interface */
    logic [31:0] dt_num, dc_num;  // DTLB/DCACHE output number
    logic [mwd-1:0][7:0] dc_sent; // DCACHE request ID sent and not received
    always_comb next_front = sq_index[$clog2(sqsz)'(sq_out)];
    always_comb begin
        csr_rqst = 0; csr_func = 0; csr_addr = 0; csr_wdat = 0;
        if (sq_csr[sq_front] & sq_avalid[sq_front] & sq_opid[sq_front] == top_opid) begin
            csr_rqst = ~sq_accsd[sq_front];
            csr_func = sq_strb[sq_front][2:0];
            csr_addr = sq_padd[sq_front][11:0];
            csr_wdat = sq_wdat[sq_front];
        end
        if (fl_data[dcs[sq_front]]) csr_rqst = 0;
    end
    always_comb begin
        dt_rqst = 0; dt_vadd = 0; dt_num = 0;
        for (int i = 0; i < mwd; i++) if (sq_pos_trans[i][$clog2(sqsz)]) begin // untranslated entry in SQ
            if (dt_num >= mwd) break;
            dt_rqst[i] = dts[$clog2(sqsz)'(sq_pos_trans[i])];
            dt_vadd[i] = sq_vadd_rvalue[i];
            dt_num++;
        end
        for (int i = 0; i < mwd; i++) if (lq_pos_trans[i][$clog2(lqsz)]) begin // untranslated entry in LQ
            if (dt_num >= mwd) break;
            dt_rqst[i] = dtl[$clog2(lqsz)'(lq_pos_trans[i])];
            dt_vadd[i] = lq_vadd_rvalue[i];
            dt_num++;
        end
    end
    always_comb begin
        dc_rqst = 0; dc_addr = 0; dc_strb = 0; dc_wdat = 0; dc_num = 0;
        if (sq_pos_accsd[$clog2(sqsz)]) begin // SQ entry to access
            dc_rqst[0] = dcs[$clog2(sqsz)'(sq_pos_accsd)];
            dc_addr[0] = sq_padd[$clog2(sqsz)'(sq_pos_accsd)];
            dc_strb[0] = sq_strb[$clog2(sqsz)'(sq_pos_accsd)];
            dc_wdat[0] = sq_wdat[$clog2(sqsz)'(sq_pos_accsd)];
            for (int i = 0; i < mwd; i++) // do DTLB forwarding
                if (isdts(dt_resp[i]) & $clog2(sqsz)'(dt_resp[i]) == $clog2(sqsz)'(sq_pos_accsd))
                    dc_addr[0] = dt_padd[i];
            dc_num++;
        end
        for (int i = 0; i < mwd; i++) if (lq_pos_accsd[i][$clog2(lqsz)]) begin // LQ entry to access
            if (dc_num >= mwd) break;
            dc_rqst[dc_num] = dcl[$clog2(lqsz)'(lq_pos_accsd[i])];
            dc_addr[dc_num] = lq_padd[$clog2(lqsz)'(lq_pos_accsd[i])];
            dc_strb[dc_num] = 0;
            dc_wdat[dc_num] = 0;
            for (int i = 0; i < mwd; i++) // do DTLB forwarding
                if (isdtl(dt_resp[i]) & $clog2(lqsz)'(dt_resp[i]) == $clog2(lqsz)'(lq_pos_accsd[i]))
                    dc_addr[dc_num] = dt_padd[i];
            dc_num++;
        end
        for (int i = 0; i < mwd; i++) if (|dc_sent[i] & dc_sent[i] != dc_resp[i]) dc_rqst[i] = 0;
    end
    always_comb begin
        fl_data = 0;
        for (int i = 0; i < sqsz; i++) if (succeed(sq_opid[i]) | red_bundle.rollback)
            {fl_data[dts[i]], fl_data[dcs[i]]} = 2'b11;
        for (int i = 0; i < lqsz; i++) if (succeed(lq_opid[i]) | red_bundle.rollback)
            {fl_data[dtl[i]], fl_data[dcl[i]]} = 2'b11;
        for (int i = 0; i < mwd; i++) if (ck_resp[i][7] & ck_forw[i][64]) fl_data[ck_resp[i]] = 1;
    end
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++) if (rst) dc_sent[i] <= 0; else begin
        if (fl_data[dc_sent[i]])      dc_sent[i] <= 0;
        if (dc_sent[i] == dc_resp[i]) dc_sent[i] <= 0;
        if (|dc_rqst[i])              dc_sent[i] <= fl_data[dc_rqst[i]] ? 0 : dc_rqst[i];
    end

    /* early safety judgement */
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++) begin
        if (ck_resp[i][7] & ck_rslt[i] == 2'b11 & ck_forw[i][64]) // forwarded
            lsu_safe[i] <= lq_opid[$clog2(lqsz)'(ck_resp[i])];
        else lsu_safe[i] <= 0;
        if      (isdcs(dc_rqst[i])) lsu_safe[mwd + i] <= sq_opid[$clog2(sqsz)'(dc_rqst[i])];
        else if (isdcl(dc_rqst[i])) lsu_safe[mwd + i] <= lq_opid[$clog2(lqsz)'(dc_rqst[i])];
        else                        lsu_safe[mwd + i] <= 0;
        if (isdcl(dc_rqst[i]) & lq_chck_fwd[$clog2(lqsz)'(dc_rqst[i])] != 2'b11) lsu_safe[mwd + i] <= 0;
    end
    always_ff @(posedge clk) for (int i = 0; i < mwd; i++) begin
        if      (isdcs(dc_resp[i])) lsu_unsf[i] <= |dc_miss[i] ? sq_opid[$clog2(sqsz)'(dc_resp[i])] : 0;
        else if (isdcl(dc_resp[i])) lsu_unsf[i] <= |dc_miss[i] ? lq_opid[$clog2(lqsz)'(dc_resp[i])] : 0;
        else                        lsu_unsf[i] <= 0;
        if (isdcl(ck_resp[i])) lsu_unsf[mwd + i] <= ck_rslt[i] != 2'b11 ? lq_opid[$clog2(lqsz)'(ck_resp[i])] : 0;
        else                   lsu_unsf[mwd + i] <= 0;
    end

    /* arbitrate execution results */
    logic store_resp;
    always_comb ready = 1; // always ready because load/store ID numbers are limited
    always_comb for (int i = 0; i < ewd; i++) begin
        exe_bundle[i] = eq_rvalue[i];
        if (eq_bubble[eq_raddr[i]]) exe_bundle[i].opid = 0;
        if (i >= 32'(eq_num))       exe_bundle[i].opid = 0;
    end
    always_comb begin
        eq_out = 0;
        for (int i = 0; i < ewd; i++)
            if (i < 32'(eq_num) & (claim[i] | eq_bubble[eq_raddr[i]])) eq_out++; else break;
    end
    always_comb store_resp = isdcs(dc_resp[0]) & ~|dc_miss[0];
    always_comb begin
        eq_wvalue = 0; eq_in = 0;
        for (int i = 0; i < ewd; i++) if (sq_pos_exect[i][$clog2(sqsz)]) begin
            if (32'(eq_in) >= ewd | 32'(eq_in) >= eqsz - 32'(eq_num)) break;
            eq_wvalue[eq_in]       = sq_rvalue[i];
            eq_wvalue[eq_in].prdv  = sq_rdat_rvalue[i];
            eq_wvalue[eq_in].flush = sq_flush[sq_raddr[i]];
            /* do forwarding, and store can only use channel 0 */
            if (isdcs(dc_resp[0]) & ~|dc_miss[0] & sq_raddr[i] == $clog2(sqsz)'(dc_resp[0]))
                eq_wvalue[eq_in].prdv = sq_rdat_ext;
            if (sq_pgft[sq_raddr[i]]) eq_wvalue[eq_in].cause = {2'b10, sq_csr[sq_raddr[i]] ? 6'd2 : 6'd15};
            if (sq_misa[sq_raddr[i]]) eq_wvalue[eq_in].cause = {2'b10, 6'd6};
            eq_in++;
        end
        for (int i = 0; i < ewd; i++) if (lq_pos_exect[i][$clog2(lqsz)]) begin
            if (32'(eq_in) >= ewd | 32'(eq_in) >= eqsz - 32'(eq_num)) break;
            eq_wvalue[eq_in]        = lq_rvalue[i];
            eq_wvalue[eq_in].specul = lq_chck[lq_raddr[i]] == 2'b10;
            eq_wvalue[eq_in].prdv   = lq_rdat_rvalue[i];
            for (int j = 0; j < mwd; j++) /* do forwarding */
                if (isdcl(ck_resp[j]) & ck_forw[j][64] & lq_raddr[i] == $clog2(lqsz)'(ck_resp[j]))
                    eq_wvalue[eq_in].prdv = ck_forw[j][63:0];
                else if (isdcl(dc_resp[j]) & ~|dc_miss[j] & lq_raddr[i] == $clog2(lqsz)'(dc_resp[j]))
                    eq_wvalue[eq_in].prdv = lq_rdat_wvalue[j];
            for (int j = 0; j < mwd; j++)
                if (isdcl(ck_resp[j]) & lq_raddr[i] == $clog2(lqsz)'(ck_resp[j]))
                    eq_wvalue[eq_in].specul = ck_rslt[j] == 2'b10;
            if (lq_fail[lq_raddr[i]])              eq_wvalue[eq_in].retry  = 1;
            if (lq_pgft[lq_raddr[i]]) eq_wvalue[eq_in].cause = {2'b10, lq_rsrv[lq_raddr[i]][1] ? 6'd15 : 6'd13};
            if (lq_misa[lq_raddr[i]]) eq_wvalue[eq_in].cause = {2'b10, 6'd4};
            eq_in++;
        end
        for (int i = 0; i < ewd; i++) if (eq_wvalue[i].cause[7]) eq_wvalue[i].prda = 0;
    end
endmodule
