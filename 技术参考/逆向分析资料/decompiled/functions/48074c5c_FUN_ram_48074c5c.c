/* Firmware entry: 0x48074c5c */

undefined4 FUN_ram_48074c5c(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  size_t sVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  uint *puVar21;
  uint *__s;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  char *pcVar27;
  undefined1 *puVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  byte *pbStack_42c;
  char *pcStack_424;
  char cStack_3f9;
  undefined4 uStack_3f8;
  uint local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  byte abStack_390 [116];
  uint uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined2 uStack_2d4;
  char acStack_2d2 [42];
  uint uStack_2a8;
  uint uStack_2a4;
  char cStack_2a0;
  undefined1 auStack_29c [156];
  undefined1 auStack_200 [192];
  uint local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined2 uStack_108;
  uint auStack_106 [21];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_200,0,0xc0);
  sVar13 = strlen((char *)(param_1 + 799));
  if (sVar13 != 0x10) {
LAB_ram_48074fa0:
    FUN_ram_4ff45158(param_1 + 0xe9c,"firmware_url",0xd);
    return 0;
  }
  pcVar27 = (char *)(param_1 + 0xdb);
  iVar14 = FUN_ram_4819ad74(auStack_200,0xc0,
                            "https://tesla.srlt.cc/api/p4/ota/images/%s.bin?device_id=%s",pcVar27,
                            (char *)(param_1 + 799));
  if (0xbe < iVar14 - 1U) goto LAB_ram_48074fa0;
  memset(auStack_29c,0,0x9c);
  iVar14 = FUN_ram_48074808(param_1,auStack_200,auStack_29c);
  if (iVar14 == 0) {
    fence();
    if (*(char *)(param_1 + 0x3ff9) == '\0') {
      iVar15 = *(int *)(param_1 + 0x2ecc);
      iVar14 = FUN_ram_48025ba6();
      if (iVar15 - iVar14 < 1) {
        pcVar27 = "download_timeout";
      }
      else if (*(char *)(param_1 + 0xe78) == '\0') {
        pcVar27 = "firmware_dns";
      }
      else {
        pcVar27 = "firmware_config";
      }
    }
    else {
      pcVar27 = "download_cancelled";
    }
    FUN_ram_4ff454c4(param_1 + 0xe9c,pcVar27);
    return 0;
  }
  iVar14 = FUN_ram_4816793e(auStack_29c);
  if (iVar14 == 0) {
    FUN_ram_4ff45158(param_1 + 0xe9c,"firmware_memory",0x10);
    return 0;
  }
  iVar15 = FUN_ram_4802e9b4(iVar14,param_1);
  if (iVar15 == 0) {
    FUN_ram_4ff45158(param_1 + 0xe9c,"firmware_auth",0xe);
LAB_ram_48074d5c:
    uStack_3f8 = 0;
LAB_ram_48074d5e:
    memset(abStack_390,0,0x74);
    FUN_ram_4817c6ba(abStack_390);
    iVar17 = FUN_ram_4817c700(abStack_390,0);
    iVar18 = 0;
LAB_ram_48074d8e:
    uVar11 = *(uint *)(param_1 + 0x1dc);
    uStack_30c = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_2f8 = 0;
    uStack_2f4 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    memset(acStack_2d2,0,0x29);
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    cStack_2a0 = '\0';
    FUN_ram_4ff45158(&uStack_31c,"P4-SOURCE-V1",0x10);
    sVar13 = strlen((char *)(param_1 + 0x71));
    iVar15 = 0;
    if (sVar13 == 0x28) {
LAB_ram_48074e1c:
      pcStack_424 = acStack_2d2;
      pcVar22 = (char *)(param_1 + 0x71);
      do {
        cVar1 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_48074e58;
      } while (pcVar22 != (char *)(param_1 + 0x99));
      FUN_ram_4ff45158(pcStack_424,(char *)(param_1 + 0x71),0x29);
LAB_ram_48074e58:
      if (iVar15 != 0) goto LAB_ram_48074e5c;
    }
LAB_ram_48075180:
    pbStack_42c = abStack_390;
    local_3f4 = 0;
    uStack_3f0 = 0;
    uStack_3ec = 0;
    uStack_3e8 = 0;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uStack_3dc = 0;
    uStack_3d8 = 0;
    if (iVar17 == 0) {
      FUN_ram_4817c8a4(pbStack_42c,&local_3f4);
    }
    FUN_ram_4817c6c8(pbStack_42c);
LAB_ram_480751aa:
    fence();
    *(undefined1 *)(param_1 + 0x3ff8) = 1;
joined_r0x480751b8:
    if (iVar18 != 0) {
      FUN_ram_4812d49e(uStack_3f8);
    }
  }
  else {
    iVar15 = FUN_ram_48168530(iVar14,0);
    if (iVar15 != 0) {
      *(int *)(param_1 + 0xe64) = iVar15;
      uVar16 = FUN_ram_48166e76(iVar14);
      *(undefined4 *)(param_1 + 0xe68) = uVar16;
      uVar16 = FUN_ram_48166eb2(iVar14,param_1 + 0xe70,param_1 + 0xe74);
      *(undefined4 *)(param_1 + 0xe6c) = uVar16;
      FUN_ram_4ff45158(param_1 + 0xe9c,"firmware_connect",0x11);
      goto LAB_ram_48074d5c;
    }
    iVar15 = FUN_ram_480300ac(param_1,iVar14);
    if (iVar15 == 0) {
      fence();
      if (*(char *)(param_1 + 0x3ff9) == '\0') {
        pcVar22 = "download_timeout";
      }
      else {
        pcVar22 = "download_cancelled";
      }
      FUN_ram_4ff454c4(param_1 + 0xe9c,pcVar22);
      goto LAB_ram_48074d5c;
    }
    lVar31 = FUN_ram_48167188(iVar14);
    iVar18 = FUN_ram_48168650(iVar14);
    fence();
    if (*(char *)(param_1 + 0x3ff9) != '\0') {
      FUN_ram_4ff45158(param_1 + 0xe9c,"download_cancelled",0x13);
      goto LAB_ram_48074d5c;
    }
    iVar24 = *(int *)(param_1 + 0x2ecc);
    iVar17 = FUN_ram_48025ba6();
    if (iVar24 - iVar17 < 1) {
      FUN_ram_4ff45158(param_1 + 0xe9c,"download_timeout",0x11);
      goto LAB_ram_48074d5c;
    }
    if (lVar31 < 0) {
      FUN_ram_4ff45158(param_1 + 0xe9c,"firmware_headers",0x11);
      goto LAB_ram_48074d5c;
    }
    if (iVar18 != 200) {
      FUN_ram_4819ad74(param_1 + 0xe9c,0x28,"firmware_http_%d",iVar18);
      goto LAB_ram_48074d5c;
    }
    if ((*(int *)(param_1 + 0x1dc) != (int)lVar31) || ((int)((ulonglong)lVar31 >> 0x20) != 0)) {
      FUN_ram_4ff45158(param_1 + 0xe9c,"firmware_length",0x10);
      uStack_3f8 = 0;
      goto LAB_ram_48074d5e;
    }
    uStack_3f8 = 0;
    iVar18 = FUN_ram_4812dcc8(*(undefined4 *)(param_1 + 600),(int)lVar31,&uStack_3f8);
    cVar10 = s_req_ota_begin_ram_481bb660[0xd];
    cVar9 = s_req_ota_begin_ram_481bb660[0xc];
    cVar8 = s_req_ota_begin_ram_481bb660[0xb];
    cVar7 = s_req_ota_begin_ram_481bb660[10];
    cVar6 = s_req_ota_begin_ram_481bb660[9];
    cVar5 = s_req_ota_begin_ram_481bb660[8];
    cVar4 = s_req_ota_begin_ram_481bb660[7];
    cVar3 = s_req_ota_begin_ram_481bb660[6];
    cVar1 = s_req_ota_begin_ram_481bb660[5];
    if (iVar18 != 0) {
      *(char *)(param_1 + 0xe9c) = s_req_ota_begin_ram_481bb660[4];
      *(char *)(param_1 + 0xe9d) = cVar1;
      *(char *)(param_1 + 0xe9e) = cVar3;
      *(char *)(param_1 + 0xe9f) = cVar4;
      *(char *)(param_1 + 0xea0) = cVar5;
      *(char *)(param_1 + 0xea1) = cVar6;
      *(char *)(param_1 + 0xea2) = cVar7;
      *(char *)(param_1 + 0xea3) = cVar8;
      *(char *)(param_1 + 0xea4) = cVar9;
      *(char *)(param_1 + 0xea5) = cVar10;
      goto LAB_ram_48074d5e;
    }
    memset(abStack_390,0,0x74);
    FUN_ram_4817c6ba(abStack_390);
    iVar17 = FUN_ram_4817c700(abStack_390,0);
    cVar7 = s_command_sha256_ram_481d0488[0xe];
    cVar6 = s_command_sha256_ram_481d0488[0xd];
    cVar5 = s_command_sha256_ram_481d0488[0xc];
    cVar4 = s_command_sha256_ram_481d0488[0xb];
    cVar3 = s_command_sha256_ram_481d0488[10];
    cVar1 = s_command_sha256_ram_481d0488[9];
    iVar18 = iVar15;
    if (iVar17 != 0) {
      *(char *)(param_1 + 0xe9c) = s_command_sha256_ram_481d0488[8];
      *(char *)(param_1 + 0xe9d) = cVar1;
      *(char *)(param_1 + 0xe9e) = cVar3;
      *(char *)(param_1 + 0xe9f) = cVar4;
      *(char *)(param_1 + 0xea0) = cVar5;
      *(char *)(param_1 + 0xea1) = cVar6;
      *(char *)(param_1 + 0xea2) = cVar7;
      goto LAB_ram_48074d8e;
    }
    uVar11 = *(uint *)(param_1 + 0x1dc);
    memset(&uStack_30c,0,0x3a);
    memset(acStack_2d2,0,0x29);
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    cStack_2a0 = '\0';
    FUN_ram_4ff45158(&uStack_31c,"P4-SOURCE-V1",0x10);
    sVar13 = strlen((char *)(param_1 + 0x71));
    if (sVar13 == 0x28) goto LAB_ram_48074e1c;
LAB_ram_48074e5c:
    pcStack_424 = acStack_2d2;
    pbStack_42c = abStack_390;
    __s = &local_3f4;
    uVar25 = 0;
    uVar12 = uVar11;
    while (uVar12 != 0) {
      puVar28 = (undefined1 *)(param_1 + 0x2ed0);
      uVar20 = uVar12;
      if (0x1000 < uVar12) {
        uVar20 = 0x1000;
      }
      uVar20 = FUN_ram_4802ea64(param_1,iVar14,puVar28,uVar20,&cStack_3f9,__s);
      if (cStack_3f9 != '\0') {
        pcVar27 = "download_timeout";
LAB_ram_48075536:
        FUN_ram_4ff454c4(param_1 + 0xe9c,pcVar27);
        goto LAB_ram_48075180;
      }
      if ((local_3f4 & 0xff) != 0) {
        pcVar27 = "download_cancelled";
        goto LAB_ram_48075536;
      }
      if ((int)uVar20 < 1) {
        if (uVar20 == 0) {
          pcVar27 = "download_incomplete";
        }
        else {
          pcVar27 = "download_read";
        }
        goto LAB_ram_48075536;
      }
      if ((((uVar12 < uVar20) || (uVar11 == 0)) || (uVar11 < uVar25)) || (uVar11 - uVar25 < uVar20))
      {
LAB_ram_480752b4:
        FUN_ram_4ff45158(param_1 + 0xe9c,"download_invalid",0x11);
        goto LAB_ram_48075180;
      }
      uVar25 = uVar25 + uVar20;
      iVar15 = FUN_ram_4817c72e(pbStack_42c,puVar28,uVar20);
      if (iVar15 != 0) goto LAB_ram_480752b4;
      if ((cStack_2a0 == '\0') && (acStack_2d2[0] != '\0')) {
        puVar26 = puVar28;
        uVar29 = uStack_2a8;
        uVar30 = uStack_2a4;
        do {
          *(undefined1 *)((int)&uStack_30c + uVar29) = *puVar26;
          uVar29 = (uVar29 + 1) % 0x3a;
          if (uVar30 < 0x3a) {
            uVar30 = uVar30 + 1;
            uStack_2a4 = uVar30;
          }
          uStack_2a8 = uVar29;
          if (uVar30 == 0x3a) {
            uStack_13c = uStack_318;
            local_140 = uStack_31c;
            uStack_138 = uStack_314;
            uStack_134 = uStack_310;
            uStack_130 = 0;
            uStack_12c = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            uStack_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            FUN_ram_4ff45158(&uStack_130,pcStack_424,0x28);
            puVar21 = &local_140;
            while (pcVar22 = (char *)((int)puVar21 + (uVar29 - (int)&local_140)), uVar23 = *puVar21,
                  puVar21 = (uint *)((int)puVar21 + 1),
                  *(char *)((int)&uStack_30c + (uint)pcVar22 % 0x3a) == (char)uVar23) {
              if (puVar21 == auStack_106) {
                cStack_2a0 = '\x01';
                uVar29 = *(uint *)(param_1 + 0x3ff0);
                goto joined_r0x480750ee;
              }
            }
          }
          puVar26 = puVar26 + 1;
        } while (puVar26 != (undefined1 *)(param_1 + 0x2ed0 + uVar20));
      }
      uVar29 = *(uint *)(param_1 + 0x3ff0);
joined_r0x480750ee:
      uVar30 = uVar20;
      if (uVar29 < 0x120) {
        uVar23 = 0x120 - uVar29;
        if (uVar23 < uVar20) {
          uVar30 = uVar23;
        }
        FUN_ram_4ff45158(uVar29 + param_1 + 0x3ed0,puVar28,uVar30);
        iVar15 = *(int *)(param_1 + 0x3ff0) + uVar30;
        *(int *)(param_1 + 0x3ff0) = iVar15;
        if (iVar15 == 0x120) {
          if (((*(char *)(param_1 + 0x3ed0) == -0x17) && (*(short *)(param_1 + 0x3edc) == 0x12)) &&
             ((*(short *)(param_1 + 0x1e0) == *(short *)(param_1 + 0x3edf) &&
              (*(short *)(param_1 + 0x1e2) == *(short *)(param_1 + 0x3ee1))))) {
            FUN_ram_4ff45158(&local_140,param_1 + 0x3ef0,0x100);
            uStack_3cc = uStack_12c;
            uStack_3c8 = uStack_128;
            uStack_3d0 = uStack_130;
            uStack_3c4 = uStack_124;
            uStack_3c0 = uStack_120;
            uStack_3b8 = uStack_118;
            uStack_3b4 = uStack_114;
            uStack_3bc = uStack_11c;
            local_3b0 = uStack_b0;
            uStack_3ac = uStack_ac;
            uStack_3a4 = uStack_a4;
            uStack_3a0 = uStack_a0;
            uStack_39c = uStack_9c;
            uStack_3a8 = uStack_a8;
            uStack_3d4 = local_140;
            uStack_398 = uStack_98;
            uStack_394 = uStack_94;
            if ((local_140 == 0xabcd5432) &&
               (iVar15 = FUN_ram_4ff45520(&uStack_3d0,param_1 + 0x41,0x20), iVar15 == 0)) {
              pcVar22 = (char *)(param_1 + 0x9a);
              sVar13 = strlen(pcVar22);
              if (sVar13 == 0x40) {
                do {
                  cVar1 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU)))
                  goto LAB_ram_48075712;
                } while (pcVar22 != (char *)(param_1 + 0xda));
                pbVar19 = (byte *)&local_3b0;
                pcVar22 = (char *)(param_1 + 0x9b);
                do {
                  bVar2 = *pbVar19;
                  pbVar19 = pbVar19 + 1;
                  if ((pcVar22[-1] != "0123456789abcdef"[bVar2 >> 4]) ||
                     (cVar1 = *pcVar22, pcVar22 = pcVar22 + 2,
                     cVar1 != "0123456789abcdef"[bVar2 & 0xf])) goto LAB_ram_48075712;
                } while (pbStack_42c != pbVar19);
                iVar15 = FUN_ram_4812d240(uStack_3f8,param_1 + 0x3ed0,0x120);
                cVar8 = s_req_ota_write_ram_481b7328[0xb];
                cVar7 = s_req_ota_write_ram_481b7328[10];
                cVar6 = s_req_ota_write_ram_481b7328[9];
                cVar5 = s_req_ota_write_ram_481b7328[8];
                cVar4 = s_req_ota_write_ram_481b7328[7];
                cVar3 = s_req_ota_write_ram_481b7328[6];
                cVar1 = s_req_ota_write_ram_481b7328[5];
                if (iVar15 == 0) goto LAB_ram_48075134;
                *(char *)(param_1 + 0xe9c) = s_req_ota_write_ram_481b7328[4];
                cVar10 = s_req_ota_write_ram_481b7328[0xd];
                cVar9 = s_req_ota_write_ram_481b7328[0xc];
                *(char *)(param_1 + 0xe9d) = cVar1;
                *(char *)(param_1 + 0xe9e) = cVar3;
                *(char *)(param_1 + 0xe9f) = cVar4;
                *(char *)(param_1 + 0xea0) = cVar5;
                *(char *)(param_1 + 0xea1) = cVar6;
                *(char *)(param_1 + 0xea2) = cVar7;
                *(char *)(param_1 + 0xea3) = cVar8;
                *(char *)(param_1 + 0xea4) = cVar9;
                *(char *)(param_1 + 0xea5) = cVar10;
                goto LAB_ram_48075180;
              }
            }
LAB_ram_48075712:
            FUN_ram_4ff45158(param_1 + 0xe9c,"image_descriptor",0x11);
          }
          else {
            FUN_ram_4ff45158(param_1 + 0xe9c,"image_header",0xd);
          }
          goto LAB_ram_48075180;
        }
