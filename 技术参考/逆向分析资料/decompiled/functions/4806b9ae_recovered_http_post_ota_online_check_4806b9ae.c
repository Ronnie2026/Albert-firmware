/* Firmware entry: 0x4806b9ae */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_ota_online_check_4806b9ae(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_34;
  char *pcStack_30;
  int aiStack_2c [5];
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((DAT_ram_4ff5c5c0 == '\0') && (DAT_ram_4ff5c5ca == '\0')) &&
       (*(char *)(DAT_ram_4ff6dc74 + 0x224) == '\0')) &&
      ((*(char *)(DAT_ram_4ff6dc74 + 0x221) == '\0' && (*(char *)(DAT_ram_4ff6dc74 + 0x222) == '\0')
       ))) && ((DAT_ram_4ff6dc70 == 0 &&
               ((DAT_ram_4ff6dc78 == 0 || (fence(), *(char *)(DAT_ram_4ff6dc78 + 0x3ffa) == '\0'))))
              )) {
    iVar5 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
    if (iVar5 == 3) {
      if (DAT_ram_4ff6de6d == '\0') {
        pcVar6 = "{\"ok\":false,\"error\":\"pending_boot_verification\"}";
        uVar4 = 0x199;
      }
      else {
        *(undefined1 *)(DAT_ram_4ff6dc74 + 0x221) = 1;
        iVar5 = FUN_ram_48025ba6();
        *(int *)(DAT_ram_4ff6dc74 + 0x718) = iVar5 + 30000;
        uVar4 = FUN_ram_48025ba6();
        iVar5 = DAT_ram_4ff6dc74;
        *(undefined4 *)(DAT_ram_4ff6dc74 + 0x71c) = uVar4;
        *(char **)(iVar5 + 0x710) = "checking";
        *(undefined1 *)(iVar5 + 0x223) = 0;
        *(undefined1 *)(iVar5 + 0x220) = 0;
        *(undefined1 **)(iVar5 + 0x714) = &DAT_ram_481df390;
        pcVar6 = "{\"ok\":true,\"state\":\"checking\"}";
        uVar4 = 0xca;
      }
    }
    else {
      pcVar6 = "{\"ok\":false,\"error\":\"wifi_not_connected\"}";
      uVar4 = 0x1f7;
    }
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar4,"application/json",pcVar6);
    return;
  }
  pcStack_30 = "{\"ok\":false,\"error\":\"online_ota_busy\"}";
  uStack_34 = 0x199;
  aiStack_2c[0] = 0x26;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar3 = 0x26;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_34,&pcStack_30,aiStack_2c);
      DAT_ram_4ff5cbc8 = '\0';
      iVar3 = aiStack_2c[0];
      if (aiStack_2c[0] == 0) {
        iVar3 = 1;
      }
    }
    iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
    iVar7 = iVar2 + iVar5 * 0x1d40;
    *(int *)(iVar7 + 0x1cdc) = iVar3;
    if (iVar3 == 0) {
      if (*(char *)(iVar7 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar2 + iVar5 * 0x1d40 + 0x1c,7);
    }
    else {
      if (aiStack_2c[0] != 0) {
        FUN_ram_4ff45158(iVar3,pcStack_30,aiStack_2c[0]);
        iVar3 = *(int *)(iVar7 + 0x1cdc);
      }
      iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar5 + 0x44c) == '\0') || (*(char *)(iVar5 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iVar5 + 0x1ce0) = iVar3;
      *(int *)(iVar5 + 0x1ce4) = aiStack_2c[0];
      *(undefined4 *)(iVar5 + 0x1ce8) = 0;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_34,"application/json",iVar5,&LAB_ram_4802d3f2);
    }
  }
  return;
}


