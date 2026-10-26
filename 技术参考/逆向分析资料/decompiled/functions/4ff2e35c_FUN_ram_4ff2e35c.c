/* Firmware entry: 0x4ff2e35c */

int FUN_ram_4ff2e35c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (*(int *)(param_1 + 0x7c) != 3) {
    iVar1 = FUN_ram_4ff20d60(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 == 0) {
      fence();
      *(undefined4 *)(param_1 + 0x7c) = 3;
      fence();
      FUN_ram_481a95be(*(undefined4 *)(param_1 + 0x40));
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___disable_inte_ram_4ff578f4,
                       uVar2,s_esp_twai_ram_4ff57310,s__node_disable_ram_4ff53658,0x206);
    }
    return iVar1;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___node_already_ram_4ff578c8,uVar2,
                   s_esp_twai_ram_4ff57310,s__node_disable_ram_4ff53658,0x1fe);
  return 0x103;
}


