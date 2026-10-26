/* Firmware entry: 0x4815d868 */

void thunk_FUN_ram_4815d812(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = *piVar1;
  piVar1 = (int *)piVar1[1];
  if (iVar2 == 0) goto LAB_ram_4815d842;
  do {
    iVar3 = param_1[2];
    *(int **)(iVar2 + 4) = piVar1;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        param_1[1] = iVar2;
        param_1[2] = iVar3 + -1;
        FUN_ram_4ff209c6();
        return;
      }
      *piVar1 = iVar2;
      param_1[2] = iVar3 + -1;
      FUN_ram_4ff209c6();
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[1];
      if (iVar2 != 0) break;
LAB_ram_4815d842:
      iVar3 = param_1[2];
      *param_1 = (int)piVar1;
    }
  } while( true );
}


