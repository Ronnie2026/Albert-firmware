/* Firmware entry: 0x4ff40cac */

void FUN_ram_4ff40cac(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0xe3,
                     s_cache_hal_suspend_ram_4ff585d0,
                     s_cache_level_____cache_level_<__C_ram_4ff548bc);
  }
  if (param_1 == 1) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        Cache_Suspend_L1_CORE0_ICache();
        Cache_Suspend_L1_CORE1_ICache();
        goto LAB_ram_4ff40cce;
      }
      Cache_Suspend_L1_CORE0_ICache();
      Cache_Suspend_L1_CORE1_ICache();
    }
    Cache_Suspend_L1_DCache();
  }
  else {
    Cache_Suspend_L2_Cache();
  }
LAB_ram_4ff40cce:
  FUN_ram_4ff40ada(param_1,param_2,0);
  return;
}


