/* Firmware entry: 0x4ff35382 */

int FUN_ram_4ff35382(uint param_1)

{
  int iVar1;
  int iStack_18;
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -1;
  }
  iStack_18 = 0;
  aiStack_14[0] = 1;
  if (DAT_ram_4ff6daf0 <= param_1) {
    if (param_1 < DAT_ram_4ff6daf0 + DAT_ram_4ff6dae8) {
      iVar1 = FUN_ram_4ff4150a(1,param_1,&iStack_18,aiStack_14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0xf6,
                         s_mmu_xip_psram_flash_vaddr_to_pad_ram_4ff53e48,s_is_mapped_ram_4ff55914);
      }
      if (aiStack_14[0] == 2) {
        return iStack_18 + DAT_ram_4ff6dae0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0xf7,
                       s_mmu_xip_psram_flash_vaddr_to_pad_ram_4ff53e48,
                       s_target____MMU_TARGET_PSRAM0_ram_4ff55920);
    }
  }
  if (DAT_ram_4ff6daec <= param_1) {
    if (param_1 < DAT_ram_4ff6daec + DAT_ram_4ff6dae4) {
      iVar1 = FUN_ram_4ff4150a(1,param_1,&iStack_18,aiStack_14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0xfb,
                         s_mmu_xip_psram_flash_vaddr_to_pad_ram_4ff53e48,s_is_mapped_ram_4ff55914);
      }
      if (aiStack_14[0] == 2) {
        return iStack_18 + DAT_ram_4ff6dadc;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0xfc,
                       s_mmu_xip_psram_flash_vaddr_to_pad_ram_4ff53e48,
                       s_target____MMU_TARGET_PSRAM0_ram_4ff55920);
    }
  }
  return -1;
}


