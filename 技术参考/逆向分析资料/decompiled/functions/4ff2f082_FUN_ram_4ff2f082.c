/* Firmware entry: 0x4ff2f082 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff2f082(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte bStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1[0xb] == 0) && ((*(byte *)(param_1 + 0xd) & 4) == 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___tx_queue_dep_ram_4ff57c94,uVar4
                     ,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2c2);
    return 0x102;
  }
  if ((param_1[0xc] != 0) && ((-0xf >> (param_1[0xc] & 0x1fU) & 1U) != 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Invalid_intr_ram_4ff57cc4,uVar4
                     ,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2c3);
    return 0x102;
  }
  iVar2 = FUN_ram_481a91ee();
  puVar3 = (undefined4 *)FUN_ram_4ff2091a(1,iVar2 + 0xa0,0x804);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___No_mem_ram_4ff57cf8,uVar4,
                     s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2c9);
    return 0x101;
  }
  puVar3[0xc] = 0xffffffff;
  FUN_ram_4ff216d6(&DAT_ram_4ff6d424);
  if (DAT_ram_4ff6d42c == 0) {
    iVar2 = 0;
  }
  else if (DAT_ram_4ff6d430 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
    if (DAT_ram_4ff6d434 != 0) {
      FUN_ram_4ff216e2(&DAT_ram_4ff6d424);
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Controller_n_ram_4ff57d14,
                       uVar4,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2cd);
      iVar10 = 0x105;
      goto LAB_ram_4ff2f120;
    }
  }
  (&DAT_ram_4ff6d42c)[iVar2] = (int)puVar3;
  FUN_ram_4ff216e2(&DAT_ram_4ff6d424);
  iVar10 = param_1[4];
  puVar3[0xc] = iVar2;
  puVar3[0x10] = puVar3 + 0x28;
  if (iVar10 == 0) {
    iVar10 = 0x12;
  }
  puVar3[0x15] = iVar10;
  iVar10 = FUN_ram_481a4bb6(iVar10,1,puVar3 + 0x16);
  if (iVar10 != 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___get_clock_so_ram_4ff57d44,uVar4
                     ,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2d1);
    goto LAB_ram_4ff2f120;
  }
  fence();
  puVar3[0x1f] = 3;
  fence();
  uVar4 = FUN_ram_481a7c04(param_1[0xb],4,0x804);
  puVar3[0x13] = uVar4;
  iVar10 = FUN_ram_481a7de6(0x804);
  puVar3[0x14] = iVar10;
  if (((puVar3[0x13] == 0) || (iVar10 == 0)) && ((*(byte *)(param_1 + 0xd) & 4) == 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___no_mem_ram_4ff57d7c,uVar4,
                     s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2d7);
    iVar10 = 0x101;
    goto LAB_ram_4ff2f120;
  }
  uVar11 = 0xc0e;
  if (0 < param_1[0xc]) {
    uVar11 = 1 << (param_1[0xc] & 0x1fU) | 0xc00;
  }
  FUN_ram_4ff216d6(&DAT_ram_4ff6d428);
  iVar10 = FUN_ram_4800340c(*(undefined4 *)(&UNK_ram_4823a800 + iVar2 * 0x20),uVar11,
                            FUN_ram_4ff2e8c4,puVar3,puVar3 + 0x11);
  if (iVar10 != 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Alloc_interr_ram_4ff57d98,uVar4
                     ,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2db);
    goto LAB_ram_4ff2f120;
  }
  uVar11 = param_1[9];
  if (uVar11 != 0) {
    if (1000000 < uVar11) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Timestamp_re_ram_4ff57dc4,
                       uVar4,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x2eb);
      iVar10 = 0x102;
      goto LAB_ram_4ff2f120;
    }
    puVar3[0x17] = uVar11;
  }
  FUN_ram_4ff216e2(&DAT_ram_4ff6d428);
  iVar10 = FUN_ram_4ff2ff60(puVar3[0x15],1);
  if (iVar10 != 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___enable_clock_ram_4ff57e00,uVar4
                     ,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x30f);
    return iVar10;
  }
  iVar10 = puVar3[0x15];
  cVar1 = *(char *)(puVar3 + 0xc);
  FUN_ram_4ff3122a();
  if (iVar10 != 0x12) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff57924,0xe9,
                     s_twai_ll_set_clock_source_ram_4ff5361c,
                     s_clk_src____TWAI_CLK_SRC_XTAL_ram_4ff57e30);
  }
  if (cVar1 == '\x01') {
    _DAT_ram_500e607c = _DAT_ram_500e607c & 0xfbffffff;
  }
  else if (cVar1 == '\x02') {
    _DAT_ram_500e607c = _DAT_ram_500e607c & 0xefffffff;
  }
  else {
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff57924,0xf7,
                       s_twai_ll_set_clock_source_ram_4ff5361c,s_false_ram_4ff546f4);
    }
    _DAT_ram_500e607c = _DAT_ram_500e607c & 0xfeffffff;
  }
  FUN_ram_4ff31240();
  FUN_ram_4ff2e41a(iVar2,1);
  uVar11 = param_1[0xd];
  uStack_48 = puVar3[0xc];
  uStack_44 = puVar3[0x16];
  uStack_40 = puVar3[0x17];
  uStack_38 = (undefined1)param_1[10];
  bStack_37 = (byte)(uVar11 >> 3) & 1;
  bStack_36 = (byte)uVar11 & 1;
  bStack_35 = (byte)(uVar11 >> 1) & 1;
  bStack_34 = (byte)(uVar11 >> 2) & 1;
  uStack_3c = 0xe7;
  iVar2 = FUN_ram_481a91f4(puVar3[0x10],&uStack_48);
  if (iVar2 == 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___hardware_not_ram_4ff57e50,uVar4
                     ,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,800);
    iVar10 = 0x103;
    goto LAB_ram_4ff2f120;
  }
  piVar5 = param_1 + 5;
  if (param_1[5] == 0) {
    uVar4 = FUN_ram_4ff44d14(iVar2,piVar5);
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___classic_timi_ram_4ff57e84,uVar4
                     ,s_esp_twai_ram_4ff57310,s__node_calc_set_bit_timing_ram_4ff535e4,0x1a7);
LAB_ram_4ff2f8a8:
    iVar10 = 0x102;
  }
  else {
    if ((param_1[7] != 0) && (param_1[5] != param_1[7])) {
      uVar4 = FUN_ram_4ff44d14(iVar2,piVar5);
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___FD_stage_bit_ram_4ff57ebc,
                       uVar4,s_esp_twai_ram_4ff57310,s__node_calc_set_bit_timing_ram_4ff535e4,0x1a9)
      ;
      goto LAB_ram_4ff2f8a8;
    }
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_50 = 0x8011001;
    uStack_58 = 2;
    uStack_54 = 0x8000;
    uStack_4c = 4;
    iVar2 = FUN_ram_4ff2d792(puVar3[0x16],piVar5,&uStack_58,&uStack_64);
    if (iVar2 == 0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___bitrate_can__ram_4ff57ef4,
                       uVar4,s_esp_twai_ram_4ff57310,s__node_calc_set_bit_timing_ram_4ff535e4,0x1b9)
      ;
      goto LAB_ram_4ff2f8a8;
    }
    if (iVar2 != param_1[5]) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,s_esp_twai_ram_4ff57310,s_W___lu___s__bitrate_precision_lo_ram_4ff57f20,
                       uVar4,s_esp_twai_ram_4ff57310,param_1[5],iVar2);
    }
    iVar10 = FUN_ram_4ff2e11e(puVar3,&uStack_64,0);
    if (iVar10 == 0) {
      iVar2 = *param_1;
      if (iVar2 < 0) {
        if (((*(byte *)(param_1 + 0xd) & 4) != 0) && (iVar2 == -1)) goto LAB_ram_4ff2f362;
LAB_ram_4ff2f952:
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Invalid_tx_g_ram_4ff57fc4,
                         uVar4,s_esp_twai_ram_4ff57310,s__node_config_io_ram_4ff535d4,0x82);
LAB_ram_4ff2f70a:
        iVar10 = 0x102;
      }
      else {
        if ((int)(iVar2 - 0x20U) < 0) {
          uVar11 = -0x1000000 << (0x1fU - iVar2 & 0x1f);
        }
        else {
          uVar11 = -0x800000 >> (iVar2 - 0x20U & 0x1f);
        }
        if ((uVar11 & 1) != 0) goto LAB_ram_4ff2f952;
LAB_ram_4ff2f362:
        iVar2 = param_1[1];
        if (iVar2 < 0) {
LAB_ram_4ff2f6de:
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Invalid_rx_g_ram_4ff57ff0
                           ,uVar4,s_esp_twai_ram_4ff57310,s__node_config_io_ram_4ff535d4,0x83);
          goto LAB_ram_4ff2f70a;
        }
        if ((int)(iVar2 - 0x20U) < 0) {
          uVar11 = -0x1000000 << (0x1fU - iVar2 & 0x1f);
        }
        else {
          uVar11 = -0x800000 >> (iVar2 - 0x20U & 0x1f);
        }
        if ((uVar11 & 1) != 0) goto LAB_ram_4ff2f6de;
        uVar11 = param_1[2];
        if ((int)uVar11 < 0) {
LAB_ram_4ff2f386:
          uVar11 = param_1[3];
          if (-1 < (int)uVar11) {
            if ((int)(uVar11 - 0x20) < 0) {
              uVar11 = 0xffffffffU >> (uVar11 & 0x1f) | 0xfffffe << (0x1f - uVar11 & 0x1f);
            }
            else {
              uVar11 = 0x7fffff >> (uVar11 - 0x20 & 0x1f);
            }
            if (((uVar11 & 1) != 0) && (*(int *)(&UNK_ram_4823a810 + puVar3[0xc] * 0x20) < 0)) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,
                               s_E___lu___s___s__d___bus_off_indi_ram_4ff58058,uVar4,
                               s_esp_twai_ram_4ff57310,s__node_config_io_ram_4ff535d4,0x85);
              iVar10 = 0x106;
              goto LAB_ram_4ff2f70e;
            }
          }
          FUN_ram_4812a6a6();
          FUN_ram_4812ab6c(param_1[1],0);
          FUN_ram_4812c062(param_1[1],1);
          gpio_matrix_in(param_1[1],*(undefined4 *)(&DAT_ram_4823a808 + puVar3[0xc] * 0x20),0);
          if (*param_1 != -1) {
            FUN_ram_4812c062(*param_1,1);
            gpio_matrix_out(*param_1,*(undefined4 *)(&UNK_ram_4823a804 + puVar3[0xc] * 0x20),0,0);
          }
          uVar11 = param_1[2];
          if ((int)uVar11 < 0) {
LAB_ram_4ff2f406:
            uVar11 = param_1[3];
            uVar8 = 0;
            uVar6 = 0;
            if ((int)uVar11 < 0) {
              puVar3[0xe] = 0;
              puVar3[0xf] = 0;
              FUN_ram_481333c2(0,0);
              goto LAB_ram_4ff2f4c8;
            }
LAB_ram_4ff2f410:
            uVar7 = uVar11 - 0x20;
            if ((int)uVar7 < 0) {
              uVar9 = 0xffffffffU >> (uVar11 & 0x1f) | 0xfffffe << (0x1f - uVar11 & 0x1f);
            }
            else {
              uVar9 = 0x7fffff >> (uVar7 & 0x1f);
            }
            if ((uVar9 & 1) != 0) {
              if ((int)uVar7 < 0) {
                uVar9 = 1 << (uVar11 & 0x1f);
                uVar7 = 0;
              }
              else {
                uVar7 = 1 << (uVar7 & 0x1f);
                uVar9 = 0;
              }
              uVar6 = uVar6 | uVar7;
              uVar8 = uVar8 | uVar9;
              FUN_ram_4812c062(uVar11,1);
              gpio_matrix_out(param_1[3],*(undefined4 *)(&UNK_ram_4823a810 + puVar3[0xc] * 0x20),0,0
                             );
            }
          }
          else {
            uVar6 = uVar11 - 0x20;
            if ((int)uVar6 < 0) {
              uVar8 = 0xffffffffU >> (uVar11 & 0x1f) | 0xfffffe << (0x1f - uVar11 & 0x1f);
            }
            else {
              uVar8 = 0x7fffff >> (uVar6 & 0x1f);
            }
            if ((uVar8 & 1) == 0) goto LAB_ram_4ff2f406;
            if ((int)uVar6 < 0) {
              uVar8 = 1 << (uVar11 & 0x1f);
              uVar6 = 0;
            }
            else {
              uVar6 = 1 << (uVar6 & 0x1f);
              uVar8 = 0;
            }
            FUN_ram_4812c062(uVar11,1);
            gpio_matrix_out(param_1[2],*(undefined4 *)(&UNK_ram_4823a80c + puVar3[0xc] * 0x20),0,0);
            uVar11 = param_1[3];
            if (-1 < (int)uVar11) goto LAB_ram_4ff2f410;
          }
          puVar3[0xe] = uVar8;
          puVar3[0xf] = uVar6;
          uVar12 = FUN_ram_481333c2(uVar8,uVar6);
          uVar8 = uVar8 & (uint)uVar12;
          uVar6 = uVar6 & (uint)((ulonglong)uVar12 >> 0x20);
          if (uVar8 != 0 || uVar6 != 0) {
            do {
              uVar11 = __ctzdi2(uVar8,uVar6);
              if ((int)(uVar11 - 0x20) < 0) {
                uVar7 = 0;
                uVar9 = 1 << (uVar11 & 0x1f);
              }
              else {
                uVar7 = 1 << (uVar11 - 0x20 & 0x1f);
                uVar9 = 0;
              }
              uVar8 = uVar8 & ~uVar9;
              uVar6 = uVar6 & ~uVar7;
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,s_esp_twai_ram_4ff57310,
                               s_W___lu___s__GPIO__d_is_not_usabl_ram_4ff58098,uVar4,
                               s_esp_twai_ram_4ff57310,uVar11);
            } while (uVar8 != 0 || uVar6 != 0);
          }
LAB_ram_4ff2f4c8:
          puVar3[5] = FUN_ram_4ff2e11e;
          *puVar3 = &LAB_ram_4ff2eac4;
          puVar3[1] = FUN_ram_4ff2e35c;
          puVar3[2] = &LAB_ram_4ff2e6ca;
          puVar3[9] = FUN_ram_4ff2e810;
          puVar3[3] = FUN_ram_4ff2e218;
          puVar3[10] = FUN_ram_4ff2dfa6;
          puVar3[6] = &LAB_ram_4ff2eba0;
          puVar3[7] = FUN_ram_4ff2dee8;
          puVar3[8] = FUN_ram_4ff2ddda;
          puVar3[0xb] = FUN_ram_4ff2dd76;
          *param_2 = puVar3;
          return 0;
        }
        if ((int)(uVar11 - 0x20) < 0) {
          uVar11 = 0xffffffffU >> (uVar11 & 0x1f) | 0xfffffe << (0x1f - uVar11 & 0x1f);
        }
        else {
          uVar11 = 0x7fffff >> (uVar11 - 0x20 & 0x1f);
        }
        if (((uVar11 & 1) == 0) || (-1 < *(int *)(&UNK_ram_4823a80c + puVar3[0xc] * 0x20)))
        goto LAB_ram_4ff2f386;
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___quanta_clk_o_ram_4ff5801c,
                         uVar4,s_esp_twai_ram_4ff57310,s__node_config_io_ram_4ff535d4,0x84);
        iVar10 = 0x106;
      }
LAB_ram_4ff2f70e:
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___gpio_config_f_ram_4ff580d4,
                       uVar4,s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x324);
      goto LAB_ram_4ff2f120;
    }
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_timi_ram_4ff57f5c,uVar4
                     ,s_esp_twai_ram_4ff57310,s__node_calc_set_bit_timing_ram_4ff535e4,0x1cd);
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___bitrate_erro_ram_4ff57fa0,uVar4,
                   s_esp_twai_ram_4ff57310,s_twai_new_node_onchip_ram_4ff53740,0x322);
LAB_ram_4ff2f120:
  FUN_ram_4ff216e2(&DAT_ram_4ff6d428);
  FUN_ram_4ff2e580(puVar3);
  return iVar10;
}


