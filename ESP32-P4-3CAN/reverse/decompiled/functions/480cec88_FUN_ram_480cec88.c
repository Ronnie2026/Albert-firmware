/* Firmware entry: 0x480cec88 */

void FUN_ram_480cec88(void)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  char *pcVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = &local_40;
  if (DAT_ram_4ff6dc9c == (void *)0x0) {
    pvVar8 = (void *)FUN_ram_4ff206d8(0x87bd0,0x404);
    if (pvVar8 == (void *)0x0) {
      return;
    }
    memset(pvVar8,0,0x87bd0);
    FUN_ram_480b82be(pvVar8);
    DAT_ram_4ff6dc9c = pvVar8;
  }
  pvVar8 = DAT_ram_4ff6dc9c;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_ram_48132f46(&local_40,0x10);
  iVar4 = (int)pvVar8 + 0x234;
  do {
    FUN_ram_4819ad74(iVar4,3,&DAT_ram_481c3b70,*(undefined1 *)puVar3);
    iVar11 = DAT_ram_4ff6dcc8;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    iVar4 = iVar4 + 2;
  } while ((undefined4 *)auStack_30 != puVar3);
  if (DAT_ram_4ff6dcc8 == 0) {
LAB_ram_480ced6e:
    *(char **)((int)pvVar8 + 0x87bc0) = "settings_owner_unavailable";
    return;
  }
  FUN_ram_4ff454c4((int)pvVar8 + 0xb3,DAT_ram_4ff6dcc8);
  pvVar12 = DAT_ram_4ff6dc9c;
  pvVar6 = memset((void *)((int)DAT_ram_4ff6dc9c + 0x5c),0,0x57);
  uVar5 = FUN_ram_48034932(iVar11 + 0x181,iVar11 + 0x63cf,0,pvVar6);
  *(undefined1 *)((int)pvVar12 + 0x87b60) = uVar5;
  uVar7 = FUN_ram_48025ba6();
  cVar2 = DAT_ram_4ff6dca9;
  *(undefined4 *)((int)pvVar8 + 0x87b50) = uVar7;
  if ((cVar2 == '\0') || (DAT_ram_4ff6dca8 == '\0')) goto LAB_ram_480ced6e;
  pbVar17 = (byte *)&DAT_ram_4ff5bd30;
  bVar15 = 0;
  do {
    bVar1 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    bVar15 = bVar15 | bVar1;
  } while (pbVar17 != (byte *)&DAT_ram_4ff5bd40);
  if ((bVar15 == 0) || (DAT_ram_4ff5bd40 == 0)) goto LAB_ram_480ced6e;
  puVar3 = DAT_ram_4ff6dc94;
  if (DAT_ram_4ff6dc94 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_ram_4ff206d8(0x1e938,0x404);
    if (puVar3 == (undefined4 *)0x0) goto LAB_ram_480cef1e;
    memset(puVar3,0,0x1e938);
    puVar3[0x21f9] = 0xffffffff;
    puVar3[0x2229] = 1;
    memset(puVar3 + 0x224c,0,0x460);
    puVar3[0x2373] = 1;
    memset(puVar3 + 0x2396,0,0x460);
    memset(puVar3 + 0x24e6,0,0x9398);
    puVar3[0x46df] = 0xffffffff;
    puVar3[0x470f] = 1;
    memset(puVar3 + 0x4732,0,0x460);
    puVar3[0x4859] = 1;
    memset(puVar3 + 0x487c,0,0x460);
    memset(puVar3 + 0x49cc,0,0xc001);
    memset((void *)((int)puVar3 + 0x1e731),0,0x200);
    DAT_ram_4ff6dc94 = puVar3;
    puVar3[0x7a4d] = "control_uninitialized";
  }
  puVar9 = (undefined4 *)FUN_ram_4812e1d6(1,0x82,"spiffs");
  if ((((puVar9 == (undefined4 *)0x0) || (puVar9[3] != 0x1910000)) || (puVar9[4] != 0x6c0000)) ||
     (*(char *)((int)puVar9 + 0x29) != '\0')) {
    puVar3[0x7a4d] = "control_geometry";
LAB_ram_480cef1e:
    if (DAT_ram_4ff6dc94 == (undefined4 *)0x0) {
      pcVar16 = "resource_wait";
    }
    else {
      pcVar16 = (char *)DAT_ram_4ff6dc94[0x7a4d];
    }
    *(char **)((int)pvVar8 + 0x87bc0) = pcVar16;
    return;
  }
  DAT_ram_4ff5bcd4 = *puVar9;
  DAT_ram_4ff5bcd8 = puVar9[1];
  DAT_ram_4ff5bcdc = puVar9[2];
  DAT_ram_4ff5bce8 = puVar9[5];
  DAT_ram_4ff5bcec = puVar9[6];
  DAT_ram_4ff5bcf0 = puVar9[7];
  DAT_ram_4ff5bcf4 = puVar9[8];
  DAT_ram_4ff5bcf8 = puVar9[9];
  DAT_ram_4ff5bcfc = puVar9[10];
  DAT_ram_4ff5bce0 = 0x1994000;
  DAT_ram_4ff5bce4 = 0x63000;
  DAT_ram_4ff5bcac = puVar9[1];
  DAT_ram_4ff5bca8 = *puVar9;
  DAT_ram_4ff5bcbc = puVar9[5];
  DAT_ram_4ff5bcc0 = puVar9[6];
  DAT_ram_4ff5bcb0 = puVar9[2];
  DAT_ram_4ff5bcc4 = puVar9[7];
  DAT_ram_4ff5bcc8 = puVar9[8];
  DAT_ram_4ff5bccc = puVar9[9];
  DAT_ram_4ff5bcd0 = puVar9[10];
  DAT_ram_4ff5bcb4 = puVar9[3] + 0xf0000;
  DAT_ram_4ff5bcb8 = 0x63000;
  DAT_ram_4ff6dc90 = &DAT_ram_4ff5bcd4;
  DAT_ram_4ff6dc8c = &DAT_ram_4ff5bca8;
  iVar4 = FUN_ram_480b80da(&DAT_ram_4ff6dc90,(int)puVar3 + 0x1e731,0);
  if ((iVar4 == 0) ||
     (iVar4 = FUN_ram_480b80da(&DAT_ram_4ff6dc8c,(int)puVar3 + 0x1e731,1), iVar4 == 0)) {
    puVar3[0x7a4d] = "control_unowned";
    goto LAB_ram_480cef1e;
  }
  iVar4 = FUN_ram_480b5c0c(&DAT_ram_4ff5bc80,puVar3 + 0x49cc,0xc001);
  if ((iVar4 != 0) &&
     ((iVar4 != 1 ||
      (iVar4 = FUN_ram_480ab51c(puVar3 + 0x49cc,DAT_ram_4ff5bca0,puVar3 + 0x24e6), iVar4 == 0)))) {
    puVar3[0x7a4d] = "control_load_failed";
    goto LAB_ram_480cef1e;
  }
  puVar18 = puVar3 + 0x24e6;
  puVar9 = puVar3;
  do {
    uVar19 = puVar18[1];
    uVar7 = puVar18[2];
    uVar13 = puVar18[3];
    uVar14 = puVar18[4];
    *puVar9 = *puVar18;
    puVar9[1] = uVar19;
    puVar9[2] = uVar7;
    puVar9[3] = uVar13;
    puVar9[4] = uVar14;
    puVar18 = puVar18 + 5;
    puVar9 = puVar9 + 5;
  } while (puVar18 != puVar3 + 0x49cb);
  *puVar9 = *puVar18;
  FUN_ram_4802e73a();
  uVar10 = FUN_ram_480b5c0c(&DAT_ram_4ff5bc58,(int)pvVar8 + 0xf5a,0x30001);
  pvVar12 = DAT_ram_4ff6dc88;
  if (1 < uVar10) {
    puVar3[0x7a4d] = "stage_load_failed";
    goto LAB_ram_480cef1e;
  }
  *(undefined1 *)((int)puVar3 + 0x1e931) = 1;
  puVar3[0x7a4d] = &DAT_ram_481df390;
  if (pvVar12 == (void *)0x0) {
    pvVar12 = (void *)FUN_ram_4ff206d8(0x6c598,0x404);
    if (pvVar12 == (void *)0x0) goto LAB_ram_480cf266;
    memset(pvVar12,0,0x6c598);
    DAT_ram_4ff6dc88 = pvVar12;
  }
  puVar3 = (undefined4 *)FUN_ram_4812e1d6(1,0x82,"spiffs");
  if ((((puVar3 != (undefined4 *)0x0) && (puVar3[3] == 0x1910000)) && (puVar3[4] == 0x6c0000)) &&
     (*(char *)((int)puVar3 + 0x29) == '\0')) {
    DAT_ram_4ff5bc2c = *puVar3;
    DAT_ram_4ff5bc30 = puVar3[1];
    DAT_ram_4ff5bc34 = puVar3[2];
    DAT_ram_4ff5bc40 = puVar3[5];
    DAT_ram_4ff5bc44 = puVar3[6];
    DAT_ram_4ff5bc48 = puVar3[7];
    DAT_ram_4ff5bc4c = puVar3[8];
    DAT_ram_4ff5bc50 = puVar3[9];
    DAT_ram_4ff5bc54 = puVar3[10];
    DAT_ram_4ff5bc38 = 0x1a70000;
    DAT_ram_4ff5bc3c = 0x63000;
    DAT_ram_4ff5bc04 = puVar3[1];
    DAT_ram_4ff5bc00 = *puVar3;
    DAT_ram_4ff5bc14 = puVar3[5];
    DAT_ram_4ff5bc18 = puVar3[6];
    DAT_ram_4ff5bc08 = puVar3[2];
    DAT_ram_4ff5bc1c = puVar3[7];
    DAT_ram_4ff5bc20 = puVar3[8];
    DAT_ram_4ff5bc24 = puVar3[9];
    DAT_ram_4ff5bc28 = puVar3[10];
    DAT_ram_4ff5bc0c = puVar3[3] + 0x1d0000;
    DAT_ram_4ff5bc10 = 0x63000;
    DAT_ram_4ff6dc84 = &DAT_ram_4ff5bc2c;
    DAT_ram_4ff6dc80 = &DAT_ram_4ff5bc00;
    iVar4 = FUN_ram_480b80da(&DAT_ram_4ff6dc84,(int)pvVar12 + 0x6c390,2);
    if ((iVar4 != 0) &&
       (iVar4 = FUN_ram_480b80da(&DAT_ram_4ff6dc80,(int)pvVar12 + 0x6c390,3), iVar4 != 0)) {
      iVar4 = FUN_ram_480b5c0c(&DAT_ram_4ff5bbd8,(int)DAT_ram_4ff6dc9c + 0x30f5b,0x30801);
      iVar11 = FUN_ram_480b5c0c(&DAT_ram_4ff5bbb0,(int)DAT_ram_4ff6dc9c + 0x30f5b,0x30801);
      *(bool *)((int)pvVar12 + 0x6c594) = iVar4 != 3 && iVar11 != 3;
    }
  }
