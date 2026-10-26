/* Firmware entry: 0x48129c6e */

int * FUN_ram_48129c6e(int param_1,int param_2)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((-1 < param_2) && (param_1 != 0)) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    do {
      if (param_2 == 0) {
        return piVar1;
      }
      piVar1 = (int *)*piVar1;
      param_2 = param_2 + -1;
    } while (piVar1 != (int *)0x0);
    return (int *)0x0;
  }
  return (int *)0x0;
}


