/* Firmware entry: 0x480d2a5e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_fsd_records_subtotal_reset_480d2a5e(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_54;
  char *apcStack_50 [4];
  int iStack_40;
  undefined1 *puStack_3c;
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(apcStack_50,"confirm");
  iVar10 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar10 + 0x1cc4) != 0) {
    puVar2 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar4 = FUN_ram_4802b18e(apcStack_50,*puVar2);
      if (iVar4 != 0) {
        FUN_ram_4802a8a8(&iStack_40,"confirm");
        iVar5 = FUN_ram_4802b18e(&iStack_40,"plain");
        iVar4 = DAT_ram_4ff5cbe8;
        iVar10 = DAT_ram_4ff5cbdc;
        if ((iVar5 == 0) ||
           (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0'))
        {
          iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar5 + 0x1cc4) == 0) goto LAB_ram_480d2e30;
          puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
          uVar3 = 0;
          goto LAB_ram_480d2b42;
        }
        puVar8 = *(undefined1 **)(iVar5 + 0x43c);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(&iStack_30,puVar8,*(undefined4 *)(iVar5 + 0x438));
        goto LAB_ram_480d2b6e;
      }
      puVar2 = puVar2 + 2;
    } while (uVar3 < *(uint *)(iVar10 + 0x1cc4));
  }
  goto LAB_ram_480d2b8c;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar5 + 0x1cc4) <= uVar3) break;
LAB_ram_480d2b42:
    iVar6 = FUN_ram_4802b18e(&iStack_40,*puVar2);
    if (iVar6 != 0) {
      FUN_ram_4802a8a8(&iStack_30,*(undefined4 *)(iVar4 + (iVar10 * 0x3a8 + uVar3) * 8 + 0xcc8));
      goto LAB_ram_480d2b6e;
    }
  }
LAB_ram_480d2e30:
  FUN_ram_4802a8a8(&iStack_30,&DAT_ram_481df390);
LAB_ram_480d2b6e:
  iVar10 = FUN_ram_4802b18e(&iStack_30,"reset");
  if (iVar10 != 0) {
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a59e(apcStack_50);
    iVar4 = DAT_ram_4ff5cbe8;
    iVar10 = DAT_ram_4ff5cbdc;
    fence();
    fence();
    if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0')) {
      if (DAT_ram_4ff5c3dc._1_1_ == '\0') {
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                         "{\"ok\":false,\"error\":\"storage_unavailable\"}");
        return;
      }
      iVar10 = FUN_ram_480d2450(&DAT_ram_4ff5be28);
      if (iVar10 == 0) {
        pcVar9 = "{\"ok\":false,\"error\":\"subtotal_reset_failed\"}";
        uVar11 = 0x2c;
        uVar7 = 500;
      }
      else {
        pcVar9 = "{\"ok\":true,\"persistence\":\"stored\"}";
        uVar11 = 0x22;
        uVar7 = 200;
      }
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,uVar7,"application/json",pcVar9,uVar11);
      return;
    }
    apcStack_50[0] = "{\"ok\":false,\"error\":\"ota_busy\"}";
    uStack_54 = 0x199;
    iStack_40 = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar5 = 0x1f;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_54,apcStack_50,&iStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar5 = iStack_40;
      if (iStack_40 == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar10 = iVar10 * 0x1d40;
    iVar6 = iVar4 + iVar10;
    *(int *)(iVar6 + 0x1cdc) = iVar5;
    if (iVar5 != 0) {
      if (iStack_40 != 0) {
        FUN_ram_4ff45158(iVar5,apcStack_50[0],iStack_40);
        iVar5 = *(int *)(iVar6 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_30 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (*(char *)(iStack_30 + 0x44c) == '\x06') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(int *)(iStack_30 + 0x1ce0) = iVar5;
      *(int *)(iStack_30 + 0x1ce4) = iStack_40;
      *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
      puStack_2c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_54,"application/json",iStack_30,&LAB_ram_4802d3f2);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    goto LAB_ram_480d2e1a;
  }
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a59e(&iStack_40);
LAB_ram_480d2b8c:
  FUN_ram_4802a59e(apcStack_50);
  iVar4 = DAT_ram_4ff5cbe8;
  iVar10 = DAT_ram_4ff5cbdc;
  apcStack_50[0] = "{\"ok\":false,\"error\":\"confirmation_required\"}";
  uStack_54 = 400;
  iStack_30 = 0x2c;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if (cVar1 == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (cVar1 == '\x06') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  iVar5 = 0x2c;
  if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
    DAT_ram_4ff5cbc8 = 1;
    (*DAT_ram_4ff5cbc4)(&uStack_54,apcStack_50,&iStack_30);
    DAT_ram_4ff5cbc8 = '\0';
    iVar5 = iStack_30;
    if (iStack_30 == 0) {
      iVar5 = 1;
    }
  }
  iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
  iVar10 = iVar10 * 0x1d40;
  iVar6 = iVar4 + iVar10;
  *(int *)(iVar6 + 0x1cdc) = iVar5;
  if (iVar5 != 0) {
    if (iStack_30 != 0) {
      FUN_ram_4ff45158(iVar5,apcStack_50[0],iStack_30);
      iVar5 = *(int *)(iVar6 + 0x1cdc);
    }
    iStack_40 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(char *)(iStack_40 + 0x44c) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (*(char *)(iStack_40 + 0x44c) == '\x06') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    *(int *)(iStack_40 + 0x1ce0) = iVar5;
    *(int *)(iStack_40 + 0x1ce4) = iStack_30;
    *(undefined4 *)(iStack_40 + 0x1ce8) = 0;
    puStack_3c = &LAB_ram_4802d3f2;
    FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_54,"application/json",iStack_40,&LAB_ram_4802d3f2);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
LAB_ram_480d2e1a:
  if (*(char *)(iVar6 + 0x44c) != '\0') {
    FUN_ram_48065e9c(iVar4 + iVar10 + 0x1c,7);
  }
  return;
}


