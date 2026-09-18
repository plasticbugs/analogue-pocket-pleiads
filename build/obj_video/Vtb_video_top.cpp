// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_video_top__pch.h"

//============================================================
// Constructors

Vtb_video_top::Vtb_video_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_video_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , dl_data{vlSymsp->TOP.dl_data}
    , dl_wr{vlSymsp->TOP.dl_wr}
    , dl_done{vlSymsp->TOP.dl_done}
    , vr_we{vlSymsp->TOP.vr_we}
    , vr_din{vlSymsp->TOP.vr_din}
    , videoreg{vlSymsp->TOP.videoreg}
    , scroll{vlSymsp->TOP.scroll}
    , cab_cocktail{vlSymsp->TOP.cab_cocktail}
    , game_phoenix{vlSymsp->TOP.game_phoenix}
    , game_known{vlSymsp->TOP.game_known}
    , de{vlSymsp->TOP.de}
    , hblank{vlSymsp->TOP.hblank}
    , vblank{vlSymsp->TOP.vblank}
    , vcnt{vlSymsp->TOP.vcnt}
    , vr_addr{vlSymsp->TOP.vr_addr}
    , hcnt{vlSymsp->TOP.hcnt}
    , dl_addr{vlSymsp->TOP.dl_addr}
    , rgb{vlSymsp->TOP.rgb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_video_top::Vtb_video_top(const char* _vcname__)
    : Vtb_video_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_video_top::~Vtb_video_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_video_top___024root___eval_debug_assertions(Vtb_video_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_video_top___024root___eval_static(Vtb_video_top___024root* vlSelf);
void Vtb_video_top___024root___eval_initial(Vtb_video_top___024root* vlSelf);
void Vtb_video_top___024root___eval_settle(Vtb_video_top___024root* vlSelf);
void Vtb_video_top___024root___eval(Vtb_video_top___024root* vlSelf);

void Vtb_video_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_video_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_video_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_video_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_video_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_video_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_video_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_video_top::eventsPending() { return false; }

uint64_t Vtb_video_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_video_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_video_top___024root___eval_final(Vtb_video_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_video_top::final() {
    contextp()->executingFinal(true);
    Vtb_video_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_video_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_video_top::modelName() const { return "Vtb_video_top"; }
unsigned Vtb_video_top::threads() const { return 1; }
void Vtb_video_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_video_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
