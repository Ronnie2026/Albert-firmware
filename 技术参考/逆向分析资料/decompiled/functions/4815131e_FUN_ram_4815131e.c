/* Firmware entry: 0x4815131e */

void FUN_ram_4815131e(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 1) = 0;
  if (((uint *)*param_1)[2] != 0) {
    if ((*(uint *)*param_1 & 0xf0) == 0x10) {
      FUN_ram_4813c052();
      FUN_ram_4814e3a4(param_1[9]);
      return;
    }
  }
  FUN_ram_4814e3a4(param_1[9]);
  return;
}


