/* Firmware entry: 0x4812ece0 */

int FUN_ram_4812ece0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e0a8 == 0) {
    iVar1 = param_1 - (param_1 & 0xffff0000);
    aiStack_14[0] = 0;
    iVar2 = FUN_ram_4812fa26(param_1 & 0xffff0000,param_2 + iVar1,0,aiStack_14,&DAT_ram_4ff6e0a8);
    if (iVar2 == 0) {
      return aiStack_14[0] + iVar1;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: spi_flash_mmap failed: 0x%x\n",uVar3,"bootloader_mmap",iVar2);
    }
  }
  else if (DAT_ram_4ff47dac != 0) {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: tried to bootloader_mmap twice\n",uVar3,"bootloader_mmap");
  }
  return 0;
}


