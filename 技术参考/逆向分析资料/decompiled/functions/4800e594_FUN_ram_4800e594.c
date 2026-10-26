/* Firmware entry: 0x4800e594 */

int FUN_ram_4800e594(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                    int *param_5)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  code *pcStack_5c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = (undefined4 *)FUN_ram_4ff3e8de();
  uVar13 = DAT_ram_4ff6db28;
  if (0x40 < param_1) {
    uVar16 = 0x16;
    goto LAB_ram_4800e9e2;
  }
  iVar6 = FUN_ram_4ff2091a(DAT_ram_4ff6db28,0x1c,0x1000);
  if (iVar6 != 0) {
    if (param_1 == 0) {
LAB_ram_4800e97c:
      puVar17 = (undefined4 *)FUN_ram_4ff3add0(1,0,3);
      if (puVar17 != (undefined4 *)0x0) {
        pcStack_5c = (code *)0x0;
        bVar2 = true;
        goto LAB_ram_4800e6e6;
      }
    }
    else {
      pcVar4 = &DAT_ram_4ff483a1;
      uVar21 = 0;
      pcStack_5c = (code *)0x0;
      puVar17 = (undefined4 *)0x0;
      do {
        FUN_ram_4ff216d6(&DAT_ram_4ff6db24);
        bVar1 = (&DAT_ram_4ff483a0)[uVar21 * 3];
        iVar19 = (int)*pcVar4;
        uVar20 = (uint)(byte)pcVar4[1];
        iVar8 = (int)uVar21 >> 5;
        if ((param_4 != (undefined4 *)0x0) && ((1 << (uVar21 & 0x1f) & param_4[iVar8]) != 0)) {
          (&DAT_ram_4ff483a0)[uVar21 * 3] = bVar1 | 4;
        }
        FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
        if (-1 < iVar19) {
          if ((bVar1 & 1) == 0) {
            puVar11 = (undefined1 *)(iVar6 + iVar19 * 0x1c);
            iVar19 = (int)uVar20 >> 5;
            if (param_2 == (undefined4 *)0x0) {
LAB_ram_4800e884:
              if (param_3 == (undefined4 *)0x0) goto LAB_ram_4800e848;
              iVar12 = iVar8 << 2;
              uVar14 = 1 << (uVar21 & 0x1f);
LAB_ram_4800e68c:
              puVar10 = (uint *)((int)param_3 + iVar12);
              uVar7 = *puVar10;
              if ((uVar14 & uVar7) != 0) {
                *puVar11 = 1;
                if (uVar20 < 0x40) {
                  *(uint *)(puVar11 + iVar19 * 4 + 0xc) =
                       *(uint *)(puVar11 + iVar19 * 4 + 0xc) | 1 << (uVar20 & 0x1f);
                  uVar7 = *puVar10;
                }
                *puVar10 = ~uVar14 & uVar7;
                goto LAB_ram_4800e848;
              }
              if (param_4 == (undefined4 *)0x0) goto LAB_ram_4800e6d4;
            }
            else {
              iVar12 = iVar8 * 4;
              puVar10 = param_2 + iVar8;
              uVar7 = *puVar10;
              uVar14 = 1 << (uVar21 & 0x1f);
              if ((uVar7 & uVar14) != 0) {
                *puVar11 = 1;
                if (uVar20 < 0x40) {
                  *(uint *)(puVar11 + iVar19 * 4 + 4) =
                       *(uint *)(puVar11 + iVar19 * 4 + 4) | 1 << (uVar20 & 0x1f);
                  uVar7 = *puVar10;
                }
                *puVar10 = ~uVar14 & uVar7;
                goto LAB_ram_4800e884;
              }
              if (param_3 != (undefined4 *)0x0) goto LAB_ram_4800e68c;
LAB_ram_4800e848:
              if (param_4 == (undefined4 *)0x0) goto LAB_ram_4800e6d4;
              iVar12 = iVar8 << 2;
              uVar14 = 1 << (uVar21 & 0x1f);
            }
            puVar10 = (uint *)(iVar12 + (int)param_4);
            uVar7 = *puVar10;
            if ((uVar14 & uVar7) != 0) {
              *puVar11 = 1;
              if (uVar20 < 0x40) {
                *(uint *)(puVar11 + iVar19 * 4 + 0x14) =
                     *(uint *)(puVar11 + iVar19 * 4 + 0x14) | 1 << (uVar20 & 0x1f);
                uVar7 = *puVar10;
              }
              *puVar10 = ~uVar14 & uVar7;
            }
          }
          else {
            if (pcStack_5c != (code *)0x0) goto LAB_ram_4800e6d4;
            if (param_2 == (undefined4 *)0x0) {
              if (param_3 == (undefined4 *)0x0) goto LAB_ram_4800e8be;
              iVar12 = iVar8 << 2;
              uVar20 = 1 << (uVar21 & 0x1f);
LAB_ram_4800ea08:
              if ((*(uint *)((int)param_3 + iVar12) & uVar20) != 0) goto LAB_ram_4800e8d8;
              if (param_4 == (undefined4 *)0x0) goto LAB_ram_4800e6d4;
LAB_ram_4800e8ce:
              if ((uVar20 & *(uint *)(iVar12 + (int)param_4)) == 0) goto LAB_ram_4800e6d4;
            }
            else {
              iVar12 = iVar8 * 4;
              uVar20 = 1 << (uVar21 & 0x1f);
              if ((param_2[iVar8] & uVar20) == 0) {
                if (param_3 != (undefined4 *)0x0) goto LAB_ram_4800ea08;
LAB_ram_4800e8be:
                if (param_4 == (undefined4 *)0x0) goto LAB_ram_4800e6d4;
                iVar12 = iVar8 << 2;
                uVar20 = 1 << (uVar21 & 0x1f);
                goto LAB_ram_4800e8ce;
              }
            }
LAB_ram_4800e8d8:
            iVar8 = *(int *)(*(int *)((&DAT_ram_4ff5a02c)[iVar19] + 4) + 0x34);
            pcStack_5c = *(code **)(iVar8 + 4);
            puVar17 = (undefined4 *)(**(code **)(iVar8 + 0x10))();
          }
        }
LAB_ram_4800e6d4:
        uVar21 = uVar21 + 1;
        pcVar4 = pcVar4 + 3;
      } while (uVar21 != param_1);
      if (pcStack_5c == (code *)0x0) goto LAB_ram_4800e97c;
      bVar2 = false;
LAB_ram_4800e6e6:
      iVar8 = FUN_ram_4ff2091a(uVar13,4,0x1000);
      if (iVar8 != 0) {
        if (uVar13 != 0) {
          piVar18 = &DAT_ram_4ff5a02c;
          iVar12 = iVar6 + 4;
          uVar21 = 0;
          iVar19 = iVar8;
          do {
            if (uVar21 < 8) {
              if ((((*piVar18 != 0) &&
                   (puVar15 = *(undefined4 **)(*(int *)(*piVar18 + 4) + 0x34),
                   puVar15 != (undefined4 *)0x0)) &&
                  (pcVar3 = (code *)*puVar15, pcVar3 != (code *)0x0)) &&
                 ((*(char *)(iVar12 + -4) != '\0' &&
                  (iVar9 = (*pcVar3)(param_1,iVar12,iVar12 + 8,iVar12 + 0x10,bVar2,puVar17,iVar19),
                  iVar9 != 0)))) {
                if (iVar9 == 0x106) {
                  FUN_ram_4800d566(iVar6,uVar13,param_2,param_3,param_4);
                }
                else {
                  FUN_ram_4800d35c(uVar21,iVar6,iVar8);
                  FUN_ram_4800d566(iVar6,uVar13,param_2,param_3,param_4);
                }
                if ((bVar2) && (puVar17 != (undefined4 *)0x0)) {
                  FUN_ram_4ff3ba8e(puVar17);
                }
                thunk_FUN_ram_4ff209c6(iVar6);
                thunk_FUN_ram_4ff209c6(iVar8);
                uVar16 = 4;
                goto LAB_ram_4800e9e2;
              }
            }
            uVar21 = uVar21 + 1;
            piVar18 = piVar18 + 1;
            iVar12 = iVar12 + 0x1c;
            iVar19 = iVar19 + 4;
          } while (uVar21 != uVar13);
        }
        if (pcStack_5c == (code *)0x0) {
          if (param_2 != (undefined4 *)0x0) {
            param_2[1] = 0;
            *param_2 = 0;
          }
          if (param_3 != (undefined4 *)0x0) {
            param_3[1] = 0;
            *param_3 = 0;
          }
          if (param_4 != (undefined4 *)0x0) {
            param_4[1] = 0;
            *param_4 = 0;
          }
          iVar19 = -1;
          if (param_5 != (int *)0x0) {
            iVar19 = *param_5 * 1000 + param_5[2] / 1000 + 1;
          }
          FUN_ram_4ff3b5f0(puVar17,iVar19);
          FUN_ram_4800d35c(uVar13,iVar6,iVar8);
          iVar19 = 0;
LAB_ram_4800e95a:
          iVar12 = FUN_ram_4800d566(iVar6,uVar13,param_2,param_3,param_4);
          iVar19 = iVar19 + iVar12;
          if (puVar17 == (undefined4 *)0x0) goto LAB_ram_4800e794;
          if (bVar2) {
LAB_ram_4800ea3a:
            FUN_ram_4ff3ba8e(puVar17);
            goto LAB_ram_4800e794;
          }
          if (pcStack_5c == (code *)0x0) goto LAB_ram_4800e794;
        }
        else {
          iVar19 = (*pcStack_5c)(param_1,param_2,param_3,param_4,param_5,pcStack_5c);
          FUN_ram_4800d35c(uVar13,iVar6,iVar8);
          if (-1 < iVar19) goto LAB_ram_4800e95a;
          if (puVar17 == (undefined4 *)0x0) goto LAB_ram_4800e794;
          if (bVar2) goto LAB_ram_4800ea3a;
        }
        FUN_ram_4ff3b5f0(*puVar17,0);
LAB_ram_4800e794:
        FUN_ram_4ff216d6(&DAT_ram_4ff6db24);
        if (param_1 != 0) {
          puVar11 = &DAT_ram_4ff483a1;
          uVar13 = 0;
          do {
            iVar12 = uVar13 * 3;
            uVar13 = uVar13 + 1;
            if (((byte)(&DAT_ram_4ff483a0)[iVar12] >> 1 & 1) != 0) {
              (&DAT_ram_4ff483a0)[iVar12] = 0;
              (&DAT_ram_4ff483a1)[iVar12] = 0;
              (&DAT_ram_4ff483a2)[iVar12] = 0;
              *puVar11 = 0xff;
              puVar11[1] = 0xff;
            }
            puVar11 = puVar11 + 3;
          } while (uVar13 != param_1);
        }
        FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
        thunk_FUN_ram_4ff209c6(iVar6);
        thunk_FUN_ram_4ff209c6(iVar8);
        return iVar19;
      }
    }
    thunk_FUN_ram_4ff209c6(iVar6);
  }
  uVar16 = 0xc;
LAB_ram_4800e9e2:
  *puVar5 = uVar16;
  return -1;
}


