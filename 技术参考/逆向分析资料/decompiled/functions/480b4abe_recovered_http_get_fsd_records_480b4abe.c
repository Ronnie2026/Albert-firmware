/* Firmware entry: 0x480b4abe */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_fsd_records_480b4abe(void)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_598;
  undefined1 *puStack_594;
  char *pcStack_590;
  int iStack_58c;
  undefined1 *puStack_588;
  undefined1 *puStack_57c;
  undefined1 *puStack_578;
  char *pcStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined2 uStack_554;
  int iStack_550;
  undefined4 uStack_54c;
  undefined1 uStack_27;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&iStack_550,0,0x530);
  uStack_27 = 0xff;
  uStack_54c = 1;
  FUN_ram_4802a8a8(&iStack_58c,"Cache-Control");
  FUN_ram_4802a8a8(&puStack_57c,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_58c,&puStack_57c);
  FUN_ram_4802a59e(&puStack_57c);
  FUN_ram_4802a59e(&iStack_58c);
  iVar2 = FUN_ram_4802d110(&iStack_550);
  puVar1 = DAT_ram_4ff6de34;
  iVar8 = DAT_ram_4ff5cbe8;
  iVar7 = DAT_ram_4ff5cbdc;
  if ((iVar2 == 0) || (DAT_ram_4ff6de34 == (undefined1 *)0x0)) {
    pcStack_590 = "{\"ok\":false,\"error\":\"records_unavailable\"}";
    puStack_594 = (undefined1 *)0x1f7;
    iStack_58c = 0x2a;
    cVar5 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar5 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar5 == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar2 = 0x2a;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&puStack_594,&pcStack_590,&iStack_58c);
      DAT_ram_4ff5cbc8 = '\0';
      iVar2 = iStack_58c;
      if (iStack_58c == 0) {
        iVar2 = 1;
      }
    }
    iVar2 = FUN_ram_4ff206d8(iVar2,0x404);
    iVar7 = iVar7 * 0x1d40;
    iVar6 = iVar8 + iVar7;
    *(int *)(iVar6 + 0x1cdc) = iVar2;
    if (iVar2 != 0) {
      if (iStack_58c != 0) {
        FUN_ram_4ff45158(iVar2,pcStack_590,iStack_58c);
        iVar2 = *(int *)(iVar6 + 0x1cdc);
      }
      puStack_57c = (undefined1 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
      if (puStack_57c[0x44c] == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (puStack_57c[0x44c] == '\x06') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(int *)(puStack_57c + 0x1ce0) = iVar2;
      *(int *)(puStack_57c + 0x1ce4) = iStack_58c;
      *(undefined4 *)(puStack_57c + 0x1ce8) = 0;
      puStack_578 = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,puStack_594,"application/json",puStack_57c,
                       &LAB_ram_4802d3f2);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    goto LAB_ram_480b4dd4;
  }
  *DAT_ram_4ff6de34 = 0;
  puStack_57c = puVar1;
  pcStack_574 = (char *)0x0;
  uStack_570 = 0;
  uStack_56c = 0;
  uStack_568 = 0;
  uStack_564 = 0;
  uStack_560 = 0;
  uStack_55c = 0;
  uStack_558 = 0;
  uStack_554 = 1;
  puStack_578 = (undefined1 *)0x4000;
  cVar5 = DAT_ram_4ff5c3dc._3_1_;
  if ((DAT_ram_4ff5c3dc._1_1_ == '\0') || (DAT_ram_4ff5be38 == '\0')) {
    bVar4 = false;
    if (DAT_ram_4ff5c3dc._3_1_ != '\0') goto LAB_ram_480b4b88;
    bVar4 = false;
    if (DAT_ram_4ff5c3dc._2_1_ == '\0') goto LAB_ram_480b4b7e;
    iVar2 = FUN_ram_480b41ec(&puStack_57c,&iStack_550,DAT_ram_4ff5c3dc._1_1_,0,
                             DAT_ram_4ff5c3dc._2_1_,DAT_ram_4ff5c3e8);
    iVar7 = DAT_ram_4ff5cbdc;
    iVar8 = DAT_ram_4ff5cbe8;
    puStack_594 = puStack_57c;
    pcStack_590 = pcStack_574;
  }
  else {
    bVar4 = false;
    if ((DAT_ram_4ff5c3dc._3_1_ == '\0') &&
       (cVar5 = DAT_ram_4ff5c3dc._2_1_, bVar4 = false, DAT_ram_4ff5c3dc._2_1_ == '\0')) {
      bVar4 = DAT_ram_4ff5c36c == iStack_550;
LAB_ram_480b4b7e:
      cVar5 = DAT_ram_4ff5c36c != iStack_550;
    }
LAB_ram_480b4b88:
    iVar2 = FUN_ram_480b41ec(&puStack_57c,&iStack_550,DAT_ram_4ff5c3dc._1_1_,bVar4,cVar5,
                             DAT_ram_4ff5c3e8);
    iVar7 = DAT_ram_4ff5cbdc;
    iVar8 = DAT_ram_4ff5cbe8;
    puStack_594 = puStack_57c;
    pcStack_590 = pcStack_574;
  }
  DAT_ram_4ff5cbdc = iVar7;
  DAT_ram_4ff5cbe8 = iVar8;
  puStack_57c = puStack_594;
  pcStack_574 = pcStack_590;
  if (iVar2 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"records_body_overflow\"}",0x2c);
    return;
  }
  uStack_598 = 200;
  cVar5 = *(char *)(iVar7 * 0x1d40 + iVar8 + 0x44c);
  if (cVar5 == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (cVar5 == '\x06') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
    DAT_ram_4ff5cbc8 = 1;
    (*DAT_ram_4ff5cbc4)(&uStack_598,&puStack_594,&pcStack_590);
    DAT_ram_4ff5cbc8 = '\0';
  }
  pcVar3 = pcStack_590;
  if (pcStack_590 == (char *)0x0) {
    pcVar3 = (char *)0x1;
  }
  iVar2 = FUN_ram_4ff206d8(pcVar3,0x404);
  iVar7 = iVar7 * 0x1d40;
  iVar6 = iVar8 + iVar7;
  *(int *)(iVar6 + 0x1cdc) = iVar2;
  if (iVar2 != 0) {
    if (pcStack_590 != (char *)0x0) {
      FUN_ram_4ff45158(iVar2,puStack_594,pcStack_590);
      iVar2 = *(int *)(iVar6 + 0x1cdc);
    }
    iStack_58c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(char *)(iStack_58c + 0x44c) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (*(char *)(iStack_58c + 0x44c) == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    *(int *)(iStack_58c + 0x1ce0) = iVar2;
    *(char **)(iStack_58c + 0x1ce4) = pcStack_590;
    *(undefined4 *)(iStack_58c + 0x1ce8) = 0;
    puStack_588 = &LAB_ram_4802d3f2;
    FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_598,"application/json",iStack_58c,&LAB_ram_4802d3f2);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
LAB_ram_480b4dd4:
  if (*(char *)(iVar6 + 0x44c) != '\0') {
    FUN_ram_48065e9c(iVar8 + iVar7 + 0x1c,7);
    return;
  }
  return;
}


