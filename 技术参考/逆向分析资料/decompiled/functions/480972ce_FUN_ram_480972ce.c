/* Firmware entry: 0x480972ce */

void FUN_ram_480972ce(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  int iVar25;
  undefined8 uVar26;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x18c67) == '\0') {
    return;
  }
  iVar9 = FUN_ram_4ff2bcc4();
  if (iVar9 != 0) {
    return;
  }
  fence();
  if (*(char *)(param_1 + 0x18c6c) != '\0') {
    return;
  }
  fence();
  if (*(char *)(param_1 + 0x18c6b) == '\0') {
    return;
  }
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar8 = 0x88c;
    iVar9 = 0x18;
    iVar23 = 0;
    iVar22 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar9 = 0x3590;
    iVar8 = 0x3e04;
    iVar23 = 0x3578;
    iVar22 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return;
    }
    iVar9 = 0x6b08;
    iVar8 = 0x737c;
    iVar23 = 0x6af0;
    iVar22 = 2;
  }
  uVar26 = FUN_ram_4ff21a0a();
  iVar19 = (int)((ulonglong)uVar26 >> 0x20);
  uVar11 = (uint)uVar26;
  iVar8 = iVar8 + param_1;
  FUN_ram_4ff3ec14(iVar8,0xffffffff);
  iVar25 = iVar22 * 0x3578 + param_1;
  cVar24 = *(char *)(iVar25 + 0x89b);
  FUN_ram_4ff3ee10(iVar8);
  if (cVar24 != '\0') {
    return;
  }
  FUN_ram_4ff3ec14(iVar8,0xffffffff);
  cVar24 = *(char *)(iVar25 + 0x898);
  iVar13 = *(int *)(iVar25 + 0x8a0);
  cVar2 = *(char *)(iVar25 + 0x896);
  iVar14 = *(int *)(iVar25 + 0x8a4);
  cVar3 = *(char *)(iVar25 + 0x895);
  iVar15 = *(int *)(iVar25 + 0x8c4);
  cVar4 = *(char *)(iVar25 + 0x89c);
  iVar16 = *(int *)(iVar25 + 0x8c8);
  cVar5 = *(char *)(iVar25 + 0x59a);
  iVar17 = *(int *)(iVar25 + 0x8cc);
  iVar21 = *(int *)(iVar25 + 0x44);
  cVar6 = *(char *)(iVar25 + 0x899);
  iVar25 = *(int *)(iVar25 + 0x8c0);
  FUN_ram_4ff3ee10(iVar8);
  cVar7 = *(char *)(param_1 + 0x18c68);
  iVar9 = iVar9 + param_1;
  fence();
  if (cVar6 == '\0') {
    if ((cVar7 == '\0') || (cVar2 != '\0')) goto LAB_ram_48097516;
    if ((iVar21 == 0) || (cVar3 == '\0')) {
      if (((iVar25 == 0 && iVar15 == 0) ||
          (uVar18 = uVar11 - iVar25, iVar19 - iVar15 != (uint)(uVar11 < uVar18))) ||
         (999999 < uVar18)) {
        FUN_ram_48096a8e(param_1,iVar9,uVar11,iVar19);
        return;
      }
      goto LAB_ram_48097516;
    }
    if (param_2 == 1) goto LAB_ram_4809751c;
LAB_ram_480975d8:
    if ((((cVar4 != '\0') && (cVar5 == '\0')) &&
        ((iVar16 == 0 && iVar17 == 0 ||
         ((uVar18 = uVar11 - iVar16, iVar19 - iVar17 != (uint)(uVar11 < uVar18) || (999999 < uVar18)
          ))))) &&
       ((*(int *)(param_1 + 0x17ec0) != 0 &&
        (iVar25 = FUN_ram_4ff3b5f0(*(int *)(param_1 + 0x17ec0),0), iVar25 == 1)))) {
      FUN_ram_4ff3ec14(iVar8,0xffffffff);
      iVar25 = iVar22 * 0x3578 + param_1;
      if (((((*(int *)(iVar25 + 0x44) == 0) || (*(char *)(iVar25 + 0x895) == '\0')) ||
           (*(char *)(iVar25 + 0x896) != '\0')) ||
          (((*(char *)(iVar25 + 0x89a) != '\0' || (*(char *)(iVar25 + 0x89b) != '\0')) ||
           (*(char *)(iVar25 + 0x89c) == '\0')))) || (*(char *)(iVar25 + 0x59a) != '\0')) {
        FUN_ram_4ff3ee10(iVar8);
      }
      else {
        *(undefined8 *)(iVar25 + 0x8c8) = uVar26;
        FUN_ram_4ff3ee10(iVar8);
        FUN_ram_4809660e(param_1,iVar9,2,0);
      }
      cVar24 = '\0';
      iVar25 = param_1 + 0x88c;
      do {
        FUN_ram_4ff3ec14(iVar25,0xffffffff);
        if (cVar24 == '\0') {
          cVar24 = *(char *)(iVar25 + 0x10);
        }
        iVar13 = iVar25 + 0x3578;
        FUN_ram_4ff3ee10(iVar25);
        iVar25 = iVar13;
      } while (param_1 + 0xa8f4 != iVar13);
      *(char *)(param_1 + 0x18c6a) = cVar24;
      FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 0x17ec0),0,0,0);
    }
  }
  else if (iVar21 == 0) {
    if ((cVar24 == '\0') &&
       (((iVar13 == 0 && iVar14 == 0 || (iVar19 - iVar14 != (uint)(uVar11 < uVar11 - iVar13))) ||
        (999999 < uVar11 - iVar13)))) {
      FUN_ram_4809707c(param_1,iVar9,uVar11,iVar19);
      return;
    }
LAB_ram_48097516:
    if (param_2 == 1) {
LAB_ram_4809751c:
      FUN_ram_4ff3ec14(iVar8,0xffffffff);
      iVar25 = iVar22 * 0x3578 + param_1;
      if (*(int *)(iVar25 + 0x580) == 0) {
LAB_ram_48097900:
        FUN_ram_4ff3ee10(iVar8);
      }
      else {
        if (((((*(char *)(iVar25 + 0x59a) != '\0') || (*(char *)(iVar25 + 0x85f) != '\0')) ||
             (*(char *)(iVar25 + 0x5a0) != '\0')) || (*(char *)(iVar25 + 0x888) != '\0')) ||
           ((*(int *)(iVar25 + 0xa8) != 0 && (iVar25 = FUN_ram_4ff3b9c2(), iVar25 != 0)))) {
          FUN_ram_4ff3ee10(iVar8);
          return;
        }
        piVar20 = *(int **)(iVar22 * 0x3578 + param_1 + 0x108);
        if (piVar20 == (int *)0x0) goto LAB_ram_48097900;
        if (*piVar20 == 0) {
          if (piVar20[1] == 0) goto LAB_ram_48097900;
          cVar24 = *(char *)(piVar20[1] + 0x13a);
        }
        else {
          cVar24 = *(char *)(*piVar20 + 0x952);
        }
        FUN_ram_4ff3ee10(iVar8);
        if (cVar24 != '\0') {
          return;
        }
      }
      if ((cVar7 != '\0') && (iVar21 != 0)) goto LAB_ram_48097428;
    }
  }
  else {
    if (cVar24 == '\0') {
      if (((iVar13 != 0 || iVar14 != 0) && (iVar19 - iVar14 == (uint)(uVar11 < uVar11 - iVar13))) &&
         (uVar11 - iVar13 < 1000000)) {
        return;
      }
      iVar23 = *(int *)(param_1 + 0x17ec0);
      if (iVar23 != 0) {
        FUN_ram_4ff3b5f0(iVar23,0xffffffff);
      }
      FUN_ram_4ff3ec14(iVar8,0xffffffff);
      iVar19 = iVar22 * 0x3578 + param_1;
      *(undefined8 *)(iVar19 + 0x8a0) = uVar26;
      if (*(char *)(iVar19 + 0x89d) != -1) {
        *(char *)(iVar19 + 0x89d) = *(char *)(iVar19 + 0x89d) + '\x01';
      }
      FUN_ram_4ff3ee10(iVar8);
      iVar19 = FUN_ram_4809660e(param_1,iVar9,1);
      FUN_ram_4ff3ec14(iVar8,0xffffffff);
      iVar25 = param_1 + iVar22 * 0x3578;
      *(undefined1 *)(iVar25 + 0x899) = 1;
      *(undefined2 *)(param_1 + iVar22 * 0x3578 + 0x896) = 1;
      if (iVar19 == 0) {
        *(undefined4 *)(iVar25 + 0x309c) = 0x103;
      }
      FUN_ram_4ff27ffa(iVar9);
      FUN_ram_4ff3ee10(iVar8);
      if (iVar23 == 0) {
        return;
      }
      FUN_ram_4ff3afa2(iVar23,0,0,0);
      return;
    }
    if (cVar7 == '\0') goto LAB_ram_48097516;
    if (param_2 == 1) goto LAB_ram_4809751c;
LAB_ram_48097428:
    if ((cVar3 != '\0') && (cVar2 == '\0')) goto LAB_ram_480975d8;
  }
  iVar25 = iVar22 * 0x3578 + param_1;
  uVar18 = uVar11 - *(int *)(iVar25 + 0x8b0);
  if ((iVar19 - *(int *)(iVar25 + 0x8b4) == (uint)(uVar11 < uVar18)) && (uVar18 < 250000)) {
    return;
  }
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  iVar13 = param_1 + iVar22 * 0x3578;
  iVar25 = *(int *)(iVar13 + 0x58c);
  *(undefined8 *)(iVar13 + 0x8b0) = uVar26;
  if (iVar25 == 0) {
    return;
  }
  iVar14 = FUN_ram_4ff3b5f0(iVar25,0);
  if (iVar14 != 1) {
    return;
  }
  FUN_ram_4ff3ec14(iVar8,0xffffffff);
  iVar14 = *(int *)(iVar13 + 0x44);
  if ((iVar14 != 0) && (*(char *)(iVar13 + 0x89a) == '\0')) {
    cVar24 = *(char *)(iVar13 + 0x89b);
    FUN_ram_4ff3ee10(iVar8);
    if (cVar24 != '\0') goto LAB_ram_48097760;
    iVar15 = FUN_ram_4ff2db7a(iVar14,&iStack_4c,&uStack_50);
    FUN_ram_4ff3ec14(iVar8,0xffffffff);
    if (iVar15 == 0) {
      if (*(int *)(iVar13 + 0x44) == iVar14) {
        *(undefined4 *)(iVar22 * 0x3578 + param_1 + 0x30a0) = uStack_48;
        if (*(char *)(iVar13 + 0x896) == '\0') {
          if (iStack_4c == 3) {
            *(undefined4 *)(iVar13 + 0x3090) = 2;
            uVar18 = (uint)*(byte *)(iVar13 + 0x59a);
            *(uint *)(iVar13 + 0x3080) = uVar18;
            if (*(uint *)(iVar13 + 0x3088) < uVar18) {
              *(uint *)(iVar22 * 0x3578 + param_1 + 0x3088) = uVar18;
            }
LAB_ram_480979ea:
            uVar10 = __udivdi3(uVar11,iVar19,1000,0);
            iVar19 = iVar22 * 0x3578 + param_1;
            if (*(char *)(iVar19 + 0x899) == '\0') {
              if (*(char *)(iVar19 + 0x2c) == '\x01') {
                if (*(int *)(iVar19 + 0x18) != 0) {
                  puVar12 = (uint *)(*(int *)(iVar19 + 0x18) + 0x18d84);
                  uVar18 = *puVar12 + 1;
                  uVar11 = uVar18 & 0x7fffffff;
                  if ((uVar18 & 0x7fffffff) == 0) {
                    uVar11 = 1;
                  }
                  fence();
                  *puVar12 = uVar11;
                  iVar13 = iVar22 * 0x3578 + param_1;
                  iVar19 = *(int *)(iVar13 + 0x18);
                  if ((iVar19 != 0) && (*(char *)(iVar13 + 0x2c) == '\x01')) {
                    fence();
                    *(undefined1 *)(iVar19 + 0x18d89) = 0;
                  }
                  goto LAB_ram_48097a1e;
                }
              }
              else {
LAB_ram_48097a1e:
                iVar19 = iVar22 * 0x3578 + param_1;
                if (*(char *)(iVar19 + 0x2c) == '\x02') {
                  *(undefined1 *)(iVar19 + 0x5b4) = 0;
                }
              }
              piVar20 = (int *)(iVar9 + 0x2e7c);
              iVar19 = *piVar20;
              do {
                if (iVar19 == -1) {
                  iVar13 = 1;
                }
                else {
                  iVar13 = iVar19 + 1;
                }
                bVar1 = *piVar20 != iVar19;
                iVar19 = *piVar20;
              } while (bVar1);
              *piVar20 = iVar13;
              iVar19 = iVar22 * 0x3578 + param_1;
              *(undefined8 *)(iVar19 + 0x8a8) = uVar26;
              *(undefined1 *)(iVar19 + 0x899) = 1;
              *(int *)(iVar19 + 0x3060) = *(int *)(iVar19 + 0x3060) + 1;
            }
            iVar19 = 0;
            iVar13 = iVar22 * 0x3578 + param_1;
            *(undefined1 *)(iVar13 + 0x895) = 0;
            *(undefined1 *)(iVar13 + 0x898) = 0;
            *(undefined4 *)(iVar13 + 0x8a0) = 0;
            *(undefined4 *)(iVar13 + 0x8a4) = 0;
            *(undefined2 *)(iVar13 + 0x896) = 1;
            do {
              *(undefined1 *)(iVar23 + 0x8e0 + param_1 + iVar19) = 0;
              iVar19 = iVar19 + 1;
            } while (iVar19 != 6);
            param_1 = param_1 + iVar22 * 0x3578;
            *(undefined4 *)(param_1 + 0x30c8) = uVar10;
            *(undefined4 *)(param_1 + 0x3090) = 2;
          }
          else {
            *(undefined4 *)(iVar13 + 0x3090) = 1;
            uVar11 = (uint)*(byte *)(iVar13 + 0x59a);
            *(uint *)(iVar13 + 0x3080) = uVar11;
            if (*(uint *)(iVar13 + 0x3088) < uVar11) {
              *(uint *)(param_1 + iVar22 * 0x3578 + 0x3088) = uVar11;
            }
          }
        }
        else {
          *(undefined4 *)(iVar13 + 0x3090) = 3;
          uVar18 = (uint)*(byte *)(iVar13 + 0x59a);
          *(uint *)(iVar13 + 0x3080) = uVar18;
          if (*(uint *)(iVar13 + 0x3088) < uVar18) {
            *(uint *)(iVar13 + 0x3088) = uVar18;
          }
          if (iStack_4c == 3) goto LAB_ram_480979ea;
        }
      }
    }
    else {
      *(int *)(iVar13 + 0x309c) = iVar15;
    }
    FUN_ram_4ff27ffa(iVar9);
  }
  FUN_ram_4ff3ee10(iVar8);
LAB_ram_48097760:
  FUN_ram_4ff3afa2(iVar25,0,0,0);
  return;
}


