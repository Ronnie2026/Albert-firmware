/* Firmware entry: 0x4ff2e810 */

undefined4 FUN_ram_4ff2e810(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (*(int *)(param_1 + 0x7c) == 3) {
    FUN_ram_481a95e2(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x80) = 0;
    return 0;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___node_not_in_b_ram_4ff57a1c,uVar1,
                   s_esp_twai_ram_4ff57310,s__node_recover_ram_4ff53678,0x23f);
  return 0x103;
}


