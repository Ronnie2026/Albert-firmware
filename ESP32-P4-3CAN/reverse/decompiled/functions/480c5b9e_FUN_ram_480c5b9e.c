/* Firmware entry: 0x480c5b9e */

undefined4 * FUN_ram_480c5b9e(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int *piVar9;
  int *piVar10;
  
  uVar4 = DAT_ram_48223ad4;
  uVar3 = DAT_ram_48223ad0;
  uVar7 = DAT_ram_48223acc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(undefined1 *)(param_3 + 10);
  cVar2 = *(char *)(param_3 + 0xc);
  *param_1 = DAT_ram_48223ac8;
  param_1[1] = uVar7;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined1 *)((int)param_1 + 1) = uVar1;
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_3 + 1);
    *(undefined1 *)((int)param_1 + 2) = 0;
    bVar5 = 0;
  }
  else {
    bVar5 = FUN_ram_48045922(*(undefined4 *)(param_2 + 4),2,0);
    cVar2 = *(char *)(param_3 + 1);
    *(byte *)((int)param_1 + 2) = bVar5;
  }
  if (cVar2 == '\f') {
    bVar5 = bVar5 ^ 1;
    bVar8 = *(byte *)(param_3 + 0xc) ^ 1;
  }
  else {
    iVar6 = FUN_ram_48045922(*(undefined4 *)(param_2 + 4),1,0);
    bVar8 = *(byte *)(param_3 + 0xc) ^ 1;
    if (iVar6 == 0) {
      *(undefined1 *)((int)param_1 + 3) = 0;
      bVar5 = 1;
    }
    else {
      bVar5 = bVar5 ^ 1;
    }
  }
  piVar10 = *(int **)(param_2 + 4);
  piVar9 = piVar10 + 0x297;
  *(byte *)(param_1 + 1) = bVar8;
  *(byte *)((int)param_1 + 7) = bVar5;
  FUN_ram_4ff3ec14(piVar9,0xffffffff);
  piVar10 = (int *)*piVar10;
  FUN_ram_4ff3ee10(piVar9);
  uVar7 = 0;
  if (piVar10 != (int *)0x0) {
    uVar7 = (**(code **)(*piVar10 + 0x154))(piVar10,2);
  }
  param_1[3] = uVar7;
  return param_1;
}


