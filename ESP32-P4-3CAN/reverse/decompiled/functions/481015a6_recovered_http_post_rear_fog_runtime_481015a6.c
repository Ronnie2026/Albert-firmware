/* Firmware entry: 0x481015a6 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_rear_fog_runtime_481015a6(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *****pppppuVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uStack_128;
  undefined4 *****pppppuStack_124;
  uint uStack_120;
  char *pcStack_11c;
  undefined1 *puStack_118;
  undefined4 *****apppppuStack_114 [2];
  uint uStack_10c;
  byte bStack_105;
  int iStack_104;
  undefined1 *puStack_100;
  char cStack_8c;
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 == '\0') {
    uVar3 = FUN_ram_48036a9a("enabled",0);
    iVar4 = FUN_ram_481012a2(&DAT_ram_4ff60e20,uVar3);
    if (iVar4 == 0) {
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                       "{\"ok\":false,\"error\":\"pilot_not_permitted\"}",0x2a);
      return;
    }
    uVar3 = FUN_ram_48025ba6();
    FUN_ram_48053f2a(&iStack_104,&DAT_ram_4ff6983c,uVar3);
    FUN_ram_4802a8a8(apppppuStack_114,&DAT_ram_481c4164);
    FUN_ram_4802f022(apppppuStack_114,&DAT_ram_481c4274);
    FUN_ram_4802af2c(apppppuStack_114,&DAT_ram_481c3dec);
    FUN_ram_4802f022(apppppuStack_114,"rearFogPilotActive");
    pcVar8 = "true";
    if (cStack_8c == '\0') {
      pcVar8 = "false";
    }
    FUN_ram_4802af2c(apppppuStack_114,pcVar8);
    FUN_ram_4802af5a(apppppuStack_114,0x7d);
    iVar2 = DAT_ram_4ff5cbe8;
    iVar4 = DAT_ram_4ff5cbdc;
    if ((char)bStack_105 < '\0') {
      apppppuStack_114[0] = apppppuStack_114;
      uStack_10c = bStack_105 & 0x7f;
    }
    else if ((undefined4 ******)apppppuStack_114[0] == (undefined4 ******)0x0) {
      uStack_10c = 0;
    }
    uStack_128 = 200;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    pppppuStack_124 = apppppuStack_114[0];
    uStack_120 = uStack_10c;
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_128,&pppppuStack_124,&uStack_120);
        DAT_ram_4ff5cbc8 = '\0';
      }
      uVar5 = uStack_120;
      if (uStack_120 == 0) {
        uVar5 = 1;
      }
      iVar6 = FUN_ram_4ff206d8(uVar5,0x404);
      iVar9 = iVar2 + iVar4 * 0x1d40;
      *(int *)(iVar9 + 0x1cdc) = iVar6;
      if (iVar6 == 0) {
        if (*(char *)(iVar9 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (uStack_120 != 0) {
          FUN_ram_4ff45158(iVar6,pppppuStack_124,uStack_120);
          iVar6 = *(int *)(iVar9 + 0x1cdc);
        }
        pcVar8 = (char *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
        if ((pcVar8[0x44c] != '\0') && (pcVar8[0x44c] != '\x06')) {
          *(int *)(pcVar8 + 0x1ce0) = iVar6;
          *(uint *)(pcVar8 + 0x1ce4) = uStack_120;
          pcVar8[0x1ce8] = '\0';
          pcVar8[0x1ce9] = '\0';
          pcVar8[0x1cea] = '\0';
          pcVar8[0x1ceb] = '\0';
          puStack_118 = &LAB_ram_4802d3f2;
          pcStack_11c = pcVar8;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_128,"application/json",pcVar8,&LAB_ram_4802d3f2)
          ;
        }
      }
    }
    FUN_ram_4802a59e(apppppuStack_114);
  }
  else {
    pcStack_11c = "{\"ok\":false,\"error\":\"ota_busy\"}";
    uStack_120 = 0x199;
    apppppuStack_114[0] = (undefined4 *****)0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      pppppuVar7 = (undefined4 *****)0x1f;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_120,&pcStack_11c,apppppuStack_114);
        DAT_ram_4ff5cbc8 = '\0';
        pppppuVar7 = apppppuStack_114[0];
        if (apppppuStack_114[0] == (undefined4 *****)0x0) {
          pppppuVar7 = (undefined4 *****)0x1;
        }
      }
      iVar6 = FUN_ram_4ff206d8(pppppuVar7,0x404);
      iVar9 = iVar2 + iVar4 * 0x1d40;
      *(int *)(iVar9 + 0x1cdc) = iVar6;
      if (iVar6 == 0) {
        if (*(char *)(iVar9 + 0x44c) == '\0') {
          return;
        }
        FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
      }
      else {
        if (apppppuStack_114[0] != (undefined4 *****)0x0) {
          FUN_ram_4ff45158(iVar6,pcStack_11c,apppppuStack_114[0]);
          iVar6 = *(int *)(iVar9 + 0x1cdc);
        }
        iStack_104 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_104 + 0x44c) == '\0') || (*(char *)(iStack_104 + 0x44c) == '\x06')) {
          return;
        }
        *(int *)(iStack_104 + 0x1ce0) = iVar6;
        *(undefined4 ******)(iStack_104 + 0x1ce4) = apppppuStack_114[0];
        *(undefined4 *)(iStack_104 + 0x1ce8) = 0;
        puStack_100 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_120,"application/json",iStack_104,
                         &LAB_ram_4802d3f2);
      }
    }
  }
  return;
}


