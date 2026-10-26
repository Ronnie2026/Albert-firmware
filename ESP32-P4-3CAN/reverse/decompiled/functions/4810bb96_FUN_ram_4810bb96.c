/* Firmware entry: 0x4810bb96 */

void FUN_ram_4810bb96(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  char *pcVar19;
  uint *puVar20;
  int iVar21;
  char cVar22;
  char cVar23;
  int iVar24;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  char cStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  uint uStack_190;
  int iStack_18c;
  undefined4 local_188 [2];
  char cStack_17e;
  char acStack_17c [4];
  undefined4 local_178 [37];
  undefined4 local_e4 [2];
  undefined2 uStack_dc;
  char cStack_da;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  undefined4 local_d4 [16];
  undefined4 auStack_94 [8];
  char cStack_73;
  char cStack_72;
  char cStack_6e;
  char cStack_6c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(ushort *)(param_1 + 0x164);
  bVar10 = (bool)((byte)uVar1 & 1);
  uVar11 = 0xffffffff;
  if ((uVar1 & 1) != 0) {
    bVar10 = (bool)((byte)(uVar1 >> 8) & 1);
    uVar11 = param_2 - *(int *)(param_1 + 0x168);
    if ((uVar1 >> 8 & 1) != 0) {
      bVar10 = uVar11 <= *(uint *)(param_1 + 0x160);
    }
  }
  *(ushort *)(param_1 + 0x2de) = uVar1;
  *(bool *)(param_1 + 0x2e0) = bVar10;
  *(uint *)(param_1 + 0x2e4) = uVar11;
  *(undefined1 *)(param_1 + 0x2db) = *(undefined1 *)(param_1 + 0x172);
  *(undefined1 *)(param_1 + 0x2dc) = *(undefined1 *)(param_1 + 0x173);
  *(undefined1 *)(param_1 + 0x2dd) = *(undefined1 *)(param_1 + 0x174);
  *(undefined1 *)(param_1 + 0x2e1) = *(undefined1 *)(param_1 + 0x166);
  *(undefined2 *)(param_1 + 0x2e8) = *(undefined2 *)(param_1 + 0x176);
  *(undefined2 *)(param_1 + 0x2ea) = *(undefined2 *)(param_1 + 0x178);
  *(undefined2 *)(param_1 + 0x2ec) = *(undefined2 *)(param_1 + 0x17a);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_1 + 0x2cd);
  *(undefined1 *)(param_1 + 0x2d9) = *(undefined1 *)(param_1 + 0x2ce);
  *(undefined1 *)(param_1 + 0x2da) = *(undefined1 *)(param_1 + 0x1d8);
  puVar18 = local_e4;
  puVar17 = (undefined4 *)(param_1 + 0x2d8);
  do {
    puVar15 = puVar17;
    puVar14 = puVar18;
    uVar3 = puVar15[1];
    uVar7 = puVar15[2];
    uVar8 = puVar15[3];
    *puVar14 = *puVar15;
    puVar14[1] = uVar3;
    puVar14[2] = uVar7;
    puVar14[3] = uVar8;
    puVar17 = puVar15 + 4;
    puVar18 = puVar14 + 4;
  } while (puVar17 != (undefined4 *)(param_1 + 0x328));
  uVar7 = *puVar17;
  uVar8 = puVar15[6];
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  puVar14[5] = puVar15[5];
  puVar14[6] = uVar8;
  puVar14[4] = uVar7;
  FUN_ram_4ff3ec14(uVar3,0xffffffff);
  puVar18 = local_e4;
  puVar17 = (undefined4 *)(*(int *)(param_1 + 100) + 0xd00);
  do {
    puVar15 = puVar17;
    puVar14 = puVar18;
    uVar3 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *puVar15 = *puVar14;
    puVar15[1] = uVar3;
    puVar15[2] = uVar7;
    puVar15[3] = uVar8;
    puVar18 = puVar14 + 4;
    puVar17 = puVar15 + 4;
  } while (puVar18 != auStack_94);
  uVar7 = *puVar18;
  uVar8 = puVar14[6];
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  puVar15[5] = puVar14[5];
  puVar15[4] = uVar7;
  puVar15[6] = uVar8;
  FUN_ram_4ff3ee10(uVar3);
  iVar21 = param_1 + 0x378;
  FUN_ram_4ff3ec14(iVar21,0xffffffff);
  *(int *)(param_1 + 0x380) = param_2;
  if (*(char *)(param_1 + 0x3b3) == '\0') {
    if ((*(char *)(param_1 + 0x39d) == '\0') || (*(char *)(param_1 + 0x3a8) == '\0')) {
LAB_ram_4810bcf6:
      if (*(char *)(param_1 + 0x390) != '\x01') goto LAB_ram_4810bd00;
      iVar12 = *(int *)(param_1 + 0x38c);
    }
    else {
      uVar11 = (uint)*(byte *)(param_1 + 0x39e) * 60000;
      iVar12 = *(int *)(param_1 + 0x3dc);
      if ((uint)(param_2 - iVar12) < uVar11) goto LAB_ram_4810bcf6;
      *(uint *)(param_1 + 0x3e0) = uVar11;
      *(undefined4 *)(param_1 + 0x3dc) = 0;
      *(undefined1 *)(param_1 + 0x39d) = 0;
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      iVar16 = *(int *)(param_1 + 900) + 1;
      *(undefined1 *)(param_1 + 0x3a9) = 1;
      *(undefined1 *)(param_1 + 0x3b1) = 1;
      iVar12 = iVar12 + uVar11;
      if (iVar16 == 0) {
        iVar16 = 1;
      }
      *(int *)(param_1 + 0x38c) = iVar12;
      *(int *)(param_1 + 900) = iVar16;
      *(undefined1 *)(param_1 + 0x394) = 0;
      *(undefined2 *)(param_1 + 0x396) = 0;
      *(undefined1 *)(param_1 + 0x398) = 0;
      *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x3b8);
      *(undefined4 *)(param_1 + 0x390) = 1;
      *(undefined2 *)(param_1 + 0x3ae) = 0x300;
    }
    if (9999 < (uint)(param_2 - iVar12)) {
      *(undefined1 *)(param_1 + 0x3af) = 0;
      *(undefined1 *)(param_1 + 0x39d) = 0;
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      *(undefined1 *)(param_1 + 0x396) = 0;
      *(undefined **)(param_1 + 0x390) = &mideleg;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x390) == '\x01') &&
       (9999 < (uint)(param_2 - *(int *)(param_1 + 0x38c)))) {
      *(undefined1 *)(param_1 + 0x3af) = 0;
      *(undefined1 *)(param_1 + 0x39d) = 0;
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      *(undefined1 *)(param_1 + 0x396) = 0;
      *(undefined **)(param_1 + 0x390) = &mideleg;
    }
    if ((*(char *)(param_1 + 0x3b3) == '\x01') &&
       (200 < (uint)(param_2 - *(int *)(param_1 + 0x3c0)))) {
      *(undefined1 *)(param_1 + 0x3b3) = 3;
      *(undefined1 *)(param_1 + 0x3b4) = 3;
    }
  }
