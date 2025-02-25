// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvcore.h for the primary calling header

#include "Vvcore__pch.h"
#include "Vvcore___024root.h"

VL_INLINE_OPT void Vvcore___024root___ico_sequent__TOP__0(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_h9cab34c8__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_h9cab34c8__0 = 0;
    IData/*31:0*/ vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h5b70525a__0;
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h5b70525a__0 = 0;
    IData/*31:0*/ vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h59970817__0;
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h59970817__0 = 0;
    IData/*31:0*/ vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6643a12d__0;
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6643a12d__0 = 0;
    IData/*31:0*/ vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h67393efa__0;
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h67393efa__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h2fdcc637__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h2fdcc637__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_106;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_184;
    VlWide<3>/*95:0*/ __Vtemp_186;
    VlWide<3>/*95:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_273;
    VlWide<3>/*95:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_305;
    VlWide<3>/*95:0*/ __Vtemp_309;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_317;
    // Body
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__rst 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->vcore__DOT__inst__DOT__fnci));
    vlSelf->vcore__DOT__inst__DOT____Vcellinp__mmu_inst__m_axi_rlast 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif) 
           | (IData)(vlSelf->m_axi_rlast));
    if (((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_f)) 
         & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_byps_f)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_f;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_trsc_s = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_f;
    } else if ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_f))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_f;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_trsc_s = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_f;
    } else if ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_f))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_f;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_trsc_s = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_f;
    } else if ((((((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rqst_b)) 
                   & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_resp_b))))) 
                  & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp) 
                     != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rqst_b))) 
                 & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_lock_b))))) 
                & (~ (IData)((0U != (IData)(vlSelf->m_coh_resp)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rqst_b;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_trsc_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_trsc_b;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_s 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_addr_b;
    } else {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_s = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_trsc_s = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_s = 0ULL;
    }
    vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
        = ((0x880ULL & vlSelf->mip_ext) | (0x33bULL 
                                           & vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip_base));
    vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_h9cab34c8__0 
        = (0x3fU & (IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_s
                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr) 
                            >> 6U)));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__index 
        = vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_h9cab34c8__0;
    if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                       >> 0x1aU)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__index 
            = (0x3fU & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
                                [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                >> 0x18U)))] 
                                >> 6U)));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__index 
            = (0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill));
    }
    vlSelf->cmt_mip = vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip;
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_32[1U] = 0U;
        if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_184[0U] = 0U;
            __Vtemp_184[2U] = 1U;
        } else if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_184[0U] = 0U;
            __Vtemp_184[2U] = 1U;
        } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_184[0U] = 0U;
            __Vtemp_184[2U] = 1U;
        } else if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_184[0U] = 0U;
            __Vtemp_184[2U] = 1U;
        } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_184[0U] = 0U;
            __Vtemp_184[2U] = 1U;
        } else {
            __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcountinhibit);
            __Vtemp_184[2U] = 0U;
        }
        __Vtemp_269[1U] = 0U;
        __Vtemp_303[0U] = 0U;
    } else if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_32[1U] = ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                           ? 0U : ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                 ? 0U
                                                 : (IData)(
                                                           (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mhartid 
                                                            >> 0x20U))))
                                    : ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                            ? (IData)(
                                                      (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mimpid 
                                                       >> 0x20U))
                                            : (IData)(
                                                      (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__marchid 
                                                       >> 0x20U)))
                                        : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                            ? (IData)(
                                                      (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mvendorid 
                                                       >> 0x20U))
                                            : 0U))));
        __Vtemp_184[0U] = 0U;
        __Vtemp_184[2U] = 1U;
        __Vtemp_269[1U] = 0U;
        __Vtemp_303[0U] = 0U;
    } else {
        __Vtemp_32[1U] = 0U;
        if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_184[0U] = 0U;
            __Vtemp_184[2U] = 1U;
            __Vtemp_269[1U] = 0U;
            __Vtemp_303[0U] = 0U;
        } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_184[0U] = 0U;
                    __Vtemp_184[2U] = 1U;
                    __Vtemp_269[1U] = 0U;
                } else {
                    __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcounteren);
                    __Vtemp_184[2U] = 0U;
                    __Vtemp_269[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__scounteren 
                                               >> 0x20U));
                }
                __Vtemp_303[0U] = 0U;
            } else {
                if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mtvec);
                    __Vtemp_269[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__stvec 
                                               >> 0x20U));
                    __Vtemp_303[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__utvec);
                } else {
                    __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie);
                    __Vtemp_269[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                               >> 0x20U));
                    __Vtemp_303[0U] = 0U;
                }
                __Vtemp_184[2U] = 0U;
            }
        } else {
            if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg);
                    __Vtemp_303[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__fcsr);
                } else {
                    __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__medeleg);
                    __Vtemp_303[0U] = (7U & (IData)(
                                                    (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__fcsr 
                                                     >> 5U)));
                }
                __Vtemp_269[1U] = 0U;
            } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__misa);
                __Vtemp_269[1U] = 0U;
                __Vtemp_303[0U] = (0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__fcsr));
            } else {
                __Vtemp_184[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus);
                __Vtemp_269[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                           >> 0x20U));
                __Vtemp_303[0U] = 0U;
            }
            __Vtemp_184[2U] = 0U;
        }
    }
    __Vtemp_39[2U] = ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                       ? ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                           ? 1U : ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? 1U : ((0x20U 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 1U : 
                                            ((0x10U 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                              ? ((8U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                  ? 1U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 0U
                                                     : 1U))))
                                              : 1U))))
                       : 1U);
    if ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_72[2U] = __Vtemp_39[2U];
        __Vtemp_106[2U] = ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? 1U : ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                         ? 1U : ((0x20U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                  ? 1U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 1U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                       ? 1U
                                                       : 0U))))))))
                            : 1U);
    } else {
        __Vtemp_72[2U] = ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                           ? 1U : ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? 1U : ((0x40U 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 1U : 
                                            ((0x20U 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                              ? 1U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                               ? 1U
                                               : ((8U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))))));
        __Vtemp_106[2U] = 1U;
    }
    if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_136[1U] = 0U;
        __Vtemp_239[1U] = 0U;
    } else if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_136[1U] = 0U;
        __Vtemp_239[1U] = 0U;
    } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_136[1U] = 0U;
            __Vtemp_239[1U] = 0U;
        } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_136[1U] = 0U;
            __Vtemp_239[1U] = 0U;
        } else {
            __Vtemp_136[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                                       >> 0x20U));
            __Vtemp_239[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                                       >> 0x20U));
        }
    } else if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_136[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mtval 
                                       >> 0x20U));
            __Vtemp_239[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__stval 
                                       >> 0x20U));
        } else {
            __Vtemp_136[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcause 
                                       >> 0x20U));
            __Vtemp_239[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__scause 
                                       >> 0x20U));
        }
    } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_136[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mepc 
                                   >> 0x20U));
        __Vtemp_239[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__sepc 
                                   >> 0x20U));
    } else {
        __Vtemp_136[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mscratch 
                                   >> 0x20U));
        __Vtemp_239[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__sscratch 
                                   >> 0x20U));
    }
    if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_68[1U] = 0U;
        __Vtemp_273[1U] = ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? 0U : ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                     ? 0U : ((0x10U 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 0U
                                                     : (IData)(
                                                               (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__satp 
                                                                >> 0x20U)))))))));
    } else if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_68[1U] = 0U;
        __Vtemp_273[1U] = ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? 0U : __Vtemp_239[1U]);
    } else {
        __Vtemp_68[1U] = ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                           ? 0U : ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? 0U : ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__minstret_fwd 
                                                              >> 0x20U)))
                                               : ((1U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? (IData)(
                                                             (vlSelf->mtime 
                                                              >> 0x20U))
                                                   : (IData)(
                                                             (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcycle 
                                                              >> 0x20U))))))));
        __Vtemp_273[1U] = __Vtemp_269[1U];
    }
    __Vtemp_178[1U] = ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                        ? ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? 0U : (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcounteren 
                                                >> 0x20U)))
                            : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mtvec 
                                           >> 0x20U))
                                : (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 0x20U))))
                        : ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                                           >> 0x20U))
                                : (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__medeleg 
                                           >> 0x20U)))
                            : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__misa 
                                           >> 0x20U))
                                : (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                           >> 0x20U)))));
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_34[0U] = 0U;
        if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_186[0U] = 0U;
            __Vtemp_186[1U] = 0U;
            __Vtemp_271[0U] = 0U;
            __Vtemp_271[2U] = 1U;
        } else {
            if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_186[0U] = 0U;
                __Vtemp_271[0U] = 0U;
                __Vtemp_271[2U] = 1U;
            } else if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_186[0U] = 0U;
                __Vtemp_271[0U] = 0U;
                __Vtemp_271[2U] = 1U;
            } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_186[0U] = 0U;
                    __Vtemp_271[0U] = 0U;
                    __Vtemp_271[2U] = 1U;
                } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_186[0U] = 0U;
                    __Vtemp_271[0U] = 0U;
                    __Vtemp_271[2U] = 1U;
                } else {
                    __Vtemp_186[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip);
                    __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip);
                    __Vtemp_271[2U] = 0U;
                }
            } else {
                if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                        __Vtemp_186[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mtval);
                        __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__stval);
                    } else {
                        __Vtemp_186[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcause);
                        __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__scause);
                    }
                } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_186[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mepc);
                    __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__sepc);
                } else {
                    __Vtemp_186[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mscratch);
                    __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__sscratch);
                }
                __Vtemp_271[2U] = 0U;
            }
            __Vtemp_186[1U] = __Vtemp_136[1U];
        }
    } else {
        __Vtemp_186[0U] = __Vtemp_184[0U];
        if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_34[0U] = 0U;
            __Vtemp_186[1U] = ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? 0U : ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 0U
                                                    : (IData)(
                                                              (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcountinhibit 
                                                               >> 0x20U)))))));
            __Vtemp_271[0U] = 0U;
            __Vtemp_271[2U] = 1U;
        } else if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_34[0U] = ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                               ? 0U : ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 0U : (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mhartid)))
                                        : ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                ? (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mimpid)
                                                : (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__marchid))
                                            : ((1U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                ? (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mvendorid)
                                                : 0U))));
            __Vtemp_186[1U] = 0U;
            __Vtemp_271[0U] = 0U;
            __Vtemp_271[2U] = 1U;
        } else {
            __Vtemp_34[0U] = 0U;
            if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_186[1U] = 0U;
                __Vtemp_271[0U] = 0U;
                __Vtemp_271[2U] = 1U;
            } else {
                __Vtemp_186[1U] = __Vtemp_178[1U];
                if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                            __Vtemp_271[0U] = 0U;
                            __Vtemp_271[2U] = 1U;
                        } else {
                            __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__scounteren);
                            __Vtemp_271[2U] = 0U;
                        }
                    } else {
                        __Vtemp_271[0U] = ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                            ? (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__stvec)
                                            : (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie));
                        __Vtemp_271[2U] = 0U;
                    }
                } else if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_271[0U] = 0U;
                    __Vtemp_271[2U] = 1U;
                } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_271[0U] = 0U;
                    __Vtemp_271[2U] = 1U;
                } else {
                    __Vtemp_271[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus);
                    __Vtemp_271[2U] = 0U;
                }
            }
        }
    }
    if ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
        __Vtemp_70[0U] = 0U;
        if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_103[0U] = 0U;
            __Vtemp_103[1U] = 0U;
            __Vtemp_191[2U] = 1U;
            if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_309[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else {
                __Vtemp_309[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__satp);
                __Vtemp_309[2U] = 0U;
            }
        } else {
            if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_103[0U] = 0U;
                __Vtemp_103[1U] = 0U;
                __Vtemp_191[2U] = ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? 1U : ((0x10U 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 1U : 
                                            ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                              ? 1U : 
                                             ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                               ? ((2U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 1U
                                                    : 0U))
                                               : 0U))));
            } else {
                if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_103[0U] = 0U;
                    __Vtemp_103[1U] = 0U;
                } else if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_103[0U] = 0U;
                    __Vtemp_103[1U] = 0U;
                } else if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_103[0U] = 0U;
                    __Vtemp_103[1U] = 0U;
                } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_103[0U] = 0U;
                    __Vtemp_103[1U] = 0U;
                } else if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                        __Vtemp_103[0U] = 0U;
                        __Vtemp_103[1U] = 0U;
                    } else {
                        __Vtemp_103[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__minstret_fwd);
                        __Vtemp_103[1U] = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__minstret_fwd 
                                                   >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                    __Vtemp_103[0U] = 0U;
                    __Vtemp_103[1U] = 0U;
                } else {
                    __Vtemp_103[0U] = (IData)((1ULL 
                                               + vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcycle));
                    __Vtemp_103[1U] = (IData)(((1ULL 
                                                + vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcycle) 
                                               >> 0x20U));
                }
                __Vtemp_191[2U] = __Vtemp_184[2U];
            }
            __Vtemp_309[0U] = __Vtemp_271[0U];
            __Vtemp_309[2U] = __Vtemp_271[2U];
        }
    } else {
        if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_70[0U] = 0U;
            __Vtemp_309[0U] = 0U;
            __Vtemp_309[2U] = 1U;
        } else if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
            __Vtemp_70[0U] = 0U;
            __Vtemp_309[0U] = 0U;
            __Vtemp_309[2U] = 1U;
        } else {
            __Vtemp_309[0U] = __Vtemp_303[0U];
            if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_70[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_70[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_70[0U] = 0U;
                __Vtemp_309[2U] = 1U;
            } else if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_70[0U] = 0U;
                __Vtemp_309[2U] = ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? 1U : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 0U : 1U));
            } else if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_70[0U] = ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                   ? 0U : (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__minstret_fwd));
                __Vtemp_309[2U] = 0U;
            } else if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))) {
                __Vtemp_70[0U] = (IData)(vlSelf->mtime);
                __Vtemp_309[2U] = 0U;
            } else {
                __Vtemp_70[0U] = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mcycle);
                __Vtemp_309[2U] = 1U;
            }
        }
        __Vtemp_103[0U] = 0U;
        __Vtemp_103[1U] = 0U;
        __Vtemp_191[2U] = 1U;
    }
    __Vtemp_305[1U] = ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                        ? 0U : ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                 ? 0U : ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                          ? 0U : ((8U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                      ? (IData)(
                                                                (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__utvec 
                                                                 >> 0x20U))
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                      ? (IData)(
                                                                (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__fcsr 
                                                                 >> 0x20U))
                                                      : 0U)
                                                     : 0U))))));
    __Vtemp_315[1U] = ((0x800U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                        ? ((0x400U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                        ? 0U : ((0x40U 
                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                 ? 0U
                                                 : 
                                                __Vtemp_32[1U]))
                                    : 0U) : ((0x100U 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                              ? 0U : 
                                             __Vtemp_68[1U]))
                            : ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? __Vtemp_103[1U] : 0U))
                        : ((0x400U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? 0U : ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                     ? ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                             ? 0U : 
                                            __Vtemp_186[1U])
                                         : 0U) : ((0x100U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 
                                                  __Vtemp_273[1U]
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_305[1U])))));
    __Vtemp_317[0U] = (((0x322U < (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)) 
                        & (0x340U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)))
                        ? (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mhpmevent
                                  [(0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))])
                        : ((0x800U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                            ? ((0x400U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                ? ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? ((0x100U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                        ? ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                            ? 0U : 
                                           __Vtemp_34[0U])
                                        : 0U) : __Vtemp_70[0U])
                                : ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                    ? __Vtemp_103[0U]
                                    : 0U)) : ((0x400U 
                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                               ? 0U
                                               : ((0x200U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    __Vtemp_186[0U])
                                                    : 0U)
                                                   : 
                                                  __Vtemp_309[0U]))));
    if (((0xb02U < (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)) 
         & (0xb20U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)))) {
        vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U] 
            = (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mhpmcounter
                      [(0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))]);
        vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U] 
            = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mhpmcounter
                       [(0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))] 
                       >> 0x20U));
        vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[2U] = 0U;
    } else {
        vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U] 
            = __Vtemp_317[0U];
        if (((0x322U < (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)) 
             & (0x340U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)))) {
            vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U] 
                = (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mhpmevent
                           [(0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))] 
                           >> 0x20U));
            vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[2U] = 0U;
        } else {
            vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U] 
                = __Vtemp_315[1U];
            vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[2U] 
                = ((0x800U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                    ? ((0x400U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                        ? __Vtemp_72[2U] : __Vtemp_106[2U])
                    : ((0x400U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                        ? 1U : ((0x200U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr))
                                 ? __Vtemp_191[2U] : 
                                __Vtemp_309[2U])));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__csr_intr = 0U;
    if ((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip) 
               & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie)))) {
        if ((((~ (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg)) 
              & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                 | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                    & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                               >> 3U))))) | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg) 
                                             & ((1U 
                                                 > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                                | ((1U 
                                                    == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                                   & (IData)(
                                                             (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                              >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x40U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 1U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 1U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 1U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 1U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x41U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 2U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 2U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 2U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 2U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x42U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 3U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 3U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 3U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 3U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x43U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 4U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 4U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 4U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 4U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x44U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 5U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 5U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 5U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 5U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x45U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 6U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 6U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 6U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 6U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x46U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 7U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 7U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 7U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 7U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x47U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 8U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 8U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 8U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 8U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x48U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 9U)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                           >> 9U))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 9U))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 9U)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                    | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                       & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x49U;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 0xaU)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                             >> 0xaU))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 0xaU))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                        | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                           & (IData)(
                                                     (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                      >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 0xaU)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x4aU;
        }
    }
    if ((1U & ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mip 
                        >> 0xbU)) & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mie 
                                             >> 0xbU))))) {
        if ((((~ (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                          >> 0xbU))) & ((3U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                        | ((3U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                           & (IData)(
                                                     (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                      >> 3U))))) 
             | ((IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mideleg 
                         >> 0xbU)) & ((1U > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                      | ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level)) 
                                         & (IData)(
                                                   (vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                    >> 1U))))))) {
            vlSelf->vcore__DOT__inst__DOT__csr_intr = 0x4bU;
        }
    }
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h2fdcc637__0 
        = (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr 
        = ((0x38U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)) 
           | (IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h2fdcc637__0));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_wvalue[0U] 
        = (IData)((((0x17U >= (0x1fU & ((IData)(3U) 
                                        * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                     ? (4U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                              >> (0x1fU & ((IData)(3U) 
                                           * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                     : 0U) ? (((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                : 0U) ? (((0x17U >= 
                                           (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                           ? (1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                           : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                          : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))
                               : (((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                    ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                    : 0U) ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                                   : (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))))
                    : (((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                         ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                  >> (0x1fU & ((IData)(3U) 
                                               * (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                         : 0U) ? (((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                    ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                    : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                   : (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                        : (((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                             ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                             : 0U) ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                               >> 7U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_wvalue[1U] 
        = (IData)(((((0x17U >= (0x1fU & ((IData)(3U) 
                                         * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                      ? (4U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                               >> (0x1fU & ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                      : 0U) ? (((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                 ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                 : 0U) ? (((0x17U >= 
                                            (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                            ? (1U & 
                                               (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                            : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                           : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))
                                : (((0x17U >= (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                     ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                              >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                     : 0U) ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                                    : (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))))
                     : (((0x17U >= (0x1fU & ((IData)(3U) 
                                             * (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                          ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                   >> (0x1fU & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                          : 0U) ? (((0x17U >= (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                                     ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                              >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                                     : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                    : (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                         : (((0x17U >= (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)))))
                              ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_bits 
                                       >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr))))))
                              : 0U) ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                       >> 0xfU)))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))
                             : (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                >> 7U)))))) 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))))) 
                   >> 0x20U));
    if ((((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)) 
          == (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)) 
         & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sc_succ))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_wvalue[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_wvalue[1U] = 0U;
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr 
        = ((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_waddr)) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_wvalue[2U] 
        = (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__csr_rqst)
                    ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U])))
                    : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sc_fail))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_wvalue[3U] 
        = (IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__csr_rqst)
                     ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U])))
                     : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sc_fail))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__wres 
        = ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_func))
            ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_func))
                ? ((~ vlSelf->vcore__DOT__inst__DOT__csr_wdat) 
                   & (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U]))))
                : (vlSelf->vcore__DOT__inst__DOT__csr_wdat 
                   | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U])))))
            : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_func))
                ? vlSelf->vcore__DOT__inst__DOT__csr_wdat
                : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U])))));
    vlSelf->del_csrv = vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__wres;
    vlSelf->vcore__DOT__inst__DOT__csr_excp = ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_rqst) 
                                               & ((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[2U] 
                                                   | ((3U 
                                                       & ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr) 
                                                          >> 8U)) 
                                                      > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__level))) 
                                                  | ((0xc00U 
                                                      <= (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)) 
                                                     & ((0xc20U 
                                                         > (IData)(vlSelf->vcore__DOT__inst__DOT__csr_addr)) 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__val[0U]))) 
                                                           != vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__wres)))));
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h5b70525a__0 
        = ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))
            ? (0x80002013U | VL_SHIFTL_III(32,32,32, 
                                           (0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr)), 0x14U))
            : ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U] 
                << 0x17U) | (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                             >> 9U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__delta 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h49cc4c78__0) 
            | (3U == (3U & vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h5b70525a__0)))
            ? 4U : 2U);
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h49cc4c78__0)
            ? 0xc02013U : vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h5b70525a__0);
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h59970817__0 
        = ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))
            ? (0x80002013U | VL_SHIFTL_III(32,32,32, 
                                           (0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr)), 0x14U))
            : ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U] 
                << 0xdU) | (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                            >> 0x13U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__delta 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4c6680a0__0) 
            | (3U == (3U & vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h59970817__0)))
            ? 4U : 2U);
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4c6680a0__0)
            ? 0xc02013U : vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h59970817__0);
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6643a12d__0 
        = ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))
            ? (0x80002013U | VL_SHIFTL_III(32,32,32, 
                                           (0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr)), 0x14U))
            : ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U] 
                << 3U) | (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                          >> 0x1dU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__delta 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h40a0a5d5__0) 
            | (3U == (3U & vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6643a12d__0)))
            ? 4U : 2U);
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h40a0a5d5__0)
            ? 0xc02013U : vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6643a12d__0);
    vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h67393efa__0 
        = ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))
            ? (0x80002013U | VL_SHIFTL_III(32,32,32, 
                                           (0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr)), 0x14U))
            : ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU] 
                << 0x19U) | (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                             >> 7U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__delta 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6d37c1cd__0) 
            | (3U == (3U & vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h67393efa__0)))
            ? 4U : 2U);
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h6d37c1cd__0)
            ? 0xc02013U : vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h67393efa__0);
    vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__we 
        = ((~ (IData)(vlSelf->vcore__DOT__inst__DOT__csr_excp)) 
           & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_rqst));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                >> 7U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x4000003bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                               >> 7U)))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (0x7b9ac5a928ULL 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                 >> 7U)))))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (0x7b9ac5a928ULL 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                      >> 7U)))))
                                                              ? 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (0x7b9ac5a928ULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((IData)(5U) 
                                                                             * 
                                                                             (7U 
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                        >> 7U)))))
                                                                ? 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (0x7b9ac5a928ULL 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(5U) 
                                                                               * 
                                                                               (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                          >> 7U)))))
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (0x7b9ac5a928ULL 
                                                                             >> 
                                                                             (0x3fU 
                                                                              & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                            >> 2U)))))
                                                                    ? 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (0x7b9ac5a928ULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                             >> 2U)))))
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (0x7b9ac5a928ULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                >> 7U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x4000003bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               >> 7U)))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (0x7b9ac5a928ULL 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 >> 7U)))))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (0x7b9ac5a928ULL 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 7U)))))
                                                              ? 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (0x7b9ac5a928ULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((IData)(5U) 
                                                                             * 
                                                                             (7U 
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        >> 7U)))))
                                                                ? 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (0x7b9ac5a928ULL 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(5U) 
                                                                               * 
                                                                               (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                          >> 7U)))))
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (0x7b9ac5a928ULL 
                                                                             >> 
                                                                             (0x3fU 
                                                                              & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                            >> 2U)))))
                                                                    ? 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (0x7b9ac5a928ULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (0x7b9ac5a928ULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                >> 7U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x4000003bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               >> 7U)))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (0x7b9ac5a928ULL 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 >> 7U)))))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (0x7b9ac5a928ULL 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 7U)))))
                                                              ? 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (0x7b9ac5a928ULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((IData)(5U) 
                                                                             * 
                                                                             (7U 
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        >> 7U)))))
                                                                ? 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (0x7b9ac5a928ULL 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(5U) 
                                                                               * 
                                                                               (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                          >> 7U)))))
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (0x7b9ac5a928ULL 
                                                                             >> 
                                                                             (0x3fU 
                                                                              & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                            >> 2U)))))
                                                                    ? 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (0x7b9ac5a928ULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (0x7b9ac5a928ULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 7U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x4000003bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               >> 7U)))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (0x7b9ac5a928ULL 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 >> 7U)))))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (0x7b9ac5a928ULL 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 7U)))))
                                                              ? 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (0x7b9ac5a928ULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((IData)(5U) 
                                                                             * 
                                                                             (7U 
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        >> 7U)))))
                                                                ? 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (0x7b9ac5a928ULL 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(5U) 
                                                                               * 
                                                                               (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                          >> 7U)))))
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (0x7b9ac5a928ULL 
                                                                             >> 
                                                                             (0x3fU 
                                                                              & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                            >> 2U)))))
                                                                    ? 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (0x7b9ac5a928ULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (0x7b9ac5a928ULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
    vlSelf->del_csrw = vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__we;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h79b41f55__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                >> 5U) | (IData)((0x640U == (0x640U 
                                             & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                                << 0x14U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he67e0d8d__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                >> 0xfU) | (IData)((0x190000U == (0x190000U 
                                                  & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                                << 0xaU)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2181d1bd__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                >> 0x19U) | (IData)((0x64000000U == 
                                     (0x64000000U & 
                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U]));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4fca5eea__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h98fad58f__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                >> 3U) | (IData)((0x190U == (0x190U 
                                             & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                                << 0x16U)));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                 << 9U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h79b41f55__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | ((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
                        >> 0x1bU))) ? 1U : 0U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum))));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum))));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
        = (0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum))));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                           >> 0xbU)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum))));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum))));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                           >> 0x16U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum))));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he67e0d8d__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | (((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                      | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
                         >> 0x1bU))) ? 1U : 0U) << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
        = (0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                           >> 0xbU)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                               >> 4U)) 
                               << 4U)));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                           >> 0x16U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2181d1bd__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | (((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                      | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
                         >> 0x1bU))) ? 1U : 0U) << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
}
