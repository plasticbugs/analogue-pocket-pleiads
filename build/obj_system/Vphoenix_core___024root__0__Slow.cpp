// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_core.h for the primary calling header

#include "Vphoenix_core__pch.h"

VL_ATTR_COLD void Vphoenix_core___024root___eval_static(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_static\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        IData/*31:0*/ __Vinline_0__eval_static__TOP_phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i;
        __Vinline_0__eval_static__TOP_phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i = 0;
        __Vinline_0__eval_static__TOP_phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i = 0;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17344968143457508189ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10652788490285645414ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12588690427337595300ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11044099364493913834ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15903893227887929613ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 144240516848402039ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5053838668994294357ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 359806939219783454ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1516235083168199647ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14834138871973225999ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5246794113181972948ull);
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6436689393120766895ull);
    }
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
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vphoenix_core___024root___eval_initial__TOP(Vphoenix_core___024root* vlSelf);

VL_ATTR_COLD void Vphoenix_core___024root___eval_initial(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_initial\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vphoenix_core___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vphoenix_core___024root___eval_initial__TOP(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_initial__TOP\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i;
    phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i = 0;
    // Body
    phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i)) {
        vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[(0x000000ffU 
                                                          & phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i)] = 4U;
        phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i 
            = ((IData)(1U) + phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i);
    }
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[64U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[65U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[66U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[67U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[68U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[69U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[70U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[71U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[72U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[73U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[74U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[75U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[76U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[77U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[78U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[79U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[80U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[81U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[82U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[83U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[84U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[85U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[86U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[87U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[88U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[89U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[90U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[91U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[92U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[93U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[94U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[95U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[96U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[97U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[98U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[99U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[100U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[101U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[102U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[103U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[104U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[105U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[106U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[107U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[108U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[109U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[110U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[111U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[112U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[113U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[114U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[115U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[116U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[117U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[118U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[119U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[120U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[121U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[122U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[123U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[124U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[125U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[126U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[127U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[118U] = 5U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[128U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[129U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[130U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[131U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[132U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[133U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[134U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[135U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[136U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[137U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[138U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[139U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[140U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[141U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[142U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[143U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[144U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[145U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[146U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[147U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[148U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[149U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[150U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[151U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[152U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[153U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[154U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[155U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[156U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[157U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[158U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[159U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[160U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[161U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[162U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[163U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[164U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[165U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[166U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[167U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[168U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[169U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[170U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[171U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[172U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[173U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[174U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[175U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[176U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[177U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[178U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[179U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[180U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[181U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[182U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[183U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[184U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[185U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[186U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[187U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[188U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[189U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[190U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[191U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[0U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[1U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[2U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[3U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[4U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[5U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[6U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[7U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[8U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[9U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[10U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[11U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[12U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[13U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[14U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[15U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[16U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[17U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[18U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[19U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[20U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[21U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[22U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[23U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[24U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[25U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[26U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[27U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[28U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[29U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[30U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[31U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[32U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[33U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[34U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[35U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[36U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[37U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[38U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[39U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[40U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[41U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[42U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[43U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[44U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[45U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[46U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[47U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[48U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[49U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[50U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[51U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[52U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[53U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[54U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[55U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[56U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[57U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[58U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[59U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[60U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[61U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[62U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[63U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[16U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[24U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[34U] = 0x10U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[42U] = 0x10U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[40U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[56U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[50U] = 0x0dU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[58U] = 0x0dU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[52U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[53U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[54U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[192U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[193U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[194U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[195U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[196U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[197U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[198U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[199U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[200U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[201U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[202U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[203U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[204U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[205U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[206U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[207U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[208U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[209U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[210U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[211U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[212U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[213U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[214U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[215U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[216U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[217U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[218U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[219U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[220U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[221U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[222U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[223U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[224U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[225U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[226U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[227U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[228U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[229U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[230U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[231U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[232U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[233U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[234U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[235U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[236U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[237U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[238U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[239U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[240U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[241U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[242U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[243U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[244U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[245U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[246U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[247U] = 0x0cU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[248U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[249U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[250U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[251U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[252U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[253U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[254U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[255U] = 0x0cU;
    phoenix_core__DOT__u_cpu__DOT__cycles__DOT__i = 0x00000100U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[195U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[201U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[203U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[205U] = 9U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[211U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[217U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[219U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[221U] = 7U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[227U] = 0x10U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[233U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[235U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[237U] = 0x0aU;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[243U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[249U] = 6U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[251U] = 4U;
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__cyc_lut[253U] = 7U;
}

VL_ATTR_COLD void Vphoenix_core___024root___eval_final(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_final\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vphoenix_core___024root___eval_phase__stl(Vphoenix_core___024root* vlSelf);

VL_ATTR_COLD void Vphoenix_core___024root___eval_settle(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_settle\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vphoenix_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/phoenix_core.sv", 29, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vphoenix_core___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vphoenix_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vphoenix_core___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vphoenix_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vphoenix_core___024root___stl_sequent__TOP__0(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___stl_sequent__TOP__0\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ phoenix_core__DOT__u_video__DOT__sx;
    phoenix_core__DOT__u_video__DOT__sx = 0;
    CData/*7:0*/ phoenix_core__DOT__u_video__DOT__sy;
    phoenix_core__DOT__u_video__DOT__sy = 0;
    // Body
    vlSelfRef.cen_pix = (0U == (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__phase));
    vlSelfRef.dbg_addr = vlSelfRef.phoenix_core__DOT__cpu_addr;
    vlSelfRef.dbg_we = vlSelfRef.phoenix_core__DOT__cpu_we;
    vlSelfRef.dbg_fetch = vlSelfRef.phoenix_core__DOT__cpu_fetch_q;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (IData)(
                                                       (0x6000U 
                                                        == 
                                                        (0x7000U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))));
    vlSelfRef.dbg_stb = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_mreq) 
                         & (4U == (IData)(vlSelfRef.phoenix_core__DOT__div)));
    vlSelfRef.phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr 
        = ((0x00001000U & ((IData)(vlSelfRef.phoenix_core__DOT__videoreg) 
                           << 0x0000000cU)) | (0x00000fffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr)));
    vlSelfRef.phoenix_core__DOT__u_video__DOT__active 
        = ((0x0100U > (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__hcnt)) 
           & (0xd0U > (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__vcnt)));
    vlSelfRef.phoenix_core__DOT__wr_pulse = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_mreq) 
                                             & ((IData)(vlSelfRef.phoenix_core__DOT__cpu_we) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.phoenix_core__DOT__div))));
    vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog 
        = ((IData)(vlSelfRef.dl_wr) & (0x00004000U 
                                       > vlSelfRef.dl_addr));
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
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__bc = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rb) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rc));
    vlSelfRef.phoenix_core__DOT__u_cpu__DOT__de = (
                                                   ((IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__rd_) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.phoenix_core__DOT__u_cpu__DOT__re));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (IData)(
                                                       (0x4000U 
                                                        == 
                                                        (0x6000U 
                                                         & (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr))));
    vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail 
        = ((IData)(vlSelfRef.cab_cocktail) & (IData)(vlSelfRef.phoenix_core__DOT__videoreg));
    vlSelfRef.phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr 
        = (0x00003fffU & ((IData)(vlSelfRef.phoenix_core__DOT__u_mem__DOT__sel_prog)
                           ? vlSelfRef.dl_addr : (IData)(vlSelfRef.phoenix_core__DOT__cpu_addr)));
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
    if (vlSelfRef.phoenix_core__DOT__u_video__DOT__cocktail) {
        phoenix_core__DOT__u_video__DOT__sy = (0x000000ffU 
                                               & ((IData)(0xffU) 
                                                  - (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__vcnt)));
        phoenix_core__DOT__u_video__DOT__sx = (0x000000ffU 
                                               & ((IData)(0xffU) 
                                                  - (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__hcnt)));
    } else {
        phoenix_core__DOT__u_video__DOT__sy = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__vcnt));
        phoenix_core__DOT__u_video__DOT__sx = (0x000000ffU 
                                               & (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__hcnt));
    }
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
                                                        > (IData)(vlSelfRef.phoenix_core__DOT__u_video__DOT__vcnt)) 
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
    vlSelfRef.dbg_data = ((IData)(vlSelfRef.phoenix_core__DOT__cpu_we)
                           ? (IData)(vlSelfRef.phoenix_core__DOT__cpu_dout)
                           : (IData)(vlSelfRef.phoenix_core__DOT__cpu_din));
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
}

VL_ATTR_COLD bool Vphoenix_core___024root___eval_phase__stl(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_phase__stl\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vphoenix_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vphoenix_core___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vphoenix_core___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vphoenix_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vphoenix_core___024root___trigger_anySet__ico(triggers))))) {
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( coin1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( start1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( start2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( p1_left)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( p1_right)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( p1_fire)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( p1_fire2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( p2_left)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( p2_right)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( p2_fire)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( p2_fire2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( dsw)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( cab_cocktail)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vphoenix_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vphoenix_core___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vphoenix_core___024root___ctor_var_reset(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___ctor_var_reset\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->dl_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5859826879386954887ull);
    vlSelf->dl_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6891131556200439257ull);
    vlSelf->dl_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9624864055451213588ull);
    vlSelf->dl_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12496348433641432108ull);
    vlSelf->game_phoenix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5929218689811494301ull);
    vlSelf->game_known = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12227656076257214172ull);
    vlSelf->coin1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15634962110554222224ull);
    vlSelf->start1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10745058455955830469ull);
    vlSelf->start2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11127169886638033804ull);
    vlSelf->p1_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4379979525390306782ull);
    vlSelf->p1_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11717772202982637256ull);
    vlSelf->p1_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15015387688064255684ull);
    vlSelf->p1_fire2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800751531282638465ull);
    vlSelf->p2_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17869586590001482212ull);
    vlSelf->p2_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15689153912382863301ull);
    vlSelf->p2_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184103963920579676ull);
    vlSelf->p2_fire2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7069921568828210458ull);
    vlSelf->dsw = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10793067836874855607ull);
    vlSelf->cab_cocktail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12109535257511449244ull);
    vlSelf->rgb = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11277054808258870952ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418971983228644420ull);
    vlSelf->cen_pix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 978921484656161908ull);
    vlSelf->snd_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16130822892161450432ull);
    vlSelf->snd_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5848752275648079737ull);
    vlSelf->snd_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7316865929743495349ull);
    vlSelf->dbg_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10106814393097140953ull);
    vlSelf->dbg_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10213329243391659403ull);
    vlSelf->dbg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5806864404134174129ull);
    vlSelf->dbg_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9816685914744449375ull);
    vlSelf->dbg_fetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1942815942514982492ull);
    vlSelf->phoenix_core__DOT__div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8219281913240698932ull);
    vlSelf->phoenix_core__DOT__cpu_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10339899729296347313ull);
    vlSelf->phoenix_core__DOT__cpu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17355174409942241982ull);
    vlSelf->phoenix_core__DOT__cpu_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15756006607436361634ull);
    vlSelf->phoenix_core__DOT__cpu_mreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9395301075808367760ull);
    vlSelf->phoenix_core__DOT__cpu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16609799746545400239ull);
    vlSelf->phoenix_core__DOT__cpu_fetch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17259941370708449300ull);
    vlSelf->phoenix_core__DOT__sel_vram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6779939036974111666ull);
    vlSelf->phoenix_core__DOT__sel_vreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7044348194740202742ull);
    vlSelf->phoenix_core__DOT__wr_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985918620279229712ull);
    vlSelf->phoenix_core__DOT__videoreg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11949940870669359999ull);
    vlSelf->phoenix_core__DOT__scroll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3575615644641352982ull);
    vlSelf->phoenix_core__DOT__prog_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 174952734578277205ull);
    vlSelf->phoenix_core__DOT__vram_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1967381455460263706ull);
    vlSelf->phoenix_core__DOT__vram_b_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13794926062004044039ull);
    vlSelf->phoenix_core__DOT__vram_b_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17692620548925151121ull);
    vlSelf->phoenix_core__DOT__bgrom_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17871970459536849730ull);
    vlSelf->phoenix_core__DOT__fgrom_addr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15220118745346225449ull);
    vlSelf->phoenix_core__DOT__bgrom_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4790649117719945707ull);
    vlSelf->phoenix_core__DOT__bgrom_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11552746389239274964ull);
    vlSelf->phoenix_core__DOT__fgrom_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6554392610230029105ull);
    vlSelf->phoenix_core__DOT__fgrom_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15011692175349111146ull);
    vlSelf->phoenix_core__DOT__prom_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6522684738660220317ull);
    vlSelf->phoenix_core__DOT__prom_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17433436800847478964ull);
    vlSelf->phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr = 0;
    vlSelf->phoenix_core__DOT__u_mem__DOT__sel_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17107561478921331899ull);
    vlSelf->phoenix_core__DOT__u_mem__DOT__prog_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1392233768659430219ull);
    vlSelf->phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10683004719398175163ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3939296766165488369ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6284795542115059265ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9127600627573527348ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16496078313292458619ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13465562564403436778ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1360547066240365013ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4324622969500868180ull);
    }
    vlSelf->phoenix_core__DOT__u_video__DOT__hcnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11107462033700757568ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__vcnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 348271766118241267ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__phase = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6536773850311057546ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__cocktail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8124868806285582191ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__bx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8049441070046481022ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__fg_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12521369676070928431ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__bg_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2838837166677403991ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__fg_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 905869871446491846ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__fg_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13371182872860953246ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__bg_lsb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15128191669838910668ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__bg_msb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9957520295789901071ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__fg_pen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3205130783245855320ull);
    vlSelf->phoenix_core__DOT__u_video__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13464593502177084129ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__rb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1694674867513785622ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__rc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15330968950642849750ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__rd_ = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15193492622890837668ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__re = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13461805982735499455ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__rh = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13602653131598278881ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__rl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17042484722290052480ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__ra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6137523047073365234ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__fl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1516265638635829615ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__sp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3178220728433742999ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2070159885491326225ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__wz = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5012607710898164137ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__tmp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2078272086382811746ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__ir = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2960884793723283894ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__tleft = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11358046776945498648ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__im = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11963679248492783954ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__ustep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13270698398004991409ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7699064359970763954ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__hl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11649242919959487317ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__bc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10195279079788621316ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__de = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3140181103323144861ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__src_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9923490688172983096ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__rp_val = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7602440605526390305ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__push_val = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1434976901663115214ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->phoenix_core__DOT__u_cpu__DOT__cyc_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 972008155581975083ull);
    }
    vlSelf->phoenix_core__DOT__u_cpu__DOT__alu_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14893185921505740667ull);
    vlSelf->phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10478240413280496162ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__coin1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__start1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__start2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p1_left__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p1_right__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p1_fire__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p1_fire2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p2_left__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p2_right__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p2_fire__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__p2_fire2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsw__0 = 0;
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
