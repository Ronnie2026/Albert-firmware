/* Firmware entry: 0x48118d2c */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_48118d2c(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  byte bVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  uint *puVar26;
  byte **ppbVar27;
  char *pcVar28;
  undefined1 *puVar29;
  undefined4 *puVar30;
  size_t *psVar31;
  undefined4 *puVar32;
  void *__s;
  undefined4 *puVar33;
  uint *puVar34;
  char cVar35;
  undefined1 *puVar36;
  byte **ppbVar37;
  char *pcVar38;
  undefined **ppuVar39;
  byte *pbStack_16c;
  uint uStack_168;
  uint uStack_164;
  undefined1 uStack_145;
  size_t local_144;
  char *pcStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [4];
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [4];
  int iStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  ushort uStack_b4;
  undefined8 uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  ushort uStack_88;
  byte *pbStack_84;
  char *pcStack_80;
  char *pcStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  byte *pbStack_64;
  undefined4 uStack_60;
  ushort uStack_5c;
  byte *apbStack_44 [4];
  
  iVar3 = DAT_ram_4ff6dc9c;
  iVar10 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    cVar5 = *(char *)(DAT_ram_4ff6dcc8 + 0x28a);
  }
  else {
    cVar5 = '\0';
  }
  iStack_dc = DAT_ram_4ff6dc9c + 0xf5a;
  *(undefined1 *)(DAT_ram_4ff6dc9c + 0xf5b) = 0;
  *(undefined1 *)(iVar3 + 0xf5a) = 0x7b;
  uStack_d8 = 0x18001;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 1;
  uStack_d4 = 1;
  uStack_cc = 1;
  uStack_c0 = 1;
  uStack_d0 = 1;
  FUN_ram_480b407c(&iStack_dc,"version",2);
  FUN_ram_4808c96e(&iStack_dc,"op",&DAT_ram_481cd044,4);
  pcVar28 = (char *)(DAT_ram_4ff6dcc8 + 0x63cf);
  sVar6 = strlen(pcVar28);
  FUN_ram_4808c96e(&iStack_dc,"device_id",pcVar28,sVar6);
  sVar6 = strlen((char *)(iVar3 + 0x234));
  FUN_ram_4808c96e(&iStack_dc,"boot_id",(char *)(iVar3 + 0x234),sVar6);
  FUN_ram_4808c96e(&iStack_dc,"firmware_version","P1.6.4",6);
  FUN_ram_4808c96e(&iStack_dc,"hardware_profile",&DAT_ram_481c3ddc,4);
  FUN_ram_4808c2dc(&iStack_dc,"sync_enabled",cVar5);
  if (((((char)uStack_b4 == '\0') || (10 < uStack_d0 - 1)) ||
      (*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0')) ||
     (((iVar7 = FUN_ram_4808c696(&iStack_dc,"settings"), iVar7 == 0 || ((char)uStack_b4 == '\0')) ||
      ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))))) {
    uStack_b4 = uStack_b4 & 0xff00;
  }
  else {
    *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7b;
    *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
    *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
    *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 1;
    uStack_d4 = uStack_d4 + 1;
    uStack_d0 = uStack_d0 + 1;
  }
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  auStack_104[0] = 0;
  pbStack_16c = (byte *)&DAT_ram_4ff5bd30;
  puVar33 = &DAT_ram_4ff5bd30;
  puVar30 = &uStack_124;
  do {
    puVar32 = (undefined4 *)((int)puVar30 + 2);
    FUN_ram_4819ad74(puVar30,3,&DAT_ram_481c3b70,*(undefined1 *)puVar33);
    puVar33 = (undefined4 *)((int)puVar33 + 1);
    puVar30 = puVar32;
  } while ((undefined4 *)auStack_104 != puVar32);
  sVar6 = strlen((char *)&uStack_124);
  FUN_ram_4808c96e(&iStack_dc,"epoch",&uStack_124,sVar6);
  FUN_ram_480b2068(&iStack_dc,"revision",DAT_ram_4ff5bd40);
  if (DAT_ram_4ff5bd64._1_1_ == '\0') {
    if ((char)DAT_ram_4ff5bd64 == '\0') {
      pcVar28 = "stored";
      uVar18 = 6;
    }
    else {
      pcVar28 = "unsaved";
      uVar18 = 7;
    }
  }
  else {
    pcVar28 = "failed";
    uVar18 = 6;
  }
  FUN_ram_4808c96e(&iStack_dc,"save_state",pcVar28,uVar18);
  FUN_ram_480b2068(&iStack_dc,"active_driver_id",DAT_ram_4ff6dd80);
  uVar20 = uStack_d0;
  if ((((char)uStack_b4 == '\0') || (uStack_d0 < 2)) ||
     ((*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0' ||
      ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))))) {
LAB_ram_4811900c:
    uStack_b4 = uStack_b4 & 0xff00;
  }
  else {
    uStack_d0 = uStack_d0 - 1;
    *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7d;
    *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
    uStack_d4 = uStack_d4 + 1;
    if ((10 < uVar20 - 2) ||
       ((((*(char *)((int)&uStack_c4 + uVar20 + 2) == '\0' ||
          (iVar7 = FUN_ram_4808c696(&iStack_dc,"capabilities"), iVar7 == 0)) ||
         ((char)uStack_b4 == '\0')) || ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2))))))
    goto LAB_ram_4811900c;
    *(undefined1 *)(uStack_d4 + iStack_dc) = 0x5b;
    *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
    *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
    *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 0;
    uStack_d4 = uStack_d4 + 1;
    uStack_d0 = uStack_d0 + 1;
  }
  ppuVar39 = &PTR_s_api_call_ram_481cc0e0_ram_481f5180;
  do {
    puVar15 = *ppuVar39;
    ppuVar39 = ppuVar39 + 1;
    FUN_ram_4808c458(&iStack_dc,puVar15);
  } while (ppuVar39 != &PTR_s_api_call_ram_481cc0e0_ram_481f51a8);
  if ((((char)uStack_b4 == '\0') || (uStack_d0 < 2)) ||
     ((uVar20 = uStack_d0 - 1, *(char *)((int)&uStack_c4 + uStack_d0 + 3) != '\0' ||
      ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))))) {
    uStack_b4 = uStack_b4 & 0xff00;
    uVar24 = uStack_d4;
    if (param_1 != 0) {
      return 0;
    }
  }
  else {
    uVar24 = uStack_d4 + 1;
    *(undefined1 *)(iStack_dc + uStack_d4) = 0x5d;
    *(undefined1 *)(iStack_dc + uVar24) = 0;
    uStack_d0 = uVar20;
    if (param_1 != 0) {
      if (uVar20 != 1) {
        return 0;
      }
      if ((char)uStack_c0 == '\0') {
        return 0;
      }
      if (uStack_d8 < uVar24) {
        return 0;
      }
      if (uStack_d8 - uVar24 < 2) {
        return 0;
      }
      uStack_d4 = uStack_d4 + 2;
      *(undefined1 *)(iStack_dc + uVar24) = 0x7d;
      *(undefined1 *)(iStack_dc + uStack_d4) = 0;
      goto LAB_ram_48119756;
    }
  }
  uStack_d4 = uVar24;
  iVar8 = FUN_ram_48025ba6();
  uVar16 = DAT_ram_4ff5bd38;
  uVar18 = DAT_ram_4ff5bd34;
  *(undefined4 *)(iVar3 + 0x28) = DAT_ram_4ff5bd30;
  iVar7 = DAT_ram_4ff6dd80;
  uVar20 = DAT_ram_4ff5bd40;
  uVar17 = DAT_ram_4ff5bd3c;
  *(int *)(iVar3 + 0x44) = iVar8;
  *(undefined4 *)(iVar3 + 0x2c) = uVar18;
  *(undefined4 *)(iVar3 + 0x30) = uVar16;
  *(undefined4 *)(iVar3 + 0x34) = uVar17;
  *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x1c);
  *(uint *)(iVar3 + 0x38) = uVar20;
  *(int *)(iVar3 + 0x40) = iVar7;
  cVar35 = '\0';
  if (((cVar5 != '\0') && (cVar1 = *(char *)(iVar3 + 0x24), cVar35 = cVar5, cVar1 != '\0')) &&
     (cVar35 = cVar1, *(int *)(iVar3 + 0x1c) == *(int *)(iVar3 + 0x20))) {
    if (*(char *)(iVar3 + 0x25) == '\0') {
      if (((uVar20 == *(uint *)(iVar3 + 0x10)) &&
          (iVar9 = FUN_ram_4ff4511a(iVar3 + 0x28,iVar3,0x10), iVar9 == 0)) &&
         (iVar7 == *(int *)(iVar3 + 0x14))) {
        cVar35 = (uint)*(ushort *)(DAT_ram_4ff6dcc8 + 0x288) * 1000 <=
                 (uint)(iVar8 - *(int *)(iVar3 + 0x18));
      }
    }
    else {
      cVar35 = *(int *)(iVar3 + 0x14) != iVar7;
    }
  }
  bVar19 = DAT_ram_4ff5c880;
  *(char *)(iVar3 + 0x48) = cVar35;
  if (bVar19 == 0) {
    cVar35 = *(char *)(iVar10 + 0x9618);
  }
  else {
    FUN_ram_4808c7bc(&iStack_dc,"reboot");
    sVar6 = strlen(&DAT_ram_4ff5c881);
    FUN_ram_4808c96e(&iStack_dc,"command_id",&DAT_ram_4ff5c881,sVar6);
    sVar6 = strlen(&DAT_ram_4ff5c8c2);
    FUN_ram_4808c96e(&iStack_dc,"command_sha256",&DAT_ram_4ff5c8c2,sVar6);
    if (DAT_ram_4ff5c880 == 3) {
      pcVar28 = "restarting";
      uVar18 = 10;
    }
    else if (DAT_ram_4ff5c880 < 4) {
      if (DAT_ram_4ff5c880 == 1) {
        pcVar28 = "awaiting_ack";
        uVar18 = 0xc;
      }
      else if (DAT_ram_4ff5c880 == 2) {
        pcVar28 = "ready";
        uVar18 = 5;
      }
      else {
        pcVar28 = "idle";
        uVar18 = 4;
      }
    }
    else {
      uVar18 = 4;
      if (DAT_ram_4ff5c880 == 4) {
        pcVar28 = "failed";
        uVar18 = 6;
      }
      else {
        pcVar28 = "idle";
      }
    }
    FUN_ram_4808c96e(&iStack_dc,"state",pcVar28,uVar18);
    sVar6 = strlen(&DAT_ram_4ff5c903);
    FUN_ram_4808c96e(&iStack_dc,"error",&DAT_ram_4ff5c903,sVar6);
    FUN_ram_4808c244(&iStack_dc);
    cVar35 = *(char *)(iVar10 + 0x9618);
  }
  if ((cVar35 != '\0') && (*(char *)(iVar10 + 0x9619) != '\0')) {
    FUN_ram_4808c7bc(&iStack_dc,"receipt");
    FUN_ram_4808cb32(&iStack_dc,"command_id",iVar10 + 0x961a);
    FUN_ram_4808cb32(&iStack_dc,"command_sha256",iVar10 + 0x965b);
    FUN_ram_480b2068(&iStack_dc,"http_status",*(undefined4 *)(iVar10 + 0x116a0));
    puVar29 = (undefined1 *)(iVar10 + 0x116a4);
    puVar30 = &uStack_124;
    do {
      puVar33 = (undefined4 *)((int)puVar30 + 2);
      FUN_ram_4819ad74(puVar30,3,&DAT_ram_481c3b70,*puVar29);
      puVar29 = puVar29 + 1;
      puVar30 = puVar33;
    } while (puVar33 != (undefined4 *)auStack_104);
    FUN_ram_4808cb32(&iStack_dc,"settings_epoch",&uStack_124);
    FUN_ram_480b2068(&iStack_dc,"settings_revision",*(undefined4 *)(iVar10 + 0x116b4));
    FUN_ram_4808cb32(&iStack_dc,&DAT_ram_481d0b20,iVar10 + 0x969c);
    FUN_ram_4808c244(&iStack_dc);
  }
  if (*(char *)(iVar10 + 0x116b8) == '\0') {
    cVar35 = *(char *)(iVar10 + 0x11a40);
  }
  else {
    FUN_ram_4808c7bc(&iStack_dc,"resolution");
    FUN_ram_4808cb32(&iStack_dc,"event_id",iVar10 + 0x116fa);
    FUN_ram_4808cb32(&iStack_dc,"command_id",iVar10 + 0x116b9);
    FUN_ram_4808cb32(&iStack_dc,"action",iVar10 + 0x1173b);
    puVar29 = (undefined1 *)(iVar10 + 0x1174c);
    puVar30 = &uStack_124;
    do {
      puVar33 = (undefined4 *)((int)puVar30 + 2);
      FUN_ram_4819ad74(puVar30,3,&DAT_ram_481c3b70,*puVar29);
      puVar29 = puVar29 + 1;
      puVar30 = puVar33;
    } while (puVar33 != (undefined4 *)auStack_104);
    sVar6 = strlen((char *)&uStack_124);
    FUN_ram_4808c96e(&iStack_dc,"settings_epoch",&uStack_124,sVar6);
    FUN_ram_480b2068(&iStack_dc,"settings_revision",*(undefined4 *)(iVar10 + 0x1175c));
    iVar7 = FUN_ram_4ff453ae(iVar10 + 0x116b9,"cloud-backup");
    if ((iVar7 == 0) && (iVar7 = FUN_ram_4ff453ae(iVar10 + 0x1173b,"keep_device"), iVar7 == 0)) {
      if (*(char *)(iVar10 + 0x11760) != '\0') {
        FUN_ram_4808c7bc(&iStack_dc,"settings");
        FUN_ram_48075bd8(iVar10 + 0x11764,&uStack_124);
        FUN_ram_4808cb32(&iStack_dc,"epoch",&uStack_124);
        FUN_ram_480b2068(&iStack_dc,"revision",*(undefined4 *)(iVar10 + 0x11774));
        FUN_ram_4808cb32(&iStack_dc,"content_sha256",iVar10 + 0x11784);
        FUN_ram_480b967a(&iStack_dc,"base_backup_revision",*(undefined4 *)(iVar10 + 0x11920),
                         *(undefined4 *)(iVar10 + 0x11924));
        FUN_ram_4808c244(&iStack_dc);
      }
      if (*(char *)(iVar10 + 0x11830) != '\0') {
        pbStack_84 = (byte *)0x0;
        pcStack_80 = (char *)0x0;
        pcStack_7c = (char *)0x0;
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        FUN_ram_4819ad74(&pbStack_84,0x18,&DAT_ram_481c48f4);
        FUN_ram_4808c7bc(&iStack_dc,"records");
        FUN_ram_4808cb32(&iStack_dc,"dataset_epoch",iVar10 + 0x11831);
        FUN_ram_4808cb32(&iStack_dc,"wipe_epoch",&pbStack_84);
        FUN_ram_480b2068(&iStack_dc,"revision",*(undefined4 *)(iVar10 + 0x118a0));
        FUN_ram_4808cb32(&iStack_dc,"snapshot_sha256",iVar10 + 0x1184a);
        FUN_ram_480b967a(&iStack_dc,"base_checkpoint_revision",*(undefined4 *)(iVar10 + 0x11928),
                         *(undefined4 *)(iVar10 + 0x1192c));
        FUN_ram_4808c244(&iStack_dc);
      }
    }
    FUN_ram_4808c244(&iStack_dc);
    cVar35 = *(char *)(iVar10 + 0x11a40);
  }
  if ((cVar35 == '\x06') && (*(char *)(iVar10 + 0x11a5c) != '\0')) {
    FUN_ram_4808c7bc(&iStack_dc,"restore_receipt");
    FUN_ram_4808cb32(&iStack_dc,"restore_nonce",iVar10 + 0x11a5c);
    FUN_ram_480b967a(&iStack_dc,"manifest_revision",*(undefined4 *)(iVar10 + 0x11b60),
                     *(undefined4 *)(iVar10 + 0x11b64));
    cVar35 = *(char *)(DAT_ram_4ff6dc94 + 0x11a42);
    if (cVar35 == *(char *)(DAT_ram_4ff6dc94 + 0x11a41)) {
      if (cVar35 == '\0') goto LAB_ram_4811a006;
      pcVar28 = "applied";
    }
    else if (cVar35 == '\0') {
LAB_ram_4811a006:
      pcVar28 = "failed";
    }
    else {
      pcVar28 = "partial";
    }
    FUN_ram_4808cb32(&iStack_dc,"result",pcVar28);
    FUN_ram_4808c832(&iStack_dc,"completed_scopes");
    bVar19 = *(byte *)(iVar10 + 0x11a42);
    if ((bVar19 & 1) != 0) {
      FUN_ram_4808c458(&iStack_dc,"settings");
      bVar19 = *(byte *)(iVar10 + 0x11a42);
    }
    if ((bVar19 & 2) != 0) {
      FUN_ram_4808c458(&iStack_dc,"records");
    }
    FUN_ram_4808c290(&iStack_dc);
    bVar19 = *(byte *)(iVar10 + 0x11a42);
    if ((bVar19 & 1) != 0) {
      FUN_ram_48075bd8(iVar10 + 0x11ba8,&uStack_124);
      FUN_ram_4808cb32(&iStack_dc,"settings_epoch",&uStack_124);
      FUN_ram_480b2068(&iStack_dc,"settings_revision",*(undefined4 *)(iVar10 + 0x11bb8));
      FUN_ram_4808cb32(&iStack_dc,"settings_content_sha256",iVar10 + 0x11a9d);
      bVar19 = *(byte *)(iVar10 + 0x11a42);
    }
    if ((bVar19 & 2) != 0) {
      pbStack_84 = (byte *)0x0;
      pcStack_80 = (char *)0x0;
      pcStack_7c = (char *)0x0;
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      FUN_ram_4819ad74(&pbStack_84,0x18,&DAT_ram_481c48f4);
      FUN_ram_4808cb32(&iStack_dc,"records_dataset_epoch",iVar10 + 0x11bc1);
      FUN_ram_4808cb32(&iStack_dc,"records_wipe_epoch",&pbStack_84);
      FUN_ram_480b2068(&iStack_dc,"records_revision",*(undefined4 *)(iVar10 + 0x11c30));
      FUN_ram_4808cb32(&iStack_dc,"records_snapshot_sha256",iVar10 + 0x11bda);
    }
    if ((*(char *)(DAT_ram_4ff6dc94 + 0x11a42) == *(char *)(DAT_ram_4ff6dc94 + 0x11a41)) &&
       (*(char *)(DAT_ram_4ff6dc94 + 0x11a42) != '\0')) {
      pcVar28 = "stored";
    }
    else {
      pcVar28 = "failed";
    }
    FUN_ram_4808cb32(&iStack_dc,"persistence",pcVar28);
    FUN_ram_4808cb32(&iStack_dc,"error",iVar10 + 0x11b1f);
    FUN_ram_4808c244(&iStack_dc);
  }
  if ((*(char *)(iVar10 + 72000) != '\0') && (*(char *)(iVar10 + 0x11941) != '\0')) {
    uStack_b0._0_4_ = 0;
    uStack_b0._4_4_ = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    pbStack_84 = (byte *)0x0;
    pcStack_80 = (char *)0x0;
    pcStack_7c = (char *)0x0;
    iStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    FUN_ram_4819ad74(&uStack_b0,0x18,&DAT_ram_481c48f4);
    FUN_ram_4819ad74(&pbStack_84,0x18,&DAT_ram_481c48f4);
    FUN_ram_4808c7bc(&iStack_dc,"records_reset");
    FUN_ram_4808cb32(&iStack_dc,"event_id",iVar10 + 0x11942);
    FUN_ram_4808cb32(&iStack_dc,"previous_dataset_epoch",iVar10 + 0x11983);
    FUN_ram_4808cb32(&iStack_dc,"previous_wipe_epoch",&uStack_b0);
    FUN_ram_4808cb32(&iStack_dc,"dataset_epoch",iVar10 + 0x1199c);
    FUN_ram_4808cb32(&iStack_dc,"wipe_epoch",&pbStack_84);
    FUN_ram_4808c244(&iStack_dc);
  }
  uVar20 = DAT_ram_4ff5bd40;
  if (*(char *)(iVar10 + 0x119c8) != '\0') {
    bVar19 = 0;
    pbVar21 = pbStack_16c;
    do {
      bVar2 = *pbVar21;
      pbVar21 = pbVar21 + 1;
      bVar19 = bVar19 | bVar2;
    } while ((uint *)pbVar21 != &DAT_ram_4ff5bd40);
    if ((bVar19 != 0) && (DAT_ram_4ff5bd40 != 0)) {
      puVar29 = (undefined1 *)(iVar10 + 0x11a2c);
      iVar7 = FUN_ram_4ff4511a(&DAT_ram_4ff5bd30,puVar29,0x10);
      if ((iVar7 == 0) && (*(uint *)(iVar10 + 0x11a3c) <= uVar20)) {
        uStack_b0._0_4_ = 0;
        uStack_b0._4_4_ = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = uStack_90 & 0xffffff00;
        pbStack_84 = (byte *)0x0;
        pcStack_80 = (char *)0x0;
        pcStack_7c = (char *)0x0;
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        pbStack_64 = (byte *)((uint)pbStack_64 & 0xffffff00);
        puVar36 = (undefined1 *)(iVar10 + 0x11a18);
        puVar26 = (uint *)&uStack_b0;
        do {
          puVar34 = (uint *)((int)puVar26 + 2);
          FUN_ram_4819ad74(puVar26,3,&DAT_ram_481c3b70,*puVar36);
          puVar36 = puVar36 + 1;
          puVar26 = puVar34;
        } while (&uStack_90 != puVar34);
        ppbVar27 = &pbStack_84;
        do {
          ppbVar37 = (byte **)((int)ppbVar27 + 2);
          FUN_ram_4819ad74(ppbVar27,3,&DAT_ram_481c3b70,*puVar29);
          puVar29 = puVar29 + 1;
          ppbVar27 = ppbVar37;
        } while (&pbStack_64 != ppbVar37);
        FUN_ram_4808c7bc(&iStack_dc,"epoch_transition");
        FUN_ram_4808cb32(&iStack_dc,"event_id",iVar10 + 0x119c9);
        sVar6 = strlen((char *)&uStack_b0);
        FUN_ram_4808c96e(&iStack_dc,"previous_settings_epoch",&uStack_b0,sVar6);
        FUN_ram_480b2068(&iStack_dc,"previous_settings_revision",*(undefined4 *)(iVar10 + 0x11a28));
        FUN_ram_480b967a(&iStack_dc,"previous_backup_revision",*(undefined4 *)(iVar10 + 0x11a10),
                         *(undefined4 *)(iVar10 + 0x11a14));
        sVar6 = strlen((char *)&pbStack_84);
        FUN_ram_4808c96e(&iStack_dc,"settings_epoch",&pbStack_84,sVar6);
        FUN_ram_480b2068(&iStack_dc,"settings_revision",*(undefined4 *)(iVar10 + 0x11a3c));
        FUN_ram_4808c96e(&iStack_dc,"reason","revision_exhausted",0x12);
        FUN_ram_4808c244(&iStack_dc);
      }
    }
  }
  puVar30 = (undefined4 *)(iVar3 + 0x5f0);
  memset(puVar30,0,0x78);
  __s = (void *)(iVar3 + 2000);
  memset(__s,0,0x484);
  uVar20 = uStack_d4;
  uVar24 = uStack_d8;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
  if (cVar5 == '\0') goto LAB_ram_4811974c;
  uStack_168 = uStack_d8;
  if (*(char *)(iVar3 + 0x87b62) != '\0') {
    if (*(char *)(iVar10 + 0x11a40) == '\0') {
      if (*(char *)(iVar3 + 0x4a) == '\0') {
        if ((*(char *)(iVar3 + 0x48) == '\0') || (1 < *(byte *)(iVar3 + 0xc59)))
        goto LAB_ram_48119d3e;
      }
      else if (*(char *)(iVar3 + 0xc59) != '\0') goto LAB_ram_48119d3e;
      iVar7 = FUN_ram_480cf35c();
      if (iVar7 != 0) {
        puVar32 = (undefined4 *)(iVar3 + 0x668);
        puVar33 = puVar30;
        do {
          uVar25 = puVar32[1];
          uVar18 = puVar32[2];
          uVar16 = puVar32[3];
          uVar17 = puVar32[4];
          *puVar33 = *puVar32;
          puVar33[1] = uVar25;
          puVar33[2] = uVar18;
          puVar33[3] = uVar16;
          puVar33[4] = uVar17;
          puVar32 = puVar32 + 5;
          puVar33 = puVar33 + 5;
        } while (puVar32 != (undefined4 *)(iVar3 + 0x6e0));
        *(undefined1 *)(iVar3 + 0x817e1) = 0;
        uStack_100 = 0;
        local_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_b0._0_4_ = iVar3 + 0x817e1;
        uStack_b0._4_4_ = 0x4001;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 1;
        FUN_ram_4819ad74(&uStack_100,0x18,&DAT_ram_481c48f4,(uint)uStack_b0,
                         *(undefined4 *)(iVar3 + 0x650),*(undefined4 *)(iVar3 + 0x654));
        FUN_ram_4808c168(&uStack_b0);
        FUN_ram_480b407c(&uStack_b0,"schema",4);
        FUN_ram_4808cb32(&uStack_b0,"dataset_epoch",iVar3 + 0x5f1);
        FUN_ram_4808cb32(&uStack_b0,"wipe_epoch",&uStack_100);
        FUN_ram_480b2068(&uStack_b0,"revision",*(undefined4 *)(iVar3 + 0x660));
        FUN_ram_480b967a(&uStack_b0,"base_checkpoint_revision",*(undefined4 *)(iVar3 + 0x748),
                         *(undefined4 *)(iVar3 + 0x74c));
        FUN_ram_4808cb32(&uStack_b0,"snapshot_sha256",iVar3 + 0x60a);
        iVar8 = DAT_ram_4ff6dc9c;
        iVar7 = DAT_ram_4ff6dc88;
        if (*(char *)(iVar3 + 0x4a) == '\0') {
          FUN_ram_4802e57c(iVar3 + 0x85b18,iVar3 + 0x85fcb,0x4b3);
          FUN_ram_4808cb32(&uStack_b0,"snapshot_hex",iVar3 + 0x85fcb);
LAB_ram_4811ac46:
          iVar7 = FUN_ram_4808c64a(&uStack_b0);
          if (((iVar7 == 0) || (uVar24 <= uVar20)) || ((uVar24 - 1) - uVar20 <= uStack_a8 + 0x200))
          {
            memset(puVar30,0,0x78);
            *(char **)(iVar3 + 0x87bc0) = "records_payload_deferred";
          }
          else {
            FUN_ram_4808c8a8(&iStack_dc,"records",(uint)uStack_b0);
            uStack_168 = uStack_d8;
            uVar20 = uStack_d4;
          }
        }
        else {
          iVar23 = DAT_ram_4ff6dc9c + 0x30f5b;
          iVar9 = FUN_ram_480b5c0c(&DAT_ram_4ff5bbb0,iVar23,0x30801);
          if (iVar9 == 3) {
            pcVar28 = "records_base_read_failed";
          }
          else {
            pbStack_84 = (byte *)(iVar8 + 0x6975d);
            pcStack_80 = (char *)0x10001;
            pcStack_7c = (char *)0x0;
            iStack_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            pbStack_64 = (byte *)0x0;
            uStack_60 = 0;
            uStack_5c = 1;
            *(undefined1 *)(iVar8 + 0x6975d) = 0;
            if ((iVar9 == 1) && (DAT_ram_4ff5bbd0 == 0x4b3)) {
              if (*(char *)(iVar8 + 0x6e0) == '\0') {
LAB_ram_4811ad2e:
                iVar7 = FUN_ram_48034886(iVar23,0x4b3,iVar8 + 0x60a);
joined_r0x4811ae30:
                if (iVar7 == 0) goto LAB_ram_4811aba2;
                goto LAB_ram_4811ad3e;
              }
              iVar9 = FUN_ram_48034886(iVar23,0x4b3,iVar8 + 0x6fa);
              if (iVar9 == 0) goto LAB_ram_4811ad2e;
              FUN_ram_4808c168(&pbStack_84);
              iVar7 = FUN_ram_481187ca(&pbStack_84,iVar23,0x4b3,iVar8 + 0x85b18,0x4b3,iVar8 + 0x6fa,
                                       iVar7,0x1800);
              if (iVar7 == 0) {
                iVar7 = FUN_ram_48034886(iVar23,0x4b3,iVar8 + 0x60a);
                goto joined_r0x4811ae30;
              }
              iVar7 = FUN_ram_4808c64a(&pbStack_84);
              pcVar28 = pcStack_7c;
              if (iVar7 == 0) {
                iVar7 = FUN_ram_48034886(iVar23,0x4b3,iVar8 + 0x60a);
                goto joined_r0x4811ae30;
              }
              iVar7 = FUN_ram_48034886(iVar23,0x4b3,iVar8 + 0x60a);
              if ((iVar7 != 0) ||
                 (iVar7 = FUN_ram_480b621c(&DAT_ram_4ff5bbb0,&DAT_ram_4ff5bd30,iVar8 + 0x85b18,0x4b3
                                          ), iVar7 != 0)) {
                pbVar21 = pbStack_84;
                if (pcVar28 < (char *)0x966) {
                  if (((pbStack_84 == (byte *)0x0) || (pcVar28 == (char *)0x0)) ||
                     (iVar7 = FUN_ram_4808c696(&uStack_b0,"delta"), iVar7 == 0)) {
                    uStack_88 = uStack_88 & 0xff00;
                  }
                  else {
                    iVar7 = FUN_ram_4808c90a(&uStack_b0,pbVar21,pcVar28);
                    if (iVar7 == 0) {
                      uStack_88 = uStack_88 & 0xff00;
                    }
                  }
                  goto LAB_ram_4811ac46;
                }
                goto LAB_ram_4811ad3e;
              }
            }
            else {
LAB_ram_4811aba2:
              iVar7 = FUN_ram_480b621c(&DAT_ram_4ff5bbb0,&DAT_ram_4ff5bd30,iVar8 + 0x85b18,0x4b3);
              if (iVar7 != 0) {
LAB_ram_4811ad3e:
                pcVar4 = (char *)(iVar8 + 0x85fcb);
                pcVar38 = (char *)(iVar8 + 0x85b18);
                pcVar28 = pcVar4;
                do {
                  cVar5 = *pcVar38;
                  pcVar38 = pcVar38 + 1;
                  FUN_ram_4819ad74(pcVar28,3,&DAT_ram_481c3b70,cVar5);
                  pcVar28 = pcVar28 + 2;
                } while (pcVar4 != pcVar38);
                sVar6 = strlen(pcVar4);
                FUN_ram_4808c96e(&uStack_b0,"snapshot_hex",pcVar4,sVar6);
                goto LAB_ram_4811ac46;
              }
            }
            pcVar28 = "records_base_store_failed";
          }
          *(char **)(iVar8 + 0x87bc0) = pcVar28;
          memset(puVar30,0,0x78);
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
      if (*(char *)(iVar3 + 0x4d) == '\0') goto LAB_ram_481193c6;
      cVar5 = *(char *)(iVar3 + 0x87b62);
    }
    else {
LAB_ram_48119d3e:
      cVar5 = *(char *)(iVar3 + 0x4d);
    }
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
    if (((cVar5 != '\0') &&
        (uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0), *(char *)(iVar3 + 0x87b65) == '\0'))
       && ((uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0), *(char *)(iVar10 + 72000) == '\0'
           && ((uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0),
               *(char *)(iVar10 + 0x11a40) == '\0' &&
               (uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0), *(byte *)(iVar3 + 0xc59) < 2)
               ))))) {
      pbStack_84 = (byte *)(iVar3 + 0x817e1);
      *(undefined1 *)(iVar3 + 0x817e1) = 0;
      pcStack_7c = (char *)0x0;
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      pbStack_64 = (byte *)0x0;
      uStack_60 = 0;
      uStack_5c = 1;
      pcStack_80 = (char *)0x4001;
      FUN_ram_4808c168(&pbStack_84);
      iVar10 = FUN_ram_480b3644(&pbStack_84,__s);
      if ((iVar10 == 0) || (iVar10 = FUN_ram_4808c64a(&pbStack_84), iVar10 == 0)) {
        memset(__s,0,0x484);
        if (DAT_ram_4ff6dcdc == 0) {
          pcVar28 = "outbox_resource_wait";
        }
        else {
          pcVar28 = *(char **)(DAT_ram_4ff6dcdc + 0x41114);
        }
        *(char **)(iVar3 + 0x87bc0) = pcVar28;
      }
      else {
        uStack_b0 = FUN_ram_48078fbc(pbStack_84,pcStack_7c,"pending_trips");
        if ((((int)uStack_b0 == 0) || (uStack_168 <= uVar20)) ||
           ((uStack_168 - 1) - uVar20 <= (int)uStack_b0 + 0x200U)) {
          memset(__s,0,0x484);
          *(char **)(iVar3 + 0x87bc0) = "records_payload_deferred";
        }
        else {
          FUN_ram_4808c8a8(&iStack_dc,"pending_trips",(int)((ulonglong)uStack_b0 >> 0x20));
        }
        uStack_168 = uStack_d8;
        uVar20 = uStack_d4;
      }
    }
  }
