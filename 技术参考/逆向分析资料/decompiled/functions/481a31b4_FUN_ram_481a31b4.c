/* Firmware entry: 0x481a31b4 */

byte FUN_ram_481a31b4(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x100) {
    return (&DAT_ram_4823af31)[param_1] & 8;
  }
  return 0;
}


