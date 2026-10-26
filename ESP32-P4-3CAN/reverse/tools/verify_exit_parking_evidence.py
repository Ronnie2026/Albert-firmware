#!/usr/bin/env python3
"""Check selected RISC-V disassembly bytes against firmware; static provenance only."""
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
RANGES = [
    ("293 builder gates and output", 0x480C773E, 0x480C7922),
    ("stream19 dispatch", 0x480C645A, 0x480C645C),
    ("stream19 final validation", 0x480C6698, 0x480C676A),
    ("399 invalid source branch", 0x480D8FF8, 0x480D903C),
    ("399 invalid branch and edge continuity", 0x480D9348, 0x480D93DA),
    ("399 checksum branch", 0x480D9530, 0x480D9554),
    ("399 state edge", 0x480D98CA, 0x480D98F0),
    ("257 standstill observation", 0x480DABE8, 0x480DAC80),
    ("257 cancel stream19", 0x480DA8D4, 0x480DA8EA),
    ("30A source checksum and fields", 0x480CBC62, 0x480CBCA2),
    ("30A output and deadline", 0x480CBB6A, 0x480CBBF0),
    ("published spoof active gates", 0x4805B53C, 0x4805B5BE),
    ("published active disabled fallback", 0x4805C1DC, 0x4805C1F6),
    ("published active no TX timestamp fallback", 0x4805C296, 0x4805C2A4),
    ("published spoof snapshot copy", 0x4805BA7C, 0x4805BABC),
    ("device base for snapshot update", 0x4810D02E, 0x4810D036),
    ("door edge confirmation", 0x4804220C, 0x480422D6),
    ("door packed field decode", 0x48042430, 0x4804247A),
    ("P launch new399 state6 branch", 0x48106534, 0x48106546),
    ("P launch complete counter", 0x481071D8, 0x48107218),
    ("enhanced AP field edits", 0x4FF23708, 0x4FF23724),
]


def main():
    manifest = json.loads((ROOT / "analysis/manifest.json").read_text())
    bootstrap = (ROOT.parent / Path(manifest["input"]["path"]).name).read_bytes()
    application = (ROOT / "extracted/application.bin").read_bytes()
    ota = (ROOT.parent / Path(manifest["ota"]["path"]).name).read_bytes()
    app_offset = manifest["application_offset"]
    errors = []
    hashes = {name: hashlib.sha256(data).hexdigest() for name, data in
              [("bootstrap", bootstrap), ("application", application), ("ota", ota)]}
    for name, expected in [("bootstrap", manifest["input"]["sha256"]),
                           ("application", manifest["application"]["sha256"]),
                           ("ota", manifest["ota"]["sha256"])]:
        if hashes[name] != expected:
            errors.append(f"{name} SHA256 differs from manifest")
    if ota != application:
        errors.append("OTA differs from extracted application")
    if bootstrap[app_offset:app_offset + len(application)] != application:
        errors.append("bootstrap application differs from extracted application")

    pattern = re.compile(r"^([0-9a-f]{8}):\s+([0-9a-f]{4}|[0-9a-f]{8})\s+(.+)$")
    records = [[] for _ in RANGES]
    with (ROOT / "analysis/application.disassembly.txt").open() as source:
        for line in source:
            match = pattern.match(line)
            if not match:
                continue
            address = int(match[1], 16)
            selected = [i for i, (_, start, end) in enumerate(RANGES) if start <= address <= end]
            if not selected:
                continue
            # objdump prints a 16/32-bit instruction word in numeric order.
            machine = int(match[2], 16).to_bytes(len(match[2]) // 2, "little")
            segment = next((s for s in manifest["application"]["segments"]
                            if s["address"] <= address
                            and address + len(machine) <= s["address"] + s["size"]), None)
            if segment is None:
                errors.append(f"no mapped segment for {address:#x}")
                continue
            offset = segment["image_offset"] + address - segment["address"]
            if application[offset:offset + len(machine)] != machine:
                errors.append(f"application instruction mismatch at {address:#x}")
            if bootstrap[app_offset + offset:app_offset + offset + len(machine)] != machine:
                errors.append(f"bootstrap instruction mismatch at {address:#x}")
            for i in selected:
                records[i].append(line.rstrip())

    extracts = ["Albert P1.6.4 exit parking static machine evidence",
                "Source: analysis/application.disassembly.txt",
                "Bytes checked against bootstrap and extracted application.",
                "Static provenance only; no hardware or vehicle validation.", ""]
    summaries = []
    for (label, start, end), lines in zip(RANGES, records):
        if not lines:
            errors.append(f"empty disassembly range: {label}")
        extracts.extend([f"[{label}] {start:#010x}..{end:#010x}", *lines, ""])
        summaries.append(dict(label=label, start=f"{start:#010x}", end=f"{end:#010x}",
                              instruction_count=len(lines)))
    (ROOT / "analysis/exit_parking.machine_evidence.txt").write_text("\n".join(extracts))
    result = dict(ok=not errors, sha256=hashes, ota_matches_application=ota == application,
                  ranges=summaries, total_instruction_count=sum(map(len, records)),
                  mapping="application_offset + segment.image_offset + (VA - segment.address)",
                  errors=errors, checks_are_static_provenance_only=True, hardware_tested=False)
    (ROOT / "analysis/exit_parking.validation.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2) + "\n")
    print(json.dumps(result, ensure_ascii=False, indent=2))
    if errors:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
