/* Firmware entry: 0x4ff2dbf2 */

undefined4 FUN_ram_4ff2dbf2(int param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == 0)) {
    if (DAT_ram_4ff47dac != 0) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___invalid_argu_ram_4ff573e0,uVar1,s_esp_twai_ram_4ff57310,
                 s_twai_node_transmit_ram_4ff534fc,0x89);
    }
    uVar1 = 0x102;
  }
  else {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4ff2dc02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x18))();
      return uVar1;
    }
    if (DAT_ram_4ff47dac == 0) {
      uVar1 = 0x106;
    }
    else {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___transmit_is_n_ram_4ff574ac,uVar1,s_esp_twai_ram_4ff57310,
                 s_twai_node_transmit_ram_4ff534fc,0x8a);
      uVar1 = 0x106;
    }
  }
  return uVar1;
}


