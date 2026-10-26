"""Host regression test; no PlatformIO/native or Arduino installation required."""
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]


class GatewayPolicyTests(unittest.TestCase):
    def test_wifi(self):
        compiler = shutil.which("clang++") or shutil.which("g++")
        self.assertIsNotNone(compiler, "C++ compiler required")
        with tempfile.TemporaryDirectory(prefix="can-gateway-wifi-") as tmp:
            binary = Path(tmp) / "wifi-test"
            for header in ("Arduino.h", "ArduinoJson.h", "Preferences.h", "WiFi.h", "esp_wifi.h"):
                (Path(tmp) / header).write_text('#include "gateway_wifi_fakes.h"\n')
            subprocess.run([
                compiler, "-std=c++17", "-Wall", "-Wextra", "-Werror",
                "-fsanitize=address,undefined", "-fno-omit-frame-pointer",
                "-I", tmp, "-I", str(ROOT / "include"), "-I", str(ROOT / "tests"),
                str(ROOT / "tests/can_gateway_wifi_test.cpp"), "-o", str(binary),
            ], check=True)
            subprocess.run([str(binary)], check=True)

    def test_replay(self):
        compiler = shutil.which("clang++") or shutil.which("g++")
        self.assertIsNotNone(compiler, "C++ compiler required")
        with tempfile.TemporaryDirectory(prefix="can-gateway-replay-") as tmp:
            binary = Path(tmp) / "replay-test"
            (Path(tmp) / "Arduino.h").write_text("#pragma once\n#define PROGMEM\n")
            subprocess.run([
                compiler, "-std=c++17", "-Wall", "-Wextra", "-Werror",
                "-fsanitize=address,undefined", "-fno-omit-frame-pointer",
                "-I", tmp, "-I", str(ROOT / "include"), "-I", str(ROOT / "src"),
                str(ROOT / "tests/can_gateway_replay_test.cpp"),
                str(ROOT / "src/replay_frames.cpp"), "-o", str(binary),
            ], check=True)
            subprocess.run([str(binary)], check=True)

    def test_capture_filter(self):
        compiler = shutil.which("clang++") or shutil.which("g++")
        self.assertIsNotNone(compiler, "C++ compiler required")
        with tempfile.TemporaryDirectory(prefix="can-gateway-capture-") as tmp:
            binary = Path(tmp) / "capture-test"
            subprocess.run([
                compiler, "-std=c++17", "-Wall", "-Wextra", "-Werror",
                "-fsanitize=address,undefined", "-fno-omit-frame-pointer",
                "-I", str(ROOT / "include"),
                str(ROOT / "tests/can_gateway_capture_filter_test.cpp"), "-o", str(binary),
            ], check=True)
            subprocess.run([str(binary)], check=True)

    def test_policy(self):
        compiler = shutil.which("clang++") or shutil.which("g++")
        self.assertIsNotNone(compiler, "C++ compiler required")
        with tempfile.TemporaryDirectory(prefix="can-gateway-policy-") as tmp:
            binary = Path(tmp) / "policy-test"
            subprocess.run([
                compiler, "-std=c++17", "-Wall", "-Wextra", "-Werror",
                "-fsanitize=address,undefined", "-fno-omit-frame-pointer",
                "-I", str(ROOT / "include"),
                str(ROOT / "tests/can_gateway_policy_test.cpp"), "-o", str(binary),
            ], check=True)
            subprocess.run([str(binary)], check=True)


if __name__ == "__main__":
    unittest.main()
