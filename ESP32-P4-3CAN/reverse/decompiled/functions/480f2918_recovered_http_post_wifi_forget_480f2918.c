/* Firmware entry: 0x480f2918 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_wifi_forget_480f2918(void)

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
  iVar2 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    pcStack_34 = "{\"ok\":false,\"error\":\"ota_busy\"}";
    uStack_38 = 0x199;
    iStack_28 = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '\x06') {
      return;
    }
    iVar3 = 0x1f;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_38,&pcStack_34,&iStack_28);
      DAT_ram_4ff5cbc8 = '\0';
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        iVar3 = 1;
      }
    }
    iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
    iVar2 = iVar2 * 0x1d40;
    iVar4 = iVar5 + iVar2;
    *(int *)(iVar4 + 0x1cdc) = iVar3;
    if (iVar3 != 0) {
      if (iStack_28 != 0) {
        FUN_ram_4ff45158(iVar3,pcStack_34,iStack_28);
        iVar3 = *(int *)(iVar4 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_30 + 0x44c) == '\0') {
        return;
      }
      if (*(char *)(iStack_30 + 0x44c) == '\x06') {
        return;
      }
      *(int *)(iStack_30 + 0x1ce0) = iVar3;
      *(int *)(iStack_30 + 0x1ce4) = iStack_28;
      *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
      puStack_2c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_38,"application/json",iStack_30,&LAB_ram_4802d3f2);
      return;
    }
    goto LAB_ram_480f2ae4;
  }
  DAT_ram_4ff5c5f4 = 0;
  FUN_ram_4802ad46(&DAT_ram_4ff5c624,&DAT_ram_481df390);
  FUN_ram_4802ad46(&DAT_ram_4ff5c634,&DAT_ram_481df390);
  DAT_ram_4ff5c5fc = 0;
  DAT_ram_4ff5c5f9 = 0;
  DAT_ram_4ff5c604 = 0;
  DAT_ram_4ff5c610 = 0;
  FUN_ram_48124a1a(&DAT_ram_4ff6c118,0,1,100);
  if (DAT_ram_4ff6de6e == '\0') {
    iVar2 = FUN_ram_480334d2();
    if (DAT_ram_4ff5c5f7 == '\0') goto LAB_ram_480f2ac8;
LAB_ram_480f29d0:
    if (iVar2 != 0) goto LAB_ram_480f29d4;
LAB_ram_480f2ad2:
    pcStack_34 = "{\"ok\":false,\"error\":\"flash_write\"}";
    iStack_30 = 0x22;
    uStack_38 = 500;
  }
  else {
    DAT_ram_4ff5ca74 = DAT_ram_4ff5ca74 + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x20;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    iVar2 = FUN_ram_480ee046();
    if (DAT_ram_4ff5c5f7 != '\0') goto LAB_ram_480f29d0;
LAB_ram_480f2ac8:
    FUN_ram_4802e7d0(0);
    if (iVar2 == 0) goto LAB_ram_480f2ad2;
LAB_ram_480f29d4:
    pcStack_34 = "{\"ok\":true}";
    iStack_30 = 0xb;
    uStack_38 = 200;
  }
  iVar5 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x06') {
    return;
  }
  if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
    DAT_ram_4ff5cbc8 = 1;
    (*DAT_ram_4ff5cbc4)(&uStack_38,&pcStack_34,&iStack_30);
    DAT_ram_4ff5cbc8 = '\0';
  }
  iVar3 = iStack_30;
  if (iStack_30 == 0) {
    iVar3 = 1;
  }
  iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
  iVar2 = iVar2 * 0x1d40;
  iVar4 = iVar5 + iVar2;
  *(int *)(iVar4 + 0x1cdc) = iVar3;
  if (iVar3 != 0) {
    if (iStack_30 != 0) {
      FUN_ram_4ff45158(iVar3,pcStack_34,iStack_30);
      iVar3 = *(int *)(iVar4 + 0x1cdc);
    }
    iStack_28 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(char *)(iStack_28 + 0x44c) == '\0') {
      return;
    }
    if (*(char *)(iStack_28 + 0x44c) == '\x06') {
      return;
    }
    *(int *)(iStack_28 + 0x1ce0) = iVar3;
    *(int *)(iStack_28 + 0x1ce4) = iStack_30;
    *(undefined4 *)(iStack_28 + 0x1ce8) = 0;
    puStack_24 = &LAB_ram_4802d3f2;
    FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_38,"application/json",iStack_28,&LAB_ram_4802d3f2);
    return;
  }
LAB_ram_480f2ae4:
  if (*(char *)(iVar4 + 0x44c) != '\0') {
    FUN_ram_48065e9c(iVar5 + iVar2 + 0x1c,7);
  }
  return;
}


