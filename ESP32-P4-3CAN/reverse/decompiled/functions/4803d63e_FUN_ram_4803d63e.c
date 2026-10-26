/* Firmware entry: 0x4803d63e */

void FUN_ram_4803d63e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **ppuVar16;
  char *pcVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  char *pcVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0 [9];
  byte abStack_cc [152];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"canServiceStages");
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,"{\"unit\":\"us\"");
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"enabled");
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,"false");
  FUN_ram_4802a8a8(local_f0,"canRtTaskStageWallTime");
  FUN_ram_4802f236(&DAT_ram_4ff5c464,"scope",local_f0);
  FUN_ram_4802a59e(local_f0);
  piVar24 = &DAT_ram_4ff4a030;
  ppuVar16 = &PTR_s_preRx_ram_481d1940_ram_48222cc0;
  do {
    FUN_ram_4ff3ec14(&DAT_ram_4ff4a148,0xffffffff);
    local_f0[0] = *piVar24;
    local_f0[1] = piVar24[1];
    local_f0[2] = piVar24[2];
    local_f0[3] = piVar24[3];
    local_f0[4] = piVar24[4];
    FUN_ram_4ff3ee10(&DAT_ram_4ff4a148);
    iStack_104 = local_f0[0];
    iStack_fc = local_f0[2];
    iStack_f8 = local_f0[3];
    iStack_f4 = local_f0[4];
    iStack_100 = local_f0[1];
    FUN_ram_4802f022(&DAT_ram_4ff5c464,*ppuVar16);
    FUN_ram_4802af2c(&DAT_ram_4ff5c464,"{\"count\":");
    FUN_ram_4802aa44(local_f0,iStack_104,10);
    FUN_ram_4802ae48(&DAT_ram_4ff5c464,local_f0);
    FUN_ram_4802a59e(local_f0);
    iVar1 = iStack_100;
    FUN_ram_4802f022(&DAT_ram_4ff5c464,"lastUs");
    FUN_ram_4802aa44(local_f0,iVar1,10);
    FUN_ram_4802ae48(&DAT_ram_4ff5c464,local_f0);
    FUN_ram_4802a59e(local_f0);
    iVar1 = iStack_fc;
    FUN_ram_4802f022(&DAT_ram_4ff5c464,"maxUs");
    FUN_ram_4802aa44(local_f0,iVar1,10);
    FUN_ram_4802ae48(&DAT_ram_4ff5c464,local_f0);
    FUN_ram_4802a59e(local_f0);
    iVar1 = iStack_f8;
    FUN_ram_4802f022(&DAT_ram_4ff5c464,"startedUs");
    FUN_ram_4802aa44(local_f0,iVar1,10);
    FUN_ram_4802ae48(&DAT_ram_4ff5c464,local_f0);
    FUN_ram_4802a59e(local_f0);
    iVar1 = iStack_f4;
    FUN_ram_4802f022(&DAT_ram_4ff5c464,"endedUs");
    FUN_ram_4802aa44(local_f0,iVar1,10);
    FUN_ram_4802ae48(&DAT_ram_4ff5c464,local_f0);
    FUN_ram_4802a59e(local_f0);
    piVar24 = piVar24 + 5;
    FUN_ram_4802af5a(&DAT_ram_4ff5c464,0x7d);
    ppuVar16 = ppuVar16 + 1;
  } while (piVar24 != (int *)&DAT_ram_4ff4a148);
  FUN_ram_4ff3ec14(&DAT_ram_4ff4a148,0xffffffff);
  uVar15 = DAT_ram_4ff4a2b0;
  uVar14 = DAT_ram_4ff4a2ac;
  uVar13 = DAT_ram_4ff4a2a8;
  uVar12 = DAT_ram_4ff4a2a4;
  uVar11 = DAT_ram_4ff4a2a0;
  iVar10 = DAT_ram_4ff4a29c;
  cVar9 = DAT_ram_4ff4a218;
  uVar8 = DAT_ram_4ff4a217;
  uVar7 = DAT_ram_4ff4a216;
  uVar6 = DAT_ram_4ff4a215;
  uVar5 = DAT_ram_4ff4a214;
  uVar4 = DAT_ram_4ff4a210;
  uVar3 = DAT_ram_4ff4a20c;
  iVar2 = DAT_ram_4ff4a208;
  iVar1 = DAT_ram_4ff4a204;
  piVar23 = &DAT_ram_4ff4a204;
  piVar24 = local_f0;
  do {
    iVar18 = piVar23[1];
    iVar20 = piVar23[2];
    iVar22 = piVar23[3];
    *piVar24 = *piVar23;
    piVar24[1] = iVar18;
    piVar24[2] = iVar20;
    piVar24[3] = iVar22;
    piVar23 = piVar23 + 4;
    piVar24 = piVar24 + 4;
  } while (piVar23 != (int *)&DAT_ram_4ff4a2b4);
  FUN_ram_4ff3ee10(&DAT_ram_4ff4a148);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"latestDequeueLossStages");
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,"{\"available\":");
  if (cVar9 == '\0') {
    pcVar17 = "false";
  }
  else {
    pcVar17 = "true";
  }
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,pcVar17);
  FUN_ram_4802a8a8(&iStack_104,"canRtP1DequeueLoss");
  FUN_ram_4802f236(&DAT_ram_4ff5c464,"scope",&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802a8a8(&iStack_104,"us");
  FUN_ram_4802f236(&DAT_ram_4ff5c464,&DAT_ram_481c557c,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"triggerUs");
  FUN_ram_4802aa44(&iStack_104,1000,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"retentionUs");
  FUN_ram_4802aa44(&iStack_104,100000,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"capacity");
  FUN_ram_4802a9b8(&iStack_104,8,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  uVar19 = FUN_ram_4811ec7e();
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"bootSequence");
  FUN_ram_4802aa44(&iStack_104,uVar19,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f236(&DAT_ram_4ff5c464,"appElfSha256",&DAT_ram_4ff5c840);
  FUN_ram_4802f236(&DAT_ram_4ff5c464,"bootSessionId",&DAT_ram_4ff5c830);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"freezeSequence");
  FUN_ram_4802aa44(&iStack_104,uVar12,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"frozenAtUs");
  FUN_ram_4802aa44(&iStack_104,uVar11,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"count");
  FUN_ram_4802aa44(&iStack_104,iVar10,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"ringOverwrites");
  FUN_ram_4802aa44(&iStack_104,uVar13,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"expiredSpans");
  FUN_ram_4802aa44(&iStack_104,uVar14,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"supersededRequests");
  FUN_ram_4802aa44(&iStack_104,uVar15,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802a8a8(&iStack_104,"thisRxBatch");
  FUN_ram_4802f236(&DAT_ram_4ff5c464,"supersededScope",&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  if ((cVar9 == '\0') || (iVar2 - iVar1 < 0)) {
    FUN_ram_4802f022(&DAT_ram_4ff5c464,"sourceIntervalValid");
    pcVar21 = "false";
  }
  else {
    FUN_ram_4802f022(&DAT_ram_4ff5c464,"sourceIntervalValid");
    pcVar21 = "true";
  }
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,pcVar21);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"spansOverlap");
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,&DAT_ram_481c3dec);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,&DAT_ram_481c563c);
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,"{\"sourceUs\":");
  FUN_ram_4802aa44(&iStack_104,iVar1,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"checkedAtUs");
  FUN_ram_4802aa44(&iStack_104,iVar2,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"id");
  FUN_ram_4802aa44(&iStack_104,uVar3,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"windowUs");
  FUN_ram_4802aa44(&iStack_104,uVar4,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"bus");
  FUN_ram_4802a928(&iStack_104,uVar5,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"reason");
  FUN_ram_4802a928(&iStack_104,uVar6,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"driverStage");
  FUN_ram_4802a928(&iStack_104,uVar7,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"priority");
  FUN_ram_4802a928(&iStack_104,uVar8,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
  FUN_ram_4802a59e(&iStack_104);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"sourceValid");
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,pcVar17);
  FUN_ram_4802af5a(&DAT_ram_4ff5c464,0x7d);
  FUN_ram_4802f022(&DAT_ram_4ff5c464,"spans");
  FUN_ram_4802af5a(&DAT_ram_4ff5c464,0x5b);
  if (iVar10 != 0) {
    piVar24 = local_f0;
    iVar18 = 0;
    while( true ) {
      FUN_ram_4802af2c(&DAT_ram_4ff5c464,"{\"sequence\":");
      FUN_ram_4802aa44(&iStack_104,piVar24[6],10);
      FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
      FUN_ram_4802a59e(&iStack_104);
      pcVar17 = "unknown";
      if (*(byte *)(piVar24 + 9) < 0xe) {
        pcVar17 = (&PTR_s_preRx_ram_481d1940_ram_48222cc0)[*(byte *)(piVar24 + 9)];
      }
      FUN_ram_4802a8a8(&iStack_104,pcVar17);
      FUN_ram_4802f236(&DAT_ram_4ff5c464,"stage",&iStack_104);
      FUN_ram_4802a59e(&iStack_104);
      iVar20 = piVar24[7];
      FUN_ram_4802f022(&DAT_ram_4ff5c464,"startedUs");
      FUN_ram_4802aa44(&iStack_104,iVar20,10);
      FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
      FUN_ram_4802a59e(&iStack_104);
      iVar22 = piVar24[8];
      FUN_ram_4802f022(&DAT_ram_4ff5c464,"endedUs");
      FUN_ram_4802aa44(&iStack_104,iVar22,10);
      FUN_ram_4802ae48(&DAT_ram_4ff5c464,&iStack_104);
      FUN_ram_4802a59e(&iStack_104);
      if ((cVar9 == '\0') ||
         ((iVar22 - iVar20 | iVar22 - iVar1 | iVar2 - iVar1 | iVar2 - iVar20) < 0)) {
        FUN_ram_4802f022(&DAT_ram_4ff5c464,"overlapsSourceWindow");
        pcVar17 = "false";
      }
      else {
        FUN_ram_4802f022(&DAT_ram_4ff5c464,"overlapsSourceWindow");
        pcVar17 = "true";
      }
      FUN_ram_4802af2c(&DAT_ram_4ff5c464,pcVar17);
      FUN_ram_4802af5a(&DAT_ram_4ff5c464,0x7d);
      iVar18 = iVar18 + 1;
      piVar24 = piVar24 + 4;
      if (iVar18 == iVar10) break;
      FUN_ram_4802af5a(&DAT_ram_4ff5c464,0x2c);
    }
  }
  FUN_ram_4802af2c(&DAT_ram_4ff5c464,&DAT_ram_481c43f4);
  FUN_ram_4802af5a(&DAT_ram_4ff5c464,0x7d);
  return;
}


