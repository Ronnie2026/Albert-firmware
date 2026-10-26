/* Firmware entry: 0x48109d5a */

void FUN_ram_48109d5a(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  uint *puVar16;
  char *pcVar17;
  char cVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  byte bVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  undefined1 uVar30;
  int iVar31;
  int iVar32;
  uint local_130 [20];
  uint local_e0 [18];
  uint auStack_98 [4];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  uint auStack_40 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar24 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar24,0xffffffff);
  *(undefined4 *)(param_1 + 0x1e08) = param_3;
  FUN_ram_4ff3ee10(iVar24);
  FUN_ram_4ff3ec14(iVar24,0xffffffff);
  piVar27 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar24);
  uVar2 = 0;
  if (piVar27 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar27 + 0x154))(piVar27,1);
  }
  *(undefined4 *)(param_1 + 0x9c4) = uVar2;
  FUN_ram_4ff3ec14(iVar24,0xffffffff);
  piVar27 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar24);
  uVar2 = 0;
  if (piVar27 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar27 + 0x154))(piVar27,2);
  }
  *(undefined4 *)(param_1 + 0x9c8) = uVar2;
  FUN_ram_4ff3ec14(iVar24,0xffffffff);
  piVar27 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar24);
  uVar2 = 0;
  if (piVar27 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar27 + 0x154))(piVar27,4);
  }
  *(undefined4 *)(param_1 + 0x9cc) = uVar2;
  iVar24 = FUN_ram_48025b94();
  iVar3 = FUN_ram_48025ba6();
  iVar28 = param_2[4];
  if ((*(char *)((int)param_2 + 0xe) != '\0') || (iVar25 = iVar3, iVar29 = iVar24, iVar28 != 0)) {
    iVar25 = iVar3 - (uint)(iVar24 - iVar28) / 1000;
    iVar29 = iVar28;
  }
  fence();
  if (*(int *)(param_1 + 0x8574) != *(int *)(param_1 + 0x8578)) {
    FUN_ram_4ff3ec14(param_1 + 0x8518,0xffffffff);
    puVar6 = &local_88;
    puVar19 = (uint *)(param_1 + 0x852c);
    puVar16 = puVar6;
    do {
      uVar21 = puVar19[1];
      uVar4 = puVar19[2];
      uVar8 = puVar19[3];
      uVar10 = puVar19[4];
      uVar13 = puVar19[5];
      *puVar16 = *puVar19;
      puVar16[1] = uVar21;
      puVar16[2] = uVar4;
      puVar16[3] = uVar8;
      puVar16[4] = uVar10;
      puVar16[5] = uVar13;
      puVar19 = puVar19 + 6;
      puVar16 = puVar16 + 6;
    } while (puVar19 != (uint *)(param_1 + 0x8574));
    iVar28 = *(int *)(param_1 + 0x8574);
    FUN_ram_4ff3ee10(param_1 + 0x8518);
    if (iVar28 != *(int *)(param_1 + 0x8578)) {
      puVar19 = (uint *)(param_1 + 0x857c);
      puVar16 = local_130;
      do {
        uVar21 = *puVar6;
        uVar13 = puVar6[1];
        uVar4 = puVar6[2];
        uVar8 = puVar6[3];
        uVar10 = puVar6[4];
        puVar16[5] = puVar6[5];
        *puVar16 = uVar21;
        puVar16[1] = uVar13;
        puVar16[2] = uVar4;
        puVar16[3] = uVar8;
        puVar16[4] = uVar10;
        puVar6 = puVar6 + 6;
        puVar16 = puVar16 + 6;
      } while (puVar6 != auStack_40);
      FUN_ram_4804c54e(local_e0,local_130);
      puVar6 = local_e0;
      puVar16 = puVar19;
      do {
        uVar21 = puVar6[1];
        uVar4 = puVar6[2];
        uVar8 = puVar6[3];
        uVar10 = puVar6[4];
        uVar13 = puVar6[5];
        *puVar16 = *puVar6;
        puVar16[1] = uVar21;
        puVar16[2] = uVar4;
        puVar16[3] = uVar8;
        puVar16[4] = uVar10;
        puVar16[5] = uVar13;
        puVar6 = puVar6 + 6;
        puVar16 = puVar16 + 6;
      } while (puVar6 != auStack_98);
      puVar16 = local_130;
      do {
        uVar21 = puVar19[1];
        uVar13 = puVar19[2];
        uVar4 = puVar19[3];
        uVar8 = puVar19[4];
        uVar10 = puVar19[5];
        *puVar16 = *puVar19;
        puVar16[1] = uVar21;
        puVar16[2] = uVar13;
        puVar16[3] = uVar4;
        puVar16[4] = uVar8;
        puVar16[5] = uVar10;
        puVar19 = puVar19 + 6;
        puVar16 = puVar16 + 6;
      } while (puVar19 != (uint *)(param_1 + 0x85c4));
      FUN_ram_4804c54e(local_e0,local_130);
      puVar6 = local_e0;
      puVar16 = (uint *)(param_1 + 0x85c4);
      do {
        uVar21 = puVar6[1];
        uVar4 = puVar6[2];
        uVar8 = puVar6[3];
        uVar10 = puVar6[4];
        uVar13 = puVar6[5];
        *puVar16 = *puVar6;
        puVar16[1] = uVar21;
        puVar16[2] = uVar4;
        puVar16[3] = uVar8;
        puVar16[4] = uVar10;
        puVar16[5] = uVar13;
        puVar6 = puVar6 + 6;
        puVar16 = puVar16 + 6;
      } while (puVar6 != auStack_98);
      *(int *)(param_1 + 0x8578) = iVar28;
      *(undefined1 *)(param_1 + 0x8618) = 1;
    }
  }
  if ((*(char *)(param_1 + 0x8680) == '\0') ||
     ((uint)(iVar24 - *(int *)(param_1 + 0x8688)) < 0x30d41)) {
LAB_ram_48109f3c:
    cVar18 = *(char *)((int)param_2 + 0xd);
    if (cVar18 != '\x01') goto LAB_ram_48109f46;
LAB_ram_4810a264:
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    iVar24 = 0;
    iVar28 = *(int *)(param_1 + 0x1370) + 1;
LAB_ram_48109f70:
    iVar24 = param_1 + iVar24 * 4;
    *(int *)(param_1 + 0x1370) = iVar28;
    *(int *)(iVar24 + 0x13a0) = iVar25;
    *(int *)(iVar24 + 0x137c) = *(int *)(iVar24 + 0x137c) + 1;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x8684);
    *(undefined1 *)(param_1 + 0x8680) = 0;
    *(undefined4 *)(param_1 + 0x8688) = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    *(undefined4 *)(param_1 + 0x868c) = 0;
    *(undefined4 *)(param_1 + 0x8694) = 0;
    *(undefined4 *)(param_1 + 0x8698) = 0;
    *(undefined4 *)(param_1 + 0x869c) = 0;
    *(undefined4 *)(param_1 + 0x86a0) = 0;
    *(undefined4 *)(param_1 + 0x86a8) = 0;
    *(undefined4 *)(param_1 + 0x86ac) = 0;
    *(undefined1 *)(param_1 + 0x86b0) = 0;
    *(undefined2 *)(param_1 + 0x86b2) = 0;
    *(undefined2 *)(param_1 + 0x86b4) = 0;
    *(undefined1 *)(param_1 + 0x86b6) = 0;
    *(undefined4 *)(param_1 + 0x86b8) = 0;
    *(undefined4 *)(param_1 + 0x86bc) = 0;
    *(undefined1 *)(param_1 + 0x86c0) = 0;
    *(undefined1 *)(param_1 + 0x8782) = 0;
    *(int *)(param_1 + 0x87b4) = *(int *)(param_1 + 0x87b4) + 1;
    uStack_84 = 8;
    *(undefined4 *)(param_1 + 0x8690) = 8;
    uStack_70 = 0x10000;
    *(undefined4 *)(param_1 + 0x86a4) = 0x10000;
    *(undefined4 *)(param_1 + 0x8684) = 0;
    *(int *)(param_1 + 0x87ac) = *(int *)(param_1 + 0x87ac) + 1;
    if (uVar4 == 0) goto LAB_ram_48109f3c;
    iVar24 = *(int *)(param_1 + 0x8500);
    if (uVar4 == *(uint *)(iVar24 + 0x81e8)) {
      local_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_84 = uVar4;
      FUN_ram_480cb520(iVar24 + 0x7cd0,&local_88);
    }
    iVar20 = iVar24 + 0x2864;
    FUN_ram_4ff3ec14(iVar20,0xffffffff);
    iVar5 = (uVar4 & 0x7f) * 0x14;
    iVar28 = iVar24 + 0x2000 + iVar5;
    if ((*(char *)(iVar28 + -0x1cf) != '\0') && (uVar4 == *(uint *)(iVar28 + -0x1dc))) {
      iVar28 = iVar5 + 0x2000 + iVar24;
      *(undefined1 *)(iVar28 + -0x1e0) = 0;
      *(undefined1 *)(iVar28 + -0x1dc) = 0;
      *(undefined1 *)(iVar28 + -0x1db) = 0;
      *(undefined1 *)(iVar28 + -0x1da) = 0;
      *(undefined1 *)(iVar28 + -0x1d9) = 0;
      *(undefined1 *)(iVar28 + -0x1d8) = 0;
      *(undefined1 *)(iVar28 + -0x1d7) = 0;
      *(undefined1 *)(iVar28 + -0x1d6) = 0;
      *(undefined1 *)(iVar28 + -0x1d5) = 0;
      *(undefined1 *)(iVar28 + -0x1d4) = 0;
      *(undefined1 *)(iVar28 + -0x1d3) = 0;
      *(undefined1 *)(iVar28 + -0x1d2) = 0;
      *(undefined1 *)(iVar28 + -0x1d1) = 0;
      *(undefined1 *)(iVar28 + -0x1d0) = 0;
      *(undefined1 *)(iVar28 + -0x1cf) = 0;
      *(undefined1 *)(iVar28 + -0x1ce) = 0;
      FUN_ram_4ff3ee10(iVar20);
      uStack_78 = CONCAT22(uStack_78._2_2_,1);
      local_88 = local_88 & 0xffffff00;
      uStack_80 = uStack_80 & 0xffff0000;
      uStack_7c = 0;
      uStack_74 = 0;
      uStack_6c = 0;
      uStack_84 = uVar4;
      uStack_70 = FUN_ram_48025b94();
      FUN_ram_4805d48e(iVar24,&local_88);
      goto LAB_ram_48109f3c;
    }
    FUN_ram_4ff3ee10(iVar20);
    cVar18 = *(char *)((int)param_2 + 0xd);
    if (cVar18 == '\x01') goto LAB_ram_4810a264;
