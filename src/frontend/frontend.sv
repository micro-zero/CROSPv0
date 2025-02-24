/**
 * frontend.sv:
 *   This file includes top module of frontend, which generate
 *   PC, connects ICACHE and devide data into instructions.
 */

`include "types.sv"
import types::*;

module frontend #(
    parameter init   = 1,            // initialize RAM
    parameter rst_pc = 32'hc0000000, // PC on reset
    parameter fwd   = 4,             // fetch width
    parameter cwd   = 4,             // commit width
    parameter cbsz  = 64,            // cache block size to avoid fetch beyond cache line
    parameter fqsz  = 16,            // instruction fetch queue size
    parameter ftqsz = 8,             // fetch target queue size
    parameter fnum  = 4,             // fetch number in half-words
    parameter rassz = 8,             // return address stack size
    parameter phtsz = 4096,          // PHT size
    parameter btbsz = 512            // BTB size
)(
    input  logic clk,
    input  logic rst,
    input  com_bundle_t [cwd-1:0] com_bundle, // frontend update information
    input  logic        [fwd-1:0] fetch,      // fetch/ready signal
    output fet_bundle_t [fwd-1:0] fet_bundle, // frontend output bundle
    /* ITLB interface */
    output logic  [7:0] it_rqst, // ITLB request ID
    output logic [63:0] it_vadd, // ITLB virtual address
    input  logic  [7:0] it_resp, // ITLB response ID
    input  logic  [7:0] it_perm, // ITLB access permission
    input  logic [63:0] it_padd, // ITLB physical address
    /* ICACHE interface */
    output logic               ic_flsh, // instruction cache flush signal
    output logic         [7:0] ic_rqst, // instruction cache request ID
    output logic        [63:0] ic_addr, // instruction cache physical address
    input  logic         [7:0] ic_resp, // instruction cache response ID
    input  logic [16*fnum-1:0] ic_rdat  // instruction cache read data
);
    /* pipeline redirect and reinforcement */
    logic reinf;            // reinforcement signal
    logic [1:0] redir;      // redirect signals of the two stage
    logic [63:0] upc, unpc; // updating PC/NPC
    logic [1:0] upat;       // updating branch pattern
    logic iredir;           // incomplete fetch redirect signal
    logic [63:0] ipc;       // incomplete updating PC
    logic dredir;           // pre-decoder redirect signal
    logic [1:0] dpat;       // pre-decoder updating pattern
    logic [63:0] dpc, dnpc; // pre-decoder updating PC and NPC
    com_bundle_t com_last;  // last committed bundle for pending reinforcement
    always_comb begin
        upc = 0; unpc = 0; upat = 0;
        redir = 0; reinf = 0;
        /* look for bundle requiring reinforcement */
        for (int i = cwd - 2; i >= 0; i--)
            /* reinforcing bundle should not be the last one */
            /* should also be a branch instruction and have weak pattern */
            if (com_bundle[i + 1].opid[15] & com_bundle[i].brid[7] & (com_bundle[i].pat[0] ^ com_bundle[i].pat[1])) begin
                reinf = 1;
                upc = com_bundle[i].pc + (com_bundle[i].comp ? 0 : 2);
                unpc = com_bundle[i].npc;
                upat = com_bundle[i].pat;
            end
        if (com_bundle[0].opid[15] & com_last.brid[7] & (com_last.pat[0] ^ com_last.pat[1])) begin
            reinf = 1;
            upc = com_last.pc + (com_last.comp ? 0 : 2);
            unpc = com_last.npc;
            upat = com_last.pat;
        end
        /* incomplete fetch occurs and redirect it */
        if (iredir) begin
            redir = 1; reinf = 0;
            upc = ipc; unpc = ipc; upat = 2'b10;
        end
        /* pre-decoder checking redirection */
        if (dredir) begin
            redir = 1; reinf = 0;
            upc = dpc; unpc = dnpc; upat = dpat;
        end
        /* backend redirection, commit bundles include a redirection bundle */
        if (com_bundle[0].redir) begin
            redir = 3;
            upc = com_bundle[0].pc + (com_bundle[0].comp ? 0 : 2);
            unpc = com_bundle[0].npc;
            upat = com_bundle[0].pat;
        end
    end
    always_ff @(posedge clk) if (rst | redir[0]) com_last.brid <= 0;
        else for (int i = 0; i < cwd; i++)
            if (com_bundle[i].opid[15]) com_last <= com_bundle[i];

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
    always_ff @(posedge clk) if (rst | redir[1]) fq_front <= 0;
        else fq_front <= fq_front + $clog2(fqsz)'(fq_out);
    always_ff @(posedge clk) if (rst | redir[1]) fq_num <= 0;
        else fq_num <= fq_num + fq_in - fq_out;
    always_comb begin
        fet_bundle = fq_rvalue;
        for (int i = 0; i < fwd; i++)
            if (i >= fq_num) fet_bundle[i].valid = 0;
    end

    /* PC generation */
    logic        pcg_ready;  // ready to get PC and send to ICACHE
    pcg_bundle_t pcg_bundle; // PC information from PC generation module
    pcgen #(.init(init), .rst_pc(rst_pc), .fnum(fnum), .cbsz(cbsz), .phtsz(phtsz), .btbsz(btbsz))
        pcg_inst(.clk(clk), .rst(rst), .redir(redir[0]), .reinf(reinf),
            .upc(upc), .unpc(unpc), .upat(upat), .ready(pcg_ready), .out(pcg_bundle));

    /* fetch target queue */
    logic [$clog2(ftqsz)-1:0] ftq_front;       // fetch target queue front index]
    logic [$clog2(ftqsz):0] ftq_num;           // fetch target queue size (0 ~ ftqsz)
    logic [$clog2(ftqsz):0] ftq_trn, ftq_acc;  // translated and accessed numbers (0 ~ ftqsz)
    logic          [63:0] ftq_vpc [ftqsz-1:0]; // virtual address of each fetch
    logic          [63:0] ftq_ppc [ftqsz-1:0]; // physical address of each fetch
    logic           [7:0] ftq_br  [ftqsz-1:0]; // branch signal
    logic [fnum-1:0][1:0] ftq_pat [ftqsz-1:0]; // branch pattern
    logic           [7:0] ftq_size[ftqsz-1:0]; // size of fetched data in half-words (0 ~ 8)
    logic   [16*fnum-1:0] ftq_data[ftqsz-1:0]; // the data fetched
    logic                 ftq_pgft[ftqsz-1:0]; // whether encountering page fault
    logic ftq_push, ftq_pop;                   // push or pop signals of FTQ
    logic [7:0] ftq_cur, ftq_next;             // current and next fetch position inside front line
    logic                  f0done, f1done;     // forwarded done signals
    logic [fnum-1:0][15:0] f0data, f1data;     // forwarded data
    logic                  f0pgft, f1pgft;     // forwarded page fault signals
    always_comb pcg_ready = ~pcg_bundle.id[7] | ftq_num < ftqsz;
    always_comb ftq_push = ftq_num < ftqsz & pcg_bundle.id[7] &
        $clog2(ftqsz)'(pcg_bundle.id) - ftq_front == $clog2(ftqsz)'(ftq_num);
    always_comb ftq_pop = ftq_num > 0 & f0done & ftq_next >= ftq_size[ftq_front];
    always_ff @(posedge clk) if (rst | redir[0]) ftq_front <= 0;
        else ftq_front <= ftq_front + (ftq_pop ? 1 : 0);
    always_ff @(posedge clk) if (rst | redir[0]) ftq_num   <= 0;
        else ftq_num <= ftq_num - (ftq_pop ? 1 : 0) + (ftq_push ? 1 : 0);
    always_ff @(posedge clk) if (rst | redir[0]) ftq_trn   <= 0;
        else ftq_trn <= ftq_trn - (ftq_pop ? 1 : 0) + (|it_resp ? 1 : 0);
    always_ff @(posedge clk) if (rst | redir[0]) ftq_acc   <= 0;
        else ftq_acc <= ftq_acc - (ftq_pop ? 1 : 0) + (|ic_resp ? 1 : 0);
    always_ff @(posedge clk)
        if (rst | redir[0]) ftq_cur <= 0;
        else if (ftq_next < ftq_size[ftq_front]) ftq_cur <= ftq_next;
        else ftq_cur <= ftq_next - ftq_size[ftq_front];

    /* forwarding ICACHE response */
    logic [$clog2(ftqsz)-1:0] pos_0, pos_1;
    always_comb pos_0 = ftq_front;
    always_comb pos_1 = ftq_front + 1;
    always_comb begin
        f0done = ftq_acc + (|ic_resp ? 1 : 0) > 0;
        f1done = ftq_acc + (|ic_resp ? 1 : 0) > 1;
        f0data = ftq_acc > 0 ? ftq_data[pos_0] : ic_rdat;
        f1data = ftq_acc > 1 ? ftq_data[pos_1] : ic_rdat;
        f0pgft = ftq_trn > 0 ? ftq_pgft[pos_0] : ~it_perm[3];
        f1pgft = ftq_trn > 1 ? ftq_pgft[pos_1] : ~it_perm[3];
    end

    /* handling ITLB/ICACHE request using fields of FTQ */
    logic [$clog2(ftqsz)-1:0] pos_trn, pos_acc, next_trn, next_acc;
    always_comb pos_trn = ftq_front + $clog2(ftqsz)'(ftq_trn);
    always_comb pos_acc = ftq_front + $clog2(ftqsz)'(ftq_acc);
    always_comb next_trn = pos_trn + (|it_resp ? 1 : 0);
    always_comb next_acc = pos_acc + (|ic_resp ? 1 : 0);
    always_comb it_rqst = ftq_trn + (|it_resp ? 1 : 0) < ftq_num + (ftq_push ? 1 : 0) ? 8'b1000_0010 : 0;
    always_comb it_vadd = ftq_trn + (|it_resp ? 1 : 0) < ftq_num ? ftq_vpc[next_trn] : pcg_bundle.pc;
    always_comb ic_flsh = redir[0];
    always_comb ic_rqst = ftq_acc + (|ic_resp ? 1 : 0) < ftq_trn + (|it_resp ? 1 : 0) ? 8'b1010_0000 : 0;
    always_comb ic_addr = ftq_acc + (|ic_resp ? 1 : 0) < ftq_trn ? ftq_ppc[next_acc] : it_padd;
    always_ff @(posedge clk) begin
        if (ftq_num < ftqsz & pcg_bundle.id[7]) begin // PC generated and to start translation
            ftq_vpc [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.pc;
            ftq_br  [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.br;
            ftq_pat [$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.pat[fnum-1:0];
            ftq_size[$clog2(ftqsz)'(pcg_bundle.id)] <= pcg_bundle.num;
        end
        if (|it_resp) begin // ITLB request done
            ftq_ppc [pos_trn] <= it_padd;
            ftq_pgft[pos_trn] <= ~it_perm[3]; // X permission required
        end
        if (|ic_resp) // ICACHE request done
            ftq_data[pos_acc] <= ic_rdat;
    end

    /* get data in front of queue */
    logic [fnum:0][15:0] fdata;                 // data combined by first two line
    logic          [7:0] fsize, f0size, f1size; // effective size of first two line
    always_comb f0size = f0done ? ftq_size[ftq_front] - ftq_cur : 0;
    always_comb f1size = f1done ? ftq_size[ftq_front + $clog2(ftqsz)'(1)] : 0;
    always_comb if (ftq_num == 0) fsize = 0;
        else    if (ftq_num == 1) fsize = f0size;
        else fsize = f0size + f1size > fnum ? fnum : f0size + f1size;
    always_comb begin
        fdata[fnum-1:0] = f1data << {f0size,  4'd0} | f0data >> {ftq_cur, 4'd0} & ((1 << {f0size, 4'd0}) - 1);
        fdata[fnum] = 0;
    end

    /* generate instructions */
    fet_bundle_t [fwd-1:0] result; // generation results
    logic [7:0] fet_pos[fwd:0];    // position in `fdata` of each instruction
    logic [$clog2(fwd):0] fet_num; // number of successfully fetched instruction in current cycle
    logic [fwd-1:0] incomp;        // incomplete instruction fetch occurs
    logic [fwd-1:0] call, ret;     // call and return signal
    logic [fwd-1:0][7:0] br;       // predicted as instruction flow break
    always_comb begin
        fet_num = 0;
        for (int i = 0; i < fwd; i++)
            if (i < fq_in & result[i].valid) fet_num++;
        if (redir[0]) fet_num = 0;
    end
    always_comb begin
        fet_pos[0] = 0;
        /* recursion calculation of instruction positions in data */
        for (int i = 1; i <= fwd; i++)
            fet_pos[i] = fet_pos[i-1] + (&fdata[fet_pos[i-1]][1:0] ? 2 : 1);
    end
    always_comb ftq_next = ftq_cur + fet_pos[fet_num];
    always_comb begin
        result = 0;
        incomp = 0;
        br = 0;
        for (int i = 0; i < fwd; i++) begin
            result[i].valid = fet_pos[i + 1] <= fsize;
            result[i].ir    = fdata[fet_pos[i]+1-:2];
            result[i].pf[0] = fet_pos[i]     < f0size ? (f0done ? f0pgft : 0) : (f1done ? f1pgft : 0);
            result[i].pf[1] = fet_pos[i] + 1 < f0size ? (f0done ? f0pgft : 0) : (f1done ? f1pgft : 0);
            result[i].pc = fet_pos[i] < f0size ?
                ftq_vpc[ftq_front]                     + 64'({fet_pos[i], 1'b0}) + 64'({ftq_cur, 1'b0}) :
                ftq_vpc[ftq_front + $clog2(ftqsz)'(1)] + 64'({fet_pos[i], 1'b0}) - 64'({f0size, 1'b0});
            result[i].pat = fet_pos[i + 1] <= f0size ?
                ftq_pat[ftq_front]                    [fet_pos[i + 1] + ftq_cur - 1] :
                ftq_pat[ftq_front + $clog2(ftqsz)'(1)][fet_pos[i + 1] - f0size - 1];
            if (fet_pos[i + 1] == f0size)                    br[i] = ftq_br[ftq_front];
            if (fet_pos[i + 1] == f0size + f1size & |f1size) br[i] = ftq_br[ftq_front + $clog2(ftqsz)'(1)];
            if (fet_pos[i] == f0size - 1 & &fdata[f0size - 1][1:0] &
                ftq_vpc[ftq_front] + 64'({ftq_size[ftq_front], 1'b0}) != ftq_vpc[ftq_front + $clog2(ftqsz)'(1)])
                /* breaking into two lines and discontinuous address */
                incomp[i] = 1;
        end
        ipc = ftq_vpc[ftq_front] + 64'({ftq_size[ftq_front] - 8'd1, 1'b0});
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
                ras[ras_top] <= com_bundle[i].pc + (com_bundle[i].comp ? 2 : 4);
            end
        end
    always_ff @(posedge clk) if (rst | redir[1]) call_num <= 0; else call_num <= call_num + call_in - call_out;
    always_ff @(posedge clk) if (rst | redir[1])  ret_num <= 0; else  ret_num <=  ret_num +  ret_in -  ret_out;

    /* pre-decode */
    logic [fwd-1:0]       branch, jalr, jal; // types of instructions
    logic [fwd-1:0][31:0] ir;                // the instructions ready to output
    logic [fwd-1:0][63:0] target;            // instruction and target of branch and jumping
    always_comb for (int i = 0; i < fwd; i++) ir[i] = result[i].ir;
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
        target[i] = result[i].pc + (&ir[i][1:0] ? 4 : 2);
        if (branch[i]) target[i] = result[i].pc + {{52{ir[i][31]}}, ir[i][7],  ir[i][30:25], ir[i][11:8],  1'b0};
        if (jal   [i]) target[i] = result[i].pc + {{44{ir[i][31]}}, ir[i][19:12], ir[i][20], ir[i][30:21], 1'b0};
        if (jalr  [i]) target[i] = ras_target + {{52{ir[i][31]}}, ir[i][31:20]};
        /* compressed jump/branch instructions */
        if (ir[i][15:13] == 3'b101 & ir[i][1:0] == 2'b01) begin // C.J
            jal[i] = 1;
            target[i] = result[i].pc +
                {{53{ir[i][12]}}, ir[i][8], ir[i][10:9], ir[i][6], ir[i][7], ir[i][2], ir[i][11], ir[i][5:3], 1'b0};
        end
        if (ir[i][15:14] == 2'b11 & ir[i][1:0] == 2'b01) begin // C.BEQZ / C.BNEZ
            branch[i] = 1;
            target[i] = result[i].pc + {{56{ir[i][12]}}, ir[i][6:5], ir[i][2], ir[i][11:10], ir[i][4:3], 1'b0};
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
        dredir = 0; dpat = 0; dpc = 0; dnpc = 0;
        call_in = 0; ret_in = 0;
        for (int i = 0; i < fwd; i++) if (fq_in < fqsz - fq_num + fq_out & result[i].valid) begin
            /* ready to fetch into instruction queue */
            /* incomplete fetch detected */
            if (incomp[i]) begin iredir = 1; break; end
            /* fetch confirmed */
            fq_in++;
            if (call[i]) call_in++; // count call/ret instructions into FQ
            if ( ret[i])  ret_in++;
            /* branch at non-branch instructions */
            if (~(branch[i] | jal[i] | jalr[i]) & br[i][7]) begin
                dredir = 1;
                dpat = 2'b10;
                dpc = result[i].pc + (&result[i].ir[1:0] ? 2 : 0);
                dnpc = target[i];
                break;
            end
            /* wrong jump at jal/branch instructions */
            if (jal[i] & ~br[i][7] | (jal[i] | branch[i] & br[i][7]) & target[i][7:1] != br[i][6:0]) begin
                dredir = 1;
                dpat = 2'b01;
                dpc = result[i].pc + (&result[i].ir[1:0] ? 2 : 0);
                dnpc = target[i];
                break;
            end
            /* linked JALR instructions */
            if (ret[i] & |ras_num & ~|call_num & ~|ret_num & target[i][7:1] != br[i][6:0]) begin
                dredir = 1;
                dpat = 2'b01;
                dpc = result[i].pc + (&result[i].ir[1:0] ? 2 : 0);
                dnpc = target[i];
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
