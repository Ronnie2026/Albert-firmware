/* Firmware entry: 0x4806e04e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_rec_clear_4806e04e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_38;
  char *pcStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  
  iVar5 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de08 == '\0') {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
    fence();
    fence();
    if (DAT_ram_4ff6df04 != '\0') {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                       "{\"ok\":false,\"error\":\"recording_active\"}",0x27);
      return;
    }
    DAT_ram_4ff6df14 = 0;
    DAT_ram_4ff6df1c = 0;
    DAT_ram_4ff6df18 = 0;
    fence();
    DAT_ram_4ff6defc = 0;
    fence();
    DAT_ram_4ff5ce80 = 0;
    DAT_ram_4ff5ce84 = 0;
    DAT_ram_4ff5ce88 = 0;
    DAT_ram_4ff5ce8c = 0;
    DAT_ram_4ff5ce90 = 0;
    DAT_ram_4ff5ce94 = 0;
    DAT_ram_4ff6df06 = 0;
    DAT_ram_4ff6df10 = 0;
    DAT_ram_4ff6df0c = 0;
    DAT_ram_4ff6df08 = 0;
    DAT_ram_4ff6defa = 0;
    DAT_ram_4ff6def9 = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
    if (DAT_ram_4ff6def4 != 0) {
      FUN_ram_4ff3abd4(DAT_ram_4ff6def4,0);
    }
    iVar5 = DAT_ram_4ff5cbe8;
    iVar4 = DAT_ram_4ff5cbdc;
    pcStack_34 = "{\"ok\":true}";
    uStack_38 = 200;
    iStack_30 = 0xb;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar2 = 0xb;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_38,&pcStack_34,&iStack_30);
      DAT_ram_4ff5cbc8 = '\0';
      iVar2 = iStack_30;
      if (iStack_30 == 0) {
        iVar2 = 1;
      }
    }
    iVar2 = FUN_ram_4ff206d8(iVar2,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar3 = iVar5 + iVar4;
    *(int *)(iVar3 + 0x1cdc) = iVar2;
    if (iVar2 != 0) {
      if (iStack_30 != 0) {
        FUN_ram_4ff45158(iVar2,pcStack_34,iStack_30);
        iVar2 = *(int *)(iVar3 + 0x1cdc);
      }
      iStack_28 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_28 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (*(char *)(iStack_28 + 0x44c) == '\x06') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(int *)(iStack_28 + 0x1ce0) = iVar2;
      *(int *)(iStack_28 + 0x1ce4) = iStack_30;
      *(undefined4 *)(iStack_28 + 0x1ce8) = 0;
      puStack_24 = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_38,"application/json",iStack_28,&LAB_ram_4802d3f2);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  else {
    pcStack_34 = "{\"ok\":false,\"error\":\"recording_download_busy\"}";
    uStack_38 = 0x199;
    iStack_28 = 0x2e;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar2 = 0x2e;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_38,&pcStack_34,&iStack_28);
      DAT_ram_4ff5cbc8 = '\0';
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        iVar2 = 1;
      }
    }
    iVar2 = FUN_ram_4ff206d8(iVar2,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar3 = iVar5 + iVar4;
    *(int *)(iVar3 + 0x1cdc) = iVar2;
    if (iVar2 != 0) {
      if (iStack_28 != 0) {
        FUN_ram_4ff45158(iVar2,pcStack_34,iStack_28);
        iVar2 = *(int *)(iVar3 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_30 + 0x44c) != '\0') {
        if (*(char *)(iStack_30 + 0x44c) != '\x06') {
          *(int *)(iStack_30 + 0x1ce0) = iVar2;
          *(int *)(iStack_30 + 0x1ce4) = iStack_28;
          *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
          puStack_2c = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_38,"application/json",iStack_30,
                           &LAB_ram_4802d3f2);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  if (*(char *)(iVar3 + 0x44c) != '\0') {
    FUN_ram_48065e9c(iVar5 + iVar4 + 0x1c,7);
    return;
  }
  return;
}


