/* Firmware entry: 0x480b294e */

void FUN_ram_480b294e(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  char cVar17;
  undefined4 uStack_998;
  undefined1 *puStack_994;
  uint uStack_990;
  int iStack_98c;
  undefined1 *puStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined1 *puStack_96c;
  uint uStack_968;
  uint uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  ushort uStack_944;
  undefined1 auStack_940 [2316];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_940,0,0x900);
  puStack_96c = auStack_940;
  auStack_940[0] = 0x7b;
  uStack_968 = 0x900;
  uStack_958 = 0;
  uStack_954 = 0;
  uStack_94c = 0;
  uStack_948 = 0;
  uStack_944 = 1;
  uStack_964 = 1;
  uStack_95c = 1;
  uStack_950 = 1;
  uStack_960 = 1;
  FUN_ram_4808c2dc(&puStack_96c,&DAT_ram_481c4274,1);
  if (((((char)uStack_944 == '\0') || (10 < uStack_960 - 1)) ||
      (*(char *)((int)&uStack_954 + uStack_960 + 3) == '\0')) ||
     (iVar6 = FUN_ram_4808c696(&puStack_96c,"conflicts"), iVar6 == 0)) {
LAB_ram_480b2a1e:
    uStack_944 = uStack_944 & 0xff00;
  }
  else {
    iStack_98c = CONCAT31(iStack_98c._1_3_,0x5b);
    iVar6 = FUN_ram_4808c90a(&puStack_96c,&iStack_98c,1);
    if (iVar6 == 0) goto LAB_ram_480b2a1e;
    *(undefined1 *)((int)&uStack_95c + uStack_960) = 1;
    *(undefined1 *)((int)&uStack_950 + uStack_960) = 0;
    uStack_960 = uStack_960 + 1;
  }
  if ((*(char *)(DAT_ram_4ff6dc9c + 0x87b64) == '\0') &&
     (*(char *)(DAT_ram_4ff6dc9c + 0x87b65) == '\0')) {
    if (((*(char *)(DAT_ram_4ff6dc9c + 0x87b63) == '\0') &&
        (*(char *)(DAT_ram_4ff6dc9c + 0xc58) != '\x04')) &&
       (*(char *)(DAT_ram_4ff6dc9c + 0xc59) != '\x04')) {
      cVar17 = (char)uStack_944;
    }
    else {
      FUN_ram_4808c1ae(&puStack_96c);
      FUN_ram_4808c96e(&puStack_96c,"command_id","cloud-backup",0xc);
      if (*(char *)(DAT_ram_4ff6dc9c + 0xc59) == '\x04') {
        pcVar15 = "records_conflict";
        uVar9 = 0x10;
      }
      else {
        pcVar15 = "settings_conflict";
        uVar9 = 0x11;
      }
      FUN_ram_4808c96e(&puStack_96c,"error",pcVar15,uVar9);
      FUN_ram_480b2068(&puStack_96c,"expected_revision",*(undefined4 *)(DAT_ram_4ff6dc9c + 0x59c));
      FUN_ram_480b2068(&puStack_96c,"device_revision",DAT_ram_4ff5bd40);
      FUN_ram_4808c244(&puStack_96c);
      cVar17 = (char)uStack_944;
    }
  }
  else {
    FUN_ram_4808c1ae(&puStack_96c);
    FUN_ram_4808c96e(&puStack_96c,"command_id","cloud-backup",0xc);
    FUN_ram_4808c96e(&puStack_96c,"error","account_restore_required",0x18);
    if (((*(char *)(DAT_ram_4ff6dc9c + 0x87b64) == '\0') ||
        (cVar17 = *(char *)(DAT_ram_4ff6dc9c + 0x588), cVar17 == '\0')) &&
       (cVar17 = '\0', *(char *)(DAT_ram_4ff6dc9c + 0x87b65) != '\0')) {
      cVar17 = *(char *)(DAT_ram_4ff6dc9c + 0x6e0);
    }
    FUN_ram_4808c2dc(&puStack_96c,"cloud_backup_available",cVar17);
    FUN_ram_4808c2dc(&puStack_96c,"settings_pending",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x87b64));
    FUN_ram_4808c2dc(&puStack_96c,"records_pending",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x87b65));
    if (((char)uStack_944 != '\0') && (1 < uStack_960)) {
      cVar17 = *(char *)((int)&uStack_954 + uStack_960 + 3);
      if ((cVar17 != '\0') && ((uStack_964 <= uStack_968 && (1 < uStack_968 - uStack_964)))) {
        puStack_96c[uStack_964] = 0x7d;
        puStack_96c[uStack_964 + 1] = 0;
        uStack_964 = uStack_964 + 1;
        uStack_960 = uStack_960 - 1;
        goto LAB_ram_480b2b32;
      }
    }
    uStack_944 = uStack_944 & 0xff00;
    cVar17 = '\0';
  }
