.PHONY : project clean

# parameters
CPUFREQ       = 50
DDR   		  = 80000000
ETH   		  = 60020000
UART  		  = 60010000
SDC   		  = 60000000
CLINT 		  = 02000000
PLIC  		  = 0c000000
ROM   		  = 00010000
PARAM_CPUFREQ = $(CPUFREQ)000000
PARAM_TBFREQ  = $(CPUFREQ)0000
PARAM_RSTPC   = 10040
PARAM_FWD     = 2
PARAM_DWD     = 2
PARAM_RWD     = 2
PARAM_IWD     = 3
PARAM_EWD     = 2
PARAM_CWD     = 2
PARAM_MWD     = 1

CORE_SRC = \
	$(shell realpath ../src/common/types.sv) \
	$(shell realpath ../src/common/mwpram.sv) \
	$(shell realpath ../src/common/firstk.sv) \
	$(shell realpath ../src/common/pma.sv) \
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
	$(shell realpath ../src/mmu/tlb.sv) \
	$(shell realpath ../src/mmu/cache.sv) \
	$(shell realpath ../src/mmu/mmu.sv) \
	$(shell realpath ../src/soc/crospaxi.sv)
CLINT_SRC = $(shell realpath ../src/soc/clint.sv)
PLIC_SRC  = $(shell realpath ../src/soc/plic.sv)
COHUB_SRC = $(shell realpath ../src/soc/cohub.sv)
UART_SRC  = \
	$(shell realpath ../src/soc/axi_uart/axi_uart.sv) \
	$(shell realpath ../src/soc/uart.sv)
SDC_SRC   = \
	$(shell realpath ../src/soc/axi_sdc/sd_defines.vh) \
	$(shell realpath ../src/soc/axi_sdc/axi_sd_fifo.sv) \
	$(shell realpath ../src/soc/axi_sdc/axi_sd_fifo_filler.sv) \
	$(shell realpath ../src/soc/axi_sdc/sd_cmd_master.sv) \
	$(shell realpath ../src/soc/axi_sdc/sd_data_master.sv) \
	$(shell realpath ../src/soc/axi_sdc/sd_cmd_serial_host.sv) \
	$(shell realpath ../src/soc/axi_sdc/sd_data_serial_host.sv) \
	$(shell realpath ../src/soc/axi_sdc/sd_data_xfer_trig.sv) \
	$(shell realpath ../src/soc/axi_sdc/axi_sdc_controller.sv) \
	$(shell realpath ../src/soc/sdc.sv)
ETH_SRC   = \
	$(shell realpath ../src/soc/axi_eth/ethernet.sv) \
	$(shell realpath ../src/soc/eth.sv)
DEF_SRC = $(shell realpath ../src/soc/def.sv)
ROM_IMG = /dev/urandom

