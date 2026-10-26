/* Firmware entry: 0x48164f60 */

undefined4 FUN_ram_48164f60(undefined4 param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_periph","E (%lu) %s: %s: slot %d isn\'t initialized\n",uVar1,
                   "sdmmc_periph","sdmmc_host_is_slot_set_to_uhs1",param_1);
  return 0x103;
}


