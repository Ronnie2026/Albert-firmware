/* Firmware entry: 0x480a1e02 */

void FUN_ram_480a1e02(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    return;
  }
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iVar2 = 2;
  while (fence(), (DAT_ram_4ff5ce9c & 1) != 0) {
    if (iVar2 == 1) goto LAB_ram_480a1ebe;
    iVar2 = 1;
  }
  fence();
  uStack_70 = DAT_ram_4ff5cea0;
  uStack_6c = DAT_ram_4ff5cea4;
  uStack_68 = DAT_ram_4ff5cea8;
  uStack_64 = DAT_ram_4ff5ceac;
  uStack_60 = DAT_ram_4ff5ceb0;
  uStack_5c = DAT_ram_4ff5ceb4;
LAB_ram_480a1ebe:
  uVar10 = FUN_ram_4ff21a0a();
  DAT_ram_4ff5cea8 = __divdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
  DAT_ram_4ff5cea0 = 1;
  DAT_ram_4ff5cea4 = 10;
  DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
  DAT_ram_4ff5ceb4 = 0;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  iVar8 = *(int *)(param_1 + 0x4c);
  iVar9 = iVar8 + 0xc;
  DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  FUN_ram_48065718(iVar9);
  iVar2 = iVar8;
  if (*(int *)(iVar8 + 0x10) < 0) {
LAB_ram_480a2048:
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_ram_48064bd0(&DAT_ram_4ff5ce9c,&uStack_58);
    uVar10 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    DAT_ram_4ff5cea0 = 1;
    DAT_ram_4ff5cea4 = 10;
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
    iVar8 = FUN_ram_48135fee(*(undefined4 *)(param_1 + 8),0,0);
    if (-1 < iVar8) {
      *(int *)(iVar2 + 0x10) = iVar8;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_84 = 0;
      uStack_88 = 1000;
      iVar4 = FUN_ram_4813746c(iVar8,4,0x4000);
      if ((-1 < iVar4) && (iVar4 = FUN_ram_481372bc(iVar8,0xfff,0x1005,&uStack_90), -1 < iVar4)) {
        if (*(int *)(param_1 + 0x48) == -1) {
          FUN_ram_48064fb4(iVar9);
          FUN_ram_4ff2bc94(6,0x101);
          FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_58);
          goto LAB_ram_480a2022;
        }
        iVar4 = *(int *)(param_1 + 0x48) + 1;
        *(int *)(param_1 + 0x48) = iVar4;
        *(int *)(iVar2 + 0x898) = iVar4;
        *(undefined4 *)(iVar2 + 0x89c) = 0;
        memset((void *)(iVar2 + 0x8b0),0,0x410);
        *(undefined1 *)(iVar2 + 0x1cf4) = 0;
        *(undefined1 *)(iVar2 + 0xcc2) = 0;
        *(undefined2 *)(iVar2 + 0xcc0) = 0;
        *(undefined4 *)(iVar2 + 0x1cc4) = 0;
        FUN_ram_4802b80a(iVar2 + 0x1ccc,0);
        *(undefined4 *)(iVar2 + 0x1ce0) = 0;
        *(undefined4 *)(iVar2 + 0x1ce8) = 0;
        *(undefined4 *)(iVar2 + 0x1ce4) = 0;
        *(undefined4 *)(iVar2 + 0x1cec) = 0;
        *(undefined4 *)(iVar2 + 0x1cf0) = 0;
        *(undefined4 *)(iVar2 + 0x1cf8) = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_94 = 0x10;
        iVar8 = FUN_ram_481371e6(iVar8,&uStack_80,&uStack_94);
        if ((iVar8 == 0) && (uStack_80._1_1_ == '\x02')) {
          FUN_ram_4819ad74(iVar2 + 0x8a0,0x10,"%u.%u.%u.%u",uStack_7c & 0xff,uStack_7c._1_1_,
                           uStack_7c._2_1_,uStack_7c._3_1_);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 8);
          uVar10 = FUN_ram_4ff21a0a();
          uVar6 = __divdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
          FUN_ram_4806690c(iVar2 + 0x1c,uVar6);
          FUN_ram_48070652(iVar2);
          goto LAB_ram_480a2236;
        }
      }
      FUN_ram_48064fb4(iVar9);
    }
