/* Firmware entry: 0x4800656c */

undefined4 FUN_ram_4800656c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)thunk_FUN_ram_4ff2070c(8);
    if (piVar1 == (int *)0x0) {
      return 0xc;
    }
    piVar1[1] = 0;
  }
  else {
    if (*param_2 == 0) {
      return 0x16;
    }
    uVar4 = param_2[1];
    if (2 < uVar4) {
      return 0x16;
    }
    piVar1 = (int *)thunk_FUN_ram_4ff2070c(8);
    if (piVar1 == (int *)0x0) {
      return 0xc;
    }
    piVar1[1] = uVar4;
    if (uVar4 == 1) {
      iVar2 = FUN_ram_4ff3b144(4);
      *piVar1 = iVar2;
      goto LAB_ram_480065b2;
    }
  }
  iVar2 = FUN_ram_4ff3b144(1);
  *piVar1 = iVar2;
LAB_ram_480065b2:
  if (iVar2 == 0) {
    thunk_FUN_ram_4ff209c6(piVar1);
    uVar3 = 0xb;
  }
  else {
    *param_1 = (int)piVar1;
    uVar3 = 0;
  }
  return uVar3;
}


