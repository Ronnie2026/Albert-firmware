/* Firmware entry: 0x4817fa3c */

void FUN_ram_4817fa3c(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    thunk_FUN_ram_4ff209c6(param_1);
    param_1 = iVar1;
  } while (iVar1 != 0);
  return;
}


