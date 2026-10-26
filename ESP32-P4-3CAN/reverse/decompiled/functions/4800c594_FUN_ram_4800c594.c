/* Firmware entry: 0x4800c594 */

bool FUN_ram_4800c594(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    return *(int *)(&DAT_ram_4ff5a014 + param_1 * 4) != 0;
  }
  return false;
}


