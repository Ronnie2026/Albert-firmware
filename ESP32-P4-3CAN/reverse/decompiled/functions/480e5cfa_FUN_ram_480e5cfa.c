/* Firmware entry: 0x480e5cfa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480e5cfa(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  char cVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  int *piVar20;
  byte *pbVar21;
  uint uVar22;
  byte local_4c [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar19 = param_2 + 0xb28;
  piVar20 = (int *)(param_1 + 0x7a0);
  FUN_ram_4ff3ec14(iVar19,0xffffffff);
  uVar10 = (uint)*(byte *)(param_2 + 0x9b05);
  if (*(byte *)(param_2 + 0x9b04) != uVar10) {
    do {
      piVar11 = (int *)(uVar10 * 0x14 + 0x9884 + param_2);
      iVar13 = *piVar11;
      iVar3 = piVar11[2];
      iVar6 = piVar11[1];
      cVar2 = (char)piVar11[4];
      *(byte *)(param_2 + 0x9b05) = (char)uVar10 + 1U & 0x1f;
      FUN_ram_4ff3ee10(iVar19);
      FUN_ram_4ff3ec14(param_1,0xffffffff);
      uVar10 = (uint)*(byte *)(param_1 + 0x1298);
      cVar1 = *(char *)(param_1 + 0x128c);
      uVar8 = 0;
      piVar11 = piVar20;
      if (uVar10 == 0) {
        if (cVar1 == '\x04') goto LAB_ram_480e5f8a;
      }
      else {
        do {
          iVar17 = *piVar11;
          piVar11 = piVar11 + 0x3d;
          if (iVar17 == iVar13) {
            iVar13 = uVar8 * 0xf4 + param_1;
            cVar16 = *(char *)(iVar13 + 0x7e8);
            uVar14 = iVar3 - *(int *)(iVar13 + 0x7e4);
            if ((cVar16 == '\0') || ((int)uVar14 < 0)) {
              cVar16 = '\0';
              if (cVar2 == '\x01') {
                iVar13 = uVar8 * 0xf4 + param_1;
                *(int *)(iVar13 + 0x784) = *(int *)(iVar13 + 0x784) + 1;
                goto LAB_ram_480e5ff0;
              }
            }
            else if (cVar2 == '\x01') {
              *(uint *)(iVar13 + 0x7ac) = uVar14;
              *(int *)(iVar13 + 0x784) = *(int *)(iVar13 + 0x784) + 1;
              if (*(uint *)(iVar13 + 0x7b0) < uVar14) {
                *(uint *)(iVar13 + 0x7b0) = uVar14;
              }
LAB_ram_480e5ff0:
              iVar13 = uVar8 * 0xf4 + param_1;
              cVar2 = *(char *)((uint)*(byte *)(iVar13 + 0x718) * 0x50 + param_1 + 0x182);
              *(undefined2 *)(iVar13 + 0x7bc) = *(undefined2 *)(iVar13 + 0x7be);
              if (cVar2 == '\0') {
                *(undefined1 *)(iVar13 + 0x80a) = 1;
              }
              break;
            }
            iVar13 = uVar8 * 0xf4 + param_1;
            *(undefined4 *)(iVar13 + 0x7a0) = 0;
            if (cVar2 == '\x02') {
              *(int *)(iVar13 + 0x788) = *(int *)(iVar13 + 0x788) + 1;
            }
            else {
              if ((char)iVar6 == '\0') {
                *(int *)(iVar13 + 0x790) = *(int *)(iVar13 + 0x790) + 1;
              }
              else {
                *(int *)(iVar13 + 0x78c) = *(int *)(iVar13 + 0x78c) + 1;
              }
              if ((cVar2 == '\0') && (cVar16 != '\0')) {
                iVar13 = uVar8 * 0xf4 + param_1;
                *(uint *)(iVar13 + 0x7b4) = uVar14;
                if (*(uint *)(iVar13 + 0x7b8) < uVar14) {
                  *(uint *)(iVar13 + 0x7b8) = uVar14;
                }
              }
            }
            iVar13 = uVar8 * 0xf4 + param_1;
            if (*(char *)(iVar13 + 0x80a) != '\0') {
              *(undefined1 *)(iVar13 + 0x721) = 4;
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar10);
        if (cVar1 == '\x04') {
          piVar11 = piVar20;
          do {
            iVar13 = *piVar11;
            piVar11 = piVar11 + 0x3d;
            if (iVar13 != 0) goto LAB_ram_480e5df2;
          } while (piVar11 != piVar20 + uVar10 * 0x3d);
LAB_ram_480e5f8a:
          *(undefined1 *)(param_1 + 0x128c) = 0;
          FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
          _DAT_ram_4ff4b934 = 0;
          fence();
          DAT_ram_4ff4b8d1 = 0xff;
          fence();
          DAT_ram_4ff4b8d0 = 0;
          FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
        }
      }
LAB_ram_480e5df2:
      FUN_ram_4ff3ee10(param_1);
      FUN_ram_4ff3ec14(iVar19,0xffffffff);
      uVar10 = (uint)*(byte *)(param_2 + 0x9b05);
    } while (*(byte *)(param_2 + 0x9b04) != uVar10);
  }
  FUN_ram_4ff3ee10(iVar19);
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  if ((*(char *)(param_1 + 0x128c) == '\x03') &&
     (uVar10 = (uint)*(byte *)(param_1 + 0x1298), uVar10 != 0)) {
    piVar11 = (int *)(param_1 + 0x7a0);
    piVar20 = piVar11 + uVar10 * 0x3d;
    do {
      iVar19 = *piVar11;
      piVar11 = piVar11 + 0x3d;
      if (iVar19 != 0) goto LAB_ram_480e5e3a;
    } while (piVar11 != piVar20);
    pbVar21 = (byte *)(param_1 + 0x718);
    pbVar7 = pbVar21 + uVar10 * 0xf4;
    bVar18 = 1;
    do {
      if (*(char *)((uint)*pbVar21 * 0x50 + param_1 + 0x182) == '\0') {
        bVar18 = bVar18 & pbVar21[0xf2];
      }
      else {
        bVar18 = 0;
      }
      pbVar21 = pbVar21 + 0xf4;
    } while (pbVar21 != pbVar7);
    FUN_ram_4ff3ee10(param_1);
    if (bVar18 != 0) {
      FUN_ram_4ff3ec14(param_1,0xffffffff);
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
      _DAT_ram_4ff4b934 = _DAT_ram_4ff4b934 & 0xff;
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
      fence();
      *(undefined1 *)(param_1 + 0x1299) = 0;
      if (*(int *)(param_1 + 8) != 0) {
        FUN_ram_48047848(*(int *)(param_1 + 8) + 0x2878);
      }
      if ((byte)(*(char *)(param_1 + 0x128c) - 3U) < 2) {
        *(undefined1 *)(param_1 + 0x128c) = 4;
        if (*(byte *)(param_1 + 0x1298) != 0) {
          puVar15 = (undefined1 *)(param_1 + 0x721);
          bVar5 = false;
          puVar9 = puVar15 + (uint)*(byte *)(param_1 + 0x1298) * 0xf4;
          do {
            piVar20 = (int *)(puVar15 + 0x7f);
            puVar15[0xe7] = 0;
            *puVar15 = 5;
            puVar15 = puVar15 + 0xf4;
            bVar5 = (bool)(bVar5 | *piVar20 != 0);
          } while (puVar15 != puVar9);
          if (bVar5) {
            *(undefined1 *)(param_1 + 0x128d) = 1;
            goto LAB_ram_480e5e3a;
          }
        }
      }
      *(undefined2 *)(param_1 + 0x128c) = 0x100;
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
      _DAT_ram_4ff4b934 = 0;
      fence();
      DAT_ram_4ff4b8d1 = 0xff;
      fence();
      DAT_ram_4ff4b8d0 = 0;
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
      goto LAB_ram_480e5e3a;
    }
  }
  else {
LAB_ram_480e5e3a:
    FUN_ram_4ff3ee10(param_1);
  }
  FUN_ram_4ff3ec14(param_2 + 0xb18,0xffffffff);
  cVar2 = *(char *)(param_2 + 0xb42);
  FUN_ram_4ff3ee10(param_2 + 0xb18);
  if (cVar2 == '\0') {
    FUN_ram_4ff3ec14(param_1,0xffffffff);
    cVar2 = *(char *)(param_1 + 0x128c);
    FUN_ram_4ff3ee10(param_1);
    if (cVar2 == '\0') {
      return;
    }
    FUN_ram_4ff3ec14(param_1,0xffffffff);
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
    _DAT_ram_4ff4b934 = _DAT_ram_4ff4b934 & 0xff;
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
    fence();
    *(undefined1 *)(param_1 + 0x1299) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ram_48047848(*(int *)(param_1 + 8) + 0x2878);
    }
    if ((byte)(*(char *)(param_1 + 0x128c) - 3U) < 2) {
      *(undefined1 *)(param_1 + 0x128c) = 4;
      if (*(byte *)(param_1 + 0x1298) != 0) {
        puVar15 = (undefined1 *)(param_1 + 0x721);
        puVar9 = puVar15 + (uint)*(byte *)(param_1 + 0x1298) * 0xf4;
        bVar5 = false;
        do {
          piVar20 = (int *)(puVar15 + 0x7f);
          puVar15[0xe7] = 0;
          *puVar15 = 5;
          puVar15 = puVar15 + 0xf4;
          bVar5 = (bool)(bVar5 | *piVar20 != 0);
        } while (puVar15 != puVar9);
        if (bVar5) {
          *(undefined1 *)(param_1 + 0x128d) = 2;
          goto LAB_ram_480e5ec6;
        }
      }
    }
    *(undefined2 *)(param_1 + 0x128c) = 0x200;
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
    _DAT_ram_4ff4b934 = 0;
    fence();
    DAT_ram_4ff4b8d1 = 0xff;
    fence();
    DAT_ram_4ff4b8d0 = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  }
  else {
    local_4c[0] = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    local_4c[5] = 0;
    local_4c[6] = 0;
    local_4c[7] = 0;
    local_4c[8] = 0;
    local_4c[9] = 0;
    local_4c[10] = 0;
    local_4c[0xb] = 0;
    FUN_ram_4ff3ec14();
    *(int *)(param_1 + 0x1294) = param_3;
    puVar9 = (undefined1 *)(param_1 + 0x404);
    do {
      puVar15 = puVar9 + -0x120;
      do {
        puVar12 = puVar15;
        if (0xffff < (uint)(param_3 - *(int *)(puVar12 + 4))) {
          *puVar12 = 0;
        }
        puVar15 = puVar12 + 0x60;
      } while (puVar12 + 0x60 != puVar9);
      puVar9 = puVar12 + 0x180;
    } while ((undefined1 *)(param_1 + 0x884) != puVar9);
    if ((*(char *)(param_1 + 0x128c) == '\x03') && (*(char *)(param_1 + 0x1298) != '\0')) {
      pbVar7 = (byte *)(param_1 + 0x718);
      bVar18 = 0;
      uVar10 = 0;
      do {
        uVar22 = (uint)*pbVar7;
        uVar8 = (uint)*(ushort *)(uVar22 * 0x50 + param_1 + 0x186);
        uVar14 = uVar8;
        if (uVar8 == 0) {
          uVar14 = 1000;
          if (*(int *)(pbVar7 + 0xe4) != 0) {
            uVar4 = *(int *)(pbVar7 + 0xe4) * 3;
            uVar14 = 100;
            if ((99 < uVar4) && (uVar14 = uVar4, 5000 < uVar4)) {
              uVar14 = 5000;
            }
          }
        }
        if (uVar14 < (uint)(param_3 - *(int *)(pbVar7 + 0xd8))) {
          pbVar7[0xe0] = 0;
        }
        iVar19 = uVar22 * 0x50 + param_1;
        cVar2 = *(char *)(iVar19 + 0x182);
        if (((cVar2 != '\x01') && (pbVar7[0xf2] == 0)) && (-1 < param_3 - *(int *)(pbVar7 + 0xe8)))
        {
          if (cVar2 == '\0') {
            *(int *)(pbVar7 + 0xe8) = param_3 + 100;
            if (pbVar7[0xf1] != 0) {
              if (uVar8 == 0) {
                uVar8 = 1000;
                if (*(int *)(pbVar7 + 0xe4) != 0) {
                  uVar14 = *(int *)(pbVar7 + 0xe4) * 3;
                  uVar8 = 100;
                  if ((99 < uVar14) && (uVar8 = uVar14, 5000 < uVar14)) {
                    uVar8 = 5000;
                  }
                }
              }
              if ((uint)(param_3 - *(int *)(pbVar7 + 0xd8)) <= uVar8) {
                iVar19 = FUN_ram_48025b94();
                uVar8 = (uint)*(ushort *)(uVar22 * 0x50 + param_1 + 0x186);
                if (uVar8 == 0) {
                  uVar14 = 1000000;
                  if (*(int *)(pbVar7 + 0xe4) != 0) {
                    uVar8 = *(int *)(pbVar7 + 0xe4) * 3;
                    uVar14 = 100000;
                    if (99 < uVar8) {
                      if (5000 < uVar8) {
                        uVar8 = 5000;
                      }
                      goto LAB_ram_480e625c;
                    }
                  }
                }
                else {
LAB_ram_480e625c:
                  uVar14 = uVar8 * 1000;
                }
                if (((pbVar7[0xe0] != 0) && (-1 < iVar19 - *(int *)(pbVar7 + 0xdc))) &&
                   ((uint)(iVar19 - *(int *)(pbVar7 + 0xdc)) <= uVar14)) goto LAB_ram_480e60f0;
              }
            }
          }
          else {
            *(uint *)(pbVar7 + 0xe8) = (uint)*(ushort *)(iVar19 + 0x184) + param_3;
LAB_ram_480e60f0:
            if (uVar10 < 0xc) {
              local_4c[uVar10] = bVar18;
              uVar10 = uVar10 + 1 & 0xff;
            }
          }
        }
        bVar18 = bVar18 + 1;
        pbVar7 = pbVar7 + 0xf4;
        if (*(byte *)(param_1 + 0x1298) <= bVar18) {
          FUN_ram_4ff3ee10(param_1);
          if (uVar10 != 0) {
            pbVar7 = local_4c;
            pbVar21 = pbVar7 + uVar10;
            do {
              bVar18 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              FUN_ram_480e5530(param_1,bVar18,param_3,param_2,0);
            } while (pbVar7 != pbVar21);
          }
          return;
        }
      } while( true );
    }
  }
LAB_ram_480e5ec6:
  FUN_ram_4ff3ee10(param_1);
  return;
}


