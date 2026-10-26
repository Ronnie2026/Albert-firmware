/* Firmware entry: 0x48005b32 */

undefined4 FUN_ram_48005b32(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x2c4,"regdma_find_next_module_link_head",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  iVar1 = FUN_ram_48005a88();
  if ((iVar1 != 0) && (param_2 != iVar1)) {
    uVar2 = FUN_ram_480053ba(iVar1,param_3);
    return uVar2;
  }
  return 0;
}


