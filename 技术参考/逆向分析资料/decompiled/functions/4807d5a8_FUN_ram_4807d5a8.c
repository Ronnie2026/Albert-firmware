/* Firmware entry: 0x4807d5a8 */

/* WARNING: Removing unreachable block (ram,0x4807d666) */
/* WARNING: Removing unreachable block (ram,0x4807dacc) */

void FUN_ram_4807d5a8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte bVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  undefined4 local_380 [28];
  undefined1 auStack_310 [72];
  undefined8 uStack_2c8;
  byte local_2c0;
  byte abStack_2bf [3];
  undefined4 auStack_2bc [31];
  char cStack_23e;
  uint uStack_238;
  int iStack_234;
  char cStack_230;
  undefined1 auStack_22c [113];
  undefined1 auStack_1bb [106];
  undefined1 auStack_151 [285];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar3 = FUN_ram_48129cc4();
  if (iVar3 != 0) {
    return;
  }
  puVar13 = &DAT_ram_48223840;
  puVar14 = local_380;
  do {
    uVar4 = puVar13[1];
    uVar9 = puVar13[2];
    uVar10 = puVar13[3];
    *puVar14 = *puVar13;
    puVar14[1] = uVar4;
    puVar14[2] = uVar9;
    puVar14[3] = uVar10;
    puVar13 = puVar13 + 4;
    puVar14 = puVar14 + 4;
  } while (puVar13 != &DAT_ram_48223900);
  iVar3 = FUN_ram_4802ec52(local_380);
  if (iVar3 == 0) {
    return;
  }
  if (DAT_ram_4ff6dc9c == 0) {
    pcVar15 = "";
  }
  else {
    pcVar15 = (char *)(DAT_ram_4ff6dc9c + 0x234);
    sVar5 = strlen(pcVar15);
    if (0x40 < sVar5) {
      return;
    }
  }
  FUN_ram_4ff454c4(auStack_310,pcVar15);
  uStack_2c8 = FUN_ram_4819b728(0);
  if ((longlong)uStack_2c8 < 1700000000) {
    return;
  }
  puVar14 = &DAT_ram_482235c0;
  pbVar11 = &local_2c0;
  do {
    uVar4 = puVar14[1];
    uVar9 = puVar14[2];
    uVar10 = puVar14[3];
    *(undefined4 *)pbVar11 = *puVar14;
    *(undefined4 *)(pbVar11 + 4) = uVar4;
    *(undefined4 *)(pbVar11 + 8) = uVar9;
    *(undefined4 *)(pbVar11 + 0xc) = uVar10;
    puVar14 = puVar14 + 4;
    pbVar11 = pbVar11 + 0x10;
  } while (puVar14 != &DAT_ram_48223840);
  iVar6 = FUN_ram_4807d16e(param_1,local_380,&local_2c0);
  iVar3 = DAT_ram_4ff6dc74;
  if (iVar6 == 0) {
    pcVar15 = "ota_action_invalid";
    *(char **)(DAT_ram_4ff6dc74 + 0x710) = "failed";
  }
  else {
    if (cStack_230 != '\0') {
      iVar6 = FUN_ram_4802e468(auStack_22c);
      if (iVar6 == 0) {
        pcVar15 = "management_target_changed";
        *(char **)(iVar3 + 0x710) = "failed";
        goto LAB_ram_4807d84e;
      }
    }
    if (local_2c0 != 0) {
      sVar5 = strlen((char *)&local_2c0);
      uVar1 = uStack_2c8._4_4_;
      uVar8 = (uint)uStack_2c8;
      if (sVar5 < 0x41) {
        pbVar11 = &local_2c0;
        bVar12 = local_2c0;
        do {
          pbVar11 = pbVar11 + 1;
          if ((((0x19 < (byte)((bVar12 & 0xdf) + 0xbf)) && (9 < (byte)(bVar12 - 0x30))) &&
              (bVar12 != 0x5f)) && (1 < (byte)(bVar12 - 0x2d))) goto LAB_ram_4807d71e;
          bVar12 = *pbVar11;
        } while (bVar12 != 0);
        puVar2 = (uint *)(iVar3 + 0x280);
        puVar17 = (uint *)(iVar3 + 0x690);
        do {
          if ((uVar1 < puVar17[1]) || ((puVar17[1] == uVar1 && (uVar8 < *puVar17)))) {
            iVar6 = FUN_ram_4ff453ae(puVar2,&local_2c0);
            if (iVar6 == 0) {
              return;
            }
          }
          puVar2 = (uint *)((int)puVar2 + 0x41);
          puVar17 = puVar17 + 2;
        } while (puVar2 != (uint *)(iVar3 + 0x690));
      }
    }
LAB_ram_4807d71e:
    if (DAT_ram_4ff6de6d == '\0') {
      *(char **)(iVar3 + 0x710) = "failed";
      pcVar15 = "pending_boot_verification";
      goto LAB_ram_4807d84e;
    }
    if (((DAT_ram_4ff5c5c0 == '\0') && (*(char *)(iVar3 + 0x224) == '\0')) &&
       ((*(char *)(iVar3 + 0x221) == '\0' && (*(char *)(iVar3 + 0x222) == '\0')))) {
      iVar6 = FUN_ram_4802c840();
      iVar3 = DAT_ram_4ff6dc74;
      if (iVar6 == 0) {
        if (local_2c0 != 0) {
          sVar5 = strlen((char *)&local_2c0);
          uVar1 = uStack_2c8._4_4_;
          uVar8 = (uint)uStack_2c8;
          if (sVar5 < 0x41) {
            pbVar11 = &local_2c0;
            do {
              pbVar11 = pbVar11 + 1;
              if ((((0x19 < (byte)((local_2c0 & 0xdf) + 0xbf)) && (9 < (byte)(local_2c0 - 0x30))) &&
                  (local_2c0 != 0x5f)) && (1 < (byte)(local_2c0 - 0x2d))) goto LAB_ram_4807d7ac;
              local_2c0 = *pbVar11;
            } while (local_2c0 != 0);
            if (((uStack_2c8 < CONCAT44(iStack_234,uStack_238)) &&
                (iStack_234 - uStack_2c8._4_4_ == (uint)(uStack_238 < uStack_238 - (uint)uStack_2c8)
                )) && (uStack_238 - (uint)uStack_2c8 < 0x79)) {
              iVar6 = 0x10;
              puVar17 = (uint *)(iVar3 + 0x690);
              iVar16 = 0;
              iVar18 = iVar3 + 0x280;
              do {
                if ((uVar1 < puVar17[1]) || ((puVar17[1] == uVar1 && (uVar8 < *puVar17)))) {
                  iVar7 = FUN_ram_4ff453ae(iVar18,&local_2c0);
                  if (iVar7 == 0) goto LAB_ram_4807d9b6;
                }
                else if (iVar6 == 0x10) {
                  iVar6 = iVar16;
                }
                iVar16 = iVar16 + 1;
                puVar17 = puVar17 + 2;
                iVar18 = iVar18 + 0x41;
              } while (iVar16 != 0x10);
              if (iVar6 != 0x10) {
                FUN_ram_4ff45158(iVar6 * 0x41 + iVar3 + 0x280,&local_2c0,sVar5 + 1);
                iVar6 = (iVar6 + 0x82) * 8 + iVar3;
                *(uint *)(iVar6 + 0x280) = uStack_238;
                *(int *)(iVar6 + 0x284) = iStack_234;
                FUN_ram_4ff454c4(iVar3 + 0x238,&local_2c0);
                if (cStack_23e == '\0') {
                  *(undefined1 *)(iVar3 + 0x223) = 1;
                  if (cStack_230 == '\0') {
                    pcVar15 = "no_release";
                    *(undefined1 *)(iVar3 + 0x220) = 0;
                    *(char **)(iVar3 + 0x710) = "failed";
                  }
                  else {
                    FUN_ram_4ff45158(iVar3 + 0x38,auStack_22c,0x1e5);
                    pcVar15 = "";
                    *(undefined1 *)(iVar3 + 0x220) = 1;
                    *(char **)(iVar3 + 0x710) = "available";
                  }
                }
                else {
                  iVar6 = FUN_ram_4802e4fc(auStack_22c);
                  if (iVar6 == 0) {
                    uVar8 = FUN_ram_4807bafc(auStack_22c,"P1.6.4",
                                             "4d97f369e1a32f126b7121a66a70a53fca628dfa",
                                             DAT_ram_48223e85 != '\0');
                    if ((0x1aU >> (uVar8 & 0x1f) & 1) == 0) {
                      *(char **)(iVar3 + 0x710) = "failed";
                      if (uVar8 == 2) {
                        pcVar15 = "already_current";
                      }
                      else {
                        pcVar15 = "invalid_release";
                      }
                      goto LAB_ram_4807d97a;
                    }
                  }
                  if (*(char *)(iVar3 + 0x220) != '\0') {
                    iVar6 = FUN_ram_4ff453ae(auStack_22c,iVar3 + 0x38);
                    if (iVar6 == 0) {
                      iVar6 = FUN_ram_4ff453ae(auStack_1bb,iVar3 + 0xa9);
                      if (iVar6 == 0) {
                        iVar6 = FUN_ram_4ff453ae(auStack_151,iVar3 + 0x113);
                        if (iVar6 == 0) {
                          *(uint *)(iVar3 + 0x230) = uStack_238;
                          *(int *)(iVar3 + 0x234) = iStack_234;
                          *(char **)(iVar3 + 0x710) = "preparing";
                          *(undefined1 **)(iVar3 + 0x714) = &DAT_ram_481df390;
                          *(undefined **)(iVar3 + 0x222) = &sedeleg;
                          return;
                        }
                      }
                    }
                  }
                  pcVar15 = "update_check_required";
                  *(char **)(iVar3 + 0x710) = "failed";
                }
LAB_ram_4807d97a:
                *(char **)(iVar3 + 0x714) = pcVar15;
                return;
              }
              pcVar15 = "ota_action_capacity";
            }
            else {
LAB_ram_4807d9b6:
              pcVar15 = "ota_action_invalid";
            }
            goto LAB_ram_4807d7b4;
          }
        }
LAB_ram_4807d7ac:
        pcVar15 = "ota_action_invalid";
LAB_ram_4807d7b4:
        *(char **)(iVar3 + 0x714) = pcVar15;
        *(char **)(iVar3 + 0x710) = "failed";
        return;
      }
    }
    *(char **)(iVar3 + 0x710) = "failed";
    pcVar15 = "online_ota_busy";
  }
LAB_ram_4807d84e:
  *(char **)(iVar3 + 0x714) = pcVar15;
  return;
}


