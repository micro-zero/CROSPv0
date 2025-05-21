/**
 * fetch.sv:
 *   This file includes top module of fetch unit, which generate
 *   PC, connects ICACHE and devide data into instructions.
 */

`include "types.sv"
import types::*;

module fetch #(
    parameter init,   // initialize RAM
    parameter rst_pc, // PC on reset
    parameter fwd,    // fetch width
    parameter cwd,    // commit width
    parameter cbsz,   // cache block size to avoid fetch beyond cache line
    parameter fqsz,   // instruction fetch queue size
    parameter ftqsz,  // fetch target queue size
    parameter fnum,   // fetch number in half-words
    parameter rassz,  // return address stack size
    parameter btbsz,  // BTB size
    parameter index,  // TAGE index length
    parameter tag,    // TAGE tag length
    parameter hist,   // TAGE history length
    parameter cnt     // TAGE counter length
)(
    input  logic clk,
    input  logic rst,
    input  com_bundle_t [cwd-1:0] com_bundle, // commit bundle
    input  red_bundle_t           red_bundle, // redirect bundle
    input  logic        [fwd-1:0] fetch,      // fetch/ready signal
    output fet_bundle_t [fwd-1:0] fet_bundle, // output bundle
    /* PMP interface */
    input  logic        [1:0] pmplvl,  // PMP privilege level
    input  logic [15:0] [7:0] pmpcfg,  // PMP configuration CSRs
    input  logic [15:0][53:0] pmpaddr, // PMP address CSRs
    /* flush interface */
    output logic [255:0] fl_inst, // instruction request flush bitmap
    /* ITLB interface */
    output logic  [7:0] it_rqst, // ITLB request ID
    output logic [63:0] it_vadd, // ITLB virtual address
    input  logic  [7:0] it_resp, // ITLB response ID
    input  logic  [7:0] it_perm, // ITLB access permission
    input  logic [63:0] it_padd, // ITLB physical address
    /* ICACHE interface */
    output logic         [7:0] ic_rqst, // instruction cache request ID
    output logic        [63:0] ic_addr, // instruction cache physical address
    input  logic         [7:0] ic_resp, // instruction cache response ID
    input  logic [16*fnum-1:0] ic_rdat  // instruction cache read data
);
    /* pipeline redirect and reinforcement */
    localparam mintk = 8'd1 << cnt - 1;                // minimal taken pattern
    logic reinf, fredir, bredir, iredir, dredir;       // reinforcement and redirection
    logic [63:0] upc, dpc, ipc, fpc, unpc, dnpc, fnpc; // PC/NPC
    logic [4:0] ubk, dbk, fbk, ibk;                    // bank
    logic [7:0] upat, dpat, dnpat, fpat;               // branch pattern
    logic [7:0] upatb, dpatb, dnpatb, fpatb, ipatb;    // bimodal branch pattern
    logic [127:0] ugh, dgh, fgh, igh;                  // global history
    always_comb begin
        upc = 0; unpc = 0; upat = 0; ubk = 0; upatb = 0; ugh = 0;
        bredir = 0; reinf = 0;
        if (~red_bundle.opid[15] & red_bundle.brid[7]) begin
            reinf = 1;
            upc = red_bundle.pc + (red_bundle.delta == 2 ? 0 : 2);
            unpc = red_bundle.npc;
            ubk = red_bundle.bank;
            upat = red_bundle.pat;
            upatb = red_bundle.patb;
            ugh = red_bundle.gh;
        end
        /* frontend redirection, buffered for timing issue */
        if (fredir) {reinf, upc, unpc, ubk, upat, upatb, ugh} = {1'b0, fpc, fnpc, fbk, fpat, fpatb, fgh};
        /* backend redirection, commit bundles include a redirection bundle */
        if (red_bundle.opid[15]) begin
            bredir = 1;
            reinf = 0;
            upc = red_bundle.pc + (red_bundle.delta == 2 ? 0 : 2);
            unpc = red_bundle.npc;
            ubk = red_bundle.bank;
            upat = red_bundle.pat;
            upatb = red_bundle.patb;
            ugh = red_bundle.gh;
        end
    end
    always_ff @(posedge clk) if (rst | bredir) {fredir, fpc, fnpc, fpat} <= 0;
        else if (dredir) {fredir, fpc, fnpc, fbk, fpat, fpatb, fgh} <= {1'b1, dpc, dnpc, dbk, dpat, dpatb, dgh};
        else if (iredir) {fredir, fpc, fnpc, fbk, fpat, fpatb, fgh} <= {1'b1, ipc, ipc, ibk, mintk, ipatb, igh};
        else              fredir <= 0;

    /* instruction fetch queue */
    logic [$clog2(fqsz)-1:0] fq_front;              // fetch queue front index
    logic   [$clog2(fqsz):0] fq_num, fq_in, fq_out; // fetch queue numbers
    logic        [fwd-1:0][$clog2(fqsz)-1:0] fq_raddr, fq_waddr;
    fet_bundle_t [fwd-1:0]                   fq_rvalue, fq_wvalue;
    logic        [fwd-1:0]                   fq_wena;
    always_comb for (int i = 0; i < fwd; i++) fq_raddr[i] = fq_front + $clog2(fqsz)'(i);
    always_comb for (int i = 0; i < fwd; i++) fq_waddr[i] = fq_raddr[i] + $clog2(fqsz)'(fq_num);
    always_comb for (int i = 0; i < fwd; i++) fq_wena[i] = i < fq_in;
    mwpram #(.width($bits(fet_bundle_t)), .depth(fqsz), .rports(fwd), .wports(fwd))
        fq_inst(.clk(clk), .rst(rst),
            .raddr(fq_raddr), .rvalue(fq_rvalue),
            .waddr(fq_waddr), .wvalue(fq_wvalue), .wena(fq_wena));
    always_comb begin
        fq_out = 0;
        for (int i = 0; i < fwd; i++)
            if (fetch[i] & fet_bundle[i].valid) fq_out++;
    end
    always_ff @(posedge clk) if (rst | bredir) fq_front <= 0; else fq_front <= fq_front + $clog2(fqsz)'(fq_out);
    always_ff @(posedge clk) if (rst | bredir) fq_num   <= 0; else fq_num   <= fq_num + fq_in - fq_out;
    always_comb begin
        fet_bundle = fq_rvalue;
        for (int i = 0; i < fwd; i++)
            if (i >= fq_num) fet_bundle[i].valid = 0;
    end

    /* PC generation */
    logic        pcg_ready;  // ready to get PC and send to ICACHE
    pcg_bundle_t pcg_bundle; // PC information from PC generation module
    tage #(.init(init), .rst_pc(rst_pc), .fnum(fnum), .cbsz(cbsz), .btbsz(btbsz),
        .index(index), .tag(tag), .hist(hist), .cnt(cnt))
        pcg_inst(.clk(clk), .rst(rst), .redir(fredir | bredir), .reinf(reinf),
            .upc(upc), .unpc(unpc), .ubk(ubk), .upat(upat), .upatb(upatb), .ugh(ugh),
            .ready(pcg_ready), .out(pcg_bundle));

    /* fetch target queue */
    localparam itrqst = {3'b100, 5'd0};          // constant ITLB   request
    localparam icrqst = {3'b101, 5'd0};          // constant ICACHE request
    logic      itresp, icresp, pmpresp;          // flattened ITLB, ICACHE and PMP response
    logic [$clog2(ftqsz)-1:0] ftq_front;         // fetch target queue front index
    logic [$clog2(ftqsz):0] ftq_num;             // fetch target queue size (0 ~ ftqsz)
    logic [$clog2(ftqsz):0] ftq_trn, ftq_acc;    // translated and accessed numbers (0 ~ ftqsz)
    logic            [63:0] ftq_vpc [ftqsz-1:0]; // virtual address of each fetch
    logic            [63:0] ftq_ppc [ftqsz-1:0]; // physical address of each fetch
    logic            [64:0] ftq_br  [ftqsz-1:0]; // branch signal and target
    logic [fnum-1:0]  [4:0] ftq_bk  [ftqsz-1:0]; // chosen bank
    logic [fnum-1:0]  [7:0] ftq_pat [ftqsz-1:0]; // branch pattern
    logic [fnum-1:0]  [7:0] ftq_patb[ftqsz-1:0]; // bimodal branch pattern
    logic [fnum-1:0][127:0] ftq_gh  [ftqsz-1:0]; // global history
    logic             [7:0] ftq_size[ftqsz-1:0]; // size of fetched data in half-words (0 ~ 8)
    logic     [16*fnum-1:0] ftq_data[ftqsz-1:0]; // the data fetched
    logic                   ftq_acft[ftqsz-1:0]; // whether encountering access fault
    logic                   ftq_pgft[ftqsz-1:0]; // whether encountering page fault
    logic ftq_push, ftq_pop;                     // push or pop signals of FTQ
    logic [7:0] ftq_cur, ftq_next;               // current and next fetch position inside front line
    logic                  f0done, f1done;       // forwarded done signals
    always_comb pcg_ready = ~pcg_bundle.id[7] | ftq_num < ftqsz;
    always_comb ftq_push = ftq_num < ftqsz & pcg_bundle.id[7] &
        $clog2(ftqsz)'(pcg_bundle.id) - ftq_front == $clog2(ftqsz)'(ftq_num);
    always_comb ftq_pop = ftq_num > 0 & f0done & ftq_next >= ftq_size[ftq_front];
    always_comb itresp = it_resp == itrqst;
    always_comb icresp = ic_resp == icrqst;
    always_comb pmpresp = pmp_resp == icrqst;
    always_ff @(posedge clk) if (rst | fredir | iredir | dredir | bredir) ftq_front <= 0;
        else ftq_front <= ftq_front + (ftq_pop ? 1 : 0);
    always_ff @(posedge clk) if (rst | fredir | iredir | dredir | bredir) ftq_num   <= 0;
        else ftq_num <= ftq_num - (ftq_pop ? 1 : 0) + (ftq_push ? 1 : 0);
    always_ff @(posedge clk) if (rst | fredir | iredir | dredir | bredir) ftq_trn   <= 0;
        else ftq_trn <= ftq_trn - (ftq_pop ? 1 : 0) + (itresp ? 1 : 0);
    always_ff @(posedge clk) if (rst | fredir | iredir | dredir | bredir) ftq_acc   <= 0;
        else ftq_acc <= ftq_acc - (ftq_pop ? 1 : 0) + (icresp ? 1 : 0);
    always_ff @(posedge clk)
        if (rst | fredir | iredir | dredir | bredir) ftq_cur <= 0;
        else if (ftq_next < ftq_size[ftq_front]) ftq_cur <= ftq_next;
        else ftq_cur <= ftq_next - ftq_size[ftq_front];

    /* handling ITLB/ICACHE request using fields of FTQ */
    logic [$clog2(ftqsz)-1:0] pos_0, pos_1;
    logic [$clog2(ftqsz)-1:0] pos_trn, pos_acc, next_trn, next_acc;
    logic [7:0] pmp_resp;
    logic       pmp_fail;
    logic [2:0] ic_perm;
    pmp pmp_inst(pmplvl, pmpcfg, pmpaddr, ic_addr, ic_perm);
    always_comb pos_0 = ftq_front;
    always_comb pos_1 = ftq_front + 1;
    always_comb pos_trn = ftq_front + $clog2(ftqsz)'(ftq_trn);
    always_comb pos_acc = ftq_front + $clog2(ftqsz)'(ftq_acc);
    always_comb next_trn = pos_trn + (itresp ? 1 : 0);
    always_comb next_acc = pos_acc + (icresp ? 1 : 0);
    always_comb f0done = ftq_acc > 0;
    always_comb f1done = ftq_acc > 1;
    always_comb it_rqst = ftq_trn + (itresp ? 1 : 0) < ftq_num + (ftq_push ? 1 : 0) ? itrqst : 0;
    always_comb it_vadd = ftq_trn + (itresp ? 1 : 0) < ftq_num ? ftq_vpc[next_trn] : pcg_bundle.pc;
    always_comb ic_rqst = ftq_acc + (icresp ? 1 : 0) < ftq_trn + (itresp ? 1 : 0) ? icrqst : 0;
    always_comb ic_addr = ftq_acc + (icresp ? 1 : 0) < ftq_trn ? ftq_ppc[next_acc] : it_padd;
    always_comb fl_inst = fredir | bredir ? 256'd1 << itrqst | 256'd1 << icrqst : 0;
    always_ff @(posedge clk) pmp_resp <= fredir | bredir ? 0 : ic_rqst;
    always_ff @(posedge clk) pmp_fail <= ~ic_perm[2];
    always_ff @(posedge clk) begin
        if (ftq_num < ftqsz & pcg_bundle.id[7]) begin // PC generated and to start translation
            ftq_vpc [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.pc;
            ftq_br  [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.br;
            ftq_bk  [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.bank[fnum-1:0];
            ftq_pat [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.pat [fnum-1:0];
            ftq_patb[$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.patb[fnum-1:0];
            ftq_gh  [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.gh  [fnum-1:0];
            ftq_size[$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.num;
        end
        if (itresp) begin // ITLB request done
            ftq_ppc [pos_trn] <= it_padd;
            ftq_pgft[pos_trn] <= (8'b01001001 | it_perm) != it_perm;
            /* execution permission: -A--X--V */
        end
        if (icresp)  ftq_data[pos_acc] <= ic_rdat;  // ICACHE request done
        if (pmpresp) ftq_acft[pos_acc] <= pmp_fail; // PMP check fails
    end

    /* get data in front of queue */
    logic [fnum:0][15:0] fdata;                 // data combined by first two line
    logic          [7:0] fsize, f0size, f1size; // effective size of first two line
    always_comb f0size = f0done ? ftq_size[pos_0] - ftq_cur : 0;
    always_comb f1size = f1done ? ftq_size[pos_1] : 0;
    always_comb if (ftq_num == 0) fsize = 0;
        else    if (ftq_num == 1) fsize = f0size;
        else fsize = f0size + f1size > fnum ? fnum : f0size + f1size;
    always_comb begin
        fdata[fnum-1:0] =
            ftq_data[pos_1] << {f0size,  4'd0} |
            ftq_data[pos_0] >> {ftq_cur, 4'd0} & ((1 << {f0size, 4'd0}) - 1);
        fdata[fnum] = 0;
    end

    /* generate instructions */
    fet_bundle_t [fwd-1:0] result;     // generation results
    logic [7:0] fet_pos[fwd:0];        // position in `fdata` of each instruction
    logic [$clog2(fwd+1)-1:0] fet_num; // number of successfully fetched instruction in current cycle
    logic [fwd:0][63:0] pc;            // extracted program counter
    logic [fwd-1:0][31:0] ir;          // the instructions ready to output
    logic [fwd-1:0][4:0] bank;         // chosen bank
    logic [fwd-1:0][7:0] pat, patb;    // chosen pattern
    logic [fwd-1:0][127:0] gh;         // global history
    logic [fwd-1:0] valid;             // valid bits of extracted instructions
    logic [fwd-1:0] incomp;            // incomplete instruction fetch occurs
    logic [fwd-1:0] call, ret;         // call and return signal
    logic [fwd-1:0][64:0] br;          // predicted as instruction flow break
    always_comb begin
        fet_num = 0;
        for (int i = 0; i < fwd; i++)
            if (i < fq_in & result[i].valid) fet_num++;
    end
    always_comb begin
        fet_pos[0] = 0;
        /* recursive calculation of instruction positions in data */
        for (int i = 1; i <= fwd; i++)
            fet_pos[i] = fet_pos[i-1] + (&fdata[fet_pos[i-1]][1:0] ? 2 : 1);
    end
    always_comb ftq_next = ftq_cur + fet_pos[fet_num];
    always_comb for (int i = 0; i <= fwd; i++)
        pc[i] = fet_pos[i] < f0size ?
            ftq_vpc[pos_0] + 64'({fet_pos[i], 1'b0}) + 64'({ftq_cur, 1'b0}) :
            ftq_vpc[pos_1] + 64'({fet_pos[i], 1'b0}) - 64'({f0size, 1'b0});
    always_comb for (int i = 0; i < fwd; i++)
        if (fet_pos[i + 1] <= f0size) begin
            bank[i] = ftq_bk  [pos_0][fet_pos[i + 1] + ftq_cur - 1];
            pat [i] = ftq_pat [pos_0][fet_pos[i + 1] + ftq_cur - 1];
            patb[i] = ftq_patb[pos_0][fet_pos[i + 1] + ftq_cur - 1];
            gh  [i] = ftq_gh  [pos_0][fet_pos[i + 1] + ftq_cur - 1];
        end else begin
            bank [i] = ftq_bk  [pos_1][fet_pos[i + 1] - f0size - 1];
            pat  [i] = ftq_pat [pos_1][fet_pos[i + 1] - f0size - 1];
            patb [i] = ftq_patb[pos_1][fet_pos[i + 1] - f0size - 1];
            gh   [i] = ftq_gh  [pos_1][fet_pos[i + 1] - f0size - 1];
        end
    always_comb for (int i = 0; i < fwd; i++) ir[i]    = fdata[fet_pos[i]+1-:2];
    always_comb for (int i = 0; i < fwd; i++) valid[i] = fet_pos[i + 1] <= fsize;
    always_comb for (int i = 0; i < fwd; i++)
        if      (fet_pos[i + 1] == f0size)                    br[i] = ftq_br[pos_0];
        else if (fet_pos[i + 1] == f0size + f1size & |f1size) br[i] = ftq_br[pos_1];
        else                                                  br[i] = 0;
    always_comb begin
        result = 0;
        for (int i = 0; i < fwd; i++) begin
            result[i].valid = valid[i];
            result[i].ir    = ir[i];
            for (int j = 0; j < 2; j++)
                if (fet_pos[i] + 8'(j) < f0size) begin
                    result[i].af[j] = f0done ? ftq_acft[pos_0] : 0;
                    result[i].pf[j] = f0done ? ftq_pgft[pos_0] : 0;
                end else begin
                    result[i].af[j] = f1done ? ftq_acft[pos_1] : 0;
                    result[i].pf[j] = f1done ? ftq_pgft[pos_1] : 0;
                end
            result[i].pc   = pc[i];
            result[i].bank = bank[i];
            result[i].pat  = pat[i];
            result[i].patb = patb[i];
            result[i].gh   = gh[i];
            if (br[i][64]) result[i].pnpc = br[i][63:0]; // predict as a branch
            else           result[i].pnpc = pc[i + 1];   // predict as continuous fetch
        end
        if (dredir) result[32'(fq_in) - 1].pnpc = dnpc;
        if (dredir) result[32'(fq_in) - 1].pat = dnpat;
        if (dredir) result[32'(fq_in) - 1].patb = dnpatb;
        ipc   = ftq_vpc  [pos_0] + 64'({ftq_size[pos_0] - 8'd1, 1'b0});
        ibk   = ftq_bk   [pos_0][f0size + ftq_cur - 1];
        ipatb = ftq_patb [pos_0][f0size + ftq_cur - 1];
        igh   = ftq_gh   [pos_0][f0size + ftq_cur - 1];
    end
    always_comb begin
        incomp = 0;
        for (int i = 0; i < fwd; i++)
            if (fet_pos[i] == f0size - 1 & &fdata[f0size - 1][1:0] &
                /* breaking into two lines and discontinuous address */
                ftq_vpc[pos_0] + 64'({ftq_size[pos_0], 1'b0}) != ftq_vpc[pos_1]) incomp[i] = 1;
    end

    /* return address stack */
    logic   [rassz-1:0][63:0] ras;     // return address stack
    logic [$clog2(rassz)-1:0] ras_top; // RAS top cursor
    logic   [$clog2(rassz):0] ras_num; // entry numbers in RAS
    logic [15:0] call_num, ret_num;    // in-flight numbers of call/ret instructions
    logic [15:0] call_in, call_out;
    logic [15:0]  ret_in,  ret_out;
    logic [63:0] ras_target; // the chosen RAS entry
    always_comb begin
        call_out = 0; ret_out = 0;
        for (int i = 0; i < cwd; i++) begin
            if (com_bundle[i].opid[15] & com_bundle[i].call) call_out++;
            if (com_bundle[i].opid[15] & com_bundle[i].ret)   ret_out++;
        end
    end
    /* todo: there may be a method to maintain speculative valid bits and matching
       status of RAS entries, so that entries can be used when there are in-flight
       call/ret instructions, even when call and ret have different numbers */
    always_comb ras_target = ras[32'(ras_top) - 1];
    always_ff @(posedge clk) if (rst) {ras_top, ras_num} <= 0; else
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15]) begin
            if (com_bundle[i].ret) begin
                ras_top <= ras_top - 1;
                ras_num <= ras_num - 1; // non-zero size is checked in `ret`
            end
            if (com_bundle[i].call) begin
                ras_top <= com_bundle[i].ret ? ras_top : ras_top + 1;
                ras_num <= com_bundle[i].ret ? ras_num : (ras_num == rassz ? rassz : ras_num + 1);
                ras[ras_top] <= com_bundle[i].pc + (com_bundle[i].delta == 2 ? 2 : 4);
            end
        end
    always_ff @(posedge clk) if (rst | bredir) call_num <= 0; else call_num <= call_num + call_in - call_out;
    always_ff @(posedge clk) if (rst | bredir)  ret_num <= 0; else  ret_num <=  ret_num +  ret_in -  ret_out;

    /* pre-decode */
    logic [fwd-1:0]       branch, jalr, jal; // types of instructions
    logic [fwd-1:0][63:0] target;            // instruction and target of branch and jumping
    always_comb for (int i = 0; i < fwd; i++) begin
        branch[i] = ir[i][6:0] == 7'b1100011;
        jalr  [i] = ir[i][6:0] == 7'b1100111;
        jal   [i] = ir[i][6:0] == 7'b1101111;
        /* `call` is jump instructions linking to register `x1/x5`
           `ret`  is JALR instructions with jumping register `x1/x5`
           if source and destination registers are the same and both
               linking register, then the instruction will be seemed
               as a call instruction only */
        call  [i] = (jal[i] | jalr[i]) & (ir[i][11:7]  == 1 | ir[i][11:7]  == 5);
        ret   [i] =           jalr[i]  & (ir[i][19:15] == 1 | ir[i][19:15] == 5) & ir[i][19:15] != ir[i][11:7];
        target[i] = pc[i] + (&ir[i][1:0] ? 4 : 2);
        if (branch[i]) target[i] = pc[i] + {{52{ir[i][31]}}, ir[i][7],  ir[i][30:25], ir[i][11:8],  1'b0};
        if (jal   [i]) target[i] = pc[i] + {{44{ir[i][31]}}, ir[i][19:12], ir[i][20], ir[i][30:21], 1'b0};
        if (jalr  [i]) target[i] = ras_target + {{52{ir[i][31]}}, ir[i][31:20]};
        /* compressed jump/branch instructions */
        if (ir[i][15:13] == 3'b101 & ir[i][1:0] == 2'b01) begin // C.J
            jal[i] = 1;
            target[i] = pc[i] + {{53{ir[i][12]}}, ir[i][8], ir[i][10:9],
                ir[i][6], ir[i][7], ir[i][2], ir[i][11], ir[i][5:3], 1'b0};
        end
        if (ir[i][15:14] == 2'b11 & ir[i][1:0] == 2'b01) begin // C.BEQZ / C.BNEZ
            branch[i] = 1;
            target[i] = pc[i] + {{56{ir[i][12]}}, ir[i][6:5], ir[i][2], ir[i][11:10], ir[i][4:3], 1'b0};
        end
        if (ir[i][15:13] == 3'b100 & ir[i][1:0] == 2'b10 & ir[i][6:2] == 0) begin // C.JR/C.JALR(/C.EBREAK)
            jalr[i] = 1;
            if (ir[i][12]) call[i] = 1; // C.JALR
            ret[i] = ir[i][11:7] == 1 & ~ir[i][12] | ir[i][11:7] == 5;
            target[i] = ras_target;
        end
    end

    /* check validation of fetch queue input */
    always_comb begin
        fq_in = 0;
        iredir = 0;
        dredir = 0; dbk = 0; dgh = 0; dpc = 0; dnpc = 0;
        dpat = 0; dpatb = 0; dnpat = 0; dnpatb = 0;
        call_in = 0; ret_in = 0;
        for (int i = 0; i < fwd; i++) if (fq_in < fqsz - fq_num & valid[i]) begin
            /* ready to fetch into instruction queue */
            /* incomplete fetch detected */
            if (incomp[i]) begin iredir = 1; break; end
            /* fetch confirmed */
            fq_in++;
            if (call[i]) call_in++; // count call/ret instructions into FQ
            if ( ret[i])  ret_in++;
            /* branch at non-branch instructions */
            if (~(branch[i] | jal[i] | jalr[i]) & br[i][64]) begin
                dredir = 1;
                dbk    = bank[i];
                dpat   = mintk; // mark as wrong prediction
                dpatb  = mintk;
                dnpat  = 0; // avoid reinforcement
                dnpatb = 0;
                dgh    = gh[i];
                dpc    = pc[i] + (&ir[i][1:0] ? 2 : 0);
                dnpc   = target[i];
                break;
            end
            /* wrong jump at jal/branch instructions */
            if (jal[i] & ~br[i][64] | (jal[i] | branch[i] & br[i][64]) & target[i][8:1] != br[i][8:1]) begin
                dredir = 1;
                dbk    = bank[i];
                dpat   = mintk - 1;
                dpatb  = mintk - 1;
                dnpat  = -8'd1;
                dnpatb = -8'd1;
                dgh    = gh[i];
                dpc    = pc[i] + (&ir[i][1:0] ? 2 : 0);
                dnpc   = target[i];
                break;
            end
            /* linked JALR instructions */
            if (ret[i] & |ras_num & ~|call_num & ~|ret_num & target[i][8:1] != br[i][8:1]) begin
                dredir = 1;
                dbk    = bank[i];
                dpat   = mintk - 1;
                dpatb  = mintk - 1;
                dnpat  = -8'd1;
                dnpatb = -8'd1;
                dgh    = gh[i];
                dpc    = pc[i] + (&ir[i][1:0] ? 2 : 0);
                dnpc   = target[i];
                break;
            end
        end
    end
    always_comb begin
        fq_wvalue = result;
        for (int i = 0; i < fwd; i++) begin
            fq_wvalue[i].call   = call[i];
            fq_wvalue[i].ret    = ret[i];
            fq_wvalue[i].branch = branch[i];
            fq_wvalue[i].jal    = jal[i];
            fq_wvalue[i].jalr   = jalr[i];
        end
    end
endmodule
