/* Firmware entry: 0x4815d48a */

int FUN_ram_4815d48a(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = strlen(param_2);
  if (0x10 < sVar1) {
    return 0x102;
  }
  uVar2 = FUN_ram_4812e8c4();
  iVar3 = FUN_ram_4815d31e(param_1,param_2);
  if (iVar3 == 0) {
    if (uVar2 == 0) {
      return -1;
    }
    piStack_14 = (int *)0x0;
    iVar3 = FUN_ram_4815e0e8(param_2,&piStack_14);
    if (iVar3 == 0) {
      uVar4 = (**(code **)(*piStack_14 + 0x24))();
      iVar3 = FUN_ram_4815d360(param_1,piStack_14,0,uVar4 / uVar2);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piStack_14;
        }
        iVar5 = *(int *)(param_1 + 0x1c);
        piStack_14[1] = iVar3;
        piStack_14[2] = 0;
        *(int **)(param_1 + 0x20) = piStack_14;
        if (iVar5 == 0) {
          *(int **)(param_1 + 0x1c) = piStack_14;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        goto LAB_ram_4815d4b8;
      }
    }
    if (piStack_14 != (int *)0x0) {
      (**(code **)(*piStack_14 + 4))();
      return iVar3;
    }
  }
  else {
LAB_ram_4815d4b8:
    iVar3 = 0;
  }
  return iVar3;
}


