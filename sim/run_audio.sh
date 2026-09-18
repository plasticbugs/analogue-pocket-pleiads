#!/bin/sh
# Replay MAME's own sound command stream through the RTL and compare the
# result against MAME's recording of it and against the reference model.
set -e
cd "$(dirname "$0")/.."
GAME=${GAME:-pleiads}
SECS=${SECS:-20}
OBJ=build/obj_audio
mkdir -p "$OBJ" build/mamecfg

if [ ! -x "$OBJ/Vphoenix_audio" ] || [ -n "$(find rtl sim -newer "$OBJ/Vphoenix_audio" \( -name '*.sv' -o -name '*.cpp' -o -name '*.svh' \) 2>/dev/null)" ]; then
    echo "building..."
    verilator --cc --exe --build -j 0 -O2 \
        -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
        -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-BLKSEQ -Wno-MULTIDRIVEN -Wno-PINCONNECTEMPTY \
        -Irtl --Mdir "$OBJ" -CFLAGS "-O2" --top-module phoenix_audio \
        rtl/tms36xx.sv rtl/pleiads_sound.sv rtl/phoenix_audio.sv \
        sim/tb_audio.cpp >/dev/null
fi

if [ ! -f "build/snd_$GAME.txt" ] || [ ! -f "build/mame_$GAME.wav" ] || [ "${REGEN:-0}" = "1" ]; then
    echo "capturing MAME's audio and command stream..."
    rm -f "build/mame_$GAME.wav"
    PL_OUT="build/snd_$GAME.txt" tools/mame.sh "$GAME" \
        -autoboot_script tools/sound_trace.lua \
        -wavwrite "build/mame_$GAME.wav" -seconds_to_run "$SECS" >/dev/null 2>&1
fi

echo "reference model..."
python3 tools/sound_model.py "build/snd_$GAME.txt" "build/ref_$GAME.wav" "$SECS" >/dev/null
echo "RTL..."
"$OBJ/Vphoenix_audio" "build/snd_$GAME.txt" "build/rtl_$GAME.wav" "$SECS"

echo
echo "=== RTL against MAME ==="
python3 tools/compare_audio.py "build/mame_$GAME.wav" "build/rtl_$GAME.wav"
echo
echo "=== RTL against the reference model ==="
python3 tools/compare_audio.py "build/ref_$GAME.wav" "build/rtl_$GAME.wav"
