#!/usr/bin/env python3
"""Organize decompiler evidence and generate compilable recovered constants.

No CAN command implementations or cloud/auth logic are guessed here.
"""
import argparse
import csv
import json
import re
import shutil
import struct
from pathlib import Path


def addr(s):
    return int(s.rsplit(":", 1)[-1], 16)


def cquote(s):
    return json.dumps(s, ensure_ascii=False)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = ap.parse_args()
    root = args.root.resolve()
    manifest = json.loads((root / "analysis/manifest.json").read_text())
    image = (root / "extracted/application.bin").read_bytes()
    segments = manifest["application"]["segments"]
    def read_at(address, length):
        for s in segments:
            if s["address"] <= address < s["address"] + s["size"]:
                off = s["image_offset"] + address - s["address"]
                return image[off:off + length]
        raise ValueError(f"Unmapped address {address:#x}")
    def read_cstr(address):
        return read_at(address, 1024).split(b"\0", 1)[0].decode()
    index = list(csv.DictReader((root / "decompiled/functions.tsv").open(), delimiter="\t"))
    by_addr = {addr(r["entry"]): r for r in index}
    route_fn = by_addr[0x480868B2]
    code = (root / "decompiled" / route_fn["file"]).read_text()
    methods = {0: "DELETE", 1: "GET", 2: "HEAD", 3: "POST", 4: "PUT", 5: "CONNECT",
               6: "OPTIONS", 7: "TRACE", 28: "PATCH", 255: "ANY"}
    literal = r'("[^"\n]*"|&(?:DAT|s)_[A-Za-z0-9_]*[0-9a-f]{8})'
    routes = []
    def decode_path(value):
        if value.startswith('"'):
            return json.loads(value)
        return read_cstr(int(value.rsplit("_", 1)[-1], 16))
    def add(position, path, method, handler, upload="0"):
        path = decode_path(path)
        if not path.startswith("/"):
            return
        handler_addr = int(re.search(r"([0-9a-f]{8})$", handler)[1], 16)
        handler_row = by_addr.get(handler_addr)
        routes.append({"registration_order_offset": position, "path": path,
                       "method_code": method, "method": methods.get(method, f"CODE_{method}"),
                       "handler_address": f"0x{handler_addr:08x}",
                       "handler_file": handler_row["file"] if handler_row else None,
                       "upload_handler": upload, "evidence_function": "0x480868b2"})
    # Out-of-line registration helper takes path, http_parser method, handler,
    # and a separate upload-body callback.
    direct = re.compile(r'FUN_ram_48065586\([^,]+,\s*' + literal +
                        r',\s*(0x[0-9a-f]+|\d+),\s*([^,]+),\s*([^;]+)\)\s*;')
    for m in direct.finditer(code):
        add(m.start(), m[1], int(m[2], 0), m[3].strip(), m[4].strip())
    # Compiler inlined the helper for the first and last registrations.
    inline = re.compile(r'\*(\w+) = ' + literal + r';')
    for m in inline.finditer(code):
        ptr, path = m[1], m[2]
        after = code[m.end():m.end() + 210]
        before = code[max(0, m.start() - 130):m.start()]
        method_pattern = re.compile(re.escape(ptr) + r'\[1\] = (0x[0-9a-f]+|\d+);')
        meth = method_pattern.search(after)
        if meth is None:
            matches = list(method_pattern.finditer(before))
            meth = matches[-1] if matches else None
        handler = re.search(re.escape(ptr) + r'\[2\] = ([^;]+);', after)
        if meth and handler:
            add(m.start(), path, int(meth[1], 0), handler[1].strip())
    routes.sort(key=lambda r: r["registration_order_offset"])
    seen = set()
    routes = [r for r in routes if not ((r["path"], r["method_code"]) in seen or
                                      seen.add((r["path"], r["method_code"])))]
    if len(routes) < 70:
        raise ValueError(f"Only {len(routes)} routes decoded; inspect the decompiler output")
    (root / "analysis/http_routes_recovered.json").write_text(json.dumps(routes, indent=2, ensure_ascii=False) + "\n")
    with (root / "analysis/http_handler_seeds.tsv").open("w") as seed:
        seed.write("address\tanalyst_name\n")
        used = set()
        for r in routes:
            if r["handler_address"] in used:
                continue
            used.add(r["handler_address"])
            tag = re.sub(r"[^a-z0-9]+", "_", r["path"].lower()).strip("_") or "root"
            seed.write(r["handler_address"] + "\trecovered_http_" + r["method"].lower() + "_" + tag + "_" + r["handler_address"][2:] + "\n")
    pins = [list(struct.unpack("<6i", read_at(0x48222610 + i * 24, 24))) for i in range(2)]
    channels = []
    for i in range(3):
        values = struct.unpack("<10I", read_at(0x48222640 + i * 40, 40))
        channels.append({"controller": values[0], "logical_name": read_cstr(values[5]),
                         "mask": values[4], "bitrate": values[8],
                         "default_tx": values[2], "default_rx": values[3],
                         "raw_words": list(values)})
    board = {"profile": read_cstr(0x481C9108), "hardware_revision": read_cstr(0x481C3DDC),
             "layout_a": [{"tx": pins[0][i * 2], "rx": pins[0][i * 2 + 1]} for i in range(3)],
             "layout_b": [{"tx": pins[1][i * 2], "rx": pins[1][i * 2 + 1]} for i in range(3)],
             "default_stored_layout": 2, "layout_names": {"0": "A", "1": "B", "2": "Auto"},
             "channels": channels, "evidence": {"pins": "0x48222610", "channels": "0x48222640", "setup": "0x48117336"}}
    (root / "analysis/board_profile.json").write_text(json.dumps(board, indent=2) + "\n")
    source = root / "reconstructed"
    for path in [source / "include", source / "src", source / "idf_app/main"]:
        path.mkdir(parents=True, exist_ok=True)
    header = '''/* Analyst reconstruction of verified firmware constants, not original headers. */
#ifndef ALBERT_RECOVERED_H
#define ALBERT_RECOVERED_H
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#ifdef __cplusplus
extern "C" {
#endif
enum { ALBERT_CHANNEL_COUNT = 3, ALBERT_LAYOUT_COUNT = 2, ALBERT_LAYOUT_AUTO = 2 };
typedef struct { int tx; int rx; } albert_can_pins;
typedef struct { unsigned controller; const char *name; uint32_t mask; uint32_t bitrate; } albert_channel;
typedef struct { const char *name; uint32_t original_entry; unsigned priority; unsigned core; size_t stack_bytes; } albert_task;
typedef struct { const char *path; const char *method; unsigned method_code; uint32_t original_handler; } albert_http_route;
extern const albert_can_pins albert_pin_layouts[ALBERT_LAYOUT_COUNT][ALBERT_CHANNEL_COUNT];
extern const albert_channel albert_channels[ALBERT_CHANNEL_COUNT];
extern const albert_task albert_tasks[3];
extern const albert_http_route albert_http_routes[];
extern const size_t albert_http_route_count;
extern const char albert_board_profile[];
extern const char albert_hardware_revision[];
extern const char albert_original_app_version[];
extern const char albert_original_commit[];
extern const uint8_t albert_original_elf_sha256[32];
/* Equivalent to 0x48000020, using an explicit output buffer. */
void albert_format_original_elf_sha256(char output[65]);
/* Diagnostic presentation, newly written; does not operate hardware. */
void albert_print_summary(FILE *stream);
#ifdef __cplusplus
}
#endif
#endif
'''
    (source / "include/albert_recovered.h").write_text(header)
    defs = ['#include "albert_recovered.h"', '', '/* Exact constants from virtual address 0x48222610. */',
            'const albert_can_pins albert_pin_layouts[ALBERT_LAYOUT_COUNT][ALBERT_CHANNEL_COUNT] = {']
    for layout in pins:
        defs.append('    { ' + ', '.join(f'{{ {layout[i * 2]}, {layout[i * 2 + 1]} }}' for i in range(3)) + ' },')
    defs += ['};', '', '/* Exact channel metadata from 0x48222640. */',
             'const albert_channel albert_channels[ALBERT_CHANNEL_COUNT] = {']
    for c in channels:
        defs.append(f'    {{ {c["controller"]}, {cquote(c["logical_name"])}, {c["mask"]}u, {c["bitrate"]}u }},')
    defs += ['};', '']
    defs += ['/* Call arguments verified in setup (0x48117336) and start_supervisor (0x48120c38). */',
             'const albert_task albert_tasks[3] = {',
             '    { "fsd_p0", 0x4ff2520au, 24u, 1u, 4096u },',
             '    { "can_rt", 0x4810d080u, 20u, 1u, 8192u },',
             '    { "p4_supervisor", 0x48121206u, 3u, 0u, 4096u },',
             '};', '']
    for variable, value in [("albert_board_profile", board["profile"]),
                            ("albert_hardware_revision", board["hardware_revision"]),
                            ("albert_original_app_version", manifest["descriptor"]["version"]),
                            ("albert_original_commit", read_cstr(0x48223E5C))]:
        defs.append(f'const char {variable}[] = {cquote(value)};')
    digest = bytes.fromhex(manifest["descriptor"]["original_elf_sha256"])
    defs += ['const uint8_t albert_original_elf_sha256[32] = {',
             '    ' + ', '.join(f'0x{b:02x}' for b in digest), '};', '',
             'void albert_format_original_elf_sha256(char output[65]) {',
             '    static const char digits[] = "0123456789abcdef";',
             '    for (size_t i = 0; i < 32; ++i) {',
             '        output[2 * i] = digits[albert_original_elf_sha256[i] >> 4];',
             '        output[2 * i + 1] = digits[albert_original_elf_sha256[i] & 15];',
             '    }', "    output[64] = '\\0';", '}', '']
    (source / "src/board_profile.c").write_text("\n".join(defs))
    defs = ['#include "albert_recovered.h"', '',
            '/* Recovered registration metadata. Addresses belong to the ORIGINAL firmware.',
            ' * They are not callable pointers in a rebuilt binary.',
            ' * Method values follow http_parser.h, including DELETE=0 and POST=3. */',
            'const albert_http_route albert_http_routes[] = {']
    for r in routes:
        defs.append(f'    {{ {cquote(r["path"])}, {cquote(r["method"])}, {r["method_code"]}u, {r["handler_address"]}u }},')
    defs += ['};', 'const size_t albert_http_route_count = sizeof(albert_http_routes) / sizeof(albert_http_routes[0]);', '']
    (source / "src/http_routes.c").write_text("\n".join(defs))
    docs = ["# HTTP 路由还原", "", "从 `0x480868b2` 的注册代码恢复；方法枚举使用 http_parser，DELETE=0、GET=1、POST=3、ANY=255。处理函数地址属于原固件。", "",
            "| 方法 | 路径 | 处理函数地址 | 反编译文件 |", "|---|---|---|---|"]
    for r in routes:
        link = f"[C 伪代码](../decompiled/{r['handler_file']})" if r["handler_file"] else "尚未建立独立函数，见反汇编"
        docs.append(f"| {r['method']} | `{r['path']}` | `{r['handler_address']}` | {link} |")
    (root / "analysis/HTTP_ROUTES.md").write_text("\n".join(docs) + "\n")
    # Re-index by evidence domains, without inventing original file boundaries.
    xrefs = list(csv.DictReader((root / "decompiled/string_xrefs.tsv").open(), delimiter="\t"))
    refs_by_fn = {}
    for r in xrefs:
        if r["function_entry"]:
            refs_by_fn.setdefault(addr(r["function_entry"]), []).append(r)
    sections = {"启动与任务": set([0x48117336, 0x4810D080, 0x4FF2520A, 0x48120C38, 0x48121206]),
                "网页与接口": set(), "OTA": set(), "云端": set(), "CAN与车辆状态": set(), "持久化": set()}
    for r in routes:
        sections["网页与接口"].add(int(r["handler_address"], 16))
    for a, refs in refs_by_fn.items():
        text = " ".join(r["text"] for r in refs)
        for section, pattern in [("OTA", r"(?i)ota_|/ota|OTA "), ("云端", r"(?i)cloud_|/cloud|management_"),
                                 ("CAN与车辆状态", r"(?i)CAN |TWAI|fsd_|torque|/can|preheat|seat_"),
                                 ("持久化", r"(?i)journal_|persistence|/save|records_|settings_backup")]:
            if re.search(pattern, text):
                sections[section].add(a)
    docs = ["# 函数索引", "", "按字符串引用和路由证据分组，同一函数可以出现在多个分组中。分组不代表原项目文件边界。", ""]
    for section, addresses in sections.items():
        docs += [f"## {section}", "", "| 地址 | 函数 / C 伪代码 | 字符串引用数 |", "|---|---|---|"]
        for a in sorted(addresses):
            row = by_addr.get(a)
            if row:
                docs.append(f"| `0x{a:08x}` | [{row['name']}](../decompiled/{row['file']}) | {len(refs_by_fn.get(a, []))} |")
        docs.append("")
    (root / "analysis/FUNCTION_INDEX.md").write_text("\n".join(docs) + "\n")
    warnings = {"decompiler_warning_files": 0, "halt_baddata_files": 0, "unaffiliated_register_files": 0}
    for row in index:
        p = root / "decompiled" / row["file"]
        if not p.exists():
            continue
        text = p.read_text()
        warnings["decompiler_warning_files"] += "WARNING:" in text
        warnings["halt_baddata_files"] += "halt_baddata" in text or "halt_badfunc" in text
        warnings["unaffiliated_register_files"] += "unaff_" in text
    summary = {"function_count": len(index), "string_xrefs": len(xrefs), "route_count": len(routes),
               "registered_handlers_missing_function": sum(r["handler_file"] is None for r in routes),
               "warnings": warnings, "board": board}
    (root / "analysis/recovery_summary.json").write_text(json.dumps(summary, indent=2) + "\n")
    shutil.copyfile(root / "analysis/partitions.csv", source / "idf_app/partitions.csv")
    print(json.dumps({k: v for k, v in summary.items() if k != "board"}, indent=2))


if __name__ == "__main__":
    main()
