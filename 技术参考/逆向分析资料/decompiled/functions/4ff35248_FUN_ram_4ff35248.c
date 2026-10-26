/* Firmware entry: 0x4ff35248 */

bool FUN_ram_4ff35248(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x481affff < param_1) {
    return param_1 < 0x48240000;
  }
  return false;
}


