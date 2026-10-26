/* Firmware entry: 0x480ebb1a */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_ram_480ebb1a(uint *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 uVar7;
  byte *extraout_a1;
  undefined1 uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  byte bStack_35e;
  char cStack_35d;
  uint uStack_35c;
  char acStack_358 [4];
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  uint local_32c [2];
  byte bStack_324;
  char acStack_322 [110];
  uint uStack_2b4;
  uint local_2b0 [3];
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  uint auStack_27f [4];
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  undefined1 auStack_250 [4];
  uint auStack_24c [5];
  uint auStack_238 [20];
  uint local_1e8 [25];
  byte local_184 [4];
  undefined4 auStack_180 [79];
  byte abStack_44 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar15 = param_3 + 0x50;
  pbVar24 = local_184;
  do {
    uVar4 = param_3[1];
    uVar7 = param_3[2];
    uVar10 = param_3[3];
    *(undefined4 *)pbVar24 = *param_3;
    *(undefined4 *)(pbVar24 + 4) = uVar4;
    *(undefined4 *)(pbVar24 + 8) = uVar7;
    *(undefined4 *)(pbVar24 + 0xc) = uVar10;
    param_3 = param_3 + 4;
    pbVar24 = pbVar24 + 0x10;
  } while (param_3 != puVar15);
  *(undefined4 *)pbVar24 = *param_3;
  FUN_ram_4ff3ec14(param_2,0xffffffff);
  if ((byte)(*(char *)(param_2 + 0x128c) - 1U) < 2) {
    uVar20 = (uint)local_184[0];
    if (*(byte *)(param_2 + 0xc) == uVar20) {
      if (uVar20 == 0) {
        FUN_ram_4ff3ee10(param_2);
        FUN_ram_4805e494(local_32c,local_184);
        if ((char)local_32c[0] != '\0') {
          uVar22 = (uint)bStack_324;
          bStack_35e = 0;
          memset(local_2b0,0,300);
          uVar11 = local_32c[1];
LAB_ram_480ebd68:
          puVar13 = local_32c;
          cStack_35d = '\0';
          iVar3 = FUN_ram_480ea70a(param_4,local_2b0,&bStack_35e,&cStack_35d);
          if (iVar3 == 0) {
            if (cStack_35d == '\x02') {
              uVar8 = 0x15;
            }
            else if (cStack_35d == '\x03') {
              uVar8 = 0x16;
            }
            else {
              uVar8 = 0xe;
              if (cStack_35d != '\x01') {
                uVar8 = 0x17;
              }
            }
            if (uVar22 < 8) {
              iVar3 = uVar22 * 7;
              uVar22 = uVar22 + 1 & 0xff;
              *(undefined1 *)(iVar3 + 10 + (int)puVar13) = uVar8;
              acStack_322[iVar3 + 1] = '\0';
              acStack_322[iVar3 + 4] = bStack_35e;
              acStack_322[iVar3 + 2] = -1;
              acStack_322[iVar3 + 3] = -1;
              acStack_322[iVar3 + 5] = -1;
              acStack_322[iVar3 + 6] = -1;
            }
            local_32c[0]._0_1_ = 0;
            local_32c[1] = uVar11;
            bStack_324 = (char)uVar22;
            puVar14 = param_1;
            do {
              uVar19 = puVar13[1];
              uVar20 = puVar13[2];
              uVar11 = puVar13[3];
              uVar22 = puVar13[4];
              *puVar14 = *puVar13;
              puVar14[1] = uVar19;
              puVar14[2] = uVar20;
              puVar14[3] = uVar11;
              puVar14[4] = uVar22;
              puVar13 = puVar13 + 5;
              puVar14 = puVar14 + 5;
            } while (puVar13 != &uStack_2b4);
            *puVar14 = *puVar13;
            return param_1;
          }
          FUN_ram_4ff3ec14(param_2,0xffffffff);
          pbVar24 = local_184;
          puVar15 = (undefined4 *)(param_2 + 0xc);
          do {
            uVar4 = *(undefined4 *)(pbVar24 + 4);
            uVar7 = *(undefined4 *)(pbVar24 + 8);
            uVar10 = *(undefined4 *)(pbVar24 + 0xc);
            *puVar15 = *(undefined4 *)pbVar24;
            puVar15[1] = uVar4;
            puVar15[2] = uVar7;
            puVar15[3] = uVar10;
            pbVar24 = pbVar24 + 0x10;
            puVar15 = puVar15 + 4;
          } while (pbVar24 != (byte *)(auStack_180 + 0x4f));
          iVar3 = param_2 + 0x158;
          *puVar15 = *(undefined4 *)pbVar24;
          *(byte *)(param_2 + 0x154) = local_184[0];
          uVar11 = 0;
          pbVar24 = local_184;
          while( true ) {
            pbVar5 = pbVar24 + 4;
            if (uVar20 == uVar11) break;
            FUN_ram_4ff45158(iVar3,pbVar5,0x4d);
            uVar11 = uVar11 + 1 & 0xff;
            iVar3 = iVar3 + 0x50;
            pbVar24 = pbVar24 + 0x50;
          }
          iVar3 = *(int *)(param_2 + 0x1290) + 1;
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          *(int *)(param_2 + 0x150) = iVar3;
          *(int *)(param_2 + 0x1290) = iVar3;
          for (uVar20 = 0; uVar20 < *(byte *)(param_2 + 0x154); uVar20 = uVar20 + 1 & 0xff) {
            puVar15 = (undefined4 *)(uVar20 * 0x120 + 700 + param_2);
            pbVar24 = (byte *)(param_2 + uVar20 * 0x50 + 0x158);
            do {
              pbVar5 = pbVar24;
              if (*(char *)((int)puVar15 + 0x3a) != '\0') {
                uStack_35c = uStack_35c & 0xffff0000;
                FUN_ram_4805d88e(acStack_358,pbVar24,puVar15 + -9,uStack_35c);
                pbVar5 = extraout_a1;
                if (acStack_358[0] != '\0') {
                  *puVar15 = uStack_354;
                  puVar15[1] = uStack_350;
                  puVar15[2] = uStack_34c;
                  puVar15[3] = uStack_348;
                  puVar15[4] = uStack_344;
                  puVar15[5] = uStack_340;
                  puVar15[6] = uStack_33c;
                  puVar15[7] = uStack_338;
                  puVar15[8] = uStack_334;
                }
              }
              puVar15 = puVar15 + 0x18;
            } while (puVar15 != (undefined4 *)(param_2 + 0x3dc + uVar20 * 0x120));
          }
          *(undefined2 *)(param_2 + 0x128c) = 2;
          FUN_ram_4ff3ee10(param_2,pbVar5);
          local_32c[0]._0_1_ = 1;
          local_32c[1] = iVar3;
          puVar14 = param_1;
          do {
            uVar19 = puVar13[1];
            uVar20 = puVar13[2];
            uVar11 = puVar13[3];
            uVar22 = puVar13[4];
            *puVar14 = *puVar13;
            puVar14[1] = uVar19;
            puVar14[2] = uVar20;
            puVar14[3] = uVar11;
            puVar14[4] = uVar22;
            puVar13 = puVar13 + 5;
            puVar14 = puVar14 + 5;
          } while (puVar13 != &uStack_2b4);
          *puVar14 = *puVar13;
          return param_1;
        }
      }
      else {
        pbVar23 = local_184;
        piVar9 = (int *)(param_2 + 0x14);
        pbVar5 = (byte *)(param_2 + 0x2f4);
        uVar11 = 0;
        uVar22 = 0;
        pbVar24 = pbVar23;
        do {
          puVar13 = param_1;
          if (((*(int *)(pbVar24 + 8) != *piVar9) ||
              (bVar6 = pbVar24[0xc], *(byte *)(piVar9 + 1) != bVar6)) ||
             (*(char *)(uVar11 + 0x1288 + param_2) == '\0')) {
            FUN_ram_4ff3ee10(param_2);
            puVar17 = local_2b0;
            puVar14 = puVar17;
            do {
              *(undefined1 *)((int)puVar14 + 0x11) = 0;
              *(undefined1 *)((int)puVar14 + 0x12) = 0;
              *(undefined1 *)((int)puVar14 + 0x13) = 0xff;
              *(undefined1 *)(puVar14 + 5) = 0xff;
              *(undefined1 *)((int)puVar14 + 0x15) = 0;
              *(undefined1 *)((int)puVar14 + 0x16) = 0xff;
              *(undefined1 *)((int)puVar14 + 0x17) = 0xff;
              puVar14 = (uint *)((int)puVar14 + 7);
              puVar18 = puVar17;
            } while (auStack_27f != puVar14);
            do {
              *(undefined1 *)((int)puVar18 + 0x49) = 0;
              *(undefined1 *)((int)puVar18 + 0x4a) = 0;
              *(undefined1 *)((int)puVar18 + 0x4b) = 0xff;
              *(undefined1 *)(puVar18 + 0x13) = 0xff;
              *(undefined1 *)((int)puVar18 + 0x4d) = 0;
              *(undefined1 *)((int)puVar18 + 0x4e) = 0xff;
              *(undefined1 *)((int)puVar18 + 0x4f) = 0xff;
              puVar18 = (uint *)((int)puVar18 + 7);
            } while (puVar18 != auStack_27f);
            uStack_2a0 = 0xff;
            uStack_268 = 0xff;
            uStack_26c = 0xff00ffff;
            local_2b0[0]._0_1_ = 0;
            local_2b0[1] = 0;
            uStack_26e = 0;
            local_2b0[2] = 0xc0001;
            uStack_2a4 = CONCAT22(0xff00,CONCAT11(0xff,(char)uVar22));
            do {
              uVar19 = puVar17[1];
              uVar20 = puVar17[2];
              uVar11 = puVar17[3];
              uVar22 = puVar17[4];
              *puVar13 = *puVar17;
              puVar13[1] = uVar19;
              puVar13[2] = uVar20;
              puVar13[3] = uVar11;
              puVar13[4] = uVar22;
              puVar17 = puVar17 + 5;
              puVar13 = puVar13 + 5;
            } while (puVar17 != (uint *)(auStack_250 + 0x18));
            goto LAB_ram_480ec040;
          }
          bVar1 = *(byte *)((int)piVar9 + 5);
          bVar21 = bVar6 & 1;
          pbVar24[0xd] = bVar1;
          if (((bVar6 & 1) != 0) && ((pbVar5[2] == 0 || (*pbVar5 != bVar1)))) {
LAB_ram_480ebf84:
            FUN_ram_4ff3ee10(param_2);
            puVar17 = local_2b0;
            puVar14 = puVar17;
            do {
              *(undefined1 *)((int)puVar14 + 0x11) = 0;
              *(undefined1 *)((int)puVar14 + 0x12) = 0;
              *(undefined1 *)((int)puVar14 + 0x13) = 0xff;
              *(undefined1 *)(puVar14 + 5) = 0xff;
              *(undefined1 *)((int)puVar14 + 0x15) = 0;
              *(undefined1 *)((int)puVar14 + 0x16) = 0xff;
              *(undefined1 *)((int)puVar14 + 0x17) = 0xff;
              puVar14 = (uint *)((int)puVar14 + 7);
              puVar18 = puVar17;
            } while (puVar14 != auStack_27f);
            do {
              *(undefined1 *)((int)puVar18 + 0x49) = 0;
              *(undefined1 *)((int)puVar18 + 0x4a) = 0;
              *(undefined1 *)((int)puVar18 + 0x4b) = 0xff;
              *(undefined1 *)(puVar18 + 0x13) = 0xff;
              *(undefined1 *)((int)puVar18 + 0x4d) = 0;
              *(undefined1 *)((int)puVar18 + 0x4e) = 0xff;
              *(undefined1 *)((int)puVar18 + 0x4f) = 0xff;
              puVar18 = (uint *)((int)puVar18 + 7);
            } while (puVar18 != auStack_27f);
            uStack_2a0 = 0xff;
            uStack_268 = 0xff;
            uStack_26c = 0xff00ffff;
            local_2b0[0]._0_1_ = 0;
            local_2b0[1] = 0;
            uStack_2a4 = CONCAT31(0xff00ff,(char)uVar22);
            uStack_2a4 = CONCAT13(0xff,CONCAT12(bVar21,(undefined2)uStack_2a4));
            uStack_26e = 0;
            local_2b0[2] = 0xd0001;
            do {
              uVar19 = puVar17[1];
              uVar20 = puVar17[2];
              uVar11 = puVar17[3];
              uVar22 = puVar17[4];
              *puVar13 = *puVar17;
              puVar13[1] = uVar19;
              puVar13[2] = uVar20;
              puVar13[3] = uVar11;
              puVar13[4] = uVar22;
              puVar17 = puVar17 + 5;
              puVar13 = puVar13 + 5;
            } while (puVar17 != (uint *)(auStack_250 + 0x18));
LAB_ram_480ec040:
            *puVar13 = *puVar17;
            return param_1;
          }
          if (((bVar6 & 2) != 0) && ((pbVar5[0x62] == 0 || (pbVar5[0x60] != bVar1)))) {
            bVar21 = 2;
            goto LAB_ram_480ebf84;
          }
          if (((bVar6 & 4) != 0) && ((pbVar5[0xc2] == 0 || (pbVar5[0xc0] != bVar1)))) {
            bVar21 = 4;
            goto LAB_ram_480ebf84;
          }
          uVar11 = uVar11 + 1;
          uVar22 = uVar11 & 0xff;
          pbVar24 = pbVar24 + 0x50;
          piVar9 = piVar9 + 0x14;
          pbVar5 = pbVar5 + 0x120;
        } while (uVar22 < uVar20);
        FUN_ram_4ff3ee10(param_2);
        puVar13 = local_32c;
        FUN_ram_4805e494(puVar13,local_184);
        if ((char)local_32c[0] != '\0') {
          uVar22 = (uint)bStack_324;
          bStack_35e = 0;
          memset(local_2b0,0,300);
LAB_ram_480ebc90:
          bVar21 = pbVar23[0xc];
          bVar6 = bVar21 & 1;
          if ((bVar21 & 1) != 0) {
            uVar11 = *(uint *)(pbVar23 + 8);
            iVar3 = 0;
            puVar14 = local_2b0;
            goto LAB_ram_480ebcc0;
          }
          do {
            if ((bVar21 & 2) != 0) {
              uVar11 = *(uint *)(pbVar23 + 8);
              iVar3 = 1;
              bVar6 = 2;
              puVar14 = (uint *)(auStack_250 + 4);
              goto LAB_ram_480ebcc0;
            }
            iVar3 = 2;
            while (iVar3 != 1) {
              if ((bVar21 & 4) == 0) {
LAB_ram_480ebd54:
                pbVar23 = pbVar23 + 0x50;
                uVar11 = local_32c[1];
                if (local_184 + uVar20 * 0x50 != pbVar23) goto LAB_ram_480ebc90;
                goto LAB_ram_480ebd68;
              }
              uVar11 = *(uint *)(pbVar23 + 8);
              iVar3 = 2;
              bVar6 = 4;
              puVar14 = (uint *)(auStack_250 + 0x68);
LAB_ram_480ebcc0:
              uVar19 = puVar14[0x18];
              uVar25 = (uint)(byte)uVar19;
              uVar11 = uVar11 & 0x7ff;
              if (uVar25 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                puVar17 = puVar14;
                do {
                  uVar12 = *puVar17;
                  puVar17 = puVar17 + 1;
                  if (uVar11 <= uVar12) {
                    if (uVar16 < uVar25) {
                      if (uVar11 == puVar14[uVar16]) goto LAB_ram_480ebd4a;
                      if (0x17 < uVar25) goto LAB_ram_480ec17a;
                      uVar12 = uVar25 - uVar16 & 0xff;
                      iVar2 = -(uVar12 - 1 & 0xff);
                      FUN_ram_4ff4522c(puVar14 + iVar2 + uVar25,puVar14 + (uVar25 - 1) + iVar2,
                                       uVar12 << 2);
                      goto LAB_ram_480ebd3a;
                    }
                    break;
                  }
                  uVar16 = uVar16 + 1 & 0xff;
                } while (uVar16 != uVar25);
                if (0x17 < uVar25) {
LAB_ram_480ec17a:
                  if (uVar22 < 8) {
                    iVar3 = uVar22 * 7;
                    bStack_324 = bStack_324 + 1;
                    acStack_322[iVar3 + 1] = '\0';
                    *(undefined1 *)(iVar3 + 10 + (int)puVar13) = 0xe;
                    acStack_322[iVar3 + 4] = bVar6;
                    acStack_322[iVar3 + 2] = -1;
                    acStack_322[iVar3 + 3] = -1;
                    acStack_322[iVar3 + 5] = -1;
                    acStack_322[iVar3 + 6] = -1;
                  }
                  local_32c[0]._0_1_ = 0;
                  puVar14 = param_1;
                  do {
                    uVar19 = puVar13[1];
                    uVar20 = puVar13[2];
                    uVar11 = puVar13[3];
                    uVar22 = puVar13[4];
                    *puVar14 = *puVar13;
                    puVar14[1] = uVar19;
                    puVar14[2] = uVar20;
                    puVar14[3] = uVar11;
                    puVar14[4] = uVar22;
                    puVar13 = puVar13 + 5;
                    puVar14 = puVar14 + 5;
                  } while (puVar13 != &uStack_2b4);
                  *puVar14 = *puVar13;
                  return param_1;
                }
              }
LAB_ram_480ebd3a:
              puVar14[uVar16] = uVar11;
              *(byte *)(puVar14 + 0x18) = (byte)uVar19 + 1;
LAB_ram_480ebd4a:
              iVar3 = iVar3 + 1;
              if (iVar3 == 3) goto LAB_ram_480ebd54;
              bVar21 = pbVar23[0xc];
            }
          } while( true );
        }
      }
      puVar14 = local_32c;
      puVar13 = param_1;
      do {
        uVar19 = puVar14[1];
        uVar20 = puVar14[2];
        uVar11 = puVar14[3];
        uVar22 = puVar14[4];
        *puVar13 = *puVar14;
        puVar13[1] = uVar19;
        puVar13[2] = uVar20;
        puVar13[3] = uVar11;
        puVar13[4] = uVar22;
        puVar14 = puVar14 + 5;
        puVar13 = puVar13 + 5;
      } while (puVar14 != &uStack_2b4);
      *puVar13 = *puVar14;
    }
    else {
      FUN_ram_4ff3ee10(param_2);
      puVar14 = local_2b0;
      puVar13 = puVar14;
      do {
        *(undefined1 *)((int)puVar13 + 0x11) = 0;
        *(undefined1 *)((int)puVar13 + 0x12) = 0;
        *(undefined1 *)((int)puVar13 + 0x13) = 0xff;
        *(undefined1 *)(puVar13 + 5) = 0xff;
        *(undefined1 *)((int)puVar13 + 0x15) = 0;
        *(undefined1 *)((int)puVar13 + 0x16) = 0xff;
        *(undefined1 *)((int)puVar13 + 0x17) = 0xff;
        puVar13 = (uint *)((int)puVar13 + 7);
        puVar17 = puVar14;
      } while (puVar13 != auStack_27f);
      do {
        *(undefined1 *)((int)puVar17 + 0x49) = 0;
        *(undefined1 *)((int)puVar17 + 0x4a) = 0;
        *(undefined1 *)((int)puVar17 + 0x4b) = 0xff;
        *(undefined1 *)(puVar17 + 0x13) = 0xff;
        *(undefined1 *)((int)puVar17 + 0x4d) = 0;
        *(undefined1 *)((int)puVar17 + 0x4e) = 0xff;
        *(undefined1 *)((int)puVar17 + 0x4f) = 0xff;
        puVar17 = (uint *)((int)puVar17 + 7);
      } while (puVar17 != auStack_27f);
      uStack_2a0 = 0xff;
      uStack_268 = 0xff;
      uStack_2a4 = 0xff00ffff;
      uStack_26c = 0xff00ffff;
      local_2b0[0]._0_1_ = 0;
      local_2b0[1] = 0;
      uStack_26e = 0;
      local_2b0[2] = 0xc0001;
      puVar13 = param_1;
      do {
        uVar19 = puVar14[1];
        uVar20 = puVar14[2];
        uVar11 = puVar14[3];
        uVar22 = puVar14[4];
        *puVar13 = *puVar14;
        puVar13[1] = uVar19;
        puVar13[2] = uVar20;
        puVar13[3] = uVar11;
        puVar13[4] = uVar22;
        puVar14 = puVar14 + 5;
        puVar13 = puVar13 + 5;
      } while (puVar14 != (uint *)(auStack_250 + 0x18));
      *puVar13 = *puVar14;
    }
  }
  else {
    FUN_ram_4ff3ee10(param_2);
    param_1[3] = 0xff00ffff;
    *(undefined1 *)param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 4) = 0xff;
    puVar13 = param_1;
    do {
      *(undefined1 *)((int)puVar13 + 0x11) = 0;
      *(undefined1 *)((int)puVar13 + 0x12) = 0;
      *(undefined1 *)((int)puVar13 + 0x13) = 0xff;
      *(undefined1 *)(puVar13 + 5) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x15) = 0;
      *(undefined1 *)((int)puVar13 + 0x16) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x17) = 0xff;
      puVar13 = (uint *)((int)puVar13 + 7);
    } while ((uint *)((int)param_1 + 0x31) != puVar13);
    param_1[0x11] = 0xff00ffff;
    *(undefined2 *)((int)param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    puVar13 = param_1;
    do {
      *(undefined1 *)((int)puVar13 + 0x49) = 0;
      *(undefined1 *)((int)puVar13 + 0x4a) = 0;
      *(undefined1 *)((int)puVar13 + 0x4b) = 0xff;
      *(undefined1 *)(puVar13 + 0x13) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x4d) = 0;
      *(undefined1 *)((int)puVar13 + 0x4e) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x4f) = 0xff;
      puVar13 = (uint *)((int)puVar13 + 7);
    } while (puVar13 != (uint *)((int)param_1 + 0x31));
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined2 *)((int)param_1 + 10) = 0x10;
  }
  return param_1;
}