LAB_ram_481193c6:
  if ((uVar20 < uStack_168) && (0x800 < (uStack_168 - 1) - uVar20)) {
    FUN_ram_480b5280(&iStack_dc);
  }
  iVar7 = DAT_ram_4ff6dc9c;
  iVar10 = DAT_ram_4ff6dc88;
  uVar20 = DAT_ram_4ff5bd40;
  if (((*(char *)(DAT_ram_4ff6dc9c + 0x4a) != '\0') && (DAT_ram_4ff6dc88 != 0)) &&
     (*(char *)(DAT_ram_4ff6dc88 + 0x6c594) != '\0')) {
    uStack_100 = 0;
    local_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    auStack_e0[0] = 0;
    puVar30 = &uStack_100;
    do {
      puVar33 = (undefined4 *)((int)puVar30 + 2);
      FUN_ram_4819ad74(puVar30,3,&DAT_ram_481c3b70,*pbStack_16c);
      pbStack_16c = pbStack_16c + 1;
      puVar30 = puVar33;
    } while (puVar33 != (undefined4 *)auStack_e0);
    if ((((char)uStack_b4 == '\0') || (10 < uStack_d0 - 1)) ||
       (*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0')) {
LAB_ram_4811a95a:
      uStack_b4 = uStack_b4 & 0xff00;
    }
    else {
      iVar8 = FUN_ram_4808c696(&iStack_dc,"views");
      if (((iVar8 == 0) || ((char)uStack_b4 == '\0')) ||
         ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))) goto LAB_ram_4811a95a;
      *(undefined1 *)(uStack_d4 + iStack_dc) = 0x5b;
      *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
      *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
      *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 0;
      uStack_d4 = uStack_d4 + 1;
      uStack_d0 = uStack_d0 + 1;
    }
    iVar9 = iVar10 + 0x14001;
    pbVar21 = (byte *)(iVar7 + 0x6975d);
    ppuVar39 = &PTR_s__config_ram_481cac88_0xc_ram_482226cc;
    iVar23 = iVar10 + 0xc000;
    iVar8 = 0;
