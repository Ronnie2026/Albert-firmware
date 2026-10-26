/* Firmware entry: 0x4812ea04 */

bool FUN_ram_4812ea04(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != -1) {
    return param_1[6] - 3U < 2;
  }
  return true;
}


