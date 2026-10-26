/* Firmware entry: 0x480bdfce */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_ota_online_status_480bdfce(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *__s;
  int iVar6;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  char *apcStack_6c [4];
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de34 == (undefined1 *)0x0) {
    __s = (undefined1 *)FUN_ram_4ff206d8(0x4000,0x404);
    iVar2 = DAT_ram_4ff5cbe8;
    iVar3 = DAT_ram_4ff5cbdc;
    if (__s == (undefined1 *)0x0) {
      apcStack_6c[0] = "{\"ok\":false,\"error\":\"status_buffer_unavailable\"}";
      puStack_70 = (undefined1 *)0x1f7;
      iStack_5c = 0x30;
      cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
      if (cVar1 == '\0') {
        return;
      }
      if (cVar1 == '\x06') {
        return;
      }
      iVar5 = 0x30;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&puStack_70,apcStack_6c,&iStack_5c);
        DAT_ram_4ff5cbc8 = '\0';
        iVar5 = iStack_5c;
        if (iStack_5c == 0) {
          iVar5 = 1;
        }
      }
      iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
      iVar6 = iVar2 + iVar3 * 0x1d40;
      *(int *)(iVar6 + 0x1cdc) = iVar5;
      if (iVar5 == 0) {
        if (*(char *)(iVar6 + 0x44c) == '\0') {
          return;
        }
        FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
        return;
      }
      if (iStack_5c != 0) {
        FUN_ram_4ff45158(iVar5,apcStack_6c[0],iStack_5c);
        iVar5 = *(int *)(iVar6 + 0x1cdc);
      }
      puStack_4c = (undefined1 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
      if (puStack_4c[0x44c] == '\0') {
        return;
      }
      if (puStack_4c[0x44c] == '\x06') {
        return;
      }
      *(int *)(puStack_4c + 0x1ce0) = iVar5;
      *(int *)(puStack_4c + 0x1ce4) = iStack_5c;
      *(undefined4 *)(puStack_4c + 0x1ce8) = 0;
      puStack_48 = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,puStack_70,"application/json",puStack_4c,&LAB_ram_4802d3f2)
      ;
      return;
    }
    memset(__s,0,0x4000);
    DAT_ram_4ff6de34 = __s;
  }
  puStack_4c = DAT_ram_4ff6de34;
  *DAT_ram_4ff6de34 = 0;
  pcStack_44 = (char *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  puStack_48 = (undefined1 *)0x4000;
  uStack_24 = 1;
  iVar3 = FUN_ram_480bd6c6(&puStack_4c);
  if (iVar3 != 0) {
    FUN_ram_4802a8a8(apcStack_6c,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_5c,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,apcStack_6c,&iStack_5c);
    FUN_ram_4802a59e(&iStack_5c);
    FUN_ram_4802a59e(apcStack_6c);
    iVar2 = DAT_ram_4ff5cbe8;
    iVar3 = DAT_ram_4ff5cbdc;
    uStack_74 = 200;
    puStack_70 = puStack_4c;
    apcStack_6c[0] = pcStack_44;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_74,&puStack_70,apcStack_6c);
        DAT_ram_4ff5cbc8 = '\0';
      }
      pcVar4 = apcStack_6c[0];
      if (apcStack_6c[0] == (char *)0x0) {
        pcVar4 = (char *)0x1;
      }
      iVar5 = FUN_ram_4ff206d8(pcVar4,0x404);
      iVar6 = iVar2 + iVar3 * 0x1d40;
      *(int *)(iVar6 + 0x1cdc) = iVar5;
      if (iVar5 == 0) {
        if (*(char *)(iVar6 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (apcStack_6c[0] != (char *)0x0) {
          FUN_ram_4ff45158(iVar5,puStack_70,apcStack_6c[0]);
          iVar5 = *(int *)(iVar6 + 0x1cdc);
        }
        iStack_5c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_5c + 0x44c) != '\0') && (*(char *)(iStack_5c + 0x44c) != '\x06')) {
          *(int *)(iStack_5c + 0x1ce0) = iVar5;
          *(char **)(iStack_5c + 0x1ce4) = apcStack_6c[0];
          *(undefined4 *)(iStack_5c + 0x1ce8) = 0;
          puStack_58 = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_74,"application/json",iStack_5c,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    return;
  }
  FUN_ram_48066698(&DAT_ram_4ff5cb9c,500,"application/json",
                   "{\"ok\":false,\"error\":\"status_capacity\"}",0x26);
  return;
}


