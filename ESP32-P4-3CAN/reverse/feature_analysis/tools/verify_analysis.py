#!/usr/bin/env python3
"""Verify documentary completeness and provenance; no firmware is executed."""
import hashlib
import json
import re
import subprocess
from pathlib import Path

OUT=Path(__file__).resolve().parents[1]
ROOT=OUT.parent

def main():
    audit=json.loads((OUT/'evidence/coverage_audit.json').read_text())
    inventory=json.loads((OUT/'evidence/feature_inventory.json').read_text())
    routes=json.loads((OUT/'evidence/route_feature_links.json').read_text())
    controls=json.loads((OUT/'evidence/control_feature_links.json').read_text())
    errors=[]
    for field in ['unmapped_controls','unmapped_routes','unknown_js','unknown_backend']:
        if audit[field]: errors.append(f'{field}: {audit[field]}')
    for f in inventory:
        if not f['logic'] or not f['pseudocode'] or not f['certainty']: errors.append(f'empty feature: {f["key"]}')
        if not (OUT/'modules'/f'{f["module"]}.md').exists(): errors.append(f'missing module: {f["key"]}')
        for h in f['handler_evidence']:
            if not (ROOT/'decompiled'/h['file']).exists(): errors.append(f'missing handler: {h["file"]}')
    for name,expected in audit['source_hashes'].items():
        if hashlib.sha256((ROOT/name).read_bytes()).hexdigest()!=expected: errors.append(f'changed frontend: {name}')
    links=0
    for p in [*OUT.glob('*.md'),*OUT.glob('modules/*.md')]:
        if p.name.startswith('._'): continue # macOS AppleDouble filesystem metadata
        for target in re.findall(r'\]\(([^)]+)\)',p.read_text()):
            if target.startswith(('https://','http://','#','mailto:')): continue
            target=target.strip('<>'); raw=target.split('#')[0]
            if not raw: continue
            resolved=(p.parent/raw).resolve()
            links+=1
            if not resolved.exists(): errors.append(f'broken link {p.name}: {target}')
            elif '#' in target and resolved.suffix=='.md':
                fragment=target.split('#',1)[1]
                if f'id="{fragment}"' not in resolved.read_text(): errors.append(f'unknown anchor {p.name}: {target}')
    viewer=(OUT/'index.html').read_text()
    embedded=re.search(r'<script type="application/json" id="data">(.*?)</script>',viewer,re.S)
    viewer_records=json.loads(embedded.group(1))
    if len(viewer_records)!=len(inventory): errors.append('viewer count mismatch')
    script=re.findall(r'<script>(.*?)</script>',viewer,re.S)[0]
    parser=OUT/'tools/js_parser/node_modules/acorn'
    result=subprocess.run(['node','-e','const a=require(process.argv[1]);let s="";process.stdin.setEncoding("utf8");process.stdin.on("data",x=>s+=x);process.stdin.on("end",()=>a.parse(s,{ecmaVersion:"latest"}));',str(parser)],input=script,text=True,capture_output=True)
    if result.returncode: errors.append('viewer JavaScript syntax: '+result.stderr)
    # JSON evidence references exact unique semantic IDs; repeated DOM controls are permitted.
    keys={f['key'] for f in inventory}
    for row in [*routes,*controls]:
        if not row['features'] or any(k not in keys for k in row['features']): errors.append('invalid evidence feature link')
    summary=dict(ok=not errors,modules=audit['modules'],semantic_features=len(inventory),
                 routes=len(routes),control_rows=len(controls),local_document_links_checked=links,
                 viewer_records=len(viewer_records),viewer_js_syntax_ok=result.returncode==0,
                 original_frontend_hashes_unchanged=not any('changed frontend' in e for e in errors),
                 errors=errors,
                 checks_are_documentary_only=True)
    (OUT/'evidence/verification.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2)+'\n')
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    if errors: raise SystemExit(1)

if __name__=='__main__': main()
