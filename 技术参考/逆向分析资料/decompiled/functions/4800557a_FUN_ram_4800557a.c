/* Firmware entry: 0x4800557a */

int FUN_ram_4800557a(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1 >> 0x1a & 4 | *param_1 >> 0x10 & 0xf;
  if (uVar1 < 8) {
    iVar2 = FUN_ram_4800551c();
    return iVar2 + *(int *)(&DAT_ram_481e4868 + uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("regdma_link.c",0x1bb,"regdma_link_get_stats","it < ARRAY_SIZE(stats_offset)");
}


