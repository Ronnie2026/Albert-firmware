/* Firmware entry: 0x4804862a */

void FUN_ram_4804862a(char *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = 0;
  if (*(char *)(param_2 + 6) != '\0') {
    uVar6 = *(int *)(param_2 + 0x10) - param_3 & param_3 - *(int *)(param_2 + 0x10) >> 0x1f;
  }
  cVar5 = *(char *)(param_2 + 5);
  *param_1 = cVar5;
  if (cVar5 == '\0') {
    param_1[1] = '\0';
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(param_2 + 0xb);
    param_1[1] = (*(char *)(param_2 + 10) == '\x01') + '\x01';
    cVar5 = cVar5 + '\x01';
  }
  uVar1 = *(undefined2 *)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x24);
  *(uint *)(param_1 + 8) = uVar6;
  param_1[2] = cVar5;
  *(undefined2 *)(param_1 + 4) = uVar1;
  *(int *)(param_1 + 0xc) = iVar3;
  iVar7 = -1;
  if (iVar3 != 0) {
    iVar7 = param_3 - *(int *)(param_2 + 0x28);
  }
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  cVar5 = *(char *)(param_2 + 0x38);
  *(int *)(param_1 + 0x10) = iVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  param_1[0x20] = cVar5;
  return;
}


