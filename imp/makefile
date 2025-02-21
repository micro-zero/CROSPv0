.PHONY : imp sim clean

# parameters
CPUFREQ       = 50
PARAM_CPUFREQ = $(CPUFREQ)000000
PARAM_TBFREQ  = 10000000
PARAM_PWD     = 2
PARAM_MWD     = 2
PARAM_INITRD  = be000000
PARAM_RSTPC   = 81fff000
PARAM_DTBADDR = 81ffe000
PARAM_TOHOST  = 800421b8
PARAM_FRHOST  = 800421b0
PARAM_DCBASE  = 80000000
PARAM_DCSIZE  = 40000000
PARAM_UART    = 10000000
PARAM_CLINT   = 02000000
PARAM_BLSIZE  = 04000000

CORE_SRC = \
	$(shell realpath ../src/common/types.sv) \
	$(shell realpath ../src/common/mwpram.sv) \
	$(shell realpath ../src/common/firstk.sv) \
	$(shell realpath ../src/frontend/pcgen.sv) \
	$(shell realpath ../src/frontend/frontend.sv) \
	$(shell realpath ../src/decoder/ci2i.sv) \
	$(shell realpath ../src/decoder/decoder.sv) \
	$(shell realpath ../src/rename/rename.sv) \
	$(shell realpath ../src/issue/issue.sv) \
	$(shell realpath ../src/execute/alu.sv) \
	$(shell realpath ../src/execute/mul.sv) \
	$(shell realpath ../src/execute/div.sv) \
	$(shell realpath ../src/execute/fpu_synth.sv) \
	$(shell realpath ../src/execute/lsu.sv) \
	$(shell realpath ../src/execute/execute.sv) \
	$(shell realpath ../src/commit/prf.sv) \
	$(shell realpath ../src/commit/csr.sv) \
	$(shell realpath ../src/commit/commit.sv) \
	$(shell realpath ../src/mmu/l1.sv) \
	$(shell realpath ../src/soc/crosplite.sv)
INTC_SRC = $(shell realpath ../src/soc/intc.sv)
SOCC_SRC = $(shell realpath ../src/soc/socc.sv)
SIM_IMG = /dev/urandom

