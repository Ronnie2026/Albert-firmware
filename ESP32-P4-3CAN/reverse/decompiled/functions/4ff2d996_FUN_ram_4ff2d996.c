/* Firmware entry: 0x4ff2d996 */

undefined4 FUN_ram_4ff2d996(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_argu_ram_4ff5731c,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_disable_ram_4ff5357c,0x49);
    uVar1 = 0x102;
  }
  else {
    if (*(code **)(param_1 + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff2d9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 4))();
      return uVar1;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___disable_is_n_ram_4ff57380,uVar1
                     ,s_esp_twai_ram_4ff57310,s_twai_node_disable_ram_4ff5357c,0x4a);
    uVar1 = 0x106;
  }
  return uVar1;
}


