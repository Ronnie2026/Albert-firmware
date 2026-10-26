/* Firmware entry: 0x4806d76e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_driver_profiles_4806d76e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ***pppuVar6;
  int iVar7;
  undefined4 uStack_4c;
  undefined4 *****pppppuStack_48;
  char *pcStack_44;
  undefined4 ***pppuStack_40;
  undefined1 *puStack_3c;
  undefined4 *****pppppuStack_30;
  undefined1 *puStack_2c;
  char *pcStack_28;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(&pppuStack_40,"Cache-Control");
  FUN_ram_4802a8a8(&pppppuStack_30,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&pppuStack_40,&pppppuStack_30);
  FUN_ram_4802a59e(&pppppuStack_30);
  FUN_ram_4802a59e(&pppuStack_40);
  iVar3 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  if (DAT_ram_4ff6dd78 == '\0') {
    pcStack_44 = "{\"ok\":false,\"error\":\"driver_storage_unavailable\"}";
    pppppuStack_48 = (undefined4 *****)0x1f7;
    pppuStack_40 = (undefined4 ****)0x31;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      ppppuVar5 = (undefined4 ****)0x31;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&pppppuStack_48,&pcStack_44,&pppuStack_40);
        DAT_ram_4ff5cbc8 = '\0';
        ppppuVar5 = (undefined4 ****)pppuStack_40;
        if ((undefined4 ****)pppuStack_40 == (undefined4 ****)0x0) {
          ppppuVar5 = (undefined4 ****)0x1;
        }
      }
      ppppuVar5 = (undefined4 ****)FUN_ram_4ff206d8(ppppuVar5,0x404);
      iVar7 = iVar3 + iVar2 * 0x1d40;
      *(undefined4 *****)(iVar7 + 0x1cdc) = ppppuVar5;
      if (ppppuVar5 == (undefined4 ****)0x0) {
        if (*(char *)(iVar7 + 0x44c) == '\0') {
          return;
        }
        FUN_ram_48065e9c(iVar3 + iVar2 * 0x1d40 + 0x1c,7);
      }
      else {
        if ((undefined4 ****)pppuStack_40 != (undefined4 ****)0x0) {
          FUN_ram_4ff45158(ppppuVar5,pcStack_44,pppuStack_40);
          ppppuVar5 = *(undefined4 *****)(iVar7 + 0x1cdc);
        }
        pppppuStack_30 = (undefined4 *****)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
        if ((*(char *)(pppppuStack_30 + 0x113) == '\0') ||
           (*(char *)(pppppuStack_30 + 0x113) == '\x06')) {
          return;
        }
        pppppuStack_30[0x738] = ppppuVar5;
        pppppuStack_30[0x739] = (undefined4 ****)pppuStack_40;
        pppppuStack_30[0x73a] = (undefined4 ****)0x0;
        puStack_2c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,pppppuStack_48,"application/json",pppppuStack_30,
                         &LAB_ram_4802d3f2);
      }
    }
  }
  else {
    FUN_ram_48052ffe(&pppppuStack_30);
    iVar3 = DAT_ram_4ff5cbe8;
    iVar2 = DAT_ram_4ff5cbdc;
    if ((char)bStack_21 < '\0') {
      pppppuStack_30 = &pppppuStack_30;
      pcStack_28 = (char *)(bStack_21 & 0x7f);
    }
    else if ((undefined4 ******)pppppuStack_30 == (undefined4 ******)0x0) {
      pcStack_28 = (char *)0x0;
    }
    uStack_4c = 200;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    pppppuStack_48 = pppppuStack_30;
    pcStack_44 = pcStack_28;
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_4c,&pppppuStack_48,&pcStack_44);
        DAT_ram_4ff5cbc8 = '\0';
      }
      ppuVar4 = (undefined4 **)pcStack_44;
      if ((undefined4 **)pcStack_44 == (undefined4 **)0x0) {
        ppuVar4 = (undefined4 **)0x1;
      }
      ppuVar4 = (undefined4 **)FUN_ram_4ff206d8(ppuVar4,0x404);
      iVar7 = iVar3 + iVar2 * 0x1d40;
      *(undefined4 ***)(iVar7 + 0x1cdc) = ppuVar4;
      if (ppuVar4 == (undefined4 **)0x0) {
        if (*(char *)(iVar7 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar3 + iVar2 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if ((undefined4 **)pcStack_44 != (undefined4 **)0x0) {
          FUN_ram_4ff45158(ppuVar4,pppppuStack_48,pcStack_44);
          ppuVar4 = *(undefined4 ***)(iVar7 + 0x1cdc);
        }
        pppuVar6 = (undefined4 ***)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
        if ((*(char *)(pppuVar6 + 0x113) != '\0') && (*(char *)(pppuVar6 + 0x113) != '\x06')) {
          pppuVar6[0x738] = ppuVar4;
          pppuVar6[0x739] = (undefined4 **)pcStack_44;
          pppuVar6[0x73a] = (undefined4 **)0x0;
          puStack_3c = &LAB_ram_4802d3f2;
          pppuStack_40 = pppuVar6;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_4c,"application/json",pppuVar6,&LAB_ram_4802d3f2
                          );
        }
      }
    }
    FUN_ram_4802a59e(&pppppuStack_30);
  }
  return;
}


