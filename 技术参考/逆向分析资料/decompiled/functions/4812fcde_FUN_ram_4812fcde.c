/* Firmware entry: 0x4812fcde */

/* WARNING: Removing unreachable block (ram,0x4812fe4e) */
/* WARNING: Removing unreachable block (ram,0x4812fe5c) */

void FUN_ram_4812fcde(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_2 >> 0x10 & 0xff;
  if (uVar2 == 0xc2) {
    if (*(uint *)(param_1 + 0x10) < 0x10) {
      if (1 < DAT_ram_4ff47dac) {
        uVar1 = FUN_ram_4ff44d14();
        pcVar4 = "MXIC";
        pcVar3 = "MXIC";
LAB_ram_4812fdc4:
        ets_printf("W (%lu) %s: Detected %s flash chip but using generic driver. For optimal functionality, enable `SPI_FLASH_SUPPORT_%s_CHIP` in menuconfig\n"
                   ,uVar1,"spi_flash",pcVar3,pcVar4);
        return;
      }
    }
    else if (1 < DAT_ram_4ff47dac) {
      uVar1 = FUN_ram_4ff44d14();
      pcVar4 = "MXIC_OPI";
      pcVar3 = "MXIC";
      goto LAB_ram_4812fdc4;
    }
  }
  else if (uVar2 < 0xc3) {
    if (uVar2 == 0x68) {
      if (1 < DAT_ram_4ff47dac) {
        uVar1 = FUN_ram_4ff44d14();
        pcVar4 = "BOYA";
        pcVar3 = "boya";
        goto LAB_ram_4812fdc4;
      }
    }
    else if ((uVar2 == 0x9d) && (1 < DAT_ram_4ff47dac)) {
      uVar1 = FUN_ram_4ff44d14();
      pcVar4 = "ISSI";
      pcVar3 = "ISSI";
      goto LAB_ram_4812fdc4;
    }
  }
  else if ((uVar2 == 0xcd) && (1 < DAT_ram_4ff47dac)) {
    uVar1 = FUN_ram_4ff44d14();
    pcVar4 = "TH";
    pcVar3 = "TH";
    goto LAB_ram_4812fdc4;
  }
  return;
}


