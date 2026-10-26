/* Firmware entry: 0x48089eac */

void FUN_ram_48089eac(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uStack_178;
  undefined4 *****pppppuStack_174;
  undefined4 *****apppppuStack_170 [2];
  uint uStack_168;
  byte bStack_161;
  uint auStack_160 [4];
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined4 auStack_130 [67];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(apppppuStack_170,&DAT_ram_481c4164);
  if ((char)bStack_161 < '\0') {
    uVar13 = bStack_161 & 0x7f;
    if ((bStack_161 & 0x7f) != 0) goto LAB_ram_48089ef4;
LAB_ram_48089f0c:
    FUN_ram_4802af5a(apppppuStack_170,0x2c);
  }
  else {
    if (((undefined4 ******)apppppuStack_170[0] == (undefined4 ******)0x0) ||
       (uVar13 = uStack_168, uStack_168 == 0)) goto LAB_ram_48089f0c;
LAB_ram_48089ef4:
    pbVar9 = (byte *)FUN_ram_4802b206(apppppuStack_170,uVar13 - 1);
    if ((*pbVar9 & 0xdf) != 0x5b) goto LAB_ram_48089f0c;
  }
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c4274);
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c67c4);
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c3dec);
  if (*(char *)(param_2 + 2) == '\0') {
    pcVar8 = "stored";
    if ((char)bStack_161 < '\0') goto LAB_ram_4808a300;
LAB_ram_48089f62:
    if (((undefined4 ******)apppppuStack_170[0] == (undefined4 ******)0x0) ||
       (uVar13 = uStack_168, uStack_168 == 0)) goto LAB_ram_48089f82;
LAB_ram_48089f6a:
    pbVar9 = (byte *)FUN_ram_4802b206(apppppuStack_170,uVar13 - 1);
    if ((*pbVar9 & 0xdf) != 0x5b) goto LAB_ram_48089f82;
  }
  else {
    pcVar8 = "pending";
    if (-1 < (char)bStack_161) goto LAB_ram_48089f62;
LAB_ram_4808a300:
    uVar13 = bStack_161 & 0x7f;
    if ((bStack_161 & 0x7f) != 0) goto LAB_ram_48089f6a;
LAB_ram_48089f82:
    FUN_ram_4802af5a(apppppuStack_170,0x2c);
  }
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  FUN_ram_4802af2c(apppppuStack_170,"persistence");
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  bVar4 = *pcVar8;
  while (bVar4 != 0) {
    while ((bVar4 != 0x22 && (bVar4 != 0x5c))) {
      if (0x1f < bVar4) goto LAB_ram_48089fe8;
      bVar4 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      if (bVar4 == 0) goto LAB_ram_48089ff8;
    }
    FUN_ram_4802af5a(apppppuStack_170,0x5c);
LAB_ram_48089fe8:
    pcVar8 = pcVar8 + 1;
    FUN_ram_4802af5a(apppppuStack_170,bVar4);
    bVar4 = *pcVar8;
  }
LAB_ram_48089ff8:
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  uVar5 = *(undefined4 *)(param_2 + 4);
  if ((char)bStack_161 < '\0') {
    uVar13 = bStack_161 & 0x7f;
    if ((bStack_161 & 0x7f) != 0) goto LAB_ram_4808a016;
LAB_ram_4808a02e:
    FUN_ram_4802af5a(apppppuStack_170,0x2c);
  }
  else {
    if (((undefined4 ******)apppppuStack_170[0] == (undefined4 ******)0x0) ||
       (uVar13 = uStack_168, uStack_168 == 0)) goto LAB_ram_4808a02e;
LAB_ram_4808a016:
    pbVar9 = (byte *)FUN_ram_4802b206(apppppuStack_170,uVar13 - 1);
    if ((*pbVar9 & 0xdf) != 0x5b) goto LAB_ram_4808a02e;
  }
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  FUN_ram_4802af2c(apppppuStack_170,"generation");
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c67c4);
  FUN_ram_4802aa44(&uStack_150,uVar5,10);
  FUN_ram_4802ae48(apppppuStack_170,&uStack_150);
  FUN_ram_4802a59e(&uStack_150);
  if ((char)bStack_161 < '\0') {
    uVar13 = bStack_161 & 0x7f;
    if ((bStack_161 & 0x7f) != 0) goto LAB_ram_4808a082;
LAB_ram_4808a09a:
    FUN_ram_4802af5a(apppppuStack_170,0x2c);
  }
  else {
    if (((undefined4 ******)apppppuStack_170[0] == (undefined4 ******)0x0) ||
       (uVar13 = uStack_168, uStack_168 == 0)) goto LAB_ram_4808a09a;
LAB_ram_4808a082:
    pbVar9 = (byte *)FUN_ram_4802b206(apppppuStack_170,uVar13 - 1);
    if ((*pbVar9 & 0xdf) != 0x5b) goto LAB_ram_4808a09a;
  }
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c7a3c);
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c67c4);
  FUN_ram_4802a928(&uStack_150,param_1,10);
  FUN_ram_4802ae48(apppppuStack_170,&uStack_150);
  FUN_ram_4802a59e(&uStack_150);
  iVar6 = DAT_ram_4ff6ded4;
  memset(&uStack_150,0,0x120);
  if ((*(char *)(iVar6 + 0x18) != '\0') && (iVar6 = *(int *)(iVar6 + 0x14), iVar6 != 0)) {
    iVar10 = (int)&uStack_150 + 3;
    iVar7 = iVar6 + 0xc;
    do {
      while( true ) {
        uVar2 = *(ushort *)(iVar7 + -0xc);
        cVar1 = *(char *)(iVar7 + 0x16c);
        uVar5 = *(undefined4 *)(iVar7 + 0x164);
        uVar12 = *(undefined4 *)(iVar7 + 0x168);
        *(ushort *)(iVar10 + -3) = uVar2;
        *(bool *)(iVar10 + -1) = cVar1 != '\0';
        *(undefined4 *)(iVar10 + 0x19) = uVar5;
        *(undefined4 *)(iVar10 + 0x1d) = uVar12;
        if ((uVar2 >> 8 & 1) == 0) break;
        iVar10 = FUN_ram_4ff45158(iVar10,iVar7,0x19);
        *(undefined1 *)(iVar10 + 0x18) = 0;
        iVar7 = iVar7 + 0x17c;
        iVar10 = iVar10 + 0x24;
        if (iVar6 + 0xbec == iVar7) goto LAB_ram_4808a168;
      }
      iVar7 = iVar7 + 0x17c;
      iVar10 = iVar10 + 0x24;
    } while (iVar6 + 0xbec != iVar7);
  }
