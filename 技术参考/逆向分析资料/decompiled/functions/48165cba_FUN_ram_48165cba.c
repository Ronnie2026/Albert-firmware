/* Firmware entry: 0x48165cba */

undefined4 FUN_ram_48165cba(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(2,"sdmmc_periph",
                   "W (%lu) %s: DDR mode with 8-bit bus width is not supported yet\n",uVar1,
                   "sdmmc_periph");
  return 0x106;
}


