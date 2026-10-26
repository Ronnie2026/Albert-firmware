/* Firmware entry: 0x4807f928 */

void FUN_ram_4807f928(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"previousBoot");
  FUN_ram_4807ef06(param_1,DAT_ram_4ff6de38);
  FUN_ram_4802f022(param_1,"rebootHistory");
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(auStack_30,"rtc_noinit_four_session");
  FUN_ram_4802f236(auStack_40,"retention",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"capacity");
  FUN_ram_4802a970(auStack_30,3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = DAT_ram_4ff6de30;
  FUN_ram_4802f022(auStack_40,"count");
  FUN_ram_4802a9b8(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"sessions");
  FUN_ram_4802af5a(auStack_40,0x5b);
  if (DAT_ram_4ff6de30 != 0) {
    uVar1 = 0;
    iVar2 = 0x1c8;
    while( true ) {
      uVar1 = uVar1 + 1;
      FUN_ram_4807ef06(auStack_40,DAT_ram_4ff6de38 + iVar2);
      iVar2 = iVar2 + 0x1c8;
      if (DAT_ram_4ff6de30 <= uVar1) break;
      FUN_ram_4802af5a(auStack_40,0x2c);
    }
  }
  FUN_ram_4802af2c(auStack_40,&DAT_ram_481c43f4);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  return;
}


