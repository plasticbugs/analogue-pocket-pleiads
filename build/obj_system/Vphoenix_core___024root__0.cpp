// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_core.h for the primary calling header

#include "Vphoenix_core__pch.h"

void Vphoenix_core___024root___eval_triggers_vec__ico(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_triggers_vec__ico\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.cab_cocktail) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cab_cocktail__0)) 
                                                       << 0x00000012U) 
                                                      | ((((IData)(vlSelfRef.dsw) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dsw__0)) 
                                                          << 0x00000011U) 
                                                         | (((IData)(vlSelfRef.p2_fire2) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p2_fire2__0)) 
                                                            << 0x00000010U))) 
                                                     | ((((((((IData)(vlSelfRef.p2_fire) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p2_fire__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.p2_right) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p2_right__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.p2_left) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p2_left__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.p1_fire2) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p1_fire2__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.p1_fire) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p1_fire__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.p1_right) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p1_right__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.p1_left) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__p1_left__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.start2) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__start2__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.start1) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__start1__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.coin1) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__coin1__0)) 
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
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_addr__0 = vlSelfRef.dl_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_data__0 = vlSelfRef.dl_data;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_wr__0 = vlSelfRef.dl_wr;
    vlSelfRef.__Vtrigprevexpr___TOP__dl_done__0 = vlSelfRef.dl_done;
    vlSelfRef.__Vtrigprevexpr___TOP__coin1__0 = vlSelfRef.coin1;
    vlSelfRef.__Vtrigprevexpr___TOP__start1__0 = vlSelfRef.start1;
    vlSelfRef.__Vtrigprevexpr___TOP__start2__0 = vlSelfRef.start2;
    vlSelfRef.__Vtrigprevexpr___TOP__p1_left__0 = vlSelfRef.p1_left;
    vlSelfRef.__Vtrigprevexpr___TOP__p1_right__0 = vlSelfRef.p1_right;
    vlSelfRef.__Vtrigprevexpr___TOP__p1_fire__0 = vlSelfRef.p1_fire;
    vlSelfRef.__Vtrigprevexpr___TOP__p1_fire2__0 = vlSelfRef.p1_fire2;
    vlSelfRef.__Vtrigprevexpr___TOP__p2_left__0 = vlSelfRef.p2_left;
    vlSelfRef.__Vtrigprevexpr___TOP__p2_right__0 = vlSelfRef.p2_right;
    vlSelfRef.__Vtrigprevexpr___TOP__p2_fire__0 = vlSelfRef.p2_fire;
    vlSelfRef.__Vtrigprevexpr___TOP__p2_fire2__0 = vlSelfRef.p2_fire2;
    vlSelfRef.__Vtrigprevexpr___TOP__dsw__0 = vlSelfRef.dsw;
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
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000001000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000002000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000004000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000008000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000010000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000020000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000040000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vphoenix_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___trigger_anySet__ico\n"); );
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

