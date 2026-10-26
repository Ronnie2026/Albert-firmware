/* Firmware entry: 0x480ff1e4 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_can_pin_layout_480ff1e4(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_54;
  char *apcStack_50 [4];
  int aiStack_40 [2];
  int iStack_38;
  byte bStack_31;
  int iStack_30;
  undefined1 *puStack_2c;
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (((DAT_ram_4ff6df30 != '\0') || (DAT_ram_4ff5c5c0 != '\0')) || (DAT_ram_4ff5c5ca != '\0')) {
    apcStack_50[0] = "{\"ok\":false,\"error\":\"ota_busy\"}";
    uStack_54 = 0x199;
    aiStack_40[0] = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 == '\0') || (cVar1 == '\x06')) {
      return;
    }
    iVar5 = 0x1f;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_54,apcStack_50,aiStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar5 = aiStack_40[0];
      if (aiStack_40[0] == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar7 = iVar2 + iVar4 * 0x1d40;
    *(int *)(iVar7 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar7 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
        return;
      }
    }
    else {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar5,apcStack_50[0],aiStack_40[0]);
        iVar5 = *(int *)(iVar7 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_30 + 0x44c) != '\0') && (*(char *)(iStack_30 + 0x44c) != '\x06')) {
        *(int *)(iStack_30 + 0x1ce0) = iVar5;
        *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
        *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_54,"application/json",iStack_30,&LAB_ram_4802d3f2)
        ;
        return;
      }
    }
    return;
  }
  if (DAT_ram_4ff6de6d == '\0') {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"boot_validation_pending\"}");
    return;
  }
  FUN_ram_4802a8a8(&iStack_30,"layout");
  FUN_ram_4806562c(apcStack_50,&DAT_ram_4ff5cb9c,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  iVar4 = FUN_ram_4802b18e(apcStack_50,"0");
  if (((iVar4 == 0) && (iVar4 = FUN_ram_4802b18e(apcStack_50,"1"), iVar4 == 0)) &&
     (iVar4 = FUN_ram_4802b18e(apcStack_50,"2"), iVar4 == 0)) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                     "{\"ok\":false,\"error\":\"invalid_layout\"}");
    goto LAB_ram_480ff406;
  }
  iVar4 = FUN_ram_480fe83a(4);
  if ((iVar4 == 0) || (fence(), DAT_ram_4ff6deb4 == '\0')) {
    iVar4 = FUN_ram_480fed16(0);
    if (iVar4 == 0) {
      pcVar6 = "{\"ok\":false,\"error\":\"can_restore\"}";
    }
    else {
      pcVar6 = "{\"ok\":false,\"error\":\"can_quiesce\"}";
    }
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",pcVar6);
    goto LAB_ram_480ff406;
  }
  bVar3 = FUN_ram_4802b91c(apcStack_50);
  if (bVar3 < 3) {
    FUN_ram_48121fd6(&iStack_30);
    iVar4 = FUN_ram_48121fee(&iStack_30,&DAT_ram_481cfd28,0,0);
    if (iVar4 == 0) {
      FUN_ram_48121fe0(&iStack_30);
      goto LAB_ram_480ff290;
    }
    iVar4 = FUN_ram_481222a4(&iStack_30,"layout",bVar3);
    FUN_ram_48122142(&iStack_30);
    FUN_ram_48121fe0(&iStack_30);
    if (iVar4 != 1) goto LAB_ram_480ff290;
    DAT_ram_4ff47e4c = bVar3;
    iVar4 = FUN_ram_480fed16(0);
    if (iVar4 != 0) {
      FUN_ram_48038bec(aiStack_40);
      if ((char)bStack_31 < '\0') {
        iVar4 = (bStack_31 & 0x7f) - 1;
      }
      else {
        iVar4 = -1;
        if (aiStack_40[0] != 0) {
          iVar4 = iStack_38 + -1;
        }
      }
      FUN_ram_4802b80a(aiStack_40,iVar4);
      FUN_ram_4802a8a8(&iStack_30,"stored");
      FUN_ram_4802f236(aiStack_40,"persistence",&iStack_30);
      FUN_ram_4802a59e(&iStack_30);
      FUN_ram_4802af5a(aiStack_40,0x7d);
      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",aiStack_40);
      FUN_ram_4802a59e(aiStack_40);
      FUN_ram_4802a59e(apcStack_50);
      return;
    }
    pcVar6 = "{\"ok\":false,\"error\":\"can_restore\",\"saved\":true}";
  }
  else {
LAB_ram_480ff290:
    iVar4 = FUN_ram_480fed16(0);
    if (iVar4 != 0) {
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                       "{\"ok\":false,\"error\":\"flash_write\"}");
      goto LAB_ram_480ff406;
    }
    pcVar6 = "{\"ok\":false,\"error\":\"can_restore\",\"saved\":false}";
  }
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",pcVar6);
LAB_ram_480ff406:
  FUN_ram_4802a59e(apcStack_50);
  return;
}


