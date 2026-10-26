/* Firmware entry: 0x480267ba */

int FUN_ram_480267ba(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x37) {
    if ((int)(param_1 - 0x20) < 0) {
      uVar3 = 0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar3 = 0x7fffff >> (param_1 - 0x20 & 0x1f);
    }
    if ((uVar3 & 1) != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (int)(char)(&DAT_ram_4ff5b538)[param_1 * 0x10];
    }
  }
  uVar4 = FUN_ram_4ff21a0a();
  uVar1 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                          );
  uVar2 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid pin: %u\r\n",uVar2,uVar1,0xd3,
                   "perimanGetPinBusNum",param_1);
  return -1;
}


