/* Firmware entry: 0x4803c556 */

undefined4 FUN_ram_4803c556(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(param_1,&DAT_ram_481c4164);
  FUN_ram_4802f022(param_1,&DAT_ram_481c4274);
  if (param_3 == 0) {
    pcVar6 = "true";
  }
  else {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  uVar3 = DAT_ram_4ff6dd4c;
  FUN_ram_4802f022(param_1,"driverId");
  FUN_ram_4802aa44(auStack_50,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar3 = DAT_ram_4ff47e60;
  FUN_ram_4802f022(param_1,"revision");
  FUN_ram_4802aa44(auStack_50,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  cVar1 = (char)DAT_ram_4ff4894c;
  FUN_ram_4802f022(param_1,"ambientEnabled");
  pcVar6 = "true";
  if (cVar1 == '\0') {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  cVar1 = DAT_ram_4ff4894c._1_1_;
  FUN_ram_4802f022(param_1,"fsdCueEnabled");
  pcVar6 = "true";
  if (cVar1 == '\0') {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  cVar1 = DAT_ram_4ff4894c._2_1_;
  FUN_ram_4802f022(param_1,"blindSpotEnabled");
  pcVar6 = "true";
  if (cVar1 == '\0') {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  uVar2 = DAT_ram_4ff4894c._3_1_;
  FUN_ram_4802f022(param_1,"blindSpotBrightness");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar2 = (undefined1)DAT_ram_4ff48950;
  FUN_ram_4802f022(param_1,"blindSpotAreas");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar4 = DAT_ram_4ff48950._2_2_;
  FUN_ram_4802f022(param_1,"blindSpotRestoreDelayMs");
  FUN_ram_4802a970(auStack_50,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  cVar1 = (char)DAT_ram_4ff48954;
  FUN_ram_4802f022(param_1,"turnFollowEnabled");
  pcVar6 = "true";
  if (cVar1 == '\0') {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  cVar1 = DAT_ram_4ff48954._1_1_;
  FUN_ram_4802f022(param_1,"turnFollowHazards");
  pcVar6 = "true";
  if (cVar1 == '\0') {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  uVar2 = DAT_ram_4ff48954._2_1_;
  FUN_ram_4802f022(param_1,"turnFollowBrightness");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar2 = DAT_ram_4ff48954._3_1_;
  FUN_ram_4802f022(param_1,"turnFollowAreas");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uStack_70 = 0;
  uStack_6c = 0;
  FUN_ram_4819ad74(&uStack_70,8,"#%02X%02X%02X",(undefined1)DAT_ram_4ff48958,DAT_ram_4ff48958._1_1_,
                   DAT_ram_4ff48958._2_1_);
  FUN_ram_4802a8a8(auStack_50,&uStack_70);
  FUN_ram_4802f236(param_1,"turnFollowColor",auStack_50);
  FUN_ram_4802a59e(auStack_50);
  cVar1 = DAT_ram_4ff48958._3_1_;
  FUN_ram_4802f022(param_1,"welcomeEnabled");
  pcVar6 = "true";
  if (cVar1 == '\0') {
    pcVar6 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar6);
  uVar2 = (undefined1)DAT_ram_4ff4895c;
  FUN_ram_4802f022(param_1,"welcomeStyle");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar2 = DAT_ram_4ff4895c._1_1_;
  FUN_ram_4802f022(param_1,"welcomeTriggerMode");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar2 = DAT_ram_4ff4895c._2_1_;
  FUN_ram_4802f022(param_1,"welcomeBrightness");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar2 = DAT_ram_4ff4895c._3_1_;
  FUN_ram_4802f022(param_1,"welcomeTempo");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uVar2 = (undefined1)DAT_ram_4ff48960;
  FUN_ram_4802f022(param_1,"welcomeZoneMask");
  FUN_ram_4802a928(auStack_50,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  uStack_68 = 0;
  uStack_64 = 0;
  FUN_ram_4819ad74(&uStack_68,8,"#%02X%02X%02X",DAT_ram_4ff48960._1_1_,DAT_ram_4ff48960._2_1_,
                   DAT_ram_4ff48960._3_1_);
  FUN_ram_4802a8a8(auStack_50,&uStack_68);
  FUN_ram_4802f236(param_1,"welcomeColor",auStack_50);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802af2c(param_1,",\"zones\":[");
  puVar5 = &DAT_ram_4ff4894c;
  iVar7 = 0;
  while( true ) {
    FUN_ram_4802a8a8(auStack_60,&DAT_ram_481c4164);
    cVar1 = *(char *)(puVar5 + 6);
    FUN_ram_4802f022(auStack_60,"enabled");
    pcVar6 = "false";
    if (cVar1 != '\0') {
      pcVar6 = "true";
    }
    FUN_ram_4802af2c(auStack_60,pcVar6);
    uVar2 = *(undefined1 *)((int)puVar5 + 0x19);
    FUN_ram_4802f022(auStack_60,"brightness");
    FUN_ram_4802a928(auStack_50,uVar2,10);
    FUN_ram_4802ae48(auStack_60,auStack_50);
    FUN_ram_4802a59e(auStack_50);
    uVar2 = *(undefined1 *)((int)puVar5 + 0x1a);
    FUN_ram_4802f022(auStack_60,"red");
    FUN_ram_4802a928(auStack_50,uVar2,10);
    FUN_ram_4802ae48(auStack_60,auStack_50);
    FUN_ram_4802a59e(auStack_50);
    uVar2 = *(undefined1 *)((int)puVar5 + 0x1b);
    FUN_ram_4802f022(auStack_60,"green");
    FUN_ram_4802a928(auStack_50,uVar2,10);
    FUN_ram_4802ae48(auStack_60,auStack_50);
    FUN_ram_4802a59e(auStack_50);
    uVar2 = *(undefined1 *)(puVar5 + 7);
    FUN_ram_4802f022(auStack_60,&DAT_ram_481c5364);
    FUN_ram_4802a928(auStack_50,uVar2,10);
    FUN_ram_4802ae48(auStack_60,auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802af5a(auStack_60,0x7d);
    FUN_ram_4802ae48(param_1,auStack_60);
    FUN_ram_4802a59e(auStack_60);
    iVar7 = iVar7 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 5);
    if (iVar7 == 6) break;
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x5d);
  FUN_ram_4802a8a8(auStack_50,param_2);
  FUN_ram_4802f236(param_1,"persistence",auStack_50);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802f022(param_1,"available");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
  fence();
  if (DAT_ram_4ff613c0 == '\0') {
    pcVar6 = "independent_targets_trial";
  }
  else {
    pcVar6 = "ambient_tx_fault";
  }
  FUN_ram_4802a8a8(auStack_50,pcVar6);
  FUN_ram_4802f236(param_1,"blockedReason",auStack_50);
  FUN_ram_4802a59e(auStack_50);
  if (param_3 != 0) {
    FUN_ram_4802a8a8(auStack_50,param_3);
    FUN_ram_4802f236(param_1,"error",auStack_50);
    FUN_ram_4802a59e(auStack_50);
  }
  FUN_ram_4802af5a(param_1,0x7d);
  return param_1;
}


