// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPLEIADS_SOUND__SYMS_H_
#define VERILATED_VPLEIADS_SOUND__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpleiads_sound.h"

// INCLUDE MODULE CLASSES
#include "Vpleiads_sound___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vpleiads_sound__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpleiads_sound* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpleiads_sound___024root       TOP;

    // CONSTRUCTORS
    Vpleiads_sound__Syms(VerilatedContext* contextp, const char* namep, Vpleiads_sound* modelp);
    ~Vpleiads_sound__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
