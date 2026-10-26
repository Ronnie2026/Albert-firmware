/* Firmware entry: 0x4ff3bac2 */

void FUN_ram_4ff3bac2(int param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x54,0xffffffff);
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_ram_4ff3d136(param_1 + 0x24,param_2,param_3);
  }
  FUN_ram_4ff3ee10(param_1 + 0x54);
  return;
}