LAB_ram_480b2b32:
  pcVar15 = (char *)(DAT_ram_4ff6dc9c + 0x86e00);
  pcVar2 = (char *)(DAT_ram_4ff6dc9c + 0x87080);
  do {
    if (pcVar15[0x4c] != '\0') {
      if (cVar17 == '\0') goto LAB_ram_480b2be6;
LAB_ram_480b2b78:
      if (10 < uStack_960 - 1) goto LAB_ram_480b2be6;
      if (*(char *)((int)&uStack_954 + uStack_960 + 3) != '\0') goto LAB_ram_480b2be6;
      pcVar16 = pcVar15;
      if (*(char *)((int)&uStack_960 + uStack_960 + 3) == '\0') {
        if ((uStack_964 <= uStack_968) && (1 < uStack_968 - uStack_964)) {
          puVar3 = puStack_96c + uStack_964;
          uStack_964 = uStack_964 + 1;
          *puVar3 = 0x2c;
          puStack_96c[uStack_964] = 0;
          goto LAB_ram_480b2bc8;
        }
      }
      else {
LAB_ram_480b2bc8:
        if ((uStack_964 <= uStack_968) && (1 < uStack_968 - uStack_964)) {
          *(undefined1 *)((int)&uStack_960 + uStack_960 + 3) = 0;
          puStack_96c[uStack_964] = 0x7b;
          *(undefined1 *)((int)&uStack_95c + uStack_960) = 1;
          *(undefined1 *)((int)&uStack_950 + uStack_960) = 1;
          puStack_96c[uStack_964 + 1] = 0;
          uStack_964 = uStack_964 + 1;
          uStack_960 = uStack_960 + 1;
          goto LAB_ram_480b2bea;
        }
      }
      uStack_944 = uStack_944 & 0xff00;
LAB_ram_480b2bea:
      do {
        sVar4 = strlen(pcVar16);
        FUN_ram_4808c96e(&puStack_96c,"command_id",pcVar16,sVar4);
        FUN_ram_4808c96e(&puStack_96c,"error","settings_conflict",0x11);
        uVar10 = uStack_960;
        uVar8 = uStack_968;
        puVar3 = puStack_96c;
        if (((char)uStack_944 != '\0') && (uStack_960 != 0)) {
          uVar12 = uStack_960 - 1;
          cVar17 = *(char *)((int)&uStack_954 + uStack_960 + 3);
          if (cVar17 != '\0') {
            uVar9 = *(undefined4 *)(pcVar16 + 0x44);
            if (*(char *)((int)&uStack_960 + uStack_960 + 3) == '\0') {
              if ((uStack_968 < uStack_964) || (uStack_968 - uStack_964 < 2)) goto LAB_ram_480b2c82;
              puVar7 = puStack_96c + uStack_964;
              uStack_964 = uStack_964 + 1;
              *puVar7 = 0x2c;
              puStack_96c[uStack_964] = 0;
            }
            uVar14 = uStack_964;
            if ((uStack_964 <= uStack_968) && (1 < uStack_968 - uStack_964)) {
              uVar13 = uStack_964 + 1;
              puStack_96c[uStack_964] = 0x22;
              puStack_96c[uVar13] = 0;
              uStack_964 = uVar13;
              if ((uVar13 <= uStack_968) && (0x11 < uStack_968 - uVar13)) {
                FUN_ram_4ff45158(puStack_96c + uVar13,"expected_revision");
                uVar13 = uVar14 + 0x12;
                puVar7 = puVar3 + uVar13;
                *puVar7 = 0;
                uStack_964 = uVar13;
                if ((uVar13 <= uVar8) && (2 < uVar8 - uVar13)) {
                  *puVar7 = 0x22;
                  puVar7[1] = 0x3a;
                  uVar14 = uVar14 + 0x14;
                  puVar3[uVar14] = 0;
                  iStack_98c = 0;
                  puStack_988 = (undefined1 *)0x0;
                  uStack_984 = 0;
                  uStack_980 = 0;
                  uStack_97c = 0;
                  uStack_978 = 0;
                  uStack_974 = 0;
                  uStack_970 = 0;
                  *(undefined1 *)((int)&uStack_960 + uVar10 + 3) = 0;
                  uStack_964 = uVar14;
                  uVar13 = FUN_ram_4819ad74(&iStack_98c,0x20,&DAT_ram_481c48f4,uVar8 - uVar13,uVar9,
                                            0);
                  if ((uVar14 <= uVar8) && (uVar13 < uVar8 - uVar14)) {
                    FUN_ram_4ff45158(puVar3 + uVar14,&iStack_98c);
                    uVar14 = uVar14 + uVar13;
                    puVar3[uVar14] = 0;
                    uStack_964 = uVar14;
                    if ((uVar14 <= uVar8) && (1 < uVar8 - uVar14)) {
                      uStack_964 = uVar14 + 1;
                      puVar3[uVar14] = 0x2c;
                      puVar7 = puVar3 + uStack_964;
                      *puVar7 = 0;
                      if ((uStack_964 <= uVar8) && (1 < uVar8 - uStack_964)) {
                        uStack_964 = uVar14 + 2;
                        *puVar7 = 0x22;
                        puVar3[uStack_964] = 0;
                        if ((uStack_964 <= uVar8) && (0xf < uVar8 - uStack_964)) {
                          FUN_ram_4ff45158(puVar3 + uStack_964,"device_revision");
                          uStack_964 = uVar14 + 0x11;
                          puVar7 = puVar3 + uStack_964;
                          *puVar7 = 0;
                          if ((uStack_964 <= uVar8) && (2 < uVar8 - uStack_964)) {
                            *puVar7 = 0x22;
                            puVar7[1] = 0x3a;
                            uVar14 = uVar14 + 0x13;
                            puVar3[uVar14] = 0;
                            iStack_98c = 0;
                            puStack_988 = (undefined1 *)0x0;
                            uStack_984 = 0;
                            uStack_980 = 0;
                            uStack_97c = 0;
                            uStack_978 = 0;
                            uStack_974 = 0;
                            uStack_970 = 0;
                            *(undefined1 *)((int)&uStack_960 + uVar10 + 3) = 0;
                            uStack_964 = uVar14;
                            uVar13 = FUN_ram_4819ad74(&iStack_98c,0x20,&DAT_ram_481c48f4);
                            if ((uVar14 <= uVar8) && (uVar13 < uVar8 - uVar14)) {
                              FUN_ram_4ff45158(puVar3 + uVar14,&iStack_98c,uVar13);
                              uStack_964 = uVar14 + uVar13;
                              puVar7 = puVar3 + uStack_964;
                              *puVar7 = 0;
                              if ((uVar10 != 1) &&
                                 ((uStack_964 <= uVar8 && (1 < uVar8 - uStack_964))))
                              goto code_r0x480b309a;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_ram_480b2c82:
        uStack_944 = uStack_944 & 0xff00;
        pcVar15 = pcVar16 + 0x50;
        uVar8 = uStack_964;
        if (pcVar2 == pcVar15) goto LAB_ram_480b2d10;
        if (pcVar16[0x9c] == '\0') {
          pcVar15 = pcVar16 + 0xa0;
          cVar17 = '\0';
          if (pcVar2 == pcVar15) goto LAB_ram_480b2cae;
          if (pcVar16[0xec] == '\0') {
            pcVar15 = pcVar16 + 0xf0;
            cVar17 = '\0';
            goto joined_r0x480b2caa;
          }
        }
LAB_ram_480b2be6:
        uStack_944 = uStack_944 & 0xff00;
        pcVar16 = pcVar15;
      } while( true );
    }
LAB_ram_480b2b54:
    pcVar15 = pcVar15 + 0x50;
joined_r0x480b2caa:
  } while (pcVar15 != pcVar2);
LAB_ram_480b2cae:
  uVar8 = uStack_964;
  if ((((cVar17 != '\0') && (1 < uStack_960)) &&
      (uVar10 = uStack_960 - 1, *(char *)((int)&uStack_954 + uStack_960 + 3) == '\0')) &&
     ((uStack_964 <= uStack_968 && (1 < uStack_968 - uStack_964)))) {
    uVar8 = uStack_964 + 1;
    puStack_96c[uStack_964] = 0x5d;
    puStack_96c[uVar8] = 0;
    uStack_960 = uVar10;
    if (((uVar10 == 1) && (((char)uStack_950 != '\0' && (uVar8 <= uStack_968)))) &&
       (1 < uStack_968 - uVar8)) {
      uStack_964 = uStack_964 + 2;
      puStack_96c[uVar8] = 0x7d;
      uStack_960 = 0;
      puStack_96c[uStack_964] = 0;
      goto LAB_ram_480b2d14;
    }
  }
LAB_ram_480b2d10:
  uStack_964 = uVar8;
  uStack_944 = uStack_944 & 0xff00;
LAB_ram_480b2d14:
  iVar1 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  uStack_998 = 200;
  cVar17 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar17 != '\0') && (cVar17 != '\x06')) {
    puStack_994 = puStack_96c;
    uStack_990 = uStack_964;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_998,&puStack_994,&uStack_990);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar8 = uStack_990;
    if (uStack_990 == 0) {
      uVar8 = 1;
    }
    iVar5 = FUN_ram_4ff206d8(uVar8,0x404);
    iVar11 = iVar1 + iVar6 * 0x1d40;
    *(int *)(iVar11 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar11 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar1 + iVar6 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (uStack_990 != 0) {
        FUN_ram_4ff45158(iVar5,puStack_994,uStack_990);
        iVar5 = *(int *)(iVar11 + 0x1cdc);
      }
      iStack_98c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_98c + 0x44c) != '\0') && (*(char *)(iStack_98c + 0x44c) != '\x06')) {
        *(int *)(iStack_98c + 0x1ce0) = iVar5;
        *(uint *)(iStack_98c + 0x1ce4) = uStack_990;
        *(undefined4 *)(iStack_98c + 0x1ce8) = 0;
        puStack_988 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_998,"application/json",iStack_98c,
                         &LAB_ram_4802d3f2);
      }
    }
  }
  return;
code_r0x480b309a:
  uStack_964 = uStack_964 + 1;
  *puVar7 = 0x7d;
  pcVar15 = pcVar16 + 0x50;
  puVar3[uStack_964] = 0;
  uStack_960 = uVar12;
  if (pcVar2 == pcVar15) goto LAB_ram_480b2cae;
  if (pcVar16[0x9c] == '\0') goto LAB_ram_480b2b54;
  goto LAB_ram_480b2b78;
}


