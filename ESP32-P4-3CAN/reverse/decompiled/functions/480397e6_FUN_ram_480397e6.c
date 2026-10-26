/* Firmware entry: 0x480397e6 */

void FUN_ram_480397e6(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"event");
  FUN_ram_4802a8a8(auStack_70,&DAT_ram_481c4164);
  FUN_ram_4803957e(auStack_70,param_2 + 8);
  FUN_ram_4802af5a(auStack_70,0x7d);
  FUN_ram_4802ae48(param_1,auStack_70);
  FUN_ram_4802f022(param_1,"tasks");
  FUN_ram_4802af5a(param_1,0x5b);
  uVar2 = *(uint *)(param_2 + 4);
  uVar4 = 0x10;
  if (uVar2 < 0x11) {
    uVar4 = uVar2;
  }
  if (uVar2 != 0) {
    param_2 = param_2 + 0x44;
    uVar2 = 0;
    while( true ) {
      FUN_ram_4802a8a8(auStack_60,&DAT_ram_481c4164);
      uVar3 = *(undefined4 *)(param_2 + -0x14);
      FUN_ram_4802f022(auStack_60,"cycles");
      FUN_ram_4802aa44(auStack_50,uVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar3 = *(undefined4 *)(param_2 + -0x10);
      FUN_ram_4802f022(auStack_60,"taskAddress");
      FUN_ram_4802aa44(auStack_50,uVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar3 = *(undefined4 *)(param_2 + -0xc);
      FUN_ram_4802f022(auStack_60,&DAT_ram_481c4204);
      FUN_ram_4802aa44(auStack_50,uVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar1 = *(undefined1 *)(param_2 + -4);
      FUN_ram_4802f022(auStack_60,"priority");
      FUN_ram_4802a928(auStack_50,uVar1,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar1 = *(undefined1 *)(param_2 + -3);
      FUN_ram_4802f022(auStack_60,&DAT_ram_481c425c);
      FUN_ram_4802a928(auStack_50,uVar1,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar1 = *(undefined1 *)(param_2 + -2);
      FUN_ram_4802f022(auStack_60,"actor");
      FUN_ram_4802a928(auStack_50,uVar1,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar1 = *(undefined1 *)(param_2 + -1);
      FUN_ram_4802f022(auStack_60,"waitType");
      FUN_ram_4802a928(auStack_50,uVar1,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar3 = *(undefined4 *)(param_2 + -8);
      FUN_ram_4802f022(auStack_60,"requestedTicks");
      FUN_ram_4802aa44(auStack_50,uVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      FUN_ram_4802a8a8(auStack_50,param_2);
      FUN_ram_4802f236(auStack_60,"name",auStack_50);
      FUN_ram_4802a59e(auStack_50);
      FUN_ram_4802af5a(auStack_60,0x7d);
      FUN_ram_4802ae48(param_1,auStack_60);
      uVar2 = uVar2 + 1;
      FUN_ram_4802a59e(auStack_60);
      param_2 = param_2 + 0x24;
      if (uVar4 <= uVar2) break;
      FUN_ram_4802af5a(param_1,0x2c);
    }
  }
  FUN_ram_4802af5a(param_1,0x5d);
  FUN_ram_4802a59e(auStack_70);
  return;
}


