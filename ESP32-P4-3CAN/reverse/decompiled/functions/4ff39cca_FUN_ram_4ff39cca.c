/* Firmware entry: 0x4ff39cca */

void FUN_ram_4ff39cca(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44cee();
  ets_printf(s_I___lu___s__Save_core_dump_to_fl_ram_4ff55a70,uVar1,
             s_esp_core_dump_flash_ram_4ff58544);
  return;
}


