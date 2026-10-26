/* Firmware entry: 0x480bb868 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480bb868(int *param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined2 *puVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 local_1a4;
  undefined1 uStack_1a3;
  short sStack_1a2;
  short sStack_1a0;
  short sStack_19e;
  short sStack_19c;
  short sStack_19a;
  short sStack_198;
  short sStack_196;
  short sStack_194;
  undefined2 uStack_192;
  undefined2 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_e4;
  undefined1 auStack_e0 [2];
  undefined2 uStack_de;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined2 auStack_d0 [7];
  undefined2 uStack_c2;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  char cStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 auStack_a2 [14];
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_55;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_44;
  undefined2 uStack_42;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  puVar12 = &DAT_ram_4ff61958;
  puVar18 = &local_e4;
  do {
    uVar4 = puVar12[1];
    uVar6 = puVar12[2];
    uVar8 = puVar12[3];
    *puVar18 = *puVar12;
    puVar18[1] = uVar4;
    puVar18[2] = uVar6;
    puVar18[3] = uVar8;
    puVar12 = puVar12 + 4;
    puVar18 = puVar18 + 4;
  } while (puVar12 != (undefined4 *)&DAT_ram_4ff619f8);
  *puVar18 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
  puVar12 = &DAT_ram_4ff6934c;
  puVar18 = (undefined4 *)&local_1a4;
  do {
    uVar17 = puVar12[1];
    uVar16 = puVar12[2];
    uVar4 = puVar12[3];
    uVar6 = puVar12[4];
    uVar8 = puVar12[5];
    *puVar18 = *puVar12;
    puVar18[1] = uVar17;
    puVar18[2] = uVar16;
    puVar18[3] = uVar4;
    puVar18[4] = uVar6;
    puVar18[5] = uVar8;
    puVar12 = puVar12 + 6;
    puVar18 = puVar18 + 6;
  } while (puVar12 != &DAT_ram_4ff69394);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
  FUN_ram_4808c168(param_1);
  FUN_ram_4808c2dc(param_1,"canCommsEnabled",uStack_da);
  FUN_ram_4808c2dc(param_1,"fsdEnabled",(undefined1)local_e4);
  FUN_ram_480bb6fa(param_1,"stalkControlVersion",local_e4._1_1_);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartEnabled",local_e4._2_1_);
  FUN_ram_4808c2dc(param_1,"fsdWarningActivationEnabled",uStack_50);
  FUN_ram_4808c2dc(param_1,"fsdSideCollisionActivationEnabled",uStack_4d);
  FUN_ram_4808c2dc(param_1,"fsdSteadyModeEnabled",uStack_4c);
  FUN_ram_4808c2dc(param_1,"fsdDdawEnabled",uStack_4e);
  FUN_ram_480bb6fa(param_1,"fsdWarningLaneModes",uStack_4f);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartLongPressEnabled",local_e4._3_1_);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartFirstParkToDriveEnabled",auStack_e0[0]);
  FUN_ram_480b4e36(param_1,"fsdAutoStartReverseToDriveSpeedKph",uStack_de);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartGroundEnabled",uStack_dc);
  FUN_ram_4808c2dc(param_1,"fsdDriverOccupiedSpoofEnabled",uStack_5b);
  FUN_ram_480bb6fa(param_1,"fsdAutoStartAvailableConfirmFrames",uStack_db);
  FUN_ram_4808c2dc(param_1,"fsdParkStartEnabled",uStack_5a);
  FUN_ram_4808c2dc(param_1,"fsdReverseStartEnabled",uStack_59);
  FUN_ram_4808c2dc(param_1,"v13SpaceToSpaceEnabled",uStack_55);
  FUN_ram_480b4e36(param_1,"v13ParkingDelayMs",uStack_54);
  FUN_ram_480b4e36(param_1,"v13ParkingDurationMs",uStack_52);
  FUN_ram_4808c2dc(param_1,"autoSpeedOffsetEnabled",uStack_d6);
  FUN_ram_4808c2dc(param_1,"stableSpeedOffsetEnabled",uStack_44);
  FUN_ram_480b4e36(param_1,"stableSpeedDownIntervalMs",uStack_42);
  FUN_ram_480bb6fa(param_1,"speedDownStepKph",uStack_d4);
  FUN_ram_480bb6fa(param_1,"speedOffsetDownSlewPctPerSec",uStack_d5);
  FUN_ram_480bb6fa(param_1,"speedOffsetMaxPctRaw",uStack_d3);
  FUN_ram_480bb6fa(param_1,"v13LowSpeedOffsetPct",uStack_48);
  FUN_ram_480bb6fa(param_1,"v13HighSpeedOffsetPct",uStack_47);
  FUN_ram_4808c2dc(param_1,"hw3ManualStrategyEnabled",uStack_d2);
  FUN_ram_480bb6fa(param_1,"hw3ManualStrategy",uStack_d1);
  FUN_ram_480bb6fa(param_1,"v14SpeedOffsetMaxPctRaw",uStack_c0);
  FUN_ram_4808c2dc(param_1,"v14ManualDrivingProfileEnabled",uStack_bf);
  FUN_ram_480bb6fa(param_1,"v14ManualDrivingProfile",uStack_be);
  FUN_ram_4808c2dc(param_1,"enhancedAutopilotEnabled",uStack_b9);
  FUN_ram_4808c2dc(param_1,"dndEnabled",uStack_bd);
  FUN_ram_4808c2dc(param_1,"cabinCameraDisableEnabled",uStack_b8);
  FUN_ram_480bb6fa(param_1,"v14CameraDisableDelaySec",uStack_b7);
  FUN_ram_4808c2dc(param_1,"dndHandsOnDowngradeEnabled",uStack_bc);
  FUN_ram_4808c2dc(param_1,"dndHandsOn24To1Enabled",cStack_bb == '\x01');
  FUN_ram_4808c2dc(param_1,"dndHandsOn124To0Enabled",cStack_bb == '\x02');
  FUN_ram_4808c2dc(param_1,"isaChimeSuppressEnabled",uStack_ba);
  FUN_ram_4808c2dc(param_1,"dndScrollEnabled",uStack_74);
  FUN_ram_480bb6fa(param_1,"dndScrollMode",uStack_b6);
  FUN_ram_4808c2dc(param_1,"dndSpeedPeriodicEnabled",uStack_b5);
  FUN_ram_480b4e36(param_1,"dndSpeedPeriodMinMs",uStack_b4);
  FUN_ram_480b4e36(param_1,"dndSpeedPeriodMaxMs",uStack_b2);
  cVar11 = (char)param_1[10];
  puVar18 = &local_e4;
  puVar21 = auStack_a2;
  ppuVar20 = &PTR_s_hw3ComfortTargetBelow60_ram_481d17a0_ram_481f5660;
LAB_ram_480bbcbc:
  puVar3 = puVar21 + -7;
  ppuVar19 = ppuVar20;
  do {
    pcVar7 = *ppuVar19;
    uVar1 = *puVar3;
    if ((((cVar11 == '\0') || (iVar13 = param_1[3], iVar13 == 0)) ||
        (*(char *)((int)param_1 + iVar13 + 0x1b) == '\0')) || (pcVar7 == (char *)0x0))
    goto LAB_ram_480bbd18;
    if (*(char *)((int)param_1 + iVar13 + 0xf) == '\0') {
      uVar9 = param_1[2];
      if (((uint)param_1[1] < uVar9) || (param_1[1] - uVar9 < 2)) goto LAB_ram_480bbd18;
      *(undefined1 *)(*param_1 + uVar9) = 0x2c;
      iVar13 = param_1[2];
      param_1[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_480bbd18;
    }
    uVar9 = param_1[2];
    if (((uint)param_1[1] < uVar9) || (param_1[1] - uVar9 < 2)) goto LAB_ram_480bbd18;
    *(undefined1 *)(*param_1 + uVar9) = 0x22;
    iVar13 = param_1[2];
    param_1[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_1) = 0;
    if ((char)param_1[10] == '\0') goto LAB_ram_480bbd18;
    uVar9 = param_1[2];
    uVar22 = param_1[1];
    if ((uVar22 < uVar9) || (sVar5 = strlen(pcVar7), uVar22 - uVar9 <= sVar5))
    goto LAB_ram_480bbd18;
    FUN_ram_4ff45158(*param_1 + uVar9,pcVar7);
    iVar13 = param_1[2];
    param_1[2] = sVar5 + iVar13;
    *(undefined1 *)(*param_1 + sVar5 + iVar13) = 0;
    if ((char)param_1[10] == '\0') goto LAB_ram_480bbd18;
    uVar9 = param_1[2];
    if (((uint)param_1[1] < uVar9) || (param_1[1] - uVar9 < 3)) goto LAB_ram_480bbd18;
    iVar13 = *param_1;
    *(undefined1 *)(iVar13 + uVar9) = 0x22;
    ((undefined1 *)(iVar13 + uVar9))[1] = 0x3a;
    iVar13 = param_1[2];
    param_1[2] = iVar13 + 2;
    *(undefined1 *)(iVar13 + 2 + *param_1) = 0;
    iVar13 = param_1[3];
    *(undefined1 *)(iVar13 + (int)param_1 + 0xf) = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uVar9 = FUN_ram_4819ad74(&uStack_15c,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_1,uVar1,0);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bbd18;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bbd18;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_15c,uVar9);
    iVar13 = param_1[2];
    puVar3 = puVar3 + 1;
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
    cVar11 = (char)param_1[10];
    ppuVar19 = ppuVar19 + 1;
  } while (puVar3 != puVar21);
  goto LAB_ram_480bbd24;
LAB_ram_480bbd18:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar3 = puVar3 + 1;
  } while (puVar3 != puVar21);
  cVar11 = '\0';
LAB_ram_480bbd24:
  puVar21 = puVar21 + 7;
  ppuVar20 = ppuVar20 + 7;
  if (puVar21 == &uStack_78) goto code_r0x480bbd2c;
  goto LAB_ram_480bbcbc;
code_r0x480bbd2c:
  ppuVar20 = &PTR_s_v14TargetBelow60_ram_481d173c_ram_481f5644;
  do {
    if ((((cVar11 == '\0') || (iVar13 = param_1[3], iVar13 == 0)) ||
        (*(char *)((int)param_1 + iVar13 + 0x1b) == '\0')) ||
       (pcVar7 = *ppuVar20, pcVar7 == (char *)0x0)) {
LAB_ram_480bbd8e:
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else {
      uVar1 = *(undefined2 *)(puVar18 + 5);
      if (*(char *)((int)param_1 + iVar13 + 0xf) == '\0') {
        uVar9 = param_1[2];
        if ((uVar9 <= (uint)param_1[1]) && (1 < param_1[1] - uVar9)) {
          *(undefined1 *)(*param_1 + uVar9) = 0x2c;
          iVar13 = param_1[2];
          param_1[2] = iVar13 + 1;
          *(undefined1 *)(iVar13 + 1 + *param_1) = 0;
          if ((char)param_1[10] != '\0') goto LAB_ram_480bbda0;
        }
        goto LAB_ram_480bbd8e;
      }
LAB_ram_480bbda0:
      uVar9 = param_1[2];
      if (((uint)param_1[1] < uVar9) || (param_1[1] - uVar9 < 2)) goto LAB_ram_480bbd8e;
      *(undefined1 *)(*param_1 + uVar9) = 0x22;
      iVar13 = param_1[2];
      param_1[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_480bbd8e;
      uVar22 = param_1[2];
      uVar9 = param_1[1];
      if ((uVar9 < uVar22) || (sVar5 = strlen(pcVar7), uVar9 - uVar22 <= sVar5))
      goto LAB_ram_480bbd8e;
      FUN_ram_4ff45158(*param_1 + uVar22,pcVar7,sVar5);
      iVar13 = param_1[2];
      param_1[2] = sVar5 + iVar13;
      *(undefined1 *)(*param_1 + sVar5 + iVar13) = 0;
      iVar13 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
      if (iVar13 != 0) {
        iVar13 = param_1[3];
        *(undefined1 *)(iVar13 + (int)param_1 + 0xf) = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uVar9 = FUN_ram_4819ad74(&uStack_15c,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_1,uVar1,0);
        if ((char)param_1[10] != '\0') {
          uVar22 = param_1[2];
          if ((uVar22 <= (uint)param_1[1]) && (uVar9 < param_1[1] - uVar22)) {
            FUN_ram_4ff45158(*param_1 + uVar22,&uStack_15c,uVar9);
            iVar13 = param_1[2];
            param_1[2] = uVar9 + iVar13;
            *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
            goto joined_r0x480bbe88;
          }
        }
        goto LAB_ram_480bbd8e;
      }
    }
joined_r0x480bbe88:
    if (ppuVar20 == &PTR_s_v14Target120_ram_481d1790_ram_481f565c) break;
    puVar18 = (undefined4 *)((int)puVar18 + 2);
    ppuVar20 = ppuVar20 + 1;
    cVar11 = (char)param_1[10];
  } while( true );
  FUN_ram_480b4e36(param_1,"hw3ComfortTarget110",uStack_86);
  FUN_ram_480b4e36(param_1,"target110",uStack_84);
  FUN_ram_480b4e36(param_1,"hw3HurryTarget110",uStack_82);
  FUN_ram_480b4e36(param_1,"v14Target110",uStack_c2);
  FUN_ram_4808c2dc(param_1,"gearAutomationEnabled",uStack_73);
  FUN_ram_4808c2dc(param_1,"gearSeatbeltSafetyEnabled",uStack_5c);
  FUN_ram_4808c2dc(param_1,"gearBrakeSafetyBypassEnabled",uStack_72);
  FUN_ram_4808c2dc(param_1,"gearBrakeToggleEnabled",uStack_71);
  FUN_ram_4808c2dc(param_1,"gearParkSteeringEnabled",uStack_70);
  FUN_ram_4808c2dc(param_1,"bleObstacleFeatureEnabled",uStack_6f);
  FUN_ram_480b2068(param_1,"bleObstacleConfigRevision",DAT_ram_4ff47ea8);
  FUN_ram_480b2068(param_1,"fsdConfigRevision",DAT_ram_4ff47ea4);
  FUN_ram_4808c2dc(param_1,"gearScrollEnabled",uStack_6e);
  FUN_ram_480bb6fa(param_1,"gearAutoShiftMaxSpeedKph",uStack_6d);
  FUN_ram_4808c2dc(param_1,"gearScrollBrakeAuthorizationEnabled",uStack_6c);
  FUN_ram_4808c2dc(param_1,"bleObstacleSteeringConfirmEnabled",uStack_6b);
  FUN_ram_480bb6fa(param_1,"gearShiftLimit",uStack_6a);
  FUN_ram_480bb6fa(param_1,"gearLeftPositiveAction",uStack_69);
  FUN_ram_480bb6fa(param_1,"gearLeftNegativeAction",uStack_68);
  FUN_ram_480bb6fa(param_1,"gearRightPositiveAction",uStack_67);
  FUN_ram_480bb6fa(param_1,"gearRightNegativeAction",uStack_66);
  FUN_ram_480b4e36(param_1,"gearCooldownMs",uStack_64);
  FUN_ram_480b4e36(param_1,"gearParkSteeringThresholdDeciDeg",uStack_62);
  FUN_ram_480b4e36(param_1,"gearDriveReverseSteeringThresholdDeciDeg",uStack_60);
  FUN_ram_480b4e36(param_1,"bleObstacleSteeringThresholdDeciDeg",uStack_5e);
  FUN_ram_4808c2dc(param_1,"seatMemoryEnabled",uStack_76);
  FUN_ram_480bb6fa(param_1,"seatControlBus",uStack_75);
  FUN_ram_4808c2dc(param_1,"can0TxEnabled",uStack_d9);
  FUN_ram_4808c2dc(param_1,"can1TxEnabled",uStack_d8);
  FUN_ram_4808c2dc(param_1,"can2TxEnabled",uStack_d7);
  uVar4 = FUN_ram_48025ba6();
  FUN_ram_48052b10(&uStack_15c,&DAT_ram_4ff69640,uVar4);
  uVar9 = uStack_15c & 0xff;
  if (uVar9 == 0) {
    uVar9 = uStack_150 & 0xff;
  }
  FUN_ram_4808c2dc(param_1,"batteryPreheatEnabled",uVar9);
  FUN_ram_4ff3ec14(&DAT_ram_4ff69640,0xffffffff);
  uVar2 = DAT_ram_4ff69666;
  FUN_ram_4ff3ee10(&DAT_ram_4ff69640);
  FUN_ram_480bb6fa(param_1,"batteryPreheatDurationMin",uVar2);
  FUN_ram_4808c2dc(param_1,"canbServiceModeEnabled",uStack_80);
  FUN_ram_4808c2dc(param_1,"fsdForceHighPhysicalEnabled",uStack_7f);
  FUN_ram_4808c2dc(param_1,"longPressHighBeamStrobeEnabled",uStack_7b);
  FUN_ram_480b4e36(param_1,"highBeamStrobeIntervalMs",uStack_7a);
  FUN_ram_480b4e36(param_1,"highBeamStrobeCount",uStack_78);
  FUN_ram_4808c2dc(param_1,"dndTorqueEnabled",local_1a4);
  FUN_ram_4808c2dc(param_1,"torqueNagMaintenanceEnabled",uStack_1a3);
  uVar9 = (uint)sStack_1a2;
  iVar13 = FUN_ram_4808c696(param_1,"preventiveNegativeMinNm");
  if (iVar13 == 0) {
LAB_ram_480bc28e:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc28e;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc28e;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_1a0;
  iVar13 = FUN_ram_4808c696(param_1,"preventiveNegativeMaxNm");
  if (iVar13 == 0) {
LAB_ram_480bc398:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc398;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc398;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_19e;
  iVar13 = FUN_ram_4808c696(param_1,"preventivePositiveMinNm");
  if (iVar13 == 0) {
LAB_ram_480bc49e:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc49e;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc49e;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_19c;
  iVar13 = FUN_ram_4808c696(param_1,"preventivePositiveMaxNm");
  if (iVar13 == 0) {
LAB_ram_480bc5a4:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc5a4;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc5a4;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_19a;
  iVar13 = FUN_ram_4808c696(param_1,"correctiveNegativeMinNm");
  if (iVar13 == 0) {
LAB_ram_480bc6aa:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc6aa;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc6aa;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_198;
  iVar13 = FUN_ram_4808c696(param_1,"correctiveNegativeMaxNm");
  if (iVar13 == 0) {
LAB_ram_480bc7b0:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc7b0;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc7b0;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_196;
  iVar13 = FUN_ram_4808c696(param_1,"correctivePositiveMinNm");
  if (iVar13 == 0) {
LAB_ram_480bc8b6:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc8b6;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc8b6;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  uVar9 = (uint)sStack_194;
  iVar13 = FUN_ram_4808c696(param_1,"correctivePositiveMaxNm");
  if (iVar13 == 0) {
LAB_ram_480bc9bc:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar22 = (int)uVar9 >> 0x1f;
    if ((int)uVar9 < 0) {
      uVar22 = -(uint)(uVar9 != 0) - uVar22;
      uVar9 = -uVar9;
      pcVar7 = "-";
    }
    else {
      pcVar7 = "";
    }
    uVar10 = uVar9 - ((uVar9 & 0xfffff) + (uVar9 >> 0x14 | (uVar22 & 0xff) << 0xc) +
                      (uVar22 >> 8 & 0xfffff) + (uVar22 >> 0x1c)) % 0x19;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar14 = (uVar22 - (uVar9 < uVar10)) * -0x3d70a3d7 + uVar10 * -0x70a3d70b +
             (int)((ulonglong)uVar10 * 0xc28f5c29 >> 0x20);
    uVar15 = uVar14 >> 2;
    uVar10 = uVar10 * -0x3d70a3d7 >> 2;
    uVar14 = uVar14 * 0x40000000 | uVar10;
    uVar10 = uVar9 + uVar10 * -100;
    iVar13 = (int)((ulonglong)uVar14 * 100 >> 0x20) + uVar15 * 100;
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",pcVar7,uVar14,uVar15,2,iVar13,uVar10,
                             (uVar22 - iVar13) - (uint)(uVar9 < uVar10));
    if ((char)param_1[10] == '\0') goto LAB_ram_480bc9bc;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bc9bc;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  FUN_ram_480b4e36(param_1,"correctiveNegativeFrames",uStack_190);
  FUN_ram_480b4e36(param_1,"correctivePositiveFrames",uStack_192);
  iVar13 = FUN_ram_4808c696(param_1,"activityMinSec");
  if (iVar13 == 0) {
LAB_ram_480bd13a:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_18c,0,1000,0);
    __umoddi3(uStack_18c,0,1000,0);
    uVar4 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    iVar13 = FUN_ram_4808c90a(param_1,&uStack_1c4,uVar4);
    if (iVar13 == 0) goto LAB_ram_480bd13a;
  }
  iVar13 = FUN_ram_4808c696(param_1,"activityMaxSec");
  if (iVar13 == 0) {
LAB_ram_480bd134:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_188,0,1000,0);
    __umoddi3(uStack_188,0,1000,0);
    uVar4 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    iVar13 = FUN_ram_4808c90a(param_1,&uStack_1c4,uVar4);
    if (iVar13 == 0) goto LAB_ram_480bd134;
  }
  iVar13 = FUN_ram_4808c696(param_1,"restMinSec");
  if (iVar13 == 0) {
LAB_ram_480bd12e:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_184,0,1000,0);
    __umoddi3(uStack_184,0,1000,0);
    uVar4 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    iVar13 = FUN_ram_4808c90a(param_1,&uStack_1c4,uVar4);
    if (iVar13 == 0) goto LAB_ram_480bd12e;
  }
  iVar13 = FUN_ram_4808c696(param_1,"restMaxSec");
  if (iVar13 == 0) {
LAB_ram_480bcbe2:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_180,0,1000,0);
    __umoddi3(uStack_180,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bcbe2;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bcbe2;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"h2PersistenceSec");
  if (iVar13 == 0) {
LAB_ram_480bcc6a:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_17c,0,1000,0);
    __umoddi3(uStack_17c,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bcc6a;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bcc6a;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"preCorrectionPauseSec");
  if (iVar13 == 0) {
LAB_ram_480bccf2:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_178,0,1000,0);
    __umoddi3(uStack_178,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bccf2;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bccf2;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"correctiveSendMinSec");
  if (iVar13 == 0) {
LAB_ram_480bcd7a:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_174,0,1000,0);
    __umoddi3(uStack_174,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bcd7a;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bcd7a;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"correctiveSendMaxSec");
  if (iVar13 == 0) {
LAB_ram_480bce02:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_170,0,1000,0);
    __umoddi3(uStack_170,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bce02;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bce02;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"correctivePauseMinSec");
  if (iVar13 == 0) {
LAB_ram_480bce8a:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_16c,0,1000,0);
    __umoddi3(uStack_16c,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bce8a;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bce8a;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"correctivePauseMaxSec");
  if (iVar13 == 0) {
LAB_ram_480bcf12:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_168,0,1000,0);
    __umoddi3(uStack_168,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] == '\0') goto LAB_ram_480bcf12;
    uVar22 = param_1[2];
    if (((uint)param_1[1] < uVar22) || (param_1[1] - uVar22 <= uVar9)) goto LAB_ram_480bcf12;
    FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
    iVar13 = param_1[2];
    param_1[2] = uVar9 + iVar13;
    *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
  }
  iVar13 = FUN_ram_4808c696(param_1,"stabilityVerifySec");
  if (iVar13 != 0) {
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar23 = __udivdi3(uStack_164,0,1000,0);
    __umoddi3(uStack_164,0,1000,0);
    uVar9 = FUN_ram_4819ad74(&uStack_1c4,0x20,"%s%llu.%0*llu",&DAT_ram_481df390,(int)uVar23,
                             (int)((ulonglong)uVar23 >> 0x20),3);
    if ((char)param_1[10] != '\0') {
      uVar22 = param_1[2];
      if ((uVar22 <= (uint)param_1[1]) && (uVar9 < param_1[1] - uVar22)) {
        FUN_ram_4ff45158(*param_1 + uVar22,&uStack_1c4,uVar9);
        iVar13 = param_1[2];
        param_1[2] = uVar9 + iVar13;
        *(undefined1 *)(*param_1 + uVar9 + iVar13) = 0;
        goto LAB_ram_480bcf9e;
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480bcf9e:
  FUN_ram_480b2068(param_1,"dasFreshTimeoutMs",uStack_160);
  FUN_ram_4808c64a(param_1);
  return;
}


