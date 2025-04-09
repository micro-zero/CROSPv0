#include "soc.h"

/*-----------------------------------------------------------*\
|*                      Coherence hub                        *|
\*-----------------------------------------------------------*/

/**
 * @brief Default constructor function of coherence hub
 * @param fnvcd filename of waveform
 */
coherhub::coherhub(const char *fnvcd)
{
    st = cycle = 0;
    vcd = fnvcd ? new (std::nothrow) VerilatedVcdC : NULL;
    if (vcd)
    {
        Verilated::traceEverOn(true);
        dut.trace(vcd, 5);
        vcd->open(fnvcd);
    }
}

/**
 * @brief Destructor of coherence hub
 */
coherhub::~coherhub()
{
    if (vcd)
        vcd->close();
    delete vcd;
}

/**
 * @brief Get coherence port values sending to master
 * @return values on coherence port
 */
cohport_t coherhub::smem() const
{
    cohport_t cp;
    cp.resp = dut.s_mem_resp;
    cp.mesi = dut.s_mem_mesi;
    return cp;
}
cohport_t coherhub::smmu() const
{
    cohport_t cp;
    cp.resp = dut.s_mmu_resp;
    cp.mesi = dut.s_mmu_mesi;
    return cp;
}
cohport_t coherhub::ssdc() const
{
    cohport_t cp;
    cp.resp = dut.s_sdc_resp;
    cp.mesi = dut.s_sdc_mesi;
    return cp;
}

/**
 * @brief Get coherence port values sending to slave
 * @return values on coherence port
 */
cohport_t coherhub::mmem() const
{
    cohport_t cp;
    cp.lock = dut.m_mem_lock;
    cp.rqst = dut.m_mem_rqst;
    cp.addr = dut.m_mem_addr;
    cp.trsc = dut.m_mem_trsc;
    return cp;
}
cohport_t coherhub::mmmu() const
{
    cohport_t cp;
    cp.lock = dut.m_mmu_lock;
    cp.rqst = dut.m_mmu_rqst;
    cp.addr = dut.m_mmu_addr;
    cp.trsc = dut.m_mmu_trsc;
    return cp;
}
cohport_t coherhub::msdc() const
{
    cohport_t cp;
    cp.lock = dut.m_sdc_lock;
    cp.rqst = dut.m_sdc_rqst;
    cp.addr = dut.m_sdc_addr;
    cp.trsc = dut.m_sdc_trsc;
    return cp;
}

/**
 * @brief Set coherence port values from master
 * @param cp the coherence port values
 * @return self reference
 */
axidev &coherhub::smemset(const cohport_t &cp)
{
    dut.s_mem_lock = cp.lock;
    dut.s_mem_rqst = cp.rqst;
    dut.s_mem_addr = cp.addr;
    dut.s_mem_trsc = cp.trsc;
    return *this;
}
axidev &coherhub::smmuset(const cohport_t &cp)
{
    dut.s_mmu_lock = cp.lock;
    dut.s_mmu_rqst = cp.rqst;
    dut.s_mmu_addr = cp.addr;
    dut.s_mmu_trsc = cp.trsc;
    return *this;
}
axidev &coherhub::ssdcset(const cohport_t &cp)
{
    dut.s_sdc_lock = cp.lock;
    dut.s_sdc_rqst = cp.rqst;
    dut.s_sdc_addr = cp.addr;
    dut.s_sdc_trsc = cp.trsc;
    return *this;
}

/**
 * @brief Set coherence port values from slave
 * @param cp the coherence port values
 * @return self reference
 */
axidev &coherhub::mmemset(const cohport_t &cp)
{
    dut.m_mem_resp = cp.resp;
    dut.m_mem_mesi = cp.mesi;
    return *this;
}
axidev &coherhub::mmmuset(const cohport_t &cp)
{
    dut.m_mmu_resp = cp.resp;
    dut.m_mmu_mesi = cp.mesi;
    return *this;
}
axidev &coherhub::msdcset(const cohport_t &cp)
{
    dut.m_sdc_resp = cp.resp;
    dut.m_sdc_mesi = cp.mesi;
    return *this;
}

/**
 * @brief Set reset signal
 * @param value value of rst to set
 */
void coherhub::reset(uint8_t value) { dut.rst = value; }

/**
 * @brief Do clock negedge
 */
void coherhub::negedge() { dut.clk = 0, dut.eval(), st++; }

/**
 * @brief Do clock posedge
 */
void coherhub::posedge() { dut.clk = 1, dut.eval(), st++, cycle++; }

/**
 * @brief Record waveform
 */
void coherhub::record()
{
    if (vcd)
        vcd->dump(st);
}

/**
 * @brief Save to checkpoint file
 * @param fn filename of checkpoint
 */
void coherhub::checkpoint(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedSave save;
    save.open(name);
    if (!save.isOpen())
        return;
    save << dut;
    save.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "wb");
    if (!fp)
        return;
    fwrite(&st, sizeof(st), 1, fp);
    fwrite(&cycle, sizeof(cycle), 1, fp);
    fclose(fp);
    delete[] name;
}

