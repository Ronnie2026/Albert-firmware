# 远光、爆闪与后雾灯

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../../skills/albert-p4-can-analysis/references/control-protocol.md#high-beam)；其中明确区分已确认字段与剩余缺口。

[返回总览](../README.md)

远光相关发送与vcleft共用所有者协调，rear_fog有独立配置和运行启动接口。减速度阈值单位0.01m/s²，原始来源年龄与发送反馈单独管理。转向氛围灯见09。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480f4dda`](../../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)、[`0x481015a6`](../../decompiled/functions/481015a6_recovered_http_post_rear_fog_runtime_481015a6.c)、[`0x48054a82`](../../decompiled/functions/48054a82_FUN_ram_48054a82.c)、[`0x48054722`](../../decompiled/functions/48054722_FUN_ram_48054722.c)、[`0x480cca8a`](../../decompiled/functions/480cca8a_FUN_ram_480cca8a.c)、[`0x48053f2a`](../../decompiled/functions/48053f2a_FUN_ram_48053f2a.c)、[`0x4810bb96`](../../decompiled/functions/4810bb96_FUN_ram_4810bb96.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="high_force"></a>
## 1. FSD强制远光与合帧

**证据层次**：接口确认；运行语义重建。

FSD/物理操作条件下覆盖灯光请求，runtime包含vcleft owner、generation、mergeCount、localEchoDrops、lightingMerges，说明和共用来源帧合并而非持续任意发包。

**前端入口**：[applyNormalizedLightingConfig · JS L665](../../recovered_web/dashboard.script0.js#L665)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`fsdForceHighPhysicalEnabled`。

```c
if (force_high_enabled && eligible_fsd_physical_condition())
    merge_force_high_request_into_fresh_vcleft_template();
if (vcleft_owner_busy) defer_until_owner_can_merge();
submit_and_settle_matching_generation();
```

<a id="high_strobe"></a>
## 2. 第二次长按0.5秒远光爆闪

**证据层次**：接口确认；运行语义重建。

页面描述第二次长按0.5秒触发；间隔1～100ms，次数0～20，0不限。前端无效值不提交，后端也验证；精确双次手势状态与波形边沿部分重建。

**前端入口**：[lightingNumericInputValid · JS L243](../../recovered_web/dashboard.script0.js#L243)、[applyNormalizedLightingConfig · JS L665](../../recovered_web/dashboard.script0.js#L665)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`longPressHighBeamStrobeEnabled`、`highBeamStrobeIntervalMs`、`highBeamStrobeCount`。

```c
if (second_eligible_long_press_500ms && strobe_enabled) begin_strobe();
if (phase_deadline_due && (count_limit == 0 || emitted_count < count_limit))
    toggle_high_request_and_schedule_next(interval_ms);
if (release_or_stop_condition_or_fault) restore_original_light_request();
```

<a id="fog_deceleration"></a>
## 3. 减速后雾灯与轻重阈值

**证据层次**：接口确认；运行语义重建。

0x48054a82处理0x273、0x118等来源并调用减速判断0x48054722；配置enabled、mildDecelCx100、hardDecelCx100，来源新鲜和实际反馈控制请求。具体轻重脉冲节奏未全恢复。

**前端入口**：[saveRearFogConfig · JS L886](../../recovered_web/dashboard.script0.js#L886)。

**C 接口入口**：[GET /rear_fog/config · 0x48066e12](../../decompiled/functions/48066e12_recovered_http_get_rear_fog_config_48066e12.c)、[POST /rear_fog/config · 0x480f4dda](../../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

**关键控件／参数**：`rear-fog-strobe-tgl`、`rear-fog-mild-threshold`、`rear-fog-hard-threshold`。

```c
observe_vehicle_sources_and_compute_deceleration();
if (auto_fog_enabled && fresh_feedback_and_source)
    select_mild_or_hard_braking_pattern_by_thresholds();
submit_fog_request_from_current_template_and_track_terminal();
```

<a id="fog_reverse"></a>
## 4. 倒车双闪＋8次雾灯警示

**证据层次**：接口确认；运行语义重建。

reverseWarningEnabled使倒车触发警示模式，前端明确双闪＋8次后雾灯；退出R、来源过期和故障需停止/恢复。8次为页面行为证据，详细脉冲时序待核对。

**前端入口**：[saveRearFogConfig · JS L886](../../recovered_web/dashboard.script0.js#L886)。

**C 接口入口**：[POST /rear_fog/config · 0x480f4dda](../../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

**关键控件／参数**：`reverse-warning-tgl`。

```c
if (fresh_reverse_entry && reverse_warning_enabled)
    arm_reverse_hazard_and_fog_pattern(8);
if (reverse_exit_or_source_stale_or_fault) settle_and_restore();
```

<a id="fog_reverse_steady"></a>
## 5. 倒车后雾灯常亮

**证据层次**：接口确认；运行语义重建。

reverseRearFogSteadyEnabled独立于倒车警示，按R挡持续请求；两者同时启用的完整仲裁序未全部确认。

**前端入口**：[saveRearFogConfig · JS L886](../../recovered_web/dashboard.script0.js#L886)。

**C 接口入口**：[POST /rear_fog/config · 0x480f4dda](../../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

**关键控件／参数**：`reverse-rear-fog-steady-tgl`。

```c
if (reverse_steady_enabled && fresh_gear == R) request_reverse_steady_fog();
else remove_reverse_steady_request_and_recompute_fog_owner_target();
```

<a id="fog_pilot"></a>
## 6. 领航许可与本次运行启动／停止

**证据层次**：专用C接口确认。

rearFogPilotEnabled保存许可，/rear_fog/runtime的enabled操作本次active；许可关闭拒绝启动pilot_not_permitted。活动状态无需等同于持久化许可。

**前端入口**：[toggleRearFogRuntime · JS L889](../../recovered_web/dashboard.script0.js#L889)。

**C 接口入口**：[POST /rear_fog/config · 0x480f4dda](../../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)、[POST /rear_fog/runtime · 0x481015a6](../../decompiled/functions/481015a6_recovered_http_post_rear_fog_runtime_481015a6.c)。

**关键控件／参数**：`rear-fog-pilot-tgl`、`rear-fog-pilot-run-btn`。

```c
save_permission_to_config(pilot_permitted);
POST_runtime(enabled) {
    if (enabled && !pilot_permitted) return PILOT_NOT_PERMITTED;
    submit_runtime_pilot_start_or_stop(enabled);
    return_actual_pilot_active_state();
}
```

