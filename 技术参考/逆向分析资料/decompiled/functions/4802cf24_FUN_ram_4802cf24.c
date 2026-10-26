/* Firmware entry: 0x4802cf24 */

char * FUN_ram_4802cf24(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dd49 != '\0') && (fence(), (DAT_ram_4ff6de94 & 0x80) == 0)) {
    return "stored";
  }
  return "pending";
}


