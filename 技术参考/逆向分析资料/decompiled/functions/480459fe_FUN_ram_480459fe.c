/* Firmware entry: 0x480459fe */

int FUN_ram_480459fe(undefined4 *param_1,int *param_2,int param_3,uint param_4,undefined1 param_5,
                    uint *param_6,undefined1 *param_7,int param_8,int param_9,byte param_10,
                    int *param_11,undefined4 param_12)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char cVar9;
  int *piVar10;
  int *piVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  byte *pbVar15;
  uint uVar16;
  undefined *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  undefined1 uStack_89;
  int local_88;
  int iStack_84;
  byte abStack_80 [56];
  undefined1 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 8;
  }
  if (param_4 == 0xe) {
    uVar5 = FUN_ram_48025ba6();
    goto LAB_ram_48045bf0;
  }
  fence();
  if (DAT_ram_4ff4b8d0 == '\0') {
    uVar5 = FUN_ram_48025ba6();
    if (param_4 != 1) goto LAB_ram_48045a5a;
LAB_ram_48045c42:
    if ((((*(byte *)((int)param_2 + 0xd) == param_4) && (*param_2 == 0x3fd)) &&
        ((char)param_2[1] == '\b')) && ((*(byte *)((int)param_2 + 5) & 7) == param_4)) {
      FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
      uVar21 = 0;
      goto LAB_ram_48045c82;
    }
LAB_ram_48045bf0:
    FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
    cVar9 = *(char *)((int)param_1 + 0xb);
joined_r0x48045c08:
    if (((cVar9 == '\0') || (piVar14 = (int *)*param_1, piVar14 == (int *)0x0)) ||
       ((((bVar1 = *(byte *)((int)param_2 + 0xd), bVar1 != 1 && ((bVar1 != 2 && (bVar1 != 4)))) ||
         (fence(), (bVar1 & *(byte *)(piVar14 + 4)) == 0)) ||
        (iVar6 = (**(code **)(*piVar14 + 0x154))(piVar14,*(undefined1 *)((int)param_2 + 0xd)),
        iVar6 == 0)))) goto LAB_ram_48045c0c;
    uVar21 = 0xff;
  }
  else {
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
    if (DAT_ram_4ff4b934 != 0) {
      puVar17 = &DAT_ram_4ff4b8c8;
      do {
        if (((*(int *)(puVar17 + 0xc) == *param_2) &&
            ((puVar17[0x10] & *(byte *)((int)param_2 + 0xd)) != 0)) &&
           (uVar21 = (uint)*(byte *)(param_2 + 1), uVar21 == (byte)puVar17[0x11])) {
          if (uVar21 == 0) {
LAB_ram_48045bd8:
            FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
            return 0;
          }
          pbVar15 = (byte *)((int)param_2 + 5);
          pbVar8 = pbVar15 + uVar21;
          bVar3 = true;
          puVar12 = puVar17;
          do {
            bVar1 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            bVar3 = (bool)(bVar3 & ((bVar1 ^ puVar12[0x1a]) & puVar12[0x12]) == 0);
            puVar12 = puVar12 + 1;
          } while (pbVar15 != pbVar8);
          if (bVar3) goto LAB_ram_48045bd8;
        }
        puVar17 = puVar17 + 0x18;
      } while (&DAT_ram_4ff4b8c8 + (uint)DAT_ram_4ff4b934 * 0x18 != puVar17);
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
    uVar5 = FUN_ram_48025ba6();
    if (param_4 == 1) goto LAB_ram_48045c42;
LAB_ram_48045a5a:
    uVar21 = 2;
    if (param_4 != 2) {
      if (param_4 != 10) goto LAB_ram_48045bf0;
      if (((*(char *)((int)param_2 + 0xd) == '\x04') && (*param_2 == 0x370)) &&
         ((char)param_2[1] == '\b')) {
        FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
        goto LAB_ram_48045c82;
      }
      FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
      cVar9 = *(char *)((int)param_1 + 0xb);
      goto joined_r0x48045c08;
    }
    if (((*(char *)((int)param_2 + 0xd) != '\x01') || (*param_2 != 0x3fd)) ||
       (((char)param_2[1] != '\b' || ((*(byte *)((int)param_2 + 5) & 7) != 2))))
    goto LAB_ram_48045bf0;
    FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
    uVar21 = 1;
LAB_ram_48045c82:
    cVar9 = *(char *)((int)param_1 + 0xb);
    param_1[uVar21 * 5 + 0x286] = param_1[uVar21 * 5 + 0x286] + 1;
    if (((((cVar9 == '\0') || (piVar14 = (int *)*param_1, piVar14 == (int *)0x0)) ||
         ((bVar1 = *(byte *)((int)param_2 + 0xd), bVar1 != 1 && ((bVar1 != 2 && (bVar1 != 4)))))) ||
        (fence(), (bVar1 & *(byte *)(piVar14 + 4)) == 0)) ||
       (iVar6 = (**(code **)(*piVar14 + 0x154))(piVar14,*(undefined1 *)((int)param_2 + 0xd)),
       iVar6 == 0)) {
      param_1[uVar21 * 5 + 0x288] = param_1[uVar21 * 5 + 0x288] + 1;
LAB_ram_48045c0c:
      FUN_ram_4ff3ee10(param_1 + 0x297);
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 2;
      }
      return 0;
    }
  }
  puVar20 = param_1 + 0x297;
  if ((param_8 != 0) && (param_8 != iVar6)) {
    FUN_ram_4ff3ee10(puVar20);
    if (param_7 == (undefined1 *)0x0) {
      return 0;
    }
    *param_7 = 10;
    return 0;
  }
  uVar16 = param_1[4] + 1;
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  uVar18 = uVar16 & 0x7f;
  param_1[4] = uVar16;
  if (*(char *)((int)param_1 + uVar18 * 0x14 + 0x29) != '\0') {
    if (uVar21 < 3) {
      param_1[uVar21 * 5 + 0x289] = param_1[uVar21 * 5 + 0x289] + 1;
    }
    FUN_ram_4ff3ee10(puVar20);
    if (param_7 == (undefined1 *)0x0) {
      return 0;
    }
    *param_7 = 7;
    return 0;
  }
  if (((param_4 - 1 & 0xff) < 2) || (param_4 == 10)) {
    cVar9 = '\x11';
    if ((uVar21 != 1) && (cVar9 = '\x12', uVar21 != 2)) {
      cVar9 = (uVar21 == 0) << 4;
    }
  }
  else if (param_4 < 0xb) {
    if (param_4 == 6) {
      cVar9 = '\x14';
    }
    else if (param_4 < 7) {
      cVar9 = '\x13';
      if (param_4 != 5) {
        if (param_4 < 3) {
          cVar9 = '\0';
        }
        else {
          cVar9 = '\x1c';
        }
      }
    }
    else if (param_4 == 8) {
LAB_ram_48046088:
      cVar9 = '\x16';
    }
    else {
      cVar9 = '\x17';
      if (param_4 != 9) {
        cVar9 = '\x15';
      }
    }
  }
  else if (param_4 == 0xd) {
    cVar9 = '\x1a';
  }
  else if (param_4 < 0xe) {
    cVar9 = (param_4 != 0xb) + '\x18';
  }
  else {
    cVar9 = '\x1b';
    if ((param_4 != 0xe) && (cVar9 = '\0', param_4 == 0xf)) goto LAB_ram_48046088;
  }
  uVar2 = *(undefined1 *)((int)param_2 + 0xd);
  *(char *)((int)param_2 + 0x1b) = cVar9;
  param_2[7] = uVar16;
  *(undefined1 *)((int)param_2 + 0x1a) = param_5;
  puVar19 = param_1 + uVar18 * 5 + 6;
  *(char *)(puVar19 + 2) = (char)uVar5;
  *(char *)(puVar19 + 3) = (char)iVar6;
  *(undefined1 *)(puVar19 + 4) = uVar2;
  *(char *)((int)puVar19 + 5) = (char)(uVar16 >> 8);
  *(char *)((int)puVar19 + 6) = (char)(uVar16 >> 0x10);
  *(char *)((int)puVar19 + 7) = (char)(uVar16 >> 0x18);
  *(char *)(puVar19 + 1) = (char)uVar16;
  *(char *)((int)puVar19 + 0xf) = (char)((uint)iVar6 >> 0x18);
  *(undefined1 *)((int)puVar19 + 0x11) = 1;
  *(char *)puVar19 = (char)param_4;
  *(undefined1 *)((int)puVar19 + 0x12) = 0;
  *(char *)((int)puVar19 + 9) = (char)((uint)uVar5 >> 8);
  *(char *)((int)puVar19 + 10) = (char)((uint)uVar5 >> 0x10);
  *(char *)((int)puVar19 + 0xb) = (char)((uint)uVar5 >> 0x18);
  *(char *)((int)puVar19 + 0xd) = (char)((uint)iVar6 >> 8);
  *(char *)((int)puVar19 + 0xe) = (char)((uint)iVar6 >> 0x10);
  FUN_ram_4ff3ee10(puVar20);
  uStack_89 = 8;
  if (param_11 == (int *)0x0) {
    memset(abStack_80,0,0x40);
    iStack_84 = param_9;
    abStack_80[0] = param_10 | param_9 != 0;
    uStack_48 = 0xff;
    local_88 = param_8;
  }
  else {
    piVar11 = param_11 + 0x12;
    piVar10 = &local_88;
    do {
      iVar6 = param_11[1];
      iVar7 = param_11[2];
      *piVar10 = *param_11;
      iVar22 = param_11[3];
      piVar10[1] = iVar6;
      iVar6 = param_11[4];
      piVar10[2] = iVar7;
      iVar7 = param_11[5];
      piVar10[3] = iVar22;
      piVar10[4] = iVar6;
      piVar10[5] = iVar7;
      param_11 = param_11 + 6;
      piVar10 = piVar10 + 6;
    } while (param_11 != piVar11);
  }
  iVar6 = *piVar14;
  if ((param_8 == 0) && (abStack_80[0] == 0)) {
    if (param_3 == 0) {
      iVar6 = (**(code **)(iVar6 + 0xc4))(piVar14,param_2,&uStack_89,*(code **)(iVar6 + 0xc4));
      goto LAB_ram_48045ea2;
    }
    pcVar4 = *(code **)(iVar6 + 0xd4);
    puVar13 = (undefined1 *)0x0;
    piVar11 = (int *)&uStack_89;
  }
  else {
    if (param_3 != 0) {
      iVar6 = (**(code **)(iVar6 + 0xdc))(piVar14,param_2,&local_88,&uStack_89,param_12);
      goto LAB_ram_48045ea2;
    }
    pcVar4 = *(code **)(iVar6 + 0xcc);
    puVar13 = &uStack_89;
    piVar11 = &local_88;
  }
  iVar6 = (*pcVar4)(piVar14,param_2,piVar11,puVar13);
