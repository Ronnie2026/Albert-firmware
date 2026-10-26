/* Firmware entry: 0x48195b14 */

void FUN_ram_48195b14(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0x4ff6d644) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1 + -1;
    if (iVar1 < 1) {
      thunk_FUN_ram_4ff209c6();
      return;
    }
  }
  return;
}


