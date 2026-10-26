/* Firmware entry: 0x48169ed4 */

undefined4 FUN_ram_48169ed4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar3 = *param_1;
    while (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 8);
      thunk_FUN_ram_4ff209c6(iVar3);
      iVar3 = iVar1;
    }
    *param_1 = 0;
  }
  else {
    piVar2 = (int *)thunk_FUN_ram_4817b126(1,0xc);
    if (piVar2 == (int *)0x0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffff8100;
    }
    piVar2[2] = 0;
    iVar3 = *param_1;
    *piVar2 = param_2;
    piVar2[1] = param_3;
    if (iVar3 == 0) {
      *param_1 = (int)piVar2;
    }
    else {
      do {
        iVar1 = iVar3;
        iVar3 = *(int *)(iVar1 + 8);
      } while (iVar3 != 0);
      *(int **)(iVar1 + 8) = piVar2;
    }
  }
  return 0;
}


