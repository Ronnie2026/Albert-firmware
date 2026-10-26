/* Firmware entry: 0x480f99bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_speed_target_config_480f99bc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *****pppppuVar4;
  undefined1 ******ppppppuVar5;
  int iVar6;
  undefined1 ******ppppppuVar7;
  undefined1 ******ppppppuVar8;
  undefined1 *******pppppppuVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  undefined1 ****appppuStack_d4 [4];
  undefined1 ******local_c4 [3];
  byte bStack_b5;
  undefined1 *****apppppuStack_b4 [39];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(appppuStack_d4,"Cache-Control");
  FUN_ram_4802a8a8(local_c4,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,appppuStack_d4,local_c4);
  FUN_ram_4802a59e(local_c4);
  FUN_ram_4802a59e(appppuStack_d4);
  local_e0 = -1;
  iVar3 = FUN_ram_480377ea("driverId",0xffffffff,&local_e0);
  iVar10 = DAT_ram_4ff6dd80;
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if (iVar3 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,400,"application/json",
                     "{\"ok\":false,\"error\":\"invalid_driver\"}",0x25);
    return;
  }
  if ((local_e0 == DAT_ram_4ff6dd80) && (DAT_ram_4ff6dd80 == DAT_ram_4ff6dd38)) {
    if ((DAT_ram_4ff6dd36 == '\0') || (DAT_ram_4ff6dd35 == '\0')) {
      FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
      puVar11 = &DAT_ram_4ff61958;
      pppppppuVar9 = local_c4;
      do {
        ppppppuVar5 = (undefined1 ******)puVar11[1];
        ppppppuVar7 = (undefined1 ******)puVar11[2];
        ppppppuVar8 = (undefined1 ******)puVar11[3];
        *pppppppuVar9 = (undefined1 ******)*puVar11;
        pppppppuVar9[1] = ppppppuVar5;
        pppppppuVar9[2] = ppppppuVar7;
        pppppppuVar9[3] = ppppppuVar8;
        puVar11 = puVar11 + 4;
        pppppppuVar9 = pppppppuVar9 + 4;
      } while (puVar11 != (undefined4 *)&DAT_ram_4ff619f8);
      *pppppppuVar9 = _DAT_ram_4ff619f8;
      FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
      iVar6 = FUN_ram_480f6a02(iVar10,local_c4);
      if (iVar6 == 0) {
        FUN_ram_480381cc(local_c4,"settings_unavailable");
        FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x1f7,"application/json",local_c4);
        FUN_ram_4802a59e(local_c4);
        return;
      }
    }
    FUN_ram_480381cc(local_c4,0);
    if ((char)bStack_b5 < '\0') {
      local_c4[0] = (undefined1 ******)local_c4;
      local_c4[2] = (undefined1 ******)(bStack_b5 & 0x7f);
    }
    else if ((undefined1 *******)local_c4[0] == (undefined1 *******)0x0) {
      local_c4[2] = (undefined1 ******)0x0;
    }
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json",local_c4[0],local_c4[2]);
    FUN_ram_4802a59e(local_c4);
    return;
  }
  pcStack_d8 = "{\"ok\":false,\"error\":\"stale_driver\"}";
  uStack_dc = 0x199;
  appppuStack_d4[0] = (undefined1 ****)0x23;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    pppppuVar4 = (undefined1 *****)0x23;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_dc,&pcStack_d8,appppuStack_d4);
      DAT_ram_4ff5cbc8 = '\0';
      pppppuVar4 = (undefined1 *****)appppuStack_d4[0];
      if ((undefined1 *****)appppuStack_d4[0] == (undefined1 *****)0x0) {
        pppppuVar4 = (undefined1 *****)0x1;
      }
    }
    pppppuVar4 = (undefined1 *****)FUN_ram_4ff206d8(pppppuVar4,0x404);
    iVar10 = iVar2 + iVar6 * 0x1d40;
    *(undefined1 ******)(iVar10 + 0x1cdc) = pppppuVar4;
    if (pppppuVar4 == (undefined1 *****)0x0) {
      if (*(char *)(iVar10 + 0x44c) == '\0') {
        return;
      }
      FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
    }
    else {
      if ((undefined1 *****)appppuStack_d4[0] != (undefined1 *****)0x0) {
        FUN_ram_4ff45158(pppppuVar4,pcStack_d8,appppuStack_d4[0]);
        pppppuVar4 = *(undefined1 ******)(iVar10 + 0x1cdc);
      }
      local_c4[0] = (undefined1 ******)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
      if ((*(char *)(local_c4[0] + 0x113) == '\0') || (*(char *)(local_c4[0] + 0x113) == '\x06')) {
        return;
      }
      local_c4[0][0x738] = pppppuVar4;
      local_c4[0][0x739] = (undefined1 *****)appppuStack_d4[0];
      local_c4[0][0x73a] = (undefined1 *****)0x0;
      local_c4[1] = (undefined1 ******)&LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_dc,"application/json",local_c4[0],&LAB_ram_4802d3f2)
      ;
    }
  }
  return;
}


