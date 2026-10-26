/* Firmware entry: 0x48131606 */

uint FUN_ram_48131606(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    iVar2 = FUN_ram_4ff2cffa();
    iVar3 = FUN_ram_4ff31f12(0x67,0,3,7,0);
    iVar4 = FUN_ram_4ff31f12(0x67,0,2,3,0);
    iVar5 = FUN_ram_4ff20626();
    if (iVar5 != 0) {
      return (uint)(iVar3 * iVar2) / (iVar4 + 1U);
    }
    return (uint)((iVar3 + 4) * iVar2) / (iVar4 + 1U);
  }
  if (param_1 != 2) {
    if (param_1 == 0) {
      uVar1 = FUN_ram_4ff2cffa();
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/clk_tree_hal.c",0x1a,
                     "clk_hal_soc_root_get_freq_mhz","false");
  }
  return 0x11;
}


