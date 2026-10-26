/* Firmware entry: 0x4814dfba */

int * FUN_ram_4814dfba(int *param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)0x0;
    if ((*param_1 != 0) && (piVar1 = DAT_ram_4ff6e1ac, DAT_ram_4ff6e1ac != (int *)0x0)) {
      while (((*(byte *)((int)piVar1 + 0xe7) & 1) == 0 ||
             ((((*(byte *)((int)piVar1 + 0xe7) >> 2 & 1) == 0 || (piVar1[1] == 0)) ||
              (*param_1 != piVar1[1]))))) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) {
          return (int *)0x0;
        }
      }
    }
  }
  return piVar1;
}


