/* Firmware entry: 0x481a6f92 */

uint FUN_ram_481a6f92(void)

{
  int iVar1;
  uint uStack_18;
  uint auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff59fcc == '\0') {
    return 0;
  }
  if (DAT_ram_4ff59fcd != '\0') {
    return DAT_ram_4ff59fd8 + DAT_ram_4ff59fe4;
  }
  uStack_18 = 0;
  auStack_14[0] = 0;
  iVar1 = FUN_ram_4ff34f58(auStack_14);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0x332,
                     "esp_psram_get_effective_mapped_size",s_ret____ESP_OK_ram_4ff55338);
  }
  iVar1 = FUN_ram_4ff35208();
  auStack_14[0] = auStack_14[0] - iVar1;
  iVar1 = FUN_ram_4ff3508e();
  auStack_14[0] = auStack_14[0] - iVar1;
  iVar1 = FUN_ram_481a60d4(0x1e,2,&uStack_18);
  if (iVar1 == 0) {
    if (auStack_14[0] <= uStack_18) {
      return auStack_14[0];
    }
    return uStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0x33d,
                   "esp_psram_get_effective_mapped_size",s_ret____ESP_OK_ram_4ff55338);
}


