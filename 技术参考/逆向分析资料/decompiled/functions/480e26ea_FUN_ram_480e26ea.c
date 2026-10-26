/* Firmware entry: 0x480e26ea */

uint FUN_ram_480e26ea(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  short sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  byte *pbVar16;
  short sVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  int *piVar20;
  short *psVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  uint uVar25;
  byte local_78 [4];
  undefined4 auStack_74 [17];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar23 = *param_1;
  if (*(char *)((int)param_1 + 0x27) == '\0') {
    cVar24 = '\x03';
    do {
      while( true ) {
        psVar21 = *(short **)(iVar23 + 0x33ec);
        if (psVar21 != (short *)0x0) {
          sVar17 = *psVar21;
          if (sVar17 == 0) goto LAB_ram_480e273e;
          if (*(code **)(psVar21 + 2) != (code *)0x0) {
            iVar8 = (**(code **)(psVar21 + 2))();
            iVar23 = *param_1;
            if (*(uint *)(psVar21 + 6) <= (uint)(iVar8 - *(int *)(psVar21 + 4)))
            goto LAB_ram_480e273e;
            sVar17 = *psVar21;
          }
          *psVar21 = sVar17 + -1;
        }
        uVar25 = (uint)*(byte *)((int)param_1 + 0x26);
        uVar7 = uVar25 + 1;
        *(byte *)((int)param_1 + 0x26) =
             (char)uVar7 -
             (((byte)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar7 / 3));
        if (*(char *)(iVar23 + uVar25 + 0x3a3c) == '\0') break;
        cVar1 = (&DAT_ram_481f54b0)[uVar25];
        iVar8 = *(int *)((uVar25 + 0x24f8) * 4 + iVar23);
        *(undefined1 *)(param_1 + 1) = 0;
        param_1[2] = 0;
        *(undefined2 *)(param_1 + 3) = 0;
        param_1[4] = 0;
        *(undefined2 *)(param_1 + 5) = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        if ((((byte)(cVar1 - 1U) < 2) || (cVar1 == '\x04')) && (iVar8 != 0)) {
          iVar22 = iVar23 + 0x2864;
          FUN_ram_4ff3ec14(iVar22,0xffffffff);
          sVar17 = 0x80;
          do {
            psVar21 = *(short **)(iVar23 + 0x1e0c);
            if (psVar21 != (short *)0x0) {
              sVar12 = *psVar21;
              if (sVar12 == 0) break;
              if (*(code **)(psVar21 + 2) != (code *)0x0) {
                iVar9 = (**(code **)(psVar21 + 2))();
                if (*(uint *)(psVar21 + 6) <= (uint)(iVar9 - *(int *)(psVar21 + 4))) break;
                sVar12 = *psVar21;
              }
              *psVar21 = sVar12 + -1;
            }
            if (cVar1 == '\x01') {
              uVar7 = (uint)*(byte *)(iVar23 + 0x1e10);
              iVar9 = 0;
              bVar6 = *(byte *)(iVar23 + 0x1e10) + 1 & 0x7f;
            }
            else if (cVar1 == '\x02') {
              uVar7 = (uint)*(byte *)(iVar23 + 0x1e11);
              iVar9 = 1;
              bVar6 = *(byte *)(iVar23 + 0x1e11) + 1 & 0x7f;
            }
            else {
              uVar7 = (uint)*(byte *)(iVar23 + 0x1e12);
              iVar9 = 2;
              bVar6 = *(byte *)(iVar23 + 0x1e12) + 1 & 0x7f;
            }
            *(byte *)(iVar9 + iVar23 + 0x2000 + -0x1f0) = bVar6;
            iVar9 = iVar23 + 0x2000 + uVar7 * 0x14;
            if (((*(char *)(iVar9 + -0x1cf) != '\0') && (cVar1 == *(char *)(iVar9 + -0x1d0))) &&
               (iVar11 = *(int *)(iVar9 + -0x1d4), iVar8 != iVar11)) {
              iVar8 = *(int *)(iVar9 + -0x1dc);
              puVar18 = (undefined1 *)(uVar7 * 0x14 + 0x1e20 + iVar23);
              *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar9 + -0x1e0);
              param_1[2] = iVar8;
              *(char *)((int)param_1 + 0xd) = cVar1;
              param_1[4] = iVar11;
              param_1[8] = 0x40000000;
              *(undefined1 *)(param_1 + 3) = 0;
              *(undefined1 *)(param_1 + 5) = 1;
              *puVar18 = 0;
              puVar18[4] = 0;
              puVar18[5] = 0;
              puVar18[6] = 0;
              puVar18[7] = 0;
              puVar18[8] = 0;
              puVar18[9] = 0;
              puVar18[10] = 0;
              puVar18[0xb] = 0;
              puVar18[0xc] = 0;
              puVar18[0xd] = 0;
              puVar18[0xe] = 0;
              puVar18[0xf] = 0;
              puVar18[0x10] = 0;
              puVar18[0x11] = 0;
              puVar18[0x12] = 0;
              FUN_ram_4ff3ee10(iVar22);
              iVar23 = FUN_ram_48025b94();
              *(undefined1 *)((int)param_1 + 0x27) = 1;
              param_1[7] = iVar23;
              return 1;
            }
            sVar17 = sVar17 + -1;
          } while (sVar17 != 0);
          FUN_ram_4ff3ee10(iVar22);
          iVar23 = *param_1;
          psVar21 = *(short **)(iVar23 + 0x33ec);
        }
        else {
          psVar21 = *(short **)(iVar23 + 0x33ec);
        }
        if (psVar21 != (short *)0x0) {
          if (*psVar21 == 0) break;
          if (*(code **)(psVar21 + 2) != (code *)0x0) {
            iVar8 = (**(code **)(psVar21 + 2))();
            iVar23 = *param_1;
            if (*(uint *)(psVar21 + 6) <= (uint)(iVar8 - *(int *)(psVar21 + 4))) break;
          }
        }
        cVar24 = cVar24 + -1;
        *(undefined1 *)(uVar25 + iVar23 + 0x3a3c) = 0;
        if (cVar24 == '\0') goto LAB_ram_480e273e;
      }
      cVar24 = cVar24 + -1;
    } while (cVar24 != '\0');
LAB_ram_480e273e:
    local_78[0] = 0;
    uVar7 = FUN_ram_480455be(iVar23 + 0x1e08,param_1 + 1,1,local_78);
    *(char *)((int)param_1 + 0x27) = (char)uVar7;
    return uVar7 | local_78[0];
  }
  iVar23 = FUN_ram_480e250e(iVar23 + 0x2870);
  if (iVar23 != 0) {
    return 1;
  }
  iVar23 = *param_1;
  FUN_ram_4ff3ec14(iVar23 + 0x33c0,0xffffffff);
  pcVar15 = (char *)(iVar23 + 0x2968);
  bVar3 = false;
  do {
    cVar24 = *pcVar15;
    pcVar15 = pcVar15 + 0xf0;
    bVar3 = (bool)(bVar3 | cVar24 == '\x04');
  } while ((char *)(iVar23 + 0x34a8) != pcVar15);
  FUN_ram_4ff3ee10(iVar23 + 0x33c0);
  if (bVar3) {
    return 0;
  }
  cVar24 = '\x03';
  do {
    iVar23 = *param_1;
    psVar21 = *(short **)(iVar23 + 0x33ec);
    if (psVar21 != (short *)0x0) {
      sVar17 = *psVar21;
      if (sVar17 == 0) goto LAB_ram_480e2aaa;
      if (*(code **)(psVar21 + 2) != (code *)0x0) {
        iVar8 = (**(code **)(psVar21 + 2))();
        iVar23 = *param_1;
        if (*(uint *)(psVar21 + 6) <= (uint)(iVar8 - *(int *)(psVar21 + 4))) {
          psVar21 = *(short **)(iVar23 + 0x33ec);
          goto LAB_ram_480e2b3e;
        }
        sVar17 = *psVar21;
      }
      *psVar21 = sVar17 + -1;
    }
    uVar7 = *(byte *)((int)param_1 + 0x25) + 1;
    uVar2 = (&DAT_ram_481f54b4)[*(byte *)((int)param_1 + 0x25)];
    *(byte *)((int)param_1 + 0x25) =
         (char)uVar7 - (((byte)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar7 / 3));
    pbVar4 = local_78;
    puVar5 = &DAT_ram_48222eb8;
    do {
      puVar19 = puVar5;
      pbVar16 = pbVar4;
      uVar10 = puVar19[1];
      uVar13 = puVar19[2];
      *(undefined4 *)pbVar16 = *puVar19;
      uVar14 = puVar19[3];
      *(undefined4 *)(pbVar16 + 4) = uVar10;
      *(undefined4 *)(pbVar16 + 8) = uVar13;
      *(undefined4 *)(pbVar16 + 0xc) = uVar14;
      pbVar4 = pbVar16 + 0x10;
      puVar5 = puVar19 + 4;
    } while (puVar19 + 4 != &DAT_ram_48222ee8);
    uVar10 = puVar19[5];
    *(undefined4 *)(pbVar16 + 0x10) = DAT_ram_48222ee8;
    *(undefined4 *)(pbVar16 + 0x14) = uVar10;
    iVar23 = FUN_ram_4804628e(iVar23 + 0x3a40,uVar2,local_78);
    if (iVar23 != 0) {
      FUN_ram_480dc4f2(*param_1,local_78);
      return 1;
    }
    cVar24 = cVar24 + -1;
  } while (cVar24 != '\0');
  iVar23 = *param_1;
  psVar21 = *(short **)(iVar23 + 0x33ec);
