#include "soc.h"

/*-----------------------------------------------------------*\
|*                  Core with verification                   *|
\*-----------------------------------------------------------*/

/**
 * @brief Default constructor function of verification core
 * @param fnvcd filename of waveform
 * @param fnsave filename of saved checkpoint
 */
verifcore::verifcore(const char *fnvcd)
{
    st = cycle = 0;
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
verifcore::operator axiport_t() const
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
axidev &verifcore::operator<=(const axiport_t &ap)
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
 * @brief Extract commit info
 * @param cmts commit data destination
 * @return self reference
 */
verifcore &verifcore::operator>>(cmts_t &cmts)
{
    for (int i = 0; i < PWD; i++)
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
    for (int i = 0; i < PWD; i++)
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
    if (fread(&st, sizeof(st), 1, fp) < 0 ||
        fread(&cycle, sizeof(cycle), 1, fp) < 0)
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
intctl::operator axiport_t() const
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
axidev &intctl::operator<<(const axiport_t &ap)
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
    if (fread(&st, sizeof(st), 1, fp) < 0 ||
        fread(&cycle, sizeof(cycle), 1, fp) < 0 ||
        fread(&wrec, sizeof(wrec), 1, fp) < 0 ||
        fread(&raddr, sizeof(raddr), 1, fp) < 0)
        return -1;
    fclose(fp);
    delete[] name;
    return 0;
}