define IMP_TCL
	# Create project and add IP
	create_project .imp .imp -part xc7k325tffg900-2
	set_property board_part digilentinc.com:genesys2:part0:1.1 [current_project]
	set_property ip_repo_paths {.core .intc .socc .sdintf} [current_project]
	update_ip_catalog

	# Create board design
	# Custom IP
	create_bd_design "CROSPv0soc"
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:CROSP:0.1 core
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:INTC:0.1 intctl
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:SOCC:0.1 socctl
	set_property CONFIG.dcbase 0x$(PARAM_DCBASE) [get_bd_cells core]
	set_property CONFIG.init 0 [get_bd_cells core]
	set_property CONFIG.mwd $(PARAM_MWD) [get_bd_cells core]
	set_property CONFIG.pwd $(PARAM_PWD) [get_bd_cells core]
	set_property CONFIG.rst_pc {0x$(PARAM_RSTPC)} [get_bd_cells core]
	set_property CONFIG.tohost {0x$(PARAM_TOHOST)} [get_bd_cells core]
	set_property CONFIG.frhost {0x$(PARAM_FRHOST)} [get_bd_cells core]
	set_property CONFIG.uart {0x$(PARAM_UART)} [get_bd_cells core]
	set_property CONFIG.clint {0x$(PARAM_CLINT)} [get_bd_cells intctl]
	set_property CONFIG.cpufreq {$(PARAM_CPUFREQ)} [get_bd_cells intctl]
	set_property CONFIG.tbfreq {$(PARAM_TBFREQ)} [get_bd_cells intctl]
	set_property CONFIG.initrd {0x$(PARAM_INITRD)} [get_bd_cells socctl]
	set_property CONFIG.blsize {0x$(PARAM_BLSIZE)} [get_bd_cells socctl]
	set_property CONFIG.dcbase {0x$(PARAM_DCBASE)} [get_bd_cells socctl]
	set_property CONFIG.dcsize {0x$(PARAM_DCSIZE)} [get_bd_cells socctl]
	# Xilinx IP
	create_bd_cell -type ip -vlnv xilinx.com:ip:mig_7series:4.2 ddr3
	create_bd_cell -type ip -vlnv xilinx.com:ip:xlconstant:1.1 ground
	create_bd_cell -type ip -vlnv xilinx.com:ip:axi_uartlite:2.0 uartlite
	create_bd_cell -type ip -vlnv xilinx.com:ip:util_vector_logic:2.0 core_rst_gate_0
	apply_bd_automation -rule xilinx.com:bd_rule:mig_7series \\
		-config {Board_Interface "ddr3_sdram"} [get_bd_cells ddr3]
	set_property CONFIG.XML_INPUT_FILE {$(shell realpath .imp)/mig.prj} [get_bd_cells ddr3]
	set_property CONFIG.RESET_BOARD_INTERFACE {Custom} [get_bd_cells ddr3]
	set_property CONFIG.MIG_DONT_TOUCH_PARAM {Custom} [get_bd_cells ddr3]
	set_property CONFIG.BOARD_MIG_PARAM {ddr3_sdram} [get_bd_cells ddr3]
	set_property CONFIG.CONST_VAL {0} [get_bd_cells ground]
	set_property -dict [list \\
		CONFIG.C_BAUDRATE {115200} \\
		CONFIG.UARTLITE_BOARD_INTERFACE {usb_uart} \\
	] [get_bd_cells uartlite]
	set_property -dict [list \\
		CONFIG.C_OPERATION {or} \\
		CONFIG.C_SIZE {1} \\
	] [get_bd_cells core_rst_gate_0]
	# Connection
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {/ddr3/ui_clk (200 MHz)}                     \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/ddr3/S_AXI}                                \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          
	} [get_bd_intf_pins ddr3/S_AXI]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}       \\
		Clk_slave  {/ddr3/ui_clk (200 MHz)}                     \\
		Clk_xbar   {/ddr3/ui_clk (200 MHz)}                     \\
		Master     {/core/m_axi}                                \\
		Slave      {/uartlite/S_AXI}                            \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {/axi_smc}                                   \\
		master_apm {0}
	} [get_bd_intf_pins uartlite/S_AXI]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {usb_uart ( USB UART ) }                 \\
		Manual_Source   {Auto}                                   \\
	}  [get_bd_intf_pins uartlite/UART]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {reset (Reset)}                          \\
		Manual_Source   {New External Port (ACTIVE_LOW)}         \\
	} [get_bd_pins ddr3/sys_rst]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/intctl/s_axi}                              \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins intctl/s_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {Custom}                                 \\
		Manual_Source   {/ddr3/ui_clk_sync_rst (ACTIVE_HIGH)}    \\
	} [get_bd_pins rst_ddr3_$(CPUFREQ)M/ext_reset_in]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {/ddr3/ui_clk (200 MHz)}                     \\
		Clk_xbar   {/ddr3/ui_clk (200 MHz)}                     \\
		Master     {/socctl/m_axi}                              \\
		Slave      {/ddr3/S_AXI}                                \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {/axi_smc}                                   \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins socctl/m_axi]
	create_bd_intf_port -mode Master -vlnv mprc.pku.edu.cn:MPRC:sdcard_rtl:1.0 sd
	create_bd_port -dir I -type rst cpu_rst
	set_property name ddr [get_bd_intf_ports ddr3_sdram]
	set_property name sys_clk [get_bd_intf_ports sys_diff_clock]
	set_property name sys_rst [get_bd_ports reset]
	set_property name uart [get_bd_intf_ports usb_uart]
	set_property CONFIG.POLARITY ACTIVE_HIGH [get_bd_ports cpu_rst]
	set_property CONFIG.FREQ_HZ 200000000 [get_bd_intf_ports /sys_clk]
	disconnect_bd_net /rst_ddr3_$(CPUFREQ)M_peripheral_reset [get_bd_pins core/rst]
	disconnect_bd_net /rst_ddr3_$(CPUFREQ)M_peripheral_reset [get_bd_pins intctl/rst]
	connect_bd_intf_net [get_bd_intf_ports sd] [get_bd_intf_pins socctl/sd]
	connect_bd_net [get_bd_pins ddr3/init_calib_complete] [get_bd_pins socctl/ddr_init]
	connect_bd_net [get_bd_pins core/mip_ext] [get_bd_pins intctl/int_pend]
	connect_bd_net [get_bd_pins core/mtime] [get_bd_pins intctl/int_time]
	connect_bd_net [get_bd_pins core_rst_gate_0/Op1] [get_bd_ports cpu_rst]
	connect_bd_net [get_bd_pins core_rst_gate_0/Op2] [get_bd_pins socctl/core_rst]
	connect_bd_net [get_bd_pins core_rst_gate_0/Res] [get_bd_pins core/rst]
	connect_bd_net [get_bd_pins core_rst_gate_0/Res] [get_bd_pins intctl/rst]
	assign_bd_address -offset 0x$(PARAM_CLINT) -range 32M [get_bd_addr_segs intctl/s_axi/reg0]
	assign_bd_address -offset 0x$(PARAM_UART) -range 64K [get_bd_addr_segs uartlite/S_AXI/Reg]
	# Save board design
	save_bd_design
	generate_target all [get_files .imp/.imp.srcs/sources_1/bd/CROSPv0soc/CROSPv0soc.bd]

	# Run
	make_wrapper -files [get_files .imp/.imp.srcs/sources_1/bd/CROSPv0soc/CROSPv0soc.bd] -top
	add_files .imp/.imp.gen/sources_1/bd/CROSPv0soc/hdl/CROSPv0soc_wrapper.v
	add_files -fileset constrs_1 .imp/gs2.xdc
	set_property STEPS.POST_ROUTE_PHYS_OPT_DESIGN.IS_ENABLED true [get_runs impl_1]
	set_property STEPS.PLACE_DESIGN.ARGS.DIRECTIVE ExtraTimingOpt [get_runs impl_1]
	set_property STEPS.PHYS_OPT_DESIGN.ARGS.DIRECTIVE Explore [get_runs impl_1]
	set_property STEPS.ROUTE_DESIGN.ARGS.DIRECTIVE NoTimingRelaxation [get_runs impl_1]
	launch_runs impl_1 -to_step write_bitstream -jobs 32
