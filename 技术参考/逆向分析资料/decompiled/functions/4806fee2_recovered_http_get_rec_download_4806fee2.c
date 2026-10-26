/* Firmware entry: 0x4806fee2 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_rec_download_4806fee2(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_b4;
  undefined4 uStack_a4;
  char *apcStack_a0 [4];
  undefined4 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar13 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de08 == '\0') {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
    iVar7 = DAT_ram_4ff6df24;
    iVar2 = DAT_ram_4ff6df20;
    iVar13 = DAT_ram_4ff6df18;
    fence();
    fence();
    if ((((DAT_ram_4ff6df04 != '\0') || (DAT_ram_4ff6defa == '\0')) || (DAT_ram_4ff6df24 == 0)) ||
       (uVar3 = (undefined2)DAT_ram_4ff6df18, DAT_ram_4ff6df18 == 0)) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
      FUN_ram_4802cf56(&uStack_80);
      if (uStack_80._1_1_ == '\0') {
        pcVar11 = "No recording saved yet";
        uVar12 = 0x194;
      }
      else {
        pcVar11 = "Stop recording before download";
        uVar12 = 0x199;
      }
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar12,"text/plain",pcVar11);
      return;
    }
    uStack_b4 = 0;
    if ((DAT_ram_4ff6def9 != '\0') && (DAT_ram_4ff6df18 == DAT_ram_4ff6df20)) {
      uStack_b4 = DAT_ram_4ff6df1c;
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
    FUN_ram_4802a8a8(&uStack_80,"format");
    iVar5 = FUN_ram_4802b18e(&uStack_80,"plain");
    iVar10 = DAT_ram_4ff5cbe8;
    iVar6 = DAT_ram_4ff5cbdc;
    if ((iVar5 == 0) ||
       (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0')) {
      iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(int *)(iVar5 + 0x1cc4) != 0) {
        puVar4 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
        uVar14 = 0;
        do {
          iVar8 = FUN_ram_4802b18e(&uStack_80,*puVar4);
          if (iVar8 != 0) {
            FUN_ram_4802a8a8(apcStack_a0,
                             *(undefined4 *)(iVar10 + (iVar6 * 0x3a8 + uVar14) * 8 + 0xcc8));
            goto LAB_ram_4806ffdc;
          }
          uVar14 = uVar14 + 1;
          puVar4 = puVar4 + 2;
        } while (uVar14 < *(uint *)(iVar5 + 0x1cc4));
      }
      FUN_ram_4802a8a8(apcStack_a0,&DAT_ram_481df390);
    }
    else {
      puVar9 = *(undefined1 **)(iVar5 + 0x43c);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_ram_481df390;
      }
      FUN_ram_4802a888(apcStack_a0,puVar9,*(undefined4 *)(iVar5 + 0x438));
    }
LAB_ram_4806ffdc:
    FUN_ram_4802a59e(&uStack_80);
    FUN_ram_4802b810(apcStack_a0);
    iVar6 = FUN_ram_4802b18e(apcStack_a0,&DAT_ram_481c85dc);
    uStack_80 = 0x41433450;
    puStack_7c = (undefined1 *)0x4345524e;
    iVar10 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    uStack_78 = 0x130002;
    *(undefined1 **)(iVar10 + 0x1cec) = &LAB_ram_4802c482;
    *(undefined4 *)(iVar10 + 0x1cf0) = 0;
    DAT_ram_4ff487fc = uStack_b4;
    DAT_ram_4ff48908 = 0x4345;
    DAT_ram_4ff48904 = 0x4143;
    DAT_ram_4ff48810 = (byte)iVar6 ^ 1;
    DAT_ram_4ff4890c = 0x13;
    DAT_ram_4ff48910 = (undefined1)((uint)iVar13 >> 0x10);
    DAT_ram_4ff48902 = 0x3450;
    DAT_ram_4ff487f0 = iVar7;
    DAT_ram_4ff487f4 = iVar13;
    DAT_ram_4ff487f8 = iVar2;
    DAT_ram_4ff4890e = uVar3;
    DAT_ram_4ff48800 = 0;
    DAT_ram_4ff4880c = 0;
    DAT_ram_4ff48808 = 0;
    DAT_ram_4ff48804 = 0;
    DAT_ram_4ff48911 = (undefined1)((uint)iVar13 >> 0x18);
    DAT_ram_4ff48906 = 0x524e;
    DAT_ram_4ff4890a = 2;
    DAT_ram_4ff6de08 = '\x01';
    DAT_ram_4ff48811 = 1;
    FUN_ram_4802a8a8(&puStack_90,"Content-Disposition");
    if (iVar6 == 0) {
      pcVar11 = "attachment; filename=\"p1_3can_recording.csv\"";
    }
    else {
      pcVar11 = "attachment; filename=\"p1_3can_recording.bin\"";
    }
    FUN_ram_4802a8a8(&uStack_80,pcVar11);
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&puStack_90,&uStack_80);
    FUN_ram_4802a59e(&uStack_80);
    FUN_ram_4802a59e(&puStack_90);
    FUN_ram_4802a8a8(&puStack_90,"Cache-Control");
    FUN_ram_4802a8a8(&uStack_80,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&puStack_90,&uStack_80);
    FUN_ram_4802a59e(&uStack_80);
    FUN_ram_4802a59e(&puStack_90);
    if (iVar6 == 0) {
      pcVar11 = "text/csv; charset=utf-8";
      iVar13 = -1;
    }
    else {
      iVar13 = iVar13 * 0x13 + 0x10;
      pcVar11 = "application/octet-stream";
    }
    puStack_90 = &DAT_ram_4ff487f0;
    puStack_8c = &LAB_ram_4808c164;
    iVar13 = FUN_ram_48066484(&DAT_ram_4ff5cb9c,200,pcVar11,&DAT_ram_4ff487f0,&LAB_ram_4808c164,
                              iVar13);
    if (iVar13 == 0) {
      DAT_ram_4ff6de08 = '\0';
    }
    FUN_ram_4802a59e(apcStack_a0);
  }
  else {
    apcStack_a0[0] = "{\"ok\":false,\"error\":\"recording_download_busy\"}";
    uStack_a4 = 0x199;
    puStack_90 = (undefined4 *)0x2e;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      puVar4 = (undefined4 *)0x2e;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_a4,apcStack_a0,&puStack_90);
        DAT_ram_4ff5cbc8 = '\0';
        puVar4 = puStack_90;
        if (puStack_90 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x1;
        }
      }
      iVar7 = FUN_ram_4ff206d8(puVar4,0x404);
      iVar6 = iVar2 + iVar13 * 0x1d40;
      *(int *)(iVar6 + 0x1cdc) = iVar7;
      if (iVar7 == 0) {
        if (*(char *)(iVar6 + 0x44c) == '\0') {
          return;
        }
        FUN_ram_48065e9c(iVar2 + iVar13 * 0x1d40 + 0x1c,7);
      }
      else {
        if (puStack_90 != (undefined4 *)0x0) {
          FUN_ram_4ff45158(iVar7,apcStack_a0[0],puStack_90);
          iVar7 = *(int *)(iVar6 + 0x1cdc);
        }
        uStack_80 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(uStack_80 + 0x44c) == '\0') || (*(char *)(uStack_80 + 0x44c) == '\x06')) {
          return;
        }
        *(int *)(uStack_80 + 0x1ce0) = iVar7;
        *(undefined4 **)(uStack_80 + 0x1ce4) = puStack_90;
        *(undefined4 *)(uStack_80 + 0x1ce8) = 0;
        puStack_7c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_a4,"application/json",uStack_80,&LAB_ram_4802d3f2)
        ;
      }
    }
  }
  return;
}


