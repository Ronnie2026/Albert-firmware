/* Firmware entry: 0x48194286 */

void FUN_ram_48194286(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != -1) {
    FUN_ram_4813711a(*param_1,2);
    FUN_ram_4819bf9a(*param_1);
    *param_1 = -1;
  }
  return;
}


