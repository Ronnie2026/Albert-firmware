/* Firmware entry: 0x4ff3e824 */

undefined4 FUN_ram_4ff3e824(uint param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 2) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    uVar1 = *(undefined4 *)((&DAT_ram_4ff6da00)[param_1] + 100);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0x1ed,"ulTaskGetIdleRunTimeCounterForCore",
                   "( ( ( ( BaseType_t ) xCoreID ) >= 0 && ( ( BaseType_t ) xCoreID ) < 2 ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 1 )"
                  );
}


