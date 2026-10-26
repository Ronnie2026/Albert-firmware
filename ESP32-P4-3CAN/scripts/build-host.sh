#!/usr/bin/env bash
set -euo pipefail
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cmake -S "$PROJECT_ROOT/reverse/reconstructed" -B "$PROJECT_ROOT/reverse/reconstructed/build" -DCMAKE_BUILD_TYPE=Debug
cmake --build "$PROJECT_ROOT/reverse/reconstructed/build" --parallel
"$PROJECT_ROOT/reverse/reconstructed/build/albert_inspect"
