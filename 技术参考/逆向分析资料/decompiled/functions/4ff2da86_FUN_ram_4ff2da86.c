/* Firmware entry: 0x4ff2da86 */

undefined4 FUN_ram_4ff2da86(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_argu_ram_4ff573e0,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_config_mask_filter_ram_4ff53548,0x59);
    uVar1 = 0x102;
  }
  else {
    if (*(code **)(param_1 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff2da96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0xc))();
      return uVar1;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___config_mask__ram_4ff5740c,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_config_mask_filter_ram_4ff53548,0x5a);
    uVar1 = 0x106;
  }
  return uVar1;
}


