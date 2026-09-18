// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_video_top.h for the primary calling header

#ifndef VERILATED_VTB_VIDEO_TOP___024ROOT_H_
#define VERILATED_VTB_VIDEO_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_video_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_video_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(dl_data,7,0);
        VL_IN8(dl_wr,0,0);
        VL_IN8(dl_done,0,0);
        VL_IN8(vr_we,0,0);
        VL_IN8(vr_din,7,0);
        VL_IN8(videoreg,7,0);
        VL_IN8(scroll,7,0);
        VL_IN8(cab_cocktail,0,0);
        VL_OUT8(game_phoenix,0,0);
        VL_OUT8(game_known,0,0);
        VL_OUT8(de,0,0);
        VL_OUT8(hblank,0,0);
        VL_OUT8(vblank,0,0);
        VL_OUT8(vcnt,7,0);
        CData/*7:0*/ tb_video_top__DOT__vram_b_data;
        CData/*7:0*/ tb_video_top__DOT__bgrom_lsb;
        CData/*7:0*/ tb_video_top__DOT__bgrom_msb;
        CData/*7:0*/ tb_video_top__DOT__fgrom_lsb;
        CData/*7:0*/ tb_video_top__DOT__fgrom_msb;
        CData/*7:0*/ tb_video_top__DOT__prom_lo;
        CData/*7:0*/ tb_video_top__DOT__prom_hi;
        CData/*2:0*/ tb_video_top__DOT__u_video__DOT__phase;
        CData/*0:0*/ tb_video_top__DOT__u_video__DOT__cocktail;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__sx;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__sy;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__bx;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__fg_code;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__bg_code;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__fg_lsb;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__fg_msb;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__bg_lsb;
        CData/*7:0*/ tb_video_top__DOT__u_video__DOT__bg_msb;
        CData/*1:0*/ tb_video_top__DOT__u_video__DOT__fg_pen;
        CData/*0:0*/ tb_video_top__DOT__u_video__DOT__active;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__dl_data__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dl_wr__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dl_done__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__vr_we__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__vr_din__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__videoreg__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__scroll__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cab_cocktail__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(vr_addr,12,0);
        VL_OUT16(hcnt,8,0);
        SData/*12:0*/ tb_video_top__DOT__vram_b_addr;
        SData/*10:0*/ tb_video_top__DOT__bgrom_addr;
        SData/*10:0*/ tb_video_top__DOT__fgrom_addr;
        SData/*12:0*/ __Vtrigprevexpr___TOP__vr_addr__0;
        VL_IN(dl_addr,16,0);
        VL_OUT(rgb,23,0);
        IData/*31:0*/ tb_video_top__DOT__u_mem__DOT__prog_sum;
        IData/*16:0*/ __Vtrigprevexpr___TOP__dl_addr__0;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 2048> tb_video_top__DOT__u_mem__DOT__u_fgm__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> tb_video_top__DOT__u_mem__DOT__u_fgl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> tb_video_top__DOT__u_mem__DOT__u_bgm__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> tb_video_top__DOT__u_mem__DOT__u_bgl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> tb_video_top__DOT__u_mem__DOT__u_ph__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> tb_video_top__DOT__u_mem__DOT__u_pl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 8192> tb_video_top__DOT__u_mem__DOT__u_vram__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtb_video_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*23:0*/, 64> tb_video_top__DOT__u_video__DOT__PAL_LUT = {{
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
    Vtb_video_top___024root(Vtb_video_top__Syms* symsp, const char* namep);
    ~Vtb_video_top___024root();
    VL_UNCOPYABLE(Vtb_video_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
