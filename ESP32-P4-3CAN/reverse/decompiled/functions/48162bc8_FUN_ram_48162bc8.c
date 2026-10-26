/* Firmware entry: 0x48162bc8 */

void FUN_ram_48162bc8(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_5c [16];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_cmd.c",0x104,"sdmmc_send_cmd_send_cid","out_cid");
  }
  if ((*param_1 & 8) != 0) {
    if ((param_1[0x31] & 4) == 0) {
      uStack_1c = param_1[0x10];
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      iStack_20 = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_4c = 10;
      uStack_30 = 0x10;
      uStack_24 = 0x50;
      puStack_34 = auStack_5c;
      if (uStack_1c == 0) {
        uStack_1c = 1000;
        iVar1 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c,10,0x10,(code *)param_1[0xc]);
      }
      else {
        iVar1 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c,10,0x10,(code *)param_1[0xc]);
      }
      if ((iVar1 == 0) && (iStack_20 == 0)) {
        FUN_ram_4815f2c8(auStack_5c,0x10);
        FUN_ram_48162348(auStack_5c,param_2);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_cmd.c",0x106,"sdmmc_send_cmd_send_cid",
                     "!card->is_mmc && \"MMC cards are not supported in SPI mode\"");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_cmd.c",0x105,"sdmmc_send_cmd_send_cid",
                   "host_is_spi(card) && \"SEND_CID should only be used in SPI mode\"");
}