/**
 * @brief Restore from checkpoint file
 * @param fn filename of checkpoint
 * @return -1 if error occurs
 */
int coherhub::restore(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return -1;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedRestore restore;
    restore.open(name);
    if (!restore.isOpen())
        return -1;
    restore >> dut;
    restore.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "rb");
    if (!fp)
        return -1;
    if (fread(&st, sizeof(st), 1, fp) != 1 ||
        fread(&cycle, sizeof(cycle), 1, fp) != 1)
        return -1;
    fclose(fp);
    delete[] name;
    return 0;
}

/*-----------------------------------------------------------*\
|*                  Core with verification                   *|
\*-----------------------------------------------------------*/

/**
 * @brief Default constructor function of verification core
 * @param fnvcd filename of waveform
 */
verifcore::verifcore(const char *fnvcd)
{
    st = cycle = 0;
    vcd = fnvcd ? new (std::nothrow) VerilatedVcdC : NULL;
    if (vcd)
    {
        Verilated::traceEverOn(true);
        dut.trace(vcd, 5);
        vcd->open(fnvcd);
    }
}

/**
 * @brief Destructor of verification core
 */
verifcore::~verifcore()
{
    if (vcd)
        vcd->close();
    delete vcd;
}

/**
 * @brief Get AXI port signals sending to slave
 * @return AXI port values
 */
axiport_t verifcore::m() const
{
    axiport_t ap;
    ap.awid = dut.m_axi_awid;
    ap.awvalid = dut.m_axi_awvalid;
    ap.awaddr = dut.m_axi_awaddr;
    ap.awburst = dut.m_axi_awburst;
    ap.awlen = dut.m_axi_awlen;
    ap.awsize = dut.m_axi_awsize;
    ap.arid = dut.m_axi_arid;
    ap.arvalid = dut.m_axi_arvalid;
    ap.araddr = dut.m_axi_araddr;
    ap.arburst = dut.m_axi_arburst;
    ap.arlen = dut.m_axi_arlen;
    ap.arsize = dut.m_axi_arsize;
    ap.wvalid = dut.m_axi_wvalid;
    ap.wdata = dut.m_axi_wdata;
    ap.wstrb = dut.m_axi_wstrb;
    ap.wlast = dut.m_axi_wlast;
    ap.rready = dut.m_axi_rready;
    ap.bready = dut.m_axi_bready;
    return ap;
}

/**
 * @brief Set values on AXI port from slave
 * @param ap data of AXI port from slave
 * @return the object
 */
axidev &verifcore::mset(const axiport_t &ap)
{
    dut.m_axi_awready = ap.awready;
    dut.m_axi_arready = ap.arready;
    dut.m_axi_wready = ap.wready;
    dut.m_axi_rid = ap.rid;
    dut.m_axi_rvalid = ap.rvalid;
    dut.m_axi_rresp = ap.rresp;
    dut.m_axi_rdata = ap.rdata;
    dut.m_axi_rlast = ap.rlast;
    dut.m_axi_bid = ap.bid;
    dut.m_axi_bvalid = ap.bvalid;
    dut.m_axi_bresp = ap.bresp;
    return *this;
}

/**
 * @brief Get coherence port values sending to master
 * @return values on coherence port
 */
cohport_t verifcore::sc() const
{
    cohport_t cp;
    cp.resp = dut.s_coh_resp;
    cp.mesi = dut.s_coh_mesi;
    return cp;
}

/**
 * @brief Get coherence port values sending to slave
 * @return values on coherence port
 */
cohport_t verifcore::mc() const
{
    cohport_t cp;
    cp.lock = dut.m_coh_lock;
    cp.rqst = dut.m_coh_rqst;
    cp.addr = dut.m_coh_addr;
    cp.trsc = dut.m_coh_trsc;
    return cp;
}

/**
 * @brief Set coherence port values from master
 * @param cp the coherence port values
 * @return self reference
 */
axidev &verifcore::scset(const cohport_t &cp)
{
    dut.s_coh_lock = cp.lock;
    dut.s_coh_rqst = cp.rqst;
    dut.s_coh_addr = cp.addr;
    dut.s_coh_trsc = cp.trsc;
    return *this;
}

/**
 * @brief Set coherence port values from slave
 * @param cp the coherence port values
 * @return self reference
 */
axidev &verifcore::mcset(const cohport_t &cp)
{
    dut.m_coh_resp = cp.resp;
    dut.m_coh_mesi = cp.mesi;
    return *this;
}

/**
 * @brief Extract commit info
 * @param cmts commit data destination
 * @return self reference
 */
