/* Firmware entry: 0x480c2bda */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_health_480c2bda(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_64;
  char *pcStack_60;
  int iStack_5c;
  undefined1 *puStack_58;
  int iStack_54;
  undefined1 *puStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  pcStack_4c = DAT_ram_4ff6de34;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de34 == (char *)0x0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"health_buffer_unavailable\"}",0x30);
    return;
  }
  *DAT_ram_4ff6de34 = '\0';
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_48 = 0x4000;
  puStack_24 = &sedeleg;
  iVar4 = FUN_ram_480c0f3c(&pcStack_4c);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar3 = DAT_ram_4ff5cbdc;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if (iVar4 == 0) {
    pcStack_60 = "{\"ok\":false,\"error\":\"health_body_overflow\"}";
    uStack_64 = 0x1f7;
    iStack_54 = 0x2b;
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      iVar4 = 0x2b;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        iVar4 = 1;
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_64,&pcStack_60,&iStack_54);
        DAT_ram_4ff5cbc8 = '\0';
        if (iStack_54 != 0) {
          iVar4 = iStack_54;
        }
      }
      iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
      iVar3 = iVar3 * 0x1d40;
      iVar5 = iVar2 + iVar3;
      *(int *)(iVar5 + 0x1cdc) = iVar4;
      if (iVar4 == 0) {
        if (*(char *)(iVar5 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar3 + 0x1c,7);
        }
      }
      else {
        if (iStack_54 != 0) {
          FUN_ram_4ff45158(iVar4,pcStack_60,iStack_54);
          iVar4 = *(int *)(iVar5 + 0x1cdc);
        }
        iStack_5c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_5c + 0x44c) != '\0') && (*(char *)(iStack_5c + 0x44c) != '\x06')) {
          *(int *)(iStack_5c + 0x1ce0) = iVar4;
          *(int *)(iStack_5c + 0x1ce4) = iStack_54;
          *(undefined4 *)(iStack_5c + 0x1ce8) = 0;
          puStack_58 = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_64,"application/json",iStack_5c,
                           &LAB_ram_4802d3f2);
        }
      }
    }
  }
  else {
    pcStack_60 = pcStack_4c;
    iStack_5c = iStack_44;
    uStack_64 = 200;
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_64,&pcStack_60,&iStack_5c);
        DAT_ram_4ff5cbc8 = '\0';
      }
      iVar4 = iStack_5c;
      if (iStack_5c == 0) {
        iVar4 = 1;
      }
      iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
      iVar3 = iVar3 * 0x1d40;
      iVar5 = iVar2 + iVar3;
      *(int *)(iVar5 + 0x1cdc) = iVar4;
      if (iVar4 == 0) {
        if (*(char *)(iVar5 + 0x44c) == '\0') {
          return;
        }
        FUN_ram_48065e9c(iVar2 + iVar3 + 0x1c,7);
      }
      else {
        if (iStack_5c != 0) {
          FUN_ram_4ff45158(iVar4,pcStack_60,iStack_5c);
          iVar4 = *(int *)(iVar5 + 0x1cdc);
        }
        iStack_54 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_54 + 0x44c) == '\0') || (*(char *)(iStack_54 + 0x44c) == '\x06')) {
          return;
        }
        *(int *)(iStack_54 + 0x1ce0) = iVar4;
        *(int *)(iStack_54 + 0x1ce4) = iStack_5c;
        *(undefined4 *)(iStack_54 + 0x1ce8) = 0;
        puStack_50 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_64,"application/json",iStack_54,&LAB_ram_4802d3f2)
        ;
      }
    }
  }
  return;
}


