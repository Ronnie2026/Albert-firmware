/* Firmware entry: 0x48026516 */

undefined4 FUN_ram_48026516(uint param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x37) {
    if ((int)(param_1 - 0x20) < 0) {
      uVar4 = 0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar4 = 0x7fffff >> (param_1 - 0x20 & 0x1f);
    }
    if ((uVar4 & 1) != 0) {
      if (0x37 < param_2 - 1U) {
        uVar5 = FUN_ram_4ff21a0a();
        uVar1 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                                );
        uVar2 = FUN_ram_48025e8c(param_2);
        uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid type %s (%u) for pin %u\r\n",uVar3,uVar1,
                         0xb8,"perimanGetPinBus",uVar2,param_2,param_1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      if (*(int *)(&DAT_ram_4ff5b52c + param_1 * 0x10) != param_2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      return *(undefined4 *)(&DAT_ram_4ff5b534 + param_1 * 0x10);
    }
  }
  uVar5 = FUN_ram_4ff21a0a();
  uVar1 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                          );
  uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid pin: %u\r\n",uVar2,uVar1,0xb4,"perimanGetPinBus",
                   param_1);
  return 0;
}


