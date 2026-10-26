/* Firmware entry: 0x4ff350ce */

bool FUN_ram_4ff350ce(undefined1 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((undefined1 *)0x47ffffff < param_1) {
    return param_1 < &DAT_ram_481b0000;
  }
  return false;
}


