/* Firmware entry: 0x48100e14 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_seat_action_48100e14(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uStack_58;
  char *pcStack_54;
  char *apcStack_50 [4];
  int iStack_40;
  undefined1 *puStack_3c;
  int iStack_30;
  undefined1 *puStack_2c;
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    apcStack_50[0] = "{\"ok\":false,\"error\":\"ota_busy\"}";
    pcStack_54 = (char *)0x199;
    iStack_30 = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '\x06') {
      return;
    }
    iVar4 = 0x1f;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&pcStack_54,apcStack_50,&iStack_30);
      DAT_ram_4ff5cbc8 = '\0';
      iVar4 = iStack_30;
      if (iStack_30 == 0) {
        iVar4 = 1;
      }
    }
    iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
    iVar9 = iVar2 + iVar6 * 0x1d40;
    *(int *)(iVar9 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar9 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
        return;
      }
      return;
    }
    if (iStack_30 != 0) {
      FUN_ram_4ff45158(iVar4,apcStack_50[0],iStack_30);
      iVar4 = *(int *)(iVar9 + 0x1cdc);
    }
    iStack_40 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if ((*(char *)(iStack_40 + 0x44c) != '\0') && (*(char *)(iStack_40 + 0x44c) != '\x06')) {
      *(int *)(iStack_40 + 0x1ce0) = iVar4;
      *(int *)(iStack_40 + 0x1ce4) = iStack_30;
      *(undefined4 *)(iStack_40 + 0x1ce8) = 0;
      puStack_3c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,pcStack_54,"application/json",iStack_40,&LAB_ram_4802d3f2);
      return;
    }
    return;
  }
  FUN_ram_4802a8a8(&iStack_30,"action");
  iVar4 = FUN_ram_4802b18e(&iStack_30,"plain");
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar3 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar5 = 0;
      do {
        iVar9 = FUN_ram_4802b18e(&iStack_30,*puVar3);
        if (iVar9 != 0) {
          FUN_ram_4802a8a8(apcStack_50,*(undefined4 *)(iVar2 + (iVar6 * 0x3a8 + uVar5) * 8 + 0xcc8))
          ;
          goto LAB_ram_48100f04;
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(apcStack_50,&DAT_ram_481df390);
  }
  else {
    puVar8 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(apcStack_50,puVar8,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_48100f04:
  FUN_ram_4802a59e(&iStack_30);
  uVar5 = FUN_ram_48036236(&DAT_ram_481c7a3c,0xff);
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  iVar6 = FUN_ram_4802b18e(apcStack_50,"save");
  if (iVar6 == 0) {
    iVar6 = FUN_ram_4802b18e(apcStack_50,"recall");
    if (iVar6 != 0) {
      iVar6 = FUN_ram_4810051c(&DAT_ram_4ff60e20,uVar5 & 0xff);
      goto LAB_ram_4810116a;
    }
    iVar6 = FUN_ram_4802b18e(apcStack_50,"cancel");
    if (iVar6 == 0) {
      iVar6 = FUN_ram_4802b18e(apcStack_50,"manual");
      if ((iVar6 != 0) || (iVar6 = FUN_ram_4802b18e(apcStack_50,"manual_start"), iVar6 != 0)) {
        FUN_ram_4802a8a8(&iStack_30,&DAT_ram_481cff7c);
        FUN_ram_4806562c(&iStack_40,&DAT_ram_4ff5cb9c,&iStack_30);
        uVar7 = FUN_ram_4802b91c(&iStack_40);
        FUN_ram_4802a59e(&iStack_40);
        FUN_ram_4802a59e(&iStack_30);
        iVar6 = FUN_ram_48100b10(&DAT_ram_4ff60e20,uVar7);
        goto LAB_ram_4810116a;
      }
      iVar6 = FUN_ram_4802b18e(apcStack_50,"manual_stop");
      if (iVar6 == 0) goto LAB_ram_48100f4e;
      FUN_ram_480ea41a(&DAT_ram_4ff60e20);
    }
    else {
      FUN_ram_48100820(&DAT_ram_4ff60e20);
    }
LAB_ram_4810116e:
    pcStack_54 = "{\"ok\":true}";
    iStack_40 = 0xb;
    uStack_58 = 200;
  }
  else {
    iVar6 = FUN_ram_48100218(&DAT_ram_4ff60e20,uVar5 & 0xff);
    if (iVar6 != 0) {
      if (DAT_ram_4ff6de6e == '\0') {
        iVar6 = FUN_ram_480edf6a();
      }
      else {
        FUN_ram_4802e260(0x10);
        iVar6 = FUN_ram_480ee046(0x10);
      }
LAB_ram_4810116a:
      if (iVar6 != 0) goto LAB_ram_4810116e;
    }
LAB_ram_48100f4e:
    pcStack_54 = "{\"ok\":false,\"error\":\"seat_busy\"}";
    iStack_40 = 0x20;
    uStack_58 = 0x199;
  }
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_58,&pcStack_54,&iStack_40);
      DAT_ram_4ff5cbc8 = '\0';
    }
    iVar4 = iStack_40;
    if (iStack_40 == 0) {
      iVar4 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
    iVar9 = iVar2 + iVar6 * 0x1d40;
    *(int *)(iVar9 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar9 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (iStack_40 != 0) {
        FUN_ram_4ff45158(iVar4,pcStack_54,iStack_40);
        iVar4 = *(int *)(iVar9 + 0x1cdc);
      }
      iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar6 + 0x44c) != '\0') && (*(char *)(iVar6 + 0x44c) != '\x06')) {
        *(int *)(iVar6 + 0x1ce0) = iVar4;
        *(int *)(iVar6 + 0x1ce4) = iStack_40;
        *(undefined4 *)(iVar6 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        iStack_30 = iVar6;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_58,"application/json",iVar6,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apcStack_50);
  return;
}


