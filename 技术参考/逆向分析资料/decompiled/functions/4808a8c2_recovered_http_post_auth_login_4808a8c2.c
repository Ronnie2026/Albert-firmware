/* Firmware entry: 0x4808a8c2 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_auth_login_4808a8c2(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined4 ***apppuStack_94 [2];
  uint uStack_8c;
  byte bStack_85;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [16];
  uint uStack_64;
  undefined4 ***pppuStack_60;
  uint uStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(&uStack_44,"password");
  iVar4 = FUN_ram_4802b18e(&uStack_44,"plain");
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar3 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar9 = 0;
      do {
        iVar10 = FUN_ram_4802b18e(&uStack_44,*puVar3);
        if (iVar10 != 0) {
          FUN_ram_4802a8a8(apppuStack_94,
                           *(undefined4 *)(iVar2 + (iVar6 * 0x3a8 + uVar9) * 8 + 0xcc8));
          goto LAB_ram_4808a932;
        }
        uVar9 = uVar9 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar9 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(apppuStack_94,&DAT_ram_481df390);
  }
  else {
    puVar7 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(apppuStack_94,puVar7,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_4808a932:
  FUN_ram_4802a59e(&uStack_44);
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  FUN_ram_48132f46(&uStack_84,0x10);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if ((char)bStack_85 < '\0') {
    uStack_8c = bStack_85 & 0x7f;
    apppuStack_94[0] = apppuStack_94;
  }
  else if ((undefined4 ****)apppuStack_94[0] == (undefined4 ****)0x0) {
    uStack_8c = 0;
  }
  if ((char)DAT_ram_4ff5c653 < '\0') {
    puStack_50 = &DAT_ram_4ff5c644;
    uStack_54 = DAT_ram_4ff5c653 & 0x7f;
  }
  else {
    puStack_50 = DAT_ram_4ff5c644;
    uStack_54 = DAT_ram_4ff5c64c;
    if (DAT_ram_4ff5c644 == (undefined4 *)0x0) {
      uStack_54 = 0;
    }
  }
  uStack_64 = uStack_8c;
  pppuStack_60 = apppuStack_94[0];
  uVar5 = FUN_ram_48025ba6();
  iVar6 = FUN_ram_4808a6b8(&DAT_ram_4ff5cad4,uStack_64,pppuStack_60,uStack_54,puStack_50,&uStack_84,
                           uVar5,&uStack_44);
  FUN_ram_4802a8a8(&uStack_64,"Cache-Control");
  FUN_ram_4802a8a8(&uStack_54,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_64,&uStack_54);
  FUN_ram_4802a59e(&uStack_54);
  FUN_ram_4802a59e(&uStack_64);
  if (iVar6 == 0) {
    FUN_ram_4802a8a8(auStack_74,"P4SID=");
    FUN_ram_4802af2c(auStack_74,&uStack_44);
    FUN_ram_4802af2c(auStack_74,"; Max-Age=604800; Path=/; HttpOnly; SameSite=Strict");
    FUN_ram_4802a8a8(&uStack_54,"Set-Cookie");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_54,auStack_74);
    FUN_ram_4802a59e(&uStack_54);
    FUN_ram_4802a8a8(&uStack_64,"Location");
    FUN_ram_4802a8a8(&uStack_54,&DAT_ram_481b546c);
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_64,&uStack_54);
    FUN_ram_4802a59e(&uStack_54);
    FUN_ram_4802a59e(&uStack_64);
    iVar2 = DAT_ram_4ff5cbe8;
    iVar6 = DAT_ram_4ff5cbdc;
    puStack_98 = &DAT_ram_481df390;
    uStack_64 = 0;
    uStack_9c = 0x12f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      uVar9 = 1;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_9c,&puStack_98,&uStack_64);
        DAT_ram_4ff5cbc8 = '\0';
        uVar9 = uStack_64;
        if (uStack_64 == 0) {
          uVar9 = 1;
        }
      }
      iVar4 = FUN_ram_4ff206d8(uVar9,0x404);
      iVar10 = iVar2 + iVar6 * 0x1d40;
      *(int *)(iVar10 + 0x1cdc) = iVar4;
      if (iVar4 == 0) {
        if (*(char *)(iVar10 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (uStack_64 != 0) {
          FUN_ram_4ff45158(iVar4,puStack_98,uStack_64);
          iVar4 = *(int *)(iVar10 + 0x1cdc);
        }
        uVar9 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(uVar9 + 0x44c) != '\0') && (*(char *)(uVar9 + 0x44c) != '\x06')) {
          *(int *)(uVar9 + 0x1ce0) = iVar4;
          *(uint *)(uVar9 + 0x1ce4) = uStack_64;
          *(undefined4 *)(uVar9 + 0x1ce8) = 0;
          puStack_50 = (undefined4 *)&LAB_ram_4802d3f2;
          uStack_54 = uVar9;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_9c,"text/plain",uVar9,&LAB_ram_4802d3f2);
        }
      }
    }
    FUN_ram_4802a59e(auStack_74);
    FUN_ram_4802a59e(apppuStack_94);
  }
  else {
    FUN_ram_4802a8a8(&uStack_64,"Location");
    if (iVar6 == 2) {
      pcVar8 = "/?error=locked";
    }
    else {
      pcVar8 = "/?error=wrong";
    }
    FUN_ram_4802a8a8(&uStack_54,pcVar8);
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_64,&uStack_54);
    FUN_ram_4802a59e(&uStack_54);
    FUN_ram_4802a59e(&uStack_64);
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x12f,"text/plain",&DAT_ram_481df390,0);
    FUN_ram_4802a59e(apppuStack_94);
  }
  return;
}


