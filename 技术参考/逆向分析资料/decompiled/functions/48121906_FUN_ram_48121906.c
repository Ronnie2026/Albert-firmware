/* Firmware entry: 0x48121906 */

int FUN_ram_48121906(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x14) != 0) {
    return param_1 + param_2 + 4;
  }
  return param_1 + param_2 + 0x10;
}