LAB_ram_480e2b3e:
  if (psVar21 != (short *)0x0) {
LAB_ram_480e2aaa:
    sVar17 = *psVar21;
    if (sVar17 == 0) {
      return 0;
    }
    if (*(code **)(psVar21 + 2) != (code *)0x0) {
      iVar23 = (**(code **)(psVar21 + 2))();
      if (*(uint *)(psVar21 + 6) <= (uint)(iVar23 - *(int *)(psVar21 + 4))) {
        return 0;
      }
      sVar17 = *psVar21;
      iVar23 = *param_1;
    }
    *psVar21 = sVar17 + -1;
  }
  iVar23 = FUN_ram_4804556a(iVar23 + 0x1e08,*(undefined1 *)((int)param_1 + 0xd));
  if (((param_1[4] == 0) || (iVar23 == 0)) || (param_1[4] != iVar23)) {
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  iVar23 = *param_1;
  piVar20 = param_1 + 1;
  uVar10 = FUN_ram_48025ba6();
  FUN_ram_4805d48e(iVar23,piVar20);
  bVar6 = *(byte *)(param_1 + 1);
  if (bVar6 < 0x10) {
    FUN_ram_4ff3ec14(iVar23 + 0xb20,0xffffffff);
    iVar8 = (uint)bVar6 * 4;
    if ((char)param_1[3] == '\0') {
      *(int *)(iVar23 + iVar8 + 0x14e4) = *(int *)(iVar23 + iVar8 + 0x14e4) + 1;
    }
    else {
      *(int *)(iVar23 + iVar8 + 0x14a4) = *(int *)(iVar23 + iVar8 + 0x14a4) + 1;
    }
    *(undefined4 *)(iVar23 + iVar8 + 0x1524) = uVar10;
    *(int *)(iVar23 + iVar8 + 0x1564) = param_1[8];
    FUN_ram_4ff3ee10(iVar23 + 0xb20);
  }
  iVar23 = *param_1;
  FUN_ram_48025ba6();
  FUN_ram_480cb520(iVar23 + 0x7cd0,piVar20);
  FUN_ram_480df834(iVar23 + 0x84a8,piVar20);
  if ((param_1[2] == *(int *)(iVar23 + 0x93c4)) && (param_1[2] != 0)) {
    *(undefined4 *)(iVar23 + 0x93c4) = 0;
    if (*(char *)(iVar23 + 0x93d9) == '\0') {
      *(undefined1 *)(iVar23 + 0x93da) = 1;
      bVar6 = 0;
      if ((char)param_1[3] != '\0') {
        bVar6 = *(byte *)(param_1 + 5) ^ 1;
      }
      *(byte *)(iVar23 + 0x93db) = bVar6;
      if (((char)param_1[5] == '\0') && (*(char *)(iVar23 + 0x93de) == '\0')) goto LAB_ram_480e2c38;
    }
    else if (((char)param_1[5] == '\0') && (*(char *)(iVar23 + 0x93de) == '\0')) {
      if ((char)param_1[3] == '\0') {
        *(undefined1 *)(iVar23 + 0x93dd) = 1;
        *(char *)(iVar23 + 0x93d5) = *(char *)(iVar23 + 0x93d5) + '\x01';
        uVar10 = FUN_ram_48025ba6();
        *(undefined4 *)(iVar23 + 0x93d0) = uVar10;
      }
      else {
        FUN_ram_480c3f56(iVar23 + 0x9288,*(undefined1 *)(iVar23 + 0x93db),1);
      }
      goto LAB_ram_480e2c38;
    }
    FUN_ram_480c3f56(iVar23 + 0x9288,0,2);
  }
LAB_ram_480e2c38:
  if (((*(char *)(iVar23 + 0x7ce0) == '\0') && (*(char *)(iVar23 + 0x8528) == '\0')) &&
     ((char)param_1[1] == '\x0e')) {
    piVar20 = (int *)(iVar23 + 0x981c);
    do {
      if ((piVar20[1] == param_1[2]) && (iVar8 = *piVar20, iVar8 != 0)) {
        iVar22 = param_1[3];
        iVar11 = param_1[7];
        iVar9 = param_1[8];
        FUN_ram_4ff3ec14(iVar23 + 0xb28,0xffffffff);
        if (*(char *)(iVar23 + 0x9b06) != '\0') {
          *(char *)(iVar23 + 0x9b06) = *(char *)(iVar23 + 0x9b06) + -1;
        }
        uVar7 = *(byte *)(iVar23 + 0x9b04) + 1 & 0x1f;
        if (*(byte *)(iVar23 + 0x9b05) == uVar7) {
          *(int *)(iVar23 + 0x9b08) = *(int *)(iVar23 + 0x9b08) + 1;
        }
        else {
          puVar18 = (undefined1 *)(iVar23 + (uint)*(byte *)(iVar23 + 0x9b04) * 0x14 + 0x9884);
          puVar18[0xc] = (char)iVar9;
          *puVar18 = (char)iVar8;
          puVar18[4] = (char)iVar22;
          puVar18[8] = (char)iVar11;
          puVar18[0x10] = 0;
          puVar18[1] = (char)((uint)iVar8 >> 8);
          puVar18[2] = (char)((uint)iVar8 >> 0x10);
          puVar18[3] = (char)((uint)iVar8 >> 0x18);
          puVar18[9] = (char)((uint)iVar11 >> 8);
          puVar18[10] = (char)((uint)iVar11 >> 0x10);
          puVar18[0xb] = (char)((uint)iVar11 >> 0x18);
          puVar18[0xd] = (char)((uint)iVar9 >> 8);
          puVar18[0xe] = (char)((uint)iVar9 >> 0x10);
          puVar18[0xf] = (char)((uint)iVar9 >> 0x18);
          *(char *)(iVar23 + 0x9b04) = (char)uVar7;
        }
        FUN_ram_4ff3ee10(iVar23 + 0xb28);
        *piVar20 = 0;
        piVar20[1] = 0;
        break;
      }
      piVar20 = piVar20 + 2;
    } while ((int *)(iVar23 + 0x987c) != piVar20);
  }
  *(undefined1 *)((int)param_1 + 0x27) = 0;
  return 1;
}


