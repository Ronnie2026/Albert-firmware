/* Firmware entry: 0x4ff2e218 */

undefined4 FUN_ram_4ff2e218(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Invalid_mask_ram_4ff577dc,uVar1
                     ,s_esp_twai_ram_4ff57310,s__node_config_mask_filter_ram_4ff53688,0x21f,param_2)
    ;
    return 0x102;
  }
  if (1 < (uint)param_3[1]) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___Invalid_num__ram_4ff5780c,uVar1
                     ,s_esp_twai_ram_4ff57310,s__node_config_mask_filter_ram_4ff53688,0x220);
    return 0x102;
  }
  puVar2 = (uint *)*param_3;
  if (param_3[1] == 0) {
    uVar3 = param_3[2];
  }
  else {
    uVar3 = param_3[2];
    puVar2 = (uint *)*puVar2;
  }
  if (uVar3 == 0xffffffff) {
    if ((puVar2 == (uint *)0xffffffff) || ((param_3[3] & 9) != 0)) goto LAB_ram_4ff2e23a;
  }
  else if (((param_3[3] & 9) != 0) || ((uVar3 | (uint)puVar2) < 0x800)) {
LAB_ram_4ff2e23a:
    fence();
    fence();
    if (*(int *)(param_1 + 0x7c) == 3) {
      FUN_ram_481a9410(*(undefined4 *)(param_1 + 0x40),0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___filter_confi_ram_4ff57888,
                       uVar1,s_esp_twai_ram_4ff57310,s__node_config_mask_filter_ram_4ff53688,0x228);
      uVar1 = 0x103;
    }
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___std_id_only___ram_4ff57834,uVar1,
                   s_esp_twai_ram_4ff57310,s__node_config_mask_filter_ram_4ff53688,0x223);
  return 0x102;
}


