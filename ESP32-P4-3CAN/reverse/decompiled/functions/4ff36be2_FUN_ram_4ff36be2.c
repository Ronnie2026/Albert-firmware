/* Firmware entry: 0x4ff36be2 */

void FUN_ram_4ff36be2(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff47da4 != -1) {
    return;
  }
  DAT_ram_4ff47da4 = ets_get_bootloader_offset();
  return;
}


