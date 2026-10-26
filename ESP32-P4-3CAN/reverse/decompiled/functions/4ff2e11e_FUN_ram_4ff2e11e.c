/* Firmware entry: 0x4ff2e11e */

undefined4 FUN_ram_4ff2e11e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (*(int *)(param_1 + 0x7c) != 3) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___config_timin_ram_4ff57754,uVar2
                     ,s_esp_twai_ram_4ff57310,s__node_set_bit_timing_ram_4ff536a4,0x194);
    return 0x103;
  }
  iVar1 = FUN_ram_481a92e2(*(undefined4 *)(param_1 + 0x40),param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_para_ram_4ff57790,uVar2
                     ,s_esp_twai_ram_4ff57310,s__node_set_bit_timing_ram_4ff536a4,0x195);
  }
  else {
    iVar1 = FUN_ram_481a92e2(*(undefined4 *)(param_1 + 0x40),param_3,1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        FUN_ram_481a9324(*(undefined4 *)(param_1 + 0x40),param_2);
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___invalid_fd_p_ram_4ff577b4,uVar2
                     ,s_esp_twai_ram_4ff57310,s__node_set_bit_timing_ram_4ff536a4,0x196);
  }
  return 0x102;
}


