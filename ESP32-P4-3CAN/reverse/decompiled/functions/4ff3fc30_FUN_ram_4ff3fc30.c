/* Firmware entry: 0x4ff3fc30 */

uint FUN_ram_4ff3fc30(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x159,"xEventGroupWaitBits","xEventGroup");
  }
  if (0xffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x15a,"xEventGroupWaitBits",
                     "( uxBitsToWaitFor & 0xff000000UL ) == 0");
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x15b,"xEventGroupWaitBits","uxBitsToWaitFor != 0");
  }
  iVar2 = FUN_ram_4ff3d9d2();
  if ((iVar2 == 0) && (param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x15e,"xEventGroupWaitBits",
                     "!( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) && ( xTicksToWait != 0 ) )"
                    );
  }
  puVar3 = param_1 + 8;
  FUN_ram_4ff3ec14(puVar3,0xffffffff);
  uVar1 = *param_1;
  if (param_4 == 0) {
    if ((param_2 & uVar1) != 0) goto LAB_ram_4ff3fcd6;
    if (param_5 == 0) goto LAB_ram_4ff3fc84;
    FUN_ram_4ff3d096(param_1 + 1,(uint)(param_3 != 0) << 0x18 | param_2,param_5);
    FUN_ram_4ff3ee10(puVar3);
    FUN_ram_4ff3ef0e();
    uVar1 = FUN_ram_4ff3deb4();
    if ((int)(uVar1 << 6) < 0) goto LAB_ram_4ff3fcd0;
    FUN_ram_4ff3ec14(puVar3,0xffffffff);
    uVar1 = *param_1;
    if ((uVar1 & param_2) != 0) goto LAB_ram_4ff3fdce;
  }
  else {
    if (param_2 == (param_2 & uVar1)) {
LAB_ram_4ff3fcd6:
      if (param_3 != 0) {
        *param_1 = ~param_2 & uVar1;
        FUN_ram_4ff3ee10(puVar3);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return uVar1;
      }
LAB_ram_4ff3fc84:
      FUN_ram_4ff3ee10(puVar3);
      return uVar1;
    }
    if (param_5 == 0) goto LAB_ram_4ff3fc84;
    FUN_ram_4ff3d096(param_1 + 1,(uint)(param_3 != 0) << 0x18 | param_2 | 0x4000000,param_5);
    FUN_ram_4ff3ee10(puVar3);
    FUN_ram_4ff3ef0e();
    uVar1 = FUN_ram_4ff3deb4();
    if ((int)(uVar1 << 6) < 0) goto LAB_ram_4ff3fcd0;
    FUN_ram_4ff3ec14(puVar3,0xffffffff);
    uVar1 = *param_1;
    if (param_2 == (param_2 & uVar1)) {
LAB_ram_4ff3fdce:
      if (param_3 != 0) {
        *param_1 = ~param_2 & uVar1;
      }
    }
  }
  FUN_ram_4ff3ee10(puVar3);
LAB_ram_4ff3fcd0:
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return uVar1 & 0xffffff;
}


