// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video_top.h for the primary calling header

#include "Vtb_video_top__pch.h"

void Vtb_video_top___024root___eval_triggers_vec__ico(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_triggers_vec__ico\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.cab_cocktail) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cab_cocktail__0)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.scroll) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scroll__0)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.videoreg) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__videoreg__0)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.vr_din) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vr_din__0)))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.vr_we) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vr_we__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.vr_addr) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vr_addr__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.dl_done) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dl_done__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.dl_wr) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dl_wr__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.dl_data) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dl_data__0)) 
                                                             << 3U) 
                                                            | ((vlSelfRef.dl_addr 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__dl_addr__0) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.reset) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_addr__0 = vlSelfRef.dl_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_data__0 = vlSelfRef.dl_data;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_wr__0 = vlSelfRef.dl_wr;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_done__0 = vlSelfRef.dl_done;
    vlSelfRef.__Vtrigprevexpr___TOP__vr_addr__0 = vlSelfRef.vr_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__vr_we__0 = vlSelfRef.vr_we;
    vlSelfRef.__Vtrigprevexpr___TOP__vr_din__0 = vlSelfRef.vr_din;
    vlSelfRef.__Vtrigprevexpr___TOP__videoreg__0 = vlSelfRef.videoreg;
    vlSelfRef.__Vtrigprevexpr___TOP__scroll__0 = vlSelfRef.scroll;
    vlSelfRef.__Vtrigprevexpr___TOP__cab_cocktail__0 
        = vlSelfRef.cab_cocktail;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vtb_video_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_video_top___024root___eval_phase__ico(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_phase__ico\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_video_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_video_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_video_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((0x0000000000000a00ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.tb_video_top__DOT__u_video__DOT__cocktail 
                        = ((IData)(vlSelfRef.cab_cocktail) 
                           & (IData)(vlSelfRef.videoreg));
                    if (vlSelfRef.tb_video_top__DOT__u_video__DOT__cocktail) {
                        vlSelfRef.tb_video_top__DOT__u_video__DOT__sy 
                            = (0x000000ffU & ((IData)(0xffU) 
                                              - (IData)(vlSelfRef.vcnt)));
                        vlSelfRef.tb_video_top__DOT__u_video__DOT__sx 
                            = (0x000000ffU & ((IData)(0xffU) 
                                              - (IData)(vlSelfRef.hcnt)));
                    } else {
                        vlSelfRef.tb_video_top__DOT__u_video__DOT__sy 
                            = (0x000000ffU & (IData)(vlSelfRef.vcnt));
                        vlSelfRef.tb_video_top__DOT__u_video__DOT__sx 
                            = (0x000000ffU & (IData)(vlSelfRef.hcnt));
                    }
                    vlSelfRef.tb_video_top__DOT__bgrom_addr 
                        = ((((3U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))
                              ? (IData)(vlSelfRef.tb_video_top__DOT__vram_b_data)
                              : (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_code)) 
                            << 3U) | (7U & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy)));
                    vlSelfRef.tb_video_top__DOT__fgrom_addr 
                        = ((((1U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))
                              ? (IData)(vlSelfRef.tb_video_top__DOT__vram_b_data)
                              : (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_code)) 
                            << 3U) | (7U & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy)));
                    vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_pen 
                        = ((2U & (((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_msb) 
                                   >> (7U & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx))) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_lsb) 
                                                   >> 
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx)))));
                }
            }
            if ((0x0000000000000e00ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.tb_video_top__DOT__u_video__DOT__bx 
                        = (0x000000ffU & ((IData)(vlSelfRef.scroll) 
                                          + (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx)));
                    vlSelfRef.tb_video_top__DOT__vram_b_addr 
                        = (0x00001000U & ((IData)(vlSelfRef.videoreg) 
                                          << 0x0000000cU));
                    if ((0U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
                        vlSelfRef.tb_video_top__DOT__vram_b_addr 
                            = ((0x00001000U & ((IData)(vlSelfRef.videoreg) 
                                               << 0x0000000cU)) 
                               | ((0x000003e0U & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy) 
                                                  << 2U)) 
                                  | (0x0000001fU & 
                                     ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx) 
                                      >> 3U))));
                    } else if ((2U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
                        vlSelfRef.tb_video_top__DOT__vram_b_addr 
                            = (0x00000800U | ((0x00001000U 
                                               & ((IData)(vlSelfRef.videoreg) 
                                                  << 0x0000000cU)) 
                                              | ((0x000003e0U 
                                                  & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy) 
                                                     << 2U)) 
                                                 | (0x0000001fU 
                                                    & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bx) 
                                                       >> 3U)))));
                    }
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vtb_video_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*7:0*/, 512> Vtb_video_top__ConstPool__TABLE_h043dfa72_0;

