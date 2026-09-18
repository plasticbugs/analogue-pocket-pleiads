#!/bin/sh
# End-to-end: run the core from reset, let it play the game itself, and diff
# the picture it produces against MAME's for the same moment.
#
# Everything else is checked in pieces -- video against a frozen state, the
# CPU against a bus trace. This is the one test where the core boots the ROM,
# runs the game's own code for thousands of frames and has to arrive at the
# same picture. Nothing is loaded into it but the ROM.
#
# Frame numbering is not assumed to line up. MAME starts mid-vblank so its
# first frame is short, and its frozen dump is the video RAM as it stands at
# the *end* of a frame while the core renders during one. A window of frames
# is captured and the best match reported; an exact match anywhere in the
# window is the pass.
set -e
cd "$(dirname "$0")/.."
GAME=${GAME:-pleiads}
FRAMES=${FRAMES:-"200 600 1200 2000"}
WINDOW=${WINDOW:-4}
OBJ=build/obj_system
OUT=artifacts/$GAME/e2e
mkdir -p "$OUT" build/mamecfg

sim/run_system.sh >/dev/null 2>&1 || true   # make sure the model is built

fail=0
for f in $FRAMES; do
    tag=$(printf "%04d" "$f")
    snap="artifacts/$GAME/attract_$tag.png"
    if [ ! -f "$snap" ]; then
        secs=$(awk "BEGIN{printf \"%d\", ($f+8)/61.035 + 2}")
        PL_OUT="$OUT" PL_FRAME="$f" PL_TAG="a$tag" PL_GAME="$GAME" PL_PLAY=0 \
            tools/mame.sh "$GAME" -autoboot_script tools/dumpstate.lua \
            -snapshot_directory "$OUT/snap_$tag" -seconds_to_run "$secs" \
            >/dev/null 2>&1
        mv "$(ls "$OUT/snap_$tag/$GAME"/*.png 2>/dev/null | head -1)" "$snap"
        rm -rf "$OUT/snap_$tag"
    fi
    "$OBJ/Vphoenix_core" frames "$GAME.rom" "$OUT/rtl_$tag" "$f" "$WINDOW" 2>/dev/null
    best=999999; bestf=""
    for cand in "$OUT/rtl_${tag}_"*.png; do
        [ -e "$cand" ] || continue
        n=$(python3 tools/diff_frames.py "$snap" "$cand" 2>/dev/null | head -1 | sed 's/.*: \([0-9]*\)\/.*/\1/')
        [ -n "$n" ] || continue
        if [ "$n" -lt "$best" ]; then best=$n; bestf=$cand; fi
    done
    if [ "$best" = "0" ]; then
        echo "  ok   $GAME frame $tag  (matched $(basename "$bestf"))"
    else
        echo "  FAIL $GAME frame $tag  best $best differing pixels ($(basename "$bestf"))"
        fail=1
    fi
done
[ $fail -eq 0 ] && echo "CORE PLAYS THE GAME AND ARRIVES AT MAME'S PICTURE" || echo "END-TO-END MISMATCH"
exit $fail
