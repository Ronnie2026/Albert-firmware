/* Firmware entry: 0x480a4892 */

int FUN_ram_480a4892(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  char *pcVar15;
  int iVar16;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  size_t sStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  byte local_138;
  byte abStack_137 [64];
  undefined1 auStack_f7 [20];
  undefined1 auStack_e3 [8];
  undefined1 auStack_db [67];
  undefined1 auStack_98 [16];
  int iStack_88;
  undefined1 auStack_84 [68];
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  byte abStack_30 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_4 = "invalid_command";
  iVar3 = FUN_ram_48129d0c();
  if (iVar3 != 0) {
    puVar11 = &DAT_ram_48223bb8;
    pbVar14 = &local_138;
    do {
      uVar13 = puVar11[1];
      uVar12 = puVar11[2];
      uVar4 = puVar11[3];
      uVar9 = puVar11[4];
      uVar10 = puVar11[5];
      *(undefined4 *)pbVar14 = *puVar11;
      *(undefined4 *)(pbVar14 + 4) = uVar13;
      *(undefined4 *)(pbVar14 + 8) = uVar12;
      *(undefined4 *)(pbVar14 + 0xc) = uVar4;
      *(undefined4 *)(pbVar14 + 0x10) = uVar9;
      *(undefined4 *)(pbVar14 + 0x14) = uVar10;
      puVar11 = puVar11 + 6;
      pbVar14 = pbVar14 + 0x18;
    } while (puVar11 != &DAT_ram_48223cc0);
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_180 = 0;
    iStack_17c = 0;
    iStack_178 = 0;
    iStack_174 = 0;
    iStack_170 = 0;
    iStack_16c = 0;
    iVar3 = FUN_ram_48129c8a(param_1,"command_id");
    iVar5 = FUN_ram_48129ce8();
    if ((((iVar5 != 0) && (pcVar15 = *(char **)(iVar3 + 0x10), pcVar15 != (char *)0x0)) &&
        (sVar6 = strlen(pcVar15), sVar6 < 0x41)) &&
       (FUN_ram_4ff45158(&local_138,pcVar15,sVar6 + 1), local_138 != 0)) {
      pbVar14 = &local_138;
      do {
        pbVar14 = pbVar14 + 1;
        if (((0x19 < (byte)((local_138 & 0xdf) + 0xbf)) && (9 < (byte)(local_138 - 0x30))) &&
           ((1 < (byte)(local_138 - 0x2d) && (local_138 != 0x5f)))) {
          return 0;
        }
        local_138 = *pbVar14;
      } while (local_138 != 0);
      iVar3 = FUN_ram_48129c8a(param_1,&DAT_ram_481c425c);
      iVar5 = FUN_ram_48129ce8();
      if (((iVar5 != 0) && (pcVar15 = *(char **)(iVar3 + 0x10), pcVar15 != (char *)0x0)) &&
         (sVar6 = strlen(pcVar15), sVar6 < 0x14)) {
        FUN_ram_4ff45158(auStack_f7,pcVar15,sVar6 + 1);
        iVar3 = FUN_ram_4ff453ae(auStack_f7,"api_call");
        if (iVar3 == 0) {
          iVar3 = FUN_ram_48129c8a(param_1,"method");
          iVar5 = FUN_ram_48129ce8();
          if (((iVar5 != 0) && (pcVar15 = *(char **)(iVar3 + 0x10), pcVar15 != (char *)0x0)) &&
             (sVar6 = strlen(pcVar15), sVar6 < 8)) {
            FUN_ram_4ff45158(auStack_e3,pcVar15,sVar6 + 1);
            iVar3 = FUN_ram_48129c8a(param_1,"path");
            iVar5 = FUN_ram_48129ce8();
            if (((iVar5 != 0) && (pcVar15 = *(char **)(iVar3 + 0x10), pcVar15 != (char *)0x0)) &&
               (sStack_164 = strlen(pcVar15), sStack_164 < 0x40)) {
              uStack_160 = FUN_ram_4ff45158(auStack_db,pcVar15,sStack_164 + 1);
              iVar3 = FUN_ram_48075d7c(auStack_e3,sStack_164,uStack_160);
              if (iVar3 != 0) {
                uVar4 = FUN_ram_48129c8a(param_1,"boot_id");
                iVar3 = FUN_ram_480a3d76(uVar4,auStack_84);
                if (iVar3 != 0) {
                  iVar3 = FUN_ram_48129c8a(param_1,"expected_settings_epoch");
                  iVar5 = FUN_ram_48129ce8();
                  if (((iVar5 != 0) && (pcVar15 = *(char **)(iVar3 + 0x10), pcVar15 != (char *)0x0))
                     && (sVar6 = strlen(pcVar15), sVar6 < 0x21)) {
                    FUN_ram_4ff45158(&uStack_15c,pcVar15,sVar6 + 1);
                    iVar3 = FUN_ram_48075c1a(&uStack_15c,auStack_98);
                    if (iVar3 != 0) {
                      uVar4 = FUN_ram_48129c8a(param_1,"expected_settings_revision");
                      iVar3 = FUN_ram_480762ce(uVar4,0xffffffff,0,&local_180);
                      iStack_88 = local_180;
                      if ((iVar3 != 0) && (local_180 != 0 || iStack_17c != 0)) {
                        uVar4 = FUN_ram_48129c8a(param_1,"ttl_sec");
                        iVar3 = FUN_ram_480762ce(uVar4,0x1e,0,&iStack_178);
                        if ((iVar3 != 0) && (iStack_174 != 0 || iStack_178 != 0)) {
                          iStack_3c = iStack_178 * 1000;
                          uStack_40 = param_2;
                          uVar4 = FUN_ram_48129c8a(param_1,"expected_active_driver_id");
                          iVar3 = FUN_ram_480762ce(uVar4,0xffffffff,0,&iStack_170);
                          if ((iVar3 != 0) && ((iStack_170 != -1 || (iStack_16c != 0)))) {
                            iStack_38 = iStack_170;
                            iVar5 = FUN_ram_48129c8a(param_1,"params");
                            iStack_34 = iVar5;
                            iVar7 = FUN_ram_48129d0c();
                            if (iVar7 != 0) {
                              iVar16 = 0x101;
                              iVar7 = 0;
                              for (puVar11 = *(undefined4 **)(iVar5 + 8); iVar16 = iVar16 + -1,
                                  puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
                                if (iVar16 == 0) {
                                  return 0;
                                }
                                if ((char *)puVar11[8] == (char *)0x0) {
                                  return 0;
                                }
                                sVar6 = strlen((char *)puVar11[8]);
                                if (0x40 < sVar6) {
                                  return 0;
                                }
                                iVar5 = FUN_ram_48129ce8(puVar11);
                                if (iVar5 == 0) {
                                  return 0;
                                }
                                if ((char *)puVar11[4] == (char *)0x0) {
                                  return 0;
                                }
                                sVar6 = strlen((char *)puVar11[4]);
                                sVar8 = strlen((char *)puVar11[8]);
                                if (0x4000 < sVar6) {
                                  return 0;
                                }
                                if (0x4000U - iVar7 < sVar6 + sVar8) {
                                  return 0;
                                }
                                iVar7 = iVar7 + sVar6 + sVar8;
                              }
                              piVar2 = *(int **)(param_1 + 8);
                              while( true ) {
                                if (piVar2 == (int *)0x0) {
                                  pbVar14 = &local_138;
                                  do {
                                    uVar13 = *(undefined4 *)pbVar14;
                                    uVar4 = *(undefined4 *)(pbVar14 + 4);
                                    uVar9 = *(undefined4 *)(pbVar14 + 8);
                                    uVar10 = *(undefined4 *)(pbVar14 + 0xc);
                                    uVar12 = *(undefined4 *)(pbVar14 + 0x10);
                                    param_3[5] = *(undefined4 *)(pbVar14 + 0x14);
                                    *param_3 = uVar13;
                                    param_3[1] = uVar4;
                                    param_3[2] = uVar9;
                                    param_3[3] = uVar10;
                                    param_3[4] = uVar12;
                                    pbVar14 = pbVar14 + 0x18;
                                    param_3 = param_3 + 6;
                                  } while (pbVar14 != abStack_30);
                                  *param_4 = &DAT_ram_481df390;
                                  return iVar3;
                                }
                                uVar4 = piVar2[8];
                                iVar5 = 0;
                                bVar1 = false;
                                do {
                                  puVar11 = (undefined4 *)
                                            ((int)&PTR_s_command_id_ram_481cc0d4_ram_48222a40 +
                                            iVar5);
                                  iVar5 = iVar5 + 4;
                                  iVar7 = FUN_ram_4ff453ae(uVar4,*puVar11);
                                  bVar1 = (bool)(bVar1 | iVar7 == 0);
                                } while (iVar5 != 0x28);
                                if (!bVar1) break;
                                piVar2 = (int *)*piVar2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


