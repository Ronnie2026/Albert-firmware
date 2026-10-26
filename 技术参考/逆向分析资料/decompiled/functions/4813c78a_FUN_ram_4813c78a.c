/* Firmware entry: 0x4813c78a */

void FUN_ram_4813c78a(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_ram_4813ac74();
    }
    FUN_ram_48139604(4,param_1);
    return;
  }
  return;
}


