/* Firmware entry: 0x4817fb90 */

void FUN_ram_4817fb90(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_ram_48178b14(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    param_1[1] = 1;
    *param_1 = 0;
    return;
  }
  return;
}


