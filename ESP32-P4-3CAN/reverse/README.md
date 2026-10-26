# Albert P4 P1.6.4 固件逆向与源码还原

已从原固件恢复完整网页资源、4,966 个函数的 C 伪代码、87 条 HTTP 路由及处理函数、CAN 引脚表、任务配置和镜像布局。另提供了可编译的基础 C 模块及 ESP-IDF 诊断工程。

**恢复程度：前端是从镜像逐字节提取的代码；后端主要是反编译伪代码。基础 C 模块是根据已核对的证据重写的代码。当前结果不是原始仓库，也不是可以直接替代原固件的完整功能工程。**

新增的[网页功能 → C实现逻辑分析](feature_analysis/README.md)按18模块整理145项功能及子功能，包含逐项伪代码、87条路由和437行控件覆盖。[搜索阅读页面](feature_analysis/index.html)和[完整伪代码](feature_analysis/ALL_PSEUDOCODE.pseudo.c)可直接打开。

围绕 CAN 阅读：[Skill 文档](skills/albert-p4-can-analysis/SKILL.md)整理接收解析、状态机、模板修改与发送确认。[CAN控制协议与数值表](skills/albert-p4-can-analysis/references/control-protocol.md)直接列出线路、ID、DLC/MUX、字节/bit、控制值和反馈，包含座椅、换挡、摄像头/速度/驾驶模式、灯光、预热、维修；扭矩完整校验见[0x370字段](skills/albert-p4-can-analysis/references/can-frames.md)。

[离车泊车相关实现](analysis/EXIT_PARKING.md)已定位退出FSD后的CH `0x293` 请求与独立PARTY `0x30A` 有人／安全带模拟，包含触发、时限、字段、发送前复检及机器码摘录。原车离车后的实际执行与完成尚未实测。

## 从哪里开始

| 内容 | 文件 |
|---|---|
| 原始管理网页，包含 HTML / CSS / JavaScript | [recovered_web/dashboard.html](recovered_web/dashboard.html) |
| 单独提取的原始 JavaScript | [recovered_web/dashboard.script0.js](recovered_web/dashboard.script0.js) |
| 原始登录页 | [recovered_web/login.html](recovered_web/login.html) |
| 全部后端 C 伪代码 | [decompiled/all_functions.c](decompiled/all_functions.c) |
| 按功能分组的函数索引 | [analysis/FUNCTION_INDEX.md](analysis/FUNCTION_INDEX.md) |
| HTTP 方法、路径、处理函数及源码链接 | [analysis/HTTP_ROUTES.md](analysis/HTTP_ROUTES.md) |
| 真实地址上的 RISC-V 反汇编 | [analysis/application.disassembly.txt](analysis/application.disassembly.txt) |
| 可编译的基础模块 | [reconstructed/include/albert_recovered.h](reconstructed/include/albert_recovered.h) |
| GPIO、通道、任务及固件标识 | [reconstructed/src/board_profile.c](reconstructed/src/board_profile.c) |
| HTTP 注册表的 C 表达 | [reconstructed/src/http_routes.c](reconstructed/src/http_routes.c) |
| 校验记录 | [analysis/validation.json](analysis/validation.json) |

## 固件身份

| 项目 | 从固件读取的值 |
|---|---|
| 芯片 | ESP32-P4，RISC-V，镜像 chip ID 18 |
| 芯片版本范围 | 最低 v3.1，最高 v3.99 |
| 项目名 | `albert_p4` |
| 程序版本 | `P1.6.4` |
| 硬件标识 | `V3.2` |
| 源码提交标识 | `4d97f369e1a32f126b7121a66a70a53fca628dfa` |
| 编译时间 | `Oct 8 2026 19:06:47`，固件未记录时区 |
| ESP-IDF | `v5.5.5` |
| Arduino ESP32 | `3.3.7`，版本字符串位于 `0x481c2488` |
| Flash 镜像头 | 32 MiB，DIO，80 MHz |
| 应用镜像大小 | 2,551,424 字节 |
| 应用入口 | `0x4ff203ce` |
| 硬件 profile 字符串 | `waveshare-p4-wifi6-sn65hvd230-x3` |

应用描述符中的原始 ELF SHA256：

```text
eee2ccf0d7e48b735103ac0c88f690967dbbb37e973ee6edbb89ba0f44d8a6b1
```

引导包 SHA256：

```text
11cd02e1d0bcda1cd894a249e963ac54eb67f6cd29ab6d40bcaf85fff8711343
```

目录中的 OTA 文件与引导包 `0x10000` 处的应用镜像完全一致。应用、引导程序的 checksum 和 SHA256 footer，以及分区表 MD5 均通过验证。镜像可直接解析，代码区未以 Flash 加密后的密文形式存储。

## 16 MiB 文件与 32 MiB 分区的差异

文件名含 `16MiB`，实际长度也是 `0x1000000`；但引导程序、应用头及分区表要求 32 MiB 地址空间。