verifcore &verifcore::operator>>(cmts_t &cmts)
{
    for (int i = 0; i < CWD; i++)
        if (dut.cmt[i])
            cmts.push({.cycle = cycle,
                       .time = dut.cmt_mtime,
                       .level = dut.cmt_level[i],
                       .pc = dut.cmt_pc[i],
                       .ir = dut.cmt_ir[i],
                       .gpr = dut.cmt_gpr[i],
                       .csr = dut.cmt_csr[i],
                       .mem = dut.cmt_mem[i],
                       .mexc = dut.cmt_mexc && (i == 3 || !dut.cmt[i + 1]), // last commit
                       .sexc = dut.cmt_sexc && (i == 3 || !dut.cmt[i + 1]),
                       .intr = dut.cmt_int,
                       .ret = dut.cmt_ret && (i == 3 || !dut.cmt[i + 1]),
                       .mstatus = dut.cmt_mstatus,
                       .misa = dut.cmt_misa,
                       .mtvec = dut.cmt_mtvec,
                       .mcause = dut.cmt_mcause,
                       .mepc = dut.cmt_mepc,
                       .mtval = dut.cmt_mtval,
                       .stvec = dut.cmt_stvec,
                       .scause = dut.cmt_scause,
                       .sepc = dut.cmt_sepc,
                       .stval = dut.cmt_stval,
                       .mip = dut.cmt_mip,
                       .mcycle = dut.cmt_mcycle,
                       .minstret = dut.cmt_minstret});
    return *this;
}

/**
 * @brief Extract delta info
 * @param dels delta data destination
 * @return self reference
 */
verifcore &verifcore::operator>>(dels_t &dels)
{
    for (int i = 0; i < CWD; i++)
        if (dut.del_gprw[i])
            dels.gprs.push({.w = 1, .a = dut.del_gpra[i], .v = dut.del_gprv[i]});
    if (dut.del_memw)
        dels.mems.push({.w = dut.del_memw, .a = dut.del_mema, .v = dut.del_memv});
    if (dut.del_csrw)
        dels.csrs.push({.w = 1, .a = dut.del_csra, .v = dut.del_csrv});
    return *this;
}

verifcore &verifcore::operator>>(stat_t &stat)
{
    stat.fmisp = dut.fmisp;
    stat.bmisp = dut.bmisp;
    stat.brmisp = dut.brmisp;
    stat.jmisp = dut.jmisp;
    stat.jrmisp = dut.jrmisp;
    stat.icmiss = dut.icmiss;
    stat.dcmiss = dut.dcmiss;
    stat.loads = dut.loads;
    stat.stores = dut.stores;
    stat.stmiss = dut.stmiss;
    stat.itmiss = dut.itmiss;
    stat.dtmiss = dut.dtmiss;
    stat.check[0] = dut.ldck1;
    stat.check[1] = dut.ldck2;
    stat.check[2] = dut.ldck3;
    stat.fwd = dut.ldfwd;
    stat.ldmisp = dut.ldmisp;
    return *this;
}

/**
 * @brief Set reset signal
 * @param value value of rst to set
 */
void verifcore::reset(uint8_t value) { dut.rst = value; }

/**
 * @brief Do clock negedge
 */
void verifcore::negedge() { dut.clk = 0, dut.eval(), st++; }

/**
 * @brief Do clock posedge
 */
void verifcore::posedge() { dut.clk = 1, dut.eval(), st++, cycle++; }

/**
 * @brief Record waveform
 */
void verifcore::record()
{
    if (vcd)
        vcd->dump(st);
}

/**
 * @brief Save to checkpoint file
 * @param fn filename of checkpoint
 */
void verifcore::checkpoint(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedSave save;
    save.open(name);
    if (!save.isOpen())
        return;
    save << dut;
    save.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "wb");
    if (!fp)
        return;
    fwrite(&st, sizeof(st), 1, fp);
    fwrite(&cycle, sizeof(cycle), 1, fp);
    fclose(fp);
    delete[] name;
}

/**
 * @brief Restore from checkpoint file
 * @param fn filename of checkpoint
 * @return -1 if error occurs
 */
int verifcore::restore(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return -1;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedRestore restore;
    restore.open(name);
    if (!restore.isOpen())
        return -1;
    restore >> dut;
    restore.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "rb");
    if (!fp)
        return -1;
    if (fread(&st, sizeof(st), 1, fp) != 1 ||
        fread(&cycle, sizeof(cycle), 1, fp) != 1)
        return -1;
    fclose(fp);
    delete[] name;
    return 0;
}

/*-----------------------------------------------------------*\
|*                   Interrupt controller                    *|
\*-----------------------------------------------------------*/

/**
 * @brief Constructor function of interrupt controller
 * @param fnvcd filename of waveform
 * @param fnsave filename of saved checkpoint
 */
intctl::intctl(const char *fnvcd)
{
    st = cycle = 0;
    wrec = {0, 0, 0};
    vcd = fnvcd ? new (std::nothrow) VerilatedVcdC : NULL;
    if (vcd)
    {
        Verilated::traceEverOn(true);
        dut.trace(vcd, 5);
        vcd->open(fnvcd);
    }
}

/**
 * @brief Destructor of interrupt controller
 */
intctl::~intctl()
{
    if (vcd)
        vcd->close();
    delete vcd;
}

/**
 * @brief Get AXI port signals sending to master
 * @return AXI port values
 */
