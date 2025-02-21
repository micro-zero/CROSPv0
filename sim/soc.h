#include "verif.h"
#include "Vvcore.h"
#include "Vintc.h"
#include <verilated_vcd_c.h>
#include <queue>

#ifndef PWD
#define PWD 4
#endif
#ifndef INITRD
#define INITRD 0xfe60fe00
#endif
#ifndef DTBADDR
#define DTBADDR 0xc0001000
#endif
#ifndef RST_PC
#define RST_PC 0xc0000000
#endif
#ifndef DCBASE
#define DCBASE 0x80000000
#endif
#ifndef UART
#define UART 0x10000000
#endif
#ifndef CLINT
#define CLINT 0x02000000
#endif
#ifndef CPUFREQ
#define CPUFREQ 20000000
#endif
#ifndef TBFREQ
#define TBFREQ 10000000
#endif

typedef struct
{
    uint64_t w, a, v;
} del_t;

typedef struct
{
    std::queue<del_t> gprs, mems, csrs;
} dels_t;

typedef struct
{
    uint64_t cycle, time;
    uint8_t level;
    uint64_t pc;
    uint32_t ir;
    uint8_t gpr, csr, mem;
    /* CSRs that may change when trap or return from trap */
    uint64_t mexc, sexc, intr, ret, mstatus, misa, mtvec, mcause, mepc, mtval;
    uint64_t stvec, scause, sepc, stval, mip, mcycle, minstret;
} cmt_t;

typedef std::queue<cmt_t> cmts_t;

typedef struct
{
    uint64_t fmisp, bmisp;           // frontend/backend mispredictions
    uint64_t brmisp, jmisp, jrmisp;  // branch/jal/jalr mispredictions
    uint64_t icmiss, dcmiss;         // cache miss numbers
    uint64_t loads, stores;          // load/store numbers
    uint64_t stmiss, itmiss, dtmiss; // S/I/DTLB miss numbers
} stat_t;

/**
 *  Core with verification
 *  ----------------------
 *  The core with verificaton is implemented by verilog.
 */
class verifcore : public axidev
{
private:
    uint64_t st, cycle;  // simulation time and cycle
    Vvcore dut;          // design under test
    VerilatedVcdC *vcd;  // trace pointer
    VerilatedSave *save; // checkpoint pointer

public:
    uint8_t &rst = dut.rst;
    uint64_t &mtime = dut.mtime;
    uint64_t &mip_ext = dut.mip_ext;
    uint8_t &scrqst = dut.s_coh_rqst, &mcrqst = dut.m_coh_rqst;
    uint8_t &sctrsc = dut.s_coh_trsc, &mctrsc = dut.m_coh_trsc;
    uint8_t &scresp = dut.s_coh_resp, &mcresp = dut.m_coh_resp;
    uint64_t &scaddr = dut.s_coh_addr, &mcaddr = dut.m_coh_addr;
    verifcore(const char *fnvcd = 0, const char *fnsave = 0);
    ~verifcore();
    operator axiport_t() const;
    axidev &operator<=(const axiport_t &ap);
    verifcore &operator>>(cmts_t &cmts);
    verifcore &operator>>(dels_t &dels);
    verifcore &operator>>(stat_t &stat);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
};

/**
 *  Interrupt controller
 *  --------------------
 *  The interrupt controller is implemented by verilog.
 */
class intctl : public axidev
{
private:
    uint64_t st, cycle;  // simulation time and cycle
    del_t wrec;          // write transaction record
    uint64_t raddr;      // read transaction address
    Vintc dut;           // design under test
    VerilatedVcdC *vcd;  // trace pointer
    VerilatedSave *save; // checkpoint pointer

public:
    uint64_t &int_pend = dut.int_pend;
    uint64_t &int_time = dut.int_time;
    intctl(const char *fnvcd = 0, const char *fnsave = 0);
    ~intctl();
    operator axiport_t() const;
    axidev &operator<<(const axiport_t &ap);
    intctl &operator>>(dels_t &dels);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
};
