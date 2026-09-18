#!/bin/sh
# Full-system bench: run the core from reset and hold its CPU bus transaction
# sequence to the one MAME produces from the same reset.
set -e
cd "$(dirname "$0")/.."
GAME=${GAME:-pleiads}
N=${N:-200000}
OBJ=build/obj_system
mkdir -p "$OBJ" build

if [ ! -x "$OBJ/Vphoenix_core" ] || [ -n "$(find rtl sim -newer "$OBJ/Vphoenix_core" \( -name '*.sv' -o -name '*.cpp' -o -name '*.svh' \) 2>/dev/null)" ]; then
    echo "building..."
    verilator --cc --exe --build -j 0 -O2 \
        -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-PINCONNECTEMPTY \
        -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-BLKSEQ -Wno-CASEOVERLAP -Wno-UNUSEDPARAM -Wno-MULTIDRIVEN \
        -Irtl --Mdir "$OBJ" -CFLAGS "-O2" -LDFLAGS "-lz" --top-module phoenix_core \
        rtl/phoenix_dpram.sv rtl/phoenix_mem.sv rtl/phoenix_video.sv \
        rtl/i8085.sv rtl/tms36xx.sv rtl/pleiads_sound.sv rtl/phoenix_audio.sv rtl/phoenix_core.sv sim/tb_system.cpp >/dev/null
fi

if [ ! -f "build/mame_bus_$GAME.txt" ] || [ "${REGEN:-0}" = "1" ]; then
    echo "capturing the MAME trace..."
    PL_N="$N" PL_OUT="build/mame_bus_$GAME.txt" \
        tools/mame.sh "$GAME" -autoboot_script tools/bus_trace.lua \
        -seconds_to_run 12 >/dev/null 2>&1
fi

echo "running the RTL..."
"$OBJ/Vphoenix_core" bus "$GAME.rom" "build/rtl_bus_$GAME.txt" "$N"
python3 tools/diff_bus.py "build/mame_bus_$GAME.txt" "build/rtl_bus_$GAME.txt"
echo
python3 tools/check_cycles.py "build/rtl_bus_$GAME.txt"
