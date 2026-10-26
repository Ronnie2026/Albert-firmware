/* Firmware entry: 0x48029376 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_48029376(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    if (param_1 == 0) {
      puVar3 = &DAT_ram_500ca000;
      uVar4 = _DAT_ram_500ca020 >> 2 & 3;
      uVar5 = _DAT_ram_500ca020 >> 4 & 3;
    }
    else if (param_1 == 1) {
      puVar3 = &DAT_ram_500cb000;
      uVar4 = _DAT_ram_500cb020 >> 2 & 3;
      uVar5 = _DAT_ram_500cb020 >> 4 & 3;
    }
    else if (param_1 == 2) {
      puVar3 = &DAT_ram_500cc000;
      uVar4 = _DAT_ram_500cc020 >> 2 & 3;
      uVar5 = _DAT_ram_500cc020 >> 4 & 3;
    }
    else if (param_1 == 3) {
      puVar3 = &DAT_ram_500cd000;
      uVar4 = _DAT_ram_500cd020 >> 2 & 3;
      uVar5 = _DAT_ram_500cd020 >> 4 & 3;
    }
    else if (param_1 == 4) {
      puVar3 = &DAT_ram_500ce000;
      uVar4 = _DAT_ram_500ce020 >> 2 & 3;
      uVar5 = _DAT_ram_500ce020 >> 4 & 3;
    }
    else {
      puVar3 = (undefined1 *)0x50121000;
      uVar4 = _DAT_ram_50121020 >> 2 & 3;
      uVar5 = _DAT_ram_50121020 >> 4 & 3;
    }
    return 0x3ff / ((uint)(1 < uVar5) + uVar4 + ((*(uint *)(puVar3 + 0x20) >> 1 & 1) != 0) + 7);
  }
  uVar6 = FUN_ram_4ff21a0a();
  uVar1 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                          );
  uVar2 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d is invalid. This device has %d UARTs, from 0 to %d.\r\n"
                   ,uVar2,uVar1,0x626,"uart_get_max_rx_timeout",param_1,6,5);
  return 0xffff;
}


