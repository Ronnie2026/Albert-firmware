/* Firmware entry: 0x4807c872 */

/* WARNING: Removing unreachable block (ram,0x4807cd3c) */
/* WARNING: Removing unreachable block (ram,0x4807caa0) */
/* WARNING: Removing unreachable block (ram,0x4807cef6) */
/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4807c872(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined1 **ppuVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  undefined1 **ppuVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  int iVar26;
  char *pcVar27;
  int iVar28;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  char cStack_169;
  undefined4 local_168 [39];
  undefined1 *local_cc [19];
  uint uStack_80;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x25c) == '\x01') {
    memset(local_168,0,0x9c);
    iVar13 = FUN_ram_48074808(param_1,param_1 + 0x330,local_168);
    if (iVar13 == 0) {
      fence();
      if (*(char *)(param_1 + 0x3ff9) == '\0') {
        iVar26 = *(int *)(param_1 + 0x2ecc);
        iVar13 = FUN_ram_48025ba6();
        if (iVar26 - iVar13 < 1) {
          pcVar27 = "manifest_timeout";
        }
        else if (*(char *)(param_1 + 0xe78) == '\0') {
          pcVar27 = "manifest_dns";
        }
        else {
          pcVar27 = "manifest_config";
        }
      }
      else {
        pcVar27 = "manifest_cancelled";
      }
      FUN_ram_4ff454c4(param_1 + 0xe9c,pcVar27);
      cVar17 = *(char *)(param_1 + 0xe9c);
    }
    else {
      *(undefined1 *)(param_1 + 0xe79) = 0;
      *(undefined4 *)(param_1 + 0xe80) = 0;
      pcVar27 = (char *)(param_1 + 0x3ff9);
      bVar1 = false;
      while (fence(), *pcVar27 == '\0') {
        uStack_24 = unaff_s7;
        uStack_28 = unaff_s8;
        uStack_2c = unaff_s9;
        uStack_30 = unaff_s10;
        ppuVar11 = local_cc;
        puVar24 = local_168;
        do {
          puVar23 = puVar24;
          ppuVar19 = ppuVar11;
          puVar22 = (undefined1 *)puVar23[1];
          puVar14 = (undefined1 *)puVar23[2];
          puVar15 = (undefined1 *)puVar23[3];
          *ppuVar19 = (undefined1 *)*puVar23;
          ppuVar19[1] = puVar22;
          ppuVar19[2] = puVar14;
          ppuVar19[3] = puVar15;
          puVar24 = puVar23 + 4;
          ppuVar11 = ppuVar19 + 4;
        } while (puVar24 != local_168 + 0x24);
        puVar22 = (undefined1 *)puVar23[5];
        puVar14 = (undefined1 *)puVar23[6];
        iVar26 = *(int *)(param_1 + 0x2ecc);
        ppuVar19[4] = (undefined1 *)*puVar24;
        ppuVar19[5] = puVar22;
        ppuVar19[6] = puVar14;
        iVar13 = FUN_ram_48025ba6();
        uVar20 = iVar26 - iVar13;
        uStack_80 = 10000;
        if ((int)uVar20 < 0x2711) {
          uStack_80 = (int)~uVar20 >> 0x1f & uVar20;
        }
        if ((int)uVar20 < 1) {
LAB_ram_4807ce12:
          pcVar27 = "manifest_timeout";
LAB_ram_4807cbf0:
          uVar12 = 0x11;
LAB_ram_4807cbf2:
          FUN_ram_4ff45158(param_1 + 0xe9c,pcVar27,uVar12);
          goto LAB_ram_4807cc16;
        }
        iVar13 = FUN_ram_4816793e(local_cc);
        if (iVar13 == 0) {
          pcVar27 = "manifest_memory";
          uVar12 = 0x10;
          goto LAB_ram_4807cbf2;
        }
        uVar20 = FUN_ram_4802e9b4(iVar13,param_1);
        if (uVar20 == 0) {
          FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_auth",0xe);
          FUN_ram_4816725c(iVar13);
          FUN_ram_481674aa(iVar13);
          goto LAB_ram_4807cc16;
        }
        uVar29 = FUN_ram_4ff21a0a();
        uVar30 = __divdi3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),1000,0);
        *(char *)(param_1 + 0xe79) = *(char *)(param_1 + 0xe79) + '\x01';
        iVar26 = FUN_ram_48168530(iVar13,0);
        uVar29 = FUN_ram_4ff21a0a();
        uVar31 = __divdi3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),1000,0);
        if (uVar31 < uVar30) {
          uVar25 = 0;
          iVar16 = 0;
        }
        else {
          uVar25 = (uint)uVar31 - (int)uVar30;
          uVar21 = (uint)((uint)uVar31 < uVar25);
          uVar18 = (int)(uVar31 >> 0x20) - (int)(uVar30 >> 0x20);
          iVar16 = uVar18 - uVar21;
          if (uVar18 != uVar21) {
            uVar25 = 0xffffffff;
            iVar16 = 0;
          }
        }
        uVar25 = uVar25 + *(uint *)(param_1 + 0xe80);
        if ((uint)(uVar25 < *(uint *)(param_1 + 0xe80)) + iVar16 != 0) {
          uVar25 = 0xffffffff;
        }
        *(uint *)(param_1 + 0xe80) = uVar25;
        if (iVar26 == 0) {
          *(undefined4 *)(param_1 + 0xe64) = 0;
          *(undefined4 *)(param_1 + 0xe68) = 0;
          *(undefined4 *)(param_1 + 0xe6c) = 0;
          *(undefined4 *)(param_1 + 0xe70) = 0;
          *(undefined4 *)(param_1 + 0xe74) = 0;
          iVar26 = FUN_ram_480300ac(param_1,iVar13);
          if (iVar26 == 0) {
            fence();
            if (*pcVar27 == '\0') {
              pcVar27 = "manifest_timeout";
            }
            else {
              pcVar27 = "manifest_cancelled";
            }
            goto LAB_ram_4807c91a;
          }
          uVar29 = FUN_ram_4ff21a0a();
          uVar30 = __divdi3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),1000,0);
          lVar32 = FUN_ram_48167188(iVar13);
          uVar20 = (uint)lVar32;
          uVar29 = FUN_ram_4ff21a0a();
          uVar31 = __divdi3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),1000,0);
          if (uVar31 < uVar30) {
            uVar25 = 0;
          }
          else {
            uVar25 = (uint)uVar31 - (int)uVar30;
            if ((int)(uVar31 >> 0x20) - (int)(uVar30 >> 0x20) != (uint)((uint)uVar31 < uVar25)) {
              uVar25 = 0xffffffff;
            }
          }
          *(uint *)(param_1 + 0xe84) = uVar25;
          iVar26 = FUN_ram_48168650(iVar13);
          fence();
          if (*pcVar27 != '\0') {
            FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_cancelled",0x13);
            goto LAB_ram_4807c922;
          }
          iVar28 = *(int *)(param_1 + 0x2ecc);
          iVar16 = FUN_ram_48025ba6();
          cVar10 = s_no_release_ram_481c8b54[10];
          cVar9 = s_no_release_ram_481c8b54[9];
          cVar8 = s_no_release_ram_481c8b54[8];
          cVar7 = s_no_release_ram_481c8b54[7];
          cVar6 = s_no_release_ram_481c8b54[5];
          cVar5 = s_no_release_ram_481c8b54[4];
          cVar4 = s_no_release_ram_481c8b54[3];
          cVar3 = s_no_release_ram_481c8b54[2];
          cVar2 = s_no_release_ram_481c8b54[1];
          cVar17 = s_no_release_ram_481c8b54[0];
          if (iVar28 - iVar16 < 1) {
            FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_timeout",0x11);
            goto LAB_ram_4807c922;
          }
          if (lVar32 < 0) {
            FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_headers",0x11);
            goto LAB_ram_4807c922;
          }
          if (iVar26 == 0x194) {
            *(char *)(param_1 + 0xea2) = s_no_release_ram_481c8b54[6];
            *(char *)(param_1 + 0xe9c) = cVar17;
            *(char *)(param_1 + 0xe9d) = cVar2;
            *(char *)(param_1 + 0xe9e) = cVar3;
            *(char *)(param_1 + 0xe9f) = cVar4;
            *(char *)(param_1 + 0xea0) = cVar5;
            *(char *)(param_1 + 0xea1) = cVar6;
            *(char *)(param_1 + 0xea3) = cVar7;
            *(char *)(param_1 + 0xea4) = cVar8;
            *(char *)(param_1 + 0xea5) = cVar9;
            *(char *)(param_1 + 0xea6) = cVar10;
            FUN_ram_4816725c(iVar13);
            FUN_ram_481674aa(iVar13);
            cVar17 = *(char *)(param_1 + 0xe9c);
            goto joined_r0x4807d058;
          }
          if (iVar26 != 200) {
            FUN_ram_4819ad74(param_1 + 0xe9c,0x28,"manifest_http_%d",iVar26);
            goto LAB_ram_4807c922;
          }
          if ((lVar32 == 0) || (0x2000 < lVar32)) {
            FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_length",0x10);
            goto LAB_ram_4807c922;
          }
          uVar25 = *(uint *)(param_1 + 0x2ec8);
          if (uVar20 <= uVar25) goto LAB_ram_4807cdb6;
          goto LAB_ram_4807ce6a;
        }
        *(int *)(param_1 + 0xe64) = iVar26;
        uVar12 = FUN_ram_48166e76(iVar13);
        *(undefined4 *)(param_1 + 0xe68) = uVar12;
        uVar12 = FUN_ram_48166eb2(iVar13,param_1 + 0xe70,param_1 + 0xe74);
        iVar26 = *(int *)(param_1 + 0xe70);
        *(undefined4 *)(param_1 + 0xe6c) = uVar12;
        if ((iVar26 != 0) && (iVar26 != -0x6800)) {
          uVar20 = (uint)(iVar26 == -0x50 || iVar26 == -0x44);
        }
        fence();
        if ((((((*pcVar27 != '\0') ||
               (iVar16 = *(int *)(param_1 + 0x2ecc), iVar26 = FUN_ram_48025ba6(),
               iVar16 - iVar26 < 1)) || (*(int *)(param_1 + 0xe74) != 0)) ||
             ((uVar20 == 0 || (uVar25 = *(uint *)(param_1 + 0xe6c), (uVar25 & 0xfffffff7) == 0x8012)
              ))) || (uVar25 == 0x8015)) ||
           (((uVar25 != 0x8006 &&
             (((*(int *)(param_1 + 0xe68) != 0x68 && (*(int *)(param_1 + 0xe68) != 0x74)) ||
              ((uVar25 != 0 && (uVar25 != 0x8004)))))) || (bVar1)))) {
          uVar20 = 0;
        }
        else {
          *(uint *)(param_1 + 0xe90) = uVar25;
          *(undefined4 *)(param_1 + 0xe98) = 0;
          *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe64);
          *(undefined4 *)(param_1 + 0xe8c) = *(undefined4 *)(param_1 + 0xe68);
          *(undefined4 *)(param_1 + 0xe94) = *(undefined4 *)(param_1 + 0xe70);
        }
        FUN_ram_4816725c(iVar13);
        FUN_ram_481674aa(iVar13);
        fence();
        if (*pcVar27 != '\0') break;
        iVar26 = *(int *)(param_1 + 0x2ecc);
        iVar13 = FUN_ram_48025ba6();
        if (iVar26 - iVar13 < 1) goto LAB_ram_4807ce12;
        if (uVar20 == 0) {
LAB_ram_4807cbe0:
          pcVar27 = "manifest_connect";
          goto LAB_ram_4807cbf0;
        }
        *(undefined4 *)(param_1 + 0xe64) = 0;
        *(undefined4 *)(param_1 + 0xe68) = 0;
        *(undefined4 *)(param_1 + 0xe6c) = 0;
        *(undefined4 *)(param_1 + 0xe70) = 0;
        *(undefined4 *)(param_1 + 0xe74) = 0;
        if (bVar1) goto LAB_ram_4807cbe0;
        bVar1 = true;
        unaff_s7 = uStack_24;
        unaff_s8 = uStack_28;
        unaff_s9 = uStack_2c;
        unaff_s10 = uStack_30;
      }
      FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_cancelled",0x13);
