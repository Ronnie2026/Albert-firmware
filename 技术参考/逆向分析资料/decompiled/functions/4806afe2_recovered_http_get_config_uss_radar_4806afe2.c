/* Firmware entry: 0x4806afe2 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_config_uss_radar_4806afe2(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined4 ***pppuStack_48;
  uint uStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined4 ***apppuStack_30 [2];
  uint uStack_28;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(&iStack_40,"Cache-Control");
  FUN_ram_4802a8a8(apppuStack_30,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,apppuStack_30);
  FUN_ram_4802a59e(apppuStack_30);
  FUN_ram_4802a59e(&iStack_40);
  if (DAT_ram_4ff6dd51 == '\0') {
    if (DAT_ram_4ff6dd50 != '\0') {
      uVar8 = 0x1f7;
      fence();
      uVar9 = uVar8;
      if ((DAT_ram_4ff6de94 & 0x40) == 0) goto LAB_ram_4806b188;
LAB_ram_4806b1ba:
      pcVar5 = "pending";
      uVar8 = uVar9;
      goto LAB_ram_4806b190;
    }
    pcVar5 = "pending";
    uVar8 = 0x1f7;
LAB_ram_4806b082:
    FUN_ram_48037d22(apppuStack_30,pcVar5,"settings_unavailable");
    uStack_4c = uVar8;
    iVar6 = DAT_ram_4ff5cbdc;
    iVar2 = DAT_ram_4ff5cbe8;
    pppuStack_48 = apppuStack_30[0];
    uStack_44 = uStack_28;
  }
  else {
    if (DAT_ram_4ff6dd50 == '\0') {
      pcVar5 = "pending";
      uVar8 = 200;
    }
    else {
      uVar8 = 200;
      fence();
      uVar9 = 200;
      if ((DAT_ram_4ff6de94 & 0x40) != 0) goto LAB_ram_4806b1ba;
LAB_ram_4806b188:
      pcVar5 = "stored";
LAB_ram_4806b190:
      if (DAT_ram_4ff6dd51 == '\0') goto LAB_ram_4806b082;
    }
    FUN_ram_48037d22(apppuStack_30,pcVar5,0);
    uStack_4c = uVar8;
    iVar6 = DAT_ram_4ff5cbdc;
    iVar2 = DAT_ram_4ff5cbe8;
    pppuStack_48 = apppuStack_30[0];
    uStack_44 = uStack_28;
  }
  if ((char)bStack_21 < '\0') {
    pppuStack_48 = apppuStack_30;
    uStack_44 = bStack_21 & 0x7f;
  }
  else if ((undefined4 ****)pppuStack_48 == (undefined4 ****)0x0) {
    uStack_44 = 0;
  }
  cVar1 = *(char *)(iVar6 * 0x1d40 + iVar2 + 0x44c);
  DAT_ram_4ff5cbdc = iVar6;
  DAT_ram_4ff5cbe8 = iVar2;
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_4c,&pppuStack_48,&uStack_44);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar3 = uStack_44;
    if (uStack_44 == 0) {
      uVar3 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(uVar3,0x404);
    iVar7 = iVar2 + iVar6 * 0x1d40;
    *(int *)(iVar7 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar7 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (uStack_44 != 0) {
        FUN_ram_4ff45158(iVar4,pppuStack_48,uStack_44);
        iVar4 = *(int *)(iVar7 + 0x1cdc);
      }
      iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar6 + 0x44c) != '\0') && (*(char *)(iVar6 + 0x44c) != '\x06')) {
        *(int *)(iVar6 + 0x1ce0) = iVar4;
        *(uint *)(iVar6 + 0x1ce4) = uStack_44;
        *(undefined4 *)(iVar6 + 0x1ce8) = 0;
        puStack_3c = &LAB_ram_4802d3f2;
        iStack_40 = iVar6;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_4c,"application/json",iVar6,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppuStack_30);
  return;
}


