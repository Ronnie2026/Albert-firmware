/* Firmware entry: 0x4ff2e580 */

void FUN_ram_4ff2e580(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_6c [92];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_ram_48003514();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_ram_48003514();
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_ram_481a7c88();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_ram_4ff3aca6(1,0,0,auStack_6c,3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s____build_p164_v32_esp_idf_esp_dr_ram_4ff575d0 + 0x2a,0x145,
                       s__p122_twai_flush_pended_setbits_ram_4ff535b4,
                       s_semaphore____NULL_ram_4ff57958);
    }
    iVar2 = FUN_ram_4ff409fc(&LAB_ram_4ff2df9c,iVar1,0,0xffffffff);
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s____build_p164_v32_esp_idf_esp_dr_ram_4ff575d0 + 0x2a,0x148,
                       s__p122_twai_flush_pended_setbits_ram_4ff535b4,
                       s_queued____pdPASS_ram_4ff5796c);
    }
    iVar2 = FUN_ram_4ff3b5f0(iVar1,0xffffffff);
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s____build_p164_v32_esp_idf_esp_dr_ram_4ff575d0 + 0x2a,0x14b,
                       s__p122_twai_flush_pended_setbits_ram_4ff535b4,
                       s_completed____pdTRUE_ram_4ff57980);
    }
    FUN_ram_4ff3ba8e(iVar1);
    FUN_ram_481a7e26(*(undefined4 *)(param_1 + 0x50));
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == -1) {
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
  FUN_ram_4ff216d6(&DAT_ram_4ff6d424);
  if ((&DAT_ram_4ff6d42c)[iVar1] != 0) {
    (&DAT_ram_4ff6d42c)[iVar1] = 0;
    FUN_ram_4ff216e2(&DAT_ram_4ff6d424);
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s____build_p164_v32_esp_idf_esp_dr_ram_4ff575d0 + 0x2a,0x7a,
                   s__ctrlr_release_ram_4ff535a4,s_s_platform_nodes_ctrlr_id__ram_4ff57994);
}


