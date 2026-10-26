/* Firmware entry: 0x480059a0 */

uint FUN_ram_480059a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x285,"regdma_link_get_owner_bitmap",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  uVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return uVar1;
    }
    puVar2 = (uint *)FUN_ram_4800557a(param_1);
    uVar1 = uVar1 | *puVar2 & 0xf;
    if (param_1 == param_2) break;
    param_1 = FUN_ram_480053ba(param_1,param_3);
  }
  return uVar1;
}


