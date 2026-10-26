/* Firmware entry: 0x48000610 */

undefined4 FUN_ram_48000610(uint param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (10 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_efuse_utility.c",0x117,"esp_efuse_utility_read_reg",
                     "blk >= 0 && blk < EFUSE_BLK_MAX");
  }
  if (param_2 <=
      (uint)(*(int *)(&DAT_ram_481e3968 + param_1 * 8) - *(int *)(&DAT_ram_481e3964 + param_1 * 8))
      >> 2) {
    return *(undefined4 *)(param_2 * 4 + *(int *)(&DAT_ram_481e3964 + param_1 * 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_efuse_utility.c",0x118,"esp_efuse_utility_read_reg",
                   "num_reg <= (range_read_addr_blocks[blk].end - range_read_addr_blocks[blk].start) / sizeof(uint32_t)"
                  );
}


