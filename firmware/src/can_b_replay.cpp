#include "can_helpers.h"
#include "drivers/mcp2515_driver.h"
#include "drivers/twai_driver.h"
#include "pin_config.h"
#include <Arduino.h>
#include <SPI.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// 使用方式 python3 scripts/filter_replay.py && ./compile.sh -e can_b_replay -u -m

#include "replay_frames.h"

namespace
{
constexpr uint8_t BUS_A = 0;
constexpr uint8_t BUS_B = 1;
constexpr uint8_t CAPTURE_A = 1U << BUS_A;
constexpr uint8_t CAPTURE_B = 1U << BUS_B;
constexpr uint8_t CAPTURE_ALL = CAPTURE_A | CAPTURE_B;
constexpr size_t MAX_BLOCKED_REPLAY_FRAMES = 32;
constexpr size_t COMMAND_BUFFER_SIZE = 128;
constexpr uint32_t SEAT_BENCH_PERIOD_US = 100000;

struct BlockedReplayFrame
{
  uint32_t id;
  uint8_t bus;
};

TWAIDriver canB(static_cast<gpio_num_t>(CAN_TX),
                static_cast<gpio_num_t>(CAN_RX));
MCP2515Driver canA(MCP2515_CS, MCP2515_RST, MCP2515_SCLK, MCP2515_MISO,
                   MCP2515_MOSI, &SPI, 10000000);

uint32_t replayIndex = 0;
uint32_t lastReplayUs = 0;
uint8_t captureBusMask = 0;
BlockedReplayFrame blockedReplayFrames[MAX_BLOCKED_REPLAY_FRAMES] = {};
size_t blockedReplayFrameCount = 0;
char commandBuffer[COMMAND_BUFFER_SIZE] = {};
size_t commandLength = 0;
bool commandOverflow = false;
bool canAReady = false;
bool canBReady = false;
bool replayEnabled = true;
bool seatBenchEnabled = false;
bool seatBenchSavedReplay = true;
uint8_t seatBenchSavedCapture = 0;
uint32_t seatBenchLastSendUs = 0;
uint32_t seatBenchTxCount = 0;

const char *busName(uint8_t bus)
{
  return bus == BUS_A ? "A" : "B";
}

bool equalsIgnoreCase(const char *left, const char *right)
{
  if (!left || !right)
    return false;

  while (*left && *right)
  {
    if (toupper(static_cast<unsigned char>(*left)) !=
        toupper(static_cast<unsigned char>(*right)))
      return false;
    ++left;
    ++right;
  }
  return *left == '\0' && *right == '\0';
}

bool parseBus(const char *token, uint8_t &bus)
{
  if (equalsIgnoreCase(token, "A") || equalsIgnoreCase(token, "CAN_A") ||
      equalsIgnoreCase(token, "0"))
  {
    bus = BUS_A;
    return true;
  }
  if (equalsIgnoreCase(token, "B") || equalsIgnoreCase(token, "CAN_B") ||
      equalsIgnoreCase(token, "1"))
  {
    bus = BUS_B;
    return true;
  }
  return false;
}

bool parseHexValue(const char *token, uint32_t maxValue, uint32_t &value)
{
  if (!token || *token == '\0')
    return false;

  const char *digits = token;
  if (digits[0] == '0' && (digits[1] == 'x' || digits[1] == 'X'))
    digits += 2;
  if (*digits == '\0')
    return false;

  for (const char *p = digits; *p; ++p)
  {
    if (!isxdigit(static_cast<unsigned char>(*p)))
      return false;
  }

  char *end = nullptr;
  const unsigned long parsed = strtoul(digits, &end, 16);
  if (!end || *end != '\0' || parsed > maxValue)
    return false;
  value = static_cast<uint32_t>(parsed);
  return true;
}

bool parseCanId(const char *token, uint32_t &id)
{
  return parseHexValue(token, 0x7FF, id);
}

bool parseDataByte(const char *token, uint8_t &value)
{
  uint32_t parsed = 0;
  if (!parseHexValue(token, 0xFF, parsed))
    return false;
  value = static_cast<uint8_t>(parsed);
  return true;
}

void printFrame(uint8_t bus, const CanFrame &frame)
{
  Serial.printf("RX %lu %s %03lX %u ",
                static_cast<unsigned long>(micros()), busName(bus),
                static_cast<unsigned long>(frame.id), frame.dlc);
  for (uint8_t i = 0; i < frame.dlc && i < 8; ++i)
    Serial.printf("%02X", frame.data[i]);
  Serial.println();
}

bool isReplayBlocked(uint8_t bus, uint32_t id)
{
  for (size_t i = 0; i < blockedReplayFrameCount; ++i)
  {
    if (blockedReplayFrames[i].bus == bus && blockedReplayFrames[i].id == id)
      return true;
  }
  return false;
}

void printHelp()
{
  Serial.println("OK HELP");
  Serial.println("  CAPTURE OFF|ON|ALL|A|B|STATUS");
  Serial.println("  SEND <A|B> <HEX_ID> [HEX_BYTE ... up to 8]");
  Serial.println("  BLOCK ADD <A|B> <HEX_ID>");
  Serial.println("  BLOCK REMOVE <A|B> <HEX_ID>");
  Serial.println("  BLOCK CLEAR");
  Serial.println("  BLOCK LIST");
  Serial.println("  REPLAY ON|OFF|STATUS");
  Serial.println("  BENCH SEAT ON|OFF|STATUS");
  Serial.println("  STATUS");
}

void printReplayStatus()
{
  Serial.printf("OK REPLAY %s\n", replayEnabled ? "ON" : "OFF");
}

void handleReplayCommand(char *savePtr)
{
  const char *mode = strtok_r(nullptr, " \t", &savePtr);
  if (!mode)
  {
    Serial.println("ERR USAGE REPLAY ON|OFF|STATUS");
    return;
  }
  if (seatBenchEnabled && !equalsIgnoreCase(mode, "STATUS"))
  {
    Serial.println("ERR BENCH_SEAT_ACTIVE");
    return;
  }
  if (equalsIgnoreCase(mode, "ON"))
    replayEnabled = true;
  else if (equalsIgnoreCase(mode, "OFF"))
    replayEnabled = false;
  else if (!equalsIgnoreCase(mode, "STATUS"))
  {
    Serial.println("ERR REPLAY_MODE");
    return;
  }
  // Never catch up missed slots when replay resumes.
  lastReplayUs = micros();
  printReplayStatus();
}

void printCaptureStatus()
{
  const char *mode = "OFF";
  if (captureBusMask == CAPTURE_ALL)
    mode = "ALL";
  else if (captureBusMask == CAPTURE_A)
    mode = "A";
  else if (captureBusMask == CAPTURE_B)
    mode = "B";
  Serial.printf("OK CAPTURE %s\n", mode);
}

void handleCaptureCommand(char *savePtr)
{
  const char *mode = strtok_r(nullptr, " \t", &savePtr);
  if (!mode)
  {
    Serial.println("ERR USAGE CAPTURE OFF|ON|ALL|A|B|STATUS");
    return;
  }
  if (seatBenchEnabled && !equalsIgnoreCase(mode, "STATUS"))
  {
    Serial.println("ERR BENCH_SEAT_ACTIVE");
    return;
  }

  if (equalsIgnoreCase(mode, "OFF"))
    captureBusMask = 0;
  else if (equalsIgnoreCase(mode, "ON") || equalsIgnoreCase(mode, "ALL"))
    captureBusMask = CAPTURE_ALL;
  else if (equalsIgnoreCase(mode, "A") || equalsIgnoreCase(mode, "CAN_A"))
    captureBusMask = CAPTURE_A;
  else if (equalsIgnoreCase(mode, "B") || equalsIgnoreCase(mode, "CAN_B"))
    captureBusMask = CAPTURE_B;
  else if (!equalsIgnoreCase(mode, "STATUS"))
  {
    Serial.println("ERR CAPTURE_MODE");
    return;
  }
  printCaptureStatus();
}

void handleSendCommand(char *savePtr)
{
  const char *busToken = strtok_r(nullptr, " \t", &savePtr);
  const char *idToken = strtok_r(nullptr, " \t", &savePtr);
  uint8_t bus = 0;
  uint32_t id = 0;
  if (!parseBus(busToken, bus) || !parseCanId(idToken, id))
  {
    Serial.println("ERR USAGE SEND <A|B> <HEX_ID> [HEX_BYTE ... up to 8]");
    return;
  }

  CanFrame frame = {};
  frame.id = id;
  frame.dlc = 0;
  const char *dataToken = nullptr;
  while ((dataToken = strtok_r(nullptr, " \t", &savePtr)) != nullptr)
  {
    if (frame.dlc >= 8)
    {
      Serial.println("ERR TOO_MANY_DATA_BYTES");
      return;
    }
    if (!parseDataByte(dataToken, frame.data[frame.dlc]))
    {
      Serial.println("ERR INVALID_DATA_BYTE");
      return;
    }
    ++frame.dlc;
  }

  bool sent = false;
  if (bus == BUS_A && canAReady)
    sent = canA.trySend(frame);
  else if (bus == BUS_B && canBReady)
    sent = canB.trySend(frame, pdMS_TO_TICKS(2));

  if (sent)
    Serial.printf("OK SEND %s %03lX %u\n", busName(bus),
                  static_cast<unsigned long>(frame.id), frame.dlc);
  else
    Serial.printf("ERR SEND_FAILED %s %03lX\n", busName(bus),
                  static_cast<unsigned long>(frame.id));
}

void printBlockedReplayFrames()
{
  Serial.printf("OK BLOCK LIST %u\n",
                static_cast<unsigned int>(blockedReplayFrameCount));
  for (size_t i = 0; i < blockedReplayFrameCount; ++i)
  {
    Serial.printf("BLOCK %s %03lX\n", busName(blockedReplayFrames[i].bus),
                  static_cast<unsigned long>(blockedReplayFrames[i].id));
  }
  Serial.println("OK BLOCK LIST END");
}

void handleBlockAdd(char *savePtr)
{
  const char *busToken = strtok_r(nullptr, " \t", &savePtr);
  const char *idToken = strtok_r(nullptr, " \t", &savePtr);
  uint8_t bus = 0;
  uint32_t id = 0;
  if (!parseBus(busToken, bus) || !parseCanId(idToken, id))
  {
    Serial.println("ERR USAGE BLOCK ADD <A|B> <HEX_ID>");
    return;
  }
  if (isReplayBlocked(bus, id))
  {
    Serial.printf("OK BLOCK EXISTS %s %03lX\n", busName(bus),
                  static_cast<unsigned long>(id));
    return;
  }
  if (blockedReplayFrameCount >= MAX_BLOCKED_REPLAY_FRAMES)
  {
    Serial.println("ERR BLOCK_TABLE_FULL");
    return;
  }

  blockedReplayFrames[blockedReplayFrameCount++] = {id, bus};
  Serial.printf("OK BLOCK ADD %s %03lX\n", busName(bus),
                static_cast<unsigned long>(id));
}

void handleBlockRemove(char *savePtr)
{
  const char *busToken = strtok_r(nullptr, " \t", &savePtr);
  const char *idToken = strtok_r(nullptr, " \t", &savePtr);
  uint8_t bus = 0;
  uint32_t id = 0;
  if (!parseBus(busToken, bus) || !parseCanId(idToken, id))
  {
    Serial.println("ERR USAGE BLOCK REMOVE <A|B> <HEX_ID>");
    return;
  }

  for (size_t i = 0; i < blockedReplayFrameCount; ++i)
  {
    if (blockedReplayFrames[i].bus == bus && blockedReplayFrames[i].id == id)
    {
      blockedReplayFrames[i] = blockedReplayFrames[blockedReplayFrameCount - 1];
      --blockedReplayFrameCount;
      Serial.printf("OK BLOCK REMOVE %s %03lX\n", busName(bus),
                    static_cast<unsigned long>(id));
      return;
    }
  }
  Serial.printf("ERR BLOCK_NOT_FOUND %s %03lX\n", busName(bus),
                static_cast<unsigned long>(id));
}

void handleBlockCommand(char *savePtr)
{
  const char *operation = strtok_r(nullptr, " \t", &savePtr);
  if (equalsIgnoreCase(operation, "ADD"))
    handleBlockAdd(savePtr);
  else if (equalsIgnoreCase(operation, "REMOVE") ||
           equalsIgnoreCase(operation, "DEL"))
    handleBlockRemove(savePtr);
  else if (equalsIgnoreCase(operation, "CLEAR"))
  {
    blockedReplayFrameCount = 0;
    Serial.println("OK BLOCK CLEAR");
  }
  else if (equalsIgnoreCase(operation, "LIST"))
    printBlockedReplayFrames();
  else
    Serial.println("ERR USAGE BLOCK ADD|REMOVE|CLEAR|LIST");
}

bool sendSeatBenchSpeed()
{
  CanFrame frame = {};
  frame.id = 0x257;
  frame.dlc = 8;
  if (!canBReady || !canB.trySend(frame, pdMS_TO_TICKS(2)))
    return false;
  ++seatBenchTxCount;
  seatBenchLastSendUs = micros();
  return true;
}

void printSeatBenchStatus()
{
  Serial.printf("OK BENCH SEAT %s interval_ms=100 bus=B id=257 tx_count=%lu\n",
                seatBenchEnabled ? "ON" : "OFF",
                static_cast<unsigned long>(seatBenchTxCount));
}

void stopSeatBench(bool report)
{
  if (seatBenchEnabled)
  {
    seatBenchEnabled = false;
    replayEnabled = seatBenchSavedReplay;
    captureBusMask = seatBenchSavedCapture;
    lastReplayUs = micros();
  }
  if (report)
    printSeatBenchStatus();
}

bool startSeatBench(bool report)
{
  if (seatBenchEnabled)
  {
    if (report)
      printSeatBenchStatus();
    return true;
  }
  if (!canBReady)
  {
    if (report)
      Serial.println("ERR BENCH_SEAT_CAN_B_NOT_READY");
    return false;
  }

  seatBenchSavedReplay = replayEnabled;
  seatBenchSavedCapture = captureBusMask;
  replayEnabled = false;
  captureBusMask = CAPTURE_B;
  lastReplayUs = micros();
  seatBenchTxCount = 0;
  seatBenchLastSendUs = 0;
  seatBenchEnabled = true;
  if (!sendSeatBenchSpeed())
  {
    stopSeatBench(false);
    if (report)
      Serial.println("ERR BENCH_SEAT_SEND_FAILED");
    return false;
  }
  if (report)
    printSeatBenchStatus();
  return true;
}

void handleSeatBenchCommand(char *savePtr)
{
  const char *mode = strtok_r(nullptr, " \t", &savePtr);
  const char *extra = strtok_r(nullptr, " \t", &savePtr);
  if (!mode || extra)
  {
    Serial.println("ERR USAGE BENCH SEAT ON|OFF|STATUS");
    return;
  }
  if (equalsIgnoreCase(mode, "STATUS"))
  {
    printSeatBenchStatus();
    return;
  }
  if (equalsIgnoreCase(mode, "OFF"))
  {
    stopSeatBench(true);
    return;
  }
  if (!equalsIgnoreCase(mode, "ON"))
  {
    Serial.println("ERR BENCH_SEAT_MODE");
    return;
  }
  startSeatBench(true);
}

void handleBenchCommand(char *savePtr)
{
  const char *profile = strtok_r(nullptr, " \t", &savePtr);
  if (!equalsIgnoreCase(profile, "SEAT"))
  {
    Serial.println("ERR USAGE BENCH SEAT ON|OFF|STATUS");
    return;
  }
  handleSeatBenchCommand(savePtr);
}

void printStatus()
{
  Serial.printf("OK STATUS can_a=%s can_b=%s capture_mask=%u blocks=%u replay=%s bench_seat=%s bench_tx=%lu replay_index=%lu\n",
                canAReady ? "READY" : "FAILED",
                canBReady ? "READY" : "FAILED", captureBusMask,
                static_cast<unsigned int>(blockedReplayFrameCount),
                replayEnabled ? "ON" : "OFF",
                seatBenchEnabled ? "ON" : "OFF",
                static_cast<unsigned long>(seatBenchTxCount),
                static_cast<unsigned long>(replayIndex));
}

void handleCommand(char *line)
{
  char *savePtr = nullptr;
  const char *command = strtok_r(line, " \t", &savePtr);
  if (!command)
    return;

  if (equalsIgnoreCase(command, "HELP") || equalsIgnoreCase(command, "?"))
    printHelp();
  else if (equalsIgnoreCase(command, "CAPTURE"))
    handleCaptureCommand(savePtr);
  else if (equalsIgnoreCase(command, "SEND"))
    handleSendCommand(savePtr);
  else if (equalsIgnoreCase(command, "BLOCK"))
    handleBlockCommand(savePtr);
  else if (equalsIgnoreCase(command, "REPLAY"))
    handleReplayCommand(savePtr);
  else if (equalsIgnoreCase(command, "BENCH"))
    handleBenchCommand(savePtr);
  else if (equalsIgnoreCase(command, "STATUS"))
    printStatus();
  else
    Serial.println("ERR UNKNOWN_COMMAND (send HELP)");
}

void pollSerialCommands()
{
  while (Serial.available() > 0)
  {
    const char incoming = static_cast<char>(Serial.read());
    if (incoming == '\r')
      continue;
    if (incoming == '\n')
    {
      if (commandOverflow)
        Serial.println("ERR COMMAND_TOO_LONG");
      else if (commandLength > 0)
      {
        commandBuffer[commandLength] = '\0';
        handleCommand(commandBuffer);
      }
      commandLength = 0;
      commandOverflow = false;
      continue;
    }

    if (commandLength + 1 < COMMAND_BUFFER_SIZE)
      commandBuffer[commandLength++] = incoming;
    else
      commandOverflow = true;
  }
}

void sendNextReplayFrame()
{
  if (!replayEnabled)
  {
    lastReplayUs = micros();
    return;
  }
  if (lastReplayUs == 0)
  {
    lastReplayUs = micros();
    return;
  }

  int framesProcessedThisLoop = 0;
  // 每轮最多处理 10 个时间槽，避免回放积压阻塞收包和串口命令。
  while (micros() - lastReplayUs >= 500 && framesProcessedThisLoop < 10)
  {
    if (replayIndex >= REPLAY_FRAME_COUNT)
    {
      replayIndex = 0;
      Serial.println("INFO REPLAY LOOP");
    }

    ReplayFrame replay;
    memcpy_P(&replay, &REPLAY_FRAMES[replayIndex], sizeof(replay));

    if (!isReplayBlocked(replay.bus, replay.id))
    {
      CanFrame frame = {};
      frame.id = replay.id;
      frame.dlc = replay.dlc <= 8 ? replay.dlc : 8;
      memcpy(frame.data, replay.data, sizeof(frame.data));

      if (replay.bus == BUS_A)
        canA.send(frame);
      else if (replay.bus == BUS_B)
        canB.send(frame);
    }

    ++replayIndex;
    lastReplayUs += 500;
    ++framesProcessedThisLoop;
  }

  if (micros() - lastReplayUs > 5000)
    lastReplayUs = micros();
}

void serviceSeatBench()
{
  if (!seatBenchEnabled)
    return;
  const uint32_t now = micros();
  if (now - seatBenchLastSendUs < SEAT_BENCH_PERIOD_US)
    return;
  if (!sendSeatBenchSpeed())
  {
    stopSeatBench(false);
    Serial.println("ERR BENCH_SEAT_SEND_FAILED restored_previous_state=1");
  }
}

void readCan(uint8_t bus)
{
  CanFrame frame;
  CanDriver &driver = bus == BUS_A ? static_cast<CanDriver &>(canA)
                                   : static_cast<CanDriver &>(canB);
  while (driver.read(frame))
  {
    if ((captureBusMask & (1U << bus)) != 0)
      printFrame(bus, frame);
  }
}
} // namespace

