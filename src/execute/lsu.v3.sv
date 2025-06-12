//****************************************************************************
// File:        LSU_v3.sv
// Author:      Hao Mingyang<2301213200@pku.edu.cn>
// Date:        2025.06.09
// Version:     v0.3
// Project:     CROSP
// Module:      LSU
// Description: Load Store Unit with multi dispatch 、multi commit 、  2cycle tlb 、single exe

//****************************************************************************
module LSU
#(
    parameter numSTQEntries = 8 ,
    parameter numLDQEntries = 8 ,
    parameter LDQAddrSz = $clog2(numLDQEntries),
    parameter STQAddrSz = $clog2(numSTQEntries), 
    parameter LSUAddrSz = (LDQAddrSz > STQAddrSz)? LDQAddrSz : STQAddrSz,
    parameter blockOffBits = 6,
    parameter robAddrSz = 7,
    parameter MAX_BR_COUNT = 4,
    parameter ADDR_WIDTH = 64,
    parameter dispatch_width     =  4,  // dispatch宽度为4
    parameter commit_width       =  2   // commit宽度为2
)
(
    input  logic                                                clk,
    input  logic                                                rst,

    //connect with Core
    input  logic [dispatch_width-1:0]                                    dis_st_valids_i,//dispatch阶段发向LSU的store有效位信号
    input  logic [dispatch_width-1:0]                                    dis_ld_valids_i,//dispatch阶段发向LSU的load有效位信号
    input  lsu_funct_t  [dispatch_width-1:0]                             dis_uops_i,     //dispatch阶段发向LSU的uop
    output logic [LDQAddrSz-1:0]                                         new_ldq_idx_o,  //当前ldq空表项首位
    output logic [STQAddrSz-1:0]                                         new_stq_idx_o,  //当前stq空表项首位
    output logic [dispatch_width-1:0]                                    ldq_almost_full_o,     //ldq队列要满，注意接受load指令
    output logic [dispatch_width-1:0]                                    stq_almost_full_o,     //stq队列要满，注意接受store指令
    output logic                                                         lsu_fencei_rdy_o,//可以fencei ，表示lsu stq空，才可以等待流水线空
    input  logic                                                         core_exception_i,//core发进来的exception信号，lsu清空所有表项


    //connect with Execution Unit
    input  func_unit_resp_t                                     exe_req_i,       // 经过maddrcalc生成地址后发往LSU的执行请求
    output exe_unit_resp_t                                      core_exe_iresp_o,// load指令得到 data 发往 regfiles的请求



    //connect with Dcache(Memory)
    output logic                                                s1_kill_o,               // 在访存阶段发生load顺序错误或数据前递，将kill信号发往Dcache
    input  logic                                                dmem_req_ready_i,        // 在访存阶段与Dcache的握手信号，表示当前Dcache可以进行访存
    output dc_req_t                                             dmem_req_o,              // 在访存阶段向Dcache发送访存请求
    output logic                                                dmem_req_valid_o,        // 上述访存请求的有效位
    output logic                                                dmem_release_ready_o,    // 发往Dcache的已经准备好处理release的信号
    input  logic                                                dmem_release_valid_i,    // Dcache发进来的release有效的信号
    input  addr_t                                               dmem_release_address_i,  // Dcache进行release的地址
    input  dc_resp_t                                            dmem_resp_i,             // Dcache返回请求
    input  dc_req_t                                             dmem_nack_i,             // Dcache发进来的对当前load / store指令的nack信号
    output brupdate_t                                           dmem_brupdate_o,         // 从core发过来的brupdate信号存一周期发往Dcache
    output logic                                                dmem_exception_o,        // 从core发过来的exception信号存一周期发往Dcache
    output logic [robAddrSz-1:0]                                dmem_rob_pnr_idx_o,      // 从core发过来的rob pnr表项存一周期发往Dcache
    output logic [robAddrSz-1:0]                                dmem_rob_head_idx_o,     // 从core发过来的rob表头存一周期发往Dcache
    // Clears prefetching MSHRs
    output logic                                                dmem_force_order_o,      // stq处理fence指令要求MSHR进行order
    input  logic                                                dmem_ordered_i,          // MSHR已经order完毕
    //connect with ROB (经过core)
    input  logic [robAddrSz-1:0]                                core_rob_head_idx_i,     // rob表头
    input  logic [robAddrSz-1:0]                                core_rob_pnr_idx_i,      // rob pnr指针
    input  logic [commit_width-1:0]                             commit_load_at_rob_head_i,//rob当前commit表头为load指令  
    input  logic [commit_width-1:0]                             core_commit_valids_i,    // 当前commit有效位
    input  lsu_funct_t[commit_width-1:0]                        core_commit_uops_i,      // 当前commit的uop //规定一周期可以commit多条load store 
    output logic                                                core_clr_bsy_valid_o,    // 清除rob对应busy位信号的有效位
    output logic [robAddrSz-1:0]                                core_clr_bsy_rob_idx_o,  // 需要清除对应busy位的rob表项
    output logic                                                core_clr_rob_unsafe_valid_o,//清除rob对应unsafe位信号的有效位     
    output logic [robAddrSz-1:0]                                core_clr_rob_unsafe_idx_o,  //需要清除对应unsafe位的rob表项     
    output xcpt_t                                               core_lxcpt_o,               //推测式load发生错误,将错误信号lxcpt发往core
    output logic                                                core_lxcpt_valid_o,         //上述错误信号的有效位
    //connect with Branch Unit
    input  brupdate_t                                           core_brupdate_i,          //branch更新信号

    //connect with Issue Unit
    output logic                                                core_spec_ld_wakeup_valid_o,
    output prf_id_t                                             core_spec_ld_wakeup_o,//更新issue queue中跟当前load有依赖关系的其他指令的状态（唤醒）
    output logic                                                core_load_miss_o  // 告知issue queue 当前推测式推测式load是否是推测失效了，如果失效了就不能更新上述指令的状态
);