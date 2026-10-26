/* Firmware entry: 0x481212c6 */

void FUN_ram_481212c6(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  int local_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x36 < param_1) {
    uVar6 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-gpio.c"
                            );
    uVar4 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
    pcVar5 = "[%6u][E][%s:%u] %s(): Invalid IO %i selected\r\n";
    uVar2 = 0x72;
LAB_ram_481213b0:
    FUN_ram_48027528(pcVar5,uVar4,uVar3,uVar2,"__pinMode",param_1);
    return;
  }
  iVar1 = FUN_ram_48026516(param_1,1);
  if (iVar1 == 0) {
    FUN_ram_4802691a(1,&LAB_ram_481212c2);
    iVar1 = FUN_ram_48026230(param_1,0,0,0xffffffff);
    if (iVar1 == 0) {
      uVar6 = FUN_ram_4ff21a0a();
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-gpio.c"
                              );
      uVar4 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      pcVar5 = "[%6u][E][%s:%u] %s(): Deinit of previous bus from IO %i failed\r\n";
      uVar2 = 0x79;
      goto LAB_ram_481213b0;
    }
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if ((int)(param_1 - 0x20) < 0) {
    local_40 = 1 << (param_1 & 0x1f);
    iStack_3c = 0;
  }
  else {
    iStack_3c = 1 << (param_1 - 0x20 & 0x1f);
    local_40 = 0;
  }
  uStack_2c = *(uint *)(param_1 * 4 + 0x500e0074) >> 7 & 7;
  if (param_2 < 0x20) {
    uStack_38 = param_2 & 3;
    if ((param_2 & 0x10) != 0) {
      uStack_38 = uStack_38 | 4;
    }
    uStack_34 = (uint)((param_2 & 4) != 0);
    if ((param_2 & 8) != 0) {
      uStack_30 = 1;
    }
  }
  iVar1 = FUN_ram_4812ad88(&local_40);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_48026516(param_1,1);
    if (iVar1 == 0) {
      FUN_ram_48026230(param_1,1,param_1 + 1,0xffffffff);
    }
    return;
  }
  uVar6 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-gpio.c"
                          );
  uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): IO %i config failed\r\n",uVar3,uVar2,0x99,"__pinMode",
                   param_1);
  return;
}