LAB_ram_4810bd00:
  FUN_ram_4ff3ee10(iVar21);
  if (*(int *)(param_1 + 0x520) != 0) {
    FUN_ram_4ff3ec14(iVar21,0xffffffff);
    iVar12 = FUN_ram_48053de0(iVar21,param_1 + 0x530,param_2);
    FUN_ram_4ff3ee10(iVar21);
    if (iVar12 == 0) {
      FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x520));
      iVar12 = *(int *)(param_1 + 0x58);
      piVar13 = (int *)(iVar12 + 0x614);
      do {
        iVar16 = *piVar13 + 1;
        if (iVar16 == 0) {
          iVar16 = 1;
        }
        *piVar13 = iVar16;
        piVar13 = piVar13 + 0x2c;
      } while (piVar13 != (int *)(iVar12 + 0x824));
    }
  }
  iVar12 = FUN_ram_4809f360(param_1,param_2);
  iVar16 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar16 + 0xb18,0xffffffff);
  puVar17 = (undefined4 *)(iVar16 + 0xb38);
  puVar18 = local_188;
  do {
    uVar3 = puVar17[1];
    uVar7 = puVar17[2];
    uVar8 = puVar17[3];
    *puVar18 = *puVar17;
    puVar18[1] = uVar3;
    puVar18[2] = uVar7;
    puVar18[3] = uVar8;
    puVar17 = puVar17 + 4;
    puVar18 = puVar18 + 4;
  } while (puVar17 != (undefined4 *)(iVar16 + 0xbd8));
  *puVar18 = *puVar17;
  FUN_ram_4ff3ee10(iVar16 + 0xb18);
  FUN_ram_4ff3ec14(iVar21,0xffffffff);
  cVar22 = *(char *)(param_1 + 0x3b3);
  FUN_ram_4ff3ee10(iVar21);
  if ((((iVar12 == 0) || (cStack_17e == '\0')) || (acStack_17c[0] == '\0')) ||
     (uVar11 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),2,0), uVar11 == 0)) {
    uVar11 = 0;
  }
  else if (cVar22 != '\x01') {
    fence();
    uVar11 = (uint)(*(char *)(param_1 + 0x570) == '\0');
  }
  memset(&local_1c8,0,0x40);
  if (*(int *)(param_1 + 0x520) != 0) goto LAB_ram_4810bdfe;
  local_d4[2] = 0x10000;
  uStack_1b0 = 0x10000;
  local_e4[0] = 0;
  _uStack_dc = 0;
  uStack_d8 = 0;
  local_d4[0] = 0;
  local_d4[1] = 0;
  local_d4[3] = 0;
  local_d4[4] = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  local_e4[1] = 8;
  uStack_1c4 = 8;
  FUN_ram_4ff3ec14(iVar21,0xffffffff);
  *(char *)(param_1 + 0x39f) = (char)uVar11;
  *(int *)(param_1 + 0x380) = param_2;
  iVar12 = 0;
  if (*(char *)(param_1 + 0x3b3) == '\0') {
    if (*(char *)(param_1 + 0x39d) == '\0') {
      cVar22 = *(char *)(param_1 + 0x390);
      if ((cVar22 == '\x01') && (9999 < (uint)(param_2 - *(int *)(param_1 + 0x38c))))
      goto LAB_ram_4810c2e8;
LAB_ram_4810c544:
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      if (((cVar22 == '\x01') && (*(char *)(param_1 + 0x3af) != '\0')) &&
         (*(char *)(param_1 + 0x3b0) == '\0')) {
        if (uVar11 == 0) goto LAB_ram_4810c596;
        if ((*(char *)(param_1 + 0x398) == '\0') || (-1 < param_2 - *(int *)(param_1 + 0x3c4))) {
          iVar12 = *(int *)(param_1 + 900);
          iVar24 = *(int *)(param_1 + 0x388);
          uStack_1c4._0_2_ = CONCAT11(DAT_ram_48223dc8,(undefined1)uStack_1c4);
          uStack_1c4._0_3_ = CONCAT12(DAT_ram_48223dc9,(undefined2)uStack_1c4);
          uStack_1c4 = CONCAT13(DAT_ram_48223dca,(undefined3)uStack_1c4);
          uStack_1c0._0_2_ = CONCAT11(DAT_ram_48223dcc,DAT_ram_48223dcb);
          uStack_1c0._0_3_ = CONCAT12(DAT_ram_48223dcd,(undefined2)uStack_1c0);
          uStack_1c0 = CONCAT13(DAT_ram_48223dce,(undefined3)uStack_1c0);
          uStack_1bc = CONCAT31(uStack_1bc._1_3_,DAT_ram_48223dcf);
          iVar16 = 0;
          cVar22 = '\x01';
          cVar23 = '\x02';
          goto LAB_ram_4810c38c;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x3b1) = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0x3a8) != '\0') {
        uVar9 = (uint)*(byte *)(param_1 + 0x39e) * 60000;
        iVar16 = *(int *)(param_1 + 0x3dc);
        if (uVar9 <= (uint)(param_2 - iVar16)) {
          *(uint *)(param_1 + 0x3e0) = uVar9;
          *(undefined4 *)(param_1 + 0x3dc) = 0;
          *(undefined1 *)(param_1 + 0x39d) = 0;
          *(undefined1 *)(param_1 + 0x3a0) = 0;
          iVar12 = *(int *)(param_1 + 900) + 1;
          *(undefined1 *)(param_1 + 0x3a9) = 1;
          *(undefined1 *)(param_1 + 0x3b1) = 1;
          iVar16 = iVar16 + uVar9;
          if (iVar12 == 0) {
            iVar12 = 1;
          }
          *(int *)(param_1 + 0x38c) = iVar16;
          *(int *)(param_1 + 900) = iVar12;
          *(undefined1 *)(param_1 + 0x394) = 0;
          *(undefined2 *)(param_1 + 0x396) = 0;
          *(undefined1 *)(param_1 + 0x398) = 0;
          *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x3b8);
          *(undefined4 *)(param_1 + 0x390) = 1;
          *(undefined2 *)(param_1 + 0x3ae) = 0x300;
          if (9999 < (uint)(param_2 - iVar16)) goto LAB_ram_4810c2e8;
          cVar22 = *(char *)(param_1 + 0x390);
          goto LAB_ram_4810c544;
        }
      }
      if ((*(char *)(param_1 + 0x390) == '\x01') &&
         (9999 < (uint)(param_2 - *(int *)(param_1 + 0x38c)))) {
LAB_ram_4810c2e8:
        *(undefined **)(param_1 + 0x390) = &mideleg;
        *(undefined1 *)(param_1 + 0x3af) = 0;
        *(undefined1 *)(param_1 + 0x39d) = 0;
        *(undefined1 *)(param_1 + 0x3a0) = 0;
        *(undefined1 *)(param_1 + 0x396) = 0;
        cVar22 = '\x03';
        goto LAB_ram_4810c544;
      }
      *(char *)(param_1 + 0x3a0) = (char)uVar11;
      if (uVar11 == 0) {
LAB_ram_4810c596:
        *(undefined1 *)(param_1 + 0x3b1) = 2;
      }
      else {
        if ((*(char *)(param_1 + 0x398) != '\0') && (param_2 - *(int *)(param_1 + 0x3c4) < 0))
        goto LAB_ram_4810c42a;
        iVar24 = *(int *)(param_1 + 0x3b8);
        uStack_1c4._0_2_ = CONCAT11(DAT_ram_48223dc0,(undefined1)uStack_1c4);
        uStack_1c4._0_3_ = CONCAT12(DAT_ram_48223dc1,(undefined2)uStack_1c4);
        uStack_1c4 = CONCAT13(DAT_ram_48223dc2,(undefined3)uStack_1c4);
        uStack_1c0._0_2_ = CONCAT11(DAT_ram_48223dc4,DAT_ram_48223dc3);
        uStack_1c0._0_3_ = CONCAT12(DAT_ram_48223dc5,(undefined2)uStack_1c0);
        uStack_1c0 = CONCAT13(DAT_ram_48223dc6,(undefined3)uStack_1c0);
        uStack_1bc = CONCAT31(uStack_1bc._1_3_,DAT_ram_48223dc7);
        cVar22 = '\x01';
        iVar16 = 0;
        cVar23 = '\x01';
LAB_ram_4810c38c:
        puVar18 = (undefined4 *)(param_1 + 0x420);
        puVar17 = (undefined4 *)(param_1 + 0x520);
        if (puVar18 != puVar17) {
          pcVar19 = (char *)(param_1 + 0x434);
          do {
            if ((*pcVar19 == '\0') && (pcVar19[1] == '\0')) {
              if (iVar16 == 0) {
                *(int *)(param_1 + 0x3c4) = param_2 + 500;
                *(undefined1 *)(param_1 + 0x398) = 1;
              }
              FUN_ram_4ff3ee10(iVar21);
              local_e4[0] = 0;
              FUN_ram_4ff3ec14(iVar21,0xffffffff);
              local_1c8 = 0x82;
              uStack_1bc = (uint)CONCAT11(2,(undefined1)uStack_1bc);
              uStack_1b8 = 0;
              uStack_1b4 = 0;
              uStack_1ac = 0;
              uStack_1a8 = 0;
              uStack_1c4 = CONCAT31(uStack_1c4._1_3_,8);
              uStack_1b0 = (uint)(CONCAT12(cVar22,(short)uStack_1b0) & 0xfffc00);
              cStack_1a4 = cVar23;
              iStack_1a0 = iVar24;
              iStack_19c = iVar16;
              iStack_198 = iVar12;
              iStack_194 = param_2;
              iVar4 = FUN_ram_48053de0(iVar21,&local_1c8,param_2);
              puVar14 = puVar18;
              if (iVar4 != 0) goto LAB_ram_4810c6cc;
              goto LAB_ram_4810c7d2;
            }
            pcVar19 = pcVar19 + 0x20;
          } while ((char *)(param_1 + 0x534) != pcVar19);
        }
      }
    }
  }
  else {
    if ((*(char *)(param_1 + 0x390) == '\x01') &&
       (9999 < (uint)(param_2 - *(int *)(param_1 + 0x38c)))) {
      *(undefined1 *)(param_1 + 0x3af) = 0;
      *(undefined1 *)(param_1 + 0x39d) = 0;
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      *(undefined1 *)(param_1 + 0x396) = 0;
      *(undefined **)(param_1 + 0x390) = &mideleg;
    }
    if (*(char *)(param_1 + 0x3b3) == '\x01') {
      if (200 < (uint)(param_2 - *(int *)(param_1 + 0x3c0))) {
        *(undefined1 *)(param_1 + 0x3b3) = 3;
        *(undefined1 *)(param_1 + 0x3b4) = 3;
        goto LAB_ram_4810c426;
      }
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      if (*(char *)(param_1 + 0x3b0) == '\0') {
        if (uVar11 != 0) {
          cVar22 = '\x02';
          iVar16 = *(int *)(param_1 + 0x3bc);
          iVar24 = *(int *)(param_1 + 0x3b8);
          uStack_1c4._0_2_ = CONCAT11(DAT_ram_48223dc8,(undefined1)uStack_1c4);
          uStack_1c4._0_3_ = CONCAT12(DAT_ram_48223dc9,(undefined2)uStack_1c4);
          uStack_1c4 = CONCAT13(DAT_ram_48223dca,(undefined3)uStack_1c4);
          uStack_1c0._0_2_ = CONCAT11(DAT_ram_48223dcc,DAT_ram_48223dcb);
          uStack_1c0._0_3_ = CONCAT12(DAT_ram_48223dcd,(undefined2)uStack_1c0);
          uStack_1c0 = CONCAT13(DAT_ram_48223dce,(undefined3)uStack_1c0);
          uStack_1bc = CONCAT31(uStack_1bc._1_3_,DAT_ram_48223dcf);
          cVar23 = cVar22;
          goto LAB_ram_4810c38c;
        }
        goto LAB_ram_4810c596;
      }
      *(undefined1 *)(param_1 + 0x3b1) = 0;
    }
    else {
LAB_ram_4810c426:
      *(undefined1 *)(param_1 + 0x3a0) = 0;
    }
  }
