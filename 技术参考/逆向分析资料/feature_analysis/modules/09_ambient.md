# 六区氛围灯、FSD提示、盲区、转向与迎宾

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../../skills/albert-p4-can-analysis/references/control-protocol.md#ambient)；其中明确区分已确认字段与剩余缺口。

[返回总览](../README.md)

六区为门0～3、仪表台4～5，驾驶员配置带revision。运行按区域合成目标并根据来源generation/terminal恢复。各覆盖功能的完整全序优先级尚未确认，不能擅自写成固定“盲区最高、迎宾次之”等。

**运行／解析关联函数（模块共享）**：[`0x480f584c`](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)、[`0x4803c556`](../../decompiled/functions/4803c556_FUN_ram_4803c556.c)、[`0x4804162c`](../../decompiled/functions/4804162c_FUN_ram_4804162c.c)、[`0x480416da`](../../decompiled/functions/480416da_FUN_ram_480416da.c)、[`0x4809faa6`](../../decompiled/functions/4809faa6_FUN_ram_4809faa6.c)、[`0x4804304e`](../../decompiled/functions/4804304e_FUN_ram_4804304e.c)、[`0x48044258`](../../decompiled/functions/48044258_FUN_ram_48044258.c)、[`0x4804354e`](../../decompiled/functions/4804354e_FUN_ram_4804354e.c)、[`0x48043ab4`](../../decompiled/functions/48043ab4_FUN_ram_48043ab4.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="ambient_zones"></a>
## 1. 六区常亮、区域使能、RGB与亮度

**证据层次**：配置结构确认；输出组合部分重建。

提交z0…z5 Enabled、Brightness、Color；Color为6位RGB十六进制，区域亮度0～100。按选区编辑保存，关闭区域不等于清除其存储颜色。

**前端入口**：[ambientPostBodyBase · JS L1529](../../recovered_web/dashboard.script0.js#L1529)、[ambientPostSaveOnce · JS L1566](../../recovered_web/dashboard.script0.js#L1566)。

**C 接口入口**：[GET /ambient_config · 0x4806adda](../../decompiled/functions/4806adda_recovered_http_get_ambient_config_4806adda.c)、[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`ambientEnabled`、`ambientBrightness`、`ambientColor`、`ambientZone0Enabled`、`ambientZone1Enabled`、`ambientZone2Enabled`、`ambientZone3Enabled`、`ambientZone4Enabled`、`ambientZone5Enabled`。

```c
require_six_zones();
for (z = 0; z < 6; ++z) validate_enabled_rgb_and_brightness(z);
store_driver_ambient_base();
if (constant_enabled) request_enabled_zone_targets_from_fresh_sources();
```

<a id="ambient_all"></a>
## 2. 应用当前颜色亮度到全部区域

**证据层次**：前端确认。

浏览器把当前选区的enabled、RGB及亮度一起复制到全部区，再经相同接口保存；不是逐区六次HTTP写入。

**前端入口**：[ambientApplyZoneToAll · JS L1521](../../recovered_web/dashboard.script0.js#L1521)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`ambientApplyAll`。

```c
selected = config.zones[current_zone];
for (z = 0; z < 6; ++z) config.zones[z] = copy(selected); // 含enabled
schedule_single_ambient_transaction();
```

<a id="ambient_fsd"></a>
## 3. FSD激活氛围提示

**证据层次**：接口确认；运行语义重建。

页面ambientFsdCueEnabled映射后端fsdCueEnabled，由实际FSD状态驱动区域灯效；与常亮总开关、迎宾独立字段。确切提示颜色与时序未全部恢复。

**前端入口**：[ambientPostBodyBase · JS L1529](../../recovered_web/dashboard.script0.js#L1529)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`ambientFsdCueEnabled`。

```c
save_field("fsdCueEnabled", ui_fsd_cue);
if (cue_enabled && eligible_fsd_state_transition()) compose_fsd_cue_target();
merge_with_other_active_zone_targets();
```

<a id="ambient_blind"></a>
## 4. 盲区区域、亮度与警报后恢复

**证据层次**：接口确认；运行语义重建。

前／后／仪表台区域掩码，亮度10～100、延迟0～1000ms；有后端capability检查。警报解除后恢复原目标，而非硬编码一律关灯。

**前端入口**：[ambientPostBodyBase · JS L1529](../../recovered_web/dashboard.script0.js#L1529)、[ambientBlindSpotDraftValid · JS L1525](../../recovered_web/dashboard.script0.js#L1525)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`blindSpotEnabled`、`blindSpotBrightness`、`blindSpotAreaFront`、`blindSpotAreaRear`、`blindSpotAreaDash`、`blindSpotRestoreDelayMs`。

```c
if (!capability.blind_spot) reject_or_hide_unsupported_fields();
if (blind_warning_active) compose_warning_for_selected_side_and_area_mask();
if (warning_just_cleared) restore_at = now + delay_ms;
if (now >= restore_at) restore_current_underlying_zone_target();
```

<a id="ambient_turn"></a>
## 5. 左右转向／双闪跟随

**证据层次**：接口确认；运行语义重建。

左转只覆盖左侧，右转只覆盖右侧；双闪由turnFollowHazards决定；颜色、亮度、三类区域分别设置并与灯效状态合成。

**前端入口**：[ambientTurnFollowDraftValid · JS L1528](../../recovered_web/dashboard.script0.js#L1528)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`turnFollowEnabled`、`turnFollowHazards`、`turnFollowColor`、`turnFollowBrightness`、`turnFollowAreaFront`、`turnFollowAreaRear`、`turnFollowAreaDash`。

```c
if (turn_follow_enabled) {
    sides = indicators_are_hazards ? (follow_hazards ? BOTH : NONE) : indicator_side;
    compose_turn_follow_for(sides, areas, rgb, brightness);
}
on_indicator_release() restore_underlying_target_when_owner_settled();
```

<a id="welcome_styles"></a>
## 6. 五种迎宾样式

**证据层次**：接口确认；运行语义重建。

柔光环抱、冰蓝流光、暖金礼序、黑幕启幕、光迹回环，枚举0～4。0x4804304e/0x48044258提供迎宾阶段与目标生成证据；逐帧颜色曲线和区域路径未完整还原。

**前端入口**：[ambientWelcomeRenderSettings · JS L1552](../../recovered_web/dashboard.script0.js#L1552)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`welcomeEnabled`、`welcomeStyle0`、`welcomeStyle1`、`welcomeStyle2`、`welcomeStyle3`、`welcomeStyle4`。

```c
if (welcome_enabled && accepted_welcome_trigger) {
    style = clamp(config.welcomeStyle, 0, 4);
    initialize_style_stage_and_zone_mask(style);
}
each_tick_advance_style_stage_and_compose_zone_targets();
// 具体路径／曲线使用原状态机，本文不伪造数组。
```

<a id="welcome_trigger"></a>
## 7. 开门与座椅无人触发、过滤和重触发

**证据层次**：接口确认；运行语义重建。

mode0要求座椅确认无人，mode1接受有效开门；runtime有openMask、origin、triggered/filtered/completed。座椅无数据不等价为无人。

**前端入口**：[ambientPostBodyBase · JS L1529](../../recovered_web/dashboard.script0.js#L1529)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`welcomeTriggerMode0`、`welcomeTriggerMode1`。

```c
if (fresh_valid_door_open_edge) {
    allowed = mode == ANY_VALID_DOOR || fresh_confirmed_unoccupied;
    if (allowed) start_or_retrigger_welcome(); else filtered_count++;
}
publish_stage_reason_openmask_origin();
```

<a id="welcome_params"></a>
## 8. 迎宾亮度、节奏、颜色和六区掩码

**证据层次**：参数确认；曲线部分重建。

亮度10～100，tempo0～2，mask1～63；迎宾独立于常亮开关，颜色为#RRGGBB。前端参数验证与后端结构验证均存在。

**前端入口**：[ambientPostBodyBase · JS L1529](../../recovered_web/dashboard.script0.js#L1529)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`welcomeBrightness`、`welcomeTempo`、`welcomeColor`。

```c
validate(style <= 4, trigger_mode <= 1, 10 <= brightness <= 100);
validate(tempo <= 2, 1 <= mask <= 63, rgb_is_valid);
apply_style_tempo_and_mask_to_welcome_state();
```

<a id="ambient_transaction"></a>
## 9. 按驾驶员保存、冲突、待写与终态恢复

**证据层次**：接口与状态字段确认；精确恢复分支部分重建。

检查driverId与revision，OTA或驾驶员变化中止；后端区分available、blockedReason、persistence pending/stored及ambient_tx_fault。前端核对布尔、数值、颜色、6区回读。运行记录fault、outstandingMask、terminal超时并恢复来源。

**前端入口**：[ambientLoadConfig · JS L1557](../../recovered_web/dashboard.script0.js#L1557)、[ambientPostSaveOnce · JS L1566](../../recovered_web/dashboard.script0.js#L1566)、[ambientSaveBeforeDriverChange · JS L1563](../../recovered_web/dashboard.script0.js#L1563)。

**C 接口入口**：[GET /ambient_config · 0x4806adda](../../decompiled/functions/4806adda_recovered_http_get_ambient_config_4806adda.c)、[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

```c
require_current_driver_and_revision(); validate_complete_config();
submit_ambient_runtime_transaction(); persist_driver_blob();
if (flash_failure) return_actual_revision_with_pending();
track_zone_request_generation_and_outstanding_terminal_mask();
on_invalidated_or_failed_terminal() recover_or_publish_ambient_tx_fault();
```

