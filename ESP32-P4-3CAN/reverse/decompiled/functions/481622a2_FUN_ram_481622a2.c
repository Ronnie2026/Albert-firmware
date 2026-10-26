/* Firmware entry: 0x481622a2 */

int FUN_ram_481622a2(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_sd.c",0x264,"sdmmc_init_spi_crc","host_is_spi(card)");
  }
  iVar1 = FUN_ram_48162fe2(param_1,1);
  if (iVar1 == 0x106) {
    FUN_ram_4ff3c2b6(10);
    iVar1 = FUN_ram_48162fe2(param_1,1);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: sdmmc_send_cmd_crc_on_off returned 0x%x\n",uVar2,
                     "sdmmc_sd","sdmmc_init_spi_crc",iVar1);
    return iVar1;
  }
  return 0;
}


