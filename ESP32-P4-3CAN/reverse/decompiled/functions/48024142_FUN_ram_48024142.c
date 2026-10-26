/* Firmware entry: 0x48024142 */

int FUN_ram_48024142(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = param_2 * 0x100 + 0x10;
  uStack_22 = 0;
  iVar1 = FUN_ram_481603ec(param_1,0,iVar4,0,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(iVar1,
                     "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                     ,0x82,"hosted_sdio_set_blocksize",
                     "sdmmc_io_write_byte(card, SDIO_FUNC_0, offset + SD_IO_CCCR_BLKSIZEL, bs_u8[0], NULL)"
                    );
  }
  iVar1 = param_2 * 0x100 + 0x11;
  iVar2 = FUN_ram_481603ec(param_1,0,iVar1,2,0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(iVar2,
                     "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                     ,0x83,"hosted_sdio_set_blocksize",
                     "sdmmc_io_write_byte(card, SDIO_FUNC_0, offset + SD_IO_CCCR_BLKSIZEH, bs_u8[1], NULL)"
                    );
  }
  iVar4 = FUN_ram_48160338(param_1,0,iVar4,&uStack_22);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(iVar4,
                     "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                     ,0x84,"hosted_sdio_set_blocksize",
                     "sdmmc_io_read_byte(card, SDIO_FUNC_0, offset + SD_IO_CCCR_BLKSIZEL, &bs_read_u8[0])"
                    );
  }
  iVar1 = FUN_ram_48160338(param_1,0,iVar1,(int)&uStack_22 + 1);
  if (iVar1 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"sdio_wrapper","I (%lu) %s: Function %d Blocksize: %d\n",uVar3,"sdio_wrapper"
                     ,param_2,uStack_22);
    return -(uint)(uStack_22 != 0x200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar1,
                   "./managed_components/espressif__esp_hosted/host/port/esp/freertos/src/port_esp_hosted_host_sdio.c"
                   ,0x85,"hosted_sdio_set_blocksize",
                   "sdmmc_io_read_byte(card, SDIO_FUNC_0, offset + SD_IO_CCCR_BLKSIZEH, &bs_read_u8[1])"
                  );
}


