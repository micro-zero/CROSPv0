//****************************************************************************
// File:        LSU_v3.sv
// Author:      Hao Mingyang<2301213200@pku.edu.cn>
// Date:        2025.03.10
// Version:     v0.3
// Project:     CROSP
// Module:      LSU
// Description: Load Store Unit single scalar
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
    input  dc_req_t                                             dmem_nack_i,             // Dcache发进来的对当前load指令的nack信号
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
    input  lsu_funct_t[commit_width-1:0]                        core_commit_uops_i,      // 当前commit的uop //规定一周期可以commit多条load 但是只能commit一条store
    output logic                                                core_clr_bsy_valid_o,    // 清除rob对应busy位信号的有效位
    output logic [robAddrSz:0]                                  core_clr_bsy_rob_idx_o,  // 需要清除对应busy位的rob表项
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
  /* verilator lint_off WIDTHEXPAND */
  /* verilator lint_off WIDTHTRUNC */
    LDQ_LINE ldq [numLDQEntries-1 : 0];  // LOAD ADDRESS QUEUE
    STQ_LINE stq [numSTQEntries-1 : 0];  // STORE ADDRESS & DATA QUEUE

    typedef logic [LDQAddrSz-1:0]                ld_idx_t;
    typedef logic [STQAddrSz-1:0]                st_idx_t;  
    typedef logic [numSTQEntries-1:0]            stq_entry_num_t; 

    ld_idx_t                                     ldq_head_reg;      
    ld_idx_t                                     ldq_tail_reg;
        
    ld_idx_t[dispatch_width-1:0]                          ld_enq_idx_wire;  
    st_idx_t                         stq_head_reg;      // 当前stq头部（clearstore时加一，比如在commit后进行访存，访存成功）
    st_idx_t                         stq_tail_reg;      
    st_idx_t[dispatch_width-1:0]              st_enq_idx_wire;   
    st_idx_t                         stq_commit_head_reg;   // 下一个要提交commit的stq表项
    st_idx_t                         stq_execute_head_reg;  // 下一个要执行execute的stq表项
    logic                                        clear_store_wire;      // 是否要clearstore，即已经有store完成访存了该出队列了
    logic [numSTQEntries-1:0]                    live_store_mask_reg;   // 现在stq中alive的stores
    stq_entry_num_t                              next_live_store_mask_wire;//之后stq中alive的stores
    logic[dispatch_width-1:0]                             ldq_almost_full_wire;      
    logic[dispatch_width-1:0]                             stq_almost_full_wire;      
    logic                                        stq_nonempty_wire;  //判断stq当前不空
    logic[dispatch_width-1:0]                             ld_valid_wire;      
    logic[dispatch_width-1:0]                             st_valid_wire;      
    logic                                        lsu_fencei_rdy_wire;//是否可以执行fencei 
    logic[LDQAddrSz-1:0]                         ldq_tail_plus1_wire ;
    logic[STQAddrSz-1:0]                         stq_tail_plus1_wire ;
    logic[numSTQEntries-1:0]                     next_live_store_mask_init_wire; 
    logic                                        mem_xcpt_valid_wire; //  mem阶段快速判断异常/当前不需要 有ma pf ae：
    mxcpt_t                                      mem_xcpt_cause_wire; //   1、ma（misalignment access）：从地址计算单元发现的地址非对齐异常；
    lsu_funct_t                                  mem_xcpt_uop_wire;   //   2、pf（page fault）：来自TLB的页面错误异常，违反了页的读写属性、或访问地址违法；                                    
    addr_t                                       mem_xcpt_addr_wire;  //   3、ae（access exception）：TLB访问违反了RISCV的PMA（Physical Memory Attributes）参数
  //---------------------------------------
  //mem阶段根据仲裁结果判断当前可以进行什么操作
  //由上到下优先级逐渐降低 
    logic                     will_fire_load_incoming_wire;//当前load指令将要开始执行                      ↑ 最高优先级
    logic                     will_fire_stad_incoming_wire;//当前包括addr和data的store指令将要开始执行     
    logic                     will_fire_sta_incoming_wire; //当前计算好地址的sta指令将要开始执行          
    logic                     will_fire_std_incoming_wire; //当前计算好数据的std指令将要开始执行           
    logic                     will_fire_sfence_wire;       //sfence
    logic                     will_fire_release_wire;      //dcache发进来的release状态
    logic                     will_fire_load_retry_wire;   //load tlb miss 进行retry
    logic                     will_fire_sta_retry_wire;    //sta addr tlb miss 进行 retry
    logic                     will_fire_load_wakeup_wire;  //load指令先前没有执行完成，现在wakeup 
    logic                     will_fire_store_commit_wire; //store指令开始提交                             ↓ 最低优先级
  // ----------------------- 
  // 判断当前LSU内是否满足了执行某种指令的条件
  // Can we fire a incoming load
    logic                 can_fire_load_incoming_wire;
  // Can we fire an incoming store addrgen + store datagen  
    logic                 can_fire_stad_incoming_wire;
  // Can we fire an incoming store addrgen
    logic                 can_fire_sta_incoming_wire;
  // Can we fire an incoming store datagen
    logic                 can_fire_std_incoming_wire;
  // Can we fire an incoming sfence
    logic                 can_fire_sfence; 
  // Can we fire a request from dcache to release a line
  // This needs to go through LDQ search to mark loads as dangerous 
    logic                 can_fire_release_wire;
  // Can we retry a load that missed in the TLB
    logic                 can_fire_load_retry_wire; 
  // Can we retry a store addrgen that missed in the TLB
  // - Weird edge case when sta_retry and std_incoming for same entry in same cycle. Delay this
    logic                 can_fire_sta_retry_wire ;
  // Can we wakeup a load that was nack'd  
    logic                 block_load_wakeup_wire;   
    logic                 can_fire_load_wakeup_wire;
  // Can we commit a store    
    logic                 can_fire_store_commit_wire;

    func_unit_resp_t      exe_req_wire;//执行阶段发往LSU的请求，包含已经读寄存器完成取出的地址

    logic[numLDQEntries-1:0]                    block_load_mask_wire;          //先不要wakeup两个周期以内刚刚wakeup的load
    logic[numLDQEntries-1:0]                    p1_block_load_mask_reg;        //用来记录两周期以内wakeup的load
    logic[numLDQEntries-1:0]                    p2_block_load_mask_reg;        //block_load_mask可能是错的，但是executing_load mask是正确的
    logic                                       store_needs_order_reg ;        // The store at the commit head needs the DCache to appear ordered
    logic[LDQAddrSz-1:0]                        ldq_incoming_idx_wire;         // 当前exe阶段进入LSU的请求对应的ldq / stq的位置和信息
    LDQ_LINE                                    ldq_incoming_entryline_wire;
    logic[STQAddrSz-1:0]                        stq_incoming_idx_wire;
    STQ_LINE                                    stq_incoming_entryline_wire;
    STQ_LINE                                    stq_commit_entryline_wire;
    logic[LDQAddrSz-1:0]                        ldq_wakeup_idx_r0_reg;         //生成 ldq_wakeup_idx_r0_reg 同时利用年龄编码进行wakeup的优先判断
    LDQ_LINE                                    ldq_wakeup_entryline_wire;
    //age priority encoder logic
    logic[numLDQEntries-1:0]                    bool_array_ldq_wakeup_wire;
    logic[numLDQEntries-1:0]                    block_ldq_wakeup_wire;
    localparam n_padded = 1<<LDQAddrSz;
    logic[n_padded + numLDQEntries-1 : 0]       temp_vec;
    logic[LDQAddrSz : 0]                        prior_encoder_ldq_wakeup_wire; //wakeup年龄编码 
    lsu_funct_t                                 exe_stage_uop_wire;            //exe阶段进行处理操作的uop
    addr_t                                      exe_vaddr_wire;                //exe阶段进行TLB转换前的虚拟地址
    addr_t                                      exe_paddr_r0_wire;             //-----------------后的物理地址
    dc_req_t                                    dmem_req_wire;                 //发往Dcache的请求
    logic                                       dmem_req_valid_wire ;          
    logic                                       dmem_req_fire_wire;            //标记已经发请求向Dcache中
    logic[numLDQEntries-1:0]                    s0_executing_loads_wire;       //stage 0 阶段正在执行的load指令对应的编码，可能是刚进来的的也可能是刚wakeup的
    logic[numLDQEntries-1:0]                    s1_kill_from_ldq_logic_wire;   //stage 1 阶段load指令查load  queue发现有ld-ld违例，发往Dcache的kill信号 
    logic[numSTQEntries-1:0]                    s1_kill_from_stq_logic_wire;   //stage 1 阶段load指令查store queue发现有ld-st违例，发往Dcache的kill信号 

    logic                                       exe_req_killed_wire; //判断当前exe阶段执行信号是否要kill掉（branch预测错误）
    // stage 1阶段的当前执行操作（前面的will_fire_*保存一个周期）
    logic                                       fired_load_incoming_reg;
    logic                                       fired_stad_incoming_reg;
    logic                                       fired_sta_incoming_reg;
    logic                                       fired_std_incoming_reg;
    logic                                       fired_store_commit_reg;
    logic                                       fired_load_wakeup_reg;
    logic                                       fired_release_reg;

    lsu_funct_t                                 mem_incoming_uop_r0_wire;//stage 0 阶段的访存操作uop    
    lsu_funct_t                                 mem_incoming_uop_r1_reg; //stage 1 阶段的访存操作uop   
    lsu_funct_t                                 mem_incoming_uop_r2_reg; //stage 2 阶段的访存操作uop   
    LDQ_LINE                                    mem_ldq_incoming_entryline_r0_wire;
    LDQ_LINE                                    mem_ldq_incoming_entryline_r1_reg;
    STQ_LINE                                    mem_stq_incoming_entryline_r0_wire; 
    STQ_LINE                                    mem_stq_incoming_entryline_r1_reg;
    LDQ_LINE                                    mem_ldq_wakeup_entryline_r0_wire; 
    LDQ_LINE                                    mem_ldq_wakeup_entryline_r1_reg;
    LDQ_LINE                                    mem_ldq_entryline_wire;
    STQ_LINE                                    mem_stq_entryline_wire;
    addr_t                                      mem_paddr_r0_wire ;
    addr_t                                      mem_paddr_r1_reg;
    logic                                       clr_bsy_valid_reg;//reg
    logic[robAddrSz:0]                          clr_bsy_rob_idx_reg;//reg
    logic[MAX_BR_COUNT:0]                       clr_bsy_brmask_reg;//reg
    logic                                       core_exception_i_r1_reg; //用来将core_exception_i寄存一拍
    logic                                       core_exception_i_r2_reg; //-------------------------两拍
  // We translated a store last cycle
    logic                                       do_st_search_wire ;
  // We translated a load last cycle  
    logic                                       do_ld_search_wire;
  // We are making a local line visible to other harts
    logic                                       do_release_search_wire;
    logic                                       core_clr_bsy_valid_wire;
    logic                                       core_clr_bsy_rob_idx_wire;
  // Store addrs don't go to memory yet, get it from the upper response
  // Load wakeups don't go through TLB, get it through memory
  // Load incoming and load retries go through both

    addr_t                            exe_paddr_r1_reg;
    addr_t                            lcam_addr_wire;
    addr_t                            dmem_release_address_r1_reg;
    lsu_funct_t                       lcam_uop_wire; 
    logic[8-1 : 0]                    lcam_mask_wire;// 8 bit mask
    logic[numSTQEntries-1 : 0]        lcam_st_dep_mask_wire;
    logic[LDQAddrSz-1 : 0]            lcam_ldq_idx_wire;
    logic[STQAddrSz-1 : 0]            lcam_stq_idx_wire;

    logic[LDQAddrSz-1 : 0]            ldq_wakeup_idx_r1_reg;

    logic                             can_forward_wire;                   
    logic                             lcam_is_release_wire;
    // Mask of stores which we conflict on address with

    logic[numSTQEntries-1:0]                       ldst_addr_matches_r0_wire;
    logic[numSTQEntries-1:0]                       ldst_forward_matches_wire;
    logic[numLDQEntries-1:0]                       failed_loads_wire;
    logic[numLDQEntries-1:0]                       nacking_loads_r0_wire;

    logic[numLDQEntries-1:0]                       s1_executing_loads_reg ;

    logic[numLDQEntries-1:0]                       s1_set_execute_wire;// 

    logic                                          mem_forward_valid_wire;
    logic[LDQAddrSz-1:0]                           mem_forward_ldq_idx_wire;

    addr_t                                         mem_forward_ld_addr_wire;

    logic[STQAddrSz-1:0]                           mem_forward_stq_idx_wire;   

    logic                                          wb_forward_valid_reg;//mem 到 wb要寄存一拍
    logic[LDQAddrSz-1:0]                           wb_forward_ldq_idx_reg;
    addr_t                                         wb_forward_ld_addr_reg;
    logic[STQAddrSz-1:0]                           wb_forward_stq_idx_reg;
    logic[numLDQEntries-1:0]                       nacking_loads_r1_reg;
    logic                                          dmem_req_fire_next_reg;


    logic[numLDQEntries-1:0]        ldq_observed_judge_wire;
    logic                           s1_set_execute_from_ldq_wire;
    logic                           s1_set_execute_from_stq_wire;

    //实现ForwardingAgeLogic,用于确定在STQ中哪个地址进行匹配，并基于STQ的age进行数据前递
    typedef struct packed {
        logic[numSTQEntries-1:0]             addr_matches;
        logic[STQAddrSz-1:0]                 youngest_st_idx;
        logic                                forwarding_val;
        logic[STQAddrSz-1:0]                 forwarding_idx;
    } ForwardingAgeLogic_t;
    ForwardingAgeLogic_t                     forwarding_age_logic_wire;

    logic[numSTQEntries-1:0]                 age_mask_wire;
    //将地址匹配与年龄掩码进行按位与，然后与原始地址匹配向量连接形成双倍长度的匹配向量
    logic[2*numSTQEntries-1 : 0]    the_matches_wire;
    logic                           found_match_wire;
    // Avoid deadlock with a 1-w LSU prioritizing load wakeups > store commits
    // On a 2W machine, load wakeups and store commits occupy separate pipelines,
    // so only add this logic for 1-w LSU

    logic[numSTQEntries-1:0]                       ldst_addr_matches_r1_reg;
  // If stores remain blocked for 15 cycles, block load wakeups to get a store through
    logic[3:0]                                      store_blocked_counter_reg;
    logic[robAddrSz-1:0]                            clr_unsafe_idx_r0_wire;
    logic[robAddrSz-1:0]                            clr_unsafe_idx_r1_reg;//寄存一拍
    logic                                           clr_unsafe_valid_r0_wire;
    logic                                           clr_unsafe_valid_r1_reg;//同理寄存一拍
    logic [LDQAddrSz-1:0]                           l_idx_wire; // 优先级编码结果
  // one exception port, but multiple causes!
  // - 1) the incoming store-address finds a faulting load (it is by definition younger)
  // - 2) the incoming load or store address is excepting. It must be older and thus takes precedent.
    xcpt_t          r_xcpt_reg;
    logic           ld_xcpt_valid_wire;
    lsu_funct_t      ld_xcpt_uop_wire;
    logic           use_mem_xcpt_wire;
    lsu_funct_t      xcpt_uop_wire;
    // detect which loads get marked as failures, but broadcast to the ROB the oldest failing load
    logic[2*numLDQEntries-1 : 0]     priority_failed_loads_bits_wire;
    logic[numLDQEntries-1 : 0] failed_loads_masked_wire;
  // Handle Memory Responses and nacks
  //----------------------------------

    logic                                     dmem_resp_fired;
    logic[LDQAddrSz-1:0]                      ldq_idx_dmem_resp_wire;
    logic[numSTQEntries-1:0]                  st_brkilled_mask;
    logic[commit_width-1:0][STQAddrSz-1 : 0]  temp_stq_commit_head_wire;
    logic[commit_width-1:0][LDQAddrSz-1 : 0]  temp_ldq_head_wire;
    logic[commit_width-1:0]                   commit_store_wire;
    logic[commit_width-1:0]                   commit_load_wire;
    logic[commit_width-1:0][LSUAddrSz-1 : 0]  commit_idx_wire;
    logic[numSTQEntries-1:0]                  st_exception_killed_mask;
    logic                                     spec_ld_succeed_wire;

    
    generate
      for(genvar w = 0; w < dispatch_width; w++)begin
        always_comb begin
          //每个w都初始化为ldq_tail_reg
          //循环查0到w-1 看是否有dispatch，是就加一
          //更新所有的内容
          ld_enq_idx_wire[w] = ldq_tail_reg;//每个w对应的队尾都初始化为ldq_tail_reg
          st_enq_idx_wire[w] = stq_tail_reg;
          ldq_almost_full_wire[w] = 0;
          stq_almost_full_wire[w] = 0;
          for(int i = 0;i < w;i++)begin
            ldq_almost_full_wire[w] = ldq_almost_full_wire[w] | ((ldq_tail_reg + i+1)%numLDQEntries == ldq_head_reg );
          end
          for(int i = 0;i < w;i++)begin
            stq_almost_full_wire[w] = stq_almost_full_wire[w] | ((stq_tail_reg + i+1)%numSTQEntries == stq_head_reg );
          end
          for(int i = 0;i< w ;i++)begin//循环查0到w-1 看是否有dispatch，是就加一,同时判断是否满了
            if(ld_valid_wire[i])begin
              ld_enq_idx_wire[w] = (ld_enq_idx_wire[w] +1) % numLDQEntries;
            end
            if(st_valid_wire[i])begin
              st_enq_idx_wire[w] = (st_enq_idx_wire[w] +1) % numSTQEntries;
            end
          end
          //新的store进来了，更新live_store_mask
          // next_live_store_mask_wire[w] = next_live_store_mask_init_wire;
          // if(st_valid_wire[w])begin
          //   for(int i = 0;i<w;i++)begin
          //     next_live_store_mask_wire[w] = next_live_store_mask_wire[w] | ($unsigned(1) << (stq_tail_reg));
          //   end
          // end
        end
      end
    endgenerate
  assign next_live_store_mask_init_wire = clear_store_wire ? live_store_mask_reg &  ~( 1 << stq_head_reg) : live_store_mask_reg;
  always_comb begin
    next_live_store_mask_wire = next_live_store_mask_init_wire;
    for(int i = 0;i<dispatch_width;i++)begin
      if(st_valid_wire[i])begin
        next_live_store_mask_wire = next_live_store_mask_wire | 1<<stq_tail_reg;
      end
    end
  end

    always_comb begin : stq_nonempty_logic
        logic stq_valid_or_wire;
        stq_valid_or_wire = stq[0].entry_valid;
        for(int i = 0; i < numSTQEntries; i++)begin
            stq_valid_or_wire = stq_valid_or_wire | stq[i].entry_valid;
        end
        stq_nonempty_wire = (stq_valid_or_wire != 0);
    end



    // assign ldq_tail_plus1_wire = ldq_tail_reg +1;
    // assign stq_tail_plus1_wire = stq_tail_reg +1;
    // assign ldq_full_wire = ldq_tail_plus1_wire == ldq_head_reg;
    // assign stq_full_wire = stq_tail_plus1_wire == stq_head_reg;
    for(genvar w =0;w<dispatch_width;++w)begin
      assign ld_valid_wire[w] = dis_ld_valids_i[w] & dis_uops_i[w].load & ~dis_uops_i[w].exception;
      assign st_valid_wire[w] = dis_st_valids_i[w] & dis_uops_i[w].store & ~dis_uops_i[w].exception;
    end
    assign lsu_fencei_rdy_wire = ~stq_nonempty_wire & dmem_ordered_i;

    // assign next_live_store_mask_judge1_wire = clear_store_wire ? live_store_mask_reg &  ~( 1 << stq_head_reg) : live_store_mask_reg;
    // assign next_live_store_mask_wire = st_valid_wire ? next_live_store_mask_judge1_wire | (1 << stq_tail_reg) : next_live_store_mask_judge1_wire ;

  //-------------------------------------------------------------
  //-------------------------------------------------------------
  // Execute stage (no access TLB, send requests to Memory)
  //-------------------------------------------------------------
  //-------------------------------------------------------------

  // We can only report 1 exception per cycle.
  // Just be sure to report the youngest one
    assign exe_req_wire = exe_req_i;
    assign ldq_incoming_idx_wire = exe_req_wire.uop.ldq_idx;
    assign ldq_incoming_entryline_wire = ldq[ldq_incoming_idx_wire];
    assign stq_incoming_idx_wire = exe_req_wire.uop.stq_idx;
    assign stq_incoming_entryline_wire = stq[stq_incoming_idx_wire];
    assign stq_commit_entryline_wire = stq[stq_execute_head_reg];
    for(genvar i = 0; i < numLDQEntries; i++)begin : ldq_wakeup_logic
        assign block_ldq_wakeup_wire[i] = block_load_mask_wire[i] || p1_block_load_mask_reg[i];
        assign bool_array_ldq_wakeup_wire[i] = ldq[i].entry.addr_valid && !ldq[i].entry.executed && !ldq[i].entry.succeeded && !ldq[i].entry.addr_is_virtual && !block_ldq_wakeup_wire[i];
    end
    always_comb begin
      for(int i = 0; i < n_padded; i++)begin
        temp_vec[i] = bool_array_ldq_wakeup_wire[i] && (i >=ldq_head_reg);
      end
    end    
    assign temp_vec[n_padded +: numLDQEntries] = bool_array_ldq_wakeup_wire;
    always_comb begin//priority encoder logic
        prior_encoder_ldq_wakeup_wire = '0;
        for(int i = 0; i < n_padded + numLDQEntries; i++)begin
            if(temp_vec[i])begin
                prior_encoder_ldq_wakeup_wire = i[LDQAddrSz : 0];
                break;
            end
        end
    end

    assign  ldq_wakeup_entryline_wire = ldq[ldq_wakeup_idx_r0_reg];
    assign  can_fire_load_incoming_wire = exe_req_wire.valid & exe_req_wire.uop.load;
    assign  can_fire_stad_incoming_wire = exe_req_wire.valid & exe_req_wire.uop.is_sta 
                                                             & exe_req_wire.uop.is_std;
    assign  can_fire_sta_incoming_wire  = exe_req_wire.valid & exe_req_wire.uop.is_sta 
                                                             & ~exe_req_wire.uop.is_std;        
    assign  can_fire_std_incoming_wire  = exe_req_wire.valid & exe_req_wire.uop.is_std 
                                                             & ~exe_req_wire.uop.is_sta;        
    assign  can_fire_release_wire       = dmem_release_valid_i;
                                                                             
    // no retry no sfence
    assign  can_fire_store_commit_wire  = stq_commit_entryline_wire.entry_valid              &
                                          ~stq_commit_entryline_wire.entry.uop.is_fence      &
                                          ~mem_xcpt_valid_wire                               &
                                          ~stq_commit_entryline_wire.entry.uop.exception     &
                                          (stq_commit_entryline_wire.entry.committed || (stq_commit_entryline_wire.entry.uop.is_amo          &
                                                                                    stq_commit_entryline_wire.entry.addr_valid          &
                                                                                  ~stq_commit_entryline_wire.entry.addr_is_virtual     &
                                                                                    stq_commit_entryline_wire.entry.data_valid));

    assign  can_fire_load_wakeup_wire   = ldq_wakeup_entryline_wire.entry_valid              &
                                          ldq_wakeup_entryline_wire.entry.addr_valid         &
                                          ~ldq_wakeup_entryline_wire.entry.succeeded          &
                                          ~ldq_wakeup_entryline_wire.entry.addr_is_virtual    &
                                          ~ldq_wakeup_entryline_wire.entry.executed           &
                                          ~ldq_wakeup_entryline_wire.entry.order_fail         &
                                          ~p1_block_load_mask_reg[ldq_wakeup_idx_r0_reg]            &
                                          ~p2_block_load_mask_reg[ldq_wakeup_idx_r0_reg]            &
                                          ~store_needs_order_reg                             &
                                          ~block_load_wakeup_wire                             &
                                          (~ldq_wakeup_entryline_wire.entry.addr_is_uncacheable | (|commit_load_at_rob_head_i     & 
                                                                                              ldq_head_reg == ldq_wakeup_idx_r0_reg  &
                                                                                              ldq_wakeup_entryline_wire.entry.st_dep_mask == 0))  ;                                      

  //---------------------------------------------------------
  // Controller logic. Arbitrate which request actually fires
    // The order of these statements is the priority
    // Some restrictions
    //  - Incoming ops must get precedence, can't backpresure memaddrgen
    //  - Incoming hellacache ops must get precedence over retrying ops (PTW must get precedence over retrying translation)
    // Notes on performance
    //  - Prioritize releases, this speeds up cache line writebacks and refills
    //  - Store commits are lowest priority, since they don't "block" younger instructions unless stq fills up
    assign will_fire_load_incoming_wire  = can_fire_load_incoming_wire ;
    assign will_fire_stad_incoming_wire  = can_fire_stad_incoming_wire & ~will_fire_load_incoming_wire ;
    assign will_fire_sta_incoming_wire   = can_fire_sta_incoming_wire  & ~will_fire_load_incoming_wire & ~will_fire_stad_incoming_wire;
    assign will_fire_std_incoming_wire   = can_fire_std_incoming_wire  & ~will_fire_stad_incoming_wire & ~will_fire_sta_incoming_wire;
    assign will_fire_release_wire        = can_fire_release_wire       & ~will_fire_load_incoming_wire & ~will_fire_stad_incoming_wire & ~will_fire_sta_incoming_wire;
    assign will_fire_load_wakeup_wire    = can_fire_load_wakeup_wire   & ~will_fire_load_incoming_wire & ~will_fire_stad_incoming_wire & ~will_fire_sta_incoming_wire & ~will_fire_release_wire;
    assign will_fire_store_commit_wire   = can_fire_store_commit_wire  & ~will_fire_load_incoming_wire  & ~will_fire_load_wakeup_wire;
                                                        
    assign  block_load_mask_wire[ldq_wakeup_idx_r0_reg]      = will_fire_load_wakeup_wire ? 1 : 0;
    
    assign  block_load_mask_wire[exe_req_wire.uop.ldq_idx] = will_fire_load_incoming_wire ? 1 : 0;         


    assign  exe_stage_uop_wire =   (will_fire_load_incoming_wire  ||//no store fence
                               will_fire_stad_incoming_wire   ||
                               will_fire_sta_incoming_wire  ) ?   exe_req_wire.uop : 0;
    assign  exe_vaddr_wire     =   (will_fire_load_incoming_wire   ||
                               will_fire_stad_incoming_wire   ||
                               will_fire_sta_incoming_wire  ) ?   exe_req_wire.addr + exe_req_wire.offset : 0;


    assign exe_paddr_r0_wire = exe_vaddr_wire;//tlb

  // NBDTLB tlb(
  //   .clk(clk),
  //   .rst(rst),
  //   .exe_vaddr_wire_i(exe_vaddr_wire),
  //   .exe_paddr_r0_wire_o(exe_paddr_r0_wire)
  // );

  // exceptions
  // 先不考虑 exception 