define PRJ_TCL
	# Create project and add IP
	create_project .prj .prj -part xc7k325tffg900-2
	set_property board_part digilentinc.com:genesys2:part0:1.1 [current_project]
	set_property ip_repo_paths { \\
		.core .rom .clint .plic .cohub .uart .sdc .def .uartintf .mdiointf .sdintf .cohintf \\
	} [current_project]
	update_ip_catalog

	# Create board design
	# Custom IP
	create_bd_design "CROSPv0soc"
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:CROSP:0.1 core
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:ROM:0.1 rom
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:CLINT:0.1 clint
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:PLIC:0.1 plic
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:COHUB:0.1 cohub
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:UART:0.1 uart
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:SDC:0.1 sdc
	create_bd_cell -type ip -vlnv mprc.pku.edu.cn:MPRC:DEF:0.1 def
	set_property CONFIG.init 0 [get_bd_cells core]
	set_property CONFIG.rst_pc {0x$(PARAM_RSTPC)}  [get_bd_cells core]
	set_property CONFIG.fwd {$(PARAM_FWD)} [get_bd_cells core]
	set_property CONFIG.dwd {$(PARAM_DWD)} [get_bd_cells core]
	set_property CONFIG.rwd {$(PARAM_RWD)} [get_bd_cells core]
	set_property CONFIG.iwd {$(PARAM_IWD)} [get_bd_cells core]
	set_property CONFIG.ewd {$(PARAM_EWD)} [get_bd_cells core]
	set_property CONFIG.mwd {$(PARAM_MWD)} [get_bd_cells core]
	set_property CONFIG.cwd {$(PARAM_CWD)} [get_bd_cells core]
	set_property CONFIG.cpufreq {$(PARAM_CPUFREQ)} [get_bd_cells clint]
	set_property CONFIG.tbfreq  {$(PARAM_TBFREQ)}  [get_bd_cells clint]
	set_property CONFIG.cpufreq {$(PARAM_CPUFREQ)} [get_bd_cells uart]
	# Xilinx IP
	create_bd_cell -type ip -vlnv xilinx.com:ip:mig_7series:4.2 ddr3
	create_bd_cell -type ip -vlnv xilinx.com:ip:xlconcat:2.1 intcat
	create_bd_cell -type ip -vlnv xilinx.com:ip:util_vector_logic:2.0 ipor
	apply_bd_automation -rule xilinx.com:bd_rule:mig_7series \\
		-config {Board_Interface "ddr3_sdram"} [get_bd_cells ddr3]
	set_property CONFIG.XML_INPUT_FILE {$(shell realpath .prj)/mig.prj} [get_bd_cells ddr3]
	set_property CONFIG.RESET_BOARD_INTERFACE {Custom} [get_bd_cells ddr3]
	set_property CONFIG.MIG_DONT_TOUCH_PARAM {Custom} [get_bd_cells ddr3]
	set_property CONFIG.BOARD_MIG_PARAM {ddr3_sdram} [get_bd_cells ddr3]
	set_property CONFIG.NUM_PORTS   {8}  [get_bd_cells intcat]
	set_property CONFIG.C_OPERATION {or} [get_bd_cells ipor]
	set_property CONFIG.C_SIZE      {64} [get_bd_cells ipor]
	# Connection
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/clint/s_axi}                               \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins clint/s_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:clkrst -config { \\
		Clk      {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}           \\
		Freq     {$(CPUFREQ)}                                     \\
	} [get_bd_pins cohub/clk]
	apply_bd_automation -rule xilinx.com:bd_rule:clkrst -config { \\
		Clk      {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}           \\
		Freq     {$(CPUFREQ)}                                     \\
	} [get_bd_pins def/clk]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {/ddr3/ui_clk (200 MHz)}                     \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/ddr3/S_AXI}                                \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins ddr3/S_AXI]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {reset ( Reset ) }                       \\
		Manual_Source   {New External Port (ACTIVE_LOW)}         \\
	} [get_bd_pins ddr3/sys_rst]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/plic/s_axi}                                \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins plic/s_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/sdc/s_axi}                                 \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins sdc/s_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {Auto}                                       \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {Auto}                                       \\
		Master     {/core/m_axi}                                \\
		Slave      {/uart/s_axi}                                \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {New AXI SmartConnect}                       \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins uart/s_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {Custom}                                 \\
		Manual_Source   {/ddr3/ui_clk_sync_rst (ACTIVE_HIGH)}    \\
	} [get_bd_pins rst_ddr3_$(CPUFREQ)M/ext_reset_in]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}       \\
		Clk_slave  {/ddr3/ui_clk (200 MHz)}                     \\
		Clk_xbar   {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}       \\
		Master     {/sdc/m_axi}                                 \\
		Slave      {/ddr3/S_AXI}                                \\
		dr_seg     {Auto}                                       \\
		intc_ip    {/axi_smc}                                   \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins sdc/m_axi]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}       \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {/ddr3/ui_addn_clk_0 ($(CPUFREQ) MHz)}       \\
		Master     {/core/m_axi}                                \\
		Slave      {/rom/s_axi}                                 \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {/axi_smc}                                   \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins rom/s_axi]
	create_bd_intf_port -mode Master -vlnv mprc.pku.edu.cn:MPRC:sdcard_rtl:1.0 sd
	create_bd_intf_port -mode Master -vlnv mprc.pku.edu.cn:MPRC:uart_rtl:1.0 uart
	set_property name ddr [get_bd_intf_ports ddr3_sdram]
	set_property name sys_clk [get_bd_intf_ports sys_diff_clock]
	set_property name sys_rst [get_bd_ports reset]
	set_property CONFIG.FREQ_HZ 200000000 [get_bd_intf_ports /sys_clk]
	connect_bd_net      [get_bd_pins clint/int_time]           [get_bd_pins core/mtime]
	connect_bd_net      [get_bd_pins def/zero1]                [get_bd_pins intcat/In0]
	connect_bd_net      [get_bd_pins uart/intr]                [get_bd_pins intcat/In1]
	connect_bd_net      [get_bd_pins sdc/intr]                 [get_bd_pins intcat/In2]
	connect_bd_net      [get_bd_pins def/zero1]                [get_bd_pins intcat/In3]
	connect_bd_net      [get_bd_pins def/zero1]                [get_bd_pins intcat/In4]
	connect_bd_net      [get_bd_pins def/zero1]                [get_bd_pins intcat/In5]
	connect_bd_net      [get_bd_pins def/zero1]                [get_bd_pins intcat/In6]
	connect_bd_net      [get_bd_pins def/zero1]                [get_bd_pins intcat/In7]
	connect_bd_net      [get_bd_pins intcat/dout]              [get_bd_pins plic/int_vect]
	connect_bd_net      [get_bd_pins plic/int_pend]            [get_bd_pins ipor/Op1]
	connect_bd_net      [get_bd_pins clint/int_pend]           [get_bd_pins ipor/Op2]
	connect_bd_net      [get_bd_pins ipor/Res]                 [get_bd_pins core/mip_ext]
	connect_bd_net      [get_bd_pins ddr3/init_calib_complete] [get_bd_pins rst_ddr3_$(CPUFREQ)M/aux_reset_in]
	connect_bd_net      [get_bd_pins ddr3/init_calib_complete] [get_bd_pins rst_ddr3_200M/aux_reset_in]
	connect_bd_intf_net [get_bd_intf_pins cohub/s_mmu] [get_bd_intf_pins core/m_coh]
	connect_bd_intf_net [get_bd_intf_pins cohub/s_sdc] [get_bd_intf_pins sdc/m_coh]
	connect_bd_intf_net [get_bd_intf_pins cohub/m_mmu] [get_bd_intf_pins core/s_coh]
	connect_bd_intf_net [get_bd_intf_pins cohub/m_sdc] [get_bd_intf_pins sdc/s_coh]
	connect_bd_intf_net [get_bd_intf_ports sd]         [get_bd_intf_pins sdc/sd]
	connect_bd_intf_net [get_bd_intf_ports uart]       [get_bd_intf_pins uart/uart]
	connect_bd_intf_net [get_bd_intf_pins def/s_mem]   [get_bd_intf_pins cohub/m_mem]
	connect_bd_intf_net [get_bd_intf_pins def/m_mem]   [get_bd_intf_pins cohub/s_mem]
	assign_bd_address -offset 0x$(CLINT) -range 64K [get_bd_addr_segs clint/s_axi/reg0]
	assign_bd_address -offset 0x$(PLIC)  -range 64M [get_bd_addr_segs plic/s_axi/reg0]
	assign_bd_address -offset 0x$(UART)  -range 64K [get_bd_addr_segs uart/s_axi/reg0]
	assign_bd_address -offset 0x$(SDC)   -range 64K [get_bd_addr_segs sdc/s_axi/reg0]
	assign_bd_address -offset 0x$(ROM)   -range 64K [get_bd_addr_segs rom/s_axi/reg0]
	exclude_bd_addr_seg -target_address_space [get_bd_addr_spaces sdc/m_axi] [get_bd_addr_segs clint/s_axi/reg0]
	exclude_bd_addr_seg -target_address_space [get_bd_addr_spaces sdc/m_axi] [get_bd_addr_segs plic/s_axi/reg0]
	exclude_bd_addr_seg -target_address_space [get_bd_addr_spaces sdc/m_axi] [get_bd_addr_segs rom/s_axi/reg0]
	exclude_bd_addr_seg -target_address_space [get_bd_addr_spaces sdc/m_axi] [get_bd_addr_segs sdc/s_axi/reg0]
	exclude_bd_addr_seg -target_address_space [get_bd_addr_spaces sdc/m_axi] [get_bd_addr_segs uart/s_axi/reg0]
	# Save board design
	save_bd_design
	generate_target all [get_files .prj/.prj.srcs/sources_1/bd/CROSPv0soc/CROSPv0soc.bd]
	# Make wrapper and set constraints
	make_wrapper -files [get_files .prj/.prj.srcs/sources_1/bd/CROSPv0soc/CROSPv0soc.bd] -top
	add_files .prj/.prj.gen/sources_1/bd/CROSPv0soc/hdl/CROSPv0soc_wrapper.v
	add_files -fileset constrs_1 .prj/gs2.xdc

	# Create simulation design
	save_bd_design_as CROSPv0sim -dir {.prj/.prj.srcs/sim_1/bd}
	add_files -fileset sim_1 -norecurse .prj/.prj.srcs/sim_1/bd/CROSPv0sim/CROSPv0sim.bd
	open_bd_design {.prj/.prj.srcs/sim_1/bd/CROSPv0sim/CROSPv0sim.bd}
	remove_files .prj/.prj.srcs/sim_1/bd/CROSPv0sim/ip/CROSPv0sim_ddr3_0/mig.prj
	delete_bd_objs [get_bd_nets reset_1] [get_bd_intf_nets sys_diff_clock_1] \\
		[get_bd_nets rst_ddr3_200M_peripheral_aresetn] [get_bd_intf_nets ddr3_DDR3] \\
		[get_bd_intf_nets axi_smc_M01_AXI] [get_bd_cells ddr3] [get_bd_nets ddr3_mmcm_locked] \\
		[get_bd_nets ddr3_ui_clk] [get_bd_nets ddr3_ui_clk_sync_rst] [get_bd_cells rst_ddr3_200M] \\
		[get_bd_nets rst_ddr3_$(CPUFREQ)M_peripheral_aresetn] [get_bd_cells rst_ddr3_$(CPUFREQ)M] \\
		[get_bd_intf_ports ddr] [get_bd_ports sys_rst] [get_bd_intf_ports sys_clk]
	create_bd_cell -type ip -vlnv xilinx.com:ip:axi_vip:1.1 vip
	create_bd_port -dir I -type clk -freq_hz $(PARAM_CPUFREQ) clk_$(CPUFREQ)M
	create_bd_port -dir I -type clk -freq_hz 200000000 clk_200M
	create_bd_port -dir I -type rst rst
	set_property CONFIG.init 1 [get_bd_cells core]
	set_property CONFIG.INTERFACE_MODE {SLAVE} [get_bd_cells vip]
	set_property CONFIG.SLAVE_SEG_TYPE {MEM} [get_bd_cells vip]
	set_property CONFIG.POLARITY {ACTIVE_HIGH} [get_bd_ports rst]
	connect_bd_net [get_bd_pins /core/clk]      [get_bd_ports clk_$(CPUFREQ)M]
	connect_bd_net [get_bd_pins /axi_smc/aclk1] [get_bd_ports clk_200M]
	connect_bd_net [get_bd_pins /core/rst]      [get_bd_ports rst]
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \\
		Clk_master {/clk ($(CPUFREQ) MHz)}                      \\
		Clk_slave  {Auto}                                       \\
		Clk_xbar   {/clk ($(CPUFREQ) MHz)}                      \\
		Master     {/core/m_axi}                                \\
		Slave      {/vip/S_AXI}                                 \\
		ddr_seg    {Auto}                                       \\
		intc_ip    {/axi_smc}                                   \\
		master_apm {0}                                          \\
	} [get_bd_intf_pins vip/S_AXI]
	assign_bd_address -offset 0x$(DDR) -range 1G [get_bd_addr_segs vip/S_AXI/Mem]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {Custom}                                 \\
		Manual_Source   {/rst (ACTIVE_LOW)}                      \\
	} [get_bd_pins rst_clk_$(CPUFREQ)M_$(CPUFREQ)M/ext_reset_in]
	apply_bd_automation -rule xilinx.com:bd_rule:board -config { \\
		Board_Interface {Custom}                                 \\
		Manual_Source   {/rst (ACTIVE_LOW)}                      \\
	} [get_bd_pins rst_clk_200M_200M/ext_reset_in]
	save_bd_design
	generate_target all [get_files .prj/.prj.srcs/sim_1/bd/CROSPv0sim/CROSPv0sim.bd]
	add_files -fileset sim_1 .prj/tb.sv
	set_property top tb [get_filesets sim_1]
