/* Firmware entry: 0x48005a0c */

int FUN_ram_48005a0c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x296,"regdma_find_module_link_head",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_ram_4800557a(param_1);
    if (*(int *)(iVar1 + 4) == param_4) break;
    if (param_1 == param_2) {
      return 0;
    }
    param_1 = FUN_ram_480053ba(param_1,param_3);
  }
  return param_1;
}


