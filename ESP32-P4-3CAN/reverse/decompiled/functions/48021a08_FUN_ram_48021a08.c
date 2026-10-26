/* Firmware entry: 0x48021a08 */

undefined4 FUN_ram_48021a08(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"H_power_save",
                   "E (%lu) %s: Power save driver not initialized, might be disabled at host/slave\n"
                   ,uVar1,"H_power_save");
  return 0xffffffff;
}