LAB_ram_4807cc16:
      cVar17 = *(char *)(param_1 + 0xe9c);
    }
    goto joined_r0x4807d058;
  }
  if (*(char *)(param_1 + 0x25c) != '\x02') {
    cVar17 = *(char *)(param_1 + 0xe9c);
    goto joined_r0x4807d058;
  }
  iVar13 = FUN_ram_48074c5c();
  if (*(char *)(param_1 + 0xe9c) != '\0') {
    cVar17 = '\x02' - (char)iVar13;
    goto LAB_ram_4807c89e;
  }
  if (iVar13 != 0) {
    cVar17 = '\x01';
    goto LAB_ram_4807c89e;
  }
  goto LAB_ram_4807c95e;
LAB_ram_4807cdb6:
  if (uVar20 == uVar25) {
    *(undefined1 *)(param_1 + uVar20 + 0xec4) = 0;
    local_cc[0] = &DAT_ram_481df390;
    iVar26 = FUN_ram_48076154(param_1 + 0xec4,uVar20,0x2000,0x100,local_cc);
    if (iVar26 != 0) {
      iVar16 = FUN_ram_48129d0c();
      if ((iVar16 != 0) && (iVar16 = FUN_ram_4807c156(iVar26,0), iVar16 != 0)) {
        FUN_ram_48129c8a(iVar26,&DAT_ram_481c4274);
        iVar16 = FUN_ram_48129ca2();
        if (iVar16 != 0) {
          uVar12 = FUN_ram_48129c8a(iVar26,"release");
          iVar16 = FUN_ram_4807c1fe(uVar12,param_1 + 0x1e8,param_1);
          FUN_ram_481295cc(iVar26);
          if (iVar16 != 0) {
            FUN_ram_4816725c(iVar13);
            FUN_ram_481674aa(iVar13);
            cVar17 = '\x01';
            goto LAB_ram_4807c89e;
          }
          goto LAB_ram_4807d15a;
        }
      }
      FUN_ram_481295cc(iVar26);
    }
LAB_ram_4807d15a:
    pcVar27 = "manifest_format";
    uVar12 = 0x10;
  }
  else {
    pcVar27 = "manifest_incomplete";
    uVar12 = 0x14;
  }
  FUN_ram_4ff45158(param_1 + 0xe9c,pcVar27,uVar12);
  FUN_ram_4816725c(iVar13);
  FUN_ram_481674aa(iVar13);
  cVar17 = *(char *)(param_1 + 0xe9c);
  goto joined_r0x4807d058;
