/* Firmware entry: 0x4ff3e884 */

void FUN_ram_4ff3e884(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  if (param_1 == 0) {
    FUN_ram_4ff3ebfe();
    param_1 = (&DAT_ram_4ff6da3c)[mhartid];
    FUN_ram_4ff3ec08();
  }
  param_1 = param_1 + param_2 * 4;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}


