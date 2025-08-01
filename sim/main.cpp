#include <cstdio>
#include <queue>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <signal.h>
#include "soc.h"

typedef struct
{
    const char *file = 0, *dtb = 0, *initrd = 0, *buildroot = 0, *rom = 0;
    std::vector<const char *> args;
    uint8_t sim = 0, verbose = 0, vcd = 0, help = 0, filetype = MEMINIT_ELF;
    uint64_t mintime = 0, maxtime = INT64_MAX;
} cmd_t;

int interrupt = 0;
void intrhandler(int) { fprintf(stderr, "[Info] Interrupted\n"), interrupt = 1; }

int restore(uint64_t &cycle, uint64_t &instret, state_t &sim, cmts_t &cmts, dels_t &dels,
            axidev *&master, axidev *&slave, const char *fn, std::vector<axidev *> dev)
{
    FILE *fp = fopen(fn, "rb");
    uint64_t buf;
    if (fread(&cycle, sizeof(cycle), 1, fp) != 1 ||
        fread(&instret, sizeof(instret), 1, fp) != 1 ||
        fread(&sim.pc, sizeof(sim.pc), 1, fp) != 1 ||
        fread(&sim.ir, sizeof(sim.ir), 1, fp) != 1 ||
        fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        uint64_t b, s;
        if (fread(&b, sizeof(b), 1, fp) != 1 ||
            fread(&s, sizeof(s), 1, fp) != 1)
            return -1;
        sim.mem.add(s, b);
        if (fread(&sim.mem.ui8(b), s, 1, fp) != 1)
            return -1;
    }
    if (fread(&sim.level, sizeof(sim.level), 1, fp) != 1 ||
        fread(&sim.gpr, sizeof(sim.gpr), 1, fp) != 1 ||
        fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        uint64_t l;
        if (fread(&l, sizeof(l), 1, fp) != 1)
            return -1;
        char *s = new (std::nothrow) char[l + 1];
        if (!s)
            return -1;
        s[l] = 0;
        if (fread(s, l, 1, fp) != 1 ||
            fread(&sim.csr[s], sizeof(sim.csr[s]), 1, fp) != 1)
            return -1;
        delete[] s;
    }
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        uint64_t f;
        uint8_t s;
        if (fread(&f, sizeof(f), 1, fp) != 1 ||
            fread(&s, sizeof(s), 1, fp) != 1)
            return -1;
        sim.rsrv[f] = s;
    }
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        cmt_t c;
        if (fread(&c, sizeof(c), 1, fp) != 1)
            return -1;
        cmts.push(c);
    }
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        del_t d;
        if (fread(&d, sizeof(d), 1, fp) != 1)
            return -1;
        dels.gprs.push(d);
    }
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        del_t d;
        if (fread(&d, sizeof(d), 1, fp) != 1)
            return -1;
        dels.mems.push(d);
    }
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    for (int i = 0; i < buf; i++)
    {
        del_t d;
        if (fread(&d, sizeof(d), 1, fp) != 1)
            return -1;
        dels.csrs.push(d);
    }
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    master = (int64_t)buf >= 0 ? dev.at(buf) : NULL;
    if (fread(&buf, sizeof(buf), 1, fp) != 1)
        return -1;
    slave = (int64_t)buf >= 0 ? dev.at(buf) : NULL;
    fclose(fp);
    return 0;
}

