/* Firmware entry: 0x481a5ec4 */

void FUN_ram_481a5ec4(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sleep_clock",
                   "E (%lu) %s: %s(%d): failed to allocate memory for system (PCR) retention\n",
                   uVar1,"sleep_clock","sleep_clock_system_retention_init",0x25);
  return;
}


