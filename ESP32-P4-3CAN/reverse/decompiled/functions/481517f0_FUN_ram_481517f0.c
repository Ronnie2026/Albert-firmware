/* Firmware entry: 0x481517f0 */

void FUN_ram_481517f0(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_ram_4813ac74();
      param_1[1] = 0;
      *param_1 = 0;
    }
    FUN_ram_48139604(6,param_1);
    return;
  }
  return;
}


