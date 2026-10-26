/* Firmware entry: 0x480e33be */

undefined1 FUN_ram_480e33be(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  short sVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  char cVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  int iVar25;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x5a1) != '\0') goto LAB_ram_480e358a;
  *(undefined1 *)(param_1 + 0x5a1) = 1;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined2 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined2 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  puVar21 = (undefined1 *)(param_1 + 0x110);
  for (puVar14 = (undefined1 *)(param_1 + 0xf0); puVar14 != puVar21; puVar14 = puVar14 + 8) {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
  }
  do {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar21[4] = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21 = puVar21 + 8;
  } while ((undefined1 *)(param_1 + 0x130) != puVar21);
  cVar11 = *(char *)(param_1 + 199);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(char *)(param_1 + 0x135) = cVar11;
  iVar22 = *(int *)(param_1 + 0x158) + 1;
  if (iVar22 == 0) {
    *(undefined4 *)(param_1 + 0x158) = 1;
    *(undefined1 *)(param_1 + 400) = 0;
    cVar20 = *(char *)(param_1 + 0x138);
    iVar22 = *(int *)(param_1 + 0x15c);
    iVar8 = *(int *)(param_1 + 0x160);
    iVar9 = *(int *)(param_1 + 0x164);
    if (*(char *)(param_1 + 0x25d) == '\0') goto LAB_ram_480e3492;
LAB_ram_480e349a:
    *(undefined1 *)(param_1 + 0x25d) = 0;
    *(char *)(param_1 + 0x25e) = cVar11;
    *(undefined1 *)(param_1 + 0x25f) = 0;
    *(char *)(param_1 + 0x260) = cVar20;
    *(int *)(param_1 + 0x264) = iVar22;
    *(int *)(param_1 + 0x268) = iVar8;
    *(int *)(param_1 + 0x26c) = iVar9;
    if (*(char *)(param_1 + 0x1fd) == '\0') {
      *(undefined1 *)(param_1 + 0x25c) = 0;
      bVar19 = false;
    }
    else {
      uVar5 = 0;
      uVar23 = 0;
      iVar22 = param_1;
      do {
        iVar8 = iVar22 + 5;
        bVar10 = *(byte *)(param_1 + 0x1c0) >> (uVar5 & 0x1f) & 1;
        do {
          pcVar1 = (char *)(iVar22 + 0x1df);
          pcVar2 = (char *)(iVar22 + 0x1c1);
          iVar22 = iVar22 + 1;
          bVar10 = bVar10 & *pcVar1 == *pcVar2;
        } while (iVar8 != iVar22);
        if (bVar10 == 0) {
          uVar23 = uVar23 | 1 << (uVar5 & 0x1f) & 0xffU;
        }
        uVar5 = uVar5 + 1;
        iVar22 = iVar8;
      } while (uVar5 != 6);
      *(char *)(param_1 + 0x25c) = (char)uVar23;
      bVar19 = 0xb < *(byte *)(param_1 + 0x21c) && uVar23 != 0;
    }
    cVar11 = *(char *)(param_1 + 0x21f);
    *(bool *)(param_1 + 0x275) = bVar19;
    if (cVar11 == '\0') {
      cVar11 = *(char *)(param_1 + 0x222);
    }
    cVar20 = *(char *)(param_1 + 0x368);
    *(char *)(param_1 + 0x271) = cVar11;
    *(undefined1 *)(param_1 + 0x273) = *(undefined1 *)(param_1 + 0x3fc);
    *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_1 + 0x221);
    if ((cVar20 != '\0') && (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x39c))) {
      cVar20 = *(int *)(param_1 + 0x214) == *(int *)(param_1 + 0x39c);
    }
    *(char *)(param_1 + 0x272) = cVar20;
    iVar22 = *(int *)(param_1 + 0x224) + 1;
    if (iVar22 == 0) {
      iVar22 = 1;
    }
    *(int *)(param_1 + 0x224) = iVar22;
  }
  else {
    *(int *)(param_1 + 0x158) = iVar22;
    *(undefined1 *)(param_1 + 400) = 0;
    cVar20 = *(char *)(param_1 + 0x138);
    iVar22 = *(int *)(param_1 + 0x15c);
    iVar8 = *(int *)(param_1 + 0x160);
    iVar9 = *(int *)(param_1 + 0x164);
    if (*(char *)(param_1 + 0x25d) != '\0') goto LAB_ram_480e349a;
LAB_ram_480e3492:
    if (((((*(char *)(param_1 + 0x25e) != cVar11) || (*(char *)(param_1 + 0x25f) != '\0')) ||
         (*(char *)(param_1 + 0x260) != cVar20)) ||
        ((*(int *)(param_1 + 0x264) != iVar22 || (*(int *)(param_1 + 0x268) != iVar8)))) ||
       (*(int *)(param_1 + 0x26c) != iVar9)) goto LAB_ram_480e349a;
  }
  piVar15 = (int *)(param_1 + 0x64c);
  do {
    iVar22 = *piVar15 + 1;
    if (iVar22 == 0) {
      iVar22 = 1;
    }
    *piVar15 = iVar22;
    piVar15 = piVar15 + 0x2c;
  } while (piVar15 != (int *)(param_1 + 0x85c));
