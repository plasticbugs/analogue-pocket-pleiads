#!/bin/sh
# Render every captured state with the reference renderer and diff it against
# the MAME snapshot of that same state. Zero differing pixels everywhere is the
# gate; anything else is a regression.
cd "$(dirname "$0")/.."
fail=0; n=0
for game in pleiads phoenix; do
    rom="$game.rom"
    [ -f "$rom" ] || continue
    for st in artifacts/$game/state_*.txt; do
        [ -e "$st" ] || continue
        tag=$(basename "$st" .txt); tag=${tag#state_}
        snap="artifacts/$game/mame_$tag.png"
        ref="artifacts/$game/ref_$tag.png"
        [ -f "$snap" ] || { echo "MISSING snapshot for $game $tag"; fail=1; continue; }
        python3 tools/render_model.py "$st" "$rom" "$ref" >/dev/null || { fail=1; continue; }
        out=$(python3 tools/diff_frames.py "$snap" "$ref" "artifacts/$game/diff_$tag.png")
        n=$((n+1))
        case "$out" in
            *"0/"*"pixels differ"*) echo "  ok   $game $tag" ;;
            *) echo "  FAIL $game $tag"; echo "$out" | sed 's/^/       /'; fail=1 ;;
        esac
    done
done
echo "--- $n states checked ---"
[ $fail -eq 0 ] && echo "ALL STATES PIXEL-IDENTICAL" || echo "REGRESSIONS PRESENT"
exit $fail
