/* Firmware entry: 0x48165ed4 */

uint FUN_ram_48165ed4(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return *(uint *)(DAT_ram_4ff4ba24 + 0x48) >> 9 & 1;
}