//   logic ma_ld;
//   logic ma_st;
//   assign ma_ld = will_fire_load_incoming_wire && exe_req.mxcpt_valid;   // We get ma_ld in memaddrcalc
//   assign ma_st = (will_fire_sta_incoming_wire || will_fire_stad_incoming_wire) && exe_req.mxcpt_valid; // We get ma_ld in memaddrcalc
//   先删了mem_exception


  // Execute end

  //------------------------------
  // Issue Someting to Memory
  //
  // A memory op can come from many different places
  // The address either was freshly translated, or we are
  // reading a physical address from the LDQ,STQ, or the HellaCache adapter

    assign  dmem_req_valid_wire = dmem_req_wire.dreq_valid;
    assign  dmem_req_fire_wire  = dmem_req_wire.dreq_valid && dmem_req_ready_i;
    always_comb begin
        dmem_req_wire = 0;
        s0_executing_loads_wire = 0;
        if(will_fire_load_incoming_wire)begin
            dmem_req_wire.dreq_valid     =    1;
            dmem_req_wire.addr           =  exe_paddr_r0_wire;
            dmem_req_wire.uop            =  exe_stage_uop_wire;
            s0_executing_loads_wire[ldq_incoming_idx_wire] = dmem_req_fire_wire;
        end
        else if(will_fire_store_commit_wire)begin
            dmem_req_wire.dreq_valid     =  1;
            dmem_req_wire.addr           =  stq_commit_entryline_wire.entry.addr;
            dmem_req_wire.data           =  stq_commit_entryline_wire.entry.data;
            dmem_req_wire.uop            =  stq_commit_entryline_wire.entry.uop;
            
        end
        else if(will_fire_load_wakeup_wire)begin
            dmem_req_wire.dreq_valid     =  1;
            dmem_req_wire.addr           =  ldq_wakeup_entryline_wire.entry.addr;
            dmem_req_wire.uop            =  ldq_wakeup_entryline_wire.entry.uop;
            s0_executing_loads_wire[ldq_wakeup_idx_r0_reg]  = dmem_req_fire_wire;
        end
    end

    assign         exe_req_killed_wire =  ((core_brupdate_i.mispredict_mask & exe_req_wire.uop.br_mask)!=0);//IsKilledByBranch

    always_comb begin
      mem_incoming_uop_r0_wire =   exe_req_wire.uop;
      mem_incoming_uop_r0_wire.br_mask = mem_incoming_uop_r0_wire.br_mask & ~core_brupdate_i.resolve_mask;//GetNewBrMask
      mem_ldq_incoming_entryline_r0_wire   =   ldq_incoming_entryline_wire;
      mem_ldq_incoming_entryline_r0_wire.entry.uop.br_mask    =   mem_ldq_incoming_entryline_r0_wire.entry.uop.br_mask & ~core_brupdate_i.resolve_mask;//GetNewBrMask
      mem_stq_incoming_entryline_r0_wire   =   stq_incoming_entryline_wire;
      mem_stq_incoming_entryline_r0_wire.entry.uop.br_mask    =   mem_stq_incoming_entryline_r0_wire.entry.uop.br_mask & ~core_brupdate_i.resolve_mask;//GetNewBrMask
      mem_ldq_wakeup_entryline_r0_wire   =   ldq_wakeup_entryline_wire;
      mem_ldq_wakeup_entryline_r0_wire.entry.uop.br_mask   =   mem_ldq_wakeup_entryline_r0_wire.entry.uop.br_mask & ~core_brupdate_i.resolve_mask; //GetNewBrMask  
    end


    assign     mem_ldq_entryline_wire  =  fired_load_incoming_reg ? mem_ldq_incoming_entryline_r1_reg
                                    :fired_load_wakeup_reg ? mem_ldq_wakeup_entryline_r1_reg
                                    : 0;
    assign     mem_stq_entryline_wire  =  fired_stad_incoming_reg || fired_sta_incoming_reg ? mem_stq_incoming_entryline_r1_reg
                                    : 0;
    assign      mem_paddr_r0_wire = dmem_req_wire.addr;

    assign  core_clr_bsy_valid_wire     =  clr_bsy_valid_reg  &
                                    ~((core_brupdate_i.mispredict_mask & clr_bsy_brmask_reg)!=0)  && //IsKilledByBranch
                                    ~ core_exception_i & ~core_exception_i_r1_reg & ~core_exception_i_r2_reg;
    
    assign  core_clr_bsy_rob_idx_wire   =  clr_bsy_rob_idx_reg;


  // Task 2: Do LD-LD. ST-LD searches for ordering failures
  //         Do LD-ST search for forwarding opportunities
  // We have the opportunity to kill a request we sent last cycle. Use it wisely!    
  

    assign do_st_search_wire = fired_stad_incoming_reg | fired_sta_incoming_reg;

    assign do_ld_search_wire = fired_load_incoming_reg | fired_load_wakeup_reg;

    assign do_release_search_wire = fired_release_reg;

    // Function to generate byte mask
    function automatic logic [7:0] genByteMask(addr_t addr, logic [1:0] size);
        begin
        case (size)
            2'b00: genByteMask = 8'b0000_0001 << addr[2:0];                     // size == 0: 1 左移 addr 的低 3 位
            2'b01: genByteMask = 8'b0000_0011 << (addr[2:1] << 1);              // size == 1: 3 左移 addr 的低 2 位左移 1 位
            2'b10: genByteMask = addr[2] ? 8'b1111_0000 : 8'b0000_1111;         // size == 2: 根据 addr 的第 3 位选择 0xF0 或 0x0F
            2'b11: genByteMask = 8'b1111_1111;                                  // size == 3: 掩码是 0xFF
            default: genByteMask = 8'b1111_1111;                                // 默认情况下掩码是 0xFF
        endcase
        end
    endfunction
    assign lcam_addr_wire = fired_stad_incoming_reg | fired_sta_incoming_reg ? exe_paddr_r1_reg :
                       fired_release_reg ? dmem_release_address_r1_reg :
                       mem_paddr_r1_reg;
    assign lcam_uop_wire  = do_st_search_wire ? mem_stq_entryline_wire.entry.uop :
                       do_ld_search_wire ? mem_ldq_entryline_wire.entry.uop :
                       0;
    assign lcam_mask_wire = genByteMask(lcam_addr_wire, lcam_uop_wire.mem_size);

    assign lcam_st_dep_mask_wire = mem_ldq_entryline_wire.entry.st_dep_mask;
    assign lcam_is_release_wire = fired_release_reg;
    assign lcam_ldq_idx_wire    = fired_load_incoming_reg ? mem_incoming_uop_r1_reg.ldq_idx :
                             fired_load_wakeup_reg   ? ldq_wakeup_idx_r1_reg : 
                             0;
    assign lcam_stq_idx_wire    = fired_stad_incoming_reg || fired_sta_incoming_reg ? mem_incoming_uop_r1_reg.stq_idx :
                             0;

    assign mem_forward_ldq_idx_wire  =  lcam_ldq_idx_wire;
    assign mem_forward_ld_addr_wire  =  lcam_addr_wire;
     
    always_comb begin : LDST_searcher_LDQ_logic
      for(int i = 0; i < numLDQEntries; i++)begin
        logic                        l_valid;
        LDQEntry                     l_entryline;
        addr_t                       l_addr ;
        logic[7:0]                   l_mask;
        logic                        l_is_forwarding;
        logic[STQAddrSz-1:0]         l_forward_stq_idx;
        logic                        block_addr_matches;
        logic                        dword_addr_matches;
        logic                        mask_match;
        logic                        mask_overlap;
        logic                        forwarded_is_older;
        logic                        searcher_is_older;
        logic                        older_nacked;
        s1_set_execute_from_ldq_wire     =        0;
        failed_loads_wire[i]                  =        0;
        nacking_loads_r0_wire[i]                 =        0;
        ldq_observed_judge_wire[i]            =        0;
        s1_kill_from_ldq_logic_wire[i]   =        0;
        forwarded_is_older               =        0;
        searcher_is_older                =        0;
        older_nacked                     =        0;
        l_valid                          =  ldq[i].entry_valid;
        l_entryline                      =  ldq[i].entry;
        l_addr                           =  ldq[i].entry.addr; 
        l_mask                           =  genByteMask(l_addr, l_entryline.uop.mem_size);
        l_is_forwarding                  =   wb_forward_valid_reg & (wb_forward_ldq_idx_reg == i);
        l_forward_stq_idx                =   l_is_forwarding ? wb_forward_stq_idx_reg : l_entryline.forward_stq_idx;
        block_addr_matches               =  (lcam_addr_wire >> blockOffBits == l_addr >> blockOffBits);
        dword_addr_matches               =  (block_addr_matches & (lcam_addr_wire[blockOffBits-1 : 3] == l_addr[blockOffBits-1 : 3]));
        mask_match                       =  (l_mask & lcam_mask_wire == l_mask);
        mask_overlap                     =  |(l_mask & lcam_mask_wire);
        can_forward_wire                 = fired_load_incoming_reg ? 1: !ldq[lcam_ldq_idx_wire].entry.addr_is_uncacheable;
        // Searcher is a store
        if(do_release_search_wire                                                             &
            l_valid                                                                      &
            l_entryline.addr_valid                                                       &
            block_addr_matches                                                           
        )begin : release_search
          // ldq[i].entry.observed = 1;
          ldq_observed_judge_wire[i]   = 1;
        end
        else if( do_st_search_wire                                                                  &
                l_valid                                                                          &
                l_entryline.addr_valid                                                           &
                (l_entryline.executed || l_entryline.succeeded || l_is_forwarding)               &
            //!l_entryline.addr_is_virtual                                                   &
                l_entryline.st_dep_mask[lcam_stq_idx_wire]                                         &
                dword_addr_matches                                                            &
                mask_overlap
        )begin : st_search
          forwarded_is_older     =    (l_forward_stq_idx < lcam_stq_idx_wire) ^ (l_forward_stq_idx < l_entryline.youngest_stq_idx) ^ (lcam_stq_idx_wire < l_entryline.youngest_stq_idx);
          // We are older than this load, which overlapped us.
          if(~l_entryline.forward_std_val | // If the load wasn't forwarded, it definitely failed
            ((l_forward_stq_idx != lcam_stq_idx_wire) & forwarded_is_older)
          )begin
            failed_loads_wire[i]  =  1;
          end
        end
        else if(do_ld_search_wire                       &
                  l_valid                               &
                  l_entryline.addr_valid                &
                  // !l_entryline.addr_is_virtual       &
                  dword_addr_matches                 &
                  mask_overlap 
          )begin : ld_search
            searcher_is_older =  (lcam_ldq_idx_wire < i) ^ (lcam_ldq_idx_wire < ldq_head_reg) ^ ( i < ldq_head_reg) ;
            if(searcher_is_older)begin
              if((l_entryline.executed || l_entryline.succeeded || l_is_forwarding) &
                  ~s1_executing_loads_reg[i]  &    // If the load is proceeding in parallel we don't need to kill it
                  l_entryline.observed         // Its only a ordering failure if the cache line was observed between the younger load and us
              )begin
                  failed_loads_wire[i]  =  1;
              end
            end
            else if(lcam_ldq_idx_wire != i)begin
                // The load is older, and either it hasn't executed, it was nacked, or it is ignoring its response
                // we need to kill ourselves, and prevent forwarding
              older_nacked = nacking_loads_r0_wire[i] || nacking_loads_r1_reg[i];
              if(!(l_entryline.executed || l_entryline.succeeded) || older_nacked)begin
                  // s1_set_execute[lcam_ldq_idx_wire]          =        0;
                  s1_set_execute_from_ldq_wire          =        1;
                  
                  can_forward_wire                           =        0;
                  s1_kill_from_ldq_logic_wire[i]              =        dmem_req_fire_next_reg;
              end
            end
        end 
      end
    end
    always_comb begin : LDST_searcher_STQ_logic
      for(int i = 0 ; i < numSTQEntries; i++)begin
        addr_t       s_addr;
        lsu_funct_t   s_uop ;
        logic        dword_addr_matches;
        logic[7:0]   write_mask;
        ldst_forward_matches_wire[i]             =        0;
        ldst_addr_matches_r0_wire[i]             =        0;
        s1_kill_from_stq_logic_wire[i]           =        0;
        s1_set_execute_from_stq_wire             =        0;
        s_addr  =  stq[i].entry.addr;
        
        s_uop  =  stq[i].entry.uop;

        dword_addr_matches   =  (stq[i].entry.addr_valid           &
                                  //!stq[i].entry.addr_is_virtual    &&
                                (s_addr[ADDR_WIDTH-1 : 3] == lcam_addr_wire[ADDR_WIDTH-1 : 3]));
        write_mask = genByteMask(s_addr, s_uop.mem_size);
        if(do_ld_search_wire && stq[i].entry_valid && lcam_st_dep_mask_wire[i])begin
          if(((lcam_mask_wire & write_mask)== lcam_mask_wire) && 
              !s_uop.is_fence && 
              // !s_uop.is_amo && 
              dword_addr_matches && can_forward_wire)
              begin
                  ldst_addr_matches_r0_wire[i]              =        1;
                  ldst_forward_matches_wire[i]           =        1;
                  s1_kill_from_stq_logic_wire[i]             =        dmem_req_fire_next_reg;
                  // s1_set_execute[lcam_ldq_idx_wire]      =        0;
                  s1_set_execute_from_stq_wire      =        1;
          end
          else if(((lcam_mask_wire & write_mask) != 0) && dword_addr_matches)begin
              ldst_addr_matches_r0_wire[i]              =        1;
              s1_kill_from_stq_logic_wire[i]             =        dmem_req_fire_next_reg;
              // s1_set_execute[lcam_ldq_idx_wire]      =        0;
              s1_set_execute_from_stq_wire      =        1;
          end
          else if(s_uop.is_fence || s_uop.is_amo)begin
              ldst_addr_matches_r0_wire[i]              =        1;
              s1_kill_from_stq_logic_wire[i]             =        dmem_req_fire_next_reg;
              // s1_set_execute[lcam_ldq_idx_wire]      =        0;
              s1_set_execute_from_stq_wire      =        1;
          end
        end   
      end
    end
    always_comb begin
      s1_set_execute_wire = s1_executing_loads_reg;
      if(s1_set_execute_from_stq_wire || s1_set_execute_from_ldq_wire)begin
        s1_set_execute_wire[lcam_ldq_idx_wire]      =        0;
      end

    end
    // Find the youngest store which the load is dependent on

    always_comb begin
        age_mask_wire = 0;
        found_match_wire = 0;
        forwarding_age_logic_wire.forwarding_idx = 0;
        forwarding_age_logic_wire.addr_matches     =  ldst_addr_matches_r0_wire;
        forwarding_age_logic_wire.youngest_st_idx  =  lcam_uop_wire.stq_idx;
        the_matches_wire = {forwarding_age_logic_wire.addr_matches & age_mask_wire , forwarding_age_logic_wire.addr_matches};
        for(int i =0;i<numSTQEntries;i++)begin
          if(i >= forwarding_age_logic_wire.youngest_st_idx)begin
              age_mask_wire[i] = 1'b0;
          end
          else begin
              age_mask_wire[i] = 1'b1;
          end
        end
        for(int i = 0; i < 2*numSTQEntries ; i++)begin
            if(the_matches_wire[i])begin
                found_match_wire = 1;
                forwarding_age_logic_wire.forwarding_idx = i % numSTQEntries;
            end
        end
      //从最老的一端开始查找匹配，更新 found_match_wire 和 forwarding_idx
        forwarding_age_logic_wire.forwarding_val  =  found_match_wire;
    end

    // Forward if st-ld forwarding is possible from the writemask and loadmask

    assign mem_forward_valid_wire = ldst_forward_matches_wire[forwarding_age_logic_wire.forwarding_idx]              &
                               ~((core_brupdate_i.mispredict_mask & lcam_uop_wire.br_mask)!=0)             &
                               ~core_exception_i & ~core_exception_i_r1_reg ;
    assign mem_forward_stq_idx_wire  =  forwarding_age_logic_wire.forwarding_idx;


    always_comb begin 
      block_load_wakeup_wire = 0;
      if(|ldst_addr_matches_r1_reg && ~mem_forward_valid_wire)begin
        block_load_wakeup_wire = 1'b1;
      end
      if(store_blocked_counter_reg == 4'b1111)begin
        block_load_wakeup_wire = 1'b1;
      end
    end




    // Task 3: Clr unsafe bit in ROB for succesful translations
    //         Delay this a cycle to avoid going ahead of the exception broadcast
    //         The unsafe bit is cleared on the first translation, so no need to fire for load wakeups

    assign clr_unsafe_valid_r0_wire = ((do_st_search_wire || do_ld_search_wire) && !fired_load_wakeup_reg);
    assign clr_unsafe_idx_r0_wire   = lcam_uop_wire.rob_idx;
    always_comb begin
      for(int i = 0; i<numLDQEntries; i++)begin
        failed_loads_masked_wire[i] = failed_loads_wire[i] && (i >= ldq_head_reg);
      end
    end
    assign priority_failed_loads_bits_wire = {failed_loads_masked_wire, failed_loads_wire};
  

    // 优先级编码  PriorityEncoder
    always_comb begin 
      l_idx_wire        = 0;
      for(int i = 0; i < 2*numLDQEntries ; i++)begin
          if(priority_failed_loads_bits_wire[i])begin
              l_idx_wire = i;// 仅需要第一个匹配
              break;
          end
      end
    end

    always_comb begin
      //r_xcpt_reg         =  '0;
      ld_xcpt_valid_wire  =  |failed_loads_wire;
      ld_xcpt_uop_wire    =  (l_idx_wire >= numLDQEntries) ? ldq[l_idx_wire - numLDQEntries].entry.uop : 
                        ldq[l_idx_wire].entry.uop;
      use_mem_xcpt_wire   =  (mem_xcpt_valid_wire && 
                        ((mem_xcpt_uop_wire.rob_idx < ld_xcpt_uop_wire.rob_idx)^
                          (mem_xcpt_uop_wire.rob_idx < core_rob_head_idx_i)^
                          (ld_xcpt_uop_wire.rob_idx < core_rob_head_idx_i))) ||
                          !ld_xcpt_valid_wire;
      xcpt_uop_wire       =  use_mem_xcpt_wire ? mem_xcpt_uop_wire :
                        ld_xcpt_uop_wire;            
    end

    // Task 4: Speculatively wakeup loads 1 cycle before they come back
    //boomv3的可配置的推测式load唤醒机制，当前 给他关了 lsu.scala 1258

  //-------------------------------------------------------------
  //-------------------------------------------------------------
  // Writeback Cycle (St->Ld Forwarding Path)
  //-------------------------------------------------------------
  //-------------------------------------------------------------

    assign ldq_idx_dmem_resp_wire = dmem_resp_i.dresp_valid && dmem_resp_i.uop.load ? dmem_resp_i.uop.ldq_idx :0;


 // Initially assume the speculative load wakeup failed

    assign spec_ld_succeed_wire =  ~core_spec_ld_wakeup_valid_o || (core_exe_iresp_o.valid && (core_exe_iresp_o.uop.ldq_idx == mem_incoming_uop_r2_reg.ldq_idx));

  //-------------------------------------------------------------
  // Kill speculated entries on branch mispredict
  //-------------------------------------------------------------
  //-------------------------------------------------------------

  // Kill stores

    generate
      for(genvar i = 0; i< numSTQEntries ; i++)begin : kill_mispredict_stores
        always_comb begin
          st_brkilled_mask[i]  =  0;
          if(stq[i].entry_valid && ((core_brupdate_i.mispredict_mask & stq[i].entry.uop.br_mask)!=0))begin//IsKilledByBranch
              st_brkilled_mask[i]   =  1;
          end
        end
      end
    endgenerate

  //-------------------------------------------------------------
  //-------------------------------------------------------------
  // dequeue old entries on commit
  //-------------------------------------------------------------
  //-------------------------------------------------------------
  generate
    for(genvar w = 0; w < commit_width ; w++)begin 
      always_comb begin : multiple_commit
        commit_store_wire[w] = core_commit_valids_i[w] && core_commit_uops_i[w].store;
        commit_load_wire[w]  = core_commit_valids_i[w] && core_commit_uops_i[w].load;
        commit_idx_wire[w] = commit_store_wire[w] ? stq_commit_head_reg : ldq_head_reg;
        temp_stq_commit_head_wire[w] =  stq_commit_head_reg;
        temp_ldq_head_wire[w]        =  ldq_head_reg;
        if(commit_store_wire[w]) for(int i = 0; i<w ;i++)begin
          if(commit_store_wire[i]) begin
            commit_idx_wire[w] = commit_idx_wire[w] +1;
            temp_stq_commit_head_wire[w] = temp_stq_commit_head_wire[w] +1;
          end
        end
        if(commit_load_wire[w]) for(int i = 0; i<w ;i++)begin
          if(commit_load_wire[i]) begin
            commit_idx_wire[w] = commit_idx_wire[w] +1;
            temp_ldq_head_wire[w] = temp_ldq_head_wire[w] +1;
          end
        end
      end
    end
  endgenerate

    always_comb begin
      clear_store_wire = 0;
      if(stq[stq_head_reg].entry_valid && stq[stq_head_reg].entry.committed)begin
        clear_store_wire   =  stq[stq_head_reg].entry.uop.is_fence ? dmem_ordered_i : stq[stq_head_reg].entry.succeeded;
      end 
    end

  // store has been committed AND successfully sent data to memory
    // Exception / Reset  
  

    always_ff @( posedge clk or negedge rst )begin
        if(!rst)begin
          ldq_head_reg   <=  0;
          ldq_tail_reg   <=  0;
          stq_head_reg   <=  0;
          stq_tail_reg   <=  0;
          stq_commit_head_reg   <=   0;
          stq_execute_head_reg  <=   0;
          for(int i = 0; i < numSTQEntries; i++)begin
              stq[i].entry_valid           <=   0;
              stq[i].entry.addr_valid      <=   0;
              stq[i].entry.data_valid      <=   0;
              stq[i].entry.uop             <=   0;
          end
          for(int i = 0; i < numLDQEntries; i++)begin
              ldq[i].entry_valid                <=         0;
              ldq[i].entry.addr_valid           <=         0;
              ldq[i].entry.executed             <=         0;
          end

          core_exe_iresp_o    <=     0;
          dmem_req_o          <=     0;
          clr_bsy_valid_reg       <=     0;
          clr_bsy_rob_idx_reg     <=     0;
          clr_bsy_brmask_reg      <=     0;
          s1_executing_loads_reg  <=     0;

        end
        else begin
            // This is a newer store than existing loads, so clear the bit in all the store dependency masks
            for(int i = 0 ; i < numLDQEntries ;i++)begin
                if(clear_store_wire)begin
                    ldq[i].entry.st_dep_mask <= ldq[i].entry.st_dep_mask & ~(1 << stq_head_reg);
                end
            end
            
            //dispatch stage 中，有新的指令进来就分配表项
            //配置成了width发射dispatch
            new_ldq_idx_o  <=  ld_enq_idx_wire[dispatch_width-1];
            new_stq_idx_o  <=  st_enq_idx_wire[dispatch_width-1];

            for(int w = 0; w < dispatch_width;w++)begin
              ldq_almost_full_o[w] <= ldq_almost_full_wire[w];          
              stq_almost_full_o[w] <= stq_almost_full_wire[w];
              if(ld_valid_wire[w])begin
                  ldq[ld_enq_idx_wire[w]].entry_valid                   <=         1;
                  ldq[ld_enq_idx_wire[w]].entry.uop                     <=         dis_uops_i[w];
                  ldq[ld_enq_idx_wire[w]].entry.youngest_stq_idx        <=         st_enq_idx_wire[dispatch_width-1];
                  ldq[ld_enq_idx_wire[w]].entry.st_dep_mask             <=         next_live_store_mask_wire;

                  ldq[ld_enq_idx_wire[w]].entry.addr_valid              <=         0;
                  ldq[ld_enq_idx_wire[w]].entry.executed                <=         0;
                  ldq[ld_enq_idx_wire[w]].entry.succeeded               <=         0;
                  ldq[ld_enq_idx_wire[w]].entry.order_fail              <=         0;
                  ldq[ld_enq_idx_wire[w]].entry.observed                <=         0;
                  ldq[ld_enq_idx_wire[w]].entry.forward_std_val         <=         0;
              end
              else if(st_valid_wire[w])begin
                  stq[st_enq_idx_wire[w]].entry_valid                   <=         1;
                  stq[st_enq_idx_wire[w]].entry.uop                     <=         dis_uops_i[w];
                  stq[st_enq_idx_wire[w]].entry.addr_valid              <=         0;
                  stq[st_enq_idx_wire[w]].entry.data_valid              <=         0;
                  stq[st_enq_idx_wire[w]].entry.committed               <=         0;
                  stq[st_enq_idx_wire[w]].entry.succeeded               <=         0;
              end
            end

            ldq_tail_reg  <= ld_enq_idx_wire[dispatch_width-1];
            stq_tail_reg  <= st_enq_idx_wire[dispatch_width-1];

            lsu_fencei_rdy_o   <= lsu_fencei_rdy_wire;


            p1_block_load_mask_reg <= block_load_mask_wire;
            p2_block_load_mask_reg <= p1_block_load_mask_reg;

            ldq_wakeup_idx_r0_reg <= prior_encoder_ldq_wakeup_wire[LDQAddrSz-1:0];

            //issue to memory
            dmem_brupdate_o        <=          core_brupdate_i;
            dmem_exception_o       <=          core_exception_i;
            dmem_rob_head_idx_o    <=          core_rob_head_idx_i;
            dmem_rob_pnr_idx_o     <=          core_rob_pnr_idx_i;
            // dmem_req_valid_o       <=          dmem_req.dreq_valid;
            // dmem_req_o             <=          dmem_req;

            s1_kill_o              <=          (|s1_kill_from_ldq_logic_wire) || (|s1_kill_from_stq_logic_wire);
            dmem_req_o             <=          dmem_req_wire ;
            dmem_req_valid_o       <=          dmem_req_valid_wire;

            if(will_fire_store_commit_wire)begin
                 stq_execute_head_reg        <=  dmem_req_fire_wire ? ((stq_execute_head_reg + 1) & (numSTQEntries -1)) : stq_execute_head_reg;
                 stq[stq_execute_head_reg].entry.succeeded      <= 0;
            end
//          Write Addr into the LAQ/SAQ
            if(will_fire_load_incoming_wire)begin
                ldq[ ldq_incoming_idx_wire ].entry.addr_valid           <=     1;
                ldq[ ldq_incoming_idx_wire ].entry.addr                 <=     exe_paddr_r0_wire;
                ldq[ ldq_incoming_idx_wire ].entry.uop                  <=     exe_stage_uop_wire; 
                ldq[ ldq_incoming_idx_wire ].entry.addr_is_virtual      <=     0;
                ldq[ ldq_incoming_idx_wire ].entry.addr_is_uncacheable  <=     0;
            end
            if(will_fire_sta_incoming_wire | will_fire_stad_incoming_wire)begin
                stq[ stq_incoming_idx_wire ].entry.addr_valid           <=     1;// !pf_st(w) 未定义，这是一个exception // Prevent AMOs from executing!
                stq[ stq_incoming_idx_wire ].entry.addr                 <=     exe_paddr_r0_wire;
                stq[ stq_incoming_idx_wire ].entry.uop                  <=     exe_stage_uop_wire; 
                stq[ stq_incoming_idx_wire ].entry.addr_is_virtual      <=     0;
            end
//-------------------------------------------------------------
//          Write data into the STQ
            if(will_fire_std_incoming_wire | will_fire_stad_incoming_wire)begin
                stq[ stq_incoming_idx_wire ].entry.data_valid             <=      1;
                stq[ stq_incoming_idx_wire ].entry.data                   <=      exe_req_wire.data;
            end



            fired_load_incoming_reg <= will_fire_load_incoming_wire && ~exe_req_killed_wire;
            fired_stad_incoming_reg <= will_fire_stad_incoming_wire && ~exe_req_killed_wire;
            fired_sta_incoming_reg  <= will_fire_sta_incoming_wire && ~exe_req_killed_wire;
            fired_std_incoming_reg  <= will_fire_std_incoming_wire && ~exe_req_killed_wire;
            fired_release_reg       <= will_fire_release_wire;
            fired_store_commit_reg  <= will_fire_store_commit_wire;
            fired_load_wakeup_reg   <= will_fire_load_wakeup_wire && ~((core_brupdate_i.mispredict_mask & ldq_wakeup_entryline_wire.entry.uop.br_mask)!=0);//IsKilledByBranch

            mem_incoming_uop_r1_reg    <= mem_incoming_uop_r0_wire;
            mem_ldq_incoming_entryline_r1_reg   <= mem_ldq_incoming_entryline_r0_wire;
            mem_stq_incoming_entryline_r1_reg   <= mem_stq_incoming_entryline_r0_wire;
            mem_ldq_wakeup_entryline_r1_reg        <= mem_ldq_wakeup_entryline_r0_wire;

            mem_paddr_r1_reg           <=  mem_paddr_r0_wire;
            dmem_release_address_r1_reg   <=   dmem_release_address_i;

            core_exception_i_r1_reg  <= core_exception_i;
            core_exception_i_r2_reg  <= core_exception_i_r1_reg;
            //Clr ROB busy bit 
            if(fired_stad_incoming_reg)begin
                clr_bsy_valid_reg     <=  mem_stq_incoming_entryline_r1_reg.entry_valid           &
                                      ~mem_stq_incoming_entryline_r1_reg.entry.uop.is_amo      &
                                      ~((core_brupdate_i.mispredict_mask & mem_stq_incoming_entryline_r1_reg.entry.uop.br_mask)!=0);//IsKilledByBranch
                clr_bsy_rob_idx_reg   <=  mem_stq_incoming_entryline_r1_reg.entry.uop.rob_idx;
                clr_bsy_brmask_reg    <=  mem_stq_incoming_entryline_r1_reg.entry.uop.br_mask & ~core_brupdate_i.resolve_mask ; //GetNewBrMask
            end
            else if(fired_sta_incoming_reg)begin
                clr_bsy_valid_reg     <=  mem_stq_incoming_entryline_r1_reg.entry_valid           &
                                      mem_stq_incoming_entryline_r1_reg.entry.data_valid      &
                                      ~mem_stq_incoming_entryline_r1_reg.entry.uop.is_amo      &
                                      ~((core_brupdate_i.mispredict_mask & mem_stq_incoming_entryline_r1_reg.entry.uop.br_mask)!=0);//IsKilledByBranch
                clr_bsy_rob_idx_reg   <=  mem_stq_incoming_entryline_r1_reg.entry.uop.rob_idx;
                clr_bsy_brmask_reg    <=  mem_stq_incoming_entryline_r1_reg.entry.uop.br_mask & ~core_brupdate_i.resolve_mask ; //GetNewBrMask
            end
            else if(fired_std_incoming_reg)begin
                clr_bsy_valid_reg     <=  mem_stq_incoming_entryline_r1_reg.entry_valid           &
                                      ~mem_stq_incoming_entryline_r1_reg.entry.uop.is_amo      &
                                      ~mem_stq_incoming_entryline_r1_reg.entry.addr_is_virtual &
                                      ~((core_brupdate_i.mispredict_mask & mem_stq_incoming_entryline_r1_reg.entry.uop.br_mask)!=0);//IsKilledByBranch
                clr_bsy_rob_idx_reg   <=  mem_stq_incoming_entryline_r1_reg.entry.uop.rob_idx;
                clr_bsy_brmask_reg    <=  mem_stq_incoming_entryline_r1_reg.entry.uop.br_mask & ~core_brupdate_i.resolve_mask ; //GetNewBrMask
            end
            else begin
              clr_bsy_valid_reg   <=  0;
              clr_bsy_rob_idx_reg <=  0;
              clr_bsy_brmask_reg  <=  0;
            end

            core_clr_bsy_valid_o          <=  core_clr_bsy_valid_wire;
            core_clr_bsy_rob_idx_o        <=  core_clr_bsy_rob_idx_wire;
            core_spec_ld_wakeup_valid_o   <=  fired_load_incoming_reg && (mem_incoming_uop_r1_reg.pdst != 0);
            core_spec_ld_wakeup_o         <=  mem_incoming_uop_r1_reg.pdst;
            exe_paddr_r1_reg              <=  exe_paddr_r0_wire;
            ldq_wakeup_idx_r1_reg         <=  ldq_wakeup_idx_r0_reg;

            s1_executing_loads_reg        <= s0_executing_loads_wire ;

            wb_forward_valid_reg          <=        mem_forward_valid_wire;//mem 到 wb要寄存一拍
            wb_forward_ldq_idx_reg        <=        mem_forward_ldq_idx_wire;
            wb_forward_ld_addr_reg        <=        mem_forward_ld_addr_wire;
            wb_forward_stq_idx_reg        <=        mem_forward_stq_idx_wire;
            nacking_loads_r1_reg          <=            nacking_loads_r0_wire;
            dmem_req_fire_next_reg        <=            dmem_req_fire_wire;
            dmem_release_ready_o          <=        will_fire_release_wire;
            for(int i= 0;i<numLDQEntries;i++)begin
              if(failed_loads_wire[i])begin
                ldq[i].entry.order_fail  <=  1;
              end
              else begin
                ldq[i].entry.order_fail  <=  0;
              end
              if(ldq_observed_judge_wire[i])begin
                ldq[i].entry.observed  <=  1;
              end
              else begin
                ldq[i].entry.observed  <=  0;
              end
            end
            // Set execute bit in LDQ
            for(int i= 0;i<numLDQEntries;i++)begin
              if(s1_set_execute_wire[i])begin
                ldq[i].entry.executed  <=  1;
              end
              else begin
                ldq[i].entry.executed  <=  0;
              end
            end

            ldst_addr_matches_r1_reg   <=   ldst_addr_matches_r0_wire;
            if(will_fire_store_commit_wire || ~can_fire_store_commit_wire)begin
              store_blocked_counter_reg <= 0;
            end
            else if(can_fire_store_commit_wire && ~will_fire_store_commit_wire)begin
              store_blocked_counter_reg <= store_blocked_counter_reg + 4'b1;
            end


            clr_unsafe_idx_r1_reg        <=   clr_unsafe_idx_r0_wire;
            clr_unsafe_valid_r1_reg      <=   clr_unsafe_valid_r0_wire;
            core_clr_rob_unsafe_valid_o   <=  clr_unsafe_valid_r1_reg && 0;
            core_clr_rob_unsafe_idx_o     <=  clr_unsafe_idx_r1_reg;


            r_xcpt_reg.valid         <=  (ld_xcpt_valid_wire | mem_xcpt_valid_wire) &
                                     ~core_exception_i                 &
                                     ~((core_brupdate_i.mispredict_mask & xcpt_uop_wire.br_mask)!=0);//IsKilledByBranch
            r_xcpt_reg.uop           <=  xcpt_uop_wire;
            r_xcpt_reg.uop.br_mask   <=  xcpt_uop_wire.br_mask & ~core_brupdate_i.resolve_mask  ;//  GetNewBrMask
            r_xcpt_reg.cause         <=  use_mem_xcpt_wire ?   mem_xcpt_cause_wire : '0; 
            r_xcpt_reg.badaddr       <=  mem_xcpt_addr_wire;

            core_lxcpt_valid_o   <=  r_xcpt_reg.valid  & ~core_exception_i & ~((core_brupdate_i.mispredict_mask & r_xcpt_reg.uop.br_mask)!=0);//IsKilledByBranch 
            core_lxcpt_o         <=  r_xcpt_reg;


            if(dmem_nack_i.dreq_valid && dmem_nack_i.uop.load)begin
              ldq[dmem_nack_i.uop.ldq_idx].entry.executed        <=     0;
            end
            else if(dmem_nack_i.dreq_valid && dmem_nack_i.uop.store)begin
                  if((dmem_nack_i.uop.stq_idx < stq_execute_head_reg)^
                      (dmem_nack_i.uop.stq_idx < stq_head_reg)        ^
                      (stq_execute_head_reg           < stq_head_reg)       )
                      begin
                        stq_execute_head_reg    <= dmem_nack_i.uop.stq_idx;
                      end
            end
            dmem_resp_fired            <=    (dmem_resp_i.dresp_valid && dmem_resp_i.uop.load) ||(dmem_resp_i.uop.store && dmem_resp_i.uop.is_amo);
            if(dmem_resp_i.dresp_valid)begin
              if(dmem_resp_i.uop.load)begin
                // logic[LDQAddrSz-1:0]   ldq_idx    =  dmem_resp_i.uop.ldq_idx;
                //logic                  send_iresp = 1; //val send_iresp = ldq(ldq_idx).bits.uop.dst_rtype === RT_FIX  这里只会是int型的resp，不支持float ,所以是 1
                core_exe_iresp_o.uop       <=    ldq[ldq_idx_dmem_resp_wire].entry.uop;
                core_exe_iresp_o.valid     <=    1;
                core_exe_iresp_o.data      <=    dmem_resp_i.data;

                

                ldq[ldq_idx_dmem_resp_wire].entry.succeeded  <= 1;
                //没有debug ldq(ldq_idx).bits.debug_wb_data  := io.dmem.resp(w).bits.data
              end
              else if(dmem_resp_i.uop.store)begin
                stq[dmem_resp_i.uop.stq_idx].entry.succeeded         <=    1;
                if(dmem_resp_i.uop.is_amo)begin
                    // dmem_resp_fired            <=          1;
                    core_exe_iresp_o.valid     <=          1;
                    core_exe_iresp_o.uop       <=     stq[dmem_resp_i.uop.stq_idx].entry.uop;
                    core_exe_iresp_o.data      <=     dmem_resp_i.data;
                
                //没有debug stq(io.dmem.resp(w).bits.uop.stq_idx).bits.debug_wb_data := io.dmem.resp(w).bits.data
                end
              end
            end


            if(~dmem_resp_fired && wb_forward_valid_reg)begin
              core_exe_iresp_o.valid        <=     stq[wb_forward_stq_idx_reg].entry.data_valid & ~((core_brupdate_i.mispredict_mask & ldq[wb_forward_ldq_idx_reg].entry.uop.br_mask)!=0);
              core_exe_iresp_o.uop          <=     ldq[wb_forward_ldq_idx_reg].entry.uop;
              core_exe_iresp_o.data         <=     stq[wb_forward_stq_idx_reg].entry.data;
              if(stq[wb_forward_stq_idx_reg].entry.data_valid  &&  ~((core_brupdate_i.mispredict_mask & ldq[wb_forward_ldq_idx_reg].entry.uop.br_mask)!=0))begin
                ldq[wb_forward_ldq_idx_reg].entry.succeeded         <=     stq[wb_forward_stq_idx_reg].entry.data_valid;
                ldq[wb_forward_ldq_idx_reg].entry.forward_std_val   <=     1;
                ldq[wb_forward_ldq_idx_reg].entry.forward_stq_idx   <=     wb_forward_stq_idx_reg;

                //ldq(f_idx).bits.debug_wb_data   := loadgen.data
              end
            end
            if(~(~dmem_resp_fired && wb_forward_valid_reg)&&~(dmem_resp_i.dresp_valid))begin
              core_exe_iresp_o <=  0;
            end
            
            mem_incoming_uop_r2_reg                      <=    mem_incoming_uop_r1_reg;
            if(spec_ld_succeed_wire)begin
                core_load_miss_o                         <=    0;
            end
            else begin
              core_load_miss_o                           <=    core_spec_ld_wakeup_valid_o;
            end
            // Kill stores
            for(int i=0;i<numSTQEntries;i++)begin
              if(stq[i].entry_valid)begin
                  stq[i].entry.uop.br_mask <= stq[i].entry.uop.br_mask & ~core_brupdate_i.resolve_mask;//GetNewBrMask
                  if((core_brupdate_i.mispredict_mask & stq[i].entry.uop.br_mask)!=0)begin
                      stq[i].entry_valid       <=  0;
                      stq[i].entry.addr_valid  <=  0;
                      stq[i].entry.data_valid  <=  0;                
                  end
              end
            end
            // Kill loads
            for(int i=0;i<numLDQEntries;i++)begin
              if(ldq[i].entry_valid)begin
                  ldq[i].entry.uop.br_mask  <=  ldq[i].entry.uop.br_mask & ~core_brupdate_i.resolve_mask;//GetNewBrMask
                  if(((core_brupdate_i.mispredict_mask & ldq[i].entry.uop.br_mask)!=0))begin//IsKilledByBranch
                      ldq[i].entry_valid        <=  0;
                      ldq[i].entry.addr_valid   <=  0;
                  end
              end
            end


  //-------------------------------------------------------------
  //-------------------------------------------------------------
  // dequeue old entries on commit
  //-------------------------------------------------------------
  //-------------------------------------------------------------
            for(int w = 0; w < commit_width;w++)begin
              if(commit_store_wire[w]) stq[commit_idx_wire].entry.committed     <=   1;
              else if(commit_load_wire[w])begin
                  ldq[commit_idx_wire[w]].entry_valid           <=  0;
                  ldq[commit_idx_wire[w]].entry.addr_valid      <=  0;
                  ldq[commit_idx_wire[w]].entry.executed        <=  0;
                  ldq[commit_idx_wire[w]].entry.succeeded       <=  0;
                  ldq[commit_idx_wire[w]].entry.order_fail      <=  0;
                  ldq[commit_idx_wire[w]].entry.forward_std_val <=  0;
                  
              end
            end

            stq_commit_head_reg                           <=   temp_stq_commit_head_wire[commit_width-1];
            ldq_head_reg                                  <=   temp_ldq_head_wire[commit_width-1];


  // store has been committed AND successfully sent data to memory
            if(stq[stq_head_reg].entry_valid && stq[stq_head_reg].entry.committed)begin
              if(stq[stq_head_reg].entry.uop.is_fence && !dmem_ordered_i)begin
                  dmem_force_order_o       <=  1;
                  store_needs_order_reg    <=  1;
              end
              else begin
                store_needs_order_reg    <=   0;
              end
              
            end
            if(clear_store_wire)begin
              stq[stq_head_reg].entry_valid         <=   0;
              stq[stq_head_reg].entry.addr_valid    <=   0;
              stq[stq_head_reg].entry.data_valid    <=   0;
              stq[stq_head_reg].entry.succeeded     <=   0;
              stq[stq_head_reg].entry.committed     <=   0;
              
              stq_head_reg   <=   (stq_head_reg+1) & (numSTQEntries-1);
              if(stq[stq_head_reg].entry.uop.is_fence)begin
                  stq_execute_head_reg   <=   (stq_execute_head_reg+1) & (numSTQEntries-1);
              end
            end
  //-------------------------------------------------------------
  // Exception 
//   0 1 2 3 4 5 6 7
  // for the live_store_mask, need to kill stores that haven't been committed
            if(core_exception_i)begin
              ldq_head_reg  <=  0;
              ldq_tail_reg  <=  0;
              stq_tail_reg <= stq_commit_head_reg;
              for(int i = 0; i < numSTQEntries; i++)begin
                if(!stq[i].entry.committed  &&  !stq[i].entry.succeeded)begin
                    stq[i].entry_valid               <=       0;
                    stq[i].entry.addr_valid          <=       0;
                    stq[i].entry.data_valid          <=       0;
                    st_exception_killed_mask[i]            <=       1;
                end
              end
              for(int i = 0; i < numLDQEntries; i++)begin
                  ldq[i].entry_valid                <=         0;
                  ldq[i].entry.addr_valid           <=         0;
                  ldq[i].entry.executed             <=         0;
              end
            end
  //-------------------------------------------------------------
  // Live Store Mask
  // track a bit-array of stores that are alive
  // (could maybe be re-produced from the stq_head/stq_tail, but need to know include spec_killed entries)
            live_store_mask_reg  <=  next_live_store_mask_wire&
                                ~$unsigned(st_brkilled_mask) &
                                ~$unsigned(st_exception_killed_mask);

        end
    end

endmodule