/* Firmware entry: 0x4815bd18 */

void FUN_ram_4815bd18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = *(int **)(param_1 + 0x38);
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[1];
    if (iVar3 == 0) {
      *(int **)(param_1 + 0x38) = piVar2;
    }
    else {
      *(int **)(iVar3 + 4) = piVar2;
    }
    if (piVar2 == (int *)0x0) {
      *(int *)(param_1 + 0x3c) = iVar3;
    }
    else {
      *piVar2 = iVar3;
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    FUN_ram_4ff209c6();
    piVar2 = *(int **)(param_1 + 0x38);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    return;
  }
  for (iVar1 = *(int *)(iVar3 + -4) * 0x54 + iVar3; iVar3 != iVar1; iVar1 = iVar1 + -0x54) {
    thunk_FUN_ram_4815d812(iVar1 + -0x10);
  }
  FUN_ram_4ff209c6(iVar3 + -4);
  return;
}


