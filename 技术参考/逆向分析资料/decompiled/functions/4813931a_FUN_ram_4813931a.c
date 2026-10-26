/* Firmware entry: 0x4813931a */

void FUN_ram_4813931a(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x14) != '\x06') {
    FUN_ram_4814797e();
    return;
  }
  FUN_ram_481493de();
  return;
}