LAB_ram_480cf266:
  puVar3 = DAT_ram_4ff6dc94;
  if ((*(char *)(DAT_ram_4ff6dc94 + 0x4690) != '\0') &&
     (*(char *)((int)DAT_ram_4ff6dc94 + 0x126d5) == '\0')) {
    FUN_ram_48032bca((int)DAT_ram_4ff6dc94 + 0x126d5);
    FUN_ram_4ff454c4((int)puVar3 + 0x12716,puVar3 + 0x4691);
    *(undefined1 *)((int)puVar3 + 0x1272e) = *(undefined1 *)((int)puVar3 + 0x11a41);
    *(undefined1 *)((int)puVar3 + 0x1272f) = *(undefined1 *)((int)puVar3 + 0x11a42);
    iVar4 = FUN_ram_480b66f6();
    if (iVar4 == 0) {
      *(char **)((int)pvVar8 + 0x87bc0) = "restore_identity_store_failed";
      return;
    }
  }
  if ((*(char *)(puVar3 + 0x2586) != '\0') && (*(char *)((int)puVar3 + 0x9619) == '\0')) {
    *(undefined1 *)((int)puVar3 + 0x9619) = 1;
    puVar3[0x45a8] = 0x1f8;
    FUN_ram_4ff45158(puVar3 + 0x25a7,
                     "{\"ok\":false,\"error\":\"command_interrupted\",\"reconcile\":true}",0x3c);
    FUN_ram_480b66f6();
  }
  FUN_ram_480ceb3c();
  return;
}


