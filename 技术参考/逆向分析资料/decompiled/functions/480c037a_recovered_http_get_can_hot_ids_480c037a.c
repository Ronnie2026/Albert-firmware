/* Firmware entry: 0x480c037a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_can_hot_ids_480c037a(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  size_t sVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  char *__s;
  ushort *puVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  undefined4 *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  ushort *puVar29;
  char *pcVar30;
  undefined4 uVar31;
  ushort *puVar32;
  int *piVar33;
  ushort *puVar34;
  short sVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int iStack_278;
  int **ppiStack_250;
  int iStack_24c;
  byte *pbStack_248;
  byte bStack_235;
  int *piStack_234;
  char acStack_230 [4];
  undefined1 uStack_22c;
  int **ppiStack_228;
  int iStack_224;
  byte *pbStack_220;
  undefined1 auStack_21c [16];
  undefined1 auStack_20c [16];
  int iStack_1fc;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined4 local_1c0 [2];
  int aiStack_1b8 [10];
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  uint auStack_178 [24];
  undefined1 auStack_118 [4];
  uint auStack_114 [25];
  uint local_b0 [31];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de11 != '\0') {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"can_hot_ids_download_busy\"}");
    return;
  }
  uVar7 = FUN_ram_48025ba6();
  uVar37 = FUN_ram_4ff21a0a();
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  aiStack_1b8[0] = 0;
  aiStack_1b8[1] = 0;
  aiStack_1b8[2] = 0;
  aiStack_1b8[3] = 0;
  aiStack_1b8[4] = 0;
  aiStack_1b8[5] = 0;
  aiStack_1b8[6] = 0;
  aiStack_1b8[7] = 0;
  aiStack_1b8[8] = 0;
  FUN_ram_4802a8a8(&puStack_1ec,"controller");
  iVar21 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar21 + 0x1cc4) != 0) {
    puVar5 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar27 = 0;
    do {
      uVar27 = uVar27 + 1;
      iVar8 = FUN_ram_4802b18e(&puStack_1ec,*puVar5);
      if (iVar8 != 0) {
        FUN_ram_4802a8a8(&local_17c,"controller");
        FUN_ram_4806562c(auStack_21c,&DAT_ram_4ff5cb9c,&local_17c);
        FUN_ram_4802a59e(&local_17c);
        goto LAB_ram_480c0454;
      }
      puVar5 = puVar5 + 2;
    } while (uVar27 < *(uint *)(iVar21 + 0x1cc4));
  }
  FUN_ram_4802a8a8(auStack_21c,&DAT_ram_481df390);
LAB_ram_480c0454:
  FUN_ram_4802a59e(&puStack_1ec);
  iVar21 = FUN_ram_4802b18e(auStack_21c,"0");
  if (((iVar21 == 0) && (iVar21 = FUN_ram_4802b18e(auStack_21c,"1"), iVar21 == 0)) &&
     (iVar21 = FUN_ram_4802b18e(auStack_21c,"2"), iVar21 == 0)) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                     "{\"ok\":false,\"error\":\"invalid_can_controller\"}");
  }
  else {
    iVar8 = FUN_ram_4802b91c(auStack_21c);
    iVar21 = DAT_ram_4ff6de14;
    bStack_235 = 0xff;
    if (iVar8 == 0) {
      pcVar30 = "";
      iVar8 = 0;
    }
    else if (iVar8 == 1) {
      pcVar30 = "\x01";
    }
    else {
      if (iVar8 != 2) {
        FUN_ram_48066698(&DAT_ram_4ff5cb9c,400,"application/json",
                         "{\"ok\":false,\"error\":\"invalid_can_controller\"}",0x2d);
        goto LAB_ram_480c04b4;
      }
      pcVar30 = "\x02";
    }
    bStack_235 = (byte)iVar8;
    if (DAT_ram_4ff6df2c == (int *)0x0) {
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                       "{\"ok\":false,\"error\":\"can_driver_unavailable\"}");
    }
    else {
      if (DAT_ram_4ff6de14 != 0) {
        piStack_234 = (int *)(DAT_ram_4ff6de14 + 0x6000);
        uVar27 = 0x800;
        iVar8 = 0;
        do {
          uVar17 = 0x800 - (uVar27 & 0xffff) & 0xffff;
          if (uVar27 < 0x40) {
            iVar9 = (**(code **)(*DAT_ram_4ff6df2c + 0x1c))
                              (DAT_ram_4ff6df2c,pcVar30[0x10],uVar17,uVar27 & 0xffff,
                               (int)piStack_234 + iVar8);
            if (iVar9 == 0) {
LAB_ram_480c0602:
              pcVar30 = "{\"ok\":false,\"error\":\"can_id_counters_unavailable\"}";
              goto LAB_ram_480c0612;
            }
          }
          else {
            iVar9 = (**(code **)(*DAT_ram_4ff6df2c + 0x1c))
                              (DAT_ram_4ff6df2c,pcVar30[0x10],uVar17,0x40,(int)piStack_234 + iVar8,
                               0x3f,*(code **)(*DAT_ram_4ff6df2c + 0x1c));
            if (iVar9 == 0) goto LAB_ram_480c0602;
            if (uVar27 == 0x40) goto LAB_ram_480c0644;
          }
          uVar27 = uVar27 - 0x40;
          iVar8 = iVar8 + 0x100;
        } while( true );
      }
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                       "{\"ok\":false,\"error\":\"can_hot_ids_buffer_unavailable\"}");
    }
  }
  goto LAB_ram_480c04b4;
LAB_ram_480c0d02:
  *puVar18 = uVar2;
LAB_ram_480c0d40:
  puVar32 = puVar32 + 1;
  piVar33 = piStack_234;
  if (puVar34 == puVar32) goto LAB_ram_480c0e96;
  goto LAB_ram_480c0c8a;
LAB_ram_480c0e96:
  if (puVar29 != puVar34) {
    do {
      uVar2 = *puVar34;
      uVar26 = (uint)uVar2;
      uVar14 = piStack_234[uVar26] - *(int *)(((uint)bStack_235 * 0x800 + uVar26) * 4 + iVar21);
      puVar32 = puVar34;
      while( true ) {
        uVar20 = (uint)puVar32[-1];
        bVar4 = uVar26 < uVar20;
        uVar20 = piStack_234[uVar20] - *(int *)(((uint)bStack_235 * 0x800 + uVar20) * 4 + iVar21);
        if (uVar14 != uVar20) {
          bVar4 = uVar20 < uVar14;
        }
        if (!bVar4) break;
        *puVar32 = puVar32[-1];
        puVar32 = puVar32 + -1;
      }
      *puVar32 = uVar2;
      puVar34 = puVar34 + 1;
    } while (puVar29 != puVar34);
  }
  goto LAB_ram_480c067c;
LAB_ram_480c0644:
  iVar8 = FUN_ram_48025ba6();
  piVar33 = piStack_234;
  uVar27 = (uint)bStack_235;
  bVar1 = (&DAT_ram_4ff6de18)[uVar27];
  if ((bVar1 ^ 1) == 0) {
    iVar12 = iVar21 + 0x8000;
    iStack_278 = iVar8 - *(int *)(&DAT_ram_4ff5c924 + uVar27 * 4);
    if (iVar8 == *(int *)(&DAT_ram_4ff5c924 + uVar27 * 4)) {
      uVar17 = 0;
      uVar27 = 0;
      iVar25 = 0;
    }
    else {
      piVar16 = (int *)(iVar21 + uVar27 * 0x2000);
      uVar17 = 0;
      uVar27 = 0;
      iVar25 = 0;
      piVar13 = piStack_234;
      sVar19 = 0;
      do {
        iVar24 = uVar17 * 2;
        uVar26 = (*piVar13 - *piVar16) + uVar27;
        sVar35 = sVar19 + 1;
        if (*piVar13 != *piVar16) {
          uVar17 = uVar17 + 1 & 0xffff;
          *(short *)(iVar12 + iVar24) = sVar19;
          iVar25 = iVar25 + (uint)(uVar26 < uVar27);
          uVar27 = uVar26;
        }
        piVar13 = piVar13 + 1;
        piVar16 = piVar16 + 1;
        sVar19 = sVar35;
      } while (sVar35 != 0x800);
      uVar26 = uVar17 * 2;
      if (uVar17 != 0) {
        puVar29 = (ushort *)(iVar12 + uVar26);
        iVar24 = __clzsi2((int)uVar26 >> 1);
        ppiStack_250 = &piStack_234;
        pbStack_248 = &bStack_235;
        iStack_224 = iVar21;
        iStack_24c = iVar21;
        ppiStack_228 = ppiStack_250;
        pbStack_220 = pbStack_248;
        FUN_ram_48035bd0(iVar12,puVar29,(0x1f - iVar24) * 2,&ppiStack_250);
        puVar32 = (ushort *)(iVar21 + 0x8002);
        if (0x20 < uVar26) {
          puVar34 = (ushort *)(iVar21 + 0x8020);
LAB_ram_480c0c8a:
          uVar2 = *puVar32;
          uVar26 = (uint)uVar2;
          uVar3 = *(ushort *)(iVar21 + 0x8000);
          uVar36 = (uint)uVar3;
          iVar12 = (uint)bStack_235 * 0x800;
          uVar14 = piVar33[uVar26] - *(int *)((iVar12 + uVar26) * 4 + iVar21);
          uVar20 = piVar33[uVar36] - *(int *)((iVar12 + uVar36) * 4 + iVar21);
          puVar18 = puVar32;
          if (uVar14 == uVar20) {
            if (uVar36 <= uVar26) goto LAB_ram_480c0cdc;
          }
          else if (uVar14 <= uVar20) {
LAB_ram_480c0cdc:
            do {
              uVar36 = (uint)puVar18[-1];
              uVar20 = piVar33[uVar36] - *(int *)((iVar12 + uVar36) * 4 + iVar21);
              if (uVar14 == uVar20) {
                if (uVar36 <= uVar26) goto LAB_ram_480c0d02;
              }
              else if (uVar14 <= uVar20) goto LAB_ram_480c0d02;
              *puVar18 = puVar18[-1];
              puVar18 = puVar18 + -1;
            } while( true );
          }
          iVar12 = (int)puVar32 - (iVar21 + 0x8000);
          if (iVar12 < 3) {
            if (iVar12 == 2) {
              *puVar32 = uVar3;
            }
          }
          else {
            FUN_ram_4ff4522c((2 - iVar12) + (int)puVar32);
          }
          *(ushort *)(iVar21 + 0x8000) = uVar2;
          goto LAB_ram_480c0d40;
        }
        if (puVar29 != puVar32) {
          do {
            uVar2 = *puVar32;
            uVar20 = (uint)uVar2;
            uVar3 = *(ushort *)(iVar21 + 0x8000);
            uVar14 = (uint)uVar3;
            iVar12 = (uint)bStack_235 * 0x800;
            uVar26 = piVar33[uVar20] - *(int *)((iVar12 + uVar20) * 4 + iVar21);
            bVar4 = uVar20 < uVar14;
            uVar14 = piVar33[uVar14] - *(int *)((iVar12 + uVar14) * 4 + iVar21);
            if (uVar26 != uVar14) {
              bVar4 = uVar14 < uVar26;
            }
            puVar34 = puVar32;
            if (bVar4) {
              iVar12 = (int)puVar32 - (iVar21 + 0x8000);
              if (iVar12 < 3) {
                if (iVar12 == 2) {
                  *puVar32 = uVar3;
                }
              }
              else {
                FUN_ram_4ff4522c((2 - iVar12) + (int)puVar32);
              }
              *(ushort *)(iVar21 + 0x8000) = uVar2;
            }
            else {
              while( true ) {
                uVar14 = (uint)puVar34[-1];
                bVar4 = uVar20 < uVar14;
                uVar14 = piVar33[uVar14] - *(int *)((iVar12 + uVar14) * 4 + iVar21);
                if (uVar26 != uVar14) {
                  bVar4 = uVar14 < uVar26;
                }
                if (!bVar4) break;
                *puVar34 = puVar34[-1];
                puVar34 = puVar34 + -1;
              }
              *puVar34 = uVar2;
            }
            puVar32 = puVar32 + 1;
            piVar33 = piStack_234;
          } while (puVar29 != puVar32);
        }
      }
    }
  }
  else {
    iStack_278 = 0;
    uVar17 = 0;
    uVar27 = 0;
    iVar25 = 0;
  }
LAB_ram_480c067c:
  puVar32 = (ushort *)(iVar21 + 0x8000);
  FUN_ram_4ff3ec14(&DAT_ram_4ff61950,0xffffffff);
  puVar22 = &DAT_ram_4ff6a46c;
  puVar5 = &local_17c;
  do {
    uVar10 = puVar22[1];
    uVar15 = puVar22[2];
    *puVar5 = *puVar22;
    uVar31 = puVar22[3];
    puVar5[1] = uVar10;
    uVar10 = puVar22[4];
    puVar5[2] = uVar15;
    uVar15 = puVar22[5];
    puVar5[3] = uVar31;
    puVar5[4] = uVar10;
    puVar5[5] = uVar15;
    puVar22 = puVar22 + 6;
    puVar5 = puVar5 + 6;
  } while (puVar22 != (undefined4 *)&DAT_ram_4ff6a5a4);
  *puVar5 = _DAT_ram_4ff6a5a4;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61950);
  puVar28 = auStack_178;
  if ((pcVar30[0x10] != '\x01') && (puVar28 = (uint *)(auStack_118 + 0x68), pcVar30[0x10] == '\x02')
     ) {
    puVar28 = (uint *)(auStack_118 + 4);
  }
  acStack_230[3] = *pcVar30;
  puStack_1ec = (undefined1 *)(iVar21 + 0x9000);
  *puStack_1ec = 0;
  acStack_230[3] = acStack_230[3] + '0';
  acStack_230[0] = 'C';
  acStack_230[1] = 'A';
  acStack_230[2] = 0x4e;
  uStack_1e8 = 0x60000;
  uStack_1c4 = 1;
  uStack_22c = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  FUN_ram_4808c168(&puStack_1ec);
  FUN_ram_480b407c(&puStack_1ec,"schemaVersion",1);
  FUN_ram_480b2068(&puStack_1ec,"capturedAtMs",iVar8);
  FUN_ram_480b2068(&puStack_1ec,"windowMs",iStack_278);
  FUN_ram_4808c2dc(&puStack_1ec,"warmingUp",bVar1 ^ 1);
  FUN_ram_4808cb32(&puStack_1ec,"source",acStack_230);
  FUN_ram_4808cb32(&puStack_1ec,"logicalName",*(undefined4 *)(pcVar30 + 0x14));
  FUN_ram_480bb6fa(&puStack_1ec,"bus",pcVar30[0x10]);
  FUN_ram_480bb6fa(&puStack_1ec,"controller",*pcVar30);
  FUN_ram_480b967a(&puStack_1ec,"totalFrames",uVar27,iVar25);
  uVar10 = 0;
  if (iStack_278 != 0) {
    uVar38 = __udivdi3(uVar27 * 10000,iVar25 * 10000 + (int)((ulonglong)uVar27 * 10000 >> 0x20),
                       iStack_278,0);
    uVar10 = 0xffffffff;
    if ((int)((ulonglong)uVar38 >> 0x20) == 0) {
      uVar10 = (int)uVar38;
    }
  }
  FUN_ram_480b2068(&puStack_1ec,"totalRateTenths",uVar10);
  FUN_ram_480b4e36(&puStack_1ec,"activeIdCount",uVar17);
  FUN_ram_4808c2dc(&puStack_1ec,"countsBeforeSoftwareFilter",1);
  FUN_ram_4808c832(&puStack_1ec,"ids");
  if (uVar17 != 0) {
    puVar29 = puVar32 + uVar17;
    do {
      uVar17 = (uint)*puVar32;
      uVar26 = piStack_234[uVar17] - *(int *)(((uint)bStack_235 * 0x800 + uVar17) * 4 + iVar21);
      FUN_ram_4808c1ae(&puStack_1ec);
      sVar11 = strlen(acStack_230);
      FUN_ram_4808c96e(&puStack_1ec,"source",acStack_230,sVar11);
      __s = *(char **)(pcVar30 + 0x14);
      sVar11 = 0;
      if (__s != (char *)0x0) {
        sVar11 = strlen(__s);
      }
      FUN_ram_4808c96e(&puStack_1ec,"logicalName",__s,sVar11);
      FUN_ram_480bb6fa(&puStack_1ec,"controller",*pcVar30);
      FUN_ram_480b4e36(&puStack_1ec,"id",uVar17);
      FUN_ram_480b2068(&puStack_1ec,"frames",uVar26);
      uVar10 = 0;
      if (iStack_278 != 0) {
        uVar38 = __udivdi3(uVar26 * 10000,(int)((ulonglong)uVar26 * 10000 >> 0x20),iStack_278,0);
        uVar10 = 0xffffffff;
        if ((int)((ulonglong)uVar38 >> 0x20) == 0) {
          uVar10 = (int)uVar38;
        }
      }
      FUN_ram_480b2068(&puStack_1ec,"rateTenths",uVar10);
      uVar6 = 0;
      if (uVar27 != 0 || iVar25 != 0) {
        uVar6 = __udivdi3(uVar26 * 1000,(int)((ulonglong)uVar26 * 1000 >> 0x20),uVar27,iVar25);
      }
      FUN_ram_480b4e36(&puStack_1ec,"sharePermille",uVar6);
      iVar12 = iVar9;
      if ((byte)puVar28[0x18] != 0) {
        puVar23 = puVar28;
        do {
          uVar26 = *puVar23;
          puVar23 = puVar23 + 1;
          if ((uVar17 & 0x7ff) == uVar26) goto LAB_ram_480c08c0;
        } while ((uVar26 <= (uVar17 & 0x7ff)) && (puVar28 + (byte)puVar28[0x18] != puVar23));
        iVar12 = 0;
      }
LAB_ram_480c08c0:
      FUN_ram_4808c2dc(&puStack_1ec,"softwareAccepted",iVar12);
      FUN_ram_4808c244(&puStack_1ec);
      puVar32 = puVar32 + 1;
    } while (puVar29 != puVar32);
  }
  FUN_ram_4808c290(&puStack_1ec);
  iVar21 = FUN_ram_4808c64a(&puStack_1ec);
  uVar10 = uStack_1e4;
  if (iVar21 == 0) {
    pcVar30 = "{\"ok\":false,\"error\":\"can_hot_ids_body_overflow\"}";
LAB_ram_480c0612:
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",pcVar30);
LAB_ram_480c04b4:
    FUN_ram_4802a59e(auStack_21c);
    return;
  }
  iVar12 = FUN_ram_4ff21a0a();
  iVar9 = DAT_ram_4ff5cbe8;
  iVar21 = DAT_ram_4ff5cbdc;
  aiStack_1b8[1] = iVar12 - (int)uVar37;
  uStack_188 = 0;
  iVar12 = DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8;
  local_1c0[1] = uVar7;
  DAT_ram_4ff6de11 = 1;
  *(undefined1 **)(iVar12 + 0x1cec) = &LAB_ram_480305d6;
  *(undefined4 *)(iVar12 + 0x1cf0) = 0;
  DAT_ram_4ff6de10 = bStack_235;
  aiStack_1b8[4] = uVar10;
  uStack_190 = uVar37;
  uStack_184 = 0;
  aiStack_1b8[0] = CONCAT31(aiStack_1b8[0]._1_3_,6);
  puVar22 = (undefined4 *)(iVar12 + 0x1d00);
  puVar5 = local_1c0;
  DAT_ram_4ff6de0c = iVar8;
  do {
    uVar31 = puVar5[1];
    uVar15 = puVar5[2];
    uVar7 = puVar5[3];
    *puVar22 = *puVar5;
    puVar22[1] = uVar31;
    puVar22[2] = uVar15;
    puVar22[3] = uVar7;
    puVar5 = puVar5 + 4;
    puVar22 = puVar22 + 4;
  } while (puVar5 != &uStack_180);
  iVar9 = iVar9 + iVar21 * 0x1d40;
  *(undefined1 *)(iVar9 + 0x1cf4) = 1;
  uVar37 = FUN_ram_4ff21a0a();
  *(undefined8 *)(iVar9 + 0x1d38) = uVar37;
  *(undefined1 *)(iVar9 + 0x1d09) = 1;
  *(undefined1 *)(iVar9 + 0x1d26) = 1;
  FUN_ram_4802a8a8(auStack_20c,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_1fc,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_20c,&iStack_1fc);
  FUN_ram_4802a59e(&iStack_1fc);
  FUN_ram_4802a59e(auStack_20c);
  iVar21 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if ((*(char *)(iVar21 + 0x44c) != '\0') && (*(char *)(iVar21 + 0x44c) != '\x06')) {
    *(undefined1 **)(iVar21 + 0x1ce0) = puStack_1ec;
    *(undefined4 *)(iVar21 + 0x1ce4) = uVar10;
    *(undefined4 *)(iVar21 + 0x1ce8) = 0;
    puStack_1f8 = &LAB_ram_4802d3f2;
    iStack_1fc = iVar21;
    iVar21 = FUN_ram_48066484(&DAT_ram_4ff5cb9c,200,"application/json",iVar21,&LAB_ram_4802d3f2,
                              uVar10);
    if (iVar21 != 0) goto LAB_ram_480c0b72;
  }
  DAT_ram_4ff6de11 = 0;
LAB_ram_480c0b72:
  FUN_ram_4802a59e(auStack_21c);
  return;
}


