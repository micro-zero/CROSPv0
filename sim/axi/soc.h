#include "verif.h"
#include "Vvcore.h"
#include "Vclint.h"
#include "Vplic.h"
#include "Vcohub.h"
#include "Vsdc.h"
#include "Veth.h"
#include "Vuart.h"
#include <verilated_vcd_c.h>
#include <queue>

#ifndef CWD
#define CWD 4
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
#ifndef PLIC
#define PLIC 0x0c000000
#endif
#ifndef CLINT
#define CLINT 0x02000000
#endif
#ifndef ETH
#define ETH 0x60020000
#endif
#ifndef SDC
#define SDC 0x60000000
#endif
#ifndef UART
#define UART 0x60010000
#endif
#ifndef CPUFREQ
#define CPUFREQ 1000000
#endif
#ifndef TBFREQ
#define TBFREQ 500000
#endif
#ifndef BAUD
#define BAUD 115200
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
    uint64_t check[3], fwd, ldmisp;  // load check result
} stat_t;

/**
 *  Coherence hub
 *  ----------------
 *  This is coherence hub to interconnect coherence interfaces.
 */
class coherhub : public axidev
{
private:
    uint64_t st, cycle; // simulation time and cycle
    Vcohub dut;         // design under test
    VerilatedVcdC *vcd; // trace pointer

public:
    coherhub(const char *fnvcd = 0);
    ~coherhub();
    cohport_t mmem() const;
    cohport_t smem() const;
    axidev &mmemset(const cohport_t &cp);
    axidev &smemset(const cohport_t &cp);
    cohport_t mmmu() const;
    cohport_t smmu() const;
    axidev &mmmuset(const cohport_t &cp);
    axidev &smmuset(const cohport_t &cp);
    cohport_t msdc() const;
    cohport_t ssdc() const;
    axidev &msdcset(const cohport_t &cp);
    axidev &ssdcset(const cohport_t &cp);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};

/**
 *  Core with verification
 *  ----------------------
 *  The core with verificaton is implemented by verilog.
 */
class verifcore : public axidev
{
private:
    uint64_t st, cycle; // simulation time and cycle
    Vvcore dut;         // design under test
    VerilatedVcdC *vcd; // trace pointer

public:
    uint64_t &mtime = dut.mtime; // interrupt controller ports
    uint64_t &mip_ext = dut.mip_ext;
    verifcore(const char *fnvcd = 0);
    ~verifcore();
    axiport_t m() const;
    axidev &mset(const axiport_t &ap);
    cohport_t mc() const;
    cohport_t sc() const;
    axidev &mcset(const cohport_t &cp);
    axidev &scset(const cohport_t &cp);
    verifcore &operator>>(cmts_t &cmts);
    verifcore &operator>>(dels_t &dels);
    verifcore &operator>>(stat_t &stat);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};

/**
 *  CLINT (core-local interruptor)
 *  --------------------
 *  The CLINT is implemented by verilog.
 */
class clint : public axidev
{
private:
    uint64_t st, cycle; // simulation time and cycle
    del_t wrec;         // write transaction record
    uint64_t raddr;     // read transaction address
    Vclint dut;         // design under test
    VerilatedVcdC *vcd; // trace pointer

public:
    uint64_t &int_pend = dut.int_pend;
    uint64_t &int_time = dut.int_time;
    clint(const char *fnvcd = 0);
    ~clint();
    axiport_t s() const;
    axidev &sset(const axiport_t &ap);
    clint &operator>>(dels_t &dels);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};

/**
 *  PLIC (platform-level interrupt controller)
 *  --------------------
 *  The PLIC is implemented by verilog.
 */
class plic : public axidev
{
private:
    uint64_t st, cycle; // simulation time and cycle
    Vplic dut;          // design under test
    VerilatedVcdC *vcd; // trace pointer

public:
    uint64_t &int_pend = dut.int_pend;
    uint8_t &int_vect = dut.int_vect;
    plic(const char *fnvcd = 0);
    ~plic();
    axiport_t s() const;
    axidev &sset(const axiport_t &ap);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};

/**
 *  UART controller
 *  ------------------
 *  The UART controller is implemented by verilog.
 */
class uartctl : public axidev
{
private:
    uint64_t st, cycle;       // simulation time and cycle
    Vuart dut;                // design under test
    VerilatedVcdC *vcd;       // trace pointer
    uint64_t div, rnum, tnum; // cycle division and number from start bit
    uint8_t rxq;              // receive queue (buffer)
    std::vector<uint8_t> txq; // transmission queue
public:
    uint8_t &intr = dut.intr;
    uartctl(const char *fnvcd = 0);
    ~uartctl();
    axiport_t s() const;
    axidev &sset(const axiport_t &ap);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};

/**
 *  SD card controller
 *  ------------------
 *  The SD card controller is implemented by verilog.
 */
class sdctl : public axidev
{
private:
    uint64_t st, cycle;      // simulation time and cycle
    Vsdc dut;                // design under test
    VerilatedVcdC *vcd;      // trace pointer
    FILE *img;               // image file pointer
    uint64_t cnum;           // command number from start bit
    uint8_t cmdtk[47];       // command token
    uint64_t rnum, rmax;     // response number from start bit
    uint8_t restk[136];      // response token
    uint8_t cstt;            // card state
    uint8_t acmd;            // indication of ACMD
    uint8_t cmd;             // command code
    uint16_t rca;            // relative card address
    uint8_t csd[16];         // card specific data
    uint64_t scr;            // SD card configuration register
    uint8_t bwd;             // bus width
    uint32_t blen;           // block length
    uint8_t dat[4114];       // data buffer
    uint32_t di, dblk, dnum; // data numbers
    uint32_t dadd;           // data read/write addresses
    uint8_t dcmd;            // send long CMD response on data line
public:
    uint8_t &intr = dut.intr;
    sdctl(const char *fnvcd = 0, const char *fnimg = 0);
    ~sdctl();
    axiport_t m() const;
    axiport_t s() const;
    axidev &mset(const axiport_t &ap);
    axidev &sset(const axiport_t &ap);
    cohport_t mc() const;
    cohport_t sc() const;
    axidev &mcset(const cohport_t &cp);
    axidev &scset(const cohport_t &cp);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};

/**
 *  Ethernet controller
 *  ------------------
 *  The ethernet controller is implemented by verilog.
 */
class ethctl : public axidev
{
private:
    uint64_t st, cycle; // simulation time and cycle
    Veth dut;           // design under test
    VerilatedVcdC *vcd; // trace pointer
public:
    uint8_t &intr = dut.intr;
    ethctl(const char *fnvcd = 0);
    ~ethctl();
    axiport_t m() const;
    axiport_t s() const;
    axidev &mset(const axiport_t &ap);
    axidev &sset(const axiport_t &ap);
    // cohport_t mc() const;
    // cohport_t sc() const;
    // axidev &mcset(const cohport_t &cp);
    // axidev &scset(const cohport_t &cp);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
};
