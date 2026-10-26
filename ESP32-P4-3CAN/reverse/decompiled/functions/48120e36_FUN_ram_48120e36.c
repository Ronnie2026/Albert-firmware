/* Firmware entry: 0x48120e36 */

void FUN_ram_48120e36(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (fence(), param_1 == DAT_ram_4ff6e050)) {
    fence();
    DAT_ram_4ff6e04c = param_1;
    return;
  }
  return;
}


