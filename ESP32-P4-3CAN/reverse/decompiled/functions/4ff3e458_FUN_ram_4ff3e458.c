/* Firmware entry: 0x4ff3e458 */

undefined4
FUN_ram_4ff3e458(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((1 < param_7) && (param_7 != 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0xa3,"xTaskCreatePinnedToCore",
                     "( ( ( ( BaseType_t ) xCoreID ) >= 0 && ( ( BaseType_t ) xCoreID ) < 2 ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 1 ) || xCoreID == ( ( BaseType_t ) 0x7FFFFFFF )"
                    );
  }
  iVar1 = FUN_ram_4ff3f268(param_3);
  if (iVar1 != 0) {
    __s = (void *)FUN_ram_4ff3f268(0x160);
    if (__s != (void *)0x0) {
      memset(__s,0,0x160);
      *(int *)((int)__s + 0x30) = iVar1;
      FUN_ram_4ff3c01a(param_1,param_2,param_3,param_4,param_5,param_6,__s,param_7);
      FUN_ram_4ff3bd24(__s);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    thunk_FUN_ram_4ff209c6(iVar1);
  }
  return 0xffffffff;
}


