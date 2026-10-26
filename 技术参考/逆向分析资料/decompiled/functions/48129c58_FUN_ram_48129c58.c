/* Firmware entry: 0x48129c58 */

int FUN_ram_48129c58(int param_1)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 8);
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar2;
      iVar1 = iVar1 + 1;
    } while (piVar2 != (int *)0x0);
    return iVar1;
  }
  return iVar1;
}


