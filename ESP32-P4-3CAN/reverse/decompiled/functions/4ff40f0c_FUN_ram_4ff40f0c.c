/* Firmware entry: 0x4ff40f0c */

int FUN_ram_4ff40f0c(uint param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0x13e,
                     s_cache_hal_get_cache_line_size_ram_4ff5859c,
                     s_cache_level_<__CACHE_LL_LEVEL_NU_ram_4ff54910);
  }
  if (param_1 - 1 < 2) {
    if (param_1 != 2) {
      return (uint)(param_2 < 2) << 6;
    }
    iVar1 = (*(code *)&Cache_Get_L2_Cache_Line_Size)();
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff5495c,0x3cd,
                   s_cache_ll_get_line_size_ram_4ff58584,
                   s_cache_level____1____cache_level___ram_4ff54934);
}


