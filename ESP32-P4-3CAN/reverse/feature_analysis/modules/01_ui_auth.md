# 界面、CSS 与访问认证

[返回总览](../README.md)

CSS 负责布局与状态呈现，浏览器处理主题、导航、折叠及草稿；这些不需要对应的 C 业务函数。网页会话与开发者令牌是两个独立机制。

**运行／解析关联函数（模块共享）**：[`0x4808a6b8`](../../decompiled/functions/4808a6b8_FUN_ram_4808a6b8.c)、[`0x4808acac`](../../decompiled/functions/4808acac_FUN_ram_4808acac.c)、[`0x4808d958`](../../decompiled/functions/4808d958_recovered_http_post_cloud_developer_4808d958.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="ui_mode"></a>
## 1. 标准／车机／自动界面

**证据层次**：前端确认。

自动模式按浏览器环境和窗口条件判断；按钮在 auto、car、standard 三种模式间循环，写入 localStorage，改变 DOM 属性供 CSS 选择。

**前端入口**：[storedUiMode · JS L22](../../recovered_web/dashboard.script0.js#L22)、[detectCarUi · JS L23](../../recovered_web/dashboard.script0.js#L23)、[applyUiMode · JS L24](../../recovered_web/dashboard.script0.js#L24)、[cycleUiMode · JS L25](../../recovered_web/dashboard.script0.js#L25)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

**关键控件／参数**：`uiModeBtn`。

```c
mode = local_storage_get("t2can-ui-mode-v1", "auto");
if (mode == AUTO) mode = detect_car_browser_and_viewport();
set_html_dataset("ui", mode);
// 浏览器逻辑，无固件设置写入。
```

<a id="theme"></a>
## 2. 日间／夜间主题

**证据层次**：前端与身份接口确认。

主题偏好与 chipId、appElfSha256 组成的固件身份关联；C 只提供身份，CSS 切换颜色变量、背景和控件样式。

**前端入口**：[refreshFirmwareTheme · JS L44](../../recovered_web/dashboard.script0.js#L44)。

**C 接口入口**：[GET /system_status · 0x4808334c](../../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)。

**关键控件／参数**：`themeBtn`。

```c
identity = GET("/system_status").chipId + appElfSha256;
theme = local_storage_get(theme_key(identity));
set_html_dataset("theme", theme);
```

<a id="navigation"></a>
## 3. 功能页、详情页、帮助、折叠和响应式布局

**证据层次**：前端确认。

驾驶／换挡／车身／诊断／系统以及商业界面的功能／记录／设置导航均为 DOM 显隐和控件重新组织；CSS 提供 fixed 导航、网格、dialog、hidden、disabled、partial 等显示状态。

**前端入口**：[initAppPages · JS L145](../../recovered_web/dashboard.script0.js#L145)、[initCommercialHierarchy · JS L1883](../../recovered_web/dashboard.script0.js#L1883)、[initCommercialUi · JS L1939](../../recovered_web/dashboard.script0.js#L1939)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

```c
on_navigation(tab) { set_active_tab(tab); show_related_cards(tab); }
on_help_click() { toggle_help_panel(); }
on_detail_toggle() { toggle_collapsed_state(); }
// hidden 或 disabled 是界面状态，不能替代后端权限与运行门控。
```

<a id="legal"></a>
## 4. 首次说明与已阅读状态

**证据层次**：前端确认。

用户确认后关闭说明并保存浏览器偏好；不调用车辆控制接口。

**前端入口**：[closeLegalNotice · JS L202](../../recovered_web/dashboard.script0.js#L202)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

```c
on_acknowledge() { local_storage_set(legal_key, true); close_notice(); }
```

<a id="login"></a>
## 5. 网页登录与错误限流

**证据层次**：C 逻辑确认。

C 使用与AP热点相同的密码存储对象比较，连续 5 次错误后限制 30 秒；成功时使用 16 字节随机材料生成 32 位十六进制会话标识，最多管理 4 个会话槽。Cookie 为 P4SID，Max-Age=604800，HttpOnly、SameSite=Strict。服务端还检查7天创建期限与48小时未活动期限。AP密码实际改变会失效旧会话。

**前端入口**：[checkDashboardSession · JS L1473](../../recovered_web/dashboard.script0.js#L1473)。

**C 接口入口**：[POST /auth/login · 0x4808a8c2](../../decompiled/functions/4808a8c2_recovered_http_post_auth_login_4808a8c2.c)、[GET /auth/status · 0x480677f4](../../decompiled/functions/480677f4_recovered_http_get_auth_status_480677f4.c)、[GET / · 0x4808b134](../../decompiled/functions/4808b134_recovered_http_get_root_4808b134.c)。

**关键控件／参数**：`password`。

```c
if (failures >= 5 && now - lock_started < 30000) return LOCKED;
if (!constant_length_password_compare(input, stored, 63)) {
    failures++; if (failures == 5) lock_started = now; return WRONG;
}
expire_old_sessions(); slot = choose_free_or_oldest_session(4);
sid = hex(random_bytes(16)); store_session(slot, sid, now);
set_cookie("P4SID", sid, 604800, HTTP_ONLY | SAME_SITE_STRICT);
redirect_303("/");
```

<a id="logout"></a>
## 6. 退出与会话失效

**证据层次**：C 接口确认。

退出清理服务端会话和 Cookie；页面检查会话状态，失效时返回登录流程。

**前端入口**：[checkDashboardSession · JS L1473](../../recovered_web/dashboard.script0.js#L1473)。

**C 接口入口**：[POST /auth/logout · 0x4808adc8](../../decompiled/functions/4808adc8_recovered_http_post_auth_logout_4808adc8.c)、[GET /auth/status · 0x480677f4](../../decompiled/functions/480677f4_recovered_http_get_auth_status_480677f4.c)。

```c
invalidate_session_from_cookie();
set_cookie("P4SID", "", 0);
redirect_to_root();
```

<a id="developer"></a>
## 7. 开发者模式解锁、闲置锁定与令牌撤销

**证据层次**：前端与 C 令牌接口确认。

密码提交后端验证，成功返回 developerToken；前端要求 32 位十六进制。高级界面仅在本次页面解锁，闲置 15 分钟锁定；需要授权的云请求使用 X-P4-Developer。锁定会请求撤销令牌。

**前端入口**：[commercialVerifyPassword · JS L1600](../../recovered_web/dashboard.script0.js#L1600)、[commercialUnlock · JS L1843](../../recovered_web/dashboard.script0.js#L1843)、[commercialLock · JS L1855](../../recovered_web/dashboard.script0.js#L1855)、[commercialRecordActivity · JS L1859](../../recovered_web/dashboard.script0.js#L1859)。

**C 接口入口**：[POST /cloud/developer · 0x4808d958](../../decompiled/functions/4808d958_recovered_http_post_cloud_developer_4808d958.c)。

**关键控件／参数**：`commercialPassword`、`commercialLock`。

```c
r = POST("/cloud/developer", {password});
if (!r.ok || !is_hex32(r.developerToken)) keep_locked();
else { developer_token = r.developerToken; show_developer_ui(); }
if (idle_ms >= 15 * 60 * 1000) {
    POST("/cloud/developer", {lock:1}, X_P4_DEVELOPER);
    clear_token_and_lock_ui();
}
```

<a id="management_lock"></a>
## 8. 云管理状态与页面操作锁定

**证据层次**：接口确认；管理内部状态机部分重建。

管理状态包含 revision、锁定／待处理原因和目标版本。前端按状态禁用编辑；后台状态可能由云命令或升级改变，不能只依赖 CSS 禁用按钮。

**前端入口**：[managementLoadStatus · JS L1649](../../recovered_web/dashboard.script0.js#L1649)。

**C 接口入口**：[GET /management/status · 0x480b2722](../../decompiled/functions/480b2722_recovered_http_get_management_status_480b2722.c)。

```c
s = GET("/management/status");
if (s.revision >= displayed_revision) apply_management_state(s);
set_edit_controls_disabled(s.locked || s.pending);
```

