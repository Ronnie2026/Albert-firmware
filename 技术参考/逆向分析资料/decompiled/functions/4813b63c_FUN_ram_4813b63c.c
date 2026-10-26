/* Firmware entry: 0x4813b63c */

void FUN_ram_4813b63c(int *param_1,uint param_2,undefined1 param_3)

{
  ushort *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    puVar1 = (ushort *)((int)param_1 + 10);
    if (param_2 < *puVar1) {
      *(undefined1 *)(param_1[1] + param_2) = param_3;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    param_1 = (int *)*param_1;
    param_2 = param_2 - *puVar1 & 0xffff;
  } while (param_1 != (int *)0x0);
  return;
}


