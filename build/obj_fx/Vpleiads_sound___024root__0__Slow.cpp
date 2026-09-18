// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpleiads_sound.h for the primary calling header

#include "Vpleiads_sound__pch.h"

VL_ATTR_COLD void Vpleiads_sound___024root___eval_static(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_static\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t1 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1640942137027970325ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t23 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2813611979663582895ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_t4 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4484586500985826438ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__s_noise = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6982314055496577884ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl23 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5059918942337126320ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__lvl4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12064000201297666626ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3064903993545718901ull);
        vlSelfRef.pleiads_sound__DOT__unnamedblk1__DOT__step = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8952578182452194176ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vpleiads_sound___024root___eval_initial(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_initial\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpleiads_sound___024root___eval_final(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_final\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpleiads_sound___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpleiads_sound___024root___eval_phase__stl(Vpleiads_sound___024root* vlSelf);

VL_ATTR_COLD void Vpleiads_sound___024root___eval_settle(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_settle\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vpleiads_sound___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/pleiads_sound.sv", 27, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vpleiads_sound___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vpleiads_sound___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpleiads_sound___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vpleiads_sound___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vpleiads_sound___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vpleiads_sound___024root___eval_phase__stl(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___eval_phase__stl\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vpleiads_sound___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vpleiads_sound___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.dbg_pb4 = vlSelfRef.pleiads_sound__DOT__pb4_lvl;
                    vlSelfRef.dbg_t1 = vlSelfRef.pleiads_sound__DOT__t1_out;
                    vlSelfRef.dbg_t4 = vlSelfRef.pleiads_sound__DOT__t4_out;
                    vlSelfRef.dbg_poly = vlSelfRef.pleiads_sound__DOT__polybit;
                    vlSelfRef.dbg_pa6 = vlSelfRef.pleiads_sound__DOT__pa6_lvl;
                    vlSelfRef.dbg_pc5 = vlSelfRef.pleiads_sound__DOT__pc5_lvl;
                    vlSelfRef.dbg_pa5 = vlSelfRef.pleiads_sound__DOT__pa5_lvl;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vpleiads_sound___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpleiads_sound___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpleiads_sound___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpleiads_sound___024root___ctor_var_reset(Vpleiads_sound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpleiads_sound___024root___ctor_var_reset\n"); );
    Vpleiads_sound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->latch_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6983114670898532002ull);
    vlSelf->latch_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1455538333632749152ull);
    vlSelf->latch_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12615150477211506864ull);
    vlSelf->sample = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14877665802122487536ull);
    vlSelf->sample_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9982232731012092892ull);
    vlSelf->dbg_pb4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12494186529828643015ull);
    vlSelf->dbg_t1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12469423957716393392ull);
    vlSelf->dbg_t4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9544773928532729105ull);
    vlSelf->dbg_poly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231376933470231595ull);
    vlSelf->dbg_pa6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10017545002084197655ull);
    vlSelf->dbg_pc5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9515137707156683181ull);
    vlSelf->dbg_pa5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8104947041339407626ull);
    vlSelf->pleiads_sound__DOT__acc = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 6250263486511535666ull);
    vlSelf->pleiads_sound__DOT__tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2489000023829468770ull);
    vlSelf->pleiads_sound__DOT__t1_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11763138398602935722ull);
    vlSelf->pleiads_sound__DOT__t2_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11220332379038168661ull);
    vlSelf->pleiads_sound__DOT__t3_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15673306404695094091ull);
    vlSelf->pleiads_sound__DOT__t4_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1343923352041771771ull);
    vlSelf->pleiads_sound__DOT__noise_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7307237650342652901ull);
    vlSelf->pleiads_sound__DOT__t1_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9871225986804378356ull);
    vlSelf->pleiads_sound__DOT__t1_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6872978995166894963ull);
    vlSelf->pleiads_sound__DOT__t2_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16615585012467886827ull);
    vlSelf->pleiads_sound__DOT__t3_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13576840771904793921ull);
    vlSelf->pleiads_sound__DOT__t4_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17249962406215536120ull);
    vlSelf->pleiads_sound__DOT__pa5_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16542981043527357084ull);
    vlSelf->pleiads_sound__DOT__pa6_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13762883385527943956ull);
    vlSelf->pleiads_sound__DOT__pb4_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7591272648593489422ull);
    vlSelf->pleiads_sound__DOT__pc4_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4108592620682355245ull);
    vlSelf->pleiads_sound__DOT__pc5_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 339527104072127860ull);
    vlSelf->pleiads_sound__DOT__pa5_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8460429822514666032ull);
    vlSelf->pleiads_sound__DOT__pa6_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8566794983156324603ull);
    vlSelf->pleiads_sound__DOT__pb4_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5744257115106400302ull);
    vlSelf->pleiads_sound__DOT__pc4_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2964425626737191822ull);
    vlSelf->pleiads_sound__DOT__pc5_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8464249594548668784ull);
    vlSelf->pleiads_sound__DOT__lfsr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12834520233164556861ull);
    vlSelf->pleiads_sound__DOT__polybit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3844567108401846148ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
