/* Firmware entry: 0x480e0d32 */

int FUN_ram_480e0d32(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  void *pvVar17;
  undefined4 *puVar18;
  undefined1 **ppuVar19;
  byte bVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  char cVar26;
  undefined1 **ppuVar27;
  void *pvVar28;
  undefined8 uVar29;
  undefined1 *local_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  code *pcStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcStack_50 = FUN_ram_4ff209c6;
  puStack_54 = &LAB_ram_4802e2e0;
  FUN_ram_48129532(&puStack_54);
  ppuVar27 = &local_5c;
  DAT_ram_4ff6df2c = param_1;
  uVar29 = FUN_ram_48029728(&DAT_ram_4ff6dc18);
  uVar15 = (uint)((ulonglong)uVar29 >> 0x20);
  local_5c = (undefined1 *)0x0;
  uStack_58 = 0;
  uVar22 = 0;
  ppuVar19 = ppuVar27;
  do {
    bVar20 = (byte)((uint)uVar29 >> (uVar22 & 0x1f)) |
             (byte)((uVar15 << 1) << (0x1f - uVar22 & 0x1f));
    if (-1 < (int)(uVar22 - 0x20)) {
      bVar20 = (byte)(uVar15 >> (uVar22 - 0x20 & 0x1f));
    }
    *(byte *)((int)ppuVar19 + 7) = bVar20;
    uVar22 = uVar22 + 8;
    ppuVar19 = (undefined1 **)((int)ppuVar19 + -1);
  } while (uVar22 != 0x40);
  FUN_ram_4802a8a8(&puStack_54,&DAT_ram_481df390);
  iVar12 = FUN_ram_4802a79a(&puStack_54,0x10);
  if (iVar12 != 0) {
    do {
      bVar20 = *(byte *)ppuVar27;
      ppuVar27 = (undefined1 **)((int)ppuVar27 + 1);
      FUN_ram_4802af5a(&puStack_54,"0123456789abcdef"[bVar20 >> 4]);
      FUN_ram_4802af5a(&puStack_54,"0123456789abcdef"[bVar20 & 0xf]);
    } while (&puStack_54 != ppuVar27);
  }
  FUN_ram_4802ad2c(&DAT_ram_4ff5c870,&puStack_54);
  FUN_ram_4802a59e(&puStack_54);
  uVar13 = FUN_ram_480295f8(&DAT_ram_4ff6dc18);
  FUN_ram_4802ad46(&DAT_ram_4ff5c860,uVar13);
  uVar13 = FUN_ram_480295e4(&DAT_ram_4ff6dc18);
  FUN_ram_4802a970(&puStack_54,uVar13,10);
  FUN_ram_4802ad2c(&DAT_ram_4ff5c850,&puStack_54);
  FUN_ram_4802a59e(&puStack_54);
  iVar12 = FUN_ram_480001f0();
  if (iVar12 == 0) {
    FUN_ram_4802a8a8(&puStack_54,&DAT_ram_481df390);
  }
  else {
    FUN_ram_4802a8a8(&puStack_54,&DAT_ram_481df390);
    iVar14 = FUN_ram_4802a79a(&puStack_54,0x40);
    if (iVar14 != 0) {
      pbVar24 = (byte *)(iVar12 + 0x90);
      do {
        pbVar25 = pbVar24 + 1;
        FUN_ram_4802af5a(&puStack_54,"0123456789abcdef"[*pbVar24 >> 4]);
        FUN_ram_4802af5a(&puStack_54,"0123456789abcdef"[*pbVar24 & 0xf]);
        pbVar24 = pbVar25;
      } while ((byte *)(iVar12 + 0xb0) != pbVar25);
    }
  }
  FUN_ram_4802ad2c(&DAT_ram_4ff5c840,&puStack_54);
  FUN_ram_4802a59e(&puStack_54);
  uVar15 = FUN_ram_4ff2d260();
  ppuVar27 = &local_5c;
  uVar22 = FUN_ram_4ff2d260();
  local_5c = (undefined1 *)0x0;
  uStack_58 = 0;
  uVar23 = 0;
  ppuVar19 = ppuVar27;
  do {
    bVar20 = (byte)(uVar22 >> (uVar23 & 0x1f)) | (byte)((uVar15 << 1) << (0x1f - uVar23 & 0x1f));
    if (-1 < (int)(uVar23 - 0x20)) {
      bVar20 = (byte)(uVar15 >> (uVar23 - 0x20 & 0x1f));
    }
    *(byte *)((int)ppuVar19 + 7) = bVar20;
    uVar23 = uVar23 + 8;
    ppuVar19 = (undefined1 **)((int)ppuVar19 + -1);
  } while (uVar23 != 0x40);
  FUN_ram_4802a8a8(&puStack_54,&DAT_ram_481df390);
  iVar12 = FUN_ram_4802a79a(&puStack_54,0x10);
  if (iVar12 != 0) {
    do {
      bVar20 = *(byte *)ppuVar27;
      ppuVar27 = (undefined1 **)((int)ppuVar27 + 1);
      FUN_ram_4802af5a(&puStack_54,"0123456789abcdef"[bVar20 >> 4]);
      FUN_ram_4802af5a(&puStack_54,"0123456789abcdef"[bVar20 & 0xf]);
    } while (ppuVar27 != &puStack_54);
  }
  FUN_ram_4802ad2c(&DAT_ram_4ff5c830,&puStack_54);
  FUN_ram_4802a59e(&puStack_54);
  iVar12 = FUN_ram_480aeb42();
  if (iVar12 == 0) {
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] Web diagnostic PSRAM workspace unavailable");
    return 0;
  }
  cVar26 = DAT_ram_4ff5cbb1;
  if (DAT_ram_4ff6dc74 == (void *)0x0) {
    pvVar16 = (void *)FUN_ram_4ff206d8(0x720,0x404);
    if (pvVar16 == (void *)0x0) {
      FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] Online OTA owner PSRAM workspace unavailable");
      return 0;
    }
    memset(pvVar16,0,0x720);
    cVar26 = DAT_ram_4ff5cbb1;
    DAT_ram_4ff6dc74 = pvVar16;
    *(undefined1 **)((int)pvVar16 + 0x714) = &DAT_ram_481df390;
    *(undefined **)((int)pvVar16 + 0x710) = &DAT_ram_481c3e20;
  }
  if (cVar26 == '\0') {
LAB_ram_480e1276:
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] Web route PSRAM registry unavailable");
    return 0;
  }
  if (DAT_ram_4ff5cbb4 == (undefined4 *)0x0) {
    DAT_ram_4ff5cbb2 = 1;
    puVar18 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar18 == (undefined4 *)0x0) goto LAB_ram_480e1276;
    puVar21 = puVar18 + 0x180;
    DAT_ram_4ff5cbb4 = puVar18;
    do {
      *puVar18 = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[1] = 0xff;
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar21);
  }
  uVar13 = 0;
  if (DAT_ram_4ff6de38 != 0) {
    uVar13 = 0x47e0;
  }
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] Web diagnostic workspace=%u bytes in PSRAM\n",uVar13);
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] Web config/health JSON scratch=%u bytes in PSRAM\n",
                   0x4000);
  puStack_54 = PTR_FUN_ram_48032fe0_ram_48223d2c;
  DAT_ram_4ff5cfac = PTR_FUN_ram_48032fe0_ram_48223d2c;
  pcStack_50 = (code *)PTR_FUN_ram_4805febc_ram_48223d30;
  DAT_ram_4ff5cfb0 = PTR_FUN_ram_4805febc_ram_48223d30;
  puStack_4c = PTR_LAB_ram_4802ced6_ram_48223d34;
  DAT_ram_4ff5cfb4 = PTR_LAB_ram_4802ced6_ram_48223d34;
  puStack_48 = PTR_LAB_ram_48032724_ram_48223d38;
  DAT_ram_4ff5cfb8 = PTR_LAB_ram_48032724_ram_48223d38;
  DAT_ram_4ff5cfbc = PTR_FUN_ram_48035236_ram_48223d3c;
  puStack_44 = PTR_FUN_ram_48035236_ram_48223d3c;
  if (DAT_ram_4ff617f0 == (void *)0x0) {
    DAT_ram_4ff6df2c = param_1;
    pvVar17 = (void *)FUN_ram_4ff206d8(0x4ac0,0x404);
    pvVar16 = DAT_ram_4ff69200;
    if (pvVar17 == (void *)0x0) {
      if (DAT_ram_4ff69200 == (void *)0x0) {
        cVar26 = '\0';
        goto LAB_ram_480e1292;
      }
    }
    else {
      pvVar28 = pvVar17;
      do {
        pvVar28 = memset(pvVar28,0,0x68);
        uVar11 = DAT_ram_48223d6c;
        uVar10 = DAT_ram_48223d68;
        uVar9 = DAT_ram_48223d64;
        uVar8 = DAT_ram_48223d60;
        uVar7 = DAT_ram_48223d5c;
        uVar6 = DAT_ram_48223d58;
        uVar5 = DAT_ram_48223d54;
        uVar4 = DAT_ram_48223d50;
        uVar3 = DAT_ram_48223d4c;
        uVar2 = DAT_ram_48223d48;
        uVar1 = DAT_ram_48223d44;
        uVar13 = DAT_ram_48223d40;
        *(undefined1 *)((int)pvVar28 + 0xd) = 0xff;
        *(undefined1 *)((int)pvVar28 + 0x19) = 0xff;
        *(undefined4 *)((int)pvVar28 + 0x30) = uVar13;
        *(undefined4 *)((int)pvVar28 + 0x34) = uVar1;
        *(undefined4 *)((int)pvVar28 + 0x38) = uVar2;
        *(undefined4 *)((int)pvVar28 + 0x3c) = uVar3;
        *(undefined4 *)((int)pvVar28 + 0x40) = uVar4;
        *(undefined4 *)((int)pvVar28 + 0x44) = uVar5;
        *(undefined4 *)((int)pvVar28 + 0x48) = uVar6;
        *(undefined4 *)((int)pvVar28 + 0x4c) = uVar7;
        *(undefined4 *)((int)pvVar28 + 0x50) = uVar8;
        *(undefined4 *)((int)pvVar28 + 0x54) = uVar9;
        *(undefined4 *)((int)pvVar28 + 0x58) = uVar10;
        *(undefined4 *)((int)pvVar28 + 0x5c) = uVar11;
        pvVar28 = (void *)((int)pvVar28 + 0x68);
      } while (pvVar28 != (void *)((int)pvVar17 + 0x4ac0));
      DAT_ram_4ff617f0 = pvVar17;
      if (pvVar16 != (void *)0x0) goto LAB_ram_480e0ffa;
LAB_ram_480e1292:
      pvVar16 = (void *)FUN_ram_4ff206d8(0x7400,0x404);
      if (pvVar16 != (void *)0x0) {
        pvVar17 = pvVar16;
        do {
          memset(pvVar17,0,0xe8);
          *(undefined1 *)((int)pvVar17 + 0x11) = 0xff;
          *(undefined1 *)((int)pvVar17 + 0x24) = 8;
          *(undefined1 *)((int)pvVar17 + 0x39) = 0;
          *(undefined1 *)((int)pvVar17 + 0x3a) = 1;
          memset((void *)((int)pvVar17 + 0x60),0,0x88);
          pvVar28 = (void *)((int)pvVar17 + 0xe8);
          *(undefined1 *)((int)pvVar17 + 0x60) = 8;
          *(undefined1 *)((int)pvVar17 + 0x70) = 8;
          *(undefined1 *)((int)pvVar17 + 0x80) = 8;
          pvVar17 = pvVar28;
        } while ((void *)((int)pvVar16 + 0x7400) != pvVar28);
        DAT_ram_4ff69200 = pvVar16;
        FUN_ram_480c3830(&DAT_ram_4ff68af0);
        if (cVar26 != '\0') goto LAB_ram_480e1006;
        goto LAB_ram_480e100e;
      }
    }
    FUN_ram_480c3830(&DAT_ram_4ff68af0);
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] runtime task-only PSRAM ledgers unavailable");
  }
  else {
    DAT_ram_4ff6df2c = param_1;
    if (DAT_ram_4ff69200 == (void *)0x0) goto LAB_ram_480e1292;
LAB_ram_480e0ffa:
    FUN_ram_480c3830(&DAT_ram_4ff68af0);
LAB_ram_480e1006:
    iVar12 = FUN_ram_4802fc76();
    if (iVar12 != 0) {
      DAT_ram_4ff5d03c = FUN_ram_48025b94;
      DAT_ram_4ff64208 = &DAT_ram_4ff5d038;
      FUN_ram_480e0b52(&DAT_ram_4ff60e20,DAT_ram_4ff6df2c);
      FUN_ram_4ff3ec14(&DAT_ram_4ff63684,0xffffffff);
      DAT_ram_4ff62c34 = &LAB_ram_480c8cae;
      FUN_ram_4ff3ee10(&DAT_ram_4ff63684);
      iVar14 = 0;
      if (DAT_ram_4ff617f0 != (void *)0x0) {
        iVar14 = 0x4ac0;
      }
      if (DAT_ram_4ff69200 != (void *)0x0) {
        iVar14 = iVar14 + 0x7400;
      }
      if (DAT_ram_4ff6df80 != 0) {
        iVar14 = iVar14 + 0xe00;
      }
      if (DAT_ram_4ff6df8c != 0) {
        iVar14 = iVar14 + 0xa08;
      }
      FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] runtime task-only ledgers=%u bytes in PSRAM\n",iVar14
                      );
      FUN_ram_4807e948();
      iVar14 = iVar12;
      if (DAT_ram_4ff6de14 == 0) {
        DAT_ram_4ff6de14 = FUN_ram_4ff2091a(1,0x69000,0x404);
        if (DAT_ram_4ff6de14 == 0) {
          FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                           "[FATAL] CAN hot-ID PSRAM workspace unavailable (%u bytes)\n",0x69000);
          iVar14 = 0;
        }
        else {
          FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] CAN hot-ID workspace=%u bytes in PSRAM\n",0x69000
                          );
        }
      }
      DAT_ram_4ff6dfe0 = &LAB_ram_48031e2e;
      *param_2 = (char)iVar14;
      DAT_ram_4ff6dfdc = &LAB_ram_4810a7e4;
      DAT_ram_4ff6dfd8 = &LAB_ram_4ff24bda;
      DAT_ram_4ff6dfac = &LAB_ram_480e6a52;
      DAT_ram_4ff6dfd4 = FUN_ram_480e4df0;
      DAT_ram_4ff6dfd0 = &LAB_ram_480c4fca;
      DAT_ram_4ff6dfcc = &LAB_ram_480c598c;
      DAT_ram_4ff6dfc8 = FUN_ram_48058bb0;
      DAT_ram_4ff6dfc4 = FUN_ram_48109d26;
      DAT_ram_4ff6dfc0 = &LAB_ram_4802c22a;
      DAT_ram_4ff6dfb8 = &LAB_ram_480db80e;
      DAT_ram_4ff6dfb4 = FUN_ram_48032e2a;
      DAT_ram_4ff6dfb0 = FUN_ram_480e7f9a;
      return iVar12;
    }
LAB_ram_480e100e:
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] runtime task-only PSRAM ledgers unavailable");
  }
  return 0;
}


