/* Firmware entry: 0x48063aa0 */

void FUN_ram_48063aa0(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined3 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iStack_9c;
  uint uStack_74;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  iVar10 = FUN_ram_4ff3c5d4();
  do {
    iStack_9c = iVar10;
    FUN_ram_4811fc14(iStack_9c);
    do {
      if (DAT_ram_4ff5cfac != (code *)0x0) {
        (*DAT_ram_4ff5cfac)(3,10,0,0xffffffff,0,0,0,0);
      }
      if (DAT_ram_4ff5cfb0 != (code *)0x0) {
        (*DAT_ram_4ff5cfb0)();
      }
      if ((DAT_ram_4ff6df2c != (int *)0x0) &&
         ((**(code **)(*DAT_ram_4ff6df2c + 0x2c))(), DAT_ram_4ff6df2c != (int *)0x0)) {
        fence();
        fence();
        if (DAT_ram_4ff6df34 == '\0') {
LAB_ram_48063b46:
          bVar9 = 0;
        }
        else {
          fence();
          fence();
          if (DAT_ram_4ff6df38 == '\0') goto LAB_ram_48063b46;
          fence();
          fence();
          if (DAT_ram_4ff6df30 != '\0') goto LAB_ram_48063b46;
          bVar9 = FUN_ram_4ff2bcc4();
          bVar9 = bVar9 ^ 1;
        }
        iVar10 = (**(code **)(*DAT_ram_4ff6df2c + 0x154))(DAT_ram_4ff6df2c,1);
        iVar11 = (**(code **)(*DAT_ram_4ff6df2c + 0x154))(DAT_ram_4ff6df2c,2);
        if (((DAT_ram_4ff6df88 != 0) && (fence(), DAT_ram_4ff6df84 == '\0')) &&
           (iVar12 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0), iVar12 == 1)) {
          uStack_74 = FUN_ram_48025ba6();
          iVar12 = FUN_ram_48025b94();
          fence();
          if ((DAT_ram_4ff6df39 != '\0') && (2500000 < (uint)(iVar12 - DAT_ram_4ff6df68))) {
            DAT_ram_4ff6df39 = '\0';
          }
          if (DAT_ram_4ff6df3c == 0) {
            if (bVar9 != 0) goto LAB_ram_48064510;
          }
          else if (bVar9 == 0) {
            DAT_ram_4ff6df3b = '\x01';
          }
          else {
LAB_ram_48064510:
            if (DAT_ram_4ff6df3b != '\0') {
              FUN_ram_48060d98(DAT_ram_4ff6df8c);
              DAT_ram_4ff6df3d = '\0';
              DAT_ram_4ff6df3b = '\0';
              DAT_ram_4ff6df7c = 0;
              DAT_ram_4ff47ecc = DAT_ram_4ff47ecc + 1;
            }
          }
          iVar18 = DAT_ram_4ff6b738;
          DAT_ram_4ff6df3c = bVar9;
          if (DAT_ram_4ff47ec8 == DAT_ram_4ff47ecc) {
            if (((DAT_ram_4ff6df74 != 0) && (iVar10 != DAT_ram_4ff6df74)) ||
               ((DAT_ram_4ff6df70 != 0 && (iVar11 != DAT_ram_4ff6df70)))) {
              FUN_ram_48060d98(DAT_ram_4ff6df8c);
              DAT_ram_4ff47ecc = DAT_ram_4ff47ecc + 1;
              goto LAB_ram_48063c92;
            }
          }
          else {
LAB_ram_48063c92:
            DAT_ram_4ff6df3d = '\0';
            DAT_ram_4ff6df6c = iVar18;
            DAT_ram_4ff6df3a = '\0';
            DAT_ram_4ff6df7c = 0;
            DAT_ram_4ff6df39 = '\0';
            DAT_ram_4ff47ec8 = DAT_ram_4ff47ecc;
          }
          iVar5 = DAT_ram_4ff6df5c;
          iVar3 = DAT_ram_4ff47ecc;
          if (iVar18 != DAT_ram_4ff6df78) {
            DAT_ram_4ff6df3a = '\x01';
          }
          DAT_ram_4ff6df78 = iVar18;
          fence();
          uVar19 = DAT_ram_4ff6df5c - 1;
          if ((uVar19 < 2) && (DAT_ram_4ff6df58 == '\0')) {
            DAT_ram_4ff6df54 = DAT_ram_4ff6b734;
            fence();
            DAT_ram_4ff6df58 = '\x01';
            if (DAT_ram_4ff6df5c == 1) {
              DAT_ram_4ff6df64 = iVar18;
            }
          }
          uStack_4c = uStack_4c & 0xffffff;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_42 = 0;
          iVar18 = 0x10;
          DAT_ram_4ff6df70 = iVar11;
          DAT_ram_4ff6df74 = iVar10;
          do {
            piVar8 = DAT_ram_4ff6df8c;
            piVar2 = DAT_ram_4ff6df80;
            fence();
            fence();
            if (DAT_ram_4ff6b730 == DAT_ram_4ff6b734) break;
            if ((uVar19 < 2) && (fence(), DAT_ram_4ff6b730 == DAT_ram_4ff6df54)) {
              bVar1 = false;
              if (DAT_ram_4ff6df7c == 0x80) {
                bVar1 = 19999 < (uint)(iVar12 - *DAT_ram_4ff6df80);
              }
              goto LAB_ram_480643b4;
            }
            if (DAT_ram_4ff6df7c == 0x80) goto LAB_ram_48064396;
            fence();
            if (DAT_ram_4ff6b730 == DAT_ram_4ff6b734) break;
            iVar14 = DAT_ram_4ff6b730 * 0x1c;
            uStack_4c = *(uint *)(&DAT_ram_4ff6a940 + iVar14);
            iVar7 = *(int *)(&DAT_ram_4ff6a930 + iVar14);
            iVar16 = *(int *)(&DAT_ram_4ff6a934 + iVar14);
            iStack_54 = *(int *)(&DAT_ram_4ff6a938 + iVar14);
            iVar17 = *(int *)(&DAT_ram_4ff6a93c + iVar14);
            uStack_48 = *(undefined4 *)(&DAT_ram_4ff6a944 + iVar14);
            uStack_44 = *(undefined2 *)(&DAT_ram_4ff6a948 + iVar14);
            uStack_42 = (&DAT_ram_4ff6a94a)[iVar14];
            uVar4 = *(undefined3 *)(&DAT_ram_4ff6a940 + iVar14);
            DAT_ram_4ff6b730 = DAT_ram_4ff6b730 + 1 & 0x7f;
            fence();
            iStack_5c = iVar7;
            iStack_58 = iVar16;
            iStack_50 = iVar17;
            if (((DAT_ram_4ff6df39 != '\0') && (DAT_ram_4ff6df60 == iStack_54)) ||
               (iVar3 == iStack_54)) {
              iVar6 = iVar10;
              if ((&DAT_ram_4ff6a942)[iVar14] != '\x01') {
                iVar6 = iVar11;
              }
              if (iVar6 == iVar16) {
                piVar8 = piVar2;
                iVar14 = DAT_ram_4ff6df7c + 1;
                if (DAT_ram_4ff6df7c != 0) {
                  iVar6 = DAT_ram_4ff6df7c;
                  piVar13 = DAT_ram_4ff6df80 + DAT_ram_4ff6df7c * 7;
                  DAT_ram_4ff6df7c = DAT_ram_4ff6df7c + 1;
                  do {
                    iVar6 = iVar6 + -1;
                    piVar8 = piVar13;
                    iVar14 = DAT_ram_4ff6df7c;
                    if (-1 < iVar7 - piVar13[-7]) break;
                    FUN_ram_4ff45158(piVar13,piVar13 + -7,0x1b);
                    piVar13 = piVar13 + -7;
                    piVar8 = piVar2;
                    iVar14 = DAT_ram_4ff6df7c;
                  } while (iVar6 != 0);
                }
                DAT_ram_4ff6df7c = iVar14;
                uStack_4c = CONCAT13(uStack_4c._3_1_,uVar4);
                iStack_5c = iVar7;
                iStack_58 = iVar16;
                iStack_54 = iVar3;
                iStack_50 = iVar17;
                FUN_ram_4ff45158(piVar8,&iStack_5c,0x1b);
              }
              else {
                if ((char)DAT_ram_4ff6df8c[0x12] != '\0') {
                  piVar2 = DAT_ram_4ff6df8c + 0x17;
                  iVar7 = DAT_ram_4ff6df8c[0x1e];
                  *(undefined1 *)((int)DAT_ram_4ff6df8c + 0x5dd) = 1;
                  piVar8[0x150] = *piVar2;
                  if ((char)iVar7 == '\0') {
                    *(undefined1 *)(piVar8 + 0x1e) = 1;
                    *piVar8 = *piVar8 + 1;
                  }
                }
                piVar8[0x15d] = 0;
                piVar8[0x15b] = 0;
                piVar8[0x159] = 0;
                *(undefined1 *)(piVar8 + 0x18a) = 0;
                *(undefined1 *)((int)piVar8 + 0x629) = 0;
                *(undefined1 *)((int)piVar8 + 0x62a) = 0;
                *(undefined1 *)((int)piVar8 + 0x62b) = 0;
                *(undefined1 *)(piVar8 + 0x18b) = 0;
                *(undefined1 *)((int)piVar8 + 0x62d) = 0;
                *(undefined1 *)((int)piVar8 + 0x62e) = 0;
                *(undefined1 *)((int)piVar8 + 0x62f) = 0;
                *(undefined1 *)(piVar8 + 0x18c) = 0;
                *(undefined1 *)((int)piVar8 + 0x631) = 0;
                *(undefined1 *)((int)piVar8 + 0x632) = 0;
                *(undefined1 *)((int)piVar8 + 0x633) = 0;
                *(undefined1 *)(piVar8 + 0x18d) = 0;
                *(undefined1 *)((int)piVar8 + 0x635) = 0;
                *(undefined1 *)((int)piVar8 + 0x636) = 0;
                *(undefined1 *)((int)piVar8 + 0x637) = 0;
                *(undefined2 *)(piVar8 + 0x18e) = 0;
                piVar8[0x163] = 0;
                piVar8[0x15c] = 0;
                piVar8[0x15a] = 0;
                piVar8[0x158] = 0;
                piVar8[0x157] = 0;
                piVar8[0x156] = 0;
                piVar8[0x155] = 0;
                piVar8[0x16a] = 0;
                piVar8[0x16b] = 0;
                piVar8[0x168] = 0;
                piVar8[0x169] = 0;
                piVar8[0x166] = 0;
                piVar8[0x167] = 0;
                *(undefined1 *)((int)piVar8 + 0x5d1) = 0;
                *(undefined2 *)((int)piVar8 + 0x5d2) = 0;
                piVar8[0x175] = 0;
                *(undefined2 *)(piVar8 + 0x176) = 0;
                piVar8[0x162] = 0;
                piVar8[0x172] = 0;
                piVar8[0x173] = 0;
                piVar8[0x170] = 0;
                piVar8[0x171] = 0;
                piVar8[0x16e] = 0;
                piVar8[0x16f] = 0;
                piVar8[0x16c] = 0;
                piVar8[0x16d] = 0;
                *(undefined1 *)(piVar8 + 0x280) = 2;
              }
            }
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          bVar1 = false;
          if (DAT_ram_4ff6df7c == 0x80) {
LAB_ram_48064396:
            bVar1 = 19999 < (uint)(iVar12 - *DAT_ram_4ff6df80);
            if (1 < uVar19) goto LAB_ram_48063dfa;
LAB_ram_480643b4:
            fence();
            fence();
            fence();
            if (DAT_ram_4ff6b730 == DAT_ram_4ff6b734) {
              bVar1 = DAT_ram_4ff6b730 == DAT_ram_4ff6df54;
              goto LAB_ram_48063e1c;
            }
            if (DAT_ram_4ff6b730 == DAT_ram_4ff6df54) {
              bVar1 = true;
              goto LAB_ram_48063e1c;
            }
LAB_ram_480643ee:
            if (bVar1) goto LAB_ram_48063e1a;
            fence();
            fence();
            bVar1 = false;
            if (DAT_ram_4ff6b730 == DAT_ram_4ff6b734) goto LAB_ram_48064100;
LAB_ram_48064412:
            fence();
            fence();
            if (DAT_ram_4ff6b734 == DAT_ram_4ff6b730) {
              bVar1 = false;
LAB_ram_48064192:
              if (DAT_ram_4ff6df7c == 0) {
                if (DAT_ram_4ff6df3a != '\0') {
                  FUN_ram_48060d98(DAT_ram_4ff6df8c);
                  DAT_ram_4ff6df3d = '\0';
                  DAT_ram_4ff6df6c = DAT_ram_4ff6b738;
                  DAT_ram_4ff6df3a = '\0';
                }
                if (DAT_ram_4ff6df3b != '\0') {
                  FUN_ram_48060d98(DAT_ram_4ff6df8c);
                  DAT_ram_4ff6df3d = '\0';
                  DAT_ram_4ff6df3b = '\0';
                }
                fence();
                fence();
                DAT_ram_4ff47ed0 = DAT_ram_4ff6b730 == DAT_ram_4ff6b734;
                fence();
                if (bVar1) {
                  if (iVar5 == 1) {
                    fence();
                    DAT_ram_4ff6df84 = '\x01';
                    if (DAT_ram_4ff6df5c == 1) {
                      DAT_ram_4ff6df5c = 3;
                    }
                    else {
                      fence();
                      DAT_ram_4ff6df84 = '\0';
                    }
                  }
                  else if (DAT_ram_4ff6df5c == iVar5) {
                    DAT_ram_4ff6df5c = 4;
                  }
                }
              }
            }
          }
          else {
            if (uVar19 < 2) goto LAB_ram_480643b4;
LAB_ram_48063dfa:
            fence();
            fence();
            if (DAT_ram_4ff6b734 != DAT_ram_4ff6b730) goto LAB_ram_480643ee;
LAB_ram_48063e1a:
            bVar1 = false;
LAB_ram_48063e1c:
            iVar10 = 0x10;
            do {
              piVar2 = DAT_ram_4ff6df80;
              iVar11 = DAT_ram_4ff6df7c;
              if (DAT_ram_4ff6df7c == 0) break;
              FUN_ram_4ff45158(&iStack_5c,DAT_ram_4ff6df80,0x1b);
              iVar18 = *piVar2;
              iVar16 = piVar2[4];
              iVar3 = piVar2[1];
              iVar7 = piVar2[2];
              iVar14 = piVar2[3];
              uVar19 = iVar12 - iVar18;
              if ((bVar9 != 0) && (uVar19 < 20000)) break;
              if (iVar11 != 1) {
                piVar8 = piVar2 + 7;
                do {
                  piVar13 = piVar8 + 7;
                  FUN_ram_4ff45158(piVar8 + -7,piVar8,0x1b);
                  piVar8 = piVar13;
                } while (piVar13 != piVar2 + iVar11 * 7);
              }
              piVar2 = DAT_ram_4ff6df8c;
              DAT_ram_4ff6df7c = iVar11 + -1;
              if (uVar19 < 0x2625a1) {
                if (DAT_ram_4ff6df6c != iVar14) {
                  if ((char)DAT_ram_4ff6df8c[0x12] != '\0') {
                    piVar8 = DAT_ram_4ff6df8c + 0x17;
                    iVar11 = DAT_ram_4ff6df8c[0x1e];
                    *(undefined1 *)((int)DAT_ram_4ff6df8c + 0x5dd) = 1;
                    piVar2[0x150] = *piVar8;
                    if ((char)iVar11 == '\0') {
                      *(undefined1 *)(piVar2 + 0x1e) = 1;
                      *piVar2 = *piVar2 + 1;
                    }
                  }
                  piVar2[0x15c] = 0;
                  piVar2[0x15d] = 0;
                  piVar2[0x15a] = 0;
                  piVar2[0x15b] = 0;
                  piVar2[0x158] = 0;
                  piVar2[0x159] = 0;
                  *(undefined1 *)(piVar2 + 0x18a) = 0;
                  *(undefined1 *)((int)piVar2 + 0x629) = 0;
                  *(undefined1 *)((int)piVar2 + 0x62a) = 0;
                  *(undefined1 *)((int)piVar2 + 0x62b) = 0;
                  *(undefined1 *)(piVar2 + 0x18b) = 0;
                  *(undefined1 *)((int)piVar2 + 0x62d) = 0;
                  *(undefined1 *)((int)piVar2 + 0x62e) = 0;
                  *(undefined1 *)((int)piVar2 + 0x62f) = 0;
                  *(undefined1 *)(piVar2 + 0x18c) = 0;
                  *(undefined1 *)((int)piVar2 + 0x631) = 0;
                  *(undefined1 *)((int)piVar2 + 0x632) = 0;
                  *(undefined1 *)((int)piVar2 + 0x633) = 0;
                  *(undefined1 *)(piVar2 + 0x18d) = 0;
                  *(undefined1 *)((int)piVar2 + 0x635) = 0;
                  *(undefined1 *)((int)piVar2 + 0x636) = 0;
                  *(undefined1 *)((int)piVar2 + 0x637) = 0;
                  *(undefined2 *)(piVar2 + 0x18e) = 0;
                  piVar2[0x163] = 0;
                  piVar2[0x157] = 0;
                  piVar2[0x156] = 0;
                  piVar2[0x155] = 0;
                  piVar2[0x16a] = 0;
                  piVar2[0x16b] = 0;
                  piVar2[0x168] = 0;
                  piVar2[0x169] = 0;
                  piVar2[0x166] = 0;
                  piVar2[0x167] = 0;
                  *(undefined1 *)((int)piVar2 + 0x5d1) = 0;
                  *(undefined2 *)((int)piVar2 + 0x5d2) = 0;
                  piVar2[0x175] = 0;
                  *(undefined2 *)(piVar2 + 0x176) = 0;
                  piVar2[0x162] = 0;
                  piVar2[0x172] = 0;
                  piVar2[0x173] = 0;
                  piVar2[0x170] = 0;
                  piVar2[0x171] = 0;
                  piVar2[0x16e] = 0;
                  piVar2[0x16f] = 0;
                  piVar2[0x16c] = 0;
                  piVar2[0x16d] = 0;
                  *(undefined1 *)(piVar2 + 0x280) = 2;
                  DAT_ram_4ff6df3d = '\0';
                  DAT_ram_4ff6df6c = iVar14;
                  if (DAT_ram_4ff6b738 == iVar14) {
                    DAT_ram_4ff6df3a = '\0';
                  }
                }
                piVar2 = DAT_ram_4ff6df8c;
                if (DAT_ram_4ff6df3d == '\0') {
                  DAT_ram_4ff6df3d = '\x01';
                  DAT_ram_4ff6df48 = 0;
                  DAT_ram_4ff6df4c = uStack_74 - uVar19 / 1000;
                }
                else if ((uint)(iVar18 - DAT_ram_4ff6df50) < 0x2625a1) {
                  uVar19 = (iVar18 - DAT_ram_4ff6df50) + DAT_ram_4ff6df48;
                  DAT_ram_4ff6df4c = uVar19 / 1000 + DAT_ram_4ff6df4c;
                  DAT_ram_4ff6df48 = uVar19 % 1000;
                }
                else {
                  FUN_ram_48060d98();
                  DAT_ram_4ff6df48 = 0;
                  DAT_ram_4ff6df4c = uStack_74 - uVar19 / 1000;
                }
                iVar11 = DAT_ram_4ff6df44;
                if (DAT_ram_4ff6df44 != 0) {
                  iVar11 = DAT_ram_4ff6df44 + (int)(DAT_ram_4ff6df4c - DAT_ram_4ff6df40) / 1000;
                }
                uStack_4c = CONCAT13(uStack_4c._3_1_,(int3)iVar16);
                DAT_ram_4ff6df50 = iVar18;
                iStack_5c = iVar18;
                iStack_58 = iVar3;
                iStack_54 = iVar7;
                iStack_50 = iVar14;
                FUN_ram_48063390(piVar2,&iStack_5c,DAT_ram_4ff6df4c,iVar11);
              }
              else {
                FUN_ram_48060d98();
                DAT_ram_4ff6df3d = '\0';
              }
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            fence();
            fence();
            if ((DAT_ram_4ff6b730 != DAT_ram_4ff6b734) && (!bVar1)) goto LAB_ram_48064412;
LAB_ram_48064100:
            piVar2 = DAT_ram_4ff6df8c;
            if ((DAT_ram_4ff6df7c != 0) && (DAT_ram_4ff6df3d != '\0')) {
              uStack_74 = DAT_ram_4ff6df4c;
            }
            if ((char)DAT_ram_4ff6df8c[0x174] == '\0') {
              FUN_ram_48031ea8(DAT_ram_4ff6df8c,uStack_74);
            }
            else {
              uVar19 = uStack_74 - DAT_ram_4ff6df8c[0x160];
              if ((int)uVar19 < 0) {
                uVar19 = DAT_ram_4ff6df8c[0x160] - uStack_74;
                if (uVar19 < 0x3e9) {
                  uVar15 = DAT_ram_4ff6df8c[0x15e];
                  if ((DAT_ram_4ff6df8c[0x15f] != 0) || (uVar19 <= uVar15)) {
                    DAT_ram_4ff6df8c[0x15f] =
                         DAT_ram_4ff6df8c[0x15f] - (uint)(uVar15 < uVar15 - uVar19);
                    piVar2[0x15e] = uVar15 - uVar19;
                    piVar2[0x160] = uStack_74;
                    goto LAB_ram_48064156;
                  }
                }
                iVar10 = 0;
                DAT_ram_4ff6df8c[0x161] = DAT_ram_4ff6df8c[0x161] + 1;
                uVar19 = uStack_74;
              }
              else {
                iVar10 = (uint)(DAT_ram_4ff6df8c[0x15e] + uVar19 < uVar19) + DAT_ram_4ff6df8c[0x15f]
                ;
                uVar19 = DAT_ram_4ff6df8c[0x15e] + uVar19;
              }
              piVar2[0x15f] = iVar10;
              piVar2[0x15e] = uVar19;
              piVar2[0x160] = uStack_74;
            }
LAB_ram_48064156:
            if ((*(char *)((int)piVar2 + 0x5d2) != '\0') && (0x9c4 < uStack_74 - piVar2[0x14d])) {
              FUN_ram_48060d98(piVar2);
            }
            fence();
            fence();
            if ((DAT_ram_4ff6b730 == DAT_ram_4ff6b734) || (bVar1)) goto LAB_ram_48064192;
          }
          FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
        }
      }
      if (DAT_ram_4ff5cfbc != (code *)0x0) {
        (*DAT_ram_4ff5cfbc)();
      }
      if ((DAT_ram_4ff5cfac != (code *)0x0) &&
         ((*DAT_ram_4ff5cfac)(3,0xb,0,0xffffffff,0,0,0,0), DAT_ram_4ff5cfac != (code *)0x0)) {
        (*DAT_ram_4ff5cfac)(4,0xb,0,0xffffffff,0,0,0,0);
      }
      FUN_ram_4ff3c2b6(1);
      iVar10 = FUN_ram_4ff3c5d4();
    } while ((uint)(iVar10 - iStack_9c) < 100);
  } while( true );
}