void checkpoint(uint64_t &cycle, uint64_t &instret, state_t &sim, cmts_t cmts, dels_t dels,
                axidev *&master, axidev *&slave, const char *fn, std::vector<axidev *> dev)
{
    FILE *fp = fopen(fn, "wb");
    uint64_t buf;
    fwrite(&cycle, sizeof(cycle), 1, fp);
    fwrite(&instret, sizeof(instret), 1, fp);
    fwrite(&sim.pc, sizeof(sim.pc), 1, fp);
    fwrite(&sim.ir, sizeof(sim.ir), 1, fp);
    buf = sim.mem.base.size();
    fwrite(&buf, sizeof(buf), 1, fp);
    for (int i = 0; i < buf; i++)
    {
        fwrite(&sim.mem.base[i], sizeof(sim.mem.base[i]), 1, fp);
        fwrite(&sim.mem.size[i], sizeof(sim.mem.size[i]), 1, fp);
        fwrite(sim.mem.ptr[i], sim.mem.size[i], 1, fp);
    }
    fwrite(&sim.level, sizeof(sim.level), 1, fp);
    fwrite(&sim.gpr, sizeof(sim.gpr), 1, fp);
    buf = sim.csr.size();
    fwrite(&buf, sizeof(buf), 1, fp);
    for (auto iter : sim.csr)
    {
        uint64_t l = iter.first.length();
        fwrite(&l, sizeof(l), 1, fp);
        fwrite(iter.first.c_str(), l, 1, fp);
        fwrite(&iter.second, sizeof(iter.second), 1, fp);
    }
    fwrite(&(buf = sim.rsrv.size()), sizeof(buf), 1, fp);
    for (auto iter : sim.rsrv)
    {
        fwrite(&iter.first, sizeof(iter.first), 1, fp);
        fwrite(&iter.second, sizeof(iter.second), 1, fp);
    }
    buf = cmts.size();
    fwrite(&buf, sizeof(buf), 1, fp);
    while (!cmts.empty())
    {
        cmt_t c = cmts.front();
        fwrite(&c, sizeof(c), 1, fp);
        cmts.pop();
    }
    buf = dels.gprs.size();
    fwrite(&buf, sizeof(buf), 1, fp);
    while (!dels.gprs.empty())
    {
        del_t d = dels.gprs.front();
        fwrite(&d, sizeof(d), 1, fp);
        dels.gprs.pop();
    }
    buf = dels.mems.size();
    fwrite(&buf, sizeof(buf), 1, fp);
    while (!dels.mems.empty())
    {
        del_t d = dels.mems.front();
        fwrite(&d, sizeof(d), 1, fp);
        dels.mems.pop();
    }
    buf = dels.csrs.size();
    fwrite(&buf, sizeof(buf), 1, fp);
    while (!dels.csrs.empty())
    {
        del_t d = dels.csrs.front();
        fwrite(&d, sizeof(d), 1, fp);
        dels.csrs.pop();
    }
    uint64_t index = -1;
    for (uint64_t i = 0; i < dev.size(); i++)
        if (master == dev.at(i))
            index = i;
    fwrite(&index, sizeof(index), 1, fp);
    index = -1;
    for (uint64_t i = 0; i < dev.size(); i++)
        if (slave == dev.at(i))
            index = i;
    fwrite(&index, sizeof(index), 1, fp);
    fclose(fp);
}

