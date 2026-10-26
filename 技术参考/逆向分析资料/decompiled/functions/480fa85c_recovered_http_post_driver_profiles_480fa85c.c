/* Firmware entry: 0x480fa85c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_driver_profiles_480fa85c(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  char cVar18;
  undefined4 uVar19;
  uint *puVar20;
  char *pcVar21;
  undefined4 *puVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint *puVar29;
  uint *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint uVar35;
  char cVar36;
  uint *puVar37;
  uint *puVar38;
  undefined4 *puVar39;
  undefined4 local_2e0 [22];
  char acStack_288 [4];
  uint uStack_284;
  undefined1 auStack_280 [16];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined4 local_250;
  uint uStack_24c;
  undefined2 uStack_248;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint auStack_158 [2];
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
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
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}");
    return;
  }
  if (DAT_ram_4ff6dd78 == '\0') {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"driver_storage_unavailable\"}");
    return;
  }
  FUN_ram_4802a8a8(&local_164,"action");
  FUN_ram_4806562c(auStack_280,&DAT_ram_4ff5cb9c,&local_164);
  FUN_ram_4802a59e(&local_164);
  iVar9 = FUN_ram_4802b18e(auStack_280,&DAT_ram_481cf6fc);
  if ((iVar9 != 0) || (iVar9 = FUN_ram_4802b18e(auStack_280,"rebind"), iVar9 != 0)) {
    iVar10 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
    cVar36 = DAT_ram_4ff69dc4;
    iVar9 = DAT_ram_4ff69dc0;
    cVar18 = DAT_ram_4ff69dbc;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    if ((cVar36 == '\0') || ((500 < (uint)(iVar10 - iVar9) || (cVar18 != '\x01')))) {
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                       "{\"ok\":false,\"error\":\"vehicle_not_parked\"}",0x29);
      goto LAB_ram_480fa954;
    }
    iVar10 = FUN_ram_48025ba6();
    uStack_26c = 0;
    FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
    iVar9 = DAT_ram_4ff69f64;
    if (DAT_ram_4ff69f60 == '\0') {
      FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    }
    else {
      uStack_26c = DAT_ram_4ff69f54;
      uStack_270 = DAT_ram_4ff69f50;
      FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
      if ((uint)(iVar10 - iVar9) < 0x5dd) {
        iVar9 = FUN_ram_4802b18e(auStack_280,&DAT_ram_481cf6fc);
        if (iVar9 != 0) {
          FUN_ram_4802a8a8(&uStack_260,&DAT_ram_481df390);
          iVar9 = FUN_ram_4803702a(&uStack_260);
          if (iVar9 == 0) {
            FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                             "{\"ok\":false,\"error\":\"invalid_name\"}");
          }
          else {
            if ((DAT_ram_4ff5c53c != (uint *)0x0) &&
               (DAT_ram_4ff5c53c != DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49)) {
              uVar16 = uStack_270 & 0xffff;
              uVar6 = uStack_26c & 0xffff;
              puVar7 = DAT_ram_4ff5c53c;
              do {
                uStack_160 = puVar7[5];
                auStack_158[0] = puVar7[7];
                uStack_284 = *puVar7;
                uStack_15c = puVar7[6];
                auStack_158[1] = puVar7[8];
                if (uStack_284 != 0) {
                  uVar15 = uStack_160 & 0xffff;
                  if (uVar16 < uVar15) {
                    uVar15 = uVar15 - uVar16;
                  }
                  else {
                    uVar15 = uVar16 - uVar15;
                  }
                  if ((uVar15 & 0xffff) <= (auStack_158[0] & 0xffff)) {
                    uStack_160._2_2_ = (ushort)(uStack_160 >> 0x10);
                    if (uStack_270._2_2_ < uStack_160._2_2_) {
                      uVar23 = uStack_160._2_2_ - uStack_270._2_2_;
                    }
                    else {
                      uVar23 = uStack_270._2_2_ - uStack_160._2_2_;
                    }
                    if ((uint)uVar23 <= auStack_158[0] >> 0x10) {
                      uVar15 = uStack_15c & 0xffff;
                      if (uVar6 < uVar15) {
                        uVar15 = uVar15 - uVar6;
                      }
                      else {
                        uVar15 = uVar6 - uVar15;
                      }
                      if ((uVar15 & 0xffff) <= (auStack_158[1] & 0xffff)) {
                        uStack_15c._2_2_ = (ushort)(uStack_15c >> 0x10);
                        if (uStack_26c._2_2_ < uStack_15c._2_2_) {
                          uVar23 = uStack_15c._2_2_ - uStack_26c._2_2_;
                        }
                        else {
                          uVar23 = uStack_26c._2_2_ - uStack_15c._2_2_;
                        }
                        if ((uint)uVar23 <= auStack_158[1] >> 0x10) {
                          acStack_288[0] = '\x01';
                          goto LAB_ram_480fae04;
                        }
                      }
                    }
                  }
                }
                puVar7 = puVar7 + 0x49;
              } while (DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49 != puVar7);
            }
            uStack_284 = 0;
            acStack_288[0] = '\0';
LAB_ram_480fae04:
            if (acStack_288[0] == '\0') {
              uVar16 = DAT_ram_4ff47e80;
              uVar6 = DAT_ram_4ff47e80;
              if (DAT_ram_4ff47e80 == 0) {
                uVar16 = 1;
                uVar6 = uVar16;
              }
LAB_ram_480fae32:
              DAT_ram_4ff47e80 = uVar16 + 1;
              if (DAT_ram_4ff47e80 == 0) {
                DAT_ram_4ff47e80 = 1;
              }
              iVar9 = FUN_ram_4802c448(uVar16);
              if (iVar9 != 0) goto code_r0x480fae2a;
              if (uVar16 != 0) {
                memset(&local_164,0,0x124);
                uStack_bc = 0x20100;
                uStack_108 = 0x1f401388;
                uStack_d0 = 0x2d0100;
                uStack_10c = 0x10301;
                uStack_da = 0x6e;
                uStack_d8 = 0x820079;
                uStack_cc = CONCAT13(2,(undefined3)uStack_cc);
                uStack_c8 = 0x1000001;
                uStack_134 = 0xf0001;
                uStack_118._2_2_ = 0x82;
                uStack_ac._0_2_ = CONCAT11(5,(undefined1)uStack_ac);
                local_94 = 0x960101;
                uStack_90 = 0x9600b4;
                uStack_8c = 0xb400b4;
                uStack_138 = 0x1000d01;
                uStack_130 = 0x1010101;
                uStack_12c = 0x2010101;
                uStack_128 = 0x200f001;
                uStack_114 = 0x10200f0;
                uStack_d4._0_2_ = CONCAT11(1,(undefined1)uStack_d4);
                uStack_c4._0_2_ = CONCAT11(1,(undefined1)uStack_c4);
                uStack_c0._0_3_ = CONCAT12(1,(undefined2)uStack_c0);
                uStack_a4._0_2_ = CONCAT11(1,(undefined1)uStack_a4);
                uStack_148 = 0x50005;
                local_144 = 0x50005;
                uStack_110 = 0x10001;
                uStack_b0 = 0x10001;
                uStack_b8 = 0x4b003e8;
                uStack_9c = 0xa3c;
                uStack_88 = 0xb400f0;
                uStack_84 = 0x6400f0;
                uStack_60 = 4000;
                uStack_5c = 1000;
                uStack_50 = 0x2ee;
                uStack_b4 = 0x12c04b0;
                uStack_a8 = 0x753007d0;
                uStack_98 = 0x1f40a00;
                uStack_54 = 5000;
                uStack_48 = CONCAT22(0x50,(undefined2)uStack_48);
                uStack_78 = 3000;
                uStack_6c = 3000;
                uStack_64 = 3000;
                uStack_4c._0_2_ = CONCAT11(0x2d,(undefined1)uStack_4c);
                uStack_44 = 0xfa;
                uStack_7c = 2000;
                uStack_68 = 2000;
                uStack_58 = 2000;
                FUN_ram_4802a8a8(&uStack_160,&DAT_ram_481df390);
                uStack_118 = CONCAT22(uStack_118._2_2_,0x8c);
                uStack_11c = 0x780064;
                uStack_124 = 0x46003c;
                uStack_120 = 0x5a0050;
                FUN_ram_4805228e(&uStack_104);
                local_164 = uVar16;
                FUN_ram_4802ad02(&uStack_160,&uStack_260);
                uStack_150 = uStack_270;
                uStack_14c = uStack_26c;
                uStack_148 = 0x50005;
                local_144 = 0x50005;
                FUN_ram_4805228e(&uStack_208);
                uStack_134 = CONCAT31(uStack_134._1_3_,1);
                uStack_130 = 0x1010101;
                uStack_12c = 0x2010101;
                uStack_114 = 0x10200f0;
                uStack_138 = 0x1000d01;
                uStack_128 = 0x200f001;
                uStack_f0 = uStack_1f4;
                uStack_11c = 0x780064;
                uStack_108 = 0x1f401388;
                uStack_104 = uStack_208;
                uStack_100 = uStack_204;
                uStack_fc = uStack_200;
                uStack_f8 = uStack_1fc;
                uStack_f4 = uStack_1f8;
                uStack_124 = 0x46003c;
                uStack_120 = 0x5a0050;
                uStack_110 = 0x10001;
                uStack_10c = 0x10301;
                uStack_134 = CONCAT22(0xf,(undefined2)uStack_134);
                uStack_118 = 0x82008c;
                uStack_ec = uStack_1f0;
                uStack_e8 = uStack_1ec;
                uStack_e4 = uStack_1e8;
                uStack_c0 = 0x10000;
                uStack_e0 = uStack_1e4;
                uStack_9c = 0xa3c;
                uStack_d0 = 0x2d0100;
                uStack_ac = 0x500;
                uStack_d4 = 0x100;
                uStack_c4 = 0x100;
                uStack_a4 = 0x100;
                uStack_da = 0x6e;
                puVar28 = &DAT_ram_48222ffc;
                uStack_d8 = 0x820079;
                uStack_c8 = 0x1000001;
                uStack_bc = CONCAT13(uStack_bc._3_1_,0x20100);
                uStack_b8 = 0x4b003e8;
                uStack_b4 = 0x12c04b0;
                uStack_b0 = 0x10001;
                uStack_a8 = 0x753007d0;
                uStack_a0 = 0;
                uStack_98 = 0x1f40a00;
                uStack_dc = (undefined2)uStack_1e0;
                uStack_cc = 0x2000000;
                puVar27 = &local_94;
                do {
                  uVar34 = puVar28[1];
                  uVar33 = puVar28[2];
                  uVar11 = puVar28[3];
                  uVar17 = puVar28[4];
                  *puVar27 = *puVar28;
                  uVar19 = puVar28[5];
                  puVar27[1] = uVar34;
                  puVar27[2] = uVar33;
                  puVar27[3] = uVar11;
                  puVar27[4] = uVar17;
                  puVar27[5] = uVar19;
                  puVar28 = puVar28 + 6;
                  puVar27 = puVar27 + 6;
                } while (puVar28 != &DAT_ram_48223044);
                uStack_4c = 0x2d00;
                uStack_48 = 0x500000;
                uStack_44 = 0xfa;
                iVar9 = FUN_ram_480af438(&DAT_ram_4ff5c53c,&local_164);
                if (iVar9 == 0) {
                  FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                                   "{\"ok\":false,\"error\":\"driver_workspace_unavailable\"}");
                }
                else {
                  iVar9 = FUN_ram_4802c448(uVar16);
                  if ((iVar9 == 0) || (iVar9 = FUN_ram_480f9fa8(iVar9,3,1), iVar9 == 0)) {
                    FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                                     "{\"ok\":false,\"error\":\"flash_write\"}");
                  }
                  else {
                    FUN_ram_4802a8a8(&local_250,"Cache-Control");
                    FUN_ram_4802a8a8(&uStack_208,"no-store");
                    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_250,&uStack_208);
                    FUN_ram_4802a59e(&uStack_208);
                    FUN_ram_4802a59e(&local_250);
                    FUN_ram_48052ffe(&uStack_208);
                    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",&uStack_208);
                    FUN_ram_4802a59e(&uStack_208);
                  }
                }
                FUN_ram_4802a59e(&uStack_160);
                goto LAB_ram_480fb2d4;
              }
              goto LAB_ram_480fb324;
            }
            FUN_ram_4806b5b0(acStack_288);
          }
          goto LAB_ram_480fb2d4;
        }
        iVar9 = FUN_ram_480373e6(&uStack_260);
        uVar16 = uStack_260;
        if (iVar9 == 0) {
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                           "{\"ok\":false,\"error\":\"missing_id\"}");
          goto LAB_ram_480fa954;
        }
        iVar9 = FUN_ram_4802c448(uStack_260);
        cVar18 = DAT_ram_4ff6dd78;
        if (iVar9 == 0) {
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x194,"application/json",
                           "{\"ok\":false,\"error\":\"driver_not_found\"}");
          goto LAB_ram_480fa954;
        }
        if ((DAT_ram_4ff5c53c != (uint *)0x0) &&
           (DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49 != DAT_ram_4ff5c53c)) {
          uVar15 = uStack_270 & 0xffff;
          uVar6 = uStack_26c & 0xffff;
          puVar7 = DAT_ram_4ff5c53c;
          do {
            uStack_160 = puVar7[5];
            auStack_158[0] = puVar7[7];
            uStack_24c = *puVar7;
            uStack_15c = puVar7[6];
            auStack_158[1] = puVar7[8];
            if (uVar16 != uStack_24c) {
              uVar24 = uStack_160 & 0xffff;
              if (uVar15 < uVar24) {
                uVar24 = uVar24 - uVar15;
              }
              else {
                uVar24 = uVar15 - uVar24;
              }
              if ((uVar24 & 0xffff) <= (auStack_158[0] & 0xffff)) {
                uStack_160._2_2_ = (ushort)(uStack_160 >> 0x10);
                if (uStack_270._2_2_ < uStack_160._2_2_) {
                  uVar23 = uStack_160._2_2_ - uStack_270._2_2_;
                }
                else {
                  uVar23 = uStack_270._2_2_ - uStack_160._2_2_;
                }
                if ((uint)uVar23 <= auStack_158[0] >> 0x10) {
                  uVar24 = uStack_15c & 0xffff;
                  if (uVar6 < uVar24) {
                    uVar24 = uVar24 - uVar6;
                  }
                  else {
                    uVar24 = uVar6 - uVar24;
                  }
                  if ((uVar24 & 0xffff) <= (auStack_158[1] & 0xffff)) {
                    uStack_15c._2_2_ = (ushort)(uStack_15c >> 0x10);
                    if (uStack_26c._2_2_ < uStack_15c._2_2_) {
                      uVar23 = uStack_15c._2_2_ - uStack_26c._2_2_;
                    }
                    else {
                      uVar23 = uStack_26c._2_2_ - uStack_15c._2_2_;
                    }
                    if ((uint)uVar23 <= auStack_158[1] >> 0x10) {
                      cVar36 = '\x01';
                      goto LAB_ram_480fabb8;
                    }
                  }
                }
              }
            }
            puVar7 = puVar7 + 0x49;
          } while (DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49 != puVar7);
        }
        uStack_24c = 0;
        cVar36 = '\0';
LAB_ram_480fabb8:
        local_250 = CONCAT31(local_250._1_3_,cVar36);
        if (cVar36 != '\0') {
          FUN_ram_4806b5b0(&local_250);
          goto LAB_ram_480fa954;
        }
        *(undefined1 *)(iVar9 + 0x28) = 0;
        DAT_ram_4ff5c538 = 0;
        DAT_ram_4ff5c534 = 0;
        DAT_ram_4ff5c530 = 0;
        *(uint *)(iVar9 + 0x14) = uStack_270;
        *(uint *)(iVar9 + 0x18) = uStack_26c;
        if ((cVar18 == '\0') || (iVar9 = FUN_ram_480aecea(), iVar9 == 0)) {
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                           "{\"ok\":false,\"error\":\"flash_write\"}");
          goto LAB_ram_480fa954;
        }
        FUN_ram_4802a8a8(&uStack_208,"Cache-Control");
        FUN_ram_4802a8a8(&local_164,"no-store");
        FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_208,&local_164);
        FUN_ram_4802a59e(&local_164);
        FUN_ram_4802a59e(&uStack_208);
        FUN_ram_48052ffe(&local_164);
        FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",&local_164);
        puVar7 = &local_164;
        goto LAB_ram_480fb2d6;
      }
    }
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"seat_position_stale\"}");
    goto LAB_ram_480fa954;
  }
  iVar9 = FUN_ram_4802b18e(auStack_280,&DAT_ram_481cf708);
  if ((iVar9 != 0) || (iVar9 = FUN_ram_4802b18e(auStack_280,"manual"), iVar9 != 0)) {
    iVar9 = FUN_ram_480315f4();
    if (iVar9 != 0) {
      uVar6 = FUN_ram_4802b18e(auStack_280,&DAT_ram_481cf708);
      uVar16 = DAT_ram_4ff6dd80;
      if (DAT_ram_4ff47e78 != uVar6) {
        DAT_ram_4ff47e78 = (byte)uVar6;
        iVar9 = FUN_ram_4802c448(DAT_ram_4ff6dd80);
        if (iVar9 != 0) {
          *(byte *)(iVar9 + 0x29) = (byte)uVar6 ^ 1;
        }
        DAT_ram_4ff5c538 = 0;
        DAT_ram_4ff5c534 = 0;
        DAT_ram_4ff5c530 = 0;
        DAT_ram_4ff6dd79 = '\0';
        if ((DAT_ram_4ff5c540 != 0) && (DAT_ram_4ff6dd79 = '\x03', uVar6 != 0)) {
          DAT_ram_4ff6dd79 = (-(uVar16 == 0) & 3U) + 1;
        }
        if ((DAT_ram_4ff6dd78 == '\0') || (iVar9 = FUN_ram_480aecea(), iVar9 == 0)) {
LAB_ram_480fae4c:
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                           "{\"ok\":false,\"error\":\"flash_write\"}");
          goto LAB_ram_480fa954;
        }
      }
      if (uVar6 != 0) {
        FUN_ram_480fa426();
      }
      FUN_ram_4802a8a8(&uStack_208,"Cache-Control");
      FUN_ram_4802a8a8(&local_164,"no-store");
      FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_208,&local_164);
      FUN_ram_4802a59e(&local_164);
      FUN_ram_4802a59e(&uStack_208);
      FUN_ram_48052ffe(&local_164);
      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",&local_164);
      FUN_ram_4802a59e(&local_164);
      goto LAB_ram_480fa954;
    }
LAB_ram_480fae42:
    FUN_ram_48066cec();
    goto LAB_ram_480fa954;
  }
  iVar9 = FUN_ram_480373e6(&uStack_270);
  uVar16 = uStack_270;
  if (iVar9 == 0) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                     "{\"ok\":false,\"error\":\"missing_id\"}");
    goto LAB_ram_480fa954;
  }
  iVar9 = FUN_ram_4802c448(uStack_270);
  if (iVar9 == 0) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x194,"application/json",
                     "{\"ok\":false,\"error\":\"driver_not_found\"}");
    goto LAB_ram_480fa954;
  }
  iVar10 = FUN_ram_4802b18e(auStack_280,"select");
  if (iVar10 != 0) {
    iVar10 = FUN_ram_480315f4();
    if (iVar10 != 0) {
      iVar9 = FUN_ram_480f9fa8(iVar9,3,1,0);
      if (iVar9 != 0) goto LAB_ram_480fa9f6;
      goto LAB_ram_480fae4c;
    }
    goto LAB_ram_480fae42;
  }
  iVar10 = FUN_ram_4802b18e(auStack_280,"rename");
  if (iVar10 != 0) {
    FUN_ram_4802a8a8(&local_164,&DAT_ram_481df390);
    iVar10 = FUN_ram_4803702a(&local_164);
    if (iVar10 == 0) {
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                       "{\"ok\":false,\"error\":\"invalid_name\"}");
    }
    else {
      FUN_ram_4802ad02(iVar9 + 4,&local_164);
      if ((DAT_ram_4ff6dd78 != '\0') && (iVar9 = FUN_ram_480aecea(), iVar9 != 0)) {
        FUN_ram_4802a59e(&local_164);
        goto LAB_ram_480fa9f6;
      }
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                       "{\"ok\":false,\"error\":\"flash_write\"}");
    }
    FUN_ram_4802a59e(&local_164);
    goto LAB_ram_480fa954;
  }
  iVar9 = FUN_ram_4802b18e(auStack_280,"delete");
  uVar6 = DAT_ram_4ff6dd80;
  if (iVar9 == 0) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                     "{\"ok\":false,\"error\":\"invalid_action\"}");
    goto LAB_ram_480fa954;
  }
  if (uVar16 == DAT_ram_4ff6dd80) {
    iVar9 = FUN_ram_480315f4();
    if (iVar9 == 0) {
      FUN_ram_48066cec();
      goto LAB_ram_480fa954;
    }
    if ((DAT_ram_4ff6dd48 != '\0') && (iVar9 = FUN_ram_480f245a(), iVar9 == 0))
    goto LAB_ram_480fbb90;
    if ((uVar16 != 0) && ((uVar16 == DAT_ram_4ff6dd4c && (DAT_ram_4ff6dd40 == 0)))) {
      puVar27 = &local_164;
      puVar28 = &DAT_ram_48222ef0;
      do {
        puVar39 = puVar28;
        puVar32 = puVar27;
        uVar11 = puVar39[1];
        uVar17 = puVar39[2];
        *puVar32 = *puVar39;
        uVar19 = puVar39[3];
        puVar32[1] = uVar11;
        puVar32[2] = uVar17;
        puVar32[3] = uVar19;
        puVar27 = puVar32 + 4;
        puVar28 = puVar39 + 4;
      } while (puVar39 + 4 != (undefined4 *)&UNK_ram_48222f20);
      uVar2 = *(undefined2 *)(puVar39 + 5);
      puVar32[4] = _UNK_ram_48222f20;
      *(undefined2 *)(puVar32 + 5) = uVar2;
      iVar9 = FUN_ram_48041cb4(0,&local_164,&uStack_208);
      if (iVar9 == 0) {
        DAT_ram_4ff6dd4a = '\0';
        goto LAB_ram_480fbb9a;
      }
      DAT_ram_4ff6dd4a = '\x01';
      iVar9 = FUN_ram_480f536a(&DAT_ram_4ff60e20,&local_164);
      if (iVar9 != 0) {
        puVar27 = &local_164;
        puVar28 = &DAT_ram_4ff48914;
        do {
          puVar39 = puVar28;
          puVar32 = puVar27;
          uVar11 = puVar32[1];
          uVar17 = puVar32[2];
          *puVar39 = *puVar32;
          uVar19 = puVar32[3];
          puVar39[1] = uVar11;
          puVar39[2] = uVar17;
          puVar39[3] = uVar19;
          puVar27 = puVar32 + 4;
          puVar28 = puVar39 + 4;
        } while (puVar27 != &uStack_134);
        uVar2 = *(undefined2 *)(puVar32 + 5);
        DAT_ram_4ff6dd3c = (undefined1)uStack_208;
        DAT_ram_4ff6dd40 = uVar16;
        puVar39[4] = *puVar27;
        *(undefined2 *)(puVar39 + 5) = uVar2;
        goto LAB_ram_480fb4f6;
      }
    }
    if (DAT_ram_4ff6dd4a == '\0') goto LAB_ram_480fbb9a;
LAB_ram_480fbc0a:
    pcVar21 = "{\"ok\":false,\"error\":\"ambient_settings_update\"}";
    uVar11 = 500;
  }
  else {
    if ((DAT_ram_4ff6dd48 == '\0') || (iVar9 = FUN_ram_480f245a(), iVar9 != 0)) {
LAB_ram_480fb4f6:
      uStack_208 = 0x1000d01;
      uStack_1fc = 0x2010101;
      uStack_1f4 = 0x46003c;
      uStack_204 = 0xf0001;
      uStack_200 = 0x1010101;
      uStack_1f0 = 0x5a0050;
      uStack_1e4 = 0x10200f0;
      uStack_1dc = 0x10301;
      uStack_1f8 = 0x200f001;
      uStack_1ec = 0x780064;
      uStack_1e8 = 0x82008c;
      uStack_1d8 = 0x1f401388;
      uStack_198 = 0x1000001;
      uStack_18c = 0x20100;
      uStack_1e0 = 0x10001;
      uStack_1a8 = 0x820079;
      uStack_1a0 = 0x2d0100;
      uStack_1a4 = 0x100;
      uStack_194 = 0x100;
      uStack_19c = 0x2000000;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_190 = 0x10000;
      uStack_1ac = 0x6e0000;
      uStack_188 = 0x4b003e8;
      uStack_180 = 0x10001;
      uStack_174 = 0x100;
      uStack_170 = 0;
      uStack_184 = 0x12c04b0;
      uStack_178 = 0x753007d0;
      uStack_16c = 0xa3c;
      uStack_168 = 0x1f40a00;
      uStack_17c = 0x500;
      FUN_ram_4805228e(&uStack_1d4);
      if (uVar16 == uVar6) {
        FUN_ram_4805883a(&local_164,&DAT_ram_4ff60e20);
        uStack_208._0_2_ = CONCAT11(local_164._1_1_,(undefined1)uStack_208);
        uStack_200 = CONCAT22(uStack_15c._2_2_,(undefined2)uStack_200);
        uStack_1fc = CONCAT22(uStack_1fc._2_2_,(undefined2)auStack_158[0]);
        uStack_1a4 = CONCAT31(uStack_1a4._1_3_,(undefined1)uStack_100);
        uStack_19c = CONCAT13(uStack_f8._3_1_,(undefined3)uStack_19c);
        uStack_17c._0_3_ = CONCAT12(uStack_d8._2_1_,(undefined2)uStack_17c);
        iVar9 = FUN_ram_4807e216(uVar16,0,&uStack_208);
        if (iVar9 != 0) {
          iVar9 = FUN_ram_480f9e86(0,&uStack_208);
          if (iVar9 != 0) {
            FUN_ram_4805883a(&local_164,&DAT_ram_4ff60e20);
            FUN_ram_48032f3e(local_164._1_1_);
            uVar15 = DAT_ram_4ff5c540;
            if (DAT_ram_4ff5c53c != (uint *)0x0) goto LAB_ram_480fb660;
            goto LAB_ram_480fb7e0;
          }
          if ((DAT_ram_4ff6dd34 != '\0') && (DAT_ram_4ff6dd30 == 0)) {
            DAT_ram_4ff6dd34 = '\0';
          }
        }
        FUN_ram_4803862c(uVar16);
        pcVar21 = "{\"ok\":false,\"error\":\"speed_target_settings_unavailable\"}";
        uVar11 = 0x1f7;
      }
      else {
        if (DAT_ram_4ff5c53c == (uint *)0x0) {
LAB_ram_480fb7e4:
          if (uVar16 == DAT_ram_4ff6dd7c) {
            DAT_ram_4ff6dd7c = 0;
          }
          if (DAT_ram_4ff5c540 == 0) {
            DAT_ram_4ff6dd7c = 0;
            DAT_ram_4ff6dd80 = 0;
            DAT_ram_4ff6dd79 = '\0';
          }
          DAT_ram_4ff6dd74 = uVar16;
          if ((DAT_ram_4ff6dd78 != '\0') && (iVar9 = FUN_ram_480aecea(), iVar9 != 0))
          goto LAB_ram_480fb81c;
LAB_ram_480fbb28:
          pcVar21 = "{\"ok\":false,\"error\":\"flash_write\"}";
        }
        else {
LAB_ram_480fb660:
          iVar9 = DAT_ram_4ff5c540 * 0x124;
          puVar38 = DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49;
          iVar10 = (iVar9 >> 2) * -0x381c0e07 >> 2;
          puVar7 = DAT_ram_4ff5c53c;
          uVar15 = DAT_ram_4ff5c540;
          if (iVar10 < 1) {
            if (iVar9 == 0x248) goto LAB_ram_480fbca6;
            if (iVar9 == 0x36c) goto LAB_ram_480fbc9c;
            if (iVar9 != 0x124) goto LAB_ram_480fb7e0;
LAB_ram_480fbcb0:
            if (uVar16 != *puVar7) goto LAB_ram_480fb7e0;
LAB_ram_480fb6bc:
            if (puVar38 != puVar7) {
              puVar37 = puVar7 + 0x49;
              puVar8 = puVar7;
              if (puVar38 != puVar37) {
                do {
                  puVar8 = puVar7;
                  if (uVar16 != *puVar37) {
                    *puVar7 = *puVar37;
                    FUN_ram_4802ad2c(puVar7 + 1,puVar37 + 1);
                    uVar25 = puVar37[7];
                    uVar15 = puVar37[10];
                    puVar7[5] = puVar37[5];
                    uVar24 = puVar37[6];
                    puVar7[7] = uVar25;
                    uVar25 = puVar37[8];
                    uVar26 = puVar37[9];
                    *(char *)(puVar7 + 10) = (char)uVar15;
                    uVar1 = *(undefined1 *)((int)puVar37 + 0x29);
                    puVar7[8] = uVar25;
                    puVar7[9] = uVar26;
                    *(undefined1 *)((int)puVar7 + 0x29) = uVar1;
                    puVar7[6] = uVar24;
                    puVar29 = puVar37 + 0xb;
                    puVar8 = puVar7 + 0xb;
                    do {
                      uVar15 = puVar29[1];
                      uVar24 = puVar29[2];
                      uVar25 = puVar29[3];
                      *puVar8 = *puVar29;
                      puVar8[1] = uVar15;
                      puVar8[2] = uVar24;
                      puVar8[3] = uVar25;
                      puVar29 = puVar29 + 4;
                      puVar8 = puVar8 + 4;
                    } while (puVar29 != puVar37 + 0x33);
                    puVar20 = puVar7 + 0x34;
                    puVar30 = puVar37 + 0x34;
                    *puVar8 = *puVar29;
                    do {
                      uVar35 = puVar30[1];
                      uVar26 = puVar30[2];
                      uVar15 = puVar30[3];
                      uVar24 = puVar30[4];
                      uVar25 = puVar30[5];
                      *puVar20 = *puVar30;
                      puVar20[1] = uVar35;
                      puVar20[2] = uVar26;
                      puVar20[3] = uVar15;
                      puVar20[4] = uVar24;
                      puVar20[5] = uVar25;
                      puVar30 = puVar30 + 6;
                      puVar20 = puVar20 + 6;
                    } while (puVar30 != puVar37 + 0x46);
                    uVar2 = *(undefined2 *)((int)puVar37 + 0x11a);
                    uVar15 = puVar37[0x47];
                    uVar3 = *(undefined2 *)((int)puVar37 + 0x11e);
                    uVar24 = puVar37[0x48];
                    puVar8 = puVar7 + 0x49;
                    *(short *)(puVar7 + 0x46) = (short)puVar37[0x46];
                    *(undefined2 *)((int)puVar7 + 0x11a) = uVar2;
                    *(short *)(puVar7 + 0x47) = (short)uVar15;
                    *(undefined2 *)((int)puVar7 + 0x11e) = uVar3;
                    *(short *)(puVar7 + 0x48) = (short)uVar24;
                  }
                  puVar37 = puVar37 + 0x49;
                  puVar7 = puVar8;
                } while (puVar38 != puVar37);
                uVar15 = DAT_ram_4ff5c540;
                if (DAT_ram_4ff5c53c == (uint *)0x0) goto LAB_ram_480fb7e0;
              }
              goto LAB_ram_480fb7ac;
            }
          }
          else {
            do {
              if (uVar16 == *puVar7) goto LAB_ram_480fb6bc;
              if (uVar16 == puVar7[0x49]) {
                puVar7 = puVar7 + 0x49;
                goto LAB_ram_480fb6bc;
              }
              if (uVar16 == puVar7[0x92]) {
                puVar7 = puVar7 + 0x92;
                goto LAB_ram_480fb6bc;
              }
              if (uVar16 == puVar7[0xdb]) {
                puVar7 = puVar7 + 0xdb;
                goto LAB_ram_480fb6bc;
              }
              puVar7 = puVar7 + 0x124;
            } while (DAT_ram_4ff5c53c + iVar10 * 0x124 != puVar7);
            iVar9 = (int)puVar38 - (int)puVar7;
            if (iVar9 == 0x248) {
LAB_ram_480fbca6:
              if (uVar16 != *puVar7) {
                puVar7 = puVar7 + 0x49;
                goto LAB_ram_480fbcb0;
              }
              goto LAB_ram_480fb6bc;
            }
            if (iVar9 == 0x36c) {
LAB_ram_480fbc9c:
              if (uVar16 != *puVar7) {
                puVar7 = puVar7 + 0x49;
                goto LAB_ram_480fbca6;
              }
              goto LAB_ram_480fb6bc;
            }
            puVar8 = puVar38;
            if (iVar9 == 0x124) goto LAB_ram_480fbcb0;
LAB_ram_480fb7ac:
            uVar24 = DAT_ram_4ff5c540 * 0x124;
            uVar15 = DAT_ram_4ff5c540;
            if ((puVar8 != DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49) &&
               ((uint)((int)puVar8 - (int)DAT_ram_4ff5c53c) <= uVar24)) {
              uVar25 = ((int)uVar24 >> 2) * -0x381c0e07;
              if (uVar25 <= DAT_ram_4ff5c540) {
                iVar9 = ((int)puVar8 - (int)DAT_ram_4ff5c53c >> 2) * -0x381c0e07 +
                        ((int)uVar24 >> 2) * 0x381c0e07;
                uVar26 = DAT_ram_4ff5c540;
                if (uVar25 < DAT_ram_4ff5c540) {
                  do {
                    puVar39 = (undefined4 *)((int)DAT_ram_4ff5c53c + uVar24);
                    puVar32 = (undefined4 *)((int)DAT_ram_4ff5c53c + uVar24 + iVar9 * 0x124);
                    *puVar32 = *puVar39;
                    FUN_ram_4802ad2c(puVar32 + 1,puVar39 + 1);
                    uVar17 = puVar39[7];
                    uVar1 = *(undefined1 *)(puVar39 + 10);
                    puVar32[5] = puVar39[5];
                    uVar11 = puVar39[6];
                    puVar32[7] = uVar17;
                    uVar17 = puVar39[8];
                    uVar19 = puVar39[9];
                    *(undefined1 *)(puVar32 + 10) = uVar1;
                    uVar1 = *(undefined1 *)((int)puVar39 + 0x29);
                    puVar32[8] = uVar17;
                    puVar32[9] = uVar19;
                    *(undefined1 *)((int)puVar32 + 0x29) = uVar1;
                    puVar32[6] = uVar11;
                    puVar28 = puVar39 + 0xb;
                    puVar27 = puVar32 + 0xb;
                    do {
                      uVar19 = puVar28[1];
                      uVar11 = puVar28[2];
                      uVar17 = puVar28[3];
                      *puVar27 = *puVar28;
                      puVar27[1] = uVar19;
                      puVar27[2] = uVar11;
                      puVar27[3] = uVar17;
                      puVar28 = puVar28 + 4;
                      puVar27 = puVar27 + 4;
                    } while (puVar28 != puVar39 + 0x33);
                    puVar22 = puVar32 + 0x34;
                    puVar31 = puVar39 + 0x34;
                    *puVar27 = *puVar28;
                    do {
                      uVar34 = puVar31[1];
                      uVar11 = puVar31[2];
                      uVar33 = puVar31[3];
                      uVar17 = puVar31[4];
                      uVar19 = puVar31[5];
                      *puVar22 = *puVar31;
                      puVar22[1] = uVar34;
                      puVar22[2] = uVar11;
                      puVar22[3] = uVar33;
                      puVar22[4] = uVar17;
                      puVar22[5] = uVar19;
                      uVar26 = DAT_ram_4ff5c540;
                      puVar31 = puVar31 + 6;
                      puVar22 = puVar22 + 6;
                    } while (puVar31 != puVar39 + 0x46);
                    uVar2 = *(undefined2 *)((int)puVar39 + 0x11a);
                    uVar3 = *(undefined2 *)(puVar39 + 0x47);
                    uVar4 = *(undefined2 *)((int)puVar39 + 0x11e);
                    uVar5 = *(undefined2 *)(puVar39 + 0x48);
                    uVar25 = uVar25 + 1;
                    *(undefined2 *)(puVar32 + 0x46) = *(undefined2 *)(puVar39 + 0x46);
                    *(undefined2 *)((int)puVar32 + 0x11a) = uVar2;
                    *(undefined2 *)(puVar32 + 0x47) = uVar3;
                    *(undefined2 *)((int)puVar32 + 0x11e) = uVar4;
                    *(undefined2 *)(puVar32 + 0x48) = uVar5;
                    uVar24 = uVar24 + 0x124;
                  } while (uVar25 < uVar26);
                }
                uVar15 = uVar26 + iVar9;
                if (uVar15 < uVar26) {
                  iVar9 = uVar15 * 0x124;
                  uVar24 = uVar15;
                  do {
                    uVar24 = uVar24 + 1;
                    FUN_ram_4802a59e((int)DAT_ram_4ff5c53c + iVar9 + 4);
                    iVar9 = iVar9 + 0x124;
                  } while (uVar24 < DAT_ram_4ff5c540);
                }
              }
            }
          }
LAB_ram_480fb7e0:
          DAT_ram_4ff5c540 = uVar15;
          if (uVar16 != uVar6) goto LAB_ram_480fb7e4;
          DAT_ram_4ff6dd79 = (DAT_ram_4ff5c540 != 0) << 2;
          puVar28 = &local_250;
          DAT_ram_4ff6dd80 = 0;
          puVar32 = &DAT_ram_48222ffc;
          DAT_ram_4ff6dd7c = 0;
          puVar27 = puVar28;
          do {
            uVar17 = puVar32[1];
            uVar33 = puVar32[2];
            uVar11 = puVar32[3];
            *puVar27 = *puVar32;
            puVar27[1] = uVar17;
            uVar17 = puVar32[4];
            uVar19 = puVar32[5];
            puVar27[2] = uVar33;
            puVar27[3] = uVar11;
            puVar27[4] = uVar17;
            puVar27[5] = uVar19;
            puVar32 = puVar32 + 6;
            puVar27 = puVar27 + 6;
          } while (puVar32 != &DAT_ram_48223044);
          uStack_25c = 0xfa0050;
          uStack_260 = 0;
          puVar27 = &local_164;
          do {
            uVar34 = puVar28[1];
            uVar11 = puVar28[2];
            uVar17 = puVar28[3];
            uVar19 = puVar28[4];
            uVar33 = puVar28[5];
            *puVar27 = *puVar28;
            puVar27[1] = uVar34;
            puVar27[2] = uVar11;
            puVar27[3] = uVar17;
            puVar27[4] = uVar19;
            puVar27[5] = uVar33;
            puVar28 = puVar28 + 6;
            puVar27 = puVar27 + 6;
          } while (puVar28 != &uStack_208);
          puVar27 = local_2e0;
          puVar28 = &local_164;
          do {
            uVar34 = puVar28[1];
            uVar33 = puVar28[2];
            uVar11 = puVar28[3];
            uVar17 = puVar28[4];
            uVar19 = puVar28[5];
            *puVar27 = *puVar28;
            puVar27[1] = uVar34;
            puVar27[2] = uVar33;
            puVar27[3] = uVar11;
            puVar27[4] = uVar17;
            puVar27[5] = uVar19;
            puVar28 = puVar28 + 6;
            puVar27 = puVar27 + 6;
          } while (puVar28 != &uStack_11c);
          FUN_ram_480f50d2(&DAT_ram_4ff60e20,local_2e0);
          FUN_ram_480f47ac(&DAT_ram_4ff60e20,0,0x2d);
          FUN_ram_480f4aca(&DAT_ram_4ff60e20,&uStack_260);
          iVar10 = FUN_ram_480ee8aa();
          iVar12 = FUN_ram_480f2420();
          iVar13 = FUN_ram_480f2488();
          iVar14 = FUN_ram_480f24c2();
          iVar9 = 0;
          DAT_ram_4ff6dd74 = uVar16;
          if (DAT_ram_4ff6dd78 != '\0') {
            iVar9 = FUN_ram_480aecea();
          }
          if ((((iVar10 == 0) || (iVar12 == 0)) || (iVar13 == 0)) || ((iVar14 == 0 || (iVar9 == 0)))
             ) {
            FUN_ram_4803862c(uVar16);
            goto LAB_ram_480fbb28;
          }
LAB_ram_480fb81c:
          iVar9 = FUN_ram_4802feee();
          if (iVar9 != 0) {
            local_250 = 0;
            uStack_24c = 0;
            uStack_248 = 0;
            FUN_ram_4819ad74(&local_250,10,"s%08lx",uVar16);
            memset(&local_164,0,0x46);
            uStack_160 = CONCAT22(uStack_160._2_2_,0xd3ff);
            local_164 = 0x54475453;
            uVar15 = 0xffffffff;
            iVar10 = 0;
            do {
              cVar18 = '\b';
              uVar15 = uVar15 ^ *(byte *)((int)&local_164 + iVar10);
              do {
                cVar18 = cVar18 + -1;
                uVar15 = uVar15 >> 1 ^ -(uVar15 & 1) & 0xedb88320;
              } while (cVar18 != '\0');
              iVar10 = iVar10 + 1;
            } while (iVar10 != 0x42);
            uStack_124 = CONCAT22((short)~uVar15,(undefined2)uStack_124);
            uStack_260 = 0;
            uStack_120._0_2_ = (undefined2)(~uVar15 >> 0x10);
            iVar10 = FUN_ram_48025b94();
            fence();
            fence();
            if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar10 - DAT_ram_4ff6deec))) ||
               (2000000 < (uint)(iVar10 - DAT_ram_4ff6def0))) {
              fence();
              DAT_ram_4ff6def0 = iVar10;
            }
            DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
            DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","sp_target_v2",1,&uStack_260);
            iVar12 = 0;
            if (DAT_ram_4ff6dd64 == 0) {
              DAT_ram_4ff6dd64 = FUN_ram_4815a218(uStack_260,&local_250,&local_164,0x46);
              if (DAT_ram_4ff6dd64 == 0) {
                DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(uStack_260);
              }
              FUN_ram_4815a050(uStack_260);
              if ((DAT_ram_4ff6dd64 == 0) && (iVar12 = iVar9, uVar16 == DAT_ram_4ff6dd38)) {
                DAT_ram_4ff6dd35 = 0;
              }
            }
            DAT_ram_4ff6deec = FUN_ram_48025b94();
            fence();
            DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
            DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
            if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar10)) {
              DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar10;
            }
            if (iVar12 != 0) {
              if (uVar16 == uVar6) {
                if (uVar16 == DAT_ram_4ff6dd40) {
                  iVar9 = FUN_ram_48032378(uVar16);
                  if (iVar9 != 0) {
                    FUN_ram_4803618c();
                    goto LAB_ram_480fa9f6;
                  }
                  FUN_ram_4803618c();
                  goto joined_r0x480fbfc2;
                }
              }
              else {
                iVar9 = FUN_ram_48032378(uVar16);
                if (iVar9 != 0) {
LAB_ram_480fa9f6:
                  FUN_ram_4802a8a8(&uStack_208,"Cache-Control");
                  FUN_ram_4802a8a8(&local_164,"no-store");
                  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_208,&local_164);
                  FUN_ram_4802a59e(&local_164);
                  FUN_ram_4802a59e(&uStack_208);
                  FUN_ram_48052ffe(&local_164);
                  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",&local_164);
                  FUN_ram_4802a59e(&local_164);
                  FUN_ram_4802a59e(auStack_280);
                  return;
                }
joined_r0x480fbfc2:
                if ((DAT_ram_4ff6dd48 == '\0') || (uVar16 == DAT_ram_4ff6dd44)) {
                  DAT_ram_4ff6dd48 = '\x01';
                  DAT_ram_4ff5ca7c = DAT_ram_4ff5ca7c + 1;
                  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x80;
                  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
                  DAT_ram_4ff6dd44 = uVar16;
                }
              }
              FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                               "{\"ok\":false,\"error\":\"ambient_settings_erase_pending\",\"persistence\":\"pending\"}"
                              );
              goto LAB_ram_480fa954;
            }
          }
          pcVar21 = "{\"ok\":false,\"error\":\"speed_target_settings_erase\"}";
        }
        uVar11 = 500;
      }
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar11,"application/json",pcVar21);
      goto LAB_ram_480fa954;
    }
LAB_ram_480fbb90:
    if (DAT_ram_4ff6dd4a != '\0') goto LAB_ram_480fbc0a;
LAB_ram_480fbb9a:
    pcVar21 = "{\"ok\":false,\"error\":\"ambient_settings_unavailable\"}";
    uVar11 = 0x1f7;
  }
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar11,"application/json",pcVar21);
LAB_ram_480fa954:
  FUN_ram_4802a59e(auStack_280);
  return;
code_r0x480fae2a:
  uVar16 = DAT_ram_4ff47e80;
  if (uVar6 == DAT_ram_4ff47e80) goto LAB_ram_480fb324;
  goto LAB_ram_480fae32;
LAB_ram_480fb324:
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1fb,"application/json",
                   "{\"ok\":false,\"error\":\"driver_storage_full\"}");
LAB_ram_480fb2d4:
  puVar7 = &uStack_260;
LAB_ram_480fb2d6:
  FUN_ram_4802a59e(puVar7);
  goto LAB_ram_480fa954;
}


