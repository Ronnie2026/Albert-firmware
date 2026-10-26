/* Firmware entry: 0x4803840a */

void FUN_ram_4803840a(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"transfer");
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(auStack_20,DAT_ram_4ff5c5a8);
  FUN_ram_4802f236(auStack_30,"phase",auStack_20);
  FUN_ram_4802a59e(auStack_20);
  FUN_ram_4802a8a8(auStack_20,DAT_ram_4ff5c5ac);
  FUN_ram_4802f236(auStack_30,"failedPhase",auStack_20);
  FUN_ram_4802a59e(auStack_20);
  FUN_ram_4802f236(auStack_30,"error",&DAT_ram_4ff5c55c);
  FUN_ram_4802f236(auStack_30,"restoreError",&DAT_ram_4ff5c56c);
  uVar1 = DAT_ram_4ff5c580;
  FUN_ram_4802f022(auStack_30,"expectedBytes");
  FUN_ram_4802a9b8(auStack_20,uVar1,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = DAT_ram_4ff5c584;
  FUN_ram_4802f022(auStack_30,"receivedBytes");
  FUN_ram_4802a9b8(auStack_20,uVar1,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = DAT_ram_4ff5c57c;
  FUN_ram_4802f022(auStack_30,"writtenBytes");
  FUN_ram_4802a9b8(auStack_20,uVar1,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  cVar2 = DAT_ram_4ff5c5a4;
  FUN_ram_4802f022(auStack_30,"headerValidated");
  if (cVar2 == '\0') {
    pcVar3 = "false";
  }
  else {
    pcVar3 = "true";
  }
  FUN_ram_4802af2c(auStack_30,pcVar3);
  uVar1 = DAT_ram_4ff5c5b0;
  FUN_ram_4802f022(auStack_30,"startedAtMs");
  FUN_ram_4802aa44(auStack_20,uVar1,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = DAT_ram_4ff5c5c4;
  FUN_ram_4802f022(auStack_30,"lastActivityMs");
  FUN_ram_4802aa44(auStack_20,uVar1,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  cVar2 = DAT_ram_4ff5c5c0;
  FUN_ram_4802f022(auStack_30,"sessionActive");
  if (cVar2 == '\0') {
    pcVar3 = "false";
  }
  else {
    pcVar3 = "true";
  }
  FUN_ram_4802af2c(auStack_30,pcVar3);
  if (DAT_ram_4ff5c5ca != '\0') {
    if (DAT_ram_4ff5c548 == '\x04') {
      FUN_ram_4802f022(auStack_30,"restorePending");
      pcVar3 = "true";
      goto LAB_ram_480385e0;
    }
  }
  FUN_ram_4802f022(auStack_30,"restorePending");
  pcVar3 = "false";
LAB_ram_480385e0:
  FUN_ram_4802af2c(auStack_30,pcVar3);
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  return;
}


