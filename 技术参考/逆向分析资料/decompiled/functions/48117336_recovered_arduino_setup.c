/* Firmware entry: 0x48117336 */

/* WARNING: Removing unreachable block (ram,0x481182f8) */
/* WARNING: Removing unreachable block (ram,0x4811829e) */
/* WARNING: Removing unreachable block (ram,0x481182ac) */
/* WARNING: Removing unreachable block (ram,0x481182b0) */
/* WARNING: Removing unreachable block (ram,0x481182bc) */
/* WARNING: Removing unreachable block (ram,0x481182ca) */
/* WARNING: Removing unreachable block (ram,0x481182da) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Analyst-assigned name based on firmware call sites and string references. */

void recovered_arduino_setup(void)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined4 **ppuVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 **ppuVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  char *pcVar16;
  char *pcVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  char *pcVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int **ppiVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int iVar29;
  undefined2 local_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *apiStack_40 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = &DAT_ram_482225e8;
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 4;
    FUN_ram_481212c6(uVar2,5);
  } while (puVar4 != &DAT_ram_48222610);
  FUN_ram_4811ebe4(2);
  FUN_ram_4811ebe4(3);
  FUN_ram_4811f0ea();
  FUN_ram_4811ebe4(4);
  iVar7 = FUN_ram_48031218();
  if (iVar7 != 0) {
    iVar8 = FUN_ram_4812d062();
    iVar7 = DAT_ram_50108088;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    iVar12 = 0;
    puVar22 = &uStack_80;
    do {
      puVar4 = &DAT_ram_50108090 + iVar12;
      iVar12 = iVar12 + 1;
      *(undefined1 *)puVar22 = *puVar4;
      puVar22 = (undefined4 *)((int)puVar22 + 1);
    } while (iVar12 != 0x20);
    if (iVar8 == 0) goto LAB_ram_48118236;
    piStack_60 = (int *)0x0;
    piStack_5c = (int *)0x0;
    piStack_58 = (int *)0x0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    iVar12 = FUN_ram_480001f0();
    if (iVar12 == 0) goto LAB_ram_48118236;
    puVar4 = (undefined1 *)(iVar12 + 0x90);
    ppiVar6 = &piStack_60;
    do {
      uVar2 = *puVar4;
      ppiVar24 = (int **)((int)ppiVar6 + 1);
      puVar4 = puVar4 + 1;
      *(undefined1 *)ppiVar6 = uVar2;
      ppiVar6 = ppiVar24;
    } while (apiStack_40 != ppiVar24);
    if ((iVar7 == *(int *)(iVar8 + 0xc)) &&
       (iVar7 = FUN_ram_4ff4511a(&piStack_60,&uStack_80,0x20), iVar7 == 0)) {
      iVar7 = FUN_ram_4812dbc2();
      if (iVar7 == 0) {
        FUN_ram_4802e2a4();
      }
      goto LAB_ram_48118236;
    }
    DAT_ram_50108080 = 0;
    fence();
    DAT_ram_50108084 = 0xffffffff;
    DAT_ram_50108088 = 0;
    DAT_ram_5010808c = 0xffffffff;
    iVar7 = 0;
    do {
      (&DAT_ram_50108090)[iVar7] = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    DAT_ram_501080b0 = 0;
    DAT_ram_501080b4 = 0xffffffff;
    fence();
  }
  iVar7 = FUN_ram_4812d062();
  DAT_ram_4ff6de68 = iVar7;
  DAT_ram_4ff6de64 = FUN_ram_4812d734();
  if (iVar7 == 0) {
    DAT_ram_4ff6de60 = 0;
  }
  else {
    DAT_ram_4ff6de60 = FUN_ram_4812d7fc(iVar7);
    piStack_60 = (int *)0xffffffff;
    iVar7 = FUN_ram_4812dbe2(iVar7,&piStack_60);
    if (iVar7 == 0) {
      if (piStack_60 == (int *)0x1) {
        DAT_ram_4ff6de6c = '\x01';
      }
      else {
        DAT_ram_50108080 = 0;
        fence();
        DAT_ram_50108084 = 0xffffffff;
        DAT_ram_50108088 = 0;
        DAT_ram_5010808c = 0xffffffff;
        iVar7 = 0;
        do {
          (&DAT_ram_50108090)[iVar7] = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x20);
        DAT_ram_501080b0 = 0;
        DAT_ram_501080b4 = 0xffffffff;
        fence();
        PTR_s_startup_ram_481d1924_ram_4ff47eb8 = s_already_confirmed_ram_481d076c;
        DAT_ram_4ff6de6d = '\x01';
      }
    }
  }
  DAT_ram_4ff6de2c = rtc_get_reset_reason(0);
  DAT_ram_4ff6de28 = rtc_get_reset_reason(1);
  iVar8 = FUN_ram_480aeb42();
  iVar7 = DAT_ram_4ff6de38;
  if (iVar8 == 0) {
    if ((DAT_ram_4ff6de6c == '\0') || (DAT_ram_4ff6de6d != '\0')) {
      FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] reboot diagnostic PSRAM workspace unavailable");
      FUN_ram_4811ebe4(10);
      DAT_ram_4ff6dc54 = 1;
      return;
    }
LAB_ram_48118236:
                    /* WARNING: Subroutine does not return */
    FUN_ram_480007da();
  }
  uVar9 = FUN_ram_481a759a();
  DAT_ram_4ff6de30 =
       FUN_ram_4806019e(&DAT_ram_501080c0,uVar9,DAT_ram_4ff6de2c,DAT_ram_4ff6de28,iVar7 + 0x1c8,3);
  uVar9 = FUN_ram_481a759a();
  FUN_ram_48060580(&DAT_ram_4ff4899c,&DAT_ram_501080c0,iVar7,uVar9,DAT_ram_4ff6de2c,DAT_ram_4ff6de28
                  );
  uVar9 = FUN_ram_48025ba6();
  FUN_ram_4805fc76(&DAT_ram_4ff4899c,&DAT_ram_501080c0);
  fence();
  DAT_ram_4ff6de24 = uVar9;
  if (DAT_ram_4ff6dc5c == '\0') {
    DAT_ram_4ff4c5d8 = 0;
    DAT_ram_4ff4c5dc = 0;
    DAT_ram_4ff4c5e0 = 0;
    DAT_ram_4ff4c5e4 = 0;
    DAT_ram_4ff4c5e8 = 0;
    DAT_ram_4ff4c5ec = 0;
    DAT_ram_4ff4c5b4 = 0;
    DAT_ram_4ff4c5b8 = 0;
    DAT_ram_4ff4c5bc = 0;
    DAT_ram_4ff4c5c0 = 0;
    DAT_ram_4ff4c5c4 = 0;
    DAT_ram_4ff4c5c8 = 0;
    DAT_ram_4ff6dc5f = 0;
    DAT_ram_4ff47e4b = 2;
    DAT_ram_4ff6dc5e = 0;
    DAT_ram_4ff6dc5d = 0;
    FUN_ram_48121fd6(&piStack_60);
    iVar7 = FUN_ram_48121fee(&piStack_60,&DAT_ram_481cfd28,1,0);
    if (iVar7 == 0) {
LAB_ram_481177aa:
      FUN_ram_48121fe0(&piStack_60);
      DAT_ram_4ff47e4b = 2;
    }
    else {
      uVar21 = FUN_ram_48122736(&piStack_60,"layout");
      if (uVar21 == 0) {
        FUN_ram_48122142(&piStack_60);
        goto LAB_ram_481177aa;
      }
      uVar13 = FUN_ram_4812274a(&piStack_60,"layout",0xff);
      uVar25 = uVar13;
      if (2 < uVar13) {
        uVar25 = 2;
      }
      FUN_ram_48122142(&piStack_60);
      FUN_ram_48121fe0(&piStack_60);
      DAT_ram_4ff47e4b = (byte)uVar25;
      uVar25 = uVar25 & 0xff;
      bVar3 = DAT_ram_4ff47e4b;
      if (uVar13 < 2) goto LAB_ram_4811751c;
    }
    iVar7 = recovered_probe_can_pin_layout(0,&piStack_60);
    uVar13 = 0;
    if (iVar7 == 0) {
LAB_ram_48117ed0:
      uVar25 = (uint)DAT_ram_4ff6dc5f;
      DAT_ram_4ff6dc5d = 1;
      uVar21 = uVar13;
      bVar3 = DAT_ram_4ff6dc5f;
    }
    else if (((uint)piStack_60 & 0xff) == 0) {
      uVar13 = recovered_probe_can_pin_layout(1,&piStack_60);
      if (uVar13 == 0) goto LAB_ram_48117ed0;
      uVar21 = (uint)piStack_60 & 0xff;
      if (uVar21 == 0) {
        DAT_ram_4ff6dc5f = 0;
        DAT_ram_4ff6dc5e = 0;
        uVar25 = 0;
        uVar21 = uVar13;
        bVar3 = DAT_ram_4ff6dc5f;
      }
      else {
        uVar25 = 1;
        DAT_ram_4ff6dc5f = 1;
        DAT_ram_4ff6dc5e = 1;
        bVar3 = DAT_ram_4ff6dc5f;
      }
    }
    else {
      DAT_ram_4ff6dc5f = 0;
      DAT_ram_4ff6dc5e = 1;
      uVar25 = 0;
      uVar21 = (uint)piStack_60 & 0xff;
      bVar3 = DAT_ram_4ff6dc5f;
    }
  }
  else {
    uVar25 = (uint)DAT_ram_4ff6dc5f;
    DAT_ram_4ff6dc5d = 1;
    uVar21 = 0;
    bVar3 = DAT_ram_4ff6dc5f;
  }
