/* Firmware entry: 0x48026d1c */

void FUN_ram_48026d1c(int param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = 0;
  if (param_1 != 0) {
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  return;
}


