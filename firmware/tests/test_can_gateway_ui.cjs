// Browser integration smoke test against mocked firmware APIs.
// PLAYWRIGHT_MODULE=/path/to/playwright-core node tests/test_can_gateway_ui.cjs
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const root = path.resolve(__dirname, '..');
const header = fs.readFileSync(path.join(root, 'include/gateway/gateway_ui.h'), 'utf8');
const html = header.split('R"GATEWAY(')[1].split(')GATEWAY";')[0];
const ids = fs.readFileSync(path.join(root, 'include/gateway/gateway_policy.h'), 'utf8')
  .split('kDefaultIds[] = {')[1].split('};')[0].match(/0x[0-9A-F]+/g).join(' ');
const defaults = {
  forward_enabled:true, reverse_enabled:false, forward_ids:ids, reverse_ids:'',
  forward_count:67, reverse_count:0, hardware_mode:'auto', hardware_code:'0x000', hardware_mask:'0x000',
  effective_code:'0x000', effective_mask:'0x000',
};
const direction = {rx:10,submitted:3,sent:2,blocked:5,unsupported:1,busy:1,failed:0,expired:0,canceled:0};
const replayDefaults={running:false,pending:false,ok:true,message:'模拟发送已停止',revision:0,source:0,interval_us:357,loop:true,position:0,total:19068,cycles:0,processed:0,submitted:0,sent:0,blocked:0,busy:0,failed:0,expired:0,canceled:0};
let rejectReplay=false;
const wifiDefaults={ap_ssid:'CAN-Gateway',ap_ready:true,ap_ip:'192.168.4.1',saved:false,saved_ssid:'',enabled:false,pending:false,scanning:false,connected:false,ssid:'',ip:'',rssi:0,state:'off',message:'未配置 Wi-Fi；设备热点已开启'};
let wifiScanPolls=0, rejectWifi=false;
const wifiNetworks=[{ssid:'Lab 2.4G',rssi:-40,open:false},{ssid:'Lab 2.4G',rssi:-60,open:false},{ssid:'<img src=x onerror=alert(1)>',rssi:-75,open:true}];
let state = {version:'1.0.3',token:'test-session-token',uptime_ms:123400,bitrate:500000,mcp_clock_mhz:16,free_heap:140000,
  wifi:{...wifiDefaults},
  replay:{...replayDefaults},
  capture:{available:true,revision:0,bus:2,result:0,id:''},
  config:{...defaults},apply:{revision:0,pending:false,ok:true,saved:false,message:'默认配置'},
  directions:[{...direction},{...direction,submitted:0,sent:0,blocked:10}],
  twai:{ready:true,state:1,rec:0,tec:0,missed:0,overruns:0,bus_errors:0,recoveries:0},
  mcp:{ready:true,flags:0,rec:0,tec:0,overflow_events:0,read_errors:0}};
let frames = [
  {seq:1,us:123400001,bus:0,id:'0x082',dlc:8,flags:0,data:'00 01 02 03 04 05 06 07',result:'sent'},
  {seq:2,us:123400201,bus:1,id:'0x123',dlc:2,flags:0,data:'AA BB',result:'disabled'},
  {seq:3,us:123400401,bus:1,id:'0x00000082',dlc:1,flags:1,data:'EF',result:'unsupported'},
];
let frameRequests = 0;
let capture = {bus:2,result:0,id:''};
const mutations = [];

