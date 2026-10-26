/* Firmware entry: 0x481248e0 */

void FUN_ram_481248e0(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481246f0(2);
  FUN_ram_481246f0(1);
  if (DAT_ram_4ff6e058 != 0) {
    thunk_FUN_ram_4ff209c6();
    DAT_ram_4ff6e058 = 0;
  }
  DAT_ram_4ff6e05c = 0;
  return;
}


