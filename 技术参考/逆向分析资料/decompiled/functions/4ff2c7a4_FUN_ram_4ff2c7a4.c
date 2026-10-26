/* Firmware entry: 0x4ff2c7a4 */

undefined4 FUN_ram_4ff2c7a4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff20626();
  uVar2 = 0;
  if (iVar1 == 0) {
    if (DAT_ram_4ff47dac == 0) {
      uVar2 = 0x106;
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: 32bit address (flash over 16MB) has high risk on ESP32P4 v0.0\n",uVar2
                 ,"spi_flash");
      uVar2 = 0x106;
    }
  }
  return uVar2;
}


