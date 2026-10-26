/* Firmware entry: 0x4ff43982 */

int FUN_ram_4ff43982(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return param_1 + *(int *)(param_1 + 0x14);
  }
  return 0;
}


