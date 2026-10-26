/* Firmware entry: 0x48130c7e */

undefined4 FUN_ram_48130c7e(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e118 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): TWDT was never initialized\n",uVar1,
                     "task_wdt","esp_task_wdt_delete",0x2ea);
    return 0x103;
  }
  if (param_1 != 0) {
    uVar1 = FUN_ram_48130398(1);
    return uVar1;
  }
  uVar1 = FUN_ram_4ff3d9a8(0,0);
  uVar1 = FUN_ram_48130398(1,uVar1);
  return uVar1;
}


