# 驾驶员与个性化设置

[返回总览](../README.md)

驾驶员位置识别主要采用 track、backrest、lift、tilt 四个位置字段；这与座椅手动六组动作不同。车辆未在 P 挡、位置数据过期、位置冲突、存储不足均有独立错误。识别距离的精确权重和阈值未完整还原。

**运行／解析关联函数（模块共享）**：[`0x480fa85c`](../../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)、[`0x48052ffe`](../../decompiled/functions/48052ffe_FUN_ram_48052ffe.c)、[`0x4805228e`](../../decompiled/functions/4805228e_FUN_ram_4805228e.c)、[`0x480ee8e2`](../../decompiled/functions/480ee8e2_FUN_ram_480ee8e2.c)、[`0x480f6af8`](../../decompiled/functions/480f6af8_FUN_ram_480f6af8.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="driver_list"></a>
## 1. 列表、当前驾驶员、参数来源与状态

**证据层次**：接口与前端确认。

返回 auto/manual、activeDriverId、lastDriverId、座椅快照和各驾驶员 feature 状态；未匹配时使用默认参数，前端区别开、关、未知。

**前端入口**：[loadDriverProfiles · JS L1324](../../recovered_web/dashboard.script0.js#L1324)、[driverFeatureGroups · JS L1216](../../recovered_web/dashboard.script0.js#L1216)。

**C 接口入口**：[GET /driver_profiles · 0x4806d76e](../../decompiled/functions/4806d76e_recovered_http_get_driver_profiles_4806d76e.c)。

```c
s = GET("/driver_profiles");
render_current_and_last_driver(s);
render_parameter_source(s.activeDriverId > 0 ? DRIVER : DEFAULT);
render_features_as_on_off_unknown(s.drivers);
```

<a id="driver_add"></a>
## 2. 添加驾驶员并绑定当前位置

**证据层次**：接口确认；运行语义重建。

action=add，校验名称、P 挡及新鲜驾驶位位置；检查位置是否与已有驾驶员冲突，分配ID并持久化；冲突阻止覆盖。

**前端入口**：[postDriverProfile · JS L1347](../../recovered_web/dashboard.script0.js#L1347)、[openDriverAddModal · JS L1386](../../recovered_web/dashboard.script0.js#L1386)、[submitDriverAdd · JS L1393](../../recovered_web/dashboard.script0.js#L1393)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverAddName`、`driverAddSubmit`。

```c
require_park_and_fresh_seat(); validate_name(name);
if (position_conflicts_with_existing_driver()) return POSITION_CONFLICT;
id = allocate_driver_id_or_full();
store_driver(id, name, current_four_axis_position); flush_driver_storage();
```

<a id="driver_rebind"></a>
## 3. 重新绑定驾驶位

**证据层次**：接口确认；运行语义重建。

页面明确确认覆盖，后端 action=rebind 验证 id、驻车及座椅数据，再检测位置冲突并写入新绑定。确认复选框是前端流程的一部分。

**前端入口**：[postDriverProfile · JS L1347](../../recovered_web/dashboard.script0.js#L1347)、[openDriverRebindModal · JS L1411](../../recovered_web/dashboard.script0.js#L1411)、[submitDriverRebind · JS L1420](../../recovered_web/dashboard.script0.js#L1420)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverRebindConfirm`、`driverRebindSubmit`。

```c
ui_require_rebind_confirmation();
require_existing_driver(id); require_park_and_fresh_seat();
check_position_conflict_excluding(id);
replace_binding_position(id, current_position); persist();
```

<a id="driver_rename"></a>
## 4. 重命名驾驶员

**证据层次**：接口确认；运行语义重建。

后端检查驾驶员存在和名称合法后写存储；页面用回读列表更新显示。

**前端入口**：[postDriverProfile · JS L1347](../../recovered_web/dashboard.script0.js#L1347)、[openDriverRenameModal · JS L1433](../../recovered_web/dashboard.script0.js#L1433)、[submitDriverRename · JS L1440](../../recovered_web/dashboard.script0.js#L1440)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverRenameName`、`driverRenameSubmit`。

```c
require_existing_driver(id); validate_name(name);
driver[id].name = name; persist(); reload_driver_list();
```

<a id="driver_delete"></a>
## 5. 删除与关联设置清理

**证据层次**：接口确认；运行语义重建。

删除驾驶员同时处理对应氛围灯、速度模板数据及当前选择。后端可报告 ambient_settings_erase_pending、speed_target_settings_erase，清理并非单个结构体删除。

**前端入口**：[postDriverProfile · JS L1347](../../recovered_web/dashboard.script0.js#L1347)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

```c
require_existing_driver(id);
remove_driver_and_adjust_active_selection(id);
erase_driver_ambient_and_speed_target_domains(id);
if (erase_pending_or_failed) report_domain_and_persistence_state();
persist_driver_list();
```

<a id="driver_selection"></a>
## 6. 自动识别／手动选择及切换

**证据层次**：接口确认；运行语义重建。

action=auto/manual/select。切换前前端要求氛围灯草稿保存成功；运行端根据绑定位置或手动 id 应用驾驶员设置。具体自动匹配算法保留抽象谓词。

**前端入口**：[postDriverProfile · JS L1347](../../recovered_web/dashboard.script0.js#L1347)、[driverParameterMode · JS L1210](../../recovered_web/dashboard.script0.js#L1210)、[driverAutoRecognize · JS L1460](../../recovered_web/dashboard.script0.js#L1460)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverModeToggle`。

```c
if (!save_pending_ambient_draft()) abort_ui_driver_change();
mode = AUTO_or_MANUAL;
selected = mode == AUTO ? match_fresh_seat_position() : requested_driver;
apply_driver_profile_or_default(selected); publish_active_driver();
```

<a id="driver_features"></a>
## 7. 每位驾驶员功能独立开关与并发检查

**证据层次**：前端路由选择与 C 入口确认。

请求带 driverId、driverFeature、expected，按功能选择对应接口；expected 用于检查旧状态。FSD 主开关、障碍物和雾灯有专用接口。驾驶员未变化时才应用回执，失败保留原显示。

**前端入口**：[driverFeatureRequest · JS L1226](../../recovered_web/dashboard.script0.js#L1226)、[setDriverFeature · JS L1238](../../recovered_web/dashboard.script0.js#L1238)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /fsd_auto_start/master · 0x480f2fc2](../../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c)、[POST /config/ble_obstacle · 0x480f1e34](../../decompiled/functions/480f1e34_recovered_http_post_config_ble_obstacle_480f1e34.c)、[POST /rear_fog/config · 0x480f4dda](../../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

```c
request = {driverId, driverFeature:key, expected:old};
route = choose_config_domain(key); request[domain_field(key)] = !old;
validate_driver_and_expected_value_on_backend();
apply_and_persist_driver_feature();
reload_driver_snapshot_without_overwriting_new_selection();
```

