#!/usr/bin/env python3
"""Build artifacts/index.html: a page showing, for every captured state, the
MAME snapshot beside the reference render beside the pixel diff, with the
current pass/fail. Open it in a browser and refresh after any change.

No dependencies; it only references the PNGs the other tools already wrote.
"""
import os, sys, glob, subprocess, html, datetime, shutil, re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def diff_count(a, b, out):
    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/diff_frames.py'), a, b, out],
                       capture_output=True, text=True)
    line = r.stdout.strip().splitlines()[0] if r.stdout.strip() else 'no output'
    try:
        n = int(line.split(':')[1].strip().split('/')[0])
    except Exception:
        n = -1
    return n, line


def main():
    rows, tot, bad = [], 0, 0
    for game in ('pleiads', 'phoenix'):
        for st in sorted(glob.glob(os.path.join(ROOT, f'artifacts/{game}/state_*.txt'))):
            tag = os.path.basename(st)[6:-4]
            d = os.path.join(ROOT, 'artifacts', game)
            snap, ref, dif = f'{d}/mame_{tag}.png', f'{d}/ref_{tag}.png', f'{d}/diff_{tag}.png'
            if not os.path.exists(snap):
                continue
            meta = {}
            for line in open(st):
                p = line.split()
                if len(p) == 2 and p[0] in ('VREG', 'SCROLL', 'CAB'):
                    meta[p[0]] = p[1]
                if p and p[0] == 'VRAM':
                    break
            if not os.path.exists(ref):
                subprocess.run([sys.executable, os.path.join(ROOT, 'tools/render_model.py'),
                                st, os.path.join(ROOT, f'{game}.rom'), ref], capture_output=True)
            n, line = diff_count(snap, ref, dif)
            tot += 1
            if n != 0:
                bad += 1
            vreg = int(meta.get('VREG', '0'), 16)
            bank = (vreg >> 1) & (1 if game == 'phoenix' else 3)
            rows.append(dict(game=game, tag=tag, n=n, line=line,
                             vreg=meta.get('VREG', '?'), scroll=meta.get('SCROLL', '?'),
                             page=vreg & 1, bank=bank,
                             snap=os.path.relpath(snap, os.path.join(ROOT, 'artifacts')),
                             ref=os.path.relpath(ref, os.path.join(ROOT, 'artifacts')),
                             dif=os.path.relpath(dif, os.path.join(ROOT, 'artifacts'))))

    # --- audio -----------------------------------------------------------
    audio = []
    adir = os.path.join(ROOT, 'artifacts', 'audio')
    for game in ('pleiads', 'phoenix'):
        m = os.path.join(ROOT, 'build', f'mame_{game}.wav')
        r = os.path.join(ROOT, 'build', f'rtl_{game}.wav')
        if not (os.path.exists(m) and os.path.exists(r)):
            continue
        os.makedirs(adir, exist_ok=True)
        for src, name in ((m, f'{game}_mame.wav'), (r, f'{game}_rtl.wav')):
            dst = os.path.join(adir, name)
            if not os.path.exists(dst) or os.path.getmtime(src) > os.path.getmtime(dst):
                shutil.copy(src, dst)
        out = subprocess.run([sys.executable, os.path.join(ROOT, 'tools/compare_audio.py'), m, r],
                             capture_output=True, text=True).stdout
        corr = re.search(r'correlation over the first [\d.]+ s: ([+-][\d.]+)', out)
        rms = re.search(r'^rms\s+\S+\s+\S+\s+([\d.]+)', out, re.M)
        spec = re.search(r'mean \|log\| band-energy error: ([\d.]+)', out)
        # The two games are judged differently on purpose. Pleiads' melody chip
        # is restarted by the CPU on every note, so it stays phase-locked to
        # MAME and waveform correlation means something. Phoenix's oscillators
        # free-run, and two of those are spectrally identical while correlating
        # at zero -- so it is judged on band energy per second instead.
        if game == 'phoenix':
            val = float(spec.group(1)) if spec else 9.9
            badge, good = f'spectral error {val:.3f}', val < 0.15
        else:
            val = float(corr.group(1)) if corr else 0.0
            badge, good = f'correlation {val:+.4f}', val > 0.9
        extra = []
        for name, cap in ((f'{game}_ingame_1_mame.wav', 'in-game, MAME'),
                          (f'{game}_ingame_2_shipped.wav', 'in-game, v0.1.0-alpha as shipped'),
                          (f'{game}_ingame_3_now.wav', 'in-game, this core now')):
            if os.path.exists(os.path.join(adir, name)):
                extra.append((f'audio/{name}', cap))
        audio.append(dict(game=game, badge=badge, good=good, extra=extra,
                          rms=rms.group(1) if rms else '?', text=out,
                          mame=f'audio/{game}_mame.wav', rtl=f'audio/{game}_rtl.wav'))

    ok = bad == 0
    body = []
    for r in rows:
        cls = 'ok' if r['n'] == 0 else 'bad'
        body.append(f'''
    <section class="state {cls}">
      <h2>{html.escape(r['game'])} &middot; frame {html.escape(r['tag'])}
          <span class="badge">{'0 px differ' if r['n']==0 else f"{r['n']} px differ"}</span></h2>
      <p class="meta">videoreg <code>{r['vreg']}</code> &rarr; page {r['page']}, palette bank {r['bank']}
         &middot; scroll <code>{r['scroll']}</code></p>
      <div class="imgs">
        <figure><img src="{r['snap']}" alt="MAME"><figcaption>MAME (oracle)</figcaption></figure>
        <figure><img src="{r['ref']}" alt="reference"><figcaption>reference renderer</figcaption></figure>
        <figure><img src="{r['dif']}" alt="diff"><figcaption>diff (red = differing)</figcaption></figure>
      </div>
    </section>''')

    audio_html = ''
    if audio:
        rows = []
        for a in audio:
            good = a['good']
            more = ''.join(f'''
        <figure><audio controls src="{src}"></audio>
                <figcaption>{html.escape(cap)}</figcaption></figure>''' for src, cap in a['extra'])
            rows.append(f'''
    <section class="state {'ok' if good else 'bad'}">
      <h2>{html.escape(a['game'])} &middot; audio
          <span class="badge">{html.escape(a['badge'])}</span></h2>
      <p class="meta">RMS ratio to MAME <code>{html.escape(a['rms'])}</code> &middot;
         same sound command stream, twenty seconds of play</p>
      <div class="imgs">
        <figure><audio controls src="{a['mame']}"></audio>
                <figcaption>MAME (oracle)</figcaption></figure>
        <figure><audio controls src="{a['rtl']}"></audio>
                <figcaption>this core</figcaption></figure>{more}
      </div>
      <details><summary>full measurement</summary><pre>{html.escape(a['text'])}</pre></details>
    </section>''')
        audio_html = '\n'.join(rows)

    now = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
    doc = f'''<!doctype html>
<html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>Pleiads core &mdash; video regression</title>
<style>
  :root {{ --bg:#faf9f7; --fg:#1b1a18; --mut:#6b6762; --line:#e2ded8;
           --ok:#1c7c4a; --okbg:#e8f5ed; --bad:#a8271c; --badbg:#fdeceb; --card:#fff; }}
  @media (prefers-color-scheme: dark) {{ :root:not([data-theme=light]) {{
    --bg:#14130f; --fg:#f2efe9; --mut:#9a948b; --line:#2f2c27;
    --ok:#6ed79f; --okbg:#152a1f; --bad:#f08a80; --badbg:#2e1714; --card:#1c1a16; }} }}
  * {{ box-sizing:border-box; }}
  body {{ margin:0; background:var(--bg); color:var(--fg); padding:0 16px 64px;
          font:15px/1.55 ui-sans-serif,-apple-system,"Segoe UI",Roboto,sans-serif; }}
  .wrap {{ max-width:1100px; margin:0 auto; }}
  header {{ padding:40px 0 24px; border-bottom:1px solid var(--line); margin-bottom:28px; }}
  h1 {{ font-size:26px; margin:0 0 6px; letter-spacing:-.02em; }}
  .sub {{ color:var(--mut); font-size:14px; margin:0; }}
  .summary {{ display:inline-block; margin-top:16px; padding:8px 14px; border-radius:8px;
              font-weight:600; font-size:14px;
              background:{'var(--okbg)' if ok else 'var(--badbg)'};
              color:{'var(--ok)' if ok else 'var(--bad)'}; }}
  .state {{ background:var(--card); border:1px solid var(--line); border-radius:12px;
            padding:18px 20px 20px; margin-bottom:20px; }}
  h2 {{ font-size:16px; margin:0 0 4px; display:flex; align-items:center; gap:10px;
        flex-wrap:wrap; letter-spacing:-.01em; }}
  .badge {{ font-size:12px; font-weight:600; padding:3px 9px; border-radius:99px; }}
  .ok .badge {{ background:var(--okbg); color:var(--ok); }}
  .bad .badge {{ background:var(--badbg); color:var(--bad); }}
  .meta {{ color:var(--mut); font-size:13px; margin:0 0 14px; }}
  code {{ font:12px ui-monospace,SFMono-Regular,Menlo,monospace; background:var(--bg);
          padding:1px 5px; border-radius:4px; border:1px solid var(--line); }}
  .imgs {{ display:flex; gap:16px; flex-wrap:wrap; }}
  figure {{ margin:0; }}
  img {{ display:block; width:208px; height:256px; image-rendering:pixelated;
         border:1px solid var(--line); border-radius:6px; background:#000; }}
  figcaption {{ font-size:12px; color:var(--mut); margin-top:6px; text-align:center; }}
  @media (max-width:700px) {{ img {{ width:150px; height:185px; }} }}
  audio {{ display:block; width:260px; }}
  details {{ margin-top:14px; font-size:13px; color:var(--mut); }}
  summary {{ cursor:pointer; }}
  pre {{ overflow-x:auto; font-size:12px; background:var(--bg); padding:12px;
         border:1px solid var(--line); border-radius:8px; }}
</style></head><body><div class="wrap">
<header>
  <h1>Pleiads / Phoenix &mdash; video regression</h1>
  <p class="sub">Reference renderer against MAME, one row per frozen state. Generated {now}.</p>
  <div class="summary">{'ALL ' + str(tot) + ' STATES PIXEL-IDENTICAL' if ok else f'{bad} of {tot} STATES DIFFER'}</div>
</header>
{''.join(body)}
{audio_html}
</div></body></html>'''
    out = os.path.join(ROOT, 'artifacts/index.html')
    open(out, 'w').write(doc)
    print(f'wrote {out}: {tot} states, {bad} failing')
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
