/* Firmware entry: 0x4807c1fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4807c1fe(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *__s;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  size_t sVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char *pcVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint local_2f0;
  int iStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined1 auStack_2d8 [192];
  undefined4 local_218 [16];
  char cStack_1d7;
  char cStack_1d6;
  char cStack_1d5;
  byte local_1d4 [29];
  undefined1 auStack_1b7 [8];
  undefined1 auStack_1af [8];
  undefined1 auStack_1a7 [41];
  undefined1 auStack_17e [65];
  undefined1 auStack_13d [65];
  undefined1 auStack_fc [192];
  uint uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined1 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = FUN_ram_48129d0c();
  if (iVar14 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar14 = FUN_ram_48129d0c(param_1);
  piVar27 = *(int **)(param_1 + 8);
  if (iVar14 == 0) goto joined_r0x4807c5ac;
  piVar26 = piVar27;
  if (piVar27 != (int *)0x0) {
    while( true ) {
      iVar14 = piVar26[8];
      if (iVar14 == 0) {
        return 0;
      }
      piVar26 = (int *)*piVar26;
      piVar10 = piVar26;
      if (piVar26 == (int *)0x0) break;
      do {
        if ((piVar10[8] != 0) && (iVar15 = FUN_ram_4ff453ae(iVar14), iVar15 == 0)) {
          return 0;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
    do {
      iVar14 = FUN_ram_48129d0c(piVar27);
      if ((iVar14 != 0) || (iVar14 = FUN_ram_48129cfa(piVar27), iVar14 != 0)) {
        iVar14 = FUN_ram_48129d0c(piVar27);
        piVar26 = (int *)piVar27[2];
        if (iVar14 == 0) goto joined_r0x4807c618;
        piVar10 = piVar26;
        if (piVar26 != (int *)0x0) {
          while( true ) {
            iVar14 = piVar10[8];
            if (iVar14 == 0) {
              return 0;
            }
            piVar10 = (int *)*piVar10;
            piVar11 = piVar10;
            if (piVar10 == (int *)0x0) break;
            do {
              if ((piVar11[8] != 0) && (iVar15 = FUN_ram_4ff453ae(iVar14), iVar15 == 0)) {
                return 0;
              }
              piVar11 = (int *)*piVar11;
            } while (piVar11 != (int *)0x0);
          }
          do {
            iVar14 = FUN_ram_48129d0c(piVar26);
            if ((iVar14 != 0) || (iVar14 = FUN_ram_48129cfa(piVar26), iVar14 != 0)) {
              iVar14 = FUN_ram_48129d0c(piVar26);
              piVar10 = (int *)piVar26[2];
              if (iVar14 == 0) goto joined_r0x4807c298;
              piVar11 = piVar10;
              if (piVar10 != (int *)0x0) {
                while( true ) {
                  iVar14 = piVar11[8];
                  if (iVar14 == 0) {
                    return 0;
                  }
                  piVar11 = (int *)*piVar11;
                  piVar12 = piVar11;
                  if (piVar11 == (int *)0x0) break;
                  do {
                    if ((piVar12[8] != 0) && (iVar15 = FUN_ram_4ff453ae(iVar14), iVar15 == 0)) {
                      return 0;
                    }
                    piVar12 = (int *)*piVar12;
                  } while (piVar12 != (int *)0x0);
                }
                do {
                  iVar14 = FUN_ram_48129d0c(piVar10);
                  if (((iVar14 != 0) || (iVar14 = FUN_ram_48129cfa(piVar10), iVar14 != 0)) &&
                     (iVar14 = FUN_ram_4807c156(piVar10,3), iVar14 == 0)) {
                    return 0;
                  }
                  piVar10 = (int *)*piVar10;
joined_r0x4807c298:
                } while (piVar10 != (int *)0x0);
              }
            }
            piVar26 = (int *)*piVar26;
joined_r0x4807c618:
          } while (piVar26 != (int *)0x0);
        }
      }
      piVar27 = (int *)*piVar27;
joined_r0x4807c5ac:
    } while (piVar27 != (int *)0x0);
  }
  if ((*param_2 != '\0') && (param_2[8] != '\0')) {
    __s = param_2 + 0x39;
    sVar16 = strlen(__s);
    if (sVar16 == 0x10) {
      pcVar20 = __s;
      do {
        cVar1 = *pcVar20;
        pcVar20 = pcVar20 + 1;
        if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
          return 0;
        }
      } while (param_2 + 0x49 != pcVar20);
      if ((param_2[0x10] != '\0') && (param_2[0x4a] != '\0')) {
        puVar8 = local_218;
        puVar9 = &DAT_ram_482233d8;
        do {
          puVar23 = puVar9;
          puVar21 = puVar8;
          uVar17 = puVar23[1];
          uVar18 = puVar23[2];
          uVar19 = puVar23[3];
          *puVar21 = *puVar23;
          puVar21[1] = uVar17;
          puVar21[2] = uVar18;
          puVar21[3] = uVar19;
          puVar8 = puVar21 + 4;
          puVar9 = puVar23 + 4;
        } while (puVar23 + 4 != (undefined4 *)&UNK_ram_482235b8);
        uVar17 = puVar23[5];
        puVar21[4] = _UNK_ram_482235b8;
        puVar21[5] = uVar17;
        local_2f0 = 0;
        iStack_2ec = 0;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        iVar14 = FUN_ram_48129c8a(param_1,"management_protocol");
        if (iVar14 == 0) {
          uStack_34 = 0;
        }
        else {
          iVar14 = FUN_ram_48129c8a(param_1,"management_protocol");
          iVar15 = FUN_ram_48129cd6();
          if (iVar15 == 0) {
            return 0;
          }
          uVar17 = *(undefined4 *)(iVar14 + 0x18);
          uVar18 = *(undefined4 *)(iVar14 + 0x1c);
          iVar14 = __ltdf2(uVar17,uVar18,0,0);
          if (iVar14 < 0) {
            return 0;
          }
          iVar14 = __gtdf2(uVar17,uVar18,DAT_ram_481f4d28,DAT_ram_481f4d2c);
          if (0 < iVar14) {
            return 0;
          }
          uVar13 = FUN_ram_48195bce(uVar17,uVar18);
          uVar30 = __floatundidf();
          iVar14 = __nedf2(uVar17,uVar18,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
          uStack_34 = uVar13;
          if (iVar14 != 0) {
            return 0;
          }
        }
        uVar17 = FUN_ram_48129c8a(param_1,"source_dirty");
        iVar14 = FUN_ram_4807b94c(param_1,"release_id",local_218,0x41);
        if (((((((iVar14 != 0) &&
                (iVar14 = FUN_ram_4807b94c(param_1,"firmware_version",&cStack_1d7,0x20), iVar14 != 0
                )) && (iVar14 = FUN_ram_4807b94c(param_1,"hardware_profile",auStack_1b7,8),
                      iVar14 != 0)) &&
              ((iVar14 = FUN_ram_4807b94c(param_1,"hardware_revision",auStack_1af,8), iVar14 != 0 &&
               (iVar14 = FUN_ram_4807b94c(param_1,"source_commit",auStack_1a7,0x29), iVar14 != 0))))
             && (iVar14 = FUN_ram_4807b94c(param_1,"app_elf_sha256",auStack_17e,0x41), iVar14 != 0))
            && (((((iVar14 = FUN_ram_4807b94c(param_1,"image_sha256",auStack_13d,0x41), iVar14 != 0
                   && (iVar14 = FUN_ram_4807b94c(param_1,"image_url",auStack_fc,0xc0), iVar14 != 0))
                  && ((iVar14 = FUN_ram_48129cb4(uVar17), iVar14 != 0 &&
                      (((iVar14 = FUN_ram_48129c90(uVar17), iVar14 != 0 &&
                        (iVar14 = FUN_ram_4807b9c6(param_1,"size",0xffffffff,0,&local_2f0),
                        uVar3 = local_2f0, iVar14 != 0)) && (local_2f0 != 0 || iStack_2ec != 0))))))
                 && ((iStack_2ec == 0 && (local_2f0 <= *(uint *)(param_2 + 0x6c))))) &&
                (iVar14 = FUN_ram_4807b9c6(param_1,"image_chip_revision_min",0xffff,0,&uStack_2e8),
                iVar14 != 0)))) &&
           (((iVar14 = FUN_ram_4807b9c6(param_1,"image_chip_revision_max",0xffff,0,&uStack_2e0),
             uVar7 = uStack_2dc, uVar6 = uStack_2e0, uVar5 = uStack_2e4, uVar4 = uStack_2e8,
             iVar14 != 0 && (uStack_2e4 <= uStack_2dc)) &&
            ((uStack_2e4 != uStack_2dc || (uStack_2e8 <= uStack_2e0)))))) {
          iVar14 = FUN_ram_4ff453ae(param_2,&DAT_ram_481c8a88);
          if (iVar14 == 0) {
            uVar28 = 1;
            uVar29 = 199;
          }
          else {
            iVar14 = FUN_ram_4ff453ae(param_2,&DAT_ram_481c3ddc);
            if (iVar14 != 0) {
              return 0;
            }
            uVar28 = 0x12d;
            uVar29 = 399;
          }
          iVar14 = FUN_ram_4807ba94(local_218,0x40);
          if ((((((iVar14 != 0) && (iVar14 = FUN_ram_4807ba94(auStack_13d,0x40), iVar14 != 0)) &&
                (iVar14 = FUN_ram_4ff453ae(local_218,auStack_13d), iVar14 == 0)) &&
               ((iVar14 = FUN_ram_4807ba94(auStack_17e,0x40), iVar14 != 0 &&
                (iVar14 = FUN_ram_4807ba94(auStack_1a7,0x28), iVar14 != 0)))) &&
              ((iVar15 = FUN_ram_4ff453ae(auStack_1b7,param_2), iVar15 == 0 &&
               ((iVar15 = FUN_ram_4ff453ae(auStack_1af,param_2 + 8), iVar15 == 0 &&
                (cStack_1d7 == 'P')))))) && ((cStack_1d6 == '1' && (cStack_1d5 == '.')))) {
            iVar15 = 0;
            pbVar25 = local_1d4;
            while ((byte)(*pbVar25 - 0x30) < 10) {
              uVar22 = 0;
              do {
                pbVar24 = pbVar25;
                if (~(*pbVar24 - 0x30) / 10 < uVar22) {
                  return 0;
                }
                bVar2 = pbVar24[1];
                uVar22 = uVar22 * 10 + (*pbVar24 - 0x30);
                pbVar25 = pbVar24 + 1;
              } while ((byte)(bVar2 - 0x30) < 10);
              if (iVar15 != 0) {
                if (bVar2 == 0) {
                  uVar22 = (uint)*(ushort *)(param_2 + 0x6a);
                  if (uVar22 < uVar28) {
                    return 0;
                  }
                  if (uVar29 < uVar22) {
                    return 0;
                  }
                  if ((uVar5 == 0) && (uVar4 < uVar28)) {
                    return 0;
                  }
                  if (uVar7 != 0) {
                    return 0;
                  }
                  if (uVar29 < uVar6) {
                    return 0;
                  }
                  if (uVar5 != 0) {
                    return 0;
                  }
                  if (uVar22 < uVar4) {
                    return 0;
                  }
                  if (uVar6 < uVar22) {
                    return 0;
                  }
                  memset(auStack_2d8,0,0xc0);
                  iVar15 = FUN_ram_4819ad74(auStack_2d8,0xc0,
                                            "https://tesla.srlt.cc/api/p4/ota/images/%s.bin?device_id=%s"
                                            ,auStack_13d,__s);
                  if (0xbe < iVar15 - 1U) {
                    return 0;
                  }
                  iVar15 = FUN_ram_4ff453ae(auStack_fc,auStack_2d8);
                  if (iVar15 != 0) {
                    return 0;
                  }
                  uStack_3c = uVar3;
                  uStack_38 = (undefined2)uVar4;
                  uStack_36 = (undefined2)uVar6;
                  FUN_ram_4ff45158(param_3,local_218,0x1e5);
                  return iVar14;
                }
                if (iVar15 == 2) {
                  return 0;
                }
              }
              if (bVar2 != 0x2e) {
                return 0;
              }
              iVar15 = iVar15 + 1;
              pbVar25 = pbVar24 + 2;
            }
          }
        }
      }
    }
  }
  return 0;
}