void Vphoenix_core___024root___eval_ico(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_ico\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000014ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog 
                = ((IData)(vlSelfRef.dl_wr) & (0x00004000U 
                                               > vlSelfRef.dl_addr));
            vlSelfRef.phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr 
                = (0x00003fffU & ((IData)(vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog)
                                   ? vlSelfRef.dl_addr
                                   : (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr)));
        }
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__0
            CData/*7:0*/ __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx;
            __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx = 0;
            CData/*7:0*/ __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy;
            __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy = 0;
            vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail 
                = ((IData)(vlSelfRef.cab_cocktail) 
                   & (IData)(vlSelfRef.phoenix_core__DOT__videoreg));
            if (vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail) {
                __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy 
                    = (0x000000ffU & ((IData)(0xffU) 
                                      - (IData)(vlSelfRef.dbg_vcnt)));
                __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx 
                    = (0x000000ffU & ((IData)(0xffU) 
                                      - (IData)(vlSelfRef.dbg_hcnt)));
            } else {
                __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy 
                    = (0x000000ffU & (IData)(vlSelfRef.dbg_vcnt));
                __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx 
                    = (0x000000ffU & (IData)(vlSelfRef.dbg_hcnt));
            }
            vlSelfRef.phoenix_core__DOT__bgrom_addr 
                = ((((3U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))
                      ? (IData)(vlSelfRef.phoenix_core__DOT__vram_b_data)
                      : (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_code)) 
                    << 3U) | (7U & __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy));
            vlSelfRef.phoenix_core__DOT__fgrom_addr 
                = ((((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))
                      ? (IData)(vlSelfRef.phoenix_core__DOT__vram_b_data)
                      : (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_code)) 
                    << 3U) | (7U & __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy));
            vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_pen 
                = ((2U & (((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_msb) 
                           >> (7U & __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx)) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_lsb) 
                                           >> (7U & __Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx))));
            vlSelfRef.phoenix_core__DOT__u_video__DOT__bx 
                = (0x000000ffU & ((IData)(vlSelfRef.phoenix_core__DOT__scroll) 
                                  + (IData)(__Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx)));
            vlSelfRef.phoenix_core__DOT__vram_b_addr 
                = (0x00001000U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                  << 0x0000000cU));
            if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
                vlSelfRef.phoenix_core__DOT__vram_b_addr 
                    = ((0x00001000U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                       << 0x0000000cU)) 
                       | ((0x000003e0U & ((IData)(__Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy) 
                                          << 2U)) | 
                          (0x0000001fU & (__Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sx 
                                          >> 3U))));
            } else if ((2U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
                vlSelfRef.phoenix_core__DOT__vram_b_addr 
                    = (0x00000800U | ((0x00001000U 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                          << 0x0000000cU)) 
                                      | ((0x000003e0U 
                                          & ((IData)(__Vinline_0__ico_sequent__TOP__0_phoenix_core__DOT__u_video__DOT__sy) 
                                             << 2U)) 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bx) 
                                               >> 3U)))));
            }
        }
    }
    if ((0x000000000007ffc0ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.phoenix_core__DOT__cpu_din = 
                (0x000000ffU & ((0x00004000U & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))
                                 ? ((IData)(vlSelfRef.phoenix_core__DOT__sel_vram)
                                     ? (IData)(vlSelfRef.phoenix_core__DOT__vram_dout)
                                     : ((IData)((0x7000U 
                                                 == 
                                                 (0x7800U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))))
                                         ? ((0x000000f0U 
                                             & ((~ 
                                                 ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail)
                                                   ? 
                                                  ((((IData)(vlSelfRef.p2_fire2) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.p2_left) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.p2_right) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.p2_fire)))
                                                   : 
                                                  ((((IData)(vlSelfRef.p1_fire2) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.p1_left) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.p1_right) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.p1_fire))))) 
                                                << 4U)) 
                                            | ((8U 
                                                & (((~ 
                                                     ((0x0cU 
                                                       == 
                                                       (0xfcU 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__videoreg))) 
                                                      | (0x30U 
                                                         == 
                                                         (0xfcU 
                                                          & (IData)(vlSelfRef.phoenix_core__DOT__videoreg))))) 
                                                    | (IData)(vlSelfRef.game_phoenix)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (~ 
                                                     (((IData)(vlSelfRef.start2) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.start1) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.coin1)))))))
                                         : ((((0xd0U 
                                               > (IData)(vlSelfRef.dbg_vcnt)) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.dsw)) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             (0x0000000fU 
                                                              == 
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.phoenix_core__DOT__cpu_addr) 
                                                                  >> 0x0000000bU))))))))))
                                 : (IData)(vlSelfRef.phoenix_core__DOT__prog_data)));
            vlSelfRef.dbg_data = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_we)
                                   ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_dout)
                                   : (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vphoenix_core___024root___eval_phase__ico(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_phase__ico\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vphoenix_core___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vphoenix_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vphoenix_core___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vphoenix_core___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vphoenix_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*7:0*/, 512> Vphoenix_core__ConstPool__TABLE_h043dfa72_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vphoenix_core__ConstPool__TABLE_hf931b36c_0;

void Vphoenix_core___024root___nba_sequent__TOP__0(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___nba_sequent__TOP__0\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ phoenix_core__DOT__u_video__DOT__sx;
    phoenix_core__DOT__u_video__DOT__sx = 0;
    CData/*7:0*/ phoenix_core__DOT__u_video__DOT__sy;
    phoenix_core__DOT__u_video__DOT__sy = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__v = 0;
    SData/*15:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v = 0;
    CData/*0:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__cin;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__cin = 0;
    SData/*8:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__73__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__73__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__v = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__v;
    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__v = 0;
    CData/*3:0*/ __Vdly__phoenix_core__DOT__div;
    __Vdly__phoenix_core__DOT__div = 0;
    IData/*31:0*/ __Vdly__phoenix_core__DOT__u_mem__DOT__prog_sum;
    __Vdly__phoenix_core__DOT__u_mem__DOT__prog_sum = 0;
    CData/*2:0*/ __Vdly__phoenix_core__DOT__u_video__DOT__phase;
    __Vdly__phoenix_core__DOT__u_video__DOT__phase = 0;
    SData/*8:0*/ __Vdly__dbg_hcnt;
    __Vdly__dbg_hcnt = 0;
    CData/*7:0*/ __Vdly__dbg_vcnt;
    __Vdly__dbg_vcnt = 0;
    CData/*1:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__state;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 0;
    SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__pc;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc = 0;
    SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__sp;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp = 0;
    CData/*3:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__ra;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__rc;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__rh;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__rl;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl = 0;
    SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__wz;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz = 0;
    SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__ir;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__ir = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__im;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__im = 0;
    CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__fl;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0;
    __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0;
    __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 = 0;
    // Body
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 = 0U;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 0U;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 0U;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 0U;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 0U;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 0U;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 0U;
    __Vdly__phoenix_core__DOT__div = vlSelfRef.phoenix_core__DOT__div;
    __Vdly__phoenix_core__DOT__u_mem__DOT__prog_sum 
        = vlSelfRef.phoenix_core__DOT__u_mem__DOT__prog_sum;
    __Vdly__phoenix_core__DOT__u_video__DOT__phase 
        = vlSelfRef.phoenix_core__DOT__u_video__DOT__phase;
    __Vdly__dbg_hcnt = vlSelfRef.dbg_hcnt;
    __Vdly__dbg_vcnt = vlSelfRef.dbg_vcnt;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__state;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__im = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__im;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__ir = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh;
    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl;
    __VdlySet__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 0U;
    if (((IData)(vlSelfRef.dl_wr) & ((0x00005800U <= vlSelfRef.dl_addr) 
                                     & (0x00006000U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00005000U <= vlSelfRef.dl_addr) 
                                     & (0x00005800U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00004800U <= vlSelfRef.dl_addr) 
                                     & (0x00005000U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00004000U <= vlSelfRef.dl_addr) 
                                     & (0x00004800U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 
            = (0x000007ffU & vlSelfRef.dl_addr);
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00006100U <= vlSelfRef.dl_addr) 
                                     & (0x00006200U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.dl_addr);
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.dl_wr) & ((0x00006000U <= vlSelfRef.dl_addr) 
                                     & (0x00006100U 
                                        > vlSelfRef.dl_addr)))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.dl_addr);
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.phoenix_core__DOT__wr_pulse) 
         & (IData)(vlSelfRef.phoenix_core__DOT__sel_vram))) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 
            = vlSelfRef.phoenix_core__DOT__cpu_dout;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 
            = vlSelfRef.phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr;
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0 = 1U;
    }
    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__div))) {
        vlSelfRef.phoenix_core__DOT__cpu_fetch_q = 
            (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__state));
    }
    vlSelfRef.phoenix_core__DOT__prog_data = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem
        [vlSelfRef.phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr];
    if (vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog) {
        __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 
            = vlSelfRef.dl_data;
        __VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 
            = vlSelfRef.phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr;
        __VdlySet__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0 = 1U;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__phoenix_core__DOT__div = 0U;
        __Vdly__phoenix_core__DOT__u_video__DOT__phase = 0U;
        __Vdly__dbg_hcnt = 0U;
        __Vdly__dbg_vcnt = 0xd0U;
        vlSelfRef.de = 0U;
        vlSelfRef.hsync = 0U;
        vlSelfRef.hblank = 1U;
        vlSelfRef.dbg_hcnt = __Vdly__dbg_hcnt;
        vlSelfRef.vsync = 0U;
        vlSelfRef.vblank = 1U;
    } else {
        __Vdly__phoenix_core__DOT__div = (0x0000000fU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.phoenix_core__DOT__div)));
        __Vdly__phoenix_core__DOT__u_video__DOT__phase 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase)));
        if ((7U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
            if ((0x015fU == (IData)(vlSelfRef.dbg_hcnt))) {
                __Vdly__dbg_vcnt = ((0xffU == (IData)(vlSelfRef.dbg_vcnt))
                                     ? 0U : (0x000000ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.dbg_vcnt))));
                __Vdly__dbg_hcnt = 0U;
            } else {
                __Vdly__dbg_hcnt = (0x000001ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.dbg_hcnt)));
            }
            vlSelfRef.de = vlSelfRef.phoenix_core__DOT__u_video__DOT__active;
            vlSelfRef.hsync = ((0x0110U <= (IData)(vlSelfRef.dbg_hcnt)) 
                               & (0x0130U > (IData)(vlSelfRef.dbg_hcnt)));
            vlSelfRef.hblank = (0x0100U <= (IData)(vlSelfRef.dbg_hcnt));
            vlSelfRef.vsync = ((0xd8U <= (IData)(vlSelfRef.dbg_vcnt)) 
                               & (0xdcU > (IData)(vlSelfRef.dbg_vcnt)));
            vlSelfRef.vblank = (0xd0U <= (IData)(vlSelfRef.dbg_vcnt));
        }
        vlSelfRef.dbg_hcnt = __Vdly__dbg_hcnt;
    }
    vlSelfRef.dbg_vcnt = __Vdly__dbg_vcnt;
    vlSelfRef.dbg_fetch = vlSelfRef.phoenix_core__DOT__cpu_fetch_q;
    if ((3U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_lsb 
            = vlSelfRef.phoenix_core__DOT__fgrom_lsb;
    }
    vlSelfRef.phoenix_core__DOT__fgrom_lsb = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem
        [vlSelfRef.phoenix_core__DOT__fgrom_addr];
    if ((3U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_msb 
            = vlSelfRef.phoenix_core__DOT__fgrom_msb;
    }
    vlSelfRef.phoenix_core__DOT__fgrom_msb = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem
        [vlSelfRef.phoenix_core__DOT__fgrom_addr];
    if (vlSelfRef.reset) {
        vlSelfRef.snd_c = 0U;
        vlSelfRef.snd_a = 0U;
        vlSelfRef.snd_b = 0U;
        vlSelfRef.phoenix_core__DOT__scroll = 0U;
        vlSelfRef.rgb = 0U;
    } else {
        if (vlSelfRef.phoenix_core__DOT__wr_pulse) {
            if (vlSelfRef.phoenix_core__DOT__sel_vreg) {
                vlSelfRef.snd_c = vlSelfRef.phoenix_core__DOT__cpu_dout;
            }
            if (((~ ((IData)(vlSelfRef.phoenix_core__DOT__cpu_addr) 
                     >> 0x0000000bU)) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) {
                vlSelfRef.snd_a = vlSelfRef.phoenix_core__DOT__cpu_dout;
            }
            if ((((IData)(vlSelfRef.phoenix_core__DOT__cpu_addr) 
                  >> 0x0000000bU) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) {
                vlSelfRef.snd_b = vlSelfRef.phoenix_core__DOT__cpu_dout;
            }
            if ((IData)(((0x1800U == (0x1800U & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))) 
                         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)))) {
                vlSelfRef.phoenix_core__DOT__scroll 
                    = vlSelfRef.phoenix_core__DOT__cpu_dout;
            }
        }
        if ((7U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
            vlSelfRef.rgb = ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__active)
                              ? vlSelfRef.phoenix_core__DOT__u_video__DOT__PAL_LUT
                             [((((4U & ((IData)(vlSelfRef.phoenix_core__DOT__prom_hi) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__prom_lo) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.phoenix_core__DOT__prom_hi) 
                                                         >> 2U)))) 
                                << 3U) | ((4U & (IData)(vlSelfRef.phoenix_core__DOT__prom_lo)) 
                                          | ((2U & (IData)(vlSelfRef.phoenix_core__DOT__prom_hi)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__prom_lo) 
                                                   >> 1U)))))]
                              : 0U);
        }
    }
    vlSelfRef.phoenix_core__DOT__u_video__DOT__active 
        = ((0x0100U > (IData)(vlSelfRef.dbg_hcnt)) 
           & (0xd0U > (IData)(vlSelfRef.dbg_vcnt)));
    vlSelfRef.phoenix_core__DOT__prom_hi = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem
        [Vphoenix_core__ConstPool__TABLE_h043dfa72_0
        [((0x00000180U & (((IData)(vlSelfRef.game_phoenix)
                            ? (1U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                     >> 1U)) : ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                                >> 1U)) 
                          << 7U)) | ((((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_pen))
                                        ? ((0x0000001cU 
                                            & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_code) 
                                               >> 3U)) 
                                           | ((2U & 
                                               (((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_msb) 
                                                 >> 
                                                 (7U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bx))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_lsb) 
                                                    >> 
                                                    (7U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bx))))))
                                        : (0x00000020U 
                                           | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_code) 
                                                  >> 3U)) 
                                              | (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_pen)))) 
                                      << 1U) | (IData)(vlSelfRef.game_phoenix)))]];
    vlSelfRef.phoenix_core__DOT__prom_lo = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem
        [Vphoenix_core__ConstPool__TABLE_h043dfa72_0
        [((0x00000180U & (((IData)(vlSelfRef.game_phoenix)
                            ? (1U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                     >> 1U)) : ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                                >> 1U)) 
                          << 7U)) | ((((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_pen))
                                        ? ((0x0000001cU 
                                            & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_code) 
                                               >> 3U)) 
                                           | ((2U & 
                                               (((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_msb) 
                                                 >> 
                                                 (7U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bx))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_lsb) 
                                                    >> 
                                                    (7U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bx))))))
                                        : (0x00000020U 
                                           | ((0x0000001cU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_code) 
                                                  >> 3U)) 
                                              | (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_pen)))) 
                                      << 1U) | (IData)(vlSelfRef.game_phoenix)))]];
    if (vlSelfRef.reset) {
        vlSelfRef.phoenix_core__DOT__videoreg = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra = 0U;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc = 0U;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ = 0U;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__ir = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__im = 0U;
        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl = 2U;
        vlSelfRef.phoenix_core__DOT__cpu_addr = 0U;
        vlSelfRef.phoenix_core__DOT__cpu_dout = 0U;
        vlSelfRef.phoenix_core__DOT__cpu_mreq = 0U;
        vlSelfRef.phoenix_core__DOT__cpu_we = 0U;
    } else {
        if (vlSelfRef.phoenix_core__DOT__wr_pulse) {
            if (vlSelfRef.phoenix_core__DOT__sel_vreg) {
                vlSelfRef.phoenix_core__DOT__videoreg 
                    = vlSelfRef.phoenix_core__DOT__cpu_dout;
            }
        }
        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__div))) {
            if ((0U != (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft))) {
                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                    = (0x000000ffU & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft) 
                                      - (IData)(1U)));
            }
            vlSelfRef.phoenix_core__DOT__cpu_mreq = 0U;
            vlSelfRef.phoenix_core__DOT__cpu_we = 0U;
            if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__state))) {
                    if ((1U >= (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft))) {
                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 0U;
                    }
                } else {
                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep)));
                    if ((0x00000080U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((0x00000040U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    if (
                                                        (0U 
                                                         == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                                - (IData)(1U)));
                                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                                >> 8U));
                                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                    } else if (
                                                               (1U 
                                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                                - (IData)(2U)));
                                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                    } else {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                                - (IData)(2U)));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                            = 
                                                            (0x00000038U 
                                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                    }
                                                } else if (
                                                           (0U 
                                                            == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__cin 
                                                        = 
                                                        (1U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                            >> 3U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res = 0U;
                                                    if (
                                                        (4U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q 
                                                                    = 
                                                                    (0x000001ffU 
                                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                         - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v)) 
                                                                        - 
                                                                        ((3U 
                                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op)) 
                                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__cin))));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                                    = 
                                                                    (0x000000ffU 
                                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__v 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout = 0U;
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout 
                                                                    = 
                                                                    ((0x3fU 
                                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout)) 
                                                                     | (((2U 
                                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__v) 
                                                                             >> 6U)) 
                                                                         | (0U 
                                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__v))) 
                                                                        << 6U));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout 
                                                                    = 
                                                                    ((0xfbU 
                                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout)) 
                                                                     | (4U 
                                                                        & ((~ 
                                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__v)) 
                                                                           << 2U)));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__1__Vfuncout;
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f)) 
                                                                     | (1U 
                                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q) 
                                                                           >> 8U)));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                    = 
                                                                    ((0xefU 
                                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f)) 
                                                                     | (0x00000010U 
                                                                        & ((~ 
                                                                            ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res)) 
                                                                              ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v)) 
                                                                             >> 4U)) 
                                                                           << 4U)));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                    = 
                                                                    (2U 
                                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f));
                                                                if (
                                                                    (7U 
                                                                     == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc;
                                                                }
                                                            } else {
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                                    = 
                                                                    ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__v 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout = 0U;
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout 
                                                                    = 
                                                                    ((0x3fU 
                                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout)) 
                                                                     | (((2U 
                                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__v) 
                                                                             >> 6U)) 
                                                                         | (0U 
                                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__v))) 
                                                                        << 6U));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout 
                                                                    = 
                                                                    ((0xfbU 
                                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout)) 
                                                                     | (4U 
                                                                        & ((~ 
                                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__v)) 
                                                                           << 2U)));
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__2__Vfuncout;
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                                = 
                                                                ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                 ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__3__Vfuncout;
                                                        } else {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                                = 
                                                                ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__4__Vfuncout;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                                = 
                                                                (0x00000010U 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f));
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q 
                                                            = 
                                                            (0x000001ffU 
                                                             & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                 - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v)) 
                                                                - 
                                                                ((3U 
                                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op)) 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__cin))));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__5__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f)) 
                                                             | (1U 
                                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q) 
                                                                   >> 8U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f)) 
                                                             | (0x00000010U 
                                                                & ((~ 
                                                                    ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                       ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res)) 
                                                                      ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v)) 
                                                                     >> 4U)) 
                                                                   << 4U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = 
                                                            (2U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f));
                                                        if (
                                                            (7U 
                                                             == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc;
                                                        }
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q 
                                                            = 
                                                            (0x000001ffU 
                                                             & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                 + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v)) 
                                                                + 
                                                                ((1U 
                                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__op)) 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__cin))));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__6__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f)) 
                                                             | (1U 
                                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__q) 
                                                                   >> 8U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f)) 
                                                             | (0x00000010U 
                                                                & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__acc) 
                                                                    ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res)) 
                                                                   ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__v))));
                                                    }
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__Vfuncout 
                                                        = 
                                                        (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__res) 
                                                          << 8U) 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__f));
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__0__Vfuncout;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                            >> 8U));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk 
                                                    = 
                                                    (((0xc3U 
                                                       == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                                      | ((0xddU 
                                                          == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                             >> 5U)))) 
                                                     | ((0xfdU 
                                                         == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                                        & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                           >> 5U)));
                                                if (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk) {
                                                    if (
                                                        (0U 
                                                         == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(2U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    } else if (
                                                               (1U 
                                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                            = 
                                                            ((0xff00U 
                                                              & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                             | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    } else {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                            = 
                                                            (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                              << 8U) 
                                                             | (0x000000ffU 
                                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                    }
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                       [
                                                       (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                         << 3U) 
                                                        | (7U 
                                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                              >> 3U)))]) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                                - (IData)(2U)));
                                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                                    } else {
                                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                            = 
                                                            ((0x00ffU 
                                                              & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                             | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                                << 8U));
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                                - (IData)(1U)));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                                >> 8U));
                                                    }
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                            = 
                                                            ((0xff00U 
                                                              & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                             | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = 
                                                            (0x0000ffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    } else {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(8U) 
                                                                + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                    }
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                }
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                       [
                                                       (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                         << 3U) 
                                                        | (7U 
                                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                              >> 3U)))]) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                          << 8U) 
                                                         | (0x000000ffU 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(5U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(1U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                            >> 8U));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x00000038U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__cin 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 3U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res = 0U;
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q 
                                                                = 
                                                                (0x000001ffU 
                                                                 & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                                     - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v)) 
                                                                    - 
                                                                    ((3U 
                                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op)) 
                                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__cin))));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                                = 
                                                                (0x000000ffU 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__8__Vfuncout;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                                = 
                                                                ((0xfeU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f)) 
                                                                 | (1U 
                                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q) 
                                                                       >> 8U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                                = 
                                                                ((0xefU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f)) 
                                                                 | (0x00000010U 
                                                                    & ((~ 
                                                                        ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res)) 
                                                                          ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v)) 
                                                                         >> 4U)) 
                                                                       << 4U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                                = 
                                                                (2U 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f));
                                                            if (
                                                                (7U 
                                                                 == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc;
                                                            }
                                                        } else {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                                = 
                                                                ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__9__Vfuncout;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                             ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__10__Vfuncout;
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__11__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                            = 
                                                            (0x00000010U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f));
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                             - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v)) 
                                                            - 
                                                            ((3U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__12__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f)) 
                                                         | (0x00000010U 
                                                            & ((~ 
                                                                ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                                   ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res)) 
                                                                  ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v)) 
                                                                 >> 4U)) 
                                                               << 4U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = 
                                                        (2U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f));
                                                    if (
                                                        (7U 
                                                         == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc;
                                                    }
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                             + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v)) 
                                                            + 
                                                            ((1U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__13__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f)) 
                                                         | (0x00000010U 
                                                            & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__acc) 
                                                                ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res)) 
                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__v))));
                                                }
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__Vfuncout 
                                                    = 
                                                    (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__res) 
                                                      << 8U) 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__f));
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__7__Vfuncout;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                        >> 8U));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val) 
                                                        >> 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                            }
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0x00ffU 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                            << 8U));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(1U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                            >> 8U));
                                                }
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(8U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                }
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            if ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                     >> 4U)))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                            } else if (
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                            >> 4U)))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                            } else if (
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                            >> 4U)))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                    = 
                                                    (2U 
                                                     | (0xf7U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            }
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(5U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(1U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                            >> 8U));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x00000038U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__cin 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 3U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res = 0U;
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q 
                                                                = 
                                                                (0x000001ffU 
                                                                 & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                                     - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v)) 
                                                                    - 
                                                                    ((3U 
                                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op)) 
                                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__cin))));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                                = 
                                                                (0x000000ffU 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__15__Vfuncout;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                                = 
                                                                ((0xfeU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f)) 
                                                                 | (1U 
                                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q) 
                                                                       >> 8U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                                = 
                                                                ((0xefU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f)) 
                                                                 | (0x00000010U 
                                                                    & ((~ 
                                                                        ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res)) 
                                                                          ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v)) 
                                                                         >> 4U)) 
                                                                       << 4U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                                = 
                                                                (2U 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f));
                                                            if (
                                                                (7U 
                                                                 == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc;
                                                            }
                                                        } else {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                                = 
                                                                ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__16__Vfuncout;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                             ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__17__Vfuncout;
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__18__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                            = 
                                                            (0x00000010U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f));
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                             - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v)) 
                                                            - 
                                                            ((3U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__19__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f)) 
                                                         | (0x00000010U 
                                                            & ((~ 
                                                                ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                                   ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res)) 
                                                                  ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v)) 
                                                                 >> 4U)) 
                                                               << 4U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = 
                                                        (2U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f));
                                                    if (
                                                        (7U 
                                                         == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc;
                                                    }
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                             + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v)) 
                                                            + 
                                                            ((1U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__20__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f)) 
                                                         | (0x00000010U 
                                                            & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__acc) 
                                                                ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res)) 
                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__v))));
                                                }
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__Vfuncout 
                                                    = 
                                                    (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__res) 
                                                      << 8U) 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__f));
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__14__Vfuncout;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                        >> 8U));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de)));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0x00ffU 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                            << 8U));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(1U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                            >> 8U));
                                                }
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(8U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                }
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de));
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl) 
                                                      >> 8U));
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(5U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                        >> 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x00000038U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__cin 
                                                = (1U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res = 0U;
                                            if ((4U 
                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q 
                                                            = 
                                                            (0x000001ffU 
                                                             & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                                 - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v)) 
                                                                - 
                                                                ((3U 
                                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op)) 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__cin))));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__22__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f)) 
                                                             | (1U 
                                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q) 
                                                                   >> 8U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f)) 
                                                             | (0x00000010U 
                                                                & ((~ 
                                                                    ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                                       ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res)) 
                                                                      ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v)) 
                                                                     >> 4U)) 
                                                                   << 4U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                            = 
                                                            (2U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f));
                                                        if (
                                                            (7U 
                                                             == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc;
                                                        }
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__23__Vfuncout;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                         ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__24__Vfuncout;
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__25__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                        = 
                                                        (0x00000010U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f));
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q 
                                                    = 
                                                    (0x000001ffU 
                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                         - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v)) 
                                                        - 
                                                        ((3U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op)) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__cin))));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__26__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f)) 
                                                     | (1U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q) 
                                                           >> 8U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f)) 
                                                     | (0x00000010U 
                                                        & ((~ 
                                                            ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res)) 
                                                              ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v)) 
                                                             >> 4U)) 
                                                           << 4U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = 
                                                    (2U 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f));
                                                if (
                                                    (7U 
                                                     == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc;
                                                }
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q 
                                                    = 
                                                    (0x000001ffU 
                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                         + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v)) 
                                                        + 
                                                        ((1U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__op)) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__cin))));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__27__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f)) 
                                                     | (1U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__q) 
                                                           >> 8U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f)) 
                                                     | (0x00000010U 
                                                        & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__acc) 
                                                            ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res)) 
                                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__v))));
                                            }
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__Vfuncout 
                                                = (
                                                   ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__res) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__f));
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__21__Vfuncout;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(1U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val) 
                                                      >> 8U));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0x00ffU 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                        << 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                        >> 8U));
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0x00ffU 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                        << 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl;
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        if ((0U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               >> 4U)))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else if (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 4U)))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 4U)))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = (2U 
                                                   | (0xf7U 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                           [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))]) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                            = (0x000000ffU 
                                               & ((IData)(5U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((0x00000010U 
                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(1U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                            >> 8U));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x00000038U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__cin 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 3U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res = 0U;
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q 
                                                                = 
                                                                (0x000001ffU 
                                                                 & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                                     - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v)) 
                                                                    - 
                                                                    ((3U 
                                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op)) 
                                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__cin))));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                                = 
                                                                (0x000000ffU 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__29__Vfuncout;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                                = 
                                                                ((0xfeU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f)) 
                                                                 | (1U 
                                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q) 
                                                                       >> 8U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                                = 
                                                                ((0xefU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f)) 
                                                                 | (0x00000010U 
                                                                    & ((~ 
                                                                        ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res)) 
                                                                          ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v)) 
                                                                         >> 4U)) 
                                                                       << 4U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                                = 
                                                                (2U 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f));
                                                            if (
                                                                (7U 
                                                                 == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc;
                                                            }
                                                        } else {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                                = 
                                                                ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                                 | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__v 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout = 0U;
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout 
                                                                = 
                                                                ((0x3fU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout)) 
                                                                 | (((2U 
                                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__v) 
                                                                         >> 6U)) 
                                                                     | (0U 
                                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__v))) 
                                                                    << 6U));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout 
                                                                = 
                                                                ((0xfbU 
                                                                  & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout)) 
                                                                 | (4U 
                                                                    & ((~ 
                                                                        VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__v)) 
                                                                       << 2U)));
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__30__Vfuncout;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                             ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__31__Vfuncout;
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__32__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                            = 
                                                            (0x00000010U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f));
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                             - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v)) 
                                                            - 
                                                            ((3U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__33__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f)) 
                                                         | (0x00000010U 
                                                            & ((~ 
                                                                ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                                   ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res)) 
                                                                  ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v)) 
                                                                 >> 4U)) 
                                                               << 4U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = 
                                                        (2U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f));
                                                    if (
                                                        (7U 
                                                         == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc;
                                                    }
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                             + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v)) 
                                                            + 
                                                            ((1U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__34__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f)) 
                                                         | (0x00000010U 
                                                            & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__acc) 
                                                                ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res)) 
                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__v))));
                                                }
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__Vfuncout 
                                                    = 
                                                    (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__res) 
                                                      << 8U) 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__f));
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__28__Vfuncout;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                        >> 8U));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk 
                                                = (
                                                   ((0xc3U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                                    | ((0xddU 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                           >> 5U)))) 
                                                   | ((0xfdU 
                                                       == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                                      & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                         >> 5U)));
                                            if (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                          << 8U) 
                                                         | (0x000000ffU 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(2U)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0x00ffU 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                            << 8U));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                            - (IData)(1U)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                            >> 8U));
                                                }
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                         | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(8U) 
                                                            + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                }
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                                   [
                                                   (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                     << 3U) 
                                                    | (7U 
                                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                          >> 3U)))]) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(5U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                        >> 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x00000038U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__cin 
                                                = (1U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res = 0U;
                                            if ((4U 
                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q 
                                                            = 
                                                            (0x000001ffU 
                                                             & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                                 - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v)) 
                                                                - 
                                                                ((3U 
                                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op)) 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__cin))));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__36__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f)) 
                                                             | (1U 
                                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q) 
                                                                   >> 8U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f)) 
                                                             | (0x00000010U 
                                                                & ((~ 
                                                                    ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                                       ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res)) 
                                                                      ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v)) 
                                                                     >> 4U)) 
                                                                   << 4U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                            = 
                                                            (2U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f));
                                                        if (
                                                            (7U 
                                                             == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc;
                                                        }
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__37__Vfuncout;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                         ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__38__Vfuncout;
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__39__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                        = 
                                                        (0x00000010U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f));
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q 
                                                    = 
                                                    (0x000001ffU 
                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                         - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v)) 
                                                        - 
                                                        ((3U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op)) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__cin))));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__40__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f)) 
                                                     | (1U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q) 
                                                           >> 8U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f)) 
                                                     | (0x00000010U 
                                                        & ((~ 
                                                            ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res)) 
                                                              ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v)) 
                                                             >> 4U)) 
                                                           << 4U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = 
                                                    (2U 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f));
                                                if (
                                                    (7U 
                                                     == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc;
                                                }
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q 
                                                    = 
                                                    (0x000001ffU 
                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                         + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v)) 
                                                        + 
                                                        ((1U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__op)) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__cin))));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__41__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f)) 
                                                     | (1U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__q) 
                                                           >> 8U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f)) 
                                                     | (0x00000010U 
                                                        & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__acc) 
                                                            ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res)) 
                                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__v))));
                                            }
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__Vfuncout 
                                                = (
                                                   ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__res) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__f));
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__35__Vfuncout;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(1U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val) 
                                                      >> 8U));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0x00ffU 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                        << 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                        >> 8U));
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        if ((0U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               >> 4U)))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else if (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 4U)))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 4U)))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = (2U 
                                                   | (0xf7U 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                           [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))]) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                            = (0x000000ffU 
                                               & ((IData)(5U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                        >> 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x00000038U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__cin 
                                                = (1U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res = 0U;
                                            if ((4U 
                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q 
                                                            = 
                                                            (0x000001ffU 
                                                             & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                                 - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v)) 
                                                                - 
                                                                ((3U 
                                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op)) 
                                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__cin))));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__43__Vfuncout;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f)) 
                                                             | (1U 
                                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q) 
                                                                   >> 8U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f)) 
                                                             | (0x00000010U 
                                                                & ((~ 
                                                                    ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                                       ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res)) 
                                                                      ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v)) 
                                                                     >> 4U)) 
                                                                   << 4U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                            = 
                                                            (2U 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f));
                                                        if (
                                                            (7U 
                                                             == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc;
                                                        }
                                                    } else {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                            = 
                                                            ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                             | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__v 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout = 0U;
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout 
                                                            = 
                                                            ((0x3fU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout)) 
                                                             | (((2U 
                                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__v) 
                                                                     >> 6U)) 
                                                                 | (0U 
                                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__v))) 
                                                                << 6U));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout 
                                                            = 
                                                            ((0xfbU 
                                                              & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout)) 
                                                             | (4U 
                                                                & ((~ 
                                                                    VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__v)) 
                                                                   << 2U)));
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__44__Vfuncout;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                         ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__45__Vfuncout;
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__46__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                        = 
                                                        (0x00000010U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f));
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q 
                                                    = 
                                                    (0x000001ffU 
                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                         - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v)) 
                                                        - 
                                                        ((3U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op)) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__cin))));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__47__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f)) 
                                                     | (1U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q) 
                                                           >> 8U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f)) 
                                                     | (0x00000010U 
                                                        & ((~ 
                                                            ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res)) 
                                                              ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v)) 
                                                             >> 4U)) 
                                                           << 4U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = 
                                                    (2U 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f));
                                                if (
                                                    (7U 
                                                     == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc;
                                                }
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q 
                                                    = 
                                                    (0x000001ffU 
                                                     & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                         + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v)) 
                                                        + 
                                                        ((1U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__op)) 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__cin))));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__48__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f)) 
                                                     | (1U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__q) 
                                                           >> 8U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f)) 
                                                     | (0x00000010U 
                                                        & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__acc) 
                                                            ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res)) 
                                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__v))));
                                            }
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__Vfuncout 
                                                = (
                                                   ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__res) 
                                                    << 8U) 
                                                   | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__f));
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__42__Vfuncout;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0x00ffU 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                        << 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret) 
                                                        >> 8U));
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0x00ffU 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                        << 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                        >> 8U));
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                     | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            }
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(1U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                        >> 8U));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                        - (IData)(2U)));
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc = 0x0040U;
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                               [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                       >> 3U)))]) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                           [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))]) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                            = (0x000000ffU 
                                               & ((IData)(5U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(1U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc) 
                                                      >> 8U));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x00000038U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__cin 
                                            = (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op 
                                            = (7U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 3U));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res = 0U;
                                        if ((4U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                            if ((2U 
                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q 
                                                        = 
                                                        (0x000001ffU 
                                                         & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                             - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v)) 
                                                            - 
                                                            ((3U 
                                                              == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op)) 
                                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__cin))));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__50__Vfuncout;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f)) 
                                                         | (1U 
                                                            & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q) 
                                                               >> 8U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f)) 
                                                         | (0x00000010U 
                                                            & ((~ 
                                                                ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                                   ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res)) 
                                                                  ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v)) 
                                                                 >> 4U)) 
                                                               << 4U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                        = 
                                                        (2U 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f));
                                                    if (
                                                        (7U 
                                                         == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc;
                                                    }
                                                } else {
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                        = 
                                                        ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                         | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__v 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout = 0U;
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout 
                                                        = 
                                                        ((0x3fU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout)) 
                                                         | (((2U 
                                                              & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__v) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__v))) 
                                                            << 6U));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout 
                                                        = 
                                                        ((0xfbU 
                                                          & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout)) 
                                                         | (4U 
                                                            & ((~ 
                                                                VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__v)) 
                                                               << 2U)));
                                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__51__Vfuncout;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                    = 
                                                    ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                     ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__52__Vfuncout;
                                            } else {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                    = 
                                                    ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                     & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__v 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout = 0U;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout 
                                                    = 
                                                    ((0x3fU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout)) 
                                                     | (((2U 
                                                          & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__v) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__v))) 
                                                        << 6U));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout 
                                                    = 
                                                    ((0xfbU 
                                                      & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout)) 
                                                     | (4U 
                                                        & ((~ 
                                                            VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__v)) 
                                                           << 2U)));
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__53__Vfuncout;
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                    = 
                                                    (0x00000010U 
                                                     | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f));
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q 
                                                = (0x000001ffU 
                                                   & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                       - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v)) 
                                                      - 
                                                      ((3U 
                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op)) 
                                                       & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__cin))));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                = (0x000000ffU 
                                                   & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__v 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout 
                                                = (
                                                   (0x3fU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout)) 
                                                   | (((2U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__v) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__v))) 
                                                      << 6U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout 
                                                = (
                                                   (0xfbU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout)) 
                                                   | (4U 
                                                      & ((~ 
                                                          VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__v)) 
                                                         << 2U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__54__Vfuncout;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f)) 
                                                   | (1U 
                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q) 
                                                         >> 8U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = (
                                                   (0xefU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f)) 
                                                   | (0x00000010U 
                                                      & ((~ 
                                                          ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                             ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res)) 
                                                            ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v)) 
                                                           >> 4U)) 
                                                         << 4U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = (2U 
                                                   | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f));
                                            if ((7U 
                                                 == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op))) {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc;
                                            }
                                        } else {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q 
                                                = (0x000001ffU 
                                                   & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                       + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v)) 
                                                      + 
                                                      ((1U 
                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__op)) 
                                                       & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__cin))));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res 
                                                = (0x000000ffU 
                                                   & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__v 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout 
                                                = (
                                                   (0x3fU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout)) 
                                                   | (((2U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__v) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__v))) 
                                                      << 6U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout 
                                                = (
                                                   (0xfbU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout)) 
                                                   | (4U 
                                                      & ((~ 
                                                          VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__v)) 
                                                         << 2U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__55__Vfuncout;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f)) 
                                                   | (1U 
                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__q) 
                                                         >> 8U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f 
                                                = (
                                                   (0xefU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f)) 
                                                   | (0x00000010U 
                                                      & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__acc) 
                                                          ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res)) 
                                                         ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__v))));
                                        }
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__Vfuncout 
                                            = (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__res) 
                                                << 8U) 
                                               | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__f));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__49__Vfuncout;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                  - (IData)(1U)));
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val) 
                                                  >> 8U));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                  - (IData)(2U)));
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                  - (IData)(2U)));
                                    }
                                } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                           [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))]) {
                                    if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                  - (IData)(2U)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                  - (IData)(2U)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(2U)));
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp));
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                      << 8U));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp) 
                                                      - (IData)(1U)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret) 
                                                      >> 8U));
                                        }
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(8U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        }
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk 
                                        = (((0xc3U 
                                             == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                            | ((0xddU 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                   >> 5U)))) 
                                           | ((0xfdU 
                                               == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)) 
                                              & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                 >> 5U)));
                                    if (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                                = (0x000000ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                           [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                              << 3U) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))]) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                            = (0x000000ffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                           | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = (0x0000ffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                    if ((0U == (3U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                    } else if ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = (2U | 
                                               (0xf7U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if (Vphoenix_core__ConstPool__TABLE_hf931b36c_0
                                       [(((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                          << 3U) | 
                                         (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 3U)))]) {
                                if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                                        = (0x000000ffU 
                                           & ((IData)(5U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft)));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                           | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = (0x0000ffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else if ((6U == (7U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                            if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__cin 
                                    = (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v 
                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op 
                                    = (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                             >> 3U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res = 0U;
                                if ((4U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                    if ((2U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                        if ((1U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q 
                                                = (0x000001ffU 
                                                   & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                                       - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v)) 
                                                      - 
                                                      ((3U 
                                                        == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op)) 
                                                       & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__cin))));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                                = (0x000000ffU 
                                                   & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__v 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout 
                                                = (
                                                   (0x3fU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout)) 
                                                   | (((2U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__v) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__v))) 
                                                      << 6U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout 
                                                = (
                                                   (0xfbU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout)) 
                                                   | (4U 
                                                      & ((~ 
                                                          VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__v)) 
                                                         << 2U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__57__Vfuncout;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f)) 
                                                   | (1U 
                                                      & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q) 
                                                         >> 8U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                                = (
                                                   (0xefU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f)) 
                                                   | (0x00000010U 
                                                      & ((~ 
                                                          ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                                             ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res)) 
                                                            ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v)) 
                                                           >> 4U)) 
                                                         << 4U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                                = (2U 
                                                   | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f));
                                            if ((7U 
                                                 == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc;
                                            }
                                        } else {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                                = ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                                   | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__v 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout = 0U;
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout 
                                                = (
                                                   (0x3fU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout)) 
                                                   | (((2U 
                                                        & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__v) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__v))) 
                                                      << 6U));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout 
                                                = (
                                                   (0xfbU 
                                                    & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout)) 
                                                   | (4U 
                                                      & ((~ 
                                                          VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__v)) 
                                                         << 2U)));
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__58__Vfuncout;
                                        }
                                    } else if ((1U 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                            = ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                               ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__v 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout 
                                            = ((0x3fU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout)) 
                                               | (((2U 
                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__v) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__v))) 
                                                  << 6U));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout 
                                            = ((0xfbU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout)) 
                                               | (4U 
                                                  & ((~ 
                                                      VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__v)) 
                                                     << 2U)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__59__Vfuncout;
                                    } else {
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                            = ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                               & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__v 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout 
                                            = ((0x3fU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout)) 
                                               | (((2U 
                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__v) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__v))) 
                                                  << 6U));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout 
                                            = ((0xfbU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout)) 
                                               | (4U 
                                                  & ((~ 
                                                      VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__v)) 
                                                     << 2U)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__60__Vfuncout;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                            = (0x00000010U 
                                               | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f));
                                    }
                                } else if ((2U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q 
                                        = (0x000001ffU 
                                           & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                               - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v)) 
                                              - ((3U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op)) 
                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__cin))));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                        = (0x000000ffU 
                                           & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__v 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__v)) 
                                               << 2U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__61__Vfuncout;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = ((0xfeU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f)) 
                                           | (1U & 
                                              ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q) 
                                               >> 8U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = ((0xefU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f)) 
                                           | (0x00000010U 
                                              & ((~ 
                                                  ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                                     ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res)) 
                                                    ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v)) 
                                                   >> 4U)) 
                                                 << 4U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = (2U | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f));
                                    if ((7U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op))) {
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc;
                                    }
                                } else {
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q 
                                        = (0x000001ffU 
                                           & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                               + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v)) 
                                              + ((1U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__op)) 
                                                 & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__cin))));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res 
                                        = (0x000000ffU 
                                           & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__v 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__v)) 
                                               << 2U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__62__Vfuncout;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = ((0xfeU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f)) 
                                           | (1U & 
                                              ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__q) 
                                               >> 8U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f 
                                        = ((0xefU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f)) 
                                           | (0x00000010U 
                                              & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__acc) 
                                                  ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res)) 
                                                 ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__v))));
                                }
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__Vfuncout 
                                    = (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__res) 
                                        << 8U) | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__f));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__56__Vfuncout;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                    = (0x000000ffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                            }
                        } else {
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__cin 
                                = (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl));
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v 
                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc 
                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op 
                                = (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                         >> 3U));
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q = 0U;
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f = 0U;
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res = 0U;
                            if ((4U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                if ((2U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                    if ((1U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q 
                                            = (0x000001ffU 
                                               & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                                   - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v)) 
                                                  - 
                                                  ((3U 
                                                    == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op)) 
                                                   & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__cin))));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                            = (0x000000ffU 
                                               & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__v 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout 
                                            = ((0x3fU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout)) 
                                               | (((2U 
                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__v) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__v))) 
                                                  << 6U));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout 
                                            = ((0xfbU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout)) 
                                               | (4U 
                                                  & ((~ 
                                                      VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__v)) 
                                                     << 2U)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__64__Vfuncout;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                            = ((0xfeU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f)) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q) 
                                                     >> 8U)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                            = ((0xefU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f)) 
                                               | (0x00000010U 
                                                  & ((~ 
                                                      ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                                         ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res)) 
                                                        ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v)) 
                                                       >> 4U)) 
                                                     << 4U)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                            = (2U | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f));
                                        if ((7U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc;
                                        }
                                    } else {
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                            = ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                               | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__v 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout 
                                            = ((0x3fU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout)) 
                                               | (((2U 
                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__v) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__v))) 
                                                  << 6U));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout 
                                            = ((0xfbU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout)) 
                                               | (4U 
                                                  & ((~ 
                                                      VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__v)) 
                                                     << 2U)));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__65__Vfuncout;
                                    }
                                } else if ((1U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                        = ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                           ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__v 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__v)) 
                                               << 2U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__66__Vfuncout;
                                } else {
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                        = ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                           & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__v 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__v)) 
                                               << 2U)));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__67__Vfuncout;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                        = (0x00000010U 
                                           | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f));
                                }
                            } else if ((2U & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q 
                                    = (0x000001ffU 
                                       & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                           - (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v)) 
                                          - ((3U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op)) 
                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__cin))));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                    = (0x000000ffU 
                                       & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__v 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout 
                                    = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout)) 
                                       | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__v) 
                                                  >> 6U)) 
                                           | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__v))) 
                                          << 6U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout 
                                    = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout)) 
                                       | (4U & ((~ 
                                                 VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__v)) 
                                                << 2U)));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__68__Vfuncout;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = ((0xfeU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f)) 
                                       | (1U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q) 
                                                >> 8U)));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = ((0xefU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f)) 
                                       | (0x00000010U 
                                          & ((~ ((((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                                   ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res)) 
                                                  ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v)) 
                                                 >> 4U)) 
                                             << 4U)));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = (2U | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f));
                                if ((7U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op))) {
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc;
                                }
                            } else {
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q 
                                    = (0x000001ffU 
                                       & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                           + (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v)) 
                                          + ((1U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__op)) 
                                             & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__cin))));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res 
                                    = (0x000000ffU 
                                       & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__v 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout 
                                    = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout)) 
                                       | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__v) 
                                                  >> 6U)) 
                                           | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__v))) 
                                          << 6U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout 
                                    = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout)) 
                                       | (4U & ((~ 
                                                 VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__v)) 
                                                << 2U)));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__69__Vfuncout;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = ((0xfeU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f)) 
                                       | (1U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__q) 
                                                >> 8U)));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f 
                                    = ((0xefU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f)) 
                                       | (0x00000010U 
                                          & (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__acc) 
                                              ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res)) 
                                             ^ (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__v))));
                            }
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__Vfuncout 
                                = (((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__res) 
                                    << 8U) | (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__f));
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out 
                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__alu__63__Vfuncout;
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                = (0x000000ffU & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out) 
                                                  >> 8U));
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                = (0x000000ffU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__alu_out));
                        }
                    } else if ((0x00000040U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((6U == (7U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            if ((0x00000020U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                }
                                            } else if (
                                                       (0x00000010U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               >> 3U)))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                } else {
                                                    if (
                                                        (0x00000020U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                        if (
                                                            (0x00000010U 
                                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                        } else if (
                                                                   (8U 
                                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                        } else {
                                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                        }
                                                    } else if (
                                                               (0x00000010U 
                                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                        if (
                                                            (8U 
                                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                        } else {
                                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                        }
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                    } else {
                                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                    }
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                         >> 3U)))) {
                                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                                } else if (
                                                           (0x00000020U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    if (
                                                        (0x00000010U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                    } else {
                                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                    }
                                                } else if (
                                                           (0x00000010U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                    } else {
                                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                                }
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            if ((0x00000020U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                }
                                            } else if (
                                                       (0x00000010U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               >> 3U)))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else if (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((6U == (7U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else if ((0x00000020U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((6U == (7U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                                if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                if ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 3U)))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else if ((6U == (7U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))) {
                            if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                if ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else {
                            if ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                              >> 3U)))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                            } else if ((0x00000010U 
                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                                }
                            } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                            } else {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg;
                            }
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl))));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        } else if (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 3U)))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                    = 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            if ((0x00000020U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                }
                                            } else if (
                                                       (0x00000010U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                            = ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 3U)))
                                                ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                                : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                            = (0x000000ffU 
                                               & ((1U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                   ? 
                                                  ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__v 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout = 0U;
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout 
                                            = ((0x3fU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout)) 
                                               | (((2U 
                                                    & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__v) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__v))) 
                                                  << 6U));
                                        __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout 
                                            = ((0xfbU 
                                                & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout)) 
                                               | (4U 
                                                  & ((~ 
                                                      VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__v)) 
                                                     << 2U)));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                            = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__70__Vfuncout;
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                               | (1U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                            = ((0xdfU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                               | (0x00000020U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                               | (((1U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                                    : 
                                                   (0x0fU 
                                                    == 
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                                  << 4U));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                            = ((0xfdU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                               | (2U 
                                                  & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                     << 1U)));
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               >> 3U)))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                            }
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                            if ((0x00000020U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                                } else {
                                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                                }
                                            } else if (
                                                       (0x00000010U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                                } else {
                                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                            = (0x0000ffffU 
                                               & ((8U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                   ? 
                                                  ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                        if ((0U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               >> 4U)))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                        } else if (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 4U)))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                      >> 8U));
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                        >> 4U)))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                      >> 8U));
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = ((0xdfU 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                               | (((8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                    ? 
                                                   (0xffffU 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                                    : 
                                                   (0U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                                  << 5U));
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                        = (0x0001ffffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = (0x000000ffU 
                                           & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q);
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (1U & 
                                              (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                               >> 0x10U)));
                                } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = (0x000000ffU 
                                           & ((((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                 ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)
                                                 : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl)) 
                                               + (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = (0x000000ffU 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)
                                                : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl)) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)));
                                }
                            } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = (1U | (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 3U)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                        = ((6U == (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U)))
                                            ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                            : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                        = (0x000000ffU 
                                           & ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                               ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__v 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__v)) 
                                               << 2U)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__71__Vfuncout;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (0x00000020U 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                                : (0x0fU 
                                                   == 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                              << 4U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (2U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               << 1U)));
                                    if ((6U == (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                        = (0x0000ffffU 
                                           & ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                               ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                    if ((0U == (3U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else if ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (0xffffU 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                                : (0U 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                              << 5U));
                                } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                           | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((2U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                           | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    if ((0U == (3U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                    } else if ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__im 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = (0x000000ffU 
                                               & (~ (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 3U)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                        = ((6U == (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U)))
                                            ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                            : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                        = (0x000000ffU 
                                           & ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                               ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__v 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__v)) 
                                               << 2U)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__72__Vfuncout;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (0x00000020U 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                                : (0x0fU 
                                                   == 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                              << 4U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (2U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               << 1U)));
                                    if ((6U == (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                        = (0x0000ffffU 
                                           & ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                               ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                    if ((0U == (3U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else if ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (0xffffU 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                                : (0U 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                              << 5U));
                                } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0x00ffU 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                                  << 8U));
                                    }
                                } else {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                               | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    }
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                    = (0x0001ffffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val)));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                    = (0x000000ffU 
                                       & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                    = (0x000000ffU 
                                       & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q);
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                       | (1U & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                                >> 0x10U)));
                            } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                    = (0x000000ffU 
                                       & ((((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                             ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)
                                             : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl)) 
                                           + (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)) 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                    = (0x000000ffU 
                                       & (((0x00000010U 
                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp)
                                            : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl)) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)));
                            }
                        } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                    if ((1U & (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                >> 4U) 
                                               | (9U 
                                                  < 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra)))))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t 
                                            = (0x000000ffU 
                                               & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t)));
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    if ((1U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                               | (0x99U 
                                                  < (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra))))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t 
                                            = (0x000000ffU 
                                               & ((IData)(0x60U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t)));
                                    }
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__73__v 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp = 0U;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp 
                                        = ((0x3fU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__73__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__73__v))) 
                                              << 6U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp 
                                        = ((0xfbU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__73__v)) 
                                               << 2U)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf 
                                        = ((0x23U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf 
                                        = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                               | (0x99U 
                                                  < (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra)))));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf 
                                        = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf)) 
                                           | (0x00000010U 
                                              & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                                 ^ (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t))));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t;
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                    = ((6U == (7U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 3U)))
                                        ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                        : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                    = (0x000000ffU 
                                       & ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                           ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__v 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout 
                                    = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout)) 
                                       | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__v) 
                                                  >> 6U)) 
                                           | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__v))) 
                                          << 6U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout 
                                    = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout)) 
                                       | (4U & ((~ 
                                                 VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__v)) 
                                                << 2U)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__74__Vfuncout;
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (0x00000020U 
                                          & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (0U != 
                                               (0x0000000fU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                            : (0x0fU 
                                               == (0x0000000fU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                          << 4U));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (2U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                << 1U)));
                                if ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 3U)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                    = (0x0000ffffU 
                                       & ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                           ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else if ((1U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else if ((2U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                       | (((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (0xffffU 
                                               == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                            : (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                          << 5U));
                            } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz;
                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                        = ((0x00ffU 
                                            & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                           | ((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                              << 8U));
                                }
                            } else {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                           | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                } else {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                }
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                    = ((0xff00U & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                       | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                } else if ((1U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                } else if ((2U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else {
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                = (0x0000007fU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__im));
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = ((0x00000080U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl) 
                                                   << 7U)) 
                                               | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                                     >> 1U)));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = ((0xfeU 
                                                & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                               | (1U 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra)));
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 3U)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                                = (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                        = ((6U == (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U)))
                                            ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                            : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                        = (0x000000ffU 
                                           & ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                               ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__v 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout = 0U;
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout 
                                        = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout)) 
                                           | (((2U 
                                                & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__v) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__v))) 
                                              << 6U));
                                    __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout 
                                        = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout)) 
                                           | (4U & 
                                              ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__v)) 
                                               << 2U)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__75__Vfuncout;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (0x00000020U 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (((1U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                                : (0x0fU 
                                                   == 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                              << 4U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                        = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                           | (2U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                               << 1U)));
                                    if ((6U == (7U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 3U)))) {
                                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                        }
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                        if ((0x00000020U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((0x00000010U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                        } else if (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            } else {
                                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                        = (0x0000ffffU 
                                           & ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                               ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                    if ((0U == (3U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                   >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else if ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                    >> 4U)))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                                  >> 8U));
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                ? (0xffffU 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                                : (0U 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                              << 5U));
                                } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = ((0x00000010U 
                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de)
                                            : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc));
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                        = (0x0001ffffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = (0x000000ffU 
                                           & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q);
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (1U & 
                                              (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de) 
                                              >> 7U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = ((0x000000feU 
                                            & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de) 
                                               << 1U)) 
                                           | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xfcU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | ((2U & 
                                               (VL_REDXOR_16(
                                                             (0xc000U 
                                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de))) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de) 
                                                    >> 0x0fU))));
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                        = ((0x000000feU 
                                            & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                               << 1U)) 
                                           | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                               >> 7U)));
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                    = ((6U == (7U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 3U)))
                                        ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                        : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                    = (0x000000ffU 
                                       & ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                           ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__v 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout 
                                    = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout)) 
                                       | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__v) 
                                                  >> 6U)) 
                                           | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__v))) 
                                          << 6U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout 
                                    = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout)) 
                                       | (4U & ((~ 
                                                 VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__v)) 
                                                << 2U)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__76__Vfuncout;
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (0x00000020U 
                                          & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (0U != 
                                               (0x0000000fU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                            : (0x0fU 
                                               == (0x0000000fU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                          << 4U));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (2U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                << 1U)));
                                if ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 3U)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                    = (0x0000ffffU 
                                       & ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                           ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else if ((1U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else if ((2U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                       | (((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (0xffffU 
                                               == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                            : (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                          << 5U));
                            } else {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = ((0x00000010U 
                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                        ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de)
                                        : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc));
                                vlSelfRef.phoenix_core__DOT__cpu_dout 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                            }
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                        } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                    = ((0xff00U & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                       | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                } else if ((1U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                } else if ((2U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else {
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                   | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl)));
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                = ((0x00000080U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh)) 
                                   | (0x0000007fU & 
                                      ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh) 
                                       >> 1U)));
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                = ((0x00000080U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh) 
                                                   << 7U)) 
                                   | (0x0000007fU & 
                                      ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl) 
                                       >> 1U)));
                        }
                    } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                        = ((0x00000080U 
                                            & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                               << 7U)) 
                                           | (0x0000007fU 
                                              & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                                 >> 1U)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                           | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra)));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 3U)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                            = (0x0000ffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__cpu_din;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                    = ((6U == (7U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 3U)))
                                        ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                        : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                    = (0x000000ffU 
                                       & ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                           ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__v 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout 
                                    = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout)) 
                                       | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__v) 
                                                  >> 6U)) 
                                           | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__v))) 
                                          << 6U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout 
                                    = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout)) 
                                       | (4U & ((~ 
                                                 VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__v)) 
                                                << 2U)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__77__Vfuncout;
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (0x00000020U 
                                          & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (0U != 
                                               (0x0000000fU 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                            : (0x0fU 
                                               == (0x0000000fU 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                          << 4U));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                    = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                       | (2U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                << 1U)));
                                if ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 3U)))) {
                                    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                        vlSelfRef.phoenix_core__DOT__cpu_addr 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                        vlSelfRef.phoenix_core__DOT__cpu_dout 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                        vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                    }
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                    if ((0x00000020U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((0x00000010U 
                                             & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                    } else if ((0x00000010U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        } else {
                                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    }
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                    = (0x0000ffffU 
                                       & ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                           ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                                if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                  >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else if ((1U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else if ((2U == (3U 
                                                   & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                      >> 4U)))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                              >> 8U));
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                       | (((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                            ? (0xffffU 
                                               == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                            : (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                          << 5U));
                            } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = ((0x00000010U 
                                        & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                        ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de)
                                        : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc));
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else {
                            if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                    = (0x0001ffffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val)));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                    = (0x000000ffU 
                                       & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                    = (0x000000ffU 
                                       & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q);
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                       | (1U & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q 
                                                >> 0x10U)));
                            } else {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q 
                                    = (0x0001ffffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl) 
                                          - (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc)));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__v 
                                    = (0x000000ffU 
                                       & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q);
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout = 0U;
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout 
                                    = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout)) 
                                       | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__v) 
                                                  >> 6U)) 
                                           | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__v))) 
                                          << 6U));
                                __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout 
                                    = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout)) 
                                       | (4U & ((~ 
                                                 VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__v)) 
                                                << 2U)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf 
                                    = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__78__Vfuncout;
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf 
                                    = ((0xbfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf)) 
                                       | ((0U == (0x0000ffffU 
                                                  & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q)) 
                                          << 6U));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf 
                                    = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf)) 
                                       | (1U & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q 
                                                >> 0x10U)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf 
                                    = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf)) 
                                       | (0x00000010U 
                                          & ((~ ((((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl) 
                                                   ^ vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q) 
                                                  ^ (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc)) 
                                                 >> 4U)) 
                                             << 4U)));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf 
                                    = (2U | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                    = (0x000000ffU 
                                       & (vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                    = (0x000000ffU 
                                       & vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q);
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf;
                            }
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                    = ((0x000000feU 
                                        & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                           << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                                >> 7U)));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = ((0xfeU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                       | (1U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                                                >> 7U)));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 3U)))) {
                                if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                vlSelfRef.phoenix_core__DOT__cpu_addr 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                                if ((0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((0x00000010U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                } else if ((0x00000010U 
                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = vlSelfRef.phoenix_core__DOT__cpu_din;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = vlSelfRef.phoenix_core__DOT__cpu_din;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        } else {
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s 
                                = ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                 >> 3U)))
                                    ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_din)
                                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd));
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v 
                                = (0x000000ffU & ((1U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                   ? 
                                                  ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s))));
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__v 
                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout = 0U;
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout 
                                = ((0x3fU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout)) 
                                   | (((2U & ((IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__v) 
                                              >> 6U)) 
                                       | (0U == (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__v))) 
                                      << 6U));
                            __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout 
                                = ((0xfbU & (IData)(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout)) 
                                   | (4U & ((~ VL_REDXOR_8(__Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__v)) 
                                            << 2U)));
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                = __Vfunc_phoenix_core__DOT__u_cpu__DOT__zsp__79__Vfuncout;
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                = ((0xfeU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                   | (1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                = ((0xdfU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                   | (0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                = ((0xefU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                   | (((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                        ? (0U != (0x0000000fU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))
                                        : (0x0fU == 
                                           (0x0000000fU 
                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s)))) 
                                      << 4U));
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf 
                                = ((0xfdU & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf)) 
                                   | (2U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                            << 1U)));
                            if ((6U == (7U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                              >> 3U)))) {
                                if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                    vlSelfRef.phoenix_core__DOT__cpu_addr 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
                                    vlSelfRef.phoenix_core__DOT__cpu_dout 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                                    vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                                } else {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                                }
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
                                if ((0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((0x00000010U 
                                         & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__ra 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    } else {
                                        __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    }
                                } else if ((0x00000010U 
                                            & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    } else {
                                        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                                    __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                } else {
                                    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                        = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
                                }
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                            vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv 
                                = (0x0000ffffU & ((8U 
                                                   & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                                   ? 
                                                  ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val))));
                            if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                              >> 4U)))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                    = (0x000000ffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                            } else if ((1U == (3U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 4U)))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                    = (0x000000ffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                          >> 8U));
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 4U)))) {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                    = (0x000000ffU 
                                       & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv) 
                                          >> 8U));
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv));
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
                            }
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__fl 
                                = ((0xdfU & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__fl)) 
                                   | (((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                        ? (0xffffU 
                                           == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))
                                        : (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv))) 
                                      << 5U));
                        } else {
                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                = ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                                    ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de)
                                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc));
                            vlSelfRef.phoenix_core__DOT__cpu_dout 
                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra;
                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                            vlSelfRef.phoenix_core__DOT__cpu_we = 1U;
                        }
                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                    } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))) {
                        if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                        } else if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep))) {
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__wz 
                                = ((0xff00U & (IData)(__Vdly__phoenix_core__DOT__u_cpu__DOT__wz)) 
                                   | (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
                            vlSelfRef.phoenix_core__DOT__cpu_addr 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                            vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                        } else {
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                            if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                              >> 4U)))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb 
                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rc 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                            } else if ((1U == (3U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 4U)))) {
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_ 
                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                                >> 4U)))) {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rh 
                                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__rl 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz));
                            } else {
                                __Vdly__phoenix_core__DOT__u_cpu__DOT__sp 
                                    = (((IData)(vlSelfRef.phoenix_core__DOT__cpu_din) 
                                        << 8U) | (0x000000ffU 
                                                  & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz)));
                            }
                            __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                        }
                    } else {
                        __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 3U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__state))) {
                __Vdly__phoenix_core__DOT__u_cpu__DOT__pc 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc)));
                __Vdly__phoenix_core__DOT__u_cpu__DOT__ir 
                    = vlSelfRef.phoenix_core__DOT__cpu_din;
                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft 
                    = (0x000000ffU & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut
                                              [vlSelfRef.phoenix_core__DOT__cpu_din]) 
                                      - (IData)(2U)));
                __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep = 0U;
                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 2U;
            } else {
                vlSelfRef.phoenix_core__DOT__cpu_addr 
                    = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc;
                vlSelfRef.phoenix_core__DOT__cpu_mreq = 1U;
                __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft = 0U;
                __Vdly__phoenix_core__DOT__u_cpu__DOT__state = 1U;
            }
        }
    }
    vlSelfRef.phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr 
        = (0x00003fffU & ((IData)(vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog)
                           ? vlSelfRef.dl_addr : (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr)));
    if ((3U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_code 
            = vlSelfRef.phoenix_core__DOT__vram_b_data;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem__v0;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem__v0;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem__v0;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem__v0;
    }
    if ((5U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_msb 
            = vlSelfRef.phoenix_core__DOT__bgrom_msb;
        vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_lsb 
            = vlSelfRef.phoenix_core__DOT__bgrom_lsb;
    }
    if (((IData)(vlSelfRef.dl_wr) & (0U == vlSelfRef.dl_addr))) {
        __Vdly__phoenix_core__DOT__u_mem__DOT__prog_sum 
            = vlSelfRef.dl_data;
    } else if (vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog) {
        __Vdly__phoenix_core__DOT__u_mem__DOT__prog_sum 
            = (vlSelfRef.phoenix_core__DOT__u_mem__DOT__prog_sum 
               + (IData)(vlSelfRef.dl_data));
    }
    if (vlSelfRef.dl_done) {
        vlSelfRef.game_phoenix = (0x0015fa42U == vlSelfRef.phoenix_core__DOT__u_mem__DOT__prog_sum);
        vlSelfRef.game_known = ((0x0015fa42U == vlSelfRef.phoenix_core__DOT__u_mem__DOT__prog_sum) 
                                | (0x0016d34bU == vlSelfRef.phoenix_core__DOT__u_mem__DOT__prog_sum));
    }
    if ((1U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_code 
            = vlSelfRef.phoenix_core__DOT__vram_b_data;
    }
    vlSelfRef.phoenix_core__DOT__u_mem__DOT__prog_sum 
        = __Vdly__phoenix_core__DOT__u_mem__DOT__prog_sum;
    vlSelfRef.phoenix_core__DOT__u_video__DOT__phase 
        = __Vdly__phoenix_core__DOT__u_video__DOT__phase;
    vlSelfRef.phoenix_core__DOT__bgrom_msb = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem
        [vlSelfRef.phoenix_core__DOT__bgrom_addr];
    vlSelfRef.phoenix_core__DOT__bgrom_lsb = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem
        [vlSelfRef.phoenix_core__DOT__bgrom_addr];
    vlSelfRef.cen_pix = (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase));
    vlSelfRef.phoenix_core__DOT__vram_dout = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem
        [vlSelfRef.phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr];
    vlSelfRef.phoenix_core__DOT__vram_b_data = vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem
        [vlSelfRef.phoenix_core__DOT__vram_b_addr];
    vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail 
        = ((IData)(vlSelfRef.cab_cocktail) & (IData)(vlSelfRef.phoenix_core__DOT__videoreg));
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem__v0;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem__v0;
    }
    if (__VdlySet__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0) {
        vlSelfRef.phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem[__VdlyDim0__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0] 
            = __VdlyVal__phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem__v0;
    }
    if (vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail) {
        phoenix_core__DOT__u_video__DOT__sy = (0x000000ffU 
                                               & ((IData)(0xffU) 
                                                  - (IData)(vlSelfRef.dbg_vcnt)));
        phoenix_core__DOT__u_video__DOT__sx = (0x000000ffU 
                                               & ((IData)(0xffU) 
                                                  - (IData)(vlSelfRef.dbg_hcnt)));
    } else {
        phoenix_core__DOT__u_video__DOT__sy = (0x000000ffU 
                                               & (IData)(vlSelfRef.dbg_vcnt));
        phoenix_core__DOT__u_video__DOT__sx = (0x000000ffU 
                                               & (IData)(vlSelfRef.dbg_hcnt));
    }
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__pc = __Vdly__phoenix_core__DOT__u_cpu__DOT__pc;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ustep 
        = __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tleft 
        = __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__wz = __Vdly__phoenix_core__DOT__u_cpu__DOT__wz;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__tmp = __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__im = __Vdly__phoenix_core__DOT__u_cpu__DOT__im;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__state 
        = __Vdly__phoenix_core__DOT__u_cpu__DOT__state;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp = __Vdly__phoenix_core__DOT__u_cpu__DOT__sp;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl = __Vdly__phoenix_core__DOT__u_cpu__DOT__fl;
    vlSelfRef.phoenix_core__DOT__div = __Vdly__phoenix_core__DOT__div;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra = __Vdly__phoenix_core__DOT__u_cpu__DOT__ra;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir = __Vdly__phoenix_core__DOT__u_cpu__DOT__ir;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc = __Vdly__phoenix_core__DOT__u_cpu__DOT__rc;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh = __Vdly__phoenix_core__DOT__u_cpu__DOT__rh;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl = __Vdly__phoenix_core__DOT__u_cpu__DOT__rl;
    vlSelfRef.phoenix_core__DOT__bgrom_addr = ((((3U 
                                                  == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))
                                                  ? (IData)(vlSelfRef.phoenix_core__DOT__vram_b_data)
                                                  : (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bg_code)) 
                                                << 3U) 
                                               | (7U 
                                                  & (IData)(phoenix_core__DOT__u_video__DOT__sy)));
    vlSelfRef.phoenix_core__DOT__fgrom_addr = ((((1U 
                                                  == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))
                                                  ? (IData)(vlSelfRef.phoenix_core__DOT__vram_b_data)
                                                  : (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_code)) 
                                                << 3U) 
                                               | (7U 
                                                  & (IData)(phoenix_core__DOT__u_video__DOT__sy)));
    vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_pen 
        = ((2U & (((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_msb) 
                   >> (7U & (IData)(phoenix_core__DOT__u_video__DOT__sx))) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__fg_lsb) 
                                   >> (7U & (IData)(phoenix_core__DOT__u_video__DOT__sx)))));
    vlSelfRef.phoenix_core__DOT__u_video__DOT__bx = 
        (0x000000ffU & ((IData)(vlSelfRef.phoenix_core__DOT__scroll) 
                        + (IData)(phoenix_core__DOT__u_video__DOT__sx)));
    vlSelfRef.dbg_stb = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_mreq) 
                         & (4U == (IData)(vlSelfRef.phoenix_core__DOT__div)));
    vlSelfRef.dbg_we = vlSelfRef.phoenix_core__DOT__cpu_we;
    vlSelfRef.phoenix_core__DOT__wr_pulse = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_mreq) 
                                             & ((IData)(vlSelfRef.phoenix_core__DOT__cpu_we) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__div))));
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc));
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re));
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg 
        = ((4U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
            ? ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                   & (- (IData)((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir)))))
                : ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                    ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl)
                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh)))
            : ((2U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                ? ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                    ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re)
                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_))
                : ((1U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                    ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc)
                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb))));
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd 
        = ((0x00000020U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
            ? ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                ? ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                   & (- (IData)((1U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                                       >> 3U))))) : 
               ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                 ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl)
                 : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh)))
            : ((0x00000010U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                ? ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                    ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re)
                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_))
                : ((8U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir))
                    ? (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc)
                    : (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb))));
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rh) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rl));
    vlSelfRef.dbg_addr = vlSelfRef.phoenix_core__DOT__cpu_addr;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (IData)(
                                                       (0x6000U 
                                                        == 
                                                        (0x7000U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))));
    vlSelfRef.phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr 
        = ((0x00001000U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                           << 0x0000000cU)) | (0x00000fffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (IData)(
                                                       (0x4000U 
                                                        == 
                                                        (0x6000U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))));
    vlSelfRef.phoenix_core__DOT__vram_b_addr = (0x00001000U 
                                                & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                                   << 0x0000000cU));
    if ((0U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__vram_b_addr = 
            ((0x00001000U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                             << 0x0000000cU)) | ((0x000003e0U 
                                                  & ((IData)(phoenix_core__DOT__u_video__DOT__sy) 
                                                     << 2U)) 
                                                 | (0x0000001fU 
                                                    & ((IData)(phoenix_core__DOT__u_video__DOT__sx) 
                                                       >> 3U))));
    } else if ((2U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase))) {
        vlSelfRef.phoenix_core__DOT__vram_b_addr = 
            (0x00000800U | ((0x00001000U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                                            << 0x0000000cU)) 
                            | ((0x000003e0U & ((IData)(phoenix_core__DOT__u_video__DOT__sy) 
                                               << 2U)) 
                               | (0x0000001fU & ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__bx) 
                                                 >> 3U)))));
    }
    if ((0U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                      >> 4U)))) {
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc;
    } else if ((1U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                             >> 4U)))) {
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de;
    } else if ((2U == (3U & ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ir) 
                             >> 4U)))) {
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__hl;
    } else {
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rp_val 
            = vlSelfRef.phoenix_core__DOT__u_cpu__DOT__sp;
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__push_val 
            = (((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__ra) 
                << 8U) | (0xf7U & (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__fl)));
    }
    vlSelfRef.phoenix_core__DOT__sel_vreg = (IData)(
                                                    ((0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
    vlSelfRef.phoenix_core__DOT__sel_vram = ((~ ((IData)(vlSelfRef.phoenix_core__DOT__cpu_addr) 
                                                 >> 0x0000000cU)) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.phoenix_core__DOT__cpu_din = (0x000000ffU 
                                            & ((0x00004000U 
                                                & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))
                                                ? ((IData)(vlSelfRef.phoenix_core__DOT__sel_vram)
                                                    ? (IData)(vlSelfRef.phoenix_core__DOT__vram_dout)
                                                    : 
                                                   ((IData)(
                                                            (0x7000U 
                                                             == 
                                                             (0x7800U 
                                                              & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))))
                                                     ? 
                                                    ((0x000000f0U 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail)
                                                            ? 
                                                           ((((IData)(vlSelfRef.p2_fire2) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.p2_left) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.p2_right) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.p2_fire)))
                                                            : 
                                                           ((((IData)(vlSelfRef.p1_fire2) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.p1_left) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.p1_right) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.p1_fire))))) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & (((~ 
                                                              ((0x0cU 
                                                                == 
                                                                (0xfcU 
                                                                 & (IData)(vlSelfRef.phoenix_core__DOT__videoreg))) 
                                                               | (0x30U 
                                                                  == 
                                                                  (0xfcU 
                                                                   & (IData)(vlSelfRef.phoenix_core__DOT__videoreg))))) 
                                                             | (IData)(vlSelfRef.game_phoenix)) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & (~ 
                                                              (((IData)(vlSelfRef.start2) 
                                                                << 2U) 
                                                               | (((IData)(vlSelfRef.start1) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.coin1)))))))
                                                     : 
                                                    ((((0xd0U 
                                                        > (IData)(vlSelfRef.dbg_vcnt)) 
                                                       << 7U) 
                                                      | (IData)(vlSelfRef.dsw)) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (0x0000000fU 
                                                                       == 
                                                                       (0x0000000fU 
                                                                        & ((IData)(vlSelfRef.phoenix_core__DOT__cpu_addr) 
                                                                           >> 0x0000000bU))))))))))
                                                : (IData)(vlSelfRef.phoenix_core__DOT__prog_data)));
    vlSelfRef.dbg_data = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_we)
                           ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_dout)
                           : (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
}
