/* Firmware entry: 0x480ca398 */

void FUN_ram_480ca398(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 local_d4 [41];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
  *(undefined4 *)(param_1 + 0x1e08) = param_3;
  FUN_ram_4ff3ee10(param_1 + 0x2864);
  if ((*(char *)((int)param_2 + 0xd) != '\x01') && (*(char *)((int)param_2 + 0xd) != '\x02')) {
    return;
  }
  if (*param_2 != 0x3fd) {
    return;
  }
  if ((char)param_2[1] != '\b') {
    return;
  }
  iVar4 = FUN_ram_48025ba6();
  iVar3 = *(int *)(param_1 + 0x33e8);
  if ((((iVar3 == 0) || (*(int *)(param_4 + 0x10) == 0 && *(int *)(param_4 + 0x14) == 0)) ||
      (*(int *)(param_4 + 0x18) == 0)) || (*(short *)(param_4 + 0x1c) == -1)) {
LAB_ram_480ca5e0:
    FUN_ram_480c8ec2(param_1 + 0x79cc,param_4,iVar4);
    FUN_ram_4809f878(param_1 + 0x33f4,param_2,param_4);
    if (param_5 == 0) {
      return;
    }
  }
  else {
    FUN_ram_48025b94();
    iVar12 = *(int *)(param_4 + 0x10);
    iVar11 = *(int *)(param_4 + 0x14);
    if (((iVar12 == 0 && iVar11 == 0) || (iVar13 = *(int *)(param_4 + 0x18), iVar13 == 0)) ||
       (sVar2 = *(short *)(param_4 + 0x1c), sVar2 == -1)) goto LAB_ram_480ca5e0;
    iVar10 = iVar3 + 0xc;
    if (param_5 == 0) {
      FUN_ram_4ff3ec14(iVar10,0xffffffff);
      iVar11 = FUN_ram_48032748(iVar3 + 8,iVar12,iVar11,iVar13,sVar2);
      if ((iVar11 != 0) && (*(char *)(iVar11 + 0x41) == '\0')) {
        sVar2 = *(short *)(iVar3 + 0x3bfc);
        *(undefined1 *)(iVar11 + 0x41) = 2;
        *(short *)(iVar3 + 0x3bfc) = sVar2 + -1;
        FUN_ram_48044ec6(iVar3 + 8,iVar11);
      }
      FUN_ram_4ff3ee10(iVar10);
      FUN_ram_480c8ec2(param_1 + 0x79cc,param_4,iVar4);
      FUN_ram_4809f878(param_1 + 0x33f4,param_2,param_4);
      return;
    }
    FUN_ram_4ff3ec14();
    iVar11 = FUN_ram_48032748(iVar3 + 8,iVar12,iVar11,iVar13,sVar2);
    if ((iVar11 != 0) && (*(char *)(iVar11 + 0x41) == '\0')) {
      sVar2 = *(short *)(iVar3 + 0x3bfc);
      cVar1 = *(char *)(iVar11 + 0x40);
      *(undefined1 *)(iVar11 + 0x41) = 1;
      *(short *)(iVar3 + 0x3bfc) = sVar2 + -1;
      if (cVar1 == '\0') {
        *(undefined1 *)(iVar11 + 0x40) = 1;
      }
      FUN_ram_48044ec6(iVar3 + 8,iVar11);
    }
    FUN_ram_4ff3ee10(iVar10);
    FUN_ram_480c8ec2(param_1 + 0x79cc,param_4,iVar4);
    FUN_ram_4809f878(param_1 + 0x33f4,param_2,param_4);
  }
  iVar3 = FUN_ram_48025b94();
  if ((*(char *)((int)param_2 + 0xe) != '\0') || (param_2[4] != 0)) {
    iVar4 = iVar4 - (uint)(iVar3 - param_2[4]) / 1000;
  }
  cVar1 = *(char *)((int)param_2 + 0xd);
  iVar3 = 1;
  if (cVar1 == '\x01') {
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    iVar3 = 0;
    iVar11 = *(int *)(param_1 + 0x1370) + 1;
  }
  else if (cVar1 == '\x02') {
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    iVar11 = *(int *)(param_1 + 0x1370) + 1;
  }
  else {
    if (cVar1 != '\x04') {
      FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
      *(int *)(param_1 + 0x1370) = *(int *)(param_1 + 0x1370) + 1;
      goto LAB_ram_480ca574;
    }
    FUN_ram_4ff3ec14();
    iVar11 = *(int *)(param_1 + 0x1370) + 1;
    iVar3 = 2;
  }
  iVar3 = param_1 + iVar3 * 4;
  *(int *)(param_1 + 0x1370) = iVar11;
  *(int *)(iVar3 + 0x13a0) = iVar4;
  *(int *)(iVar3 + 0x137c) = *(int *)(iVar3 + 0x137c) + 1;
LAB_ram_480ca574:
  FUN_ram_4ff3ee10(param_1 + 0xb20);
  FUN_ram_480ca012(param_1 + 0x79cc,param_2,iVar4);
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar9 = (undefined4 *)(param_1 + 0xb38);
  puVar8 = local_d4;
  do {
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    *puVar8 = *puVar9;
    puVar8[1] = uVar5;
    puVar8[2] = uVar6;
    puVar8[3] = uVar7;
    puVar9 = puVar9 + 4;
    puVar8 = puVar8 + 4;
  } while (puVar9 != (undefined4 *)(param_1 + 0xbd8));
  *puVar8 = *puVar9;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  FUN_ram_4809ec88(param_1 + 0x79cc,local_d4);
  return;
}


