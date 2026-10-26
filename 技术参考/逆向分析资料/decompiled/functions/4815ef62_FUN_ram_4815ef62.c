/* Firmware entry: 0x4815ef62 */

int FUN_ram_4815ef62(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_common.c",0xa9,"sdmmc_init_select_card","!host_is_spi(card)");
  }
  iVar1 = FUN_ram_48162e8c(param_1,(short)param_1[0x2e]);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: select_card returned 0x%x\n",uVar2,
                   "sdmmc_common","sdmmc_init_select_card",iVar1);
  return iVar1;
}


