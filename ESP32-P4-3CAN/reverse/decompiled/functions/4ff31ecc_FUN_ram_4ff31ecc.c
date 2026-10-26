/* Firmware entry: 0x4ff31ecc */

void FUN_ram_4ff31ecc(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_30100022();
  if (*piVar1 != 0) {
    puVar2 = (undefined4 *)FUN_ram_30100022();
    FUN_ram_4ff4178a(*puVar2);
    *(undefined1 *)(unaff_s0 + -0x624) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff552a4 + 0x2d,0x49,
                   s_pmu_sleep_disable_regdma_backup_ram_4ff53d4c,s_PMU_instance___>hal_ram_4ff55290
                  );
}


