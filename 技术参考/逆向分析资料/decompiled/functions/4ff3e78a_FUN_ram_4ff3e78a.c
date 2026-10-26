/* Firmware entry: 0x4ff3e78a */

void FUN_ram_4ff3e78a(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0x1c4,"xTaskGetIdleTaskHandleForCore",
                     "( ( ( ( BaseType_t ) xCoreID ) >= 0 && ( ( BaseType_t ) xCoreID ) < 2 ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 1 )"
                    );
  }
  if ((&DAT_ram_4ff6da00)[param_1] != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0x1c5,"xTaskGetIdleTaskHandleForCore",
                   "( xIdleTaskHandle[ xCoreID ] != ((void *)0) )");
}


