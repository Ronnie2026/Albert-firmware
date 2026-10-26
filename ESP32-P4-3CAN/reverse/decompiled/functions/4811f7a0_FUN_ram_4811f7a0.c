/* Firmware entry: 0x4811f7a0 */

void FUN_ram_4811f7a0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  DAT_ram_4ff509ec = (uint)(param_1 != 0);
  return;
}


