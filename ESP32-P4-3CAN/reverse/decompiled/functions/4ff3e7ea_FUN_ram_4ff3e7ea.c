/* Firmware entry: 0x4ff3e7ea */

undefined4 FUN_ram_4ff3e7ea(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 2) {
    return (&DAT_ram_4ff6da3c)[param_1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0x1d2,"xTaskGetCurrentTaskHandleForCore",
                   "( ( ( ( BaseType_t ) xCoreID ) >= 0 && ( ( BaseType_t ) xCoreID ) < 2 ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 1 )"
                  );
}


