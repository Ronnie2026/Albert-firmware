/* Firmware entry: 0x480d338a */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_fsd_records_clear_480d338a(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_64;
  char *apcStack_60 [4];
  int aiStack_50 [4];
  int iStack_40;
  undefined1 *puStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(apcStack_60,"confirm");
  iVar9 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar9 + 0x1cc4) != 0) {
    puVar2 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar4 = FUN_ram_4802b18e(apcStack_60,*puVar2);
      if (iVar4 != 0) {
        FUN_ram_4802a8a8(aiStack_50,"confirm");
        iVar5 = FUN_ram_4802b18e(aiStack_50,"plain");
        iVar4 = DAT_ram_4ff5cbe8;
        iVar9 = DAT_ram_4ff5cbdc;
        if ((iVar5 == 0) ||
           (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0'))
        {
          iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar5 + 0x1cc4) == 0) goto LAB_ram_480d3814;
          puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
          uVar3 = 0;
          goto LAB_ram_480d346e;
        }
        puVar7 = *(undefined1 **)(iVar5 + 0x43c);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(&iStack_40,puVar7,*(undefined4 *)(iVar5 + 0x438));
        goto LAB_ram_480d349a;
      }
      puVar2 = puVar2 + 2;
    } while (uVar3 < *(uint *)(iVar9 + 0x1cc4));
  }
  FUN_ram_4802a59e(apcStack_60);
LAB_ram_480d34be:
  FUN_ram_48066698(&DAT_ram_4ff5cb9c,400,"application/json",
                   "{\"ok\":false,\"error\":\"confirmation_required\"}",0x2c);
  return;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar5 + 0x1cc4) <= uVar3) break;
LAB_ram_480d346e:
    iVar6 = FUN_ram_4802b18e(aiStack_50,*puVar2);
    if (iVar6 != 0) {
      FUN_ram_4802a8a8(&iStack_40,*(undefined4 *)(iVar4 + (iVar9 * 0x3a8 + uVar3) * 8 + 0xcc8));
      goto LAB_ram_480d349a;
    }
  }
LAB_ram_480d3814:
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_481df390);
LAB_ram_480d349a:
  iVar9 = FUN_ram_4802b18e(&iStack_40,"clear");
  if (iVar9 == 0) {
    FUN_ram_4802a59e(&iStack_40);
    FUN_ram_4802a59e(aiStack_50);
    FUN_ram_4802a59e(apcStack_60);
    goto LAB_ram_480d34be;
  }
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a59e(aiStack_50);
  FUN_ram_4802a59e(apcStack_60);
  iVar5 = DAT_ram_4ff6dc94;
  iVar4 = DAT_ram_4ff5cbe8;
  iVar9 = DAT_ram_4ff5cbdc;
  fence();
  fence();
  if (((DAT_ram_4ff6df30 != '\0') || (DAT_ram_4ff5c5c0 != '\0')) || (DAT_ram_4ff5c5ca != '\0')) {
    apcStack_60[0] = "{\"ok\":false,\"error\":\"ota_busy\"}";
    uStack_64 = 0x199;
    aiStack_50[0] = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      iVar5 = 0x1f;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_64,apcStack_60,aiStack_50);
        DAT_ram_4ff5cbc8 = '\0';
        iVar5 = aiStack_50[0];
        if (aiStack_50[0] == 0) {
          iVar5 = 1;
        }
      }
      iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
      iVar6 = iVar4 + iVar9 * 0x1d40;
      *(int *)(iVar6 + 0x1cdc) = iVar5;
      if (iVar5 == 0) {
        if (*(char *)(iVar6 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar4 + iVar9 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (aiStack_50[0] != 0) {
          FUN_ram_4ff45158(iVar5,apcStack_60[0],aiStack_50[0]);
          iVar5 = *(int *)(iVar6 + 0x1cdc);
        }
        iStack_40 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_40 + 0x44c) != '\0') && (*(char *)(iStack_40 + 0x44c) != '\x06')) {
          *(int *)(iStack_40 + 0x1ce0) = iVar5;
          *(int *)(iStack_40 + 0x1ce4) = aiStack_50[0];
          *(undefined4 *)(iStack_40 + 0x1ce8) = 0;
          puStack_3c = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_64,"application/json",iStack_40,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    return;
  }
  if (DAT_ram_4ff5c3dc._1_1_ == '\0') {
    pcVar8 = "{\"ok\":false,\"error\":\"storage_unavailable\"}";
    uVar10 = 0x1f7;
    goto LAB_ram_480d37dc;
  }
  if ((((DAT_ram_4ff6dc94 != 0) && (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) &&
      (*(char *)(DAT_ram_4ff6dc94 + 72000) == '\0')) &&
     ((*(char *)(DAT_ram_4ff6dc94 + 0x11a40) == '\0' &&
      (iVar9 = FUN_ram_4802d110(DAT_ram_4ff6dcc8 + 0xa60), iVar9 != 0)))) {
    FUN_ram_4ff45158(DAT_ram_4ff6dc9c + 0x87080,DAT_ram_4ff6dcc8 + 0xa60,0x524);
    *(undefined2 *)(iVar5 + 72000) = 1;
    FUN_ram_48032bca(iVar5 + 0x11942);
    FUN_ram_4802e57c(DAT_ram_4ff6dc9c + 0x87580,iVar5 + 0x11983,0xc);
    uVar10 = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x8759c);
    *(undefined4 *)(iVar5 + 0x119b8) = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87598);
    *(undefined4 *)(iVar5 + 0x119bc) = uVar10;
    iVar9 = FUN_ram_480b66f6();
    if (iVar9 != 0) {
      iVar4 = FUN_ram_480d2e90(&DAT_ram_4ff5be28);
      iVar9 = DAT_ram_4ff6dc94;
      if ((DAT_ram_4ff6dc94 == 0) || (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) == '\0')) {
        if (iVar4 != 0) goto LAB_ram_480d3696;
      }
      else {
        if (iVar4 != 0) {
          iVar4 = FUN_ram_480cea00(&DAT_ram_4ff5be28,DAT_ram_4ff6dc9c + 0x875a8);
          if (iVar4 != 0) {
            iVar4 = DAT_ram_4ff6dc9c + 0x87aa8;
            *(undefined1 *)(iVar9 + 0x11941) = 1;
            FUN_ram_4802e57c(iVar4,iVar9 + 0x1199c,0xc);
            uVar10 = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87ac4);
            *(undefined4 *)(iVar9 + 0x119c0) = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87ac0);
            *(undefined4 *)(iVar9 + 0x119c4) = uVar10;
            FUN_ram_480b66f6();
            uVar10 = FUN_ram_48025ba6();
            *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar10;
          }
LAB_ram_480d3696:
          pcVar8 = "{\"ok\":true,\"persistence\":\"stored\"}";
          uVar10 = 200;
          goto LAB_ram_480d37dc;
        }
        *(undefined2 *)(DAT_ram_4ff6dc94 + 72000) = 0;
        FUN_ram_480b66f6();
      }
      pcVar8 = "{\"ok\":false,\"error\":\"clear_failed\"}";
      uVar10 = 500;
      goto LAB_ram_480d37dc;
    }
  }
  pcVar8 = "{\"ok\":false,\"error\":\"cloud_control_store_unavailable\"}";
  uVar10 = 0x199;
LAB_ram_480d37dc:
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar10,"application/json",pcVar8);
  return;
}


