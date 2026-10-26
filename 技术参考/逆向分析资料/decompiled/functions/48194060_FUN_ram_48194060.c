/* Firmware entry: 0x48194060 */

int * FUN_ram_48194060(int param_1,int *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != -1) {
    *param_2 = param_1 / 1000;
    param_2[1] = param_1 / 1000 >> 0x1f;
    param_2[2] = (param_1 % 1000) * 1000;
    return param_2;
  }
  return (int *)0x0;
}


