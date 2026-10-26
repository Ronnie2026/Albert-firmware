/* Firmware entry: 0x48005624 */

void FUN_ram_48005624(int param_1,uint param_2)

{
  uint *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x1cb,"regdma_link_iterator","entry < REGDMA_LINK_ENTRY_NUM");
  }
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    puVar1 = (uint *)FUN_ram_4800557a(param_1);
    if (puVar1 == (uint *)0x0) break;
    *puVar1 = *puVar1 & 0xfffffff0 | (1 << (param_2 & 0x1f) | *puVar1) & 0xf;
    param_1 = FUN_ram_480053ba(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("regdma_link.h",0xc4,"regdma_link_update_stats","stats != NULL");
}


