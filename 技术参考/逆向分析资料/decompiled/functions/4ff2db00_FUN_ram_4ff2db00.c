/* Firmware entry: 0x4ff2db00 */

undefined4 FUN_ram_4ff2db00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_argu_ram_4ff573e0,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_register_event_callbac_ram_4ff53524,0x71);
    uVar1 = 0x102;
  }
  else {
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff2db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x28))();
      return uVar1;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___register_cbs_ram_4ff57448,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_register_event_callbac_ram_4ff53524,0x72);
    uVar1 = 0x106;
  }
  return uVar1;
}


