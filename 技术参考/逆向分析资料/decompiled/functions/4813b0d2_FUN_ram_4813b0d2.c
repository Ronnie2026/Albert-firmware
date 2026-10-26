/* Firmware entry: 0x4813b0d2 */

short FUN_ram_4813b0d2(int *param_1)

{
  short sVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = 0;
  if (param_1 != (int *)0x0) {
    do {
      param_1 = (int *)*param_1;
      sVar1 = sVar1 + 1;
    } while (param_1 != (int *)0x0);
    return sVar1;
  }
  return sVar1;
}


