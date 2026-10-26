/* Firmware entry: 0x481308ba */

undefined4 FUN_ram_481308ba(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_14 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e118 != 0) {
    if (param_1 == 0) {
      param_1 = FUN_ram_4ff3d9a8(0,0);
    }
    uVar1 = FUN_ram_48130574(1,param_1,auStack_14);
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): TWDT was never initialized\n",uVar1,"task_wdt",
                   "esp_task_wdt_add",0x29f);
  return 0x103;
}


