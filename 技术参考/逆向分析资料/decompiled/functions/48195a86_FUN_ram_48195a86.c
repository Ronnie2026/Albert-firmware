/* Firmware entry: 0x48195a86 */

void FUN_ram_48195a86(int *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x4ff6d644) {
    param_1[2] = 0;
    *param_1 = param_2;
    *(undefined1 *)((int)param_1 + param_2 + 0xc) = 0;
  }
  return;
}


