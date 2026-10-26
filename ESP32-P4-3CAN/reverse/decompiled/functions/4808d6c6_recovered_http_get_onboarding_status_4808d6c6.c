/* Firmware entry: 0x4808d6c6 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_onboarding_status_4808d6c6(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_134;
  char *pcStack_130;
  int iStack_12c;
  undefined1 *puStack_128;
  int iStack_11c;
  undefined1 *puStack_118;
  char *pcStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined1 auStack_e0 [200];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcStack_10c = memset(auStack_e0,0,0xc0);
  uStack_108 = 0xc0;
  iStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 1;
  iVar2 = FUN_ram_4808d544(&pcStack_10c);
  iVar5 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  if (iVar2 == 0) {
    pcStack_130 = "{\"ok\":false,\"error\":\"storage_unavailable\"}";
    uStack_134 = 0x1f7;
    iStack_11c = 0x2a;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar2 = 0x2a;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_134,&pcStack_130,&iStack_11c);
      DAT_ram_4ff5cbc8 = '\0';
      iVar2 = iStack_11c;
      if (iStack_11c == 0) {
        iVar2 = 1;
      }
    }
    iVar2 = FUN_ram_4ff206d8(iVar2,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar3 = iVar5 + iVar4;
    *(int *)(iVar3 + 0x1cdc) = iVar2;
    if (iVar2 != 0) {
      if (iStack_11c != 0) {
        FUN_ram_4ff45158(iVar2,pcStack_130,iStack_11c);
        iVar2 = *(int *)(iVar3 + 0x1cdc);
      }
      iStack_12c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_12c + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (*(char *)(iStack_12c + 0x44c) == '\x06') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(int *)(iStack_12c + 0x1ce0) = iVar2;
      *(int *)(iStack_12c + 0x1ce4) = iStack_11c;
      *(undefined4 *)(iStack_12c + 0x1ce8) = 0;
      puStack_128 = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_134,"application/json",iStack_12c,&LAB_ram_4802d3f2)
      ;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  else {
    FUN_ram_4802a8a8(&iStack_12c,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_11c,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_12c,&iStack_11c);
    FUN_ram_4802a59e(&iStack_11c);
    FUN_ram_4802a59e(&iStack_12c);
    iVar5 = DAT_ram_4ff5cbe8;
    iVar4 = DAT_ram_4ff5cbdc;
    uStack_134 = 200;
    pcStack_130 = pcStack_10c;
    iStack_12c = iStack_104;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_134,&pcStack_130,&iStack_12c);
      DAT_ram_4ff5cbc8 = '\0';
    }
    iVar2 = iStack_12c;
    if (iStack_12c == 0) {
      iVar2 = 1;
    }
    iVar2 = FUN_ram_4ff206d8(iVar2,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar3 = iVar5 + iVar4;
    *(int *)(iVar3 + 0x1cdc) = iVar2;
    if (iVar2 != 0) {
      if (iStack_12c != 0) {
        FUN_ram_4ff45158(iVar2,pcStack_130,iStack_12c);
        iVar2 = *(int *)(iVar3 + 0x1cdc);
      }
      iStack_11c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_11c + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (*(char *)(iStack_11c + 0x44c) == '\x06') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(int *)(iStack_11c + 0x1ce0) = iVar2;
      *(int *)(iStack_11c + 0x1ce4) = iStack_12c;
      *(undefined4 *)(iStack_11c + 0x1ce8) = 0;
      puStack_118 = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_134,"application/json",iStack_11c,&LAB_ram_4802d3f2)
      ;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  if (*(char *)(iVar3 + 0x44c) != '\0') {
    FUN_ram_48065e9c(iVar5 + iVar4 + 0x1c,7);
  }
  return;
}


