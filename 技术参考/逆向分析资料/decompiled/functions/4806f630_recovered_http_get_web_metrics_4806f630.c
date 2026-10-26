/* Firmware entry: 0x4806f630 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_web_metrics_4806f630(void)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  uint auStack_60 [4];
  int iStack_50;
  undefined1 *puStack_4c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if ((DAT_ram_4ff6dce8 == '\0') && (iVar6 = FUN_ram_480069b2(&DAT_ram_4ff6dce8), iVar6 != 0)) {
    FUN_ram_4802a8a8(&DAT_ram_4ff5c3f0,&DAT_ram_481df390);
    FUN_ram_481974a0(FUN_ram_4802a59e,&DAT_ram_4ff5c3f0,&DAT_ram_4ff6daac);
    FUN_ram_48006bca(&DAT_ram_4ff6dce8);
  }
  if (DAT_ram_4ff6dce0 == '\0') {
    iVar6 = FUN_ram_4802a79a(&DAT_ram_4ff5c3f0,0x4000);
    DAT_ram_4ff6dce0 = (char)iVar6;
    if (iVar6 == 0) {
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                       "{\"ok\":false,\"error\":\"web_metrics_buffer_unavailable\"}",0x35);
      return;
    }
  }
  FUN_ram_4802b80a(&DAT_ram_4ff5c3f0,0);
  FUN_ram_4802ad46(&DAT_ram_4ff5c3f0,&DAT_ram_481c4164);
  FUN_ram_4802f022(&DAT_ram_4ff5c3f0,"schemaVersion");
  FUN_ram_4802a970(&iStack_50,1,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c3f0,&iStack_50);
  FUN_ram_4802a59e(&iStack_50);
  uVar5 = FUN_ram_48025ba6();
  FUN_ram_4802f278(&DAT_ram_4ff5c3f0,"capturedAtMs",uVar5);
  FUN_ram_4802f2aa(&DAT_ram_4ff5c3f0,"historyCapacity",0x18);
  FUN_ram_4802f2aa(&DAT_ram_4ff5c3f0,"historySize",*(undefined4 *)(DAT_ram_4ff6de38 + 0x2140));
  FUN_ram_4802f278(&DAT_ram_4ff5c3f0,"lastSequence",*(undefined4 *)(DAT_ram_4ff6de38 + 0x2144));
  FUN_ram_4802f278(&DAT_ram_4ff5c3f0,"webLastHandleUs",DAT_ram_4ff6dd94);
  FUN_ram_4802f278(&DAT_ram_4ff5c3f0,"webMaxHandleUs",DAT_ram_4ff6dd90);
  uVar5 = FUN_ram_480295a2(&DAT_ram_4ff6dc18);
  FUN_ram_4802f278(&DAT_ram_4ff5c3f0,"freeHeap",uVar5);
  cVar2 = DAT_ram_4ff5c5f4;
  FUN_ram_4802f022(&DAT_ram_4ff5c3f0,"externalWifiEnabled");
  if (cVar2 == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(&DAT_ram_4ff5c3f0,pcVar7);
  iVar6 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
  FUN_ram_4802f022(&DAT_ram_4ff5c3f0,"externalWifiConnected");
  if (iVar6 == 3) {
    pcVar7 = "true";
  }
  else {
    pcVar7 = "false";
  }
  FUN_ram_4802af2c(&DAT_ram_4ff5c3f0,pcVar7);
  cVar2 = DAT_ram_4ff5c5f7;
  FUN_ram_4802f022(&DAT_ram_4ff5c3f0,"apRunning");
  if (cVar2 == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(&DAT_ram_4ff5c3f0,pcVar7);
  iVar6 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
  uVar5 = 0;
  if (iVar6 == 3) {
    uVar5 = thunk_FUN_ram_48125c10(&DAT_ram_4ff6c118);
  }
  FUN_ram_4802f022(&DAT_ram_4ff5c3f0,"wifiRssi");
  FUN_ram_4802a970(&iStack_50,uVar5,10);
  FUN_ram_4802ae48(&DAT_ram_4ff5c3f0,&iStack_50);
  FUN_ram_4802a59e(&iStack_50);
  FUN_ram_4802f022(&DAT_ram_4ff5c3f0,"records");
  FUN_ram_4802af5a(&DAT_ram_4ff5c3f0,0x5b);
  uVar12 = 0;
  uVar8 = *(uint *)(DAT_ram_4ff6de38 + 0x2140);
  bVar4 = true;
  if (uVar8 != 0) {
    do {
      while( true ) {
        iVar6 = DAT_ram_4ff6de38;
        uVar12 = uVar12 + 1;
        iVar9 = (uVar12 - uVar8) + *(int *)(DAT_ram_4ff6de38 + 0x2144);
        uVar8 = (iVar9 - 1U) % 0x18;
        iVar11 = uVar8 * 0x2c + DAT_ram_4ff6de38;
        if (iVar9 == *(int *)(iVar11 + 0x1d20)) break;
LAB_ram_4806f920:
        uVar8 = *(uint *)(DAT_ram_4ff6de38 + 0x2140);
        if (uVar8 <= uVar12) goto LAB_ram_4806fc68;
      }
      FUN_ram_4802a8a8(auStack_60,&DAT_ram_481df390);
      iVar9 = FUN_ram_4802a79a(auStack_60,0x180);
      if (iVar9 != 0) {
        FUN_ram_4802ad46(auStack_60,&DAT_ram_481c4164);
        uVar5 = *(undefined4 *)(iVar11 + 0x1d20);
        FUN_ram_4802f022(auStack_60,"sequence");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar5 = *(undefined4 *)(iVar11 + 0x1d24);
        FUN_ram_4802f022(auStack_60,"startedAtMs");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        bVar1 = *(byte *)(iVar11 + 0x1d28);
        if (bVar1 == 4) {
          pcVar7 = "system_status";
        }
        else if (bVar1 < 5) {
          if (bVar1 == 2) {
            pcVar7 = "status";
          }
          else if (bVar1 == 3) {
            pcVar7 = "runtime_status";
          }
          else {
            if (bVar1 != 1) goto LAB_ram_4806fde6;
            pcVar7 = "status_fast";
          }
        }
        else if (bVar1 == 5) {
          pcVar7 = "can_diag";
        }
        else if (bVar1 == 6) {
          pcVar7 = "can_hot_ids";
        }
        else {
LAB_ram_4806fde6:
          pcVar7 = "unknown";
        }
        FUN_ram_4802a8a8(&iStack_50,pcVar7);
        FUN_ram_4802f236(auStack_60,"endpoint",&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        if (*(char *)(iVar11 + 0x1d29) == '\x01') {
          pcVar7 = "full_body";
        }
        else {
          pcVar7 = "standard";
        }
        FUN_ram_4802a8a8(&iStack_50,pcVar7);
        FUN_ram_4802f236(auStack_60,"writer",&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar3 = *(undefined2 *)(iVar11 + 0x1d2a);
        FUN_ram_4802f022(auStack_60,"statusCode");
        FUN_ram_4802a970(&iStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar5 = *(undefined4 *)(iVar11 + 0x1d2c);
        FUN_ram_4802f022(auStack_60,"buildUs");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        iVar9 = iVar6 + 0x2000 + uVar8 * 0x2c;
        uVar5 = *(undefined4 *)(iVar9 + -0x2d0);
        FUN_ram_4802f022(auStack_60,"sendUs");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar5 = *(undefined4 *)(iVar9 + -0x2cc);
        FUN_ram_4802f022(auStack_60,"totalUs");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar5 = *(undefined4 *)(iVar9 + -0x2c8);
        FUN_ram_4802f022(auStack_60,"bodyBytes");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar5 = *(undefined4 *)(iVar9 + -0x2c4);
        FUN_ram_4802f022(auStack_60,"bytesWritten");
        FUN_ram_4802aa44(&iStack_50,uVar5,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar3 = *(undefined2 *)(iVar9 + -0x2c0);
        FUN_ram_4802f022(auStack_60,"writeCalls");
        FUN_ram_4802a970(&iStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar3 = *(undefined2 *)(iVar9 + -0x2be);
        FUN_ram_4802f022(auStack_60,"zeroWriteCalls");
        FUN_ram_4802a970(&iStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        uVar3 = *(undefined2 *)(iVar9 + -700);
        FUN_ram_4802f022(auStack_60,"partialWriteCalls");
        FUN_ram_4802a970(&iStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,&iStack_50);
        FUN_ram_4802a59e(&iStack_50);
        cVar2 = *(char *)(iVar9 + -0x2ba);
        FUN_ram_4802f022(auStack_60,"writeObserved");
        if (cVar2 == '\0') {
          pcVar7 = "false";
        }
        else {
          pcVar7 = "true";
        }
        FUN_ram_4802af2c(auStack_60,pcVar7);
        cVar2 = *(char *)(iVar6 + uVar8 * 0x2c + 0x1d47);
        FUN_ram_4802f022(auStack_60,"complete");
        if (cVar2 == '\0') {
          pcVar7 = "false";
        }
        else {
          pcVar7 = "true";
        }
        FUN_ram_4802af2c(auStack_60,pcVar7);
        cVar2 = *(char *)(iVar6 + uVar8 * 0x2c + 0x1d48);
        FUN_ram_4802f022(auStack_60,"timedOut");
        if (cVar2 == '\0') {
          pcVar7 = "false";
        }
        else {
          pcVar7 = "true";
        }
        FUN_ram_4802af2c(auStack_60,pcVar7);
        cVar2 = *(char *)(iVar6 + uVar8 * 0x2c + 0x1d49);
        FUN_ram_4802f022(auStack_60,"disconnected");
        if (cVar2 == '\0') {
          FUN_ram_4802af2c(auStack_60,"false");
          FUN_ram_4802af5a(auStack_60,0x7d);
        }
        else {
          FUN_ram_4802af2c(auStack_60,&DAT_ram_481c3dec);
          FUN_ram_4802af5a(auStack_60,0x7d);
        }
        if (!bVar4) {
          FUN_ram_4802af5a(&DAT_ram_4ff5c3f0,0x2c);
        }
        FUN_ram_4802ae48(&DAT_ram_4ff5c3f0,auStack_60);
        FUN_ram_4802a59e(auStack_60);
        bVar4 = false;
        goto LAB_ram_4806f920;
      }
      FUN_ram_4802a59e(auStack_60);
      uVar8 = *(uint *)(DAT_ram_4ff6de38 + 0x2140);
    } while (uVar12 < uVar8);
  }
LAB_ram_4806fc68:
  FUN_ram_4802af2c(&DAT_ram_4ff5c3f0,&DAT_ram_481c43f4);
  FUN_ram_4802a8a8(auStack_60,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_50,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_60,&iStack_50);
  FUN_ram_4802a59e(&iStack_50);
  FUN_ram_4802a59e(auStack_60);
  iVar9 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((char)DAT_ram_4ff5c3ff < '\0') {
    puStack_64 = &DAT_ram_4ff5c3f0;
    auStack_60[0] = DAT_ram_4ff5c3ff & 0x7f;
  }
  else {
    auStack_60[0] = 0;
    puStack_64 = DAT_ram_4ff5c3f0;
    if (DAT_ram_4ff5c3f0 != (undefined4 *)0x0) {
      auStack_60[0] = DAT_ram_4ff5c3f8;
    }
  }
  uStack_68 = 200;
  cVar2 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar2 != '\0') && (cVar2 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_68,&puStack_64,auStack_60);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar8 = auStack_60[0];
    if (auStack_60[0] == 0) {
      uVar8 = 1;
    }
    iVar11 = FUN_ram_4ff206d8(uVar8,0x404);
    iVar10 = iVar9 + iVar6 * 0x1d40;
    *(int *)(iVar10 + 0x1cdc) = iVar11;
    if (iVar11 == 0) {
      if (*(char *)(iVar10 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar9 + iVar6 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_60[0] != 0) {
        FUN_ram_4ff45158(iVar11,puStack_64,auStack_60[0]);
        iVar11 = *(int *)(iVar10 + 0x1cdc);
      }
      iStack_50 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_50 + 0x44c) != '\0') && (*(char *)(iStack_50 + 0x44c) != '\x06')) {
        *(int *)(iStack_50 + 0x1ce0) = iVar11;
        *(uint *)(iStack_50 + 0x1ce4) = auStack_60[0];
        *(undefined4 *)(iStack_50 + 0x1ce8) = 0;
        puStack_4c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_68,"application/json",iStack_50,&LAB_ram_4802d3f2)
        ;
      }
    }
  }
  return;
}