LAB_ram_48045ea2:
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = uStack_89;
  }
  if (iVar6 == 0) {
    FUN_ram_4ff3ec14(puVar20,0xffffffff);
    if (param_1[uVar18 * 5 + 7] == uVar16) {
      *(undefined1 *)puVar19 = 0;
      *(undefined1 *)(puVar19 + 1) = 0;
      *(undefined1 *)((int)puVar19 + 5) = 0;
      *(undefined1 *)((int)puVar19 + 6) = 0;
      *(undefined1 *)((int)puVar19 + 7) = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      *(undefined1 *)((int)puVar19 + 9) = 0;
      *(undefined1 *)((int)puVar19 + 10) = 0;
      *(undefined1 *)((int)puVar19 + 0xb) = 0;
      *(undefined1 *)(puVar19 + 3) = 0;
      *(undefined1 *)((int)puVar19 + 0xd) = 0;
      *(undefined1 *)((int)puVar19 + 0xe) = 0;
      *(undefined1 *)((int)puVar19 + 0xf) = 0;
      *(undefined1 *)(puVar19 + 4) = 0;
      *(undefined1 *)((int)puVar19 + 0x11) = 0;
      *(undefined1 *)((int)puVar19 + 0x12) = 0;
    }
    if (uVar21 < 3) {
      param_1[uVar21 * 5 + 0x28a] = param_1[uVar21 * 5 + 0x28a] + 1;
    }
    FUN_ram_4ff3ee10(puVar20);
    return 0;
  }
  if (uVar21 < 3) {
    FUN_ram_4ff3ec14(puVar20,0xffffffff);
    param_1[uVar21 * 5 + 0x287] = param_1[uVar21 * 5 + 0x287] + 1;
    FUN_ram_4ff3ee10(puVar20);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar16;
    return iVar6;
  }
  return iVar6;
}


