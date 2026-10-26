/* Firmware entry: 0x4802691a */

undefined4 FUN_ram_4802691a(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 - 1U < 0x38) {
    if (param_2 != 0) {
      *(int *)(&DAT_ram_4ff5b89c + param_1 * 4) = param_2;
      return 1;
    }
    uVar4 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                            );
    uVar2 = FUN_ram_48025e8c(param_1);
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Callback is NULL when setting deinit function for type %s (%u)\r\n"
                     ,uVar3,uVar1,0xe7,"perimanSetBusDeinit",uVar2,param_1);
  }
  else {
    uVar4 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                            );
    uVar2 = FUN_ram_48025e8c(param_1);
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid type: %s (%u)\r\n",uVar3,uVar1,0xe3,
                     "perimanSetBusDeinit",uVar2,param_1);
  }
  return 0;
}