LAB_ram_48109f46:
    iVar24 = 1;
    if (cVar18 == '\x02') {
      FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
      iVar28 = *(int *)(param_1 + 0x1370) + 1;
      goto LAB_ram_48109f70;
    }
    if (cVar18 == '\x04') {
      FUN_ram_4ff3ec14();
      iVar28 = *(int *)(param_1 + 0x1370) + 1;
      iVar24 = 2;
      goto LAB_ram_48109f70;
    }
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    *(int *)(param_1 + 0x1370) = *(int *)(param_1 + 0x1370) + 1;
  }
  iVar24 = param_1 + 0xb20;
  FUN_ram_4ff3ee10(iVar24);
  bVar26 = *(byte *)((int)param_2 + 0xd);
  if (bVar26 == 2) {
    if (*param_2 == 0x3c2) {
      piVar27 = (int *)(param_1 + 0x811c);
      if (piVar27 != (int *)(param_1 + 0x81cc)) {
        do {
          if ((char)piVar27[10] != '\0') {
            if ((uint)(iVar25 - piVar27[9]) < 0x15) {
              if ((((*(char *)((int)piVar27 + 0xd) == *(char *)((int)param_2 + 0xd)) &&
                   (*piVar27 == *param_2)) &&
                  (uVar4 = (uint)*(byte *)(param_2 + 1), uVar4 == *(byte *)(piVar27 + 1))) &&
                 (uVar4 < 9)) {
                if (uVar4 == 0) {
LAB_ram_4810a608:
                  uStack_84 = 8;
                  uStack_70 = 0x10000;
                  local_88 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  uStack_78 = 0;
                  uStack_74 = 0;
                  uStack_6c = 0;
                  uStack_68 = 0;
                  uStack_64 = 0;
                  uStack_60 = 0;
                  FUN_ram_4ff45158(piVar27,&local_88,0x29);
                  if (*(int *)(param_1 + 0x81f4) == -1) {
                    return;
                  }
                  *(int *)(param_1 + 0x81f4) = *(int *)(param_1 + 0x81f4) + 1;
                  return;
                }
                pcVar17 = (char *)((int)piVar27 + 5);
                pcVar11 = pcVar17 + uVar4;
                pcVar14 = (char *)((int)param_2 + 5);
                while( true ) {
                  cVar18 = *pcVar17;
                  cVar1 = *pcVar14;
                  pcVar17 = pcVar17 + 1;
                  pcVar14 = pcVar14 + 1;
                  if (cVar18 != cVar1) break;
                  if (pcVar11 == pcVar17) goto LAB_ram_4810a608;
                }
              }
            }
            else {
              local_88 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_78 = 0;
              uStack_74 = 0;
              uStack_6c = 0;
              uStack_68 = 0;
              uStack_64 = 0;
              uStack_60 = 0;
              uStack_84 = 8;
              uStack_70 = 0x10000;
              piVar27 = (int *)FUN_ram_4ff45158(piVar27,&local_88,0x29);
            }
          }
          piVar27 = piVar27 + 0xb;
        } while (piVar27 != (int *)(param_1 + 0x81cc));
        bVar26 = *(byte *)((int)param_2 + 0xd);
        goto LAB_ram_48109fa4;
      }
    }
    iVar5 = FUN_ram_480409ae(param_2,0,0);
    iVar28 = 1;
LAB_ram_48109fc2:
    if (iVar5 != 0) {
      FUN_ram_48040862(&local_88,iVar5);
      if (((uStack_80 & 0xff) != 0) || (iVar5 == 0x15)) {
        FUN_ram_4ff3ec14(iVar24,0xffffffff);
        iVar20 = iVar5 * 0x48 + param_1;
        *(int *)(iVar20 + 0xc0c) = iVar29;
        *(int *)(iVar20 + 0xbe0) = *(int *)(iVar20 + 0xbe0) + 1;
        FUN_ram_4ff3ee10(iVar24);
        cVar18 = *(char *)((int)param_2 + 0xd);
        iVar24 = 1;
        if (cVar18 == '\x01') {
          iVar20 = FUN_ram_480409ae(param_2,0,0);
          iVar24 = 0;
        }
        else if (cVar18 == '\x02') {
          iVar20 = FUN_ram_480409ae(param_2,0,0);
        }
        else {
          if (cVar18 != '\x04') goto LAB_ram_4810a072;
          iVar20 = FUN_ram_480409ae(param_2,0,0);
          iVar24 = 2;
        }
        if (iVar20 != 0) {
          uVar2 = *(undefined4 *)((iVar28 + 0x270) * 4 + param_1 + 4);
          FUN_ram_48040862(&local_88,iVar20);
          if (((char)uStack_80 != '\0') || (iVar20 == 0x15)) {
            iVar28 = (iVar24 * 0x16 + iVar20) * 4 + param_1;
            iVar24 = *(int *)(iVar28 + 0x7b4) + 1;
            if (iVar24 == 0) {
              iVar24 = 1;
            }
            *(int *)(iVar28 + 0x7b4) = iVar24;
            *(undefined4 *)(iVar28 + 0x8bc) = uVar2;
          }
        }
      }
    }
  }
  else {
LAB_ram_48109fa4:
    iVar5 = FUN_ram_480409ae(param_2,0,0);
    if (bVar26 == 4) {
      iVar28 = 2;
      goto LAB_ram_48109fc2;
    }
    if (bVar26 < 5) {
      iVar28 = 0;
      if (bVar26 != 1) {
        if (bVar26 != 2) goto LAB_ram_4810a072;
        iVar28 = 1;
      }
      goto LAB_ram_48109fc2;
    }
  }
