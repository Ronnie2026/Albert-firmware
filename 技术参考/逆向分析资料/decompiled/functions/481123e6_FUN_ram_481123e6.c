/* Firmware entry: 0x481123e6 */

int FUN_ram_481123e6(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int aiStack_6c [10];
  undefined2 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar18 = (byte *)&local_80;
  if ((DAT_ram_4ff6dca9 != '\0') && (DAT_ram_4ff6dca8 != '\0')) {
    pbVar15 = (byte *)&DAT_ram_4ff5bd30;
    bVar11 = 0;
    do {
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      bVar11 = bVar11 | bVar1;
    } while (pbVar15 != (byte *)&DAT_ram_4ff5bd40);
    if ((bVar11 != 0) && (DAT_ram_4ff5bd40 != 0)) {
      fence();
      fence();
      if ((DAT_ram_4ff6df30 == '\0') && ((DAT_ram_4ff5c5c0 == '\0' && (DAT_ram_4ff5c5ca == '\0'))))
      {
        iVar3 = FUN_ram_48076bd0(DAT_ram_4ff6dcac + 0x1afa,0);
        puVar23 = DAT_ram_4ff6dcac;
        if (iVar3 == 0) {
          DAT_ram_4ff5bd64 = &sedeleg;
          PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "storage_invalid";
          return 0;
        }
        if (param_1 < 0x800) {
          puVar17 = DAT_ram_4ff6dcac + 0x2877;
          puVar12 = DAT_ram_4ff6dcac + 0xd7c;
          puVar14 = DAT_ram_4ff6dcac;
          do {
            uVar4 = puVar14[1];
            uVar7 = puVar14[2];
            uVar8 = puVar14[3];
            *puVar17 = *puVar14;
            puVar17[1] = uVar4;
            puVar17[2] = uVar7;
            puVar17[3] = uVar8;
            puVar14 = puVar14 + 4;
            puVar17 = puVar17 + 4;
          } while (puVar14 != puVar12);
          *puVar17 = *puVar14;
          if ((param_1 & 1) != 0) {
            puVar14 = puVar23 + 0x2819;
            puVar12 = puVar23 + 0x3596;
            do {
              uVar4 = puVar14[1];
              uVar7 = puVar14[2];
              uVar8 = puVar14[3];
              *puVar12 = *puVar14;
              puVar12[1] = uVar4;
              puVar12[2] = uVar7;
              puVar12[3] = uVar8;
              puVar14 = puVar14 + 4;
              puVar12 = puVar12 + 4;
            } while (puVar14 != puVar23 + 0x2841);
            *puVar12 = *puVar14;
          }
          if ((param_1 & 2) != 0) {
            puVar14 = puVar23 + 0x2842;
            puVar12 = puVar23 + 0x35bf;
            do {
              uVar20 = puVar14[1];
              uVar19 = puVar14[2];
              uVar4 = puVar14[3];
              uVar7 = puVar14[4];
              uVar8 = puVar14[5];
              *puVar12 = *puVar14;
              puVar12[1] = uVar20;
              puVar12[2] = uVar19;
              puVar12[3] = uVar4;
              puVar12[4] = uVar7;
              puVar12[5] = uVar8;
              puVar14 = puVar14 + 6;
              puVar12 = puVar12 + 6;
            } while (puVar14 != puVar23 + 0x2854);
          }
          if ((param_1 & 4) != 0) {
            *(undefined2 *)(puVar23 + 0x35d1) = *(undefined2 *)(puVar23 + 0x2854);
          }
          if ((param_1 & 8) != 0) {
            *(undefined2 *)((int)puVar23 + 0xd746) = *(undefined2 *)((int)puVar23 + 0xa152);
            *(undefined2 *)(puVar23 + 0x35d2) = *(undefined2 *)(puVar23 + 0x2855);
            *(undefined2 *)((int)puVar23 + 0xd74a) = *(undefined2 *)((int)puVar23 + 0xa156);
            *(undefined2 *)(puVar23 + 0x35d3) = *(undefined2 *)(puVar23 + 0x2856);
          }
          if ((param_1 & 0x10) != 0) {
            *(undefined2 *)((int)puVar23 + 0xd74e) = *(undefined2 *)((int)puVar23 + 0xa15a);
            *(undefined2 *)(puVar23 + 0x35d4) = *(undefined2 *)(puVar23 + 0x2857);
            *(undefined2 *)((int)puVar23 + 0xd752) = *(undefined2 *)((int)puVar23 + 0xa15e);
            *(undefined2 *)(puVar23 + 0x35d5) = *(undefined2 *)(puVar23 + 0x2858);
          }
          if ((param_1 & 0x100) != 0) {
            *(undefined1 *)((int)puVar23 + 0xd7cb) = *(undefined1 *)((int)puVar23 + 0xa1d7);
            *(undefined2 *)(puVar23 + 0x35f3) = *(undefined2 *)(puVar23 + 0x2876);
          }
          if ((param_1 & 0x200) != 0) {
            *(undefined1 *)((int)puVar23 + 0xd7ca) = *(undefined1 *)((int)puVar23 + 0xa1d6);
          }
          if ((param_1 & 0x400) != 0) {
            FUN_ram_4ff45158((int)puVar23 + 0xd5f1,(int)puVar23 + 0x9ffd,100);
          }
          if ((param_1 & 0x20) != 0) {
            *(undefined1 *)(puVar23 + 0x287b) = *(undefined1 *)(puVar23 + 0x1afe);
            puVar23[0x2878] = puVar23[0x1afb];
            puVar23[0x2877] = puVar23[0x1afa];
            puVar23[0x2879] = puVar23[0x1afc];
            puVar23[0x287a] = puVar23[0x1afd];
            *(char *)(puVar23 + 0x357c) = *(char *)(puVar23 + 0x27ff);
            if (*(char *)(puVar23 + 0x27ff) != '\0') {
              piVar5 = puVar23 + 0x1aff;
              puVar14 = puVar23 + 0x287c;
              uVar22 = 0;
              do {
                FUN_ram_4ff45158(puVar14,piVar5,0x19e);
                if (*(byte *)(puVar23 + 0xd05) != 0) {
                  piVar10 = puVar23 + 5;
                  uVar16 = 0;
LAB_ram_481126e0:
                  iVar3 = *piVar10;
                  piVar10 = piVar10 + 0x68;
                  if (*piVar5 != iVar3) goto LAB_ram_481126da;
                  FUN_ram_4ff45158((int)puVar14 + 0x12a,(int)puVar23 + uVar16 * 0x1a0 + 0x13e,0x36);
                  puVar17 = puVar23 + uVar16 * 0x68 + 0x5d;
                  puVar12 = puVar14 + 0x58;
                  do {
                    uVar4 = puVar17[1];
                    uVar7 = puVar17[2];
                    uVar8 = puVar17[3];
                    uVar19 = puVar17[4];
                    *puVar12 = *puVar17;
                    puVar12[1] = uVar4;
                    puVar12[2] = uVar7;
                    puVar12[3] = uVar8;
                    puVar12[4] = uVar19;
                    puVar17 = puVar17 + 5;
                    puVar12 = puVar12 + 5;
                  } while (puVar17 != puVar23 + uVar16 * 0x68 + 0x6c);
                  *(undefined2 *)puVar12 = *(undefined2 *)puVar17;
                }
LAB_ram_4811273e:
                uVar22 = uVar22 + 1;
                piVar5 = piVar5 + 0x68;
                puVar14 = puVar14 + 0x68;
              } while (uVar22 < *(byte *)(puVar23 + 0x27ff));
            }
          }
          if (((param_1 & 0x40) != 0) &&
             (FUN_ram_4ff45158((int)puVar23 + 0xd756,(int)puVar23 + 0xa162,0x36),
             *(char *)(puVar23 + 0x357c) != '\0')) {
            bVar11 = *(byte *)(puVar23 + 0x27ff);
            piVar5 = puVar23 + 0x287c;
            uVar22 = 0;
            if (bVar11 == 0) {
              do {
                uVar22 = uVar22 + 1;
              } while (uVar22 < *(byte *)(puVar23 + 0x357c));
            }
            else {
              iVar3 = *piVar5;
              while( true ) {
                piVar10 = puVar23 + 0x1aff;
                uVar16 = 0;
                do {
                  iVar9 = *piVar10;
                  piVar10 = piVar10 + 0x68;
                  if (iVar3 == iVar9) {
                    FUN_ram_4ff45158((int)piVar5 + 0x12a,(int)puVar23 + uVar16 * 0x1a0 + 0x6d26,0x36
                                    );
                    if ((uint)*(byte *)(puVar23 + 0x357c) <= uVar22 + 1) goto LAB_ram_481127f2;
                    goto LAB_ram_481127de;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 != bVar11);
                if ((uint)*(byte *)(puVar23 + 0x357c) <= uVar22 + 1) break;
LAB_ram_481127de:
                uVar22 = uVar22 + 1;
                piVar5 = piVar5 + 0x68;
                iVar3 = *piVar5;
              }
            }
          }
LAB_ram_481127f2:
          if ((param_1 & 0x80) != 0) {
            puVar14 = puVar23 + 0x2866;
            puVar12 = puVar23 + 0x35e3;
            do {
              uVar19 = puVar14[1];
              uVar4 = puVar14[2];
              uVar7 = puVar14[3];
              uVar8 = puVar14[4];
              *puVar12 = *puVar14;
              puVar12[1] = uVar19;
              puVar12[2] = uVar4;
              puVar12[3] = uVar7;
              puVar12[4] = uVar8;
              puVar14 = puVar14 + 5;
              puVar12 = puVar12 + 5;
            } while (puVar14 != puVar23 + 0x2875);
            *(undefined2 *)puVar12 = *(undefined2 *)puVar14;
            if (*(char *)(puVar23 + 0x357c) != '\0') {
              bVar11 = *(byte *)(puVar23 + 0x27ff);
              piVar5 = puVar23 + 0x287c;
              uVar22 = 0;
              if (bVar11 != 0) {
                iVar3 = *piVar5;
LAB_ram_48112868:
                do {
                  piVar10 = puVar23 + 0x1aff;
                  uVar16 = 0;
LAB_ram_48112876:
                  iVar9 = *piVar10;
                  piVar10 = piVar10 + 0x68;
                  if (iVar3 != iVar9) goto LAB_ram_48112870;
                  piVar10 = piVar5 + 0x58;
                  piVar13 = puVar23 + uVar16 * 0x68 + 6999;
                  do {
                    iVar24 = piVar13[1];
                    iVar3 = piVar13[2];
                    iVar21 = piVar13[3];
                    iVar9 = piVar13[4];
                    *piVar10 = *piVar13;
                    piVar10[1] = iVar24;
                    piVar10[2] = iVar3;
                    piVar10[3] = iVar21;
                    piVar10[4] = iVar9;
                    piVar13 = piVar13 + 5;
                    piVar10 = piVar10 + 5;
                  } while (piVar13 != puVar23 + uVar16 * 0x68 + 0x1b66);
                  uVar22 = uVar22 + 1;
                  piVar5 = piVar5 + 0x68;
                  *(short *)piVar10 = (short)*piVar13;
                  if (*(byte *)(puVar23 + 0x357c) <= uVar22) goto LAB_ram_481128f6;
                  iVar3 = *piVar5;
                } while( true );
              }
              do {
                uVar22 = uVar22 + 1;
              } while (uVar22 < *(byte *)(puVar23 + 0x357c));
            }
          }
LAB_ram_481128f6:
          iVar3 = FUN_ram_48076846(puVar23 + 0x2877);
          if (iVar3 != 0) {
            iVar9 = FUN_ram_481105ee(puVar23 + 0x2877,puVar23);
            if (iVar9 == 0) {
              uStack_74 = DAT_ram_4ff5bd3c;
              local_80 = DAT_ram_4ff5bd30;
              uStack_7c = DAT_ram_4ff5bd34;
              uStack_78 = DAT_ram_4ff5bd38;
              iStack_70 = DAT_ram_4ff5bd40;
              if (DAT_ram_4ff5bd40 == -1) {
                FUN_ram_48132f46(&local_80,0x10);
                iVar9 = DAT_ram_4ff6dc94;
                bVar11 = 0;
                do {
                  bVar1 = *pbVar18;
                  pbVar18 = pbVar18 + 1;
                  bVar11 = bVar11 | bVar1;
                } while (pbVar18 != (byte *)&iStack_70);
                if (bVar11 == 0) {
                  local_80 = CONCAT31(local_80._1_3_,1);
                }
                iStack_70 = 1;
                if ((((DAT_ram_4ff6dc94 == 0) || (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) == '\0')) ||
                    (iVar6 = FUN_ram_48075bb4(&DAT_ram_4ff5bd44,&DAT_ram_4ff5bd30),
                    iVar24 = DAT_ram_4ff5bd5c, iVar21 = DAT_ram_4ff5bd40, uVar19 = DAT_ram_4ff5bd3c,
                    uVar8 = DAT_ram_4ff5bd38, uVar7 = DAT_ram_4ff5bd34, uVar4 = DAT_ram_4ff5bd30,
                    iVar6 == 0)) || (DAT_ram_4ff5bd58 == 0 && DAT_ram_4ff5bd5c == 0)) {
LAB_ram_48112bc0:
                  DAT_ram_4ff5bd64 = &sedeleg;
                  PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "epoch_transition_wait";
                  return 0;
                }
                if (*(char *)(iVar9 + 0x119c8) == '\0') {
                  *(int *)(iVar9 + 0x11a10) = DAT_ram_4ff5bd58;
                  *(int *)(iVar9 + 0x11a14) = iVar24;
                  *(undefined4 *)(iVar9 + 0x11a18) = uVar4;
                  *(undefined4 *)(iVar9 + 0x11a1c) = uVar7;
                  *(undefined4 *)(iVar9 + 0x11a20) = uVar8;
                  *(undefined4 *)(iVar9 + 0x11a24) = uVar19;
                  *(int *)(iVar9 + 0x11a28) = iVar21;
                  *(undefined4 *)(iVar9 + 0x11a2c) = local_80;
                  *(undefined4 *)(iVar9 + 0x11a30) = uStack_7c;
                  *(undefined4 *)(iVar9 + 0x11a34) = uStack_78;
                  *(undefined4 *)(iVar9 + 0x11a38) = uStack_74;
                  *(undefined1 *)(iVar9 + 0x119c8) = 1;
                  *(undefined4 *)(iVar9 + 0x11a3c) = 1;
                  FUN_ram_48032bca(iVar9 + 0x119c9);
                  iVar9 = FUN_ram_480b66f6();
                  puVar23 = DAT_ram_4ff6dcac;
                  if (iVar9 == 0) goto LAB_ram_48112bc0;
                }
                else {
                  iVar21 = FUN_ram_48075bb4(iVar9 + 0x11a18,&DAT_ram_4ff5bd30);
                  if (iVar21 == 0) goto LAB_ram_48112bc0;
                  local_80 = *(undefined4 *)(iVar9 + 0x11a2c);
                  uStack_7c = *(undefined4 *)(iVar9 + 0x11a30);
                  uStack_78 = *(undefined4 *)(iVar9 + 0x11a34);
                  uStack_74 = *(undefined4 *)(iVar9 + 0x11a38);
                  iStack_70 = *(int *)(iVar9 + 0x11a3c);
                  puVar23 = DAT_ram_4ff6dcac;
                }
              }
              else {
                iStack_70 = DAT_ram_4ff5bd40 + 1;
              }
              aiStack_6c[0] = (int)puVar23 + 0x3d7d1;
              *(undefined1 *)((int)puVar23 + 0x3d7d1) = 0;
              aiStack_6c[2] = 0;
              aiStack_6c[3] = 0;
              aiStack_6c[4] = 0;
              aiStack_6c[5] = 0;
              aiStack_6c[6] = 0;
              aiStack_6c[7] = 0;
              aiStack_6c[8] = 0;
              aiStack_6c[9] = 0;
              aiStack_6c[1] = 0x30001;
              uStack_44 = 1;
              iVar24 = FUN_ram_48111870(aiStack_6c,puVar23 + 0x2877);
              iVar21 = aiStack_6c[2];
              iVar9 = aiStack_6c[0];
              if ((iVar24 == 0) ||
                 (iVar24 = FUN_ram_480b621c(&DAT_ram_4ff5bd98,&local_80,aiStack_6c[0],aiStack_6c[2])
                 , puVar23 = DAT_ram_4ff6dcac, iVar24 == 0)) {
                DAT_ram_4ff5bd64 = &sedeleg;
                PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "journal_commit_failed";
                return 0;
              }
              DAT_ram_4ff6dcac[0x1b675] = iVar21;
              FUN_ram_4ff45158(puVar23 + 0x35f4,iVar9,iVar21);
              puVar12 = puVar23 + 0x2877;
              puVar14 = puVar23;
              do {
                uVar4 = puVar12[1];
                uVar7 = puVar12[2];
                uVar8 = puVar12[3];
                *puVar14 = *puVar12;
                puVar14[1] = uVar4;
                puVar14[2] = uVar7;
                puVar14[3] = uVar8;
                puVar12 = puVar12 + 4;
                puVar14 = puVar14 + 4;
              } while (puVar12 != puVar23 + 0x35f3);
              puVar17 = puVar23 + 0x1afa;
              *puVar14 = *puVar12;
              puVar14 = puVar23 + 0xd7d;
              do {
                uVar4 = puVar17[1];
                uVar7 = puVar17[2];
                uVar8 = puVar17[3];
                *puVar14 = *puVar17;
                puVar14[1] = uVar4;
                puVar14[2] = uVar7;
                puVar14[3] = uVar8;
                puVar17 = puVar17 + 4;
                puVar14 = puVar14 + 4;
              } while (puVar17 != puVar23 + 0x2876);
              *puVar14 = *puVar17;
              DAT_ram_4ff5bd64 = (undefined *)0x0;
              DAT_ram_4ff5bd30 = local_80;
              DAT_ram_4ff5bd34 = uStack_7c;
              DAT_ram_4ff5bd38 = uStack_78;
              DAT_ram_4ff5bd3c = uStack_74;
              DAT_ram_4ff5bd40 = iStack_70;
              iVar9 = FUN_ram_481105ee(puVar23 + 0x1afa,puVar23 + 0x2877);
            }
            else {
              puVar12 = puVar23 + 0x1afa;
              puVar14 = puVar23 + 0xd7d;
              do {
                uVar4 = puVar12[1];
                uVar7 = puVar12[2];
                uVar8 = puVar12[3];
                *puVar14 = *puVar12;
                puVar14[1] = uVar4;
                puVar14[2] = uVar7;
                puVar14[3] = uVar8;
                puVar12 = puVar12 + 4;
                puVar14 = puVar14 + 4;
              } while (puVar12 != puVar23 + 0x2876);
              *puVar14 = *puVar12;
              DAT_ram_4ff5bd64 = (undefined *)0x0;
              iVar9 = FUN_ram_481105ee(puVar23 + 0x1afa,puVar23);
            }
            if (iVar9 == 0) {
              uVar2 = (ushort)DAT_ram_4ff5bd64 >> 8;
              DAT_ram_4ff5bd64 = (undefined *)CONCAT11((char)uVar2,1);
            }
            PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = &DAT_ram_481df390;
            return iVar3;
          }
        }
        DAT_ram_4ff5bd64 = &sedeleg;
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "invalid_saved_domains";
        return 0;
      }
    }
  }
  DAT_ram_4ff5bd64 = &sedeleg;
  PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = "owner_unavailable";
  return 0;
LAB_ram_481126da:
  uVar16 = uVar16 + 1;
  if (*(byte *)(puVar23 + 0xd05) == uVar16) goto LAB_ram_4811273e;
  goto LAB_ram_481126e0;
LAB_ram_48112870:
  uVar16 = uVar16 + 1;
  if (uVar16 == bVar11) goto LAB_ram_48112a8c;
  goto LAB_ram_48112876;
LAB_ram_48112a8c:
  uVar22 = uVar22 + 1;
  piVar5 = piVar5 + 0x68;
  if (*(byte *)(puVar23 + 0x357c) <= uVar22) goto LAB_ram_481128f6;
  iVar3 = *piVar5;
  goto LAB_ram_48112868;
}


