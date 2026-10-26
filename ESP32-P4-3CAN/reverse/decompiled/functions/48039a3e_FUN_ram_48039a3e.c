/* Firmware entry: 0x48039a3e */

void FUN_ram_48039a3e(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"otaBootValidation");
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  cVar2 = DAT_ram_4ff6de6d;
  FUN_ram_4802f022(auStack_40,"settled");
  if (cVar2 == '\0') {
    pcVar4 = "false";
  }
  else {
    pcVar4 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar4);
  if ((DAT_ram_4ff6de6c == '\0') || (DAT_ram_4ff6de6d != '\0')) {
    FUN_ram_4802f022(auStack_40,"pendingVerify");
    pcVar4 = "false";
  }
  else {
    FUN_ram_4802f022(auStack_40,"pendingVerify");
    pcVar4 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar4);
  cVar2 = DAT_ram_4ff6de5c;
  FUN_ram_4802f022(auStack_40,"restoreFailed");
  if (cVar2 == '\0') {
    pcVar4 = "false";
  }
  else {
    pcVar4 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar4);
  FUN_ram_4802a8a8(auStack_30,PTR_s_startup_ram_481d1924_ram_4ff47eb8);
  FUN_ram_4802f236(auStack_40,"reason",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = DAT_ram_4ff47eb0;
  FUN_ram_4802f022(auStack_40,"bus");
  FUN_ram_4802a970(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,PTR_DAT_ram_481df390_ram_4ff47eb4);
  FUN_ram_4802f236(auStack_40,"lastBlockReason",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = DAT_ram_4ff47eac;
  FUN_ram_4802f022(auStack_40,"lastBlockBus");
  FUN_ram_4802a970(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = DAT_ram_4ff6de48;
  FUN_ram_4802f022(auStack_40,"lastBlockAtMs");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  iVar3 = DAT_ram_4ff6de4c;
  FUN_ram_4802f022(auStack_40,"sampledAtMs");
  FUN_ram_4802aa44(auStack_30,iVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  iVar3 = DAT_ram_4ff6de50;
  FUN_ram_4802f022(auStack_40,"healthySinceMs");
  FUN_ram_4802aa44(auStack_30,iVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  iVar3 = 0;
  if (DAT_ram_4ff6de50 != 0) {
    iVar3 = DAT_ram_4ff6de4c - DAT_ram_4ff6de50;
  }
  FUN_ram_4802f022(auStack_40,"healthyForMs");
  FUN_ram_4802aa44(auStack_30,iVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"requiredHealthyMs");
  FUN_ram_4802aa44(auStack_30,10000,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"minimumUptimeMs");
  FUN_ram_4802aa44(auStack_30,30000,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"failureDeadlineMs");
  FUN_ram_4802aa44(auStack_30,120000,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  return;
}


