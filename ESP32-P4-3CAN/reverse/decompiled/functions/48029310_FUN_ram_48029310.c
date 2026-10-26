/* Firmware entry: 0x48029310 */

undefined4 FUN_ram_48029310(int param_1)

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
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): baud rate detection this SoC is not supported.\r\n",
                     uVar2,uVar1,0x5e2,"uartDetectBaudrate");
    return 0;
  }
  return 0;
}


