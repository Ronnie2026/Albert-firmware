/* Firmware entry: 0x4800549e */

int FUN_ram_4800549e(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x18a,"regdma_link_recursive_impl",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  if (param_1 != 0) {
    uVar1 = FUN_ram_480053ba();
    FUN_ram_4800549e(uVar1,param_2,param_3 + 1,param_4);
    if (param_4 == (code *)0x0) {
      return param_1;
    }
    (*param_4)(param_1,param_2,param_3);
  }
  return param_1;
}