bool check(delta_t del, delta_t ref)
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
        return false;
    if (del.memw && (del.mema != ref.mema || del.memv != ref.memv))
        return false;
    ref.csr.erase("mcycle");
    del.csr.erase("mcycle");
    ref.csr.erase("minstret");
    del.csr.erase("minstret");
    ref.csr.erase("mip");
    del.csr.erase("mip");
    ref.csr.erase("tselect");
    del.csr.erase("tselect");
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
            else if (strcmp(argv[i] + j, "br") == 0)
                cmd.buildroot = argv[++i];
            else if (strcmp(argv[i] + j, "rom") == 0)
                cmd.rom = argv[++i];
            else if (strcmp(argv[i] + j, "t") == 0)
            {
                if (i + 1 < argc)
                    cmd.mintime = atol(argv[i + 1]);
                if (i + 2 < argc)
                    cmd.maxtime = atol(argv[i + 2]);
                if (cmd.mintime <= 0)
                    cmd.mintime = 0;
                if (cmd.maxtime <= 0)
                    cmd.maxtime = INT64_MAX;
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
    if (cmd.help)
    {
        printf("Usage: exec [options] file [arguments]\n");
        printf("Available options:\n");
        printf("    -bin: (force) load binary file\n");
        printf("    -hex: (force) load hex text file\n");
        printf("    -elf: (default) load RISC-V ELF executable\n");
        printf("    -dtb `binary`: specify device tree binary\n");
        printf("    -initrd `binary`: specify initial rootfs\n");
        printf("    -br `binary`: specify buildroot image output file\n");
        printf("    -rom `binary`: specify ROM image output file\n");
        printf("    -t `t1` `t2`: simulation time between `t1` and `t2`\n");
        printf("    -s: run and check with simulator\n");
        printf("    -v: verbose mode\n");
        printf("    -w: output waveform\n");
        return 0;
    }
    if (cmd.file == NULL)
    {
        fprintf(stderr, "[Info] No input file specified, trying to recover from checkpoint\n");
        fprintf(stderr, "[Info] If help needed, please use -h option\n");
    }
    else
    {
        fprintf(stderr, "[Info] Running simulation in %s mode with:\n[Info]     ",
                cmd.filetype == MEMINIT_ELF ? "elf" : (cmd.filetype == MEMINIT_HEX ? "hex" : "bin"));
        for (int i = 0; i < cmd.args.size(); i++)
            fprintf(stderr, " %s", cmd.args[i]);
        fprintf(stderr, "\n");
    }
    if (cmd.vcd)
    {
        fprintf(stderr, "[Info] Recording waveform in files: ");
        fprintf(stderr, "cohub.vcd, vcore.vcd, clint.vcd, plic.vcd, uart.vcd, sdc.vcd eth.vcd\n");
    }

    /* Device registration */
    memory amem;
    coherhub cohub(cmd.vcd ? "cohub.vcd" : NULL);
    verifcore vrcr(cmd.vcd ? "vcore.vcd" : NULL);
    clint cli(cmd.vcd ? "clint.vcd" : NULL);
    plic pli(cmd.vcd ? "plic.vcd" : NULL);
    uartctl uart(cmd.vcd ? "uart.vcd" : NULL);
    sdctl sdc(cmd.vcd ? "sdc.vcd" : NULL, "sdc.img");
    ethctl eth(cmd.vcd ? "eth.vcd" : NULL);
    std::vector<axidev *> dev({&amem, &cohub, &vrcr, &cli, &pli, &uart, &sdc, &eth}); // AXI device references
    const char *err = 0;
    if (cmd.file) // init memory from file
    {
        err = amem.init(cmd.file, cmd.dtb, cmd.initrd, cmd.filetype, cmd.args, RST_PC, DTBADDR, INITRD);
        if (cmd.buildroot)
        {
            fprintf(stderr, "[Info] Dumping memory to file: %s\n", cmd.buildroot);
            FILE *fp = fopen(cmd.buildroot, "wb");
            if (!fp)
                return fprintf(stderr, "[Error] Cannot open file %s\n", cmd.buildroot), 255;
            for (int i = 0; i < 0x4000000; i++)
                fwrite(&amem[(INITRD - 0x80000000 + i) % 0x40000000 + 0x80000000], 1, 1, fp);
            fclose(fp);
            fprintf(stderr, "[Info] Memory dumped\n");
        }
        if (cmd.rom)
        {
            fprintf(stderr, "[Info] Dumping ROM to file: %s\n", cmd.rom);
            FILE *fp = fopen(cmd.rom, "wb");
            if (!fp)
                return fprintf(stderr, "[Error] Cannot open file %s\n", cmd.rom), 255;
            for (int i = 0; i < ROMSZ; i++)
                fwrite(&amem[ROM + i], 1, 1, fp);
            fclose(fp);
            fprintf(stderr, "[Info] ROM dumped\n");
        }
    }
    else if (amem.restore("amem.save") < 0 || // init memory and DUTs from checkpoint
             cohub.restore("cohub.save") < 0 ||
             vrcr.restore("vcore.save") < 0 ||
             cli.restore("clint.save") < 0 ||
             pli.restore("plic.save") < 0 ||
             uart.restore("uart.save") < 0 ||
             sdc.restore("sdc.save") < 0 ||
             eth.restore("eth.save") < 0)
        err = "[Error] Failed to recover from checkpoint\n";
    if (err)
        return fputs(err, stderr), 255;

    /* Simulation */
    uint64_t cycle = 0, instret = 0, checkpc = 0, checkir = 0;
    uint64_t emptycycle = 0, stablecycle = 0;
    cmts_t cmts;
    dels_t dels;
    const char *exitcause = NULL;
    uint8_t exitcode = 0;
    axidev *master = NULL, *slave = NULL;
    axiport_t zero;
    state_t sim;
    amem.smem = &sim.mem;
    memset(&zero, 0, sizeof(zero));
    signal(SIGINT, intrhandler);
    if (!cmd.file)
        if (restore(cycle, instret, sim, cmts, dels, master, slave, "main.save", dev) < 0)
            return fputs("[Error] Failed to recover from checkpoint\n", stderr), 255;
        else
            fprintf(stderr, "[Info] Checkpoint loaded at cycle: %ld\n", cycle);
    else
        sim.pc = amem.entry, sim.mem = amem, sim.csr["mtime"] = CLINT + 0xbff8;
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
        /* AXI interconnection */
        for (auto d : dev)
            d->sset(zero), d->mset(zero);
        if (!master) // search for a transaction request from master
        {
            uint64_t addr;
            axiport_t vap = vrcr.m(), sap = sdc.m();
            if (sap.arvalid)
                master = &sdc, addr = sap.araddr;
            else if (sap.awvalid)
                master = &sdc, addr = sap.awaddr;
            else if (vap.arvalid)
                master = &vrcr, addr = vap.araddr;
            else if (vap.awvalid)
                master = &vrcr, addr = vap.awaddr;
            if (master) // classify destinations by address
            {
                slave = &amem;
                if (addr >= CLINT && addr < CLINT + 0x10000)
                    slave = &cli;
                else if (addr >= PLIC && addr < PLIC + 0x4000000)
                    slave = &pli;
                else if (addr >= ETH && addr < ETH + 0x10000)
                    slave = &eth;
                else if (addr >= SDC && addr < SDC + 0x10000)
                    slave = &sdc;
                else if (addr >= UART && addr < UART + 0x10000)
                    slave = &uart;
                else if (master->m().awvalid & addr < DDR)
                    fprintf(stderr, "[Warning] Writing to unregistered address %lx\n", addr);
            }
        }
        if (master) // in-flight transaction
        {
            slave->sset(master->m()), master->mset(slave->s()); // synchronization between AXI objects
            axiport_t ap = master->m();
            if (ap.bvalid && ap.bready || ap.rvalid && ap.rready && ap.rlast)
                master = slave = 0; // current transaction finished
        }
        /* coherence interconnection */
        amem.scset(cohub.mmem()), amem.mcset(cohub.smem());
        vrcr.scset(cohub.mmmu()), vrcr.mcset(cohub.smmu());
        sdc.scset(cohub.msdc()), sdc.mcset(cohub.ssdc());
        cohub.smemset(amem.mc()), cohub.mmemset(amem.sc());
        cohub.smmuset(vrcr.mc()), cohub.mmmuset(vrcr.sc());
        cohub.ssdcset(sdc.mc()), cohub.msdcset(sdc.sc());
        /* other connection */
        vrcr.mtime = cli.int_time; // VCORE -- CLINT/PLIC
        vrcr.mip_ext = cli.int_pend | pli.int_pend;
        pli.int_vect = uart.intr << 1 | sdc.intr << 2 | eth.intr << 3;
        if (cmd.filetype == MEMINIT_HEX) // generate some interrupts for HEX tests
            if (cycle && cycle % 500 == 0)
                pli.int_vect = 1 << cycle / 500;
        /* record after synchronization */
        if (cycle >= cmd.mintime)
            for (auto d : dev)
                d->record();

        /* state check */
        vrcr >> cmts >> dels; // extract from DUT of vcore
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
                uint8_t lsize;
                uint64_t laddr;
                delta_t delsim = next(sim, &lsize, &laddr);
                /* comparison of FS bit and fcsr is omitted because their change does not flush pipeline */
                if (del.csr.find("mstatus") == del.csr.end() && delsim.csr.find("mstatus") != delsim.csr.end())
                    del.csr["mstatus"] = delsim.csr["mstatus"]; // FS bit
                if (delsim.csr.find("fcsr") != delsim.csr.end())
                    del.csr["fcsr"] = delsim.csr["fcsr"];
                del.csr.erase("fflags");
                del.csr.erase("frm");
                for (auto s : pmpname)
                    if (delsim.csr.find(s) != delsim.csr.end())
                        del.csr[s] = delsim.csr[s];
                if (lsize && laddr < DDR)    // an output operation
                    delsim.gprv = del.gprv;  // synchronize with DUT
                if (delsim.memw >> 4 == 0x8) // DUT does not consider LR as memory change instruction
                {
                    del.memw = delsim.memw;
                    del.mema = delsim.mema;
                    del.memv = delsim.memv;
                }
                else if (delsim.memw >> 4 == 0xc) // DUT consider SC as normal store
                    del.memw = delsim.memw;
                if (!check(del, delsim))
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
                apply(sim, del);
            }
            emptycycle = 0;
            if (cmd.filetype == MEMINIT_HEX && cmd.maxtime == INT64_MAX)
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
        if (amem.htifexit & 1)
            exitcause = "HTIF exit call", exitcode = amem.htifexit >> 1;
        cycle++;
        emptycycle++;

        /* read from stdin */
        char ch;
        if ((ch = nbgetchar()) != EOF)
        {
            uart.txq.push_back(ch);
            amem.cin.push_back(ch);
        }

        /* record checkpoint */
        if (cycle % 10000000 == 0)
        {
            amem.checkpoint("amem.save");
            cohub.checkpoint("cohub.save");
            vrcr.checkpoint("vcore.save");
            cli.checkpoint("clint.save");
            pli.checkpoint("plic.save");
            eth.checkpoint("eth.save");
            sdc.checkpoint("sdc.save");
            uart.checkpoint("uart.save");
            checkpoint(cycle, instret, sim, cmts, dels, master, slave, "main.save", dev);
            fprintf(stderr, "[Info] Checkpoint recorded [cycle: %ld  pc: 0x%lx  ir: 0x%lx]\n",
                    cycle, checkpc, checkir);
        }
    }

    /* Clean and exit */
    stat_t stat;
    vrcr >> stat;
    if (cmd.filetype == MEMINIT_HEX && cmd.verbose)
        disasmem(&amem[amem.entry], amem.entry, amem.hexsz);
    fprintf(stderr, "[Info] Stats: Instructions: %ld  load: %ld  store: %ld\n", instret, stat.loads, stat.stores);
    fprintf(stderr, "[Info]        L1I miss: %ld (%.3f%%)  L1D miss: %ld (%.3f%%)\n",
            stat.icmiss, (float)stat.icmiss / instret * 100,
            stat.dcmiss, (float)stat.dcmiss / (stat.loads + stat.stores) * 100);
    fprintf(stderr, "[Info]        STLB miss: %ld  ITLB miss: %ld  DTLB miss: %ld\n",
            stat.stmiss, stat.itmiss, stat.dtmiss);
    fprintf(stderr, "[Info]        Misprediction(f/b/br/j/jr): %ld/%ld/%ld/%ld/%ld\n",
            stat.fmisp, stat.bmisp, stat.brmisp, stat.jmisp, stat.jrmisp);
    fprintf(stderr, "[Info]        Speculative loads check (3-1/f/m): %ld/%ld/%ld/%ld/%ld\n",
            stat.check[2], stat.check[1], stat.check[0], stat.fwd, stat.ldmisp);
    fprintf(stderr, "[Info]        CPI: %.3f  MPKI: %.3f\n",
            (float)cycle / (float)instret, (float)(stat.bmisp) * 1000.f / (float)instret);
    fprintf(stderr, "[Info] Exited at cycle %ld with code %hhu due to %s\n", cycle, exitcode, exitcause);
    return exitcode;
}
