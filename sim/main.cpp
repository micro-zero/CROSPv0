#include <cstdio>
#include <queue>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <signal.h>
#include "soc.h"

#define DEV_ITER(statement) \
    for (auto d : dev)      \
        statement;

typedef struct
{
    const char *file = 0, *dtb = 0, *initrd = 0, *dump = 0;
    std::vector<const char *> args;
    uint8_t sim = 0, verbose = 0, vcd = 0, help = 0, filetype = MEMINIT_ELF;
    int mintime = 0, maxtime = INT32_MAX;
} cmd_t;

int interrupt = 0;
void intrhandler(int) { fprintf(stderr, "[Info] Interrupted\n"), interrupt = 1; }

bool check(delta_t del, delta_t ref, memory &localmem)
{
    if (del.level != ref.level || del.pc != ref.pc)
        return false;
    del.memv &= (del.memw == 8 ? -1ul : (1ul << (del.memw & 0xf) * 8) - 1);
    ref.memv &= (ref.memw == 8 ? -1ul : (1ul << (ref.memw & 0xf) * 8) - 1);
    if (del.memw >> 4 == 0x8)
        del.memv = ref.memv = 0;
    if (del.gprw != ref.gprw || del.memw != ref.memw)
        return false;
    if (del.gprw && (del.gpra != ref.gpra || del.gprv != ref.gprv))
        if (!(ref.ldlocal && del.gprv == localmem.ui64(ref.ldaddr)))
            /* in load value axiom of RVWMO, the load value can be not only the global
               memory value, but also local store value
               this could happen when setting HTIF fromhost by host machine */
            return false;
    if (del.memw && (del.mema != ref.mema || del.memv != ref.memv))
        return false;
    ref.csr.erase("mcycle");
    del.csr.erase("mcycle");
    ref.csr.erase("minstret");
    del.csr.erase("minstret");
    ref.csr.erase("mip");
    del.csr.erase("mip");
    for (auto i : ref.csr)
        if (del.csr.find(i.first) != del.csr.end() & del.csr[i.first] == i.second)
            del.csr.erase(i.first);
        else
            return false;
    if (!del.csr.empty())
        return false;
    return true;
}

