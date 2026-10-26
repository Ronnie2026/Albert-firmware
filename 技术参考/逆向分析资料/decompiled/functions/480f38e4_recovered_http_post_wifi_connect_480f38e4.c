/* Firmware entry: 0x480f38e4 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_wifi_connect_480f38e4(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uStack_68;
  char *pcStack_64;
  int aiStack_60 [2];
  int iStack_58;
  byte bStack_51;
  int aiStack_50 [2];
  int iStack_48;
  byte bStack_41;
  int iStack_40;
  undefined1 *puStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}",0x1f);
    return;
  }
  FUN_ram_4802a8a8(&iStack_40,&DAT_ram_481bf9dc);
  iVar5 = FUN_ram_4802b18e(&iStack_40,"plain");
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar5 == 0) ||
     (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0')) {
    iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar5 + 0x1cc4) != 0) {
      puVar3 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar4 = 0;
      do {
        iVar7 = FUN_ram_4802b18e(&iStack_40,*puVar3);
        if (iVar7 != 0) {
          FUN_ram_4802a8a8(aiStack_60,*(undefined4 *)(iVar2 + (iVar6 * 0x3a8 + uVar4) * 8 + 0xcc8));
          goto LAB_ram_480f3ac8;
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar4 < *(uint *)(iVar5 + 0x1cc4));
    }
    FUN_ram_4802a8a8(aiStack_60,&DAT_ram_481df390);
LAB_ram_480f3ac8:
    FUN_ram_4802a59e(&iStack_40);
    if ((char)bStack_51 < '\0') goto LAB_ram_480f3976;
LAB_ram_480f3ad6:
    if ((aiStack_60[0] == 0) || (iStack_58 == 0)) {
LAB_ram_480f3ae0:
      iVar2 = DAT_ram_4ff5cbe8;
      iVar6 = DAT_ram_4ff5cbdc;
      pcStack_64 = "{\"ok\":false,\"error\":\"ssid_required\"}";
      uStack_68 = 400;
      aiStack_50[0] = 0x24;
      cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
      if ((cVar1 != '\0') && (cVar1 != '\x06')) {
        iVar5 = 0x24;
        if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
          DAT_ram_4ff5cbc8 = 1;
          (*DAT_ram_4ff5cbc4)(&uStack_68,&pcStack_64,aiStack_50);
          DAT_ram_4ff5cbc8 = '\0';
          iVar5 = aiStack_50[0];
          if (aiStack_50[0] == 0) {
            iVar5 = 1;
          }
        }
        iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
        iVar7 = iVar2 + iVar6 * 0x1d40;
        *(int *)(iVar7 + 0x1cdc) = iVar5;
        if (iVar5 == 0) {
          if (*(char *)(iVar7 + 0x44c) != '\0') {
            FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
          }
        }
        else {
          if (aiStack_50[0] != 0) {
            FUN_ram_4ff45158(iVar5,pcStack_64,aiStack_50[0]);
            iVar5 = *(int *)(iVar7 + 0x1cdc);
          }
          iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if ((*(char *)(iVar6 + 0x44c) != '\0') && (*(char *)(iVar6 + 0x44c) != '\x06')) {
            *(int *)(iVar6 + 0x1ce0) = iVar5;
            *(int *)(iVar6 + 0x1ce4) = aiStack_50[0];
            *(undefined4 *)(iVar6 + 0x1ce8) = 0;
            puStack_3c = &LAB_ram_4802d3f2;
            iStack_40 = iVar6;
            FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_68,"application/json",iVar6,&LAB_ram_4802d3f2)
            ;
          }
        }
      }
      goto LAB_ram_480f3bba;
    }
  }
  else {
    puVar8 = *(undefined1 **)(iVar5 + 0x43c);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(aiStack_60,puVar8,*(undefined4 *)(iVar5 + 0x438));
    FUN_ram_4802a59e(&iStack_40);
    if (-1 < (char)bStack_51) goto LAB_ram_480f3ad6;
LAB_ram_480f3976:
    if ((bStack_51 & 0x7f) == 0) goto LAB_ram_480f3ae0;
  }
  FUN_ram_4802a8a8(&iStack_40,"password");
  iVar5 = FUN_ram_4802b18e(&iStack_40,"plain");
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar5 == 0) ||
     (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0')) {
    iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar5 + 0x1cc4) != 0) {
      puVar3 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar4 = 0;
      do {
        iVar7 = FUN_ram_4802b18e(&iStack_40,*puVar3);
        if (iVar7 != 0) {
          FUN_ram_4802a8a8(aiStack_50,*(undefined4 *)(iVar2 + (iVar6 * 0x3a8 + uVar4) * 8 + 0xcc8));
          FUN_ram_4802a59e(&iStack_40);
          goto joined_r0x480f3c68;
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar4 < *(uint *)(iVar5 + 0x1cc4));
    }
    FUN_ram_4802a8a8(aiStack_50,&DAT_ram_481df390);
  }
  else {
    puVar8 = *(undefined1 **)(iVar5 + 0x43c);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(aiStack_50,puVar8,*(undefined4 *)(iVar5 + 0x438));
  }
  FUN_ram_4802a59e(&iStack_40);
joined_r0x480f3c68:
  if ((char)bStack_41 < '\0') {
    if ((bStack_41 & 0x7f) == 0) goto LAB_ram_480f3c78;
LAB_ram_480f39f0:
    FUN_ram_4802ad02(&DAT_ram_4ff5c634,aiStack_50);
  }
  else {
    if ((aiStack_50[0] != 0) && (iStack_48 != 0)) goto LAB_ram_480f39f0;
LAB_ram_480f3c78:
    iVar6 = FUN_ram_4802b13e(aiStack_60,&DAT_ram_4ff5c624);
    if (iVar6 == 0) goto LAB_ram_480f39f0;
  }
  FUN_ram_4802ad02(&DAT_ram_4ff5c624,aiStack_60);
  DAT_ram_4ff5c5f4 = 1;
  if (DAT_ram_4ff6de6e == '\0') {
    iVar6 = FUN_ram_480334d2();
  }
  else {
    FUN_ram_4802e260(0x20);
    iVar6 = FUN_ram_480ee046(0x20);
  }
  if (iVar6 != 0) {
    FUN_ram_48030bc0();
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0xca,"application/json","{\"ok\":true}",0xb);
    FUN_ram_4802a59e(aiStack_50);
    FUN_ram_4802a59e(aiStack_60);
    return;
  }
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                   "{\"ok\":false,\"error\":\"flash_write\"}");
  FUN_ram_4802a59e(aiStack_50);
LAB_ram_480f3bba:
  FUN_ram_4802a59e(aiStack_60);
  return;
}