LAB_ram_4810a072:
  iVar24 = *(int *)(param_1 + 0x93f0);
  FUN_ram_480da2a8(param_1 + 0x79cc,param_2,iVar25,iVar29);
  FUN_ram_480dea48(param_1 + 0x9288,param_2,iVar25);
  if ((byte)(*(char *)((int)param_2 + 0xd) - 1U) < 2) {
    iVar28 = param_1 + 0x7cd0;
    if (((*(char *)((int)param_2 + 0xd) == '\x02') && (*param_2 == 0x3c2)) &&
       ((char)param_2[1] == '\b')) {
      if ((*(byte *)((int)param_2 + 5) & 3) == 1) {
        iVar32 = param_2[1];
        iVar31 = param_2[2];
        iVar20 = param_2[3];
        iVar23 = param_2[4];
        iVar22 = param_2[5];
        iVar7 = param_2[6];
        iVar9 = param_2[7];
        iVar12 = param_2[8];
        *(undefined4 *)(param_1 + 0x80f4) = 0x3c2;
        *(int *)(param_1 + 0x80f8) = iVar32;
        *(int *)(param_1 + 0x80fc) = iVar31;
        *(int *)(param_1 + 0x8100) = iVar20;
        *(int *)(param_1 + 0x8104) = iVar23;
        *(int *)(param_1 + 0x8108) = iVar22;
        *(int *)(param_1 + 0x810c) = iVar7;
        *(int *)(param_1 + 0x8110) = iVar9;
        *(int *)(param_1 + 0x8114) = iVar12;
        *(undefined1 *)(param_1 + 0x8118) = 1;
        *(int *)(param_1 + 0x81d4) = iVar29;
        *(int *)(param_1 + 0x81d8) = iVar25;
        iVar20 = *(int *)(param_1 + 0x81dc) + 1;
        if (iVar20 == 0) {
          iVar20 = 1;
        }
        *(int *)(param_1 + 0x81dc) = iVar20;
        FUN_ram_48105d3a(iVar28,param_2,iVar25);
        FUN_ram_480c4194(iVar28,param_2,iVar25);
        iVar20 = *(int *)(param_1 + 0x7cd0) + 0x84a8;
        if (*(char *)((int)param_2 + 0xd) == '\x01') {
          FUN_ram_481084c2(iVar20,param_2,1,iVar25);
          FUN_ram_480e1b1c(iVar20,param_2,1,iVar25);
        }
        else {
          FUN_ram_481084c2(iVar20,param_2,2,iVar25);
          FUN_ram_480e1b1c(iVar20,param_2,2,iVar25);
        }
        FUN_ram_48107f1e(iVar28,iVar25);
        FUN_ram_480cc6dc(iVar28,iVar25);
        iVar20 = *(int *)(param_1 + 0x7cd0) + 0xb18;
        FUN_ram_4ff3ec14(iVar20,0xffffffff);
        FUN_ram_4ff3ee10(iVar20);
        FUN_ram_480d7710(iVar28,iVar25);
        if (*(char *)(param_1 + 0x8434) == '\0') {
          *(undefined2 *)(param_1 + 0x81fe) = 0;
        }
        else {
          bVar15 = false;
          if (*(char *)(param_1 + 0x8434) == '\x01') {
            bVar15 = *(char *)(param_1 + 0x8448) == '\x02';
          }
          *(bool *)(param_1 + 0x81ff) = bVar15;
          *(undefined1 *)(param_1 + 0x81d3) = *(undefined1 *)(param_1 + 0x8467);
          *(undefined1 *)(param_1 + 0x81fe) = 1;
        }
        FUN_ram_480daefc(iVar28,iVar25,iVar29);
      }
      else {
        FUN_ram_48105d3a(iVar28,param_2,iVar25);
        FUN_ram_480c4194(iVar28,param_2,iVar25);
        iVar20 = *(int *)(param_1 + 0x7cd0) + 0x84a8;
        uVar30 = 2;
        if (*(char *)((int)param_2 + 0xd) != '\x01') goto LAB_ram_4810a0ec;
        FUN_ram_481084c2(iVar20,param_2,1,iVar25);
        FUN_ram_480e1b1c(iVar20,param_2,1,iVar25);
      }
    }
    else {
      FUN_ram_48105d3a(iVar28,param_2,iVar25);
      FUN_ram_480c4194(iVar28,param_2,iVar25);
      iVar20 = *(int *)(param_1 + 0x7cd0) + 0x84a8;
      uVar30 = 1;
      if (*(char *)((int)param_2 + 0xd) == '\x01') {
LAB_ram_4810a0ec:
        FUN_ram_481084c2(iVar20,param_2,uVar30,iVar25);
        FUN_ram_480e1b1c(iVar20,param_2,uVar30,iVar25);
      }
      else {
        FUN_ram_481084c2(iVar20,param_2,2,iVar25);
        FUN_ram_480e1b1c(iVar20,param_2,2,iVar25);
      }
    }
    FUN_ram_480c3830(iVar28);
  }
  FUN_ram_480ccf42(param_1 + 0x84a8,param_2,iVar25,iVar29);
  cVar18 = *(char *)((int)param_2 + 0xd);
  if (cVar18 == '\x01') {
    if ((*param_2 == 0x399) || (*param_2 == 0x3f5)) {
LAB_ram_4810a3ac:
      FUN_ram_4809faa6(param_1 + 0x84a8,iVar3);
      iVar3 = *(int *)(param_1 + 0x93f0);
LAB_ram_4810a3bc:
      if (iVar24 == iVar3) {
        return;
      }
      goto LAB_ram_4810a3c0;
    }
LAB_ram_4810a12c:
    iVar3 = *(int *)(param_1 + 0x93f0);
  }
  else {
    if (cVar18 == '\x02') {
      iVar28 = *param_2;
      if (((iVar28 == 0x679) || (iVar28 - 0x102U < 2)) || ((iVar28 == 0x3c2 || (iVar28 == 0x31a))))
      goto LAB_ram_4810a3ac;
      goto LAB_ram_4810a12c;
    }
    if (cVar18 != '\x04') goto LAB_ram_4810a12c;
    iVar3 = *(int *)(param_1 + 0x93f0);
    if (*param_2 == 0x286) goto LAB_ram_4810a3bc;
  }
  if (((iVar24 == iVar3) || (iVar5 == 0)) ||
     ((FUN_ram_48040862(&local_88,iVar5), (uStack_80 & 0xff) == 0 && (iVar5 != 0x15)))) {
    return;
  }
LAB_ram_4810a3c0:
  FUN_ram_480e8006(param_1);
  return;
}