endef
export PRJ_TCL

define BLD_TCL
	open_project .prj/.prj.xpr
	# Run
	# # if no optimization is needed, uncomment these lines
	# set_property STEPS.OPT_DESIGN.IS_ENABLED false [get_runs impl_1]
	# set_property STEPS.PHYS_OPT_DESIGN.IS_ENABLED false [get_runs impl_1]
	# # end of cancelling optimization
	# # if extra timing optimization is needed, uncomment these lines
	# set_property STEPS.POST_ROUTE_PHYS_OPT_DESIGN.IS_ENABLED true [get_runs impl_1]
	# set_property STEPS.PLACE_DESIGN.ARGS.DIRECTIVE ExtraTimingOpt [get_runs impl_1]
	# set_property STEPS.PHYS_OPT_DESIGN.ARGS.DIRECTIVE Explore [get_runs impl_1]
	# set_property STEPS.ROUTE_DESIGN.ARGS.DIRECTIVE NoTimingRelaxation [get_runs impl_1]
	# # end of extra optimization
	launch_runs impl_1 -to_step write_bitstream -jobs 32
endef
export BLD_TCL

define CORE_TCL
	# Import coherence interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.cohintf} [current_project]
	update_ip_catalog
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

define ROM_TCL
	# Package boot ROM
	ipx::infer_core .rom
	ipx::current_core .rom/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name ROM [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name ROMv0 [ipx::current_core]
	set_property description {Core-Local INTerruptor} [ipx::current_core]
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
export ROM_TCL

define CLINT_TCL
	# Package core-local interruptor
	ipx::infer_core .clint
	ipx::current_core .clint/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name CLINT [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name CLINTv0 [ipx::current_core]
	set_property description {Core-Local INTerruptor} [ipx::current_core]
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
export CLINT_TCL

define PLIC_TCL
	# Package core-local interruptor
	ipx::infer_core .plic
	ipx::current_core .plic/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name PLIC [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name PLICv0 [ipx::current_core]
	set_property description {Core-Local INTerruptor} [ipx::current_core]
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
export PLIC_TCL

define UART_TCL
	# Import UART interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.uartintf} [current_project]
	update_ip_catalog
	# Package UART AXI controller
	ipx::infer_core .uart
	ipx::current_core .uart/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name UART [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name UARTv0 [ipx::current_core]
	set_property description {UART AXI controller} [ipx::current_core]
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
export UART_TCL

define SDC_TCL
	# Import SD card interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.sdintf .cohintf} [current_project]
	update_ip_catalog
	# Package SD card controller
	ipx::infer_core .sdc
	ipx::current_core .sdc/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name SDC [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name SDCv0 [ipx::current_core]
	set_property description {SD card controller} [ipx::current_core]
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
export SDC_TCL

define ETH_TCL
	# Import MDIO interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.mdiointf} [current_project]
	update_ip_catalog
	# Package ethernet controller
	ipx::infer_core .eth
	ipx::current_core .eth/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name ETH [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name ETHv0 [ipx::current_core]
	set_property description {Ethernet controller} [ipx::current_core]
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
export ETH_TCL

define DEF_TCL
	# Import coherence interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.cohintf} [current_project]
	update_ip_catalog
	# Package default module
	ipx::infer_core .def
	ipx::current_core .def/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name DEF [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name DEFv0 [ipx::current_core]
	set_property description {Default module} [ipx::current_core]
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
export DEF_TCL

define COHUB_TCL
	# Import coherence interface
	create_project -in_memory -part xc7k325tffg900-2
	set_property ip_repo_paths {.cohintf} [current_project]
	update_ip_catalog
	# Package coherence hub
	ipx::infer_core .cohub
	ipx::current_core .cohub/component.xml
	set_property vendor mprc.pku.edu.cn [ipx::current_core]
	set_property library MPRC [ipx::current_core]
	set_property name COHUB [ipx::current_core]
	set_property version 0.1 [ipx::current_core]
	set_property display_name COHUBv0 [ipx::current_core]
	set_property description {Coherence hub} [ipx::current_core]
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
export COHUB_TCL

define ROM_SV_HEAD
	module rom (
		input  logic clk,
		input  logic rst,
		/* AXI interface */
		input  logic [15:0] s_axi_awaddr,
		input  logic        s_axi_awvalid,
		output logic        s_axi_awready,
		input  logic [63:0] s_axi_wdata,
		input  logic        s_axi_wvalid,
		output logic        s_axi_wready,
		output logic  [1:0] s_axi_bresp,
		output logic        s_axi_bvalid,
		input  logic        s_axi_bready,
		input  logic [15:0] s_axi_araddr,
		input  logic        s_axi_arvalid,
		output logic        s_axi_arready,
		output logic [63:0] s_axi_rdata,
		output logic  [1:0] s_axi_rresp,
		output logic        s_axi_rvalid,
		input  logic        s_axi_rready
	);
		logic [63:0] mem[8191:0];
		logic [15:0] waddr;
		logic [63:0] wdata;
		always_ff @(posedge clk)
			if (rst) begin
				s_axi_awready <= 1;
				s_axi_arready <= 1;
				s_axi_wready  <= 1;
				s_axi_rvalid  <= 0;
				s_axi_bvalid  <= 0;
			end else begin
				/* AW handshake */
				if (s_axi_awready & s_axi_awvalid) begin
					s_axi_awready <= 0;
					waddr <= s_axi_awaddr;
				end
				/* AR handshake */
				if (s_axi_arready & s_axi_arvalid) begin
					s_axi_arready <= 0;
					s_axi_rvalid  <= 1;
					s_axi_rresp   <= 0;
					s_axi_rdata   <= mem[s_axi_araddr >> 3];
				end
				/* W handshake */
				if (s_axi_wready & s_axi_wvalid) begin
					s_axi_wready <= 0;
					wdata <= s_axi_wdata;
				end
				/* R handshake */
				if (s_axi_rready & s_axi_rvalid) begin
					s_axi_arready <= 1;
					s_axi_rvalid  <= 0;
				end
				/* AW and W handshake */
				if (~s_axi_awready & ~s_axi_wready) begin
					s_axi_bvalid <= 1;
					s_axi_bresp  <= 1;
				end
				/* B handshake */
				if (s_axi_bready & s_axi_bvalid) begin
					s_axi_awready <= 1;
					s_axi_wready  <= 1;
					s_axi_bvalid  <= 0;
				end
			end
		initial begin
endef
export ROM_SV_HEAD
define ROM_SV_TAIL
		end
	endmodule
endef
export ROM_SV_TAIL

define TB_SV
	`timescale 1ns / 1ps
	module tb;
		localparam MHz = $(CPUFREQ);
		import axi_vip_pkg::*;
		import CROSPv0sim_vip_0_pkg::*;
		logic clk_$(CPUFREQ)M, clk_200M, reset;
		logic sd_cd, sd_cmd_i, sd_cmd_o, sd_cmd_t, sd_dat_t, sd_reset, sd_sclk;
		logic [3:0] sd_dat_i, sd_dat_o;
		logic uart_rx, uart_tx;
		CROSPv0sim inst(
			clk_200M, clk_$(CPUFREQ)M, reset,
			sd_cd, sd_cmd_i, sd_cmd_o, sd_cmd_t,
			sd_dat_i, sd_dat_o, sd_dat_t, sd_reset, sd_sclk,
			uart_rx, uart_tx
		);
		CROSPv0sim_vip_0_slv_mem_t agent;
		initial while (1) begin clk_$(CPUFREQ)M = 0; #(500/MHz); clk_$(CPUFREQ)M = 1; #(500/MHz); end
		initial while (1) begin clk_200M = 0; #2.5; clk_200M = 1; #2.5; end
		initial begin reset = 1; #100; reset = 0; end
		initial begin
			agent = new("axi_slv_agent", inst.vip.inst.IF);
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

define UARTINTF_RTL
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:abstractionDefinition xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>uart_rtl</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:busType spirit:vendor="mprc.pku.edu.cn"
		spirit:library="MPRC" spirit:name="uart" spirit:version="1.0"/>
	<spirit:ports>
		<spirit:port>
		<spirit:logicalName>rx</spirit:logicalName>
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
			<spirit:defaultValue>1</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>tx</spirit:logicalName>
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
			<spirit:defaultValue>1</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
	</spirit:ports>
	</spirit:abstractionDefinition>
endef
export UARTINTF_RTL

define UARTINTF_XML
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:busDefinition
		xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>uart</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:directConnection>false</spirit:directConnection>
	<spirit:isAddressable>false</spirit:isAddressable>
	<spirit:maxMasters>1</spirit:maxMasters>
	<spirit:maxSlaves>1</spirit:maxSlaves>
	</spirit:busDefinition>
endef
export UARTINTF_XML

define COHINTF_RTL
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:abstractionDefinition xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>coherence_rtl</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:busType spirit:vendor="mprc.pku.edu.cn" spirit:library="MPRC"
		spirit:name="coherence" spirit:version="1.0"/>
	<spirit:ports>
		<spirit:port>
		<spirit:logicalName>lock</spirit:logicalName>
		<spirit:description>lock signal</spirit:description>
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
		<spirit:logicalName>rqst</spirit:logicalName>
		<spirit:description>request ID</spirit:description>
		<spirit:wire>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>trsc</spirit:logicalName>
		<spirit:description>coherence transaction</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isData>true</spirit:isData>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>addr</spirit:logicalName>
		<spirit:description>coherence address</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isAddress>true</spirit:isAddress>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>64</spirit:width>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>64</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>resp</spirit:logicalName>
		<spirit:description>coherence response</spirit:description>
		<spirit:wire>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			</spirit:onSlave>
			<spirit:defaultValue>0</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>mesi</spirit:logicalName>
		<spirit:description>coherence state</spirit:description>
		<spirit:wire>
			<spirit:qualifier>
			<spirit:isData>true</spirit:isData>
			</spirit:qualifier>
			<spirit:onMaster>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			<spirit:direction>in</spirit:direction>
			</spirit:onMaster>
			<spirit:onSlave>
			<spirit:presence>required</spirit:presence>
			<spirit:width>8</spirit:width>
			</spirit:onSlave>
		</spirit:wire>
		</spirit:port>
	</spirit:ports>
	<spirit:vendorExtensions>
		<xilinx:abstractionDefinitionInfo>
		<xilinx:displayName>coherence</xilinx:displayName>
		</xilinx:abstractionDefinitionInfo>
	</spirit:vendorExtensions>
	</spirit:abstractionDefinition>
endef
export COHINTF_RTL

define COHINTF_XML
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:busDefinition xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>coherence</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:directConnection>false</spirit:directConnection>
	<spirit:isAddressable>false</spirit:isAddressable>
	<spirit:maxMasters>1</spirit:maxMasters>
	<spirit:maxSlaves>1</spirit:maxSlaves>
	<spirit:description>Coherence interface</spirit:description>
	<spirit:vendorExtensions>
		<xilinx:busDefinitionInfo>
		<xilinx:displayName>coherence</xilinx:displayName>
		</xilinx:busDefinitionInfo>
	</spirit:vendorExtensions>
	</spirit:busDefinition>
endef
export COHINTF_XML

define MDIOINTF_RTL
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:abstractionDefinition
		xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>mdio_rtl</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:busType spirit:vendor="mprc.pku.edu.cn"
		spirit:library="MPRC" spirit:name="mdio" spirit:version="1.0"/>
	<spirit:ports>
		<spirit:port>
		<spirit:logicalName>clock</spirit:logicalName>
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
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>int</spirit:logicalName>
		<spirit:description>interrupt</spirit:description>
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
		<spirit:logicalName>data_t</spirit:logicalName>
		<spirit:description>data tri-state</spirit:description>
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
			<spirit:defaultValue>1</spirit:defaultValue>
		</spirit:wire>
		</spirit:port>
		<spirit:port>
		<spirit:logicalName>data_o</spirit:logicalName>
		<spirit:description>data output</spirit:description>
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
		<spirit:logicalName>data_i</spirit:logicalName>
		<spirit:description>input data</spirit:description>
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
	</spirit:ports>
	</spirit:abstractionDefinition>
endef
export MDIOINTF_RTL

define MDIOINTF_XML
	<?xml version="1.0" encoding="UTF-8"?>
	<spirit:busDefinition
		xmlns:xilinx="http://www.xilinx.com"
		xmlns:spirit="http://www.spiritconsortium.org/XMLSchema/SPIRIT/1685-2009"
		xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<spirit:vendor>mprc.pku.edu.cn</spirit:vendor>
	<spirit:library>MPRC</spirit:library>
	<spirit:name>mdio</spirit:name>
	<spirit:version>1.0</spirit:version>
	<spirit:directConnection>false</spirit:directConnection>
	<spirit:isAddressable>false</spirit:isAddressable>
	<spirit:maxMasters>1</spirit:maxMasters>
	<spirit:maxSlaves>1</spirit:maxSlaves>
	</spirit:busDefinition>
endef
export MDIOINTF_XML

define GS2_XDC
	set_property -dict {PACKAGE_PIN P28  IOSTANDARD LVCMOS33} [get_ports {sd_cd}];
	set_property -dict {PACKAGE_PIN R29  IOSTANDARD LVCMOS33} [get_ports {sd_cmd_io}];
	set_property -dict {PACKAGE_PIN R26  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[0]}];
	set_property -dict {PACKAGE_PIN R30  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[1]}];
	set_property -dict {PACKAGE_PIN P29  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[2]}];
	set_property -dict {PACKAGE_PIN T30  IOSTANDARD LVCMOS33} [get_ports {sd_dat_io[3]}];
	set_property -dict {PACKAGE_PIN AE24 IOSTANDARD LVCMOS33} [get_ports {sd_reset}];
	set_property -dict {PACKAGE_PIN R28  IOSTANDARD LVCMOS33} [get_ports {sd_sclk}];
	set_property -dict {PACKAGE_PIN Y23  IOSTANDARD LVCMOS33} [get_ports {uart_tx}];
	set_property -dict {PACKAGE_PIN Y20  IOSTANDARD LVCMOS33} [get_ports {uart_rx}];
endef
export GS2_XDC

project : .sdintf/ .cohintf/ .core/ .clint/ .plic/ .cohub/ .rom/ .sdc/ .uart/ .eth/ .def/
	$(RM) -r .prj/ && mkdir .prj
	echo "$$MIG_PRJ" > .prj/mig.prj
	echo "$$PRJ_TCL" > .prj/prj.tcl
	echo "$$GS2_XDC" > .prj/gs2.xdc
	echo "$$TB_SV"   > .prj/tb.sv
	vivado -mode batch -source .prj/prj.tcl >/dev/null 2>&1

build :
	echo "$$BLD_TCL" > .prj/bld.tcl
	vivado -mode batch -source .prj/bld.tcl >/dev/null 2>&1

.core/ : $(CORE_SRC)
	$(RM) -r .core/ && mkdir .core
	ln -s $(CORE_SRC) .core/
	echo "$$CORE_TCL" > .core/core.tcl
	vivado -mode batch -source .core/core.tcl >/dev/null 2>&1

.rom/ :
	$(RM) -r .rom/ && mkdir .rom
	echo "$$ROM_SV_HEAD" > .rom/rom.sv
	hexdump -v -n 65536 -e '2/4 "%08X " "\n"' $(ROM_IMG) | \
		awk '{printf "\t\t\tmem["NR-1"] <= 0x" $$2$$1 ";\n"}' | \
		sed "s/0x/64'h/g" >> .rom/rom.sv
	echo "$$ROM_SV_TAIL" >> .rom/rom.sv
	echo "$$ROM_TCL" > .rom/rom.tcl
	vivado -mode batch -source .rom/rom.tcl >/dev/null 2>&1

.clint/ : $(CLINT_SRC)
	$(RM) -r .clint/ && mkdir .clint
	ln -s $(CLINT_SRC) .clint/
	echo "$$CLINT_TCL" > .clint/clint.tcl
	vivado -mode batch -source .clint/clint.tcl >/dev/null 2>&1

.plic/ : $(PLIC_SRC)
	$(RM) -r .plic/ && mkdir .plic
	ln -s $(PLIC_SRC) .plic/
	echo "$$PLIC_TCL" > .plic/plic.tcl
	vivado -mode batch -source .plic/plic.tcl >/dev/null 2>&1

.uart/ : $(UART_SRC) .uartintf/
	$(RM) -r .uart/ && mkdir .uart
	ln -s $(UART_SRC) .uart/
	echo "$$UART_TCL" > .uart/uart.tcl
	vivado -mode batch -source .uart/uart.tcl >/dev/null 2>&1

.sdc/ : $(SDC_SRC) .sdintf/ .cohintf/
	$(RM) -r .sdc/ && mkdir .sdc
	ln -s $(SDC_SRC) .sdc/
	echo "$$SDC_TCL" > .sdc/sdc.tcl
	vivado -mode batch -source .sdc/sdc.tcl >/dev/null 2>&1

.eth/ : $(ETH_SRC) .mdiointf/
	$(RM) -r .eth/ && mkdir .eth
	ln -s $(ETH_SRC) .eth/
	echo "$$ETH_TCL" > .eth/eth.tcl
	vivado -mode batch -source .eth/eth.tcl >/dev/null 2>&1

.def/ : $(DEF_SRC) .cohintf/
	$(RM) -r .def/ && mkdir .def
	ln -s $(DEF_SRC) .def/
	echo "$$DEF_TCL" > .def/def.tcl
	vivado -mode batch -source .def/def.tcl >/dev/null 2>&1

.cohub/ : $(COHUB_SRC) .cohintf/
	$(RM) -r .cohub/ && mkdir .cohub
	ln -s $(COHUB_SRC) .cohub/
	echo "$$COHUB_TCL" > .cohub/cohub.tcl
	vivado -mode batch -source .cohub/cohub.tcl >/dev/null 2>&1

.uartintf/ :
	$(RM) -r .uartintf/ && mkdir .uartintf
	echo "$$UARTINTF_RTL" > .uartintf/uart_rtl.xml
	echo "$$UARTINTF_XML" > .uartintf/uart.xml

.sdintf/ :
	$(RM) -r .sdintf/ && mkdir .sdintf
	echo "$$SDINTF_RTL" > .sdintf/sdcard_rtl.xml
	echo "$$SDINTF_XML" > .sdintf/sdcard.xml

.mdiointf/ :
	$(RM) -r .mdiointf/ && mkdir .mdiointf
	echo "$$MDIOINTF_RTL" > .mdiointf/mdio_rtl.xml
	echo "$$MDIOINTF_XML" > .mdiointf/mdio.xml

.cohintf/:
	$(RM) -r .cohintf/ && mkdir .cohintf/
	echo "$$COHINTF_RTL" > .cohintf/coherence_rtl.xml
	echo "$$COHINTF_XML" > .cohintf/coherence.xml

clean :
	$(RM) -r *.jou *.log *.txt *.str *.tcl *.xdc *.zip .[A-z]*/
