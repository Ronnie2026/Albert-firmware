/* Firmware entry: 0x480982aa */

void FUN_ram_480982aa(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x21d,0xffffffff);
  iVar10 = 0;
  if (param_1[0xc] != 0) {
    iVar10 = FUN_ram_4ff3b9c2();
  }
  uVar8 = 0;
  if (param_1[0x24] != 0) {
    uVar8 = FUN_ram_4ff3b9c2();
  }
  piVar4 = (int *)param_1[0x3c];
  uVar11 = 0;
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 0) {
      if (piVar4[1] != 0) {
        uVar11 = (uint)*(byte *)(piVar4[1] + 0x13a);
      }
    }
    else {
      uVar11 = (uint)*(byte *)(*piVar4 + 0x952);
    }
  }
  iVar7 = 0;
  if (param_1[0x3e] != 0) {
    iVar7 = FUN_ram_4ff3b9c2();
  }
  uVar9 = 0;
  if (param_1[0x3d] != 0) {
    uVar9 = (uint)*(byte *)(param_1[0x3d] + 0x602);
  }
  iVar6 = 0;
  if (param_1[0x56] != 0) {
    iVar6 = FUN_ram_4ff3b9c2();
  }
  bVar1 = false;
  if (*param_1 != 0) {
    fence();
    bVar1 = *(char *)(*param_1 + 0x18d88) != '\0';
  }
  uVar11 = *(byte *)(param_1 + 0x21c) + uVar11;
  param_1[0xbf2] = uVar11;
  param_1[0xbbf] = uVar8;
  uVar3 = (uint)*(byte *)(param_1 + 0x141) + iVar6 + (uint)*(byte *)(param_1 + 0x122);
  uVar2 = iVar7 + (uint)*(byte *)((int)param_1 + 0x505);
  uVar5 = (uint)*(byte *)(param_1 + 0x141) + (uint)*(byte *)((int)param_1 + 0x505) + iVar10 + uVar8
          + uVar11 + iVar7 + uVar9 + iVar6 + (uint)*(byte *)(param_1 + 0x122);
  if (bVar1) {
    uVar2 = uVar2 + uVar9;
  }
  else {
    uVar3 = uVar3 + uVar9;
  }
  param_1[0xbf5] = uVar2;
  param_1[0xc01] = uVar3;
  param_1[0xc19] = uVar5;
  if ((uint)param_1[0xbc0] < uVar8) {
    param_1[0xbc0] = uVar8;
  }
  if ((uint)param_1[0xbf3] < uVar11) {
    param_1[0xbf3] = uVar11;
  }
  if ((uint)param_1[0xbf6] < uVar2) {
    param_1[0xbf6] = uVar2;
  }
  if ((uint)param_1[0xc02] < uVar3) {
    param_1[0xc02] = uVar3;
  }
  if ((uint)param_1[0xc1b] < uVar5) {
    param_1[0xc1b] = uVar5;
  }
  FUN_ram_4ff3ee10(param_1 + 0x21d);
  return;
}