endef
export IMP_TCL

define SIM_TCL
	# Create project and add IP
	create_project .sim .sim -part xc7k325tffg900-2
	set_property board_part digilentinc.com:genesys2:part0:1.1 [current_project]
	set_property ip_repo_paths {.core .intc .socc .sdintf} [current_project]
	update_ip_catalog

	# Create board design
	# Custom IP
	create_bd_design "CROSPv0soc"
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:CROSP:0.1 core
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:INTC:0.1 intctl
	create_bd_cell -type ip -vlnv xilinx.com:ip:xlconstant:1.1 ground
	set_property CONFIG.dcbase 0x$(PARAM_DCBASE) [get_bd_cells core]
	set_property CONFIG.init 1 [get_bd_cells core]
	set_property CONFIG.mwd $(PARAM_MWD) [get_bd_cells core]
	set_property CONFIG.pwd $(PARAM_PWD) [get_bd_cells core]
	set_property CONFIG.rst_pc {0x$(PARAM_RSTPC)} [get_bd_cells core]
	set_property CONFIG.tohost {0x$(PARAM_TOHOST)} [get_bd_cells core]
	set_property CONFIG.frhost {0x$(PARAM_FRHOST)} [get_bd_cells core]
	set_property CONFIG.uart {0x$(PARAM_UART)} [get_bd_cells core]
	set_property CONFIG.clint {0x$(PARAM_CLINT)} [get_bd_cells intctl]
	set_property CONFIG.cpufreq {$(PARAM_CPUFREQ)} [get_bd_cells intctl]
	set_property CONFIG.tbfreq {$(PARAM_TBFREQ)} [get_bd_cells intctl]
	set_property CONFIG.CONST_VAL {0} [get_bd_cells ground]
	# Xilinx IP
	create_bd_cell -type ip -vlnv xilinx.com:ip:axi_vip:1.1 axi_vip
	set_property CONFIG.INTERFACE_MODE {SLAVE} [get_bd_cells axi_vip]
	set_property CONFIG.HAS_ARESETN {0} [get_bd_cells axi_vip]
	set_property CONFIG.SLAVE_SEG_TYPE {MEM} [get_bd_cells axi_vip]
	# Connection
	create_bd_port -dir I -type clk -freq_hz $(PARAM_CPUFREQ) clk
	create_bd_port -dir I -type rst rstn
	connect_bd_net [get_bd_pins core/mip_ext] [get_bd_pins intctl/int_pend]
	connect_bd_net [get_bd_pins core/mtime] [get_bd_pins intctl/int_time]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {/clk ($(CPUFREQ) MHz)}                      \\
		Clk_slave  {/clk ($(CPUFREQ) MHz)}                      \\
		Clk_xbar   {/clk ($(CPUFREQ) MHz)}                      \\
		Master     {/core/m_axi}                                \\
		Slave      {/axi_vip/S_AXI}                             \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins axi_vip/S_AXI]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {/clk ($(CPUFREQ) MHz)}                      \\
		Clk_slave  {/clk ($(CPUFREQ) MHz)}                      \\
		Clk_xbar   {/clk ($(CPUFREQ) MHz)}                      \\
		Master     {/core/m_axi}                                \\
		Slave      {/intctl/s_axi}                              \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins intctl/s_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {Custom}                                 \\
		Manual_Source   {/rstn (ACTIVE_LOW)}                     \\
	} [get_bd_pins rst_clk_$(CPUFREQ)M/ext_reset_in]
	assign_bd_address -offset 0x0         -range 4G [get_bd_addr_segs axi_vip/S_AXI/Mem]
	assign_bd_address -offset 0x100000000 -range 32M [get_bd_addr_segs intctl/s_axi/reg0]
	# Save board design
	save_bd_design
	generate_target all [get_files .imp/.imp.srcs/sources_1/bd/CROSPv0soc/CROSPv0soc.bd]
	set_property SOURCE_SET sources_1 [get_filesets sim_1]
	add_files -fileset sim_1 -norecurse $(shell realpath .sim)/tb.sv
	add_files -fileset sim_1 -norecurse $(shell realpath .sim)/code.img
	add_files -fileset sim_1 -norecurse $(shell realpath .sim)/initrd.img
