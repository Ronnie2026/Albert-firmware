#!/usr/bin/env python3
"""Render the reviewed feature catalog and audit traceable coverage."""
import csv
import hashlib
import html
import json
import re
from collections import defaultdict
from pathlib import Path

OUT = Path(__file__).resolve().parents[1]
ROOT = OUT.parent
E = OUT / 'evidence'

def read(name):
    return json.loads((E/name).read_text())

def table_cell(value):
    return str(value).replace('|', '\\|').replace('\n', '<br>')

def dump(name, value):
    (E/name).write_text(json.dumps(value, ensure_ascii=False, indent=2)+'\n')

def main():
    catalog, ast, controls, routes = [read(n) for n in
        ['feature_catalog.json', 'frontend_ast.json', 'ui_controls.json', 'route_evidence.json']]
    fn_index = {r['entry'].split(':')[-1]: r for r in csv.DictReader((ROOT/'decompiled/functions.tsv').open(), delimiter='\t')}
    js_index = defaultdict(list)
    for f in ast['functions']:
        js_index[f['name']].append(f)
    route_index = {r['method']+':'+r['path']: r for r in routes}
    flat = {}
    by_control, by_js, by_route = defaultdict(list), defaultdict(list), defaultdict(list)
    for m in catalog:
        for f in m['features']:
            f['module'] = m['id']
            f['key'] = m['id']+':'+f['id']
            flat[f['key']] = f
            for c in f['controls']: by_control[c].append(f['key'])
            for j in f['js']: by_js[j].append(f['key'])
            for r in f['routes']: by_route[r].append(f['key'])

    def key(mid, fid):
        k = mid+':'+fid
        assert k in flat, k
        return k

    def default(mid):
        return next(m['features'][0]['key'] for m in catalog if m['id']==mid)

    def map_dynamic(c):
        owner = c['js_owner'] or ''
        a, label, ident = c['attrs'], c['label'], c['id']
        if owner in ['createCanExperimentCard', 'canExperimentRuleMarkup'] or 'data-ce-field' in a:
            field = a.get('data-ce-field', '')
            fid = 'experiment_counter' if field.startswith('counter') else 'experiment_checksums' if field.startswith(('checksum','crc')) else \
                  'experiment_takeover' if field in ['takeover','priority'] else 'experiment_modes' if field in ['mode','period','timeout','strict','delayUs'] else \
                  'experiment_rules'
            if '预设' in label or 'Preset' in ident or label in ['载入','保存','重命名','删除']: fid='experiment_presets'
            return [key('13_can_experiment', fid)], '模板所属函数／data属性'
        if owner in ['initAppPages','initCommercialHierarchy','commercialRow']:
            return [key('01_ui_auth','navigation')], 'DOM布局构造'
        if ident.startswith('fsdRecords') or 'FSD记录' in label:
            fid='records_subtotal' if 'Subtotal' in ident else 'records_clear' if 'Clear' in ident else 'records_view'
            return [key('16_records',fid)], '动态控件ID'
        if ident.startswith('onboarding'):
            return [key('17_cloud_onboarding','onboarding')], '动态控件ID'
        if ident.startswith('cloud') or ident=='settingsSyncBanner':
            fid = 'cloud_restore' if 'Restore' in ident else 'cloud_conflicts' if 'Conflict' in ident else \
                  'cloud_config' if ident in ['cloudUrl','cloudToken','cloudInterval','cloudClearToken','cloudSaveButton'] else \
                  'cloud_test' if 'Test' in ident else 'cloud_sync' if ident in ['cloudEnabled','cloudUploadButton'] else 'cloud_identity'
            return [key('17_cloud_onboarding',fid)], '动态控件ID'
        if ident.startswith('commercial'):
            fid = 'developer' if any(s in ident for s in ['Unlock','Password','Lock']) else 'navigation'
            return [key('01_ui_auth',fid)], '动态控件ID'
        if owner=='initCommercialUi': return [key('17_cloud_onboarding','cloud_generations')], 'DOM布局构造'
        if ident.startswith('ambient') or 'data-welcome-zone-bit' in a:
            return [key('09_ambient','welcome_params' if 'data-welcome-zone-bit' in a else 'ambient_zones')], '动态控件ID'
        # Global commercial-shell fragments include unnamed navigation, restore forms and anchors.
        if c['js_line'] and 1480 <= c['js_line'] <= 1484:
            if any(w in label for w in ['恢复','云端','同步']): return [default('17_cloud_onboarding')], '模板文本上下文'
            if '小计' in label or '行程' in label or '累计' in label: return [default('16_records')], '模板文本上下文'
            return [key('01_ui_auth','navigation')], '商业界面模板上下文'
        return [], '未分类'

    def map_control(c):
        ident, a = c['id'], c['attrs']
        if c['origin']=='login.html': return [key('01_ui_auth','login')], '登录表单'
        if a.get('action')=='/auth/logout' or c['origin']=='dashboard.html' and c['line']==436:
            return [key('01_ui_auth','logout')], '退出表单action'
        if ident in by_control: return by_control[ident], '功能显式列出的控件ID'
        names = set()
        for v in a.values():
            if isinstance(v,str): names.update(re.findall(r'\b([A-Za-z_$][\w$]*)\s*\(', v))
        found = list(dict.fromkeys(k for n in names for k in by_js.get(n,[])))
        if found: return found, '内联事件函数'
        if c['origin']=='javascript_markup': return map_dynamic(c)
        # These are semantic groups with identical save/read logic; no independent invented features.
        if ident.startswith(('hw3ComfortTarget','hw3HurryTarget')) or ident in ['targetBelow60','target60','target70','target80','target90','target100','target110','target120']:
            return [key('05_speed','hw3_strategy')], '策略参数组'
        if ident.startswith('v14Target'): return [key('05_speed','v14_profile')], 'V14策略参数组'
        if ident.startswith('speedTarget'): return [key('05_speed','speed_templates')], '模板参数组'
        if ident.startswith(('preventive','corrective','activity','rest','h2Persistence','preCorrection','stabilityVerify','dasFresh')):
            return [key('06_dnd_torque','torque_config')], '扭矩参数组'
        if 'data-seat-manual-mask' in a: return [key('08_seats','seat_manual')], '方向掩码属性'
        if 'data-seat-slot-name' in a: return [key('08_seats','seat_names')], '槽名属性'
        if 'data-ambient-zone-select' in a: return [key('09_ambient','ambient_zones')], '区域选择属性'
        if 'data-welcome-zone-bit' in a: return [key('09_ambient','welcome_params')], '迎宾区域属性'
        if 'data-app-page' in a or 'data-page-target' in a or 'data-commercial-tab' in a: return [key('01_ui_auth','navigation')], '导航属性'
        line = c['line']
        spans = [(0,449,'01_ui_auth','navigation'),(450,455,'02_config_can','can_gates'),
                 (456,493,'03_drivers','driver_list'),(494,509,'04_fsd_activation','fsd_master'),
                 (510,635,'05_speed','speed_enable'),(636,706,'06_dnd_torque','dnd_master'),
                 (707,747,'04_fsd_activation','auto_start_master'),(748,766,'04_fsd_activation','warning_activation'),
                 (767,793,'09_ambient','ambient_blind'),(794,872,'07_gear','gear_gates'),
                 (873,937,'08_seats','seat_names'),(938,974,'10_lighting','high_force'),
                 (975,991,'10_lighting','fog_deceleration'),(992,997,'11_preheat_service','service_mode'),
                 (998,1025,'11_preheat_service','preheat_start'),(1026,1037,'02_config_can','pin_layout'),
                 (1038,1081,'12_recorder','rec_download'),(1082,1099,'15_ota','ota_file'),
                 (1100,1133,'09_ambient','ambient_zones'),(1134,1171,'09_ambient','welcome_params'),
                 (1172,1196,'14_wifi','wifi_connect'),(1197,1238,'18_diagnostics','can_diag'),
                 (1239,1265,'03_drivers','driver_list'),(1266,1271,'01_ui_auth','navigation')]
        for lo,hi,mid,fid in spans:
            if lo<=line<=hi: return [key(mid,fid)], 'HTML语义区域；不是调用链证明'
        return [], '未分类'

    control_links=[]
    for i,c in enumerate(controls):
        keys,basis = map_control(c)
        # Attach concrete front-end consumers where the AST has literal DOM IDs.
        consumers = [dict(name=f['name'], line=f['line']) for f in ast['functions'] if c['id'] and c['id'] in f['dom_ids']]
        mapped_routes = list(dict.fromkeys(r for k in keys for r in flat[k]['routes']))
        control_links.append(dict(index=i, **c, features=keys, mapping_basis=basis,
                                  js_literal_consumers=consumers, routes=mapped_routes,
                                  c_route_handlers=[dict(route=r,address=route_index[r]['handler_address'],file=route_index[r]['handler_file']) for r in mapped_routes]))

    # Original fields can sometimes be renamed in the front end; retain exact xrefs rather than guessing.
    xrefs=list(csv.DictReader((ROOT/'decompiled/string_xrefs.tsv').open(),delimiter='\t'))
    xref_index=defaultdict(list)
    for x in xrefs:
        if x['function_entry'] and len(x['text']) < 180:
            xref_index[x['text']].append(x)
    aliases={'ambientFsdCueEnabled':'fsdCueEnabled','rear-fog-strobe-tgl':'enabled',
             'reverse-warning-tgl':'reverseWarningEnabled','reverse-rear-fog-steady-tgl':'reverseRearFogSteadyEnabled',
             'rear-fog-pilot-tgl':'rearFogPilotEnabled','rear-fog-mild-threshold':'mildDecelCx100',
             'rear-fog-hard-threshold':'hardDecelCx100'}
    for f in flat.values():
        f['frontend_evidence']=[dict(name=n, line=js_index[n][0]['line'], end_line=js_index[n][0]['end_line']) for n in f['js']]
        f['handler_evidence']=[dict(route=r,address=route_index[r]['handler_address'],file=route_index[r]['handler_file'],warning=route_index[r]['warning']) for r in f['routes']]
        f['field_xrefs']={}
        for control in f['controls']:
            field=aliases.get(control,control)
            refs=xref_index.get(field,[])
            if refs: f['field_xrefs'][field]=refs
    route_links=[]
    for r in routes:
        route_key=r['method']+':'+r['path']
        route_links.append({**r,'features':by_route[route_key],
                            'modules':list(dict.fromkeys(flat[k]['module'] for k in by_route[route_key]))})

    dump('control_feature_links.json',control_links)
    dump('route_feature_links.json',route_links)
    dump('feature_inventory.json',list(flat.values()))
    with (E/'control_feature_links.tsv').open('w') as fp:
        writer=csv.writer(fp,delimiter='\t');writer.writerow(['index','origin','line','id_or_name','label','initial_hidden','features','mapping_basis','routes','handlers'])
        for c in control_links:
            writer.writerow([c['index'],c['origin'],c['js_line'] or c['line'],c['id'] or c['name'],c['label'],bool(c['initial_hidden']),
                             ', '.join(c['features']),c['mapping_basis'],', '.join(c['routes']),', '.join(h['address'] for h in c['c_route_handlers'])])

    def link_fn(a,base='../..'):
        ix=fn_index[a]
        return f'[`0x{a}`]({base}/decompiled/{ix["file"]})'
    def js_links(f, base='../..'):
        return '、'.join(f'[{x["name"]} · JS L{x["line"]}]({base}/recovered_web/dashboard.script0.js#L{x["line"]})' for x in f['frontend_evidence']) or 'DOM／CSS或设备运行逻辑，未列独立调用函数'
    def route_links_md(f,base='../..'):
        return '、'.join(f'[{x["route"].replace(":", " ", 1)} · {x["address"]}]({base}/decompiled/{x["file"]})' for x in f['handler_evidence']) or '无新增HTTP请求；由浏览器或共用运行任务完成'

    (OUT/'modules').mkdir(exist_ok=True)
    all_sections=[]
    for m in catalog:
        lines=[f'# {m["title"]}', '', '[返回总览](../README.md)', '',
               m['note'],'',
               '**运行／解析关联函数（模块共享）**：'+ '、'.join(link_fn(a) for a in m['backend']), '',
               '下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。','']
        for i,f in enumerate(m['features'],1):
            lines += [f'<a id="{f["id"]}"></a>',f'## {i}. {f["title"]}', '',
                      f'**证据层次**：{f["certainty"]}。', '',f['logic'], '',
                      '**前端入口**：'+js_links(f)+'。', '',
                      '**C 接口入口**：'+route_links_md(f)+'。','']
            if f['controls']: lines += ['**关键控件／参数**：'+ '、'.join('`'+c+'`' for c in f['controls'])+'。','']
            lines += ['```c',f['pseudocode'],'```','']
        (OUT/'modules'/f'{m["id"]}.md').write_text('\n'.join(lines)+'\n')
        # For single-file reading the relative paths are changed by exactly one level.
        all_sections.append('\n'.join(lines[4:]).replace('](../../','](../'))
    (OUT/'ALL_FEATURES.md').write_text('# 全部功能与C实现逻辑\n\n145项是本次按语义整理的功能/子功能计数，不是原程序的官方模块数量。\n\n'+
        '\n\n'.join('# '+m['title']+'\n\n'+s for m,s in zip(catalog,all_sections))+'\n')
    pseudo=['/* Albert P4 P1.6.4 — 按功能语义整理的 C 风格伪代码。',
            ' * 不可编译；不是原始源码。抽象函数与待确认步骤参见模块文档。',
            ' * 输入、输出、所有者、来源年龄、提交和终态应按固件实现核对。 */','']
    for m in catalog:
        pseudo += [f'/* ================= {m["title"]} ================= */','']
        for f in m['features']:
            pseudo += [f'/* {f["key"]}: {f["title"]}', f' * 证据：{f["certainty"]}',
                       ' * C接口：'+ ', '.join(h['address']+' '+h['route'] for h in f['handler_evidence']),
                       ' * 解释：'+f['logic'],' */',f['pseudocode'],'']
    (OUT/'ALL_PSEUDOCODE.pseudo.c').write_text('\n'.join(pseudo)+'\n')

    route_md=['# 全部87条HTTP注册与功能归属','','方法来自http_parser枚举；ANY为255。共享路径的GET/POST分开计数。JS路径候选引用不保证对应方法，具体功能已按调用实现区分。','',
              '| 方法 | 路径 | C处理地址 | 功能模块 | 上传回调 |','|---|---|---|---|---|']
    for r in route_links:
        a=r['handler_address'][2:]
        mods='、'.join(f'[{next(m["title"] for m in catalog if m["id"]==mid)}](modules/{mid}.md)' for mid in r['modules'])
        upload=str(r['upload_handler'])
        if upload not in ['0','None','null']:
            match=re.search(r'([0-9a-f]{8})$', upload)
            adr=match.group(1) if match else upload
            upload=link_fn(adr,'..') if adr in fn_index else '`'+upload+'`'
        else: upload='—'
        route_md.append(f'| {r["method"]} | `{r["path"]}` | {link_fn(a,"..")} | {mods} | {upload} |')
    (OUT/'HTTP_ROUTE_COVERAGE.md').write_text('\n'.join(route_md)+'\n')

    control_md=['# HTML及JS模板控件覆盖','','这是一份语法提取清单：325个dashboard静态控件、3个登录控件，另有109个JS片段控件，总437行。form、链接和同模板的重复片段也计数。循环生成的字节/位按钮、驾驶员列表等以模板和生成函数覆盖，不能把437解释为浏览器中唯一控件总数。','',
                'initial_hidden仅检查HTML自身及祖先hidden/class/display:none；JS会改变显隐。下表按控件ID、事件、属性或页面语义区域分组；“语义区域”归属不等于已证明独立C调用链。','',
                '| # | 来源与行 | 控件ID／名称 | 标签 | 初始隐藏 | 所属功能 | 归属依据 |','|---|---|---|---|---|---|---|']
    for c in control_links:
        line=c['js_line'] or c['line']
        origin='JS:'+str(c['js_owner']) if c['origin']=='javascript_markup' else c['origin']
        fs='、'.join(f'[{flat[k]["title"]}](modules/{flat[k]["module"]}.md#{flat[k]["id"]})' for k in c['features'])
        control_md.append('| '+ ' | '.join(table_cell(x) for x in [c['index']+1,f'{origin} L{line}',c['id'] or c['name'] or '事件／属性控件',c['label'], '是' if c['initial_hidden'] else '否',fs,c['mapping_basis']])+' |')
    (OUT/'CONTROL_COVERAGE.md').write_text('\n'.join(control_md)+'\n')

    parameter_md=['# 页面输入参数索引','',
                  '以下为从HTML和JS模板提取的范围／初始值。**这是UI声明，不能当成C后端完整校验规则**；运行回读会覆盖初始值。语义、单位转换和后端范围见各模块。无min/max的文本输入依JS和C验证。','',
                  '| 单位转换／特殊情况 | 已核对行为 |','|---|---|',
                  '| 最大偏移raw | 页面百分比×4提交；raw/4显示；raw0～240对应0～60% |',
                  '| v13Low/HighSpeedOffsetPct | 直接整数百分比0～60，不乘4 |',
                  '| 转角ThresholdDeciDeg | 页面度×10提交；C用十分之一度 |',
                  '| 滚轮PeriodMin/MaxMs | 页面秒×1000提交 |',
                  '| 抓包duration | 页面1～3600秒×1000提交 |',
                  '| 扭矩幅值 | 页面Nm，内部centi-Nm；预防1.50～1.80，纠正C允许1.80～2.50 |',
                  '| 扭矩时间 | 页面秒，内部毫秒；DAS timeout单独直接ms |',
                  '| 雾灯减速Cx100 | 0.01m/s²原始单位 |',
                  '| USS/雷达阈值 | raw，未证明统一厘米换算 |',
                  '| 座椅槽名 | 浏览器localStorage；与位置记忆的C持久化分开 |','',
                  '| 来源/行 | 参数或data字段 | 输入类型 | 初始值 | UI范围/长度/步长 | 选项 | 初始隐藏 | 功能 |',
                  '|---|---|---|---|---|---|---|---|']
    for c in control_links:
        if c['tag'] not in ['input','select','textarea']: continue
        a=c['attrs'];name=c['id'] or c['name'] or a.get('data-ce-field') or a.get('data-seat-slot-name') or a.get('data-welcome-zone-bit') or a.get('data-ce-bus') or '(模板输入)'
        initial=a.get('value','')
        if c['type'] in ['checkbox','radio']: initial='checked' if 'checked' in a else 'unchecked'
        bounds=', '.join(f'{k}={a[k]}' for k in ['min','max','step','maxlength','required'] if k in a)
        opts=', '.join(f'{o["value"]}={o["label"]}'+(' [selected]' if o['selected'] else '') for o in c['options'])
        fs='、'.join(f'[{flat[k]["title"]}](modules/{flat[k]["module"]}.md#{flat[k]["id"]})' for k in c['features'])
        parameter_md.append('| '+ ' | '.join(table_cell(v) for v in [f'{c["origin"]} L{c["js_line"] or c["line"]}',name,c['type'] or c['tag'],initial,bounds,opts,'是' if c['initial_hidden'] else '否',fs])+' |')
    (OUT/'PARAMETER_INDEX.md').write_text('\n'.join(parameter_md)+'\n')

    config_source=(ROOT/'decompiled'/fn_index['48101f34']['file']).read_text()
    fields={match.group(2):dict(parser=match.group(1),line=config_source[:match.start()].count('\n')+1)
            for match in re.finditer(r'FUN_ram_(48036236|48036a9a)\("([^"\n]+)"',config_source)}
    dump('shared_config_parsed_fields.json',fields)

    create_viewer(catalog,flat,fn_index)
    unmapped_controls=[c['index'] for c in control_links if not c['features']]
    unmapped_routes=[r['method']+':'+r['path'] for r in route_links if not r['features']]
    unknown_js=[n for f in flat.values() for n in f['js'] if n not in js_index]
    unknown_backend=[a for m in catalog for a in m['backend'] if a not in fn_index]
    audit=dict(modules=len(catalog),semantic_features=len(flat),routes=len(routes),controls=len(controls),
               dashboard_static_controls=sum(c['origin']=='dashboard.html' for c in controls),
               login_static_controls=sum(c['origin']=='login.html' for c in controls),
               js_fragment_controls=sum(c['origin']=='javascript_markup' for c in controls),
               frontend_function_nodes=ast['function_count'],unmapped_controls=unmapped_controls,
               unmapped_routes=unmapped_routes,unknown_js=unknown_js,unknown_backend=unknown_backend,
               source_hashes={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in
                              [ROOT/'recovered_web/dashboard.html',ROOT/'recovered_web/dashboard.script0.js',ROOT/'recovered_web/login.html']},
               limitations=['统计为语法提取，不是唯一运行DOM控件数','语义区域归属不是C调用链证明',
                            '间接调用缺失不能据此断言功能未使用','每项伪代码均为解释性重建，具体未确认点见各模块'])
    dump('coverage_audit.json',audit)
    print(json.dumps(audit,ensure_ascii=False,indent=2))
    assert not unmapped_controls and not unmapped_routes and not unknown_js and not unknown_backend

