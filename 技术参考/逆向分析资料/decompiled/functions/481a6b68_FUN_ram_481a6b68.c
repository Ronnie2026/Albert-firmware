/* Firmware entry: 0x481a6b68 */

undefined4 FUN_ram_481a6b68(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_2 >> 2;
  if (uVar1 != 0) {
    uVar5 = 0;
    puVar4 = param_1;
    do {
      *puVar4 = uVar5 ^ 0xaaaaaaaa;
      uVar5 = uVar5 + 8;
      puVar4 = puVar4 + 8;
    } while (uVar5 < uVar1);
    iVar6 = -1;
    iVar2 = 0;
    uVar5 = 0;
    puVar4 = param_1;
    do {
      uVar7 = *puVar4;
      puVar4 = puVar4 + 8;
      if ((uVar7 != (uVar5 ^ 0xaaaaaaaa)) && (iVar2 = iVar2 + 1, iVar2 == 1)) {
        iVar6 = uVar5 << 2;
      }
      uVar5 = uVar5 + 8;
    } while (uVar5 < uVar1);
    if (iVar2 != 0) {
      if (DAT_ram_4ff47dac != 0) {
        uVar3 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: SPI SRAM memory test fail. %d/%d writes failed, first @ %X\n",uVar3,
                   s_esp_psram_ram_4ff4c5a8,iVar2,param_2 >> 5,(int)param_1 + iVar6);
      }
      return 0;
    }
  }
  if (2 < DAT_ram_4ff47dac) {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: SPI SRAM memory test OK\n",uVar3,s_esp_psram_ram_4ff4c5a8);
  }
  return 1;
}


