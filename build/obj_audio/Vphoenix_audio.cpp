// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vphoenix_audio__pch.h"

//============================================================
// Constructors

Vphoenix_audio::Vphoenix_audio(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vphoenix_audio__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , clk_audio{vlSymsp->TOP.clk_audio}
    , reset{vlSymsp->TOP.reset}
    , is_phoenix{vlSymsp->TOP.is_phoenix}
    , snd_a{vlSymsp->TOP.snd_a}
    , snd_b{vlSymsp->TOP.snd_b}
    , snd_c{vlSymsp->TOP.snd_c}
    , sample_tick{vlSymsp->TOP.sample_tick}
    , dbg_notes{vlSymsp->TOP.dbg_notes}
    , dbg_poly{vlSymsp->TOP.dbg_poly}
    , sample{vlSymsp->TOP.sample}
    , audio_out{vlSymsp->TOP.audio_out}
    , dbg_tms{vlSymsp->TOP.dbg_tms}
    , dbg_freq0{vlSymsp->TOP.dbg_freq0}
    , dbg_vol0{vlSymsp->TOP.dbg_vol0}
    , dbg_pb4{vlSymsp->TOP.dbg_pb4}
    , dbg_pa6{vlSymsp->TOP.dbg_pa6}
    , dbg_pc5{vlSymsp->TOP.dbg_pc5}
    , dbg_pa5{vlSymsp->TOP.dbg_pa5}
    , dbg_fx{vlSymsp->TOP.dbg_fx}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vphoenix_audio::Vphoenix_audio(const char* _vcname__)
    : Vphoenix_audio(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vphoenix_audio::~Vphoenix_audio() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vphoenix_audio___024root___eval_debug_assertions(Vphoenix_audio___024root* vlSelf);
#endif  // VL_DEBUG
void Vphoenix_audio___024root___eval_static(Vphoenix_audio___024root* vlSelf);
void Vphoenix_audio___024root___eval_initial(Vphoenix_audio___024root* vlSelf);
void Vphoenix_audio___024root___eval_settle(Vphoenix_audio___024root* vlSelf);
void Vphoenix_audio___024root___eval(Vphoenix_audio___024root* vlSelf);

void Vphoenix_audio::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vphoenix_audio::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vphoenix_audio___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vphoenix_audio___024root___eval_static(&(vlSymsp->TOP));
        Vphoenix_audio___024root___eval_initial(&(vlSymsp->TOP));
        Vphoenix_audio___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vphoenix_audio___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vphoenix_audio::eventsPending() { return false; }

uint64_t Vphoenix_audio::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vphoenix_audio::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vphoenix_audio___024root___eval_final(Vphoenix_audio___024root* vlSelf);

VL_ATTR_COLD void Vphoenix_audio::final() {
    contextp()->executingFinal(true);
    Vphoenix_audio___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vphoenix_audio::hierName() const { return vlSymsp->name(); }
const char* Vphoenix_audio::modelName() const { return "Vphoenix_audio"; }
unsigned Vphoenix_audio::threads() const { return 1; }
void Vphoenix_audio::prepareClone() const { contextp()->prepareClone(); }
void Vphoenix_audio::atClone() const {
    contextp()->threadPoolpOnClone();
}
