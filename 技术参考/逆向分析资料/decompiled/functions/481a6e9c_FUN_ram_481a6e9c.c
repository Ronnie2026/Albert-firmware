/* Firmware entry: 0x481a6e9c */

int FUN_ram_481a6e9c(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if (2 < DAT_ram_4ff47dac) {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Reserving pool of %dK of internal memory for DMA/internal allocations\n"
               ,uVar3,s_esp_psram_ram_4ff4c5a8,param_1 >> 10);
  }
  do {
    uVar1 = FUN_ram_480020c6(0x808);
    if (param_1 < uVar1) {
      uVar1 = param_1;
    }
    iVar2 = FUN_ram_4ff206d8(uVar1,0x808);
    if ((iVar2 == 0) || (uVar1 == 0)) {
      return 0x101;
    }
    uStack_2c = 0;
    uStack_28 = 0x808;
    uStack_24 = 0x1006;
    iVar2 = FUN_ram_480025d4(&uStack_2c,iVar2,iVar2 + uVar1 + -1);
    param_1 = param_1 - uVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
  } while (param_1 != 0);
  return 0;
}


