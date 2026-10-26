/* Firmware entry: 0x4815da84 */

int FUN_ram_4815da84(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = param_1[5];
  if (iVar4 == 0) {
    return 0x1105;
  }
  piVar1 = (int *)param_1[3];
  piVar2 = piVar1;
  if (piVar1[3] == -0x10) {
    iVar4 = FUN_ram_4815ba1e(piVar1);
    if (iVar4 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar4;
    }
    piVar2 = (int *)param_1[3];
    iVar4 = param_1[5];
  }
  iVar3 = *piVar2;
  piVar2 = (int *)piVar2[1];
  if (iVar3 == 0) {
    param_1[3] = (int)piVar2;
  }
  else {
    *(int **)(iVar3 + 4) = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    param_1[4] = iVar3;
  }
  else {
    *piVar2 = iVar3;
  }
  iVar3 = param_1[1];
  param_1[5] = iVar4 + -1;
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar1;
  }
  iVar4 = *param_1;
  *piVar1 = iVar3;
  piVar1[1] = 0;
  param_1[1] = (int)piVar1;
  if (iVar4 == 0) {
    *param_1 = (int)piVar1;
  }
  param_1[2] = param_1[2] + 1;
  FUN_ram_4815ba08(piVar1,param_1[9]);
  param_1[9] = param_1[9] + 1;
  return 0;
}


