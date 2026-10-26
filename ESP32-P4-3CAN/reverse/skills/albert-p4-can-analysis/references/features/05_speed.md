# 速度补偿与驾驶员目标模板

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../control-protocol.md#speed)；其中明确区分已确认字段与剩余缺口。

[返回功能目录](../feature-can-map.md#05_speed) · [Skill 入口](../../SKILL.md)

设置链和 30 项模板格式已确认。runtime_status 区分限速、原车偏移、智能设速、目标来源、finalRaw 与 confirmedRaw。下面算式是语义表达；CAN偏移、模式和策略编码见本包[协议表](../control-protocol.md#speed)，目标计算的完整分段、舍入和优先级仍有缺口。

**运行／解析关联函数（模块共享）**：`0x48101f34`、`0x480f9322`、`0x480f99bc`、`0x480f66c0`、`0x480381cc`、`0x4805883a`、`0x4809ec88`、`0x4810ca34`

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="speed_enable"></a>
## 1. 自动速度偏移与稳定模式

**证据层次**：接口确认；运行语义重建。

启用稳定模式会在前端同时启用自动偏移；运行采用配置、协议、原车状态及驾驶员模板生成目标。稳定模式参数旧面板被隐藏，不能把隐藏字段视为无运行代码。

**前端入口**：bindStableSpeedControls · 原 JS L252、updateV13SpeedOffsetUi · 原 JS L254。

**C 接口入口**：POST /config · 0x48101f34。

**关键控件／参数**：`autoSpeedOffsetEnabled`、`stableSpeedOffsetEnabled`。

```c
if (!effective_auto_offset || !fresh_speed_sources) return NO_OVERRIDE;
target = calculate_target_for_protocol_and_driver();
if (stable_enabled) target = apply_stability_policy(target);
submit_speed_override_from_fresh_source();
```

<a id="hw3_strategy"></a>
## 2. HW3舒适／标准／迅捷及分段目标

**证据层次**：接口确认；运行语义重建。

手动或随车策略；UI将舒适与车距3/4、标准与2、迅捷与1关联。每策略包含低于60及60、70…120的8个目标值。多数旧参数行隐藏但仍参与配置读写。

**前端入口**：selectHw3Strategy · 原 JS L632、updateHw3Strategy · 原 JS L650。

**C 接口入口**：POST /config · 0x48101f34。

**关键控件／参数**：`hw3ManualStrategyEnabled`、`hw3ManualStrategy`。

```c
strategy = manual_enabled ? manual_strategy : decode_vehicle_strategy();
band = select_hw3_speed_band(limit_kph); // 精确所有边界待核对
target_kph = hw3_targets[strategy][band];
```

<a id="v14_profile"></a>
## 3. V14五种驾驶模式

**证据层次**：接口确认；运行语义重建。

Chill、Normal、Hurry、Max、Sloth枚举0～4，手动／车机自动来源独立记录。不能将 V14 模式枚举等同于 HW3 三种车距策略。

**前端入口**：updateV14DrivingProfileUi · 原 JS L250。

**C 接口入口**：POST /config · 0x48101f34。

**关键控件／参数**：`v14ManualDrivingProfileEnabled`、`v14ManualDrivingProfile`。

```c
effective_profile = manual_enabled ? clamp(profile, 0, 4) : observed_v14_profile;
choose_v14_speed_policy(effective_profile);
publish_automatic_effective_profile_and_source();
```

<a id="speed_low"></a>
## 4. 低速偏移与 raw 百分比换算

**证据层次**：单位与配置校验确认；目标算法部分重建。

V13低速页面说明限速低于50；v13LowSpeedOffsetPct为0～60。其他最大偏移raw字段在浏览器显示 raw/4%，提交百分比乘4，页面0～60%对应raw0～240。这两种字段单位不同。

**前端入口**：getVal · 原 JS L262、setVal · 原 JS L248。

**C 接口入口**：POST /config · 0x48101f34。

**关键控件／参数**：`v13LowSpeedOffsetPct`、`speedOffsetMaxPctRaw`、`v14SpeedOffsetMaxPctRaw`。

```c
v13_low_pct = clamp(ui_v13_low_pct, 0, 60);
max_pct_raw = clamp(round(ui_max_pct * 4), 0, 240);
if (is_low_speed_protocol_case()) calculate_low_target_with_protocol_limits();
```

<a id="speed_high"></a>
## 5. 高速偏移、原车智能设速与目标来源

**证据层次**：接口确认；运行语义重建。

页面注明 V13高速度偏移用于原车智能设速关闭场景；运行状态提供 originalSmartSetSpeedKnown/Enabled、vehicleOffsetUsable、highTargetSource。目标来源可能为原车设速或自定义模板，需按状态分支选择。

**前端入口**：updateV13SpeedOffsetUi · 原 JS L254。

**C 接口入口**：POST /config · 0x48101f34、GET /runtime_status · 0x4806851c。

**关键控件／参数**：`v13HighSpeedOffsetPct`。

```c
if (!original_smart_set_speed_known) defer_override_until_source_known();
if (original_smart_set_speed_enabled && vehicle_target_usable) use_vehicle_target_policy();
else use_configured_high_speed_target_policy();
// 目标选择的完整优先级与换算边界尚未恢复，用符号策略保留缺口。
```

<a id="speed_slew"></a>
## 6. 降速阶梯与确认值恢复

**证据层次**：接口确认；运行语义重建。

当前界面为每500ms下降1～10 km/h；后台还保留 speedOffsetDownSlewPctPerSec、stableSpeedDownIntervalMs。运行追踪 downSlewActive、recoveryPhase、slewStepCount、confirmedRaw，说明以确认状态处理恢复。不要混淆两套单位。

**前端入口**：getVal · 原 JS L262、saveConfig · 原 JS L999。

**C 接口入口**：POST /config · 0x48101f34、GET /runtime_status · 0x4806851c。

**关键控件／参数**：`speedDownStepKph`。

```c
if (new_target < last_confirmed_target && down_step_due())
    candidate_target = max(new_target, last_confirmed_target - step_kph);
else candidate_target = new_target;
submit_candidate();
on_matching_terminal_or_vehicle_confirmation() update_confirmed_target();
on_failure() enter_recovery_without_assuming_candidate_was_applied();
```

<a id="speed_templates"></a>
## 7. 车机同步／自定义30格模板

**证据层次**：格式、接口与 V13 展开确认。

后端带driverId、revision、customSpeedEnabled与target0…target29，索引限速5、10…150，目标整数1～255。V13界面显示8段并展开到50～139中的对应5km/h格；以驾驶员隔离保存。

**前端入口**：speedTargetChooseSource · 原 JS L1517、speedTargetPostBody · 原 JS L1506、speedTargetExpandV13Template · 原 JS L1510。

**C 接口入口**：GET /speed_target/config · 0x480f99bc、POST /speed_target/save · 0x480f9322。

**关键控件／参数**：`customSpeedEnabled`、`speedTargetSourceCustom`、`speedTargetSourceVehicle`。

```c
require_current_driver_and_revision(driver_id, revision);
for (i = 0; i < 30; ++i) require_integer_in_range(target[i], 1, 255);
apply_speed_target_runtime_transaction(candidate);
commit_driver_speed_target_blob();
return_revision_targets_and_effective_custom_enabled();
```

<a id="speed_quick"></a>
## 8. 百分比批量设置模板

**证据层次**：前端计算确认。

批量输入0～100%，浏览器以round(limit×(1+pct/100))计算8个起始值，再展开30格并经原接口保存；这只是编辑快捷方式。

**前端入口**：speedTemplateQuickValues · 原 JS L1518、speedTemplateQuickApply · 原 JS L1519。

**C 接口入口**：POST /speed_target/save · 0x480f9322。

**关键控件／参数**：`speedTemplateQuickPct`、`speedTemplateQuickApply`。

```c
require(0 <= quick_pct && quick_pct <= 100);
for (limit in [50,60,70,80,90,100,110,120])
    ui_start_target[limit] = round(limit * (1 + quick_pct / 100.0));
expand_v13_bands_into_30_targets(); save_template();
```

<a id="speed_conflict"></a>
## 9. 驾驶员变化、版本冲突与保存重试

**证据层次**：接口与前端确认。

stale_driver会重新加载；stale_revision保留草稿要求检查；flash_write与runtime_rejected分别提示。回执必须匹配驾驶员、请求、revision和提交的全部目标。

**前端入口**：speedTargetSave · 原 JS L1515、speedTargetEnsureDriver · 原 JS L1514。

**C 接口入口**：POST /speed_target/save · 0x480f9322、GET /speed_target/config · 0x480f99bc。

**关键控件／参数**：`speedTargetRetrySave`。

```c
if (driver_changed) reload_for_new_driver();
else if (revision_conflict) preserve_draft_and_require_review();
else if (runtime_rejected || flash_write_failed) preserve_draft_for_retry();
else verify_response_matches_submitted_targets();
```