axiport_t intctl::s() const
{
    axiport_t ap;
    ap.arid = dut.s_axi_arid;
    ap.awid = dut.s_axi_awid;
    ap.awready = dut.s_axi_awready;
    ap.arready = dut.s_axi_arready;
    ap.wready = dut.s_axi_wready;
    ap.rvalid = dut.s_axi_rvalid;
    ap.rresp = dut.s_axi_rresp;
    ap.rdata = dut.s_axi_rdata;
    ap.rlast = dut.s_axi_rlast;
    ap.bvalid = dut.s_axi_bvalid;
    ap.bresp = dut.s_axi_bresp;
    return ap;
}

/**
 * @brief Set values on AXI port from master
 * @param ap data of AXI port from master
 * @return the object
 */
axidev &intctl::sset(const axiport_t &ap)
{
    dut.s_axi_awid = ap.awid;
    dut.s_axi_awvalid = ap.awvalid;
    dut.s_axi_awaddr = ap.awaddr;
    dut.s_axi_awburst = ap.awburst;
    dut.s_axi_awlen = ap.awlen;
    dut.s_axi_awsize = ap.awsize;
    dut.s_axi_arid = ap.arid;
    dut.s_axi_arvalid = ap.arvalid;
    dut.s_axi_araddr = ap.araddr;
    dut.s_axi_arburst = ap.arburst;
    dut.s_axi_arlen = ap.arlen;
    dut.s_axi_arsize = ap.arsize;
    dut.s_axi_wvalid = ap.wvalid;
    dut.s_axi_wdata = ap.wdata;
    dut.s_axi_wstrb = ap.wstrb;
    dut.s_axi_wlast = ap.wlast;
    dut.s_axi_rready = ap.rready;
    dut.s_axi_bready = ap.bready;
    return *this;
}

/**
 * @brief Extract delta info
 * @param dels delta data destination
 * @return self reference
 */
intctl &intctl::operator>>(dels_t &dels)
{
    if (dut.s_axi_bvalid && dut.s_axi_bready && wrec.w)
        dels.mems.push(wrec);
    return *this;
}

/**
 * @brief Set reset signal
 * @param value value of rst to set
 */
void intctl::reset(uint8_t value) { dut.rst = value; }

/**
 * @brief Do clock negedge
 */
void intctl::negedge() { dut.clk = 0, dut.eval(), st++; }

/**
 * @brief Do clock posedge
 */
void intctl::posedge()
{
    if (dut.s_axi_awvalid && dut.s_axi_awready)
        wrec.a = dut.s_axi_awaddr;
    if (dut.s_axi_wvalid && dut.s_axi_wready)
    {
        wrec.v = dut.s_axi_wdata;
        if (dut.s_axi_wstrb == 0x1)
            wrec.w = 1;
        else if (dut.s_axi_wstrb == 0x3)
            wrec.w = 2;
        else if (dut.s_axi_wstrb == 0xf)
            wrec.w = 4;
        else
            wrec.w = 8;
    }
    if (dut.s_axi_arvalid && dut.s_axi_arready)
        raddr = dut.s_axi_araddr;
    dut.clk = 1, dut.eval(), st++, cycle++;
}

/**
 * @brief Record waveform
 */
void intctl::record()
{
    if (vcd)
        vcd->dump(st);
}

/**
 * @brief Save to checkpoint file
 * @param fn checkpoint file name
 */
void intctl::checkpoint(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedSave save;
    save.open(name);
    if (!save.isOpen())
        return;
    save << dut;
    save.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "wb");
    if (!fp)
        return;
    fwrite(&st, sizeof(st), 1, fp);
    fwrite(&cycle, sizeof(cycle), 1, fp);
    fwrite(&wrec, sizeof(wrec), 1, fp);
    fwrite(&raddr, sizeof(raddr), 1, fp);
    fclose(fp);
    delete[] name;
}

/**
 * @brief Restore from checkpoint file
 * @param fn checkpoint file name
 * @return -1 if error occurs
 */
int intctl::restore(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return -1;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedRestore restore;
    restore.open(name);
    if (!restore.isOpen())
        return -1;
    restore >> dut;
    restore.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "rb");
    if (!fp)
        return -1;
    if (fread(&st, sizeof(st), 1, fp) != 1 ||
        fread(&cycle, sizeof(cycle), 1, fp) != 1 ||
        fread(&wrec, sizeof(wrec), 1, fp) != 1 ||
        fread(&raddr, sizeof(raddr), 1, fp) != 1)
        return -1;
    fclose(fp);
    delete[] name;
    return 0;
}

/*-----------------------------------------------------------*\
|*                    SD card controller                     *|
\*-----------------------------------------------------------*/

/**
 * @brief Constructor function of SD card controller
 * @param fnvcd filename of waveform
 * @param fnimg filename of disk image
 */
sdctl::sdctl(const char *fnvcd, const char *fnimg)
{
    st = cycle = 0;
    vcd = fnvcd ? new (std::nothrow) VerilatedVcdC : NULL;
    img = fnimg ? fopen(fnimg, "ab+") : NULL;
    cnum = rnum = rmax = dnum = dmax = (uint64_t)-1;
    cstt = 0;
    bwd = 1;
    blen = 512;
    if (vcd)
    {
        Verilated::traceEverOn(true);
        dut.trace(vcd, 5);
        vcd->open(fnvcd);
    }
}

