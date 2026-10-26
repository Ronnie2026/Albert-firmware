/* Firmware entry: 0x48024720 */

undefined4 FUN_ram_48024720(void)

{
  int *unaff_s0;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined1 in_stack_00000080;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = FUN_ram_4ff44d14();
  uVar7 = 1;
  if ((char)unaff_s0[2] == '\x04') {
    uVar7 = 4;
  }
  FUN_ram_4ff44bf0(3,"sdio_wrapper",
                   "I (%lu) %s: SDIO master: Slot %d, Data-Lines: %d-bit Freq(KHz)[%u KHz]\n",uVar5,
                   "sdio_wrapper",in_stack_0000001c,uVar7,in_stack_00000020);
  if ((char)unaff_s0[2] == '\x04') {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"sdio_wrapper",
                     "I (%lu) %s: GPIOs: CLK[%u] CMD[%u] D0[%u] D1[%u] D2[%u] D3[%u] Slave_Reset[%u]\n"
                     ,uVar5,"sdio_wrapper",unaff_s0[4],unaff_s0[6],unaff_s0[8]);
  }
  else {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"sdio_wrapper",
                     "I (%lu) %s: GPIOs: CLK[%u] CMD[%u] D0[%u] D1[%u] Slave_Reset[%u]\n",uVar5,
                     "sdio_wrapper",unaff_s0[4],unaff_s0[6],unaff_s0[8]);
  }
  uVar5 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"sdio_wrapper","I (%lu) %s: Queues: Tx[%u] Rx[%u] SDIO-Rx-Mode[%u]\n",uVar5,
                   "sdio_wrapper",(short)unaff_s0[0x12],*(undefined2 *)((int)unaff_s0 + 0x4a),
                   (char)unaff_s0[0x11]);
  in_stack_00000018 = in_stack_00000018 | 0x40;
  iVar1 = FUN_ram_4815f7e6(&stack0x00000018,*unaff_s0);
  if (iVar1 != 0) {
    uVar5 = FUN_ram_4ff44d14();
    pcVar6 = "E (%lu) %s: sdmmc_card_init failed\n";
    goto LAB_ram_48024660;
  }
  uVar2 = FUN_ram_481a9d2e("sdio_wrapper");
  if (uVar2 < 4) goto LAB_ram_480245a4;
  iVar1 = FUN_ram_4ff3e8de();
  FUN_ram_4815f350(*(undefined4 *)(iVar1 + 8),*unaff_s0);
  iVar1 = *unaff_s0;
  in_stack_00000014 = 0x400;
  if (iVar1 == 0) {
LAB_ram_4802483c:
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"sdio_wrapper","W (%lu) %s: failed to print card info\n",uVar5,"sdio_wrapper"
                    );
  }
  else {
    iVar3 = FUN_ram_48160900(iVar1,&stack0x00000080,0x100,&stack0x00000014);
    uVar2 = in_stack_00000014;
    if (iVar3 == 0x104) {
      iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))(in_stack_00000014);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("port_esp_hosted_host_sdio.c",100,"hosted_sdio_print_cis_information",
                         "temp_buf");
      }
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"sdio_wrapper",
                       "W (%lu) %s: CIS data longer than expected, temporary buffer allocated.\n",
                       uVar5,"sdio_wrapper");
      iVar1 = FUN_ram_48160900(iVar1,iVar3,uVar2,&stack0x00000014);
      if (iVar1 != 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: failed to get CIS data.\n",uVar5,
                         "sdio_wrapper");
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar3);
        goto LAB_ram_4802483c;
      }
      FUN_ram_48160856(iVar3,in_stack_00000014,0);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar3);
    }
    else {
      if (iVar3 != 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdio_wrapper","E (%lu) %s: failed to get CIS data.\n",uVar5,
                         "sdio_wrapper");
        goto LAB_ram_4802483c;
      }
      FUN_ram_48160856(&stack0x00000080,in_stack_00000014,0);
    }
  }
