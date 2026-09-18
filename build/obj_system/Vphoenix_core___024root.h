// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vphoenix_core.h for the primary calling header

#ifndef VERILATED_VPHOENIX_CORE___024ROOT_H_
#define VERILATED_VPHOENIX_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vphoenix_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vphoenix_core___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(dl_data,7,0);
        VL_IN8(dl_wr,0,0);
        VL_IN8(dl_done,0,0);
        VL_OUT8(game_phoenix,0,0);
        VL_OUT8(game_known,0,0);
        VL_IN8(coin1,0,0);
        VL_IN8(start1,0,0);
        VL_IN8(start2,0,0);
        VL_IN8(p1_left,0,0);
        VL_IN8(p1_right,0,0);
        VL_IN8(p1_fire,0,0);
        VL_IN8(p1_fire2,0,0);
        VL_IN8(p2_left,0,0);
        VL_IN8(p2_right,0,0);
        VL_IN8(p2_fire,0,0);
        VL_IN8(p2_fire2,0,0);
        VL_IN8(dsw,6,0);
        VL_IN8(cab_cocktail,0,0);
        VL_OUT8(hsync,0,0);
        VL_OUT8(vsync,0,0);
        VL_OUT8(hblank,0,0);
        VL_OUT8(vblank,0,0);
        VL_OUT8(de,0,0);
        VL_OUT8(cen_pix,0,0);
        VL_OUT8(snd_a,7,0);
        VL_OUT8(snd_b,7,0);
        VL_OUT8(snd_c,7,0);
        VL_OUT8(dbg_data,7,0);
        VL_OUT8(dbg_we,0,0);
        VL_OUT8(dbg_stb,0,0);
        VL_OUT8(dbg_fetch,0,0);
        CData/*3:0*/ phoenix_core__DOT__div;
        CData/*7:0*/ phoenix_core__DOT__cpu_dout;
        CData/*7:0*/ phoenix_core__DOT__cpu_din;
        CData/*0:0*/ phoenix_core__DOT__cpu_mreq;
        CData/*0:0*/ phoenix_core__DOT__cpu_we;
        CData/*0:0*/ phoenix_core__DOT__cpu_fetch_q;
        CData/*0:0*/ phoenix_core__DOT__sel_vram;
        CData/*0:0*/ phoenix_core__DOT__sel_vreg;
        CData/*0:0*/ phoenix_core__DOT__wr_pulse;
        CData/*7:0*/ phoenix_core__DOT__videoreg;
        CData/*7:0*/ phoenix_core__DOT__scroll;
        CData/*7:0*/ phoenix_core__DOT__prog_data;
        CData/*7:0*/ phoenix_core__DOT__vram_dout;
        CData/*7:0*/ phoenix_core__DOT__vram_b_data;
        CData/*7:0*/ phoenix_core__DOT__bgrom_lsb;
        CData/*7:0*/ phoenix_core__DOT__bgrom_msb;
        CData/*7:0*/ phoenix_core__DOT__fgrom_lsb;
        CData/*7:0*/ phoenix_core__DOT__fgrom_msb;
        CData/*7:0*/ phoenix_core__DOT__prom_lo;
        CData/*7:0*/ phoenix_core__DOT__prom_hi;
        CData/*0:0*/ phoenix_core__DOT__u_mem__DOT__sel_prog;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__vcnt;
        CData/*2:0*/ phoenix_core__DOT__u_video__DOT__phase;
        CData/*0:0*/ phoenix_core__DOT__u_video__DOT__cocktail;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bx;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__fg_code;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bg_code;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__fg_lsb;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__fg_msb;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bg_lsb;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bg_msb;
    };
    struct {
        CData/*1:0*/ phoenix_core__DOT__u_video__DOT__fg_pen;
        CData/*0:0*/ phoenix_core__DOT__u_video__DOT__active;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rb;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rc;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rd_;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__re;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rh;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rl;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__ra;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__fl;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__ir;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__tleft;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__im;
        CData/*3:0*/ phoenix_core__DOT__u_cpu__DOT__ustep;
        CData/*1:0*/ phoenix_core__DOT__u_cpu__DOT__state;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__src_reg;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf;
        CData/*0:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__dl_data__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dl_wr__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dl_done__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__coin1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__start1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__start2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_left__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_right__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_fire__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_fire2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_left__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_right__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_fire__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_fire2__0;
        CData/*6:0*/ __Vtrigprevexpr___TOP__dsw__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cab_cocktail__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(dbg_addr,15,0);
        SData/*15:0*/ phoenix_core__DOT__cpu_addr;
        SData/*12:0*/ phoenix_core__DOT__vram_b_addr;
        SData/*10:0*/ phoenix_core__DOT__bgrom_addr;
        SData/*10:0*/ phoenix_core__DOT__fgrom_addr;
        SData/*12:0*/ phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr;
        SData/*13:0*/ phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr;
        SData/*8:0*/ phoenix_core__DOT__u_video__DOT__hcnt;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__sp;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__pc;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__wz;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__tmp;
    };
    struct {
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__hl;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__bc;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__de;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__rp_val;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__push_val;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__alu_out;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
        VL_IN(dl_addr,16,0);
        VL_OUT(rgb,23,0);
        IData/*31:0*/ phoenix_core__DOT__u_mem__DOT__prog_sum;
        IData/*16:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q;
        IData/*16:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q;
        IData/*16:0*/ __Vtrigprevexpr___TOP__dl_addr__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 8192> phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16384> phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> phoenix_core__DOT__u_cpu__DOT__cyc_lut;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vphoenix_core__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*23:0*/, 64> phoenix_core__DOT__u_video__DOT__PAL_LUT = {{
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0x0023ad24U, 0x0023ad24U, 0x002ab5b6U, 0x002db8e0U,
        0x002edf2dU, 0x002edf2dU, 0x0035e7bfU, 0x0036e8e9U,
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0x0023ad24U, 0x0023ad24U, 0x002ab5b6U, 0x002db8e0U,
        0x002edf2dU, 0x002edf2dU, 0x0035e7bfU, 0x0036e8e9U,
        0x009f1114U, 0x009f1114U, 0x00a518a5U, 0x00a71bceU,
        0x009f1114U, 0x009f1114U, 0x00a518a5U, 0x00a71bceU,
        0x00c0c136U, 0x00c0c136U, 0x00c8c8c8U, 0x00cccaf1U,
        0x00cdf040U, 0x00cdf040U, 0x00d4f7d5U, 0x00d5fbf9U,
        0x00ca1618U, 0x00ca1618U, 0x00d11eaaU, 0x00d31fd2U,
        0x00ca1618U, 0x00ca1618U, 0x00d11eaaU, 0x00d31fd2U,
        0x00edc63aU, 0x00edc63aU, 0x00f4cdcfU, 0x00f5d0f5U,
        0x00f6f644U, 0x00f6f644U, 0x00fdfdd9U, 0x00ffffffU
    }};

    // CONSTRUCTORS
    Vphoenix_core___024root(Vphoenix_core__Syms* symsp, const char* namep);
    ~Vphoenix_core___024root();
    VL_UNCOPYABLE(Vphoenix_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
