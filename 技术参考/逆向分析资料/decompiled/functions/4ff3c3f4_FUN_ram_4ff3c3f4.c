/* Firmware entry: 0x4ff3c3f4 */

undefined4 FUN_ram_4ff3c3f4(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  if (param_1 == 0) {
    FUN_ram_4ff3ebfe();
    param_1 = (&DAT_ram_4ff6da3c)[mhartid];
    FUN_ram_4ff3ec08();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar1;
}


