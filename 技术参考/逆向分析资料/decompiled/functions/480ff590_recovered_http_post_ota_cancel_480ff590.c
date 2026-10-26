/* Firmware entry: 0x480ff590 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_ota_cancel_480ff590(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uStack_4c;
  char *pcStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48035faa();
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  if (iVar3 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x193,"application/json","{\"ok\":false,\"error\":\"token\"}"
                     ,0x1c);
    return;
  }
  if (DAT_ram_4ff5c5c0 == '\0') {
    pcStack_48 = "{\"ok\":false,\"error\":\"ota_inactive\"}";
    uStack_4c = 0x199;
    iStack_44 = 0x23;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      iVar3 = 0x23;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_4c,&pcStack_48,&iStack_44);
        DAT_ram_4ff5cbc8 = '\0';
        iVar3 = iStack_44;
        if (iStack_44 == 0) {
          iVar3 = 1;
        }
      }
      iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
      iVar4 = iVar4 * 0x1d40;
      iVar6 = iVar2 + iVar4;
      *(int *)(iVar6 + 0x1cdc) = iVar3;
      if (iVar3 == 0) {
        if (*(char *)(iVar6 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar4 + 0x1c,7);
        }
      }
      else {
        if (iStack_44 != 0) {
          FUN_ram_4ff45158(iVar3,pcStack_48,iStack_44);
          iVar3 = *(int *)(iVar6 + 0x1cdc);
        }
        iStack_40 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_40 + 0x44c) != '\0') && (*(char *)(iStack_40 + 0x44c) != '\x06')) {
          *(int *)(iStack_40 + 0x1ce0) = iVar3;
          *(int *)(iStack_40 + 0x1ce4) = iStack_44;
          *(undefined4 *)(iStack_40 + 0x1ce8) = 0;
          puStack_3c = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_4c,"application/json",iStack_40,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    return;
  }
  fence();
  if (DAT_ram_4ff6dc6c == '\0') {
    if (DAT_ram_4ff5c548 != '\x03') {
      DAT_ram_4ff5c5cb = 0;
      DAT_ram_4ff5c5d4 = 0;
      if (DAT_ram_4ff5cbe8 != 0) {
        pcVar7 = (char *)(DAT_ram_4ff5cbe8 + 0xcc0);
        iVar3 = DAT_ram_4ff5cbe8 + 0x3a80;
        do {
          if (((*pcVar7 != '\0') && (pcVar7[1] == '\0')) && (*(char *)(iVar2 + 0x44c) != '\0')) {
            DAT_ram_4ff5cbdc = *(undefined4 *)(iVar2 + 8);
            FUN_ram_48065e9c(iVar2 + 0x1c,8);
            FUN_ram_48070652(iVar2);
          }
          iVar2 = iVar2 + 0x1d40;
          pcVar7 = pcVar7 + 0x1d40;
        } while (iVar3 != iVar2);
      }
      DAT_ram_4ff5cbdc = iVar4;
      FUN_ram_4802a8a8(&iStack_40,"cancelled");
      FUN_ram_4802f888(&iStack_40);
      FUN_ram_4802a59e(&iStack_40);
      if ((DAT_ram_4ff5c5c0 != '\0') && (iVar4 = FUN_ram_480fed16(1), iVar4 != 0)) {
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,200,"application/json","{\"ok\":true}");
        return;
      }
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                       "{\"ok\":false,\"error\":\"can_restore\"}",0x22);
      return;
    }
    pcVar7 = "{\"ok\":false,\"error\":\"ota_committed_reboot_pending\"}";
    uVar5 = 0x33;
  }
  else {
    pcVar7 = "{\"ok\":false,\"error\":\"online_ota_busy\"}";
    uVar5 = 0x26;
  }
  FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",pcVar7,uVar5);
  return;
}


