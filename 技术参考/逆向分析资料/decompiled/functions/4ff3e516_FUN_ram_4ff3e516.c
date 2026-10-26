/* Firmware entry: 0x4ff3e516 */

/* WARNING: Removing unreachable block (ram,0x4ff3e618) */

undefined4
FUN_ram_4ff3e516(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,void *param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4ff3057c(param_6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("freertos_tasks_c_additions.h",299,"xTaskCreateStaticPinnedToCore",
                     "xPortcheckValidStackMem(puxStackBuffer)");
  }
  iVar1 = FUN_ram_4ff3f2ac(param_7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("freertos_tasks_c_additions.h",300,"xTaskCreateStaticPinnedToCore",
                     "xPortCheckValidTCBMem(pxTaskBuffer)");
  }
  if ((1 < param_8) && (param_8 != 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0x12d,"xTaskCreateStaticPinnedToCore",
                     "( ( ( ( BaseType_t ) xCoreID ) >= 0 && ( ( BaseType_t ) xCoreID ) < 2 ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 1 ) || xCoreID == ( ( BaseType_t ) 0x7FFFFFFF )"
                    );
  }
  uStack_34 = 0x160;
  uVar2 = 0;
  if ((param_7 != (void *)0x0) && (param_6 != 0)) {
    memset(param_7,0,0x160);
    *(undefined1 *)((int)param_7 + 0x15d) = 2;
    *(int *)((int)param_7 + 0x30) = param_6;
    FUN_ram_4ff3c01a(param_1,param_2,param_3,param_4,param_5,&uStack_38,param_7,param_8);
    FUN_ram_4ff3bd24(param_7);
    uVar2 = uStack_38;
  }
  return uVar2;
}


