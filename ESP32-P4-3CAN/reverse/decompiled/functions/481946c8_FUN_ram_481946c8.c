/* Firmware entry: 0x481946c8 */

undefined4 FUN_ram_481946c8(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"ESP_DS_COMMON","E (%lu) %s: s_ds_data is NULL, cannot get key length\n",uVar1,
                   "ESP_DS_COMMON");
  return 0;
}


