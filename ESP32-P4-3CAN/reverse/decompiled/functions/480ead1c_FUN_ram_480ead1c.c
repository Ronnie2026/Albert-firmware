/* Firmware entry: 0x480ead1c */

undefined8 FUN_ram_480ead1c(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  byte bVar14;
  undefined4 uVar15;
  int iVar16;
  byte bVar17;
  undefined4 *puVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  byte bVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined4 *puVar38;
  int iVar39;
  undefined1 uStack_3b2;
  char cStack_3b1;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  int local_398 [2];
  undefined2 auStack_390 [2];
  undefined4 auStack_38c [10];
  undefined1 uStack_364;
  undefined1 uStack_363;
  undefined1 uStack_362;
  undefined1 uStack_361;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined1 uStack_35c;
  undefined1 uStack_35b;
  undefined2 uStack_35a;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  byte bStack_34f;
  undefined2 uStack_34e;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined1 uStack_2eb;
  undefined1 uStack_2ea;
  undefined1 uStack_2e9;
  undefined1 uStack_2e8;
  undefined1 uStack_2e7;
  undefined1 uStack_2e6;
  undefined1 uStack_2e5;
  undefined1 uStack_2e4;
  undefined1 uStack_2e3;
  undefined2 uStack_2e2;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 uStack_2d8;
  byte bStack_2d7;
  undefined2 uStack_2d6;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined2 uStack_2a8;
  undefined1 uStack_2a6;
  undefined1 auStack_2a4 [100];
  undefined1 auStack_240 [100];
  undefined1 auStack_1dc [100];
  undefined4 local_178 [84];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_3 + 0x9880) = param_1;
  *(undefined1 **)(param_3 + 0x987c) = &LAB_ram_4805f4ec;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  bVar4 = *(byte *)(param_1 + 0x128c) & 0xfd;
  if (((*(byte *)(param_1 + 0x128c) & 0xfd) == 0) && (*(int *)(param_1 + 0x150) != 0)) {
    if (*(int *)(param_1 + 0x150) == param_2) {
      puVar38 = local_178;
      puVar25 = (undefined4 *)(param_1 + 0x150);
      do {
        puVar24 = puVar25;
        puVar18 = puVar38;
        uVar7 = puVar24[1];
        uVar11 = puVar24[2];
        uVar15 = puVar24[3];
        *puVar18 = *puVar24;
        puVar18[1] = uVar7;
        puVar18[2] = uVar11;
        puVar18[3] = uVar15;
        puVar25 = puVar24 + 4;
        puVar38 = puVar18 + 4;
      } while (puVar25 != (undefined4 *)(param_1 + 0x290));
      uVar7 = puVar24[5];
      puVar18[4] = *puVar25;
      puVar18[5] = uVar7;
      bVar29 = *(byte *)(param_1 + 0x154);
      FUN_ram_4ff3ee10(param_1);
      uStack_3b2 = 0;
      memset(auStack_2a4,0,300);
      if (bVar29 != 0) {
        puVar38 = local_178;
        puVar25 = puVar38 + (uint)bVar29 * 0x14;
        do {
          bVar29 = *(byte *)(puVar38 + 4);
          if (((((bVar29 & 1) != 0) &&
               (iVar8 = FUN_ram_4804f284(auStack_2a4,puVar38[3]), iVar8 == 0)) ||
              (((bVar29 & 2) != 0 && (iVar8 = FUN_ram_4804f284(auStack_240,puVar38[3]), iVar8 == 0))
              )) || (((bVar29 & 4) != 0 &&
                     (iVar8 = FUN_ram_4804f284(auStack_1dc,puVar38[3]), iVar8 == 0)))) {
            uVar22 = 0xe;
            param_2 = 0;
            goto LAB_ram_480ead78;
          }
          puVar38 = puVar38 + 0x14;
        } while (puVar25 != puVar38);
      }
      cStack_3b1 = '\0';
      iVar8 = FUN_ram_480ea70a(param_3,auStack_2a4,&uStack_3b2,&cStack_3b1);
      if (iVar8 == 0) {
        uVar22 = 0x15;
        if (((cStack_3b1 != '\x02') && (uVar22 = 0x16, cStack_3b1 != '\x03')) &&
           (uVar22 = 0xe, cStack_3b1 != '\x01')) {
          uVar22 = 0x17;
        }
        param_2 = 0;
      }
      else {
        uVar7 = FUN_ram_48025ba6();
        FUN_ram_4ff3ec14(param_1,0xffffffff);
        *(undefined1 *)(param_1 + 0x1298) = 0;
        iVar8 = param_1 + 0x718;
        do {
          uStack_2eb = 0;
          uStack_2ea = 0;
          uStack_2e9 = 0;
          uStack_2e8 = 0;
          uStack_2e7 = 0;
          uStack_2e6 = 0;
          uStack_2e5 = 0;
          uStack_2e4 = 0;
          local_398[0]._0_2_ = 0;
          local_398[1] = 0;
          auStack_390[0] = 0x500;
          auStack_38c[0] = 0;
          auStack_38c[1] = 8;
          auStack_38c[2] = 0;
          auStack_38c[3] = 0;
          auStack_38c[4] = 0;
          auStack_38c[5] = 0;
          uStack_363 = 0;
          uStack_362 = 0;
          uStack_361 = 0;
          uStack_360 = 0;
          uStack_35f = 0;
          uStack_35e = 0;
          uStack_35d = 0;
          uStack_35c = 0;
          auStack_38c[6] = 0x10000;
          auStack_38c[7] = 0;
          auStack_38c[8] = 0;
          auStack_38c[9] = 0;
          uStack_364 = 8;
          uStack_35b = 0;
          uStack_35a = 0;
          uStack_358 = 0;
          bStack_34f = bStack_34f & 0xfc;
          uStack_354 = 0;
          uStack_350 = 0;
          uStack_34e = 1;
          uStack_34c = 0;
          uStack_348 = 0;
          uStack_344 = 0;
          uStack_340 = 0xffffffff;
          uStack_33c = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          uStack_328 = 0;
          uStack_324 = 0;
          uStack_320 = 0;
          uStack_31c = 0;
          uStack_318 = 0;
          uStack_314 = 0;
          uStack_310 = 0;
          uStack_30c = 0xff;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2ec = 8;
          uStack_2e3 = 0;
          bStack_2d7 = bStack_2d7 & 0xfc;
          uStack_2e2 = 0;
          uStack_2e0 = 0;
          uStack_2dc = 0;
          uStack_2d8 = 0;
          uStack_2d6 = 1;
          uStack_2d4 = 0;
          uStack_2d0 = 0;
          uStack_2cc = 0;
          uStack_2c8 = 0;
          uStack_2c4 = 0;
          uStack_2c0 = 0;
          uStack_2bc = 0;
          uStack_2b8 = 0;
          uStack_2b4 = 0;
          uStack_2b0 = 0;
          uStack_2ac = 0;
          uStack_2a8 = 0;
          uStack_2a6 = 0;
          iVar8 = FUN_ram_4ff45158(iVar8,local_398,0xf3);
          iVar8 = iVar8 + 0xf4;
        } while (iVar8 != param_1 + 0x1288);
        if (*(char *)(param_1 + 0x154) != '\0') {
          uVar28 = 0;
          iVar39 = 0;
          iVar37 = 0;
          uVar31 = 0xff;
          iVar8 = param_1;
LAB_ram_480eb036:
          bVar29 = *(byte *)(iVar8 + 0x160);
          piVar26 = (int *)(param_1 + 0x298 + iVar37);
          bVar4 = bVar29 & 1;
          if ((bVar29 & 1) == 0) {
            iVar16 = 0x60;
            iVar12 = 1;
            goto joined_r0x480eb0d4;
          }
          uVar5 = (uint)*(byte *)(param_1 + 0x1298);
          iVar12 = 0;
          iVar16 = 0;
          if (0xb < uVar5) {
            piVar26 = piVar26 + 0x18;
            iVar16 = 0x60;
            goto LAB_ram_480eb32e;
          }
LAB_ram_480eb058:
          *(char *)(param_1 + 0x1298) = (char)uVar5 + '\x01';
          iVar19 = uVar5 * 0xf4 + param_1;
          *(char *)(iVar19 + 0x718) = (char)uVar28;
          *(byte *)(iVar19 + 0x719) = bVar4;
          iVar34 = *(int *)(iVar8 + 0x15c);
          *(int *)(iVar19 + 0x71c) = iVar34;
          bVar6 = *(byte *)(iVar8 + 0x161);
          *(undefined1 *)(iVar19 + 0x721) = 0;
          *(byte *)(iVar19 + 0x720) = bVar6;
          if ((((*(char *)(iVar8 + 0x19c) != '\0') && (bVar4 == 1)) && (iVar34 == 0x3fd)) &&
             ((bVar6 == 8 && ((*(byte *)(iVar8 + 0x16a) & *(byte *)(iVar8 + 0x162) & 7) == 0)))) {
            cVar1 = *(char *)((int)piVar26 + 0x5e);
            *(undefined4 *)(iVar19 + 0x800) = uVar7;
            uVar31 = uVar5;
            if (cVar1 != '\0') goto LAB_ram_480eb0bc;
            iVar12 = iVar12 + 1;
            goto LAB_ram_480eb0d2;
          }
LAB_ram_480eb0a4:
          cVar1 = *(char *)((int)piVar26 + 0x5e);
          *(undefined4 *)(uVar5 * 0xf4 + param_1 + 0x800) = uVar7;
          if (cVar1 == '\0') goto LAB_ram_480eb0c4;
LAB_ram_480eb0bc:
          do {
            if (((*(byte *)(piVar26 + 0x17) == bVar6) && (*(char *)(iVar8 + 0x158) != '\0')) &&
               ((bVar6 < 9 &&
                (((*piVar26 == iVar34 && (*(byte *)(piVar26 + 1) == bVar6)) &&
                 ((bVar29 & *(byte *)((int)piVar26 + 0xd)) != 0)))))) {
              iVar19 = iVar8;
              bVar4 = 0;
              do {
                iVar34 = iVar19 + iVar16;
                if (bVar4 == bVar6) {
                  iVar21 = uVar5 * 0xf4 + param_1;
                  *(undefined1 *)(iVar21 + 0x809) = 1;
                  uVar22 = *(undefined1 *)((int)piVar26 + 0x49);
                  uVar2 = *(undefined1 *)((int)piVar26 + 0x4a);
                  uVar3 = *(undefined1 *)((int)piVar26 + 0x4b);
                  iVar19 = piVar26[0x13];
                  *(char *)(iVar21 + 0x7f4) = (char)piVar26[0x12];
                  *(undefined1 *)(iVar21 + 0x7f5) = uVar22;
                  *(undefined1 *)(iVar21 + 0x7f6) = uVar2;
                  *(undefined1 *)(iVar21 + 0x7f7) = uVar3;
                  *(char *)(iVar21 + 0x7f8) = (char)iVar19;
                  *(int *)(iVar21 + 0x7f0) = piVar26[0x14];
                  *(int *)(iVar21 + 0x7fc) = piVar26[0x15];
                  iVar33 = piVar26[1];
                  iVar32 = piVar26[2];
                  iVar34 = piVar26[3];
                  iVar36 = piVar26[4];
                  iVar35 = piVar26[5];
                  iVar19 = piVar26[6];
                  iVar30 = piVar26[7];
                  iVar10 = piVar26[8];
                  *(int *)(iVar21 + 0x724) = *piVar26;
                  *(int *)(iVar21 + 0x728) = iVar33;
                  *(int *)(iVar21 + 0x72c) = iVar32;
                  *(int *)(iVar21 + 0x730) = iVar34;
                  *(int *)(iVar21 + 0x734) = iVar36;
                  *(int *)(iVar21 + 0x738) = iVar35;
                  *(int *)(iVar21 + 0x73c) = iVar19;
                  *(int *)(iVar21 + 0x740) = iVar30;
                  *(int *)(iVar21 + 0x744) = iVar10;
                  iVar10 = piVar26[0x11];
                  iVar33 = piVar26[10];
                  iVar32 = piVar26[0xb];
                  iVar34 = piVar26[0xc];
                  iVar36 = piVar26[0xd];
                  iVar35 = piVar26[0xe];
                  iVar19 = piVar26[0xf];
                  iVar30 = piVar26[0x10];
                  *(int *)(iVar21 + 0x748) = piVar26[9];
                  *(int *)(iVar21 + 0x74c) = iVar33;
                  *(int *)(iVar21 + 0x750) = iVar32;
                  *(int *)(iVar21 + 0x754) = iVar34;
                  *(int *)(iVar21 + 0x758) = iVar36;
                  *(int *)(iVar21 + 0x75c) = iVar35;
                  *(int *)(iVar21 + 0x760) = iVar19;
                  *(int *)(iVar21 + 0x764) = iVar30;
                  *(int *)(iVar21 + 0x768) = iVar10;
                  *(int *)(iVar21 + 0x778) = piVar26[0x16];
                  break;
                }
                pbVar9 = (byte *)(iVar19 + 0x16a);
                pbVar20 = (byte *)(iVar19 + 0x162);
                iVar19 = iVar19 + 1;
                bVar4 = bVar4 + 1;
              } while (((*(byte *)(iVar34 + iVar39 + 0x29d) ^ *pbVar9) & *pbVar20) == 0);
            }
LAB_ram_480eb0c4:
            uVar5 = uVar31;
            iVar12 = iVar12 + 1;
            uVar31 = uVar5;
            if (iVar12 == 3) {
LAB_ram_480eb13a:
              uVar22 = (undefined1)uVar31;
              uVar5 = (uint)*(byte *)(param_1 + 0x154);
              uVar28 = uVar28 + 1 & 0xff;
              iVar8 = iVar8 + 0x50;
              iVar37 = iVar37 + 0x120;
              iVar39 = iVar39 + 0xd0;
              if (uVar28 < uVar5) goto LAB_ram_480eb036;
              memset(local_398,0,0x60);
              if (uVar5 != 0) {
                pbVar20 = (byte *)(param_1 + 0x162);
                pbVar9 = pbVar20 + uVar5 * 0x50;
                uVar31 = 0;
                do {
                  uVar28 = uVar31;
                  if (pbVar20[0x3a] != 0) {
                    uStack_3b0 = *(int *)(pbVar20 + -6);
                    uStack_3a8 = DAT_ram_482230b0;
                    uStack_3a4 = DAT_ram_482230b4;
                    uStack_3a0 = DAT_ram_482230b8;
                    uStack_39c = DAT_ram_482230bc;
                    uStack_3ac = CONCAT22((short)((uint)DAT_ram_482230ac >> 0x10),
                                          *(undefined2 *)(pbVar20 + -2));
                    bVar29 = pbVar20[0x27];
                    bVar6 = pbVar20[0x30];
                    puVar38 = &uStack_3b0;
                    bVar4 = 7;
                    if ((uStack_3b0 != 0x3fd) && (bVar4 = 0, uStack_3b0 == 0x3c2)) {
                      bVar4 = 3;
                    }
                    bVar14 = 0;
                    pbVar13 = pbVar20;
                    while( true ) {
                      bVar23 = pbVar13[0x10];
                      if ((bVar29 != 0) && (pbVar20[0x28] == bVar14)) {
                        uVar28 = (uint)pbVar20[0x2a];
                        bVar17 = 0;
                        if (((uVar28 - 1 & 0xff) < 8) && (pbVar20[0x29] + uVar28 < 9)) {
                          if (uVar28 == 8) {
                            uVar28 = 0xff;
                          }
                          else {
                            uVar28 = (1 << (uVar28 & 0x1f)) - 1U & 0xffff;
                          }
                          bVar17 = (byte)(uVar28 << (pbVar20[0x29] & 0x1f));
                        }
                        bVar23 = bVar23 | bVar17;
                      }
                      if ((bVar6 != 0) && (pbVar20[0x32] == bVar14)) {
                        bVar23 = 0xff;
                      }
                      bVar17 = pbVar13[8];
                      bVar4 = ~bVar23 & *pbVar13 & bVar4;
                      bVar14 = bVar14 + 1;
                      *(byte *)((int)puVar38 + 6) = bVar4;
                      *(byte *)((int)puVar38 + 0xe) = bVar17 & bVar4;
                      pbVar13 = pbVar13 + 1;
                      puVar38 = (undefined4 *)((int)puVar38 + 1);
                      if (bVar14 == 8) break;
                      bVar4 = 0;
                    }
                    local_398[uVar31 * 6] = uStack_3b0;
                    *(undefined4 *)(auStack_390 + uVar31 * 0xc + -2) = uStack_3ac;
                    *(undefined4 *)(auStack_390 + uVar31 * 0xc) = uStack_3a8;
                    uVar28 = uVar31 + 1 & 0xff;
                    auStack_38c[uVar31 * 6] = uStack_3a4;
                    auStack_38c[uVar31 * 6 + 1] = uStack_3a0;
                    *(undefined2 *)(auStack_38c + uVar31 * 6 + 2) = (undefined2)uStack_39c;
                  }
                  pbVar20 = pbVar20 + 0x50;
                  uVar31 = uVar28;
                } while (pbVar9 != pbVar20);
                FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
                if (uVar28 < 5) {
                  DAT_ram_4ff4b934 = (byte)uVar28;
                  if (uVar28 != 0) {
                    piVar26 = local_398;
                    piVar27 = &DAT_ram_4ff4b8d4;
                    bVar4 = 0;
                    do {
                      iVar8 = piVar26[5];
                      iVar37 = piVar26[1];
                      iVar12 = piVar26[2];
                      iVar16 = piVar26[3];
                      iVar39 = piVar26[4];
                      *piVar27 = *piVar26;
                      piVar27[1] = iVar37;
                      piVar27[2] = iVar12;
                      piVar27[3] = iVar16;
                      piVar27[4] = iVar39;
                      *(short *)(piVar27 + 5) = (short)iVar8;
                      bVar4 = bVar4 + 1;
                      piVar26 = piVar26 + 6;
                      piVar27 = piVar27 + 6;
                    } while (bVar4 < DAT_ram_4ff4b934);
                  }
                }
                else {
                  DAT_ram_4ff4b934 = 0;
                }
                goto LAB_ram_480eb2c0;
              }
              goto LAB_ram_480eb504;
            }
LAB_ram_480eb0d2:
            iVar16 = iVar16 + 0x60;
            uVar31 = uVar5;
joined_r0x480eb0d4:
            while (piVar26 = piVar26 + 0x18, iVar12 == 1) {
LAB_ram_480eb32e:
              bVar29 = *(byte *)(iVar8 + 0x160);
              if ((bVar29 & 2) != 0) {
                uVar5 = (uint)*(byte *)(param_1 + 0x1298);
                if (uVar5 < 0xc) {
                  iVar12 = 1;
                  bVar4 = 2;
                  goto LAB_ram_480eb058;
                }
                piVar26 = piVar26 + 0x18;
                iVar16 = iVar16 + 0x60;
                break;
              }
              iVar16 = iVar16 + 0x60;
              iVar12 = 2;
            }
            bVar29 = *(byte *)(iVar8 + 0x160);
            if ((bVar29 & 4) == 0) goto LAB_ram_480eb13a;
            uVar5 = (uint)*(byte *)(param_1 + 0x1298);
            if (0xb < uVar5) goto LAB_ram_480eb13a;
            *(byte *)(param_1 + 0x1298) = *(byte *)(param_1 + 0x1298) + 1;
            iVar12 = uVar5 * 0xf4 + param_1;
            *(char *)(iVar12 + 0x718) = (char)uVar28;
            *(undefined1 *)(iVar12 + 0x719) = 4;
            iVar34 = *(int *)(iVar8 + 0x15c);
            *(int *)(iVar12 + 0x71c) = iVar34;
            bVar6 = *(byte *)(iVar8 + 0x161);
            *(undefined1 *)(iVar12 + 0x721) = 0;
            *(byte *)(iVar12 + 0x720) = bVar6;
            if (*(char *)(iVar8 + 0x19c) == '\0') goto LAB_ram_480eb364;
            cVar1 = *(char *)((int)piVar26 + 0x5e);
            *(undefined4 *)(iVar12 + 0x800) = uVar7;
            if (cVar1 == '\0') goto LAB_ram_480eb13a;
            iVar12 = 2;
          } while( true );
        }
        memset(local_398,0,0x60);
        uVar22 = 0xff;
LAB_ram_480eb504:
        FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
        DAT_ram_4ff4b934 = 0;
LAB_ram_480eb2c0:
        bVar4 = 1;
        DAT_ram_4ff4b935 = 1;
        fence();
        fence();
        DAT_ram_4ff4b8d0 = DAT_ram_4ff4b934 != 0;
        DAT_ram_4ff4b8d1 = uVar22;
        FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
        *(undefined4 *)(param_1 + 0x1294) = uVar7;
        *(undefined2 *)(param_1 + 0x128c) = 3;
        FUN_ram_4ff3ee10(param_1);
        uVar22 = 0;
      }
    }
    else {
      FUN_ram_4ff3ee10(param_1);
      uVar22 = 0xf;
      param_2 = *(int *)(param_1 + 0x150);
    }
  }
  else {
    FUN_ram_4ff3ee10(param_1);
    bVar4 = 0;
    uVar22 = 0x10;
    param_2 = 0;
  }
LAB_ram_480ead78:
  uStack_3b0._0_2_ = CONCAT11(uVar22,bVar4);
  return CONCAT44(param_2,uStack_3b0);
LAB_ram_480eb364:
  iVar12 = 2;
  goto LAB_ram_480eb0a4;
}


