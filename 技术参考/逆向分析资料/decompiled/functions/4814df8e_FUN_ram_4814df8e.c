/* Firmware entry: 0x4814df8e */

undefined4 FUN_ram_4814df8e(undefined4 param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_2 + 0x4c) != 0) {
    return 0;
  }
  if (((*(int *)(param_2 + 0x50) == 0) && (*(int *)(param_2 + 0x54) == 0)) &&
     (*(int *)(param_2 + 0x58) == 0)) {
    FUN_ram_4813ac74();
    return 1;
  }
  return 0;
}


