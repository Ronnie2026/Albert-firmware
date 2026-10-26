// 独立入口：pio run -e can_gateway。其他版本不会链接本文件的 setup/loop。
#if defined(CAN_GATEWAY_BUILD)
#include <Arduino.h>
#include <ArduinoJson.h>
#include <Preferences.h>
#include <SPI.h>
#include <WebServer.h>
#include <WiFi.h>
#include <driver/twai.h>
#include <esp_system.h>
#include <esp_timer.h>
#include <esp_heap_caps.h>
#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>
#include <freertos/task.h>
#include "mcp2515.h"
#include "pin_config.h"
#include "gateway/gateway_policy.h"
#include "gateway/capture_filter.h"
#include "gateway/replay_control.h"
#include "gateway/wifi_manager.h"
#include "gateway/gateway_ui.h"
#include "replay_frames.h"

#ifndef GATEWAY_AP_SSID
#define GATEWAY_AP_SSID "CAN-Gateway"
#endif
#ifndef GATEWAY_AP_PASSWORD
#define GATEWAY_AP_PASSWORD "12345678"
#endif
#ifndef GATEWAY_MCP_CLOCK_MHZ
#define GATEWAY_MCP_CLOCK_MHZ 16
#endif
static_assert(GATEWAY_MCP_CLOCK_MHZ == 8 || GATEWAY_MCP_CLOCK_MHZ == 16 ||
              GATEWAY_MCP_CLOCK_MHZ == 20, "MCP clock must be 8, 16 or 20 MHz");

