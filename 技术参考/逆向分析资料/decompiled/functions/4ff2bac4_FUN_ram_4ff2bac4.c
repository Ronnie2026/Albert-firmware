/* Firmware entry: 0x4ff2bac4 */

bool FUN_ram_4ff2bac4(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  return DAT_ram_4ff6e02c != 0;
}


