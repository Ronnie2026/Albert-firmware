/* Firmware entry: 0x4ff2dfa6 */

undefined4 FUN_ram_4ff2dfa6(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (*(int *)(param_1 + 0x7c) != 3) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___register_cal_ram_4ff57634,uVar1
                     ,s_esp_twai_ram_4ff57310,s__node_register_callbacks_ram_4ff536bc,0x185);
    return 0x103;
  }
  if (*param_2 == 0) {
LAB_ram_4ff2dfca:
    if (param_2[1] != 0) {
      if (0xbffff < param_2[1] + 0xb0100000U) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___on_rx_done_c_ram_4ff576ac,
                         uVar1,s_esp_twai_ram_4ff57310,s__node_register_callbacks_ram_4ff536bc,0x188
                        );
        goto LAB_ram_4ff2e060;
      }
    }
    if (param_2[2] != 0) {
      if (0xbffff < param_2[2] + 0xb0100000U) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___on_state_cha_ram_4ff576e4,
                         uVar1,s_esp_twai_ram_4ff57310,s__node_register_callbacks_ram_4ff536bc,0x189
                        );
        goto LAB_ram_4ff2e060;
      }
    }
    if (param_2[3] != 0) {
      if (0xbffff < param_2[3] + 0xb0100000U) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___on_error_cal_ram_4ff57720,
                         uVar1,s_esp_twai_ram_4ff57310,s__node_register_callbacks_ram_4ff536bc,0x18a
                        );
        goto LAB_ram_4ff2e060;
      }
    }
    FUN_ram_4ff45158(param_1 + 100,param_2,0x10);
    *(undefined4 *)(param_1 + 0x74) = param_3;
    uVar1 = 0;
  }
  else {
    if (*param_2 + 0xb0100000U < 0xc0000) goto LAB_ram_4ff2dfca;
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___on_tx_done_c_ram_4ff57674,uVar1
                     ,s_esp_twai_ram_4ff57310,s__node_register_callbacks_ram_4ff536bc,0x187);
LAB_ram_4ff2e060:
    uVar1 = 0x102;
  }
  return uVar1;
}


