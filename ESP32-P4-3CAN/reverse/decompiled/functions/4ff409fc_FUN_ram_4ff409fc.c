/* Firmware entry: 0x4ff409fc */

void FUN_ram_4ff409fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e15c != 0) {
    local_20 = 0xffffffff;
    uStack_1c = param_1;
    uStack_18 = param_2;
    uStack_14 = param_3;
    FUN_ram_4ff3afa2(DAT_ram_4ff6e15c,&local_20,param_4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("timers.c",0x492,"xTimerPendFunctionCall","xTimerQueue");
}


