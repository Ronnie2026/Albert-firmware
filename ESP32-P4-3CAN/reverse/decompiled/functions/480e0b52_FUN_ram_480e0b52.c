/* Firmware entry: 0x480e0b52 */

void FUN_ram_480e0b52(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_4ff3d9a8();
  fence();
  *(undefined4 *)(param_1 + 0x9814) = uVar3;
  if (*(int *)(param_1 + 0x978c) == 0) {
    uVar3 = FUN_ram_4ff3aca6(8,4,param_1 + 0x97f0,param_1 + 0x9790,0);
    *(undefined4 *)(param_1 + 0x978c) = uVar3;
  }
  iVar2 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  *(int **)(param_1 + 0x1e08) = param_2;
  FUN_ram_4ff3ee10(iVar2);
  if (param_2 != (int *)0x0) {
    pcVar8 = *(code **)(*param_2 + 0x4c);
    FUN_ram_4ff3ec14(param_1 + 0x8200,0xffffffff);
    uVar1 = *(undefined1 *)(param_1 + 0x8209);
    FUN_ram_4ff3ee10(param_1 + 0x8200);
    (*pcVar8)(param_2,uVar1);
  }
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  piVar6 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar2);
  uVar3 = 0;
  if (piVar6 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar6 + 0x154))(piVar6,1);
  }
  *(undefined4 *)(param_1 + 0x9c4) = uVar3;
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  piVar6 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar2);
  uVar3 = 0;
  if (piVar6 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar6 + 0x154))(piVar6,2);
  }
  *(undefined4 *)(param_1 + 0x9c8) = uVar3;
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  piVar6 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar2);
  uVar3 = 0;
  if (piVar6 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar6 + 0x154))(piVar6,4);
  }
  *(undefined4 *)(param_1 + 0x9cc) = uVar3;
  uVar3 = FUN_ram_48025ba6();
  uVar4 = FUN_ram_48025b94();
  FUN_ram_480e0028(param_1 + 0x33f4,uVar3,uVar4);
  iVar2 = FUN_ram_480597a8(param_1);
  iVar7 = 0;
  if (param_2 != (int *)0x0) {
    iVar7 = (**(code **)(*param_2 + 0x14))(param_2,0);
  }
  FUN_ram_480599fe(param_1,0);
  FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
  iVar5 = -1;
  if (iVar2 != 0) {
    iVar5 = iVar7 + -1;
  }
  *(int *)(param_1 + 0x9784) = iVar5;
  FUN_ram_4ff3ee10(param_1 + 0xb30);
  return;
}


