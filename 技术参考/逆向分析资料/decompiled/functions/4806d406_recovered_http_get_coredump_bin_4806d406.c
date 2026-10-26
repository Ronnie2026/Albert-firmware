/* Firmware entry: 0x4806d406 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_coredump_bin_4806d406(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_54;
  char *apcStack_50 [4];
  int iStack_40;
  undefined1 *puStack_3c;
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48035faa();
  iVar4 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  if (iVar3 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x193,"application/json","{\"ok\":false,\"error\":\"token\"}"
                     ,0x1c);
    return;
  }
  if (((DAT_ram_4ff47e9c == 0) && (DAT_ram_4ff6ddf4 != 0)) && (DAT_ram_4ff6ddfc != 0)) {
    FUN_ram_4802a8a8(apcStack_50,"attachment; filename=\"Albert-P4-");
    FUN_ram_4802af2c(apcStack_50,"P1.6.4");
    FUN_ram_4802af2c(apcStack_50,"-");
    FUN_ram_4802ae48(apcStack_50,&DAT_ram_4ff5c830);
    FUN_ram_4802af2c(apcStack_50,"-coredump.bin\"");
    FUN_ram_4802a8a8(&iStack_30,"Content-Disposition");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_30,apcStack_50);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a8a8(&iStack_40,"X-Firmware-Version");
    FUN_ram_4802a8a8(&iStack_30,"P1.6.4");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&iStack_30);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a8a8(&iStack_30,"X-App-ELF-SHA256");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_30,&DAT_ram_4ff5c840);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a8a8(&iStack_40,"X-Core-Dump-SHA256");
    FUN_ram_4802a8a8(&iStack_30,&DAT_ram_4ff5c7ec);
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&iStack_30);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a8a8(&iStack_30,"X-Diagnostic-Boot-Session");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_30,&DAT_ram_4ff5c830);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a8a8(&iStack_40,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_30,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&iStack_30);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a8a8(&iStack_40,"Connection");
    FUN_ram_4802a8a8(&iStack_30,"close");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&iStack_30);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a59e(&iStack_40);
    iVar2 = DAT_ram_4ff6ddf4;
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if ((*(char *)(iVar4 + 0x44c) != '\0') && (*(char *)(iVar4 + 0x44c) != '\x06')) {
      *(int *)(iVar4 + 0x1ce0) = DAT_ram_4ff6ddfc;
      *(int *)(iVar4 + 0x1ce4) = iVar2;
      *(undefined4 *)(iVar4 + 0x1ce8) = 0;
      puStack_2c = &LAB_ram_4802d3f2;
      iStack_30 = iVar4;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,200,"application/octet-stream",iVar4,&LAB_ram_4802d3f2);
    }
    FUN_ram_4802a59e(apcStack_50);
  }
  else {
    apcStack_50[0] = "{\"ok\":false,\"error\":\"coredump_unavailable\"}";
    uStack_54 = 0x194;
    iStack_30 = 0x2b;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      iVar3 = 0x2b;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_54,apcStack_50,&iStack_30);
        DAT_ram_4ff5cbc8 = '\0';
        iVar3 = iStack_30;
        if (iStack_30 == 0) {
          iVar3 = 1;
        }
      }
      iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
      iVar5 = iVar4 + iVar2 * 0x1d40;
      *(int *)(iVar5 + 0x1cdc) = iVar3;
      if (iVar3 == 0) {
        if (*(char *)(iVar5 + 0x44c) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        FUN_ram_48065e9c(iVar4 + iVar2 * 0x1d40 + 0x1c,7);
      }
      else {
        if (iStack_30 != 0) {
          FUN_ram_4ff45158(iVar3,apcStack_50[0],iStack_30);
          iVar3 = *(int *)(iVar5 + 0x1cdc);
        }
        iStack_40 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_40 + 0x44c) == '\0') || (*(char *)(iStack_40 + 0x44c) == '\x06')) {
          return;
        }
        *(int *)(iStack_40 + 0x1ce0) = iVar3;
        *(int *)(iStack_40 + 0x1ce4) = iStack_30;
        *(undefined4 *)(iStack_40 + 0x1ce8) = 0;
        puStack_3c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_54,"application/json",iStack_40,&LAB_ram_4802d3f2)
        ;
      }
    }
  }
  return;
}