LAB_ram_480245a4:
  iVar1 = *unaff_s0;
  in_stack_00000010._2_1_ = 0;
  in_stack_00000010._3_1_ = 0;
  in_stack_00000014 = in_stack_00000014 & 0xffffff00;
  in_stack_00000080 = 0;
  if (((iVar1 != 0) && (iVar3 = FUN_ram_48160338(iVar1,0,2,(int)&stack0x00000010 + 2), iVar3 == 0))
     && (iVar3 = FUN_ram_48160338(iVar1,0,3,(int)&stack0x00000010 + 3), iVar3 == 0)) {
    in_stack_00000010._2_1_ = in_stack_00000010._2_1_ | 2;
    iVar3 = FUN_ram_481603ec(iVar1,0,2,in_stack_00000010._2_1_,(int)&stack0x00000010 + 2);
    if ((iVar3 == 0) && (iVar3 = FUN_ram_48160338(iVar1,0,2,(int)&stack0x00000010 + 2), iVar3 == 0))
    {
      in_stack_00000010._3_1_ = 0;
      iVar3 = 0;
      do {
        iVar4 = FUN_ram_48160338(iVar1,0,3,(int)&stack0x00000010 + 3);
        if (iVar4 != 0) break;
        if ((in_stack_00000010._3_1_ & 2) != 0) {
          iVar3 = FUN_ram_48160338(iVar1,0,4,&stack0x00000014);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xc2,"hosted_sdio_card_fn_init",
                             "sdmmc_io_read_byte(card, SDIO_FUNC_0, SD_IO_CCCR_INT_ENABLE, &ie)");
          }
          uVar2 = in_stack_00000014 & 0xff | 3;
          in_stack_00000014 = CONCAT31(in_stack_00000014._1_3_,(char)uVar2);
          iVar3 = FUN_ram_481603ec(iVar1,0,4,uVar2,0);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,199,"hosted_sdio_card_fn_init",
                             "sdmmc_io_write_byte(card, SDIO_FUNC_0, SD_IO_CCCR_INT_ENABLE, ie, NULL)"
                            );
          }
          iVar3 = FUN_ram_48160338(iVar1,0,4,&stack0x00000014);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(iVar3,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xc9,"hosted_sdio_card_fn_init",
                             "sdmmc_io_read_byte(card, SDIO_FUNC_0, SD_IO_CCCR_INT_ENABLE, &ie)");
          }
          iVar3 = FUN_ram_48160338(iVar1,0,7,&stack0x00000080);
          if (iVar3 == 0) {
            iVar3 = FUN_ram_48024142(iVar1,0);
            if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff36e1a(0xffffffff,
                               "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                               ,0xd4,"hosted_sdio_card_fn_init",
                               "hosted_sdio_set_blocksize(card, SDIO_FUNC_0, bs)");
            }
            iVar1 = FUN_ram_48024142(iVar1,1);
            if (iVar1 == 0) {
              return 0;
            }
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff36e1a(0xffffffff,
                             "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                             ,0xd8,"hosted_sdio_card_fn_init",
                             "hosted_sdio_set_blocksize(card, SDIO_FUNC_1, bs)");
          }
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff36e1a(iVar3,
                           "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                           ,0xcd,"hosted_sdio_card_fn_init",
                           "sdmmc_io_read_byte(card, SDIO_FUNC_0, SD_IO_CCCR_BUS_WIDTH, &bus_width)"
                          );
        }
        iVar3 = iVar3 + 1;
        FUN_ram_480061a4(10000);
      } while (iVar3 != 10);
    }
  }
  uVar5 = FUN_ram_4ff44d14();
  pcVar6 = "E (%lu) %s: sdio_card_fn_init failed\n";
LAB_ram_48024660:
  FUN_ram_4ff44bf0(1,"sdio_wrapper",pcVar6,uVar5,"sdio_wrapper");
  return 0xffffffff;
}


