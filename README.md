# Albert-firmware

Albert 固件与技术参考资料整理。上游仓库：[204442021/Albert-firmware](https://github.com/204442021/Albert-firmware)。

## 目录

| 路径 | 内容 |
| --- | --- |
| [firmware/](firmware/) | 从发布附件导入的 ESP32-S3 双 CAN PlatformIO 工程 |
| [firmware/README.md](firmware/README.md) | 源码包原有工程说明，部分内容与实际默认构建配置存在差异 |
| [技术参考/Albert固件-源作者发布记录汇总.md](技术参考/Albert固件-源作者发布记录汇总.md) | 全部公开 Release 说明与附件链接 |
| [技术参考/源码导入说明.md](技术参考/源码导入说明.md) | 来源、SHA-256、目录映射与构建环境说明 |
| [技术参考/逆向分析资料/](技术参考/逆向分析资料/) | 源码包附带的逆向分析、反编译结果及工具 |

## 开发入口

工程使用 PlatformIO + Arduino，配置为 ESP32-S3、16MB Flash，双 CAN 为 MCP2515 + TWAI。构建时显式指定环境：

```sh
cd firmware
pio run -e main
```

导入时保持原源码功能不变，未执行编译、烧录或实车验证。原默认构建环境为报文回放 `can_b_replay`，`compile.sh` 默认则为 `can`；使用前请先阅读源码导入说明。

## 来源边界

作者将 P1.6.4 源码 ZIP 描述为第三方逆向源码。该工程的 ESP32-S3 双 CAN 配置与正式 P 系列 ESP32-P4 三 CAN 不同，尚不能认定能构建正式发布固件。发布功能、原工程文档和逆向分析结论需分别验证。

本次未新增授权条款；各文件的版权和授权声明沿用原资料。