(async () => {
  const browser = await chromium.launch({headless:true, executablePath:process.env.CHROME_PATH || '/Applications/Google Chrome.app/Contents/MacOS/Google Chrome'});
  try {
    const context = await browser.newContext({viewport:{width:1360,height:1100},acceptDownloads:true});
    const page = await context.newPage();
    const errors=[]; page.on('pageerror',e=>errors.push(e.message));
    await page.route('http://gateway.test/**', async route => {
      const request=route.request(), url=new URL(request.url());
      const json=(body,status=200)=>route.fulfill({status,contentType:'application/json',body:JSON.stringify(body)});
      if(url.pathname==='/') return route.fulfill({contentType:'text/html',body:html});
      if(url.pathname==='/api/status') return json(state);
      if(url.pathname==='/api/wifi/scan' && request.method()==='GET') {
        const scanning=++wifiScanPolls<2;
        state.wifi.scanning=scanning;
        return json({scanning,error:'',networks:scanning?[]:wifiNetworks});
      }
      if(url.pathname==='/api/frames') {
        frameRequests++;
        let after=Number(url.searchParams.get('after')||0);
        const selected=frames.filter(f=>(capture.bus===2||f.bus===capture.bus) &&
          (!capture.id||Number.parseInt(f.id,16)===Number.parseInt(capture.id.replace(/^0x/i,''),16)) &&
          (capture.result===0 || (capture.result===1&&f.result==='sent') ||
          (capture.result===2&&['disabled','not_listed','unsupported'].includes(f.result)) ||
          (capture.result===3&&['busy','failed','expired','reconfigured'].includes(f.result))));
        const numbered=selected.map((f,i)=>({...f,seq:i+1}));
        const latest=numbered.length;
        if(after>latest) after=0;
        const capacity=capture.bus===2&&capture.result===0&&!capture.id?1024:2000;
        const oldest=Math.max(1,latest-capacity+1), lost=Math.max(0,oldest-after-1);
        after=Math.max(after,oldest-1);
        const batch=numbered.filter(f=>f.seq>after).slice(0,128);
        return json({token:state.token,revision:state.capture.revision,frames:batch,next:batch.at(-1)?.seq||after,latest,oldest,lost,capacity});
      }
      if(request.method()==='POST') {
        assert.equal(request.headers()['x-gateway-token'],state.token);
        const data=request.postDataJSON(); mutations.push({path:url.pathname,data});
        if(url.pathname==='/api/wifi/scan') {
          wifiScanPolls=0; state.wifi.scanning=true;
          return json({scanning:true,error:'',networks:[]},202);
        }
        if(url.pathname==='/api/wifi') {
          if(rejectWifi) return json({error:'Wi-Fi 配置保存失败，未切换网络'},400);
          state.wifi.pending=true;
          setTimeout(()=>{
            if(data.action==='connect'||data.action==='reconnect') {
              const ssid=data.action==='connect'?data.ssid:state.wifi.saved_ssid;
              state.wifi={...state.wifi,pending:false,saved:true,saved_ssid:ssid,enabled:true,connected:true,ssid,ip:'192.168.1.40',rssi:-45,state:'connected',message:'Wi-Fi 已连接'};
            } else {
              state.wifi={...state.wifi,pending:false,enabled:false,connected:false,ssid:'',ip:'',state:'off',message:'已断开 Wi-Fi'};
              if(data.action==='forget') {state.wifi.saved=false; state.wifi.saved_ssid='';}
            }
          },200);
          return json({pending:true},202);
        }
        if(url.pathname==='/api/capture-filter') {
          capture=data;
          state.capture={...data,available:true,revision:state.capture.revision+1};
          return json({revision:state.capture.revision,capacity:data.bus===2&&data.result===0&&!data.id?1024:2000});
        }
        if(url.pathname==='/api/replay') {
          if(rejectReplay) return json({error:'CAN 任务不可用'},503);
          state.replay.pending=true;
          setTimeout(()=>{
            state.replay={...state.replay,...(data.enabled?data:{}),pending:false,running:data.enabled,
              message:data.enabled?'正在模拟发送到 MCP2515':'模拟发送已停止',revision:state.replay.revision+1};
          },200);
          return json({pending:true},202);
        }
        if(url.pathname==='/api/config') {
          if(data.reverse_ids==='800') return json({error:'白名单只接受 0x000–0x7FF'},400);
          state.config={...state.config,...data};
        } else if(url.pathname==='/api/defaults') state.config={...defaults};
        else if(url.pathname==='/api/stop') state.config={...state.config,forward_enabled:false,reverse_enabled:false};
        else return json({error:'not found'},404);
        state.replay.running=false; state.replay.message='配置切换，模拟发送已停止';
        state.apply={revision:state.apply.revision+1,pending:false,ok:true,saved:true,message:'配置已生效并保存'};
        return json({pending:true},202);
      }
      return json({error:'not found'},404);
    });
    await page.goto('http://gateway.test/');
    await page.waitForFunction(()=>document.querySelector('#connection').textContent.includes('已连接'));
    await page.waitForFunction(()=>document.querySelectorAll('#frames tr').length===3);
    assert.equal(await page.locator('#reverseEnabled').isChecked(),false);
    assert.equal(await page.locator('#forwardIds').inputValue(),ids);
    assert.match(await page.locator('#diagnostics').textContent(),/TWAI 就绪 \/ 运行/);

    await page.locator('#wifiScan').click();
    await page.waitForFunction(()=>document.querySelectorAll('#wifiNetworks option').length===3);
    assert.equal(await page.locator('#wifiNetworks img').count(),0,'SSID labels must remain text');
    await page.locator('#wifiNetworks').selectOption('Lab 2.4G');
    await page.locator('#wifiPassword').fill('test-password');
    await page.waitForTimeout(1200);
    assert.equal(await page.locator('#wifiSsid').inputValue(),'Lab 2.4G','poll preserves Wi-Fi draft');
    assert.equal(await page.locator('#wifiPassword').inputValue(),'test-password');
    await page.locator('#wifiPassword').fill('short');
    await page.locator('#wifiConnect').click();
    assert.match(await page.locator('#wifiMessage').textContent(),/8–63/);
    assert.equal(mutations.filter(m=>m.path==='/api/wifi').length,0);
    await page.locator('#wifiSsid').fill('网'.repeat(16)); // character limit isn't a UTF-8 byte limit
    await page.locator('#wifiPassword').fill('test-password');
    await page.locator('#wifiConnect').click();
    assert.match(await page.locator('#wifiMessage').textContent(),/1–32/);
    await page.locator('#wifiSsid').fill('Lab 2.4G');
    rejectWifi=true;
    await page.locator('#wifiConnect').click();
    await page.waitForFunction(()=>document.querySelector('#wifiMessage').textContent.includes('保存失败'));
    assert.equal(await page.locator('#wifiPassword').inputValue(),'test-password');
    rejectWifi=false;
    await page.locator('#wifiConnect').click();
    await page.waitForFunction(()=>document.querySelector('#wifiMessage').textContent==='Wi-Fi 已连接');
    assert.deepEqual(mutations.filter(m=>m.path==='/api/wifi').at(-1).data,{action:'connect',ssid:'Lab 2.4G',password:'test-password'});
    assert.equal(await page.locator('#wifiPassword').inputValue(),'');
    assert.equal(await page.locator('#wifiAddresses a').last().getAttribute('href'),'http://192.168.1.40');
    assert.equal(state.wifi.ap_ready,true);
    assert.ok(!JSON.stringify(state.wifi).includes('test-password'));
    await page.locator('#wifiDisconnect').click();
    await page.waitForFunction(()=>!document.querySelector('#wifiAddresses').textContent.includes('192.168.1.40'));
    assert.equal(state.wifi.saved,true);
    await page.locator('#wifiReconnect').click();
    await page.waitForFunction(()=>document.querySelector('#wifiMessage').textContent==='Wi-Fi 已连接');
    await page.locator('#wifiForget').click();
    await page.waitForFunction(()=>document.querySelector('#wifiReconnect').disabled);
    await page.waitForFunction(()=>!document.querySelector('#wifiAddresses').textContent.includes('已保存'));
    assert.equal(state.wifi.saved,false);
    assert.equal(await page.locator('#wifiSsid').inputValue(),'');
    assert.equal(state.wifi.ap_ready,true);

    await page.locator('#reverseIds').fill('0x123');
    await page.locator('#reverseEnabled').check();
    await page.waitForTimeout(1200);
    assert.equal(await page.locator('#reverseIds').inputValue(),'0x123','poll must preserve unsaved edits');
    await page.locator('#save').click();
    await page.waitForFunction(()=>document.querySelector('#applyMessage').textContent.includes('已生效并保存'));
    assert.equal(mutations.at(-1).data.reverse_enabled,true);
    assert.equal(mutations.at(-1).data.reverse_ids,'0x123');
    assert.equal(await page.locator('#dirty').textContent(),'');

    await page.locator('#reverseIds').fill('800');
    await page.locator('#save').click();
    await page.waitForFunction(()=>document.querySelector('#applyMessage').textContent.includes('0x000–0x7FF'));
    await page.waitForTimeout(1200);
    assert.match(await page.locator('#applyMessage').textContent(),/0x000–0x7FF/,'poll must preserve validation errors');
    assert.equal(await page.locator('#reverseIds').inputValue(),'800','invalid input must remain editable');
    assert.equal(state.config.reverse_ids,'0x123');
    await page.locator('#reload').click();
    assert.equal(await page.locator('#reverseIds').inputValue(),'0x123');

    await page.locator('#filterResult').selectOption('sent');
    await page.waitForFunction(()=>document.querySelector('#captureInfo').textContent.includes('设备环形缓存 2000') && document.querySelectorAll('#frames tr').length===1);
    assert.equal(await page.locator('#frames tr').count(),1);
    await page.locator('#filterResult').selectOption('all');
    await page.locator('#filterId').fill('123');
    await page.waitForFunction(()=>document.querySelector('#captureInfo').textContent.includes('设备环形缓存 2000') && document.querySelectorAll('#frames tr').length===1);
    assert.equal(await page.locator('#frames tr').count(),1);
    await page.locator('#filterId').fill('not-an-id');
    assert.equal(await page.locator('#frames tr').count(),0);
    await page.waitForFunction(()=>document.querySelector('#captureInfo').textContent.includes('筛选错误'));
    await page.locator('#filterId').fill('');
    await page.locator('#filterBus').selectOption('1');
    await page.waitForFunction(()=>document.querySelectorAll('#frames tr').length===2);
    assert.equal(await page.locator('#frames tr').count(),2);
    const downloadPromise=page.waitForEvent('download'); await page.locator('#export').click();
    const download=await downloadPromise;
    const csv=fs.readFileSync(await download.path(),'utf8');
    assert.match(csv,/"MCP2515","TWAI","0x123"/);
    assert.doesNotMatch(csv,/"TWAI","MCP2515","0x082"/);
    await page.locator('#filterBus').selectOption('all');
    await page.waitForFunction(()=>document.querySelectorAll('#frames tr').length===3);

    // Unrelated high-volume traffic must not evict the selected ID's history.
    frames=Array.from({length:2500},(_,i)=>({...frames[0],seq:i+1,id:i%5===0?'0x082':'0x456'}));
    await page.locator('#filterId').fill('082');
    await page.waitForFunction(()=>document.querySelector('#captureInfo').textContent.includes('浏览器 500/2000'));
    assert.equal(await page.locator('#frames tr').count(),300);
    assert.match(await page.locator('#captureInfo').textContent(),/设备记录缺失 0 帧/);
    await page.locator('#clear').click();
    assert.equal(await page.locator('#frames tr').count(),0);
    await page.locator('#filterId').fill('');
    await page.waitForFunction(()=>document.querySelector('#captureInfo').textContent.includes('设备环形缓存 1024'));

    await page.locator('#pause').click();
    await page.waitForTimeout(300); const before=frameRequests;
    await page.waitForTimeout(1100); assert.equal(frameRequests,before);
    assert.match(await page.locator('#captureInfo').textContent(),/已暂停抓取/);
    await page.locator('#pause').click();
    await page.locator('#stop').click();
    await page.waitForFunction(()=>document.querySelector('#connection').textContent.includes('正向 关闭 · 回传 关闭'));
    assert.equal(state.config.forward_enabled,false); assert.equal(state.config.reverse_enabled,false);
    await page.locator('#defaults').click();
    await page.waitForFunction(()=>document.querySelector('#connection').textContent.includes('正向 开启 · 回传 关闭'));
    assert.equal(state.config.forward_ids,ids);

    // Simulation controls remain off until explicitly started and preserve drafts.
    assert.equal(mutations.filter(m=>m.path==='/api/replay').length,0);
    assert.equal(await page.locator('#replayInterval').inputValue(),'357');
    await page.locator('#replaySource').selectOption('1');
    await page.locator('#replayInterval').fill('2000');
    await page.locator('#replayLoop').uncheck();
    await page.waitForTimeout(1100);
    assert.equal(await page.locator('#replayInterval').inputValue(),'2000');
    await page.locator('#replayInterval').fill('356');
    await page.locator('#replayStart').click();
    assert.match(await page.locator('#replayMessage').textContent(),/357–1000000/);
    assert.equal(mutations.filter(m=>m.path==='/api/replay').length,0);
    await page.locator('#replayInterval').fill('2000');
    rejectReplay=true;
    await page.locator('#replayStart').click();
    await page.waitForFunction(()=>document.querySelector('#replayMessage').textContent.includes('CAN 任务不可用'));
    rejectReplay=false;
    await page.locator('#replayStart').click();
    await page.waitForFunction(()=>document.querySelector('#replayStats').textContent.includes('运行中'));
    assert.deepEqual(mutations.filter(m=>m.path==='/api/replay').at(-1).data,{enabled:true,source:1,interval_us:2000,loop:false});
    assert.equal(await page.locator('#replayStart').isDisabled(),true);
    assert.equal(state.config.reverse_enabled,false,'simulation must not enable reverse forwarding');
    frames=[{...frames[0],seq:1,bus:3,id:'0x129'}, {...frames[0],seq:2,bus:1,id:'0x123',result:'disabled'}];
    await page.locator('#filterBus').selectOption('3');
    await page.waitForFunction(()=>document.querySelectorAll('#frames tr').length===1 && document.querySelector('#frames').textContent.includes('模拟 → MCP'));
    const simDownloadPromise=page.waitForEvent('download'); await page.locator('#export').click();
    const simCsv=fs.readFileSync(await (await simDownloadPromise).path(),'utf8');
    assert.match(simCsv,/"SIMULATED","MCP2515","0x129"/);
    assert.doesNotMatch(simCsv,/"0x123"/);
    await page.locator('#replayStop').click();
    await page.waitForFunction(()=>document.querySelector('#replayMessage').textContent==='模拟发送已停止');
    assert.equal(state.replay.running,false);
    assert.equal(state.config.forward_enabled,true,'stop simulation preserves gateway configuration');
    await page.locator('#replaySource').selectOption('2');
    await page.locator('#replayInterval').fill('357');
    await page.locator('#replayLoop').check();
    await page.locator('#replayStart').click();
    await page.waitForFunction(()=>document.querySelector('#replayStats').textContent.includes('运行中'));
    assert.deepEqual(mutations.filter(m=>m.path==='/api/replay').at(-1).data,{enabled:true,source:2,interval_us:357,loop:true});
    await page.locator('#stop').click();
    await page.waitForFunction(()=>document.querySelector('#connection').textContent.includes('正向 关闭 · 回传 关闭'));
    assert.equal(state.replay.running,false,'global stop also stops replay');
    await page.locator('#filterBus').selectOption('all');
    await page.waitForFunction(()=>document.querySelectorAll('#frames tr').length===2);

    await page.screenshot({path:'/tmp/can-gateway-desktop.png',fullPage:true});
    await page.setViewportSize({width:390,height:844});
    assert.ok(await page.evaluate(()=>document.documentElement.scrollWidth<=innerWidth),'mobile page should not overflow');
    await page.screenshot({path:'/tmp/can-gateway-mobile.png',fullPage:true});

    // Cross-reboot cursors and rows must reset even when timestamps/sequence numbers restart.
    const replayMutations=mutations.filter(m=>m.path==='/api/replay').length;
    frames=[{...frames[0],seq:1,us:100,id:'0x103'}]; state.token='after-reboot'; state.capture.revision=0; capture={bus:2,result:0,id:''}; state.replay={...replayDefaults};
    await page.waitForFunction(()=>document.querySelector('#frames').textContent.includes('0x103'));
    assert.equal(await page.locator('#frames tr').count(),1);
    assert.equal(state.replay.running,false);
    assert.equal(mutations.filter(m=>m.path==='/api/replay').length,replayMutations,'reboot must not auto-start simulation');
    assert.deepEqual(errors,[]);
    console.log('PASS: Wi-Fi scan/connect/reconnect/disconnect/forget and validation, gateway config/capture/replay/CSV, reboot, mobile');
  } finally {await browser.close();}
})().catch(error=>{console.error(error);process.exitCode=1;});
