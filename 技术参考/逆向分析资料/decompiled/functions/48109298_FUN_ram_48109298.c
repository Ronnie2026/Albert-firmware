/* Firmware entry: 0x48109298 */

void FUN_ram_48109298(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 uVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  undefined4 *puVar15;
  char *pcVar16;
  byte bVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  char *pcVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_160 [5];
  char acStack_14c [36];
  undefined4 local_128 [9];
  char cStack_104;
  byte bStack_103;
  undefined2 uStack_102;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  undefined4 local_e8;
  undefined4 auStack_e4 [3];
  undefined1 local_d8 [16];
  undefined1 uStack_c8;
  int iStack_c0;
  int iStack_ac;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2[0x11] != '\x02') || (*(int *)(param_2 + 4) != 0x3c2)) {
    FUN_ram_480c3830(param_1);
    return;
  }
  if (param_2[8] != '\b') {
    FUN_ram_480c3830(param_1);
    return;
  }
  if ((param_2[9] & 3U) != 1) goto LAB_ram_48109312;
  iVar26 = *(int *)(param_2 + 8);
  iVar25 = *(int *)(param_2 + 0xc);
  iVar24 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x14);
  iVar21 = *(int *)(param_2 + 0x18);
  iVar20 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x20);
  pcVar23 = param_2 + 4;
  iVar5 = *(int *)(param_2 + 0x24);
  iVar14 = param_1[0x143] + 1;
  param_1[0x141] = *(int *)(param_2 + 100);
  param_1[0x10a] = iVar26;
  param_1[0x10b] = iVar25;
  param_1[0x10c] = iVar24;
  param_1[0x10d] = iVar3;
  param_1[0x10e] = iVar21;
  param_1[0x10f] = iVar20;
  param_1[0x110] = iVar4;
  param_1[0x111] = iVar5;
  param_1[0x109] = 0x3c2;
  *(undefined1 *)(param_1 + 0x112) = 1;
  param_1[0x142] = param_4;
  if (iVar14 == 0) {
    iVar14 = 1;
  }
  param_1[0x143] = iVar14;
  if ((byte)(*param_2 - 1U) < 2) {
    local_128[0] = *(undefined4 *)(param_2 + 0x28);
    cStack_104 = param_2[0x80];
    local_128[1] = *(undefined4 *)(param_2 + 0x2c);
    local_128[2] = *(undefined4 *)(param_2 + 0x30);
    local_128[3] = *(undefined4 *)(param_2 + 0x34);
    local_128[4] = *(undefined4 *)(param_2 + 0x38);
    local_128[5] = *(undefined4 *)(param_2 + 0x3c);
    local_128[6] = *(undefined4 *)(param_2 + 0x40);
    local_128[7] = *(undefined4 *)(param_2 + 0x44);
    local_128[8] = *(undefined4 *)(param_2 + 0x48);
    uVar7 = *(uint *)(param_2 + 0x54);
    uStack_102 = 0;
    uStack_ea = 0;
    iVar3 = param_1[0x1c5];
    iVar4 = param_1[0x1c6];
    iVar5 = param_1[0x1c7];
    bStack_103 = false;
    if ((uVar7 & 1) != 0) {
      bStack_103 = *(int *)(param_2 + 0x58) == iVar3;
    }
    if (((uVar7 & 2) != 0) && (iVar4 == *(int *)(param_2 + 0x5c))) {
      bStack_103 = bStack_103 | 2;
    }
    iStack_f8 = *(int *)(param_2 + 100);
    iStack_fc = param_1[0x145];
    iStack_f0 = iStack_f8 + 5000;
    if (((uVar7 & 4) == 0) || (iVar5 != *(int *)(param_2 + 0x60))) {
      uStack_ec = false;
      bVar12 = false;
    }
    else {
      bStack_103 = bStack_103 | 4;
      if ((char)param_1[0x1d9] == '\x02') {
        uStack_ec = true;
        bVar12 = true;
      }
      else {
        uStack_ec = false;
        bVar12 = true;
        if ((char)param_1[0x1d9] == '\x01') {
          uStack_ec = (char)param_1[0x1de] == '\x02';
          bVar12 = true;
        }
      }
    }
    bVar8 = bStack_103;
    uStack_eb = 1;
    iVar20 = param_1[0x189] + 1;
    if (iVar20 == 0) {
      iVar20 = 1;
    }
    param_1[0x189] = iVar20;
    param_1[400] = iVar20;
    iStack_100 = iVar14;
    iStack_f4 = param_4;
    FUN_ram_4ff45158(param_1 + 0x191,local_128,0x3e);
    memset(&local_e8,0,0x88);
    local_e8._0_1_ = 8;
    local_d8[0] = 8;
    uStack_c8 = 8;
    FUN_ram_4ff45158(param_1 + 0x1a2,&local_e8,0x82);
    iVar14 = *param_1;
    iVar21 = *(int *)(iVar14 + 0xa30);
    iVar24 = *(int *)(iVar14 + 0xa34);
    *(undefined1 *)(param_1 + 0x1a2) = *(undefined1 *)(iVar14 + 0xa28);
    param_1[0x1a4] = iVar21;
    param_1[0x1a5] = iVar24;
    iVar21 = *(int *)(iVar14 + 0xa58);
    iVar24 = *(int *)(iVar14 + 0xa5c);
    *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(iVar14 + 0xa50);
    param_1[0x1a8] = iVar21;
    param_1[0x1a9] = iVar24;
    iVar21 = *(int *)(iVar14 + 0xa80);
    iVar24 = *(int *)(iVar14 + 0xa84);
    *(undefined1 *)(param_1 + 0x1aa) = *(undefined1 *)(iVar14 + 0xa78);
    param_1[0x1ac] = iVar21;
    param_1[0x1ad] = iVar24;
    param_1[0x1be] = iVar3;
    param_1[0x1bf] = iVar4;
    param_1[0x1c0] = iVar5;
    uVar6 = FUN_ram_48025ba6();
    FUN_ram_4804a1e6(&local_e8,param_1 + 0xae,uVar6);
    param_1[0x1c1] = iStack_ac;
    if (((bVar8 & 1) != 0) && ((char)param_1[0x79] != '\0')) {
      *(undefined1 *)(param_1 + 0x1ae) = *(undefined1 *)((int)param_1 + 0x1e7);
      *(char *)((int)param_1 + 0x6b9) = (char)param_1[0x7a];
      *(undefined1 *)((int)param_1 + 0x6ba) = *(undefined1 *)((int)param_1 + 0x1e9);
      *(undefined1 *)(param_1 + 0x1c2) = 1;
    }
    if (((bVar8 & 2) != 0) && ((char)param_1[0xa1] != '\0')) {
      *(undefined1 *)((int)param_1 + 0x6bb) = *(undefined1 *)((int)param_1 + 0x28b);
      *(char *)(param_1 + 0x1af) = (char)param_1[0xa3];
      *(undefined1 *)((int)param_1 + 0x6bd) = *(undefined1 *)((int)param_1 + 0x28d);
      *(undefined1 *)((int)param_1 + 0x6be) = *(undefined1 *)((int)param_1 + 0x28e);
      *(undefined1 *)((int)param_1 + 0x6bf) = *(undefined1 *)((int)param_1 + 0x28f);
      *(undefined1 *)((int)param_1 + 0x709) = 1;
    }
    if (bVar12) {
      *(char *)(param_1 + 0x1b0) = (char)param_1[0x1d9];
      param_1[0x1b1] = param_1[0x1da];
      param_1[0x1b4] = param_1[0x1dd];
      param_1[0x1b5] = param_1[0x1de];
      param_1[0x1b6] = param_1[0x1df];
      param_1[0x1b2] = param_1[0x1db];
      param_1[0x1b3] = param_1[0x1dc];
      param_1[0x1b7] = param_1[0x1e0];
      param_1[0x1b8] = param_1[0x1e1];
      param_1[0x1b9] = param_1[0x1e2];
      FUN_ram_4ff45158(param_1 + 0x1ba,param_1 + 0x1e3,0xe);
    }
    puVar18 = local_128;
    puVar15 = &local_e8;
    do {
      uVar6 = puVar18[1];
      uVar9 = puVar18[2];
      uVar11 = puVar18[3];
      *puVar15 = *puVar18;
      puVar15[1] = uVar6;
      puVar15[2] = uVar9;
      puVar15[3] = uVar11;
      puVar18 = puVar18 + 4;
      puVar15 = puVar15 + 4;
    } while (&local_e8 != puVar18);
    if ((param_2[0x83] != '\0') && (pcVar22 = (char *)param_1[0x1c4], pcVar22 != (char *)0x0)) {
      pcVar16 = pcVar22 + 0x7400;
LAB_ram_48109844:
      if (*pcVar22 != '\0') goto LAB_ram_4810983c;
      iStack_c0 = param_1[0x143];
      *(undefined **)pcVar22 = &sedeleg;
      *(int *)(pcVar22 + 4) = iVar20;
      FUN_ram_4ff45158(pcVar22 + 0x20,&local_e8,0x3e);
      FUN_ram_4ff45158(pcVar22 + 0x60,param_1 + 0x1a2,0x82);
      piVar2 = local_160;
      puVar15 = &DAT_ram_48222eb8;
      do {
        puVar19 = puVar15;
        puVar18 = piVar2;
        uVar11 = puVar19[1];
        uVar6 = puVar19[2];
        uVar9 = puVar19[3];
        *puVar18 = *puVar19;
        puVar18[1] = uVar11;
        puVar18[2] = uVar6;
        puVar18[3] = uVar9;
        piVar2 = puVar18 + 4;
        puVar15 = puVar19 + 4;
      } while (puVar19 + 4 != &DAT_ram_48222ee8);
      uVar6 = puVar19[5];
      cVar1 = param_2[0x83];
      puVar18[4] = DAT_ram_48222ee8;
      puVar18[5] = uVar6;
      if (cVar1 == '\0') goto LAB_ram_4810991e;
      local_160[2] = *(int *)(param_2 + 0x74);
      acStack_14c[0] = cVar1;
      goto LAB_ram_481098c6;
    }
LAB_ram_481098e0:
    piVar2 = local_160;
    puVar15 = &DAT_ram_48222eb8;
    do {
      puVar19 = puVar15;
      puVar18 = piVar2;
      uVar11 = puVar19[1];
      uVar6 = puVar19[2];
      uVar9 = puVar19[3];
      *puVar18 = *puVar19;
      puVar18[1] = uVar11;
      puVar18[2] = uVar6;
      puVar18[3] = uVar9;
      piVar2 = puVar18 + 4;
      puVar15 = puVar19 + 4;
    } while (puVar19 + 4 != &DAT_ram_48222ee8);
    uVar6 = puVar19[5];
    puVar18[4] = DAT_ram_48222ee8;
    puVar18[5] = uVar6;
LAB_ram_4810991e:
    acStack_14c[0] = '\0';
    local_160[2] = 0;
LAB_ram_481098c6:
    local_160[4] = *(int *)(param_2 + 0x78);
    local_160[1] = iVar20;
    FUN_ram_480d6386(param_1,local_160,param_3);
  }
  puVar15 = &local_e8;
  FUN_ram_48105d3a(param_1,pcVar23,param_3);
  FUN_ram_480c4194(param_1,pcVar23,param_3);
  iVar14 = *param_1;
  FUN_ram_481084c2(iVar14 + 0x84a8,pcVar23,2,param_3);
  FUN_ram_480e1b1c(iVar14 + 0x84a8,pcVar23,2,param_3);
  iVar14 = *param_1;
  FUN_ram_4ff3ec14(iVar14 + 0xb18,0xffffffff);
  puVar18 = (undefined4 *)(iVar14 + 0xb38);
  do {
    uVar6 = puVar18[1];
    uVar9 = puVar18[2];
    uVar11 = puVar18[3];
    *puVar15 = *puVar18;
    puVar15[1] = uVar6;
    puVar15[2] = uVar9;
    puVar15[3] = uVar11;
    puVar18 = puVar18 + 4;
    puVar15 = puVar15 + 4;
  } while (puVar18 != (undefined4 *)(iVar14 + 0xbd8));
  *puVar15 = *puVar18;
  FUN_ram_4ff3ee10(iVar14 + 0xb18);
  FUN_ram_481062c4(param_1,param_3);
  if ((local_e8._1_1_ == '\f') && (param_1[0x7b] != 0x3c2)) {
    if ((char)param_1[0x79] == '\0') goto LAB_ram_48109518;
  }
  else if ((char)param_1[0x79] == '\0') {
LAB_ram_48109518:
    *(undefined1 *)(param_1 + 0x14b) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x14b) = 1;
    *(undefined1 *)((int)param_1 + 0x4ff) = *(undefined1 *)((int)param_1 + 0x1f2);
  }
  iVar14 = *param_1;
  FUN_ram_4ff3ec14(iVar14 + 0xb18,0xffffffff);
  FUN_ram_4ff3ee10(iVar14 + 0xb18);
  FUN_ram_480cc0a2(param_1,param_3);
  if ((char)param_1[0xa1] == '\0') {
    *(undefined1 *)((int)param_1 + 0x52d) = 0;
  }
  else if ((char)param_1[0x5d] != '\0') {
    param_1[0xa5] = param_1[0x55];
    param_1[0xa6] = param_1[0x56];
    bVar10 = *(byte *)((int)param_1 + 0x28e) & 0x3f;
    bVar13 = *(byte *)((int)param_1 + 0x28f) & 0x3f;
    param_1[0xac] = param_1[0x5c];
    *(byte *)((int)param_1 + 0x297) = bVar10;
    *(byte *)(param_1 + 0xa6) = bVar13;
    param_1[0xa4] = param_1[0x54];
    param_1[0xa7] = param_1[0x57];
    param_1[0xa8] = param_1[0x58];
    param_1[0xa9] = param_1[0x59];
    param_1[0xaa] = param_1[0x5a];
    param_1[0xab] = param_1[0x5b];
    bVar8 = *(byte *)((int)param_1 + 0x28f);
    if ((char)param_1[0xa3] == '\x01') {
      bVar8 = *(byte *)((int)param_1 + 0x28e);
    }
    bVar17 = *(byte *)((int)param_1 + 0x29b) & 0xef;
    if (bVar8 == 0) {
      bVar17 = *(byte *)((int)param_1 + 0x29b) | 0x10;
    }
    *(byte *)((int)param_1 + 0x29b) = bVar17;
    if ((param_1[0xa4] == 0x3c2) && ((char)param_1[0xa5] == '\b')) {
      *(byte *)(param_1 + 0x140) = bVar10;
      *(byte *)((int)param_1 + 0x501) = bVar13;
      *(byte *)((int)param_1 + 0x502) = bVar17;
      *(undefined1 *)((int)param_1 + 0x52d) = 1;
    }
  }
  iVar14 = *param_1;
  FUN_ram_4ff3ec14(iVar14 + 0xb18,0xffffffff);
  FUN_ram_4ff3ee10(iVar14 + 0xb18);
  FUN_ram_480d7710(param_1,param_3);
  if ((char)param_1[0x1d9] == '\0') {
    *(undefined2 *)((int)param_1 + 0x52e) = 0;
  }
  else {
    bVar12 = false;
    if ((char)param_1[0x1d9] == '\x01') {
      bVar12 = (char)param_1[0x1de] == '\x02';
    }
    *(bool *)((int)param_1 + 0x52f) = bVar12;
    *(undefined1 *)((int)param_1 + 0x503) = *(undefined1 *)((int)param_1 + 0x797);
    *(undefined1 *)((int)param_1 + 0x52e) = 1;
  }
LAB_ram_48109312:
  FUN_ram_480c3830(param_1);
  return;
LAB_ram_4810983c:
  pcVar22 = pcVar22 + 0xe8;
  if (pcVar22 == pcVar16) goto LAB_ram_481098e0;
  goto LAB_ram_48109844;
}


