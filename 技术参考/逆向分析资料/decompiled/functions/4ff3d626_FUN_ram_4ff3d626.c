/* Firmware entry: 0x4ff3d626 */

undefined4 FUN_ram_4ff3d626(int param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_2) {
    return 0;
  }
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + param_2 * 4 + 0x5c);
  }
  FUN_ram_4ff3ebfe();
  iVar1 = (&DAT_ram_4ff6da3c)[mhartid];
  FUN_ram_4ff3ec08();
  return *(undefined4 *)(iVar1 + param_2 * 4 + 0x5c);
}


