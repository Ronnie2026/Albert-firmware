# ESP32-P4-3CAN

- 研究对象为 Albert P4 / P1.6.4 / V3.2 / 4d97f369；不要与原 ZIP 外层 ESP32-S3 双 CAN 工程混用。
- `reverse/decompiled` 是反编译伪代码，不是完整原始源码；`reverse/reconstructed` 是部分重建与诊断工程。
- 原始证据和新增实现应区分；修改分析结论时写明证据地址、构建身份与不确定性。
- 主机诊断构建使用 `./scripts/build-host.sh`；ESP32-P4 诊断构建使用 `./scripts/build-p4.sh`，需要已激活的 ESP-IDF。
- 不将主机编译、目标编译或静态验证描述为实车验证；不自动烧录或连接汽车总线。
- 生成文件不入库，不更新原分析验证记录以冒充当前结果。
- 前端原型默认 HTML；数据库开发如涉及则使用 MS SQL Server 2014。
