/* Firmware entry: 0x48066f4c */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_wifi_status_48066f4c(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uStack_74;
  undefined4 ***pppuStack_70;
  undefined4 ***apppuStack_6c [2];
  uint uStack_64;
  byte bStack_5d;
  uint auStack_5c [4];
  int iStack_4c;
  undefined1 *puStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48025ba6();
  iVar4 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
  FUN_ram_4802a8a8(apppuStack_6c,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(&iStack_4c,DAT_ram_4ff5c5f0);
  FUN_ram_4802f236(apppuStack_6c,"configurationState",&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  uVar5 = DAT_ram_4ff5c5ec;
  FUN_ram_4802f022(apppuStack_6c,"configurationGeneration");
  FUN_ram_4802aa44(&iStack_4c,uVar5,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  cVar1 = DAT_ram_4ff5c5f4;
  FUN_ram_4802f022(apppuStack_6c,"enabled");
  if (cVar1 == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(apppuStack_6c,pcVar7);
  FUN_ram_4802f022(apppuStack_6c,"connected");
  if (iVar4 == 3) {
    FUN_ram_4802af2c(apppuStack_6c,&DAT_ram_481c3dec);
    FUN_ram_4802f022(apppuStack_6c,"connecting");
    FUN_ram_4802af2c(apppuStack_6c,"false");
    FUN_ram_4802f236(apppuStack_6c,"savedSsid",&DAT_ram_4ff5c624);
    FUN_ram_48124a64(&iStack_4c,&DAT_ram_4ff6c118);
    FUN_ram_4802f236(apppuStack_6c,"connectedSsid",&iStack_4c);
    FUN_ram_4802a59e(&iStack_4c);
    FUN_ram_48124a4e(&iStack_4c,&DAT_ram_4ff6c118);
    FUN_ram_48121b46(auStack_5c,&iStack_4c,0);
    FUN_ram_4802f236(apppuStack_6c,"ip",auStack_5c);
    FUN_ram_4802a59e(auStack_5c);
    uVar5 = thunk_FUN_ram_48125c10(&DAT_ram_4ff6c118);
  }
  else {
    FUN_ram_4802af2c(apppuStack_6c,"false");
    cVar1 = DAT_ram_4ff5c5f9;
    if (DAT_ram_4ff5c5f4 == '\0') {
      FUN_ram_4802f022(apppuStack_6c,"connecting");
      pcVar7 = "false";
    }
    else {
      FUN_ram_4802f022(apppuStack_6c,"connecting");
      pcVar7 = "true";
      if (cVar1 == '\0') {
        pcVar7 = "false";
      }
    }
    FUN_ram_4802af2c(apppuStack_6c,pcVar7);
    FUN_ram_4802f236(apppuStack_6c,"savedSsid",&DAT_ram_4ff5c624);
    FUN_ram_4802a8a8(&iStack_4c,&DAT_ram_481df390);
    FUN_ram_4802f236(apppuStack_6c,"connectedSsid",&iStack_4c);
    FUN_ram_4802a59e(&iStack_4c);
    FUN_ram_4802a8a8(auStack_5c,&DAT_ram_481df390);
    FUN_ram_4802f236(apppuStack_6c,"ip",auStack_5c);
    FUN_ram_4802a59e(auStack_5c);
    uVar5 = 0;
  }
  FUN_ram_4802f022(apppuStack_6c,&DAT_ram_481be36c);
  FUN_ram_4802a970(&iStack_4c,uVar5,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  cVar1 = DAT_ram_4ff5c5f7;
  FUN_ram_4802f022(apppuStack_6c,"apRunning");
  pcVar7 = "false";
  if (cVar1 != '\0') {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(apppuStack_6c,pcVar7);
  pppuStack_70 = (undefined4 ***)0x0;
  iVar4 = thunk_FUN_ram_4800f5ac(&pppuStack_70);
  if (iVar4 == 0) {
    uVar2 = (uint)pppuStack_70 & 0xff;
  }
  else {
    if (iVar4 != 0x3001) {
      FUN_ram_4802f022(apppuStack_6c,"wifiMode");
      FUN_ram_4802af2c(apppuStack_6c,&DAT_ram_481c6654);
      FUN_ram_4802f022(apppuStack_6c,"apModeEnabled");
      pcVar7 = "null";
      goto LAB_ram_48067130;
    }
    pppuStack_70 = (undefined4 ***)0x0;
    uVar2 = 0;
  }
  FUN_ram_4802f07e(apppuStack_6c,"wifiMode",uVar2);
  FUN_ram_4802f022(apppuStack_6c,"apModeEnabled");
  pcVar7 = "false";
  if (((uint)pppuStack_70 & 2) != 0) {
    pcVar7 = "true";
  }
LAB_ram_48067130:
  FUN_ram_4802af2c(apppuStack_6c,pcVar7);
  FUN_ram_4802a8a8(&iStack_4c,"Albert-P4-FSD");
  FUN_ram_4802f236(apppuStack_6c,"apSsid",&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  cVar1 = DAT_ram_4ff5c5f8;
  FUN_ram_4802f022(apppuStack_6c,"apRestartPending");
  pcVar7 = "false";
  if (cVar1 != '\0') {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(apppuStack_6c,pcVar7);
  cVar1 = DAT_ram_4ff5c5f5;
  FUN_ram_4802f022(apppuStack_6c,"apAutoOffEnabled");
  pcVar7 = "false";
  if (cVar1 != '\0') {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(apppuStack_6c,pcVar7);
  uVar2 = 0;
  if (DAT_ram_4ff5c614 != 0) {
    uVar2 = 0;
    if (0 < DAT_ram_4ff5c614 - iVar3) {
      uVar2 = (uint)(DAT_ram_4ff5c614 - iVar3) / 1000;
    }
  }
  FUN_ram_4802f022(apppuStack_6c,"apDisableInSec");
  FUN_ram_4802aa44(&iStack_4c,uVar2,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  if (DAT_ram_4ff5c5f6 == '\0') {
    pcVar7 = "idle";
  }
  else {
    pcVar7 = "scanning";
  }
  FUN_ram_4802a8a8(&iStack_4c,pcVar7);
  FUN_ram_4802f236(apppuStack_6c,"scanState",&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  FUN_ram_4802f236(apppuStack_6c,"error",&DAT_ram_4ff5c664);
  uVar2 = 0;
  if ((DAT_ram_4ff5c604 != '\0') && (iVar3 - DAT_ram_4ff5c600 < 0)) {
    uVar2 = (uint)((DAT_ram_4ff5c600 + 999) - iVar3) / 1000;
  }
  FUN_ram_4802f022(apppuStack_6c,"retryInSec");
  FUN_ram_4802aa44(&iStack_4c,uVar2,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  cVar1 = DAT_ram_4ff5c610._1_1_;
  FUN_ram_4802f022(apppuStack_6c,"retryDeferredForAp");
  pcVar7 = "false";
  if (cVar1 != '\0') {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(apppuStack_6c,pcVar7);
  uVar5 = DAT_ram_4ff6dd8c;
  FUN_ram_4802f022(apppuStack_6c,"apClients");
  FUN_ram_4802aa44(&iStack_4c,uVar5,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  uVar5 = DAT_ram_4ff5c608;
  FUN_ram_4802f022(apppuStack_6c,"connectAttempts");
  FUN_ram_4802aa44(&iStack_4c,uVar5,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  uVar5 = DAT_ram_4ff6dd88;
  fence();
  FUN_ram_4802f022(apppuStack_6c,"disconnectEvents");
  FUN_ram_4802aa44(&iStack_4c,uVar5,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  uVar5 = DAT_ram_4ff6dd84;
  FUN_ram_4802f022(apppuStack_6c,"lastDisconnectReason");
  FUN_ram_4802aa44(&iStack_4c,uVar5,10);
  FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
  FUN_ram_4802a59e(&iStack_4c);
  FUN_ram_4802f022(apppuStack_6c,"networks");
  FUN_ram_4802af5a(apppuStack_6c,0x5b);
  if (0 < DAT_ram_4ff5c674) {
    uVar2 = 0;
    while( true ) {
      FUN_ram_4802af2c(apppuStack_6c,"{\"ssid\":\"");
      uVar9 = uVar2 & 0xff;
      FUN_ram_48124918(auStack_5c,&DAT_ram_4ff6c118,uVar9);
      FUN_ram_4802f152(&iStack_4c,auStack_5c);
      FUN_ram_4802ae48(apppuStack_6c,&iStack_4c);
      FUN_ram_4802a59e(&iStack_4c);
      FUN_ram_4802a59e(auStack_5c);
      FUN_ram_4802a8a8(&iStack_4c,"\",\"rssi\":");
      uVar5 = FUN_ram_48124990(&DAT_ram_4ff6c118,uVar9);
      FUN_ram_4802aa00(auStack_5c,uVar5,10);
      uVar5 = FUN_ram_4802afda(&iStack_4c,auStack_5c);
      FUN_ram_4802ae48(apppuStack_6c,uVar5);
      FUN_ram_4802a59e(auStack_5c);
      FUN_ram_4802a59e(&iStack_4c);
      FUN_ram_4802af2c(apppuStack_6c,&DAT_ram_481c67bc);
      iVar3 = FUN_ram_48124968(&DAT_ram_4ff6c118,uVar9);
      pcVar7 = "true";
      if (iVar3 == 0) {
        pcVar7 = "false";
      }
      FUN_ram_4802af2c(apppuStack_6c,pcVar7);
      FUN_ram_4802af5a(apppuStack_6c,0x7d);
      uVar2 = uVar2 + 1;
      if (DAT_ram_4ff5c674 <= (int)uVar2) break;
      FUN_ram_4802af5a(apppuStack_6c,0x2c);
    }
  }
  FUN_ram_4802af2c(apppuStack_6c,&DAT_ram_481c43f4);
  iVar4 = DAT_ram_4ff5cbe8;
  iVar3 = DAT_ram_4ff5cbdc;
  if ((char)bStack_5d < '\0') {
    apppuStack_6c[0] = apppuStack_6c;
    auStack_5c[0] = bStack_5d & 0x7f;
  }
  else {
    auStack_5c[0] = 0;
    if ((undefined4 ****)apppuStack_6c[0] != (undefined4 ****)0x0) {
      auStack_5c[0] = uStack_64;
    }
  }
  uStack_74 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  pppuStack_70 = apppuStack_6c[0];
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_74,&pppuStack_70,auStack_5c);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar2 = auStack_5c[0];
    if (auStack_5c[0] == 0) {
      uVar2 = 1;
    }
    iVar6 = FUN_ram_4ff206d8(uVar2,0x404);
    iVar8 = iVar4 + iVar3 * 0x1d40;
    *(int *)(iVar8 + 0x1cdc) = iVar6;
    if (iVar6 == 0) {
      if (*(char *)(iVar8 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar4 + iVar3 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_5c[0] != 0) {
        FUN_ram_4ff45158(iVar6,pppuStack_70,auStack_5c[0]);
        iVar6 = *(int *)(iVar8 + 0x1cdc);
      }
      iVar3 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar3 + 0x44c) != '\0') && (*(char *)(iVar3 + 0x44c) != '\x06')) {
        *(int *)(iVar3 + 0x1ce0) = iVar6;
        *(uint *)(iVar3 + 0x1ce4) = auStack_5c[0];
        *(undefined4 *)(iVar3 + 0x1ce8) = 0;
        puStack_48 = &LAB_ram_4802d3f2;
        iStack_4c = iVar3;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_74,"application/json",iVar3,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppuStack_6c);
  return;
}