LAB_ram_480e358a:
  if (((*(char *)(param_1 + 0x3a4) != '\0') || (*(char *)(param_1 + 0x3a5) != '\0')) ||
     (*(char *)(param_1 + 0x3fc) != '\0')) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x33f0) = 0;
  *(undefined1 *)(param_1 + 0x33f2) = 1;
  FUN_ram_48047848(param_1 + 0x2878);
  FUN_ram_480dcc76(param_1 + 0x2870);
  fence();
  iVar8 = param_1 + 0x2864;
  *(undefined1 *)(param_1 + 0x9789) = 1;
  FUN_ram_4ff3ec14(iVar8,0xffffffff);
  *(undefined1 *)(param_1 + 0x1e13) = 0;
  FUN_ram_4ff3ee10(iVar8);
  iVar22 = *(int *)(param_1 + 0x33e8);
  if (iVar22 != 0) {
    uVar6 = FUN_ram_48025b94();
    piVar15 = (int *)(iVar22 + 0x18);
    iVar9 = 0;
    do {
      FUN_ram_4ff3ec14(iVar22 + 0xc,0xffffffff);
      if ((*(ushort *)(iVar9 * 0x48 + iVar22 + 0x5e) & 1) != 0) {
        if (*(char *)((int)piVar15 + 0x41) == '\0') {
          sVar3 = *(short *)(iVar22 + 0x3bfc);
          *(undefined1 *)((int)piVar15 + 0x41) = 2;
          *(short *)(iVar22 + 0x3bfc) = sVar3 + -1;
        }
        iVar25 = iVar22 + iVar9 * 0x48;
        iVar16 = *(int *)(iVar25 + 0x5c);
        if (iVar16 << 0xc < 0) {
LAB_ram_480e38f6:
          iVar16 = iVar9 * 0x48 + iVar22;
          if (((*(int *)(iVar16 + 0x5c) << 10 < 0) && (-1 < *(int *)(iVar16 + 0x5c) << 0xe)) &&
             (*(char *)((int)piVar15 + 0x41) != '\0')) {
            *(byte *)(iVar16 + 0x5e) = *(byte *)(iVar16 + 0x5e) & 0xfe;
            *(undefined2 *)((int)piVar15 + 0x3e) = *(undefined2 *)(iVar22 + 0x3bf0);
            *(short *)(iVar22 + 0x3bf0) = (short)piVar15[0xf];
            *(short *)(iVar22 + 0x3bf8) = *(short *)(iVar22 + 0x3bf8) + -1;
            *(short *)(iVar22 + 0x3bfa) = *(short *)(iVar22 + 0x3bfa) + 1;
          }
        }
        else if ((char)piVar15[0x10] != '\x03') {
          if (iVar16 << 0xe < 0) {
            if (*(char *)((int)piVar15 + 0x42) == '\0') {
              *(undefined1 *)((int)piVar15 + 0x42) = 8;
            }
            uVar5 = (uint)*(byte *)((int)piVar15 + 0x25);
            if (uVar5 < 3) {
              if (*(char *)((int)piVar15 + 0x26) == '\x02') {
                uVar5 = uVar5 + 3 & 0xff;
              }
              iVar16 = *piVar15;
              iVar25 = piVar15[1];
              if (iVar16 == 0 && iVar25 == 0) {
                iVar17 = uVar5 * 4;
                iVar12 = uVar5 * 0x50 + iVar22;
                uVar23 = 0;
                uVar7 = 0;
                if (*(int *)(iVar12 + 0x3a08) == iVar16) goto LAB_ram_480e3964;
              }
              else {
                uVar23 = (uint)*(ushort *)(piVar15 + 0xf);
                if (uVar23 < 0x1ff) {
                  uVar7 = iVar16 << 9 | uVar23 + 1;
                }
                else {
                  uVar23 = 0;
                  uVar7 = 0;
                  iVar16 = 0;
                  iVar25 = 0;
                }
                iVar17 = uVar5 * 4;
                iVar12 = uVar5 * 0x50 + iVar22;
                if (*(int *)(iVar12 + 0x3a08) == iVar16) {
LAB_ram_480e3964:
                  iVar17 = uVar5 << 2;
                  if (((*(int *)(iVar12 + 0x3a0c) == iVar25) &&
                      (uVar7 == *(uint *)(iVar12 + 0x3a10))) &&
                     (*(ushort *)(iVar12 + 0x3a14) == uVar23)) {
                    *(undefined4 *)(iVar12 + 0x3a08) = 0;
                    *(undefined4 *)(iVar12 + 0x3a0c) = 0;
                    *(undefined4 *)(iVar12 + 0x3a10) = 0;
                    *(undefined4 *)(iVar12 + 0x3a14) = 0;
                  }
                }
              }
              piVar18 = (int *)((iVar17 + uVar5) * 0x10 + 0x3a00 + iVar22 + 8);
              bVar10 = (byte)(1 << (uVar5 & 0x1f));
              if ((((*piVar18 != 0 || piVar18[1] != 0) && (piVar18[2] != 0)) &&
                  (uVar5 = (uint)*(ushort *)(piVar18 + 3), uVar5 < 0xce)) &&
                 (iVar16 = uVar5 * 0x48 + iVar22, (*(ushort *)(iVar16 + 0x5e) & 1) != 0)) {
                iVar25 = *(int *)(iVar16 + 0x18);
                if (((iVar25 != 0 || *(int *)(iVar16 + 0x1c) != 0) &&
                    (uVar23 = (uint)*(ushort *)(iVar16 + 0x54), uVar23 < 0x1ff)) &&
                   (((*piVar18 == iVar25 &&
                     ((piVar18[1] == *(int *)(iVar16 + 0x1c) &&
                      (piVar18[2] == (iVar25 << 9 | uVar23 + 1))))) &&
                    ((uVar5 == uVar23 &&
                     ((iVar16 = uVar5 * 0x48 + iVar22, -1 < *(int *)(iVar16 + 0x5c) << 0xc &&
                      (*(byte *)(iVar16 + 0x58) < 2)))))))) {
                  *(byte *)(iVar22 + 0x3bf6) = bVar10 | *(byte *)(iVar22 + 0x3bf6);
                  goto LAB_ram_480e3782;
                }
              }
              *(byte *)(iVar22 + 0x3bf6) = ~bVar10 & *(byte *)(iVar22 + 0x3bf6);
            }
          }
          else {
            FUN_ram_480375b2(iVar22 + 8,piVar15,8,uVar6,1);
            if (*(int *)(iVar25 + 0x5c) << 0xc < 0) goto LAB_ram_480e38f6;
          }
        }
      }
LAB_ram_480e3782:
      FUN_ram_4ff3ee10(iVar22 + 0xc);
      iVar9 = iVar9 + 1;
      piVar15 = piVar15 + 0x12;
    } while (iVar9 != 0xce);
  }
  pbVar24 = &DAT_ram_48222c2c;
  do {
    uVar5 = (uint)*pbVar24;
    FUN_ram_4ff3ec14(iVar8,0xffffffff);
    iVar22 = *(int *)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(iVar8);
    if ((iVar22 != 0) && (((uVar5 - 1 & 0xff) < 2 || (uVar5 == 4)))) {
      uVar23 = (uint)*(byte *)(iVar22 + 0x10);
      iVar9 = (iVar22 + 0x10U & 3) << 3;
      puVar4 = (uint *)(iVar22 + 0x10U & 0xfffffffc);
      do {
        uVar13 = 0xff << iVar9;
        uVar7 = *puVar4;
        if ((uVar7 & uVar13) == (uVar23 << iVar9 & uVar13)) {
          *puVar4 = uVar7 & ~uVar13 | (uVar23 & ~uVar5) << iVar9 & uVar13;
        }
        cVar11 = (char)uVar23;
        uVar23 = (int)uVar7 >> iVar9 & 0xff;
      } while ((char)((int)uVar7 >> iVar9) != cVar11);
    }
    pbVar24 = pbVar24 + 1;
    FUN_ram_480e2e1e(param_1,uVar5);
  } while (pbVar24 != &UNK_ram_48222c2f);
  FUN_ram_4809ebc2(param_1 + 0x79cc);
  FUN_ram_480df148(param_1 + 0x84a8,1);
  return 1;
}