/**
 * @brief Destructor of SD card controller
 */
sdctl::~sdctl()
{
    if (vcd)
        vcd->close();
    delete vcd;
    if (img)
        fclose(img);
}

/**
 * @brief Get AXI port signals sending to slave
 * @return AXI port values
 */
axiport_t sdctl::m() const
{
    axiport_t ap;
    ap.awid = 0;
    ap.awvalid = dut.m_axi_awvalid;
    ap.awaddr = dut.m_axi_awaddr;
    ap.awburst = dut.m_axi_awburst;
    ap.awlen = dut.m_axi_awlen;
    ap.awsize = dut.m_axi_awsize;
    ap.arid = 0;
    ap.arvalid = dut.m_axi_arvalid;
    ap.araddr = dut.m_axi_araddr;
    ap.arburst = dut.m_axi_arburst;
    ap.arlen = dut.m_axi_arlen;
    ap.arsize = dut.m_axi_arsize;
    ap.wvalid = dut.m_axi_wvalid;
    ap.wdata = dut.m_axi_wdata;
    ap.wstrb = dut.m_axi_wstrb;
    ap.wlast = dut.m_axi_wlast;
    ap.rready = dut.m_axi_rready;
    ap.bready = dut.m_axi_bready;
    return ap;
}

/**
 * @brief Get AXI port signals sending to master
 * @return AXI port values
 */
axiport_t sdctl::s() const
{
    axiport_t ap;
    ap.arid = 0;
    ap.awid = 0;
    ap.awready = dut.s_axi_awready;
    ap.arready = dut.s_axi_arready;
    ap.wready = dut.s_axi_wready;
    ap.rvalid = dut.s_axi_rvalid;
    ap.rresp = dut.s_axi_rresp;
    ap.rdata = dut.s_axi_rdata;
    ap.rlast = 1;
    ap.bvalid = dut.s_axi_bvalid;
    ap.bresp = dut.s_axi_bresp;
    return ap;
}

/**
 * @brief Set values on AXI port from slave
 * @param ap data of AXI port from slave
 * @return the object
 */
axidev &sdctl::mset(const axiport_t &ap)
{
    dut.m_axi_awready = ap.awready;
    dut.m_axi_arready = ap.arready;
    dut.m_axi_wready = ap.wready;
    dut.m_axi_rvalid = ap.rvalid;
    dut.m_axi_rresp = ap.rresp;
    dut.m_axi_rdata = ap.rdata;
    dut.m_axi_rlast = ap.rlast;
    dut.m_axi_bvalid = ap.bvalid;
    dut.m_axi_bresp = ap.bresp;
    return *this;
}

/**
 * @brief Set values on AXI port from master
 * @param ap data of AXI port from master
 * @return the object
 */
axidev &sdctl::sset(const axiport_t &ap)
{
    dut.s_axi_awvalid = ap.awvalid;
    dut.s_axi_awaddr = ap.awaddr;
    dut.s_axi_arvalid = ap.arvalid;
    dut.s_axi_araddr = ap.araddr;
    dut.s_axi_wvalid = ap.wvalid;
    dut.s_axi_wdata = ap.wdata;
    dut.s_axi_rready = ap.rready;
    dut.s_axi_bready = ap.bready;
    return *this;
}

/**
 * @brief Get coherence port values sending to master
 * @return values on coherence port
 */
cohport_t sdctl::sc() const
{
    cohport_t cp;
    cp.resp = dut.s_coh_resp;
    cp.mesi = dut.s_coh_mesi;
    return cp;
}

/**
 * @brief Get coherence port values sending to slave
 * @return values on coherence port
 */
cohport_t sdctl::mc() const
{
    cohport_t cp;
    cp.lock = dut.m_coh_lock;
    cp.rqst = dut.m_coh_rqst;
    cp.addr = dut.m_coh_addr;
    cp.trsc = dut.m_coh_trsc;
    return cp;
}

/**
 * @brief Set coherence port values from master
 * @param cp the coherence port values
 * @return self reference
 */
axidev &sdctl::scset(const cohport_t &cp)
{
    dut.s_coh_lock = cp.lock;
    dut.s_coh_rqst = cp.rqst;
    dut.s_coh_addr = cp.addr;
    dut.s_coh_trsc = cp.trsc;
    return *this;
}

/**
 * @brief Set coherence port values from slave
 * @param cp the coherence port values
 * @return self reference
 */
axidev &sdctl::mcset(const cohport_t &cp)
{
    dut.m_coh_resp = cp.resp;
    dut.m_coh_mesi = cp.mesi;
    return *this;
}

/**
 * @brief Set reset signal
 * @param value value of rst to set
 */
void sdctl::reset(uint8_t value)
{
    dut.rst = value;
    dut.sd_cmd_i = 1;
    dut.sd_dat_i = 0xf;
}

/**
 * @brief Do clock negedge
 */
void sdctl::negedge() { dut.clk = 0, dut.eval(), st++; }