LAB_ram_4807ce6a:
  uVar21 = uVar20 - uVar25;
  uVar18 = uVar21;
  if (0x400 < uVar21) {
    uVar18 = 0x400;
  }
  uVar25 = FUN_ram_4802ea64(param_1,iVar13,param_1 + 0xec4 + uVar25,uVar18,&cStack_169,local_cc);
  if (cStack_169 != '\0') {
    pcVar27 = "manifest_timeout";
    goto LAB_ram_4807c91a;
  }
  if (((uint)local_cc[0] & 0xff) != 0) {
    pcVar27 = "manifest_cancelled";
    goto LAB_ram_4807c91a;
  }
  if (0 < (int)uVar25) {
    if (uVar21 < uVar25) {
      FUN_ram_4ff45158(param_1 + 0xe9c,"manifest_incomplete",0x14);
      goto LAB_ram_4807c922;
    }
    uVar25 = uVar25 + *(int *)(param_1 + 0x2ec8);
    *(uint *)(param_1 + 0x2ec8) = uVar25;
    if (uVar20 <= uVar25) goto LAB_ram_4807cdb6;
    goto LAB_ram_4807ce6a;
  }
  if (uVar25 == 0) {
    pcVar27 = "manifest_incomplete";
  }
  else {
    pcVar27 = "manifest_read";
  }
LAB_ram_4807c91a:
  FUN_ram_4ff454c4(param_1 + 0xe9c,pcVar27);
LAB_ram_4807c922:
  FUN_ram_4816725c(iVar13);
  FUN_ram_481674aa(iVar13);
  cVar17 = *(char *)(param_1 + 0xe9c);
joined_r0x4807d058:
  if (cVar17 == '\0') {
LAB_ram_4807c95e:
    FUN_ram_4ff45158(param_1 + 0xe9c,"network_error",0xe);
  }
  cVar17 = '\x02';
LAB_ram_4807c89e:
  puVar22 = (undefined1 *)(param_1 + 0x25e);
  do {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  } while ((undefined1 *)(param_1 + 799) != puVar22);
  *(char *)(param_1 + 0x25d) = cVar17;
  fence();
  *(undefined1 *)(param_1 + 0x3ffa) = 1;
  FUN_ram_4ff3c10a(0);
  return;
}


