/* Firmware entry: 0x4802a0e2 */

void FUN_ram_4802a0e2(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 3) {
    FUN_ram_4802a086(&DAT_ram_4ff5ba58);
    return;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      FUN_ram_4802a086(&DAT_ram_4ff5baf0);
      return;
    }
    if (param_1 == 2) {
      FUN_ram_4802a086(&DAT_ram_4ff5baa4);
      return;
    }
    if (param_1 == 0) {
      FUN_ram_4802a086(&DAT_ram_4ff5bb3c);
      return;
    }
  }
  else {
    if (param_1 == 4) {
      FUN_ram_4802a086(&DAT_ram_4ff5ba0c);
      return;
    }
    if (param_1 == 5) {
      FUN_ram_4802a086(&DAT_ram_4ff5b9c0);
      return;
    }
  }
  uVar3 = FUN_ram_4ff21a0a();
  uVar1 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                          );
  uVar2 = __udivdi3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): hal_uart_notify_pins_detached: UART%d not handled!\r\n",
                   uVar2,uVar1,0x55,"hal_uart_notify_pins_detached",param_1);
  return;
}