void Vtb_video_top___024root___nba_sequent__TOP__0(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_video_top__DOT__u_mem__DOT__prog_sum;
    __Vdly__tb_video_top__DOT__u_mem__DOT__prog_sum = 0;
    CData/*2:0*/ __Vdly__tb_video_top__DOT__u_video__DOT__phase;
    __Vdly__tb_video_top__DOT__u_video__DOT__phase = 0;
    SData/*8:0*/ __Vdly__hcnt;
    __Vdly__hcnt = 0;
    CData/*7:0*/ __Vdly__vcnt;
    __Vdly__vcnt = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0;
    // Body
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0U;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0U;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0U;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0U;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0U;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0U;
    __VdlySet__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0U;
    __Vdly__tb_video_top__DOT__u_mem__DOT__prog_sum 
        = vlSelfRef.tb_video_top__DOT__u_mem__DOT__prog_sum;
    __Vdly__tb_video_top__DOT__u_video__DOT__phase 
        = vlSelfRef.tb_video_top__DOT__u_video__DOT__phase;
    __Vdly__vcnt = vlSelfRef.vcnt;
    __Vdly__hcnt = vlSelfRef.hcnt;
    if (vlSelfRef.vr_we) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 
            = vlSelfRef.vr_din;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 
            = vlSelfRef.vr_addr;
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00005800U <= vlSelfRef.dl_addr) 
                                     & (0x00006000U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00005000U <= vlSelfRef.dl_addr) 
                                     & (0x00005800U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00004800U <= vlSelfRef.dl_addr) 
                                     & (0x00005000U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00004000U <= vlSelfRef.dl_addr) 
                                     & (0x00004800U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00006100U <= vlSelfRef.dl_addr) 
                                     & (0x00006200U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.dl_addr);
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00006000U <= vlSelfRef.dl_addr) 
                                     & (0x00006100U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.dl_addr);
        __VdlySet__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.reset) {
        __Vdly__tb_video_top__DOT__u_video__DOT__phase = 0U;
        __Vdly__hcnt = 0U;
        __Vdly__vcnt = 0U;
        vlSelfRef.de = 0U;
        vlSelfRef.vblank = 1U;
        vlSelfRef.hblank = 1U;
        vlSelfRef.rgb = 0U;
    } else {
        __Vdly__tb_video_top__DOT__u_video__DOT__phase 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase)));
        if ((7U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
            if ((0x015fU == (IData)(vlSelfRef.hcnt))) {
                __Vdly__vcnt = ((0xffU == (IData)(vlSelfRef.vcnt))
                                 ? 0U : (0x000000ffU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.vcnt))));
                __Vdly__hcnt = 0U;
            } else {
                __Vdly__hcnt = (0x000001ffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.hcnt)));
            }
            vlSelfRef.de = vlSelfRef.tb_video_top__DOT__u_video__DOT__active;
            vlSelfRef.vblank = (0xd0U <= (IData)(vlSelfRef.vcnt));
            vlSelfRef.hblank = (0x0100U <= (IData)(vlSelfRef.hcnt));
            vlSelfRef.rgb = ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__active)
                              ? vlSelfRef.tb_video_top__DOT__u_video__DOT__PAL_LUT
                             [((((4U & ((IData)(vlSelfRef.tb_video_top__DOT__prom_hi) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.tb_video_top__DOT__prom_lo) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.tb_video_top__DOT__prom_hi) 
                                                         >> 2U)))) 
                                << 3U) | ((4U & (IData)(vlSelfRef.tb_video_top__DOT__prom_lo)) 
                                          | ((2U & (IData)(vlSelfRef.tb_video_top__DOT__prom_hi)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.tb_video_top__DOT__prom_lo) 
                                                   >> 1U)))))]
                              : 0U);
        }
    }
    vlSelfRef.vcnt = __Vdly__vcnt;
    vlSelfRef.hcnt = __Vdly__hcnt;
    if (vlSelfRef.tb_video_top__DOT__u_video__DOT__cocktail) {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__sy 
            = (0x000000ffU & ((IData)(0xffU) - (IData)(vlSelfRef.vcnt)));
        vlSelfRef.tb_video_top__DOT__u_video__DOT__sx 
            = (0x000000ffU & ((IData)(0xffU) - (IData)(vlSelfRef.hcnt)));
    } else {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__sy 
            = (0x000000ffU & (IData)(vlSelfRef.vcnt));
        vlSelfRef.tb_video_top__DOT__u_video__DOT__sx 
            = (0x000000ffU & (IData)(vlSelfRef.hcnt));
    }
    if ((3U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_lsb 
            = vlSelfRef.tb_video_top__DOT__fgrom_lsb;
    }
    vlSelfRef.tb_video_top__DOT__fgrom_lsb = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem
        [vlSelfRef.tb_video_top__DOT__fgrom_addr];
    if ((3U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_msb 
            = vlSelfRef.tb_video_top__DOT__fgrom_msb;
    }
    vlSelfRef.tb_video_top__DOT__fgrom_msb = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem
        [vlSelfRef.tb_video_top__DOT__fgrom_addr];
    vlSelfRef.tb_video_top__DOT__u_video__DOT__active 
        = ((0x0100U > (IData)(vlSelfRef.hcnt)) & (0xd0U 
                                                  > (IData)(vlSelfRef.vcnt)));
    vlSelfRef.tb_video_top__DOT__prom_hi = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem
        [Vtb_video_top__ConstPool__TABLE_h043dfa72_0
        [((0x00000180U & (((IData)(vlSelfRef.game_phoenix)
                            ? (1U & ((IData)(vlSelfRef.videoreg) 
                                     >> 1U)) : ((IData)(vlSelfRef.videoreg) 
                                                >> 1U)) 
                          << 7U)) | ((((0U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_pen))
                                        ? ((0x0000001cU 
                                            & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_code) 
                                               >> 3U)) 
                                           | ((2U & 
                                               (((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_msb) 
                                                 >> 
                                                 (7U 
                                                  & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bx))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_lsb) 
                                                    >> 
                                                    (7U 
                                                     & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bx))))))
                                        : (0x00000020U 
                                           | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_code) 
                                                  >> 3U)) 
                                              | (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_pen)))) 
                                      << 1U) | (IData)(vlSelfRef.game_phoenix)))]];
    vlSelfRef.tb_video_top__DOT__prom_lo = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem
        [Vtb_video_top__ConstPool__TABLE_h043dfa72_0
        [((0x00000180U & (((IData)(vlSelfRef.game_phoenix)
                            ? (1U & ((IData)(vlSelfRef.videoreg) 
                                     >> 1U)) : ((IData)(vlSelfRef.videoreg) 
                                                >> 1U)) 
                          << 7U)) | ((((0U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_pen))
                                        ? ((0x0000001cU 
                                            & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_code) 
                                               >> 3U)) 
                                           | ((2U & 
                                               (((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_msb) 
                                                 >> 
                                                 (7U 
                                                  & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bx))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_lsb) 
                                                    >> 
                                                    (7U 
                                                     & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bx))))))
                                        : (0x00000020U 
                                           | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_code) 
                                                  >> 3U)) 
                                              | (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_pen)))) 
                                      << 1U) | (IData)(vlSelfRef.game_phoenix)))]];
    if ((3U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_code 
            = vlSelfRef.tb_video_top__DOT__vram_b_data;
    }
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    }
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    }
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    }
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    }
    vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_pen 
        = ((2U & (((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_msb) 
                   >> (7U & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx))) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_lsb) 
                                   >> (7U & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx)))));
    vlSelfRef.tb_video_top__DOT__u_video__DOT__bx = 
        (0x000000ffU & ((IData)(vlSelfRef.scroll) + (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx)));
    if (((IData)(vlSelfRef.dl_wr) & (0U == vlSelfRef.dl_addr))) {
        __Vdly__tb_video_top__DOT__u_mem__DOT__prog_sum 
            = vlSelfRef.dl_data;
    } else if (((IData)(vlSelfRef.dl_wr) & (0x00004000U 
                                            > vlSelfRef.dl_addr))) {
        __Vdly__tb_video_top__DOT__u_mem__DOT__prog_sum 
            = (vlSelfRef.tb_video_top__DOT__u_mem__DOT__prog_sum 
               + (IData)(vlSelfRef.dl_data));
    }
    if (vlSelfRef.dl_done) {
        vlSelfRef.game_phoenix = (0x0015fa42U == vlSelfRef.tb_video_top__DOT__u_mem__DOT__prog_sum);
        vlSelfRef.game_known = ((0x0015fa42U == vlSelfRef.tb_video_top__DOT__u_mem__DOT__prog_sum) 
                                | (0x0016d34bU == vlSelfRef.tb_video_top__DOT__u_mem__DOT__prog_sum));
    }
    if ((5U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_msb 
            = vlSelfRef.tb_video_top__DOT__bgrom_msb;
        vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_lsb 
            = vlSelfRef.tb_video_top__DOT__bgrom_lsb;
    }
    if ((1U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_code 
            = vlSelfRef.tb_video_top__DOT__vram_b_data;
    }
    vlSelfRef.tb_video_top__DOT__u_mem__DOT__prog_sum 
        = __Vdly__tb_video_top__DOT__u_mem__DOT__prog_sum;
    vlSelfRef.tb_video_top__DOT__u_video__DOT__phase 
        = __Vdly__tb_video_top__DOT__u_video__DOT__phase;
    vlSelfRef.tb_video_top__DOT__bgrom_msb = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem
        [vlSelfRef.tb_video_top__DOT__bgrom_addr];
    vlSelfRef.tb_video_top__DOT__bgrom_lsb = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem
        [vlSelfRef.tb_video_top__DOT__bgrom_addr];
    vlSelfRef.tb_video_top__DOT__vram_b_data = vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem
        [vlSelfRef.tb_video_top__DOT__vram_b_addr];
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    }
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    }
    if (__VdlySet__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0) {
        vlSelfRef.tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem[__VdlyDim0__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0] 
            = __VdlyVal__tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    }
    vlSelfRef.tb_video_top__DOT__vram_b_addr = (0x00001000U 
                                                & ((IData)(vlSelfRef.videoreg) 
                                                   << 0x0000000cU));
    if ((0U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__vram_b_addr = 
            ((0x00001000U & ((IData)(vlSelfRef.videoreg) 
                             << 0x0000000cU)) | ((0x000003e0U 
                                                  & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy) 
                                                     << 2U)) 
                                                 | (0x0000001fU 
                                                    & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sx) 
                                                       >> 3U))));
    } else if ((2U == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))) {
        vlSelfRef.tb_video_top__DOT__vram_b_addr = 
            (0x00000800U | ((0x00001000U & ((IData)(vlSelfRef.videoreg) 
                                            << 0x0000000cU)) 
                            | ((0x000003e0U & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy) 
                                               << 2U)) 
                               | (0x0000001fU & ((IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bx) 
                                                 >> 3U)))));
    }
    vlSelfRef.tb_video_top__DOT__bgrom_addr = ((((3U 
                                                  == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))
                                                  ? (IData)(vlSelfRef.tb_video_top__DOT__vram_b_data)
                                                  : (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__bg_code)) 
                                                << 3U) 
                                               | (7U 
                                                  & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy)));
    vlSelfRef.tb_video_top__DOT__fgrom_addr = ((((1U 
                                                  == (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__phase))
                                                  ? (IData)(vlSelfRef.tb_video_top__DOT__vram_b_data)
                                                  : (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__fg_code)) 
                                                << 3U) 
                                               | (7U 
                                                  & (IData)(vlSelfRef.tb_video_top__DOT__u_video__DOT__sy)));
}

void Vtb_video_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_video_top___024root___eval_phase__act(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_phase__act\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_video_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_video_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_video_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_video_top___024root___eval_phase__nba(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_phase__nba\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_video_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_video_top___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtb_video_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_video_top___024root___eval(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_video_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("sim/tb_video_top.sv", 4, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_video_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_video_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_video_top.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_video_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("sim/tb_video_top.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_video_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_video_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_video_top___024root___eval_debug_assertions(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_debug_assertions\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_addr & 0xfffe0000U)))) {
        Verilated::overWidthError("dl_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_wr & 0xfeU)))) {
        Verilated::overWidthError("dl_wr");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_done & 0xfeU)))) {
        Verilated::overWidthError("dl_done");
    }
    if (VL_UNLIKELY(((vlSelfRef.vr_addr & 0xe000U)))) {
        Verilated::overWidthError("vr_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.vr_we & 0xfeU)))) {
        Verilated::overWidthError("vr_we");
    }
    if (VL_UNLIKELY(((vlSelfRef.cab_cocktail & 0xfeU)))) {
        Verilated::overWidthError("cab_cocktail");
    }
}
#endif  // VL_DEBUG
