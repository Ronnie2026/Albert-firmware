/* Firmware entry: 0x4ff34304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff34304(void)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint *puStack_5c;
  undefined4 uStack_58;
  uint *puStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff2d0a2();
  uStack_74 = 0;
  FUN_ram_4ff2d13a(400000000,&uStack_74);
  FUN_ram_4ff3122a();
  _DAT_ram_500e6014 = _DAT_ram_500e6014 | 0x80000000;
  _DAT_ram_500e60c0 = _DAT_ram_500e60c0 & 0xfd7fffff;
  _DAT_ram_500e6030 = _DAT_ram_500e6030 & 0xffffcfff | 0xd000;
  FUN_ram_4ff31240();
  _DAT_ram_500e121c = _DAT_ram_500e121c & 0xffffcfff | 0x2000;
  _DAT_ram_500e1220 = _DAT_ram_500e1220 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1224 = _DAT_ram_500e1224 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1228 = _DAT_ram_500e1228 & 0xffffcfff | 0x2000;
  _DAT_ram_500e122c = _DAT_ram_500e122c & 0xffffcfff | 0x2000;
  _DAT_ram_500e1230 = _DAT_ram_500e1230 & 0xffffcfff | 0x2000;
  iVar4 = (int)&uStack_64 + 1;
  _DAT_ram_500e1234 = _DAT_ram_500e1234 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1238 = _DAT_ram_500e1238 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1248 = _DAT_ram_500e1248 & 0xffffcfff | 0x2000;
  _DAT_ram_500e124c = _DAT_ram_500e124c & 0xffffcfff | 0x2000;
  _DAT_ram_500e1250 = _DAT_ram_500e1250 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1254 = _DAT_ram_500e1254 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1258 = _DAT_ram_500e1258 & 0xffffcfff | 0x2000;
  _DAT_ram_500e125c = _DAT_ram_500e125c & 0xffffcfff | 0x2000;
  _DAT_ram_500e1260 = _DAT_ram_500e1260 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1264 = _DAT_ram_500e1264 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1240 = _DAT_ram_500e1240 & 0xffffcfff | 0x2000;
  _DAT_ram_500e1244 = _DAT_ram_500e1244 & 0xffffcfff | 0x2000;
  _DAT_ram_500e123c = _DAT_ram_500e123c & 0xfffe7fff | 0x10001;
  _DAT_ram_500e1268 = _DAT_ram_500e1268 & 0xfffe7fff | 0x10001;
  _DAT_ram_5008e1a0 = _DAT_ram_5008e1a0 & 0x81fff003 | 0x8400018f;
  _DAT_ram_5008e174 = _DAT_ram_5008e174 | 0xc0000;
  _DAT_ram_5008e050 = 0x10001;
  _DAT_ram_5008f014 = 0x10001;
  _DAT_ram_5008e190 = _DAT_ram_5008e190 | 0x20;
  _DAT_ram_5008e180 = _DAT_ram_5008e180 | 0x20;
  uVar2 = DAT_ram_4ff6dad4 & 0xb0ffffff;
  DAT_ram_4ff6dad0 = DAT_ram_4ff6dad0 & 0xffffffc0 | 0x30;
  DAT_ram_4ff6dad4._0_1_ = (undefined1)uVar2;
  DAT_ram_4ff6dad4 =
       CONCAT22((short)(uVar2 >> 0x10),CONCAT11(DAT_ram_4ff6dad4._1_1_,(undefined1)DAT_ram_4ff6dad4)
               ) & 0xffff1fff | 0x4b002000;
  uStack_68 = 0;
  uStack_64 = 0;
  iStack_6c = 0;
  esp_rom_spi_set_op_mode(3,7);
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_60 = 0x104040;
  uStack_58 = 0x20;
  uStack_48 = 0x10;
  uStack_44 = 0xc;
  puStack_5c = (uint *)&iStack_6c;
  puStack_4c = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,&uStack_68,2,2,0);
  iStack_6c = 4;
  esp_rom_spi_set_op_mode(3,7);
  uStack_60 = 0x104040;
  uStack_58 = 0x20;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_48 = 0x10;
  uStack_44 = 0xc;
  puStack_5c = (uint *)&iStack_6c;
  puStack_4c = (uint *)iVar4;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,iVar4,2,2,0);
  bVar7 = uStack_64._1_1_ & 0x1f;
  uStack_64._0_2_ = CONCAT11(bVar7 | (byte)(DAT_ram_4ff6dad4 >> 8) & 0xe0,(undefined1)uStack_64);
  uStack_68 = CONCAT31(uStack_68._1_3_,(byte)uStack_68 & 0xc0 | (byte)DAT_ram_4ff6dad0 & 0x3f);
  iStack_6c = 0;
  esp_rom_spi_set_op_mode(3,7);
  uStack_58 = 0x20;
  uStack_50 = 0x10;
  puStack_4c = (uint *)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_60 = 0x10c0c0;
  puStack_5c = (uint *)&iStack_6c;
  puStack_54 = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0,0,2,0);
  iStack_6c = 4;
  esp_rom_spi_set_op_mode(3,7);
  uStack_60 = 0x10c0c0;
  uStack_58 = 0x20;
  uStack_50 = 0x10;
  puStack_4c = (uint *)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_5c = (uint *)&iStack_6c;
  puStack_54 = (uint *)iVar4;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0,0,2,0);
  iStack_6c = 8;
  esp_rom_spi_set_op_mode(3,7);
  puStack_4c = (uint *)((int)&uStack_64 + 3);
  uStack_60 = 0x104040;
  uStack_58 = 0x20;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_48 = 8;
  uStack_44 = 0xc;
  puStack_5c = (uint *)&iStack_6c;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,(int)&uStack_64 + 3,1,2,0);
  uStack_64 = CONCAT13(uStack_64._3_1_ & 0xb0 | DAT_ram_4ff6dad4._3_1_ & 0x4f,(undefined3)uStack_64)
  ;
  iStack_6c = 8;
  esp_rom_spi_set_op_mode(3,7);
  puStack_54 = (uint *)((int)&uStack_64 + 3);
  uStack_60 = 0x10c0c0;
  uStack_58 = 0x20;
  uStack_50 = 0x10;
  puStack_4c = (uint *)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_5c = (uint *)&iStack_6c;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0,0,2,0);
  iStack_70 = 0x5a6b7c8d;
  iStack_6c = 0;
  uStack_68 = 0;
  esp_rom_spi_set_op_mode(3,7);
  puStack_54 = (uint *)&iStack_70;
  uStack_60 = 0x108080;
  uStack_58 = 0x20;
  uStack_50 = 0x20;
  puStack_4c = (uint *)0x0;
  uStack_48 = 0;
  uStack_44 = 0xc;
  puStack_5c = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0,0,2,0);
  uStack_68 = 0;
  esp_rom_spi_set_op_mode(3,7);
  uStack_44 = 0x1a;
  uStack_60 = 0x100000;
  uStack_58 = 0x20;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_48 = 0x20;
  puStack_5c = &uStack_68;
  puStack_4c = (uint *)&iStack_6c;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,&iStack_6c,4,2,0);
  if (iStack_6c != iStack_70) {
    if (DAT_ram_4ff47dac != 0) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__PSRAM_chip_is_not_co_ram_4ff55498,uVar1,s_hex_psram_ram_4ff5548c);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x106;
    }
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x106;
  }
  uStack_68 = 0;
  esp_rom_spi_set_op_mode(3,7);
  uStack_58 = 0x20;
  uStack_48 = 0x10;
  uStack_60 = 0x104040;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  puStack_4c = &DAT_ram_4ff6dad0;
  uStack_44 = 0xc;
  puStack_5c = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,&DAT_ram_4ff6dad0,2,2,0);
  uStack_68 = 2;
  esp_rom_spi_set_op_mode(3,7);
  puStack_4c = (uint *)0x4ff6dad3;
  uStack_58 = 0x20;
  uStack_48 = 0x10;
  uStack_60 = 0x104040;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_44 = 0xc;
  puStack_5c = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0x4ff6dad3,2,2,0);
  uStack_68 = 4;
  esp_rom_spi_set_op_mode(3,7);
  puStack_4c = (uint *)0x4ff6dad5;
  uStack_58 = 0x20;
  uStack_60 = 0x104040;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_48 = 8;
  uStack_44 = 0xc;
  puStack_5c = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0x4ff6dad5,1,2,0);
  uStack_68 = 8;
  esp_rom_spi_set_op_mode(3,7);
  puStack_4c = (uint *)0x4ff6dad7;
  uStack_58 = 0x20;
  uStack_60 = 0x104040;
  puStack_54 = (uint *)0x0;
  uStack_50 = 0;
  uStack_48 = 8;
  uStack_44 = 0xc;
  puStack_5c = &uStack_68;
  esp_rom_spi_cmd_config(3,&uStack_60);
  esp_rom_spi_cmd_start(3,0x4ff6dad7,1,2,0);
  if ((0x4002000U >> (DAT_ram_4ff6dad0 >> 8 & 0x1f) & 1) == 0) {
    if (1 < DAT_ram_4ff47dac) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_W___lu___s__PSRAM_ID_read_error__ram_4ff554c4,uVar1,s_hex_psram_ram_4ff5548c,
                 DAT_ram_4ff6dad0 >> 8 & 0x1f);
      goto LAB_ram_4ff34b3e;
    }
  }
  else {
LAB_ram_4ff34b3e:
    if (2 < DAT_ram_4ff47dac) {
      uVar1 = FUN_ram_4ff44d14();
      if ((DAT_ram_4ff6dad0._1_1_ & 0x1f) == 0xd) {
        pcVar3 = &DAT_ram_4ff5543c;
      }
      else {
        pcVar3 = s_UNKNOWN_ram_4ff55440;
      }
      ets_printf(s_I___lu___s__vendor_id___0x_02x___ram_4ff55518,uVar1,s_hex_psram_ram_4ff5548c,
                 DAT_ram_4ff6dad0 >> 8 & 0x1f,pcVar3);
      if (2 < DAT_ram_4ff47dac) {
        uVar1 = FUN_ram_4ff44d14();
        if ((DAT_ram_4ff6dad0 & 0x20) == 0) {
          pcVar3 = s_Variable_ram_4ff55450;
        }
        else {
          pcVar3 = s_Fixed_ram_4ff55448;
        }
        ets_printf(s_I___lu___s__Latency___0x_02x___s_ram_4ff55540,uVar1,s_hex_psram_ram_4ff5548c,
                   DAT_ram_4ff6dad0 >> 5 & 1,pcVar3);
        if (2 < DAT_ram_4ff47dac) {
          uVar1 = FUN_ram_4ff44d14();
          uVar2 = DAT_ram_4ff6dad0 & 3;
          if (uVar2 < 2) {
            iVar4 = (uVar2 + 1) * 0x19;
          }
          else {
            iVar4 = (uVar2 - 1) * 100;
          }
          ets_printf(s_I___lu___s__DriveStr____0x_02x___ram_4ff55568,uVar1,s_hex_psram_ram_4ff5548c,
                     uVar2,iVar4);
          if (2 < DAT_ram_4ff47dac) {
            uVar1 = FUN_ram_4ff44d14();
            uVar2 = DAT_ram_4ff6dad0 >> 0x1b & 3;
            ets_printf(s_I___lu___s__dev_id___0x_02x__gen_ram_4ff55594,uVar1,
                       s_hex_psram_ram_4ff5548c,uVar2,uVar2 + 1);
            if (2 < DAT_ram_4ff47dac) {
              uVar1 = FUN_ram_4ff44d14();
              bVar7 = DAT_ram_4ff6dad0._3_1_ & 7;
              if (bVar7 == 5) {
                iVar4 = 0x80;
              }
              else if (bVar7 < 6) {
                iVar4 = 0x20;
                if (bVar7 != 1) {
                  iVar4 = (uint)(bVar7 == 3) << 6;
                }
              }
              else {
                iVar4 = (uint)(bVar7 == 7) << 8;
              }
              ets_printf(s_I___lu___s__density___0x_02x___d_ram_4ff555c8,uVar1,
                         s_hex_psram_ram_4ff5548c,bVar7,iVar4);
              if (2 < DAT_ram_4ff47dac) {
                uVar1 = FUN_ram_4ff44d14();
                if ((DAT_ram_4ff6dad0._3_1_ & 0xe0) == 0xc0) {
                  puVar5 = &DAT_ram_4ff5545c;
                }
                else {
                  puVar5 = &DAT_ram_4ff55464;
                }
                ets_printf(s_I___lu___s__good_die___0x_02x____ram_4ff555f8,uVar1,
                           s_hex_psram_ram_4ff5548c,DAT_ram_4ff6dad0 >> 0x1d,puVar5);
                if (2 < DAT_ram_4ff47dac) {
                  uVar1 = FUN_ram_4ff44d14();
                  if ((DAT_ram_4ff6dad4 & 0x30) == 0x10) {
                    puVar5 = &DAT_ram_4ff5546c;
                  }
                  else {
                    puVar5 = &DAT_ram_4ff55474;
                  }
                  ets_printf(s_I___lu___s__SRF___0x_02x___s_Ref_ram_4ff55620,uVar1,
                             s_hex_psram_ram_4ff5548c,DAT_ram_4ff6dad4 >> 4 & 3,puVar5);
                  if (2 < DAT_ram_4ff47dac) {
                    uVar1 = FUN_ram_4ff44d14();
                    if (((DAT_ram_4ff6dad4 & 0x4000000) == 0) || ((DAT_ram_4ff6dad4._3_1_ & 3) == 3)
                       ) {
                      pcVar3 = &DAT_ram_4ff542d0;
                    }
                    else {
                      pcVar3 = s_Hybrid_ram_4ff5547c;
                    }
                    ets_printf(s_I___lu___s__BurstType___0x_02x___ram_4ff55650,uVar1,
                               s_hex_psram_ram_4ff5548c,DAT_ram_4ff6dad4 >> 0x1a & 1,pcVar3);
                    if (2 < DAT_ram_4ff47dac) {
                      uVar1 = FUN_ram_4ff44d14();
                      uVar6 = 0x10;
                      if (((DAT_ram_4ff6dad4 & 0x3000000) != 0) &&
                         (uVar6 = 0x800, (DAT_ram_4ff6dad4._3_1_ & 3) == 1)) {
                        uVar6 = 0x20;
                      }
                      ets_printf(s_I___lu___s__BurstLen___0x_02x____ram_4ff55680,uVar1,
                                 s_hex_psram_ram_4ff5548c,DAT_ram_4ff6dad4._3_1_ & 3,uVar6);
                      if (2 < DAT_ram_4ff47dac) {
                        uVar1 = FUN_ram_4ff44d14();
                        if ((DAT_ram_4ff6dad4 & 0x40000000) == 0) {
                          puVar5 = &DAT_ram_4ff55488;
                        }
                        else {
                          puVar5 = &DAT_ram_4ff55484;
                        }
                        ets_printf(s_I___lu___s__BitMode___0x_02x___s_ram_4ff556b0,uVar1,
                                   s_hex_psram_ram_4ff5548c,DAT_ram_4ff6dad4 >> 0x1e & 1,puVar5);
                        if (2 < DAT_ram_4ff47dac) {
                          uVar1 = FUN_ram_4ff44d14();
                          uVar2 = DAT_ram_4ff6dad0 >> 2 & 7;
                          if ((DAT_ram_4ff6dad0 & 0x20) == 0) {
                            pcVar3 = s_Variable_ram_4ff55450;
                          }
                          else {
                            pcVar3 = s_Fixed_ram_4ff55448;
                          }
                          ets_printf(s_I___lu___s__Readlatency___0x_02x_ram_4ff556e0,uVar1,
                                     s_hex_psram_ram_4ff5548c,uVar2,(uVar2 + 3) * 2,pcVar3);
                          if (2 < DAT_ram_4ff47dac) {
                            uVar6 = FUN_ram_4ff44d14();
                            uVar1 = 1;
                            if ((((DAT_ram_4ff6dad0 & 3) != 0) &&
                                (uVar1 = 2, (DAT_ram_4ff6dad0 & 3) != 1)) &&
                               (uVar1 = 8, (DAT_ram_4ff6dad0 & 3) == 2)) {
                              uVar1 = 4;
                            }
                            ets_printf(s_I___lu___s__DriveStrength__0x_02_ram_4ff55714,uVar6,
                                       s_hex_psram_ram_4ff5548c,DAT_ram_4ff6dad0 & 3,uVar1);
                            goto joined_r0x4ff34e50;
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
joined_r0x4ff34e50:
  bVar7 = DAT_ram_4ff6dad0._3_1_ & 7;
  if (bVar7 == 5) {
    DAT_ram_4ff6dad8 = 0x1000000;
  }
  else if (bVar7 < 6) {
    DAT_ram_4ff6dad8 = 0x400000;
    if (bVar7 != 1) {
      DAT_ram_4ff6dad8 = (uint)(bVar7 == 3) << 0x17;
    }
  }
  else {
    DAT_ram_4ff6dad8 = 0x4000000;
    if (bVar7 != 6) {
      DAT_ram_4ff6dad8 = 0x2000000;
    }
  }
  _DAT_ram_5008e04c = _DAT_ram_5008e04c & 0xffff0000 | 0xf0008080;
  _DAT_ram_5008e048 = _DAT_ram_5008e048 & 0xffff0000 | 0xf0000000;
  _DAT_ram_5008e0d8 = _DAT_ram_5008e0d8 & 0xfffffff3 | 3;
  _DAT_ram_5008e040 = _DAT_ram_5008e040 & 0xf030303f | 0x2f7c679;
  _DAT_ram_5008e044 = _DAT_ram_5008e044 | 0xcbc0000;
  _DAT_ram_5008e03c = _DAT_ram_5008e03c & 0x7fffffff | 1;
  _DAT_ram_5008e00c = _DAT_ram_5008e00c | 0x6000000;
  uStack_68 = _DAT_ram_5008e04c;
  uStack_60 = _DAT_ram_5008e048;
  FUN_ram_4ff31052();
  _DAT_ram_5008f0d4 = _DAT_ram_5008f0d4 | 2;
  _DAT_ram_5008e0d8 = _DAT_ram_5008e0d8 | 2;
  return 0;
}


