/* Firmware entry: 0x4810ab0a */

void FUN_ram_4810ab0a(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  undefined2 uVar8;
  int iVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined1 uVar14;
  uint uVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  int iVar22;
  char cVar23;
  char cVar24;
  int *piVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined1 uVar28;
  int iVar29;
  char cStack_1bc;
  char cStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined4 uStack_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  char cStack_174;
  byte bStack_173;
  undefined2 uStack_162;
  undefined4 uStack_160;
  undefined4 uStack_7c;
  undefined1 uStack_68;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar23 = *(char *)(param_2 + 1);
  uStack_1a8._0_2_ = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  iStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_19c = 0x12c0000;
  uStack_1ac = (uint)CONCAT12(*(undefined1 *)(param_2 + 0x7a),*(undefined2 *)(param_2 + 0x86));
  if (cVar23 == '\f') {
    uStack_1ac = uStack_1ac | 0x80000000;
  }
  else if (cVar23 != '\x0e') {
    cVar23 = '\r';
  }
  uStack_1b0 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x71),*(undefined1 *)(param_2 + 0x75));
  cVar24 = *(char *)(param_2 + 0x72);
  if (cVar24 == '\0') {
    if ((((*(int *)(param_1 + 0xba8) != 0) &&
         (uVar26 = param_3 - *(int *)(param_1 + 0xba8),
         uStack_1a8._0_2_ = (ushort)(uVar26 < 0x12d) << 8, uVar26 < 0x12d)) &&
        (*(char *)(param_1 + 0x91c) != '\0')) && (*(char *)(param_1 + 0x91d) != '\0')) {
      cVar24 = (uint)(param_3 - *(int *)(param_1 + 0x918)) < 0x12d;
    }
  }
  else {
    uStack_1a8._0_2_ = 0x100;
  }
  uStack_1a8._0_3_ = CONCAT12(cVar24,(short)uStack_1a8);
  uStack_1a8 = (uint)(uint3)uStack_1a8;
  bVar2 = *(int *)(param_1 + 0xaf8) != 0;
  bVar1 = (uint)(param_3 - *(int *)(param_1 + 0xaf8)) < 0x12d;
  piVar25 = *(int **)(param_1 + 0x5c);
  if (cVar23 == '\f') {
    iVar9 = FUN_ram_48045922(piVar25,1,0);
    uVar26 = 0;
    if (iVar9 != 0) {
      uVar26 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),2,0);
    }
    FUN_ram_4ff3ec14(param_1 + 0xc64,0xffffffff);
    if (*(char *)(param_1 + 0xc60) == '\0') {
      *(undefined1 *)(param_1 + 0xc24) = 0;
      *(undefined1 *)(param_1 + 0xc25) = 0;
      *(undefined1 *)(param_1 + 0xc26) = 0;
      *(undefined1 *)(param_1 + 0xc27) = 0;
      *(undefined1 *)(param_1 + 0xc28) = 0;
      *(undefined1 *)(param_1 + 0xc29) = 0;
      *(undefined1 *)(param_1 + 0xc2a) = 0;
      *(undefined1 *)(param_1 + 0xc2b) = 0;
      *(undefined1 *)(param_1 + 0xc2c) = 0;
      *(undefined1 *)(param_1 + 0xc2d) = 0;
      *(undefined1 *)(param_1 + 0xc2e) = 0;
      *(undefined1 *)(param_1 + 0xc2f) = 0;
      *(undefined1 *)(param_1 + 0xc30) = 0;
      *(undefined1 *)(param_1 + 0xc31) = 0;
      *(undefined1 *)(param_1 + 0xc34) = 0;
      *(undefined1 *)(param_1 + 0xc35) = 0;
      *(undefined1 *)(param_1 + 0xc36) = 0;
      *(undefined1 *)(param_1 + 0xc37) = 0;
      *(undefined1 *)(param_1 + 0xc38) = 0;
      *(undefined1 *)(param_1 + 0xc39) = 0;
      *(undefined1 *)(param_1 + 0xc3a) = 0;
      *(undefined1 *)(param_1 + 0xc3b) = 0;
      *(undefined1 *)(param_1 + 0xc3c) = 0;
      *(undefined1 *)(param_1 + 0xc3d) = 0;
      *(undefined1 *)(param_1 + 0xc3e) = 0;
      *(undefined1 *)(param_1 + 0xc3f) = 0;
      *(undefined1 *)(param_1 + 0xc40) = 0;
      *(undefined1 *)(param_1 + 0xc41) = 0;
      *(undefined1 *)(param_1 + 0xc44) = 0;
      *(undefined1 *)(param_1 + 0xc45) = 0;
      *(undefined1 *)(param_1 + 0xc46) = 0;
      *(undefined1 *)(param_1 + 0xc60) = 1;
      *(undefined1 *)(param_1 + 0xc47) = 0;
      *(undefined1 *)(param_1 + 0xc48) = 0;
      *(undefined1 *)(param_1 + 0xc49) = 0;
      *(undefined1 *)(param_1 + 0xc4a) = 0;
      *(undefined1 *)(param_1 + 0xc4b) = 0;
      *(undefined1 *)(param_1 + 0xc4c) = 0;
      *(undefined1 *)(param_1 + 0xc4d) = 0;
      *(undefined4 *)(param_1 + 0xc5c) = 0;
      iVar9 = *(int *)(param_1 + 0xc54) + 1;
      if (iVar9 == 0) {
        *(undefined4 *)(param_1 + 0xc54) = 1;
        iVar9 = *(int *)(param_1 + 0xc58);
      }
      else {
        *(int *)(param_1 + 0xc54) = iVar9;
        iVar9 = *(int *)(param_1 + 0xc58);
      }
      iVar9 = iVar9 + 1;
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      *(int *)(param_1 + 0xc58) = iVar9;
    }
    FUN_ram_4ff3ee10(param_1 + 0xc64);
    bVar13 = *(byte *)(param_1 + 0xaf4);
    iVar9 = param_1 + 0xa7c;
    FUN_ram_4ff3ec14(iVar9,0xffffffff);
    *(byte *)(param_1 + 0xa58) = bVar13;
    bVar16 = (!bVar2 || !bVar1) || 3 < bVar13 - 1;
    if ((bool)*(char *)(param_1 + 0xa59) == bVar16) {
      FUN_ram_4ff3ee10(iVar9);
    }
    else {
      *(bool *)(param_1 + 0xa59) = bVar16;
      memset((void *)(param_1 + 0x9f8),0,0x12);
      memset((void *)(param_1 + 0xa0c),0,0x12);
      *(undefined1 *)(param_1 + 0xa30) = 0;
      *(undefined1 *)(param_1 + 0xa31) = 0;
      *(undefined1 *)(param_1 + 0xa32) = 0;
      *(undefined1 *)(param_1 + 0xa33) = 0;
      *(undefined1 *)(param_1 + 0xa34) = 0;
      *(undefined1 *)(param_1 + 0xa35) = 0;
      *(undefined1 *)(param_1 + 0xa38) = 0;
      *(undefined1 *)(param_1 + 0xa39) = 0;
      *(undefined1 *)(param_1 + 0xa3a) = 0;
      *(undefined1 *)(param_1 + 0xa3b) = 0;
      *(undefined1 *)(param_1 + 0xa3c) = 0;
      *(undefined1 *)(param_1 + 0xa3d) = 0;
      *(undefined1 *)(param_1 + 0xa40) = 0;
      *(undefined1 *)(param_1 + 0xa41) = 0;
      *(undefined1 *)(param_1 + 0xa42) = 0;
      *(undefined1 *)(param_1 + 0xa43) = 0;
      *(undefined1 *)(param_1 + 0xa44) = 0;
      *(undefined1 *)(param_1 + 0xa45) = 0;
      *(undefined1 *)(param_1 + 0xa46) = 0;
      *(undefined1 *)(param_1 + 0xa47) = 0;
      *(undefined1 *)(param_1 + 0xa48) = 0;
      *(undefined1 *)(param_1 + 0xa49) = 0;
      *(undefined1 *)(param_1 + 0xa4a) = 0;
      *(undefined4 *)(param_1 + 0xa54) = 0;
      iVar19 = *(int *)(param_1 + 0xa50) + 1;
      if (iVar19 == 0) {
        iVar19 = 1;
      }
      *(int *)(param_1 + 0xa50) = iVar19;
      FUN_ram_4ff3ee10(iVar9);
      *(undefined4 *)(param_1 + 0xc84) = *(undefined4 *)(param_1 + 0xc80);
      *(undefined2 *)(param_1 + 0xc7c) = 0;
      *(undefined1 *)(param_1 + 0xc7e) = 0;
      memset(&uStack_178,0,0x98);
      uStack_178._0_2_ = CONCAT11(1,(byte)uStack_178);
      uStack_162 = 300;
      FUN_ram_4ff45158(param_1 + 0x938,&uStack_178,0x92);
    }
    FUN_ram_48055424(&cStack_1bc,param_1 + 0x9d0,param_3,uVar26);
    if (cStack_1bc != '\0') {
      *(char *)(param_1 + 0xc7c) = cStack_1bb;
      uVar28 = 0;
      if (cStack_1bb != '\0') {
        uVar28 = uStack_1ba;
      }
      *(undefined1 *)(param_1 + 0xc7d) = uVar28;
      *(undefined1 *)(param_1 + 0xc7e) = uStack_1b9;
      *(undefined4 *)(param_1 + 0xc80) = uStack_1b8;
    }
    FUN_ram_48056082(&uStack_178,param_1 + 0x9d0,param_3);
    uVar11 = *(undefined2 *)(param_1 + 0xc7d);
    iVar19 = *(int *)(param_1 + 0xc80);
    iVar9 = *(int *)(param_1 + 0xc84);
    bVar18 = *(byte *)(param_1 + 0xc7c);
    bVar6 = (byte)uStack_178;
    bVar13 = uStack_178._1_1_;
  }
  else {
    FUN_ram_4ff3ec14(piVar25 + 0x297,0xffffffff);
    piVar7 = (int *)*piVar25;
    FUN_ram_4ff3ee10(piVar25 + 0x297);
    if (piVar7 == (int *)0x0) {
LAB_ram_4810ac1a:
      uVar26 = 0;
    }
    else {
      memset(&uStack_178,0,0x134);
      uStack_7c = 0xffffffff;
      uStack_68 = 1;
      iVar9 = (**(code **)(*piVar7 + 0x15c))
                        (piVar7,4,&uStack_178,0xffffffff,1,*(code **)(*piVar7 + 0x15c));
      if ((((iVar9 == 0) || ((byte)uStack_178 == '\0')) ||
          ((uStack_178._1_1_ == '\0' || ((uStack_178._2_1_ != '\0' || (uStack_178._3_1_ != '\0')))))
          ) || (cStack_174 != '\0')) goto LAB_ram_4810ac1a;
      uVar26 = bStack_173 ^ 1;
    }
    uVar28 = *(undefined1 *)(param_1 + 0xaf4);
    FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
    *(undefined1 *)(param_1 + 0xa58) = uVar28;
    if (*(char *)(param_1 + 0xa59) == '\0') {
      *(undefined1 *)(param_1 + 0xa59) = 1;
      memset((void *)(param_1 + 0x9f8),0,0x12);
      memset((void *)(param_1 + 0xa0c),0,0x12);
      *(undefined1 *)(param_1 + 0xa30) = 0;
      *(undefined1 *)(param_1 + 0xa31) = 0;
      *(undefined1 *)(param_1 + 0xa32) = 0;
      *(undefined1 *)(param_1 + 0xa33) = 0;
      *(undefined1 *)(param_1 + 0xa34) = 0;
      *(undefined1 *)(param_1 + 0xa35) = 0;
      *(undefined1 *)(param_1 + 0xa38) = 0;
      *(undefined1 *)(param_1 + 0xa39) = 0;
      *(undefined1 *)(param_1 + 0xa3a) = 0;
      *(undefined1 *)(param_1 + 0xa3b) = 0;
      *(undefined1 *)(param_1 + 0xa3c) = 0;
      *(undefined1 *)(param_1 + 0xa3d) = 0;
      *(undefined1 *)(param_1 + 0xa40) = 0;
      *(undefined1 *)(param_1 + 0xa41) = 0;
      *(undefined1 *)(param_1 + 0xa42) = 0;
      *(undefined1 *)(param_1 + 0xa43) = 0;
      *(undefined1 *)(param_1 + 0xa44) = 0;
      *(undefined1 *)(param_1 + 0xa45) = 0;
      *(undefined1 *)(param_1 + 0xa46) = 0;
      *(undefined1 *)(param_1 + 0xa47) = 0;
      *(undefined1 *)(param_1 + 0xa48) = 0;
      *(undefined1 *)(param_1 + 0xa49) = 0;
      *(undefined1 *)(param_1 + 0xa4a) = 0;
      *(undefined4 *)(param_1 + 0xa54) = 0;
      iVar9 = *(int *)(param_1 + 0xa50) + 1;
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      *(int *)(param_1 + 0xa50) = iVar9;
    }
    FUN_ram_4ff3ee10(param_1 + 0xa7c);
    iVar9 = param_1 + 0xc64;
    cVar17 = *(char *)(param_1 + 0xaf4);
    FUN_ram_4ff3ec14(iVar9,0xffffffff);
    bVar16 = cVar17 != '\x01' || (!bVar2 || !bVar1);
    if ((bool)*(char *)(param_1 + 0xc60) == bVar16) {
      FUN_ram_4ff3ee10(iVar9);
    }
    else {
      *(bool *)(param_1 + 0xc60) = bVar16;
      *(undefined1 *)(param_1 + 0xc24) = 0;
      *(undefined1 *)(param_1 + 0xc25) = 0;
      *(undefined1 *)(param_1 + 0xc26) = 0;
      *(undefined1 *)(param_1 + 0xc27) = 0;
      *(undefined1 *)(param_1 + 0xc28) = 0;
      *(undefined1 *)(param_1 + 0xc29) = 0;
      *(undefined1 *)(param_1 + 0xc2a) = 0;
      *(undefined1 *)(param_1 + 0xc2b) = 0;
      *(undefined1 *)(param_1 + 0xc2c) = 0;
      *(undefined1 *)(param_1 + 0xc2d) = 0;
      *(undefined1 *)(param_1 + 0xc2e) = 0;
      *(undefined1 *)(param_1 + 0xc2f) = 0;
      *(undefined1 *)(param_1 + 0xc30) = 0;
      *(undefined1 *)(param_1 + 0xc31) = 0;
      *(undefined1 *)(param_1 + 0xc34) = 0;
      *(undefined1 *)(param_1 + 0xc35) = 0;
      *(undefined1 *)(param_1 + 0xc36) = 0;
      *(undefined1 *)(param_1 + 0xc37) = 0;
      *(undefined1 *)(param_1 + 0xc38) = 0;
      *(undefined1 *)(param_1 + 0xc39) = 0;
      *(undefined1 *)(param_1 + 0xc3a) = 0;
      *(undefined1 *)(param_1 + 0xc3b) = 0;
      *(undefined1 *)(param_1 + 0xc3c) = 0;
      *(undefined1 *)(param_1 + 0xc3d) = 0;
      *(undefined1 *)(param_1 + 0xc3e) = 0;
      *(undefined1 *)(param_1 + 0xc3f) = 0;
      *(undefined1 *)(param_1 + 0xc40) = 0;
      *(undefined1 *)(param_1 + 0xc41) = 0;
      *(undefined1 *)(param_1 + 0xc44) = 0;
      *(undefined1 *)(param_1 + 0xc45) = 0;
      *(undefined1 *)(param_1 + 0xc46) = 0;
      *(undefined1 *)(param_1 + 0xc47) = 0;
      *(undefined1 *)(param_1 + 0xc48) = 0;
      *(undefined1 *)(param_1 + 0xc49) = 0;
      *(undefined1 *)(param_1 + 0xc4a) = 0;
      *(undefined1 *)(param_1 + 0xc4b) = 0;
      *(undefined1 *)(param_1 + 0xc4c) = 0;
      *(undefined1 *)(param_1 + 0xc4d) = 0;
      *(undefined4 *)(param_1 + 0xc5c) = 0;
      iVar19 = *(int *)(param_1 + 0xc54) + 1;
      if (iVar19 == 0) {
        *(undefined4 *)(param_1 + 0xc54) = 1;
        iVar19 = *(int *)(param_1 + 0xc58);
      }
      else {
        *(int *)(param_1 + 0xc54) = iVar19;
        iVar19 = *(int *)(param_1 + 0xc58);
      }
      iVar19 = iVar19 + 1;
      if (iVar19 == 0) {
        iVar19 = 1;
      }
      *(int *)(param_1 + 0xc58) = iVar19;
      FUN_ram_4ff3ee10(iVar9);
      *(undefined4 *)(param_1 + 0xc78) = *(undefined4 *)(param_1 + 0xc70);
      *(undefined1 *)(param_1 + 0xc02) = 0;
      *(undefined2 *)(param_1 + 0xc6c) = 0;
      *(undefined4 *)(param_1 + 0xc74) = 0;
      memset(&uStack_178,0,0x98);
      uStack_178._0_2_ = CONCAT11(1,(byte)uStack_178);
      uStack_162 = 300;
      FUN_ram_4ff45158(param_1 + 0x938,&uStack_178,0x92);
    }
    FUN_ram_4ff3ec14(iVar9,0xffffffff);
    if ((*(char *)(param_1 + 0xc60) == '\0') && (0x31 < (uint)(param_3 - *(int *)(param_1 + 0xc5c)))
       ) {
      *(int *)(param_1 + 0xc5c) = param_3;
      iVar19 = *(int *)(param_1 + 0xc50) + 1;
      if (iVar19 == 0) {
        iVar19 = 1;
      }
      cVar17 = *(char *)(param_1 + 0xc30);
      *(int *)(param_1 + 0xc50) = iVar19;
      cVar4 = *(char *)(param_1 + 0xc40);
      if (cVar17 == '\0') {
        if (cVar4 == '\0') {
LAB_ram_4810b6fe:
          bVar13 = 0;
          bVar6 = 0;
          cVar21 = '\0';
        }
        else {
          cVar5 = *(char *)(param_1 + 0xc41);
          uVar15 = param_3 - *(int *)(param_1 + 0xc38);
          if (cVar5 == '\0') {
            bVar13 = 0;
            bVar6 = 0;
            if (1000 < uVar15) {
              bVar6 = 0;
              cVar21 = '\0';
              goto LAB_ram_4810b5e6;
            }
          }
          else {
            cVar4 = cVar5;
            if (uVar15 < 0x12d) {
              bVar6 = 2;
            }
            else {
              bVar13 = false;
              bVar6 = 0;
              if (1000 < uVar15) {
LAB_ram_4810b780:
                bVar6 = 0;
                cVar21 = '\0';
                cVar4 = cVar5;
                goto LAB_ram_4810b5e6;
              }
            }
          }
LAB_ram_4810b5e2:
          bVar13 = bVar6;
          bVar6 = 4;
          cVar21 = '\x01';
        }
      }
      else if (*(char *)(param_1 + 0xc31) == '\0') {
        cVar21 = false;
        if (cVar4 != '\0') {
          if (*(char *)(param_1 + 0xc41) != '\0') goto LAB_ram_4810b5c6;
          if ((1000 < (uint)(param_3 - *(int *)(param_1 + 0xc28))) &&
             (1000 < (uint)(param_3 - *(int *)(param_1 + 0xc38)))) goto LAB_ram_4810b6fe;
LAB_ram_4810b6f8:
          bVar6 = 0;
          goto LAB_ram_4810b5e2;
        }
        bVar13 = 0;
        bVar6 = 0;
        if ((uint)(param_3 - *(int *)(param_1 + 0xc28)) < 0x3e9) goto LAB_ram_4810b5e2;
        bVar6 = 0;
      }
      else {
        uVar15 = param_3 - *(int *)(param_1 + 0xc28);
        if (cVar4 == '\0') {
          if (uVar15 < 0x3e9) {
LAB_ram_4810b748:
            if (300 < uVar15) goto LAB_ram_4810b6f8;
LAB_ram_4810b750:
            bVar13 = 1;
            bVar6 = 4;
            cVar21 = cVar17;
          }
          else {
            cVar21 = '\0';
            bVar13 = 0;
            bVar6 = 0;
          }
        }
        else if (*(char *)(param_1 + 0xc41) == '\0') {
          if (uVar15 < 0x3e9) goto LAB_ram_4810b748;
          bVar13 = 0;
          bVar6 = 0;
          if ((uint)(param_3 - *(int *)(param_1 + 0xc38)) < 0x3e9) goto LAB_ram_4810b5e2;
          bVar6 = 0;
          cVar21 = '\0';
        }
        else {
          cVar21 = uVar15 < 0x12d;
LAB_ram_4810b5c6:
          cVar4 = cVar21;
          uVar15 = param_3 - *(int *)(param_1 + 0xc38);
          if (300 < uVar15) {
            if ((1000 < (uint)(param_3 - *(int *)(param_1 + 0xc28))) &&
               (cVar5 = cVar17, bVar13 = cVar4, 1000 < uVar15)) goto LAB_ram_4810b780;
            if ((bool)cVar4 == false) {
              bVar6 = 0;
              cVar4 = cVar17;
              goto LAB_ram_4810b5e2;
            }
            goto LAB_ram_4810b750;
          }
          if ((bool)cVar4 == false) {
            bVar6 = 2;
            cVar4 = cVar17;
            goto LAB_ram_4810b5e2;
          }
          bVar13 = 3;
          bVar6 = 4;
          cVar21 = cVar4;
        }
      }
LAB_ram_4810b5e6:
      cVar5 = *(char *)(param_1 + 0xc41);
      bVar13 = bVar13 | bVar6 | cVar5 << 4 | *(char *)(param_1 + 0xc31) << 3 | (byte)(uVar26 << 7);
      uVar28 = (undefined1)((uint)iVar19 >> 8);
      uVar12 = (undefined1)((uint)iVar19 >> 0x10);
      uVar14 = (undefined1)((uint)iVar19 >> 0x18);
      if (*(char *)(param_1 + 0xc31) == '\0') {
        if (cVar5 == '\0') {
          bVar6 = 0;
        }
        else {
          bVar6 = *(byte *)(param_1 + 0xc35) >> 2 & 0x1c;
        }
LAB_ram_4810b62c:
        *(byte *)(param_1 + 0xc4c) = bVar13;
        *(byte *)(param_1 + 0xc4d) = bVar6;
        *(undefined1 *)(param_1 + 0xc44) = 1;
        *(undefined1 *)(param_1 + 0xc45) = 0;
        *(undefined1 *)(param_1 + 0xc46) = 0;
        *(undefined1 *)(param_1 + 0xc47) = 0;
        *(char *)(param_1 + 0xc48) = (char)iVar19;
        *(undefined1 *)(param_1 + 0xc49) = uVar28;
        *(undefined1 *)(param_1 + 0xc4a) = uVar12;
        *(undefined1 *)(param_1 + 0xc4b) = uVar14;
        uStack_178._0_3_ = (uint3)(byte)uStack_178;
        FUN_ram_4ff3ee10(iVar9);
        uVar28 = 0;
      }
      else {
        bVar18 = *(byte *)(param_1 + 0xc27) & 3;
        bVar6 = bVar18;
        if (cVar5 == '\0') goto LAB_ram_4810b62c;
        bVar10 = *(byte *)(param_1 + 0xc35) >> 4 & 7;
        bVar6 = bVar10 << 2 | bVar18;
        if (((((cVar17 == '\0') || (300 < (uint)(param_3 - *(int *)(param_1 + 0xc28)))) ||
             (cVar4 == '\0')) ||
            ((300 < (uint)(param_3 - *(int *)(param_1 + 0xc38)) || (uVar26 == 0)))) ||
           (cVar21 == '\0')) goto LAB_ram_4810b62c;
        if (bVar18 == 1) {
          cVar17 = bVar10 == 3;
        }
        else {
          cVar17 = '\0';
          if (bVar18 == 2) {
            cVar17 = (bVar10 == 2) << 1;
          }
        }
        *(byte *)(param_1 + 0xc4c) = bVar13;
        *(byte *)(param_1 + 0xc4d) = bVar6;
        *(undefined1 *)(param_1 + 0xc49) = uVar28;
        *(char *)(param_1 + 0xc46) = cVar17;
        *(char *)(param_1 + 0xc48) = (char)iVar19;
        *(undefined1 *)(param_1 + 0xc4a) = uVar12;
        *(undefined1 *)(param_1 + 0xc4b) = uVar14;
        uVar28 = 1;
        *(undefined1 *)(param_1 + 0xc44) = 1;
        *(undefined1 *)(param_1 + 0xc45) = 1;
        *(undefined1 *)(param_1 + 0xc47) = 1;
        uStack_178._0_2_ = CONCAT11(1,(byte)uStack_178);
        uStack_178 = CONCAT22(CONCAT11(uStack_178._3_1_,cVar17),(undefined2)uStack_178);
        FUN_ram_4ff3ee10(iVar9);
      }
      *(byte *)(param_1 + 0xc02) = uStack_178._1_1_;
      uVar12 = 0;
      if (uStack_178._1_1_ != '\0') {
        uVar12 = uStack_178._2_1_;
      }
      *(undefined1 *)(param_1 + 0xc6c) = uVar12;
      *(undefined1 *)(param_1 + 0xc6d) = uVar28;
      *(int *)(param_1 + 0xc70) = iVar19;
      *(int *)(param_1 + 0xc74) = param_3;
    }
    else {
      FUN_ram_4ff3ee10(iVar9);
    }
    FUN_ram_4ff3ec14(iVar9,0xffffffff);
    bVar6 = *(byte *)(param_1 + 0xc60);
    bVar13 = false;
    if (((bVar6 == 0) && (bVar13 = false, *(char *)(param_1 + 0xc30) != '\0')) &&
       ((bVar13 = false, *(char *)(param_1 + 0xc31) != '\0' &&
        (((bVar13 = false, (uint)(param_3 - *(int *)(param_1 + 0xc28)) < 0x12d &&
          (bVar13 = false, *(char *)(param_1 + 0xc40) != '\0')) &&
         (bVar13 = false, *(char *)(param_1 + 0xc41) != '\0')))))) {
      bVar13 = (uint)(param_3 - *(int *)(param_1 + 0xc38)) < 0x12d;
    }
    uVar27 = *(undefined4 *)(param_1 + 0xc54);
    FUN_ram_4ff3ee10(iVar9);
    iVar9 = *(int *)(param_1 + 0xc78);
    iVar19 = *(int *)(param_1 + 0xc70);
    bVar18 = *(byte *)(param_1 + 0xc02);
    uVar11 = *(undefined2 *)(param_1 + 0xc6c);
    uStack_160 = uVar27;
  }
  uVar3 = uStack_180;
  uVar27 = uStack_1a0;
  uStack_1a4 = *(undefined4 *)(param_1 + 0x920);
  cVar17 = *(char *)(param_2 + 0x72);
  uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(byte)uVar26 & (bVar6 ^ 1));
  uStack_1a8 = CONCAT13(cVar24,(uint3)uStack_1a8);
  if (cVar17 == '\0') {
    cVar17 = *(char *)(param_1 + 0x924) != '\0';
  }
  cVar24 = *(char *)(param_2 + 0x79);
  cVar4 = *(char *)(param_1 + 0xaf4);
  if (((cVar24 != '\0') && (cVar4 != '\x01')) && (cVar24 = '\0', *(char *)(param_2 + 1) == '\f')) {
    cVar24 = (cVar4 - 2U & 0xfd) == 0;
  }
  uStack_1a0._0_2_ = CONCAT11(cVar24,cVar17);
  if ((*(char *)(param_1 + 0xa8c) == '\0') || (iVar22 = *(int *)(param_1 + 0xa94), iVar22 == 0)) {
    uVar8 = 0;
    if ((*(char *)(param_1 + 0xa98) == '\0') ||
       ((*(int *)(param_1 + 0xaa0) == 0 || (300 < (uint)(param_3 - *(int *)(param_1 + 0xaa0))))))
    goto LAB_ram_4810af1e;
LAB_ram_4810b0da:
    if (*(char *)(param_1 + 0xa99) == '\0') {
LAB_ram_4810b588:
      uVar8 = 0;
      goto LAB_ram_4810af1e;
    }
    iVar20 = *(int *)(param_1 + 0xa9c);
  }
  else if ((*(char *)(param_1 + 0xa98) == '\0') ||
          ((iVar29 = *(int *)(param_1 + 0xaa0), iVar29 == 0 || (300 < (uint)(param_3 - iVar29))))) {
    if ((300 < (uint)(param_3 - iVar22)) || (*(char *)(param_1 + 0xa8d) == '\0'))
    goto LAB_ram_4810b588;
    iVar20 = *(int *)(param_1 + 0xa90);
  }
  else {
    if (300 < (uint)(param_3 - iVar22)) goto LAB_ram_4810b0da;
    uVar8 = 0;
    if ((*(char *)(param_1 + 0xa8d) == '\0') || (*(char *)(param_1 + 0xa99) == '\0'))
    goto LAB_ram_4810af1e;
    uVar15 = *(int *)(param_1 + 0xa90) - *(int *)(param_1 + 0xa9c);
    uVar26 = (int)uVar15 >> 0x1f;
    if (100 < (int)((uVar26 ^ uVar15) - uVar26)) goto LAB_ram_4810af1e;
    iVar20 = *(int *)(param_1 + 0xa9c);
    if (-1 < iVar22 - iVar29) {
      iVar20 = *(int *)(param_1 + 0xa90);
    }
  }
  uVar8 = (undefined2)iVar20;
  uStack_1a0._3_1_ = SUB41(uVar27,3);
  uStack_1a0._0_3_ = CONCAT12(1,(undefined2)uStack_1a0);