| 分区 | 类型 | 起始地址 | 大小 | 文件中实际存在的内容 |
|---|---|---|---|---|
| nvs | data/nvs | `0x9000` | `0x5000` | 完整，全部 `0xff` |
| otadata | data/ota | `0xe000` | `0x2000` | 完整，全部 `0xff` |
| app0 | app/ota_0 | `0x10000` | `0xc80000` | 完整应用及擦除态填充 |
| app1 | app/ota_1 | `0xc90000` | `0xc80000` | 只有前 `0x370000` 字节，全部 `0xff` |
| spiffs | data/spiffs | `0x1910000` | `0x6c0000` | 地址在文件之外 |
| coredump | data/coredump | `0x1ff0000` | `0x10000` | 地址在文件之外 |

最后一个非 `0xff` 字节是 `0x27ee7f`，恰为应用镜像末尾。当前应用代码本身完整；缺少的是文件后半段的 Flash 地址空间。无法凭文件名判断实物 Flash 容量，目标板若只有 16 MiB，必须重新规划分区后构建。提取出的 [partitions.csv](analysis/partitions.csv) 保留原表，未擅自修改。

NVS 为空，无法恢复已保存的 Wi-Fi、用户设置、车辆记录或运行状态。SPIFFS 和 coredump 不在此文件中，不能声称已提取。管理页实际嵌入应用只读区，无需 SPIFFS 即可恢复。

## CAN 与实时任务

引脚表直接读取自 `0x48222610`，通道表自 `0x48222640`。下列 TX/RX 是 ESP32 GPIO，车辆连接器针脚是另一套编号。

| 控制器 | 逻辑通道 | A 组 TX/RX | B 组 TX/RX | 波特率 | 网页中的车辆连接器针脚 |
|---|---|---|---|---|---|
| CAN0 | CH | 2 / 3 | 3 / 2 | 500,000 | 13 / 14 |
| CAN1 | VEH | 4 / 5 | 50 / 49 | 500,000 | 9 / 10 |
| CAN2 | PARTY | 26 / 27 | 31 / 30 | 500,000 | 2 / 3 |

存储模式 `0=A`、`1=B`、`2=Auto`，没有有效保存值时默认 Auto。自动探测函数 `0x480312a6` 使用监听配置探测有效帧，包含约 1,500,000 微秒的探测等待，并执行停止、删除节点、释放 GPIO 的清理流程。完整逻辑见对应伪代码；基础模块只恢复了引脚与配置数据。

| 任务 | 入口 | 优先级 | CPU | 栈参数 |
|---|---|---|---|---|
| fsd_p0 | `0x4ff2520a` | 24 | 1 | 4,096 字节 |
| can_rt | `0x4810d080` | 20 | 1 | 8,192 字节 |
| p4_supervisor | `0x48121206` | 3 | 0 | 4,096 字节 |

任务参数来自 `setup()` 和 supervisor 创建调用；ESP-IDF 的任务创建栈参数使用字节。启动日志还记录后台优先级 2、Web 优先级 1。CAN hot state 的内部 RAM 分配大小为 `0x18da0`，即 101,792 字节。

固件集成 ESP-Hosted / esp_wifi_remote，通过 SDIO 使用无线协处理器。镜像含多种协处理器名称，不能仅凭字符串列表确定具体搭载型号。

## 关键后端入口

`recovered_` 前缀是分析时命名，不表示恢复了原始 C++ 符号。

| 地址 | 对应逻辑 | 文件 |
|---|---|---|
| `0x48117336` | Arduino setup、引脚选择、CAN 初始化、任务启动 | [setup](decompiled/functions/48117336_recovered_arduino_setup.c) |
| `0x480312a6` | A/B 引脚探测 | [probe](decompiled/functions/480312a6_recovered_probe_can_pin_layout.c) |
| `0x4810d080` | CAN 实时任务 | [can_rt](decompiled/functions/4810d080_recovered_can_rt_task.c) |
| `0x4ff2520a` | FSD P0 实时任务 | [fsd_p0](decompiled/functions/4ff2520a_recovered_fsd_p0_task.c) |
| `0x480868b2` | 网页基础设施、HTTP 路由注册 | [routes](decompiled/functions/480868b2_recovered_dashboard_register_routes.c) |
| `0x4811aede` | 运行期服务与 OTA 健康状态检查 | [runtime](decompiled/functions/4811aede_recovered_runtime_service.c) |
| `0x48120c38` | supervisor 创建 | [start_supervisor](decompiled/functions/48120c38_recovered_start_supervisor.c) |

原始页面包含 FSD 设置、速度补偿、扭矩提醒处理、自动换挡、座椅、灯光、电池预热、CAN 抓包、CAN 实验、Wi-Fi、云同步和 OTA 等界面。接口注册及伪代码提供这些模块的静态证据，未在车辆或开发板上逐项验证功能。

OTA 运行期服务中存在 120,000 毫秒的健康期限比较，失败后进入回滚处理。健康条件涉及 CAN 新鲜度、任务心跳、P0 完整性和持久化状态。不能把这段流程简化为无条件标记新镜像有效。

