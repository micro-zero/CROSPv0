.PHONY : all rv hex pk clean

# Execute in docker.io/microzero/riscv-sim:verilator

# parameters
CPUFREQ = 50000000
TBFREQ  = 500000
FWD     = 2
DWD     = 2
RWD     = 2
EWD     = 2
CWD     = 2
MWD     = 1
HPM     = 0
INITRD  = be000000 # same as in DTB
RST_PC  = 81fff000
DTBADDR = 81ffe000 # limited to 4KB
DDR     = 80000000
ETH     = 60020000
UART    = 60010000
SDC     = 60000000
PLIC    = 0c000000
CLINT   = 02000000
ROM     = 00010000
ROMSZ   = 00010000
BAUD	= 11520000

# Verilator variables
CXXFLAGS = -O2 -I/opt/verilator/include -I/opt/verilator/include/vltstd \
	-I.vcore -DRST_PC="0x$(RST_PC)" -DDDR="0x$(DDR)" \
		-DFWD=$(FWD) -DDWD=$(DWD) -DRWD=$(RWD) \
		-DEWD=$(EWD) -DCWD=$(CWD) -DMWD=$(MWD) \
		-DUART="0x$(UART)" -DSDC="0x$(SDC)" -DETH="0x$(ETH)" \
	-I.clint -I.plic -DCLINT="0x$(CLINT)" -DPLIC="0x$(PLIC)" \
	-I.cohub -I.uart -I.sdc -I.eth -DBAUD="$(BAUD)" \
	-DROM="0x$(ROM)" -DROMSZ="0x$(ROMSZ)" \
	-DCPUFREQ="$(CPUFREQ)" -DTBFREQ="$(TBFREQ)" \
	-DDTBADDR="0x$(DTBADDR)" -DINITRD="0x$(INITRD)"
VERILATOR_FLAGS = -cc -assert -savable -trace -trace-structs -trace-max-array 256 \
	-I../src/common -I../src/soc/axi_uart \
	-I../src/soc/axi_sdc -I../src/soc/axi_eth
VCORE_H  = ../src/common/types.sv
VCORE_SV = \
	../src/common/pma.sv \
	../src/common/pmp.sv \
	../src/fetch/tage.sv \
	../src/fetch/fetch.sv \
	../src/decoder/ci2i.sv \
	../src/decoder/decoder.sv \
	../src/rename/rename.sv \
	../src/issue/issue.sv \
	../src/execute/alu.sv \
	../src/execute/mul.sv \
	../src/execute/div.sv \
	../src/execute/fpu.sv \
	../src/execute/lsu.sv \
	../src/execute/execute.sv \
	../src/commit/prf.sv \
	../src/commit/csr.sv \
	../src/commit/commit.sv \
	../src/mmu/tlb.sv \
	../src/mmu/cache.sv \
	../src/mmu/mmu.sv \
	../src/soc/crospaxi.sv \
	vcore.sv
CLINT_SV = ../src/soc/clint.sv
PLIC_SV = ../src/soc/plic.sv
COHUB_SV = ../src/soc/cohub.sv
UART_SV = ../src/soc/axi_uart/axi_uart.sv ../src/soc/uart.sv
SDC_SV = \
	../src/soc/axi_sdc/axi_sd_fifo.sv \
	../src/soc/axi_sdc/axi_sd_fifo_filler.sv \
	../src/soc/axi_sdc/sd_cmd_master.sv \
	../src/soc/axi_sdc/sd_data_master.sv \
	../src/soc/axi_sdc/sd_cmd_serial_host.sv \
	../src/soc/axi_sdc/sd_data_serial_host.sv \
	../src/soc/axi_sdc/sd_data_xfer_trig.sv \
	../src/soc/axi_sdc/axi_sdc_controller.sv \
	../src/soc/sdc.sv
ETH_SV = \
	../src/soc/axi_eth/ethernet.sv \
	../src/soc/eth.sv

