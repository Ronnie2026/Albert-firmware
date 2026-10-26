/* Firmware entry: 0x4ff2dc84 */

undefined4 FUN_ram_4ff2dc84(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == 0)) {
    if (DAT_ram_4ff47dac != 0) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___invalid_argu_ram_4ff573e0,uVar1,s_esp_twai_ram_4ff57310,
                 s_twai_node_receive_from_isr_ram_4ff534e0,0x99);
    }
  }
  else {
    iVar2 = param_1;
    if (((*(int *)(param_2 + 0x1c) == 0) ||
        (iVar2 = *(int *)(param_2 + 0x18), iVar2 + 0xb0100000U < 0xc0000)) ||
       (iVar2 = thunk_FUN_ram_4ff21be8(), iVar2 != 0)) {
      if (*(code **)(param_1 + 0x20) == (code *)0x0) {
        if (DAT_ram_4ff47dac != 0) {
          uVar1 = FUN_ram_4ff44d14(iVar2,param_2);
          ets_printf(s_E___lu___s___s__d___receive_is_n_ram_4ff57524,uVar1,s_esp_twai_ram_4ff57310,
                     s_twai_node_receive_from_isr_ram_4ff534e0,0x9b);
        }
        return 0x106;
      }
                    /* WARNING: Could not recover jumptable at 0x4ff2dca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x20))(param_1);
      return uVar1;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar1 = FUN_ram_4ff44d14(0,param_2);
      ets_printf(s_E___lu___s___s__d___invalid__rx__ram_4ff574dc,uVar1,s_esp_twai_ram_4ff57310,
                 s_twai_node_receive_from_isr_ram_4ff534e0,0x9a);
    }
  }
  return 0x102;
}


