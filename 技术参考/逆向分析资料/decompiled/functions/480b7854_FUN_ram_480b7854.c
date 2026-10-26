/* Firmware entry: 0x480b7854 */

int FUN_ram_480b7854(undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  size_t sVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 *puVar19;
  char *pcVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  char *pcVar27;
  char cVar28;
  byte bVar29;
  uint uStack_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined1 auStack_1ec [64];
  undefined1 auStack_1ac [4];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_148 [21];
  undefined1 auStack_f3 [8];
  undefined1 auStack_eb [67];
  byte local_a8 [16];
  int iStack_98;
  char acStack_94 [68];
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 auStack_40 [3];
  
  iVar3 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar27 = "";
  puVar19 = &DAT_ram_48223bb8;
  puStack_210 = &DAT_ram_481df390;
  puVar8 = local_148;
  do {
    uVar26 = puVar19[1];
    uVar25 = puVar19[2];
    uVar9 = puVar19[3];
    uVar16 = puVar19[4];
    uVar17 = puVar19[5];
    *puVar8 = *puVar19;
    puVar8[1] = uVar26;
    puVar8[2] = uVar25;
    puVar8[3] = uVar9;
    puVar8[4] = uVar16;
    puVar8[5] = uVar17;
    puVar19 = puVar19 + 6;
    puVar8 = puVar8 + 6;
  } while (puVar19 != &DAT_ram_48223cc0);
  uVar9 = FUN_ram_48129c8a(param_1,"command");
  uVar16 = FUN_ram_48025ba6();
  iVar10 = FUN_ram_480a4892(uVar9,uVar16,local_148,&puStack_210);
  if (iVar10 == 0) {
    *(undefined1 **)(iVar3 + 0x87bc0) = puStack_210;
  }
  else {
    uStack_1a8 = FUN_ram_48078fbc(iVar3 + 0x30f5b,*(undefined4 *)(iVar3 + 0x87b38),"command");
    pcVar20 = (char *)((ulonglong)uStack_1a8 >> 0x20);
    iVar5 = (int)uStack_1a8;
    if (((iVar5 == 0) || (*pcVar20 != '{')) || (0x3fff < iVar5 - 1U)) {
      *(char **)(iVar3 + 0x87bc0) = "command_too_large";
    }
    else {
      local_20c = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      FUN_ram_4817b062(pcVar20,iVar5,&local_20c,0);
      for (iVar5 = iVar3 + 0x86a7c; iVar5 != iVar3 + 0x86dfc; iVar5 = iVar5 + 0x70) {
        if (*(char *)(iVar5 + 0x6c) != '\0') {
          iVar11 = FUN_ram_4ff453ae(iVar5,local_148);
          if (iVar11 == 0) {
            iVar5 = FUN_ram_4ff4511a(iVar5 + 0x41,&local_20c,0x20);
            cVar28 = (iVar5 != 0) + '\x01';
            goto LAB_ram_480b79da;
          }
        }
      }
      cVar28 = '\0';
LAB_ram_480b79da:
      memset(auStack_1ec,0,0x41);
      puVar8 = &local_20c;
      puVar6 = auStack_1ec;
      do {
        puVar7 = puVar6 + 2;
        FUN_ram_4819ad74(puVar6,3,&DAT_ram_481c3b70,*(undefined1 *)puVar8);
        iVar5 = DAT_ram_4ff6dc94;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar6 = puVar7;
      } while (auStack_1ac != puVar7);
      iVar11 = DAT_ram_4ff6dc94 + 0x961a;
      iVar12 = FUN_ram_4ff453ae(iVar11,local_148);
      if (iVar12 == 0) {
        iVar10 = FUN_ram_4ff453ae(iVar5 + 0x965b,auStack_1ec);
        if (iVar10 == 0) {
          if (*(char *)(iVar5 + 0x9619) != '\0') {
            *(undefined1 *)(iVar5 + 0x9618) = 1;
            iVar10 = FUN_ram_480b66f6();
            if (iVar10 == 0) {
              *(char **)(iVar3 + 0x87bc0) = "receipt_store_wait";
            }
            uVar9 = FUN_ram_48025ba6();
            *(undefined4 *)(iVar3 + 0x87b50) = uVar9;
            return 0;
          }
          pcVar27 = "command_intent_wait";
        }
        else {
          pcVar27 = "command_id_collision";
        }
      }
      else {
        if (cVar28 != '\0') {
          if (cVar28 != '\x01') {
            pcVar27 = "command_id_collision";
          }
          *(char **)(iVar3 + 0x87bc0) = pcVar27;
          return 0;
        }
        if (((*(char *)(iVar3 + 0x8175f) == '\0') && (*(char *)(iVar5 + 0x9618) == '\0')) &&
           (iVar3 + 0x86a7c != iVar3 + 0x86dfc)) {
          pcVar20 = (char *)(iVar3 + 0x86ae8);
          while ((*pcVar20 != '\0' &&
                 (pcVar18 = pcVar20 + 1, pcVar20 = pcVar20 + 0x70, *pcVar18 != '\0'))) {
            if (pcVar20 == (char *)(iVar3 + 0x86e68)) goto LAB_ram_480b7ab6;
          }
          puVar19 = (undefined4 *)(iVar3 + 0x86970);
          puVar8 = local_148;
          do {
            uVar26 = *puVar8;
            uVar25 = puVar8[1];
            uVar9 = puVar8[2];
            uVar16 = puVar8[3];
            uVar17 = puVar8[4];
            puVar19[5] = puVar8[5];
            *puVar19 = uVar26;
            puVar19[1] = uVar25;
            puVar19[2] = uVar9;
            puVar19[3] = uVar16;
            puVar19[4] = uVar17;
            puVar8 = puVar8 + 6;
            puVar19 = puVar19 + 6;
          } while (puVar8 != auStack_40);
          FUN_ram_4ff45158(iVar3 + 0x85a85,&local_20c,0x20);
          *(undefined4 *)(iVar3 + 0x86a78) = param_1;
          iVar12 = DAT_ram_4ff6dd80;
          iVar13 = FUN_ram_48025ba6();
          pbVar21 = local_a8;
          bVar29 = 0;
          do {
            bVar2 = *pbVar21;
            pbVar21 = pbVar21 + 1;
            bVar29 = bVar29 | bVar2;
          } while ((byte *)&iStack_98 != pbVar21);
          if ((((bVar29 == 0) || (iStack_98 == 0)) || (29999 < uStack_4c - 1)) ||
             ((acStack_94[0] == '\0' || (iStack_48 == -1)))) {
            pcVar27 = "invalid_command";
          }
          else {
            iVar14 = FUN_ram_4ff453ae(acStack_94,iVar3 + 0x234);
            if (iVar14 == 0) {
              if ((uint)(iVar13 - iStack_50) < uStack_4c) {
                if (iStack_98 == DAT_ram_4ff5bd40) {
                  iVar13 = FUN_ram_4ff4511a(local_a8,&DAT_ram_4ff5bd30,0x10);
                  if (iVar13 == 0) {
                    if (iVar12 != iStack_48) {
                      pcVar27 = "driver_changed";
                      goto LAB_ram_480b7c14;
                    }
                    *(undefined1 *)(iVar3 + 0xf5a) = 0;
                    piVar4 = *(int **)(iStack_44 + 8);
                    pcVar20 = (char *)(iVar3 + 0xf5a);
                    if (piVar4 == (int *)0x0) {
                      iVar12 = FUN_ram_4ff453ae(auStack_f3,&DAT_ram_481c87b8);
                      uStack_214 = 0;
                      pcVar18 = pcVar27;
                      pcVar24 = pcVar27;
                      if (iVar12 == 0) {
LAB_ram_480b7ec2:
                        iVar12 = FUN_ram_4819ad74(iVar3 + 0x85823,0x201,&DAT_ram_481cd000,auStack_eb
                                                  ,pcVar18,pcVar24);
                        if (0x1ff < iVar12 - 1U) {
LAB_ram_480b8026:
                          pcVar27 = "{\"ok\":false,\"error\":\"query_too_large\"}";
                          sVar15 = 0x26;
                          uVar9 = 400;
                          goto LAB_ram_480b7c4a;
                        }
                        uStack_1a8._0_4_ = 0;
                        uStack_1a8._4_4_ = 0;
                        uStack_1a0 = 0;
                        uStack_19c = 0;
                        FUN_ram_48132f46(&uStack_1a8,0x10);
                        FUN_ram_4802e57c(&uStack_1a8,iVar3 + 0x255,0x10);
                        iVar12 = 0;
                        uVar22 = 0;
                      }
                      else {
LAB_ram_480b7fd8:
                        iVar13 = FUN_ram_4819ad74(iVar3 + 0x85823,0x201,&DAT_ram_481cd000,auStack_eb
                                                  ,&DAT_ram_481df390,&DAT_ram_481df390);
                        if (0x1ff < iVar13 - 1U) goto LAB_ram_480b8026;
                        uStack_1a8._0_4_ = 0;
                        uStack_1a8._4_4_ = 0;
                        uStack_1a0 = 0;
                        uStack_19c = 0;
                        FUN_ram_48132f46(&uStack_1a8,0x10);
                        FUN_ram_4802e57c(&uStack_1a8,iVar3 + 0x255,0x10);
                        pcVar27 = pcVar20;
                        uVar22 = uStack_214;
                      }
                      FUN_ram_4817b062(pcVar27,uVar22,iVar3 + 0x85a65,0);
                      iVar13 = FUN_ram_4819ad74(iVar3 + 0x6175c,0x8001,
                                                "%s %s HTTP/1.1\r\nHost: 127.0.0.1\r\nX-P4-Command-Nonce: %s\r\nContent-Type: application/x-www-form-urlencoded\r\nContent-Length: %u\r\nConnection: close\r\n\r\n"
                                                ,auStack_f3,iVar3 + 0x85823,iVar3 + 0x255,uVar22);
                      if ((0 < iVar13) && (iVar13 + uVar22 < 0x8001)) {
                        *(int *)(iVar3 + 0x87b3c) = iVar13;
                        if (iVar12 != 0) {
                          FUN_ram_4ff45158(iVar13 + iVar3 + 0x6175c,pcVar20,uStack_214);
                          iVar13 = *(int *)(iVar3 + 0x87b3c) + uStack_214;
                          *(int *)(iVar3 + 0x87b3c) = iVar13;
                        }
                        iVar12 = DAT_ram_4ff5bd40;
                        uVar25 = DAT_ram_4ff5bd3c;
                        uVar17 = DAT_ram_4ff5bd38;
                        uVar16 = DAT_ram_4ff5bd34;
                        uVar9 = DAT_ram_4ff5bd30;
                        *(undefined1 *)(iVar13 + iVar3 + 0x6175c) = 0;
                        *(undefined2 *)(iVar5 + 0x9618) = 1;
                        *(undefined4 *)(iVar5 + 0x116a8) = uVar16;
                        *(undefined4 *)(iVar5 + 0x116ac) = uVar17;
                        *(undefined4 *)(iVar5 + 0x116a0) = 0;
                        *(undefined4 *)(iVar5 + 0x116a4) = uVar9;
                        *(undefined4 *)(iVar5 + 0x116b0) = uVar25;
                        *(int *)(iVar5 + 0x116b4) = iVar12;
                        *(undefined1 *)(iVar5 + 0x969c) = 0;
                        FUN_ram_4ff454c4(iVar11,local_148);
                        FUN_ram_4ff454c4(iVar5 + 0x965b,auStack_1ec);
                        iVar5 = FUN_ram_480b66f6();
                        if (iVar5 == 0) {
                          FUN_ram_481295cc(*(undefined4 *)(iVar3 + 0x86a78));
                          *(undefined4 *)(iVar3 + 0x86a78) = 0;
                          *(char **)(iVar3 + 0x87bc0) = "command_intent_store_failed";
                          return iVar10;
                        }
                        *(undefined2 *)(iVar3 + 0x87b6a) = 1;
                        return iVar10;
                      }
                      pcVar27 = "{\"ok\":false,\"error\":\"request_too_large\"}";
                      sVar15 = 0x28;
                      uVar9 = 400;
                      goto LAB_ram_480b7c4a;
                    }
                    pbVar21 = (byte *)piVar4[8];
                    if (pbVar21 != (byte *)0x0) {
                      bVar29 = *pbVar21;
                      uVar22 = 0;
                      if (bVar29 == 0) {
                        uStack_214 = 1;
                        pcVar18 = pcVar20;
                        goto LAB_ram_480b7dcc;
                      }
                      while ((((byte)(bVar29 + 0x9f) < 0x1a || ((byte)(bVar29 + 0xbf) < 0x1a)) ||
                             ((byte)(bVar29 - 0x30) < 10))) {
                        if (uVar22 == 0x7fff) goto LAB_ram_480b7dac;
LAB_ram_480b7d60:
                        pcVar20[uVar22] = bVar29;
                        uVar23 = uVar22 + 1;
LAB_ram_480b7d48:
                        pbVar1 = pbVar21 + 1;
                        pbVar21 = pbVar21 + 1;
                        bVar29 = *pbVar1;
                        uVar22 = uVar23;
                        while (bVar29 == 0) {
                          uStack_214 = uVar22 + 1;
                          pcVar20[uVar22] = '\0';
                          pcVar18 = pcVar20 + uVar22;
                          if (uStack_214 == 0x8000) goto LAB_ram_480b7dac;
LAB_ram_480b7dcc:
                          *pcVar18 = '=';
                          pbVar21 = (byte *)piVar4[4];
                          if (pbVar21 == (byte *)0x0) goto LAB_ram_480b7dac;
                          bVar29 = *pbVar21;
                          while (bVar29 != 0) {
                            if (((byte)(bVar29 + 0x9f) < 0x1a) || ((byte)(bVar29 + 0xbf) < 0x1a)) {
                              if (uStack_214 == 0x7fff) goto LAB_ram_480b7dac;
LAB_ram_480b7e7a:
                              pcVar20[uStack_214] = bVar29;
                              uVar22 = uStack_214 + 1;
                            }
                            else {
                              if ((((byte)(bVar29 - 0x30) < 10) || (bVar29 == 0x2d)) ||
                                 ((bVar29 == 0x5f || ((bVar29 == 0x2e || (bVar29 == 0x7e)))))) {
                                if (uStack_214 != 0x7fff) goto LAB_ram_480b7e7a;
                                goto LAB_ram_480b7dac;
                              }
                              uVar22 = uStack_214 + 3;
                              if (0x7fff < uVar22) goto LAB_ram_480b7dac;
                              pcVar18 = pcVar20 + uStack_214;
                              *pcVar18 = '%';
                              pcVar18[1] = "0123456789ABCDEF"[*pbVar21 >> 4];
                              pcVar18[2] = "0123456789ABCDEF"[*pbVar21 & 0xf];
                            }
                            pbVar1 = pbVar21 + 1;
                            pbVar21 = pbVar21 + 1;
                            uStack_214 = uVar22;
                            bVar29 = *pbVar1;
                          }
                          pcVar20[uStack_214] = '\0';
                          piVar4 = (int *)*piVar4;
                          if (piVar4 == (int *)0x0) {
                            iVar12 = FUN_ram_4ff453ae(auStack_f3,&DAT_ram_481c87b8);
                            if (iVar12 != 0) goto LAB_ram_480b7fd8;
                            pcVar18 = "?";
                            pcVar24 = pcVar20;
                            goto LAB_ram_480b7ec2;
                          }
                          pcVar20[uStack_214] = '&';
                          pbVar21 = (byte *)piVar4[8];
                          if ((pbVar21 == (byte *)0x0) ||
                             (uVar22 = uStack_214 + 1, uVar22 == 0x8000)) goto LAB_ram_480b7dac;
                          bVar29 = *pbVar21;
                        }
                      }
                      if ((((bVar29 == 0x2d) || (bVar29 == 0x5f)) || (bVar29 == 0x2e)) ||
                         (bVar29 == 0x7e)) {
                        if (uVar22 != 0x7fff) goto LAB_ram_480b7d60;
                      }
                      else {
                        uVar23 = uVar22 + 3;
                        if (uVar23 < 0x8000) {
                          pcVar18 = pcVar20 + uVar22;
                          *pcVar18 = '%';
                          pcVar18[1] = "0123456789ABCDEF"[*pbVar21 >> 4];
                          pcVar18[2] = "0123456789ABCDEF"[*pbVar21 & 0xf];
                          goto LAB_ram_480b7d48;
                        }
                      }
                    }
LAB_ram_480b7dac:
                    pcVar27 = "{\"ok\":false,\"error\":\"form_too_large\"}";
                    sVar15 = 0x25;
                    uVar9 = 400;
                    goto LAB_ram_480b7c4a;
                  }
                }
                pcVar27 = "settings_conflict";
              }
              else {
                pcVar27 = "command_expired";
              }
            }
            else {
              pcVar27 = "boot_changed";
            }
          }
LAB_ram_480b7c14:
          memset(&uStack_1a8,0,0x60);
          FUN_ram_4819ad74(&uStack_1a8,0x60,"{\"ok\":false,\"error\":\"%s\"}",pcVar27);
          sVar15 = strlen((char *)&uStack_1a8);
          pcVar27 = (char *)&uStack_1a8;
          uVar9 = 0x199;
LAB_ram_480b7c4a:
          FUN_ram_480b7404(uVar9,pcVar27,sVar15);
          return iVar10;
        }
LAB_ram_480b7ab6:
        pcVar27 = "receipt_wait";
      }
      *(char **)(iVar3 + 0x87bc0) = pcVar27;
    }
  }
  return 0;
}


