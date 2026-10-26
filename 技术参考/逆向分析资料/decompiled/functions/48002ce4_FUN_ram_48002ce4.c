/* Firmware entry: 0x48002ce4 */

uint FUN_ram_48002ce4(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return *(ushort *)(*param_1 + 2) & 1;
  }
  return 0xffffffff;
}


