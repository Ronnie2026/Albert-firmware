/* Firmware entry: 0x480244fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_480244fc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  byte bStack_18e;
  byte bStack_18d;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  int iStack_180;
  undefined1 auStack_120 [260];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar6 = *param_1;
  if (iVar6 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  puVar9 = &DAT_ram_481f4bf8;
  puVar8 = &local_188;
  do {
    uVar1 = puVar9[1];
    uVar12 = puVar9[2];
    uVar11 = puVar9[3];
    uVar2 = puVar9[4];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar8[2] = uVar12;
    puVar8[3] = uVar11;
    puVar8[4] = uVar2;
    puVar9 = puVar9 + 5;
    puVar8 = puVar8 + 5;
  } while (puVar9 != (uint *)&UNK_ram_481f4c5c);
  uStack_184 = (uint)*(byte *)((int)param_1 + 9);
  iStack_180 = param_1[1];
  *puVar8 = _UNK_ram_481f4c5c;
  if (param_2 != 0) {
    uVar5 = FUN_ram_4ff44d14();
    uVar10 = 1;
    if ((char)param_1[2] == '\x04') {
      uVar10 = 4;
    }
    FUN_ram_4ff44bf0(3,"sdio_wrapper",
                     "I (%lu) %s: SDIO master: Slot %d, Data-Lines: %d-bit Freq(KHz)[%u KHz]\n",
                     uVar5,"sdio_wrapper",uStack_184,uVar10,iStack_180);
    if ((char)param_1[2] == '\x04') {
      uVar5 = FUN_ram_4ff44d14();
      iVar6 = param_1[0xc];
      iVar3 = param_1[10];
      FUN_ram_4ff44bf0(3,"sdio_wrapper",
                       "I (%lu) %s: GPIOs: CLK[%u] CMD[%u] D0[%u] D1[%u] D2[%u] D3[%u] Slave_Reset[%u]\n"
                       ,uVar5,"sdio_wrapper",param_1[4],param_1[6],param_1[8],iVar3,iVar6,
                       param_1[0xe],param_1[0x10]);
    }
    else {
      uVar5 = FUN_ram_4ff44d14();
      iVar6 = param_1[0x10];
      iVar3 = param_1[10];
      FUN_ram_4ff44bf0(3,"sdio_wrapper",
                       "I (%lu) %s: GPIOs: CLK[%u] CMD[%u] D0[%u] D1[%u] Slave_Reset[%u]\n",uVar5,
                       "sdio_wrapper",param_1[4],param_1[6],param_1[8],iVar3,iVar6);
    }
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"sdio_wrapper","I (%lu) %s: Queues: Tx[%u] Rx[%u] SDIO-Rx-Mode[%u]\n",uVar5,
                     "sdio_wrapper",(short)param_1[0x12],*(undefined2 *)((int)param_1 + 0x4a),
                     (char)param_1[0x11],iVar3,iVar6);
    iVar6 = *param_1;
  }
  local_188 = local_188 | 0x40;
  iVar6 = FUN_ram_4815f7e6(&local_188,iVar6);
  if (iVar6 != 0) {
    uVar5 = FUN_ram_4ff44d14();
    pcVar7 = "E (%lu) %s: sdmmc_card_init failed\n";
    goto LAB_ram_48024660;
  }
  uVar1 = FUN_ram_481a9d2e("sdio_wrapper");
  if (uVar1 < 4) goto LAB_ram_480245a4;
  iVar6 = FUN_ram_4ff3e8de();
  FUN_ram_4815f350(*(undefined4 *)(iVar6 + 8),*param_1);
  iVar6 = *param_1;
  uStack_18c = 0x400;
  if (iVar6 == 0) {
LAB_ram_4802483c:
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"sdio_wrapper","W (%lu) %s: failed to print card info\n",uVar5,"sdio_wrapper"
                    );
  }
  else {
    iVar3 = FUN_ram_48160900(iVar6,auStack_120,0x100,&uStack_18c);
    uVar1 = uStack_18c;
    if (iVar3 == 0x104) {
      iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))(uStack_18c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("port_esp_hosted_host_sdio.c",100,"hosted_sdio_print_cis_information",
                         "temp_buf");
      }
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"sdio_wrapper",
                       "W (%lu) %s: CIS data longer than expected, temporary buffer allocated.\n",
                       uVar5,"sdio_wrapper");
      iVar6 = FUN_ram_48160900(iVar6,iVar3,uVar1,&uStack_18c);
      if (iVar6 != 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: failed to get CIS data.\n",uVar5,
                         "sdio_wrapper");
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar3);
        goto LAB_ram_4802483c;
      }
      FUN_ram_48160856(iVar3,uStack_18c,0);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar3);
    }
    else {
      if (iVar3 != 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: failed to get CIS data.\n",uVar5,
                         "sdio_wrapper");
        goto LAB_ram_4802483c;
      }
      FUN_ram_48160856(auStack_120,uStack_18c,0);
    }
  }
LAB_ram_480245a4:
  iVar6 = *param_1;
  bStack_18e = 0;
  bStack_18d = 0;
  uStack_18c = uStack_18c & 0xffffff00;
  auStack_120[0] = 0;
  if (((iVar6 != 0) && (iVar3 = FUN_ram_48160338(iVar6,0,2,&bStack_18e), iVar3 == 0)) &&
     (iVar3 = FUN_ram_48160338(iVar6,0,3,&bStack_18d), iVar3 == 0)) {
    bStack_18e = bStack_18e | 2;
    iVar3 = FUN_ram_481603ec(iVar6,0,2,bStack_18e,&bStack_18e);
    if ((iVar3 == 0) && (iVar3 = FUN_ram_48160338(iVar6,0,2,&bStack_18e), iVar3 == 0)) {
      bStack_18d = 0;
      iVar3 = 0;
      do {
        iVar4 = FUN_ram_48160338(iVar6,0,3,&bStack_18d);
        if (iVar4 != 0) break;
        if ((bStack_18d & 2) != 0) {
          iVar3 = FUN_ram_48160338(iVar6,0,4,&uStack_18c);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xc2,"hosted_sdio_card_fn_init",
                             "sdmmc_io_read_byte(card, SDIO_FUNC_0, SD_IO_CCCR_INT_ENABLE, &ie)");
          }
          uVar1 = uStack_18c & 0xff | 3;
          uStack_18c = CONCAT31(uStack_18c._1_3_,(char)uVar1);
          iVar3 = FUN_ram_481603ec(iVar6,0,4,uVar1,0);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,199,"hosted_sdio_card_fn_init",
                             "sdmmc_io_write_byte(card, SDIO_FUNC_0, SD_IO_CCCR_INT_ENABLE, ie, NULL)"
                            );
          }
          iVar3 = FUN_ram_48160338(iVar6,0,4,&uStack_18c);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xc9,"hosted_sdio_card_fn_init",
                             "sdmmc_io_read_byte(card, SDIO_FUNC_0, SD_IO_CCCR_INT_ENABLE, &ie)");
          }
          iVar3 = FUN_ram_48160338(iVar6,0,7,auStack_120);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xcd,"hosted_sdio_card_fn_init",
                             "sdmmc_io_read_byte(card, SDIO_FUNC_0, SD_IO_CCCR_BUS_WIDTH, &bus_width)"
                            );
          }
          iVar3 = FUN_ram_48024142(iVar6,0);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(0xffffffff,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xd4,"hosted_sdio_card_fn_init",
                             "hosted_sdio_set_blocksize(card, SDIO_FUNC_0, bs)");
          }
          iVar6 = FUN_ram_48024142(iVar6,1);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(0xffffffff,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xd8,"hosted_sdio_card_fn_init",
                             "hosted_sdio_set_blocksize(card, SDIO_FUNC_1, bs)");
          }
          return 0;
        }
        iVar3 = iVar3 + 1;
        FUN_ram_480061a4(10000);
      } while (iVar3 != 10);
    }
  }
  uVar5 = FUN_ram_4ff44d14();
  pcVar7 = "E (%lu) %s: sdio_card_fn_init failed\n";
LAB_ram_48024660:
  FUN_ram_4ff44bf0(1,"sdio_wrapper",pcVar7,uVar5,"sdio_wrapper");
  return 0xffffffff;
}


