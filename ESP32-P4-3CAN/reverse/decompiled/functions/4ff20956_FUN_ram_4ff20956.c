/* Firmware entry: 0x4ff20956 */

int FUN_ram_4ff20956(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 == 0) || ((param_1 - 1 & param_1) != 0)) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else if (param_2 < 0x4000001) {
    iVar1 = FUN_ram_4ff20a12();
    if (iVar1 == 0) {
      FUN_ram_4ff206ca(param_2,param_3,"heap_caps_aligned_alloc");
      return 0;
    }
  }
  else {
    FUN_ram_4ff206ca(param_2,param_3,"heap_caps_aligned_alloc");
    iVar1 = 0;
  }
  return iVar1;
}


