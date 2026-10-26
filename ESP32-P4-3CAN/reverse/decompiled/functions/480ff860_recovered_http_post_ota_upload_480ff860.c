/* Firmware entry: 0x480ff860 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_ota_upload_480ff860(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_54;
  char *apcStack_50 [4];
  int aiStack_40 [4];
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48035faa();
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  if (iVar3 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x193,"application/json","{\"ok\":false,\"error\":\"token\"}"
                     ,0x1c);
    return;
  }
  if (((DAT_ram_4ff5c5c0 == '\0') || (DAT_ram_4ff5c5cb == '\0')) ||
     (DAT_ram_4ff5c5d4 != DAT_ram_4ff5c5cc)) {
    apcStack_50[0] = "{\"ok\":false,\"error\":\"upload_not_ready\"}";
    uStack_54 = 0x199;
    aiStack_40[0] = 0x27;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 == '\0') || (cVar1 == '\x06')) {
      return;
    }
    iVar3 = 0x27;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_54,apcStack_50,aiStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar3 = aiStack_40[0];
      if (aiStack_40[0] == 0) {
        iVar3 = 1;
      }
    }
    iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
    iVar6 = iVar2 + iVar4 * 0x1d40;
    *(int *)(iVar6 + 0x1cdc) = iVar3;
    if (iVar3 == 0) {
      if (*(char *)(iVar6 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
        return;
      }
    }
    else {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar3,apcStack_50[0],aiStack_40[0]);
        iVar3 = *(int *)(iVar6 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_30 + 0x44c) != '\0') && (*(char *)(iStack_30 + 0x44c) != '\x06')) {
        *(int *)(iStack_30 + 0x1ce0) = iVar3;
        *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
        *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_54,"application/json",iStack_30,&LAB_ram_4802d3f2)
        ;
        return;
      }
    }
    return;
  }
  if (DAT_ram_4ff5c548 == '\x03') {
    FUN_ram_4802a8a8(&iStack_30,"{\"ok\":true,\"bytes\":");
    FUN_ram_4802af76(&iStack_30,DAT_ram_4ff5c57c);
    FUN_ram_4802af2c(&iStack_30,",\"rebooting\":true}");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",&iStack_30);
    iVar4 = FUN_ram_48025ba6();
    DAT_ram_4ff6de00 = iVar4 + 500;
    DAT_ram_4ff6de04 = 1;
    FUN_ram_4802a59e(&iStack_30);
    return;
  }
  if (DAT_ram_4ff5c548 == '\x04') {
LAB_ram_480ff8a6:
    iVar4 = FUN_ram_480fed16(1);
  }
  else {
    FUN_ram_4802a8a8(&iStack_30,"upload_incomplete");
    FUN_ram_4802f888(&iStack_30);
    FUN_ram_4802a59e(&iStack_30);
    iVar4 = 0;
    if (DAT_ram_4ff5c5c0 != '\0') goto LAB_ram_480ff8a6;
  }
  FUN_ram_4802a8a8(apcStack_50,"{\"ok\":false,\"error\":\"");
  if ((char)DAT_ram_4ff5c56b < '\0') {
    uVar5 = DAT_ram_4ff5c56b & 0x7f;
LAB_ram_480ff8ca:
    if (uVar5 != 0) {
      FUN_ram_4802a8ec(aiStack_40,&DAT_ram_4ff5c55c);
      goto LAB_ram_480ff8de;
    }
  }
  else {
    uVar5 = DAT_ram_4ff5c564;
    if (DAT_ram_4ff5c55c != 0) goto LAB_ram_480ff8ca;
  }
  FUN_ram_4802a8a8(aiStack_40,"ota_failed");
LAB_ram_480ff8de:
  FUN_ram_4802f152(&iStack_30,aiStack_40);
  FUN_ram_4802ae48(apcStack_50,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a59e(aiStack_40);
  FUN_ram_4802af2c(apcStack_50,"\"}");
  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,(-(uint)(iVar4 == 0) & 0x67) + 400,"application/json",
                   apcStack_50);
  FUN_ram_4802a59e(apcStack_50);
  return;
}


