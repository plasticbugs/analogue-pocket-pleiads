#!/bin/sh
# Publish a release from the bitstream currently in projects/output_files.
#
# Usage: cut-release.sh <tag> [--notes <file>]
#
# Ships the exact gateware that was verified, not a fresh compile: Quartus is
# not reproducible, and a rebuild is an unverified artefact. Everything outside
# the bitstream -- the JSON definitions, the ROM recipes, the README -- comes
# from the working tree, so a definition-only change can be released without
# rebuilding.
#
# Refuses to publish if the tree has uncommitted core changes, if the bitstream
# looks truncated, or if a ROM has found its way into the package.
set -e
TAG="$1"; shift 2>/dev/null || true
NOTES=""
while [ $# -gt 0 ]; do
    case "$1" in
        --notes) NOTES="$2"; shift 2 ;;
        *) shift ;;
    esac
done
[ -n "$TAG" ] || { echo "usage: cut-release.sh <tag> [--notes <file>]"; exit 1; }
cd "$(dirname "$0")/.."

command -v gh >/dev/null || { echo "gh CLI required"; exit 1; }
if gh release view "$TAG" >/dev/null 2>&1; then
    echo "release $TAG already exists; releases are immutable, pick another tag"; exit 1
fi
if [ -n "$(git status --porcelain pkg target rtl platform projects tools)" ]; then
    echo "working tree has uncommitted core changes; commit them so the tag matches"
    git status --short pkg target rtl platform projects tools
    exit 1
fi

RBF=projects/output_files/pleiads_pocket.rbf
[ -f "$RBF" ] || { echo "no bitstream at $RBF -- run tools/quartus_build.sh"; exit 1; }
SIZE=$(wc -c < "$RBF")
[ "$SIZE" -gt 500000 ] || { echo "bitstream is only $SIZE bytes, looks truncated"; exit 1; }

# Timing has to have been met, or the release is gateware nobody should install.
STA=projects/output_files/pleiads_pocket.sta.summary
[ -f "$STA" ] || { echo "no timing report -- run the full flow, not just map"; exit 1; }
if grep -q -- "Slack : -" "$STA"; then
    echo "refusing to release: timing is not met"
    grep -B2 -- "Slack : -" "$STA" | head -12
    exit 1
fi

python3 package-pocket.py >/dev/null
STRAY=$(find release -iname '*.rom' -o -iname '*.zip' | head -3)
[ -z "$STRAY" ] || { echo "refusing to release, ROMs in the package:"; echo "$STRAY"; exit 1; }

ZIP="pleiads-pocket-$TAG.zip"
rm -f "$ZIP"
(cd release/pocket && zip -qr "../../$ZIP" .)
echo "packaged $ZIP ($(wc -c < "$ZIP") bytes)"

git tag -a "$TAG" -m "$TAG" 2>/dev/null || true
git push -q origin "$TAG"

if [ -n "$NOTES" ]; then
    gh release create "$TAG" "$ZIP" --title "$TAG" --notes-file "$NOTES" --prerelease
else
    gh release create "$TAG" "$ZIP" --title "$TAG" --generate-notes --prerelease
fi
echo "published $TAG"
gh release view "$TAG" --json assets --jq '.assets[] | "  asset: \(.name) \(.size) bytes"'
