/* Firmware entry: 0x4803ed52 */

void FUN_ram_4803ed52(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(undefined4 *)(param_2 + 8);
  FUN_ram_4802f022(param_1,"bootSequence");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  FUN_ram_4802f022(param_1,"reasonCode");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  iVar3 = *(int *)(param_2 + 0x10);
  FUN_ram_4802f022(param_1,"recoveredByReread");
  if (iVar3 == 0) {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  FUN_ram_4802f022(param_1,"rawCounter");
  FUN_ram_4802aace(&uStack_5c,uVar2,uVar5,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  FUN_ram_4802f022(param_1,"period");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  FUN_ram_4802f022(param_1,"handledTicks");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  FUN_ram_4802f022(param_1,"pendingTicks");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  FUN_ram_4802f022(param_1,"cpuCycles");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  iVar3 = *(int *)(param_2 + 0x38);
  FUN_ram_4802f022(param_1,"referenceAvailable");
  if (iVar3 == 0) {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  FUN_ram_4802f022(param_1,"referenceUs");
  FUN_ram_4802aace(&uStack_5c,uVar2,uVar5,10);
  FUN_ram_4802ae48(param_1,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  FUN_ram_480306a2(param_1,param_2 + 0x3c);
  FUN_ram_4802f022(param_1,"evidence");
  FUN_ram_4802a8a8(auStack_bc,&DAT_ram_481c4164);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  FUN_ram_4802f022(auStack_bc,"format");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(auStack_bc,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 100);
  FUN_ram_4802f022(auStack_bc,"status");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(auStack_bc,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  if ((*(int *)(param_2 + 100) == 1) && (*(int *)(param_2 + 0x60) - 1U < 2)) {
    FUN_ram_4802f022(auStack_bc,"available");
    FUN_ram_4802af2c(auStack_bc,&DAT_ram_481c3dec);
    if ((*(uint *)(param_2 + 0x60) < 2) || (1 < *(uint *)(param_2 + 0x74))) {
      FUN_ram_4802f022(auStack_bc,"coreIdValid");
      FUN_ram_4802af2c(auStack_bc,"false");
    }
    else {
      FUN_ram_4802f022(auStack_bc,"coreIdValid");
      FUN_ram_4802af2c(auStack_bc,&DAT_ram_481c3dec);
      FUN_ram_4802f278(auStack_bc,"coreId",*(undefined4 *)(param_2 + 0x74));
    }
    FUN_ram_4802f278(auStack_bc,"enteredCycles",*(undefined4 *)(param_2 + 0x6c));
    FUN_ram_4802f278(auStack_bc,"completedCycles",*(undefined4 *)(param_2 + 0x70));
    uVar2 = *(undefined4 *)(param_2 + 0x78);
    uVar5 = *(undefined4 *)(param_2 + 0x7c);
    FUN_ram_4802f022(auStack_bc,"contextAddress");
    FUN_ram_4802aace(&uStack_5c,uVar2,uVar5,10);
    FUN_ram_4802ae48(auStack_bc,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    uVar2 = *(undefined4 *)(param_2 + 0x80);
    uVar5 = *(undefined4 *)(param_2 + 0x84);
    FUN_ram_4802f022(auStack_bc,"deviceAddress");
    FUN_ram_4802aace(&uStack_5c,uVar2,uVar5,10);
    FUN_ram_4802ae48(auStack_bc,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802f022(auStack_bc,"lastGood");
    FUN_ram_4802a8a8(auStack_7c,&DAT_ram_481c4164);
    iVar3 = *(int *)(param_2 + 0x90);
    FUN_ram_4802f022(auStack_7c,"valid");
    pcVar7 = "true";
    if (iVar3 == 0) {
      pcVar7 = "false";
    }
    FUN_ram_4802af2c(auStack_7c,pcVar7);
    if (*(int *)(param_2 + 0x90) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x88);
      uVar5 = *(undefined4 *)(param_2 + 0x8c);
      FUN_ram_4802f022(auStack_7c,"counter");
      FUN_ram_4802aace(&uStack_5c,uVar2,uVar5,10);
      FUN_ram_4802ae48(auStack_7c,&uStack_5c);
      FUN_ram_4802a59e(&uStack_5c);
      FUN_ram_4802f278(auStack_7c,"period",*(undefined4 *)(param_2 + 0x94));
      FUN_ram_4802f278(auStack_7c,"handledTicks",*(undefined4 *)(param_2 + 0x98));
      FUN_ram_4802f278(auStack_7c,"pendingTicks",*(undefined4 *)(param_2 + 0x9c));
      FUN_ram_4802f278(auStack_7c,"cpuCycles",*(undefined4 *)(param_2 + 0xa0));
    }
    FUN_ram_4802af5a(auStack_7c,0x7d);
    FUN_ram_4802ae48(auStack_bc,auStack_7c);
    uVar4 = *(uint *)(param_2 + 0x68);
    uVar10 = uVar4;
    if (3 < uVar4) {
      uVar10 = 3;
    }
    FUN_ram_4802f278(auStack_bc,"attemptCount",uVar10);
    FUN_ram_4802f022(auStack_bc,"attempts");
    FUN_ram_4802af5a(auStack_bc,0x5b);
    if (uVar4 != 0) {
      puVar6 = (undefined4 *)(param_2 + 0xa8);
      uVar4 = 0;
      while( true ) {
        FUN_ram_4802a8a8(auStack_6c,&DAT_ram_481c4164);
        uVar2 = *puVar6;
        uVar5 = puVar6[1];
        FUN_ram_4802f022(auStack_6c,"counter");
        FUN_ram_4802aace(&uStack_5c,uVar2,uVar5,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[2];
        FUN_ram_4802f022(auStack_6c,&DAT_ram_481c59c4);
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[3];
        FUN_ram_4802f022(auStack_6c,&DAT_ram_481c59c8);
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[4];
        FUN_ram_4802f022(auStack_6c,"loConfirm");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        iVar3 = puVar6[5];
        FUN_ram_4802f022(auStack_6c,"valid");
        pcVar7 = "false";
        if (iVar3 != 0) {
          pcVar7 = "true";
        }
        FUN_ram_4802af2c(auStack_6c,pcVar7);
        iVar3 = puVar6[6];
        FUN_ram_4802f022(auStack_6c,"stable");
        pcVar7 = "false";
        if (iVar3 != 0) {
          pcVar7 = "true";
        }
        FUN_ram_4802af2c(auStack_6c,pcVar7);
        uVar2 = puVar6[7];
        FUN_ram_4802f022(auStack_6c,"validPolls");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[8];
        FUN_ram_4802f022(auStack_6c,"readCount");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[9];
        FUN_ram_4802f022(auStack_6c,"period");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        iVar3 = puVar6[0xb];
        FUN_ram_4802f022(auStack_6c,"pendingValid");
        pcVar7 = "false";
        if (iVar3 != 0) {
          pcVar7 = "true";
        }
        FUN_ram_4802af2c(auStack_6c,pcVar7);
        uVar2 = puVar6[10];
        FUN_ram_4802f022(auStack_6c,"pendingTicks");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[0xc];
        FUN_ram_4802f022(auStack_6c,"reason");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        uVar2 = puVar6[0xd];
        FUN_ram_4802f022(auStack_6c,"cpuCycles");
        FUN_ram_4802aa44(&uStack_5c,uVar2,10);
        FUN_ram_4802ae48(auStack_6c,&uStack_5c);
        FUN_ram_4802a59e(&uStack_5c);
        FUN_ram_4802af5a(auStack_6c,0x7d);
        FUN_ram_4802ae48(auStack_bc,auStack_6c);
        uVar4 = uVar4 + 1;
        FUN_ram_4802a59e(auStack_6c);
        if (uVar10 <= uVar4) break;
        puVar6 = puVar6 + 0xe;
        FUN_ram_4802af5a(auStack_bc,0x2c);
      }
    }
    FUN_ram_4802af5a(auStack_bc,0x5d);
    FUN_ram_4802a59e(auStack_7c);
  }
  else {
    FUN_ram_4802f022(auStack_bc,"available");
    FUN_ram_4802af2c(auStack_bc,"false");
  }
  FUN_ram_4802af5a(auStack_bc,0x7d);
  FUN_ram_4802ae48(param_1,auStack_bc);
  FUN_ram_4802f022(param_1,"forensics");
  FUN_ram_4802a8a8(auStack_ac,&DAT_ram_481c4164);
  uVar2 = *(undefined4 *)(param_2 + 0x150);
  FUN_ram_4802f022(auStack_ac,"format");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(auStack_ac,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  uVar2 = *(undefined4 *)(param_2 + 0x154);
  FUN_ram_4802f022(auStack_ac,"status");
  FUN_ram_4802aa44(&uStack_5c,uVar2,10);
  FUN_ram_4802ae48(auStack_ac,&uStack_5c);
  FUN_ram_4802a59e(&uStack_5c);
  if ((*(int *)(param_2 + 0x150) - 1U < 2) && (*(int *)(param_2 + 0x154) == 1)) {
    FUN_ram_4802f022(auStack_ac,"available");
    FUN_ram_4802af2c(auStack_ac,&DAT_ram_481c3dec);
    FUN_ram_4802f278(auStack_ac,"startedCycles",*(undefined4 *)(param_2 + 0x158));
    FUN_ram_4802f278(auStack_ac,"completedCycles",*(undefined4 *)(param_2 + 0x15c));
    FUN_ram_4802f022(auStack_ac,"boot");
    FUN_ram_4802a8a8(auStack_9c,&DAT_ram_481c4164);
    FUN_ram_4803e9be(auStack_9c,param_2 + 0x160);
    FUN_ram_4802af5a(auStack_9c,0x7d);
    FUN_ram_4802ae48(auStack_ac,auStack_9c);
    FUN_ram_4802f022(auStack_ac,"registers");
    FUN_ram_4802a8a8(auStack_8c,&DAT_ram_481c4164);
    iVar9 = *(int *)(param_2 + 0x150);
    FUN_ram_4802f278(auStack_8c,&DAT_ram_481c5a28,*(undefined4 *)(param_2 + 0x1d0));
    FUN_ram_4802f022(auStack_8c,"unitOp");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1d4),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x2c);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1d8),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"loadHi");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1dc),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x2c);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1e0),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"loadLo");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1e4),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x2c);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1e8),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"unitLoad");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1ec),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x2c);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1f0),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"valueHi");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 500),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x2c);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1f8),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"valueLo");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x1fc),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x2c);
    FUN_ram_4802aa44(&uStack_5c,*(undefined4 *)(param_2 + 0x200),10);
    FUN_ram_4802ae48(auStack_8c,&uStack_5c);
    FUN_ram_4802a59e(&uStack_5c);
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"targetConf");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    puVar6 = (undefined4 *)(param_2 + 0x204);
    iVar3 = 0;
    while( true ) {
      FUN_ram_4802aa44(&uStack_5c,*puVar6,10);
      FUN_ram_4802ae48(auStack_8c,&uStack_5c);
      FUN_ram_4802a59e(&uStack_5c);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      if (iVar3 == 3) break;
      FUN_ram_4802af5a(auStack_8c,0x2c);
    }
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"targetHi");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    puVar6 = (undefined4 *)(param_2 + 0x210);
    iVar3 = 0;
    while( true ) {
      FUN_ram_4802aa44(&uStack_5c,*puVar6,10);
      FUN_ram_4802ae48(auStack_8c,&uStack_5c);
      FUN_ram_4802a59e(&uStack_5c);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      if (iVar3 == 3) break;
      FUN_ram_4802af5a(auStack_8c,0x2c);
    }
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"targetLo");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    puVar6 = (undefined4 *)(param_2 + 0x21c);
    iVar3 = 0;
    while( true ) {
      FUN_ram_4802aa44(&uStack_5c,*puVar6,10);
      FUN_ram_4802ae48(auStack_8c,&uStack_5c);
      FUN_ram_4802a59e(&uStack_5c);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      if (iVar3 == 3) break;
      FUN_ram_4802af5a(auStack_8c,0x2c);
    }
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"realTargetHi");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    puVar6 = (undefined4 *)(param_2 + 0x228);
    iVar3 = 0;
    while( true ) {
      FUN_ram_4802aa44(&uStack_5c,*puVar6,10);
      FUN_ram_4802ae48(auStack_8c,&uStack_5c);
      FUN_ram_4802a59e(&uStack_5c);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      if (iVar3 == 3) break;
      FUN_ram_4802af5a(auStack_8c,0x2c);
    }
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f022(auStack_8c,"realTargetLo");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    puVar6 = (undefined4 *)(param_2 + 0x234);
    iVar3 = 0;
    while( true ) {
      FUN_ram_4802aa44(&uStack_5c,*puVar6,10);
      FUN_ram_4802ae48(auStack_8c,&uStack_5c);
      FUN_ram_4802a59e(&uStack_5c);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      if (iVar3 == 3) break;
      FUN_ram_4802af5a(auStack_8c,0x2c);
    }
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802f278(auStack_8c,"intEna",*(undefined4 *)(param_2 + 0x240));
    FUN_ram_4802f278(auStack_8c,"intRaw",*(undefined4 *)(param_2 + 0x244));
    FUN_ram_4802f278(auStack_8c,"intStatus",*(undefined4 *)(param_2 + 0x248));
    FUN_ram_4802f278(auStack_8c,"date",*(undefined4 *)(param_2 + 0x24c));
    FUN_ram_4802f278(auStack_8c,"socClock",*(undefined4 *)(param_2 + 0x250));
    FUN_ram_4802f278(auStack_8c,"peripheralClock",*(undefined4 *)(param_2 + 0x254));
    FUN_ram_4802f278(auStack_8c,"peripheralReset",*(undefined4 *)(param_2 + 600));
    FUN_ram_4802f278(auStack_8c,"mcause",*(undefined4 *)(param_2 + 0x25c));
    FUN_ram_4802f278(auStack_8c,&DAT_ram_481c5af8,*(undefined4 *)(param_2 + 0x260));
    FUN_ram_4802f278(auStack_8c,"mstatus",*(undefined4 *)(param_2 + 0x264));
    if (iVar9 == 2) {
      puVar6 = (undefined4 *)(param_2 + 0x268);
      FUN_ram_4ff45158(&uStack_5c,puVar6,0x1c);
      FUN_ram_4802f022(auStack_8c,"cpuContext");
      FUN_ram_4802a8a8(auStack_6c,&DAT_ram_481c4164);
      FUN_ram_4802f278(auStack_6c,"mexstatus",uStack_5c);
      FUN_ram_4802f278(auStack_6c,"loadPcRaw",uStack_58);
      FUN_ram_4802f278(auStack_6c,"loadAddress",uStack_54);
      FUN_ram_4802f278(auStack_6c,"storePcRaw",uStack_50);
      FUN_ram_4802f278(auStack_6c,"storeAddress",uStack_4c);
      FUN_ram_4802f114(auStack_6c,"stackGuardActive",iStack_48 != 0);
      FUN_ram_4802f278(auStack_6c,"stackGuardPc",uStack_44);
      FUN_ram_4802af5a(auStack_6c,0x7d);
      FUN_ram_4802ae48(auStack_8c,auStack_6c);
      FUN_ram_4802a59e(auStack_6c);
      FUN_ram_4802f022(auStack_8c,"fresh");
      FUN_ram_4802af5a(auStack_8c,0x5b);
      FUN_ram_4802a8a8(auStack_7c,&DAT_ram_481c4164);
      puVar8 = &uStack_5c;
      bVar1 = false;
      uVar2 = 0;
      goto LAB_ram_4803f65e;
    }
    FUN_ram_4802f022(auStack_8c,"fresh");
    FUN_ram_4802af5a(auStack_8c,0x5b);
    FUN_ram_4802a8a8(auStack_7c,&DAT_ram_481c4164);
    puVar8 = (undefined4 *)(param_2 + 0x268);
    bVar1 = false;
    while( true ) {
      uVar2 = *puVar8;
      puVar6 = puVar8;
LAB_ram_4803f65e:
      uStack_44 = 0;
      iStack_48 = 0;
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_54 = 0;
      uStack_58 = 0;
      uStack_5c = 0;
      FUN_ram_4802f022(auStack_7c,&DAT_ram_481c59c4);
      FUN_ram_4802aa44(auStack_6c,uVar2,10);
      FUN_ram_4802ae48(auStack_7c,auStack_6c);
      FUN_ram_4802a59e(auStack_6c);
      uVar2 = puVar8[1];
      FUN_ram_4802f022(auStack_7c,&DAT_ram_481c59c8);
      FUN_ram_4802aa44(auStack_6c,uVar2,10);
      FUN_ram_4802ae48(auStack_7c,auStack_6c);
      FUN_ram_4802a59e(auStack_6c);
      uVar2 = puVar8[2];
      FUN_ram_4802f022(auStack_7c,"loConfirm");
      FUN_ram_4802aa44(auStack_6c,uVar2,10);
      FUN_ram_4802ae48(auStack_7c,auStack_6c);
      FUN_ram_4802a59e(auStack_6c);
      iVar3 = puVar8[3];
      FUN_ram_4802f022(auStack_7c,"valid");
      pcVar7 = "true";
      if (iVar3 == 0) {
        pcVar7 = "false";
      }
      FUN_ram_4802af2c(auStack_7c,pcVar7);
      iVar3 = puVar8[4];
      FUN_ram_4802f022(auStack_7c,"stable");
      pcVar7 = "true";
      if (iVar3 == 0) {
        pcVar7 = "false";
      }
      FUN_ram_4802af2c(auStack_7c,pcVar7);
      uVar2 = puVar8[5];
      FUN_ram_4802f022(auStack_7c,"polls");
      FUN_ram_4802aa44(auStack_6c,uVar2,10);
      FUN_ram_4802ae48(auStack_7c,auStack_6c);
      FUN_ram_4802a59e(auStack_6c);
      uVar2 = puVar8[6];
      FUN_ram_4802f022(auStack_7c,"reads");
      FUN_ram_4802aa44(auStack_6c,uVar2,10);
      FUN_ram_4802ae48(auStack_7c,auStack_6c);
      FUN_ram_4802a59e(auStack_6c);
      FUN_ram_4802af5a(auStack_7c,0x7d);
      FUN_ram_4802ae48(auStack_8c,auStack_7c);
      FUN_ram_4802a59e(auStack_7c);
      if (bVar1) break;
      FUN_ram_4802af5a(auStack_8c,0x2c);
      puVar8 = puVar6 + 7;
      FUN_ram_4802a8a8(auStack_7c,&DAT_ram_481c4164);
      bVar1 = true;
    }
    FUN_ram_4802af5a(auStack_8c,0x5d);
    FUN_ram_4802af5a(auStack_8c,0x7d);
    FUN_ram_4802ae48(auStack_ac,auStack_8c);
    FUN_ram_4802a59e(auStack_8c);
    FUN_ram_4802a59e(auStack_9c);
  }
  else {
    FUN_ram_4802f022(auStack_ac,"available");
    FUN_ram_4802af2c(auStack_ac,"false");
  }
  FUN_ram_4802af5a(auStack_ac,0x7d);
  FUN_ram_4802ae48(param_1,auStack_ac);
  FUN_ram_4802a59e(auStack_ac);
  FUN_ram_4802a59e(auStack_bc);
  return;
}


