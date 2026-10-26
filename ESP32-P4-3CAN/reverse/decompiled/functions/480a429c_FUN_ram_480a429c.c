/* Firmware entry: 0x480a429c */

int FUN_ram_480a429c(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  char local_90 [28];
  char local_74 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar9 = (byte *)&local_c0;
  local_90[0] = '\0';
  local_90[1] = '\0';
  local_90[2] = '\0';
  local_90[3] = '\0';
  local_90[4] = '\0';
  local_90[5] = '\0';
  local_90[6] = '\0';
  local_90[7] = '\0';
  local_90[8] = '\0';
  local_90[9] = '\0';
  local_90[10] = '\0';
  local_90[0xb] = '\0';
  local_90[0xc] = '\0';
  local_90[0xd] = '\0';
  local_90[0xe] = '\0';
  local_90[0xf] = '\0';
  local_90[0x10] = '\0';
  local_90[0x11] = '\0';
  local_90[0x12] = '\0';
  local_90[0x13] = '\0';
  local_90[0x14] = '\0';
  local_90[0x15] = '\0';
  local_90[0x16] = '\0';
  local_90[0x17] = '\0';
  local_90[0x18] = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  memset(local_74,0,0x41);
  iVar2 = FUN_ram_48129d0c(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_ram_48129c8a(param_1,"dataset_epoch");
    iVar3 = FUN_ram_48129ce8();
    if ((((iVar3 != 0) && (pcVar16 = *(char **)(iVar2 + 0x10), pcVar16 != (char *)0x0)) &&
        (sVar4 = strlen(pcVar16), sVar4 < 0x19)) &&
       (FUN_ram_4ff45158(local_90,pcVar16,sVar4 + 1), sVar4 == 0x18)) {
      pcVar15 = local_90;
      pcVar16 = pcVar15;
      do {
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
          return 0;
        }
      } while (pcVar16 != local_90 + 0x18);
      iVar2 = FUN_ram_48129c8a(param_1,"wipe_epoch");
      iVar3 = FUN_ram_48129ce8();
      if (((iVar3 != 0) && (pbVar5 = *(byte **)(iVar2 + 0x10), pbVar5 != (byte *)0x0)) &&
         ((uVar11 = (uint)*pbVar5, uVar11 != 0 && ((uVar11 != 0x30 || (pbVar5[1] == 0)))))) {
        uVar8 = 0;
        uVar7 = 0;
        do {
          uVar21 = uVar11 - 0x30;
          uVar11 = uVar8 * 10 + uVar11;
          uVar20 = ~uVar21;
          uVar17 = uVar11 - 0x30;
          uVar14 = uVar20 + ~((int)uVar21 >> 0x1f);
          pbVar5 = pbVar5 + 1;
          uVar14 = uVar14 + (uVar14 < uVar20);
          uVar18 = (uint)(uVar17 < uVar11) +
                   (uint)(uVar11 < uVar8 * 10) +
                   (uVar8 * 5 >> 0x1f |
                   ((uint)(uVar8 * 5 < uVar8 * 4) + (uVar8 >> 0x1e | uVar7 << 2) + uVar7) * 2) + -1;
          if (9 < (uVar21 & 0xff)) {
            return 0;
          }
          uVar13 = uVar20 - (uVar14 - (((uint)((ulonglong)uVar14 * 0xcccccccd >> 0x20) & 0xfffffffc)
                                      + uVar14 / 5));
          uVar11 = (~((int)uVar21 >> 0x1f) - (uint)(uVar20 < uVar13)) * -0x33333333 +
                   uVar13 * -0x33333334 + (int)((ulonglong)uVar13 * 0xcccccccd >> 0x20);
          uVar14 = uVar11 >> 1;
          if (uVar14 < uVar7) {
            return 0;
          }
          if ((uVar7 == uVar14) && ((uVar11 * -0x80000000 | uVar13 * -0x33333333 >> 1) < uVar8)) {
            return 0;
          }
          uVar11 = (uint)*pbVar5;
          uVar8 = uVar17;
          uVar7 = uVar18;
        } while (uVar11 != 0);
        iVar2 = FUN_ram_48129c8a(param_1,"trip_id");
        iVar3 = FUN_ram_48129ce8();
        if (((iVar3 != 0) && (pcVar16 = *(char **)(iVar2 + 0x10), pcVar16 != (char *)0x0)) &&
           (sVar4 = strlen(pcVar16), sVar4 < 0x15)) {
          FUN_ram_4ff45158(&local_c0,pcVar16,sVar4 + 1);
          iVar2 = FUN_ram_48129c8a(param_1,"source_revision");
          iVar3 = FUN_ram_48129ce8();
          if (((iVar3 != 0) && (pcVar16 = *(char **)(iVar2 + 0x10), pcVar16 != (char *)0x0)) &&
             (sVar4 = strlen(pcVar16), sVar4 < 0x15)) {
            FUN_ram_4ff45158(&uStack_a8,pcVar16,sVar4 + 1);
            uVar6 = FUN_ram_48129c8a(param_1,"content_sha256");
            iVar2 = FUN_ram_480a3d76(uVar6,local_74);
            if (((iVar2 != 0) && (iVar2 = FUN_ram_4807927c(local_74,0x40), iVar2 != 0)) &&
               ((uVar11 = local_c0 & 0xff, uVar11 != 0 &&
                ((uVar11 != 0x30 || (local_c0._1_1_ == '\0')))))) {
              uVar7 = 0;
              uVar8 = 0;
              do {
                uVar14 = uVar11 - 0x30;
                uVar21 = ~uVar14;
                iVar3 = -((int)uVar14 >> 0x1f);
                uVar11 = uVar21 + iVar3;
                uVar11 = uVar11 + (uVar11 < uVar21);
                uVar20 = uVar8 * 10 + uVar14;
                pbVar9 = pbVar9 + 1;
                if (9 < (uVar14 & 0xff)) {
                  return 0;
                }
                uVar13 = uVar21 - (uVar11 - (((uint)((ulonglong)uVar11 * 0xcccccccd >> 0x20) &
                                             0xfffffffc) + uVar11 / 5));
                uVar11 = (iVar3 - (uint)(uVar21 < uVar13)) * -0x33333333 + uVar13 * -0x33333334 +
                         (int)((ulonglong)uVar13 * 0xcccccccd >> 0x20);
                uVar21 = uVar11 >> 1;
                if (uVar21 < uVar7) {
                  return 0;
                }
                if ((uVar7 == uVar21) &&
                   ((uVar13 * -0x33333333 >> 1 | uVar11 * -0x80000000) < uVar8)) {
                  return 0;
                }
                uVar11 = (uint)*pbVar9;
                uVar7 = (uint)(uVar20 < uVar14) +
                        (uVar8 * 5 >> 0x1f |
                        ((uint)(uVar8 * 5 < uVar8 * 4) + (uVar7 << 2 | uVar8 >> 0x1e) + uVar7) * 2)
                        + ((int)uVar14 >> 0x1f);
                uVar8 = uVar20;
              } while (uVar11 != 0);
              if (((uVar20 != 0 || uVar7 != 0) && (uVar11 = uStack_a8 & 0xff, uVar11 != 0)) &&
                 ((uVar11 != 0x30 || (uStack_a8._1_1_ == '\0')))) {
                pbVar9 = (byte *)&uStack_a8;
                uVar8 = 0;
                uVar7 = 0;
                do {
                  uVar11 = uVar11 - 0x30;
                  uVar22 = ~uVar11;
                  uVar14 = ~((int)uVar11 >> 0x1f);
                  uVar13 = uVar8 * 10 + uVar11;
                  uVar21 = uVar22 + uVar14;
                  pbVar9 = pbVar9 + 1;
                  uVar21 = uVar21 + (uVar21 < uVar22);
                  uVar19 = (uint)(uVar13 < uVar11) +
                           ((int)uVar11 >> 0x1f) +
                           (((uint)(uVar8 * 5 < uVar8 * 4) + (uVar8 >> 0x1e | uVar7 << 2) + uVar7) *
                            2 | uVar8 * 5 >> 0x1f);
                  if (9 < (uVar11 & 0xff)) {
                    return 0;
                  }
                  uVar21 = uVar22 - (uVar21 - (((uint)((ulonglong)uVar21 * 0xcccccccd >> 0x20) &
                                               0xfffffffc) + uVar21 / 5));
                  uVar11 = (uVar14 - (uVar22 < uVar21)) * -0x33333333 + uVar21 * -0x33333334 +
                           (int)((ulonglong)uVar21 * 0xcccccccd >> 0x20);
                  uVar14 = uVar11 >> 1;
                  if (uVar14 < uVar7) {
                    return 0;
                  }
                  if ((uVar7 == uVar14) &&
                     ((uVar21 * -0x33333333 >> 1 | uVar11 * -0x80000000) < uVar8)) {
                    return 0;
                  }
                  uVar11 = (uint)*pbVar9;
                  uVar8 = uVar13;
                  uVar7 = uVar19;
                } while (uVar11 != 0);
                if (uVar13 != 0 || uVar19 != 0) {
                  memset(param_2,0,0x48);
                  pcVar16 = param_2;
                  do {
                    cVar1 = *pcVar15;
                    bVar12 = cVar1 - 0x30;
                    if (9 < bVar12) {
                      if ((byte)(cVar1 + 0x9fU) < 6) {
                        bVar12 = cVar1 + 0xa9;
                      }
                      else if ((byte)(cVar1 + 0xbfU) < 6) {
                        bVar12 = cVar1 - 0x37;
                      }
                      else {
                        bVar12 = 0xff;
                      }
                    }
                    cVar1 = pcVar15[1];
                    bVar10 = cVar1 - 0x30;
                    if (9 < bVar10) {
                      if ((byte)(cVar1 + 0x9fU) < 6) {
                        bVar10 = cVar1 + 0xa9;
                      }
                      else if ((byte)(cVar1 + 0xbfU) < 6) {
                        bVar10 = cVar1 - 0x37;
                      }
                      else {
                        bVar10 = 0xff;
                      }
                    }
                    *pcVar16 = bVar12 * '\x10' + bVar10;
                    pcVar15 = pcVar15 + 2;
                    pcVar16 = pcVar16 + 1;
                  } while (local_90 + 0x18 != pcVar15);
                  *(uint *)(param_2 + 0x10) = uVar17;
                  *(uint *)(param_2 + 0x14) = uVar18;
                  *(uint *)(param_2 + 0x18) = uVar20;
                  *(uint *)(param_2 + 0x20) = uVar13;
                  *(uint *)(param_2 + 0x24) = uVar19;
                  pcVar16 = local_74;
                  param_2 = param_2 + 0x28;
                  do {
                    cVar1 = *pcVar16;
                    bVar12 = cVar1 - 0x30;
                    if (9 < bVar12) {
                      if ((byte)(cVar1 + 0x9fU) < 6) {
                        bVar12 = cVar1 + 0xa9;
                      }
                      else if ((byte)(cVar1 + 0xbfU) < 6) {
                        bVar12 = cVar1 - 0x37;
                      }
                      else {
                        bVar12 = 0xff;
                      }
                    }
                    cVar1 = pcVar16[1];
                    bVar10 = cVar1 - 0x30;
                    if (9 < bVar10) {
                      if ((byte)(cVar1 + 0x9fU) < 6) {
                        bVar10 = cVar1 + 0xa9;
                      }
                      else if ((byte)(cVar1 + 0xbfU) < 6) {
                        bVar10 = cVar1 - 0x37;
                      }
                      else {
                        bVar10 = 0xff;
                      }
                    }
                    *param_2 = bVar10 + bVar12 * '\x10';
                    pcVar16 = pcVar16 + 2;
                    param_2 = param_2 + 1;
                  } while (pcVar16 != local_74 + 0x40);
                  return iVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


