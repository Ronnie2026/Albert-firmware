/* Firmware entry: 0x4ff463e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff463e4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  puVar1 = _DAT_ram_4ffbffe8;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0x50;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_50 = 1;
  uStack_48 = 1;
  FUN_ram_4812fcde(&PTR_DAT_ram_4ff530c4_ram_4ff530a0,*_DAT_ram_4ffbffe8);
  iVar2 = FUN_ram_4ff311cc();
  if (iVar2 != 0) {
    uStack_34._0_3_ = CONCAT12(1,(undefined2)uStack_34);
    FUN_ram_4ff311d0(&uStack_5c);
  }
  uStack_28 = 0xffffffff;
  if (iStack_3c == 0) {
    uVar5 = 0x1e0;
    uVar4 = _DAT_ram_500e6030 & 3;
    if ((((uVar4 != 1) && (uVar5 = 400, uVar4 != 2)) && (uVar5 = 0, uVar4 == 0)) &&
       (((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10 &&
        (_DAT_ram_5011003c - 1 < 0xfffffffe)))) {
      uVar5 = _DAT_ram_5011003c & 0xfffe;
    }
    uStack_28 = uVar5 / ((_DAT_ram_500e6030 >> 4 & 0xff) + 1) & 0xff;
  }
  iVar2 = FUN_ram_4ff46932(&DAT_ram_4ff530c4,&uStack_5c);
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4ff458ec(&PTR_DAT_ram_4ff530c4_ram_4ff530a0), iVar2 == 0)) {
    uVar4 = puVar1[1];
    if (uVar4 <= DAT_ram_4ff530b4) {
      if ((uVar4 < DAT_ram_4ff530b4) && (1 < DAT_ram_4ff47dac)) {
        uVar3 = FUN_ram_4ff44d14();
        ets_printf("W (%lu) %s: Detected size(%dk) larger than the size in the binary image header(%dk). Using the size in the binary image header.\n"
                   ,uVar3,"spi_flash",DAT_ram_4ff530b4 >> 10,(uint)puVar1[1] >> 10);
        uVar4 = puVar1[1];
      }
      if (0x1000000 < uVar4) {
        iVar2 = FUN_ram_4ff2c7a4();
        if (iVar2 != 0) {
          if (DAT_ram_4ff47dac == 0) {
            return iVar2;
          }
          uVar3 = FUN_ram_4ff44d14();
          ets_printf("E (%lu) %s: %s(%d): 32bit address feature check failed\n",uVar3,"spi_flash",
                     "esp_flash_init_default_chip",0x250);
          return iVar2;
        }
        uVar4 = puVar1[1];
      }
      DAT_ram_4ff530b4 = uVar4;
      DAT_ram_4ff6e0b8 = &PTR_DAT_ram_4ff530c4_ram_4ff530a0;
      return 0;
    }
    if (DAT_ram_4ff47dac == 0) {
      iVar2 = 0x104;
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Detected size(%dk) smaller than the size in the binary image header(%dk). Probe failed.\n"
                 ,uVar3,"spi_flash",DAT_ram_4ff530b4 >> 10,(uint)puVar1[1] >> 10);
      iVar2 = 0x104;
    }
  }
  return iVar2;
}


