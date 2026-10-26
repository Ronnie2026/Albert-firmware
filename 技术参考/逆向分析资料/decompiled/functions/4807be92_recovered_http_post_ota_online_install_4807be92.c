/* Firmware entry: 0x4807be92 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_ota_online_install_4807be92(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_7c;
  char *pcStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 *puStack_6c;
  
  iVar2 = DAT_ram_4ff6dc74;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)(DAT_ram_4ff6dc74 + 0x220) == '\0') || (*(int *)(DAT_ram_4ff6dc74 + 0x710) == 0))
     || (iVar4 = FUN_ram_4ff453ae(*(int *)(DAT_ram_4ff6dc74 + 0x710),"available"), iVar4 != 0)) {
    iVar4 = DAT_ram_4ff5cbe8;
    iVar2 = DAT_ram_4ff5cbdc;
    pcStack_78 = "{\"ok\":false,\"error\":\"update_check_required\"}";
    uStack_7c = 0x199;
    iStack_74 = 0x2c;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 == '\0') || (cVar1 == '\x06')) {
      return;
    }
    iVar5 = 0x2c;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_7c,&pcStack_78,&iStack_74);
      DAT_ram_4ff5cbc8 = '\0';
      iVar5 = iStack_74;
      if (iStack_74 == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar9 = iVar4 + iVar2 * 0x1d40;
    *(int *)(iVar9 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar9 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar4 + iVar2 * 0x1d40 + 0x1c,7);
        return;
      }
    }
    else {
      if (iStack_74 != 0) {
        FUN_ram_4ff45158(iVar5,pcStack_78,iStack_74);
        iVar5 = *(int *)(iVar9 + 0x1cdc);
      }
      iStack_70 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_70 + 0x44c) != '\0') && (*(char *)(iStack_70 + 0x44c) != '\x06')) {
        *(int *)(iStack_70 + 0x1ce0) = iVar5;
        *(int *)(iStack_70 + 0x1ce4) = iStack_74;
        *(undefined4 *)(iStack_70 + 0x1ce8) = 0;
        puStack_6c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_7c,"application/json",iStack_70,&LAB_ram_4802d3f2)
        ;
        return;
      }
    }
    return;
  }
  if (((DAT_ram_4ff5c5c0 == '\0') && (*(char *)(iVar2 + 0x224) == '\0')) &&
     (*(char *)(iVar2 + 0x222) == '\0')) {
    iVar4 = iVar2 + 0x38;
    iVar5 = FUN_ram_4802e468(iVar4);
    if (iVar5 == 0) {
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                       "{\"ok\":false,\"error\":\"management_target_changed\"}");
      return;
    }
    iVar5 = FUN_ram_4802e4fc(iVar4);
    if ((iVar5 == 0) &&
       (uVar6 = FUN_ram_4807bafc(iVar4,"P1.6.4","4d97f369e1a32f126b7121a66a70a53fca628dfa",
                                 DAT_ram_48223e85 != '\0'), (0x1aU >> (uVar6 & 0x1f) & 1) == 0)) {
      if (uVar6 == 2) {
        pcVar3 = "already_current";
      }
      else {
        pcVar3 = "invalid_release";
      }
      memset(&iStack_70,0,0x50);
      FUN_ram_4819ad74(&iStack_70,0x50,"{\"ok\":false,\"error\":\"%s\"}",pcVar3);
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",&iStack_70);
      return;
    }
    *(char **)(iVar2 + 0x710) = "preparing";
    *(undefined2 *)(iVar2 + 0x222) = 1;
    *(undefined4 *)(iVar2 + 0x230) = 0;
    *(undefined4 *)(iVar2 + 0x234) = 0;
    *(undefined1 **)(iVar2 + 0x714) = &DAT_ram_481df390;
    pcVar3 = "{\"ok\":true,\"state\":\"preparing\"}";
    uVar8 = 0x1f;
    uVar7 = 0xca;
  }
  else {
    pcVar3 = "{\"ok\":false,\"error\":\"online_ota_busy\"}";
    uVar8 = 0x26;
    uVar7 = 0x199;
  }
  FUN_ram_48066698(&DAT_ram_4ff5cb9c,uVar7,"application/json",pcVar3,uVar8);
  return;
}


