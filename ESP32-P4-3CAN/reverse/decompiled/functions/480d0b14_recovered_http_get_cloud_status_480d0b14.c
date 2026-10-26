/* Firmware entry: 0x480d0b14 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_cloud_status_480d0b14(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *__s;
  int iVar5;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  int aiStack_6c [4];
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de34 == (undefined1 *)0x0) {
    __s = (undefined1 *)FUN_ram_4ff206d8(0x4000,0x404);
    if (__s == (undefined1 *)0x0) goto LAB_ram_480d0c68;
    memset(__s,0,0x4000);
    DAT_ram_4ff6de34 = __s;
  }
  puStack_4c = DAT_ram_4ff6de34;
  *DAT_ram_4ff6de34 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_48 = 0x4000;
  uStack_24 = 1;
  iVar3 = FUN_ram_480cfa62(&puStack_4c);
  if (iVar3 != 0) {
    FUN_ram_4802a8a8(aiStack_6c,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_5c,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,aiStack_6c,&iStack_5c);
    FUN_ram_4802a59e(&iStack_5c);
    FUN_ram_4802a59e(aiStack_6c);
    iVar2 = DAT_ram_4ff5cbe8;
    iVar3 = DAT_ram_4ff5cbdc;
    uStack_74 = 200;
    puStack_70 = puStack_4c;
    aiStack_6c[0] = iStack_44;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_74,&puStack_70,aiStack_6c);
        DAT_ram_4ff5cbc8 = '\0';
      }
      iVar4 = aiStack_6c[0];
      if (aiStack_6c[0] == 0) {
        iVar4 = 1;
      }
      iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
      iVar5 = iVar2 + iVar3 * 0x1d40;
      *(int *)(iVar5 + 0x1cdc) = iVar4;
      if (iVar4 == 0) {
        if (*(char *)(iVar5 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (aiStack_6c[0] != 0) {
          FUN_ram_4ff45158(iVar4,puStack_70,aiStack_6c[0]);
          iVar4 = *(int *)(iVar5 + 0x1cdc);
        }
        iStack_5c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_5c + 0x44c) != '\0') && (*(char *)(iStack_5c + 0x44c) != '\x06')) {
          *(int *)(iStack_5c + 0x1ce0) = iVar4;
          *(int *)(iStack_5c + 0x1ce4) = aiStack_6c[0];
          *(undefined4 *)(iStack_5c + 0x1ce8) = 0;
          puStack_58 = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_74,"application/json",iStack_5c,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    return;
  }
LAB_ram_480d0c68:
  FUN_ram_4808cb66(0x1f7,"resource_error");
  return;
}