/**
 * @brief Do clock posedge
 */
void sdctl::posedge()
{
    uint8_t sclkold = dut.sd_sclk;
    dut.clk = 1, dut.eval(), st++, cycle++;
    if (!sclkold && dut.sd_sclk) // posedge sclk
    {
        if (dut.sd_cmd_t) // host command input
        {
            if (rnum != (uint64_t)-1) // sending and counting
                dut.sd_cmd_i = restk[rnum++];
            if (rnum == rmax)
                rnum = (uint64_t)-1;
        }
        else // host command output
        {
            if (cnum != (uint64_t)-1) // receiving and counting
                cmdtk[cnum++] = dut.sd_cmd_o;
            if (cnum == 47) // stop bit
            {
                cnum = (uint64_t)-1;
                uint8_t cmd = 0, crc7 = 0;
                uint32_t arg = 0;
                for (int i = 1; i <= 6; i++)
                    cmd = (cmd << 1) | cmdtk[i];
                for (int i = 7; i <= 38; i++)
                    arg = (arg << 1) | cmdtk[i];
                for (int i = 39; i <= 45; i++)
                    crc7 = (crc7 << 1) | cmdtk[i];
                uint16_t calc = 0;
                for (int i = 0; i < 39; i++)
                    calc = (calc << 1 ^ (cmdtk[i] ^ calc >> 6) ^ (cmdtk[i] ^ calc >> 6) << 3) & 0x7f;
                if (crc7 != calc)
                    fprintf(stderr, "[Warning] CRC error: CMD=%d ARG=%x CRC7=%x\n", cmd, arg, crc7);
                if (cmd == 0)
                    ;
                else if (cmd == 7 && rca == arg >> 16 || cmd == 16 || cmd == 17 || // R1 response
                         cmd == 55 || cmd == 6)
                {
                    if (cmd == 55)
                        ; // todo: should check RCA
                    if (cmd == 16)
                        blen = arg;
                    if (cmd == 6)
                        bwd = (arg & 3) == 0 ? 1 : 4;
                    if (cmd == 17)
                        if (img)
                        {
                            fseek(img, arg * blen, SEEK_SET);
                            uint8_t *block = new (std::nothrow) uint8_t[blen];
                            if (!block || fread(block, 1, blen, img) != blen)
                                fprintf(stderr, "[Warning] Read disk image error: block addr: 0x%x\n", arg);
                            if (block && bwd == 1)
                            {
                                dnum = 0;
                                dmax = blen * 8 + 18;
                                dat[0] = 0;
                                for (int i = 0; i < blen * 8; i++)
                                    dat[i + 1] = block[i / 8] >> (7 - i % 8) & 0x1;
                                calc = 0;
                                for (int i = 0; i <= blen * 8; i++)
                                    calc = calc << 1 ^ (dat[i] ^ calc >> 15) ^
                                           (dat[i] ^ calc >> 15) << 5 ^ (dat[i] ^ calc >> 15) << 12;
                                for (int i = 0; i < 16; i++)
                                    dat[blen * 8 + 1 + i] = (calc >> 15 - i) & 0x1;
                                dat[blen * 8 + 17] = 1;
                                for (int i = 0; i < blen * 8 + 18; i++)
                                    dat[i] |= 0xe;
                            }
                            delete[] block;
                        }
                        else
                            fprintf(stderr, "[Warning] Read command detected but no image open\n");
                    rnum = 0; // assemble output
                    rmax = 48;
                    memset(restk, 0, sizeof(restk));
                    for (int i = 0; i < 4; i++)
                        restk[27 + i] = (cstt >> 3 - i) & 0x1; // current state
                    restk[31] = 1;                             // ready for data
                    restk[34] = 1;                             // APP CMD
                    for (int i = 0; i < 6; i++)
                        restk[2 + i] = (cmd >> 5 - i) & 0x1;
                    restk[47] = 1;
                    calc = 0;
                    for (int i = 0; i < 40; i++)
                        calc = (calc << 1 ^ (restk[i] ^ calc >> 6) ^ (restk[i] ^ calc >> 6) << 3) & 0x7f;
                    for (int i = 0; i < 7; i++)
                        restk[40 + i] = (calc >> 6 - i) & 0x1;
                }
                else if (cmd == 2) // R2 response
                {
                    cstt = 2; // ident state
                    rnum = 0;
                    rmax = 136;
                    memset(restk, 0, sizeof(restk));
                    for (int i = 0; i < 6; i++)
                        restk[2 + i] = 1;
                    restk[135] = 1;
                }
                else if (cmd == 41) // R3 response
                {
                    cstt = 1; // ready state
                    rnum = 0;
                    rmax = 48;
                    memset(restk, 0, sizeof(restk));
                    restk[8] = 1; // initialization complete
                    for (int i = 0; i < 6; i++)
                        restk[2 + i] = 1;
                    restk[47] = 1;
                    for (int i = 0; i < 7; i++)
                        restk[40 + i] = 1;
                }
                else if (cmd == 3) // R6 response
                {
                    cstt = 3; // stby state
                    rnum = 0;
                    rmax = 48;
                    rca = arg >> 16;
                    memset(restk, 0, sizeof(restk));
                    for (int i = 0; i < 4; i++)
                        restk[27 + i] = (cstt >> 3 - i) & 0x1; // current state
                    restk[31] = 1;                             // ready for data
                    restk[34] = 1;                             // APP CMD
                    for (int i = 0; i < 6; i++)
                        restk[2 + i] = (cmd >> 5 - i) & 0x1;
                    for (int i = 0; i < 16; i++)
                        restk[8 + i] = (rca >> 15 - i) & 0x1;
                    restk[47] = 1;
                    calc = 0;
                    for (int i = 0; i < 40; i++)
                        calc = (calc << 1 ^ (restk[i] ^ calc >> 6) ^ (restk[i] ^ calc >> 6) << 3) & 0x7f;
                    for (int i = 0; i < 7; i++)
                        restk[40 + i] = (calc >> 6 - i) & 0x1;
                }
                else if (cmd == 8) // R7 response
                {
                    rnum = 0;
                    rmax = 48;
                    memset(restk, 0, sizeof(restk));
                    for (int i = 0; i < 8; i++)
                        restk[32 + i] = (arg >> 7 - i) & 0x1; // voltage accepted
                    for (int i = 0; i < 4; i++)
                        restk[28 + i] = (arg >> 11 - i) & 0x1; // check pattern
                    for (int i = 0; i < 6; i++)
                        restk[2 + i] = (cmd >> 5 - i) & 0x1;
                    restk[47] = 1;
                    calc = 0;
                    for (int i = 0; i < 40; i++)
                        calc = (calc << 1 ^ (restk[i] ^ calc >> 6) ^ (restk[i] ^ calc >> 6) << 3) & 0x7f;
                    for (int i = 0; i < 7; i++)
                        restk[40 + i] = (calc >> 6 - i) & 0x1;
                }
                else
                    fprintf(stderr, "[Warning] Unsupported command: CMD=%d ARG=%x\n", cmd, arg);
            }
            if (cnum == (uint64_t)-1 && dut.sd_cmd_o == 0) // start bit
                cnum = 0;
        }
        if (dut.sd_dat_t) // host data input
        {
            if (dnum != (uint64_t)-1) // sending and counting
                dut.sd_dat_i = dat[dnum], dnum++;
            if (dnum == dmax)
                dnum = (uint64_t)-1;
        }
        else // host data output
            ;
    }
}

