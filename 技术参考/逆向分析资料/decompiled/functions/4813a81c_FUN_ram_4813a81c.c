/* Firmware entry: 0x4813a81c */

int * FUN_ram_4813a81c(uint param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar1 = DAT_ram_4ff6e1ac;
  if (DAT_ram_4ff6e1ac == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    if ((*(byte *)((int)piVar1 + 0xea) + 1 & 0xff) == param_1) {
      return piVar1;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return (int *)0x0;
}


