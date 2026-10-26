/* Firmware entry: 0x48195a64 */

void FUN_ram_48195a64(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 1) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 != 0) {
    FUN_ram_4ff45158();
    return;
  }
  return;
}


