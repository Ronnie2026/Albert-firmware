/* Firmware entry: 0x4ff34230 */

int FUN_ram_4ff34230(void)

{
  int iVar1;
  uint auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff59fcc != '\0') {
    return 0x103;
  }
  iVar1 = FUN_ram_4ff34304();
  if (iVar1 == 0) {
    auStack_24[0] = 0;
    DAT_ram_4ff59fcc = '\x01';
    iVar1 = FUN_ram_4ff34f38(auStack_24);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0xe0,
                       "s_psram_chip_init",s_ret____ESP_OK_ram_4ff55338);
    }
    if (DAT_ram_4ff47dac < 3) {
      return 0;
    }
    ets_printf(s_I__s__Found__luMB_PSRAM_device_ram_4ff4c588,s_esp_psram_ram_4ff4c5a8,
               auStack_24[0] >> 0x14);
    iVar1 = 0;
    if (2 < DAT_ram_4ff47dac) {
      ets_printf(s_I__s__Speed___dMHz_ram_4ff4c574,s_esp_psram_ram_4ff4c5a8,200);
    }
  }
  return iVar1;
}