# Scripts
define RVTESTS_SCRIPT
	pids=()
	names=()
	err=0
	for file in $$RISCV/target/share/riscv-tests/isa/rv64*; do
		if [ $${file##*.} != "dump" ]; then
			./main -s -elf $$file >/dev/null 2>&1 &
			pids+=($$!)
			names+=($$file)
		fi
	done
	for i in $${!pids[@]}; do
		wait $${pids[i]}
		exitcode=$$?
		if [ $$exitcode -ne 0 ]; then
			echo "$${names[i]} exited with code $$exitcode"
			err=1
		fi
	done
	if [ $$err -eq 0 ]; then
		echo "[Info] All ISA tests exited with 0"
	fi
	pids=()
	names=()
	for file in $$RISCV/target/share/riscv-tests/benchmarks/*.riscv; do
		touch /tmp/$$(basename $$file)
		./main -s -elf $$file >/tmp/$$(basename $$file) 2>&1 &
		pids+=($$!)
		names+=(/tmp/$$(basename $$file))
	done
	for i in $${!pids[@]}; do
		wait $${pids[i]}
		echo "****************************************************************"
		cat $${names[i]}
	done
	for name in $${names[@]}; do
		rm $$name
	done
endef
define HEXTESTS_SCRIPT
	err=0
	for file in ../util/code/hex/*.hex; do
		./main -s -hex $$file >/dev/null 2>&1
		exitcode=$$?
		if [ $$exitcode -ne 0 ]; then
			echo "[Info] $$file exited with code $$exitcode"
			err=1
		fi
	done
	if [ $$err -eq 0 ]; then
		echo "[Info] All HEX tests exited with 0"
	fi
endef
export RVTESTS_SCRIPT
export HEXTESTS_SCRIPT

all: main

.vcore : $(VCORE_SV) $(VCORE_H)
	$(RM) -r .vcore
	verilator $(VERILATOR_FLAGS) $(VCORE_SV) -lib-create vcore -top-module vcore -Mdir .vcore \
		-Grst_pc="32'h$(RST_PC)" -Ghpm="$(HPM)" -Gclint="64'h$(CLINT)" \
		-Gfwd=$(FWD) -Gdwd=$(DWD) -Grwd=$(RWD) -Gewd=$(EWD) -Gcwd=$(CWD) -Gmwd=$(MWD)
	$(MAKE) -C .vcore -f Vvcore.mk

.clint : $(CLINT_SV)
	$(RM) -r .clint
	verilator $(VERILATOR_FLAGS) $(CLINT_SV) -lib-create clint -top-module clint -Mdir .clint \
		-Gcpufreq="64'd$(CPUFREQ)" -Gtbfreq="64'd$(TBFREQ)"
	$(MAKE) -C .clint -f Vclint.mk

.plic : $(PLIC_SV)
	$(RM) -r .plic
	verilator $(VERILATOR_FLAGS) $(PLIC_SV) -lib-create plic -top-module plic -Mdir .plic
	$(MAKE) -C .plic -f Vplic.mk

.cohub : $(COHUB_SV)
	$(RM) -r .cohub
	verilator $(VERILATOR_FLAGS) $(COHUB_SV) -lib-create cohub -top-module cohub -Mdir .cohub
	$(MAKE) -C .cohub -f Vcohub.mk

.uart : $(UART_SV)
	$(RM) -r .uart
	verilator $(VERILATOR_FLAGS) $(UART_SV) -lib-create uart -top-module uart -Mdir .uart \
		-Gcpufreq="64'd$(CPUFREQ)" -Gbaud="64'd$(BAUD)"
	$(MAKE) -C .uart -f Vuart.mk

.sdc : $(SDC_SV)
	$(RM) -r .sdc
	verilator $(VERILATOR_FLAGS) $(SDC_SV) -lib-create sdc -top-module sdc -Mdir .sdc
	$(MAKE) -C .sdc -f Vsdc.mk

.eth : $(ETH_SV)
	$(RM) -r .eth
	verilator $(VERILATOR_FLAGS) $(ETH_SV) -lib-create eth -top-module eth -Mdir .eth
	$(MAKE) -C .eth -f Veth.mk

verif.o : verif.h soc.h

soc.o : .vcore .clint .plic .cohub .uart .sdc .eth verif.h soc.h

main.o : .vcore .clint .plic .cohub .uart .sdc .eth verif.h soc.h

main : verif.o soc.o main.o
	$(CXX) -O2 verif.o soc.o main.o -o main \
		.vcore/libvcore.a .clint/libclint.a .plic/libplic.a .cohub/libcohub.a \
		.uart/libuart.a .sdc/libsdc.a .eth/libeth.a

rv : main
	@bash -c "$$RVTESTS_SCRIPT"

hex : main
	@bash -c "$$HEXTESTS_SCRIPT"

pk : main
	@make -C ../util/dt >/dev/null
	@./main -s -dtb ../util/dt/spike.dtb $$RISCV/riscv64-unknown-elf/bin/pk $(PKARG)

sim : sim.o verif.o
	$(CXX) -O2 sim.o verif.o -o sim

tar:
	tar cf $(PREFIX).save.tar *.save *.save.[0-9]*

clean :
	$(RM) -r main sim *.o *.vcd *.save *.save.[0-9]* .[A-z]*/
