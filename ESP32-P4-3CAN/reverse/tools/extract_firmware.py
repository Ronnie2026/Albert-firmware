#!/usr/bin/env python3
"""Reproducible ESP image extraction; never modifies input firmware.

The ELF is an analysis container built from load segments, not the original ELF.
Uses only Python's standard library.
"""
import argparse
import csv
import hashlib
import json
import re
import struct
import zlib
from html.parser import HTMLParser
from pathlib import Path


def sha(data):
    return hashlib.sha256(data).hexdigest()


def cstr(data):
    return data.split(b"\0", 1)[0].decode("utf-8", errors="replace")


def parse_image(data, base=0):
    if data[base] != 0xE9:
        raise ValueError(f"Missing ESP magic at {base:#x}")
    header = data[base:base + 24]
    pos = base + 24
    segments = []
    check = 0xEF
    for i in range(header[1]):
        address, size = struct.unpack_from("<II", data, pos)
        pos += 8
        payload = data[pos:pos + size]
        if len(payload) != size:
            raise ValueError("Truncated load segment")
        for v in payload:
            check ^= v
        segments.append({"index": i, "address": address, "size": size,
                         "image_offset": pos - base, "sha256": sha(payload)})
        pos += size
    checksum_pos = (pos // 16) * 16 + 15
    has_hash = header[23] == 1
    end = checksum_pos + 1 + (32 if has_hash else 0)
    image = data[base:end]
    expected_hash = data[checksum_pos + 1:end].hex() if has_hash else None
    computed_hash = sha(data[base:checksum_pos + 1]) if has_hash else None
    return {"entry_point": struct.unpack_from("<I", header, 4)[0],
            "chip_id": struct.unpack_from("<H", header, 12)[0],
            "min_chip_revision_full": struct.unpack_from("<H", header, 15)[0],
            "max_chip_revision_full": struct.unpack_from("<H", header, 17)[0],
            "spi_mode": {0: "QIO", 1: "QOUT", 2: "DIO", 3: "DOUT"}.get(header[2], header[2]),
            "flash_size_bytes": (1 << (header[3] >> 4)) * 1024 * 1024,
            "flash_frequency_code": header[3] & 15,
            "size": len(image), "sha256": sha(image), "segments": segments,
            "checksum_stored": data[checksum_pos], "checksum_computed": check,
            "checksum_valid": data[checksum_pos] == check,
            "validation_hash_stored": expected_hash,
            "validation_hash_computed": computed_hash,
            "validation_hash_valid": expected_hash == computed_hash if has_hash else None}, image


def mapped_address(segments, offset):
    for s in segments:
        if s["image_offset"] <= offset < s["image_offset"] + s["size"]:
            return s["address"] + offset - s["image_offset"]
    return None


def make_elf(image, info, dest):
    # ESP-IDF's image serialization order is not the load address order.
    # These section attributes are analyst assignments, not recovered headers.
    names = [".flash.rodata", ".rtc.text", ".rtc.data", ".iram.vectors",
             ".flash.text", ".iram.text", ".dram.data"]
    flags = [2, 6, 3, 6, 6, 6, 3]  # SHF_ALLOC, EXECINSTR, WRITE
    segments = info["segments"]
    count = len(segments)
    buf = bytearray(52 + 32 * count)
    sections = [(0,) * 10]
    shstr = bytearray(b"\0")
    for i, s in enumerate(segments):
        name = names[i] if count == 7 else f".segment{i}"
        flag = flags[i] if count == 7 else 7
        name_offset = len(shstr)
        shstr += name.encode() + b"\0"
        buf += b"\0" * ((-len(buf)) % 16)
        offset = len(buf)
        payload = image[s["image_offset"]:s["image_offset"] + s["size"]]
        buf += payload
        struct.pack_into("<8I", buf, 52 + 32 * i, 1, offset, s["address"],
                         s["address"], len(payload), len(payload),
                         (4 | (1 if flag & 4 else 0) | (2 if flag & 1 else 0)), 16)
        sections.append((name_offset, 1, flag, s["address"], offset,
                         len(payload), 0, 0, 4, 0))
    name_offset = len(shstr)
    shstr += b".shstrtab\0"
    offset = len(buf)
    buf += shstr
    sections.append((name_offset, 3, 0, 0, offset, len(shstr), 0, 0, 1, 0))
    buf += b"\0" * ((-len(buf)) % 4)
    shoff = len(buf)
    for section in sections:
        buf += struct.pack("<10I", *section)
    ident = b"\x7fELF\x01\x01\x01" + b"\0" * 9
    buf[:52] = struct.pack("<16sHHIIIIIHHHHHH", ident, 2, 243, 1,
                          info["entry_point"], 52, shoff, 1, 52, 32,
                          count, 40, len(sections), len(sections) - 1)
    dest.write_bytes(buf)


class Scripts(HTMLParser):
    def __init__(self):
        super().__init__(convert_charrefs=False)
        self.active = None
        self.parts = []

    def handle_starttag(self, tag, attrs):
        if tag == "script":
            self.active = {"attrs": dict(attrs), "text": ""}

    def handle_endtag(self, tag):
        if tag == "script" and self.active is not None:
            self.parts.append(self.active)
            self.active = None

    def handle_data(self, data):
        if self.active is not None:
            self.active["text"] += data


def extract_strings(image, segments):
    result = []
    for match in re.finditer(rb"[^\x00]{4,}", image):
        raw = match.group()
        try:
            value = raw.decode("utf-8")
        except UnicodeDecodeError:
            continue
        if not value or sum(c.isprintable() or c in "\n\r\t" for c in value) / len(value) < .99:
            continue
        addr = mapped_address(segments, match.start())
        if addr is not None:
            result.append({"offset": match.start(), "address": addr, "text": value})
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("bootstrap", type=Path)
    parser.add_argument("--ota", type=Path)
    parser.add_argument("--out", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    out = args.out.resolve()
    for d in ["analysis", "extracted", "extracted/segments", "recovered_web"]:
        (out / d).mkdir(parents=True, exist_ok=True)
    data = args.bootstrap.read_bytes()
    pt = next((o for o in range(0, min(len(data), 0x20000), 0x1000)
               if data[o:o + 2] == b"\xaa\x50"), None)
    if pt is None:
        raise ValueError("No aligned partition table found")
    partitions = []
    cursor = pt
    while data[cursor:cursor + 2] == b"\xaa\x50":
        _, typ, sub, start, size, label, flags = struct.unpack_from("<HBBII16sI", data, cursor)
        available = max(0, min(size, len(data) - start))
        payload = data[start:start + available]
        partitions.append({"name": cstr(label), "type": typ, "subtype": sub,
                           "offset": start, "size": size, "flags": flags,
                           "available_bytes": available, "complete": available == size,
                           "erased_in_available_range": all(v == 255 for v in payload) if available else None})
        cursor += 32
    table_md5 = data[cursor:cursor + 2] == b"\xeb\xeb"
    table_hash_valid = (hashlib.md5(data[pt:cursor]).digest() == data[cursor + 16:cursor + 32]) if table_md5 else None
    app = next(p for p in partitions if p["type"] == 0 and p["available_bytes"] and data[p["offset"]] == 0xE9)
    info, image = parse_image(data, app["offset"])
    boot_offset = next(o for o in range(0, pt, 0x1000) if data[o] == 0xE9)
    boot_info, boot = parse_image(data, boot_offset)
    (out / "extracted/bootloader.bin").write_bytes(boot)
    (out / "extracted/partition-table.bin").write_bytes(data[pt:pt + 0x1000])
    (out / "extracted/application.bin").write_bytes(image)
    for p in partitions:
        if p["type"] == 1 and p["available_bytes"]:
            (out / f"extracted/{p['name']}.bin").write_bytes(data[p["offset"]:p["offset"] + p["available_bytes"]])
    desc_offset = info["segments"][0]["image_offset"]
    desc = image[desc_offset:desc_offset + 256]
    if struct.unpack_from("<I", desc)[0] != 0xABCD5432:
        raise ValueError("Unexpected app descriptor")
    descriptor = {"version": cstr(desc[16:48]), "project_name": cstr(desc[48:80]),
                  "compile_time": cstr(desc[80:96]), "compile_date": cstr(desc[96:112]),
                  "idf_version": cstr(desc[112:144]), "original_elf_sha256": desc[144:176].hex(),
                  "secure_version": struct.unpack_from("<I", desc, 4)[0]}
    make_elf(image, info, out / "extracted/application.analysis.elf")
    for s in info["segments"]:
        (out / f"extracted/segments/segment_{s['index']}_{s['address']:08x}.bin").write_bytes(
            image[s["image_offset"]:s["image_offset"] + s["size"]])
    strings = extract_strings(image, info["segments"])
    (out / "analysis/strings.json").write_text(json.dumps(strings, ensure_ascii=False, indent=2) + "\n")
    with (out / "analysis/strings.tsv").open("w") as f:
        f.write("image_offset\tvirtual_address\ttext_json\n")
        for s in strings:
            f.write(f"0x{s['offset']:08x}\t0x{s['address']:08x}\t{json.dumps(s['text'], ensure_ascii=False)}\n")
    assets = []
    for i, m in enumerate(re.finditer(rb"\x1f\x8b\x08", image)):
        decompressor = zlib.decompressobj(31)
        try:
            payload = decompressor.decompress(image[m.start():], 32 * 1024 * 1024)
        except zlib.error:
            continue
        if not decompressor.eof:
            continue
        size = len(image) - m.start() - len(decompressor.unused_data)
        name = "dashboard.html" if payload.lstrip().lower().startswith(b"<!doctype html") else f"asset_{i}.bin"
        (out / "recovered_web" / name).write_bytes(payload)
        (out / "recovered_web" / (name + ".gz")).write_bytes(image[m.start():m.start() + size])
        assets.append({"file": name, "offset": m.start(), "address": mapped_address(info["segments"], m.start()),
                       "compressed_size": size, "size": len(payload), "sha256": sha(payload)})
    for s in strings:
        if s["text"].lstrip().lower().startswith("<!doctype html"):
            payload = s["text"].encode()
            (out / "recovered_web/login.html").write_bytes(payload)
            assets.append({"file": "login.html", "offset": s["offset"], "address": s["address"],
                           "size": len(payload), "sha256": sha(payload)})
    scripts = []
    all_web = ""
    for a in assets:
        if not a["file"].endswith(".html"):
            continue
        html = (out / "recovered_web" / a["file"]).read_text()
        all_web += html + "\n"
        hp = Scripts()
        hp.feed(html)
        for i, script in enumerate(hp.parts):
            if script["text"].strip():
                name = f"{Path(a['file']).stem}.script{i}.js"
                (out / "recovered_web" / name).write_text(script["text"])
                scripts.append({"file": name, "attrs": script["attrs"]})
    paths = {}
    # Literals are candidates, not verified HTTP registrations or methods.
    for s in strings:
        if re.fullmatch(r"/[A-Za-z0-9_./-]+", s["text"]) and not s["text"].startswith(("//", "/IDF", "/./", "/builds")):
            paths.setdefault(s["text"], {}).update(firmware_offset=s["offset"], address=s["address"])
    for m in re.finditer(r"[\"'`](/[A-Za-z][A-Za-z0-9_./-]*)", all_web):
        paths.setdefault(m.group(1), {})["seen_in_web"] = True
    (out / "analysis/http_path_candidates.json").write_text(json.dumps(paths, ensure_ascii=False, indent=2) + "\n")
    with (out / "analysis/partitions.csv").open("w", newline="") as f:
        f.write("# Recovered from firmware; offsets require 32 MiB flash.\n# Name,Type,SubType,Offset,Size,Flags\n")
        writer = csv.writer(f)
        for p in partitions:
            typ = "app" if p["type"] == 0 else "data"
            sub = {0: "ota", 2: "nvs", 3: "coredump", 0x82: "spiffs"}.get(p["subtype"], hex(p["subtype"])) if typ == "data" else f"ota_{p['subtype'] - 0x10}"
            csv_flags = ":".join(name for bit, name in [(1, "encrypted"), (2, "readonly")] if p["flags"] & bit)
            if p["flags"] & ~3:
                raise ValueError(f"Unknown partition flags {p['flags']:#x}; raw flags remain in the manifest")
            writer.writerow([p["name"], typ, sub, hex(p["offset"]), hex(p["size"]), csv_flags])
    manifest = {"input": {"path": str(args.bootstrap.resolve()), "size": len(data), "sha256": sha(data)},
                "bootloader_offset": boot_offset, "bootloader": boot_info,
                "partition_table_offset": pt, "partition_table_md5_valid": table_hash_valid,
                "partitions": partitions, "application_offset": app["offset"],
                "application": info, "descriptor": descriptor, "assets": assets, "web_scripts": scripts,
                "string_count": len(strings), "http_path_candidate_count": len(paths),
                "partition_end": max(p["offset"] + p["size"] for p in partitions),
                "last_non_erased_byte": max(i for i, v in enumerate(data) if v != 255)}
    if args.ota:
        ota = args.ota.read_bytes()
        manifest["ota"] = {"path": str(args.ota.resolve()), "size": len(ota), "sha256": sha(ota),
                           "identical_to_bootstrap_application": ota == image}
    (out / "analysis/manifest.json").write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + "\n")
    print(json.dumps({"descriptor": descriptor, "segments": len(info["segments"]),
                      "assets": assets, "strings": len(strings), "http_paths": len(paths),
                      "checksums_valid": info["checksum_valid"] and info["validation_hash_valid"] and table_hash_valid,
                      "output": str(out)}, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