int main(int argc, char *argv[])
{
    /* Read command line */
    cmd_t cmd;
    for (int i = 1; i < argc; i++)
        if (argv[i][0] == '-' && cmd.file == NULL)
        {
            int j = 1;
            while (argv[i][j] == '-')
                j++;
            if (strcmp(argv[i] + j, "bin") == 0)
                cmd.filetype = MEMINIT_BIN;
            else if (strcmp(argv[i] + j, "hex") == 0)
                cmd.filetype = MEMINIT_HEX;
            else if (strcmp(argv[i] + j, "elf") == 0)
                cmd.filetype = MEMINIT_ELF;
            else if (strcmp(argv[i] + j, "dtb") == 0)
                cmd.dtb = argv[++i];
            else if (strcmp(argv[i] + j, "initrd") == 0)
                cmd.initrd = argv[++i];
            else if (strcmp(argv[i] + j, "dump") == 0)
                cmd.dump = argv[++i];
            else if (strcmp(argv[i] + j, "t") == 0)
            {
                if (i + 1 < argc)
                    cmd.mintime = atoi(argv[i + 1]);
                if (i + 2 < argc)
                    cmd.maxtime = atoi(argv[i + 2]);
                if (cmd.mintime <= 0)
                    cmd.mintime = 0;
                if (cmd.maxtime <= 0)
                    cmd.maxtime = INT32_MAX;
                i += 2;
            }
            else if (strcmp(argv[i] + j, "w") == 0)
                cmd.vcd = 1;
            else if (strcmp(argv[i] + j, "v") == 0)
                cmd.verbose = 1;
            else if (strcmp(argv[i] + j, "s") == 0)
                cmd.sim = 1;
            else if (strcmp(argv[i] + j, "h") == 0)
                cmd.help = 1;
        }
        else if (cmd.file == NULL)
            cmd.args.push_back(cmd.file = argv[i]);
        else
            cmd.args.push_back(argv[i]);
    if (!cmd.help && cmd.file == NULL)
        printf("Not enough arguments\n"), cmd.help = 1;
    if (cmd.help)
    {
        printf("Usage: exec [options] file [arguments]\n");
        printf("Available options:\n");
        printf("    -bin: (force) load binary file\n");
        printf("    -hex: (force) load hex text file\n");
        printf("    -elf: (default) load RISC-V ELF executable\n");
        printf("    -dtb `binary`: specify device tree binary\n");
        printf("    -initrd `binary`: specify initial rootfs\n");
        printf("    -dump `binary`: specify memory output file\n");
        printf("    -t `t1` `t2`: simulation time between `t1` and `t2`\n");
        printf("    -s: run and check with simulator\n");
        printf("    -v: verbose mode\n");
        printf("    -w: output waveform\n");
        return 0;
    }
    fprintf(stderr, "[Info] Running simulation in %s mode with:\n[Info]     ",
            cmd.filetype == MEMINIT_ELF ? "elf" : (cmd.filetype == MEMINIT_HEX ? "hex" : "bin"));
    for (int i = 0; i < cmd.args.size(); i++)
        fprintf(stderr, " %s", cmd.args[i]);
    fprintf(stderr, "\n");
    if (cmd.vcd)
        fprintf(stderr, "[Info] Recording waveform in files: vcore.vcd, intc.vcd\n");

    /* Device registration */
    memory amem;
    verifcore vrcr(cmd.vcd ? "vcore.vcd" : NULL, cmd.sim ? "vcore.save" : NULL);
    intctl intc(cmd.vcd ? "intc.vcd" : NULL, cmd.sim ? "intc.save" : NULL);
    std::vector<axidev *> dev({&amem, &vrcr, &intc}); // AXI device references
    const char *err = amem.init(
        cmd.file, cmd.dtb, cmd.initrd, cmd.filetype, RST_PC, DTBADDR, INITRD, UART);
    if (err)
        return fputs(err, stderr), 255;
    if (cmd.dump)
    {
        fprintf(stderr, "[Info] Dumping memory to file: %s\n", cmd.dump);
        FILE *fp = fopen(cmd.dump, "wb");
        if (!fp)
            return fprintf(stderr, "[Error] Cannot open file %s\n", cmd.dump), 255;
        for (int i = 0; i < 0x4000000; i++)
            fwrite(&amem[(INITRD - 0x80000000 + i) % 0x40000000 + 0x80000000], 1, 1, fp);
        fclose(fp);
        fprintf(stderr, "[Info] Memory dumped\n");
    }

    /* Simulation */
    uint64_t cycle = 0, instret = 0, checkpc = 0, checkir = 0;
    uint64_t emptycycle = 0, stablecycle = 0;
    cmts_t cmts;
    dels_t dels;
    const char *exitcause = NULL;
    uint8_t exitcode = 0;
    uint8_t len = 0;
    axidev *master = NULL, *slave = NULL;
    axiport_t zero;
    uint64_t htifexit;
    uint8_t syncdone;       // local register for buffering "sync_done" signal
    memory localmem = amem; // record local store values
    state_t sim;
    sim.pc = amem.entry, sim.mem = amem, sim.csr["mtime"] = CLINT + 0xbff8;
    memset(&zero, 0, sizeof(zero));
    signal(SIGINT, intrhandler);
    while (!exitcause)
    {
        /* reset */
        if (cycle == 0)
            for (auto d : dev)
                d->reset(1);
        if (cycle == 8)
            for (auto d : dev)
                d->reset(0);

        /* clock negedge */
        for (auto d : dev)
            d->negedge();
        if (cycle >= cmd.mintime) // no AXI synchronization required
            for (auto d : dev)
                d->record();

        /* clock posedge */
        for (auto d : dev)
            d->posedge();
        for (auto d : dev) // AXI interconnection
            *d << zero, *d <= zero;
        if (!master) // search for a transaction request from master
        {
            uint64_t addr;
            axiport_t vap = vrcr;
            if (vap.arvalid)
                master = &vrcr, addr = vap.araddr, len = vap.arlen;
            else if (vap.awvalid)
                master = &vrcr, addr = vap.awaddr, len = vap.awlen;
            if (master) // classify destinations by address
            {
                slave = &amem;
                if (addr >= CLINT && addr < CLINT + 0xc0000)
                    slave = &intc;
                else if (addr >= UART && addr < UART + 0x10)
                    ; // function proxied by abstract memory
                else if (vap.awvalid & addr < DCBASE)
                    fprintf(stderr, "[Warning] Writing to unregistered address %lx\n", addr);
            }
        }
        if (master) // in-flight transaction
        {
            *slave << *master, *master <= *slave; // synchronization between AXI objects
            axiport_t ap = *master;
            if (ap.bvalid && ap.bready || ap.rvalid && ap.rready && (ap.rlast || !len))
                master = slave = 0; // current transaction finished
        }
        vrcr.mtime = intc.int_time; // VCORE -- INTC
        vrcr.mip_ext = intc.int_pend;
        vrcr.sync_rqst = 0; // other signals synchronized by host
        vrcr.sync_invl = syncdone;
        syncdone = vrcr.sync_done;
        if (cycle >= cmd.mintime)
            for (auto d : dev)
                d->record();

        /* state check */
        vrcr >> cmts >> dels; // extract from DUT of vcore
        intc >> dels;
        while (cmts.size() > 1)
        {
            state_t stt; // for print
            delta_t del;
            uint64_t cyc = cmts.front().cycle;
            uint8_t mexc = cmts.front().mexc, sexc = cmts.front().sexc;
            uint8_t intr = cmts.front().intr, ret = cmts.front().ret;
            stt.level = cmts.front().level;
            stt.pc = checkpc = cmts.front().pc;
            stt.ir = checkir = cmts.front().ir;
            if (cmd.sim)
            {
                sim.csr["mip"] = intr ? cmts.front().mip : 0;
                sim.csr["mcycle"] = cmts.front().mcycle;
                sim.csr["minstret"] = cmts.front().minstret;
                sim.mem.ui64(CLINT + 0xbff8) = cmts.front().time;
#ifdef BYPHTIF
                sim.mem.ui64(amem.htifaddr.fromhost) = amem.ui64(amem.htifaddr.fromhost);
                sim.mem.ui64(amem.htifaddr.tohost) = amem.ui64(amem.htifaddr.tohost);
#endif
            }
            if (cmts.front().gpr && !dels.gprs.empty())
            {
                del.gprw = 1;
                del.gpra = dels.gprs.front().a;
                del.gprv = dels.gprs.front().v;
                dels.gprs.pop();
            }
            else
                del.gprw = 0;
            if (cmts.front().mem && !dels.mems.empty())
            {
                del.memw = dels.mems.front().w;
                del.mema = dels.mems.front().a;
                del.memv = dels.mems.front().v;
                dels.mems.pop();
                /* when target write into shared space (tohost related),
                   host memory is incoherent, and needs synchronization */
#ifndef BYPHTIF
                if (del.memw && del.mema == amem.htifaddr.tohost && del.memv)
                    vrcr.sync_rqst = 1; // except HTIF addresses bypassed
#endif
            }
            else
                del.memw = 0;
            if (cmts.front().csr && !dels.csrs.empty() && !mexc && !sexc)
            {
                if (csrname.find(dels.csrs.front().a) != csrname.end())
                    del.csr[csrname[dels.csrs.front().a]] = dels.csrs.front().v;
                dels.csrs.pop();
            }
            cmts.pop();
            instret++;
            del.level = cmts.front().level; // some value deltas use info of next committed instruction
            del.pc = cmts.front().pc;
            if (del.csr.find("mstatus") != del.csr.end() || ret) // some CSRs with WARL fields
                del.csr["mstatus"] = cmts.front().mstatus;
            if (del.csr.find("misa") != del.csr.end())
                del.csr["misa"] = cmts.front().misa;
            if (del.csr.find("mtvec") != del.csr.end())
                del.csr["mtvec"] = cmts.front().mtvec;
            if (del.csr.find("stvec") != del.csr.end())
                del.csr["stvec"] = cmts.front().stvec;
            if (mexc)
            {
                del.csr["mstatus"] = cmts.front().mstatus;
                del.csr["mcause"] = cmts.front().mcause;
                del.csr["mepc"] = cmts.front().mepc;
                del.csr["mtval"] = cmts.front().mtval;
            }
            if (sexc)
            {
                del.csr["mstatus"] = cmts.front().mstatus;
                del.csr["scause"] = cmts.front().scause;
                del.csr["sepc"] = cmts.front().sepc;
                del.csr["stval"] = cmts.front().stval;
            }
            if (cmd.verbose && cyc >= cmd.mintime)
                print(cyc, stt, del);
            if (cmd.sim)
            {
                delta_t delsim = next(sim);
                if (delsim.memw >> 4 == 0x8) // DUT does not consider LR as memory change instruction
                {
                    del.memw = delsim.memw;
                    del.mema = delsim.mema;
                    del.memv = delsim.memv;
                }
                else if (delsim.memw >> 4 == 0xc) // DUT consider SC as normal store
                    del.memw = delsim.memw;
                if (!check(del, delsim, localmem))
                {
                    fprintf(stderr, "[Debug] ------ Difference detected ------\n");
                    fprintf(stderr, "[Debug] DUT/SIM:\n");
                    print(cyc, stt, del);
                    print(cycle, sim, delsim);
                    fprintf(stderr, "[Debug] DUT CSRs:");
                    for (auto i : del.csr)
                        if (i.first != "mcycle" && i.first != "minstret")
                            fprintf(stderr, " %s: %lx", i.first.c_str(), (uint64_t)i.second);
                    fprintf(stderr, " npc: %lx\n", del.pc);
                    fprintf(stderr, "[Debug] SIM CSRs:");
                    for (auto i : delsim.csr)
                        if (i.first != "mcycle" && i.first != "minstret")
                            fprintf(stderr, " %s: %lx", i.first.c_str(), (uint64_t)i.second);
                    fprintf(stderr, " npc: %lx\n", delsim.pc);
                    fprintf(stderr, "[Debug] ---------------------------------\n");
                    exitcause = "checking failure", exitcode = 255;
                }
                localmem.ui64(del.mema) = del.memv;
                apply(sim, del);
            }
            emptycycle = 0;
            if (cmd.filetype == MEMINIT_HEX && cmd.maxtime == INT32_MAX)
                if (del.level == stt.level && del.pc == stt.pc && !del.gprw && !del.memw)
                    stablecycle++;
                else
                    stablecycle = 0;
            if (cmd.filetype == MEMINIT_HEX && stablecycle > 16)
                exitcause = "reaching stable state (hex mode)", exitcode = 0;
        }
        if (cycle >= cmd.maxtime)
            exitcause = "reaching maximum cycle", exitcode = 0;
        if (interrupt)
            exitcause = "SIGINT", exitcode = 130;
        if (cmd.filetype == MEMINIT_HEX && emptycycle > 4096)
            exitcause = "no commits within long time (hex mode)", exitcode = 255;
        if (cycle > cmd.maxtime)
            exitcause = "reaching maximum cycle", exitcode = 0;
        if (syncdone)
            if ((htifexit = htif(amem, amem.htifaddr, cmd.args, &sim.mem)) & 1)
                exitcause = "HTIF exit call", exitcode = htifexit >> 1;
        cycle++;
        emptycycle++;

        /* record checkpoint */
        if (cycle % 1000000 == 0)
            fprintf(stderr, "[Info] Checkpoint: cycle %ld: pc: 0x%lx ir: 0x%lx\n", cycle, checkpc, checkir);
    }

    /* Clean and exit */
    stat_t stat;
    vrcr >> stat;
    if (cmd.filetype == MEMINIT_HEX && cmd.verbose)
        disasmem(&amem[amem.entry], amem.entry, amem.hexsz);
    fprintf(stderr, "[Info] Exited at cycle %ld with code %hhu due to %s\n", cycle, exitcode, exitcause);
    fprintf(stderr, "[Info] Stats: Instructions: %ld  load: %ld  store: %ld\n", instret, stat.loads, stat.stores);
    fprintf(stderr, "[Info]        L1I miss: %ld (%.3f%%)  L1D miss: %ld (%.3f%%)\n",
            stat.icmiss, (float)stat.icmiss / instret * 100,
            stat.dcmiss, (float)stat.dcmiss / (stat.loads + stat.stores) * 100);
    fprintf(stderr, "[Info]        STLB miss: %ld  ITLB miss: %ld  DTLB miss: %ld\n",
            stat.stmiss, stat.itmiss, stat.dtmiss);
    fprintf(stderr, "[Info]        Misprediction(f/b/br/j/jr): %ld/%ld/%ld/%ld/%ld\n",
            stat.fmisp, stat.bmisp, stat.brmisp, stat.jmisp, stat.jrmisp);
    fprintf(stderr, "[Info]        CPI: %.3f  MPKI: %.3f\n",
            (float)cycle / (float)instret, (float)(stat.bmisp) * 1000.f / (float)instret);
    return exitcode;
}