endef
export SIM_TCL

define CORE_TCL
	# Package core
	ipx::infer_core .core
	ipx::current_core .core/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name CROSP [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name CROSPv0 [ipx::current_core]
	set_property description {Clean-room RISC-V Out-of-order Superscalar Processor} [ipx::current_core]
	set_property vendor_display_name MPRC [ipx::current_core]
	set_property company_url https://mprc.pku.edu.cn [ipx::current_core]
	ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces rst -of_objects [ipx::current_core]]
	ipx::add_bus_parameter FREQ_HZ  [ipx::get_bus_interfaces clk -of_objects [ipx::current_core]]
	set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY -of_objects [ \\
		ipx::get_bus_interfaces rst -of_objects [ipx::current_core]]]
	set_property value $(PARAM_CPUFREQ) [ipx::get_bus_parameters FREQ_HZ -of_objects [ \\
		ipx::get_bus_interfaces clk -of_objects [ipx::current_core]]]
	set_property core_revision 2 [ipx::current_core]
	ipx::update_source_project_archive -component [ipx::current_core]
	ipx::create_xgui_files [ipx::current_core]
	ipx::update_checksums [ipx::current_core]
	ipx::check_integrity [ipx::current_core]
	ipx::save_core [ipx::current_core]
endef
export CORE_TCL

define INTC_TCL
	# Package interrupt controller
	ipx::infer_core .intc
	ipx::current_core .intc/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name INTC [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name INTCv0 [ipx::current_core]
	set_property description {INTerrupt Controller} [ipx::current_core]
	set_property vendor_display_name MPRC [ipx::current_core]
	set_property company_url https://mprc.pku.edu.cn [ipx::current_core]
	ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces rst -of_objects [ipx::current_core]]
	ipx::add_bus_parameter FREQ_HZ  [ipx::get_bus_interfaces clk -of_objects [ipx::current_core]]
	set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY -of_objects [ \\
		ipx::get_bus_interfaces rst -of_objects [ipx::current_core]]]
	set_property value $(PARAM_CPUFREQ) [ipx::get_bus_parameters FREQ_HZ -of_objects [ \\
		ipx::get_bus_interfaces clk -of_objects [ipx::current_core]]]
	set_property core_revision 2 [ipx::current_core]
	ipx::update_source_project_archive -component [ipx::current_core]
	ipx::create_xgui_files [ipx::current_core]
	ipx::update_checksums [ipx::current_core]
	ipx::check_integrity [ipx::current_core]
	ipx::save_core [ipx::current_core]
