/* Firmware entry: 0x4ff2070c */

int FUN_ram_4ff2070c(uint param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff47db0 == 0xffffffff) {
    iVar1 = FUN_ram_4ff20ae8(param_1,0x1800);
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    if (param_1 != 0) {
      FUN_ram_4ff206ca(param_1,0x1800,"heap_caps_malloc");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
LAB_ram_4ff2074e:
    iVar1 = 0;
  }
  else {
    if (DAT_ram_4ff47db0 < param_1) {
      iVar1 = FUN_ram_4ff20ae8(param_1,0x1400);
      if (iVar1 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
    }
    else {
      iVar1 = FUN_ram_4ff20ae8(param_1,0x1800);
      if (iVar1 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
      if (param_1 == 0) goto LAB_ram_4ff2074e;
    }
    iVar1 = FUN_ram_4ff20ae8(param_1,0x1000);
    if (iVar1 == 0) {
      FUN_ram_4ff206ca(param_1,0x1000,"heap_caps_malloc_default");
    }
  }
  return iVar1;
}


