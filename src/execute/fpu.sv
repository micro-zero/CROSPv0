/**
 * fpu.sv:
 *   This is the floating-point module.
 */

`include "types.sv"
import types::*;

`define FPULAT 4

function logic [63:0] single2double(input logic [31:0] s);
    logic sgn, ov;
    logic [7:0] e;
    logic [22:0] b;
    {sgn, e, b} = s;
    single2double = {sgn, {3'd0, e} + 11'd896, b, 29'd0};
endfunction

function logic [31:0] double2single(input logic [63:0] d, input logic [2:0] rm);
    logic s, ov;
    logic [10:0] e;
    logic [51:0] b;
    {s, e, b} = d;
    if (b[28]) {ov, b[51:29]} = {1'b0, b[51:29]} + 1; else ov = 0;
    if (ov) begin b = b >> 1; if (e != 1023) e++; end
    if (e < 896) e = 896; else if (e > 1151) e = 1151;
    e = e - 896;
    double2single = {s, e[7:0], b[51:29]};
endfunction

module fpu #(
    parameter iwd = 4,  // issue width
    parameter ewd = 4,  // execution width
    parameter eqsz = 8  // execution queue size
)(
    input  logic clk,
    input  logic rst,
    input  logic flush,
    output logic ready,                  // ready for receiving at most `iwd` requests
    input  reg_bundle_t [iwd-1:0] req,   // requests after register read
    input  logic        [ewd-1:0] claim, // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] resp   // execution results
);
    /* register read buffer */
    logic [$clog2(eqsz)-1:0] rr_front;
    logic [$clog2(eqsz):0] rr_num, rr_in, rr_out;
    logic        [ewd-1:0][$clog2(eqsz)-1:0] rr_raddr, rr_waddr;
    reg_bundle_t [ewd-1:0]                   rr_rvalue, rr_wvalue;
    logic        [ewd-1:0]                   rr_wena;
    always_comb begin
        rr_in = 0; rr_wvalue = 0;
        for (int i = 0; i < iwd; i++)
            if (req[i].opid[15] & req[i].fu[2]) begin // select FPU requests and flatten them
                rr_wvalue[rr_in] = req[i];
                rr_in++;
            end
    end
    always_comb for (int i = 0; i < ewd; i++) rr_raddr[i] = rr_front + $clog2(eqsz)'(i);
    always_comb for (int i = 0; i < ewd; i++) rr_waddr[i] = rr_raddr[i] + $clog2(eqsz)'(rr_num);
    always_comb for (int i = 0; i < ewd; i++) rr_wena [i] = i < 32'(rr_in);
    always_ff @(posedge clk) if (rst | flush) rr_front <= 0; else rr_front <= rr_front + $clog2(eqsz)'(rr_out);
    always_ff @(posedge clk) if (rst | flush) rr_num <= 0; else rr_num <= rr_num + rr_in - rr_out;
    mwpram #(.width($bits(reg_bundle_t)), .depth(eqsz), .rports(ewd), .wports(ewd))
        rr_inst(.clk(clk), .rst(rst),
            .raddr(rr_raddr), .rvalue(rr_rvalue),
            .waddr(rr_waddr), .wvalue(rr_wvalue), .wena(rr_wena));

    /* FPU pipeline */
    exe_bundle_t [`FPULAT-1:0] rq; // result queue
    exe_bundle_t result;
    logic [63:0] r, a, b, ad, bd;
    logic [9:0] fclass;
    real af, bf;
    fpu_funct_t f;
    always_comb f = $bits(fpu_funct_t)'(rr_rvalue[0].funct);
    always_comb a = rr_rvalue[0].prs[0];
    always_comb b = rr_rvalue[0].b[64] ? rr_rvalue[0].prs[1] : rr_rvalue[0].b[63:0];
    always_comb begin // assign double and single oprands
        if (f.double)                ad = a;
        else if (a[63:32] == -32'd1) ad = single2double(a[31:0]);
        else                         ad = {-32'd1, 32'h7fc00000};
        if (f.double)                  bd = b;
        else if (b[63:32] == -32'd1) bd = single2double(b[31:0]);
        else                         bd = {-32'd1, 32'h7fc00000};
        af = $bitstoreal(ad);
        bf = $bitstoreal(bd);
    end
    always_comb fclass = {
        f.double ?          a[62:52] == -11'd1 & a[51] == 1    :          a[30:23] == -8'd1 & a[22] == 1,
        f.double ?          a[62:52] == -11'd1 & a[51] == 0    :          a[30:23] == -8'd1 & a[22] == 0,
        f.double ? ~a[63] & a[62:52] == -11'd1 & a[51:0]  == 0 : ~a[31] & a[30:23] == -8'd1 & a[22:0]  == 0,
        f.double ? ~a[63] & a[62:52] != -11'd1 & a[62:52] != 0 : ~a[31] & a[30:23] != -8'd1 & a[30:23] != 0,
        f.double ? ~a[63] & a[62:52] == 0 & a[51:0] != 0       : ~a[31] & a[30:23] == 0 & a[22:0] != 0,
        f.double ? ~a[63] & a[62:0]  == 0                      : ~a[31] & a[30:0]  == 0,
        f.double ?  a[63] & a[62:0]  == 0                      :  a[31] & a[30:0]  == 0,
        f.double ?  a[63] & a[62:52] == 0 & a[51:0] != 0       :  a[31] & a[30:23] == 0 & a[22:0] != 0,
        f.double ?  a[63] & a[62:52] != -11'd1 & a[62:52] != 0 :  a[31] & a[30:23] != -8'd1 & a[30:23] != 0,
        f.double ?  a[63] & a[62:52] == -11'd1 & a[51:0]  == 0 :  a[31] & a[30:23] == -8'd1 & a[22:0]  == 0
    };
    always_comb begin
        r = {64{f.fadd}}  & $realtobits( af + bf)  | // FADD
            {64{f.fsub}}  & $realtobits( af - bf)  | // FSUB
            {64{f.fmul}}  & $realtobits( af * bf)  | // FMUL
            {64{f.fnmul}} & $realtobits(-af * bf)  | // FNMUL
            {64{f.fdiv}}  & $realtobits( af / bf)  | // FDIV
            {64{f.fsqrt}} & $realtobits($sqrt(af)) | // FSQRT
            {64{f.fsgnj}}  & {         bd[63], ad[62:0]} | // FSGNJ
            {64{f.fsgnjn}} & {        ~bd[63], ad[62:0]} | // FSGNJN
            {64{f.fsgnjx}} & {ad[63] ^ bd[63], ad[62:0]} | // FSGNJX
            {64{f.fmin}} & $realtobits(af < bf ? af : bf) | // FMIN
            {64{f.fmax}} & $realtobits(af > bf ? af : bf) | // FMAX
            {64{f.feq}} & {63'd0, af == bf} | // FEQ
            {64{f.flt}} & {63'd0, af <  bf} | // FLT
            {64{f.fle}} & {63'd0, af <= bf} | // FLE
            {64{f.fmvxf}}  & a               | // FMV.X.F
            {64{f.fclass}} & {54'd0, fclass} | // FCLASS
            {64{f.fmvfx}}  & a               | // FMV.F.X
            {64{f.fcvtif & b[1:0] == 0}} & {32'd0, int'(af)}          | // FCVT.W.F
            {64{f.fcvtif & b[1:0] == 1}} & {32'd0, $signed(int'(af))} | // FCVT.WU.F
            {64{f.fcvtif & b[1:0] == 2}} & longint'(af)               | // FCVT.L.F
            {64{f.fcvtif & b[1:0] == 3}} & $signed(longint'(af))      | // FCVT.LU.F
            {64{f.fcvtfi & b[1:0] == 0}} & $realtobits(real'($signed({{32{a[31]}}, a[31:0]}))) | // FCVT.F.W
            {64{f.fcvtfi & b[1:0] == 1}} & $realtobits(real'({32'd0, a[31:0]}))                | // FCVT.F.WU
            {64{f.fcvtfi & b[1:0] == 2}} & $realtobits(real'($signed(a)))                      | // FCVT.F.L
            {64{f.fcvtfi & b[1:0] == 3}} & $realtobits(real'(a))                               | // FCVT.F.LU
            {64{f.fcvtsd}} & a                     | // FCVT.S.D
            {64{f.fcvtds}} & single2double(a[31:0]); // FCVT.D.S
        if (f.fcvtif & b[1:0] == 0) r = {{32{r[31]}}, r[31:0]};
        if (f.fmvfx) begin
            if (~f.double) r = {-32'd1, r[31:0]};
        end else if (~(f.feq | f.flt | f.fle | f.fmvxf | f.fclass | f.fcvtif)) begin
            if (r[62:52] == 11'h7ff) r = 64'h7ff8_0000_0000_0000;
            if (~f.double) r = {-32'd1, double2single(r, f.rm)};
        end
    end

    always_comb begin
        result = 0;
        if (|rr_num) result.opid = rr_rvalue[0].opid;
        result.npc = rr_rvalue[0].base[63:0] + 64'(rr_rvalue[0].delta);
        result.prda = rr_rvalue[0].prda[1];
        result.prdv = r;
    end
    always_comb rr_out = |rr_num & (claim[0] | ~rq[0].opid[15]) ? 1 : 0;
    always_ff @(posedge clk) if (rst | flush) rq <= 0;
        else if (claim[0] | ~rq[0].opid[15]) rq <= {result, rq[`FPULAT-1:1]};

    /* assign response */
    always_comb ready = ewd <= eqsz - 32'(rr_num); // ready when able to holding `ewd` operations
    always_comb begin
        resp = 0;
        resp[0] = rq[0];
    end
endmodule
