/* Firmware entry: 0x480003a8 */

undefined4
FUN_ram_480003a8(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (10 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_efuse_utility.c",0x117,"esp_efuse_utility_read_reg",
                     "blk >= 0 && blk < EFUSE_BLK_MAX");
  }
  if (param_1 <=
      (uint)(*(int *)(&DAT_ram_481e3968 + param_2 * 8) - *(int *)(&DAT_ram_481e3964 + param_2 * 8))
      >> 2) {
    iVar1 = -1;
    if (param_4 != 0x20) {
      iVar1 = (1 << (param_4 & 0x1f)) + -1;
    }
    iVar1 = __popcountsi2(*(uint *)(param_1 * 4 + *(int *)(&DAT_ram_481e3964 + param_2 * 8)) &
                          iVar1 << (param_3 & 0x1f));
    *param_5 = *param_5 + iVar1;
    *param_6 = *param_6 + param_4;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_efuse_utility.c",0x118,"esp_efuse_utility_read_reg",
                   "num_reg <= (range_read_addr_blocks[blk].end - range_read_addr_blocks[blk].start) / sizeof(uint32_t)"
                  );
}


