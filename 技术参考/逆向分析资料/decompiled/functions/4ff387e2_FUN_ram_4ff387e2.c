/* Firmware entry: 0x4ff387e2 */

void FUN_ram_4ff387e2(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    uVar1 = crc32_le(*param_1);
    *param_1 = uVar1;
    param_1[1] = param_1[1] + param_3;
    return;
  }
  uVar1 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s__Empty_data_to_add_to_ram_4ff56a20,uVar1,s_esp_core_dump_crc_ram_4ff58348)
  ;
  return;
}


