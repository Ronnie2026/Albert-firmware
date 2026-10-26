/* Firmware entry: 0x4ff3d7f2 */

int FUN_ram_4ff3d7f2(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_2 + 4) + 4);
  if (*(int *)(param_2 + 4) == param_2 + 8) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_2 + 4) + 4);
  }
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 0xc);
  iVar1 = 0;
  do {
    while (iVar3 = iVar1, *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_2 + 4) + 4),
          param_2 + 8 == *(int *)(param_2 + 4)) {
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_2 + 4) + 4);
      iVar2 = *(int *)(*(int *)(param_2 + 4) + 0xc);
      FUN_ram_4ff3d67e(iVar2,param_1,1,param_3);
      param_1 = param_1 + 0x28;
      iVar1 = iVar3 + 1;
      if (iVar4 == iVar2) goto LAB_ram_4ff3d868;
    }
    iVar2 = *(int *)(*(int *)(param_2 + 4) + 0xc);
    FUN_ram_4ff3d67e(iVar2,param_1,1,param_3);
    param_1 = param_1 + 0x28;
    iVar1 = iVar3 + 1;
  } while (iVar4 != iVar2);
LAB_ram_4ff3d868:
  return iVar3 + 1;
}


