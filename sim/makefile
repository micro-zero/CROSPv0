.PHONY : all rv hex pk clean

# Execute in docker.io/microzero/riscv-sim:verilator

# parameters
CPUFREQ = 20000000
TBFREQ  = 10000000
PWD     = 4
INITRD  = be000000 # same as in DTB
RST_PC  = 81fff000
DTBADDR = 81ffe000 # limited to 4KB
ifndef TOHOST
	TOHOST = 0
endif
ifndef FRHOST
	FRHOST = 0
endif
DCBASE  = 80000000
UART    = 10000000
CLINT   = 02000000

# Verilator variables
MAKE = make -j8
CXXFLAGS = -O2 -I/opt/verilator/include -I/opt/verilator/include/vltstd \
	-I.vcore -DRST_PC="0x$(RST_PC)" -DDCBASE="0x$(DCBASE)" -DPWD="$(PWD)" \
		-DTOHOST="0x$(TOHOST)" -DFRHOST="0x$(FRHOST)" -DUART="0x$(UART)" \
	-I.intc -DCLINT="0x$(CLINT)" -DCPUFREQ="$(CPUFREQ)" -DTBFREQ="$(TBFREQ)" \
	-DDTBADDR="0x$(DTBADDR)" -DINITRD="0x$(INITRD)"
VERILATOR_FLAGS = -cc -assert -savable -trace -trace-structs -trace-max-array 256 -I../src/common
VCORE_H  = ../src/common/types.sv
VCORE_SV = \
	../src/common/mwpram.sv \
	../src/common/firstk.sv \
	../src/frontend/pcgen.sv \
	../src/frontend/frontend.sv \
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
	../src/soc/crosplite.sv \
	vcore.sv
INTC_SV = ../src/soc/intc.sv

# Scripts
define RVTESTS_SCRIPT
	echo "ISA tests errors:"
	for file in $$RISCV/target/share/riscv-tests/isa/rv64*; do
		if [ $${file##*.} != "dump" ]; then
			./main -s -elf $$file >/dev/null 2>&1
			exitcode=$$?
			if [ $$exitcode -ne 0 ]; then
				echo "$$file exited with code $$exitcode"
			fi
		fi
	done
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
		echo "[Info] All tests exited with 0"
	fi
endef
export RVTESTS_SCRIPT
export HEXTESTS_SCRIPT

all: main

.vcore : $(VCORE_SV) $(VCORE_H)
	$(RM) -r .vcore
	verilator $(VERILATOR_FLAGS) $(VCORE_SV) -lib-create vcore -top-module vcore -Mdir .vcore \
		-Grst_pc="32'h$(RST_PC)" -Gdcbase="64'h$(DCBASE)" -Gpwd="$(PWD)" \
		-Gtohost="64'h$(TOHOST)" -Gfrhost="64'h$(FRHOST)" \
		-Guart="64'h$(UART)" -Gclint="64'h$(CLINT)"
	$(MAKE) -C .vcore -f Vvcore.mk

.intc : $(INTC_SV)
	$(RM) -r .intc
	verilator $(VERILATOR_FLAGS) $(INTC_SV) -lib-create intc -top-module intc -Mdir .intc \
		-Gclint="64'h$(CLINT)" -Gcpufreq="64'd$(CPUFREQ)" -Gtbfreq="64'd$(TBFREQ)"
	$(MAKE) -C .intc -f Vintc.mk

verif.o : verif.h soc.h

soc.o : .vcore .intc verif.h soc.h

main.o : .vcore .intc verif.h soc.h

main : verif.o soc.o main.o
	$(CXX) -O2 verif.o soc.o main.o .vcore/libvcore.a .intc/libintc.a -o main

rv : main
	bash -c "$$RVTESTS_SCRIPT"

hex : main
	bash -c "$$HEXTESTS_SCRIPT"

pk : main
	make -C ../util/dt
	./main -s -dtb ../util/dt/spike.dtb $$RISCV/riscv64-unknown-elf/bin/pk $(PKARG)

sim : sim.o verif.o
	$(CXX) -O2 sim.o verif.o -o sim

clean :
	$(RM) -r main sim *.o *.vcd *.save *.save.[0-9]* .[A-z]*/
