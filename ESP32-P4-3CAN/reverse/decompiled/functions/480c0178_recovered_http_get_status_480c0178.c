/* Firmware entry: 0x480c0178 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_status_480c0178(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_a0;
  char *pcStack_9c;
  int aiStack_98 [3];
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_48025ba6();
  uStack_30 = FUN_ram_4ff21a0a();
  iVar5 = (int)uStack_30;
  uStack_60 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_58 = 2;
  uStack_5c = uVar3;
  if (DAT_ram_4ff6dd20 == (undefined1 *)0x0) {
    DAT_ram_4ff6dd20 = (undefined1 *)FUN_ram_4ff206d8(0x2800,0x404);
    if (DAT_ram_4ff6dd20 == (undefined1 *)0x0) {
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                       "{\"ok\":false,\"error\":\"status_buffer_unavailable\"}",0x30);
      return;
    }
  }
  puStack_8c = DAT_ram_4ff6dd20;
  *DAT_ram_4ff6dd20 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_88 = 0x2800;
  uStack_64 = 1;
  iVar4 = FUN_ram_480be2be(&puStack_8c);
  uVar3 = uStack_84;
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if (iVar4 == 0) {
    pcStack_9c = "{\"ok\":false,\"error\":\"status_buffer_unavailable\"}";
    local_a0 = 0x1f7;
    aiStack_98[0] = 0x30;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 == '\0') || (cVar1 == '\x06')) {
      return;
    }
    iVar5 = 0x30;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&local_a0,&pcStack_9c,aiStack_98);
      DAT_ram_4ff5cbc8 = '\0';
      iVar5 = aiStack_98[0];
      if (aiStack_98[0] == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar4 = iVar2 + iVar6 * 0x1d40;
    *(int *)(iVar4 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar4 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
    }
    else {
      if (aiStack_98[0] != 0) {
        FUN_ram_4ff45158(iVar5,pcStack_9c,aiStack_98[0]);
        iVar5 = *(int *)(iVar4 + 0x1cdc);
      }
      iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iVar6 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (*(char *)(iVar6 + 0x44c) == '\x06') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(int *)(iVar6 + 0x1ce0) = iVar5;
      *(int *)(iVar6 + 0x1ce4) = aiStack_98[0];
      *(undefined4 *)(iVar6 + 0x1ce8) = 0;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,local_a0,"application/json",iVar6,&LAB_ram_4802d3f2);
    }
    return;
  }
  iStack_54 = FUN_ram_4ff21a0a();
  iStack_54 = iStack_54 - iVar5;
  uStack_48 = uVar3;
  FUN_ram_48068356(puStack_8c,uVar3,&uStack_60);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return;
}


