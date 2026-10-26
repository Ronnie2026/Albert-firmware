/* Firmware entry: 0x48159240 */

bool FUN_ram_48159240(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != 0) {
    return param_1[1] != 0;
  }
  return false;
}


