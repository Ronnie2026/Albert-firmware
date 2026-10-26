/* Firmware entry: 0x4815c31e */

bool FUN_ram_4815c31e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return *(int *)(param_1 + 100) == 1;
}