LAB_ram_4810c42a:
  local_e4[0] = 0;
  _uStack_dc = 0;
  uStack_d8 = 0;
  local_d4[0] = 0;
  local_d4[1] = 0;
  local_d4[3] = 0;
  local_d4[4] = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  local_e4[1] = 8;
  uStack_1c4 = 8;
  local_d4[2] = 0x10000;
  uStack_1b0 = 0x10000;
  FUN_ram_4ff3ee10(iVar21);
LAB_ram_4810bdfe:
  if ((((((*(char *)(param_1 + 0x336) != '\0') && (*(int *)(param_1 + 0x33c) == 0)) &&
        (*(int *)(param_1 + 0x340) == 0)) && ((cStack_17e != '\0' && (acStack_17c[0] != '\0')))) &&
      (iVar21 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),2,0), iVar21 != 0)) &&
     ((*(int *)(param_1 + 0x368) == 0 || (9 < (uint)(param_2 - *(int *)(param_1 + 0x368)))))) {
    cVar22 = *(char *)(param_1 + 0x334);
    local_e4[0] = DAT_ram_48222d48;
    local_e4[1] = DAT_ram_48222d4c;
    _uStack_dc = DAT_ram_48222d50;
    local_d4[0] = DAT_ram_48222d58;
    local_d4[1] = DAT_ram_48222d5c;
    local_d4[2] = DAT_ram_48222d60;
    local_d4[3] = DAT_ram_48222d64;
    local_d4[4] = DAT_ram_48222d68;
    uStack_1cc = 0;
    uStack_d8 = DAT_ram_48222d54;
    iVar21 = FUN_ram_48025b94();
    _uStack_dc = CONCAT12(cVar22 << 7,uStack_dc);
    local_e4[0] = 0x339;
    uStack_d8._0_2_ = CONCAT11(2,(undefined1)uStack_d8);
    iVar21 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),local_e4,0,6,1,1,iVar21 + 100000,6,
                              &uStack_1cc,0,0,1,0,0);
    if (iVar21 == 0) {
      *(undefined4 *)(param_1 + 0x338) = 1;
      *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 1;
      *(undefined2 *)(param_1 + 0x336) = 0x400;
    }
    else {
      *(undefined4 *)(param_1 + 0x340) = uStack_1cc;
      *(undefined4 *)(param_1 + 0x344) = local_e4[0];
      *(undefined4 *)(param_1 + 0x348) = local_e4[1];
      *(undefined4 *)(param_1 + 0x34c) = _uStack_dc;
      *(undefined4 *)(param_1 + 0x350) = uStack_d8;
      *(undefined4 *)(param_1 + 0x354) = local_d4[0];
      *(undefined4 *)(param_1 + 0x358) = local_d4[1];
      *(undefined4 *)(param_1 + 0x35c) = local_d4[2];
      *(undefined4 *)(param_1 + 0x360) = local_d4[3];
      *(undefined4 *)(param_1 + 0x364) = local_d4[4];
    }
  }
  FUN_ram_48104b22(param_1,local_188,param_2);
  puVar20 = *(uint **)(param_1 + 0x6c);
  fence();
  uVar11 = *puVar20;
  do {
    uVar9 = uVar11 + 1;
    if (((int)uVar11 < 0) || ((uVar11 & 0xffff) == 0xffff)) goto LAB_ram_4810c0f2;
    bVar10 = *puVar20 != uVar11;
    uVar11 = *puVar20;
  } while (bVar10);
  *puVar20 = uVar9;
  iVar21 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar21 + 0xb18,0xffffffff);
  puVar17 = (undefined4 *)(iVar21 + 0xb38);
  puVar18 = local_e4;
  do {
    uVar3 = puVar17[1];
    uVar7 = puVar17[2];
    uVar8 = puVar17[3];
    *puVar18 = *puVar17;
    puVar18[1] = uVar3;
    puVar18[2] = uVar7;
    puVar18[3] = uVar8;
    puVar17 = puVar17 + 4;
    puVar18 = puVar18 + 4;
  } while (puVar17 != (undefined4 *)(iVar21 + 0xbd8));
  *puVar18 = *puVar17;
  FUN_ram_4ff3ee10(iVar21 + 0xb18);
  bVar10 = false;
  if ((*(char *)(param_1 + 0x91c) != '\0') && (bVar10 = false, *(char *)(param_1 + 0x91d) != '\0'))
  {
    bVar10 = (uint)(param_2 - *(int *)(param_1 + 0x918)) < 0x12d;
  }
  *(bool *)(param_1 + 0xba4) = bVar10;
  if ((*(char *)(param_1 + 0x90f) != '\0') && (300 < (uint)(param_2 - *(int *)(param_1 + 0x908)))) {
    cVar22 = *(char *)(param_1 + 0x911);
    *(undefined1 *)(param_1 + 0x90f) = 0;
    *(undefined1 *)(param_1 + 0x90c) = 0;
    *(undefined1 *)(param_1 + 0x911) = 0;
    if (cVar22 != '\0') {
      *(undefined4 *)(param_1 + 0x92c) = 0;
      *(undefined2 *)(param_1 + 0x930) = 0;
      *(undefined4 *)(param_1 + 0xaa4) = 0;
      *(undefined1 *)(param_1 + 0xaa8) = 0;
      *(undefined1 *)(param_1 + 0xab4) = 0;
      *(undefined4 *)(param_1 + 0xab8) = 0;
      *(undefined4 *)(param_1 + 0xad0) = 0;
      *(undefined1 *)(param_1 + 0xad4) = 0;
      *(undefined1 *)(param_1 + 0xae0) = 0;
      *(undefined4 *)(param_1 + 0xae4) = 0;
      *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
      *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
      *(undefined4 *)(param_1 + 0xad8) = 0x80000000;
      *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
      if ((*(char *)(param_1 + 0xb36) != '\0') && (*(char *)(param_1 + 0xb62) != '\x03')) {
        FUN_ram_480db8da(param_1,4);
      }
    }
  }
  FUN_ram_48105438(param_1,param_2);
  if ((((cStack_73 == '\0') || (cStack_6e == '\0')) || (cStack_6c == '\0')) || (cStack_72 != '\0'))
  {
    *(undefined4 *)(param_1 + 0x92c) = 0;
    *(undefined2 *)(param_1 + 0x930) = 0;
  }
  else if ((((((*(char *)(param_1 + 0x911) != '\0') && (*(char *)(param_1 + 0x90f) != '\0')) &&
             (((uint)(param_2 - *(int *)(param_1 + 0x908)) < 0x12d &&
              ((*(int *)(param_1 + 0xba8) != 0 &&
               ((uint)(param_2 - *(int *)(param_1 + 0xba8)) < 0x12d)))))) &&
            (*(char *)(param_1 + 0x91c) != '\0')) &&
           (((*(char *)(param_1 + 0x91d) != '\0' &&
             ((uint)(param_2 - *(int *)(param_1 + 0x918)) < 0x12d)) &&
            (iVar21 = *(int *)(param_1 + 0x904), iVar21 != 0)))) &&
          ((*(char *)(param_1 + 0x931) == '\0' || (iVar21 != *(int *)(param_1 + 0x92c))))) {
    iVar12 = *(int *)(param_1 + 0x928) + 1;
    if (iVar12 == 0) {
      iVar12 = 1;
    }
    *(int *)(param_1 + 0x928) = iVar12;
    *(int *)(param_1 + 0x92c) = iVar21;
    *(undefined2 *)(param_1 + 0x930) = 0x100;
  }
  FUN_ram_48107fd2(param_1,local_e4,param_2);
  FUN_ram_4810834a(param_1,local_e4,param_2);
  if ((*(char *)(param_1 + 0xaec) != '\0') && (-1 < param_2 - *(int *)(param_1 + 0xaf0))) {
    cVar22 = *(char *)(param_1 + 0xb64);
    *(undefined2 *)(param_1 + 0xaec) = 0;
    *(undefined1 *)(param_1 + 0xaee) = 0;
    *(undefined4 *)(param_1 + 0xaf0) = 0;
    *(undefined4 *)(param_1 + 0xb7c) = 0;
    *(undefined4 *)(param_1 + 0xb80) = 0;
    *(undefined1 *)(param_1 + 0xb64) = 0;
    FUN_ram_480db8da(param_1,0xf);
    if ((cVar22 == '\x02') && (*(char *)(param_1 + 0x98e) != '\0')) {
      *(undefined1 *)(param_1 + 0x98e) = 0;
      *(undefined1 *)(param_1 + 0x98d) = 0;
      *(undefined1 *)(param_1 + 0x943) = 0;
      *(undefined2 *)(param_1 + 0x950) = 0;
      *(undefined1 *)(param_1 + 0x994) = 0;
      *(undefined4 *)(param_1 + 0x998) = 0;
      *(undefined4 *)(param_1 + 0x99c) = 0;
      *(undefined4 *)(param_1 + 0x9a0) = 0;
      *(undefined4 *)(param_1 + 0x9a4) = 0;
      *(undefined4 *)(param_1 + 0x9a8) = 0;
      *(undefined4 *)(param_1 + 0x9ac) = 0;
      *(undefined2 *)(param_1 + 0x98a) = 0;
      *(undefined2 *)(param_1 + 0x938) = 0x1503;
      FUN_ram_48049b14(param_1 + 0x938);
    }
  }
  if ((*(char *)(param_1 + 0xb36) != '\0') && (-1 < param_2 - *(int *)(param_1 + 0xb68))) {
    FUN_ram_480db8da(param_1,9);
  }
  FUN_ram_4810ab0a(param_1,local_e4,param_2);
  fence();
  uVar11 = *puVar20;
  do {
    uVar9 = uVar11 - 1;
    if (((int)uVar11 < 0) || ((uVar11 & 0xffff) == 0)) goto LAB_ram_4810c0f2;
    bVar10 = *puVar20 != uVar11;
    uVar11 = *puVar20;
  } while (bVar10);
  *puVar20 = uVar9;