/**
 * @brief Record waveform
 */
void sdctl::record()
{
    if (vcd)
        vcd->dump(st);
}

/**
 * @brief Save to checkpoint file
 * @param fn checkpoint file name
 */
void sdctl::checkpoint(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedSave save;
    save.open(name);
    if (!save.isOpen())
        return;
    save << dut;
    save.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "wb");
    if (!fp)
        return;
    fwrite(&st, sizeof(st), 1, fp);
    fwrite(&cycle, sizeof(cycle), 1, fp);
    fwrite(&cnum, sizeof(cnum), 1, fp);
    fwrite(&cmdtk, sizeof(cmdtk), 1, fp);
    fwrite(&rnum, sizeof(rnum), 1, fp);
    fwrite(&rmax, sizeof(rmax), 1, fp);
    fwrite(&restk, sizeof(restk), 1, fp);
    fwrite(&cstt, sizeof(cstt), 1, fp);
    fwrite(&rca, sizeof(rca), 1, fp);
    fwrite(&bwd, sizeof(bwd), 1, fp);
    fwrite(&blen, sizeof(blen), 1, fp);
    fwrite(&dat, sizeof(dat), 1, fp);
    fwrite(&dnum, sizeof(dnum), 1, fp);
    fwrite(&dmax, sizeof(dmax), 1, fp);
    fclose(fp);
    delete[] name;
}

/**
 * @brief Restore from checkpoint file
 * @param fn checkpoint file name
 * @return -1 if error occurs
 */
int sdctl::restore(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return -1;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedRestore restore;
    restore.open(name);
    if (!restore.isOpen())
        return -1;
    restore >> dut;
    restore.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "rb");
    if (!fp)
        return -1;
    if (fread(&st, sizeof(st), 1, fp) != 1 ||
        fread(&cycle, sizeof(cycle), 1, fp) != 1 ||
        fread(&cnum, sizeof(cnum), 1, fp) != 1 ||
        fread(&cmdtk, sizeof(cmdtk), 1, fp) != 1 ||
        fread(&rnum, sizeof(rnum), 1, fp) != 1 ||
        fread(&rmax, sizeof(rmax), 1, fp) != 1 ||
        fread(&restk, sizeof(restk), 1, fp) != 1 ||
        fread(&cstt, sizeof(cstt), 1, fp) != 1 ||
        fread(&rca, sizeof(rca), 1, fp) != 1 ||
        fread(&bwd, sizeof(bwd), 1, fp) != 1 ||
        fread(&blen, sizeof(blen), 1, fp) != 1 ||
        fread(&dat, sizeof(dat), 1, fp) != 1 ||
        fread(&dnum, sizeof(dnum), 1, fp) != 1 ||
        fread(&dmax, sizeof(dmax), 1, fp) != 1)
        return -1;
    fclose(fp);
    delete[] name;
    return 0;
}