void setup()
{
  Serial.begin(921600);
  delay(1000);
  setCanTxEnabled(true);

  canBReady = canB.init();
  if (!canBReady)
    Serial.println("ERR CAN_B_INIT_FAILED");
  else
  {
    canBReady = canB.setBusMode(CanBusMode::Normal);
    canB.setFilters(nullptr, 0);
  }

  SPI.begin(MCP2515_SCLK, MCP2515_MISO, MCP2515_MOSI, MCP2515_CS);
  canAReady = canA.init();
  if (!canAReady)
    Serial.println("ERR CAN_A_INIT_FAILED");
  else
  {
    canAReady = canA.setBusMode(CanBusMode::Normal);
    canA.setFilters(nullptr, 0);
  }

  startSeatBench(false);
  Serial.printf("READY CAN_REPLAY frames=%lu baud=921600 capture=%s blocks=0 replay=%s bench_seat=%s\n",
                static_cast<unsigned long>(REPLAY_FRAME_COUNT),
                captureBusMask == CAPTURE_B ? "B" : "OFF",
                replayEnabled ? "ON" : "OFF",
                seatBenchEnabled ? "ON" : "OFF");
  printSeatBenchStatus();
  Serial.println("INFO Send HELP for commands");
}

void loop()
{
  pollSerialCommands();
  serviceSeatBench();
  sendNextReplayFrame();
  readCan(BUS_A);
  readCan(BUS_B);
}
