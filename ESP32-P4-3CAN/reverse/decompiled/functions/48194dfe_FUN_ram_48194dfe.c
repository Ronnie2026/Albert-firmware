/* Firmware entry: 0x48194dfe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48194dfe(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (_DAT_ram_50094e14 == 1) {
    return 2;
  }
  if (_DAT_ram_50094e14 == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (_DAT_ram_50094e14 != 0) {
      return 3;
    }
  }
  FUN_ram_4ff45158(param_1,0x50094a00,param_2);
  fence();
  return uVar1;
}