LAB_ram_4811751c:
  DAT_ram_4ff6dc5f = bVar3;
  local_84 = 0;
  uStack_82 = 0;
  puVar22 = (undefined4 *)(&DAT_ram_48222610 + uVar25 * 0x18);
  puVar18 = &local_84;
  do {
    if (uVar25 < 2) goto LAB_ram_481177d8;
    *(undefined1 *)puVar18 = 0xff;
    puVar18 = (undefined2 *)((int)puVar18 + 1);
    puVar22 = puVar22 + 2;
  } while (puVar18 != (undefined2 *)&uStack_81);
  goto LAB_ram_48117550;
  while( true ) {
    puVar19 = puVar18 + 1;
    puVar22 = puVar22 + 4;
    *(char *)((int)puVar18 + 1) = (char)*puVar23;
    puVar18 = puVar19;
    if ((undefined2 *)&uStack_81 == puVar19) break;
LAB_ram_481177d8:
    puVar23 = puVar22 + 2;
    *(char *)puVar18 = (char)*puVar22;
    if ((undefined2 *)&uStack_81 == (undefined2 *)((int)puVar18 + 1)) break;
  }
LAB_ram_48117550:
  if ((uVar21 == 0) || (iVar7 = FUN_ram_48120f10(&local_84), iVar7 == 0)) {
    FUN_ram_4811ebe4(10);
    DAT_ram_4ff6dc54 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_ram_480007da();
  }
  ppuVar5 = &DAT_ram_4ff5c840;
  ppuVar10 = &DAT_ram_4ff5c840;
  if (-1 < DAT_ram_4ff5c84f) {
    ppuVar10 = (undefined4 **)DAT_ram_4ff5c840;
  }
  FUN_ram_481208d0(ppuVar10);
  if (-1 < DAT_ram_4ff5c84f) {
    ppuVar5 = (undefined4 **)DAT_ram_4ff5c840;
  }
  iVar7 = recovered_start_supervisor(ppuVar5);
  FUN_ram_4ff3c43c(0,4);
  FUN_ram_4811ebe4(5);
  piVar11 = (int *)FUN_ram_4ff206d8(0x18da0,0x804);
  if (piVar11 == (int *)0x0) {
    FUN_ram_4811ebe4(10);
    thunk_FUN_ram_4ff3c2b6(0x5dc);
    FUN_ram_48029c2c(&DAT_ram_4ff5bb3c,0x1c200,0x800001c,0xffffffff,0xffffffff,0,20000,0x78);
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                     "[FATAL] CAN internal-RAM allocation failed; remaining fail-closed");
    uVar15 = 0x101;
    uVar9 = 2;
