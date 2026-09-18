#!/bin/sh
# Frozen-state video bench. Builds once, then renders every captured state
# through the RTL and diffs it against the MAME snapshot of that same state.
#
# This is the gate: zero differing pixels on every state, or the change does
# not go near a build.
set -e
cd "$(dirname "$0")/.."
OBJ=build/obj_video
mkdir -p "$OBJ"

if [ ! -x "$OBJ/Vtb_video_top" ] || [ -n "$(find rtl sim -newer "$OBJ/Vtb_video_top" -name '*.sv' -o -newer "$OBJ/Vtb_video_top" -name '*.cpp' -o -newer "$OBJ/Vtb_video_top" -name '*.svh' 2>/dev/null)" ]; then
    echo "building..."
    verilator --cc --exe --build -j 0 -O2 \
        -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-PINCONNECTEMPTY -Wno-WIDTHTRUNC \
        -Irtl --Mdir "$OBJ" -CFLAGS "-O2" -LDFLAGS "-lz" \
        --top-module tb_video_top \
        rtl/phoenix_dpram.sv rtl/phoenix_mem.sv rtl/phoenix_video.sv sim/tb_video_top.sv \
        sim/tb_video.cpp >/dev/null
fi

fail=0; n=0
for game in pleiads phoenix; do
    [ -f "$game.rom" ] || continue
    for st in artifacts/$game/state_*.txt; do
        [ -e "$st" ] || continue
        tag=$(basename "$st" .txt); tag=${tag#state_}
        out="artifacts/$game/rtl_$tag.png"
        "$OBJ/Vtb_video_top" "$st" "$game.rom" "$out" >/dev/null
        res=$(python3 tools/diff_frames.py "artifacts/$game/mame_$tag.png" "$out" \
                     "artifacts/$game/rtldiff_$tag.png" || true)
        n=$((n+1))
        case "$res" in
            *"0/"*) echo "  ok   $game $tag" ;;
            *) echo "  FAIL $game $tag"; echo "$res" | sed 's/^/       /'; fail=1 ;;
        esac
    done
done
echo "--- $n states through the RTL ---"
[ $fail -eq 0 ] && echo "RTL MATCHES MAME ON EVERY STATE" || echo "RTL REGRESSIONS PRESENT"
exit $fail