namespace
{
using namespace gateway;
constexpr char kVersion[] = "1.0.3";
constexpr size_t kLogCapacity = 1024;
constexpr size_t kCaptureCapacity = 2000;
constexpr size_t kLogBatch = 128;
constexpr uint64_t kTxDeadlineUs = 20000;
constexpr ReplayFrame kReplayFirstGearFrame = {
    0x331, 6, 0, {0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
enum Outcome : uint8_t { Pending, Sent, Disabled, NotListed, Unsupported, Busy, Failed, Expired, Reconfigured };
static_assert(Pending == 0 && Sent == 1 && Disabled == 2 && Unsupported == 4 &&
              Busy == 5 && Reconfigured == 8, "CaptureFilter outcome mapping changed");
const char *const kOutcomeNames[] = {"pending", "sent", "disabled", "not_listed", "unsupported",
                                   "busy", "failed", "expired", "reconfigured"};
struct Record
{
    uint64_t seq = 0;
    uint64_t us = 0;
    uint32_t id = 0;
    uint8_t data[8] = {};
    uint8_t dlc = 0;
    uint8_t bus = 0; // 0=TWAI 接收，1=MCP2515 接收，3=模拟发送 → MCP2515
    uint8_t flags = 0; // 1=EXT, 2=RTR, 4=ERR
    Outcome outcome = Pending;
};
struct CaptureEntry
{
    uint64_t index = 0;
    Record record;
};
struct DirectionStats
{
    uint64_t rx = 0, submitted = 0, sent = 0, blocked = 0, unsupported = 0;
    uint64_t busy = 0, failed = 0, expired = 0, canceled = 0;
};
struct Stats
{
    DirectionStats dirs[2];
    DirectionStats replay;
    bool twaiReady = false, mcpReady = false;
    uint8_t mcpFlags = 0, mcpRec = 0, mcpTec = 0;
    uint32_t mcpOverflows = 0, mcpReadErrors = 0, twaiMissed = 0, twaiOverruns = 0;
    uint32_t twaiBusErrors = 0, twaiRecoveries = 0;
    uint32_t twaiRec = 0, twaiTec = 0;
    int twaiState = -1;
};
struct ApplyState
{
    uint32_t revision = 0;
    bool pending = false;
    bool ok = true;
    bool saved = false;
    char message[160] = "默认配置";
};
enum class CommandKind : uint8_t { Config, ReplayStart, ReplayStop };
struct Command { Config config; CommandKind kind = CommandKind::Config; ReplayOptions replay; };
struct ReplayStatus
{
    ReplayCursor cursor;
    uint32_t revision = 0;
    bool pending = false, ok = true;
    char message[128] = "模拟发送已停止";
};
struct Flight { uint64_t seq = 0, started = 0; Record record; };

MCP2515 mcp(MCP2515_CS, 10000000, &SPI);
WebServer server(80);
GatewayWifi gatewayWifi;
TaskHandle_t canTask = nullptr;
esp_timer_handle_t replayWakeTimer = nullptr;
QueueHandle_t commands = nullptr;
portMUX_TYPE sharedMux = portMUX_INITIALIZER_UNLOCKED;
portMUX_TYPE logMux = portMUX_INITIALIZER_UNLOCKED;
Config activeConfig;
Config publishedConfig;
Stats stats, publishedStats;
ApplyState applyState;
ReplayStatus replayState, publishedReplay;
Record records[kLogCapacity];
uint64_t nextSeq = 1;
CaptureEntry *captureRecords = nullptr;
CaptureFilter captureFilter;
uint64_t captureNext = 1;
uint32_t captureRevision = 0;
uint64_t captureStartSeq = 1;
Flight mcpFlights[3], twaiFlight;
bool twaiInstalled = false;
char csrfToken[33] = {};

// 仅 CAN 任务访问 SPI。库缺少单次发送/中止/完成查询接口，局部使用芯片 SPI 指令。
// MCP2515 DS20001801J: CANCTRL 0x0F, TXBnCTRL 0x30/40/50, CANINTF 0x2C。
uint8_t mcpRead(uint8_t reg)
{
    SPI.beginTransaction(SPISettings(10000000, MSBFIRST, SPI_MODE0));
    digitalWrite(MCP2515_CS, LOW);
    SPI.transfer(0x03); SPI.transfer(reg);
    const uint8_t value = SPI.transfer(0);
    digitalWrite(MCP2515_CS, HIGH);
    SPI.endTransaction();
    return value;
}
void mcpModify(uint8_t reg, uint8_t mask, uint8_t value)
{
    SPI.beginTransaction(SPISettings(10000000, MSBFIRST, SPI_MODE0));
    digitalWrite(MCP2515_CS, LOW);
    SPI.transfer(0x05); SPI.transfer(reg); SPI.transfer(mask); SPI.transfer(value);
    digitalWrite(MCP2515_CS, HIGH);
    SPI.endTransaction();
}

void publish()
{
    portENTER_CRITICAL(&sharedMux);
    publishedStats = stats;
    publishedConfig = activeConfig;
    publishedReplay.cursor = replayState.cursor;
    publishedReplay.ok = replayState.ok;
    memcpy(publishedReplay.message, replayState.message, sizeof(replayState.message));
    portEXIT_CRITICAL(&sharedMux);
}
void appendCaptureLocked(const Record &record)
{
    if (!captureRecords || !captureFilter.active() || record.seq < captureStartSeq ||
        !captureFilter.matches(record.bus, record.id, record.outcome)) return;
    const uint64_t index = captureNext++;
    captureRecords[(index - 1) % kCaptureCapacity] = {index, record};
}
uint64_t appendRecord(Record &record)
{
    portENTER_CRITICAL(&logMux);
    record.seq = nextSeq++;
    records[(record.seq - 1) % kLogCapacity] = record;
    if (record.outcome != Pending) appendCaptureLocked(record);
    portEXIT_CRITICAL(&logMux);
    return record.seq;
}
DirectionStats &recordStats(uint8_t bus)
{
    return bus == 3 ? stats.replay : stats.dirs[bus];
}
void finish(Flight &flight, Outcome outcome)
{
    if (!flight.seq) return;
    auto &s = recordStats(flight.record.bus);
    if (outcome == Sent) ++s.sent;
    else if (outcome == Expired) ++s.expired;
    else if (outcome == Reconfigured) ++s.canceled;
    else ++s.failed;
    portENTER_CRITICAL(&logMux);
    Record &r = records[(flight.seq - 1) % kLogCapacity];
    if (r.seq == flight.seq) r.outcome = outcome;
    Record completed = flight.record;
    completed.outcome = outcome;
    appendCaptureLocked(completed);
    portEXIT_CRITICAL(&logMux);
    flight = {};
}

bool startTwai()
{
    const HardwareFilter f = hardwareFilter(activeConfig);
    twai_general_config_t g = TWAI_GENERAL_CONFIG_DEFAULT(
        static_cast<gpio_num_t>(CAN_TX), static_cast<gpio_num_t>(CAN_RX), TWAI_MODE_NORMAL);
    g.rx_queue_len = 256;
    g.tx_queue_len = 0; // 只允许一帧在途，禁止旧白名单报文积压后穿透。
    g.alerts_enabled = TWAI_ALERT_TX_SUCCESS | TWAI_ALERT_TX_FAILED | TWAI_ALERT_BUS_OFF;
    const twai_timing_config_t timing = TWAI_TIMING_CONFIG_500KBITS();
    const twai_filter_config_t filter = {f.acceptanceCode(), f.acceptanceMask(), true};
    if (twai_driver_install(&g, &timing, &filter) != ESP_OK) return false;
    twaiInstalled = true;
    if (twai_start() == ESP_OK) return true;
    if (twai_driver_uninstall() == ESP_OK) twaiInstalled = false;
    return false;
}
bool stopTwai()
{
    if (!twaiInstalled) return true;
    twai_status_info_t state = {};
    if (twai_get_status_info(&state) != ESP_OK) return false;
    // BUS_OFF 可直接卸载；恢复中的控制器须等待恢复结束，禁止不确定状态下重装。
    if (state.state == TWAI_STATE_RECOVERING) return false;
    if (state.state == TWAI_STATE_RUNNING && twai_stop() != ESP_OK) return false;
    if (twai_driver_uninstall() != ESP_OK) return false;
    twaiInstalled = false;
    return true;
}
bool startMcp()
{
    if (mcp.reset() != MCP2515::ERROR_OK) return false;
    const CAN_CLOCK clock = GATEWAY_MCP_CLOCK_MHZ == 8 ? MCP_8MHZ :
                            GATEWAY_MCP_CLOCK_MHZ == 20 ? MCP_20MHZ : MCP_16MHZ;
    if (mcp.setBitrate(CAN_500KBPS, clock) != MCP2515::ERROR_OK) return false;
    // RXM=00 + 零掩码：接收全部有效标准/扩展帧。RXM=11 调试模式会放进
    // 错误帧片段且无法逐帧识别，绝不可用于网关。两组过滤器都覆盖 STD/EXT。
    if (mcp.setFilterMask(MCP2515::MASK0, false, 0) != MCP2515::ERROR_OK ||
        mcp.setFilterMask(MCP2515::MASK1, false, 0) != MCP2515::ERROR_OK) return false;
    for (uint8_t i = 0; i < 6; ++i)
        if (mcp.setFilter(static_cast<MCP2515::RXF>(i), i % 2 != 0, 0) != MCP2515::ERROR_OK) return false;
    mcpModify(0x60, 0x64, 0x04); // RXB0CTRL: valid frames + rollover
    mcpModify(0x70, 0x60, 0x00); // RXB1CTRL: valid frames
    mcpModify(0x0F, 0x08, 0x08); // CANCTRL.OSM：失败不无限重发
    mcp.clearInterrupts();
    mcp.clearRXnOVRFlags();
    if (mcp.setNormalMode() != MCP2515::ERROR_OK) return false;
    return (mcpRead(0x0F) & 0xE8) == 0x08 && (mcpRead(0x0E) & 0xE0) == 0;
}
void abortMcp()
{
    // 复位也用于清空 RX/TX 缓冲，使配置更改前收到的帧不套用新规则。
    digitalWrite(MCP2515_RST, LOW);
    delayMicroseconds(20);
    digitalWrite(MCP2515_RST, HIGH);
    delayMicroseconds(100);
    stats.mcpReady = false;
    for (auto &flight : mcpFlights) finish(flight, Reconfigured);
}

bool saveConfig(const Config &config)
{
    StoredConfig stored;
    stored.config = config;
    stored.checksum = checksum(stored);
    Preferences prefs;
    if (!prefs.begin("can-gateway", false)) return false;
    const bool ok = prefs.putBytes("config-v1", &stored, sizeof(stored)) == sizeof(stored);
    prefs.end();
    return ok;
}
Config loadConfig()
{
    Preferences prefs;
    StoredConfig stored;
    bool valid = false;
    if (prefs.begin("can-gateway", true))
    {
        valid = prefs.getBytesLength("config-v1") == sizeof(stored) &&
                prefs.getBytes("config-v1", &stored, sizeof(stored)) == sizeof(stored) && validStored(stored);
        prefs.end();
    }
    applyState.saved = valid;
    snprintf(applyState.message, sizeof(applyState.message), "%s", valid ? "已加载保存配置" : "使用默认配置（回传关闭）");
    return valid ? stored.config : defaults();
}

void applyCommand(const Command &command)
{
    replayState.cursor.stop();
    snprintf(replayState.message, sizeof(replayState.message), "配置切换，模拟发送已停止");
    abortMcp();
    const bool stopped = stopTwai();
    finish(twaiFlight, Reconfigured);
    activeConfig = command.config;
    stats.twaiReady = stopped && startTwai();
    stats.mcpReady = startMcp();
    const bool ok = stats.twaiReady && stats.mcpReady;
    if (!ok)
    {
        // 配置失败关闭两个转发开关；仍允许工作正常的一侧抓包。
        activeConfig.forwardEnabled = 0;
        activeConfig.reverseEnabled = 0;
    }
    const bool saved = ok && saveConfig(activeConfig);
    portENTER_CRITICAL(&sharedMux);
    ++applyState.revision;
    applyState.pending = false;
    applyState.ok = ok;
    applyState.saved = saved;
    snprintf(applyState.message, sizeof(applyState.message), "%s", !ok ?
        "控制器初始化失败，双向转发已关闭；未保存" : saved ?
        "配置已生效并保存" : "配置已生效，但 NVS 保存失败");
    publishedConfig = activeConfig;
    publishedStats = stats;
    portEXIT_CRITICAL(&sharedMux);
    publish();
}

void serviceTx()
{
    const uint64_t now = esp_timer_get_time();
    if (stats.mcpReady)
    {
        for (uint8_t i = 0; i < 3; ++i)
        {
            Flight &f = mcpFlights[i];
            if (!f.seq) continue;
            const uint8_t reg = 0x30 + 0x10 * i;
            const uint8_t control = mcpRead(reg);
            if (!(control & 0x08))
            {
                const bool completed = (mcp.getInterrupts() & (0x04 << i)) && !(control & 0x70);
                finish(f, completed ? Sent : Failed);
                mcpModify(0x2C, 0x04 << i, 0);
            }
            else if (now - f.started >= kTxDeadlineUs)
            {
                mcpModify(reg, 0x08, 0);
                finish(f, Expired);
            }
        }
    }
    if (!twaiInstalled) return;
    uint32_t alerts = 0;
    twai_read_alerts(&alerts, 0);
    if (twaiFlight.seq)
    {
        if (alerts & TWAI_ALERT_TX_SUCCESS) finish(twaiFlight, Sent);
        else if (alerts & (TWAI_ALERT_TX_FAILED | TWAI_ALERT_BUS_OFF)) finish(twaiFlight, Failed);
        else if (now - twaiFlight.started >= kTxDeadlineUs)
        {
            // stop 中止当前硬件 TX；队列为空，重启后不会重发过期报文。
            const bool stopped = twai_stop() == ESP_OK;
            stats.twaiReady = stopped && twai_start() == ESP_OK;
            finish(twaiFlight, Expired);
        }
    }
}

void route(Record &r)
{
    auto &s = recordStats(r.bus);
    ++s.rx;
    // 模拟发送使用正向 ID 白名单，由独立的手动启动开关控制。
    const Decision d = r.bus == 3 ? replayDecision(activeConfig, r.id, r.dlc) :
        decide(activeConfig, r.bus == 0, r.id, r.flags & 1, r.flags & 2, r.flags & 4, r.dlc);
    if (d != Decision::Allow)
    {
        if (d == Decision::Unsupported) { r.outcome = Unsupported; ++s.unsupported; }
        else { r.outcome = d == Decision::Disabled ? Disabled : NotListed; ++s.blocked; }
        appendRecord(r);
        return;
    }
    if (r.bus != 1)
    {
        int slot = -1;
        if (stats.mcpReady && !(stats.mcpFlags & MCP2515::EFLG_TXBO))
            for (int i = 0; i < 3; ++i)
                if (!mcpFlights[i].seq && !(mcpRead(0x30 + 0x10 * i) & 0x08)) { slot = i; break; }
        if (slot < 0)
        {
            r.outcome = stats.mcpReady ? Busy : Failed;
            if (r.outcome == Busy) ++s.busy; else ++s.failed;
            appendRecord(r);
            return;
        }
        mcpModify(0x2C, 0x04 << slot, 0);
        can_frame tx = {};
        tx.can_id = r.id; tx.can_dlc = r.dlc;
        memcpy(tx.data, r.data, r.dlc);
        r.outcome = Pending;
        const uint64_t seq = appendRecord(r);
        mcpFlights[slot] = {seq, static_cast<uint64_t>(esp_timer_get_time()), r};
        ++s.submitted;
        // ERROR_OK 仅表示写入 TX 缓冲，不代表成功上总线。由 serviceTx 读取 TXnIF 确认。
        const auto error = mcp.sendMessage(static_cast<MCP2515::TXBn>(slot), &tx);
        if (error != MCP2515::ERROR_OK && error != MCP2515::ERROR_FAILTX) finish(mcpFlights[slot], Failed);
    }
    else
    {
        if (!stats.twaiReady || twaiFlight.seq)
        {
            r.outcome = stats.twaiReady ? Busy : Failed;
            if (r.outcome == Busy) ++s.busy; else ++s.failed;
            appendRecord(r);
            return;
        }
        twai_message_t tx = {};
        tx.identifier = r.id; tx.data_length_code = r.dlc;
        tx.ss = 1; // 不自动重发；不请求 self reception。
        memcpy(tx.data, r.data, r.dlc);
        uint32_t oldAlerts = 0;
        twai_read_alerts(&oldAlerts, 0);
        const esp_err_t result = twai_transmit(&tx, 0);
        if (result == ESP_OK)
        {
            r.outcome = Pending;
            twaiFlight = {appendRecord(r), static_cast<uint64_t>(esp_timer_get_time()), r};
            ++s.submitted;
        }
        else
        {
            r.outcome = result == ESP_ERR_TIMEOUT ? Busy : Failed;
            if (r.outcome == Busy) ++s.busy; else ++s.failed;
            appendRecord(r);
        }
    }
}

void stopReplayFlights()
{
    serviceTx();
    replayState.cursor.stop();
    for (uint8_t i = 0; i < 3; ++i)
    {
        if (mcpFlights[i].seq && mcpFlights[i].record.bus == 3)
        {
            mcpModify(0x30 + 0x10 * i, 0x08, 0); // 请求中止未完成模拟帧。
            finish(mcpFlights[i], Reconfigured);
        }
    }
}
void applyReplayCommand(const Command &command)
{
    stopReplayFlights();
    replayState.ok = true;
    if (command.kind == CommandKind::ReplayStart)
    {
        if (stats.mcpReady) stats.mcpFlags = mcp.getErrorFlags();
        if (!stats.mcpReady || (stats.mcpFlags & MCP2515::EFLG_TXBO) || !REPLAY_FRAME_COUNT)
        {
            replayState.ok = false;
            snprintf(replayState.message, sizeof(replayState.message), "MCP2515 未就绪或 BUS OFF，模拟未启动");
        }
        else
        {
            stats.replay = {};
            replayState.cursor.start(command.replay, esp_timer_get_time());
            snprintf(replayState.message, sizeof(replayState.message), "正在模拟发送到 MCP2515");
        }
    }
    else snprintf(replayState.message, sizeof(replayState.message), "模拟发送已停止");
    portENTER_CRITICAL(&sharedMux);
    ++publishedReplay.revision;
    publishedReplay.pending = false;
    publishedReplay.cursor = replayState.cursor;
    publishedReplay.ok = replayState.ok;
    memcpy(publishedReplay.message, replayState.message, sizeof(replayState.message));
    portEXIT_CRITICAL(&sharedMux);
    publish();
}
void serviceReplay()
{
    if (!replayState.cursor.running) return;
    if (!stats.mcpReady || (stats.mcpFlags & MCP2515::EFLG_TXBO))
    {
        stopReplayFlights();
        replayState.ok = false;
        snprintf(replayState.message, sizeof(replayState.message), "MCP2515 故障，模拟已停止");
        publish();
        return;
    }
    uint32_t index;
    ReplayFrame frame;
    if (replayState.cursor.take(esp_timer_get_time(), REPLAY_FRAME_COUNT + 1, index, [&](uint32_t candidate) {
        // 每轮先补发一档消息，选择任一录制来源均包含该帧。
        if (candidate == 0) { frame = kReplayFirstGearFrame; return true; }
        memcpy_P(&frame, &REPLAY_FRAMES[candidate - 1], sizeof(frame));
        return replayState.cursor.options.accepts(frame.bus);
    }))
    {
        Record r;
        r.us = esp_timer_get_time(); r.bus = 3; r.id = frame.id; r.dlc = frame.dlc;
        memcpy(r.data, frame.data, sizeof(r.data));
        route(r); // bus=3 只进入 MCP 发送分支，绝不调用 TWAI 发送。
    }
    if (!replayState.cursor.running)
    {
        snprintf(replayState.message, sizeof(replayState.message), "单次回放已结束，最终结果见发送计数");
        publish();
    }
}

bool receiveMcp()
{
    if (!stats.mcpReady) return false;
    const uint8_t status = mcp.getStatus();
    if (!(status & 0x03)) return false;
    static bool preferRx1 = false;
    const auto buffer = (status & 2) && (!(status & 1) || preferRx1) ? MCP2515::RXB1 : MCP2515::RXB0;
    preferRx1 = buffer == MCP2515::RXB0;
    can_frame raw = {};
    if (mcp.readMessage(buffer, &raw) != MCP2515::ERROR_OK)
    {
        // 库遇到 DLC>8 不清 RXnIF；丢弃该坏帧，防止永久堵死收包。
        mcpModify(0x2C, buffer == MCP2515::RXB0 ? 1 : 2, 0);
        ++stats.mcpReadErrors;
        return true;
    }
    Record r;
    r.us = esp_timer_get_time(); r.bus = 1;
    r.flags = ((raw.can_id & CAN_EFF_FLAG) ? 1 : 0) | ((raw.can_id & CAN_RTR_FLAG) ? 2 : 0) |
              ((raw.can_id & CAN_ERR_FLAG) ? 4 : 0);
    r.id = raw.can_id & ((r.flags & 1) ? CAN_EFF_MASK : CAN_SFF_MASK);
    r.dlc = raw.can_dlc;
    if (!(r.flags & 2)) memcpy(r.data, raw.data, r.dlc <= 8 ? r.dlc : 8);
    route(r);
    return true;
}
bool receiveTwai()
{
    if (!stats.twaiReady) return false;
    twai_message_t raw = {};
    if (twai_receive(&raw, 0) != ESP_OK) return false;
    Record r;
    r.us = esp_timer_get_time(); r.bus = 0;
    r.id = raw.identifier; r.dlc = raw.data_length_code;
    r.flags = (raw.extd ? 1 : 0) | (raw.rtr ? 2 : 0) | (raw.dlc_non_comp ? 4 : 0);
    if (!raw.rtr) memcpy(r.data, raw.data, r.dlc <= 8 ? r.dlc : 8);
    route(r);
    return true;
}

void diagnostics()
{
    if (twaiInstalled)
    {
        twai_status_info_t info = {};
        if (twai_get_status_info(&info) == ESP_OK)
        {
            stats.twaiState = info.state;
            stats.twaiRec = info.rx_error_counter; stats.twaiTec = info.tx_error_counter;
            stats.twaiMissed = info.rx_missed_count; stats.twaiOverruns = info.rx_overrun_count;
            stats.twaiBusErrors = info.bus_error_count;
            if (info.state == TWAI_STATE_BUS_OFF)
            {
                stats.twaiReady = false;
                finish(twaiFlight, Failed);
                if (twai_initiate_recovery() == ESP_OK) ++stats.twaiRecoveries;
            }
            else if (info.state == TWAI_STATE_STOPPED) stats.twaiReady = twai_start() == ESP_OK;
            else stats.twaiReady = info.state == TWAI_STATE_RUNNING;
        }
    }
    if (stats.mcpReady)
    {
        stats.mcpFlags = mcp.getErrorFlags();
        stats.mcpRec = mcp.errorCountRX(); stats.mcpTec = mcp.errorCountTX();
        if (stats.mcpFlags & 0xC0)
        {
            if (stats.mcpFlags & 0x40) ++stats.mcpOverflows;
            if (stats.mcpFlags & 0x80) ++stats.mcpOverflows;
            mcp.clearRXnOVRFlags();
        }
        // 清除错误中断，避免 INT 持续低电平掩盖后续 RX 唤醒。
        mcp.clearMERR(); mcp.clearERRIF();
    }
}
void IRAM_ATTR onMcpInterrupt()
{
    BaseType_t wake = pdFALSE;
    if (canTask) vTaskNotifyGiveFromISR(canTask, &wake);
    if (wake) portYIELD_FROM_ISR();
}
void onReplayWake(void *)
{
    if (canTask) xTaskNotifyGive(canTask);
}
void canLoop(void *)
{
    esp_timer_create_args_t replayTimerArgs = {};
    replayTimerArgs.callback = onReplayWake;
    replayTimerArgs.name = "can_replay";
    esp_timer_create(&replayTimerArgs, &replayWakeTimer);
    SPI.begin(MCP2515_SCLK, MCP2515_MISO, MCP2515_MOSI, MCP2515_CS);
    pinMode(MCP2515_RST, OUTPUT);
    pinMode(MCP2515_CS, OUTPUT);
    digitalWrite(MCP2515_CS, HIGH);
    abortMcp();
    stats.mcpReady = startMcp();
    stats.twaiReady = startTwai();
    if (!stats.mcpReady || !stats.twaiReady)
    {
        activeConfig.forwardEnabled = activeConfig.reverseEnabled = 0;
        portENTER_CRITICAL(&sharedMux);
        applyState.ok = false;
        snprintf(applyState.message, sizeof(applyState.message), "启动失败，双向转发已关闭；检查硬件后重新应用配置");
        portEXIT_CRITICAL(&sharedMux);
    }
    pinMode(MCP2515_INT, INPUT_PULLUP); // GPIO8 是 MCP INT，本版本不把它当 LED 驱动。
    attachInterrupt(digitalPinToInterrupt(MCP2515_INT), onMcpInterrupt, FALLING);
    publish();
    uint32_t lastDiag = 0;
    for (;;)
    {
        Command command;
        if (xQueueReceive(commands, &command, 0) == pdTRUE)
        {
            if (command.kind == CommandKind::Config) applyCommand(command);
            else applyReplayCommand(command);
        }
        // 交替收两路，限制单轮预算。网页及 NVS 从不与本任务并发访问 SPI/TWAI。
        for (uint8_t i = 0; i < 32; ++i)
        {
            serviceTx();
            serviceReplay();
            const bool a = receiveMcp();
            const bool b = receiveTwai();
            if (!a && !b) break;
        }
        if (millis() - lastDiag >= 100)
        {
            lastDiag = millis();
            diagnostics(); publish();
        }
        if (replayState.cursor.running)
        {
            // 按下一帧的微秒期限唤醒，阻塞期间允许网页/idle 任务运行。
            ulTaskNotifyTake(pdTRUE, 0);
            const uint64_t now = esp_timer_get_time();
            const uint64_t waitUs = replayState.cursor.due > now ? replayState.cursor.due - now : 1;
            if (replayWakeTimer && esp_timer_start_once(replayWakeTimer, waitUs) == ESP_OK)
            {
                ulTaskNotifyTake(pdTRUE, 1); // MCP INT 仍可提前唤醒，TWAI 最多等一个 tick。
                esp_timer_stop(replayWakeTimer);
            }
            else delayMicroseconds(static_cast<uint32_t>(waitUs < 50 ? waitUs : 50));
        }
        else ulTaskNotifyTake(pdTRUE, 1); // MCP INT 唤醒，TWAI 最多一 tick 后轮询。
        // 非回放期间，持续 INT 风暴也给 loop/idle 调度机会。
        static uint32_t lastYield = 0;
        if ((!replayState.cursor.running || !replayWakeTimer) && millis() - lastYield >= 10)
        { lastYield = millis(); vTaskDelay(1); }
    }
}

String hexValue(uint32_t value, uint8_t digits = 3)
{
    char buffer[16];
    snprintf(buffer, sizeof(buffer), "0x%0*lX", digits, static_cast<unsigned long>(value));
    return String(buffer);
}
String idText(const IdSet &ids)
{
    String text;
    text.reserve(ids.count() * 6);
    for (uint16_t id = 0; id <= kMaxId; ++id)
    {
        if (!ids.contains(id)) continue;
        if (text.length()) text += ' ';
        text += hexValue(id);
    }
    return text;
}
void addConfig(JsonObject out, const Config &c)
{
    out["forward_enabled"] = static_cast<bool>(c.forwardEnabled);
    out["reverse_enabled"] = static_cast<bool>(c.reverseEnabled);
    out["forward_ids"] = idText(c.forwardIds);
    out["reverse_ids"] = idText(c.reverseIds);
    out["forward_count"] = c.forwardIds.count();
    out["reverse_count"] = c.reverseIds.count();
    out["hardware_mode"] = c.hardwareMode == HardwareMode::Auto ? "auto" : c.hardwareMode == HardwareMode::Off ? "off" : "manual";
    out["hardware_code"] = hexValue(c.hardwareCode);
    out["hardware_mask"] = hexValue(c.hardwareMask);
    const HardwareFilter filter = hardwareFilter(c);
    out["effective_code"] = hexValue(filter.code);
    out["effective_mask"] = hexValue(filter.mask);
    out["acceptance_code"] = hexValue(filter.acceptanceCode(), 8);
    out["acceptance_mask"] = hexValue(filter.acceptanceMask(), 8);
}
void sendJson(int status, const JsonDocument &doc)
{
    String text;
    serializeJson(doc, text);
    server.sendHeader("Cache-Control", "no-store");
    server.sendHeader("X-Content-Type-Options", "nosniff");
    server.send(status, "application/json; charset=utf-8", text);
}
void errorResponse(int status, const char *message)
{
    JsonDocument doc;
    doc["error"] = message;
    sendJson(status, doc);
}
bool authorized()
{
    if (server.header("X-Gateway-Token") == csrfToken) return true;
    errorResponse(403, "会话已失效，请刷新页面");
    return false;
}
void queueConfig(const Config &config)
{
    bool pending;
    portENTER_CRITICAL(&sharedMux);
    pending = applyState.pending || publishedReplay.pending;
    if (!pending) applyState.pending = true;
    portEXIT_CRITICAL(&sharedMux);
    if (pending) { errorResponse(409, "上一个配置仍在应用"); return; }
    Command command;
    command.config = config;
    if (!commands || !canTask || xQueueSend(commands, &command, 0) != pdTRUE)
    {
        portENTER_CRITICAL(&sharedMux);
        applyState.pending = false;
        portEXIT_CRITICAL(&sharedMux);
        errorResponse(503, "CAN 任务不可用");
        return;
    }
    xTaskNotifyGive(canTask);
    JsonDocument response;
    response["pending"] = true;
    sendJson(202, response);
}
void handleConfig()
{
    if (!authorized()) return;
    const String body = server.arg("plain");
    if (body.length() > 26000) { errorResponse(413, "配置过长"); return; }
    JsonDocument doc;
    if (deserializeJson(doc, body) || !doc.is<JsonObject>()) { errorResponse(400, "无效 JSON"); return; }
    const char *keys[] = {"forward_ids", "reverse_ids", "hardware_mode", "hardware_code", "hardware_mask"};
    for (const char *key : keys)
        if (!doc[key].is<const char *>()) { errorResponse(400, "缺少配置字符串字段"); return; }
    if (!doc["forward_enabled"].is<bool>() || !doc["reverse_enabled"].is<bool>())
    { errorResponse(400, "开关必须是布尔值"); return; }
    Config c;
    c.forwardEnabled = doc["forward_enabled"].as<bool>();
    c.reverseEnabled = doc["reverse_enabled"].as<bool>();
    const JsonString forward = doc["forward_ids"].as<JsonString>();
    const JsonString reverse = doc["reverse_ids"].as<JsonString>();
    if (!parseIds(forward.c_str(), forward.size(), c.forwardIds) || !parseIds(reverse.c_str(), reverse.size(), c.reverseIds))
    { errorResponse(400, "白名单只接受 0x000–0x7FF，按十六进制解析，空白/逗号/分号分隔"); return; }
    const JsonString mode = doc["hardware_mode"].as<JsonString>();
    if (mode.size() == 4 && memcmp(mode.c_str(), "auto", 4) == 0) c.hardwareMode = HardwareMode::Auto;
    else if (mode.size() == 3 && memcmp(mode.c_str(), "off", 3) == 0) c.hardwareMode = HardwareMode::Off;
    else if (mode.size() == 6 && memcmp(mode.c_str(), "manual", 6) == 0) c.hardwareMode = HardwareMode::Manual;
    else { errorResponse(400, "硬件模式必须是 auto/off/manual"); return; }
    const JsonString code = doc["hardware_code"].as<JsonString>();
    const JsonString mask = doc["hardware_mask"].as<JsonString>();
    if (!parseHexId(code.c_str(), code.size(), c.hardwareCode) || !parseHexId(mask.c_str(), mask.size(), c.hardwareMask))
    { errorResponse(400, "硬件 code/mask 必须为 0x000–0x7FF"); return; }
    if (!validConfig(c)) { errorResponse(400, "硬件掩码会过滤掉正向白名单 ID，请修改掩码或白名单"); return; }
    queueConfig(c);
}
void handleReplay()
{
    if (!authorized()) return;
    const String body = server.arg("plain");
    if (body.length() > 192) { errorResponse(413, "模拟配置过长"); return; }
    JsonDocument doc;
    if (deserializeJson(doc, body) || !doc.is<JsonObject>() || !doc["enabled"].is<bool>())
    { errorResponse(400, "模拟开关必须为布尔值"); return; }
    Command command;
    command.kind = doc["enabled"].as<bool>() ? CommandKind::ReplayStart : CommandKind::ReplayStop;
    if (command.kind == CommandKind::ReplayStart)
    {
        if (!doc["source"].is<unsigned>() || doc["source"].as<unsigned>() > 2 ||
            !doc["interval_us"].is<uint32_t>() || !doc["loop"].is<bool>())
        { errorResponse(400, "模拟来源、间隔或循环设置无效"); return; }
        command.replay.source = doc["source"].as<uint8_t>();
        command.replay.intervalUs = doc["interval_us"].as<uint32_t>();
        command.replay.loop = doc["loop"].as<bool>();
        if (!command.replay.valid()) { errorResponse(400, "模拟间隔范围为 357–1000000 微秒"); return; }
    }
    bool pending;
    portENTER_CRITICAL(&sharedMux);
    pending = applyState.pending || publishedReplay.pending;
    if (!pending) publishedReplay.pending = true;
    portEXIT_CRITICAL(&sharedMux);
    if (pending) { errorResponse(409, "上一条控制命令仍在应用"); return; }
    if (!commands || !canTask || xQueueSend(commands, &command, 0) != pdTRUE)
    {
        portENTER_CRITICAL(&sharedMux);
        publishedReplay.pending = false;
        portEXIT_CRITICAL(&sharedMux);
        errorResponse(503, "CAN 任务不可用"); return;
    }
    xTaskNotifyGive(canTask);
    JsonDocument response;
    response["pending"] = true;
    sendJson(202, response);
}
void handleWifi()
{
    if (!authorized()) return;
    const String body = server.arg("plain");
    if (body.length() > 1024) { errorResponse(413, "Wi-Fi 配置过长"); return; }
    JsonDocument doc;
    if (deserializeJson(doc, body) || !doc.is<JsonObject>() || !doc["action"].is<const char *>())
    { errorResponse(400, "无效 Wi-Fi 请求"); return; }
    if (gatewayWifi.pending() || gatewayWifi.isScanning())
    { errorResponse(409, "网络操作进行中，请稍后重试"); return; }
    const String action = doc["action"].as<String>();
    const char *error = nullptr;
    if (action == "connect")
    {
        if (!doc["ssid"].is<const char *>() || !doc["password"].is<const char *>())
        { errorResponse(400, "请提供 Wi-Fi 名称和密码（开放网络密码为空）"); return; }
        const JsonString ssid = doc["ssid"].as<JsonString>();
        const JsonString password = doc["password"].as<JsonString>();
        if (!WifiSettings::valid(ssid.c_str(), ssid.size(), password.c_str(), password.size()))
        { errorResponse(400, "SSID 为 1–32 字节；密码为空、8–63 字节或 64 位十六进制密钥"); return; }
        WifiSettings settings;
        memcpy(settings.ssid, ssid.c_str(), ssid.size());
        memcpy(settings.password, password.c_str(), password.size());
        error = gatewayWifi.connect(settings);
    }
    else if (action == "reconnect") error = gatewayWifi.reconnect();
    else if (action == "disconnect") error = gatewayWifi.disconnect(false);
    else if (action == "forget") error = gatewayWifi.disconnect(true);
    else { errorResponse(400, "未知 Wi-Fi 操作"); return; }
    if (error) { errorResponse(400, error); return; }
    JsonDocument response;
    response["pending"] = true;
    sendJson(202, response);
}
void handleStatus()
{
    Config config;
    Stats snapshot;
    ApplyState apply;
    ReplayStatus replay;
    portENTER_CRITICAL(&sharedMux);
    config = publishedConfig; snapshot = publishedStats; apply = applyState;
    replay = publishedReplay;
    portEXIT_CRITICAL(&sharedMux);
    CaptureFilter captureSnapshot;
    uint32_t captureRevisionSnapshot;
    portENTER_CRITICAL(&logMux);
    captureSnapshot = captureFilter;
    captureRevisionSnapshot = captureRevision;
    portEXIT_CRITICAL(&logMux);
    JsonDocument doc;
    doc["version"] = kVersion; doc["token"] = csrfToken;
    doc["uptime_ms"] = static_cast<uint64_t>(esp_timer_get_time()) / 1000;
    doc["bitrate"] = 500000; doc["mcp_clock_mhz"] = GATEWAY_MCP_CLOCK_MHZ;
    doc["free_heap"] = ESP.getFreeHeap();
    gatewayWifi.addStatus(doc["wifi"].to<JsonObject>());
    JsonObject capture = doc["capture"].to<JsonObject>();
    capture["available"] = captureRecords != nullptr;
    capture["revision"] = captureRevisionSnapshot;
    capture["bus"] = captureSnapshot.bus;
    capture["result"] = captureSnapshot.result;
    capture["id"] = captureSnapshot.hasId ? hexValue(captureSnapshot.id, captureSnapshot.id > 0x7FF ? 8 : 3) : String();
    addConfig(doc["config"].to<JsonObject>(), config);
    JsonObject a = doc["apply"].to<JsonObject>();
    a["revision"] = apply.revision; a["pending"] = apply.pending;
    a["ok"] = apply.ok; a["saved"] = apply.saved; a["message"] = apply.message;
    JsonArray directions = doc["directions"].to<JsonArray>();
    for (const auto &s : snapshot.dirs)
    {
        JsonObject o = directions.add<JsonObject>();
        o["rx"] = s.rx; o["submitted"] = s.submitted; o["sent"] = s.sent;
        o["blocked"] = s.blocked; o["unsupported"] = s.unsupported;
        o["busy"] = s.busy; o["failed"] = s.failed; o["expired"] = s.expired; o["canceled"] = s.canceled;
    }
    JsonObject sim = doc["replay"].to<JsonObject>();
    sim["running"] = replay.cursor.running; sim["pending"] = replay.pending;
    sim["ok"] = replay.ok; sim["message"] = replay.message; sim["revision"] = replay.revision;
    sim["source"] = replay.cursor.options.source; sim["interval_us"] = replay.cursor.options.intervalUs;
    sim["loop"] = replay.cursor.options.loop; sim["position"] = replay.cursor.position;
    sim["cycles"] = replay.cursor.cycles; sim["total"] = REPLAY_FRAME_COUNT + 1;
    sim["processed"] = snapshot.replay.rx; sim["submitted"] = snapshot.replay.submitted;
    sim["sent"] = snapshot.replay.sent; sim["blocked"] = snapshot.replay.blocked + snapshot.replay.unsupported;
    sim["busy"] = snapshot.replay.busy; sim["failed"] = snapshot.replay.failed;
    sim["expired"] = snapshot.replay.expired; sim["canceled"] = snapshot.replay.canceled;
    JsonObject t = doc["twai"].to<JsonObject>();
    t["ready"] = snapshot.twaiReady; t["state"] = snapshot.twaiState;
    t["rec"] = snapshot.twaiRec; t["tec"] = snapshot.twaiTec;
    t["missed"] = snapshot.twaiMissed; t["overruns"] = snapshot.twaiOverruns;
    t["bus_errors"] = snapshot.twaiBusErrors; t["recoveries"] = snapshot.twaiRecoveries;
    JsonObject m = doc["mcp"].to<JsonObject>();
    m["ready"] = snapshot.mcpReady; m["flags"] = snapshot.mcpFlags;
    m["rec"] = snapshot.mcpRec; m["tec"] = snapshot.mcpTec;
    m["overflow_events"] = snapshot.mcpOverflows; m["read_errors"] = snapshot.mcpReadErrors;
    sendJson(200, doc);
}
bool parseCursor(const String &value, uint64_t &out)
{
    if (!value.length()) { out = 0; return true; }
    if (value.length() > 16) return false;
    uint64_t n = 0;
    for (size_t i = 0; i < value.length(); ++i)
    {
        if (value[i] < '0' || value[i] > '9') return false;
        n = n * 10 + value[i] - '0';
        if (n > 9007199254740991ULL) return false;
    }
    out = n; return true;
}
bool parseCaptureId(const char *value, uint32_t &out)
{
    if (!value) return false;
    if (value[0] == '0' && (value[1] == 'x' || value[1] == 'X')) value += 2;
    if (!*value) return false;
    uint32_t id = 0;
    size_t digits = 0;
    while (*value)
    {
        const char c = *value++;
        const int digit = c >= '0' && c <= '9' ? c - '0' :
                          c >= 'a' && c <= 'f' ? c - 'a' + 10 :
                          c >= 'A' && c <= 'F' ? c - 'A' + 10 : -1;
        if (digit < 0 || ++digits > 8) return false;
        id = (id << 4) | digit;
    }
    out = id;
    return id <= 0x1FFFFFFF;
}
void handleCaptureFilter()
{
    if (!authorized()) return;
    const String body = server.arg("plain");
    if (body.length() > 128) { errorResponse(413, "筛选条件过长"); return; }
    JsonDocument doc;
    if (deserializeJson(doc, body) || !doc.is<JsonObject>() ||
        !doc["bus"].is<int>() || !doc["result"].is<int>() || !doc["id"].is<const char *>())
    { errorResponse(400, "无效抓包筛选条件"); return; }
    const int bus = doc["bus"].as<int>();
    const int result = doc["result"].as<int>();
    if (bus < 0 || bus > 3 || result < 0 || result > 3)
    { errorResponse(400, "无效抓包筛选条件"); return; }
    CaptureFilter filter;
    filter.bus = static_cast<uint8_t>(bus);
    filter.result = static_cast<uint8_t>(result);
    const char *id = doc["id"].as<const char *>();
    filter.hasId = *id != '\0';
    if (filter.hasId && !parseCaptureId(id, filter.id))
    { errorResponse(400, "ID 必须为 0x000–0x1FFFFFFF 的十六进制值"); return; }
    if (!filter.valid()) { errorResponse(400, "无效抓包筛选条件"); return; }
    if (filter.active() && !captureRecords)
    { errorResponse(503, "筛选缓存不可用，请检查 PSRAM"); return; }
    uint32_t revision;
    portENTER_CRITICAL(&logMux);
    captureFilter = filter;
    captureNext = 1;
    captureStartSeq = nextSeq;
    revision = ++captureRevision;
    portEXIT_CRITICAL(&logMux);
    JsonDocument response;
    response["revision"] = revision;
    response["capacity"] = filter.active() ? kCaptureCapacity : kLogCapacity;
    sendJson(200, response);
}
void handleFrames()
{
    uint64_t after;
    if (!parseCursor(server.arg("after"), after)) { errorResponse(400, "无效 after 序号"); return; }
    // 静态响应快照只由 Web loop 使用；不在栈上分配 128 条记录。
    static Record batch[kLogBatch];
    size_t count = 0;
    uint64_t lost = 0, latest = 0, oldest = 0, next = 0;
    uint32_t revision = 0;
    bool filtered = false;
    portENTER_CRITICAL(&logMux);
    filtered = captureFilter.active() && captureRecords;
    revision = captureRevision;
    latest = filtered ? captureNext - 1 : nextSeq - 1;
    oldest = filtered ? (captureNext > kCaptureCapacity ? captureNext - kCaptureCapacity : 1) :
                        (nextSeq > kLogCapacity ? nextSeq - kLogCapacity : 1);
    if (after > latest) after = 0; // 浏览器跨重启恢复。
    if (after + 1 < oldest) { lost = oldest - after - 1; after = oldest - 1; }
    for (uint64_t seq = after + 1; seq <= latest && count < kLogBatch; ++seq)
    {
        const Record &r = filtered ? captureRecords[(seq - 1) % kCaptureCapacity].record :
                                     records[(seq - 1) % kLogCapacity];
        // 不向客户端发送未完成记录，避免页面永远显示 pending 而漏掉最终结果。
        if (!filtered && r.outcome == Pending) break;
        batch[count++] = r;
        next = seq;
    }
    portEXIT_CRITICAL(&logMux);
    JsonDocument doc;
    doc["token"] = csrfToken; // 让抓包轮询在 status 刷新前也能识别设备重启。
    doc["next"] = count ? next : after;
    doc["latest"] = latest; doc["oldest"] = oldest; doc["lost"] = lost;
    doc["capacity"] = filtered ? kCaptureCapacity : kLogCapacity;
    doc["revision"] = revision;
    JsonArray array = doc["frames"].to<JsonArray>();
    for (size_t i = 0; i < count; ++i)
    {
        const Record &r = batch[i];
        JsonObject f = array.add<JsonObject>();
        f["seq"] = r.seq; f["us"] = r.us; f["bus"] = r.bus;
        f["id"] = hexValue(r.id, r.flags & 1 ? 8 : 3);
        f["dlc"] = r.dlc; f["flags"] = r.flags; f["result"] = kOutcomeNames[r.outcome];
        String bytes;
        for (uint8_t j = 0; !(r.flags & 2) && j < r.dlc && j < 8; ++j)
        {
            if (j) bytes += ' ';
            char byte[3]; snprintf(byte, sizeof(byte), "%02X", r.data[j]); bytes += byte;
        }
        f["data"] = bytes;
    }
    sendJson(200, doc);
}
void startWeb()
{
    snprintf(csrfToken, sizeof(csrfToken), "%08lx%08lx%08lx%08lx",
        static_cast<unsigned long>(esp_random()), static_cast<unsigned long>(esp_random()),
        static_cast<unsigned long>(esp_random()), static_cast<unsigned long>(esp_random()));
    const char *headers[] = {"X-Gateway-Token"};
    server.collectHeaders(headers, 1);
    server.on("/", HTTP_GET, [] {
        server.sendHeader("Cache-Control", "no-store");
        server.sendHeader("X-Frame-Options", "DENY");
        server.send_P(200, "text/html; charset=utf-8", kGatewayHtml);
    });
    server.on("/api/status", HTTP_GET, handleStatus);
    server.on("/api/frames", HTTP_GET, handleFrames);
    server.on("/api/capture-filter", HTTP_POST, handleCaptureFilter);
    server.on("/api/config", HTTP_POST, handleConfig);
    server.on("/api/replay", HTTP_POST, handleReplay);
    server.on("/api/wifi", HTTP_POST, handleWifi);
    server.on("/api/wifi/scan", HTTP_POST, [] {
        if (!authorized()) return;
        const char *error = gatewayWifi.scan();
        if (error) { errorResponse(409, error); return; }
        JsonDocument response;
        gatewayWifi.addScan(response);
        sendJson(202, response);
    });
    server.on("/api/wifi/scan", HTTP_GET, [] {
        JsonDocument response;
        gatewayWifi.addScan(response);
        sendJson(200, response);
    });
    server.on("/api/defaults", HTTP_POST, [] { if (authorized()) queueConfig(defaults()); });
    server.on("/api/stop", HTTP_POST, [] {
        if (!authorized()) return;
        Config c;
        portENTER_CRITICAL(&sharedMux); c = publishedConfig; portEXIT_CRITICAL(&sharedMux);
        c.forwardEnabled = c.reverseEnabled = 0;
        queueConfig(c);
    });
    server.onNotFound([] { errorResponse(404, "接口不存在"); });
    server.begin();
}
} // namespace

void setup()
{
    Serial.begin(921600);
    captureRecords = static_cast<CaptureEntry *>(heap_caps_malloc(sizeof(CaptureEntry) * kCaptureCapacity, MALLOC_CAP_SPIRAM));
    if (!captureRecords) Serial.println("CAN monitor filter disabled: PSRAM allocation failed");
    activeConfig = loadConfig(); publishedConfig = activeConfig;
    commands = xQueueCreate(1, sizeof(Command));
    if (!commands || xTaskCreatePinnedToCore(canLoop, "can_gateway", 6144, nullptr, 10, &canTask, 1) != pdPASS)
    {
        canTask = nullptr;
        activeConfig.forwardEnabled = activeConfig.reverseEnabled = 0;
        publishedConfig = activeConfig;
        applyState.ok = false;
        snprintf(applyState.message, sizeof(applyState.message), "CAN 任务创建失败，禁止转发");
    }
    const bool apOk = gatewayWifi.begin(GATEWAY_AP_SSID, GATEWAY_AP_PASSWORD);
    startWeb();
    Serial.printf("CAN gateway v%s, TWAI(B) <-> MCP2515(A), 500 kbit/s\n", kVersion);
    Serial.printf("AP %s: %s, http://%s\n", GATEWAY_AP_SSID, apOk ? "ready" : "FAILED", WiFi.softAPIP().toString().c_str());
}
void loop()
{
    gatewayWifi.service();
    server.handleClient();
    delay(1);
}
#endif
