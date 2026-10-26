/* Firmware entry: 0x4806cbde */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_coredump_info_4806cbde(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_88;
  undefined4 ***pppuStack_84;
  undefined4 ***apppuStack_80 [2];
  uint uStack_78;
  byte bStack_71;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  uint auStack_50 [4];
  int iStack_40;
  undefined1 *puStack_3c;
  
  iVar6 = DAT_ram_4ff47e94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((DAT_ram_4ff47e9c == 0) && (DAT_ram_4ff6ddf4 != 0)) && (DAT_ram_4ff6ddfc != 0)) {
    FUN_ram_4802a8a8(apppuStack_80,&DAT_ram_481c4164);
    FUN_ram_4802f022(apppuStack_80,"available");
    pcVar5 = "true";
  }
  else {
    FUN_ram_4802a8a8(apppuStack_80,&DAT_ram_481c4164);
    FUN_ram_4802f022(apppuStack_80,"available");
    pcVar5 = "false";
  }
  FUN_ram_4802af2c(apppuStack_80,pcVar5);
  uVar2 = DAT_ram_4ff6ddf8;
  FUN_ram_4802f022(apppuStack_80,"address");
  FUN_ram_4802a9b8(&iStack_40,uVar2,10);
  FUN_ram_4802ae48(apppuStack_80,&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  iVar8 = DAT_ram_4ff6ddf4;
  FUN_ram_4802f022(apppuStack_80,"size");
  FUN_ram_4802a9b8(&iStack_40,iVar8,10);
  FUN_ram_4802ae48(apppuStack_80,&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,"P1.6.4");
  FUN_ram_4802f236(apppuStack_80,"firmwareVersion",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802f236(apppuStack_80,"appElfSha256",&DAT_ram_4ff5c840);
  FUN_ram_4802f236(apppuStack_80,"bootSessionId",&DAT_ram_4ff5c830);
  uVar2 = FUN_ram_480018de(DAT_ram_4ff47e9c);
  FUN_ram_4802a8a8(&iStack_40,uVar2);
  FUN_ram_4802f236(apppuStack_80,"result",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802f022(apppuStack_80,"downloadRequiresOtaToken");
  FUN_ram_4802af2c(apppuStack_80,&DAT_ram_481c3dec);
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_4ff5c7ec);
  FUN_ram_4802f236(apppuStack_80,"sha256",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  uVar2 = FUN_ram_480018de(DAT_ram_4ff47e98);
  FUN_ram_4802a8a8(&iStack_40,uVar2);
  FUN_ram_4802f236(apppuStack_80,"imageCheckResult",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802f022(apppuStack_80,"summaryAvailable");
  pcVar5 = "false";
  if (iVar6 == 0) {
    pcVar5 = "true";
  }
  FUN_ram_4802af2c(apppuStack_80,pcVar5);
  FUN_ram_4802a8a8(&iStack_40,DAT_ram_4ff47e8c);
  FUN_ram_4802f236(apppuStack_80,"crashIdentitySource",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  uVar2 = FUN_ram_480018de(DAT_ram_4ff47e94);
  FUN_ram_4802a8a8(&iStack_40,uVar2);
  FUN_ram_4802f236(apppuStack_80,"summaryResult",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_4ff5c724);
  FUN_ram_4802f236(apppuStack_80,"panicReason",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  uVar2 = FUN_ram_480018de(DAT_ram_4ff47e90);
  FUN_ram_4802a8a8(&iStack_40,uVar2);
  FUN_ram_4802f236(apppuStack_80,"panicReasonResult",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_4ff5c6e0);
  FUN_ram_4802f236(apppuStack_80,"crashedAppElfSha256",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_4ff5c69c);
  FUN_ram_4802f236(apppuStack_80,"crashedAppElfSha256Prefix",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_4ff5c688);
  FUN_ram_4802f236(apppuStack_80,"crashedTask",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  if (iVar6 == 0) {
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x215c);
    FUN_ram_4802f022(apppuStack_80,"exceptionPc");
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(apppuStack_80,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a8a8(auStack_70,&DAT_ram_481c4164);
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x25b4);
    FUN_ram_4802f022(auStack_70,"mcause");
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x25b8);
    FUN_ram_4802f022(auStack_70,"mtval");
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x25bc);
    FUN_ram_4802f022(auStack_70,"ra");
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x25c0);
    FUN_ram_4802f022(auStack_70,&DAT_ram_481b8870);
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x25ac);
    FUN_ram_4802f022(auStack_70,"mstatus");
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    uVar2 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x25b0);
  }
  else {
    FUN_ram_4802f022(apppuStack_80,"exceptionPc");
    FUN_ram_4802aa44(&iStack_40,0,10);
    FUN_ram_4802ae48(apppuStack_80,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a8a8(auStack_70,&DAT_ram_481c4164);
    FUN_ram_4802f022(auStack_70,"mcause");
    FUN_ram_4802aa44(&iStack_40,0,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802f022(auStack_70,"mtval");
    FUN_ram_4802aa44(&iStack_40,0,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802f022(auStack_70,"ra");
    FUN_ram_4802aa44(&iStack_40,0,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802f022(auStack_70,&DAT_ram_481b8870);
    FUN_ram_4802aa44(&iStack_40,0,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802f022(auStack_70,"mstatus");
    FUN_ram_4802aa44(&iStack_40,0,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    uVar2 = 0;
  }
  FUN_ram_4802f278(auStack_70,"mtvec",uVar2);
  FUN_ram_4802f022(auStack_70,"a");
  FUN_ram_4802af5a(auStack_70,0x5b);
  iVar8 = 0;
  while( true ) {
    uVar2 = 0;
    if (iVar6 == 0) {
      uVar2 = *(undefined4 *)((iVar8 + 0x96c) * 4 + DAT_ram_4ff6de38 + 0x14);
    }
    FUN_ram_4802aa44(&iStack_40,uVar2,10);
    FUN_ram_4802ae48(auStack_70,&iStack_40);
    FUN_ram_4802a59e(&iStack_40);
    iVar8 = iVar8 + 1;
    if (iVar8 == 8) break;
    FUN_ram_4802af5a(auStack_70,0x2c);
  }
  FUN_ram_4802af2c(auStack_70,&DAT_ram_481c43f4);
  FUN_ram_4802f022(apppuStack_80,"registers");
  FUN_ram_4802ae48(apppuStack_80,auStack_70);
  FUN_ram_4802a8a8(auStack_60,&DAT_ram_481df390);
  iVar8 = FUN_ram_48035faa();
  if (iVar6 == 0) {
    if (iVar8 != 0) {
      FUN_ram_4812123e(&iStack_40,DAT_ram_4ff6de38 + 0x2160,
                       *(undefined4 *)(DAT_ram_4ff6de38 + 0x2560));
      FUN_ram_4802ad2c(auStack_60,&iStack_40);
      FUN_ram_4802a59e(&iStack_40);
      FUN_ram_4802f236(apppuStack_80,"stackDumpBase64",auStack_60);
      FUN_ram_4802f022(apppuStack_80,"memorySummaryAuthorized");
      pcVar5 = "true";
      goto LAB_ram_4806d096;
    }
    FUN_ram_4802f236(apppuStack_80,"stackDumpBase64",auStack_60);
    FUN_ram_4802f022(apppuStack_80,"memorySummaryAuthorized");
  }
  else {
    FUN_ram_4802f236(apppuStack_80,"stackDumpBase64",auStack_60);
    FUN_ram_4802f022(apppuStack_80,"memorySummaryAuthorized");
    if (iVar8 != 0) {
      pcVar5 = "true";
      goto LAB_ram_4806d096;
    }
  }
  pcVar5 = "false";
LAB_ram_4806d096:
  FUN_ram_4802af2c(apppuStack_80,pcVar5);
  FUN_ram_4802a8a8(&iStack_40,"latest_successful_flash_coredump");
  FUN_ram_4802f236(apppuStack_80,"retention",&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802f022(apppuStack_80,"originBootSessionKnown");
  FUN_ram_4802af2c(apppuStack_80,"false");
  FUN_ram_4802af5a(apppuStack_80,0x7d);
  FUN_ram_4802a8a8(auStack_50,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_40,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_50,&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a59e(auStack_50);
  iVar8 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((char)bStack_71 < '\0') {
    auStack_50[0] = bStack_71 & 0x7f;
    pppuStack_84 = apppuStack_80;
  }
  else {
    auStack_50[0] = 0;
    pppuStack_84 = apppuStack_80[0];
    if ((undefined4 ****)apppuStack_80[0] != (undefined4 ****)0x0) {
      auStack_50[0] = uStack_78;
    }
  }
  uStack_88 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_88,&pppuStack_84,auStack_50);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar3 = auStack_50[0];
    if (auStack_50[0] == 0) {
      uVar3 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(uVar3,0x404);
    iVar7 = iVar8 + iVar6 * 0x1d40;
    *(int *)(iVar7 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar7 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar8 + iVar6 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_50[0] != 0) {
        FUN_ram_4ff45158(iVar4,pppuStack_84,auStack_50[0]);
        iVar4 = *(int *)(iVar7 + 0x1cdc);
      }
      iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar6 + 0x44c) != '\0') && (*(char *)(iVar6 + 0x44c) != '\x06')) {
        *(int *)(iVar6 + 0x1ce0) = iVar4;
        *(uint *)(iVar6 + 0x1ce4) = auStack_50[0];
        *(undefined4 *)(iVar6 + 0x1ce8) = 0;
        puStack_3c = &LAB_ram_4802d3f2;
        iStack_40 = iVar6;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_88,"application/json",iVar6,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(auStack_60);
  FUN_ram_4802a59e(auStack_70);
  FUN_ram_4802a59e(apppuStack_80);
  return;
}