endef
export INTC_TCL

define SOCC_TCL
	# Import SD card interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.sdintf} [current_project]
	update_ip_catalog
	# Package SoC controller
	ipx::infer_core .socc
	ipx::current_core .socc/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name SOCC [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name SOCCv0 [ipx::current_core]
	set_property description {SOC Controller} [ipx::current_core]
	set_property vendor_display_name MPRC [ipx::current_core]
	set_property company_url https://mprc.pku.edu.cn [ipx::current_core]
	ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces rst -of_objects [ipx::current_core]]
	ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces core_rst -of_objects [ipx::current_core]]
	ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces clk -of_objects [ipx::current_core]]
	set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY -of_objects [ \\
		ipx::get_bus_interfaces rst -of_objects [ipx::current_core]]]
	set_property value $(PARAM_CPUFREQ) [ipx::get_bus_parameters FREQ_HZ -of_objects [ \\
		ipx::get_bus_interfaces clk -of_objects [ipx::current_core]]]
	set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY -of_objects [ \\
		ipx::get_bus_interfaces core_rst -of_objects [ipx::current_core]]]
	set_property core_revision 2 [ipx::current_core]
	ipx::update_source_project_archive -component [ipx::current_core]
	ipx::create_xgui_files [ipx::current_core]
	ipx::update_checksums [ipx::current_core]
	ipx::check_integrity [ipx::current_core]
	ipx::save_core [ipx::current_core]
endef
export SOCC_TCL

