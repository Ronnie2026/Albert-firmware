/* Firmware entry: 0x480fc0c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480fc0c2(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  short *psVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined1 *puVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  undefined4 *puVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  int local_2d0 [20];
  int local_280 [44];
  int local_1d0;
  undefined2 uStack_1cc;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined4 auStack_178 [21];
  undefined1 uStack_124;
  undefined1 uStack_119;
  undefined1 uStack_fa;
  undefined4 local_e4;
  int iStack_e0;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  int local_d4 [21];
  undefined1 uStack_80;
  undefined1 uStack_75;
  undefined1 uStack_59;
  undefined1 uStack_56;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar18 = local_2d0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  puVar14 = &local_188;
  puVar21 = &DAT_ram_4ff61958;
  do {
    uVar6 = puVar21[1];
    uVar8 = puVar21[2];
    uVar11 = puVar21[3];
    *puVar14 = *puVar21;
    puVar14[1] = uVar6;
    puVar14[2] = uVar8;
    puVar14[3] = uVar11;
    puVar21 = puVar21 + 4;
    puVar14 = puVar14 + 4;
  } while (puVar21 != (undefined4 *)&DAT_ram_4ff619f8);
  *puVar14 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  piVar20 = DAT_ram_4ff5bd00;
  if ((DAT_ram_4ff5bd00 != (int *)0x0) &&
     (piVar10 = DAT_ram_4ff5bd00 + DAT_ram_4ff5bd04 * 0x49, DAT_ram_4ff5bd00 != piVar10)) {
    piVar27 = (int *)0x0;
    piVar15 = DAT_ram_4ff5bd00;
    do {
      if (*param_1 == *piVar15) {
        piVar27 = piVar15;
      }
      piVar15 = piVar15 + 0x49;
    } while (piVar10 != piVar15);
    piVar15 = DAT_ram_4ff5bd00 +
              (((uint)((int)piVar10 + (-0x124 - (int)DAT_ram_4ff5bd00)) >> 2) * 0x7e3f1f9 &
              0x3fffffff) * 0x49 + 0x49;
    for (piVar10 = DAT_ram_4ff5bd00; piVar10 != piVar15; piVar10 = piVar10 + 0x49) {
      *(undefined1 *)((int)piVar10 + 0x2d) = local_188._1_1_;
      *(undefined1 *)((int)piVar10 + 0x36) = uStack_17e;
      *(undefined1 *)((int)piVar10 + 0x37) = uStack_17d;
      *(undefined1 *)(piVar10 + 0xe) = uStack_17c;
      *(undefined1 *)((int)piVar10 + 0x39) = uStack_17b;
      *(undefined1 *)(piVar10 + 0x24) = uStack_124;
      *(undefined1 *)((int)piVar10 + 0x9b) = uStack_119;
      *(undefined1 *)((int)piVar10 + 0xba) = uStack_fa;
    }
    if (piVar27 != (int *)0x0) {
      piVar15 = piVar27 + 0xb;
      piVar10 = &local_e4;
      do {
        iVar28 = piVar15[1];
        iVar4 = piVar15[2];
        iVar3 = piVar15[3];
        *piVar10 = *piVar15;
        piVar10[1] = iVar28;
        piVar10[2] = iVar4;
        piVar10[3] = iVar3;
        piVar15 = piVar15 + 4;
        piVar10 = piVar10 + 4;
      } while (piVar15 != piVar27 + 0x33);
      iVar4 = (int)piVar27 - (int)piVar20 >> 2;
      *piVar10 = *piVar15;
      uStack_d9 = uStack_17d;
      local_e4._1_1_ = local_188._1_1_;
      uStack_da = uStack_17e;
      uStack_d8._0_1_ = uStack_17c;
      piVar20 = param_1 + iVar4 * -0xb65b2d8 + 0x5d;
      uStack_d8._1_1_ = uStack_17b;
      uStack_80 = uStack_124;
      uStack_75 = uStack_119;
      uStack_56 = uStack_fa;
      uStack_59 = 0;
      iVar3 = FUN_ram_480f9c70(&DAT_ram_4ff60e20,&local_e4,piVar20,1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = (int)param_1 + iVar4 * -0x2d96cb60 + 0x13e;
      piVar15 = piVar27 + 0x46;
      piVar10 = piVar27 + 0x34;
      iVar3 = (int)piVar27 + 0x11a;
      goto LAB_ram_480fc29e;
    }
  }
  piVar10 = &local_e4;
  piVar15 = param_1 + 0xd1f;
  piVar20 = piVar10;
  do {
    iVar4 = piVar15[1];
    iVar3 = piVar15[2];
    iVar28 = piVar15[3];
    *piVar20 = *piVar15;
    piVar20[1] = iVar4;
    piVar20[2] = iVar3;
    piVar20[3] = iVar28;
    piVar15 = piVar15 + 4;
    piVar20 = piVar20 + 4;
  } while (piVar15 != param_1 + 0xd47);
  *piVar20 = *piVar15;
  local_e4._1_1_ = local_188._1_1_;
  uStack_da = uStack_17e;
  uStack_d9 = uStack_17d;
  uStack_d8._0_1_ = uStack_17c;
  uStack_d8._1_1_ = uStack_17b;
  uStack_80 = uStack_124;
  uStack_75 = uStack_119;
  uStack_56 = uStack_fa;
  uStack_59 = 0;
  piVar20 = local_280;
  do {
    iVar3 = piVar10[1];
    iVar4 = piVar10[2];
    iVar28 = piVar10[3];
    *piVar20 = *piVar10;
    piVar20[1] = iVar3;
    piVar20[2] = iVar4;
    piVar20[3] = iVar28;
    piVar10 = piVar10 + 4;
    piVar20 = piVar20 + 4;
  } while (piVar10 != aiStack_44);
  *piVar20 = *piVar10;
  iVar3 = FUN_ram_480edbbe(local_280);
  if (iVar3 == 0) {
    return 0;
  }
  piVar20 = param_1 + 0xd6c;
  iVar3 = FUN_ram_480f66c0(&DAT_ram_4ff60e20,piVar20,1);
  if (iVar3 == 0) {
    return 0;
  }
  piVar10 = param_1 + 0xd48;
  piVar15 = param_1 + 0xd5a;
  iVar3 = (int)param_1 + 0x356a;
  iVar4 = (int)param_1 + 0x357a;
LAB_ram_480fc29e:
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  uVar2 = DAT_ram_4ff61958._1_1_;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  FUN_ram_48032f3e(uVar2);
  local_1d0 = param_1[0xd5d];
  uStack_1cc = (undefined2)param_1[0xd5e];
  iVar28 = FUN_ram_480f40a6(&DAT_ram_4ff60e20,&local_1d0);
  if ((iVar28 == 0) ||
     (iVar7 = FUN_ram_480f536a(&DAT_ram_4ff60e20,iVar4,1), uVar6 = DAT_ram_4ff5c544,
     iVar28 = DAT_ram_4ff5bd04, piVar27 = DAT_ram_4ff5bd00, iVar7 == 0)) {
    return 0;
  }
  DAT_ram_4ff5c544 = DAT_ram_4ff5bd08;
  DAT_ram_4ff6dd7c = param_1[1];
  DAT_ram_4ff47e80 = param_1[2];
  DAT_ram_4ff5bd08 = uVar6;
  DAT_ram_4ff5bd04 = DAT_ram_4ff5c540;
  iVar9 = *param_1;
  DAT_ram_4ff5bd00 = DAT_ram_4ff5c53c;
  DAT_ram_4ff5c540 = iVar28;
  DAT_ram_4ff47e7c = param_1[3];
  cVar1 = (char)param_1[4];
  DAT_ram_4ff5c53c = piVar27;
  DAT_ram_4ff6dd79 = '\0';
  DAT_ram_4ff47e78 = cVar1;
  DAT_ram_4ff6dd80 = iVar9;
  if (iVar28 != 0) {
    puVar16 = (undefined1 *)((int)param_1 + 0x42);
    piVar23 = piVar27 + 10;
    do {
      uVar2 = *puVar16;
      piVar22 = piVar23 + 0x49;
      *(undefined1 *)piVar23 = 0;
      *(undefined1 *)((int)piVar23 + 1) = uVar2;
      puVar16 = puVar16 + 0x1a0;
      piVar23 = piVar22;
    } while (piVar27 + iVar28 * 0x49 + 10 != piVar22);
    DAT_ram_4ff6dd79 = '\x03';
    if (cVar1 != '\0') {
      DAT_ram_4ff6dd79 = (-(iVar9 == 0) & 3U) + 1;
    }
  }
  DAT_ram_4ff5c538 = 0;
  DAT_ram_4ff5c534 = 0;
  DAT_ram_4ff5c530 = 0;
  piVar27 = piVar10 + 0x12;
  DAT_ram_4ff6dd78 = 1;
  piVar23 = &local_1d0;
  do {
    iVar25 = piVar10[1];
    iVar28 = piVar10[2];
    iVar9 = piVar10[3];
    iVar12 = piVar10[4];
    iVar17 = piVar10[5];
    *piVar23 = *piVar10;
    piVar23[1] = iVar25;
    piVar23[2] = iVar28;
    piVar23[3] = iVar9;
    piVar23[4] = iVar12;
    piVar23[5] = iVar17;
    piVar10 = piVar10 + 6;
    piVar23 = piVar23 + 6;
  } while (piVar10 != piVar27);
  piVar10 = &local_1d0;
  do {
    iVar25 = *piVar10;
    iVar17 = piVar10[1];
    iVar28 = piVar10[2];
    iVar9 = piVar10[3];
    iVar12 = piVar10[4];
    piVar18[5] = piVar10[5];
    *piVar18 = iVar25;
    piVar18[1] = iVar17;
    piVar18[2] = iVar28;
    piVar18[3] = iVar9;
    piVar18[4] = iVar12;
    piVar10 = piVar10 + 6;
    piVar18 = piVar18 + 6;
  } while (piVar10 != &local_188);
  FUN_ram_480f50d2(&DAT_ram_4ff60e20,local_2d0);
  FUN_ram_480f47ac(&DAT_ram_4ff60e20,(char)*piVar15,*(undefined1 *)((int)piVar15 + 1));
  FUN_ram_480f4aca(&DAT_ram_4ff60e20,iVar3);
  FUN_ram_4ff45158(&DAT_ram_4ff4894c,iVar4,0x36);
  iVar4 = DAT_ram_4ff6dd80;
  DAT_ram_4ff6dd4c = DAT_ram_4ff6dd80;
  DAT_ram_4ff6dd4a = 1;
  DAT_ram_4ff6dd49 = 1;
  FUN_ram_4ff45158(&DAT_ram_4ff5c4c4,piVar20,0x3e);
  iVar3 = DAT_ram_4ff6dcc8;
  DAT_ram_4ff6dd38 = iVar4;
  DAT_ram_4ff6dd36 = 1;
  DAT_ram_4ff6dd35 = 1;
  DAT_ram_4ff47e5c = DAT_ram_4ff47e5c + 1;
  if (DAT_ram_4ff47e5c == 0) {
    DAT_ram_4ff47e5c = 1;
  }
  DAT_ram_4ff47e60 = DAT_ram_4ff47e60 + 1;
  if (DAT_ram_4ff47e60 == 0) {
    DAT_ram_4ff47e60 = 1;
  }
  DAT_ram_4ff47ea4 = DAT_ram_4ff47ea4 + 1;
  if (DAT_ram_4ff47ea4 == 0) {
    DAT_ram_4ff47ea4 = 1;
  }
  DAT_ram_4ff47ea8 = DAT_ram_4ff47ea8 + 1;
  if (DAT_ram_4ff47ea8 == 0) {
    DAT_ram_4ff47ea8 = 1;
  }
  DAT_ram_4ff48984 = *(undefined1 *)((int)param_1 + 0x3572);
  DAT_ram_4ff48986 = (undefined2)param_1[0xd5d];
  DAT_ram_4ff48988 = *(undefined2 *)((int)param_1 + 0x3576);
  DAT_ram_4ff4898a = (undefined2)param_1[0xd5e];
  DAT_ram_4ff4898c = DAT_ram_4ff4898c + 1;
  DAT_ram_4ff6dd51 = 1;
  DAT_ram_4ff6dd50 = 1;
  if (DAT_ram_4ff4898c == 0) {
    DAT_ram_4ff4898c = 1;
  }
  DAT_ram_4ff5c5f5 = *(undefined1 *)((int)param_1 + 0x35ee);
  iVar4 = param_1[0xd7c];
  iVar28 = *(int *)(DAT_ram_4ff6dcc8 + 0x284);
  *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x28a) = *(undefined1 *)((int)param_1 + 0x35ef);
  *(short *)(iVar3 + 0x288) = (short)iVar4;
  DAT_ram_4ff47e58 = iVar28 + 1;
  if (DAT_ram_4ff47e58 == 0) {
    DAT_ram_4ff47e58 = 1;
  }
  *(int *)(iVar3 + 0x284) = DAT_ram_4ff47e58;
  iVar3 = DAT_ram_4ff6dcc8;
  fence();
  uVar8 = *(undefined4 *)(DAT_ram_4ff6dcc8 + 0x284);
  uVar6 = FUN_ram_48025ba6();
  *(undefined4 *)(iVar3 + 0xf94) = uVar6;
  *(undefined2 *)(iVar3 + 0xffc) = 0x100;
  *(undefined4 *)(iVar3 + 0xf90) = uVar8;
  *(undefined4 *)(iVar3 + 0xff8) = 0;
  *(undefined1 *)(iVar3 + 0xffe) = 0;
  *(undefined4 *)(iVar3 + 0xff4) = 0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  FUN_ram_4ff45158(&DAT_ram_4ff69f6c,(int)param_1 + 0x3415,100);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
  psVar13 = (short *)&DAT_ram_4ff69f6c;
  uVar5 = 0;
  uVar26 = 0;
  uVar19 = 0;
LAB_ram_480fc5ee:
  do {
    if (((((char)psVar13[4] == 'Z') && (*(char *)((int)psVar13 + 9) == '\x02')) &&
        (*psVar13 != 0xfff)) &&
       (((psVar13[1] != 0xfff && (psVar13[2] != 0xfff)) && (psVar13[3] != 0xfff)))) {
      uVar24 = 1 << (uVar19 - (((uint)((ulonglong)uVar19 * 0xcccccccd >> 0x20) & 0xfc) + uVar19 / 5)
                    & 0x1f) & 0xff;
      if (uVar19 < 5) {
        uVar26 = uVar26 | uVar24;
        uVar19 = uVar19 + 1 & 0xff;
        psVar13 = psVar13 + 5;
        goto LAB_ram_480fc5ee;
      }
      uVar5 = uVar5 | uVar24;
    }
    uVar19 = uVar19 + 1 & 0xff;
    psVar13 = psVar13 + 5;
    if (uVar19 == 10) {
      FUN_ram_4ff3ec14(DAT_ram_4ff69330,0xffffffff);
      *(char *)(DAT_ram_4ff6932c + 0xddc) = (char)uVar26;
      *(char *)(DAT_ram_4ff6932c + 0xddd) = (char)uVar5;
      FUN_ram_4ff3ee10(DAT_ram_4ff69330);
      return iVar7;
    }
  } while( true );
}