LAB_ram_4810c0f2:
  FUN_ram_4810b9ce(param_1,local_188,param_2);
  return;
LAB_ram_4810c6cc:
  if ((*(char *)(puVar14 + 5) != '\0') || (*(char *)((int)puVar14 + 0x15) != '\0'))
  goto LAB_ram_4810c7ca;
  uVar11 = *(uint *)(param_1 + 0x418);
  if ((uVar11 != 0xffffffff) || (*(int *)(param_1 + 0x41c) != -1)) {
    uVar9 = uVar11 + 1;
    iVar4 = (uint)(uVar9 < uVar11) + *(int *)(param_1 + 0x41c);
    *(int *)(param_1 + 0x41c) = iVar4;
    *(uint *)(param_1 + 0x418) = uVar9;
    puVar14[7] = iVar4;
    puVar14[6] = uVar9;
    puVar14[1] = iVar24;
    *(char *)(puVar14 + 2) = cVar23;
    puVar14[4] = iVar12;
    puVar14[3] = iVar16;
    *(undefined1 *)((int)puVar14 + 0x15) = 1;
    FUN_ram_4ff3ee10(iVar21);
    uStack_190 = uVar9;
    iStack_18c = iVar4;
    if (iVar16 == 0) {
      iVar16 = FUN_ram_48025b94();
      iVar16 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&local_1c8,0,0xd,1,1,iVar16 + 100000
                                ,3,local_e4,2,(uint)(cVar23 == '\x02') << 1,1,0,0);
      if (iVar16 == 0) {
        FUN_ram_4ff3ec14(iVar21,0xffffffff);
        bVar10 = false;
        goto LAB_ram_4810c788;
      }
    }
    else {
      iVar5 = FUN_ram_48025b94();
      iVar5 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&local_1c8,0,0xd,2,1,iVar5 + 100000,3
                               ,local_e4,2,(uint)(cVar23 == '\x02') << 1,1,0,0);
      if (iVar5 == 0) {
        FUN_ram_4ff3ec14(iVar21,0xffffffff);
        goto LAB_ram_4810c774;
      }
    }
    puVar17 = &local_1c8;
    puVar18 = (undefined4 *)(param_1 + 0x530);
    *(undefined4 *)(param_1 + 0x520) = local_e4[0];
    do {
      uVar3 = *puVar17;
      uVar7 = puVar17[1];
      uVar8 = puVar17[2];
      puVar18[3] = puVar17[3];
      *puVar18 = uVar3;
      puVar18[1] = uVar7;
      puVar18[2] = uVar8;
      puVar17 = puVar17 + 4;
      puVar18 = puVar18 + 4;
    } while (local_188 != puVar17);
    goto LAB_ram_4810bdfe;
  }
  goto LAB_ram_4810c7d2;
