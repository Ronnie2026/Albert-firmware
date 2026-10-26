/* Firmware entry: 0x4ff2c456 */

void FUN_ram_4ff2c456(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_csreg_07c1 = DAT_csreg_07c1 & 0xffffefcf;
  FUN_ram_4ff33cd8();
  return;
}


