#include "verif.h"
#include <cstring>

#ifndef INITRD
#define INITRD 0xfe60fe00
#endif
#ifndef DTBADDR
#define DTBADDR 0xc0001000
#endif
#ifndef RST_PC
#define RST_PC 0xc0000000
#endif

typedef struct
{
    const char *file = 0, *dtb = 0, *initrd = 0;
    std::vector<const char *> args;
    uint8_t verbose = 0, help = 0, filetype = MEMINIT_ELF;
    int mintime = INT32_MAX, maxtime = INT32_MAX;
} cmd_t;

int interrupt = 0;
void intrhandler(int) { fprintf(stderr, "[Info] Interrupted\n"), interrupt = 1; }

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
            else if (strcmp(argv[i] + j, "v") == 0)
                cmd.verbose = 1;
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
        printf("    -t `t1` `t2`: simulation time between `t1` and `t2`\n");
        printf("    -v: verbose mode\n");
        return 0;
    }
    fprintf(stderr, "[Info] Running simulation in %s mode with:\n[Info]     ",
            cmd.filetype == MEMINIT_ELF ? "elf" : (cmd.filetype == MEMINIT_HEX ? "hex" : "bin"));
    for (int i = 0; i < cmd.args.size(); i++)
        fprintf(stderr, " %s", cmd.args[i]);
    fprintf(stderr, "\n");

    /* Simulate */
    const char *exitcause = NULL;
    uint8_t exitcode = 0;
    uint64_t cycle = 0, htifexit;
    state_t s;
    const char *err =
        s.mem.init(cmd.file, cmd.dtb, cmd.initrd, cmd.filetype, cmd.args, RST_PC, DTBADDR, INITRD);
    s.pc = s.mem.entry;
    if (err)
        return fputs(err, stderr), 255;
    s.mem.ui64(s.mem.htifaddr.fromhost) = s.mem.ui64(s.mem.htifaddr.tohost) = 0;
    s.mem.add(0xc0000, 0x2000000);                     // CLINT area
    s.mem.ui64(s.csr["mtime"] = 0x200bff8) = 0;        // mtime
    s.mem.ui64(s.csr["mtimecmp"] = 0x2004000) = -1ull; // mtimecmp
    while (!exitcause)
    {
        /* set interrupts */
        if (cycle % 4 == 0) // increase mtime
            s.mem.ui64(s.csr["mtime"])++;
        s.csr["mip"].write(7, s.mem.ui64(s.csr["mtime"]) >= s.mem.ui64(s.csr["mtimecmp"]));

        /* get next state */
        delta_t d = next(s);
        if (cycle >= cmd.mintime || cmd.verbose)
            print(cycle, s, d);
        apply(s, d);

        /* cycle increment */
        if (cycle && cycle % 1000000 == 0)
            fprintf(stderr, "[Info] Keep-alive: cycle %d: pc: 0x%lx ir: 0x%x\n", (int)cycle, s.pc, s.ir);
        cycle++;

        /* handle exits */
        if (cycle >= cmd.maxtime)
            exitcause = "reaching maximum cycle", exitcode = 0;
        if (interrupt)
            exitcause = "SIGINT", exitcode = 130;
        if ((htifexit = htif(s.mem, s.mem.htifaddr, cmd.args, NULL)) & 1)
            exitcause = "HTIF exit call", exitcode = htifexit >> 1;
    }
    fprintf(stderr, "[Info] Exited at cycle %ld with code %hhu due to %s\n", cycle, exitcode, exitcause);
    return exitcode;
}