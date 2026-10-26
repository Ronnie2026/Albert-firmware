/* Firmware entry: 0x4813b5ee */

undefined1 FUN_ram_4813b5ee(int *param_1,uint param_2)

{
  ushort *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  do {
    puVar1 = (ushort *)((int)param_1 + 10);
    if (param_2 < *puVar1) {
      return *(undefined1 *)(param_1[1] + param_2);
    }
    param_1 = (int *)*param_1;
    param_2 = param_2 - *puVar1 & 0xffff;
  } while (param_1 != (int *)0x0);
  return 0;
}


