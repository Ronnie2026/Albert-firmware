/* Firmware entry: 0x480e14a2 */

void FUN_ram_480e14a2(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  short sVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 uVar13;
  int *piVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  code *pcVar18;
  uint uVar19;
  byte abStack_b8 [4];
  uint uStack_b4;
  undefined2 uStack_b0;
  int iStack_ac;
  undefined2 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  char cStack_94;
  char cStack_8b;
  char cStack_80;
  undefined1 uStack_7e;
  uint uStack_7c;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  psVar5 = *(short **)(param_1 + 0x33ec);
  if ((psVar5 != (short *)0x0) && ((char)psVar5[8] != '\0')) {
    return;
  }
  abStack_b8[0] = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  iStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  iVar12 = param_1 + 0x2864;
  cVar15 = '\x10';
  bVar16 = 0;
  iVar7 = param_1;
  do {
    if (psVar5 != (short *)0x0) {
      sVar10 = *psVar5;
      if (sVar10 == 0) {
        return;
      }
      if (*(code **)(psVar5 + 2) != (code *)0x0) {
        iVar7 = (**(code **)(psVar5 + 2))(iVar7);
        if (*(uint *)(psVar5 + 6) <= (uint)(iVar7 - *(int *)(psVar5 + 4))) {
          return;
        }
        sVar10 = *psVar5;
      }
      *psVar5 = sVar10 + -1;
    }
    abStack_b8[0] = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    iStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    FUN_ram_4ff3ec14(iVar12,0xffffffff);
    piVar14 = *(int **)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(iVar12);
    memset(&iStack_98,0,0x58);
    cStack_94 = '\b';
    uStack_7e = 1;
    cVar4 = '\x10';
    if (piVar14 != (int *)0x0) {
      do {
        while( true ) {
          psVar5 = *(short **)(param_1 + 0x1e0c);
          if (psVar5 != (short *)0x0) {
            sVar10 = *psVar5;
            if (sVar10 == 0) goto LAB_ram_480e1648;
            if (*(code **)(psVar5 + 2) != (code *)0x0) {
              iVar7 = (**(code **)(psVar5 + 2))();
              if (*(uint *)(psVar5 + 6) <= (uint)(iVar7 - *(int *)(psVar5 + 4)))
              goto LAB_ram_480e1648;
              sVar10 = *psVar5;
            }
            *psVar5 = sVar10 + -1;
          }
          iVar7 = (**(code **)(*piVar14 + 0xf8))(piVar14,&iStack_98);
          uVar19 = uStack_7c;
          if (iVar7 == 0) goto LAB_ram_480e1648;
          if (((((cStack_80 != '\0') && (cStack_8b == '\x01')) && (iStack_98 == 0x3fd)) &&
              (cStack_94 == '\b')) || (uStack_7c == 0)) break;
          FUN_ram_4ff3ec14(iVar12,0xffffffff);
          iVar8 = (uVar19 & 0x7f) * 0x14;
          iVar7 = param_1 + 0x2000 + iVar8;
          if ((*(char *)(iVar7 + -0x1cf) != '\0') && (uVar19 == *(uint *)(iVar7 + -0x1dc))) {
            abStack_b8[0] = *(byte *)(iVar7 + -0x1e0);
            uVar6 = (uint)abStack_b8[0];
            uVar13 = *(undefined1 *)(iVar7 + -0x1d0);
            iStack_ac = *(int *)(iVar7 + -0x1d4);
            puVar11 = (undefined1 *)(iVar8 + 0x1e20 + param_1);
            *puVar11 = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11[10] = 0;
            puVar11[0xb] = 0;
            puVar11[0xc] = 0;
            puVar11[0xd] = 0;
            puVar11[0xe] = 0;
            puVar11[0xf] = 0;
            puVar11[0x10] = 0;
            puVar11[0x11] = 0;
            puVar11[0x12] = 0;
            uStack_b4 = uVar19;
            uStack_b0 = CONCAT11(uVar13,uStack_60);
            uStack_a4 = uStack_5c;
            uStack_a0 = uStack_58;
            uStack_9c = uStack_50;
            FUN_ram_4ff3ee10(iVar12);
            iVar8 = 2;
            if (uVar6 == 7) goto LAB_ram_480e1772;
            if (uVar6 < 8) goto LAB_ram_480e1950;
            if (uVar6 < 0xc) goto LAB_ram_480e1768;
            if (uVar6 != 0xf) goto LAB_ram_480e194c;
            iVar8 = 3;
            goto LAB_ram_480e1772;
          }
          FUN_ram_4ff3ee10(iVar12);
LAB_ram_480e15c4:
          cVar4 = cVar4 + -1;
          if (cVar4 == '\0') goto LAB_ram_480e1648;
        }
        FUN_ram_4ff3ec14(iVar12,0xffffffff);
        pcVar18 = *(code **)(param_1 + 0x1e14);
        FUN_ram_4ff3ee10(iVar12);
        if (pcVar18 == (code *)0x0) goto LAB_ram_480e15c4;
        cVar4 = cVar4 + -1;
        (*pcVar18)(&iStack_98);
      } while (cVar4 != '\0');
    }
LAB_ram_480e1648:
    iVar7 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(iVar12,0xffffffff);
    cVar4 = '\b';
    while( true ) {
      psVar5 = *(short **)(param_1 + 0x1e0c);
      if (psVar5 != (short *)0x0) {
        sVar10 = *psVar5;
        if (sVar10 == 0) goto LAB_ram_480e1896;
        if (*(code **)(psVar5 + 2) != (code *)0x0) {
          iVar8 = (**(code **)(psVar5 + 2))();
          if (*(uint *)(psVar5 + 6) <= (uint)(iVar8 - *(int *)(psVar5 + 4))) goto LAB_ram_480e1896;
          sVar10 = *psVar5;
        }
        *psVar5 = sVar10 + -1;
      }
      bVar1 = *(byte *)(param_1 + 0x1e1c);
      cVar4 = cVar4 + -1;
      iVar8 = param_1 + 0x2000 + (uint)bVar1 * 0x14;
      *(byte *)(param_1 + 0x1e1c) = bVar1 + 1 & 0x7f;
      if ((*(char *)(iVar8 + -0x1cf) != '\0') && (*(char *)(iVar8 + -0x1ce) == '\0')) break;
      if (cVar4 == '\0') {
LAB_ram_480e1896:
        FUN_ram_4ff3ee10(iVar12);
        return;
      }
    }
    if ((uint)(iVar7 - *(int *)(iVar8 + -0x1d8)) < 2000) {
      *(byte *)(param_1 + 0x1e1c) = bVar1;
      FUN_ram_4ff3ee10(iVar12);
      return;
    }
    abStack_b8[0] = *(byte *)(iVar8 + -0x1e0);
    uVar6 = (uint)abStack_b8[0];
    uVar19 = *(uint *)(iVar8 + -0x1dc);
    uVar13 = *(undefined1 *)(iVar8 + -0x1d0);
    iStack_ac = *(int *)(iVar8 + -0x1d4);
    uStack_9c = 0x80000000;
    uStack_b0 = CONCAT11(uVar13,(byte)uStack_b0);
    uStack_a8 = CONCAT11(1,(byte)uStack_a8);
    uStack_b4 = uVar19;
    if (uVar6 == 0xf) {
      *(undefined1 *)(iVar8 + -0x1ce) = 1;
      FUN_ram_4ff3ee10(iVar12);
      uStack_a0 = FUN_ram_48025b94();
      iVar8 = 3;
    }
    else {
      puVar11 = (undefined1 *)((uint)bVar1 * 0x14 + 0x1e20 + param_1);
      *puVar11 = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      FUN_ram_4ff3ee10(iVar12);
      uStack_a0 = FUN_ram_48025b94();
      iVar8 = 2;
      if (uVar6 != 7) {
        if (uVar6 < 8) {
LAB_ram_480e1950:
          iVar8 = (-(uint)(2 < (uVar6 - 1 & 0xff)) & 0xfffffffe) + 3;
        }
        else if (uVar6 < 0xc) {
LAB_ram_480e1768:
          iVar8 = (uint)(9 < uVar6) * 2 + 1;
        }
        else {
LAB_ram_480e194c:
          iVar8 = 1;
        }
      }
    }
LAB_ram_480e1772:
    FUN_ram_4ff3ec14(iVar12,0xffffffff);
    piVar14 = *(int **)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(iVar12);
    if ((((piVar14 == (int *)0x0) ||
         (iVar7 = (**(code **)(*piVar14 + 0x154))(piVar14,uVar13), iStack_ac == 0)) || (iVar7 == 0))
       || (iStack_ac != iVar7)) {
      uStack_b0 = uStack_b0 & 0xff00;
      uStack_a8 = CONCAT11(uStack_a8._1_1_,1);
    }
    FUN_ram_4805d48e(param_1,abStack_b8);
    if (uVar6 < 0x10) {
      FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
      if ((byte)uStack_b0 == '\0') {
        iVar7 = param_1 + uVar6 * 4;
        *(int *)(iVar7 + 0x14e4) = *(int *)(iVar7 + 0x14e4) + 1;
      }
      else {
        iVar7 = param_1 + uVar6 * 4;
        *(int *)(iVar7 + 0x14a4) = *(int *)(iVar7 + 0x14a4) + 1;
      }
      iVar7 = uVar6 * 4 + param_1;
      *(undefined4 *)(iVar7 + 0x1524) = param_2;
      *(undefined4 *)(iVar7 + 0x1564) = uStack_9c;
      FUN_ram_4ff3ee10(param_1 + 0xb20);
    }
    FUN_ram_480cb520(param_1 + 0x7cd0,abStack_b8);
    iVar7 = FUN_ram_480df834(param_1 + 0x84a8,abStack_b8);
    if ((uVar19 == *(uint *)(param_1 + 0x93c4)) && (uVar19 != 0)) {
      *(undefined4 *)(param_1 + 0x93c4) = 0;
      iVar7 = param_1 + 0x9288;
      if (*(char *)(param_1 + 0x93d9) == '\0') {
        *(byte *)(param_1 + 0x93db) = ((byte)uStack_a8 ^ 1) & (byte)uStack_b0;
        *(undefined1 *)(param_1 + 0x93da) = 1;
        if (((byte)uStack_a8 != 0) || (*(char *)(param_1 + 0x93de) != '\0')) goto LAB_ram_480e185a;
      }
      else if (((byte)uStack_a8 == 0) && (*(char *)(param_1 + 0x93de) == '\0')) {
        if ((byte)uStack_b0 == 0) {
          *(undefined1 *)(param_1 + 0x93dd) = 1;
          *(char *)(param_1 + 0x93d5) = *(char *)(param_1 + 0x93d5) + '\x01';
          iVar7 = FUN_ram_48025ba6();
          *(int *)(param_1 + 0x93d0) = iVar7;
        }
        else {
          iVar7 = FUN_ram_480c3f56(iVar7,*(undefined1 *)(param_1 + 0x93db),1);
        }
      }
      else {
LAB_ram_480e185a:
        iVar7 = FUN_ram_480c3f56(iVar7,0,2);
      }
    }
    uVar3 = uStack_9c;
    uVar2 = uStack_a0;
    if (((*(char *)(param_1 + 0x7ce0) == '\0') && (*(char *)(param_1 + 0x8528) == '\0')) &&
       (uVar6 == 0xe)) {
      piVar14 = (int *)(param_1 + 0x981c);
      do {
        if ((uVar19 == piVar14[1]) && (iVar17 = *piVar14, iVar17 != 0)) {
          uVar13 = (byte)uStack_b0;
          FUN_ram_4ff3ec14(param_1 + 0xb28,0xffffffff);
          if (*(char *)(param_1 + 0x9b06) == '\0') {
            uVar19 = (uint)*(byte *)(param_1 + 0x9b04);
            uVar6 = uVar19 + 1 & 0x1f;
            uVar9 = (undefined1)uVar6;
            if (*(byte *)(param_1 + 0x9b05) != uVar6) goto LAB_ram_480e1a36;
LAB_ram_480e1af2:
            *(int *)(param_1 + 0x9b08) = *(int *)(param_1 + 0x9b08) + 1;
          }
          else {
            *(char *)(param_1 + 0x9b06) = *(char *)(param_1 + 0x9b06) + -1;
            uVar19 = (uint)*(byte *)(param_1 + 0x9b04);
            uVar6 = uVar19 + 1 & 0x1f;
            uVar9 = (undefined1)uVar6;
            if (*(byte *)(param_1 + 0x9b05) == uVar6) goto LAB_ram_480e1af2;
LAB_ram_480e1a36:
            puVar11 = (undefined1 *)(uVar19 * 0x14 + 0x9884 + param_1);
            *puVar11 = (char)iVar17;
            puVar11[4] = uVar13;
            puVar11[0xc] = (char)uVar3;
            puVar11[1] = (char)((uint)iVar17 >> 8);
            puVar11[2] = (char)((uint)iVar17 >> 0x10);
            puVar11[8] = (char)uVar2;
            puVar11[0x10] = 0;
            puVar11[3] = (char)((uint)iVar17 >> 0x18);
            puVar11[9] = (char)((uint)uVar2 >> 8);
            puVar11[10] = (char)((uint)uVar2 >> 0x10);
            puVar11[0xb] = (char)((uint)uVar2 >> 0x18);
            puVar11[0xd] = (char)((uint)uVar3 >> 8);
            puVar11[0xe] = (char)((uint)uVar3 >> 0x10);
            puVar11[0xf] = (char)((uint)uVar3 >> 0x18);
            *(undefined1 *)(param_1 + 0x9b04) = uVar9;
          }
          iVar7 = FUN_ram_4ff3ee10(param_1 + 0xb28);
          *piVar14 = 0;
          piVar14[1] = 0;
          break;
        }
        piVar14 = piVar14 + 2;
      } while ((int *)(param_1 + 0x987c) != piVar14);
    }
    if ((iVar8 == 1) && (bVar16 = bVar16 + 1, 1 < bVar16)) {
      return;
    }
    cVar15 = cVar15 + -1;
    if (cVar15 == '\0') {
      return;
    }
    psVar5 = *(short **)(param_1 + 0x33ec);
  } while( true );
}


