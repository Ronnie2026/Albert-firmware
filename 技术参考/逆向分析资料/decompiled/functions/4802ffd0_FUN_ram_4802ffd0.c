/* Firmware entry: 0x4802ffd0 */

char * FUN_ram_4802ffd0(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff5c548 == '\x03') {
    return "rebooting";
  }
  if (*(char **)(DAT_ram_4ff6dc74 + 0x710) != (char *)0x0) {
    return *(char **)(DAT_ram_4ff6dc74 + 0x710);
  }
  return "idle";
}


