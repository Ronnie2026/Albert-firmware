/* Firmware entry: 0x48005b8a */

int FUN_ram_48005b8a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x2ce,"regdma_find_prev_module_link_tail",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  iVar1 = param_1;
  if (param_1 != 0) {
    while (iVar2 = FUN_ram_4800557a(iVar1), param_4 != *(int *)(iVar2 + 4)) {
      if (param_2 == iVar1) {
        return 0;
      }
      iVar1 = FUN_ram_480053ba(iVar1,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (param_1 != iVar1) {
      do {
        iVar2 = FUN_ram_480053ba(param_1,param_3);
        if (iVar1 == iVar2) {
          return param_1;
        }
      } while ((param_1 != param_2) && (param_1 = FUN_ram_480053ba(param_1,param_3), param_1 != 0));
    }
  }
  return 0;
}


