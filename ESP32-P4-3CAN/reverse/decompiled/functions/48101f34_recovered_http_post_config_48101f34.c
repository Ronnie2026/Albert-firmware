/* Firmware entry: 0x48101f34 */

/* WARNING: Removing unreachable block (ram,0x48104354) */
/* WARNING: Removing unreachable block (ram,0x4810466a) */
/* WARNING: Removing unreachable block (ram,0x4810466e) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x4ff619f8 : 0x48103624 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_config_48101f34(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  char cVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  char cVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  char *pcVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  byte ******ppppppbVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  undefined4 uVar37;
  undefined1 *puVar38;
  byte ******ppppppbVar39;
  undefined4 uVar40;
  byte ******ppppppbVar41;
  byte *******pppppppbVar42;
  uint uVar43;
  undefined4 *puVar44;
  int iVar45;
  undefined4 uVar46;
  byte ******ppppppbVar47;
  undefined4 uVar48;
  byte ******ppppppbVar49;
  uint uVar50;
  undefined **ppuVar51;
  undefined2 *puVar52;
  undefined4 *puVar53;
  uint uVar54;
  uint uVar55;
  undefined **ppuVar56;
  uint uVar57;
  byte *******pppppppbVar58;
  undefined1 uStack_524;
  int iStack_510;
  int iStack_50c;
  undefined4 local_4d0 [20];
  undefined4 local_480 [46];
  undefined1 uStack_3c5;
  undefined1 auStack_3c4 [16];
  undefined1 auStack_3b4 [16];
  undefined1 auStack_3a4 [16];
  undefined4 uStack_394;
  undefined4 local_384;
  undefined1 auStack_380 [2];
  undefined1 auStack_37e [2];
  undefined1 auStack_37c [2];
  undefined1 auStack_37a [2];
  undefined1 auStack_378 [2];
  undefined1 auStack_376 [2];
  undefined1 auStack_374 [2];
  ushort uStack_372;
  ushort uStack_370;
  undefined1 auStack_36c [4];
  undefined1 auStack_368 [4];
  undefined1 auStack_364 [4];
  undefined1 auStack_360 [4];
  undefined1 auStack_35c [4];
  undefined1 auStack_358 [4];
  undefined1 auStack_354 [4];
  undefined1 auStack_350 [4];
  undefined1 auStack_34c [4];
  undefined1 auStack_348 [4];
  undefined1 auStack_344 [4];
  undefined1 auStack_340 [4];
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined1 uStack_332;
  undefined1 auStack_330 [4];
  undefined4 auStack_32c [25];
  char cStack_2c7;
  byte bStack_2a4;
  undefined4 local_298;
  byte bStack_28c;
  char cStack_289;
  char cStack_25f;
  byte *******local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [3];
  char cStack_15d;
  undefined1 local_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined2 auStack_158 [7];
  undefined2 uStack_14a;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  char cStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined2 auStack_12a [3];
  byte ******appppppbStack_124 [5];
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_103;
  undefined2 uStack_102;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  char cStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined2 uStack_e2;
  undefined1 uStack_dd;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  byte bStack_d4;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 auStack_cc [2];
  undefined2 uStack_ca;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}",0x1f);
    return;
  }
  iVar26 = FUN_ram_48067a66();
  if (iVar26 == 0) {
    return;
  }
  iVar26 = FUN_ram_4803cb08();
  if ((iVar26 != 0) && (iVar26 = FUN_ram_4806c250(), iVar26 == 0)) {
    return;
  }
  ppuVar56 = &PTR_s_v13LowSpeedOffsetPct_ram_481cbc9c_ram_481f572c;
  FUN_ram_4802a8a8(auStack_3c4,&DAT_ram_481df390);
LAB_ram_48101fca:
  puVar13 = *ppuVar56;
  FUN_ram_4802a8a8(&local_16c,puVar13);
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar54 = 0;
    do {
      uVar54 = uVar54 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802a8a8(&local_298,puVar13);
        FUN_ram_4806562c(&local_16c,&DAT_ram_4ff5cb9c,&local_298);
        if (cStack_15d < '\0') {
          uVar54 = (uint)local_16c & 0xff;
          pppppppbVar42 = (byte *******)&local_16c;
        }
        else {
          if (local_16c == (byte *******)0x0) goto LAB_ram_48102070;
          uVar54 = (uint)*(byte *)local_16c;
          pppppppbVar42 = local_16c;
        }
        if (uVar54 == 0) goto LAB_ram_48102070;
        uVar43 = 0;
        goto LAB_ram_48102054;
      }
      puVar53 = puVar53 + 2;
    } while (uVar54 < *(uint *)(iVar26 + 0x1cc4));
  }
  FUN_ram_4802a59e(&local_16c);
  goto LAB_ram_4810213a;
  while (uVar54 = (uint)*(byte *)pppppppbVar42, uVar54 != 0) {
LAB_ram_48102054:
    pppppppbVar42 = (byte *******)((int)pppppppbVar42 + 1);
    uVar43 = uVar43 * 10 + (uVar54 - 0x30) & 0xffff;
    if ((9 < (uVar54 - 0x30 & 0xff)) || (0x3c < uVar43)) goto LAB_ram_48102070;
  }
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a59e(&local_298);
LAB_ram_4810213a:
  ppuVar56 = ppuVar56 + 1;
  if (ppuVar56 == (undefined **)"0123456789abcdef") goto code_r0x48102140;
  goto LAB_ram_48101fca;
LAB_ram_48102070:
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a59e(&local_298);
  FUN_ram_4802ad46(auStack_3c4,puVar13);
  FUN_ram_4802a8a8(&local_16c,
                   "{\"ok\":false,\"error\":\"invalid_v13_speed_offset_pct\",\"field\":\"");
  FUN_ram_4802ae48(&local_16c,auStack_3c4);
  FUN_ram_4802af2c(&local_16c,"\"}");
  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",&local_16c);
  FUN_ram_4802a59e(&local_16c);
  goto LAB_ram_481020c4;
code_r0x48102140:
  FUN_ram_4802a8a8(auStack_3b4,&DAT_ram_481df390);
  uVar54 = FUN_ram_4803a078(auStack_3b4);
  if (uVar54 == 0) {
    FUN_ram_4802a8a8(&local_16c,
                     "{\"ok\":false,\"error\":\"invalid_stable_speed_offset\",\"field\":\"");
    FUN_ram_4802ae48(&local_16c,auStack_3b4);
    FUN_ram_4802af2c(&local_16c,"\"}");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",&local_16c);
    FUN_ram_4802a59e(&local_16c);
    goto LAB_ram_48102b1c;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  puVar44 = &DAT_ram_4ff61958;
  puVar53 = &local_33c;
  do {
    uVar28 = puVar44[1];
    uVar37 = puVar44[2];
    uVar40 = puVar44[3];
    *puVar53 = *puVar44;
    puVar53[1] = uVar28;
    puVar53[2] = uVar37;
    puVar53[3] = uVar40;
    puVar44 = puVar44 + 4;
    puVar53 = puVar53 + 4;
  } while (puVar44 != (undefined4 *)&DAT_ram_4ff619f8);
  *puVar53 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  FUN_ram_4802a8a8(&local_16c,"stalkControlVersion");
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar43 = 0;
    do {
      uVar43 = uVar43 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        uVar50 = (uint)local_33c._1_1_;
        uVar43 = FUN_ram_48036236("stalkControlVersion",uVar50);
        if ((uVar43 != 0xc) && (uVar43 != 0xe)) {
          uVar43 = 0xd;
        }
        bVar1 = uVar50 != uVar43;
        goto LAB_ram_48102236;
      }
      puVar53 = puVar53 + 2;
    } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
  }
  bVar1 = false;
LAB_ram_48102236:
  FUN_ram_4802a59e(&local_16c);
  if ((local_33c._2_1_ == '\0') && (iVar26 = FUN_ram_48036a9a("fsdAutoStartEnabled",0), iVar26 != 0)
     ) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"fsd_master_required\"}");
    goto LAB_ram_48102b1c;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
  puVar44 = &DAT_ram_4ff6934c;
  puVar53 = &local_384;
  do {
    uVar48 = puVar44[1];
    uVar46 = puVar44[2];
    uVar28 = puVar44[3];
    uVar37 = puVar44[4];
    uVar40 = puVar44[5];
    *puVar53 = *puVar44;
    puVar53[1] = uVar48;
    puVar53[2] = uVar46;
    puVar53[3] = uVar28;
    puVar53[4] = uVar37;
    puVar53[5] = uVar40;
    puVar44 = puVar44 + 6;
    puVar53 = puVar53 + 6;
  } while (puVar44 != &DAT_ram_4ff69394);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
  FUN_ram_4802a8a8(auStack_3a4,&DAT_ram_481df390);
  uStack_3c5 = 0;
  FUN_ram_4802a8a8(&local_16c,"dndTorqueEnabled");
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar43 = 0;
    do {
      uVar43 = uVar43 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        FUN_ram_4802a8a8(&uStack_394,"dndTorqueEnabled");
        FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
        pcVar29 = (char *)&local_298;
        if (((-1 < cStack_289) && (pcVar29 = local_298, local_298 == (char *)0x0)) ||
           (*pcVar29 == '\0')) {
LAB_ram_48102b9a:
          FUN_ram_4802a59e(&local_298);
          FUN_ram_4802a59e(&uStack_394);
          FUN_ram_4802a59e(&local_16c);
          FUN_ram_4802ad46(auStack_3a4,"dndTorqueEnabled");
          goto LAB_ram_48102a68;
        }
        if (((((*pcVar29 != '1') || (pcVar29[1] != '\0')) &&
             (iVar26 = FUN_ram_4ff453ae(pcVar29,&DAT_ram_481c3dec), iVar26 != 0)) &&
            (((*pcVar29 != 'o' || (pcVar29[1] != 'n')) || (pcVar29[2] != '\0')))) &&
           ((*pcVar29 != '0' || (iVar27 = 0, pcVar29[1] != '\0')))) {
          iVar26 = FUN_ram_4ff453ae(pcVar29,"false");
          if ((iVar26 != 0) && (iVar26 = FUN_ram_4ff453ae(pcVar29,"off"), iVar26 != 0))
          goto LAB_ram_48102b9a;
          iVar27 = 0;
        }
        local_384._0_1_ = (undefined1)iVar27;
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        break;
      }
      puVar53 = puVar53 + 2;
    } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
  }
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a8a8(&local_16c,"torqueNagMaintenanceEnabled");
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar43 = 0;
    do {
      uVar43 = uVar43 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        FUN_ram_4802a8a8(&uStack_394,"torqueNagMaintenanceEnabled");
        FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
        pcVar29 = (char *)&local_298;
        if (((-1 < cStack_289) && (pcVar29 = local_298, local_298 == (char *)0x0)) ||
           (*pcVar29 == '\0')) {
LAB_ram_48102c26:
          FUN_ram_4802a59e(&local_298);
          FUN_ram_4802a59e(&uStack_394);
          FUN_ram_4802a59e(&local_16c);
          FUN_ram_4802ad46(auStack_3a4,"torqueNagMaintenanceEnabled");
          goto LAB_ram_48102a68;
        }
        if (((((*pcVar29 != '1') || (pcVar29[1] != '\0')) &&
             (iVar26 = FUN_ram_4ff453ae(pcVar29,&DAT_ram_481c3dec), iVar26 != 0)) &&
            (((*pcVar29 != 'o' || (pcVar29[1] != 'n')) || (pcVar29[2] != '\0')))) &&
           ((*pcVar29 != '0' || (iVar27 = 0, pcVar29[1] != '\0')))) {
          iVar26 = FUN_ram_4ff453ae(pcVar29,"false");
          if ((iVar26 != 0) && (iVar26 = FUN_ram_4ff453ae(pcVar29,"off"), iVar26 != 0))
          goto LAB_ram_48102c26;
          iVar27 = 0;
        }
        local_384._1_1_ = (undefined1)iVar27;
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        break;
      }
      puVar53 = puVar53 + 2;
    } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
  }
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a8a8(&local_16c,"preventiveNegativeMinNm");
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar43 = 0;
    do {
      uVar43 = uVar43 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        FUN_ram_4802a8a8(&uStack_394,"preventiveNegativeMinNm");
        FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
        pcVar29 = (char *)&local_298;
        if (-1 < cStack_289) {
          pcVar29 = local_298;
        }
        iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d38,DAT_ram_481f4d3c,DAT_ram_481f4d30,
                                  DAT_ram_481f4d34,(undefined1 *)((int)&local_384 + 2),&uStack_3c5);
        if (iVar26 == 0) {
          FUN_ram_4802a59e(&local_298);
          FUN_ram_4802a59e(&uStack_394);
          FUN_ram_4802a59e(&local_16c);
          FUN_ram_4802ad46(auStack_3a4,"preventiveNegativeMinNm");
          goto LAB_ram_48102a68;
        }
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        break;
      }
      puVar53 = puVar53 + 2;
    } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
  }
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a8a8(&local_16c,"preventiveNegativeMaxNm");
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar43 = 0;
    do {
      uVar43 = uVar43 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        FUN_ram_4802a8a8(&uStack_394,"preventiveNegativeMaxNm");
        FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
        pcVar29 = (char *)&local_298;
        if (-1 < cStack_289) {
          pcVar29 = local_298;
        }
        iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d38,DAT_ram_481f4d3c,DAT_ram_481f4d30,
                                  DAT_ram_481f4d34,auStack_380,&uStack_3c5);
        if (iVar26 == 0) {
          FUN_ram_4802a59e(&local_298);
          FUN_ram_4802a59e(&uStack_394);
          FUN_ram_4802a59e(&local_16c);
          FUN_ram_4802ad46(auStack_3a4,"preventiveNegativeMaxNm");
          goto LAB_ram_48102a68;
        }
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        break;
      }
      puVar53 = puVar53 + 2;
    } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
  }
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a8a8(&local_16c,"preventivePositiveMinNm");
  iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar26 + 0x1cc4) != 0) {
    puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar43 = 0;
    do {
      uVar43 = uVar43 + 1;
      iVar27 = FUN_ram_4802b18e(&local_16c,*puVar53);
      if (iVar27 != 0) {
        FUN_ram_4802a8a8(&uStack_394,"preventivePositiveMinNm");
        FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
        pcVar29 = (char *)&local_298;
        if (-1 < cStack_289) {
          pcVar29 = local_298;
        }
        iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d38,DAT_ram_481f4d3c,DAT_ram_481f4d30,
                                  DAT_ram_481f4d34,auStack_37e,&uStack_3c5);
        if (iVar26 == 0) {
          FUN_ram_4802a59e(&local_298);
          FUN_ram_4802a59e(&uStack_394);
          FUN_ram_4802a59e(&local_16c);
          FUN_ram_4802ad46(auStack_3a4,"preventivePositiveMinNm");
          goto LAB_ram_48102a68;
        }
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        break;
      }
      puVar53 = puVar53 + 2;
    } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
  }
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802a8a8(&local_16c,"preventivePositiveMaxNm");
  iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
  if (iVar26 == 0) {
LAB_ram_481026ca:
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"correctiveNegativeMinNm");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 != 0) {
      FUN_ram_4802a8a8(&uStack_394,"correctiveNegativeMinNm");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d30,DAT_ram_481f4d34,DAT_ram_481f4d40,
                                DAT_ram_481f4d44,auStack_37a,&uStack_3c5);
      if (iVar26 == 0) {
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802ad46(auStack_3a4,"correctiveNegativeMinNm");
        goto LAB_ram_48102a68;
      }
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
    }
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"correctiveNegativeMaxNm");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 != 0) {
      FUN_ram_4802a8a8(&uStack_394,"correctiveNegativeMaxNm");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d30,DAT_ram_481f4d34,DAT_ram_481f4d40,
                                DAT_ram_481f4d44,auStack_378,&uStack_3c5);
      if (iVar26 == 0) {
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802ad46(auStack_3a4,"correctiveNegativeMaxNm");
        goto LAB_ram_48102a68;
      }
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
    }
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"correctivePositiveMinNm");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 != 0) {
      FUN_ram_4802a8a8(&uStack_394,"correctivePositiveMinNm");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d30,DAT_ram_481f4d34,DAT_ram_481f4d40,
                                DAT_ram_481f4d44,auStack_376,&uStack_3c5);
      if (iVar26 == 0) {
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802ad46(auStack_3a4,"correctivePositiveMinNm");
        goto LAB_ram_48102a68;
      }
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
    }
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"correctivePositiveMaxNm");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 != 0) {
      FUN_ram_4802a8a8(&uStack_394,"correctivePositiveMaxNm");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d30,DAT_ram_481f4d34,DAT_ram_481f4d40,
                                DAT_ram_481f4d44,auStack_374,&uStack_3c5);
      if (iVar26 == 0) {
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802ad46(auStack_3a4,"correctivePositiveMaxNm");
        goto LAB_ram_48102a68;
      }
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
    }
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"activityMinSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 != 0) {
      FUN_ram_4802a8a8(&uStack_394,"activityMinSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,DAT_ram_481f4d50,DAT_ram_481f4d54,DAT_ram_481f4d48,
                                DAT_ram_481f4d4c,auStack_36c,&uStack_3c5);
      if (iVar26 == 0) {
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802ad46(auStack_3a4,"activityMinSec");
        goto LAB_ram_48102a68;
      }
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
    }
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"activityMaxSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 != 0) {
      FUN_ram_4802a8a8(&uStack_394,"activityMaxSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,DAT_ram_481f4d50,DAT_ram_481f4d54,DAT_ram_481f4d48,
                                DAT_ram_481f4d4c,auStack_368,&uStack_3c5);
      if (iVar26 == 0) {
        FUN_ram_4802a59e(&local_298);
        FUN_ram_4802a59e(&uStack_394);
        FUN_ram_4802a59e(&local_16c);
        FUN_ram_4802ad46(auStack_3a4,"activityMaxSec");
        goto LAB_ram_48102a68;
      }
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
    }
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802a8a8(&local_16c,"restMinSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"restMinSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_364,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"restMinSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"restMaxSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"restMaxSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_360,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"restMaxSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"h2PersistenceSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"h2PersistenceSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_35c,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"h2PersistenceSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"preCorrectionPauseSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"preCorrectionPauseSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_358,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"preCorrectionPauseSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"correctiveSendMinSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"correctiveSendMinSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,DAT_ram_481f4d50,DAT_ram_481f4d54,DAT_ram_481f4d48,
                                DAT_ram_481f4d4c,auStack_354,&uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"correctiveSendMinSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"correctiveSendMaxSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"correctiveSendMaxSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,DAT_ram_481f4d50,DAT_ram_481f4d54,DAT_ram_481f4d48,
                                DAT_ram_481f4d4c,auStack_350,&uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"correctiveSendMaxSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"correctivePauseMinSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"correctivePauseMinSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_34c,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"correctivePauseMinSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"correctivePauseMaxSec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"correctivePauseMaxSec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_348,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"correctivePauseMaxSec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"stabilityVerifySec");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"stabilityVerifySec");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804de50(pcVar29,0,0,DAT_ram_481f4d48,DAT_ram_481f4d4c,auStack_344,
                                &uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"stabilityVerifySec");
        goto LAB_ram_48102a68;
      }
    }
    FUN_ram_4802a8a8(&local_16c,"correctiveNegativeFrames");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    FUN_ram_4802a59e(&local_16c);
    if (iVar26 != 0) {
      uStack_394 = (uint)uStack_370;
      FUN_ram_4802a8a8(&local_298,"correctiveNegativeFrames");
      FUN_ram_4806562c(&local_16c,&DAT_ram_4ff5cb9c,&local_298);
      pppppppbVar42 = (byte *******)&local_16c;
      if (-1 < cStack_15d) {
        pppppppbVar42 = local_16c;
      }
      iVar26 = FUN_ram_4804e0bc(pppppppbVar42,0,0xff,&uStack_394,&uStack_3c5);
      FUN_ram_4802a59e(&local_16c);
      FUN_ram_4802a59e(&local_298);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"correctiveNegativeFrames");
        goto LAB_ram_48102a68;
      }
      uStack_370 = (ushort)uStack_394;
    }
    FUN_ram_4802a8a8(&local_16c,"correctivePositiveFrames");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    FUN_ram_4802a59e(&local_16c);
    if (iVar26 != 0) {
      uStack_394 = (uint)uStack_372;
      FUN_ram_4802a8a8(&local_298,"correctivePositiveFrames");
      FUN_ram_4806562c(&local_16c,&DAT_ram_4ff5cb9c,&local_298);
      pppppppbVar42 = (byte *******)&local_16c;
      if (-1 < cStack_15d) {
        pppppppbVar42 = local_16c;
      }
      iVar26 = FUN_ram_4804e0bc(pppppppbVar42,0,0xff,&uStack_394,&uStack_3c5);
      FUN_ram_4802a59e(&local_16c);
      FUN_ram_4802a59e(&local_298);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"correctivePositiveFrames");
        goto LAB_ram_48102a68;
      }
      uStack_372 = (ushort)uStack_394;
    }
    FUN_ram_4802a8a8(&local_16c,"dasFreshTimeoutMs");
    iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_16c);
    if (iVar26 == 0) {
      FUN_ram_4802a59e(&local_16c);
    }
    else {
      FUN_ram_4802a8a8(&uStack_394,"dasFreshTimeoutMs");
      FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
      pcVar29 = (char *)&local_298;
      if (-1 < cStack_289) {
        pcVar29 = local_298;
      }
      iVar26 = FUN_ram_4804e0bc(pcVar29,100,2000,auStack_340,&uStack_3c5);
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      FUN_ram_4802a59e(&local_16c);
      if (iVar26 == 0) {
        FUN_ram_4802ad46(auStack_3a4,"dasFreshTimeoutMs");
        goto LAB_ram_48102a68;
      }
    }
    iVar26 = FUN_ram_4804e2a8(&local_384);
    if (iVar26 == 0) {
      if (!bVar1) {
LAB_ram_481033d4:
        FUN_ram_4802a8a8(&local_16c,"batteryPreheatEnabled");
        iVar26 = DAT_ram_4ff5cbe8;
        iVar27 = DAT_ram_4ff5cbdc;
        iVar45 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if (*(int *)(iVar45 + 0x1cc4) != 0) {
          puVar53 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
          uVar43 = 0;
          do {
            iVar30 = FUN_ram_4802b18e(&local_16c,*puVar53);
            if (iVar30 != 0) {
              iVar26 = iVar26 + (iVar27 * 0x3a8 + uVar43) * 8 + 0xcc4;
              goto LAB_ram_48103440;
            }
            uVar43 = uVar43 + 1;
            puVar53 = puVar53 + 2;
          } while (uVar43 < *(uint *)(iVar45 + 0x1cc4));
        }
        iVar26 = 0;
LAB_ram_48103440:
        FUN_ram_4802a59e(&local_16c);
        uVar43 = FUN_ram_48036a9a("batteryPreheatEnabled",0);
        FUN_ram_4802a8a8(&local_16c,"batteryPreheatDurationMin");
        iVar45 = DAT_ram_4ff5cbe8;
        iVar27 = DAT_ram_4ff5cbdc;
        iVar30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        iStack_50c = 0;
        if (*(int *)(iVar30 + 0x1cc4) != 0) {
          puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
          uVar50 = 0;
          do {
            iVar31 = FUN_ram_4802b18e(&local_16c,*puVar53);
            if (iVar31 != 0) {
              iStack_50c = (iVar27 * 0x3a8 + uVar50) * 8 + 0xcc4 + iVar45;
              break;
            }
            uVar50 = uVar50 + 1;
            puVar53 = puVar53 + 2;
          } while (uVar50 < *(uint *)(iVar30 + 0x1cc4));
        }
        FUN_ram_4802a59e(&local_16c);
        uVar32 = FUN_ram_48036236("batteryPreheatDurationMin",0x2d);
        uVar50 = uVar32;
        if (0xff < uVar32) {
          uVar50 = 0xff;
        }
        iVar27 = FUN_ram_48036a9a("batteryPreheatRetryStop",0);
        FUN_ram_4802a8a8(&local_16c,"batteryPreheatRetryStop");
        uVar50 = uVar50 & 0xff;
        iVar45 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if (*(int *)(iVar45 + 0x1cc4) != 0) {
          puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
          uVar57 = 0;
          do {
            uVar57 = uVar57 + 1;
            iVar30 = FUN_ram_4802b18e(&local_16c,*puVar53);
            if (iVar30 != 0) {
              FUN_ram_4802a8a8(&uStack_394,"batteryPreheatRetryStop");
              iVar31 = FUN_ram_4802b18e(&uStack_394,"plain");
              iVar30 = DAT_ram_4ff5cbe8;
              iVar45 = DAT_ram_4ff5cbdc;
              if ((iVar31 == 0) ||
                 (iVar31 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40,
                 *(char *)(iVar31 + 0xcc2) == '\0')) {
                iVar31 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
                if (*(int *)(iVar31 + 0x1cc4) == 0) goto LAB_ram_48104444;
                puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
                uVar57 = 0;
                goto LAB_ram_48104244;
              }
              puVar38 = *(undefined1 **)(iVar31 + 0x43c);
              if (puVar38 == (undefined1 *)0x0) {
                puVar38 = &DAT_ram_481df390;
              }
              FUN_ram_4802a888(&local_298,puVar38,*(undefined4 *)(iVar31 + 0x438));
              goto LAB_ram_481035a0;
            }
            puVar53 = puVar53 + 2;
          } while (uVar57 < *(uint *)(iVar45 + 0x1cc4));
        }
        FUN_ram_4802a59e(&local_16c);
        iStack_510 = FUN_ram_48036a9a("canCommsEnabled",uStack_332);
        iVar30 = FUN_ram_48036a9a("can1TxEnabled",auStack_330[0]);
        FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
        pppppppbVar42 = (byte *******)&local_16c;
        puVar53 = &DAT_ram_4ff61958;
        do {
          ppppppbVar33 = (byte ******)puVar53[1];
          ppppppbVar39 = (byte ******)puVar53[2];
          ppppppbVar41 = (byte ******)puVar53[3];
          *pppppppbVar42 = (byte ******)*puVar53;
          pppppppbVar42[1] = ppppppbVar33;
          pppppppbVar42[2] = ppppppbVar39;
          pppppppbVar42[3] = ppppppbVar41;
          puVar53 = puVar53 + 4;
          pppppppbVar42 = pppppppbVar42 + 4;
        } while (puVar53 != (undefined4 *)&DAT_ram_4ff619f8);
        *pppppppbVar42 = _DAT_ram_4ff619f8;
        FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
        uVar28 = FUN_ram_48025ba6();
        FUN_ram_48052b10(&local_298,&DAT_ram_4ff69640,uVar28);
        uVar57 = (uint)local_298 & 0xff;
        cVar21 = (char)local_298;
        if (uVar57 == 0) {
          uVar57 = (uint)bStack_28c;
        }
        goto LAB_ram_4810365e;
      }
      iVar26 = FUN_ram_48036236("stalkControlVersion",local_33c._1_1_);
      if (iVar26 == 0xc) {
        FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
        cVar21 = DAT_ram_4ff61958._1_1_;
        FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
        if (cVar21 == '\f') goto LAB_ram_48104292;
        FUN_ram_48051e92(&local_298,0xc);
        FUN_ram_4ff3ec14(&DAT_ram_4ff61950,0xffffffff);
        puVar53 = &DAT_ram_4ff6a340;
        pppppppbVar42 = (byte *******)&local_16c;
        do {
          ppppppbVar33 = (byte ******)puVar53[1];
          ppppppbVar39 = (byte ******)puVar53[2];
          ppppppbVar41 = (byte ******)puVar53[3];
          ppppppbVar47 = (byte ******)puVar53[4];
          *pppppppbVar42 = (byte ******)*puVar53;
          pppppppbVar42[1] = ppppppbVar33;
          pppppppbVar42[2] = ppppppbVar39;
          pppppppbVar42[3] = ppppppbVar41;
          pppppppbVar42[4] = ppppppbVar47;
          puVar53 = puVar53 + 5;
          pppppppbVar42 = pppppppbVar42 + 5;
        } while (puVar53 != &DAT_ram_4ff6a46c);
        FUN_ram_4ff3ee10(&DAT_ram_4ff61950);
        iVar26 = FUN_ram_4804f34c(&local_298,&local_16c,0);
        if (iVar26 != 0) goto LAB_ram_48104292;
        goto LAB_ram_481043a0;
      }
LAB_ram_48104292:
      if (DAT_ram_4ff687e8 == 0) {
        DAT_ram_4ff687e8 = -0x80000000;
        goto LAB_ram_481033d4;
      }
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                       "{\"ok\":false,\"error\":\"control_version_busy\"}");
      goto LAB_ram_48102ab6;
    }
    FUN_ram_4802ad46(auStack_3a4,iVar26);
  }
  else {
    FUN_ram_4802a8a8(&uStack_394,"preventivePositiveMaxNm");
    FUN_ram_4806562c(&local_298,&DAT_ram_4ff5cb9c,&uStack_394);
    pcVar29 = (char *)&local_298;
    if (-1 < cStack_289) {
      pcVar29 = local_298;
    }
    iVar26 = FUN_ram_4804db5e(pcVar29,DAT_ram_481f4d38,DAT_ram_481f4d3c,DAT_ram_481f4d30,
                              DAT_ram_481f4d34,auStack_37c,&uStack_3c5);
    if (iVar26 != 0) {
      FUN_ram_4802a59e(&local_298);
      FUN_ram_4802a59e(&uStack_394);
      goto LAB_ram_481026ca;
    }
    FUN_ram_4802a59e(&local_298);
    FUN_ram_4802a59e(&uStack_394);
    FUN_ram_4802a59e(&local_16c);
    FUN_ram_4802ad46(auStack_3a4,"preventivePositiveMaxNm");
  }
LAB_ram_48102a68:
  FUN_ram_4802a8a8(&local_298,"{\"ok\":false,\"error\":\"invalid_torque_config\",\"field\":\"");
  FUN_ram_4802f152(&local_16c,auStack_3a4);
  FUN_ram_4802ae48(&local_298,&local_16c);
  FUN_ram_4802a59e(&local_16c);
  FUN_ram_4802af2c(&local_298,"\"}");
  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",&local_298);
  FUN_ram_4802a59e(&local_298);
  goto LAB_ram_48102ab6;
  while( true ) {
    uVar57 = uVar57 + 1;
    puVar53 = puVar53 + 2;
    if (*(uint *)(iVar31 + 0x1cc4) <= uVar57) break;
LAB_ram_48104244:
    iVar36 = FUN_ram_4802b18e(&uStack_394,*puVar53);
    if (iVar36 != 0) {
      FUN_ram_4802a8a8(&local_298,*(undefined4 *)(iVar30 + (iVar45 * 0x3a8 + uVar57) * 8 + 0xcc8));
      goto LAB_ram_481035a0;
    }
  }
LAB_ram_48104444:
  FUN_ram_4802a8a8(&local_298,&DAT_ram_481df390);
LAB_ram_481035a0:
  iVar45 = FUN_ram_4802b18e(&local_298,"1");
  FUN_ram_4802a59e(&local_298);
  FUN_ram_4802a59e(&uStack_394);
  FUN_ram_4802a59e(&local_16c);
  iStack_510 = FUN_ram_48036a9a("canCommsEnabled",uStack_332);
  iVar30 = FUN_ram_48036a9a("can1TxEnabled",auStack_330[0]);
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  pppppppbVar42 = (byte *******)&local_16c;
  puVar53 = &DAT_ram_4ff61958;
  do {
    ppppppbVar33 = (byte ******)puVar53[1];
    ppppppbVar39 = (byte ******)puVar53[2];
    ppppppbVar41 = (byte ******)puVar53[3];
    *pppppppbVar42 = (byte ******)*puVar53;
    pppppppbVar42[1] = ppppppbVar33;
    pppppppbVar42[2] = ppppppbVar39;
    pppppppbVar42[3] = ppppppbVar41;
    puVar53 = puVar53 + 4;
    pppppppbVar42 = pppppppbVar42 + 4;
  } while (puVar53 != (undefined4 *)&DAT_ram_4ff619f8);
  *pppppppbVar42 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  uVar28 = FUN_ram_48025ba6();
  FUN_ram_48052b10(&local_298,&DAT_ram_4ff69640,uVar28);
  uVar57 = (uint)local_298 & 0xff;
  if (uVar57 == 0) {
    uVar57 = (uint)bStack_28c;
  }
  cVar21 = (char)local_298;
  if (iVar45 == 0) {
LAB_ram_481042d4:
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,400,"application/json",
                     "{\"ok\":false,\"error\":\"battery_preheat_retry_invalid\"}",0x34);
  }
  else {
LAB_ram_4810365e:
    bVar12 = local_298._1_1_;
    uVar55 = (uint)local_298._1_1_;
    if (iVar27 == 0) {
      if (iVar26 == 0) {
        if (iStack_50c != 0) {
          if (uVar32 == 0xf) {
            uVar50 = 0xf;
          }
          else if ((0x1e < (uVar50 - 0x1e & 0xff)) ||
                  ((0x40008001U >> (uVar50 - 0x1e & 0x1f) & 1) == 0)) {
            uVar50 = 0x2d;
          }
          if (uVar55 != uVar50) {
            if (local_298._2_1_ == '\x03') {
              FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                               "{\"ok\":false,\"error\":\"battery_preheat_recovery_required\"}");
              goto LAB_ram_481042f4;
            }
            iVar26 = FUN_ram_48101910(&DAT_ram_4ff60e20,uVar50);
            goto LAB_ram_481036bc;
          }
        }
      }
      else {
        if (iStack_50c == 0) {
          uVar32 = uVar55;
          if (uVar43 != 0) {
            if (uVar57 != 0) goto LAB_ram_481036c2;
            goto LAB_ram_481036ae;
          }
LAB_ram_48104538:
          if ((local_298._2_1_ == '\x03') || (uVar57 != 0)) goto LAB_ram_481041ea;
        }
        else {
          if ((uVar32 != 0xf) &&
             ((0x1e < (uVar50 - 0x1e & 0xff) ||
              (uVar32 = uVar50, (0x40008001U >> (uVar50 - 0x1e & 0x1f) & 1) == 0)))) {
            uVar32 = 0x2d;
          }
          if (uVar43 == 0) goto LAB_ram_48104538;
          uVar43 = uVar54;
          if (uVar57 == 0) goto LAB_ram_481036ae;
        }
        uVar43 = uVar57;
        if (uVar55 != uVar32) goto LAB_ram_481036ae;
      }
LAB_ram_481036c2:
      if ((((uStack_164._2_1_ == '\0') || (iStack_510 != 0)) &&
          ((auStack_160[0] == '\0' || (iVar30 != 0)))) || (iVar26 = FUN_ram_480fe78a(), iVar26 != 0)
         ) {
        FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
        uVar11 = DAT_ram_4ff61968._3_1_;
        uVar10 = DAT_ram_4ff61968._2_1_;
        uVar9 = DAT_ram_4ff61968._1_1_;
        uVar8 = (undefined1)DAT_ram_4ff61968;
        uVar7 = DAT_ram_4ff61964._3_1_;
        uVar6 = DAT_ram_4ff61964._2_1_;
        uVar5 = DAT_ram_4ff61964._1_1_;
        uVar4 = (undefined1)DAT_ram_4ff61964;
        uVar3 = DAT_ram_4ff61960._3_1_;
        uVar23 = DAT_ram_4ff61960._2_1_;
        uVar22 = DAT_ram_4ff61960._1_1_;
        uVar20 = (undefined1)DAT_ram_4ff61960;
        uVar24 = DAT_ram_4ff6195c._2_2_;
        uVar19 = (undefined1)DAT_ram_4ff6195c;
        uVar17 = DAT_ram_4ff61958._3_1_;
        uVar18 = DAT_ram_4ff61958._2_1_;
        cVar2 = DAT_ram_4ff61958._1_1_;
        cVar21 = (char)DAT_ram_4ff61958;
        pppppppbVar42 = (byte *******)&local_16c;
        puVar53 = &DAT_ram_4ff61958;
        do {
          ppppppbVar33 = (byte ******)puVar53[1];
          ppppppbVar39 = (byte ******)puVar53[2];
          ppppppbVar41 = (byte ******)puVar53[3];
          *pppppppbVar42 = (byte ******)*puVar53;
          pppppppbVar42[1] = ppppppbVar33;
          pppppppbVar42[2] = ppppppbVar39;
          pppppppbVar42[3] = ppppppbVar41;
          puVar53 = puVar53 + 4;
          pppppppbVar42 = pppppppbVar42 + 4;
        } while (puVar53 != (undefined4 *)&DAT_ram_4ff619f8);
        *pppppppbVar42 = _DAT_ram_4ff619f8;
        FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
        cVar16 = FUN_ram_48036a9a("canCommsEnabled",uVar23);
        uVar54 = FUN_ram_48036a9a("fsdEnabled",cVar21);
        if ((uVar54 == 0) || (cVar21 != '\0')) {
          uVar43 = (uint)bStack_d4;
        }
        else {
          FUN_ram_4802a8a8(&local_298,"fsdSteadyModeEnabled");
          iVar26 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar26 + 0x1cc4) != 0) {
            puVar53 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
            uVar43 = 0;
            do {
              uVar43 = uVar43 + 1;
              iVar27 = FUN_ram_4802b18e(&local_298,*puVar53);
              if (iVar27 != 0) {
                FUN_ram_4802a59e(&local_298);
                uVar43 = (uint)bStack_d4;
                goto LAB_ram_481037b8;
              }
              puVar53 = puVar53 + 2;
            } while (uVar43 < *(uint *)(iVar26 + 0x1cc4));
          }
          FUN_ram_4802a59e(&local_298);
          uVar43 = uVar54;
        }
LAB_ram_481037b8:
        uVar50 = FUN_ram_48036236("stalkControlVersion",cVar2);
        if (0xff < uVar50) {
          uVar50 = 0xff;
        }
        iVar26 = FUN_ram_48036a9a("fsdAutoStartEnabled",uVar18);
        uStack_d8 = FUN_ram_48036a9a("fsdWarningActivationEnabled",uStack_d8);
        uStack_d5 = FUN_ram_48036a9a("fsdSideCollisionActivationEnabled",uStack_d5);
        bStack_d4 = FUN_ram_48036a9a("fsdSteadyModeEnabled",uVar43);
        uStack_d6 = FUN_ram_48036a9a("fsdDdawEnabled",uStack_d6);
        uVar43 = FUN_ram_48036236("fsdWarningLaneModes",uStack_d7);
        if (0xff < uVar43) {
          uVar43 = 0xff;
        }
        uStack_d7 = (undefined1)uVar43;
        uStack_524 = FUN_ram_48036a9a("fsdAutoStartLongPressEnabled",uVar17);
        uVar17 = FUN_ram_48036a9a("fsdAutoStartFirstParkToDriveEnabled",uVar19);
        uVar24 = FUN_ram_48036236("fsdAutoStartReverseToDriveSpeedKph",uVar24);
        uVar18 = FUN_ram_48036a9a("fsdAutoStartGroundEnabled",uVar20);
        uStack_e3 = FUN_ram_48036a9a("fsdDriverOccupiedSpoofEnabled",uStack_e3);
        uVar43 = FUN_ram_48036236("fsdAutoStartAvailableConfirmFrames",uVar22);
        if (0xff < uVar43) {
          uVar43 = 0xff;
        }
        FUN_ram_48036a9a("fsdParkStartEnabled",(undefined1)uStack_e2);
        uStack_dd = FUN_ram_48036a9a("v13SpaceToSpaceEnabled",uStack_dd);
        uStack_dc = FUN_ram_48036236("v13ParkingDelayMs",uStack_dc);
        uStack_da = FUN_ram_48036236("v13ParkingDurationMs",uStack_da);
        uVar19 = FUN_ram_48036a9a("autoSpeedOffsetEnabled",uVar6);
        auStack_cc[0] = FUN_ram_48036a9a("stableSpeedOffsetEnabled",auStack_cc[0]);
        uStack_ca = FUN_ram_48036236("stableSpeedDownIntervalMs",uStack_ca);
        uVar32 = FUN_ram_48036236("speedDownStepKph",uVar8);
        if (0xff < uVar32) {
          uVar32 = 0xff;
        }
        uVar57 = FUN_ram_48036236("speedOffsetDownSlewPctPerSec",uVar7);
        if (0xff < uVar57) {
          uVar57 = 0xff;
        }
        uVar55 = FUN_ram_48036236("speedOffsetMaxPctRaw",uVar9);
        if (0xff < uVar55) {
          uVar55 = 0xff;
        }
        uVar34 = FUN_ram_48036236("v13LowSpeedOffsetPct",uStack_d0);
        if (0xff < uVar34) {
          uVar34 = 0xff;
        }
        uStack_d0 = (undefined1)uVar34;
        uVar34 = FUN_ram_48036236("v13HighSpeedOffsetPct",uStack_cf);
        if (0xff < uVar34) {
          uVar34 = 0xff;
        }
        uStack_cf = (undefined1)uVar34;
        uVar20 = FUN_ram_48036a9a("hw3ManualStrategyEnabled",uVar10);
        uVar34 = FUN_ram_48036236("hw3ManualStrategy",uVar11);
        if (0xff < uVar34) {
          uVar34 = 0xff;
        }
        uVar35 = FUN_ram_48036236("v14SpeedOffsetMaxPctRaw",uStack_148);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_148 = (undefined1)uVar35;
        uStack_147 = FUN_ram_48036a9a("v14ManualDrivingProfileEnabled",uStack_147);
        uVar35 = FUN_ram_48036236("v14ManualDrivingProfile",uStack_146);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_146 = (undefined1)uVar35;
        uStack_141 = FUN_ram_48036a9a("enhancedAutopilotEnabled",uStack_141);
        uStack_145 = FUN_ram_48036a9a("dndEnabled",uStack_145);
        uStack_140 = FUN_ram_48036a9a("cabinCameraDisableEnabled",uStack_140);
        uVar35 = FUN_ram_48036236("v14CameraDisableDelaySec",uStack_13f);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_13f = (undefined1)uVar35;
        uStack_144 = FUN_ram_48036a9a("dndHandsOnDowngradeEnabled",uStack_144);
        cVar21 = FUN_ram_48036a9a("dndHandsOn24To1Enabled",cStack_143 == '\x01');
        iVar27 = FUN_ram_48036a9a("dndHandsOn124To0Enabled",cStack_143 == '\x02');
        cStack_143 = '\x02';
        if (iVar27 == 0) {
          cStack_143 = cVar21;
        }
        uStack_142 = FUN_ram_48036a9a("isaChimeSuppressEnabled",uStack_142);
        uStack_fc = FUN_ram_48036a9a("dndScrollEnabled",uStack_fc);
        uVar35 = FUN_ram_48036236("dndScrollMode",uStack_13e);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_13e = (undefined1)uVar35;
        uStack_13d = FUN_ram_48036a9a("dndSpeedPeriodicEnabled",uStack_13d);
        uStack_13c = FUN_ram_48036236("dndSpeedPeriodMinMs",uStack_13c);
        uStack_13a = FUN_ram_48036236("dndSpeedPeriodMaxMs",uStack_13a);
        ppuVar56 = &PTR_s_hw3ComfortTargetBelow60_ram_481d17a0_ram_481f5660;
        puVar52 = auStack_12a;
        do {
          puVar14 = puVar52 + -7;
          ppuVar51 = ppuVar56;
          do {
            puVar13 = *ppuVar51;
            puVar15 = puVar14 + 1;
            ppuVar51 = ppuVar51 + 1;
            uVar25 = FUN_ram_48036236(puVar13,*puVar14);
            *puVar14 = uVar25;
            puVar14 = puVar15;
          } while (puVar52 != puVar15);
          puVar52 = puVar52 + 7;
          ppuVar56 = ppuVar56 + 7;
        } while (puVar52 != &uStack_100);
        ppuVar56 = &PTR_s_v14TargetBelow60_ram_481d173c_ram_481f5644;
        pppppppbVar42 = (byte *******)&local_16c;
        do {
          puVar13 = *ppuVar56;
          pppppppbVar58 = (byte *******)((int)pppppppbVar42 + 2);
          ppuVar56 = ppuVar56 + 1;
          uVar25 = FUN_ram_48036236(puVar13,*(undefined2 *)(pppppppbVar42 + 5));
          *(undefined2 *)(pppppppbVar42 + 5) = uVar25;
          pppppppbVar42 = pppppppbVar58;
        } while ((byte *******)(auStack_160 + 2) != pppppppbVar58);
        uStack_10e = FUN_ram_48036236("hw3ComfortTarget110",uStack_10e);
        uStack_10c = FUN_ram_48036236("target110",uStack_10c);
        uStack_10a = FUN_ram_48036236("hw3HurryTarget110",uStack_10a);
        uStack_14a = FUN_ram_48036236("v14Target110",uStack_14a);
        uStack_fb = FUN_ram_48036a9a("gearAutomationEnabled",uStack_fb);
        uStack_e4 = FUN_ram_48036a9a("gearSeatbeltSafetyEnabled",uStack_e4);
        uStack_fa = FUN_ram_48036a9a("gearBrakeSafetyBypassEnabled",uStack_fa);
        uStack_f9 = FUN_ram_48036a9a("gearBrakeToggleEnabled",uStack_f9);
        uStack_f8 = FUN_ram_48036a9a("gearParkSteeringEnabled",uStack_f8);
        cStack_f7 = FUN_ram_48036a9a("bleObstacleFeatureEnabled",cStack_f7);
        uStack_f6 = FUN_ram_48036a9a("gearScrollEnabled",uStack_f6);
        uVar35 = FUN_ram_48036236("gearAutoShiftMaxSpeedKph",uStack_f5);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_f5 = (undefined1)uVar35;
        uStack_f4 = FUN_ram_48036a9a("gearScrollBrakeAuthorizationEnabled",uStack_f4);
        uStack_f3 = FUN_ram_48036a9a("bleObstacleSteeringConfirmEnabled",uStack_f3);
        uVar35 = FUN_ram_48036236("gearShiftLimit",uStack_f2);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_f2 = (undefined1)uVar35;
        uVar35 = FUN_ram_48036236("gearLeftPositiveAction",uStack_f1);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_f1 = (undefined1)uVar35;
        uVar35 = FUN_ram_48036236("gearLeftNegativeAction",uStack_f0);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_f0 = (undefined1)uVar35;
        uVar35 = FUN_ram_48036236("gearRightPositiveAction",uStack_ef);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_ef = (undefined1)uVar35;
        uVar35 = FUN_ram_48036236("gearRightNegativeAction",uStack_ee);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_ee = (undefined1)uVar35;
        uStack_ec = FUN_ram_48036236("gearCooldownMs",uStack_ec);
        uStack_ea = FUN_ram_48036236("gearParkSteeringThresholdDeciDeg",uStack_ea);
        uStack_e8 = FUN_ram_48036236("gearDriveReverseSteeringThresholdDeciDeg",uStack_e8);
        uStack_e6 = FUN_ram_48036236("bleObstacleSteeringThresholdDeciDeg",uStack_e6);
        uStack_fe = FUN_ram_48036a9a("seatMemoryEnabled",uStack_fe);
        uVar35 = FUN_ram_48036236("seatControlBus",uStack_fd);
        if (0xff < uVar35) {
          uVar35 = 0xff;
        }
        uStack_fd = (undefined1)uVar35;
        uVar22 = FUN_ram_48036a9a("can0TxEnabled",uVar3);
        cVar21 = FUN_ram_48036a9a("can1TxEnabled",uVar4);
        uVar23 = FUN_ram_48036a9a("can2TxEnabled",uVar5);
        uStack_108 = FUN_ram_48036a9a("canbServiceModeEnabled",uStack_108);
        uStack_107 = FUN_ram_48036a9a("fsdForceHighPhysicalEnabled",uStack_107);
        uStack_103 = FUN_ram_48036a9a("longPressHighBeamStrobeEnabled",uStack_103);
        uStack_102 = FUN_ram_48036236("highBeamStrobeIntervalMs",uStack_102);
        uStack_100 = FUN_ram_48036236("highBeamStrobeCount",uStack_100);
        uStack_e2 = 1;
        if (iVar26 == 0) {
          uVar18 = 0;
          uVar17 = 0;
          uStack_524 = 0;
        }
        uStack_164._3_1_ = uVar22;
        uStack_164._0_1_ = uVar18;
        auStack_160[2] = uVar19;
        uStack_168._0_1_ = uVar17;
        uStack_164._1_1_ = (char)uVar43;
        local_15c = (char)uVar32;
        uStack_168._2_2_ = uVar24;
        uStack_164._2_1_ = cVar16;
        uStack_159 = (char)uVar34;
        local_16c = (byte *******)
                    CONCAT13(uStack_524,CONCAT12((char)iVar26,CONCAT11((char)uVar50,(char)uVar54)));
        auStack_160[0] = cVar21;
        auStack_160[1] = uVar23;
        cStack_15d = (char)uVar57;
        uStack_15b = (char)uVar55;
        uStack_15a = uVar20;
        puVar53 = local_480;
        pppppppbVar42 = (byte *******)&local_16c;
        do {
          ppppppbVar33 = pppppppbVar42[1];
          ppppppbVar39 = pppppppbVar42[2];
          ppppppbVar41 = pppppppbVar42[3];
          *puVar53 = *pppppppbVar42;
          puVar53[1] = ppppppbVar33;
          puVar53[2] = ppppppbVar39;
          puVar53[3] = ppppppbVar41;
          pppppppbVar42 = pppppppbVar42 + 4;
          puVar53 = puVar53 + 4;
        } while (pppppppbVar42 != (byte *******)auStack_cc);
        *puVar53 = *pppppppbVar42;
        iVar26 = FUN_ram_480edbbe(local_480);
        if (iVar26 == 0) {
          if ((bVar1) && (DAT_ram_4ff687e8 == -0x80000000)) {
            DAT_ram_4ff687e8 = 0;
          }
LAB_ram_481043a0:
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                           "{\"ok\":false,\"error\":\"experiment_filter_capacity\"}");
        }
        else {
          if ((bVar1) && (DAT_ram_4ff687e8 == -0x80000000)) {
            DAT_ram_4ff687e8 = 0;
          }
          puVar53 = &local_384;
          pppppppbVar42 = (byte *******)&local_16c;
          do {
            ppppppbVar49 = (byte ******)*puVar53;
            ppppppbVar47 = (byte ******)puVar53[1];
            ppppppbVar33 = (byte ******)puVar53[2];
            ppppppbVar39 = (byte ******)puVar53[3];
            ppppppbVar41 = (byte ******)puVar53[4];
            pppppppbVar42[5] = (byte ******)puVar53[5];
            *pppppppbVar42 = ppppppbVar49;
            pppppppbVar42[1] = ppppppbVar47;
            pppppppbVar42[2] = ppppppbVar33;
            pppppppbVar42[3] = ppppppbVar39;
            pppppppbVar42[4] = ppppppbVar41;
            puVar53 = puVar53 + 6;
            pppppppbVar42 = pppppppbVar42 + 6;
          } while (puVar53 != &local_33c);
          puVar53 = local_4d0;
          pppppppbVar42 = (byte *******)&local_16c;
          do {
            ppppppbVar49 = pppppppbVar42[1];
            ppppppbVar47 = pppppppbVar42[2];
            ppppppbVar33 = pppppppbVar42[3];
            ppppppbVar39 = pppppppbVar42[4];
            ppppppbVar41 = pppppppbVar42[5];
            *puVar53 = *pppppppbVar42;
            puVar53[1] = ppppppbVar49;
            puVar53[2] = ppppppbVar47;
            puVar53[3] = ppppppbVar33;
            puVar53[4] = ppppppbVar39;
            puVar53[5] = ppppppbVar41;
            pppppppbVar42 = pppppppbVar42 + 6;
            puVar53 = puVar53 + 6;
          } while (pppppppbVar42 != appppppbStack_124);
          FUN_ram_480f50d2(&DAT_ram_4ff60e20,local_4d0);
          FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
          pppppppbVar42 = (byte *******)&local_16c;
          puVar53 = &DAT_ram_4ff61958;
          do {
            ppppppbVar33 = (byte ******)puVar53[1];
            ppppppbVar39 = (byte ******)puVar53[2];
            ppppppbVar41 = (byte ******)puVar53[3];
            *pppppppbVar42 = (byte ******)*puVar53;
            pppppppbVar42[1] = ppppppbVar33;
            pppppppbVar42[2] = ppppppbVar39;
            pppppppbVar42[3] = ppppppbVar41;
            puVar53 = puVar53 + 4;
            pppppppbVar42 = pppppppbVar42 + 4;
          } while (puVar53 != (undefined4 *)&DAT_ram_4ff619f8);
          *pppppppbVar42 = _DAT_ram_4ff619f8;
          FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
          iVar26 = FUN_ram_4803cb08();
          if (((iVar26 != 0) || (bStack_2a4 != bStack_d4)) &&
             (DAT_ram_4ff47ea4 = DAT_ram_4ff47ea4 + 1, DAT_ram_4ff47ea4 == 0)) {
            DAT_ram_4ff47ea4 = 1;
          }
          if (cStack_2c7 != cStack_f7) {
            DAT_ram_4ff47ea8 = DAT_ram_4ff47ea8 + 1;
          }
          FUN_ram_4802a8a8(&local_298,"driverFeature");
          iVar26 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_298);
          FUN_ram_4802a59e(&local_298);
          if (iVar26 == 0) {
            FUN_ram_48067954(&DAT_ram_4ff5cb9c,200,"application/json","{\"ok\":true}");
            FUN_ram_4802a59e(auStack_3a4);
            FUN_ram_4802a59e(auStack_3b4);
            FUN_ram_4802a59e(auStack_3c4);
            return;
          }
          recovered_http_post_save_480f34ec();
        }
        goto LAB_ram_48102ab6;
      }
      uStack_394 = CONCAT13(bStack_28c,CONCAT12(local_298._2_1_,CONCAT11(bVar12,cVar21)));
      iVar26 = FUN_ram_48101c1c(&DAT_ram_4ff60e20,&uStack_394);
      if (iVar26 == 0) {
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                         "{\"ok\":false,\"error\":\"battery_preheat_restore_failed\"}");
      }
      else {
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                         "{\"ok\":false,\"error\":\"can_quiesce\"}");
      }
    }
    else {
      if ((iVar26 != 0) && (uVar43 != 0)) goto LAB_ram_481042d4;
      if ((local_298._2_1_ == '\x03') && (cStack_25f == '\0')) {
        if (((iStack_50c != 0) && (uVar55 = uVar32, uVar32 != 0xf)) &&
           ((0x1e < (uVar50 - 0x1e & 0xff) ||
            (uVar55 = uVar50, (0x40008001U >> (uVar50 - 0x1e & 0x1f) & 1) == 0)))) {
          uVar55 = 0x2d;
        }
        uVar32 = uVar55;
        if ((iVar26 == 0) && (uVar43 = uVar57, uVar57 == 0)) goto LAB_ram_481036ae;
LAB_ram_481041ea:
        uVar43 = 0;
LAB_ram_481036ae:
        iVar26 = FUN_ram_480f47ac(&DAT_ram_4ff60e20,uVar43,uVar32);
LAB_ram_481036bc:
        if (iVar26 != 2) goto LAB_ram_481036c2;
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                         "{\"ok\":false,\"error\":\"battery_preheat_command_blocked\"}");
      }
      else {
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                         "{\"ok\":false,\"error\":\"battery_preheat_retry_blocked\"}");
      }
    }
  }
LAB_ram_481042f4:
  if ((bVar1) && (DAT_ram_4ff687e8 == -0x80000000)) {
    DAT_ram_4ff687e8 = 0;
  }
LAB_ram_48102ab6:
  FUN_ram_4802a59e(auStack_3a4);
LAB_ram_48102b1c:
  FUN_ram_4802a59e(auStack_3b4);
LAB_ram_481020c4:
  FUN_ram_4802a59e(auStack_3c4);
  return;
}


