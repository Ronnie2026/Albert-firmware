#!/usr/bin/env python3
"""Look up firmware strings, HTTP callbacks, and recovered C pseudocode."""
import argparse
import csv
import json
from pathlib import Path


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    group = ap.add_mutually_exclusive_group(required=True)
    group.add_argument("--search", help="Case-insensitive literal string search")
    group.add_argument("--route", help="Exact registered HTTP path")
    group.add_argument("--function", help="Function entry virtual address, e.g. 0x48117336")
    ap.add_argument("--limit", type=int, default=20)
    args = ap.parse_args()
    root = Path(__file__).resolve().parents[1]
    if args.function:
        address = int(args.function.removeprefix("ram:"), 16)
        rows = csv.DictReader((root / "decompiled/functions.tsv").open(), delimiter="\t")
        for row in rows:
            if int(row["entry"].rsplit(":", 1)[-1], 16) == address:
                print((root / "decompiled" / row["file"]).read_text())
                return
        raise SystemExit("No separately identified function at this entry; inspect disassembly.")
    if args.route:
        routes = json.loads((root / "analysis/http_routes_recovered.json").read_text())
        for row in routes:
            if row["path"] == args.route:
                print(json.dumps(row, indent=2, ensure_ascii=False))
        return
    strings = json.loads((root / "analysis/strings.json").read_text())
    xrefs = list(csv.DictReader((root / "decompiled/string_xrefs.tsv").open(), delimiter="\t"))
    refs = {}
    for row in xrefs:
        refs.setdefault(int(row["string_address"].rsplit(":", 1)[-1], 16), []).append(row)
    matches = [s for s in strings if args.search.casefold() in s["text"].casefold()]
    print(f"{len(matches)} strings matched")
    for s in matches[:args.limit]:
        print(f"image+0x{s['offset']:08x} address=0x{s['address']:08x} {s['text'][:500]!r}")
        for ref in refs.get(s["address"], [])[:10]:
            print(f"  referenced at {ref['reference_from']} in {ref['function_name'] or '(data / unassigned)'}")


if __name__ == "__main__":
    main()
