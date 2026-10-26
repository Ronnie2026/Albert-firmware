# 源码包结构与逆向对象核对

## P4 三 CAN 与 S3 双 CAN 的关系（2026-10-26 复核）

此前将整个 ZIP 概括为“双 CAN 逆向源码”不准确。压缩包同时包含两部分：

| 内容 | 原 ZIP 路径 | 当前目录 | 性质 |
| --- | --- | --- | --- |
| ESP32-S3 双 CAN 工程 | `esp_tsl-main/` 外层工程 | `firmware/` | PlatformIO / Arduino；MCP2515 + TWAI；与 P4 正式固件的源码关系未确认 |
| ESP32-P4 三 CAN 逆向资料 | `esp_tsl-main/Albert/reverse/` | `技术参考/逆向分析资料/` | P1.6.4 V3.2 固件的反编译、网页提取、分析及部分重建代码 |

上游仓库 main 当前只公开简短 README，没有正式 P4 工程。P 系列 Release 明确面向 ESP32-P4 三 CAN，并将 ZIP 称为第三方逆向源码。因此，不能根据 ZIP 外层工程的板型判断包内逆向对象只有两路 CAN，也不能推断 S3 工程就是 P4 的完整移植或 B 系列原始源码。

### P4 逆向对象的证据

- `逆向分析资料/README.md` 记录 ESP32-P4、RISC-V、项目名 `albert_p4`、P1.6.4 / V3.2，以及 `waveshare-p4-wifi6-sn65hvd230-x3` 硬件 profile。
- `reconstructed/src/board_profile.c` 定义三个通道：CH、VEH、PARTY，均标记为 500 kbit/s。该文件属于依据固件证据重建的代码，不是原始工程文件。
- 本次直接检查 `extracted/application.analysis.elf`：ELF machine 为 243（RISC-V），包含上述项目名、硬件 profile、版本字符串及 `4d97f369` 标识。这进一步支持逆向对象为 P4 三 CAN；该 ELF 本身仍是分析容器，不是原始带调试信息的 ELF。
- `reconstructed/idf_app/` 是输出恢复信息的 ESP-IDF 诊断工程，不包含完整车控、Wi-Fi、云端及 OTA 状态机。反编译伪代码和静态分析不能直接当作完整可构建固件。

### 同为 P1.6.4，不代表同一构建

逆向 manifest 记录输入为 `Albert-P4-P1.6.4-V3.2-4d97f369-16MiB-bootstrap.bin`。当前 P 系列 Release 的 V3.2 bootstrap 文件名标识为 `c565dc82`，OTA 为 `8915f5c7`；逆向输入摘要也与当前 bootstrap 附件摘要不同。现有证据不能证明这些构建功能完全相同，也不能把逆向结论无条件套用到当前附件。

GitHub API 中源码 ZIP 的 SHA-256 为 `1015a669d216e05989dbd35c8d488916646402cb109fba6306b1e5174f6616ce`，与用户提供 ZIP 一致。因此，目录混合情况确实存在于作者发布的该 ZIP，并非本次导入拼接造成。外层 S3 工程与 P4 逆向资料最初为何放在一起，作者当前公开说明没有解释。

来源：[上游仓库](https://github.com/204442021/Albert-firmware)、[上游发布页](https://github.com/204442021/Albert-firmware/releases)、[发布附件元数据 API](https://api.github.com/repos/204442021/Albert-firmware/releases?per_page=100)；本地证据见本目录的逆向分析资料。未执行硬件验证。