## 可编译代码的边界

`reconstructed/` 包含从固件恢复的数据定义、ELF 摘要格式化逻辑，以及新写的诊断输出程序。

- `board_profile.c`：GPIO、通道、任务、提交标识及原 ELF 摘要；常量均有对应固件证据。
- `http_routes.c`：87 条路由的注册元数据。处理函数地址是原固件地址，**不是重新编译后可调用的函数指针**。
- `summary.c` / `main.c`：新写的主机诊断工具，已使用 C11、`-Wall -Wextra -Werror` 编译和执行。
- `idf_app/`：输出上述恢复信息的 ESP-IDF 诊断工程。没有接入原车控、Wi-Fi、云端或 OTA 状态机，不是功能等价固件。

主机编译：

```sh
cmake -S reverse/reconstructed -B reverse/reconstructed/build -G Ninja
cmake --build reverse/reconstructed/build
reverse/reconstructed/build/albert_inspect
```

ESP-IDF 诊断工程的构建入口，需使用支持 ESP32-P4 的 IDF v5.5.5 环境：

```sh
cd reverse/reconstructed/idf_app
idf.py set-target esp32p4
idf.py build
```

主机 C 工程已编译执行；基础模块也通过 RISC-V `rv32imac` / `ilp32` 交叉编译，见 [cross_compile.json](analysis/cross_compile.json)。分区 CSV 通过官方分区生成工具校验，生成的 3,072 字节分区表与原固件一致，见 [partition_validation.json](analysis/partition_validation.json)。

现有 PlatformIO IDF 为 v5.1.2，不支持该目标，因此未声称完成 ESP-IDF 目标构建或上板测试。未执行任何烧录。

## 分析容器、符号和限制

[application.analysis.elf](extracted/application.analysis.elf) 是按固件七个加载段重建的 ELF32 RISC-V **分析容器**，保留段地址和全部原始段字节，方便 Ghidra 导入。它不是描述符 SHA256 所指的原始 ELF，没有原始 DWARF 调试信息。

Ghidra 项目为 `ghidra/Albert_P4.gpr`，处理器配置 `RISCV:LE:32:default:gcc`。分析补充了启动代码证明的 BSS 范围 `0x4ff589e0..0x4ff6e300` 和 `gp=0x4ff48580`。RTC 区和 ROM 区以未初始化分析区表示，没有伪造其内存字节。

ROM 标注使用官方 ESP-IDF v5.5.5 的 ESP32-P4 ECO5 表。官方 CMake 对 P4 v3 以上选择该表；旧表中的 libgcc 地址不同。已按此条件修正，相关文件及选择依据保存在 `analysis/rom_symbols/` 与 `analysis/rom_selection.json`。

4,966 个函数均导出了伪代码，其中 1,267 个文件带反编译推断警告、119 个含 `halt_baddata` / `halt_badfunc` 标记，13 个含未确定寄存器值。警告类别可能重叠。通用 RISC-V 解码对部分扩展指令或复杂控制流仍有缺口，必须结合原始反汇编校对，不能将导出成功等同于源码正确或可编译。

原始变量名、类定义、注释、宏、模板边界、源码文件划分、构建选项以及部分调用约定无法从这些文件确定。固件还保留了自定义 FreeRTOS / SDIO / TWAI 补丁路径，具体补丁源码未在镜像中以文本形式保存。

公开 GitHub 提交与项目检索未找到该准确提交。检索记录见 [public_source_search.json](analysis/public_source_search.json)，这不能证明源码不存在于其他公开平台或私有仓库。

## 重现与检索

在 `Albert/` 目录运行：

```sh
python3 reverse/tools/extract_firmware.py \
  Albert-P4-P1.6.4-V3.2-4d97f369-16MiB-bootstrap.bin \
  --ota Albert-P4-P1.6.4-V3.2-4d97f369-OTA.bin

# 需安装 Ghidra 和 JDK 21；其他安装位置可通过 GHIDRA_HOME 指定。
JAVA_HOME=/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home \
  sh reverse/tools/run_ghidra.sh

python3 reverse/tools/reconstruct.py
cmake --build reverse/reconstructed/build
python3 reverse/tools/verify_artifacts.py
```

首次建立目录时，用上一节的 `cmake -S ... -B ...` 完成配置。Ghidra 工具默认复用当前项目；删除自动生成的项目重新分析时，可再运行一次 `reconstruct.py`、`run_ghidra.sh` 和 `reconstruct.py`，以将路由回调加入函数发现。

检索示例：

```sh
python3 reverse/tools/inspect_firmware.py --route /can_pin_layout
python3 reverse/tools/inspect_firmware.py --function 0x48117336
python3 reverse/tools/inspect_firmware.py --search 'health_deadline'
```

`analysis/manifest.json` 保存镜像、分区、段、资源的偏移、大小与摘要；`strings.tsv` 保存字符串和真实虚拟地址；`string_xrefs.tsv` 和 `calls.tsv` 保存引用和调用关系。完整原始固件保留在上级目录，未改写。
