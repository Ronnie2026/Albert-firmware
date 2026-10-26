/* Firmware entry: 0x48169cfa */

void FUN_ram_48169cfa(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_48024e82(*(undefined4 *)(param_1 + 8),0);
    (&DAT_ram_4ff6d444)[*(int *)(param_1 + 8)] = 0;
  }
  thunk_FUN_ram_4ff209c6(param_1);
  return;
}


