/* Firmware entry: 0x480e77ae */

void FUN_ram_480e77ae(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char cVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  undefined4 local_d4 [2];
  undefined1 uStack_ca;
  undefined4 auStack_c8 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x33f3) = 0;
  }
  psVar15 = *(short **)(param_1 + 0x33ec);
  if ((psVar15 != (short *)0x0) && ((char)psVar15[8] != '\0')) {
    if (*(code **)(psVar15 + 2) != (code *)0x0) {
      iVar16 = (**(code **)(psVar15 + 2))();
      if (*(uint *)(psVar15 + 6) <= (uint)(iVar16 - *(int *)(psVar15 + 4))) {
        return;
      }
      psVar15 = *(short **)(param_1 + 0x33ec);
    }
    if (*psVar15 == 0) {
      return;
    }
  }
  iVar18 = param_1 + 0x2870;
  iVar16 = param_1 + 0x2864;
  FUN_ram_480e4fac(iVar18);
  FUN_ram_4ff3ec14(iVar16,0xffffffff);
  piVar4 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar16);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 0x154))(piVar4,1);
  }
  *(undefined4 *)(param_1 + 0x9c4) = uVar5;
  FUN_ram_4ff3ec14(iVar16,0xffffffff);
  piVar4 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar16);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 0x154))(piVar4,2);
  }
  *(undefined4 *)(param_1 + 0x9c8) = uVar5;
  FUN_ram_4ff3ec14(iVar16,0xffffffff);
  piVar4 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar16);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 0x154))(piVar4,4);
  }
  *(undefined4 *)(param_1 + 0x9cc) = uVar5;
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar12 = (undefined4 *)(param_1 + 0xb38);
  puVar9 = local_d4;
  do {
    uVar5 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    *puVar9 = *puVar12;
    puVar9[1] = uVar5;
    puVar9[2] = uVar7;
    puVar9[3] = uVar8;
    puVar12 = puVar12 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar12 != (undefined4 *)(param_1 + 0xbd8));
  *puVar9 = *puVar12;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  uVar5 = FUN_ram_48025ba6();
  iVar6 = FUN_ram_48025b94();
  iVar13 = *(int *)(*(int *)(param_1 + 0x33f4) + 0x33ec);
  iVar20 = param_1 + 0x33f4;
  if (iVar13 == 0) {
    cVar11 = '\x10';
LAB_ram_480e7964:
    do {
      cVar11 = cVar11 + -1;
      iVar13 = FUN_ram_480d88ca(iVar20);
      if (iVar13 == 0) goto LAB_ram_480e7912;
    } while (cVar11 != '\0');
    cVar11 = *(char *)(param_1 + 0x9789);
    fence();
    uVar2 = uStack_ca;
  }
  else {
    cVar11 = '\x10';
    if (*(char *)(iVar13 + 0x10) == '\0') goto LAB_ram_480e7964;
LAB_ram_480e7912:
    cVar11 = *(char *)(param_1 + 0x9789);
    fence();
    uVar2 = uStack_ca;
  }
  if (cVar11 != '\0') {
    *(undefined1 *)(param_1 + 0x33f0) = 0;
    FUN_ram_4ff3ec14(iVar16,0xffffffff);
    *(undefined1 *)(param_1 + 0x1e13) = 0;
    FUN_ram_4ff3ee10(iVar16);
    if (param_2 != 0) {
      return;
    }
    FUN_ram_480e0028(iVar20,uVar5,iVar6);
    FUN_ram_480e14a2(param_1,uVar5);
    FUN_ram_480dcdda(param_1,1);
    FUN_ram_480dcdda(param_1,2);
    FUN_ram_480dcdda(param_1,4);
    return;
  }
  FUN_ram_4ff3ec14(iVar16,0xffffffff);
  *(undefined1 *)(param_1 + 0x1e13) = uVar2;
  FUN_ram_4ff3ee10(iVar16);
  if (param_2 != 0) {
    if (((param_3 != 0) && (*(int *)(param_1 + 0x33ec) != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x33ec) + 0x10) != '\0')) {
      *(undefined1 *)(param_1 + 0x33f3) = 1;
      return;
    }
    FUN_ram_480e72f0(param_1);
    return;
  }
  psVar15 = *(short **)(param_1 + 0x33ec);
  if (psVar15 == (short *)0x0) {
    *(undefined1 *)(param_1 + 0x33f0) = 0;
    *(undefined1 *)(param_1 + 0x33f2) = 1;
  }
  else {
    bVar3 = *(byte *)(psVar15 + 8);
    if (bVar3 != 0) {
      if (*(code **)(psVar15 + 2) != (code *)0x0) {
        iVar16 = (**(code **)(psVar15 + 2))();
        if (*(uint *)(psVar15 + 6) <= (uint)(iVar16 - *(int *)(psVar15 + 4))) {
          return;
        }
        psVar15 = *(short **)(param_1 + 0x33ec);
      }
      if (*psVar15 == 0) {
        return;
      }
      if ((*(char *)(param_1 + 0x33f2) == '\0') || (iVar16 = FUN_ram_48058bec(param_1), iVar16 == 0)
         ) {
        uVar17 = (uint)*(byte *)(param_1 + 0x33f0);
        cVar11 = '\x02';
        if (uVar17 == 2) {
          FUN_ram_480cbd62(param_1 + 0x84a8,iVar6);
          FUN_ram_4809faa6(param_1 + 0x84a8,uVar5);
          uVar14 = (uint)*(byte *)(param_1 + 0x33f0);
          goto LAB_ram_480e7b50;
        }
        if (2 < uVar17) {
          if (uVar17 == 3) {
            FUN_ram_480ca906(param_1 + 0x79cc,uVar5);
            FUN_ram_480de46c(param_1 + 0x9288,uVar5,iVar6);
            uVar14 = (uint)*(byte *)(param_1 + 0x33f0);
            goto LAB_ram_480e7b50;
          }
          if (uVar17 == 4) goto LAB_ram_480e7c4a;
          goto LAB_ram_480e7c76;
        }
        if (uVar17 == 0) {
          FUN_ram_4ff3ec14(param_1 + 0x33c0,0xffffffff);
          pcVar10 = (char *)(param_1 + 0x2968);
          bVar19 = 0;
          do {
            cVar11 = *pcVar10;
            pcVar10 = pcVar10 + 0xf0;
            bVar19 = bVar19 | cVar11 == '\x04';
          } while ((char *)(param_1 + 0x34a8) != pcVar10);
          FUN_ram_4ff3ee10(param_1 + 0x33c0);
          if (bVar19 == 0) {
            FUN_ram_480e0028(iVar20,uVar5,iVar6);
            uVar14 = (uint)*(byte *)(param_1 + 0x33f0);
          }
          else {
            uVar14 = (uint)*(byte *)(param_1 + 0x33f0);
            bVar3 = bVar19;
          }
          goto LAB_ram_480e7b50;
        }
        if (((*(int *)(param_1 + 0x8310) == 0) && (*(int *)(param_1 + 0x81e8) == 0)) &&
           ((bVar19 = *(byte *)(param_1 + 0x8118), bVar19 != 0 &&
            (((bVar3 = bVar19, *(int *)(param_1 + 0x81dc) != 0 &&
              (*(int *)(param_1 + 0x81dc) != *(int *)(param_1 + 0x81e0))) &&
             ((uint)(iVar6 - *(int *)(param_1 + 0x81d4)) < 0x1389)))))) {
          FUN_ram_480daefc(param_1 + 0x7cd0,uVar5,iVar6);
          uVar14 = (uint)*(byte *)(param_1 + 0x33f0);
          uVar17 = 1;
          goto LAB_ram_480e7b50;
        }
      }
      else {
LAB_ram_480e7c4a:
        FUN_ram_480e6b84(iVar20);
        FUN_ram_480a00b8(iVar18,3);
        FUN_ram_480a00b8(iVar18,2);
        FUN_ram_480a00b8(iVar18,1);
        uVar14 = (uint)*(byte *)(param_1 + 0x33f0);
        bVar3 = 0;
        uVar17 = 4;
LAB_ram_480e7b50:
        if (uVar14 != uVar17) goto LAB_ram_480e7b54;
LAB_ram_480e7c76:
        uVar17 = uVar17 + 1;
        cVar11 = (char)uVar17 -
                 (((byte)((ulonglong)uVar17 * 0xcccccccd >> 0x20) & 0xfc) + (char)(uVar17 / 5));
      }
      *(char *)(param_1 + 0x33f0) = cVar11;
LAB_ram_480e7b54:
      *(byte *)(param_1 + 0x33f2) = bVar3;
      return;
    }
    *(undefined1 *)(param_1 + 0x33f0) = 0;
    *(undefined1 *)(param_1 + 0x33f2) = 1;
    if ((char)psVar15[8] != '\0') {
      FUN_ram_4ff3ec14(param_1 + 0x33c0,0xffffffff);
      pcVar10 = (char *)(param_1 + 0x2968);
      bVar1 = false;
      do {
        cVar11 = *pcVar10;
        pcVar10 = pcVar10 + 0xf0;
        bVar1 = (bool)(bVar1 | cVar11 == '\x04');
      } while ((char *)(param_1 + 0x34a8) != pcVar10);
      FUN_ram_4ff3ee10(param_1 + 0x33c0);
      if (bVar1) goto LAB_ram_480e79d8;
    }
  }
  FUN_ram_480e0028(iVar20,uVar5,iVar6);
LAB_ram_480e79d8:
  FUN_ram_480e14a2(param_1,uVar5);
  if (((*(int *)(param_1 + 0x8310) == 0) && (*(int *)(param_1 + 0x81e8) == 0)) &&
     (((*(char *)(param_1 + 0x8118) != '\0' &&
       ((*(int *)(param_1 + 0x81dc) != 0 &&
        (*(int *)(param_1 + 0x81dc) != *(int *)(param_1 + 0x81e0))))) &&
      ((uint)(iVar6 - *(int *)(param_1 + 0x81d4)) < 0x1389)))) {
    FUN_ram_480daefc(param_1 + 0x7cd0,uVar5,iVar6);
  }
  FUN_ram_480cbd62(param_1 + 0x84a8,iVar6);
  FUN_ram_4809faa6(param_1 + 0x84a8,uVar5);
  FUN_ram_480ca906(param_1 + 0x79cc,uVar5);
  FUN_ram_480de46c(param_1 + 0x9288,uVar5,iVar6);
  FUN_ram_480e6b84(iVar20);
  FUN_ram_480a00b8(iVar18,3);
  FUN_ram_480a00b8(iVar18,2);
  FUN_ram_480a00b8(iVar18,1);
  return;
}


