#include <cstdio>
#include <cstdint>
#include <string>
#include <vector>
#include <queue>
#include <map>

#define MEMINIT_ELF 0
#define MEMINIT_BIN 1
#define MEMINIT_HEX 2

extern const char *gprname[64];
extern std::map<uint16_t, const char *> csrname;
extern std::vector<std::string> pmpname;

typedef struct
{
    uint8_t awvalid, awready, awburst, awlen, awsize;
    uint64_t awaddr;
    uint8_t wvalid, wready, wlast, wstrb;
    uint64_t wdata;
    uint8_t arvalid, arready, arburst, arlen, arsize;
    uint64_t araddr;
    uint8_t rvalid, rready, rlast, rresp;
    uint64_t rdata;
    uint8_t bvalid, bready, bresp;
} axiport_t;

typedef struct
{
    uint8_t lock;
    uint8_t rqst, trsc;
    uint64_t addr;
    uint8_t resp, mesi;
} cohport_t;

typedef struct
{
    uint64_t fromhost = 0, tohost = 0, lock = 0;
} htifaddr_t;

/**
 *  Double word with bit operation
 *  ------------------------------
 *  This is abstract memory to handle AXI slave requests except
 *  those of verilog implemented and simulated slave
 *  objects.
 */
class bits
{
private:
    uint64_t data;

public:
    bits();
    bits(uint64_t ui);
    explicit bits(double d);
    explicit bits(float f);
    operator uint64_t() const;
    explicit operator double() const;
    explicit operator float() const;
    uint8_t operator[](uint8_t i) const;
    uint64_t operator++(int);
    bits &operator>>=(int x);
    bits &operator|=(uint64_t x);
    bits range(uint8_t s, uint8_t e) const;
    int64_t sext(int w) const;
    bits &write(uint8_t s, uint8_t e, uint64_t x);
    bits &write(uint8_t i, uint64_t x);
};

/**
 *  AXI device
 *  ----------
 *  This is AXI device class to provide common methods
 */
class axidev
{
public:
    virtual void reset(uint8_t value) = 0;
    virtual void negedge() = 0;
    virtual void posedge() = 0;
    virtual void record() = 0;
    virtual void checkpoint(const char *fn) = 0;
    virtual int restore(const char *fn) = 0;
    virtual axiport_t m() const;
    virtual axiport_t s() const;
    virtual axidev &mset(const axiport_t &ap);
    virtual axidev &sset(const axiport_t &ap);
    virtual cohport_t mc() const;
    virtual cohport_t sc() const;
    virtual axidev &mcset(const cohport_t &cp);
    virtual axidev &scset(const cohport_t &cp);
};

/**
 *  Segmented memory
 *  ----------------
 *  This is abstract memory to handle AXI slave requests except
 *  those of verilog implemented and simulated slave
 *  objects.
 */
class memory : public axidev
{
private:
    uint64_t segfault;                 // returned entity when segfault
    axiport_t axiport;                 // AXI port
    axiport_t axibuff;                 // AXI value buffer
    uint8_t rbursti, wbursti;          // AXI burst index
    cohport_t mcport, scport;          // coherence port
    cohport_t mcbuff, scbuff;          // coherence buffer
    uint8_t scsent;                    // slave coherence sent
    std::map<uint64_t, uint8_t> owner; // block owner
    char errstr[128];                  // error string

public:
    std::vector<uint64_t> base;     // segment base address list
    std::vector<uint64_t> size;     // segment size list
    std::vector<uint8_t *> ptr;     // segment pointer list
    uint64_t entry;                 // program entry
    uint64_t hexsz;                 // hex code size in bytes
    uint64_t dtbaddr;               // device tree storing address
    uint64_t initrdaddr;            // initial ramdisk address
    htifaddr_t htifaddr;            // HTIF addresses
    std::vector<const char *> args; // program arguments
    memory *smem;                   // simulation memory pointer
    uint64_t htifexit;              // HTIF exit data
    std::vector<uint8_t> cin;       // character input buffer
    memory();
    memory(const memory &b);
    const char *init(const char *fname, const char *dtb, const char *initrd, uint8_t ftype,
                     std::vector<const char *> args,
                     uint64_t entry = 0xc0000000,
                     uint64_t dtbaddr = 0xc0001000,
                     uint64_t initrdaddr = 0xf0000000);
    ~memory();
    bool add(uint64_t size, uint64_t base);
    bool copy(uint8_t *ptr, uint64_t size, uint64_t base);
    bool load(FILE *fp, uint64_t size, uint64_t base);
    void reset(uint8_t value);
    void negedge();
    void posedge();
    void record();
    void checkpoint(const char *fn);
    int restore(const char *fn);
    uint8_t &ui8(uint64_t addr);
    uint16_t &ui16(uint64_t addr);
    uint32_t &ui32(uint64_t addr);
    uint64_t &ui64(uint64_t addr);
    uint8_t &operator[](uint64_t addr);
    axiport_t s() const;
    axidev &sset(const axiport_t &ap);
    cohport_t mc() const;
    cohport_t sc() const;
    axidev &mcset(const cohport_t &cp);
    axidev &scset(const cohport_t &cp);
    memory &operator=(const memory &b);
};

typedef struct
{
    uint64_t pc = 0x80000000ull;
    uint32_t ir;
    memory mem;
    uint8_t level = 3;
    bits gpr[64];
    std::map<std::string, bits> csr = {
        {"mstatus", 0xa00002000ull},
        {"misa", 0x800000000014112d}, // USMIFDCA
        {"mcause", 0},
        {"mcycle", 0},
        {"pmpcfg0", 0},
        {"pmpcfg1", 0},
        {"pmpcfg2", 0},
        {"tselect", -1ul}};
    std::map<uint64_t, uint8_t> rsrv;
} state_t;

typedef struct
{
    uint8_t level;      // NEXT level
    uint64_t pc;        // NEXT pc
    uint8_t gprw, memw; // gprw: [01]  memw: [01248] (rsrv: r+0x80/w+0xc0)
    uint64_t gpra, mema;
    uint64_t gprv, memv;
    std::map<std::string, bits> csr;
} delta_t;

uint64_t paddr(memory &mem, bits satp, bits vaddr, bits perm = 0, bool adpf = 1);
std::string disas(uint32_t ir);
delta_t next(state_t &s, uint8_t *plsize = NULL, uint64_t *pladdr = NULL);
void apply(state_t &s, delta_t delta);
uint64_t htif(memory &mem, htifaddr_t &addr, std::vector<const char *> &pkargs, memory *pmem = 0,
              std::map<uint64_t, uint8_t> *owner = 0, uint64_t *pval = 0, std::vector<uint8_t> *cin = 0);
char nbgetchar();
void print(uint64_t cycle, state_t &state, const delta_t &delta);
void print(state_t &s, uint64_t addr = 0, uint64_t size = 0);
void dumpmem(const uint8_t *mem, uint64_t base, uint64_t size);
void disasmem(const uint8_t *mem, uint64_t base, uint64_t size);
