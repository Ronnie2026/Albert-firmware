/* Firmware entry: 0x481659f4 */

undefined4 FUN_ram_481659f4(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff4ba18 != 0) {
    if (DAT_ram_4ff4ba68 != 0) {
      FUN_ram_48163e5c(0);
    }
    if (DAT_ram_4ff4bab0 != 0) {
      FUN_ram_48163e5c(1);
    }
    FUN_ram_4816392a();
    return 0;
  }
  return 0x103;
}