LAB_ram_4811a220:
    pcVar28 = *ppuVar39;
    pbStack_84 = (byte *)strlen(pcVar28);
    pcStack_80 = pcVar28;
    uVar20 = FUN_ram_4807a75c(pbStack_84,pcVar28);
    if (uVar20 == 0) {
      cVar5 = *(char *)(iVar7 + 0x48);
      if (iVar8 == 10) {
        *(undefined1 *)(iVar7 + 0x6975d) = 0;
LAB_ram_4811a4a2:
        iVar13 = FUN_ram_4802d110(DAT_ram_4ff6dcc8 + 0xa60);
        if (iVar13 != 0) {
          pbStack_84 = (byte *)(iVar7 + 0x6975d);
          pcStack_80 = (char *)0x10001;
          uStack_70 = 0;
          uStack_6c = 0;
          pbStack_64 = (byte *)0x0;
          uStack_60 = 0;
          uStack_5c = 1;
          *(undefined1 *)(iVar7 + 0x6975d) = 0x7b;
          iVar13 = DAT_ram_4ff6dcc8;
          pcStack_7c = (char *)0x1;
          *(undefined1 *)(iVar7 + 0x6975e) = 0;
          uStack_74 = 1;
          uStack_68 = 1;
          iStack_78 = 1;
          FUN_ram_4808c2dc(&pbStack_84,&DAT_ram_481c4274,1);
          FUN_ram_480b2068(&pbStack_84,"revision",*(undefined4 *)(iVar13 + 0xa60));
          FUN_ram_4808c2dc(&pbStack_84,"has_current",*(undefined1 *)(iVar13 + 0xaa8));
          cVar5 = *(char *)(iVar13 + 0xf88);
          if (cVar5 == '\x02') {
            pcVar4 = "stale";
            uVar18 = 5;
          }
          else if (cVar5 == '\x03') {
            pcVar4 = "invalid";
            uVar18 = 7;
          }
          else if (cVar5 == '\x01') {
            pcVar4 = "ready";
            uVar18 = 5;
          }
          else {
            pcVar4 = "waiting";
            uVar18 = 7;
          }
          FUN_ram_4808c96e(&pbStack_84,"sourceState",pcVar4,uVar18);
          if (*(char *)(iVar13 + 0xf89) < '\0') {
            iVar14 = FUN_ram_4808c696(&pbStack_84,"fsdActive");
            if (iVar14 == 0) {
              uStack_5c = uStack_5c & 0xff00;
            }
            else {
              iVar14 = FUN_ram_4808c90a(&pbStack_84,&DAT_ram_481c6654,4);
              if (iVar14 == 0) {
                uStack_5c = uStack_5c & 0xff00;
              }
            }
          }
          else {
            FUN_ram_4808c2dc(&pbStack_84,"fsdActive",*(char *)(iVar13 + 0xf89) != '\0');
          }
          if (*(char *)(iVar13 + 0xaa8) == '\0') {
            iVar13 = FUN_ram_4808c696(&pbStack_84,"current");
            if (iVar13 != 0) {
              iVar13 = FUN_ram_4808c90a(&pbStack_84,&DAT_ram_481c6654,4);
              if (iVar13 != 0) goto LAB_ram_4811a5ca;
            }
            goto LAB_ram_4811a87a;
          }
          FUN_ram_4808c7bc(&pbStack_84);
          FUN_ram_480b320a(&pbStack_84,iVar13 + 0xab0);
          FUN_ram_4808c244(&pbStack_84);
LAB_ram_4811a5ca:
          if ((((char)uStack_5c == '\0') || (iStack_78 != 1)) ||
             ((uStack_164 = uStack_68 & 0xff, uStack_164 == 0 ||
              ((pcStack_80 < pcStack_7c || ((uint)((int)pcStack_80 - (int)pcStack_7c) < 2))))))
          goto LAB_ram_4811a87a;
          (pbStack_84 + (int)pcStack_7c)[1] = 0;
          pbStack_84[(int)pcStack_7c] = 0x7d;
          goto LAB_ram_4811a28c;
        }
LAB_ram_4811a87a:
        ppuVar39 = ppuVar39 + 1;
        iVar8 = 0xb;
        iVar23 = iVar23 + 0x804c;
        iVar9 = iVar9 + 0x804c;
        goto LAB_ram_4811a220;
      }
      if (iVar8 == 7) {
        if (*(char *)(iVar7 + 0x668) == '\0') {
          uStack_164 = 0;
          if (cVar5 != '\0') goto LAB_ram_4811a8c2;
LAB_ram_4811a890:
          if (*(char *)(iVar9 + 0x47) == '\0') goto LAB_ram_4811a258;
          ppuVar39 = ppuVar39 + 1;
          iVar23 = iVar23 + 0x804c;
          iVar9 = iVar9 + 0x804c;
          iVar8 = 8;
          goto LAB_ram_4811a220;
        }
        if (*(int *)(iVar10 + 0x6c590) == *(int *)(iVar7 + 0x6d8)) {
          if (cVar5 == '\0') goto LAB_ram_4811a890;
          uStack_164 = 0;
        }
        else {
          if (cVar5 == '\0') goto LAB_ram_4811a258;
          uStack_164 = 0;
        }
LAB_ram_4811a8c2:
        *(undefined1 *)(iVar7 + 0x6975d) = 0;
        goto LAB_ram_4811a264;
      }
      if ((cVar5 != '\0') || (*(char *)(iVar9 + 0x47) == '\0')) {
LAB_ram_4811a258:
        *(undefined1 *)(iVar7 + 0x6975d) = 0;
        uStack_164 = 0;
        goto LAB_ram_4811a264;
      }
    }
    else {
      if (iVar8 == 7) {
        if (*(char *)(iVar7 + 0x668) != '\0') {
          uStack_164 = (uint)*(byte *)(iVar7 + 0x48);
          if (uStack_164 == 0) {
            *(undefined1 *)(iVar7 + 0x6975d) = 0;
            uStack_164 = uVar20;
            goto LAB_ram_4811a264;
          }
          goto LAB_ram_4811a8c2;
        }
        uStack_164 = (uint)*(byte *)(iVar7 + 0x48);
        if (uStack_164 != 0) goto LAB_ram_4811a8c2;
        *(undefined1 *)(iVar7 + 0x6975d) = 0;
        uStack_164 = uVar20;
LAB_ram_4811a27c:
        iVar13 = FUN_ram_480d0cd2(pcVar28,iVar7 + 0x6975d,0x10001);
      }
      else {
        *(undefined1 *)(iVar7 + 0x6975d) = 0;
        uStack_164 = uVar20;
        if (iVar8 == 10) goto LAB_ram_4811a4a2;
LAB_ram_4811a264:
        iVar13 = FUN_ram_4ff453ae(pcVar28,"/onboarding/status");
        if (iVar13 != 0) goto LAB_ram_4811a27c;
        pcStack_7c = (char *)0x0;
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        pbStack_64 = (byte *)0x0;
        uStack_60 = 0;
        pcStack_80 = (char *)0x10001;
        uStack_5c = 1;
        pbStack_84 = pbVar21;
        iVar13 = FUN_ram_4808d544(&pbStack_84);
      }
      if (iVar13 != 0) {
LAB_ram_4811a28c:
        sVar6 = strlen((char *)pbVar21);
        if (sVar6 - 1 < 0x8000) {
          local_144 = 0;
          pcStack_140 = (char *)0x0;
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          memset(&pbStack_84,0,0x41);
          FUN_ram_4817b062(pbVar21,sVar6,&local_144,0);
          psVar31 = &local_144;
          ppbVar27 = &pbStack_84;
          do {
            ppbVar37 = (byte **)((int)ppbVar27 + 2);
            FUN_ram_4819ad74(ppbVar27,3,&DAT_ram_481c3b70,(char)*psVar31);
            psVar31 = (size_t *)((int)psVar31 + 1);
            ppbVar27 = ppbVar37;
          } while (ppbVar37 != apbStack_44);
          if (*(char *)(iVar9 + 0x47) != '\0') {
            iVar13 = FUN_ram_4ff453ae(iVar9,&pbStack_84);
            if (((iVar13 == 0) && (uStack_164 == 0)) && (*(char *)(iVar7 + 0x48) == '\0'))
            goto LAB_ram_4811a426;
          }
          *(undefined1 *)(iVar7 + 0x30f5b) = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          uStack_88 = 1;
          uStack_b0._0_4_ = iVar7 + 0x30f5b;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_b0._4_4_ = 0x30801;
          if ((*(char *)(iVar9 + 0x47) == '\0') || (*(int *)(iVar9 + 0x43) == 0)) {
LAB_ram_4811a34e:
            uVar24 = 0;
            pbVar22 = pbVar21;
            do {
              bVar19 = *pbVar22;
              iVar13 = 6;
              pbVar22 = pbVar22 + 1;
              if (0x1f < bVar19) {
                iVar13 = 2;
                if (bVar19 != 0x22) {
                  iVar13 = (bVar19 == 0x5c) + 1;
                }
              }
              uVar24 = uVar24 + iVar13;
            } while (pbVar22 != pbVar21 + sVar6);
            iVar13 = 0;
          }
          else {
            *(undefined1 *)(iVar7 + 0x30f5b) = 0x7b;
            uStack_a8 = 1;
            *(undefined1 *)(iVar7 + 0x30f5c) = 0;
            uStack_a4 = 1;
            uStack_a0 = 1;
            uStack_94 = 1;
            iVar13 = FUN_ram_481187ca(&uStack_b0,iVar23,*(undefined4 *)(iVar9 + 0x43),pbVar21,sVar6,
                                      iVar9,iVar10,0x1800);
            if ((iVar13 == 0) || (iVar13 = FUN_ram_4808c64a(&uStack_b0), iVar13 == 0))
            goto LAB_ram_4811a34e;
            uVar20 = 0;
            pbVar22 = pbVar21;
            do {
              bVar19 = *pbVar22;
              iVar14 = 6;
              pbVar22 = pbVar22 + 1;
              if (0x1f < bVar19) {
                iVar14 = 2;
                if (bVar19 != 0x22) {
                  iVar14 = (bVar19 == 0x5c) + 1;
                }
              }
              uVar20 = uVar20 + iVar14;
            } while ((byte *)(iVar7 + 0x6975d + sVar6) != pbVar22);
            uVar24 = uStack_a8;
            if (uVar20 <= uStack_a8) goto LAB_ram_4811a34e;
          }
          uVar20 = 0;
          if (uStack_d4 < uStack_d8) {
            uVar20 = (uStack_d8 - 1) - uStack_d4;
          }
          if (uVar24 + 0x200 <= uVar20) {
            if ((((char)uStack_b4 == '\0') || (10 < uStack_d0 - 1)) ||
               (*(char *)((int)&uStack_c4 + uStack_d0 + 3) != '\0')) {
LAB_ram_4811a642:
              uStack_b4 = uStack_b4 & 0xff00;
            }
            else {
              if (*(char *)((int)&uStack_d0 + uStack_d0 + 3) == '\0') {
                if ((uStack_d8 < uStack_d4) || (uStack_d8 - uStack_d4 < 2)) goto LAB_ram_4811a642;
                puVar29 = (undefined1 *)(iStack_dc + uStack_d4);
                uStack_d4 = uStack_d4 + 1;
                *puVar29 = 0x2c;
                *(undefined1 *)(iStack_dc + uStack_d4) = 0;
              }
              if ((uStack_d8 < uStack_d4) || (uStack_d8 - uStack_d4 < 2)) goto LAB_ram_4811a642;
              *(undefined1 *)((int)&uStack_d0 + uStack_d0 + 3) = 0;
              *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7b;
              *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
              *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
              *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 1;
              uStack_d4 = uStack_d4 + 1;
              uStack_d0 = uStack_d0 + 1;
            }
            sVar11 = strlen(pcVar28);
            FUN_ram_4808c96e(&iStack_dc,"path",pcVar28,sVar11);
            uVar20 = uStack_d0;
            if (((((char)uStack_b4 == '\0') || (10 < uStack_d0 - 1)) ||
                (*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0')) ||
               (iVar14 = FUN_ram_4808c696(&iStack_dc,"params"), uVar20 = uStack_d0, iVar14 == 0)) {
LAB_ram_4811a832:
              uStack_d0 = uVar20;
              uStack_b4 = uStack_b4 & 0xff00;
            }
            else {
              uStack_145 = 0x7b;
              iVar14 = FUN_ram_4808c90a(&iStack_dc,&uStack_145,1);
              uVar20 = uStack_d0;
              if (iVar14 == 0) goto LAB_ram_4811a832;
              cVar5 = (char)uStack_b4;
              uVar20 = uStack_d0 + 1;
              *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
              *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 1;
              if (((cVar5 == '\0') || (uVar20 < 2)) ||
                 ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))) goto LAB_ram_4811a832;
              *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7d;
              *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
              uStack_d4 = uStack_d4 + 1;
            }
            uVar18 = FUN_ram_4819b728(0);
            FUN_ram_480b2068(&iStack_dc,"sampled_at_unix",uVar18);
            sVar11 = strlen((char *)(iVar7 + 0x234));
            FUN_ram_4808c96e(&iStack_dc,"boot_id",(char *)(iVar7 + 0x234),sVar11);
            sVar11 = strlen((char *)&uStack_100);
            FUN_ram_4808c96e(&iStack_dc,"settings_epoch",&uStack_100,sVar11);
            FUN_ram_480b2068(&iStack_dc,"settings_revision",DAT_ram_4ff5bd40);
            FUN_ram_480b2068(&iStack_dc,"active_driver_id",DAT_ram_4ff6dd80);
            if (iVar13 == 0) {
              FUN_ram_4808c96e(&iStack_dc,&DAT_ram_481d0b20,pbVar21,sVar6);
LAB_ram_4811a7f0:
              if (((((char)uStack_b4 == '\0') || (uStack_d0 < 2)) ||
                  (*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0')) ||
                 ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))) goto LAB_ram_4811a798;
              *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7d;
              *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
              uStack_d4 = uStack_d4 + 1;
              uStack_d0 = uStack_d0 - 1;
            }
            else {
              sVar11 = strlen((char *)&pbStack_84);
              FUN_ram_4808c96e(&iStack_dc,"content_sha256",&pbStack_84,sVar11);
              uVar24 = uStack_a8;
              uVar20 = (uint)uStack_b0;
              if ((((uint)uStack_b0 != 0) && (uStack_a8 != 0)) &&
                 ((iVar13 = FUN_ram_4808c696(&iStack_dc,"body_delta"), iVar13 != 0 &&
                  (iVar13 = FUN_ram_4808c90a(&iStack_dc,uVar20,uVar24), iVar13 != 0))))
              goto LAB_ram_4811a7f0;
LAB_ram_4811a798:
              uStack_b4 = uStack_b4 & 0xff00;
            }
            sVar11 = strlen((char *)&pbStack_84);
            if (sVar11 == 0x40) {
              FUN_ram_4ff45158(iVar23,pbVar21,sVar6);
              *(undefined1 *)(iVar10 + 0xc000 + iVar8 * 0x804c + sVar6) = 0;
              FUN_ram_4ff454c4(iVar9,&pbStack_84);
              *(size_t *)(iVar9 + 0x43) = sVar6;
              *(undefined1 *)(iVar9 + 0x47) = 0;
            }
            if (iVar8 == 7) {
              ppuVar39 = ppuVar39 + 1;
              *(undefined4 *)(iVar10 + 0x6c590) = *(undefined4 *)(iVar7 + 0x6d8);
              iVar23 = iVar23 + 0x804c;
              iVar9 = iVar9 + 0x804c;
              iVar8 = 8;
              goto LAB_ram_4811a220;
            }
          }
        }
      }
    }