LAB_ram_48117c6a:
    FUN_ram_4ff2bc94(uVar9,uVar15);
    DAT_ram_4ff6dc54 = 1;
    return;
  }
  memset(piVar11,0,0x18da0);
  FUN_ram_4809bd96(piVar11);
  DAT_ram_4ff6dfbc = FUN_ram_480927f2;
  DAT_ram_4ff6dc58 = piVar11;
  thunk_FUN_ram_4ff3c2b6(0x5dc);
  FUN_ram_48029c2c(&DAT_ram_4ff5bb3c,0x1c200,0x800001c,0xffffffff,0xffffffff,0,20000,0x78);
  iVar8 = FUN_ram_48025ba6();
  do {
    iVar12 = FUN_ram_4802a23c(&DAT_ram_4ff5bb3c);
    if (iVar12 != 0) break;
    iVar12 = FUN_ram_48025ba6();
  } while ((uint)(iVar12 - iVar8) < 1000);
  uVar9 = FUN_ram_481a759a();
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[BOOT] Reset reason=%d\n",uVar9);
  piVar26 = DAT_ram_4ff6dfe4;
  if (DAT_ram_4ff6dfe4 != (int *)0x0) {
    iVar8 = *DAT_ram_4ff6dfe4;
    if (*(code **)(iVar8 + 0x168) == (code *)&LAB_ram_48096ebe) {
      *DAT_ram_4ff6dfe4 = (int)&PTR_LAB_ram_4809b712_ram_481f5324;
      DAT_ram_4ff6dfe4 = piVar11;
      FUN_ram_4809b562(piVar26);
      FUN_ram_4ff209c6(piVar26);
      piVar11 = DAT_ram_4ff6dfe4;
    }
    else {
      DAT_ram_4ff6dfe4 = piVar11;
      (**(code **)(iVar8 + 0x168))(piVar26);
      piVar11 = DAT_ram_4ff6dfe4;
    }
  }
  DAT_ram_4ff6dfe4 = piVar11;
  iVar8 = (**(code **)*DAT_ram_4ff6dfe4)(DAT_ram_4ff6dfe4);
  if (iVar8 == 0) {
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"CAN init failed");
  }
  else {
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"Waveshare ESP32-P4 three TWAI controllers ready");
  }
  ppiVar6 = &piStack_60;
  uStack_80 = 0;
  piStack_60 = (int *)0x0;
  iVar12 = FUN_ram_4ff3a592(&uStack_80,ppiVar6);
  if ((iVar12 == 0) && (piStack_60 != (int *)0x0)) {
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] Stored ELF core dump address=0x%08x size=%u bytes\n",
                     uStack_80);
  }
  else {
    uVar9 = FUN_ram_480018de();
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] Stored ELF core dump unavailable result=%s\n",uVar9);
  }
  if (((int *)0x1fff < DAT_ram_4ff6dc58 + -0xc040000 &&
       (int *)0xbffff < DAT_ram_4ff6dc58 + -0x13fc0000) &&
     ((int *)0x7fff < DAT_ram_4ff6dc58 + -0x14042000)) {
    FUN_ram_4811ebe4(10);
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,"[FATAL] CAN driver hot state is outside internal RAM");
    FUN_ram_48097ba6(DAT_ram_4ff6dc58,0);
    FUN_ram_48031b72();
    uVar15 = 0;
    uVar9 = 4;
    goto LAB_ram_48117c6a;
  }
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] CAN hot state internal=yes bytes=%u\n",0x18da0);
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] Task priorities P0=%u P1=%u BG=%u Web=%u\n",0x18,0x14,2,1
                  );
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] CAN setup complete; profile=%s\n",
                   "waveshare-p4-wifi6-sn65hvd230-x3");
  FUN_ram_480eacb6(0);
  FUN_ram_4811ebe4(6);
  iVar12 = FUN_ram_481172f2(DAT_ram_4ff6dfe4);
  if ((iVar12 == 0) || ((DAT_ram_4ff6dfc8 == 0 || (DAT_ram_4ff6dfc4 == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = DAT_ram_4ff6dfc0 != (code *)0x0;
  }
  puVar4 = &DAT_ram_48222640;
  iVar29 = 0;
  do {
    uVar15 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (DAT_ram_4ff6dc5f < 2) {
      iVar14 = ((-(uint)DAT_ram_4ff6dc5f & 3) + iVar29) * 8;
      uVar9 = *(undefined4 *)(&DAT_ram_48222610 + iVar14);
      uVar15 = *(undefined4 *)(&DAT_ram_48222614 + iVar14);
    }
    iVar14 = 0x764;
    if (puVar4[0x24] != '\0') {
      iVar14 = 0x758;
    }
    iVar29 = iVar29 + 1;
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] TWAI%u %s TX=%d RX=%d bitrate=%lu mode=%s\n",*puVar4,
                     *(undefined4 *)(puVar4 + 0x14),uVar9,uVar15,*(undefined4 *)(puVar4 + 0x20),
                     "{\"ok\":false,\"error\":\"invalid_v13_speed_offset_pct\",\"field\":\"" +
                     iVar14 + 0x34);
    puVar4 = puVar4 + 0x28;
  } while (iVar29 != 3);
  DAT_ram_4ff6dc44 = FUN_ram_4ff3d9a8();
  FUN_ram_48120e5c();
  FUN_ram_4811ebe4(7);
  if ((bVar1) &&
     (iVar29 = FUN_ram_4ff3e458(recovered_fsd_p0_task,"fsd_p0",0x1000,0,0x18,&DAT_ram_4ff6dc50,1),
     iVar29 == 1)) {
    FUN_ram_4811fbf0(2,DAT_ram_4ff6dc50);
    iVar29 = FUN_ram_4ff3e458(recovered_can_rt_task,"can_rt",0x2000,0,0x14,&DAT_ram_4ff6dc4c,1);
    if (iVar29 != 1) goto LAB_ram_481178dc;
    FUN_ram_4811fbf0(1,DAT_ram_4ff6dc4c);
    piVar11 = DAT_ram_4ff6dc58;
    iVar29 = DAT_ram_4ff6dc50;
    FUN_ram_4811fbf0(2,DAT_ram_4ff6dc50);
    piVar26 = piVar11 + 0x223;
    do {
      FUN_ram_4ff3ec14(piVar26,0xffffffff);
      piVar26[-0xc3] = iVar29;
      FUN_ram_4ff3ee10(piVar26);
      piVar28 = DAT_ram_4ff6dc58;
      iVar14 = DAT_ram_4ff6dc4c;
      piVar26 = piVar26 + 0xd5e;
    } while (piVar11 + 0x2a3d != piVar26);
    FUN_ram_4811fbf0(1,DAT_ram_4ff6dc4c);
    piVar11 = piVar28 + 0x223;
    do {
      FUN_ram_4ff3ec14(piVar11,0xffffffff);
      piVar11[-0xc1] = iVar14;
      FUN_ram_4ff3ee10(piVar11);
      piVar26 = DAT_ram_4ff6dc58;
      iVar29 = DAT_ram_4ff6dc4c;
      piVar11 = piVar11 + 0xd5e;
    } while (piVar11 != piVar28 + 0x2a3d);
    if ((char)DAT_ram_4ff6dc58[0xb] == '\x02') {
      uVar21 = 0;
LAB_ram_481181e8:
      piVar11 = DAT_ram_4ff6dc58 + uVar21 * 0xd5e + 0x223;
      FUN_ram_4ff3ec14(piVar11,0xffffffff);
      piVar26[uVar21 * 0xd5e + 0x161] = iVar29;
      FUN_ram_4ff3ee10(piVar11);
    }
    else {
      uVar21 = 1;
      if (((char)DAT_ram_4ff6dc58[0xd69] == '\x02') ||
         (uVar21 = (uint)*(byte *)(DAT_ram_4ff6dc58 + 0x1ac7), uVar21 == 2)) goto LAB_ram_481181e8;
    }
    (*DAT_ram_4ff6dfc0)(1);
    FUN_ram_48120e16(DAT_ram_4ff6dc4c);
    iVar29 = FUN_ram_48025ba6();
    while( true ) {
      fence();
      if ((((DAT_ram_4ff5bba8 == 0) && (fence(), DAT_ram_4ff5bb98 == 1)) &&
          (fence(), DAT_ram_4ff5bb9c == 1)) ||
         ((fence(), DAT_ram_4ff5bba8 != 0 || (iVar14 = FUN_ram_4ff2bcc4(), iVar14 != 0))))
      goto LAB_ram_48117e18;
      iVar14 = FUN_ram_48025ba6();
      if (1999 < (uint)(iVar14 - iVar29)) break;
      iVar14 = FUN_ram_4ff3df3c(0,1,100);
      if (iVar14 != 0) {
        FUN_ram_4ff3c2b6(1);
      }
    }
    FUN_ram_4ff2bc94(3,0);
LAB_ram_48117e18:
    fence();
    if (((DAT_ram_4ff5bba8 != 0) || (fence(), DAT_ram_4ff5bb98 != 1)) ||
       (fence(), DAT_ram_4ff5bb9c != 1)) {
      if (iVar7 == 0) {
LAB_ram_481181cc:
        if (iVar8 != 0) goto joined_r0x481181d2;
        goto joined_r0x48118016;
      }
      if (iVar8 != 0) {
        if (iVar12 != 0) goto LAB_ram_4811791c;
        goto LAB_ram_4811802e;
      }
      goto LAB_ram_48117f66;
    }
    iVar29 = FUN_ram_4ff2bcc4();
    if (iVar29 != 0) {
      if (iVar7 == 0) goto LAB_ram_481181cc;
      goto joined_r0x4811790e;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) goto LAB_ram_4811824e;
      if (iVar12 == 0) goto LAB_ram_48117e66;
      pcVar17 = "ready";
      pcVar16 = "ready";
      pcVar20 = "ready";
      goto LAB_ram_48117930;
    }
    if (iVar8 == 0) {
LAB_ram_4811824e:
      if (iVar12 == 0) {
        pcVar17 = "failed";
        pcVar20 = "ready";
        pcVar16 = "failed";
      }
      else {
        pcVar17 = "ready";
        pcVar16 = "failed";
        pcVar20 = "ready";
      }
      goto LAB_ram_48117930;
    }
    if (iVar12 == 0) {
LAB_ram_48117e66:
      pcVar16 = "ready";
      pcVar17 = "failed";
      pcVar20 = "ready";
      goto LAB_ram_48117930;
    }
    FUN_ram_4811ebe4(8);
    iVar7 = FUN_ram_4809804c(DAT_ram_4ff6dc58,1);
    if ((((iVar7 != 0) && (iVar7 = FUN_ram_4ff2bcc4(), iVar7 == 0)) &&
        (fence(), DAT_ram_4ff5bba8 == 0)) &&
       ((fence(), DAT_ram_4ff5bb98 == 1 && (fence(), DAT_ram_4ff5bb9c == 1)))) {
      DAT_ram_4ff5bb98 = 3;
      DAT_ram_4ff5bb9c = 3;
      FUN_ram_480eacb6(1);
      fence();
      DAT_ram_4ff6df94 = 1;
      FUN_ram_4ff3e004(DAT_ram_4ff6dc50,0,0,2,0);
      FUN_ram_4ff3e004(DAT_ram_4ff6dc4c,0,0,2,0);
      FUN_ram_48120e9a();
      FUN_ram_4811ebe4(9);
      uVar21 = FUN_ram_480296ba(&DAT_ram_4ff6dc18);
      uVar25 = FUN_ram_480295ac(&DAT_ram_4ff6dc18);
      pcVar16 = "enabled";
      goto LAB_ram_48117b0a;
    }
  }
  else {
LAB_ram_481178dc:
    FUN_ram_4ff2bc94(2,0x101);
    DAT_ram_4ff4b8c0 = DAT_ram_4ff4b8c0 + 1;
    FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                     "[FATAL] Realtime task creation failed; remaining fail-closed");
    if (iVar7 == 0) {
      if (iVar8 == 0) {
joined_r0x48118016:
        if (iVar12 == 0) {
          pcVar17 = "failed";
          pcVar16 = "failed";
          pcVar20 = "failed";
        }
        else {
          pcVar16 = "failed";
          pcVar17 = "ready";
          pcVar20 = "failed";
        }
      }
      else {
joined_r0x481181d2:
        if (iVar12 != 0) goto LAB_ram_4811791c;
        pcVar17 = "failed";
        pcVar16 = "ready";
        pcVar20 = "failed";
      }
    }
    else {
joined_r0x4811790e:
      if (iVar8 == 0) {
LAB_ram_48117f66:
        if (iVar12 == 0) {
          pcVar16 = "failed";
          pcVar20 = "failed";
          pcVar17 = "failed";
        }
        else {
          pcVar20 = "failed";
          pcVar16 = "failed";
          pcVar17 = "ready";
        }
      }
      else if (iVar12 == 0) {
LAB_ram_4811802e:
        pcVar20 = "failed";
        pcVar16 = "ready";
        pcVar17 = "failed";
      }
      else {
LAB_ram_4811791c:
        pcVar17 = "ready";
        pcVar20 = "failed";
        pcVar16 = "ready";
      }
    }
