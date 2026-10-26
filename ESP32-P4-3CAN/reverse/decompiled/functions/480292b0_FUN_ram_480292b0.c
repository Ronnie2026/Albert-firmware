/* Firmware entry: 0x480292b0 */

void FUN_ram_480292b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    uVar3 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar2 = __udivdi3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): baud rate detection for this SoC is not supported.\r\n",
                     uVar2,uVar1,0x5aa,"uartStartDetectBaudrate");
    return;
  }
  return;
}


