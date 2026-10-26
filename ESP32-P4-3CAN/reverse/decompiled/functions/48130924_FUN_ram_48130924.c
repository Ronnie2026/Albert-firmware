/* Firmware entry: 0x48130924 */

void FUN_ram_48130924(uint param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar1 = 0;
  while( true ) {
    for (; (param_1 & 1) == 0; param_1 = param_1 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = FUN_ram_4ff3e78a(iVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("task_wdt.c",0x137,"subscribe_idle","idle_task_handle");
    }
    iVar2 = FUN_ram_481308ba();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff36e1a(iVar2,"/IDF/components/esp_system/task_wdt/task_wdt.c",0x138,"subscribe_idle"
                       ,"esp_task_wdt_add(idle_task_handle)");
    }
    iVar2 = FUN_ram_481a70b0(FUN_ram_48130c6e,iVar1);
    if (iVar2 != 0) break;
    param_1 = param_1 >> 1;
    iVar1 = iVar1 + 1;
    if (param_1 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar2,"/IDF/components/esp_system/task_wdt/task_wdt.c",0x139,"subscribe_idle",
                   "esp_register_freertos_idle_hook_for_cpu(idle_hook_cb, core_num)");
}


