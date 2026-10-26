/* Firmware entry: 0x4806bbf8 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_ota_status_4806bbf8(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ***apppuStack_50 [2];
  uint uStack_48;
  byte bStack_41;
  uint auStack_40 [4];
  int iStack_30;
  undefined1 *puStack_2c;
  
  iVar5 = DAT_ram_4ff6de68;
  iVar2 = DAT_ram_4ff6de64;
  iVar8 = DAT_ram_4ff6de60;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(apppuStack_50,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(&iStack_30,"P1.6.4");
  FUN_ram_4802f236(apppuStack_50,"version",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a8a8(&iStack_30,"P1.6.4");
  FUN_ram_4802f236(apppuStack_50,"buildVersion",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a8a8(&iStack_30,"4d97f369e1a32f126b7121a66a70a53fca628dfa");
  FUN_ram_4802f236(apppuStack_50,"sourceCommit",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  cVar1 = DAT_ram_48223e85;
  FUN_ram_4802f022(apppuStack_50,"sourceDirty");
  if (cVar1 == '\0') {
    FUN_ram_4802af2c(apppuStack_50,"false");
  }
  else {
    FUN_ram_4802af2c(apppuStack_50,&DAT_ram_481c3dec);
  }
  puVar6 = (undefined1 *)(iVar5 + 0x18);
  if (iVar5 == 0) {
    puVar6 = &DAT_ram_481df390;
  }
  FUN_ram_4802a8a8(&iStack_30,puVar6);
  FUN_ram_4802f236(apppuStack_50,&DAT_ram_481c7a3c,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802f236(apppuStack_50,"appElfSha256",&DAT_ram_4ff5c840);
  puVar6 = (undefined1 *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    puVar6 = &DAT_ram_481df390;
  }
  FUN_ram_4802a8a8(&iStack_30,puVar6);
  FUN_ram_4802f236(apppuStack_50,"bootSlot",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  puVar6 = (undefined1 *)(iVar8 + 0x18);
  if (iVar8 == 0) {
    puVar6 = &DAT_ram_481df390;
  }
  FUN_ram_4802a8a8(&iStack_30,puVar6);
  FUN_ram_4802f236(apppuStack_50,"targetSlot",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  if ((iVar5 == 0) || (iVar5 != iVar2)) {
    FUN_ram_4802f022(apppuStack_50,"bootMatchesRunning");
    pcVar7 = "false";
  }
  else {
    FUN_ram_4802f022(apppuStack_50,"bootMatchesRunning");
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(apppuStack_50,pcVar7);
  uVar3 = 0;
  if (iVar8 != 0) {
    uVar3 = *(undefined4 *)(iVar8 + 0x10);
  }
  FUN_ram_4802f022(apppuStack_50,"maxSize");
  FUN_ram_4802aa44(&iStack_30,uVar3,10);
  FUN_ram_4802ae48(apppuStack_50,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802f236(apppuStack_50,"token",&DAT_ram_4ff5c54c);
  cVar1 = DAT_ram_4ff6de6c;
  if (DAT_ram_4ff6de6d == '\0') {
    FUN_ram_4802f022(apppuStack_50,"bootValidationKnown");
    if (cVar1 != '\0') {
      FUN_ram_4802af2c(apppuStack_50,&DAT_ram_481c3dec);
      FUN_ram_4802f022(apppuStack_50,"pendingVerify");
      pcVar7 = "true";
      goto LAB_ram_4806bdec;
    }
    FUN_ram_4802af2c(apppuStack_50,"false");
    FUN_ram_4802f022(apppuStack_50,"pendingVerify");
  }
  else if (DAT_ram_4ff6de6c == '\0') {
    FUN_ram_4802f022(apppuStack_50,"bootValidationKnown");
    FUN_ram_4802af2c(apppuStack_50,&DAT_ram_481c3dec);
    FUN_ram_4802f022(apppuStack_50,"pendingVerify");
  }
  else {
    FUN_ram_4802f022(apppuStack_50,"bootValidationKnown");
    FUN_ram_4802af2c(apppuStack_50,&DAT_ram_481c3dec);
    FUN_ram_4802f022(apppuStack_50,"pendingVerify");
  }
  pcVar7 = "false";
LAB_ram_4806bdec:
  FUN_ram_4802af2c(apppuStack_50,pcVar7);
  FUN_ram_48039a3e(apppuStack_50);
  if (DAT_ram_4ff5c548 == 2) {
    pcVar7 = "writing";
  }
  else if (DAT_ram_4ff5c548 < 3) {
    if (DAT_ram_4ff5c548 == 0) {
      pcVar7 = "idle";
    }
    else {
      pcVar7 = "ready";
    }
  }
  else if (DAT_ram_4ff5c548 == 3) {
    pcVar7 = "succeeded";
  }
  else {
    pcVar7 = "failed";
  }
  FUN_ram_4802a8a8(&iStack_30,pcVar7);
  FUN_ram_4802f236(apppuStack_50,"state",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802f236(apppuStack_50,"error",&DAT_ram_4ff5c55c);
  uVar3 = DAT_ram_4ff5c57c;
  FUN_ram_4802f022(apppuStack_50,"bytes");
  FUN_ram_4802a9b8(&iStack_30,uVar3,10);
  FUN_ram_4802ae48(apppuStack_50,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4803840a(apppuStack_50);
  FUN_ram_4802af5a(apppuStack_50,0x7d);
  FUN_ram_4802a8a8(auStack_40,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_30,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_40,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a59e(auStack_40);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar8 = DAT_ram_4ff5cbdc;
  if ((char)bStack_41 < '\0') {
    apppuStack_50[0] = apppuStack_50;
    auStack_40[0] = bStack_41 & 0x7f;
  }
  else {
    auStack_40[0] = 0;
    if ((undefined4 ****)apppuStack_50[0] != (undefined4 ****)0x0) {
      auStack_40[0] = uStack_48;
    }
  }
  uStack_58 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  pppuStack_54 = apppuStack_50[0];
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_58,&pppuStack_54,auStack_40);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar4 = auStack_40[0];
    if (auStack_40[0] == 0) {
      uVar4 = 1;
    }
    iVar5 = FUN_ram_4ff206d8(uVar4,0x404);
    iVar9 = iVar2 + iVar8 * 0x1d40;
    *(int *)(iVar9 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar9 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar8 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar5,pppuStack_54,auStack_40[0]);
        iVar5 = *(int *)(iVar9 + 0x1cdc);
      }
      iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar8 + 0x44c) != '\0') && (*(char *)(iVar8 + 0x44c) != '\x06')) {
        *(int *)(iVar8 + 0x1ce0) = iVar5;
        *(uint *)(iVar8 + 0x1ce4) = auStack_40[0];
        *(undefined4 *)(iVar8 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        iStack_30 = iVar8;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_58,"application/json",iVar8,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppuStack_50);
  return;
}


