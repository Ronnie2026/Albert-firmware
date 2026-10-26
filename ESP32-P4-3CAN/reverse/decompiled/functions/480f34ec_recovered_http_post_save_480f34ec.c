/* Firmware entry: 0x480f34ec */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_save_480f34ec(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_98;
  int *piStack_94;
  char *pcStack_90;
  int iStack_8c;
  undefined1 *puStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    pcStack_90 = "{\"ok\":false,\"error\":\"ota_busy\"}";
    piStack_94 = (int *)0x199;
    iStack_8c = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 != '\x06') {
      iVar10 = 0x1f;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&piStack_94,&pcStack_90,&iStack_8c);
        DAT_ram_4ff5cbc8 = '\0';
        iVar10 = iStack_8c;
        if (iStack_8c == 0) {
          iVar10 = 1;
        }
      }
      iVar10 = FUN_ram_4ff206d8(iVar10,0x404);
      iVar11 = iVar2 + iVar4 * 0x1d40;
      *(int *)(iVar11 + 0x1cdc) = iVar10;
      if (iVar10 != 0) {
        if (iStack_8c != 0) {
          FUN_ram_4ff45158(iVar10,pcStack_90,iStack_8c);
          iVar10 = *(int *)(iVar11 + 0x1cdc);
        }
        iStack_84 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if (*(char *)(iStack_84 + 0x44c) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        if (*(char *)(iStack_84 + 0x44c) == '\x06') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        *(int *)(iStack_84 + 0x1ce0) = iVar10;
        *(int *)(iStack_84 + 0x1ce4) = iStack_8c;
        *(undefined4 *)(iStack_84 + 0x1ce8) = 0;
        puStack_80 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,piStack_94,"application/json",iStack_84,&LAB_ram_4802d3f2
                        );
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (*(char *)(iVar11 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (DAT_ram_4ff6de6e == '\0') {
    iVar4 = FUN_ram_48035914();
    if (DAT_ram_4ff6de6e == '\0') goto LAB_ram_480f354a;
LAB_ram_480f35f0:
    DAT_ram_4ff5ca6c = DAT_ram_4ff5ca6c + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 8;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    uVar5 = FUN_ram_480ee046();
    if (DAT_ram_4ff6de6e == '\0') goto LAB_ram_480f3556;
LAB_ram_480f361c:
    DAT_ram_4ff5ca64 = DAT_ram_4ff5ca64 + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 2;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    uVar6 = FUN_ram_480ee046();
  }
  else {
    DAT_ram_4ff5ca60 = DAT_ram_4ff5ca60 + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 1;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    iVar4 = FUN_ram_480ee046();
    if (DAT_ram_4ff6de6e != '\0') goto LAB_ram_480f35f0;
LAB_ram_480f354a:
    uVar5 = FUN_ram_48031876();
    if (DAT_ram_4ff6de6e != '\0') goto LAB_ram_480f361c;
LAB_ram_480f3556:
    uVar6 = FUN_ram_48031a56();
  }
  DAT_ram_4ff5ca78 = DAT_ram_4ff5ca78 + 1;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x40;
  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
  uVar7 = FUN_ram_480ee046();
  uVar8 = 0;
  if (DAT_ram_4ff6dd78 != '\0') {
    uVar8 = FUN_ram_480aecea();
  }
  if (iVar4 == 0) {
    uVar3 = 1;
  }
  else {
    if (uVar5 != 0) {
      uVar3 = 0;
      if (uVar6 == 0) {
        uVar5 = 4;
      }
      else {
        uVar5 = 0;
        if ((uVar7 != 0) && (uVar8 != 0)) {
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,200,"application/json",
                           "{\"ok\":true,\"persistence\":\"stored\"}");
          return;
        }
      }
      goto LAB_ram_480f3748;
    }
    uVar3 = 0;
  }
  uVar3 = ((uVar5 ^ 1) & 0xff) << 1 | uVar3;
  uVar5 = ((uVar6 ^ 1) & 0xff) << 2;
LAB_ram_480f3748:
  memset(&iStack_84,0,100);
  FUN_ram_4819ad74(&iStack_84,100,"{\"ok\":false,\"error\":\"flash_write\",\"saveFailedMask\":%u}",
                   ((uVar7 ^ 1) & 0xff) << 3 | ((uVar8 ^ 1) & 0xff) << 4 | uVar5 | uVar3);
  pcStack_90 = (char *)strlen((char *)&iStack_84);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  uStack_98 = 500;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    piStack_94 = &iStack_84;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_98,&piStack_94,&pcStack_90);
      DAT_ram_4ff5cbc8 = '\0';
    }
    pcVar9 = pcStack_90;
    if (pcStack_90 == (char *)0x0) {
      pcVar9 = (char *)0x1;
    }
    iVar10 = FUN_ram_4ff206d8(pcVar9,0x404);
    iVar11 = iVar2 + iVar4 * 0x1d40;
    *(int *)(iVar11 + 0x1cdc) = iVar10;
    if (iVar10 == 0) {
      if (*(char *)(iVar11 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
        return;
      }
    }
    else {
      if (pcStack_90 != (char *)0x0) {
        FUN_ram_4ff45158(iVar10,piStack_94,pcStack_90);
        iVar10 = *(int *)(iVar11 + 0x1cdc);
      }
      iStack_8c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_8c + 0x44c) != '\0') && (*(char *)(iStack_8c + 0x44c) != '\x06')) {
        *(int *)(iStack_8c + 0x1ce0) = iVar10;
        *(char **)(iStack_8c + 0x1ce4) = pcStack_90;
        *(undefined4 *)(iStack_8c + 0x1ce8) = 0;
        puStack_88 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_98,"application/json",iStack_8c,&LAB_ram_4802d3f2)
        ;
        return;
      }
    }
  }
  return;
}


