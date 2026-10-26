/* Firmware entry: 0x4803e9be */

void FUN_ram_4803e9be(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_2;
  FUN_ram_4802f022(param_1,"bootSequence");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_480306a2(param_1,param_2 + 1);
  uVar1 = param_2[9];
  FUN_ram_4802f022(param_1,"phase");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar4 = param_2[9];
  if (uVar4 == 6) {
    pcVar3 = "web_init";
    goto LAB_ram_4803ea82;
  }
  if (uVar4 < 7) {
    if (uVar4 == 3) {
      pcVar3 = "reference";
      goto LAB_ram_4803ea82;
    }
    if (3 < uVar4) {
      if (uVar4 == 4) {
        pcVar3 = "diagnostics";
      }
      else {
        pcVar3 = "driver_init";
      }
      goto LAB_ram_4803ea82;
    }
    if (uVar4 == 1) {
      pcVar3 = "rtos";
      goto LAB_ram_4803ea82;
    }
    if (uVar4 == 2) {
      pcVar3 = "setup";
      goto LAB_ram_4803ea82;
    }
  }
  else {
    if (uVar4 == 9) {
      pcVar3 = "running";
      goto LAB_ram_4803ea82;
    }
    if (uVar4 < 10) {
      if (uVar4 == 7) {
        pcVar3 = "tasks";
      }
      else {
        pcVar3 = "can_start";
      }
      goto LAB_ram_4803ea82;
    }
    if (uVar4 == 10) {
      pcVar3 = "failed";
      goto LAB_ram_4803ea82;
    }
  }
  pcVar3 = "unknown";
LAB_ram_4803ea82:
  FUN_ram_4802a8a8(auStack_30,pcVar3);
  FUN_ram_4802f236(param_1,"phaseName",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[10];
  FUN_ram_4802f022(param_1,"phaseCycles");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = param_2[0xb];
  FUN_ram_4802f022(param_1,"transitions");
  FUN_ram_4802aa44(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802f022(param_1,"phaseHistory");
  FUN_ram_4802af5a(param_1,0x5b);
  puVar5 = param_2 + 0xc;
  iVar2 = 0;
  while( true ) {
    FUN_ram_4802aa44(auStack_30,*puVar5,10);
    FUN_ram_4802ae48(param_1,auStack_30);
    FUN_ram_4802a59e(auStack_30);
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 1;
    if (iVar2 == 4) break;
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x5d);
  FUN_ram_4802f022(param_1,"phaseCycleHistory");
  FUN_ram_4802af5a(param_1,0x5b);
  puVar5 = param_2 + 0x10;
  iVar2 = 0;
  while( true ) {
    FUN_ram_4802aa44(auStack_30,*puVar5,10);
    FUN_ram_4802ae48(param_1,auStack_30);
    FUN_ram_4802a59e(auStack_30);
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 1;
    if (iVar2 == 4) break;
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x5d);
  FUN_ram_4802f022(param_1,"sample");
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  iVar2 = param_2[0x1a];
  FUN_ram_4802f022(auStack_40,"valid");
  if (iVar2 == 0) {
    pcVar3 = "false";
  }
  else {
    pcVar3 = "true";
  }
  FUN_ram_4802af2c(auStack_40,pcVar3);
  if (param_2[0x1a] != 0) {
    uVar1 = param_2[0x14];
    uVar6 = param_2[0x15];
    FUN_ram_4802f022(auStack_40,"timerUs");
    FUN_ram_4802aa88(auStack_30,uVar1,uVar6,10);
    FUN_ram_4802ae48(auStack_40,auStack_30);
    FUN_ram_4802a59e(auStack_30);
    uVar1 = param_2[0x18];
    FUN_ram_4802f022(auStack_40,&DAT_ram_481c4204);
    FUN_ram_4802aa44(auStack_30,uVar1,10);
    FUN_ram_4802ae48(auStack_40,auStack_30);
    FUN_ram_4802a59e(auStack_30);
    uVar1 = param_2[0x19];
    FUN_ram_4802f022(auStack_40,"cycles");
    FUN_ram_4802aa44(auStack_30,uVar1,10);
    FUN_ram_4802ae48(auStack_40,auStack_30);
    FUN_ram_4802a59e(auStack_30);
    iVar2 = param_2[0x1b];
    FUN_ram_4802f022(auStack_40,"referenceValid");
    if (iVar2 == 0) {
      pcVar3 = "false";
    }
    else {
      pcVar3 = "true";
    }
    FUN_ram_4802af2c(auStack_40,pcVar3);
    uVar1 = param_2[0x16];
    uVar6 = param_2[0x17];
    FUN_ram_4802f022(auStack_40,"referenceUs");
    FUN_ram_4802aace(auStack_30,uVar1,uVar6,10);
    FUN_ram_4802ae48(auStack_40,auStack_30);
    FUN_ram_4802a59e(auStack_30);
  }
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  return;
}