LAB_ram_4808a168:
  uVar5 = auStack_130[param_1 * 9];
  if ((char)bStack_161 < '\0') {
    uVar13 = bStack_161 & 0x7f;
    if ((bStack_161 & 0x7f) != 0) goto LAB_ram_4808a184;
  }
  else if (((undefined4 ******)apppppuStack_170[0] != (undefined4 ******)0x0) &&
          (uVar13 = uStack_168, uStack_168 != 0)) {
LAB_ram_4808a184:
    pbVar9 = (byte *)FUN_ram_4802b206(apppppuStack_170,uVar13 - 1);
    if ((*pbVar9 & 0xdf) == 0x5b) goto LAB_ram_4808a1a6;
  }
  FUN_ram_4802af5a(apppppuStack_170,0x2c);
LAB_ram_4808a1a6:
  FUN_ram_4802af5a(apppppuStack_170,0x22);
  FUN_ram_4802af2c(apppppuStack_170,"persistedGeneration");
  FUN_ram_4802af2c(apppppuStack_170,&DAT_ram_481c67c4);
  FUN_ram_4802aa44(auStack_160,uVar5,10);
  FUN_ram_4802ae48(apppppuStack_170,auStack_160);
  FUN_ram_4802a59e(auStack_160);
  FUN_ram_4802af5a(apppppuStack_170,0x7d);
  iVar6 = DAT_ram_4ff6ded8;
  if ((char)bStack_161 < '\0') {
    apppppuStack_170[0] = apppppuStack_170;
    auStack_160[0] = bStack_161 & 0x7f;
  }
  else {
    auStack_160[0] = 0;
    if ((undefined4 ******)apppppuStack_170[0] != (undefined4 ******)0x0) {
      auStack_160[0] = uStack_168;
    }
  }
  iVar7 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
  iVar10 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
  uStack_178 = 200;
  cVar1 = *(char *)(iVar7 * 0x1d40 + iVar10 + 0x44c);
  pppppuStack_174 = apppppuStack_170[0];
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    puVar3 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
    if (((code *)*puVar3 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
      *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
      (*(code *)*puVar3)(&uStack_178,&pppppuStack_174,auStack_160);
      *(undefined1 *)(iVar6 + 0x2c) = 0;
    }
    uVar13 = auStack_160[0];
    if (auStack_160[0] == 0) {
      uVar13 = 1;
    }
    iVar11 = FUN_ram_4ff206d8(uVar13,0x404);
    iVar7 = iVar7 * 0x1d40;
    iVar14 = iVar10 + iVar7;
    *(int *)(iVar14 + 0x1cdc) = iVar11;
    if (iVar11 == 0) {
      if (*(char *)(iVar14 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar10 + iVar7 + 0x1c,7);
      }
    }
    else {
      if (auStack_160[0] != 0) {
        FUN_ram_4ff45158(iVar11,pppppuStack_174,auStack_160[0]);
        iVar11 = *(int *)(iVar14 + 0x1cdc);
      }
      iVar7 = *(int *)(iVar6 + 0x4c) + *(int *)(iVar6 + 0x40) * 0x1d40;
      if ((*(char *)(iVar7 + 0x44c) != '\0') && (*(char *)(iVar7 + 0x44c) != '\x06')) {
        *(int *)(iVar7 + 0x1ce0) = iVar11;
        *(uint *)(iVar7 + 0x1ce4) = auStack_160[0];
        *(undefined4 *)(iVar7 + 0x1ce8) = 0;
        puStack_14c = &LAB_ram_4802d3f2;
        uStack_150 = iVar7;
        FUN_ram_48066484(iVar6,uStack_178,"application/json",iVar7,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppppuStack_170);
  return;
}