LAB_ram_4811a426:
    iVar8 = iVar8 + 1;
    ppuVar39 = ppuVar39 + 1;
    iVar23 = iVar23 + 0x804c;
    iVar9 = iVar9 + 0x804c;
    if (iVar8 == 0xc) goto code_r0x4811a436;
    goto LAB_ram_4811a220;
  }
  uStack_f0 = DAT_ram_4ff5bd3c;
  pcVar28 = (char *)(DAT_ram_4ff6dc9c + 0x234);
  local_fc = DAT_ram_4ff5bd30;
  uStack_f8 = DAT_ram_4ff5bd34;
  uStack_f4 = DAT_ram_4ff5bd38;
  uStack_ec = DAT_ram_4ff5bd40;
  uVar18 = FUN_ram_4819b728(0);
  cVar5 = *(char *)(iVar7 + 0x4d);
  pbVar21 = (byte *)(iVar7 + 0x6975d);
  uStack_b0._0_4_ = 0;
  uStack_b0._4_4_ = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  puVar30 = &local_fc;
  puVar26 = (uint *)&uStack_b0;
  do {
    puVar34 = (uint *)((int)puVar26 + 2);
    FUN_ram_4819ad74(puVar26,3,&DAT_ram_481c3b70,*(undefined1 *)puVar30);
    puVar30 = (undefined4 *)((int)puVar30 + 1);
    puVar26 = puVar34;
  } while (&uStack_90 != puVar34);
  if ((((((char)uStack_b4 == '\0') || (10 < uStack_d0 - 1)) ||
       (*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0')) ||
      ((iVar10 = FUN_ram_4808c696(&iStack_dc,"views"), iVar10 == 0 ||
       (cVar35 = (char)uStack_b4, (char)uStack_b4 == '\0')))) ||
     ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))) {
    uStack_b4 = uStack_b4 & 0xff00;
    cVar35 = '\0';
  }
  else {
    *(undefined1 *)(uStack_d4 + iStack_dc) = 0x5b;
    *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
    *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
    *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 0;
    uStack_d4 = uStack_d4 + 1;
    uStack_d0 = uStack_d0 + 1;
  }
  ppuVar39 = &PTR_s__config_ram_481cac88_0xc_ram_481f5154;
  do {
    pcVar4 = *ppuVar39;
    if (cVar5 == '\0') {
      while (iVar10 = FUN_ram_4ff453ae(pcVar4,"/onboarding/status"), iVar10 == 0) {
        ppuVar39 = ppuVar39 + 1;
        if (ppuVar39 == &PTR_s_api_call_ram_481cc0e0_ram_481f5180) goto LAB_ram_4811972e;
        pcVar4 = *ppuVar39;
      }
    }
    *(undefined1 *)(iVar7 + 0x6975d) = 0;
    if (*(char *)(iVar7 + 0x48) == '\0') {
      local_144 = strlen(pcVar4);
      pcStack_140 = pcVar4;
      iVar10 = FUN_ram_4807a75c(local_144,pcVar4);
      if (iVar10 != 0) goto LAB_ram_481194f2;
    }
    else {
LAB_ram_481194f2:
      iVar10 = FUN_ram_4ff453ae(pcVar4,"/onboarding/status");
      if (iVar10 == 0) {
        pcStack_7c = (char *)0x0;
        iStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        pbStack_64 = (byte *)0x0;
        uStack_60 = 0;
        pcStack_80 = (char *)0x10001;
        uStack_5c = 1;
        pbStack_84 = pbVar21;
        iVar10 = FUN_ram_4808d544(&pbStack_84);
      }
      else {
        iVar10 = FUN_ram_480d0cd2(pcVar4,pbVar21,0x10001);
      }
      if ((iVar10 != 0) && (sVar6 = strlen((char *)pbVar21), sVar6 - 1 < 0x8000)) {
        uVar24 = 0;
        if (uStack_d4 < uStack_d8) {
          uVar24 = (uStack_d8 - 1) - uStack_d4;
        }
        iVar10 = 0;
        pbVar22 = pbVar21;
        do {
          bVar19 = *pbVar22;
          iVar8 = 6;
          pbVar22 = pbVar22 + 1;
          if (0x1f < bVar19) {
            iVar8 = 2;
            if (bVar19 != 0x22) {
              iVar8 = (bVar19 == 0x5c) + 1;
            }
          }
          iVar10 = iVar10 + iVar8;
        } while ((byte *)(iVar7 + 0x6975d + sVar6) != pbVar22);
        if (iVar10 + 0x200U <= uVar24) {
          if (((cVar35 == '\0') || (10 < uStack_d0 - 1)) ||
             (*(char *)((int)&uStack_c4 + uStack_d0 + 3) != '\0')) {
LAB_ram_481195fc:
            uStack_b4 = uStack_b4 & 0xff00;
          }
          else {
            if (*(char *)((int)&uStack_d0 + uStack_d0 + 3) == '\0') {
              if ((uStack_d8 < uStack_d4) || (uStack_d8 - uStack_d4 < 2)) goto LAB_ram_481195fc;
              puVar29 = (undefined1 *)(iStack_dc + uStack_d4);
              uStack_d4 = uStack_d4 + 1;
              *puVar29 = 0x2c;
              *(undefined1 *)(iStack_dc + uStack_d4) = 0;
            }
            if ((uStack_d8 < uStack_d4) || (uStack_d8 - uStack_d4 < 2)) goto LAB_ram_481195fc;
            *(undefined1 *)((int)&uStack_d0 + uStack_d0 + 3) = 0;
            *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7b;
            *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
            *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
            *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 1;
            uStack_d4 = uStack_d4 + 1;
            uStack_d0 = uStack_d0 + 1;
          }
          sVar11 = strlen(pcVar4);
          FUN_ram_4808c96e(&iStack_dc,"path",pcVar4,sVar11);
          uVar24 = uStack_d4;
          uVar12 = uStack_d0;
          if (((((((char)uStack_b4 == '\0') || (10 < uStack_d0 - 1)) ||
                (*(char *)((int)&uStack_c4 + uStack_d0 + 3) == '\0')) ||
               ((iVar10 = FUN_ram_4808c696(&iStack_dc,"params"), uVar24 = uStack_d4,
                uVar12 = uStack_d0, iVar10 == 0 || ((char)uStack_b4 == '\0')))) ||
              (uStack_d8 < uStack_d4)) || (uStack_d8 - uStack_d4 < 2)) {
LAB_ram_48119636:
            uStack_d0 = uVar12;
            uStack_d4 = uVar24;
            uStack_b4 = uStack_b4 & 0xff00;
          }
          else {
            uVar24 = uStack_d4 + 1;
            *(undefined1 *)(iStack_dc + uStack_d4) = 0x7b;
            uVar12 = uStack_d0 + 1;
            *(undefined1 *)(iStack_dc + uVar24) = 0;
            *(undefined1 *)((int)&uStack_cc + uStack_d0) = 1;
            *(undefined1 *)((int)&uStack_c0 + uStack_d0) = 1;
            if (((uVar12 < 2) || (uStack_d8 < uVar24)) || (uStack_d8 - uVar24 < 2))
            goto LAB_ram_48119636;
            uStack_d4 = uStack_d4 + 2;
            *(undefined1 *)(iStack_dc + uVar24) = 0x7d;
            *(undefined1 *)(iStack_dc + uStack_d4) = 0;
          }
          FUN_ram_480b2068(&iStack_dc,"sampled_at_unix",uVar18);
          sVar11 = strlen(pcVar28);
          FUN_ram_4808c96e(&iStack_dc,"boot_id",pcVar28,sVar11);
          sVar11 = strlen((char *)&uStack_b0);
          FUN_ram_4808c96e(&iStack_dc,"settings_epoch",&uStack_b0,sVar11);
          FUN_ram_480b2068(&iStack_dc,"settings_revision",uVar20);
          iVar10 = FUN_ram_4808c696(&iStack_dc,"active_driver_id");
          if (iVar10 != 0) {
            pbStack_84 = (byte *)0x0;
            pcStack_80 = (char *)0x0;
            pcStack_7c = (char *)0x0;
            iStack_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            uVar12 = FUN_ram_4819ad74(&pbStack_84,0x20,&DAT_ram_481c48f4);
            uVar24 = uStack_d4;
            iVar10 = iStack_dc;
            if ((((char)uStack_b4 == '\0') || (uStack_d8 < uStack_d4)) ||
               (uStack_d8 - uStack_d4 <= uVar12)) {
              uStack_b4 = uStack_b4 & 0xff00;
            }
            else {
              FUN_ram_4ff45158(iStack_dc + uStack_d4,&pbStack_84,uVar12);
              uStack_d4 = uVar12 + uVar24;
              *(undefined1 *)(iVar10 + uStack_d4) = 0;
            }
          }
          FUN_ram_4808c96e(&iStack_dc,&DAT_ram_481d0b20,pbVar21,sVar6);
          if (((char)uStack_b4 != '\0') && (1 < uStack_d0)) {
            cVar35 = *(char *)((int)&uStack_c4 + uStack_d0 + 3);
            if ((cVar35 != '\0') && ((uStack_d4 <= uStack_d8 && (1 < uStack_d8 - uStack_d4)))) {
              uVar24 = uStack_d4 + 1;
              uStack_d0 = uStack_d0 - 1;
              *(undefined1 *)(uStack_d4 + iStack_dc) = 0x7d;
              uStack_d4 = uVar24;
              *(undefined1 *)(iStack_dc + uVar24) = 0;
              goto LAB_ram_48119728;
            }
          }
          uStack_b4 = uStack_b4 & 0xff00;
          cVar35 = '\0';
        }
      }
    }
LAB_ram_48119728:
    ppuVar39 = ppuVar39 + 1;
  } while (ppuVar39 != &PTR_s_api_call_ram_481cc0e0_ram_481f5180);
