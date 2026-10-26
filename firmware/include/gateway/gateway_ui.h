#pragma once
#include <Arduino.h>

// 页面随固件编译，无需单独烧录 LittleFS。
static const char kGatewayHtml[] PROGMEM = R"GATEWAY(<!doctype html>
<html lang="zh-CN"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>CAN 转发与隔离</title><style>
:root{color-scheme:dark;--bg:#101722;--panel:#192332;--line:#314055;--muted:#aab8cb;--good:#6ae4b2;--bad:#ff9b91}
*{box-sizing:border-box}body{margin:0;background:var(--bg);color:#edf3fb;font:15px/1.55 system-ui,sans-serif}main{max-width:1240px;margin:auto;padding:24px 18px}header,.toolbar,.row{display:flex;align-items:center;gap:12px;flex-wrap:wrap}header{justify-content:space-between}h1{font-size:25px;margin:0}h2{font-size:19px;margin:0 0 14px}h3{font-size:16px}p{margin:8px 0}.muted,small{color:var(--muted)}section,.card{background:var(--panel);border:1px solid var(--line);border-radius:12px;padding:18px;margin:16px 0}.grid{display:grid;grid-template-columns:1fr 1fr;gap:16px}.card{margin:0}button,input,select,textarea{font:inherit;color:inherit;background:#111b29;border:1px solid #4e617b;border-radius:6px;padding:8px 11px}button{cursor:pointer}button.primary{background:#205d9b}button.danger{background:#743d3d}button:disabled{opacity:.45;cursor:wait}textarea{width:100%;min-height:140px;font:14px/1.6 ui-monospace,monospace;resize:vertical}input[type=checkbox]{width:17px;height:17px;vertical-align:middle}label{display:block;margin:9px 0}code,.mono{font-family:ui-monospace,monospace}.good{color:var(--good)}.bad{color:var(--bad)}.stats{display:grid;grid-template-columns:repeat(4,1fr);gap:8px}.stats b{display:block;font-size:22px}.stats span{font-size:12px;color:var(--muted)}.table-wrap{max-height:520px;overflow:auto;margin-top:12px;border:1px solid var(--line)}table{border-collapse:collapse;width:100%;white-space:nowrap;font-size:13px}th,td{text-align:left;padding:7px 10px;border-bottom:1px solid #2b394c}th{position:sticky;top:0;background:#233249}td:last-child{min-width:150px}.notice{border-left:3px solid #71a4ef;padding-left:12px}.message{min-height:24px;white-space:pre-wrap}details{margin-top:14px}summary{cursor:pointer}.grow{flex:1}a{color:#99c3ff}#filterId{width:145px}@media(max-width:720px){.grid{grid-template-columns:1fr}.stats{grid-template-columns:repeat(2,1fr)}main{padding:16px 10px}h1{font-size:21px}}
.toolbar h2{margin:0;min-width:170px}
</style></head><body><main>
<header><div><h1>CAN 转发与抓包隔离</h1><p class="muted">TWAI · CAN_B ⇄ MCP2515 · CAN_A <span id="version"></span></p></div><button class="danger" id="stop" disabled>停止转发和模拟</button></header>
<p id="connection" role="status">正在连接设备…</p>
<div class="grid"><article class="card"><h2>TWAI → MCP2515</h2><div class="stats" id="forwardStats"></div><p class="muted" id="forwardDrops"></p></article><article class="card"><h2>MCP2515 → TWAI</h2><div class="stats" id="reverseStats"></div><p class="muted" id="reverseDrops"></p></article></div>
<section><h2>Wi-Fi 连接</h2>
<p class="muted">连接 2.4 GHz 路由器后，可在同一局域网通过设备 IP 打开本页面。设备热点保持开启。</p>
<div class="toolbar"><button id="wifiScan" disabled>扫描附近 Wi-Fi</button><label>扫描结果 <select id="wifiNetworks" style="max-width:100%"><option value="">扫描后选择网络</option></select></label></div>
<form id="wifiForm"><div class="toolbar"><label>Wi-Fi 名称 <input id="wifiSsid" maxlength="32" autocomplete="off" spellcheck="false" placeholder="也可手动填写隐藏网络"></label><label>Wi-Fi 密码 <input id="wifiPassword" type="password" maxlength="64" autocomplete="new-password" placeholder="留空表示开放网络"></label><button id="wifiConnect" class="primary" disabled>保存并连接</button></div></form>
<div class="toolbar"><button id="wifiReconnect" disabled>重连已保存网络</button><button id="wifiDisconnect" disabled>断开 Wi-Fi</button><button id="wifiForget" disabled>忘记网络</button></div>
<p id="wifiMessage" class="message" role="status">等待设备状态…</p><p id="wifiAddresses" class="muted" style="overflow-wrap:anywhere"></p>
<p class="muted">保存后重启自动连接；连接失败或掉线会重试。切换路由器时热点可能短暂重连，仍可通过热点地址访问。断开保留配置，忘记网络会删除已保存的名称和密码。</p></section>
<section><h2>安全过滤器</h2><p class="notice">仅转发命中白名单的标准数据帧（11-bit ID、DLC ≤ 8）。空白名单表示全部拦截。MCP2515 收包始终记录，回传默认关闭。</p>
<form id="configForm"><div class="grid"><div><label><input type="checkbox" id="forwardEnabled"> 开启 TWAI → MCP2515</label><label for="forwardIds">正向白名单 <span class="muted">十六进制，空格 / 换行 / 逗号分隔</span></label><textarea id="forwardIds" maxlength="12288" spellcheck="false" aria-label="正向 ID 白名单" disabled></textarea></div><div><label><input type="checkbox" id="reverseEnabled"> 开启 MCP2515 → TWAI 白名单穿透</label><label for="reverseIds">回传白名单 <span class="muted">留空 = 仅记录</span></label><textarea id="reverseIds" maxlength="12288" spellcheck="false" placeholder="例如：0x123 0x456" aria-label="回传 ID 白名单" disabled></textarea></div></div>
<div class="row"><label>TWAI 硬件预过滤 <select id="hardwareMode"><option value="auto">自动：从正向白名单生成</option><option value="off">关闭：接收全部</option><option value="manual">手动：code / mask</option></select></label><label>Code <input id="hardwareCode" value="0x000" size="7" maxlength="5"></label><label>Mask <input id="hardwareMask" value="0x000" size="7" maxlength="5"></label></div>
<p class="muted">Mask 的 1 位表示必须匹配，0 位表示忽略；硬件过滤后仍执行软件精确白名单。硬件过滤掉的 TWAI 报文不会出现在抓包中。手动掩码若排除正向白名单中的 ID，会拒绝应用。</p>
<p id="effective" class="mono"></p><div class="toolbar"><button class="primary" type="submit" id="save" disabled>应用并保存</button><button type="button" id="reload" disabled>放弃草稿 / 读取生效配置</button><button type="button" id="defaults" disabled>恢复默认 67 个 ID</button><span class="muted" id="dirty"></span></div></form>
<p id="applyMessage" class="message" role="status"></p><p class="muted">应用配置会短暂停止两路控制器，清空接收和待发缓冲；已经发上总线的帧无法撤回。配置保存到 NVS，重启后保留。停止双向转发也会保存关闭状态。</p>
</section>
<section><h2>离车模拟 → MCP2515</h2>
<p class="muted">使用内置录制数据，按正向 ID 白名单发送到 MCP2515 连接的设备。模拟独立于正向转发开关，上电关闭；每次启动从头回放。</p>
<div class="toolbar"><label>录制来源 <select id="replaySource"><option value="0">CAN_A / bus 0</option><option value="1">CAN_B / bus 1</option><option value="2">全部录制帧</option></select></label><label>发送间隔 / µs <input id="replayInterval" type="number" min="357" max="1000000" step="1" value="357" style="width:130px"></label><label><input id="replayLoop" type="checkbox" checked> 循环回放</label><button class="primary" id="replayStart" disabled>开始模拟</button><button id="replayStop" disabled>停止模拟</button></div>
<p id="replayMessage" class="message" role="status">等待设备状态…</p><p id="replayStats" class="mono muted"></p>
<p class="muted">默认发送间隔 357 µs，目标约 2800 帧/s。录制数据没有时间戳，其他来源直接跳过；实际速度受白名单、调度和总线负载影响。模拟帧只发往 MCP2515，设备回复仍按回传白名单处理。修改转发配置会停止模拟；关闭网页不会停止，使用“停止模拟”结束。</p></section>
<section><div class="toolbar"><h2 class="grow">CAN 监视器</h2><button id="pause">暂停抓取</button><button id="clear">清空浏览器记录</button><button id="export">导出 CSV</button></div><div class="toolbar"><label>来源 <select id="filterBus"><option value="all">全部来源</option><option value="0">TWAI 接收</option><option value="1">MCP2515 接收</option><option value="3">模拟发送</option></select></label><label>结果 <select id="filterResult"><option value="all">全部</option><option value="sent">发送成功</option><option value="blocked">拦截 / 仅记录</option><option value="error">发送失败 / 忙 / 过期</option></select></label><label>ID <input id="filterId" placeholder="0x082 或 082" spellcheck="false"></label></div><p class="muted" id="captureInfo">设备未筛选时保存最近 1024 帧；筛选后保存最近 2000 条匹配帧。</p>
<div class="table-wrap"><table><thead><tr><th>序号</th><th>设备时间 / s</th><th>来源 → 目标</th><th>ID</th><th>类型</th><th>DLC</th><th>DATA</th><th>结果</th></tr></thead><tbody id="frames"></tbody></table></div></section>
<section><h2>控制器状态</h2><p id="diagnostics" class="mono"></p><p class="muted">两侧为普通模式，会产生 CAN ACK；“隔离”指禁止未授权数据帧跨总线转发。当前速率 500 kbit/s。成功计数以控制器发送完成通知为准，不代表目标应用已经处理。</p><details><summary>转发与抓包说明</summary><p>报文 ID、DLC 和数据原样转发；EXT、RTR、异常帧仅记录。发送忙、失败、20 ms 过期均丢弃并计数，不长期缓存或无限重发。浏览器暂停只暂停抓取，不改变转发规则。</p><p>设备覆盖旧记录或网页跟不上时会显示缺失数；CSV 导出当前浏览器持有、且符合筛选条件的记录。正常模式不请求本机自收；外部节点主动回显的帧会作为新接收报文处理。</p></details></section>
</main><script>
'use strict';
const $ = id => document.getElementById(id);
let token = '', current = null, dirty = false, busy = false, paused = false, cursor = 0, latest = 0, lost = 0, localEvicted = 0, rows = [], bootToken = '', waitingRevision = null, lastStatus = 0, validationError = '';
let captureRevision = null, captureEpoch = 0, capturePending = true, captureError = '', captureCapacity = 1024, captureTimer = null, captureSync = Promise.resolve();
let replayError = '', waitingReplayRevision = null;
let wifiBusy = false, wifiScanning = false, wifiError = '', wifiDirty = false;
const results = {sent:'发送成功', disabled:'仅记录 · 方向关闭', not_listed:'拦截 · 非白名单', unsupported:'仅记录 · 非标准数据帧', busy:'丢弃 · 发送忙', failed:'丢弃 · 发送失败', expired:'丢弃 · 发送过期', reconfigured:'取消 · 配置切换'};
async function api(path, data) {
  const options = {cache:'no-store', signal:AbortSignal.timeout(5000)};
  if (data !== undefined) {options.method='POST'; options.headers={'Content-Type':'application/json','X-Gateway-Token':token}; options.body=JSON.stringify(data);}
  const response=await fetch(path, options); const body=await response.json();
  if (!response.ok) throw new Error(body.error || `HTTP ${response.status}`);
  return body;
}
function markDirty(value) {dirty=value; $('dirty').textContent=value?'有未保存修改':'';}
function hardwareInputs() {const manual=$('hardwareMode').value==='manual'; $('hardwareCode').disabled=!manual; $('hardwareMask').disabled=!manual;}
function populate(c) {
  validationError='';
  $('forwardEnabled').checked=c.forward_enabled; $('reverseEnabled').checked=c.reverse_enabled;
  $('forwardIds').value=c.forward_ids; $('reverseIds').value=c.reverse_ids;
  $('hardwareMode').value=c.hardware_mode; $('hardwareCode').value=c.hardware_code; $('hardwareMask').value=c.hardware_mask;
  hardwareInputs(); markDirty(false);
}
function controls() {
  const blocked=!current||busy||Boolean(current.apply.pending)||Boolean(current.replay?.pending)||waitingReplayRevision!==null;
  for(const id of ['save','defaults','reload','stop']) $(id).disabled=blocked;
  for(const id of ['forwardIds','reverseIds']) $(id).disabled=!current;
  $('replayStart').disabled=blocked||!current?.mcp.ready||Boolean(current?.mcp.flags&32)||Boolean(current?.replay?.running);
  $('replayStop').disabled=blocked;
  for(const id of ['replaySource','replayInterval','replayLoop']) $(id).disabled=blocked||Boolean(current?.replay?.running);
}
function applyMessage() {
  if(!current) return;
  $('applyMessage').textContent=validationError || (current.apply.pending?'正在应用配置…':current.apply.message);
  $('applyMessage').className='message '+(validationError||!current.apply.ok?'bad':'good');
}
function showStats(id, dropsId, s) {
  const root=$(id); root.replaceChildren();
  for(const [label,value] of [['接收',s.rx],['提交发送',s.submitted],['发送完成',s.sent],['拦截/仅记录',s.blocked+s.unsupported]]) {
    const cell=document.createElement('div'), b=document.createElement('b'), span=document.createElement('span'); b.textContent=value; span.textContent=label; cell.append(b,span); root.append(cell);
  }
  $(dropsId).textContent=`发送忙 ${s.busy} · 失败 ${s.failed} · 过期 ${s.expired} · 切换取消 ${s.canceled}`;
}
function wifiControls() {
  const w=current?.wifi, blocked=!w||wifiBusy||wifiScanning||Boolean(w.pending);
  for(const id of ['wifiConnect','wifiDisconnect','wifiSsid','wifiPassword','wifiNetworks']) $(id).disabled=blocked;
  $('wifiScan').disabled=blocked||w?.state==='connecting';
  for(const id of ['wifiReconnect','wifiForget']) $(id).disabled=blocked||!w?.saved;
}
function showWifi(w, initial=false) {
  if(!w) return;
  if(initial && !wifiDirty) $('wifiSsid').value=w.saved_ssid;
  $('wifiMessage').textContent=wifiError || (wifiScanning?'正在扫描附近 Wi-Fi…':w.message);
  $('wifiMessage').className='message '+(wifiError||w.state==='retry'?'bad':w.connected?'good':'muted');
  const root=$('wifiAddresses'); root.replaceChildren();
  root.append(`热点 ${w.ap_ssid} ${w.ap_ready?'已开启':'未就绪'}：`);
  const ap=document.createElement('a'); ap.textContent=`http://${w.ap_ip}`; ap.href=ap.textContent; root.append(ap);
  if(w.saved) root.append(` · 已保存：${w.saved_ssid}`);
  if(w.connected) {
    root.append(` · 已连接 ${w.ssid}（${w.rssi} dBm）：`);
    const sta=document.createElement('a'); sta.textContent=`http://${w.ip}`; sta.href=sta.textContent; root.append(sta);
  }
  wifiControls();
}
function showWifiScan(result) {
  wifiScanning=Boolean(result.scanning);
  if(result.error) wifiError=result.error;
  if(!wifiScanning && !result.error) {
    const select=$('wifiNetworks'); select.replaceChildren(new Option(result.networks.length?'选择 Wi-Fi':'未发现网络，可手动填写',''));
    const seen=new Set();
    for(const n of result.networks) {
      if(seen.has(n.ssid)) continue;
      seen.add(n.ssid); select.append(new Option(`${n.ssid} · ${n.rssi} dBm · ${n.open?'开放':'加密'}`,n.ssid));
    }
  }
  showWifi(current?.wifi);
}
async function wifiAction(action) {
  if(wifiBusy||!current?.wifi) return;
  const data={action};
  if(action==='connect') {
    data.ssid=$('wifiSsid').value; data.password=$('wifiPassword').value;
    const encoder=new TextEncoder(), ssidLength=encoder.encode(data.ssid).length, passLength=encoder.encode(data.password).length;
    if(!ssidLength||ssidLength>32||data.ssid.includes('\0')||data.password.includes('\0')||
       (passLength!==0 && (passLength<8||passLength>64||(passLength===64&&!/^[0-9a-f]{64}$/i.test(data.password))))) {
      wifiError='SSID 为 1–32 字节；密码为空、8–63 字节或 64 位十六进制密钥'; showWifi(current.wifi); return;
    }
  }
  wifiBusy=true; wifiError=''; wifiControls();
  try {
    await api('/api/wifi',data);
    $('wifiPassword').value=''; wifiDirty=false;
    if(action==='forget') $('wifiSsid').value='';
    $('wifiMessage').textContent='已提交，正在切换网络；热点继续开启…';
    await status();
  } catch(e) {wifiError=e.message; showWifi(current.wifi);}
  finally {wifiBusy=false; wifiControls();}
}
async function status() {
  const s=await api('/api/status');
  const reboot=bootToken && bootToken!==s.token;
  if(reboot) {cursor=0; latest=0; rows=[]; lost=0; localEvicted=0; waitingRevision=null; captureRevision=null; render();}
  bootToken=token=s.token; const first=!current; current=s;
  if(reboot) {wifiScanning=false; wifiError=''; $('wifiPassword').value='';}
  showWifi(s.wifi,first||reboot);
  if(wifiScanning && !wifiBusy) {
    try {showWifiScan(await api('/api/wifi/scan'));}
    catch(e) {wifiScanning=false; wifiError=e.message; showWifi(s.wifi);}
  }
  if(first||reboot) {waitingReplayRevision=null; replayError='';}
  if(s.replay) {
    const r=s.replay;
    if(waitingReplayRevision!==null && !r.pending && r.revision!==waitingReplayRevision) waitingReplayRevision=null;
    if(first||reboot||r.running) {$('replaySource').value=String(r.source); $('replayInterval').value=r.interval_us; $('replayLoop').checked=r.loop;}
    $('replayMessage').textContent=replayError || (r.pending||waitingReplayRevision!==null?'正在应用模拟命令…':r.message);
    $('replayMessage').className='message '+(replayError||!r.ok?'bad':r.running?'good':'muted');
    $('replayStats').textContent=`${r.running?'运行中':'已停止'} · 进度 ${r.position}/${r.total} · 完成 ${r.cycles} 轮 · 已提交 ${r.submitted} · 发送成功 ${r.sent} · 白名单拦截 ${r.blocked} · 忙 ${r.busy} · 失败 ${r.failed} · 过期 ${r.expired} · 取消 ${r.canceled}`;
  }
  if(first || reboot || (!capturePending && s.capture && s.capture.revision>captureRevision)) scheduleCapture(0);
  if(first || (waitingRevision!==null && !s.apply.pending && s.apply.revision!==waitingRevision)) {populate(s.config); waitingRevision=null;}
  else if(!dirty && waitingRevision===null && !s.apply.pending) populate(s.config);
  $('version').textContent=`v${s.version}`;
  $('connection').textContent=`已连接 · 运行 ${Math.floor(s.uptime_ms/1000)} s · 正向 ${s.config.forward_enabled?'开启':'关闭'} · 回传 ${s.config.reverse_enabled?'开启':'关闭'}`;
  $('connection').className='good';
  showStats('forwardStats','forwardDrops',s.directions[0]); showStats('reverseStats','reverseDrops',s.directions[1]);
  $('effective').textContent=`生效 code=${s.config.effective_code} mask=${s.config.effective_mask} · 正向 ${s.config.forward_count} ID / 回传 ${s.config.reverse_count} ID${s.config.effective_mask==='0x000'?' · 硬件未缩小 ID 范围，软件白名单精确拦截':''}`;
  if(!busy) applyMessage();
  const states={0:'停止',1:'运行',2:'BUS OFF',3:'恢复中'};
  $('diagnostics').textContent=`TWAI ${s.twai.ready?'就绪':'未就绪'} / ${states[s.twai.state]||'未知'} · REC ${s.twai.rec} TEC ${s.twai.tec} · RX 丢失 ${s.twai.missed} FIFO 溢出 ${s.twai.overruns} 总线错误 ${s.twai.bus_errors} 恢复 ${s.twai.recoveries}\nMCP2515 ${s.mcp.ready?'就绪':'未就绪'} · ${s.mcp_clock_mhz} MHz · REC ${s.mcp.rec} TEC ${s.mcp.tec} · 溢出事件 ${s.mcp.overflow_events} 读错误 ${s.mcp.read_errors} EFLG 0x${s.mcp.flags.toString(16)} · 空闲堆 ${s.free_heap} B`;
  $('diagnostics').style.whiteSpace='pre-wrap'; controls();
}
function visibleRows() {
  const bus=$('filterBus').value, result=$('filterResult').value, id=$('filterId').value.trim();
  const validId=!id||/^(0x)?[0-9a-f]{1,8}$/i.test(id), wanted=Number.parseInt(id.replace(/^0x/i,''),16);
  return rows.filter(r => (bus==='all'||r.bus===Number(bus)) && (!id || (validId&&Number.parseInt(r.id,16)===wanted)) &&
    (result==='all'||(result==='sent'&&r.result==='sent')||(result==='blocked'&&['disabled','not_listed','unsupported'].includes(r.result))||(result==='error'&&['busy','failed','expired','reconfigured'].includes(r.result))));
}
function render() {
  const visible=visibleRows(), body=$('frames'), fragment=document.createDocumentFragment();
  for(const r of visible.slice(-300).reverse()) {
    const tr=document.createElement('tr');
    const type=(r.flags&1?'EXT':'STD')+(r.flags&2?' RTR':'')+(r.flags&4?' ERR':'');
    for(const value of [r.seq,(r.us/1000000).toFixed(6),r.bus===3?'模拟 → MCP':r.bus===0?'TWAI → MCP':'MCP → TWAI',r.id,type,r.dlc,r.data,results[r.result]||r.result]) {const td=document.createElement('td'); td.textContent=value; tr.append(td);}
    tr.lastChild.className=r.result==='sent'?'good':(['busy','failed','expired'].includes(r.result)?'bad':'muted'); fragment.append(tr);
  }
  body.replaceChildren(fragment);
  $('captureInfo').textContent=`${captureError?'筛选错误：'+captureError+' · ':capturePending?'正在切换筛选 · ':''}${paused?'已暂停抓取 · ':''}浏览器 ${rows.length}/2000 匹配帧（显示最新 300） · 设备记录缺失 ${lost} 帧 · 浏览器旧记录淘汰 ${localEvicted} 帧 · 设备环形缓存 ${captureCapacity} 帧`;
}
function captureSpec() {
  const id=$('filterId').value.trim();
  if(id && (!/^(0x)?[0-9a-f]{1,8}$/i.test(id) || Number.parseInt(id.replace(/^0x/i,''),16)>0x1FFFFFFF)) throw new Error('请输入有效的十六进制 CAN ID');
  return {bus:$('filterBus').value==='all'?2:Number($('filterBus').value),result:{all:0,sent:1,blocked:2,error:3}[$('filterResult').value],id};
}
function scheduleCapture(delay=300) {
  ++captureEpoch; capturePending=true; captureError=''; rows=[]; cursor=0; latest=0; lost=0; localEvicted=0;
  clearTimeout(captureTimer); render();
  const epoch=captureEpoch;
  captureTimer=setTimeout(()=>{
    captureSync=captureSync.then(async()=>{
      if(epoch!==captureEpoch || !token) return;
      try {
        const spec=captureSpec(), response=await api('/api/capture-filter',spec);
        if(epoch!==captureEpoch) return;
        captureRevision=response.revision; captureCapacity=response.capacity; capturePending=false; render();
      } catch(e) {if(epoch===captureEpoch) {captureError=e.message; render();}}
    });
  },delay);
}
async function frames() {
  if(capturePending) return;
  const epoch=captureEpoch;
  // 有积压时最多连续取四批，每批 128 帧；避免无限追赶阻塞页面操作。
  for(let i=0;i<4&&!paused&&!capturePending;i++) {
    const batch=await api(`/api/frames?after=${cursor}`);
    if(epoch!==captureEpoch) return;
    if(batch.token!==bootToken) {await status(); return;}
    if(batch.revision!==captureRevision) {scheduleCapture(0); return;}
    captureCapacity=batch.capacity;
    cursor=batch.next; latest=batch.latest; lost+=batch.lost; rows.push(...batch.frames);
    if(rows.length>2000) {const n=rows.length-2000; rows.splice(0,n); localEvicted+=n;}
    if(batch.frames.length<128 || cursor>=latest) break;
  }
  render();
}
async function submit(path, data) {
  if(busy||!current) return;
  busy=true; validationError=''; controls(); $('applyMessage').textContent='正在提交…';
  try {const revision=current.apply.revision; await api(path,data); waitingRevision=revision; $('applyMessage').textContent='已提交，等待控制器确认…'; await status();}
  catch(e) {validationError=e.message;}
  finally {busy=false; controls(); applyMessage();}
}
async function submitReplay(enabled) {
  if(busy||!current) return;
  const data={enabled};
  if(enabled) {
    data.source=Number($('replaySource').value); data.interval_us=Number($('replayInterval').value); data.loop=$('replayLoop').checked;
    if(!Number.isInteger(data.interval_us)||data.interval_us<357||data.interval_us>1000000) {
      replayError='模拟间隔范围为 357–1000000 微秒'; $('replayMessage').textContent=replayError; return;
    }
  }
  busy=true; replayError=''; controls();
  try {const revision=current.replay.revision; await api('/api/replay',data); waitingReplayRevision=revision; await status();}
  catch(e) {replayError=e.message; $('replayMessage').textContent=replayError;}
  finally {busy=false; controls();}
}
$('configForm').addEventListener('input',()=>markDirty(true));
$('hardwareMode').addEventListener('change',hardwareInputs);
$('configForm').addEventListener('submit',e=>{e.preventDefault(); submit('/api/config',{
  forward_enabled:$('forwardEnabled').checked,reverse_enabled:$('reverseEnabled').checked,
  forward_ids:$('forwardIds').value,reverse_ids:$('reverseIds').value,hardware_mode:$('hardwareMode').value,
  hardware_code:$('hardwareCode').value,hardware_mask:$('hardwareMask').value});});
$('reload').onclick=()=>{if(current) {populate(current.config); applyMessage();}};
$('defaults').onclick=()=>submit('/api/defaults',{});
$('stop').onclick=()=>submit('/api/stop',{});
$('replayStart').onclick=()=>submitReplay(true);
$('replayStop').onclick=()=>submitReplay(false);
$('wifiForm').addEventListener('input',()=>{wifiDirty=true;});
$('wifiForm').addEventListener('submit',e=>{e.preventDefault(); wifiAction('connect');});
$('wifiReconnect').onclick=()=>wifiAction('reconnect');
$('wifiDisconnect').onclick=()=>wifiAction('disconnect');
$('wifiForget').onclick=()=>wifiAction('forget');
$('wifiNetworks').onchange=()=>{if($('wifiNetworks').value) {$('wifiSsid').value=$('wifiNetworks').value; $('wifiPassword').value=''; wifiDirty=true;}};
$('wifiScan').onclick=async()=>{
  if(wifiBusy||!current?.wifi) return;
  wifiBusy=true; wifiScanning=true; wifiError=''; showWifi(current.wifi);
  try {showWifiScan(await api('/api/wifi/scan',{}));}
  catch(e) {wifiScanning=false; wifiError=e.message; showWifi(current.wifi);}
  finally {wifiBusy=false; wifiControls();}
};
$('pause').onclick=()=>{paused=!paused; $('pause').textContent=paused?'继续抓取':'暂停抓取'; render();};
$('clear').onclick=()=>{rows=[]; lost=0; localEvicted=0; cursor=latest; render();};
for(const id of ['filterBus','filterResult','filterId']) $(id).addEventListener('input',()=>scheduleCapture());
$('export').onclick=()=>{
  const csv=[['seq','timestamp_us','source','target','id','flags','dlc','data','result'],...visibleRows().map(r=>[r.seq,r.us,r.bus===3?'SIMULATED':r.bus===0?'TWAI':'MCP2515',r.bus===1?'TWAI':'MCP2515',r.id,r.flags,r.dlc,r.data,r.result])].map(line=>line.map(v=>'"'+String(v).replace(/"/g,'""')+'"').join(',')).join('\r\n');
  const url=URL.createObjectURL(new Blob(['\uFEFF'+csv],{type:'text/csv;charset=utf-8'})), a=document.createElement('a'); a.href=url; a.download='can-gateway-'+Date.now()+'.csv'; a.click(); setTimeout(()=>URL.revokeObjectURL(url),1000);
};
async function poll() {
  try {if(Date.now()-lastStatus>=1000) {await status(); lastStatus=Date.now();} if(!paused) await frames();}
  catch(e) {$('connection').textContent='连接异常：'+e.message; $('connection').className='bad';}
  finally {setTimeout(poll,150);}
}
hardwareInputs(); poll();
</script></body></html>)GATEWAY";
