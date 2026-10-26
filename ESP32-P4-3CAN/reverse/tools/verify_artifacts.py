#!/usr/bin/env python3
"""Check recovered artifacts against original bytes and the compiled C inspector."""
import csv
import hashlib
import json
import struct
import subprocess
import zlib
from pathlib import Path


def main():
    root = Path(__file__).resolve().parents[1]
    m = json.loads((root / "analysis/manifest.json").read_text())
    checks = []
    def check(name, condition):
        if not condition:
            raise AssertionError(name)
        checks.append(name)
    original = Path(m["input"]["path"]).read_bytes()
    app = (root / "extracted/application.bin").read_bytes()
    check("bootstrap input unchanged", hashlib.sha256(original).hexdigest() == m["input"]["sha256"])
    if "ota" in m:
        ota = Path(m["ota"]["path"]).read_bytes()
        check("OTA input unchanged", hashlib.sha256(ota).hexdigest() == m["ota"]["sha256"])
        check("application equals OTA", app == ota)
    check("application equals bootstrap load image", original[m["application_offset"]:m["application_offset"] + len(app)] == app)
    check("application checksum and SHA256 footer", m["application"]["checksum_valid"] and m["application"]["validation_hash_valid"])
    check("bootloader checksum and SHA256 footer", m["bootloader"]["checksum_valid"] and m["bootloader"]["validation_hash_valid"])
    check("partition table MD5", m["partition_table_md5_valid"])
    elf = (root / "extracted/application.analysis.elf").read_bytes()
    phoff = struct.unpack_from("<I", elf, 28)[0]
    phsize, count = struct.unpack_from("<HH", elf, 42)
    check("ELF machine is RISC-V", struct.unpack_from("<H", elf, 18)[0] == 243)
    check("ELF contains exactly all seven image segments", count == len(m["application"]["segments"]))
    for i, s in enumerate(m["application"]["segments"]):
        typ, offset, va, _, size, memsize, _, _ = struct.unpack_from("<8I", elf, phoff + i * phsize)
        payload = app[s["image_offset"]:s["image_offset"] + s["size"]]
        check(f"ELF segment {i} address and bytes", typ == 1 and va == s["address"] and size == memsize == len(payload) and elf[offset:offset + size] == payload)
        extracted = root / f"extracted/segments/segment_{i}_{s['address']:08x}.bin"
        check(f"raw segment {i} matches firmware", extracted.read_bytes() == payload)
    for asset in m["assets"]:
        payload = (root / "recovered_web" / asset["file"]).read_bytes()
        check(f"{asset['file']} content hash", hashlib.sha256(payload).hexdigest() == asset["sha256"])
        if "compressed_size" in asset:
            zipped = (root / "recovered_web" / (asset["file"] + ".gz")).read_bytes()
            check(f"{asset['file']} exact original compressed bytes", zipped == app[asset["offset"]:asset["offset"] + asset["compressed_size"]])
            check(f"{asset['file']} decompression round trip", zlib.decompress(zipped, 31) == payload)
    functions = list(csv.DictReader((root / "decompiled/functions.tsv").open(), delimiter="\t"))
    check("every exported function has C pseudocode", all((root / "decompiled" / row["file"]).is_file() for row in functions if row["decompiled"] == "true"))
    routes = json.loads((root / "analysis/http_routes_recovered.json").read_text())
    check("all 87 route registrations recovered", len(routes) == 87)
    check("all route handlers have C pseudocode", all(r["handler_file"] for r in routes))
    cli = root / "reconstructed/build/albert_inspect"
    result = subprocess.run([str(cli)], check=True, capture_output=True, text=True)
    (root / "analysis/reconstructed_inspect.txt").write_text(result.stdout)
    check("compiled C formats original ELF digest correctly", "Original ELF SHA256: " + m["descriptor"]["original_elf_sha256"] in result.stdout)
    check("compiled C preserves original route addresses", all(r["path"] in result.stdout and f"original-handler={r['handler_address']}" in result.stdout for r in routes))
    board = json.loads((root / "analysis/board_profile.json").read_text())
    for layout in ["layout_a", "layout_b"]:
        for i, pins in enumerate(board[layout]):
            expected = f"CAN{i} {board['channels'][i]['logical_name']} TX={pins['tx']} RX={pins['rx']} bitrate={board['channels'][i]['bitrate']}"
            check(f"compiled C preserves {layout} channel {i}", expected in result.stdout)
    summary = {"passed": len(checks), "checks": checks, "original_firmware_modified": False,
               "native_c_build_verified": True, "esp_idf_target_build_verified": False,
               "hardware_tested": False}
    (root / "analysis/validation.json").write_text(json.dumps(summary, indent=2) + "\n")
    print(json.dumps(summary, indent=2))


if __name__ == "__main__":
    main()