/*-----------------------------------------------------------*\
|*                      UART controller                      *|
\*-----------------------------------------------------------*/

/**
 * @brief Constructor function of UART controller
 * @param fnvcd filename of waveform
 * @param fnsave filename of saved checkpoint
 */
uartctl::uartctl(const char *fnvcd)
{
    st = cycle = 0;
    div = CPUFREQ / BAUD;
    cnum = (uint64_t)-1;
    buf = 0;
    vcd = fnvcd ? new (std::nothrow) VerilatedVcdC : NULL;
    if (vcd)
    {
        Verilated::traceEverOn(true);
        dut.trace(vcd, 5);
        vcd->open(fnvcd);
    }
}

/**
 * @brief Destructor of UART controller
 */
uartctl::~uartctl()
{
    if (vcd)
        vcd->close();
    delete vcd;
}

/**
 * @brief Get AXI port signals sending to master
 * @return AXI port values
 */
axiport_t uartctl::s() const
{
    axiport_t ap;
    ap.arid = 0;
    ap.awid = 0;
    ap.awready = dut.s_axi_awready;
    ap.arready = dut.s_axi_arready;
    ap.wready = dut.s_axi_wready;
    ap.rvalid = dut.s_axi_rvalid;
    ap.rresp = dut.s_axi_rresp;
    ap.rdata = dut.s_axi_rdata;
    ap.rlast = 1;
    ap.bvalid = dut.s_axi_bvalid;
    ap.bresp = dut.s_axi_bresp;
    return ap;
}

/**
 * @brief Set values on AXI port from master
 * @param ap data of AXI port from master
 * @return the object
 */
axidev &uartctl::sset(const axiport_t &ap)
{
    dut.s_axi_awvalid = ap.awvalid;
    dut.s_axi_awaddr = ap.awaddr;
    dut.s_axi_arvalid = ap.arvalid;
    dut.s_axi_araddr = ap.araddr;
    dut.s_axi_wvalid = ap.wvalid;
    dut.s_axi_wdata = ap.wdata;
    dut.s_axi_rready = ap.rready;
    dut.s_axi_bready = ap.bready;
    return *this;
}

/**
 * @brief Set reset signal
 * @param value value of rst to set
 */
void uartctl::reset(uint8_t value) { dut.rst = value; }

/**
 * @brief Do clock negedge
 */
void uartctl::negedge() { dut.clk = 0, dut.eval(), st++; }

/**
 * @brief Do clock posedge
 */
void uartctl::posedge()
{
    uint8_t txold = dut.TxD;
    dut.clk = 1, dut.eval(), st++, cycle++;
    if (cnum == (uint64_t)-1 && txold && !dut.TxD) // idle and negedge
    {
        cnum = 0; // receive start bit
        buf = 0;
    }
    if (cnum != -1) // receiving and counting
        cnum++;
    for (int i = 0; i < 10; i++)
        if (cnum == i * div + div / 2) // sampling i-th bit
            if (i == 9)
                putchar(buf), cnum = -1; // stop bit
            else if (i > 0)
                buf |= dut.TxD << i - 1;
}

/**
 * @brief Record waveform
 */
void uartctl::record()
{
    if (vcd)
        vcd->dump(st);
}

/**
 * @brief Save to checkpoint file
 * @param fn checkpoint file name
 */
void uartctl::checkpoint(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedSave save;
    save.open(name);
    if (!save.isOpen())
        return;
    save << dut;
    save.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "wb");
    if (!fp)
        return;
    fwrite(&st, sizeof(st), 1, fp);
    fwrite(&cycle, sizeof(cycle), 1, fp);
    fwrite(&div, sizeof(div), 1, fp);
    fwrite(&cnum, sizeof(cnum), 1, fp);
    fwrite(&buf, sizeof(buf), 1, fp);
    fclose(fp);
    delete[] name;
}

/**
 * @brief Restore from checkpoint file
 * @param fn checkpoint file name
 * @return -1 if error occurs
 */
int uartctl::restore(const char *fn)
{
    char *name = new (std::nothrow) char[strlen(fn) + 16];
    if (!name)
        return -1;
    strcpy(name, fn);
    strcat(name, ".0"); // verilator checkpoint file
    VerilatedRestore restore;
    restore.open(name);
    if (!restore.isOpen())
        return -1;
    restore >> dut;
    restore.close();
    strcpy(name, fn);
    strcat(name, ".1"); // class dump file
    FILE *fp = fopen(name, "rb");
    if (!fp)
        return -1;
    if (fread(&st, sizeof(st), 1, fp) != 1 ||
        fread(&cycle, sizeof(cycle), 1, fp) != 1 ||
        fread(&div, sizeof(div), 1, fp) != 1 ||
        fread(&cnum, sizeof(cnum), 1, fp) != 1 ||
        fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    fclose(fp);
    delete[] name;
    return 0;
}
