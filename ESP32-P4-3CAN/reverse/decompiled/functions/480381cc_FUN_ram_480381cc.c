/* Firmware entry: 0x480381cc */

undefined4 FUN_ram_480381cc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined2 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(param_1,&DAT_ram_481c4164);
  FUN_ram_4802f022(param_1,&DAT_ram_481c4274);
  if (param_2 == 0) {
    pcVar6 = "true";
  }
  else {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  uVar1 = DAT_ram_4ff6dd38;
  FUN_ram_4802f022(param_1,"driverId");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = DAT_ram_4ff47e5c;
  FUN_ram_4802f022(param_1,"revision");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  cVar2 = (char)DAT_ram_4ff5c4c4;
  FUN_ram_4802f022(param_1,"customSpeedEnabled");
  if (cVar2 == '\0') {
    pcVar6 = "false";
  }
  else {
    pcVar6 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  bVar3 = DAT_ram_4ff61958._1_1_;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  if ((char)DAT_ram_4ff5c4c4 == '\0') {
    if (DAT_ram_4ff5c4c4._1_1_ == '\0') {
      FUN_ram_4802f022(param_1,"effectiveCustomSpeedEnabled");
      if ((bVar3 & 0xfd) == 0xc) goto LAB_ram_480382ce;
    }
    else {
      FUN_ram_4802f022(param_1,"effectiveCustomSpeedEnabled");
    }
    pcVar6 = "false";
  }
  else {
    FUN_ram_4802f022(param_1,"effectiveCustomSpeedEnabled");
LAB_ram_480382ce:
    pcVar6 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  FUN_ram_4802af2c(param_1,",\"targets\":[");
  puVar4 = (undefined2 *)((int)&DAT_ram_4ff5c4c4 + 2);
  iVar5 = 0;
  while( true ) {
    FUN_ram_4802a970(auStack_30,*puVar4,10);
    FUN_ram_4802ae48(param_1,auStack_30);
    FUN_ram_4802a59e(auStack_30);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
    if (iVar5 == 0x1e) break;
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x5d);
  if (param_2 == 0) {
    if (DAT_ram_4ff6dd35 == '\0') {
      pcVar6 = "failed";
    }
    else {
      pcVar6 = "stored";
    }
    FUN_ram_4802a8a8(auStack_30,pcVar6);
    FUN_ram_4802f236(param_1,"persistence",auStack_30);
    FUN_ram_4802a59e(auStack_30);
  }
  else {
    FUN_ram_4802a8a8(auStack_30,"failed");
    FUN_ram_4802f236(param_1,"persistence",auStack_30);
    FUN_ram_4802a59e(auStack_30);
    FUN_ram_4802a8a8(auStack_30,param_2);
    FUN_ram_4802f236(param_1,"error",auStack_30);
    FUN_ram_4802a59e(auStack_30);
  }
  FUN_ram_4802af5a(param_1,0x7d);
  return param_1;
}


