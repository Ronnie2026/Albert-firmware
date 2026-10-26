/* Firmware entry: 0x4812326e */

undefined4 FUN_ram_4812326e(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  int iStack_18;
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x2c) == 0) {
    bVar1 = param_1[0xbd];
    bVar10 = bVar1 & 3;
    param_1[0xbd] = bVar10;
    if ((bVar10 != 2) &&
       (((*(int *)(param_1 + 0x30) != 0 || ((bVar1 & 1) == 0)) ||
        (**(char **)(param_1 + 0xc) == -0x17)))) goto LAB_ram_48123292;
    param_1[0xbd] = bVar10 | 4;
    if (param_1[0x48] == '\0') goto LAB_ram_48123404;
LAB_ram_4812329a:
    bVar1 = param_1[0xbd];
  }
  else {
LAB_ram_48123292:
    if (param_1[0x48] != '\0') goto LAB_ram_4812329a;
LAB_ram_48123404:
    FUN_ram_4802a368(param_1 + 0x4c,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    bVar1 = param_1[0xbd];
  }
  if (((bVar1 & 4) != 0) && (iVar9 = FUN_ram_481230e6(param_1), iVar9 == 0)) {
    FUN_ram_48122b98(param_1);
    *param_1 = 0xd;
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0x2c);
  if (iVar9 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (**(char **)(param_1 + 0xc) != -0x17) {
        FUN_ram_48122b98(param_1);
        *param_1 = 8;
        return 0;
      }
      iVar9 = FUN_ram_48194ed0(0x10,&DAT_ram_4823acc0);
      *(int *)(param_1 + 0x10) = iVar9;
      if (iVar9 == 0) {
        uVar14 = FUN_ram_4ff21a0a();
        uVar6 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                                );
        uVar7 = __udivdi3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): _skipBuffer allocation failed\r\n",uVar7,uVar6,0x24c
                         ,"_writeBuffer");
        return 0;
      }
      uVar3 = 0x10;
      uVar4 = 0x10;
      FUN_ram_4ff45158(iVar9,*(undefined4 *)(param_1 + 0xc),0x10);
      iVar9 = *(int *)(param_1 + 0x2c);
      if (iVar9 != 0) goto LAB_ram_481232ac;
    }
    else {
      uVar4 = 0;
    }
    iVar9 = 0;
    uVar3 = uVar4;
    if (*(int *)(param_1 + 0x24) != 0) {
      auStack_14[0] = *(undefined4 *)(param_1 + 0x18);
      iStack_18 = 0;
      (**(code **)(param_1 + 0x28))(param_1 + 0x1c,&iStack_18,auStack_14);
      iVar9 = *(int *)(param_1 + 0x2c);
    }
  }
  else {
    uVar3 = 0;
  }
LAB_ram_481232ac:
  iVar8 = *(int *)(param_1 + 0x34);
  uVar11 = *(uint *)(iVar8 + 0xc);
  uVar4 = uVar11 + iVar9;
  if (((uint)(*(int *)(param_1 + 0x18) - iVar9) < 0x10000) || ((uVar4 & 0xffff) != 0)) {
    if ((((uVar11 & 0xffff) == 0) || (((uVar11 >> 0x10) + 1) * 0x10000 <= uVar4)) &&
       (uVar4 < (uVar11 + *(int *)(param_1 + 0x18) & 0xffff0000))) goto LAB_ram_481232e6;
    iVar9 = FUN_ram_480296d0(&DAT_ram_4ff6dc18,iVar8,iVar9,0x1000);
  }
  else {
    iVar9 = FUN_ram_480296d0(&DAT_ram_4ff6dc18);
  }
  if (iVar9 == 0) {
    FUN_ram_48122b98(param_1);
    *param_1 = 2;
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x34);
  iVar9 = *(int *)(param_1 + 0x2c);
LAB_ram_481232e6:
  uVar4 = *(uint *)(param_1 + 0x14) - uVar3;
  if (((*(char *)(iVar8 + 0x29) == '\0') && (uVar3 != *(uint *)(param_1 + 0x14))) &&
     ((uVar4 & 3) == 0)) {
    piVar12 = (int *)((uVar3 >> 2) + *(int *)(param_1 + 0xc));
    piVar13 = (int *)((uVar4 & 0xfffffffc) + (int)piVar12);
    do {
      iVar5 = *piVar12;
      piVar12 = piVar12 + 1;
      if (iVar5 != -1) goto LAB_ram_4812331a;
    } while (piVar13 != piVar12);
  }
  else {
LAB_ram_4812331a:
    iVar9 = FUN_ram_480296ec(&DAT_ram_4ff6dc18,iVar8,iVar9 + uVar3,*(int *)(param_1 + 0xc) + uVar3);
    if (iVar9 == 0) {
      FUN_ram_48122b98(param_1);
      *param_1 = 1;
      return 0;
    }
    iVar9 = *(int *)(param_1 + 0x2c);
  }
  if ((iVar9 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    **(undefined1 **)(param_1 + 0xc) = 0xe9;
    cVar2 = param_1[0x48];
  }
  else {
    cVar2 = param_1[0x48];
  }
  if (cVar2 != '\0') {
    FUN_ram_4802a368(param_1 + 0x4c,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  }
  iStack_18 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  iStack_18 = *(int *)(param_1 + 0x2c) + iStack_18;
  *(int *)(param_1 + 0x2c) = iStack_18;
  if (*(int *)(param_1 + 0x24) != 0) {
    auStack_14[0] = *(undefined4 *)(param_1 + 0x18);
    (**(code **)(param_1 + 0x28))
              (param_1 + 0x1c,&iStack_18,auStack_14,auStack_14[0],*(code **)(param_1 + 0x28));
  }
  return 1;
}


