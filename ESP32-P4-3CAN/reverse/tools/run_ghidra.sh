#!/bin/sh
set -eu
task_root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
ghidra_dir=${GHIDRA_HOME:-/opt/homebrew/opt/ghidra/libexec}
task_scripts=$(mktemp -d "${TMPDIR:-/tmp}/albert-ghidra.XXXXXX")
trap 'rm -f "$task_scripts/PrepareAnalysis.java" "$task_scripts/ExportRecovered.java"; rmdir "$task_scripts"' EXIT
# External macOS volumes can create ._*.java AppleDouble metadata, which Ghidra
# tries to compile. Copy only the two real sources to a native temporary folder.
cp "$task_root/tools/PrepareAnalysis.java" "$task_scripts/"
cp "$task_root/tools/ExportRecovered.java" "$task_scripts/"
mkdir -p "$task_root/ghidra" "$task_root/decompiled"
if [ -f "$task_root/ghidra/Albert_P4.gpr" ]; then
    "$ghidra_dir/support/analyzeHeadless" "$task_root/ghidra" Albert_P4 \
        -process application.analysis.elf \
        -scriptPath "$task_scripts" \
        -preScript PrepareAnalysis.java "$task_root/analysis/rom_symbols" \
        -postScript ExportRecovered.java "$task_root/decompiled" "$task_root/analysis/strings.tsv" \
        -analysisTimeoutPerFile 900 -max-cpu 4 \
        -log "$task_root/analysis/ghidra.log" -scriptlog "$task_root/analysis/ghidra-script.log"
else
    "$ghidra_dir/support/analyzeHeadless" "$task_root/ghidra" Albert_P4 \
        -import "$task_root/extracted/application.analysis.elf" \
        -processor RISCV:LE:32:default -cspec gcc \
        -scriptPath "$task_scripts" \
        -preScript PrepareAnalysis.java "$task_root/analysis/rom_symbols" \
        -postScript ExportRecovered.java "$task_root/decompiled" "$task_root/analysis/strings.tsv" \
        -analysisTimeoutPerFile 900 -max-cpu 4 \
        -log "$task_root/analysis/ghidra.log" -scriptlog "$task_root/analysis/ghidra-script.log"
fi
