/* Firmware entry: 0x48005a88 */

int FUN_ram_48005a88(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x2aa,"regdma_find_module_link_tail",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  do {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) {
      iVar2 = FUN_ram_4800557a(param_1);
      if (*(int *)(iVar2 + 4) == param_4) {
        return param_1;
      }
    }
    else {
      uVar1 = FUN_ram_480053ba(param_1,param_3);
      iVar2 = FUN_ram_4800557a(param_1);
      if ((*(int *)(iVar2 + 4) == param_4) &&
         (iVar2 = FUN_ram_4800557a(uVar1), *(int *)(iVar2 + 4) != param_4)) {
        return param_1;
      }
    }
    param_1 = FUN_ram_480053ba(param_1,param_3);
  } while( true );
}