LAB_ram_4810af1e:
  cVar24 = *(char *)(param_1 + 0xb36);
  uStack_19c = CONCAT22(*(undefined2 *)(param_2 + 0x86),uVar8);
  uStack_198 = CONCAT22(uVar11,CONCAT11(bVar13 & bVar18,iVar19 != iVar9));
  uStack_18c = 0;
  uStack_188 = 1;
  if (cVar24 == '\0') {
    cVar24 = *(char *)(param_1 + 0xaec);
  }
  uStack_17c = *(undefined4 *)(param_1 + 0xb88);
  iVar9 = param_1 + 0x938;
  uStack_180._3_1_ = SUB41(uVar3,3);
  uStack_180._0_3_ = CONCAT12(cVar24,CONCAT11(cVar4,bVar2 && bVar1));
  iStack_190 = iVar19;
  uStack_184 = uStack_160;
  uStack_178 = FUN_ram_48049bb6(iVar9,&uStack_1b0);
  if (((((uStack_178 & 0xff) != 0) && (*(char *)(param_1 + 0x98a) == '\0')) &&
      (*(char *)(param_1 + 0x98b) == '\0')) &&
     (((*(char *)(param_1 + 0x98c) == '\0' && (*(char *)(param_1 + 0x98d) == '\0')) &&
      (*(char *)(param_1 + 0x98e) == '\0')))) {
    *(int *)(param_1 + 0x998) = iVar19;
    *(undefined4 *)(param_1 + 0x99c) = 0;
    *(int *)(param_1 + 0x9a0) = iVar19;
    *(undefined4 *)(param_1 + 0x9a4) = 0;
    *(undefined4 *)(param_1 + 0x9ac) = uStack_160;
    *(undefined2 *)(param_1 + 0x938) = 0x805;
    *(undefined1 *)(param_1 + 0x994) = 1;
    *(undefined4 *)(param_1 + 0x9a8) = 1;
    FUN_ram_48049b14(iVar9);
  }
  if (uStack_178._1_1_ != '\0') {
    if (cVar23 == '\f') {
      *(int *)(param_1 + 0xc84) = iVar19;
    }
    else {
      *(int *)(param_1 + 0xc78) = iVar19;
    }
  }
  if (uStack_178._2_1_ != '\0') {
    iVar22 = FUN_ram_48105658(param_1,uStack_178._3_1_,param_3,2);
    if (iVar22 == 0) {
      *(undefined1 *)(param_1 + 0x93a) = 4;
      if (*(char *)(param_1 + 0x98d) != '\0') {
        *(undefined2 *)(param_1 + 0x950) = 0;
        *(undefined2 *)(param_1 + 0x938) = 0x1303;
        *(undefined1 *)(param_1 + 0x98d) = 0;
        *(undefined1 *)(param_1 + 0x98e) = 0;
        *(undefined1 *)(param_1 + 0x994) = 0;
        *(undefined4 *)(param_1 + 0x998) = 0;
        *(undefined4 *)(param_1 + 0x99c) = 0;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9a4) = 0;
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        *(undefined4 *)(param_1 + 0x9ac) = 0;
        *(undefined1 *)(param_1 + 0x943) = 0;
        FUN_ram_48049b14(iVar9);
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x93a) = 1;
      if (*(char *)(param_1 + 0x98d) != '\0') {
        *(undefined1 *)(param_1 + 0x98e) = 1;
        *(undefined1 *)(param_1 + 0x98d) = 0;
        *(undefined2 *)(param_1 + 0x98a) = 0;
        *(undefined1 *)(param_1 + 0x994) = 0;
        *(undefined4 *)(param_1 + 0x998) = 0;
        *(undefined4 *)(param_1 + 0x99c) = 0;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9a4) = 0;
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        *(undefined4 *)(param_1 + 0x9ac) = 0;
        *(undefined2 *)(param_1 + 0x938) = 6;
        FUN_ram_48049b14(iVar9);
      }
      if (cVar23 == '\f') {
        *(int *)(param_1 + 0xc84) = iVar19;
      }
      else {
        *(int *)(param_1 + 0xc78) = iVar19;
      }
    }
  }
  return;
}


