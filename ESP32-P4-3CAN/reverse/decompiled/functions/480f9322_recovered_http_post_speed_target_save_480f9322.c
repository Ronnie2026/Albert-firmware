/* Firmware entry: 0x480f9322 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_speed_target_save_480f9322(void)

{
  char cVar1;
  short *psVar2;
  undefined4 *****pppppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 ******ppppppuVar7;
  undefined4 ****ppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 uVar10;
  undefined4 ****ppppuVar11;
  undefined4 uVar12;
  undefined4 *****pppppuVar13;
  undefined4 ****ppppuVar14;
  undefined4 uVar15;
  short *psVar16;
  short sVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 ****ppppuVar20;
  undefined4 *puVar21;
  short *psVar22;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 *****apppppuStack_164 [4];
  undefined4 local_154;
  undefined4 uStack_118;
  undefined4 ****local_114;
  undefined1 *puStack_110;
  undefined4 ***pppuStack_d8;
  undefined4 *****local_d4 [3];
  undefined4 uStack_c8;
  byte bStack_c5;
  undefined4 ****appppuStack_c4 [38];
  
  iVar4 = DAT_ram_4ff6dd80;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (((DAT_ram_4ff6df30 != '\0') || (DAT_ram_4ff5c5c0 != '\0')) || (DAT_ram_4ff5c5ca != '\0')) {
    FUN_ram_480381cc(local_d4,"ota_busy");
    iVar5 = DAT_ram_4ff5cbe8;
    iVar4 = DAT_ram_4ff5cbdc;
    if ((char)bStack_c5 < '\0') {
      local_d4[2] = (undefined4 *****)(bStack_c5 & 0x7f);
      local_d4[0] = local_d4;
    }
    else if ((undefined4 ******)local_d4[0] == (undefined4 ******)0x0) {
      local_d4[2] = (undefined4 *****)0x0;
    }
    iStack_168 = 0x199;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    apppppuStack_164[0] = local_d4[0];
    local_154 = local_d4[2];
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&iStack_168,apppppuStack_164,&local_154);
        DAT_ram_4ff5cbc8 = '\0';
      }
      ppppuVar8 = local_154;
      if (local_154 == (undefined4 ****)0x0) {
        ppppuVar8 = (undefined4 ****)0x1;
      }
      ppppuVar8 = (undefined4 ****)FUN_ram_4ff206d8(ppppuVar8,0x404);
      iVar6 = iVar5 + iVar4 * 0x1d40;
      *(undefined4 *****)(iVar6 + 0x1cdc) = ppppuVar8;
      if (ppppuVar8 == (undefined4 ****)0x0) {
        if (*(char *)(iVar6 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar5 + iVar4 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (local_154 != (undefined4 ****)0x0) {
          FUN_ram_4ff45158(ppppuVar8,apppppuStack_164[0],local_154);
          ppppuVar8 = *(undefined4 *****)(iVar6 + 0x1cdc);
        }
        pppppuVar3 = (undefined4 *****)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
        if ((*(char *)(pppppuVar3 + 0x113) != '\0') && (*(char *)(pppppuVar3 + 0x113) != '\x06')) {
          pppppuVar3[0x738] = ppppuVar8;
          pppppuVar3[0x739] = local_154;
          pppppuVar3[0x73a] = (undefined4 ****)0x0;
          puStack_110 = &LAB_ram_4802d3f2;
          local_114 = pppppuVar3;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,iStack_168,"application/json",pppppuVar3,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    FUN_ram_4802a59e(local_d4);
    return;
  }
  if ((DAT_ram_4ff6dd36 == '\0') || (DAT_ram_4ff6dd35 == '\0')) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
    puVar18 = &DAT_ram_4ff61958;
    ppppppuVar7 = local_d4;
    do {
      pppppuVar3 = (undefined4 *****)puVar18[1];
      pppppuVar9 = (undefined4 *****)puVar18[2];
      pppppuVar13 = (undefined4 *****)puVar18[3];
      *ppppppuVar7 = (undefined4 *****)*puVar18;
      ppppppuVar7[1] = pppppuVar3;
      ppppppuVar7[2] = pppppuVar9;
      ppppppuVar7[3] = pppppuVar13;
      puVar18 = puVar18 + 4;
      ppppppuVar7 = ppppppuVar7 + 4;
    } while (puVar18 != (undefined4 *)&DAT_ram_4ff619f8);
    *ppppppuVar7 = _DAT_ram_4ff619f8;
    FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
    iVar4 = FUN_ram_480f6a02(iVar4,local_d4);
    if (iVar4 == 0) {
      FUN_ram_480381cc(local_d4,"settings_unavailable");
      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x1f7,"application/json",local_d4);
      FUN_ram_4802a59e(local_d4);
      return;
    }
  }
  ppppppuVar7 = local_d4;
  local_170 = -1;
  iStack_16c = -1;
  iStack_168 = -1;
  iVar4 = FUN_ram_480377ea("driverId",0xffffffff,&local_170);
  if ((iVar4 == 0) ||
     (iVar5 = FUN_ram_480377ea("revision",0xffffffff,&iStack_16c), iVar4 = local_170, iVar5 == 0)) {
    FUN_ram_480381cc(ppppppuVar7,"invalid_speed_target");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",ppppppuVar7);
    FUN_ram_4802a59e(ppppppuVar7);
    return;
  }
  if ((local_170 != DAT_ram_4ff6dd80) || (local_170 != DAT_ram_4ff6dd38)) {
    FUN_ram_480381cc(ppppppuVar7,"stale_driver");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x199,"application/json",ppppppuVar7);
    FUN_ram_4802a59e(ppppppuVar7);
    return;
  }
  if (iStack_16c == DAT_ram_4ff47e5c) {
    iVar5 = FUN_ram_480377ea("customSpeedEnabled",1,&iStack_168);
    if (iVar5 != 0) {
      psVar22 = (short *)((int)&local_154 + 2);
      memset((void *)((int)&local_154 + 2),0,0x3c);
      psVar2 = (short *)((int)&uStack_118 + 2);
      sVar17 = 5;
      psVar16 = psVar22;
      do {
        *psVar16 = sVar17;
        sVar17 = sVar17 + 5;
        psVar16 = psVar16 + 1;
      } while (psVar16 != psVar2);
      psVar16 = (short *)((int)&local_154 + 2);
      local_154._0_2_ = CONCAT11(1,iStack_168 != 0);
      iVar5 = 5;
      do {
        local_d4[0] = (undefined4 *****)0x0;
        local_d4[1] = (undefined4 *****)0x0;
        local_d4[2] = (undefined4 *****)0x0;
        uStack_c8 = 0;
        appppuStack_c4[0] = (undefined4 ****)0x0;
        FUN_ram_4819ad74(ppppppuVar7,0x14,"target%u",iVar5);
        apppppuStack_164[0] = (undefined4 *****)0x0;
        iVar6 = FUN_ram_480377ea(ppppppuVar7,0xff,apppppuStack_164);
        if ((iVar6 == 0) || (iVar5 = iVar5 + 5, apppppuStack_164[0] == (undefined4 *****)0x0)) {
          FUN_ram_480381cc(&local_114,"invalid_speed_target");
          FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",&local_114);
          ppppppuVar7 = (undefined4 ******)&local_114;
          goto LAB_ram_480f975e;
        }
        *psVar16 = (short)apppppuStack_164[0];
        psVar16 = psVar16 + 1;
      } while (psVar16 != psVar2);
      do {
        sVar17 = *psVar22;
        psVar22 = psVar22 + 1;
        if (0xfe < (ushort)(sVar17 - 1U)) {
          FUN_ram_480381cc(ppppppuVar7,"invalid_speed_target");
          uVar10 = 400;
          goto LAB_ram_480f97e4;
        }
      } while (psVar22 != psVar2);
      puVar21 = &DAT_ram_4ff5c4c4;
      puVar18 = &DAT_ram_4ff5c4c4;
      pppppuVar3 = &local_114;
      do {
        ppppuVar20 = (undefined4 ****)puVar18[1];
        ppppuVar8 = (undefined4 ****)puVar18[2];
        ppppuVar11 = (undefined4 ****)puVar18[3];
        *pppppuVar3 = (undefined4 ****)*puVar18;
        ppppuVar14 = (undefined4 ****)puVar18[4];
        pppppuVar3[1] = ppppuVar20;
        pppppuVar3[2] = ppppuVar8;
        pppppuVar3[3] = ppppuVar11;
        pppppuVar3[4] = ppppuVar14;
        puVar18 = puVar18 + 5;
        pppppuVar3 = pppppuVar3 + 5;
      } while (puVar18 != (undefined4 *)&DAT_ram_4ff5c500);
      *(undefined2 *)pppppuVar3 = _DAT_ram_4ff5c500;
      iVar5 = FUN_ram_480f66c0(&DAT_ram_4ff60e20,&local_154,0);
      if (iVar5 == 0) {
        FUN_ram_480381cc(ppppppuVar7,"runtime_rejected");
        uVar10 = 0x199;
      }
      else {
        puVar19 = &local_154;
        puVar18 = puVar21;
        do {
          uVar15 = puVar19[1];
          uVar10 = puVar19[2];
          *puVar18 = *puVar19;
          uVar12 = puVar19[3];
          puVar18[1] = uVar15;
          uVar15 = puVar19[4];
          puVar18[2] = uVar10;
          puVar18[3] = uVar12;
          puVar18[4] = uVar15;
          cVar1 = DAT_ram_4ff6dd36;
          puVar19 = puVar19 + 5;
          puVar18 = puVar18 + 5;
        } while (puVar19 != &uStack_118);
        *(undefined2 *)puVar18 = *(undefined2 *)puVar19;
        if (cVar1 != '\0') {
          psVar16 = (short *)((int)&DAT_ram_4ff5c4c4 + 2);
          do {
            sVar17 = *psVar16;
            psVar16 = psVar16 + 1;
            if (0xfe < (ushort)(sVar17 - 1U)) goto LAB_ram_480f988e;
          } while (psVar16 != (short *)&DAT_ram_4ff5c502);
          iVar5 = FUN_ram_4807df90(DAT_ram_4ff6dd38,&DAT_ram_4ff5c4c4);
          if (iVar5 != 0) {
            DAT_ram_4ff47e5c = DAT_ram_4ff47e5c + 1;
            DAT_ram_4ff6dd35 = '\x01';
            if (DAT_ram_4ff47e5c == 0) {
              DAT_ram_4ff47e5c = 1;
            }
            FUN_ram_4802a8a8(apppppuStack_164,"Cache-Control");
            FUN_ram_4802a8a8(ppppppuVar7,"no-store");
            FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,apppppuStack_164,ppppppuVar7);
            FUN_ram_4802a59e(ppppppuVar7);
            FUN_ram_4802a59e(apppppuStack_164);
            FUN_ram_480381cc(ppppppuVar7,0);
            uVar10 = 200;
            goto LAB_ram_480f97e4;
          }
        }
LAB_ram_480f988e:
        pppppuVar3 = &local_114;
        do {
          ppppuVar8 = pppppuVar3[1];
          ppppuVar11 = pppppuVar3[2];
          ppppuVar14 = pppppuVar3[3];
          ppppuVar20 = pppppuVar3[4];
          *puVar21 = *pppppuVar3;
          puVar21[1] = ppppuVar8;
          puVar21[2] = ppppuVar11;
          puVar21[3] = ppppuVar14;
          puVar21[4] = ppppuVar20;
          pppppuVar3 = pppppuVar3 + 5;
          puVar21 = puVar21 + 5;
        } while (pppppuVar3 != (undefined4 *****)&pppuStack_d8);
        *(undefined2 *)puVar21 = *(undefined2 *)pppppuVar3;
        iVar5 = FUN_ram_480f66c0(&DAT_ram_4ff60e20,&local_114,0);
        DAT_ram_4ff6dd35 = '\0';
        uVar10 = 0x1f7;
        if (iVar5 != 0) {
          FUN_ram_4805883a(ppppppuVar7,&DAT_ram_4ff60e20);
          FUN_ram_480f6a02(iVar4,ppppppuVar7);
          uVar10 = 500;
        }
        FUN_ram_480381cc(ppppppuVar7,"flash_write");
      }
LAB_ram_480f97e4:
      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,uVar10,"application/json",ppppppuVar7);
LAB_ram_480f975e:
      FUN_ram_4802a59e(ppppppuVar7);
      return;
    }
    FUN_ram_480381cc(ppppppuVar7,"invalid_speed_target");
    uVar10 = 400;
  }
  else {
    FUN_ram_480381cc(ppppppuVar7,"stale_revision");
    uVar10 = 0x199;
  }
  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,uVar10,"application/json",ppppppuVar7);
  FUN_ram_4802a59e(ppppppuVar7);
  return;
}


