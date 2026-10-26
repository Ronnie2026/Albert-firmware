/* Firmware entry: 0x4815ff36 */

int FUN_ram_4815ff36(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (39999 < *(uint *)(param_1 + 0xbc)) {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_24 = 0x1c00;
    uStack_4c = 0x34;
    uStack_48 = 0x1000;
    iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_io",
                       "E (%lu) %s: %s: sdmmc_io_rw_direct (read SD_IO_CCCR_CARD_CAP) returned 0x%0x\n"
                       ,uVar2,"sdmmc_io","sdmmc_io_init_check_card_cap",iVar1);
      return iVar1;
    }
    if (*param_2 != (char)uStack_44) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_io",
                       "E (%lu) %s: %s: got corrupted data after increasing clock frequency\n",uVar2
                       ,"sdmmc_io","sdmmc_io_init_check_card_cap");
      return 0x108;
    }
  }
  return 0;
}


