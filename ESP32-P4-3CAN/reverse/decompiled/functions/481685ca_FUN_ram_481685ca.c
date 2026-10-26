/* Firmware entry: 0x481685ca */

int FUN_ram_481685ca(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(int *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  piVar2 = *(int **)(param_1 + 0x20);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      iVar1 = FUN_ram_4816901a(*piVar2,"Content-Type",0);
      return iVar1;
    }
    return 0x102;
  }
  aiStack_14[0] = 0;
  if (piVar2 == (int *)0x0) {
    return 0x102;
  }
  if (*piVar2 != 0) {
    iVar1 = FUN_ram_48168f0c(*piVar2,"Content-Type",aiStack_14);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (aiStack_14[0] != 0) {
      return 0;
    }
    if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar1 = **(int **)(param_1 + 0x20), iVar1 != 0)) {
      iVar1 = FUN_ram_4816901a(iVar1,"Content-Type","application/x-www-form-urlencoded");
      return iVar1;
    }
  }
  return 0x102;
}


