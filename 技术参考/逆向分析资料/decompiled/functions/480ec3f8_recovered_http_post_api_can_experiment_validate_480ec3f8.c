/* Firmware entry: 0x480ec3f8 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_validate_480ec3f8(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  char cVar9;
  byte bVar10;
  byte *pbVar11;
  undefined1 uStack_221;
  int aiStack_220 [2];
  uint uStack_218;
  byte bStack_211;
  undefined1 auStack_210 [16];
  char acStack_200 [4];
  undefined4 uStack_1fc;
  char cStack_1f8;
  char cStack_1f7;
  byte bStack_1f6;
  undefined1 auStack_184 [4];
  undefined1 uStack_180;
  undefined2 uStack_154;
  undefined1 uStack_14b;
  undefined1 uStack_148;
  undefined2 uStack_142;
  undefined1 uStack_134;
  undefined1 auStack_94 [96];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6ded0 != (code *)0x0) && (iVar5 = (*DAT_ram_4ff6ded0)(), iVar5 == 0)) {
    FUN_ram_48067954(DAT_ram_4ff6ded8,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"can_experiment_quiesced\"}");
    return;
  }
  memset(auStack_184,0,0x144);
  uStack_180 = 1;
  uStack_14b = 1;
  uStack_154 = 100;
  uStack_148 = 0xff;
  uStack_134 = 0xff;
  uStack_142 = 0xff1d;
  puVar8 = auStack_184;
  do {
    puVar8[0x54] = 1;
    *(undefined2 *)(puVar8 + 0x80) = 100;
    puVar8[0x89] = 1;
    puVar8[0x8c] = 0xff;
    *(undefined2 *)(puVar8 + 0x92) = 0xff1d;
    puVar8[0xa0] = 0xff;
    puVar8 = puVar8 + 0x50;
  } while (puVar8 != auStack_94);
  uStack_221 = 0;
  iVar5 = FUN_ram_48088676(auStack_184,&uStack_221);
  if (iVar5 == 0) {
    FUN_ram_4808999a(400,uStack_221,0);
    return;
  }
  FUN_ram_480ebb1a(acStack_200,&DAT_ram_4ff48d94,auStack_184,&DAT_ram_4ff60e20);
  FUN_ram_4802a8a8(aiStack_220,&DAT_ram_481c4164);
  FUN_ram_480881e0(aiStack_220,&DAT_ram_481c4274);
  if (acStack_200[0] == '\0') {
    FUN_ram_4802af2c(aiStack_220,"false");
    if ((char)bStack_211 < '\0') goto LAB_ram_480ece30;
LAB_ram_480ec502:
    uVar2 = uStack_1fc;
    if ((aiStack_220[0] != 0) && (uVar7 = uStack_218, uStack_218 != 0)) {
LAB_ram_480ece3c:
      pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
      if ((*pbVar11 & 0xdf) == 0x5b) goto LAB_ram_480ec516;
    }
  }
  else {
    FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c3dec);
    if (-1 < (char)bStack_211) goto LAB_ram_480ec502;
LAB_ram_480ece30:
    uVar7 = bStack_211 & 0x7f;
    uVar2 = uStack_1fc;
    if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ece3c;
  }
  FUN_ram_4802af5a(aiStack_220,0x2c);
LAB_ram_480ec516:
  FUN_ram_4802af5a(aiStack_220,0x22);
  FUN_ram_4802af2c(aiStack_220,"generation");
  FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
  FUN_ram_4802aa44(auStack_210,uVar2,10);
  FUN_ram_4802ae48(aiStack_220,auStack_210);
  FUN_ram_4802a59e(auStack_210);
  FUN_ram_480881e0(aiStack_220,"errors");
  FUN_ram_4802af5a(aiStack_220,0x5b);
  if (cStack_1f8 != '\0') {
    pcVar4 = acStack_200;
    FUN_ram_4802af5a(aiStack_220,0x7b);
    cVar9 = '\0';
    if (bStack_1f6 == 0xd) goto LAB_ram_480ece0e;
LAB_ram_480ec5b0:
    if (0xd < bStack_1f6) {
      if (bStack_1f6 == 0x14) {
        pbVar11 = &UNK_ram_481cb3f4;
        goto LAB_ram_480ecb14;
      }
      if (0x14 < bStack_1f6) {
        if (bStack_1f6 == 0x17) {
          pbVar11 = &UNK_ram_481cb088;
          goto LAB_ram_480ecb14;
        }
        if (bStack_1f6 < 0x18) {
          if (bStack_1f6 != 0x15) {
            pbVar11 = &UNK_ram_481cb0a4;
            goto LAB_ram_480ecb14;
          }
          pbVar11 = &UNK_ram_481cb0b8;
          goto LAB_ram_480ecb14;
        }
        if (bStack_1f6 != 0x18) {
          pbVar11 = &UNK_ram_481cb180;
          if (bStack_1f6 == 0x19) goto LAB_ram_480ecb14;
          pbVar11 = &UNK_ram_481cb328;
          goto LAB_ram_480ecb14;
        }
        pbVar11 = &UNK_ram_481cb1bc;
        goto LAB_ram_480ecb14;
      }
      if (bStack_1f6 == 0x11) {
        pbVar11 = &UNK_ram_481cb3a0;
        goto LAB_ram_480ecb14;
      }
      if (bStack_1f6 < 0x12) {
        if (bStack_1f6 == 0xf) {
          pbVar11 = &UNK_ram_481cb358;
          goto LAB_ram_480ecb14;
        }
        if (bStack_1f6 != 0x10) {
          pbVar11 = &UNK_ram_481cb2f4;
          goto LAB_ram_480ecb14;
        }
        pbVar11 = &UNK_ram_481cb380;
        goto LAB_ram_480ecb14;
      }
      if (bStack_1f6 != 0x12) {
        pbVar11 = &UNK_ram_481cb3d8;
        goto LAB_ram_480ecb14;
      }
      pbVar11 = &UNK_ram_481cb3bc;
      goto LAB_ram_480ecb14;
    }
    if (bStack_1f6 == 6) {
      pbVar11 = &UNK_ram_481cb130;
      goto LAB_ram_480ecb14;
    }
    if (6 < bStack_1f6) {
      if (bStack_1f6 == 10) {
        pbVar11 = &UNK_ram_481cb23c;
        goto LAB_ram_480ecb14;
      }
      if (10 < bStack_1f6) {
        if (bStack_1f6 != 0xb) {
          pbVar11 = &UNK_ram_481cb2b0;
          goto LAB_ram_480ecb14;
        }
        pbVar11 = &UNK_ram_481cb264;
        goto LAB_ram_480ecb14;
      }
      if (bStack_1f6 == 8) {
        pbVar11 = &UNK_ram_481cb20c;
        goto LAB_ram_480ecb14;
      }
      if (bStack_1f6 != 9) {
        pbVar11 = &UNK_ram_481cb148;
        goto LAB_ram_480ecb14;
      }
      pbVar11 = &UNK_ram_481cb224;
      goto LAB_ram_480ecb14;
    }
    if (bStack_1f6 == 3) {
      pbVar11 = &UNK_ram_481cb0e4;
      goto LAB_ram_480ecb14;
    }
    if (3 < bStack_1f6) {
      if (bStack_1f6 != 4) {
        pbVar11 = &UNK_ram_481cb114;
        goto LAB_ram_480ecb14;
      }
      pbVar11 = &UNK_ram_481cb100;
      goto LAB_ram_480ecb14;
    }
    if (bStack_1f6 == 1) {
      pbVar11 = &UNK_ram_481cb30c;
      goto LAB_ram_480ecb14;
    }
    if (bStack_1f6 == 2) {
      pbVar11 = &UNK_ram_481cb338;
      goto LAB_ram_480ecb14;
    }
    pbVar11 = &DAT_ram_481cb414;
    if (-1 < (char)bStack_211) goto LAB_ram_480ecb1c;
LAB_ram_480ec5e4:
    uVar7 = bStack_211 & 0x7f;
    if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ecb24;
    do {
      FUN_ram_4802af5a(aiStack_220,0x2c);
      pcVar3 = pcVar4;
      do {
        FUN_ram_4802af5a(aiStack_220,0x22);
        FUN_ram_4802af2c(aiStack_220,"message");
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
        FUN_ram_4802af5a(aiStack_220,0x22);
        bVar10 = *pbVar11;
        while (bVar10 != 0) {
          while ((bVar10 != 0x22 && (bVar10 != 0x5c))) {
            if (0x1f < bVar10) goto LAB_ram_480ecb9c;
            bVar10 = pbVar11[1];
            pbVar11 = pbVar11 + 1;
            if (bVar10 == 0) goto LAB_ram_480ecbae;
          }
          FUN_ram_4802af5a(aiStack_220,0x5c);
LAB_ram_480ecb9c:
          pbVar11 = pbVar11 + 1;
          FUN_ram_4802af5a(aiStack_220,bVar10);
          bVar10 = *pbVar11;
        }
LAB_ram_480ecbae:
        FUN_ram_4802af5a(aiStack_220,0x22);
        cVar1 = pcVar3[0xc];
        if ((char)bStack_211 < '\0') {
          uVar7 = bStack_211 & 0x7f;
          if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ecbcc;
LAB_ram_480ecbe4:
          FUN_ram_4802af5a(aiStack_220,0x2c);
        }
        else {
          if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ecbe4;
LAB_ram_480ecbcc:
          pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
          if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ecbe4;
        }
        FUN_ram_4802af5a(aiStack_220,0x22);
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481cc4b8);
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
        FUN_ram_4802a928(auStack_210,cVar1,10);
        FUN_ram_4802ae48(aiStack_220,auStack_210);
        FUN_ram_4802a59e(auStack_210);
        cVar1 = pcVar3[0xd];
        if ((char)bStack_211 < '\0') {
          uVar7 = bStack_211 & 0x7f;
          if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ecc38;
LAB_ram_480ecc50:
          FUN_ram_4802af5a(aiStack_220,0x2c);
        }
        else {
          if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ecc50;
LAB_ram_480ecc38:
          pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
          if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ecc50;
        }
        FUN_ram_4802af5a(aiStack_220,0x22);
        FUN_ram_4802af2c(aiStack_220,"otherRule");
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
        FUN_ram_4802a928(auStack_210,cVar1,10);
        FUN_ram_4802ae48(aiStack_220,auStack_210);
        FUN_ram_4802a59e(auStack_210);
        cVar1 = pcVar3[0xe];
        if ((char)bStack_211 < '\0') {
          uVar7 = bStack_211 & 0x7f;
          if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ecca4;
LAB_ram_480eccbc:
          FUN_ram_4802af5a(aiStack_220,0x2c);
        }
        else {
          if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480eccbc;
LAB_ram_480ecca4:
          pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
          if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480eccbc;
        }
        FUN_ram_4802af5a(aiStack_220,0x22);
        FUN_ram_4802af2c(aiStack_220,"bus");
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
        FUN_ram_4802a928(auStack_210,cVar1,10);
        FUN_ram_4802ae48(aiStack_220,auStack_210);
        FUN_ram_4802a59e(auStack_210);
        cVar1 = pcVar3[0xf];
        if ((char)bStack_211 < '\0') {
          uVar7 = bStack_211 & 0x7f;
          if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ecd10;
LAB_ram_480ecd28:
          FUN_ram_4802af5a(aiStack_220,0x2c);
        }
        else {
          if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ecd28;
LAB_ram_480ecd10:
          pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
          if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ecd28;
        }
        FUN_ram_4802af5a(aiStack_220,0x22);
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481cf240);
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
        FUN_ram_4802a928(auStack_210,cVar1,10);
        FUN_ram_4802ae48(aiStack_220,auStack_210);
        FUN_ram_4802a59e(auStack_210);
        cVar1 = pcVar3[0x10];
        if ((char)bStack_211 < '\0') {
          uVar7 = bStack_211 & 0x7f;
          if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ecd7e;
LAB_ram_480ecd96:
          FUN_ram_4802af5a(aiStack_220,0x2c);
        }
        else {
          if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ecd96;
LAB_ram_480ecd7e:
          pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
          if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ecd96;
        }
        FUN_ram_4802af5a(aiStack_220,0x22);
        cVar9 = cVar9 + '\x01';
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481cf248);
        FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
        FUN_ram_4802a928(auStack_210,cVar1,10);
        FUN_ram_4802ae48(aiStack_220,auStack_210);
        FUN_ram_4802a59e(auStack_210);
        FUN_ram_4802af5a(aiStack_220,0x7d);
        pcVar4 = pcVar3 + 7;
        if (cVar9 == cStack_1f8) goto LAB_ram_480ec694;
        FUN_ram_4802af5a(aiStack_220,0x2c);
        FUN_ram_4802af5a(aiStack_220,0x7b);
        bStack_1f6 = pcVar3[0x11];
        if (bStack_1f6 != 0xd) goto LAB_ram_480ec5b0;
LAB_ram_480ece0e:
        pbVar11 = &UNK_ram_481cb2d8;
LAB_ram_480ecb14:
        if ((char)bStack_211 < '\0') goto LAB_ram_480ec5e4;
LAB_ram_480ecb1c:
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) break;
LAB_ram_480ecb24:
        pbVar6 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        pcVar3 = pcVar4;
      } while ((*pbVar6 & 0xdf) == 0x5b);
    } while( true );
  }
LAB_ram_480ec694:
  FUN_ram_4802af5a(aiStack_220,0x5d);
  FUN_ram_480881e0(aiStack_220,"warnings");
  FUN_ram_4802af5a(aiStack_220,0x5b);
  if (cStack_1f7 != '\0') {
    pcVar4 = acStack_200;
    cVar9 = '\0';
    do {
      FUN_ram_4802af5a(aiStack_220,0x7b);
      pbVar11 = &UNK_ram_481cf1b8;
      if (pcVar4[0x43] != '\x01') {
        if (pcVar4[0x43] == '\x02') {
          pbVar11 = &UNK_ram_481cf1f8;
        }
        else {
          pbVar11 = &DAT_ram_481df390;
        }
      }
      if ((char)bStack_211 < '\0') {
        uVar7 = bStack_211 & 0x7f;
        if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ec720;
LAB_ram_480ec738:
        FUN_ram_4802af5a(aiStack_220,0x2c);
      }
      else {
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ec738;
LAB_ram_480ec720:
        pbVar6 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_480ec738;
      }
      FUN_ram_4802af5a(aiStack_220,0x22);
      FUN_ram_4802af2c(aiStack_220,"message");
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
      FUN_ram_4802af5a(aiStack_220,0x22);
      bVar10 = *pbVar11;
      while (bVar10 != 0) {
        while ((bVar10 != 0x22 && (bVar10 != 0x5c))) {
          if (0x1f < bVar10) goto LAB_ram_480ec798;
          bVar10 = pbVar11[1];
          pbVar11 = pbVar11 + 1;
          if (bVar10 == 0) goto LAB_ram_480ec7aa;
        }
        FUN_ram_4802af5a(aiStack_220,0x5c);
LAB_ram_480ec798:
        pbVar11 = pbVar11 + 1;
        FUN_ram_4802af5a(aiStack_220,bVar10);
        bVar10 = *pbVar11;
      }
LAB_ram_480ec7aa:
      FUN_ram_4802af5a(aiStack_220,0x22);
      cVar1 = pcVar4[0x44];
      if ((char)bStack_211 < '\0') {
        uVar7 = bStack_211 & 0x7f;
        if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ec7c8;
LAB_ram_480ec7e0:
        FUN_ram_4802af5a(aiStack_220,0x2c);
      }
      else {
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ec7e0;
LAB_ram_480ec7c8:
        pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ec7e0;
      }
      FUN_ram_4802af5a(aiStack_220,0x22);
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481cc4b8);
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
      FUN_ram_4802a928(auStack_210,cVar1,10);
      FUN_ram_4802ae48(aiStack_220,auStack_210);
      FUN_ram_4802a59e(auStack_210);
      cVar1 = pcVar4[0x45];
      if ((char)bStack_211 < '\0') {
        uVar7 = bStack_211 & 0x7f;
        if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ec834;
LAB_ram_480ec84c:
        FUN_ram_4802af5a(aiStack_220,0x2c);
      }
      else {
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ec84c;
LAB_ram_480ec834:
        pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ec84c;
      }
      FUN_ram_4802af5a(aiStack_220,0x22);
      FUN_ram_4802af2c(aiStack_220,"otherRule");
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
      FUN_ram_4802a928(auStack_210,cVar1,10);
      FUN_ram_4802ae48(aiStack_220,auStack_210);
      FUN_ram_4802a59e(auStack_210);
      cVar1 = pcVar4[0x46];
      if ((char)bStack_211 < '\0') {
        uVar7 = bStack_211 & 0x7f;
        if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ec8a0;
LAB_ram_480ec8b8:
        FUN_ram_4802af5a(aiStack_220,0x2c);
      }
      else {
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ec8b8;
LAB_ram_480ec8a0:
        pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ec8b8;
      }
      FUN_ram_4802af5a(aiStack_220,0x22);
      FUN_ram_4802af2c(aiStack_220,"bus");
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
      FUN_ram_4802a928(auStack_210,cVar1,10);
      FUN_ram_4802ae48(aiStack_220,auStack_210);
      FUN_ram_4802a59e(auStack_210);
      cVar1 = pcVar4[0x47];
      if ((char)bStack_211 < '\0') {
        uVar7 = bStack_211 & 0x7f;
        if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ec90c;
LAB_ram_480ec924:
        FUN_ram_4802af5a(aiStack_220,0x2c);
      }
      else {
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ec924;
LAB_ram_480ec90c:
        pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ec924;
      }
      FUN_ram_4802af5a(aiStack_220,0x22);
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481cf240);
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
      FUN_ram_4802a928(auStack_210,cVar1,10);
      FUN_ram_4802ae48(aiStack_220,auStack_210);
      FUN_ram_4802a59e(auStack_210);
      cVar1 = pcVar4[0x48];
      if ((char)bStack_211 < '\0') {
        uVar7 = bStack_211 & 0x7f;
        if ((bStack_211 & 0x7f) != 0) goto LAB_ram_480ec97a;
LAB_ram_480ec992:
        FUN_ram_4802af5a(aiStack_220,0x2c);
      }
      else {
        if ((aiStack_220[0] == 0) || (uVar7 = uStack_218, uStack_218 == 0)) goto LAB_ram_480ec992;
LAB_ram_480ec97a:
        pbVar11 = (byte *)FUN_ram_4802b206(aiStack_220,uVar7 - 1);
        if ((*pbVar11 & 0xdf) != 0x5b) goto LAB_ram_480ec992;
      }
      FUN_ram_4802af5a(aiStack_220,0x22);
      cVar9 = cVar9 + '\x01';
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481cf248);
      FUN_ram_4802af2c(aiStack_220,&DAT_ram_481c67c4);
      FUN_ram_4802a928(auStack_210,cVar1,10);
      FUN_ram_4802ae48(aiStack_220,auStack_210);
      FUN_ram_4802a59e(auStack_210);
      FUN_ram_4802af5a(aiStack_220,0x7d);
      pcVar4 = pcVar4 + 7;
      if (cVar9 == cStack_1f7) break;
      FUN_ram_4802af5a(aiStack_220,0x2c);
    } while( true );
  }
  FUN_ram_4802af5a(aiStack_220,0x5d);
  FUN_ram_4802af5a(aiStack_220,0x7d);
  FUN_ram_4806acb0(DAT_ram_4ff6ded8,(-(uint)(acStack_200[0] == '\0') & 0xd1) + 200,
                   "application/json",aiStack_220);
  FUN_ram_4802a59e(aiStack_220);
  return;
}


