/* Firmware entry: 0x48003a2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48003a2c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = _DAT_ram_50111000 >> 2 & 3;
  if (uVar2 == 1) {
    iVar1 = FUN_ram_4ff2cffa();
    return iVar1 * 1000000;
  }
  if (uVar2 == 2) {
    iVar1 = 8000000;
  }
  else {
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_clk_tree_common.c",200,"esp_clk_tree_lp_fast_get_freq_hz","false");
    }
    if (param_1 == 1) {
      iVar1 = 17500000;
    }
    else if ((param_1 != 0) || (iVar1 = DAT_ram_4ff6d9e0, DAT_ram_4ff6d9e0 == 0)) {
      FUN_ram_4ff332dc(7,10000);
      DAT_ram_4ff6d9e0 = FUN_ram_4ff334a2();
      return DAT_ram_4ff6d9e0;
    }
  }
  return iVar1;
}