LAB_ram_4810c7ca:
  puVar14 = puVar14 + 8;
  if (puVar17 == puVar14) goto LAB_ram_4810c7d2;
  goto LAB_ram_4810c6cc;
LAB_ram_4810c7d2:
  FUN_ram_4ff3ee10(iVar21);
  FUN_ram_4ff3ec14(iVar21,0xffffffff);
  if (iVar16 == 0) {
    bVar10 = false;
    uVar9 = 0;
    iVar4 = 0;
  }
  else {
    uVar9 = 0;
    iVar4 = 0;
LAB_ram_4810c774:
    bVar10 = false;
    if (iVar16 == *(int *)(param_1 + 0x3bc)) {
      bVar10 = *(char *)(param_1 + 0x3b3) == '\x01';
    }
  }
LAB_ram_4810c788:
  bVar6 = false;
  if (((iVar12 != 0) && (*(int *)(param_1 + 900) == iVar12)) &&
     (*(int *)(param_1 + 0x388) == iVar24)) {
    bVar6 = *(char *)(param_1 + 0x390) == '\x01';
  }
  bVar2 = false;
  if (((cVar23 == '\x01') && (*(int *)(param_1 + 0x3b8) == iVar24)) &&
     (bVar2 = false, *(char *)(param_1 + 0x39d) != '\0')) {
    bVar2 = *(char *)(param_1 + 0x3b3) == '\0';
  }
  do {
    if ((*(char *)((int)puVar18 + 0x15) != '\0') && (puVar14 = puVar18, uVar9 != 0 || iVar4 != 0)) {
      do {
        if ((puVar14[6] == uVar9) && (puVar14[7] == iVar4)) {
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined1 *)(puVar14 + 2) = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
          *(undefined2 *)(puVar14 + 5) = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
        }
        puVar18 = puVar14 + 8;
        if (puVar17 == puVar18) goto LAB_ram_4810c8e6;
        pcVar19 = (char *)((int)puVar14 + 0x35);
        puVar14 = puVar18;
      } while (*pcVar19 != '\0');
    }
    puVar18 = puVar18 + 8;
  } while (puVar17 != puVar18);
LAB_ram_4810c8e6:
  *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
  if (bVar6) {
    *(undefined1 *)(param_1 + 0x3b1) = 3;
    *(undefined1 *)(param_1 + 0x3ae) = 1;
    if (bVar10) goto LAB_ram_4810c9d2;
  }
  else if (bVar10) {
    *(undefined1 *)(param_1 + 0x3b1) = 3;
    *(undefined1 *)(param_1 + 0x3ae) = 1;
LAB_ram_4810c9d2:
    *(undefined1 *)(param_1 + 0x3b3) = 3;
    *(undefined1 *)(param_1 + 0x3b4) = 1;
  }
  else if (bVar2) {
    *(undefined1 *)(param_1 + 0x3b1) = 3;
    *(undefined1 *)(param_1 + 0x3ae) = 1;
  }
  FUN_ram_4ff3ee10(iVar21);
  goto LAB_ram_4810bdfe;
}


