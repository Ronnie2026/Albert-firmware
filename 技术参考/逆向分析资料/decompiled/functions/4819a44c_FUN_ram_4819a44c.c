/* Firmware entry: 0x4819a44c */

void FUN_ram_4819a44c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819a34a();
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined1 **)(param_1 + 0x28) = &LAB_ram_4819a2b2;
    if (DAT_ram_4ff6e2ec == 0) {
      FUN_ram_4819a302();
    }
  }
  FUN_ram_4819a35a();
  return;
}


