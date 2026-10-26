/* Firmware entry: 0x4ff40d32 */

void FUN_ram_4ff40d32(int param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = DAT_ram_4ff6d988;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 - 1U < 2) {
    if (param_1 == 1) {
      if (param_2 == 0) {
        Cache_Resume_L1_DCache(DAT_ram_4ff6d989);
      }
      else {
        if (param_2 != 1) {
          Cache_Resume_L1_DCache();
        }
        Cache_Resume_L1_CORE1_ICache(uVar1);
        Cache_Resume_L1_CORE0_ICache(uVar1);
      }
    }
    else {
      Cache_Resume_L2_Cache(DAT_ram_4ff6d98c);
    }
    FUN_ram_4ff40ada(param_1,param_2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0xee,
                   s_cache_hal_resume_ram_4ff585bc,s_cache_level_____cache_level_<__C_ram_4ff548bc);
}


