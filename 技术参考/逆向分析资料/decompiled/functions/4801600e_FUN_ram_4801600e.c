/* Firmware entry: 0x4801600e */

void FUN_ram_4801600e(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)(param_1 + 6);
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)(param_1);
  }
  *(char *)(param_1 + 0x27) = (char)*(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(char *)(param_1 + 0x2c) = (char)*(undefined4 *)(param_2 + 0x24);
  uVar5 = *(uint *)(param_2 + 0x38);
  iVar4 = *(int *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  iVar3 = *(int *)(iVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(uint *)(param_1 + 0x40) =
       uVar5 & 0xf | uVar5 >> 4 & 0x10 | uVar5 >> 4 & 0x20 | (uVar5 & 0x10) << 2 |
       (uVar5 & 0x20) << 2 | (uVar5 & 0x40) << 2 | (uVar5 & 0x80) << 2 | uVar5 & 0xfc00;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  if ((iVar3 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)(param_1 + 0x44);
    iVar4 = *(int *)(param_2 + 0x3c);
  }
  *(char *)(param_1 + 0x47) = (char)*(undefined4 *)(iVar4 + 0x14);
  *(char *)(param_1 + 0x48) = (char)*(undefined4 *)(iVar4 + 0x18);
  *(char *)(param_1 + 0x49) = (char)*(undefined4 *)(iVar4 + 0x1c);
  uVar1 = *(undefined4 *)(iVar4 + 0x20);
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x40) + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 0x44);
  *(char *)(param_1 + 0x58) = (char)*(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(char *)(param_1 + 0x50) = (char)uVar2;
  *(char *)(param_1 + 0x59) = (char)uVar6;
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  return;
}


