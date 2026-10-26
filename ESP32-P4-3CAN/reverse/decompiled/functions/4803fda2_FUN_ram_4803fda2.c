/* Firmware entry: 0x4803fda2 */

void FUN_ram_4803fda2(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"timebase");
  FUN_ram_4802a8a8(auStack_50,&DAT_ram_481c4164);
  uVar3 = *param_1;
  FUN_ram_4802f022(auStack_50,"guardRevision");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,"63f96211bba19815322b93df078c71b74e139a9d766700702d6db74637656fa5");
  FUN_ram_4802f236(auStack_50,"sourceFingerprint",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[1];
  FUN_ram_4802f022(auStack_50,"bootSequence");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[2];
  FUN_ram_4802f022(auStack_50,"recoveredReads");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[3];
  FUN_ram_4802f022(auStack_50,"recordFaultMaxCycles");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  cVar1 = *(char *)(param_1 + 5);
  FUN_ram_4802f022(auStack_50,"referenceAvailable");
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_50,pcVar2);
  FUN_ram_4802a8a8(auStack_30,param_2);
  FUN_ram_4802f236(auStack_50,"referenceInitResult",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[0xf];
  FUN_ram_4802f022(auStack_50,"backwardEvents");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[0x10];
  FUN_ram_4802f022(auStack_50,"referenceMismatchEvents");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[10];
  uVar4 = param_1[0xb];
  FUN_ram_4802f022(auStack_50,"lastTimerDeltaUs");
  FUN_ram_4802aa88(auStack_30,uVar3,uVar4,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[0x11];
  FUN_ram_4802f022(auStack_50,"lastTickDriftUs");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_1[0x12];
  FUN_ram_4802f022(auStack_50,"lastReferenceDriftUs");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  cVar1 = *(char *)((int)param_1 + 0x15);
  FUN_ram_4802f022(auStack_50,"previousFaultValid");
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_50,pcVar2);
  cVar1 = *(char *)((int)param_1 + 0x16);
  FUN_ram_4802f022(auStack_50,"firstFaultValid");
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_50,pcVar2);
  uVar3 = param_1[0x19e];
  FUN_ram_4802f022(auStack_50,"checkpointMaxCycles");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  cVar1 = *(char *)(param_1 + 0x164);
  FUN_ram_4802f022(auStack_50,"previousBootValid");
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_50,pcVar2);
  FUN_ram_4802f022(auStack_50,"previousBoot");
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  if (*(char *)(param_1 + 0x164) != '\0') {
    FUN_ram_4803e9be(auStack_40,param_1 + 0x166);
  }
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(auStack_50,auStack_40);
  FUN_ram_4802f022(auStack_50,"currentBoot");
  FUN_ram_4802ad46(auStack_40,&DAT_ram_481c4164);
  FUN_ram_4803e9be(auStack_40,param_1 + 0x182);
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(auStack_50,auStack_40);
  FUN_ram_4802f022(auStack_50,"previousFault");
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_481c4164);
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    FUN_ram_4803ed52(auStack_30,param_1 + 0x14);
  }
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802f022(auStack_50,"firstFaultThisBoot");
  FUN_ram_4802ad46(auStack_30,&DAT_ram_481c4164);
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    FUN_ram_4803ed52(auStack_30,param_1 + 0xbc);
  }
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(auStack_50,auStack_30);
  FUN_ram_4802af5a(auStack_50,0x7d);
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_50);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a59e(auStack_40);
  FUN_ram_4802a59e(auStack_50);
  return;
}


