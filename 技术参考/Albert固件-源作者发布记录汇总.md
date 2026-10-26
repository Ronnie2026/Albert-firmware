# Albert 固件发布记录汇总（源作者）

整理日期：2026-10-26（北京时间）

来源：[204442021/Albert-firmware Releases](https://github.com/204442021/Albert-firmware/releases)。本帖汇总当前公开的全部 4 条 Release、10 个上传附件，按发布时间倒序排列。功能和操作要求依据作者发布说明整理，未进行硬件或实车验证。

## 快速索引

| 发布条目 | 发布时间（北京时间） | 当前附件标识 | 查看 |
| --- | --- | --- | --- |
| P4-3CAN固件 | 2026-09-29 23:09:39 | P1.6.4；P4 芯片 V1.3 / V3.2 | [原发布](https://github.com/204442021/Albert-firmware/releases/tag/P%E7%B3%BB%E5%88%97) |
| 使用教程（必看） | 2026-08-11 19:24:43 | 功能 PDF、接线图 | [原发布](https://github.com/204442021/Albert-firmware/releases/tag/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E) |
| B系列 T2CAN固件 | 2026-08-11 17:33:18 | B3.7；文件名含 V13 | [原发布](https://github.com/204442021/Albert-firmware/releases/tag/B%E7%B3%BB%E5%88%97%EF%BC%889/10%EF%BC%8C13/14%E8%B7%AF%E5%8F%8CCAN%E4%B8%93%E7%94%A8%EF%BC%89) |
| V系列-固件发布 | 2026-08-11 17:31:15 | V4.6；文件名含 V13 | [原发布](https://github.com/204442021/Albert-firmware/releases/tag/V%E7%B3%BB%E5%88%97%EF%BC%882/3%E8%B7%AF%E5%BE%AE%E9%9B%AA%E4%B8%93%E7%94%A8%EF%BC%89) |

## 1. P4-3CAN固件

发布时间：2026-09-29 23:09:39（北京时间） · [原发布页面](https://github.com/204442021/Albert-firmware/releases/tag/P%E7%B3%BB%E5%88%97)

适用 ESP32-P4 三 CAN 设备。首次使用先通过有线方式刷入 16 MiB 引导固件，再使用在线 OTA 更新。

P1.6.4 的更新包括速度偏移功能重做、接入云端服务。附件中的 V1.3 / V3.2 对应 P4 芯片版本，不是固件版本号；作者称新购设备通常为 V3.2，实际应以设备信息为准。

附件提供两个芯片版本各自的 bootstrap 和 OTA 固件，以及源码 ZIP。作者明确将 ZIP 描述为第三方逆向源码，不能视为正式固件的原始工程或可复现构建证明。

### 附件下载

| 文件 | 大小 |
| --- | --- |
| [Albert-P4-P1.6.4-V1.3-8915f5c7-OTA.bin](https://github.com/204442021/Albert-firmware/releases/download/P%E7%B3%BB%E5%88%97/Albert-P4-P1.6.4-V1.3-8915f5c7-OTA.bin) | 2.44 MiB |
| [Albert-P4-P1.6.4-V1.3-c565dc82-16MiB-bootstrap.bin](https://github.com/204442021/Albert-firmware/releases/download/P%E7%B3%BB%E5%88%97/Albert-P4-P1.6.4-V1.3-c565dc82-16MiB-bootstrap.bin) | 16.00 MiB |
| [Albert-P4-P1.6.4-V3.2-8915f5c7-OTA.bin](https://github.com/204442021/Albert-firmware/releases/download/P%E7%B3%BB%E5%88%97/Albert-P4-P1.6.4-V3.2-8915f5c7-OTA.bin) | 2.45 MiB |
| [Albert-P4-P1.6.4-V3.2-c565dc82-16MiB-bootstrap.bin](https://github.com/204442021/Albert-firmware/releases/download/P%E7%B3%BB%E5%88%97/Albert-P4-P1.6.4-V3.2-c565dc82-16MiB-bootstrap.bin) | 16.00 MiB |
| [P1.6.4.source.code.package.zip](https://github.com/204442021/Albert-firmware/releases/download/P%E7%B3%BB%E5%88%97/P1.6.4.source.code.package.zip) | 29.16 MiB |

GitHub 自动生成的仓库快照：[Source code (zip)](https://github.com/204442021/Albert-firmware/archive/refs/tags/P%E7%B3%BB%E5%88%97.zip) · [Source code (tar.gz)](https://github.com/204442021/Albert-firmware/archive/refs/tags/P%E7%B3%BB%E5%88%97.tar.gz)。这些是仓库标签快照，与单独上传的源码包不是同一种附件。

## 2. 使用教程（必看）

发布时间：2026-08-11 19:24:43（北京时间） · [原发布页面](https://github.com/204442021/Albert-firmware/releases/tag/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E)

硬件与系列的对应关系：微雪使用 V 系列，接 2/3；双 CAN 使用 B 系列，CAN_A 接 9/10、CAN_B 接 13/14。以上编号沿用作者说明，具体接线请对照下方接线图。

作者要求首次刷入其固件，完成线刷后在微雪与双 CAN 两端进行 BLE 配对；不使用 Wi-Fi 中继时，后续无需持续打开微雪后台。

作者介绍的微雪功能包括 NAG 扭矩注入、方向盘提示抑制、带黑白名单的 Wi-Fi 中继，以及通过 BLE 传输信号。自动换挡需配合微雪，缺少 BLE 连接会导致该功能的障碍物检测失效。

LILYGO-T2CAN 功能范围包括：FSD 启用与参数配置；速度补偿；驾驶风格与跟车距离；免打扰与方向盘辅助；远光灯与闪灯；换挡辅助；摄像头控制；CAN 监控、过滤、诊断和抓包；设备状态、版本和网络管理；Wi-Fi/Web 配置及网络 OTA 升级。

本条附件包括功能介绍 PDF 和接线说明图片。

### 附件下载

| 文件 | 大小 |
| --- | --- |
| [gongnengtu.pdf](https://github.com/204442021/Albert-firmware/releases/download/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/gongnengtu.pdf) | 0.53 MiB |
| [jiexianshuoming.jpeg](https://github.com/204442021/Albert-firmware/releases/download/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/jiexianshuoming.jpeg) | 2.14 MiB |

GitHub 自动生成的仓库快照：[Source code (zip)](https://github.com/204442021/Albert-firmware/archive/refs/tags/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E.zip) · [Source code (tar.gz)](https://github.com/204442021/Albert-firmware/archive/refs/tags/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E.tar.gz)。这些是仓库标签快照，与单独上传的源码包不是同一种附件。

## 3. B系列 T2CAN固件

发布时间：2026-08-11 17:33:18（北京时间） · [原发布页面](https://github.com/204442021/Albert-firmware/releases/tag/B%E7%B3%BB%E5%88%97%EF%BC%889/10%EF%BC%8C13/14%E8%B7%AF%E5%8F%8CCAN%E4%B8%93%E7%94%A8%EF%BC%89)

适用 T2CAN 双 CAN 设备，对应 9/10、13/14 路。发布正文给出的设备后台地址为 `http://100.100.1.1`。

当前附件文件名标识为 B3.7，并带有 V13 标识；正文没有解释 V13 的含义，也未提供逐版本更新日志。附件为 16 MB 完整固件。

### 附件下载

| 文件 | 大小 |
| --- | --- |
| [T2CAN-FSD-B3.7-V13-38da36a8-full-16MB.bin](https://github.com/204442021/Albert-firmware/releases/download/B%E7%B3%BB%E5%88%97%EF%BC%889/10%EF%BC%8C13/14%E8%B7%AF%E5%8F%8CCAN%E4%B8%93%E7%94%A8%EF%BC%89/T2CAN-FSD-B3.7-V13-38da36a8-full-16MB.bin) | 16.00 MiB |

GitHub 自动生成的仓库快照：[Source code (zip)](https://github.com/204442021/Albert-firmware/archive/refs/tags/B%E7%B3%BB%E5%88%97%EF%BC%889%2F10%EF%BC%8C13%2F14%E8%B7%AF%E5%8F%8CCAN%E4%B8%93%E7%94%A8%EF%BC%89.zip) · [Source code (tar.gz)](https://github.com/204442021/Albert-firmware/archive/refs/tags/B%E7%B3%BB%E5%88%97%EF%BC%889%2F10%EF%BC%8C13%2F14%E8%B7%AF%E5%8F%8CCAN%E4%B8%93%E7%94%A8%EF%BC%89.tar.gz)。这些是仓库标签快照，与单独上传的源码包不是同一种附件。

## 4. V系列-固件发布

发布时间：2026-08-11 17:31:15（北京时间） · [原发布页面](https://github.com/204442021/Albert-firmware/releases/tag/V%E7%B3%BB%E5%88%97%EF%BC%882/3%E8%B7%AF%E5%BE%AE%E9%9B%AA%E4%B8%93%E7%94%A8%EF%BC%89)

适用微雪 2/3 路设备。当前附件文件名标识为 V4.6，同时带有 V13 标识；发布正文没有解释 V13 的含义，也未提供逐版本更新日志。

作者要求 OTA 前在车辆“安全”菜单中关闭整车电源，并明确禁止行驶过程中 OTA。

附件分别为 16 MiB FULL 完整固件与 OTA 固件。

### 附件下载

| 文件 | 大小 |
| --- | --- |
| [WIFI-NAG-V4.6-V13-514cc57-16MiB-FULL.bin](https://github.com/204442021/Albert-firmware/releases/download/V%E7%B3%BB%E5%88%97%EF%BC%882/3%E8%B7%AF%E5%BE%AE%E9%9B%AA%E4%B8%93%E7%94%A8%EF%BC%89/WIFI-NAG-V4.6-V13-514cc57-16MiB-FULL.bin) | 16.00 MiB |
| [WIFI-NAG-V4.6-V13-514cc57-OTA.bin](https://github.com/204442021/Albert-firmware/releases/download/V%E7%B3%BB%E5%88%97%EF%BC%882/3%E8%B7%AF%E5%BE%AE%E9%9B%AA%E4%B8%93%E7%94%A8%EF%BC%89/WIFI-NAG-V4.6-V13-514cc57-OTA.bin) | 1.27 MiB |

GitHub 自动生成的仓库快照：[Source code (zip)](https://github.com/204442021/Albert-firmware/archive/refs/tags/V%E7%B3%BB%E5%88%97%EF%BC%882%2F3%E8%B7%AF%E5%BE%AE%E9%9B%AA%E4%B8%93%E7%94%A8%EF%BC%89.zip) · [Source code (tar.gz)](https://github.com/204442021/Albert-firmware/archive/refs/tags/V%E7%B3%BB%E5%88%97%EF%BC%882%2F3%E8%B7%AF%E5%BE%AE%E9%9B%AA%E4%B8%93%E7%94%A8%EF%BC%89.tar.gz)。这些是仓库标签快照，与单独上传的源码包不是同一种附件。

## 阅读说明

- 当前页面是按系列维护的发布条目，不是每个历史固件版本各一条记录。这里只汇总仍公开的内容，不补写缺失的历史版本或更新日志。
- GitHub 标记的 Latest 与按发布时间排序的最新条目可能不同；查看时以系列、硬件版本和附件名称共同判断。
- 发布日期是 Release 的发布时间，不能据此推断附件版本的实际构建日期。附件内容和说明以后可能被作者替换，本帖是整理日期时的快照。
- 此前检查的 ZIP 工程配置为 ESP32-S3 双 CAN，而 P 系列正式发布面向 ESP32-P4 三 CAN；目前没有证据表明该 ZIP 能直接构建上述 P4 固件。其 Wi-Fi 或 BLE 能力也不能直接等同于正式固件的功能。
- 作者的接线、配对及 OTA 要求在相应条目中保留为参考说明。

## 源码包结构补充

源码 ZIP 同时包含外层 S3 双 CAN 工程与内层 P4 三 CAN 逆向资料。逆向资料记录的构建为 `4d97f369`，与当前发布附件的文件名标识不同，详见 [关系核对](P4三CAN与S3双CAN关系核对.md)。