LAB_ram_48075134:
        if (uVar23 < uVar20) {
          puVar28 = puVar28 + uVar30;
          uVar30 = uVar20 - uVar30;
          goto LAB_ram_48074f74;
        }
      }
      else {
LAB_ram_48074f74:
        iVar15 = FUN_ram_4812d240(uStack_3f8,puVar28,uVar30);
        cVar8 = s_req_ota_write_ram_481b7328[0xb];
        cVar7 = s_req_ota_write_ram_481b7328[10];
        cVar6 = s_req_ota_write_ram_481b7328[9];
        cVar5 = s_req_ota_write_ram_481b7328[8];
        cVar4 = s_req_ota_write_ram_481b7328[7];
        cVar3 = s_req_ota_write_ram_481b7328[6];
        cVar1 = s_req_ota_write_ram_481b7328[5];
        if (iVar15 != 0) {
          *(char *)(param_1 + 0xe9c) = s_req_ota_write_ram_481b7328[4];
          *(char *)(param_1 + 0xe9d) = cVar1;
          cVar9 = s_req_ota_write_ram_481b7328[0xd];
          cVar1 = s_req_ota_write_ram_481b7328[0xc];
          *(char *)(param_1 + 0xe9e) = cVar3;
          *(char *)(param_1 + 0xe9f) = cVar4;
          *(char *)(param_1 + 0xea0) = cVar5;
          *(char *)(param_1 + 0xea1) = cVar6;
          *(char *)(param_1 + 0xea2) = cVar7;
          *(char *)(param_1 + 0xea3) = cVar8;
          *(char *)(param_1 + 0xea4) = cVar1;
          *(char *)(param_1 + 0xea5) = cVar9;
          fence();
          *(uint *)(param_1 + 0x3ff4) = uVar25;
          goto LAB_ram_48075180;
        }
      }
      uVar12 = uVar12 - uVar20;
      fence();
      *(uint *)(param_1 + 0x3ff4) = uVar25;
    }
    memset(__s,0,0x20);
    if ((iVar17 == 0) &&
       (iVar15 = FUN_ram_4817c8a4(pbStack_42c,__s), cVar7 = s_command_sha256_ram_481d0488[0xe],
       cVar6 = s_command_sha256_ram_481d0488[0xd], cVar5 = s_command_sha256_ram_481d0488[0xc],
       cVar4 = s_command_sha256_ram_481d0488[0xb], cVar3 = s_command_sha256_ram_481d0488[10],
       cVar1 = s_command_sha256_ram_481d0488[9], iVar15 != 0)) {
      *(char *)(param_1 + 0xe9c) = s_command_sha256_ram_481d0488[8];
      *(char *)(param_1 + 0xe9d) = cVar1;
      *(char *)(param_1 + 0xe9e) = cVar3;
      *(char *)(param_1 + 0xe9f) = cVar4;
      *(char *)(param_1 + 0xea0) = cVar5;
      *(char *)(param_1 + 0xea1) = cVar6;
      *(char *)(param_1 + 0xea2) = cVar7;
      FUN_ram_4817c6c8(pbStack_42c);
      goto LAB_ram_480751aa;
    }
    FUN_ram_4817c6c8(pbStack_42c);
    if ((((uVar11 == 0) || (uVar11 != uVar25)) || (*(int *)(param_1 + 0x3ff0) != 0x120)) ||
       (sVar13 = strlen(pcVar27), sVar13 != 0x40)) {
LAB_ram_4807584e:
      FUN_ram_4ff45158(param_1 + 0xe9c,"sha256_mismatch",0x10);
      fence();
      *(undefined1 *)(param_1 + 0x3ff8) = 1;
      goto joined_r0x480751b8;
    }
    do {
      cVar1 = *pcVar27;
      pcVar27 = pcVar27 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_4807584e;
    } while (pcVar27 != (char *)(param_1 + 0x11b));
    pcVar27 = (char *)(param_1 + 0xdc);
    do {
      uVar11 = *__s;
      __s = (uint *)((int)__s + 1);
      if ((pcVar27[-1] != "0123456789abcdef"[(byte)((byte)uVar11 >> 4)]) ||
         (cVar1 = *pcVar27, pcVar27 = pcVar27 + 2, cVar1 != "0123456789abcdef"[(byte)uVar11 & 0xf]))
      goto LAB_ram_4807584e;
    } while (__s != &uStack_3d4);
    fence();
    *(undefined1 *)(param_1 + 0x3ff8) = 1;
    if (cStack_2a0 == '\0') {
      FUN_ram_4ff45158(param_1 + 0xe9c,"source_identity",0x10);
      goto joined_r0x480751b8;
    }
    iVar15 = FUN_ram_4802e658(param_1);
    if (iVar15 == 0) goto joined_r0x480751b8;
    iVar18 = FUN_ram_4812d4dc(uStack_3f8);
    cVar8 = s_req_ota_end_ram_481bb670[0xb];
    cVar7 = s_req_ota_end_ram_481bb670[10];
    cVar6 = s_req_ota_end_ram_481bb670[9];
    cVar5 = s_req_ota_end_ram_481bb670[8];
    cVar4 = s_req_ota_end_ram_481bb670[7];
    cVar3 = s_req_ota_end_ram_481bb670[6];
    cVar1 = s_req_ota_end_ram_481bb670[5];
    if (iVar18 == 0) {
      memset(&local_140,0,0x100);
      iVar18 = FUN_ram_4812d892(*(undefined4 *)(param_1 + 600),&local_140);
      if (iVar18 == 0) {
        uStack_3d0 = uStack_130;
        uStack_3cc = uStack_12c;
        uStack_3c8 = uStack_128;
        uStack_3c4 = uStack_124;
        uStack_3c0 = uStack_120;
        uStack_3b8 = uStack_118;
        uStack_3b4 = uStack_114;
        uStack_39c = uStack_9c;
        uStack_3d4 = local_140;
        uStack_3bc = uStack_11c;
        local_3b0 = uStack_b0;
        uStack_3ac = uStack_ac;
        uStack_3a8 = uStack_a8;
        uStack_3a4 = uStack_a4;
        uStack_3a0 = uStack_a0;
        uStack_398 = uStack_98;
        uStack_394 = uStack_94;
        if ((local_140 == 0xabcd5432) &&
           (iVar18 = FUN_ram_4ff45520(&uStack_3d0,param_1 + 0x41,0x20), iVar18 == 0)) {
          pcVar27 = (char *)(param_1 + 0x9a);
          sVar13 = strlen(pcVar27);
          if (sVar13 == 0x40) {
            do {
              cVar1 = *pcVar27;
              pcVar27 = pcVar27 + 1;
              if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_48075ae4;
            } while ((char *)(param_1 + 0xda) != pcVar27);
            pbVar19 = (byte *)&local_3b0;
            pcVar27 = (char *)(param_1 + 0x9b);
            do {
              bVar2 = *pbVar19;
              pbVar19 = pbVar19 + 1;
              if ((pcVar27[-1] != "0123456789abcdef"[bVar2 >> 4]) ||
                 (cVar1 = *pcVar27, pcVar27 = pcVar27 + 2, cVar1 != "0123456789abcdef"[bVar2 & 0xf])
                 ) goto LAB_ram_48075ae4;
            } while (pbStack_42c != pbVar19);
            goto LAB_ram_480751be;
          }
        }
      }
LAB_ram_48075ae4:
      FUN_ram_4ff45158(param_1 + 0xe9c,"image_descriptor",0x11);
      iVar15 = 0;
      goto LAB_ram_480751be;
    }
    *(char *)(param_1 + 0xe9c) = s_req_ota_end_ram_481bb670[4];
    *(char *)(param_1 + 0xe9d) = cVar1;
    *(char *)(param_1 + 0xe9e) = cVar3;
    *(char *)(param_1 + 0xe9f) = cVar4;
    *(char *)(param_1 + 0xea0) = cVar5;
    *(char *)(param_1 + 0xea1) = cVar6;
    *(char *)(param_1 + 0xea2) = cVar7;
    *(char *)(param_1 + 0xea3) = cVar8;
  }
  iVar15 = 0;
LAB_ram_480751be:
  FUN_ram_4816725c(iVar14);
  FUN_ram_481674aa(iVar14);
  local_3f4 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  puVar28 = (undefined1 *)(param_1 + 0x2ed0);
  do {
    *puVar28 = 0;
    puVar28 = puVar28 + 1;
  } while (puVar28 != (undefined1 *)(param_1 + 0x3ed0));
  puVar28 = (undefined1 *)(param_1 + 0x3ed0);
  do {
    *puVar28 = 0;
    puVar28 = puVar28 + 1;
  } while ((undefined1 *)(param_1 + 0x3ff0) != puVar28);
  if (iVar15 == 0) {
    return 0;
  }
  uVar16 = FUN_ram_4802e658(param_1);
  return uVar16;
}


