/**
 * vcore.sv:
 *   This is core with verification. It will propagate
 *   interface and extract debug information/states.
 */

typedef struct packed {
    logic [63:0] mstatus;
    logic [63:0] misa;
    logic [63:0] mtvec;
    logic [63:0] mcause;
    logic [63:0] mepc;
    logic [63:0] mtval;
    logic [63:0] stvec;
    logic [63:0] scause;
    logic [63:0] sepc;
    logic [63:0] stval;
    logic [63:0] mip;
} rob_csr_t;

module vcore #(
    parameter fwd,
    parameter dwd,
    parameter rwd,
    parameter ewd,
    parameter cwd,
    parameter mwd,
    parameter hpm,
    parameter rst_pc,
    parameter clint
)(
    input  logic        clk,
    input  logic        rst,
    input  logic [63:0] mip_ext,
    input  logic [63:0] mtime,
    /* interface propagation */
    input  logic        s_coh_lock,
    input  logic  [7:0] s_coh_rqst,
    input  logic  [7:0] s_coh_trsc,
    input  logic [63:0] s_coh_addr,
    output logic  [7:0] s_coh_resp,
    output logic  [7:0] s_coh_mesi,
    output logic        m_coh_lock,
    output logic  [7:0] m_coh_rqst,
    output logic  [7:0] m_coh_trsc,
    output logic [63:0] m_coh_addr,
    input  logic  [7:0] m_coh_resp,
    input  logic  [7:0] m_coh_mesi,
    output logic [63:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    output logic [63:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready,
    /* commit info */
    output logic        cmt       [3:0], // committing signals
    output logic  [1:0] cmt_level [3:0], // privilege level
    output logic [63:0] cmt_pc    [3:0], // program counter
    output logic [31:0] cmt_ir    [3:0], // instruction
    output logic        cmt_gpr   [3:0], // general-purpose register writing signals
    output logic        cmt_csr   [3:0], // control-status register writing signals
    output logic        cmt_mem   [3:0], // memory changing signals
    output logic        cmt_mexc,        // encounter a machine-level exception
    output logic        cmt_sexc,        // encounter a supervisor-level exception
    output logic        cmt_int,         // encounter a taken interrupt
    output logic        cmt_ret,         // encounter a return from exception
    output logic [63:0] cmt_mstatus,     // CSR "mstatus" at commit
    output logic [63:0] cmt_misa,        // CSR "misa" at commit
    output logic [63:0] cmt_mtvec,       // CSR "mtvec" at commit
    output logic [63:0] cmt_mcause,      // CSR "mcause" at commit
    output logic [63:0] cmt_mepc,        // CSR "mepc" at commit
    output logic [63:0] cmt_mtval,       // CSR "mtval" at commit
    output logic [63:0] cmt_stvec,       // CSR "stvec" at commit
    output logic [63:0] cmt_scause,      // CSR "scause" at commit
    output logic [63:0] cmt_sepc,        // CSR "sepc" at commit
    output logic [63:0] cmt_stval,       // CSR "stval" at commit
    output logic [63:0] cmt_mip,         // CSR "mip" at commit
    output logic [63:0] cmt_mcycle,      // CSR "mcycle" at commit
    output logic [63:0] cmt_minstret,    // CSR "minstret" at commit
    output logic [63:0] cmt_mtime,       // CSR "mtime" at commit
    output logic        del_gprw  [3:0], // GPR writing signals
    output logic  [5:0] del_gpra  [3:0], // GPR writing addresses
    output logic [63:0] del_gprv  [3:0], // GPR writing value
    output logic        del_csrw,        // CSR writing signal
    output logic [11:0] del_csra,        // CSR writing address
    output logic [63:0] del_csrv,        // CSR writing value
    output logic  [7:0] del_memw,        // memory change signals
    output logic [63:0] del_mema,        // memory change address
    output logic [63:0] del_memv,        // memory change value
    /* stats */
    output logic [63:0] stallpc, // commit stalling position
    output logic [63:0] bmisp,   // back-end misprediction
    output logic [63:0] fmisp,   // front-end misprediction
    output logic [63:0] brmisp,  // branch misprediction
    output logic [63:0] jmisp,   // jal misprediction
    output logic [63:0] jrmisp,  // jalr misprediction
    output logic [63:0] icmiss,  // icache miss number
    output logic [63:0] dcmiss,  // dcache miss number
    output logic [63:0] stmiss,  // STLB miss number
    output logic [63:0] itmiss,  // ITLB miss number
    output logic [63:0] dtmiss,  // DTLB miss number
    output logic [63:0] loads,   // load instruction number
    output logic [63:0] stores,  // store instruction number
    output logic [63:0] ldck1,   // load check result as 1
    output logic [63:0] ldck2,   // load check result as 2
    output logic [63:0] ldck3,   // load check result as 3
    output logic [63:0] ldfwd,   // load forwarded
    output logic [63:0] ldmisp   // load misprediction
);
    /* instantiate core with direct memory interface */
    logic      [63:0] dbg_cycle;
    logic      [95:0] dbg_pcir0, dbg_pcir1;
    logic      [31:0] dbg_ospid;
    logic       [1:0] dbg_level;
    logic [11:0][3:0] dbg_event;
    crospaxi #(.rst_pc(rst_pc), .hpm(hpm),
        .fwd(fwd), .dwd(dwd), .rwd(rwd), .ewd(ewd), .cwd(cwd), .mwd(mwd)) inst(
        clk, rst, mip_ext, mtime,
        dbg_cycle, dbg_pcir0, dbg_pcir1, dbg_ospid, dbg_level, dbg_event,
        s_coh_lock, s_coh_rqst, s_coh_trsc, s_coh_addr, s_coh_resp, s_coh_mesi,
        m_coh_lock, m_coh_rqst, m_coh_trsc, m_coh_addr, m_coh_resp, m_coh_mesi,
        m_axi_awaddr, m_axi_awlen, m_axi_awsize, m_axi_awburst, m_axi_awvalid, m_axi_awready,
        m_axi_wdata, m_axi_wstrb, m_axi_wlast, m_axi_wvalid, m_axi_wready,
        m_axi_bresp, m_axi_bvalid, m_axi_bready,
        m_axi_araddr, m_axi_arlen, m_axi_arsize, m_axi_arburst, m_axi_arvalid, m_axi_arready,
        m_axi_rdata, m_axi_rresp, m_axi_rlast, m_axi_rvalid, m_axi_rready);

    /* architectural states change */
    rob_csr_t rob_csr[127:0];
    logic [15:0][63:0] st_addr, st_data;
    logic [15:0] [7:0] st_size;
    logic [5:0] st_offset;
    logic [cwd-1:0][15:0] cmt_opid;
    always_comb begin
        for (int i = 0; i < cwd; i++) begin
            cmt      [i] = inst.com_bundle[i].opid[15] &
                          ~inst.com_inst.dec_rvalue[i].lrda[6] &
                          ~inst.com_inst.exe_rvalue[i].cause[7] & ~inst.com_inst.exe_rvalue[i].eret[2];
            cmt_opid [i] = inst.com_bundle[i].opid;
            cmt_level[i] = inst.csr_inst.level;
            cmt_pc   [i] = inst.com_inst.dec_rvalue[i].pc;
            cmt_ir   [i] = inst.com_inst.dec_rvalue[i].ir;
            cmt_gpr  [i] = |inst.com_inst.dec_rvalue[i].lrda[5:0];
            cmt_csr  [i] = inst.com_inst.exe_rvalue[i].csr;
            cmt_mem  [i] = inst.com_inst.exe_rvalue[i].mem;
            del_gprw [i] = cmt[i] & cmt_gpr[i];
            del_gpra [i] = inst.com_inst.dec_rvalue[i].lrda[5:0];
            del_gprv [i] = inst.prf_inst.regfile_inst.regs[32'(inst.com_inst.ren_rvalue[i].prda[1])];
        end
        /* commit of exception instructions will sync with CSR taking exception (after rollback) */
        if ((inst.com_inst.exe_last.cause[7] | inst.com_inst.exe_last.eret[2]) & ~inst.com_inst.rollback) begin
            cmt[0] = 1;
            cmt_opid[0] = inst.com_inst.dec_last.opid;
            cmt_pc[0] = inst.com_inst.dec_last.pc;
            cmt_ir[0] = inst.com_inst.dec_last.ir;
            cmt_gpr[0] = 0;
            cmt_mem[0] = 0;
        end
        cmt_mexc = inst.csr_inst.ein & ~inst.csr_inst.trapintos;
        cmt_sexc = inst.csr_inst.ein &  inst.csr_inst.trapintos;
        cmt_int = inst.csr_inst.ein & inst.csr_inst.cause[63];
        cmt_ret = inst.csr_inst.ret[2];
        cmt_mip = inst.csr_inst.mip;
        /* the CSRs at commit refer to the status before the committed instruction,
            which also reflects the result of last committed instruction */
        cmt_mstatus = rob_csr[7'(cmt_opid[0])].mstatus;
        cmt_misa    = rob_csr[7'(cmt_opid[0])].misa;
        cmt_mtvec   = rob_csr[7'(cmt_opid[0])].mtvec;
        cmt_mcause  = rob_csr[7'(cmt_opid[0])].mcause;
        cmt_mepc    = rob_csr[7'(cmt_opid[0])].mepc;
        cmt_mtval   = rob_csr[7'(cmt_opid[0])].mtval;
        cmt_stvec   = rob_csr[7'(cmt_opid[0])].stvec;
        cmt_scause  = rob_csr[7'(cmt_opid[0])].scause;
        cmt_sepc    = rob_csr[7'(cmt_opid[0])].sepc;
        cmt_stval   = rob_csr[7'(cmt_opid[0])].stval;
        del_csrw = inst.csr_inst.we;
        del_csra = inst.csr_inst.addr;
        del_csrv = inst.csr_inst.wres;
        if (del_csra == 12'h100 || del_csra == 12'h144 || del_csra == 12'h104)
            del_csra = del_csra + 12'h200; // sstatus, sip, sie
        if (del_csra >= 12'hc00 && del_csra <= 12'hc02)
            del_csra = del_csra - 12'h100; // cycle, time, instret
        del_memw = inst.dc_resp[7:4] == 4'b1111 & ~|inst.dc_miss ? st_size[4'(inst.dc_resp)] : 0;
        del_mema = st_addr[4'(inst.dc_resp)];
        del_memv = st_data[4'(inst.dc_resp)];
    end
    /* address and write data stored with request */
    always_comb begin
        st_offset = 0;
        for (int i = 63; i >= 0; i--) if (inst.mmu_inst.s_dc_strb[i]) st_offset = 6'(i);
    end
    always_ff @(posedge clk) if (inst.dc_rqst[7:4] == 4'b1111) begin
        st_addr[4'(inst.dc_rqst)] <= inst.dc_addr;
        st_data[4'(inst.dc_rqst)] <= inst.dc_wdat >> 8 * st_offset;
        st_size[4'(inst.dc_rqst)] <= $countones(inst.mmu_inst.s_dc_strb);
    end
    /* extract CSR info after decode stage */
    always_ff @(posedge clk) for (int i = 0; i < dwd; i++) if (inst.dec_inst.decode[i]) begin
        rob_csr[7'(inst.dec_bundle[i].opid)].mstatus <= inst.csr_inst.mstatus;
        rob_csr[7'(inst.dec_bundle[i].opid)].misa <= inst.csr_inst.misa;
        rob_csr[7'(inst.dec_bundle[i].opid)].mtvec <= inst.csr_inst.mtvec;
        rob_csr[7'(inst.dec_bundle[i].opid)].mcause <= inst.csr_inst.mcause;
        rob_csr[7'(inst.dec_bundle[i].opid)].mepc <= inst.csr_inst.mepc;
        rob_csr[7'(inst.dec_bundle[i].opid)].mtval <= inst.csr_inst.mtval;
        rob_csr[7'(inst.dec_bundle[i].opid)].stvec <= inst.csr_inst.stvec;
        rob_csr[7'(inst.dec_bundle[i].opid)].scause <= inst.csr_inst.scause;
        rob_csr[7'(inst.dec_bundle[i].opid)].sepc <= inst.csr_inst.sepc;
        rob_csr[7'(inst.dec_bundle[i].opid)].stval <= inst.csr_inst.stval;
        rob_csr[7'(inst.dec_bundle[i].opid)].mip <= inst.csr_inst.mip;
    end
    /* between decoding and execution, `mcycle`, `minstret`
       and `mtime` will change, so the state extraction will
       hold values after execution for testbench checking */
    logic read_mtime;
    always_ff @(posedge clk) if (rst) cmt_mcycle <= 0;
        else if (inst.csr_inst.rqst & (inst.csr_inst.addr == 12'hb00 | inst.csr_inst.addr == 12'hc00))
            cmt_mcycle   <= inst.csr_inst.eout ? inst.csr_inst.mcycle   : inst.csr_inst.wres;
    always_ff @(posedge clk) if (rst) cmt_minstret <= 0;
        else if (inst.csr_inst.rqst & (inst.csr_inst.addr == 12'hb02 | inst.csr_inst.addr == 12'hc02))
            cmt_minstret <= inst.csr_inst.eout ? inst.csr_inst.minstret : inst.csr_inst.wres;
    always_ff @(posedge clk) if (rst) cmt_mtime <= 0;
        else if (inst.csr_inst.rqst & inst.csr_inst.addr == 12'hc01)
            cmt_mtime <= inst.csr_inst.eout ? cmt_mtime : inst.csr_inst.wres;
        else if (read_mtime & inst.m_axi_rvalid & inst.m_axi_rready) cmt_mtime <= inst.m_axi_rdata;
    always_ff @(posedge clk) if (rst) read_mtime <= 0;
        else if (inst.m_axi_arvalid & inst.m_axi_arready & inst.m_axi_araddr == clint + 64'hbff8) read_mtime <= 1;
        else if (inst.m_axi_rvalid & inst.m_axi_rready) read_mtime <= 0;

    /* other stats */
    always_comb stallpc = |inst.com_inst.rob_num & ~|inst.com_inst.rob_out ? inst.com_inst.dec_rvalue[0].pc : 0;
    always_ff @(posedge clk) if (rst) {bmisp, brmisp, jmisp, jrmisp, fmisp} <= 0;
        else if (inst.com_inst.mis_bundle.opid[15] & inst.com_inst.mis_bundle.brid[7]) begin
            bmisp <= bmisp + 1;
            if (inst.com_inst.mis_bundle.branch) brmisp <= brmisp + 1;
            if (inst.com_inst.mis_bundle.jal)    jmisp  <= jmisp + 1;
            if (inst.com_inst.mis_bundle.jalr)   jrmisp <= jrmisp + 1;
        end else if (inst.fet_inst.fredir)       fmisp  <= fmisp + 1;
    always_ff @(posedge clk) if (rst) loads  <= 0; else loads  <= loads  + 64'(inst.csr_pmd[5]);
    always_ff @(posedge clk) if (rst) stores <= 0; else stores <= stores + 64'(inst.csr_pmd[6]);
    always_ff @(posedge clk) if (rst) itmiss <= 0; else itmiss <= itmiss + 64'(inst.csr_pmd[7]);
    always_ff @(posedge clk) if (rst) dtmiss <= 0; else dtmiss <= dtmiss + 64'(inst.csr_pmd[8]);
    always_ff @(posedge clk) if (rst) icmiss <= 0; else icmiss <= icmiss + 64'(inst.csr_pmd[9]);
    always_ff @(posedge clk) if (rst) dcmiss <= 0; else dcmiss <= dcmiss + 64'(inst.csr_pmd[10]);
    always_ff @(posedge clk) if (rst) stmiss <= 0; else stmiss <= stmiss + 64'(inst.csr_pmd[11]);
    always_ff @(posedge clk) if (rst) {ldck1, ldck2, ldck3} <= 0; else if (|inst.lsu_inst.ck_resp[0])
        if      (inst.lsu_inst.ck_rslt[0] == 1) ldck1 <= ldck1 + 1;
        else if (inst.lsu_inst.ck_rslt[0] == 2) ldck2 <= ldck2 + 1;
        else if (inst.lsu_inst.ck_rslt[0] == 3) ldck3 <= ldck3 + 1;
    always_ff @(posedge clk) if (rst) ldfwd <= 0;
        else if (|inst.lsu_inst.ck_resp[0] & inst.lsu_inst.ck_forw[0][64]) ldfwd <= ldfwd + 1;
    always_ff @(posedge clk) if (rst) ldmisp <= 0;
        else if (inst.com_inst.exe_last.retry & inst.red_bundle.opid[15]) ldmisp <= ldmisp + 1;

    /* assertion */
    /* parameters */
    always_comb assert(rwd >= cwd);
    always_comb assert(inst.dec_inst.opnum <= inst.dec_inst.opsz);
    always_comb assert(inst.dec_inst.brnum <= inst.dec_inst.brsz);
    /* free list leaking */
    int flnum;
    always_comb flnum = $countones(~inst.ren_inst.fl);
    always_ff @(posedge clk) if (~rst) assert(flnum <= 32'(inst.com_inst.rob_num) + 65);
endmodule

/* firstk module for simulation acceleration */
module firstk #(
    parameter width = 64, // data width
    parameter k     = 4   // the parameter k
)(
    input  logic [width-1:0] bits,
    output logic [k:1][$clog2(width):0] pos // MSB is found bit
);
    int j;
    always_comb begin
        pos = 0; j = 1;
        for (int i = 0; i < width; i++) if (bits[i]) begin
            pos[j] = {1'b1, $clog2(width)'(i)};
            j++;
            if (j == k + 1) break;
        end
    end
endmodule

/* mwpram module for simulation acceleration */
module mwpram #(parameter width = 64, parameter depth = 64,
    parameter rports = 2, parameter wports = 1) (
    input  logic clk,
    input  logic rst,
    input  logic [rports-1:0][$clog2(depth)-1:0] raddr,  // reading addresses
    output logic [rports-1:0]        [width-1:0] rvalue, // reading values
    input  logic [wports-1:0][$clog2(depth)-1:0] waddr,  // writing addresses
    input  logic [wports-1:0]        [width-1:0] wvalue, // writing values
    input  logic [wports-1:0]                    wena    // writing enable
);
    logic [width-1:0] regs[depth-1:0];
    always_ff @(posedge clk) for (int i = 0; i < wports; i++) if (wena[i]) regs[waddr[i]] <= wvalue[i];
    always_comb for (int i = 0; i < rports; i++) rvalue[i] = regs[raddr[i]];
endmodule
