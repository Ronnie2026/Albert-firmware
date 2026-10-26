/* Firmware entry: 0x4815f5f6 */

undefined4 FUN_ram_4815f5f6(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = (*(code *)param_1[8])(param_1[1]);
  uVar3 = *param_1;
  if (iVar1 == 1) {
    if ((uVar3 & 6) == 0) goto joined_r0x4815f654;
  }
  else {
    if ((iVar1 != 4) || ((uVar3 & 4) == 0)) goto joined_r0x4815f654;
    if ((uVar3 & 2) != 0) {
      uVar3 = uVar3 & 0xfffffff8 | 2;
      *param_1 = uVar3;
      goto joined_r0x4815f654;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"sdmmc_common",
                     "W (%lu) %s: slot width set to 4, but host flags don\'t have 4 line mode enabled; using 1 line mode\n"
                     ,uVar2,"sdmmc_common");
    uVar3 = *param_1;
  }
  *param_1 = uVar3 & 0xfffffff8 | 1;
joined_r0x4815f654:
  if ((uVar3 & 0x80) == 0) {
    uVar3 = param_1[2];
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"sdmmc_common",
                     "W (%lu) %s: SDMMC_HOST_FLAG_SPI_IGNORE_DATA_CRC flag is set on non-SPI host\n"
                     ,uVar2,"sdmmc_common");
    uVar3 = param_1[2];
  }
  uVar2 = 0;
  if ((uVar3 == 50000) && (uVar2 = 0, (*param_1 & 0x10) == 0)) {
    uVar2 = FUN_ram_4ff44d14(0);
    FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s(%d): DDR is not selected\n",uVar2,
                     "sdmmc_common","sdmmc_fix_host_flags",0x187);
    uVar2 = 0x102;
  }
  return uVar2;
}


