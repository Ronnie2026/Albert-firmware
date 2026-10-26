/* Firmware entry: 0x4806b7e4 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_wifi_scan_4806b7e4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_34;
  char *pcStack_30;
  int aiStack_2c [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}",0x1f);
    return;
  }
  iVar4 = DAT_ram_4ff5c674;
  if (DAT_ram_4ff5c5f6 == '\0') {
    FUN_ram_481248e0(&DAT_ram_4ff6c118);
    DAT_ram_4ff5c674 = 0;
    iVar3 = FUN_ram_4812471a(&DAT_ram_4ff6c118,1,1,0,300,0,0,0);
    DAT_ram_4ff5c5f6 = iVar3 == -1;
    iVar4 = iVar3;
    if ((iVar3 < 0) && (iVar4 = DAT_ram_4ff5c674, iVar3 != -1)) {
      FUN_ram_4802ad46(&DAT_ram_4ff5c664,"scan_failed");
      iVar4 = DAT_ram_4ff5c674;
    }
  }
  DAT_ram_4ff5c674 = iVar4;
  iVar3 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  pcStack_30 = "{\"ok\":true}";
  uStack_34 = 0xca;
  aiStack_2c[0] = 0xb;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar2 = 0xb;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_34,&pcStack_30,aiStack_2c);
      DAT_ram_4ff5cbc8 = '\0';
      iVar2 = aiStack_2c[0];
      if (aiStack_2c[0] == 0) {
        iVar2 = 1;
      }
    }
    iVar2 = FUN_ram_4ff206d8(iVar2,0x404);
    iVar5 = iVar3 + iVar4 * 0x1d40;
    *(int *)(iVar5 + 0x1cdc) = iVar2;
    if (iVar2 == 0) {
      if (*(char *)(iVar5 + 0x44c) == '\0') {
        return;
      }
      FUN_ram_48065e9c(iVar3 + iVar4 * 0x1d40 + 0x1c,7);
    }
    else {
      if (aiStack_2c[0] != 0) {
        FUN_ram_4ff45158(iVar2,pcStack_30,aiStack_2c[0]);
        iVar2 = *(int *)(iVar5 + 0x1cdc);
      }
      iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar4 + 0x44c) == '\0') || (*(char *)(iVar4 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iVar4 + 0x1ce0) = iVar2;
      *(int *)(iVar4 + 0x1ce4) = aiStack_2c[0];
      *(undefined4 *)(iVar4 + 0x1ce8) = 0;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_34,"application/json",iVar4,&LAB_ram_4802d3f2);
    }
  }
  return;
}


