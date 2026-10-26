/* Firmware entry: 0x4ff40ada */

void FUN_ram_4ff40ada(int param_1,int param_2,ushort param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_3 << 8 | param_3;
  if (1 < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0x73,
                     s_s_update_cache_state_ram_4ff585f8,
                     s_cache_level_____cache_level_<__C_ram_4ff548bc);
  }
  uVar1 = (undefined1)param_3;
  if (param_1 == 2) {
    if (param_2 == 1) {
      DAT_ram_4ff6d98e = CONCAT11(DAT_ram_4ff6d98e._1_1_,uVar1);
      return;
    }
    if (param_2 != 0) {
      if (param_2 == 2) {
        DAT_ram_4ff6d98e = uVar2;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0x91,
                       s_s_update_cache_state_ram_4ff585f8,s_false_ram_4ff546f4);
    }
    DAT_ram_4ff6d98e = CONCAT11(uVar1,(undefined1)DAT_ram_4ff6d98e);
    return;
  }
  if (param_2 == 1) {
    DAT_ram_4ff6d98a = CONCAT11(DAT_ram_4ff6d98a._1_1_,uVar1);
    return;
  }
  if (param_2 != 0) {
    if (param_2 == 2) {
      DAT_ram_4ff6d98a = uVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_cache_hal_c_ram_4ff548f0,0x82,
                     s_s_update_cache_state_ram_4ff585f8,s_false_ram_4ff546f4);
  }
  DAT_ram_4ff6d98a = CONCAT11(uVar1,(undefined1)DAT_ram_4ff6d98a);
  return;
}


