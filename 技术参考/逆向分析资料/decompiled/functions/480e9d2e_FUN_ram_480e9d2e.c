/* Firmware entry: 0x480e9d2e */

void FUN_ram_480e9d2e(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(param_1 + 0x9819);
  fence();
  iVar4 = *(int *)(param_1 + 0x9810);
  fence();
  iVar3 = FUN_ram_4ff3d9a8();
  if (iVar4 == 0) {
    fence();
    if (((*(char *)(param_1 + 0x9818) != '\0') && (fence(), iVar3 == *(int *)(param_1 + 0x9814))) ||
       (iVar3 == 0)) goto LAB_ram_480e9dce;
  }
  else {
    if (iVar3 == iVar4) {
LAB_ram_480e9dce:
      FUN_ram_480e8070(param_1,param_2);
      return;
    }
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x978c) != 0)) {
      iVar3 = FUN_ram_4ff3aca6(1,0,0,param_2 + 400,3);
      *(int *)(param_2 + 0x18c) = iVar3;
      if ((iVar3 != 0) &&
         (aiStack_24[0] = param_2,
         iVar3 = FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 0x978c),aiStack_24,0xffffffff,0),
         iVar3 == 1)) {
        FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
        piVar2 = *(int **)(param_1 + 0x1e08);
        FUN_ram_4ff3ee10(param_1 + 0x2864);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x14c))(piVar2);
        }
        FUN_ram_4ff3b5f0(*(undefined4 *)(param_2 + 0x18c),0xffffffff);
        return;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x181) = 0;
  return;
}


