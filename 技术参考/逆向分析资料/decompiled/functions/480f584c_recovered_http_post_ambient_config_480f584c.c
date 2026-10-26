/* Firmware entry: 0x480f584c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_ambient_config_480f584c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *******__s;
  char *pcVar14;
  undefined4 uVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 *puVar18;
  char cVar19;
  byte bVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iStack_d8;
  int aiStack_d4 [10];
  char *******apppppppcStack_ac [3];
  char cStack_9d;
  undefined4 uStack_9c;
  char cStack_8d;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [24];
  undefined4 auStack_48 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (((DAT_ram_4ff6df30 != '\0') || (DAT_ram_4ff5c5c0 != '\0')) || (DAT_ram_4ff5c5ca != '\0')) {
    if ((DAT_ram_4ff6dd49 == '\0') || (fence(), (DAT_ram_4ff6de94 & 0x80) != 0)) {
      pcVar16 = "pending";
    }
    else {
      pcVar16 = "stored";
    }
    pcVar14 = "ota_busy";
LAB_ram_480f5924:
    FUN_ram_4803c556(&local_78,pcVar16,pcVar14);
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x199,"application/json",&local_78);
    FUN_ram_4802a59e(&local_78);
    return;
  }
  if (DAT_ram_4ff6dd4a == '\0') {
    FUN_ram_4803c556(&local_78,"pending","settings_unavailable");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x1f7,"application/json",&local_78);
    FUN_ram_4802a59e(&local_78);
    return;
  }
  iStack_d8 = 0;
  aiStack_d4[0] = 0;
  iVar2 = FUN_ram_480371ce("driverId",0xffffffff,&iStack_d8);
  if ((iVar2 == 0) || (iVar2 = FUN_ram_480371ce("revision",0xffffffff,aiStack_d4), iVar2 == 0)) {
    uVar3 = FUN_ram_4802cf24();
    FUN_ram_4803c556(&local_78,uVar3,"invalid_ambient_config");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",&local_78);
    FUN_ram_4802a59e(&local_78);
    return;
  }
  if ((iStack_d8 != DAT_ram_4ff6dd80) || (iStack_d8 != DAT_ram_4ff6dd4c)) {
    pcVar16 = (char *)FUN_ram_4802cf24();
    pcVar14 = "stale_driver";
    goto LAB_ram_480f5924;
  }
  if (aiStack_d4[0] != DAT_ram_4ff47e60) {
    uVar3 = FUN_ram_4802cf24();
    FUN_ram_4803c556(&local_78,uVar3,"stale_revision");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x199,"application/json",&local_78);
    FUN_ram_4802a59e(&local_78);
    return;
  }
  puVar22 = &local_78;
  puVar24 = &DAT_ram_48222ef0;
  do {
    puVar21 = puVar24;
    puVar18 = puVar22;
    uVar3 = puVar21[1];
    uVar11 = puVar21[2];
    uVar15 = puVar21[3];
    *puVar18 = *puVar21;
    puVar18[1] = uVar3;
    puVar18[2] = uVar11;
    puVar18[3] = uVar15;
    puVar22 = puVar18 + 4;
    puVar24 = puVar21 + 4;
  } while (puVar21 + 4 != (undefined4 *)&UNK_ram_48222f20);
  uVar1 = *(undefined2 *)(puVar21 + 5);
  puVar18[4] = _UNK_ram_48222f20;
  *(undefined2 *)(puVar18 + 5) = uVar1;
  uStack_64._0_2_ = CONCAT11(DAT_ram_4ff48960._1_1_,(undefined1)uStack_64);
  uStack_8c = 0;
  uStack_64 = CONCAT22(DAT_ram_4ff48960._2_2_,(undefined2)uStack_64);
  iVar2 = FUN_ram_480371ce("ambientEnabled",1,&uStack_8c);
  if (iVar2 == 0) {
LAB_ram_480f5ea2:
    uVar3 = FUN_ram_4802cf24();
    FUN_ram_4803c556(&uStack_8c,uVar3,"invalid_ambient_config");
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",&uStack_8c);
    FUN_ram_4802a59e(&uStack_8c);
    return;
  }
  local_78._0_1_ = uStack_8c != 0;
  iVar2 = FUN_ram_480373c0("fsdCueEnabled",(int)&local_78 + 1);
  if (iVar2 == 0) goto LAB_ram_480f5ea2;
  FUN_ram_4802a8a8(&uStack_8c,"blindSpotEnabled");
  iVar2 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"blindSpotBrightness");
  iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"blindSpotAreas");
  iVar5 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"blindSpotRestoreDelayMs");
  iVar6 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  cVar19 = (iVar2 != 0) + (iVar4 != 0) + (iVar5 != 0) + (iVar6 != 0);
  if (cVar19 != '\0') {
    if (cVar19 == '\x04') {
      aiStack_d4[6] = 0;
      apppppppcStack_ac[0] = (char *******)0x0;
      uStack_9c = (char *)0x0;
      iVar2 = FUN_ram_480373c0("blindSpotEnabled",(int)&local_78 + 2);
      if ((((iVar2 != 0) &&
           (iVar2 = FUN_ram_480371ce("blindSpotBrightness",100,aiStack_d4 + 6), iVar2 != 0)) &&
          (iVar2 = FUN_ram_480371ce("blindSpotAreas",7,apppppppcStack_ac), iVar2 != 0)) &&
         (iVar2 = FUN_ram_480371ce("blindSpotRestoreDelayMs",1000,&uStack_9c), iVar2 != 0)) {
        local_78._2_2_ = CONCAT11((char)aiStack_d4[6],local_78._2_1_);
        uStack_74._0_1_ = SUB41(apppppppcStack_ac[0],0);
        uStack_74._2_2_ = SUB42(uStack_9c,0);
        goto LAB_ram_480f5b46;
      }
    }
    goto LAB_ram_480f5f44;
  }
  uStack_74._0_1_ = (undefined1)DAT_ram_4ff48950;
  local_78._2_2_ = DAT_ram_4ff4894c._2_2_;
  uStack_74._2_2_ = DAT_ram_4ff48950._2_2_;
LAB_ram_480f5b46:
  FUN_ram_4802a8a8(&uStack_8c,"turnFollowEnabled");
  iVar2 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"turnFollowHazards");
  iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"turnFollowBrightness");
  iVar5 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"turnFollowAreas");
  iVar6 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"turnFollowColor");
  iVar7 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  cVar19 = (iVar2 != 0) + (iVar4 != 0) + (iVar5 != 0) + (iVar6 != 0) + (iVar7 != 0);
  if (cVar19 == '\0') {
    uStack_6c._2_1_ = DAT_ram_4ff48958._2_1_;
    uStack_70 = DAT_ram_4ff48954;
    uStack_6c._0_2_ = (undefined2)DAT_ram_4ff48958;
    goto LAB_ram_480f5c28;
  }
  if (cVar19 == '\x05') {
    aiStack_d4[6] = 0;
    apppppppcStack_ac[0] = (char *******)0x0;
    iVar2 = FUN_ram_480373c0("turnFollowEnabled",&uStack_70);
    if (((iVar2 != 0) &&
        (iVar2 = FUN_ram_480373c0("turnFollowHazards",(int)&uStack_70 + 1), iVar2 != 0)) &&
       ((iVar2 = FUN_ram_480371ce("turnFollowBrightness",100,aiStack_d4 + 6), iVar2 != 0 &&
        (iVar2 = FUN_ram_480371ce("turnFollowAreas",7,apppppppcStack_ac), iVar2 != 0)))) {
      FUN_ram_4802a8a8(&uStack_8c,"turnFollowColor");
      iVar2 = DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8;
      puVar22 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
      for (uVar23 = 0; uVar23 < *(uint *)(iVar2 + 0x1cc4); uVar23 = uVar23 + 1) {
        uVar3 = *puVar22;
        puVar22 = puVar22 + 2;
        iVar4 = FUN_ram_4802b18e(&uStack_8c,uVar3);
        if (iVar4 != 0) {
          FUN_ram_4802a59e(&uStack_8c);
          FUN_ram_4802a8a8(&uStack_8c,"turnFollowColor");
          iVar5 = FUN_ram_4802b18e(&uStack_8c,"plain");
          iVar4 = DAT_ram_4ff5cbe8;
          iVar2 = DAT_ram_4ff5cbdc;
          if ((iVar5 == 0) ||
             (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0'
             )) {
            uVar23 = 0;
            iVar5 = DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8;
            puVar22 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
            goto LAB_ram_480f664e;
          }
          puVar12 = *(undefined1 **)(iVar5 + 0x43c);
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &DAT_ram_481df390;
          }
          FUN_ram_4802a888(&uStack_9c,puVar12,*(undefined4 *)(iVar5 + 0x438));
          goto LAB_ram_480f6544;
        }
      }
      goto LAB_ram_480f6018;
    }
  }
  goto LAB_ram_480f5f44;
LAB_ram_480f664e:
  if (*(uint *)(iVar5 + 0x1cc4) <= uVar23) goto code_r0x480f6658;
  uVar3 = *puVar22;
  puVar22 = puVar22 + 2;
  iVar6 = FUN_ram_4802b18e(&uStack_8c,uVar3);
  if (iVar6 != 0) {
    FUN_ram_4802a8a8(&uStack_9c,*(undefined4 *)(iVar4 + (iVar2 * 0x3a8 + uVar23) * 8 + 0xcc8));
    goto LAB_ram_480f6544;
  }
  uVar23 = uVar23 + 1;
  goto LAB_ram_480f664e;
code_r0x480f6658:
  FUN_ram_4802a8a8(&uStack_9c,&DAT_ram_481df390);
LAB_ram_480f6544:
  FUN_ram_4802a59e(&uStack_8c);
  pcVar16 = (char *)&uStack_9c;
  if ((((-1 < cStack_8d) && (pcVar16 = uStack_9c, uStack_9c == (char *)0x0)) ||
      (sVar10 = strlen(pcVar16), sVar10 != 7)) || (*pcVar16 != '#')) goto LAB_ram_480f5f3e;
  uStack_8c = uStack_8c & 0xff000000;
  uVar23 = 0;
  do {
    uVar17 = uVar23 + 1;
    cVar19 = pcVar16[uVar17];
    bVar20 = cVar19 - 0x30;
    if (9 < bVar20) {
      if ((byte)(cVar19 + 0x9fU) < 6) {
        bVar20 = cVar19 + 0xa9;
      }
      else {
        if (5 < (byte)(cVar19 + 0xbfU)) goto LAB_ram_480f5f3e;
        bVar20 = cVar19 - 0x37;
      }
    }
    *(byte *)((int)&uStack_8c + (uVar23 >> 1)) =
         bVar20 | *(char *)((int)&uStack_8c + (uVar23 >> 1)) << 4;
    uVar23 = uVar17;
  } while (uVar17 != 6);
  uStack_6c._0_2_ = (undefined2)uStack_8c;
  uStack_6c._2_1_ = uStack_8c._2_1_;
  FUN_ram_4802a59e(&uStack_9c);
  uStack_70 = CONCAT13((char)apppppppcStack_ac[0],
                       CONCAT12((char)aiStack_d4[6],(undefined2)uStack_70));
LAB_ram_480f5c28:
  FUN_ram_4802a8a8(&uStack_8c,"welcomeEnabled");
  iVar2 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"welcomeStyle");
  iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"welcomeTriggerMode");
  iVar5 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"welcomeBrightness");
  iVar6 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"welcomeTempo");
  iVar7 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"welcomeZoneMask");
  iVar8 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  FUN_ram_4802a8a8(&uStack_8c,"welcomeColor");
  iVar9 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_8c);
  FUN_ram_4802a59e(&uStack_8c);
  cVar19 = (iVar2 != 0) + (iVar4 != 0) + (iVar5 != 0) + (iVar6 != 0) + (iVar7 != 0) + (iVar8 != 0);
  if (cVar19 == '\0') {
    uStack_6c._3_1_ = DAT_ram_4ff48958._3_1_;
    uStack_64 = DAT_ram_4ff48960;
    local_68 = DAT_ram_4ff4895c;
LAB_ram_480f5d5e:
    if (iVar9 == 0) goto LAB_ram_480f60c2;
    FUN_ram_4802a8a8(&uStack_8c,"welcomeColor");
    iVar2 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar2 + 0x1cc4) != 0) {
      puVar22 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
      uVar23 = 0;
      do {
        uVar23 = uVar23 + 1;
        iVar4 = FUN_ram_4802b18e(&uStack_8c,*puVar22);
        if (iVar4 != 0) {
          FUN_ram_4802a59e(&uStack_8c);
          FUN_ram_4802a8a8(&uStack_8c,"welcomeColor");
          iVar5 = FUN_ram_4802b18e(&uStack_8c,"plain");
          iVar4 = DAT_ram_4ff5cbe8;
          iVar2 = DAT_ram_4ff5cbdc;
          if ((iVar5 == 0) ||
             (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0'
             )) {
            iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
            if (*(int *)(iVar5 + 0x1cc4) == 0) goto LAB_ram_480f64ae;
            puVar22 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
            uVar23 = 0;
            goto LAB_ram_480f647e;
          }
          puVar12 = *(undefined1 **)(iVar5 + 0x43c);
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &DAT_ram_481df390;
          }
          FUN_ram_4802a888(&uStack_9c,puVar12,*(undefined4 *)(iVar5 + 0x438));
          goto LAB_ram_480f5e06;
        }
        puVar22 = puVar22 + 2;
      } while (uVar23 < *(uint *)(iVar2 + 0x1cc4));
    }
LAB_ram_480f6018:
    FUN_ram_4802a59e(&uStack_8c);
  }
  else if (cVar19 == '\x06') {
    aiStack_d4[1] = 0;
    aiStack_d4[2] = 0;
    aiStack_d4[6] = 0;
    apppppppcStack_ac[0] = (char *******)0x0;
    uStack_9c = (char *)0x0;
    iVar2 = FUN_ram_480373c0("welcomeEnabled",(int)&uStack_6c + 3);
    if (((((iVar2 != 0) && (iVar2 = FUN_ram_480371ce("welcomeStyle",4,aiStack_d4 + 1), iVar2 != 0))
         && ((iVar2 = FUN_ram_480371ce("welcomeTriggerMode",1,aiStack_d4 + 2), iVar2 != 0 &&
             ((iVar2 = FUN_ram_480371ce("welcomeBrightness",100,aiStack_d4 + 6), iVar2 != 0 &&
              (iVar2 = FUN_ram_480371ce("welcomeTempo",2,apppppppcStack_ac), iVar2 != 0)))))) &&
        (iVar2 = FUN_ram_480371ce("welcomeZoneMask",0x3f,&uStack_9c), iVar2 != 0)) &&
       ((9 < (uint)aiStack_d4[6] && (uStack_9c != (char *)0x0)))) {
      uStack_64 = CONCAT31(uStack_64._1_3_,(char)uStack_9c);
      local_68._0_2_ = CONCAT11((char)aiStack_d4[2],(char)aiStack_d4[1]);
      local_68 = CONCAT13((char)apppppppcStack_ac[0],
                          (int3)CONCAT22((short)aiStack_d4[6],(undefined2)local_68));
      goto LAB_ram_480f5d5e;
    }
  }
  goto LAB_ram_480f5f44;
  while( true ) {
    uVar23 = uVar23 + 1;
    puVar22 = puVar22 + 2;
    if (*(uint *)(iVar5 + 0x1cc4) <= uVar23) break;
LAB_ram_480f647e:
    iVar6 = FUN_ram_4802b18e(&uStack_8c,*puVar22);
    if (iVar6 != 0) {
      FUN_ram_4802a8a8(&uStack_9c,*(undefined4 *)(iVar4 + (iVar2 * 0x3a8 + uVar23) * 8 + 0xcc8));
      goto LAB_ram_480f5e06;
    }
  }
LAB_ram_480f64ae:
  FUN_ram_4802a8a8(&uStack_9c,&DAT_ram_481df390);
LAB_ram_480f5e06:
  FUN_ram_4802a59e(&uStack_8c);
  pcVar16 = (char *)&uStack_9c;
  if ((cStack_8d < '\0') || (pcVar16 = uStack_9c, uStack_9c != (char *)0x0)) {
    sVar10 = strlen(pcVar16);
    if (sVar10 == 7) {
      if (*pcVar16 == '#') {
        iVar2 = 1;
        goto LAB_ram_480f5e32;
      }
    }
    else {
      iVar2 = 0;
      if (sVar10 == 6) {
LAB_ram_480f5e32:
        uStack_8c = uStack_8c & 0xff000000;
        uVar23 = 0;
        do {
          cVar19 = pcVar16[iVar2 + uVar23];
          bVar20 = cVar19 - 0x30;
          if (9 < bVar20) {
            if ((byte)(cVar19 + 0x9fU) < 6) {
              bVar20 = cVar19 + 0xa9;
            }
            else {
              if (5 < (byte)(cVar19 + 0xbfU)) goto LAB_ram_480f5f3e;
              bVar20 = cVar19 - 0x37;
            }
          }
          uVar17 = uVar23 >> 1;
          uVar23 = uVar23 + 1;
          *(byte *)((int)&uStack_8c + uVar17) = bVar20 | *(char *)((int)&uStack_8c + uVar17) << 4;
        } while (uVar23 != 6);
        uStack_64._0_2_ = CONCAT11((undefined1)uStack_8c,(undefined1)uStack_64);
        uStack_64 = CONCAT13(uStack_8c._2_1_,CONCAT12(uStack_8c._1_1_,(undefined2)uStack_64));
        FUN_ram_4802a59e(&uStack_9c);
LAB_ram_480f60c2:
        puVar22 = &uStack_9c;
        iVar2 = 0;
        puVar12 = auStack_60;
        do {
          aiStack_d4[2] = 0;
          aiStack_d4[3] = 0;
          aiStack_d4[4] = 0;
          aiStack_d4[5] = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          aiStack_d4[6] = 0;
          aiStack_d4[7] = 0;
          aiStack_d4[8] = 0;
          aiStack_d4[9] = 0;
          FUN_ram_4819ad74(aiStack_d4 + 2,0x10,"z%uEnabled",iVar2);
          FUN_ram_4819ad74(&uStack_8c,0x14,"z%uBrightness",iVar2);
          FUN_ram_4819ad74(aiStack_d4 + 6,0x10,"z%uColor",iVar2);
          aiStack_d4[1] = 0;
          iVar4 = FUN_ram_480373c0(aiStack_d4 + 2,puVar12);
          if ((iVar4 == 0) || (iVar4 = FUN_ram_480371ce(&uStack_8c,100,aiStack_d4 + 1), iVar4 == 0))
          {
LAB_ram_480f6366:
            uVar3 = FUN_ram_4802cf24();
            FUN_ram_4803c556(puVar22,uVar3,"invalid_ambient_config");
            FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",puVar22);
            goto LAB_ram_480f5f70;
          }
          FUN_ram_4802a8a8(puVar22,aiStack_d4 + 6);
          iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar4 + 0x1cc4) == 0) {
LAB_ram_480f6394:
            FUN_ram_4802a59e(puVar22);
            goto LAB_ram_480f6366;
          }
          puVar24 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
          uVar23 = 0;
          while( true ) {
            uVar23 = uVar23 + 1;
            iVar5 = FUN_ram_4802b18e(puVar22,*puVar24);
            if (iVar5 != 0) break;
            puVar24 = puVar24 + 2;
            if (*(uint *)(iVar4 + 0x1cc4) <= uVar23) goto LAB_ram_480f6394;
          }
          FUN_ram_4802a59e(puVar22);
          FUN_ram_4802a8a8(puVar22,aiStack_d4 + 6);
          iVar6 = FUN_ram_4802b18e(puVar22,"plain");
          iVar5 = DAT_ram_4ff5cbe8;
          iVar4 = DAT_ram_4ff5cbdc;
          if ((iVar6 == 0) ||
             (iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar6 + 0xcc2) == '\0'
             )) {
            iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
            if (*(int *)(iVar6 + 0x1cc4) != 0) {
              puVar24 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
              uVar23 = 0;
              do {
                iVar7 = FUN_ram_4802b18e(puVar22,*puVar24);
                if (iVar7 != 0) {
                  FUN_ram_4802a8a8(apppppppcStack_ac,
                                   *(undefined4 *)(iVar5 + (iVar4 * 0x3a8 + uVar23) * 8 + 0xcc8));
                  goto LAB_ram_480f61d2;
                }
                uVar23 = uVar23 + 1;
                puVar24 = puVar24 + 2;
              } while (uVar23 < *(uint *)(iVar6 + 0x1cc4));
            }
            FUN_ram_4802a8a8(apppppppcStack_ac,&DAT_ram_481df390);
          }
          else {
            puVar13 = *(undefined1 **)(iVar6 + 0x43c);
            if (puVar13 == (undefined1 *)0x0) {
              puVar13 = &DAT_ram_481df390;
            }
            FUN_ram_4802a888(apppppppcStack_ac,puVar13,*(undefined4 *)(iVar6 + 0x438));
          }
LAB_ram_480f61d2:
          FUN_ram_4802a59e(puVar22);
          __s = (char *******)apppppppcStack_ac;
          if (((-1 < cStack_9d) &&
              (__s = apppppppcStack_ac[0], apppppppcStack_ac[0] == (char *******)0x0)) ||
             (sVar10 = strlen((char *)__s), sVar10 != 6)) {
LAB_ram_480f6360:
            FUN_ram_4802a59e(apppppppcStack_ac);
            goto LAB_ram_480f6366;
          }
          uStack_9c = (char *)((uint)uStack_9c & 0xff000000);
          uVar23 = 0;
          do {
            cVar19 = *(char *)((int)__s + uVar23);
            bVar20 = cVar19 - 0x30;
            if (9 < bVar20) {
              if ((byte)(cVar19 + 0x9fU) < 6) {
                bVar20 = cVar19 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar19 + 0xbfU)) goto LAB_ram_480f6360;
                bVar20 = cVar19 - 0x37;
              }
            }
            uVar17 = uVar23 >> 1;
            uVar23 = uVar23 + 1;
            *(byte *)((int)&uStack_9c + uVar17) = bVar20 | *(char *)((int)&uStack_9c + uVar17) << 4;
          } while (uVar23 != 6);
          puVar12[4] = uStack_9c._2_1_;
          puVar12[2] = (char)uStack_9c;
          puVar12[3] = uStack_9c._1_1_;
          FUN_ram_4802a59e(apppppppcStack_ac);
          iVar2 = iVar2 + 1;
          puVar12[1] = (char)aiStack_d4[1];
          puVar12 = puVar12 + 5;
        } while (iVar2 != 6);
        iVar2 = FUN_ram_4804162c(&local_78);
        if (iVar2 == 0) goto LAB_ram_480f5f44;
        iVar2 = FUN_ram_480416da(&local_78,&DAT_ram_4ff4894c);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_480f536a(&DAT_ram_4ff60e20,&local_78,0);
          if (iVar2 == 0) {
            uVar3 = FUN_ram_4802cf24();
            FUN_ram_4803c556(&uStack_8c,uVar3,"ambient_busy");
            uVar3 = 0x1f7;
            goto LAB_ram_480f5f6a;
          }
          puVar22 = &local_78;
          puVar24 = &DAT_ram_4ff4894c;
          do {
            puVar21 = puVar24;
            puVar18 = puVar22;
            uVar3 = puVar18[1];
            uVar11 = puVar18[2];
            uVar15 = puVar18[3];
            *puVar21 = *puVar18;
            puVar21[1] = uVar3;
            puVar21[2] = uVar11;
            puVar21[3] = uVar15;
            puVar22 = puVar18 + 4;
            puVar24 = puVar21 + 4;
          } while (puVar22 != auStack_48);
          uVar1 = *(undefined2 *)(puVar18 + 5);
          puVar21[4] = *puVar22;
          *(undefined2 *)(puVar21 + 5) = uVar1;
          DAT_ram_4ff47e60 = DAT_ram_4ff47e60 + 1;
          if (DAT_ram_4ff47e60 == 0) {
            DAT_ram_4ff47e60 = 1;
          }
          DAT_ram_4ff6dd49 = '\0';
LAB_ram_480f62be:
          iVar2 = FUN_ram_480f245a();
          if (iVar2 != 0) goto LAB_ram_480f6432;
          pcVar14 = "pending";
          pcVar16 = "flash_write";
          uVar3 = 500;
        }
        else {
          if (((DAT_ram_4ff6dd49 == '\0') || (DAT_ram_4ff6dd48 != '\0')) ||
             (fence(), (DAT_ram_4ff6de94 & 0x80) != 0)) goto LAB_ram_480f62be;
LAB_ram_480f6432:
          pcVar14 = "stored";
          uVar3 = 200;
          pcVar16 = (char *)0x0;
        }
        FUN_ram_4803c556(&uStack_8c,pcVar14,pcVar16);
        goto LAB_ram_480f5f6a;
      }
    }
  }
LAB_ram_480f5f3e:
  FUN_ram_4802a59e(&uStack_9c);
LAB_ram_480f5f44:
  uVar3 = FUN_ram_4802cf24();
  FUN_ram_4803c556(&uStack_8c,uVar3,"invalid_ambient_config");
  uVar3 = 400;
LAB_ram_480f5f6a:
  FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,uVar3,"application/json",&uStack_8c);
  puVar22 = &uStack_8c;
LAB_ram_480f5f70:
  FUN_ram_4802a59e(puVar22);
  return;
}


