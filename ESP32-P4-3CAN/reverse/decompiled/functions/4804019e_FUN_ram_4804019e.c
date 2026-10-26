/* Firmware entry: 0x4804019e */

void FUN_ram_4804019e(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"canEvidence");
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  FUN_ram_4802f022(auStack_40,"schemaVersion");
  FUN_ram_4802aa44(auStack_30,2,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_48037e9c(auStack_40,param_2 + 0x1f2);
  uVar1 = param_2[0x1fa];
  FUN_ram_4802f022(auStack_40,"readyRemoteDropped");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x1fb];
  FUN_ram_4802f022(auStack_40,"wrongCoreEvents");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"temporalCorrelation");
  FUN_ram_4802aa44(auStack_30,1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = *param_2;
  FUN_ram_4802f022(auStack_40,"evidenceCount");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[1];
  FUN_ram_4802f022(auStack_40,"evidenceEvents");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[2];
  FUN_ram_4802f022(auStack_40,"evidenceOverwrites");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[3];
  FUN_ram_4802f022(auStack_40,"callbackCount");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[4];
  FUN_ram_4802f022(auStack_40,"callbackMaxCycles");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x203];
  FUN_ram_4802f022(auStack_40,"historySampleInterval");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x204];
  FUN_ram_4802f022(auStack_40,"historyCaptureActive");
  if (uVar1 == 0) {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar2);
  uVar1 = param_2[0x205];
  FUN_ram_4802f022(auStack_40,"historySampledCallbacks");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x206];
  FUN_ram_4802f022(auStack_40,"historyOmittedCallbacks");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x207];
  FUN_ram_4802f022(auStack_40,"historyOmittedEvents");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(auStack_40,"historySamplingMetadataRetained");
  FUN_ram_4802af2c(auStack_40,"false");
  FUN_ram_4802a8a8(auStack_30,"live_boot_only");
  FUN_ram_4802f236(auStack_40,"historySamplingScope",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[5];
  FUN_ram_4802f022(auStack_40,"hookMaskedBodyMaxCycles");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[6];
  FUN_ram_4802f022(auStack_40,"captureCount");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,"event_time_dram");
  FUN_ram_4802f236(auStack_40,"captureScope",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x1fc];
  FUN_ram_4802f022(auStack_40,"captureSequence");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x1fe];
  FUN_ram_4802f022(auStack_40,"retentionPending");
  pcVar2 = "false";
  if (uVar1 != 0) {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar2);
  uVar1 = param_2[0x1fd];
  FUN_ram_4802f022(auStack_40,"pendingCapturedSequence");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x1ff];
  FUN_ram_4802f022(auStack_40,"committedSequence");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x200];
  FUN_ram_4802f022(auStack_40,"committedCount");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,"ordinary_rtc");
  FUN_ram_4802f236(auStack_40,"committedScope",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x201];
  FUN_ram_4802f022(auStack_40,"pendingOverwrites");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0x202];
  FUN_ram_4802f022(auStack_40,"cancelledCaptures");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[7];
  FUN_ram_4802f022(auStack_40,"suppressedCaptures");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[8];
  FUN_ram_4802f022(auStack_40,"rejectedSlots");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[9];
  FUN_ram_4802f022(auStack_40,"frozen");
  pcVar2 = "false";
  if (uVar1 != 0) {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar2);
  uVar1 = param_2[10];
  FUN_ram_4802f022(auStack_40,"rtcBytes");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0xb];
  FUN_ram_4802f022(auStack_40,"hotBytes");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0xc];
  FUN_ram_4802f022(auStack_40,"captureMaskedBodyMaxCycles");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f278(auStack_40,"exportMaskedBodyMaxCycles",param_2[0xd]);
  FUN_ram_4802f022(auStack_40,"evidence");
  FUN_ram_4802af5a(auStack_40,0x5b);
  uVar3 = *param_2;
  uVar1 = uVar3;
  if (0x10 < uVar3) {
    uVar1 = 0x10;
  }
  if (uVar3 != 0) {
    puVar4 = param_2 + 0xe;
    uVar3 = 0;
    while( true ) {
      FUN_ram_4802a8a8(auStack_30,&DAT_ram_481c4164);
      FUN_ram_4803803a(auStack_30,puVar4);
      FUN_ram_4802af5a(auStack_30,0x7d);
      FUN_ram_4802ae48(auStack_40,auStack_30);
      FUN_ram_4802a59e(auStack_30);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
      if (uVar1 <= uVar3) break;
      FUN_ram_4802af5a(auStack_40,0x2c);
    }
  }
  FUN_ram_4802af5a(auStack_40,0x5d);
  FUN_ram_4802f022(auStack_40,"previous");
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_481c4164);
  FUN_ram_4803e59c(auStack_30,param_2 + 0x6e);
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802f022(auStack_40,"latest");
  FUN_ram_4802ad46(auStack_30,&DAT_ram_481c4164);
  FUN_ram_4803e59c(auStack_30,param_2 + 0x130);
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a59e(auStack_40);
  return;
}