def create_viewer(catalog, flat, fn_index):
    options=''.join(f'<option value="{html.escape(m["id"])}">{html.escape(m["title"])}</option>' for m in catalog)
    records=[]
    for m in catalog:
        for f in m['features']:
            records.append(dict(f,module_title=m['title'],module_note=m['note'],
                                backend=[dict(address='0x'+a,file=fn_index[a]['file']) for a in m['backend']]))
    data=json.dumps(records,ensure_ascii=False).replace('<','\\u003c')
    page='''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>Albert P4 功能与 C 逻辑分析</title>
<style>:root{color-scheme:light dark;font-family:system-ui,"PingFang SC",sans-serif;line-height:1.6}body{max-width:1180px;margin:auto;padding:24px}header{position:sticky;top:0;background:Canvas;padding:12px 0;border-bottom:1px solid GrayText;z-index:2}h1{font-size:1.45rem;margin:0 0 10px}input,select{font:inherit;padding:8px;max-width:100%;margin-right:8px}input{width:420px}article{border:1px solid GrayText;border-radius:8px;padding:18px;margin:18px 0}h2{font-size:1.15rem;margin:0}small{color:GrayText}pre{background:color-mix(in srgb,CanvasText 5%,Canvas);padding:16px;overflow:auto;border-radius:5px;font-size:.9rem}code{font-family:ui-monospace,Menlo,monospace}a{color:LinkText}details{margin-top:10px}button{font:inherit;padding:6px}nav{display:flex;gap:18px;flex-wrap:wrap;margin-bottom:10px}.badge{display:inline-block;border:1px solid GrayText;border-radius:4px;padding:1px 6px;margin:4px 3px 0 0;font-size:.85rem}.empty{padding:30px}</style>
<header><h1>Albert P4 P1.6.4：功能 → 前端 → C 接口 → 运行逻辑</h1>
<nav><a href="README.md">阅读说明</a><a href="ALL_FEATURES.md">完整文档</a><a href="ALL_PSEUDOCODE.pseudo.c">全部伪代码</a><a href="HTTP_ROUTE_COVERAGE.md">87路由</a><a href="CONTROL_COVERAGE.md">控件覆盖</a></nav>
<input id="q" type="search" placeholder="搜索功能、参数、路由、地址，如 扭矩 / 0x370 / batteryPreheat"><select id="module"><option value="">全部18模块</option>OPTIONS</select><span id="count" aria-live="polite"></span></header>
<p>145项为语义分组计数。前端来自原固件；C风格伪代码用于解释流程，抽象函数是分析者命名。标明“部分重建／未确认”的条件、位布局和协议序列仍有缺口。没有运行原管理网页，也没有连接车辆。</p><main id="results"></main>
<script type="application/json" id="data">DATA</script><script>
const records=JSON.parse(document.getElementById('data').textContent),q=document.getElementById('q'),mod=document.getElementById('module'),root=document.getElementById('results');
function el(tag,text){const n=document.createElement(tag);if(text!==undefined)n.textContent=text;return n}
function link(parent,text,path){const a=el('a',text);a.href=path;parent.append(a,document.createTextNode('　'))}
function render(){const query=q.value.trim().toLowerCase(),chosen=mod.value;const matched=records.filter(f=>(!chosen||f.module===chosen)&&(!query||JSON.stringify(f).toLowerCase().includes(query)));document.getElementById('count').textContent=matched.length+' / 145 项';root.replaceChildren();if(!matched.length)root.append(el('p','没有匹配的功能。'));for(const f of matched){const card=el('article');card.append(el('small',f.module_title),el('h2',f.title),el('p',f.logic));const badge=el('span',f.certainty);badge.className='badge';card.append(badge);const pre=el('pre'),code=el('code',f.pseudocode);pre.append(code);card.append(pre);const d=el('details');d.append(el('summary','查看前端、C入口与证据边界'));d.append(el('p',f.module_note));const source=el('p');for(const j of f.frontend_evidence)link(source,j.name+' · L'+j.line,'../recovered_web/dashboard.script0.js#L'+j.line);d.append(source);const backend=el('p');for(const h of f.handler_evidence)link(backend,h.route+' '+h.address,'../decompiled/'+h.file);d.append(backend);const shared=el('p','模块运行关联：');for(const b of f.backend)link(shared,b.address,'../decompiled/'+b.file);d.append(shared);d.append(el('p','参数：'+f.controls.join('、')));link(d,'阅读本模块完整分析','modules/'+f.module+'.md#'+f.id);card.append(d);root.append(card)}}
q.addEventListener('input',render);mod.addEventListener('change',render);render();</script></html>'''
    page=page.replace('OPTIONS',options).replace('DATA',data)
    (OUT/'index.html').write_text(page+'\n')

if __name__=='__main__': main()