LAB_ram_4811972e:
  uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
  if ((((cVar35 == '\0') || (uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0), uStack_d0 < 2))
      || (uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0),
         *(char *)((int)&uStack_c4 + uStack_d0 + 3) != '\0')) ||
     ((uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0), uStack_d8 < uStack_d4 ||
      (uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0), uStack_d8 - uStack_d4 < 2))))
  goto LAB_ram_48119748;
  *(undefined1 *)(uStack_d4 + iStack_dc) = 0x5d;
  *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
  uStack_d4 = uStack_d4 + 1;
  uStack_d0 = uStack_d0 - 1;
LAB_ram_4811974c:
  iVar10 = FUN_ram_4808c64a(&iStack_dc);
  if (iVar10 == 0) {
    *(char **)(iVar3 + 0x87bc0) = "sync_request_overflow";
    return 0;
  }
LAB_ram_48119756:
  *(uint *)(iVar3 + 0x87b34) = uStack_d4;
  return 1;
code_r0x4811a436:
  if ((((char)uStack_b4 == '\0') || (uStack_d0 < 2)) ||
     ((*(char *)((int)&uStack_c4 + uStack_d0 + 3) != '\0' ||
      ((uStack_d8 < uStack_d4 || (uStack_d8 - uStack_d4 < 2)))))) {
LAB_ram_48119748:
    uStack_b4 = uStack_b4 & 0xff00;
  }
  else {
    *(undefined1 *)(uStack_d4 + iStack_dc) = 0x5d;
    *(undefined1 *)(iStack_dc + uStack_d4 + 1) = 0;
    uStack_d4 = uStack_d4 + 1;
    uStack_d0 = uStack_d0 - 1;
  }
  goto LAB_ram_4811974c;
}


