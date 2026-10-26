# 全部87条HTTP注册与功能归属

方法来自http_parser枚举；ANY为255。共享路径的GET/POST分开计数。JS路径候选引用不保证对应方法，具体功能已按调用实现区分。

| 方法 | 路径 | C处理地址 | 功能模块 | 上传回调 |
|---|---|---|---|---|
| GET | `/` | [`0x4808b134`](../decompiled/functions/4808b134_recovered_http_get_root_4808b134.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md) | — |
| GET | `/management/status` | [`0x480b2722`](../decompiled/functions/480b2722_recovered_http_get_management_status_480b2722.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md)、[云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/auth/login` | [`0x4808a8c2`](../decompiled/functions/4808a8c2_recovered_http_post_auth_login_4808a8c2.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md) | — |
| POST | `/auth/logout` | [`0x4808adc8`](../decompiled/functions/4808adc8_recovered_http_post_auth_logout_4808adc8.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md) | — |
| GET | `/auth/status` | [`0x480677f4`](../decompiled/functions/480677f4_recovered_http_get_auth_status_480677f4.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md) | — |
| ANY | `/generate_204` | [`0x48067692`](../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| ANY | `/gen_204` | [`0x48067692`](../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| ANY | `/hotspot-detect.html` | [`0x48067692`](../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| GET | `/health` | [`0x480c2bda`](../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[本地／在线OTA、启动验证与重启](modules/15_ota.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/web_metrics` | [`0x4806f630`](../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/status_fast` | [`0x4806eb88`](../decompiled/functions/4806eb88_recovered_http_get_status_fast_4806eb88.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md) | — |
| GET | `/torque_nag/status` | [`0x4806e388`](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c) | [免打扰、摄像头、滚轮与扭矩状态机](modules/06_dnd_torque.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/status` | [`0x480c0178`](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[自动换挡、方向盘、滚轮与障碍物](modules/07_gear.md)、[座椅手动调节、位置记忆与停止](modules/08_seats.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/runtime_status` | [`0x4806851c`](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[FSD、自动激活与预警激活](modules/04_fsd_activation.md)、[速度补偿与驾驶员目标模板](modules/05_speed.md)、[免打扰、摄像头、滚轮与扭矩状态机](modules/06_dnd_torque.md)、[自动换挡、方向盘、滚轮与障碍物](modules/07_gear.md)、[六区氛围灯、FSD提示、盲区、转向与迎宾](modules/09_ambient.md)、[远光、爆闪与后雾灯](modules/10_lighting.md)、[电池预热和维修模式](modules/11_preheat_service.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/system_status` | [`0x4808334c`](../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/can_diag` | [`0x4807fa5c`](../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/can_hot_ids` | [`0x480c037a`](../decompiled/functions/480c037a_recovered_http_get_can_hot_ids_480c037a.c) | [健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/coredump/info` | [`0x4806cbde`](../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c) | [健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/coredump.bin` | [`0x4806d406`](../decompiled/functions/4806d406_recovered_http_get_coredump_bin_4806d406.c) | [健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| GET | `/config` | [`0x480bd450`](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[FSD、自动激活与预警激活](modules/04_fsd_activation.md)、[电池预热和维修模式](modules/11_preheat_service.md) | — |
| POST | `/config` | [`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md)、[驾驶员与个性化设置](modules/03_drivers.md)、[FSD、自动激活与预警激活](modules/04_fsd_activation.md)、[速度补偿与驾驶员目标模板](modules/05_speed.md)、[免打扰、摄像头、滚轮与扭矩状态机](modules/06_dnd_torque.md)、[自动换挡、方向盘、滚轮与障碍物](modules/07_gear.md)、[座椅手动调节、位置记忆与停止](modules/08_seats.md)、[远光、爆闪与后雾灯](modules/10_lighting.md)、[电池预热和维修模式](modules/11_preheat_service.md) | — |
| GET | `/config/uss_radar` | [`0x4806afe2`](../decompiled/functions/4806afe2_recovered_http_get_config_uss_radar_4806afe2.c) | [自动换挡、方向盘、滚轮与障碍物](modules/07_gear.md) | — |
| POST | `/config/uss_radar` | [`0x480f43a8`](../decompiled/functions/480f43a8_recovered_http_post_config_uss_radar_480f43a8.c) | [自动换挡、方向盘、滚轮与障碍物](modules/07_gear.md) | — |
| GET | `/ambient_config` | [`0x4806adda`](../decompiled/functions/4806adda_recovered_http_get_ambient_config_4806adda.c) | [六区氛围灯、FSD提示、盲区、转向与迎宾](modules/09_ambient.md) | — |
| POST | `/ambient_config` | [`0x480f584c`](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c) | [FSD、自动激活与预警激活](modules/04_fsd_activation.md)、[六区氛围灯、FSD提示、盲区、转向与迎宾](modules/09_ambient.md) | — |
| GET | `/speed_target/config` | [`0x480f99bc`](../decompiled/functions/480f99bc_recovered_http_get_speed_target_config_480f99bc.c) | [速度补偿与驾驶员目标模板](modules/05_speed.md) | — |
| POST | `/speed_target/save` | [`0x480f9322`](../decompiled/functions/480f9322_recovered_http_post_speed_target_save_480f9322.c) | [速度补偿与驾驶员目标模板](modules/05_speed.md) | — |
| GET | `/can_pin_layout` | [`0x480681de`](../decompiled/functions/480681de_recovered_http_get_can_pin_layout_480681de.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md) | — |
| POST | `/can_pin_layout` | [`0x480ff1e4`](../decompiled/functions/480ff1e4_recovered_http_post_can_pin_layout_480ff1e4.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md) | — |
| GET | `/rear_fog/config` | [`0x48066e12`](../decompiled/functions/48066e12_recovered_http_get_rear_fog_config_48066e12.c) | [远光、爆闪与后雾灯](modules/10_lighting.md) | — |
| POST | `/rear_fog/config` | [`0x480f4dda`](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c) | [驾驶员与个性化设置](modules/03_drivers.md)、[远光、爆闪与后雾灯](modules/10_lighting.md) | — |
| POST | `/rear_fog/runtime` | [`0x481015a6`](../decompiled/functions/481015a6_recovered_http_post_rear_fog_runtime_481015a6.c) | [远光、爆闪与后雾灯](modules/10_lighting.md) | — |
| POST | `/config/ble_obstacle` | [`0x480f1e34`](../decompiled/functions/480f1e34_recovered_http_post_config_ble_obstacle_480f1e34.c) | [驾驶员与个性化设置](modules/03_drivers.md)、[自动换挡、方向盘、滚轮与障碍物](modules/07_gear.md) | — |
| POST | `/fsd_auto_start/master` | [`0x480f2fc2`](../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c) | [驾驶员与个性化设置](modules/03_drivers.md)、[FSD、自动激活与预警激活](modules/04_fsd_activation.md) | — |
| POST | `/save` | [`0x480f34ec`](../decompiled/functions/480f34ec_recovered_http_post_save_480f34ec.c) | [共用配置、自动保存与 CAN 基础](modules/02_config_can.md) | — |
| POST | `/seat_action` | [`0x48100e14`](../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c) | [座椅手动调节、位置记忆与停止](modules/08_seats.md) | — |
| GET | `/driver_profiles` | [`0x4806d76e`](../decompiled/functions/4806d76e_recovered_http_get_driver_profiles_4806d76e.c) | [驾驶员与个性化设置](modules/03_drivers.md) | — |
| POST | `/driver_profiles` | [`0x480fa85c`](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c) | [驾驶员与个性化设置](modules/03_drivers.md) | — |
| GET | `/fsd_records` | [`0x480b4abe`](../decompiled/functions/480b4abe_recovered_http_get_fsd_records_480b4abe.c) | [FSD行程、里程统计与手机时钟](modules/16_records.md) | — |
| GET | `/fsd_records/clock` | [`0x4806c0d4`](../decompiled/functions/4806c0d4_recovered_http_get_fsd_records_clock_4806c0d4.c) | [FSD行程、里程统计与手机时钟](modules/16_records.md) | — |
| POST | `/fsd_records/clock` | [`0x4806ef66`](../decompiled/functions/4806ef66_recovered_http_post_fsd_records_clock_4806ef66.c) | [FSD行程、里程统计与手机时钟](modules/16_records.md) | — |
| POST | `/fsd_records/clear` | [`0x480d338a`](../decompiled/functions/480d338a_recovered_http_post_fsd_records_clear_480d338a.c) | [FSD行程、里程统计与手机时钟](modules/16_records.md) | — |
| POST | `/fsd_records/subtotal/reset` | [`0x480d2a5e`](../decompiled/functions/480d2a5e_recovered_http_post_fsd_records_subtotal_reset_480d2a5e.c) | [FSD行程、里程统计与手机时钟](modules/16_records.md) | — |
| GET | `/cloud/status` | [`0x480d0b14`](../decompiled/functions/480d0b14_recovered_http_get_cloud_status_480d0b14.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| GET | `/onboarding/status` | [`0x4808d6c6`](../decompiled/functions/4808d6c6_recovered_http_get_onboarding_status_4808d6c6.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/onboarding/complete` | [`0x4808e07e`](../decompiled/functions/4808e07e_recovered_http_post_onboarding_complete_4808e07e.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| GET | `/cloud/agent/config` | [`0x4808eb2e`](../decompiled/functions/4808eb2e_recovered_http_get_cloud_agent_config_4808eb2e.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/agent/config` | [`0x4808cf44`](../decompiled/functions/4808cf44_recovered_http_post_cloud_agent_config_4808cf44.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/settings/restore` | [`0x480b6d24`](../decompiled/functions/480b6d24_recovered_http_post_cloud_settings_restore_480b6d24.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| GET | `/cloud/settings/conflicts` | [`0x480b31d8`](../decompiled/functions/480b31d8_recovered_http_get_cloud_settings_conflicts_480b31d8.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/settings/conflict` | [`0x480d103e`](../decompiled/functions/480d103e_recovered_http_post_cloud_settings_conflict_480d103e.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/developer` | [`0x4808d958`](../decompiled/functions/4808d958_recovered_http_post_cloud_developer_4808d958.c) | [界面、CSS 与访问认证](modules/01_ui_auth.md) | — |
| GET | `/cloud/config` | [`0x480b4fa4`](../decompiled/functions/480b4fa4_recovered_http_get_cloud_config_480b4fa4.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/config` | [`0x480b3e2c`](../decompiled/functions/480b3e2c_recovered_http_post_cloud_config_480b3e2c.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/test` | [`0x4811e15c`](../decompiled/functions/4811e15c_recovered_http_post_cloud_test_4811e15c.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/enabled` | [`0x480b3e6c`](../decompiled/functions/480b3e6c_recovered_http_post_cloud_enabled_480b3e6c.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/cloud/upload` | [`0x4808cf68`](../decompiled/functions/4808cf68_recovered_http_post_cloud_upload_4808cf68.c) | [云同步、备份恢复、冲突与首次引导](modules/17_cloud_onboarding.md) | — |
| POST | `/rec_start` | [`0x480fd584`](../decompiled/functions/480fd584_recovered_http_post_rec_start_480fd584.c) | [CAN抓包、过滤与文件下载](modules/12_recorder.md) | — |
| POST | `/rec_stop` | [`0x480fd45c`](../decompiled/functions/480fd45c_recovered_http_post_rec_stop_480fd45c.c) | [CAN抓包、过滤与文件下载](modules/12_recorder.md) | — |
| POST | `/rec_clear` | [`0x4806e04e`](../decompiled/functions/4806e04e_recovered_http_post_rec_clear_4806e04e.c) | [CAN抓包、过滤与文件下载](modules/12_recorder.md) | — |
| GET | `/rec_status` | [`0x4806c4e8`](../decompiled/functions/4806c4e8_recovered_http_get_rec_status_4806c4e8.c) | [CAN抓包、过滤与文件下载](modules/12_recorder.md) | — |
| GET | `/rec_download` | [`0x4806fee2`](../decompiled/functions/4806fee2_recovered_http_get_rec_download_4806fee2.c) | [CAN抓包、过滤与文件下载](modules/12_recorder.md) | — |
| GET | `/wifi/status` | [`0x48066f4c`](../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| POST | `/wifi/scan` | [`0x4806b7e4`](../decompiled/functions/4806b7e4_recovered_http_post_wifi_scan_4806b7e4.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| POST | `/wifi/connect` | [`0x480f38e4`](../decompiled/functions/480f38e4_recovered_http_post_wifi_connect_480f38e4.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| POST | `/wifi/disconnect` | [`0x480f2624`](../decompiled/functions/480f2624_recovered_http_post_wifi_disconnect_480f2624.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| POST | `/wifi/forget` | [`0x480f2918`](../decompiled/functions/480f2918_recovered_http_post_wifi_forget_480f2918.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| POST | `/wifi/ap-config` | [`0x480f3d2c`](../decompiled/functions/480f3d2c_recovered_http_post_wifi_ap_config_480f3d2c.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| POST | `/wifi/ap-auto-off` | [`0x480f2c14`](../decompiled/functions/480f2c14_recovered_http_post_wifi_ap_auto_off_480f2c14.c) | [AP热点、外部Wi-Fi和网络状态](modules/14_wifi.md) | — |
| GET | `/ota/status` | [`0x4806bbf8`](../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md)、[健康、CAN、系统指标、JSON与崩溃转储](modules/18_diagnostics.md) | — |
| POST | `/ota/start` | [`0x480ffd82`](../decompiled/functions/480ffd82_recovered_http_post_ota_start_480ffd82.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | — |
| POST | `/ota/cancel` | [`0x480ff590`](../decompiled/functions/480ff590_recovered_http_post_ota_cancel_480ff590.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | — |
| POST | `/ota/upload` | [`0x480ff860`](../decompiled/functions/480ff860_recovered_http_post_ota_upload_480ff860.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | [`0x48064780`](../decompiled/functions/48064780_FUN_ram_48064780.c) |
| GET | `/ota/online/status` | [`0x480bdfce`](../decompiled/functions/480bdfce_recovered_http_get_ota_online_status_480bdfce.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | — |
| POST | `/ota/online/check` | [`0x4806b9ae`](../decompiled/functions/4806b9ae_recovered_http_post_ota_online_check_4806b9ae.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | — |
| POST | `/ota/online/install` | [`0x4807be92`](../decompiled/functions/4807be92_recovered_http_post_ota_online_install_4807be92.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | — |
| POST | `/reboot` | [`0x480ffb40`](../decompiled/functions/480ffb40_recovered_http_post_reboot_480ffb40.c) | [本地／在线OTA、启动验证与重启](modules/15_ota.md) | — |
| POST | `/api/can-experiment/listen` | [`0x480ed598`](../decompiled/functions/480ed598_recovered_http_post_api_can_experiment_listen_480ed598.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| POST | `/api/can-experiment/listen/stop` | [`0x480ecf86`](../decompiled/functions/480ecf86_recovered_http_post_api_can_experiment_listen_stop_480ecf86.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| POST | `/api/can-experiment/source/confirm` | [`0x480ab7ba`](../decompiled/functions/480ab7ba_recovered_http_post_api_can_experiment_source_confirm_480ab7ba.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| POST | `/api/can-experiment/validate` | [`0x480ec3f8`](../decompiled/functions/480ec3f8_recovered_http_post_api_can_experiment_validate_480ec3f8.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| POST | `/api/can-experiment/start` | [`0x480eb56e`](../decompiled/functions/480eb56e_recovered_http_post_api_can_experiment_start_480eb56e.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| POST | `/api/can-experiment/stop` | [`0x480eab84`](../decompiled/functions/480eab84_recovered_http_post_api_can_experiment_stop_480eab84.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| GET | `/api/can-experiment/status` | [`0x480acf1c`](../decompiled/functions/480acf1c_recovered_http_get_api_can_experiment_status_480acf1c.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| GET | `/api/can-experiment/presets` | [`0x4806da0c`](../decompiled/functions/4806da0c_recovered_http_get_api_can_experiment_presets_4806da0c.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| POST | `/api/can-experiment/presets` | [`0x480ac732`](../decompiled/functions/480ac732_recovered_http_post_api_can_experiment_presets_480ac732.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
| DELETE | `/api/can-experiment/presets` | [`0x4808a37e`](../decompiled/functions/4808a37e_recovered_http_delete_api_can_experiment_presets_4808a37e.c) | [CAN实验规则、发送、校验与预设](modules/13_can_experiment.md) | — |
