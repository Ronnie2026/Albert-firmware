/* Firmware entry: 0x4814a07c */

int FUN_ram_4814a07c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e1ac == (int *)0x0) {
    return -6;
  }
  iVar3 = -6;
  piVar1 = DAT_ram_4ff6e1ac;
  do {
    if (param_1 != (int *)0x0) {
      while (((((*param_1 != 0 || (param_1[1] != 0)) || (param_1[2] != 0)) || (param_1[3] != 0)) &&
             (iVar2 = FUN_ram_4813a644(piVar1,param_1), iVar2 < 0))) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) {
          return iVar3;
        }
      }
    }
    iVar2 = FUN_ram_48149f9a(piVar1,param_2);
    if (iVar3 != 0) {
      iVar3 = iVar2;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar3;
}


