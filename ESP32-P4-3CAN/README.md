# ESP32-P4-3CAN

Albert ESP32-P4 三 CAN 固件的独立逆向研究与部分重建项目。

**当前是功能研究资料与诊断工程，不是可直接替代原固件的完整源码。** 本项目只导入 ZIP 内层 `Albert/reverse/`，不包含外层 S3 双 CAN 工程。

## 研究对象与出处

- 上游：[204442021/Albert-firmware Releases](https://github.com/204442021/Albert-firmware/releases)。上游将源码附件描述为第三方逆向资料。
- 原附件：`P1.6.4.source.code.package.zip`；SHA-256：`1015a669d216e05989dbd35c8d488916646402cb109fba6306b1e5174f6616ce`。
- 逆向记录：ESP32-P4、P1.6.4、V3.2、构建 `4d97f369`；三路为 CH / VEH / PARTY。
- 独立提取日期：2026-10-26。由 Albert-firmware 本地整理项目复制，原项目保留；现作为独立项目目录收录于 [Ronnie2026/Albert-firmware](https://github.com/Ronnie2026/Albert-firmware/tree/main/ESP32-P4-3CAN)，不包含嵌套 Git 仓库。
- 当前上游 OTA 文件名标识 `8915f5c7` 与分析对象不同，不能自动套用全部结论。

## 目录与阅读入口

| 目录 | 用途 |
| --- | --- |
| [docs/Albert-P4三CAN-功能架构与报文原理.html](docs/Albert-P4三CAN-功能架构与报文原理.html) | 可离线阅读的架构、功能、协议及145项搜索索引 |
| [reverse/README.md](reverse/README.md) | 原逆向资料说明，保留原文 |
| `reverse/analysis/` | 固件身份、路由、反汇编、证据及历史验证记录 |
| `reverse/decompiled/` | 4,966个导出函数及调用/字符串索引，存在反编译缺口 |
| `reverse/recovered_web/` | 原固件提取的网页资源，仅作研究 |
| `reverse/feature_analysis/` | 18模块、145项功能与逻辑 |
| `reverse/skills/` | 包内原有CAN分析文档，不会自动安装为工具技能 |
| `reverse/reconstructed/` | 常量、路由元数据、主机诊断程序及ESP-IDF诊断应用 |
| `scripts/` | 本项目新增的主机 / P4构建入口 |
| [docs/独立项目提取记录.md](docs/独立项目提取记录.md) | 复制校验、缺失输入与环境说明 |

## 编译入口

### 主机诊断程序（macOS）

需要 CMake 与 C 编译器。项目根目录运行：

```sh
./scripts/build-host.sh
```

输出为 `reverse/reconstructed/build/albert_inspect`，只打印已恢复的固件身份、通道和路由信息。

### ESP32-P4诊断固件

先在当前终端激活适用的 ESP-IDF，再运行：

```sh
./scripts/build-p4.sh
```

原资料记录 ESP-IDF v5.5.5；其他版本应另行验证。目标工程位于 `reverse/reconstructed/idf_app/`，只输出恢复的信息，没有完整车控、Wi-Fi、云端或OTA实现。脚本不自动烧录。

## 继续研究时的限制

- 原 `analysis/validation.json` 是随包附带的历史记录，不代表本机重新通过38项验证。
- 原始bootstrap / OTA、`extracted/application.bin` 和分段bin并未包含在本次收到的ZIP中；原验证器还引用来源机器绝对路径，因此目前不能直接重跑全套校验。不要用当前不同构建附件冒充原输入。
- Ghidra工程数据库、依赖缓存和预编译对象未带入，保留分析结果与工具；重新反编译需补齐准确固件和工具环境。
- 车辆控制与驾驶员提醒相关功能仅限研究；先使用与车辆断开的测试台。构建成功不等于硬件或实车验证。
- 版权和授权沿用原资料；本项目不额外授予第三方资料的使用权。
