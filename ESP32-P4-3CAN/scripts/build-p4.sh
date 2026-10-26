#!/usr/bin/env bash
set -euo pipefail
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
if ! command -v idf.py >/dev/null 2>&1; then
    echo "未找到 idf.py。请先在当前终端激活 ESP-IDF（原分析记录为 v5.5.5），再运行本脚本。" >&2
    exit 1
fi
idf.py --version
if [ ! -f "$PROJECT_ROOT/reverse/reconstructed/idf_app/sdkconfig" ]; then
    idf.py -C "$PROJECT_ROOT/reverse/reconstructed/idf_app" set-target esp32p4
fi
idf.py -C "$PROJECT_ROOT/reverse/reconstructed/idf_app" build
# 只构建诊断固件，不自动烧录。
