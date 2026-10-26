/* Firmware entry: 0x48038bec */

undefined4 FUN_ram_48038bec(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_40 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(param_1,&DAT_ram_481c4164);
  FUN_ram_4802f022(param_1,&DAT_ram_481c4274);
  FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
  bVar3 = DAT_ram_4ff6dc5f;
  FUN_ram_4802f022(param_1,"active");
  FUN_ram_4802a928(auStack_40,bVar3,10);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  if (DAT_ram_4ff6dc5f == 1) {
    pcVar5 = "B";
  }
  else if (DAT_ram_4ff6dc5f == 2) {
    pcVar5 = "Auto";
  }
  else if (DAT_ram_4ff6dc5f == 0) {
    pcVar5 = "A";
  }
  else {
    pcVar5 = "Unknown";
  }
  FUN_ram_4802a8a8(auStack_40,pcVar5);
  FUN_ram_4802f236(param_1,"name",auStack_40);
  FUN_ram_4802a59e(auStack_40);
  cVar1 = DAT_ram_4ff47e4c;
  FUN_ram_4802f022(param_1,"layout");
  FUN_ram_4802a928(auStack_40,cVar1,10);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  if (DAT_ram_4ff47e4c == '\x01') {
    pcVar5 = "B";
  }
  else if (DAT_ram_4ff47e4c == '\x02') {
    pcVar5 = "Auto";
  }
  else if (DAT_ram_4ff47e4c == '\0') {
    pcVar5 = "A";
  }
  else {
    pcVar5 = "Unknown";
  }
  FUN_ram_4802a8a8(auStack_40,pcVar5);
  FUN_ram_4802f236(param_1,"storedName",auStack_40);
  FUN_ram_4802a59e(auStack_40);
  cVar1 = DAT_ram_4ff6dc5e;
  if (DAT_ram_4ff6dc5d == '\0') {
    if (DAT_ram_4ff47e4b != '\x02') {
      FUN_ram_4802f022(param_1,"confirmed");
      pcVar5 = "true";
      goto LAB_ram_48038d1a;
    }
    FUN_ram_4802f022(param_1,"confirmed");
    if (cVar1 != '\0') {
      pcVar5 = "true";
      goto LAB_ram_48038d1a;
    }
  }
  else {
    FUN_ram_4802f022(param_1,"confirmed");
  }
  pcVar5 = "false";
LAB_ram_48038d1a:
  FUN_ram_4802af2c(param_1,pcVar5);
  cVar1 = DAT_ram_4ff6dc5e;
  FUN_ram_4802f022(param_1,"detected");
  pcVar5 = "true";
  if (cVar1 == '\0') {
    pcVar5 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar5);
  if (DAT_ram_4ff6dc5d == '\0') {
    if (DAT_ram_4ff47e4b == '\x02') {
      if (DAT_ram_4ff6dc5e == '\0') {
        pcVar5 = "fallback_a";
      }
      else if (DAT_ram_4ff6dc5f == 0) {
        pcVar5 = "auto_a";
      }
      else {
        pcVar5 = "auto_b";
      }
    }
    else {
      pcVar5 = "manual";
    }
  }
  else {
    pcVar5 = "probe_failed";
  }
  FUN_ram_4802a8a8(auStack_40,pcVar5);
  FUN_ram_4802f236(param_1,"source",auStack_40);
  FUN_ram_4802a59e(auStack_40);
  cVar2 = DAT_ram_4ff47e4c;
  cVar1 = DAT_ram_4ff47e4b;
  FUN_ram_4802f022(param_1,"pendingRestart");
  pcVar5 = "true";
  if (cVar2 == cVar1) {
    pcVar5 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar5);
  FUN_ram_4802f022(param_1,&DAT_ram_481c43dc);
  FUN_ram_4802af5a(param_1,0x5b);
  iVar8 = 0;
  do {
    if (iVar8 != 0) {
      FUN_ram_4802af5a(param_1,0x2c);
    }
    uVar4 = 0xffffffff;
    iVar6 = ((-(uint)DAT_ram_4ff6dc5f & 3) + iVar8) * 8;
    uVar7 = 0xffffffff;
    if (DAT_ram_4ff6dc5f < 2) {
      uVar7 = *(undefined4 *)(&DAT_ram_48222610 + iVar6);
      uVar4 = *(undefined4 *)(&DAT_ram_48222614 + iVar6);
    }
    FUN_ram_4802af2c(param_1,"{\"tx\":");
    FUN_ram_4802a970(auStack_40,uVar7,10);
    FUN_ram_4802ae48(param_1,auStack_40);
    FUN_ram_4802a59e(auStack_40);
    FUN_ram_4802af2c(param_1,",\"rx\":");
    FUN_ram_4802a970(auStack_40,uVar4,10);
    FUN_ram_4802ae48(param_1,auStack_40);
    FUN_ram_4802a59e(auStack_40);
    iVar8 = iVar8 + 1;
    FUN_ram_4802af5a(param_1,0x7d);
  } while (iVar8 != 3);
  FUN_ram_4802af2c(param_1,&DAT_ram_481c43f4);
  return param_1;
}


