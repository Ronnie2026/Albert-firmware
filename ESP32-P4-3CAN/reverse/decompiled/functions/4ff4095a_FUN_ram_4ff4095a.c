/* Firmware entry: 0x4ff4095a */

undefined4 FUN_ram_4ff4095a(void)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff4057e();
  if (DAT_ram_4ff6e15c != 0) {
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_ram_4ff3f36a(&uStack_1c,&uStack_18,auStack_14);
    DAT_ram_4ff6e158 =
         FUN_ram_4ff3e516(FUN_ram_4ff406aa,"Tmr Svc",auStack_14[0],0,1,uStack_18,uStack_1c,
                          0x7fffffff);
    if (DAT_ram_4ff6e158 != 0) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("timers.c",0x15a,"xTimerCreateTimerTask","xReturn");
}