LAB_ram_480a2236:
    FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_58);
  }
  else {
    iVar2 = iVar8 + 0x1d40;
    iVar9 = iVar8 + 0x1d4c;
    FUN_ram_48065718(iVar9);
    if (*(int *)(iVar8 + 0x1d50) < 0) goto LAB_ram_480a2048;
  }
  uVar3 = *(uint *)(param_1 + 0x44) & 1;
  iVar2 = *(int *)(param_1 + 0x4c);
  if ((*(char *)(uVar3 * 0x1d40 + iVar2 + 0x44c) != '\0') ||
     (uVar3 = *(uint *)(param_1 + 0x44) + 1 & 1, *(char *)(uVar3 * 0x1d40 + iVar2 + 0x44c) != '\0'))
  {
    iVar9 = iVar2 + (-uVar3 & 0x1d40);
    *(uint *)(param_1 + 0x40) = uVar3;
    *(uint *)(param_1 + 0x44) = uVar3 ^ 1;
    iVar8 = iVar2 + (-uVar3 & 0x1d40) + 0x1c;
    iVar2 = iVar2 + uVar3 * 0x1d40;
    iVar4 = *(int *)(iVar2 + 0x898);
    if ((iVar4 == 0) || ((&DAT_ram_4ff5ce98)[uVar3 + 0x24] != iVar4)) {
      uVar10 = FUN_ram_4ff21a0a();
      uVar6 = __divdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
      FUN_ram_480a1784(iVar8,uVar6,FUN_ram_48025b94);
    }
    else {
      (&DAT_ram_4ff5ce98)[uVar3 + 0x24] = 0;
      if (*(char *)(iVar2 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar8,4);
      }
    }
    uVar3 = (uint)*(byte *)(iVar9 + 0x44c);
    if (uVar3 < 5) {
      uVar5 = 5;
      if ((uVar3 < 3) && (uVar5 = 3, uVar3 != 1)) {
        uVar5 = (uint)(uVar3 == 2) << 2;
      }
    }
    else {
      uVar5 = 7;
      if (uVar3 != 5) {
        uVar5 = uVar3 & -(uint)(uVar3 == 6);
      }
    }
    uVar6 = *(undefined4 *)(iVar9 + 0x898);
    uVar3 = *(uint *)(iVar9 + 8);
    uVar10 = FUN_ram_4ff21a0a();
    if (*(char *)(iVar9 + 0x44c) == '\x01') {
      iVar2 = *(int *)(iVar9 + 0x480) + 5000;
    }
    else if (*(char *)(iVar9 + 0x44c) == '\x02') {
      iVar2 = *(int *)(iVar9 + 0x484) + 10000;
    }
    else {
      iVar2 = *(int *)(iVar9 + 0x480) + 120000;
    }
    if (uVar3 < 3) {
      uVar7 = *(undefined4 *)(iVar9 + 0x488);
      piVar1 = &DAT_ram_4ff5ced4 + uVar3 * 7;
      *piVar1 = *piVar1 + 1;
      (&DAT_ram_4ff5ced8)[uVar3 * 7] = uVar6;
      (&DAT_ram_4ff5cedc)[uVar3 * 7] = uVar5;
      uVar6 = __divdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
      (&DAT_ram_4ff5cee0)[uVar3 * 7] = uVar6;
      (&DAT_ram_4ff5cee4)[uVar3 * 7] = iVar2;
      (&DAT_ram_4ff5cee8)[uVar3 * 7] = uVar7;
      (&DAT_ram_4ff5ceec)[uVar3 * 7] = 0;
      *piVar1 = *piVar1 + 1;
    }
  }
LAB_ram_480a2022:
  FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_70);
  return;
}


