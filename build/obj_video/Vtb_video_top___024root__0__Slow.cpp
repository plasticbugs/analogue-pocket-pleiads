// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_video_top.h for the primary calling header

#include "Vtb_video_top__pch.h"

VL_ATTR_COLD void Vtb_video_top___024root___eval_static(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_static\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtb_video_top___024root___eval_initial(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_initial\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_video_top___024root___eval_final(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_final\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_video_top___024root___eval_phase__stl(Vtb_video_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_video_top___024root___eval_settle(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_settle\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_video_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_video_top.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_video_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_video_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_video_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_video_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtb_video_top___024root___eval_phase__stl(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___eval_phase__stl\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_video_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_video_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb_video_top__DOT__u_video__DOT__active 
                        = ((0x0100U > (IData)(vlSelfRef.hcnt)) 
                           & (0xd0U > (IData)(vlSelfRef.vcnt)));
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
    return (__VstlExecute);
}

bool Vtb_video_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_video_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( dl_addr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( dl_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( dl_wr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( dl_done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( vr_addr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( vr_we)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( vr_din)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( videoreg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( scroll)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( cab_cocktail)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_video_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_video_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_video_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_video_top___024root___ctor_var_reset(Vtb_video_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_video_top___024root___ctor_var_reset\n"); );
    Vtb_video_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->dl_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5859826879386954887ull);
    vlSelf->dl_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6891131556200439257ull);
    vlSelf->dl_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9624864055451213588ull);
    vlSelf->dl_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12496348433641432108ull);
    vlSelf->vr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9756772043210446116ull);
    vlSelf->vr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12658968553641525116ull);
    vlSelf->vr_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2461495555162714776ull);
    vlSelf->videoreg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8951648202830624441ull);
    vlSelf->scroll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11627162985169080388ull);
    vlSelf->cab_cocktail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12109535257511449244ull);
    vlSelf->game_phoenix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5929218689811494301ull);
    vlSelf->game_known = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12227656076257214172ull);
    vlSelf->rgb = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11277054808258870952ull);
    vlSelf->de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418971983228644420ull);
    vlSelf->hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->hcnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14090446815536547425ull);
    vlSelf->vcnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5658845041206824619ull);
    vlSelf->tb_video_top__DOT__vram_b_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 580452461997910075ull);
    vlSelf->tb_video_top__DOT__vram_b_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3781141019771190612ull);
    vlSelf->tb_video_top__DOT__bgrom_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7922293988338607384ull);
    vlSelf->tb_video_top__DOT__fgrom_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3203556840227318445ull);
    vlSelf->tb_video_top__DOT__bgrom_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9814116039584449896ull);
    vlSelf->tb_video_top__DOT__bgrom_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4775209855190574124ull);
    vlSelf->tb_video_top__DOT__fgrom_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2304870984824407869ull);
    vlSelf->tb_video_top__DOT__fgrom_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14773985566637826547ull);
    vlSelf->tb_video_top__DOT__prom_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2956061231229094432ull);
    vlSelf->tb_video_top__DOT__prom_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 517751219107426621ull);
    vlSelf->tb_video_top__DOT__u_mem__DOT__prog_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2212078299484994833ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10144047799710953183ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5382346132380721389ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10392864702025342814ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17133450613225645474ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7614538128525638750ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9563996086305621921ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17947975860039856936ull);
    }
    vlSelf->tb_video_top__DOT__u_video__DOT__phase = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17674068696672476002ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__cocktail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 198585711308982907ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__sx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13159924491860219237ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__sy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3554686541437251616ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__bx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5661017946169884234ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__fg_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9577198942315682636ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__bg_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7172582970434228686ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__fg_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17085764052464530ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__fg_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4174607944217124627ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__bg_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 145345174989785199ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__bg_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9602773132588225891ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__fg_pen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7262256027040509299ull);
    vlSelf->tb_video_top__DOT__u_video__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2111345390619963465ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dl_addr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dl_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dl_wr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dl_done__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__vr_addr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__vr_we__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__vr_din__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__videoreg__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__scroll__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cab_cocktail__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
