# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vvcore.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vvcore \
	Vvcore___024root__DepSet_ha7f325f3__0 \
	Vvcore___024root__DepSet_ha7f325f3__1 \
	Vvcore___024root__DepSet_hca8e34de__0 \
	Vvcore___024root__DepSet_hca8e34de__1 \
	Vvcore___024root__DepSet_hca8e34de__2 \
	Vvcore___024root__DepSet_hca8e34de__3 \
	Vvcore___024root__DepSet_hca8e34de__4 \
	Vvcore___024root__DepSet_hca8e34de__5 \
	Vvcore___024root__DepSet_hca8e34de__6 \
	Vvcore___024root__DepSet_hca8e34de__7 \
	Vvcore___024root__DepSet_hca8e34de__8 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vvcore__ConstPool_0 \
	Vvcore___024root__Slow \
	Vvcore___024root__DepSet_ha7f325f3__0__Slow \
	Vvcore___024root__DepSet_ha7f325f3__1__Slow \
	Vvcore___024root__DepSet_hca8e34de__0__Slow \
	Vvcore___024root__DepSet_hca8e34de__1__Slow \
	Vvcore___024root__DepSet_hca8e34de__2__Slow \
	Vvcore___024root__DepSet_hca8e34de__3__Slow \
	Vvcore___024root__DepSet_hca8e34de__4__Slow \
	Vvcore___024unit__Slow \
	Vvcore___024unit__DepSet_hda3599fd__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vvcore__Trace__0 \
	Vvcore__Trace__1 \
	Vvcore__Trace__2 \
	Vvcore__Trace__3 \
	Vvcore__Trace__4 \
	Vvcore__Trace__5 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vvcore__Syms \
	Vvcore__Trace__0__Slow \
	Vvcore__Trace__1__Slow \
	Vvcore__Trace__2__Slow \
	Vvcore__Trace__3__Slow \
	Vvcore__Trace__4__Slow \
	Vvcore__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_save \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
