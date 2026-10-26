/* Firmware entry: 0x4ff2db7a */

undefined4 FUN_ram_4ff2db7a(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_argu_ram_4ff5731c,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_get_info_ram_4ff53510,0x81);
    uVar1 = 0x102;
  }
  else {
    if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff2db88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x2c))();
      return uVar1;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___get_info_is_n_ram_4ff5747c,
                     uVar1,s_esp_twai_ram_4ff57310,s_twai_node_get_info_ram_4ff53510,0x82);
    uVar1 = 0x106;
  }
  return uVar1;
}


