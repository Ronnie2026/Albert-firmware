/* Firmware entry: 0x4ff20790 */

int FUN_ram_4ff20790(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff47db0 == 0xffffffff) {
    iVar1 = FUN_ram_4ff20af0(param_1,param_2,0x1800);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
    FUN_ram_4ff206ca(param_2,0x1800,"heap_caps_realloc");
    return 0;
  }
  if (DAT_ram_4ff47db0 < param_2) {
    iVar1 = FUN_ram_4ff20af0(param_1,param_2,0x1400);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_ram_4ff20af0(param_1,param_2,0x1800);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_ram_4ff20af0(param_1,param_2,0x1000);
  if (iVar1 == 0) {
    FUN_ram_4ff206ca(param_2,0x1000,"heap_caps_realloc_default");
  }
  return iVar1;
}


