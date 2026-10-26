/* Firmware entry: 0x48066e12 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_rear_fog_config_48066e12(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_44;
  undefined4 **ppuStack_40;
  uint auStack_3c [3];
  undefined4 **appuStack_30 [2];
  uint uStack_28;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48054344(appuStack_30);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  if ((char)bStack_21 < '\0') {
    appuStack_30[0] = appuStack_30;
    uStack_28 = bStack_21 & 0x7f;
  }
  else if ((undefined4 ***)appuStack_30[0] == (undefined4 ***)0x0) {
    uStack_28 = 0;
  }
  uStack_44 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  ppuStack_40 = appuStack_30[0];
  auStack_3c[0] = uStack_28;
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_44,&ppuStack_40,auStack_3c);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar3 = auStack_3c[0];
    if (auStack_3c[0] == 0) {
      uVar3 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(uVar3,0x404);
    iVar6 = iVar2 + iVar5 * 0x1d40;
    *(int *)(iVar6 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar6 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar5 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_3c[0] != 0) {
        FUN_ram_4ff45158(iVar4,ppuStack_40,auStack_3c[0]);
        iVar4 = *(int *)(iVar6 + 0x1cdc);
      }
      iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar5 + 0x44c) != '\0') && (*(char *)(iVar5 + 0x44c) != '\x06')) {
        *(int *)(iVar5 + 0x1ce0) = iVar4;
        *(uint *)(iVar5 + 0x1ce4) = auStack_3c[0];
        *(undefined4 *)(iVar5 + 0x1ce8) = 0;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_44,"application/json",iVar5,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(appuStack_30);
  return;
}


