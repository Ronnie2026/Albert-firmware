/* Firmware entry: 0x4ff40bbc */

byte FUN_ram_4ff40bbc(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0x9c,
                     s_s_get_cache_state_ram_4ff585e4,
                     s_cache_level_____cache_level_<__C_ram_4ff548bc);
  }
  if (param_1 == 2) {
    if (param_2 == 1) {
      return (byte)DAT_ram_4ff6d98e;
    }
    if (param_2 != 0) {
      if (param_2 == 2) {
        return DAT_ram_4ff6d98e._1_1_ & (byte)DAT_ram_4ff6d98e;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0xbb,
                       s_s_get_cache_state_ram_4ff585e4,s_false_ram_4ff546f4);
    }
    return DAT_ram_4ff6d98e._1_1_;
  }
  if (param_2 == 1) {
    return (byte)DAT_ram_4ff6d98a;
  }
  if (param_2 != 0) {
    if (param_2 == 2) {
      return DAT_ram_4ff6d98a._1_1_ & (byte)DAT_ram_4ff6d98a;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0xac,
                     s_s_get_cache_state_ram_4ff585e4,s_false_ram_4ff546f4);
  }
  return DAT_ram_4ff6d98a._1_1_;
}


