/* Firmware entry: 0x48162fe2 */

int FUN_ram_48162fe2(uint *param_1,undefined4 param_2)

{
  int iVar1;
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
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 & 8) != 0) {
    uStack_1c = param_1[0x10];
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    iStack_20 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_24 = 0x1c00;
    uStack_4c = 0x3b;
    if (uStack_1c == 0) {
      uStack_1c = 1000;
    }
    uStack_48 = param_2;
    iVar1 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c);
    if (iVar1 == 0) {
      iVar1 = iStack_20;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_cmd.c",0x19e,"sdmmc_send_cmd_crc_on_off",
                   "host_is_spi(card) && \"CRC_ON_OFF can only be used in SPI mode\"");
}


