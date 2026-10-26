/* Firmware entry: 0x480d7f82 */

void FUN_ram_480d7f82(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  char cVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  undefined1 uStack_e4;
  byte bStack_e3;
  int iStack_c0;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar22 = *(int *)(*param_1 + 0x33e8);
  iVar14 = iVar22 + 0xc;
  iVar15 = param_2[4];
  iVar16 = param_2[5];
  iVar25 = *param_2;
  uVar27 = param_2[2];
  iVar17 = param_2[6];
  iVar31 = param_2[1];
  uVar21 = (uint)*(ushort *)(param_2 + 3);
  iVar28 = param_2[8];
  uVar7 = (uint)*(byte *)((int)param_2 + 0x2d);
  cVar1 = *(char *)((int)param_2 + 0x2e);
  cVar2 = *(char *)((int)param_2 + 0x2f);
  iVar30 = param_2[0x10];
  bVar3 = *(byte *)(param_2 + 0x11);
  uVar20 = (uint)bVar3;
  iVar18 = param_2[0xc];
  iVar19 = param_2[0x12];
  FUN_ram_4ff3ec14(iVar14,0xffffffff);
  if (((iVar25 == 0 && iVar31 == 0) || (uVar27 == 0)) || (0xcd < uVar21)) {
LAB_ram_480d80d4:
    uVar10 = 0;
LAB_ram_480d80de:
    uVar23 = 0;
    cVar5 = '\x01';
    cVar4 = '\0';
    bVar26 = 0;
    cVar24 = '\0';
    FUN_ram_4ff3ee10(iVar14);
    if (uVar7 == 0) goto LAB_ram_480d80c4;
LAB_ram_480d80ea:
    iVar14 = (uVar7 != 1) + 2;
  }
  else {
    iVar12 = iVar22 + uVar21 * 0x48;
    uVar10 = *(ushort *)(iVar12 + 0x5e) & 1;
    if ((*(ushort *)(iVar12 + 0x5e) & 1) == 0) goto LAB_ram_480d80de;
    iVar11 = *(int *)(iVar12 + 0x18);
    if ((((iVar11 == 0 && *(int *)(iVar12 + 0x1c) == 0) ||
         (uVar13 = (uint)*(ushort *)(iVar12 + 0x54), 0x1fe < uVar13)) ||
        ((iVar11 != iVar25 ||
         ((*(int *)(iVar12 + 0x1c) != iVar31 || (uVar27 != (iVar11 << 9 | uVar13 + 1))))))) ||
       ((uVar21 != uVar13 ||
        ((iVar12 = uVar21 * 0x48 + iVar22, *(int *)(iVar12 + 0x50) == 0 ||
         (*(int *)(iVar12 + 0x5c) << 9 < 0)))))) goto LAB_ram_480d80d4;
    *(byte *)(iVar12 + 0x5e) = *(byte *)(iVar12 + 0x5e) | 0x40;
    cVar4 = *(char *)(uVar21 * 0x48 + iVar22 + 0x3f);
    cVar24 = *(char *)(iVar12 + 0x3d);
    uVar23 = *(undefined4 *)(iVar12 + 0x40);
    cVar5 = *(char *)(iVar12 + 0x3e);
    bVar26 = *(byte *)(iVar12 + 0x5d) & 1;
    FUN_ram_4ff3ee10(iVar14);
    if (uVar7 != 0) goto LAB_ram_480d80ea;
LAB_ram_480d80c4:
    iVar14 = 1;
    if (cVar1 == '\x02') {
      iVar14 = 0x12;
    }
  }
  FUN_ram_4ff3ec14(*param_1 + 0xb20,0xffffffff);
  iVar22 = *param_1;
  uVar13 = uVar7;
  if (iVar30 == 0) {
    if (uVar20 != 6) {
      if ((uVar20 - 1 & 0xff) < 2) {
        iVar14 = iVar14 * 0x48 + iVar22;
        *(int *)(iVar14 + 0xbf0) = *(int *)(iVar14 + 0xbf0) + 1;
        if (uVar7 == 0) {
          if (cVar1 != '\x02') goto LAB_ram_480d83c2;
LAB_ram_480d85f0:
          if (cVar2 == '\0') goto LAB_ram_480d81dc;
        }
        else {
          if (uVar7 < 3) {
            if (cVar1 != '\x02') goto LAB_ram_480d8400;
            goto LAB_ram_480d85f0;
          }
          if (cVar2 == '\0') goto LAB_ram_480d8676;
        }
LAB_ram_480d8598:
        *(int *)(iVar22 + 0x1220) = *(int *)(iVar22 + 0x1220) + 1;
LAB_ram_480d85a6:
        iVar19 = uVar20 * 4 + iVar22;
        iVar14 = *(int *)(iVar19 + 0x1324);
LAB_ram_480d865e:
        *(int *)(iVar19 + 0x1324) = iVar14 + 1;
        *(byte *)(iVar22 + 0x1364) = bVar3;
        *(int *)(iVar22 + 0x1360) = iVar18;
      }
      else {
        iVar14 = iVar14 * 0x48 + iVar22;
        *(int *)(iVar14 + 0xbf8) = *(int *)(iVar14 + 0xbf8) + 1;
        if (uVar7 == 0) {
          if (cVar1 == '\x02') {
            if (cVar2 != '\0') goto LAB_ram_480d87f2;
            goto LAB_ram_480d81dc;
          }
          *(int *)(iVar22 + 0x1424) = *(int *)(iVar22 + 0x1424) + 1;
          if (uVar20 < 0xf) goto LAB_ram_480d83d0;
          *(byte *)(iVar22 + 0x1298) = bVar3;
          *(int *)(iVar22 + 0x1294) = iVar18;
          if (cVar2 == '\0') goto LAB_ram_480d81dc;
LAB_ram_480d86d2:
          *(int *)(iVar22 + 0x1228) = *(int *)(iVar22 + 0x1228) + 1;
        }
        else {
          if (uVar7 < 3) {
            if (cVar1 != '\x02') goto LAB_ram_480d834e;
            if (cVar2 == '\0') goto LAB_ram_480d81dc;
LAB_ram_480d858e:
            if ((uVar20 - 1 & 0xff) < 2) goto LAB_ram_480d8598;
          }
          else if (cVar2 == '\0') {
LAB_ram_480d8676:
            FUN_ram_4ff3ee10(iVar22 + 0xb20);
            iVar14 = *(int *)(*param_1 + 0x33e8);
            goto LAB_ram_480d81fc;
          }
LAB_ram_480d87f2:
          *(int *)(iVar22 + 0x1228) = *(int *)(iVar22 + 0x1228) + 1;
          if (uVar20 < 0xf) goto LAB_ram_480d85a6;
        }
        *(int *)(iVar22 + 0x1360) = iVar18;
        *(byte *)(iVar22 + 0x1364) = bVar3;
      }
      goto LAB_ram_480d81dc;
    }
    iVar14 = iVar14 * 0x48 + iVar22;
    *(int *)(iVar14 + 0xbf4) = *(int *)(iVar14 + 0xbf4) + 1;
    if (uVar7 != 0) {
      if (uVar7 < 3) {
        if (cVar1 == '\x02') goto LAB_ram_480d85c2;
        goto LAB_ram_480d8400;
      }
      if (cVar2 == '\0') goto LAB_ram_480d8676;
LAB_ram_480d8642:
      iVar19 = uVar20 * 4 + iVar22;
      iVar14 = *(int *)(iVar19 + 0x1324);
      *(int *)(iVar22 + 0x1224) = *(int *)(iVar22 + 0x1224) + 1;
      goto LAB_ram_480d865e;
    }
    if (cVar1 != '\x02') {
LAB_ram_480d83c2:
      *(int *)(iVar22 + 0x1424) = *(int *)(iVar22 + 0x1424) + 1;
LAB_ram_480d83d0:
      uVar13 = 0;
LAB_ram_480d8400:
      iVar12 = (uVar13 * 0x11 + uVar20) * 4 + iVar22;
      iVar14 = uVar13 * 0x44 + iVar22;
      *(int *)(iVar12 + 0x1258) = *(int *)(iVar12 + 0x1258) + 1;
      *(byte *)(iVar14 + 0x1298) = bVar3;
      *(int *)(iVar14 + 0x1294) = iVar18;
      goto LAB_ram_480d842c;
    }
LAB_ram_480d85c2:
    if (cVar2 != '\0') goto LAB_ram_480d8642;
    FUN_ram_4ff3ee10(iVar22 + 0xb20);
    iVar14 = *(int *)(*param_1 + 0x33e8);
    if (iVar28 == 0) goto LAB_ram_480d81fc;
  }
  else {
    if (uVar20 == 0xb) {
      iVar14 = iVar14 * 0x48 + iVar22;
      *(int *)(iVar14 + 0xc20) = iVar19;
      *(int *)(iVar14 + 0xc00) = *(int *)(iVar14 + 0xc00) + 1;
      if (uVar7 != 0) {
        if (2 < uVar7) goto LAB_ram_480d8550;
        if (cVar1 != '\x02') goto LAB_ram_480d8400;
LAB_ram_480d842c:
        if (cVar2 == '\0') {
          if (iVar30 == 0) goto LAB_ram_480d81dc;
        }
        else {
          if (iVar30 == 0) {
            if (uVar20 != 6) goto LAB_ram_480d858e;
            goto LAB_ram_480d8642;
          }
LAB_ram_480d85fc:
          if (uVar20 != 0xb) goto LAB_ram_480d8602;
LAB_ram_480d8554:
          *(int *)(iVar22 + 0x1250) = iVar19;
          *(int *)(iVar22 + 0x1360) = iVar18;
          *(int *)(iVar22 + 0x1230) = *(int *)(iVar22 + 0x1230) + 1;
          *(int *)(iVar22 + 0x1350) = *(int *)(iVar22 + 0x1350) + 1;
          *(undefined1 *)(iVar22 + 0x1364) = 0xb;
        }
        goto LAB_ram_480d8464;
      }
      if (cVar1 == '\x02') {
LAB_ram_480d8550:
        if (cVar2 != '\0') goto LAB_ram_480d8554;
        goto LAB_ram_480d8464;
      }
LAB_ram_480d8144:
      uVar13 = 0;
      if (uVar20 < 0xf) goto LAB_ram_480d8400;
      *(byte *)(iVar22 + 0x1298) = bVar3;
      *(int *)(iVar22 + 0x1294) = iVar18;
      if (cVar2 != '\0') {
LAB_ram_480d8378:
        *(int *)(iVar22 + 0x1250) = iVar19;
        *(int *)(iVar22 + 0x1234) = *(int *)(iVar22 + 0x1234) + 1;
        goto LAB_ram_480d838c;
      }
LAB_ram_480d8160:
      if (iVar30 == 0) goto LAB_ram_480d81dc;
LAB_ram_480d8164:
      iVar14 = 2;
      if (iVar28 == 0) {
        iVar14 = 1;
      }
LAB_ram_480d816c:
      iVar18 = iVar14 * 4 + iVar22;
      *(int *)(iVar18 + 0x14e4) = *(int *)(iVar18 + 0x14e4) + 1;
    }
    else {
      if (uVar20 == 0xd) {
        iVar14 = iVar14 * 0x48 + iVar22;
        *(int *)(iVar14 + 0xc20) = iVar19;
        *(int *)(iVar14 + 0xc08) = *(int *)(iVar14 + 0xc08) + 1;
        if (uVar7 == 0) goto LAB_ram_480d845a;
LAB_ram_480d8344:
        if (uVar7 < 3) {
          if (cVar1 != '\x02') {
LAB_ram_480d834e:
            if (uVar20 < 0xf) goto LAB_ram_480d8400;
            iVar14 = uVar7 * 0x44 + iVar22;
            *(byte *)(iVar14 + 0x1298) = bVar3;
            *(int *)(iVar14 + 0x1294) = iVar18;
            if (cVar2 != '\0') {
              if (iVar30 == 0) goto LAB_ram_480d86d2;
              goto LAB_ram_480d8378;
            }
            goto LAB_ram_480d8160;
          }
          if (cVar2 == '\0') goto LAB_ram_480d8464;
          goto LAB_ram_480d85fc;
        }
      }
      else {
        iVar14 = iVar14 * 0x48 + iVar22;
        *(int *)(iVar14 + 0xc20) = iVar19;
        *(int *)(iVar14 + 0xc04) = *(int *)(iVar14 + 0xc04) + 1;
        if (uVar7 != 0) goto LAB_ram_480d8344;
LAB_ram_480d845a:
        if (cVar1 != '\x02') goto LAB_ram_480d8144;
      }
      if (cVar2 != '\0') {
LAB_ram_480d8602:
        if (uVar20 == 0xd) {
          *(int *)(iVar22 + 0x1250) = iVar19;
          *(byte *)(iVar22 + 0x1364) = bVar3;
          *(int *)(iVar22 + 0x1360) = iVar18;
          *(int *)(iVar22 + 0x1238) = *(int *)(iVar22 + 0x1238) + 1;
          *(int *)(iVar22 + 0x1358) = *(int *)(iVar22 + 0x1358) + 1;
        }
        else {
          *(int *)(iVar22 + 0x1250) = iVar19;
          *(int *)(iVar22 + 0x1234) = *(int *)(iVar22 + 0x1234) + 1;
          if (0xe < uVar20) {
LAB_ram_480d838c:
            *(byte *)(iVar22 + 0x1364) = bVar3;
            *(int *)(iVar22 + 0x1360) = iVar18;
            goto LAB_ram_480d8164;
          }
          iVar14 = uVar20 * 4 + iVar22;
          *(int *)(iVar14 + 0x1324) = *(int *)(iVar14 + 0x1324) + 1;
          *(byte *)(iVar22 + 0x1364) = bVar3;
          *(int *)(iVar22 + 0x1360) = iVar18;
        }
      }
LAB_ram_480d8464:
      iVar14 = (iVar28 != 0) + 1;
      if (uVar20 != 0xb) goto LAB_ram_480d816c;
      iVar18 = iVar14 * 4 + iVar22;
      *(int *)(iVar18 + 0x14a4) = *(int *)(iVar18 + 0x14a4) + 1;
    }
    uVar9 = FUN_ram_48025ba6();
    iVar14 = (iVar14 + 0x548) * 4 + iVar22;
    iVar22 = *param_1;
    *(undefined4 *)(iVar14 + 4) = uVar9;
LAB_ram_480d81dc:
    FUN_ram_4ff3ee10(iVar22 + 0xb20);
    iVar14 = *(int *)(*param_1 + 0x33e8);
    if ((iVar28 == 0) || (2 < uVar7)) goto LAB_ram_480d81fc;
  }
  if (cVar1 == '\x02') {
    uVar7 = uVar7 + 3 & 0xff;
  }
  fence();
  iVar18 = *param_1;
  if (*(int *)((uVar7 + 0xf3d) * 4 + iVar14) == iVar15) {
    FUN_ram_4ff3ec14(iVar18 + 0x2864,0xffffffff);
    piVar8 = *(int **)(iVar18 + 0x1e08);
    FUN_ram_4ff3ee10(iVar18 + 0x2864);
    iVar14 = 0;
    if (piVar8 != (int *)0x0) {
      iVar14 = (**(code **)(*piVar8 + 0x154))(piVar8,1);
    }
    iVar15 = *param_1;
    if (iVar14 == iVar17) {
      FUN_ram_4ff230e8(&uStack_e4,iVar15 + 0x79f4);
      iVar14 = *param_1;
      if (iStack_c0 != iVar16) {
        iVar14 = *(int *)(iVar14 + 0x33e8);
        goto LAB_ram_480d81fc;
      }
      bVar29 = true;
      if (uVar20 != 0xb) {
        FUN_ram_4805883a(&uStack_e4,iVar14);
        bVar29 = false;
        if ((bStack_e3 & 0xfd) == 0xc) {
          fence();
          bVar29 = *(int *)(*(int *)(*param_1 + 0x33e8) + 0x3d0c) == iVar28;
        }
      }
      uVar9 = FUN_ram_48025ba6();
      FUN_ram_480c80ca(iVar14 + 0x79cc,iVar28,bVar29,uVar9);
      iVar15 = *param_1;
    }
    iVar14 = *(int *)(iVar15 + 0x33e8);
  }
  else {
    iVar14 = *(int *)(iVar18 + 0x33e8);
  }
LAB_ram_480d81fc:
  iVar15 = iVar14 + 0xc;
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  if ((((iVar25 != 0 || iVar31 != 0) && (uVar27 != 0)) && (uVar21 < 0xce)) &&
     (iVar16 = uVar21 * 0x48 + iVar14, (*(ushort *)(iVar16 + 0x5e) & 1) != 0)) {
    iVar17 = *(int *)(iVar16 + 0x18);
    if (iVar17 != 0 || *(int *)(iVar16 + 0x1c) != 0) {
      uVar6 = *(ushort *)(iVar16 + 0x54);
      uVar7 = (uint)uVar6;
      if (((uVar7 < 0x1ff) && (iVar17 == iVar25)) &&
         ((*(int *)(iVar16 + 0x1c) == iVar31 &&
          ((uVar27 == (iVar17 << 9 | uVar7 + 1) && (uVar21 == uVar7)))))) {
        iVar16 = uVar21 * 0x48 + iVar14;
        if ((*(int *)(iVar16 + 0x5c) << 0xb < 0) && (-1 < *(int *)(iVar16 + 0x5c) << 10)) {
          *(byte *)(iVar16 + 0x5e) = *(byte *)(iVar16 + 0x5e) | 0x20;
          *(short *)(iVar14 + 0x3c02) = *(short *)(iVar14 + 0x3c02) + -1;
          if (((*(int *)(iVar16 + 0x5c) << 0xc < 0) && (-1 < *(int *)(iVar16 + 0x5c) << 0xe)) &&
             (*(char *)(iVar16 + 0x59) != '\0')) {
            *(byte *)(iVar16 + 0x5e) = *(byte *)(iVar16 + 0x5e) & 0xfe;
            *(undefined2 *)(iVar16 + 0x56) = *(undefined2 *)(iVar14 + 0x3bf0);
            *(ushort *)(iVar14 + 0x3bf0) = uVar6;
            *(short *)(iVar14 + 0x3bfa) = *(short *)(iVar14 + 0x3bfa) + 1;
            *(short *)(iVar14 + 0x3bf8) = *(short *)(iVar14 + 0x3bf8) + -1;
            FUN_ram_4ff3ee10(iVar15);
          }
          else {
            FUN_ram_4ff3ee10(iVar15);
          }
          if (uVar10 == 0) {
            return;
          }
          iVar14 = *param_1;
          if (cVar24 == '\0') {
            if (cVar5 == '\x02') {
              FUN_ram_4ff3ec14(iVar14 + 0xb20,0xffffffff);
              iVar16 = *param_1;
              iVar15 = 0x12;
              *(int *)(iVar16 + 0x110c) = *(int *)(iVar16 + 0x110c) + 1;
              uVar9 = FUN_ram_48025b94();
              *(undefined4 *)(iVar16 + 0x1128) = uVar9;
              iVar14 = 0x90;
            }
            else {
              FUN_ram_4ff3ec14(iVar14 + 0xb20,0xffffffff);
              iVar16 = *param_1;
              *(int *)(iVar16 + 0xc44) = *(int *)(iVar16 + 0xc44) + 1;
              uVar9 = FUN_ram_48025b94();
              iVar14 = *param_1;
              *(undefined4 *)(iVar16 + 0xc60) = uVar9;
              iVar15 = 1;
              *(int *)(iVar14 + 0x1420) = *(int *)(iVar14 + 0x1420) + 1;
              uVar9 = FUN_ram_48025ba6();
              *(undefined4 *)(iVar14 + 0x142c) = uVar9;
              iVar14 = 8;
            }
          }
          else {
            iVar15 = (cVar24 != '\x01') + 2;
            FUN_ram_4ff3ec14(iVar14 + 0xb20,0xffffffff);
            iVar14 = iVar15 * 8;
            iVar16 = *param_1;
            iVar17 = iVar15 * 0x48 + iVar16;
            *(int *)(iVar17 + 0xbfc) = *(int *)(iVar17 + 0xbfc) + 1;
            uVar9 = FUN_ram_48025b94();
            *(undefined4 *)(iVar17 + 0xc18) = uVar9;
          }
          iVar16 = (iVar14 + iVar15) * 8 + iVar16;
          *(undefined4 *)(iVar16 + 0xc1c) = uVar23;
          *(byte *)(iVar16 + 0xc24) = bVar26;
          iVar15 = *param_1;
          if (cVar4 != '\0') {
            *(int *)(iVar15 + 0x122c) = *(int *)(iVar15 + 0x122c) + 1;
            uVar9 = *(undefined4 *)(iVar16 + 0xc18);
            *(undefined4 *)(iVar15 + 0x124c) = uVar23;
            *(byte *)(iVar15 + 0x1254) = bVar26;
            *(undefined4 *)(iVar15 + 0x1248) = uVar9;
          }
          iVar15 = iVar15 + 0xb20;
        }
      }
    }
  }
  FUN_ram_4ff3ee10(iVar15);
  return;
}


