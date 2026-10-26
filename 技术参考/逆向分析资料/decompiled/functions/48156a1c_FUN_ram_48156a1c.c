/* Firmware entry: 0x48156a1c */

void FUN_ram_48156a1c(undefined4 param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff47f80 != -1) {
    FUN_ram_4814e3a4(param_1);
    return;
  }
  DAT_ram_4ff47f80 = FUN_ram_4813a292();
  FUN_ram_4814e3a4(param_1);
  return;
}


