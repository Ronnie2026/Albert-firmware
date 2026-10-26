/* Firmware entry: 0x48176eac */

int FUN_ram_48176eac(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x5100;
  }
  if (*param_1 == 0) {
    iVar2 = -0x5100;
  }
  else {
    iVar3 = param_1[2];
    if (iVar3 == 0) {
      iVar2 = -0x5100;
    }
    else {
      bVar1 = *(byte *)(*param_1 + 5);
      iVar2 = FUN_ram_48176caa(param_1,auStack_60);
      if ((((iVar2 == 0) && (iVar2 = FUN_ram_48176bfe(param_1), iVar2 == 0)) &&
          (iVar2 = FUN_ram_48176c62(param_1,iVar3 + (uint)bVar1,*(undefined1 *)(*param_1 + 5)),
          iVar2 == 0)) &&
         (iVar2 = FUN_ram_48176c62(param_1,auStack_60,*(undefined1 *)(*param_1 + 4)), iVar2 == 0)) {
        iVar2 = FUN_ram_48176caa(param_1,param_2);
      }
    }
  }
  return iVar2;
}


