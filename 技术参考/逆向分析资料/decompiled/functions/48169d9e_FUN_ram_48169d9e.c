/* Firmware entry: 0x48169d9e */

bool FUN_ram_48169d9e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return *(int *)(param_1 + 8) == 1;
  }
  return false;
}


