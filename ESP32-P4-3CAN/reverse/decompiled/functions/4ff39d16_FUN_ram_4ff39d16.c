/* Firmware entry: 0x4ff39d16 */

undefined4 FUN_ram_4ff39d16(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = crc32_le(0,&DAT_ram_4ff5b0b0,0xc);
  if (DAT_ram_4ff5b0bc == iVar1) {
    if ((DAT_ram_4ff5b0b0 != 0) && (3 < DAT_ram_4ff5b0b4)) {
      spi_flash_guard_set(&PTR_LAB_ram_4ff2c680_ram_4ff52f98);
      FUN_ram_4ff463ca(1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Invalid_flash_partit_ram_4ff55b14,uVar2,
               s_esp_core_dump_flash_ram_4ff58544);
  }
  else {
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Core_dump_flash_conf_ram_4ff55ac8,uVar2,
               s_esp_core_dump_flash_ram_4ff58544,iVar1,DAT_ram_4ff5b0bc);
  }
  return 0xffffffff;
}