LAB_ram_48117930:
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                     "[FATAL] CAN infrastructure unavailable driver=%s dashboard=%s realtime=%s; remaining fail-closed\n"
                     ,pcVar16,pcVar17,pcVar20);
  }
  FUN_ram_4811ebe4(10);
  FUN_ram_480eacb6(0);
  DAT_ram_4ff6dc54 = 1;
  FUN_ram_4ff2bc94(4,0);
  fence();
  DAT_ram_4ff6df94 = 0;
  if (DAT_ram_4ff6dfc0 != (code *)0x0) {
    (*DAT_ram_4ff6dfc0)(0);
  }
  piVar11 = DAT_ram_4ff6dc58;
  FUN_ram_4811fbf0(2,0);
  piVar26 = piVar11 + 0x223;
  do {
    FUN_ram_4ff3ec14(piVar26,0xffffffff);
    piVar26[-0xc3] = 0;
    piVar27 = piVar26 + 0xd5e;
    FUN_ram_4ff3ee10(piVar26);
    piVar28 = DAT_ram_4ff6dc58;
    piVar26 = piVar27;
  } while (piVar27 != piVar11 + 0x2a3d);
  if ((char)DAT_ram_4ff6dc58[0xb] == '\x02') {
    iVar7 = 0x88c;
    uVar21 = 0;
LAB_ram_48117fe8:
    iVar7 = iVar7 + (int)DAT_ram_4ff6dc58;
    FUN_ram_4ff3ec14(iVar7,0xffffffff);
    piVar28[uVar21 * 0xd5e + 0x161] = 0;
    FUN_ram_4ff3ee10(iVar7);
  }
  else {
    if ((char)DAT_ram_4ff6dc58[0xd69] == '\x02') {
      iVar7 = 0x3e04;
      uVar21 = 1;
      goto LAB_ram_48117fe8;
    }
    uVar21 = (uint)*(byte *)(DAT_ram_4ff6dc58 + 0x1ac7);
    iVar7 = 0x737c;
    if (uVar21 == 2) goto LAB_ram_48117fe8;
  }
  piVar11 = DAT_ram_4ff6dc58;
  FUN_ram_4811fbf0(1,0);
  piVar26 = piVar11 + 0x223;
  do {
    FUN_ram_4ff3ec14(piVar26,0xffffffff);
    piVar26[-0xc1] = 0;
    piVar28 = piVar26 + 0xd5e;
    FUN_ram_4ff3ee10(piVar26);
    piVar26 = piVar28;
  } while (piVar11 + 0x2a3d != piVar28);
  FUN_ram_48120e16(0);
  piStack_60 = &DAT_ram_4ff6dc50;
  piStack_5c = &DAT_ram_4ff6dc4c;
  piVar11 = &DAT_ram_4ff5bb98;
  do {
    fence();
    iVar7 = *piVar11;
    do {
      if (iVar7 == 5) goto LAB_ram_48117a68;
      bVar1 = *piVar11 != iVar7;
      iVar7 = *piVar11;
    } while (bVar1);
    *piVar11 = 4;
LAB_ram_48117a68:
    if (**ppiVar6 == 0) {
      if (*piVar11 == 4) {
        *piVar11 = 5;
      }
    }
    else {
      FUN_ram_4ff3e004(**ppiVar6,0,0,2,0);
    }
    ppiVar6 = ppiVar6 + 1;
    piVar11 = piVar11 + 1;
  } while (&piStack_58 != ppiVar6);
  iVar7 = FUN_ram_48025ba6();
  while( true ) {
    fence();
    if ((DAT_ram_4ff5bb98 == 5) && (fence(), DAT_ram_4ff5bb9c == 5)) {
      DAT_ram_4ff6dc50 = 0;
      DAT_ram_4ff6dc4c = 0;
      goto joined_r0x48117ade;
    }
    iVar12 = FUN_ram_48025ba6();
    if (1999 < (uint)(iVar12 - iVar7)) break;
    iVar12 = FUN_ram_4ff3df3c(0,1,100);
    if (iVar12 != 0) {
      FUN_ram_4ff3c2b6(1);
    }
  }
  FUN_ram_4ff2bc94(4,0);
joined_r0x48117ade:
  if (iVar8 != 0) {
    FUN_ram_48097ba6(DAT_ram_4ff6dc58,0);
  }
  FUN_ram_48031b72();
  uVar21 = FUN_ram_480296ba(&DAT_ram_4ff6dc18);
  uVar25 = FUN_ram_480295ac(&DAT_ram_4ff6dc18);
  pcVar16 = "disabled";
LAB_ram_48117b0a:
  FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                   "[P4] Flash=%u MB PSRAM=%u MB CAN=%s Dual-core CAN=1 Network/Web=0\n",
                   uVar21 >> 0x14,uVar25 >> 0x14,pcVar16);
  return;
}