define TB_SV
	`timescale 1ns / 1ps
	module tb;
		localparam MHz = $(CPUFREQ);
		import axi_vip_pkg::*;
		import CROSPv0soc_axi_vip_0_pkg::*;
		logic clk, reset;
		CROSPv0soc inst(clk, reset);
		CROSPv0soc_axi_vip_0_slv_mem_t agent;
		initial while (1) begin clk = 0; #(500/MHz); clk = 1; #(500/MHz); end
		initial begin reset = 0; #100; reset = 1; end
		initial begin
			agent = new("axi_slv_agent", inst.axi_vip.inst.IF);
			agent.mem_model.pre_load_mem("code.img", 64'h$(PARAM_DCBASE));
			agent.mem_model.pre_load_mem("initrd.img", 64'h$(PARAM_INITRD));
			agent.mem_model.backdoor_memory_write('h10000008, 'b00000100, 'b1);
			agent.set_agent_tag("AXI Slave VIP");
			agent.set_verbosity(0);
			agent.start_slave();
		end
	endmodule
endef
export TB_SV

define MIG_PRJ
	<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
	<Project NoOfControllers="1">
		<ModuleName>CROSPv0soc_ddr3_0</ModuleName>
		<dci_inouts_inputs>1</dci_inouts_inputs>
		<dci_inputs>1</dci_inputs>
		<Debug_En>OFF</Debug_En>
		<DataDepth_En>1024</DataDepth_En>
		<LowPower_En>ON</LowPower_En>
		<XADC_En>Enabled</XADC_En>
		<TargetFPGA>xc7k325t-ffg900/-2</TargetFPGA>
		<Version>4.2</Version>
		<SystemClock>Differential</SystemClock>
		<ReferenceClock>Use System Clock</ReferenceClock>
		<SysResetPolarity>ACTIVE LOW</SysResetPolarity>
		<BankSelectionFlag>FALSE</BankSelectionFlag>
		<InternalVref>0</InternalVref>
		<dci_hr_inouts_inputs>50 Ohms</dci_hr_inouts_inputs>
		<dci_cascade>0</dci_cascade>
		<Controller number="0">
			<MemoryDevice>DDR3_SDRAM/Components/MT41J256m16XX-107</MemoryDevice>
			<TimePeriod>1250</TimePeriod>
			<VccAuxIO>2.0V</VccAuxIO>
			<PHYRatio>4:1</PHYRatio>
			<InputClkFreq>200</InputClkFreq>
			<UIExtraClocks>1</UIExtraClocks>
			<MMCM_VCO>800</MMCM_VCO>
			<MMCMClkOut0>$(shell echo $$((800/($(PARAM_CPUFREQ)/1000000))))</MMCMClkOut0>
			<MMCMClkOut1>1</MMCMClkOut1>
			<MMCMClkOut2>1</MMCMClkOut2>
			<MMCMClkOut3>1</MMCMClkOut3>
			<MMCMClkOut4>1</MMCMClkOut4>
			<DataWidth>32</DataWidth>
			<DeepMemory>1</DeepMemory>
			<DataMask>1</DataMask>
			<ECC>Disabled</ECC>
			<Ordering>Normal</Ordering>
			<BankMachineCnt>4</BankMachineCnt>
			<CustomPart>FALSE</CustomPart>
			<NewPartName/>
			<RowAddress>15</RowAddress>
			<ColAddress>10</ColAddress>
			<BankAddress>3</BankAddress>
			<MemoryVoltage>1.5V</MemoryVoltage>
			<C0_MEM_SIZE>1073741824</C0_MEM_SIZE>
			<UserMemoryAddressMap>BANK_ROW_COLUMN</UserMemoryAddressMap>
			<PinSelection>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AC12" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AB8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[10]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AA8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[11]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AB12" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[12]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AA12" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[13]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AH9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[14]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AE8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[1]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AD8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[2]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AC10" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[3]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AD9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[4]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AA13" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[5]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AA10" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[6]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AA11" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[7]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="Y10" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[8]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="Y11" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_addr[9]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AE9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_ba[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AB10" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_ba[1]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AC11" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_ba[2]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AF11" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_cas_n"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15" PADName="AC9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_ck_n[0]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15" PADName="AB9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_ck_p[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AJ9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_cke[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AH12" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_cs_n[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AD4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dm[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AF3" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dm[1]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AH4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dm[2]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AF8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dm[3]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AD3" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AF1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[10]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AE4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[11]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AE3" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[12]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AE5" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[13]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AF5" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[14]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AF6" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[15]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AJ4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[16]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AH6" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[17]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AH5" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[18]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AH2" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[19]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AC2" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[1]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AJ2" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[20]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AJ1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[21]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AK1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[22]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AJ3" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[23]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AF7" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[24]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AG7" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[25]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AJ6" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[26]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AK6" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[27]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AJ8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[28]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AK8" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[29]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AC1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[2]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AK5" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[30]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AK4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[31]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AC5" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[3]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AC4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[4]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AD6" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[5]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AE6" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[6]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AC7" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[7]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AF2" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[8]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15_T_DCI" PADName="AE1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dq[9]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AD1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_n[0]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AG3" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_n[1]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AH1" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_n[2]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AJ7" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_n[3]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AD2" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_p[0]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AG4" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_p[1]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AG2" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_p[2]"/>
				<Pin IN_TERM="" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AH7" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_dqs_p[3]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AK9" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_odt[0]"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AE11" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_ras_n"/>
				<Pin IN_TERM="" IOSTANDARD="LVCMOS15" PADName="AG5" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_reset_n"/>
				<Pin IN_TERM="" IOSTANDARD="SSTL15" PADName="AG13" SLEW="" VCCAUX_IO="NORMAL" name="ddr3_we_n"/>
			</PinSelection>
			<System_Clock>
				<Pin Bank="33" PADName="AD12/AD11(CC_P/N)" name="sys_clk_p/n"/>
			</System_Clock>
			<System_Control>
				<Pin Bank="Select Bank" PADName="No connect" name="sys_rst"/>
				<Pin Bank="Select Bank" PADName="No connect" name="init_calib_complete"/>
				<Pin Bank="Select Bank" PADName="No connect" name="tg_compare_error"/>
			</System_Control>
			<TimingParameters>
				<Parameters tcke="5" tfaw="35" tras="34" trcd="13.91" trefi="7.8" trfc="260" trp="13.91" trrd="6" trtp="7.5" twtr="7.5"/>
			</TimingParameters>
			<mrBurstLength name="Burst Length">8 - Fixed</mrBurstLength>
			<mrBurstType name="Read Burst Type and Length">Sequential</mrBurstType>
			<mrCasLatency name="CAS Latency">11</mrCasLatency>
			<mrMode name="Mode">Normal</mrMode>
			<mrDllReset name="DLL Reset">No</mrDllReset>
			<mrPdMode name="DLL control for precharge PD">Slow Exit</mrPdMode>
			<emrDllEnable name="DLL Enable">Enable</emrDllEnable>
			<emrOutputDriveStrength name="Output Driver Impedance Control">RZQ/7</emrOutputDriveStrength>
			<emrMirrorSelection name="Address Mirroring">Disable</emrMirrorSelection>
			<emrCSSelection name="Controller Chip Select Pin">Enable</emrCSSelection>
			<emrRTT name="RTT (nominal) - On Die Termination (ODT)">RZQ/6</emrRTT>
			<emrPosted name="Additive Latency (AL)">0</emrPosted>
			<emrOCD name="Write Leveling Enable">Disabled</emrOCD>
			<emrDQS name="TDQS enable">Enabled</emrDQS>
			<emrRDQS name="Qoff">Output Buffer Enabled</emrRDQS>
			<mr2PartialArraySelfRefresh name="Partial-Array Self Refresh">Full Array</mr2PartialArraySelfRefresh>
			<mr2CasWriteLatency name="CAS write latency">8</mr2CasWriteLatency>
			<mr2AutoSelfRefresh name="Auto Self Refresh">Enabled</mr2AutoSelfRefresh>
			<mr2SelfRefreshTempRange name="High Temparature Self Refresh Rate">Normal</mr2SelfRefreshTempRange>
			<mr2RTTWR name="RTT_WR - Dynamic On Die Termination (ODT)">Dynamic ODT off</mr2RTTWR>
			<PortInterface>AXI</PortInterface>
			<AXIParameters>
				<C0_C_RD_WR_ARB_ALGORITHM>RD_PRI_REG</C0_C_RD_WR_ARB_ALGORITHM>
				<C0_S_AXI_ADDR_WIDTH>30</C0_S_AXI_ADDR_WIDTH>
				<C0_S_AXI_DATA_WIDTH>64</C0_S_AXI_DATA_WIDTH>
				<C0_S_AXI_ID_WIDTH>3</C0_S_AXI_ID_WIDTH>
				<C0_S_AXI_SUPPORTS_NARROW_BURST>0</C0_S_AXI_SUPPORTS_NARROW_BURST>
			</AXIParameters>
		</Controller>
	</Project>
endef
export MIG_PRJ

define SDINTF_RTL
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:abstractionDefinition xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>sdcard_rtl</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:busType spirit:vendor="mprc.pku.edu.cn" spirit:library="MPRC"
		spirit:name="sdcard" spirit:version="1.0"/>
	<spirit:ports>
		<spirit:port>
		<spirit:logicalName>cd</spirit:logicalName>
		<spirit:description>card detection</spirit:description>
		<spirit:wire>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>cmd_t</spirit:logicalName>
		<spirit:description>command direction</spirit:description>
		<spirit:wire>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>cmd_i</spirit:logicalName>
		<spirit:description>command input</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isData>true</spirit:isData>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>cmd_o</spirit:logicalName>
		<spirit:description>command output</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isData>true</spirit:isData>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>dat_t</spirit:logicalName>
		<spirit:description>data direction</spirit:description>
		<spirit:wire>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>dat_i</spirit:logicalName>
		<spirit:description>data input</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isData>true</spirit:isData>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>4</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>4</spirit:width>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>dat_o</spirit:logicalName>
		<spirit:description>data output</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isData>true</spirit:isData>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>4</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>4</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>reset</spirit:logicalName>
		<spirit:description>reset signal</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isReset>true</spirit:isReset>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>sclk</spirit:logicalName>
		<spirit:description>clock signal</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isClock>true</spirit:isClock>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>1</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
	</spirit:ports>
	<spirit:vendorExtensions>
		<xilinx:abstractionDefinitionInfo>
		<xilinx:displayName>sdcard</xilinx:displayName>
		</xilinx:abstractionDefinitionInfo>
	</spirit:vendorExtensions>
	</spirit:abstractionDefinition>
endef
export SDINTF_RTL

define SDINTF_XML
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:busDefinition xmlns:xilinx="http://www.xilinx.com"
	xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
	xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>sdcard</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:directConnection>false</spirit:directConnection>
	<spirit:isAddressable>false</spirit:isAddressable>
	<spirit:maxMasters>1</spirit:maxMasters>
	<spirit:maxSlaves>1</spirit:maxSlaves>
	<spirit:description>SD card interface</spirit:description>
	<spirit:vendorExtensions>
		<xilinx:busDefinitionInfo>
		<xilinx:displayName>sdcard</xilinx:displayName>
		</xilinx:busDefinitionInfo>
	</spirit:vendorExtensions>
	</spirit:busDefinition>
endef
export SDINTF_XML

define GS2_XDC
	set_property -dict {PACKAGE_PIN E18  IOSTANDARD LVCMOS12} [get_ports {cpu_rst}];
	set_property -dict {PACKAGE_PIN P28  IOSTANDARD LVCMOS33} [get_ports {sd_cd}];
	set_property -dict {PACKAGE_PIN R29  IOSTANDARD LVCMOS33} [get_ports {sd_cmd_io}];
	set_property -dict {PACKAGE_PIN R26  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[0]}];
	set_property -dict {PACKAGE_PIN R30  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[1]}];
	set_property -dict {PACKAGE_PIN P29  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[2]}];
	set_property -dict {PACKAGE_PIN T30  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[3]}];
	set_property -dict {PACKAGE_PIN AE24 IOSTANDARD LVCMOS33} [get_ports {sd_reset}];
	set_property -dict {PACKAGE_PIN R28  IOSTANDARD LVCMOS33} [get_ports {sd_sclk}];
endef
export GS2_XDC

imp : .core/ .intc/ .socc/ .sdintf/
	$(RM) -r .imp/ && mkdir .imp
	echo "$$MIG_PRJ" > .imp/mig.prj
	echo "$$IMP_TCL" > .imp/imp.tcl
	echo "$$GS2_XDC" > .imp/gs2.xdc
	vivado -mode batch -source .imp/imp.tcl >/dev/null 2>&1

sim : .core/ .intc/ .sdintf/
	$(RM) -r .sim/ && mkdir .sim
	dd bs=32M count=1 if=$(realpath $(SIM_IMG)) of=.sim/initrd.img
	dd bs=32M count=1 if=$(realpath $(SIM_IMG)) of=.sim/code.img skip=1
	echo "$$TB_SV"   > .sim/tb.sv
	echo "$$SIM_TCL" > .sim/sim.tcl
	vivado -mode batch -source .sim/sim.tcl >/dev/null 2>&1

.core/ :
	$(RM) -r .core/ && mkdir .core
	ln -s $(CORE_SRC) .core/
	echo "$$CORE_TCL" > .core/core.tcl
	vivado -mode batch -source .core/core.tcl >/dev/null 2>&1

.intc/ :
	$(RM) -r .intc/ && mkdir .intc
	ln -s $(INTC_SRC) .intc/
	echo "$$INTC_TCL" > .intc/intc.tcl
	vivado -mode batch -source .intc/intc.tcl >/dev/null 2>&1

.socc/ : .sdintf/
	$(RM) -r .socc/ && mkdir .socc
	ln -s $(SOCC_SRC) .socc/
	echo "$$SOCC_TCL" > .socc/socc.tcl
	vivado -mode batch -source .socc/socc.tcl >/dev/null 2>&1

.sdintf/ :
	$(RM) -r .sdintf/ && mkdir .sdintf
	echo "$$SDINTF_RTL" > .sdintf/sdcard_rtl.xml
	echo "$$SDINTF_XML" > .sdintf/sdcard.xml

clean :
	$(RM) -r *.jou *.log *.txt *.str *.tcl *.xdc *.zip .[A-z]*/
