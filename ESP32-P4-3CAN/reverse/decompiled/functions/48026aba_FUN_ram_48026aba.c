/* Firmware entry: 0x48026aba */

undefined1 * FUN_ram_48026aba(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 - 1U < 0x38) {
    if (*(undefined1 **)(&DAT_ram_4ff5b89c + param_1 * 4) != &LAB_ram_48025e88) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return *(undefined1 **)(&DAT_ram_4ff5b89c + param_1 * 4);
    }
  }
  else {
    uVar4 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                            );
    uVar2 = FUN_ram_48025e8c(param_1);
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid type: %s (%u)\r\n",uVar3,uVar1,0x101,
                     "perimanGetBusDeinit",uVar2,param_1);
  }
  return (undefined1 *)0x0;
}


