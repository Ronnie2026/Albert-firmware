/* Firmware entry: 0x4808f6e8 */

void FUN_ram_4808f6e8(uint *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined2 local_32;
  byte abStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808f25a(param_1,"config");
  FUN_ram_4808f560(param_1,"fsdEnabled",*param_2);
  FUN_ram_4808f560(param_1,"fsdAutoStartEnabled",param_2[2]);
  FUN_ram_4808f560(param_1,"fsdAutoStartLongPressEnabled",param_2[3]);
  FUN_ram_4808f560(param_1,"fsdAutoStartFirstParkToDriveEnabled",param_2[4]);
  FUN_ram_4808f560(param_1,"fsdAutoStartGroundEnabled",param_2[8]);
  FUN_ram_4808f560(param_1,"canCommsEnabled",param_2[10]);
  FUN_ram_4808f560(param_1,"can0TxEnabled",param_2[0xb]);
  FUN_ram_4808f560(param_1,"can1TxEnabled",param_2[0xc]);
  FUN_ram_4808f560(param_1,"can2TxEnabled",param_2[0xd]);
  FUN_ram_4808f560(param_1,"autoSpeedOffsetEnabled",param_2[0xe]);
  FUN_ram_4808f560(param_1,"hw3ManualStrategyEnabled",param_2[0x12]);
  FUN_ram_4808f560(param_1,"v14ManualDrivingProfileEnabled",param_2[0x25]);
  FUN_ram_4808f560(param_1,"dndEnabled",param_2[0x27]);
  FUN_ram_4808f560(param_1,"dndHandsOnDowngradeEnabled",param_2[0x28]);
  FUN_ram_4808f560(param_1,"isaChimeSuppressEnabled",param_2[0x2a]);
  FUN_ram_4808f560(param_1,"enhancedAutopilotEnabled",param_2[0x2b]);
  FUN_ram_4808f560(param_1,"cabinCameraDisableEnabled",param_2[0x2c]);
  FUN_ram_4808f560(param_1,"dndSpeedPeriodicEnabled",param_2[0x2f]);
  FUN_ram_4808f560(param_1,"canbServiceModeEnabled",param_2[100]);
  FUN_ram_4808f560(param_1,"fsdForceHighPhysicalEnabled",param_2[0x65]);
  FUN_ram_4808f560(param_1,"longPressHighBeamStrobeEnabled",param_2[0x69]);
  FUN_ram_4808f560(param_1,"seatMemoryEnabled",param_2[0x6e]);
  FUN_ram_4808f560(param_1,"dndScrollEnabled",param_2[0x70]);
  FUN_ram_4808f560(param_1,"gearAutomationEnabled",param_2[0x71]);
  FUN_ram_4808f560(param_1,"gearBrakeSafetyBypassEnabled",param_2[0x72]);
  FUN_ram_4808f560(param_1,"gearBrakeToggleEnabled",param_2[0x73]);
  FUN_ram_4808f560(param_1,"gearParkSteeringEnabled",param_2[0x74]);
  FUN_ram_4808f560(param_1,"bleObstacleFeatureEnabled",param_2[0x75]);
  FUN_ram_4808f560(param_1,"gearScrollEnabled",param_2[0x76]);
  FUN_ram_4808f560(param_1,"gearScrollBrakeAuthorizationEnabled",param_2[0x78]);
  FUN_ram_4808f560(param_1,"bleObstacleSteeringConfirmEnabled",param_2[0x79]);
  FUN_ram_4808f560(param_1,"gearSeatbeltSafetyEnabled",param_2[0x88]);
  FUN_ram_4808f560(param_1,"fsdDriverOccupiedSpoofEnabled",param_2[0x89]);
  FUN_ram_4808f560(param_1,"fsdParkStartEnabled",param_2[0x8a]);
  FUN_ram_4808f560(param_1,"fsdReverseStartEnabled",param_2[0x8b]);
  FUN_ram_4808f560(param_1,"fsdActivationResendEnabled",param_2[0x8c]);
  FUN_ram_4808f560(param_1,"fsdCan1ActivationEnabled",param_2[0x8e]);
  FUN_ram_4808f560(param_1,"v13SpaceToSpaceEnabled",param_2[0x8f]);
  FUN_ram_4808f560(param_1,"fsdWarningActivationEnabled",param_2[0x94]);
  FUN_ram_4808f560(param_1,"fsdDdawEnabled",param_2[0x96]);
  FUN_ram_4808f560(param_1,"fsdSideCollisionActivationEnabled",param_2[0x97]);
  FUN_ram_4808f560(param_1,"fsdSteadyModeEnabled",param_2[0x98]);
  FUN_ram_4808f560(param_1,"stableSpeedOffsetEnabled",param_2[0xa0]);
  uVar5 = param_1[0xb];
  if ((uVar5 == 0) || (param_1[9] != uVar5)) {
    FUN_ram_4803444c(param_1,"stalkControlVersion",param_2[1]);
    FUN_ram_4803444c(param_1,"speedOffsetDownSlewPctPerSec",param_2[0xf]);
    FUN_ram_4803444c(param_1,"speedOffsetMaxPctRaw",param_2[0x11]);
    FUN_ram_4803444c(param_1,"hw3ManualStrategy",param_2[0x13]);
    FUN_ram_4803444c(param_1,"v14SpeedOffsetMaxPctRaw",param_2[0x24]);
    FUN_ram_4803444c(param_1,"v14ManualDrivingProfile",param_2[0x26]);
    FUN_ram_4803444c(param_1,"v14CameraDisableDelaySec",param_2[0x2d]);
    FUN_ram_4803444c(param_1,"dndScrollMode",param_2[0x2e]);
    FUN_ram_4803444c(param_1,"seatControlBus",param_2[0x6f]);
    FUN_ram_4803444c(param_1,"gearAutoShiftMaxSpeedKph",param_2[0x77]);
    FUN_ram_4803444c(param_1,"gearShiftLimit",param_2[0x7a]);
    FUN_ram_4803444c(param_1,"gearLeftPositiveAction",param_2[0x7b]);
    FUN_ram_4803444c(param_1,"gearLeftNegativeAction",param_2[0x7c]);
    FUN_ram_4803444c(param_1,"gearRightPositiveAction",param_2[0x7d]);
    FUN_ram_4803444c(param_1,"gearRightNegativeAction",param_2[0x7e]);
    FUN_ram_4803444c(param_1,"fsdAutoStartAvailableConfirmFrames",param_2[9]);
    FUN_ram_4803444c(param_1,"fsdWarningLaneModes",param_2[0x95]);
    FUN_ram_4803444c(param_1,"fsdActivationResendMs",param_2[0x8d]);
    FUN_ram_4803444c(param_1,"v13LowSpeedOffsetPct",param_2[0x9c]);
    FUN_ram_4803444c(param_1,"v13HighSpeedOffsetPct",param_2[0x9d]);
    FUN_ram_4803444c(param_1,"speedDownStepKph",param_2[0x10]);
    FUN_ram_4803428c(param_1,"fsdAutoStartReverseToDriveSpeedKph",*(undefined2 *)(param_2 + 6));
    FUN_ram_4803428c(param_1,"v14SpeedTarget110",*(undefined2 *)(param_2 + 0x22));
    FUN_ram_4803428c(param_1,"dndSpeedPeriodMinMs",*(undefined2 *)(param_2 + 0x30));
    FUN_ram_4803428c(param_1,"dndSpeedPeriodMaxMs",*(undefined2 *)(param_2 + 0x32));
    FUN_ram_4803428c(param_1,"hw3ComfortTarget110",*(undefined2 *)(param_2 + 0x5e));
    FUN_ram_4803428c(param_1,"target110",*(undefined2 *)(param_2 + 0x60));
    FUN_ram_4803428c(param_1,"hw3HurryTarget110",*(undefined2 *)(param_2 + 0x62));
    FUN_ram_4803428c(param_1,"highBeamStrobeIntervalMs",*(undefined2 *)(param_2 + 0x6a));
    FUN_ram_4803428c(param_1,"highBeamStrobeCount",*(undefined2 *)(param_2 + 0x6c));
    FUN_ram_4803428c(param_1,"gearCooldownMs",*(undefined2 *)(param_2 + 0x80));
    FUN_ram_4803428c(param_1,"gearParkSteeringThresholdDeciDeg",*(undefined2 *)(param_2 + 0x82));
    FUN_ram_4803428c(param_1,"gearDriveReverseSteeringThresholdDeciDeg",
                     *(undefined2 *)(param_2 + 0x84));
    FUN_ram_4803428c(param_1,"bleObstacleSteeringThresholdDeciDeg",*(undefined2 *)(param_2 + 0x86));
    FUN_ram_4803428c(param_1,"v13ParkingDelayMs",*(undefined2 *)(param_2 + 0x90));
    FUN_ram_4803428c(param_1,"v13ParkingDurationMs",*(undefined2 *)(param_2 + 0x92));
    FUN_ram_4803428c(param_1,"stableSpeedDownIntervalMs",*(undefined2 *)(param_2 + 0xa2));
    uVar1 = param_2[0x29];
LAB_ram_4808fcc0:
    FUN_ram_4803444c(param_1,"dndHandsOnDowngradeMode",uVar1);
  }
  else {
    ppuVar15 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar17 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"speedOffsetDownSlewPctPerSec",param_2[0xf]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("speedOffsetDownSlewPctPerSec",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"speedOffsetMaxPctRaw",param_2[0x11]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("speedOffsetMaxPctRaw",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"hw3ManualStrategy",param_2[0x13]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("hw3ManualStrategy",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"v14SpeedOffsetMaxPctRaw",param_2[0x24]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v14SpeedOffsetMaxPctRaw",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"v14ManualDrivingProfile",param_2[0x26]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v14ManualDrivingProfile",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"v14CameraDisableDelaySec",param_2[0x2d]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v14CameraDisableDelaySec",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"dndScrollMode",param_2[0x2e]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("dndScrollMode",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"seatControlBus",param_2[0x6f]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("seatControlBus",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"gearAutoShiftMaxSpeedKph",param_2[0x77]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearAutoShiftMaxSpeedKph",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"gearShiftLimit",param_2[0x7a]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearShiftLimit",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"gearLeftPositiveAction",param_2[0x7b]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearLeftPositiveAction",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"gearLeftNegativeAction",param_2[0x7c]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearLeftNegativeAction",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"gearRightPositiveAction",param_2[0x7d]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearRightPositiveAction",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"gearRightNegativeAction",param_2[0x7e]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearRightNegativeAction",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"fsdAutoStartAvailableConfirmFrames",param_2[9]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("fsdAutoStartAvailableConfirmFrames",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"fsdWarningLaneModes",param_2[0x95]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("fsdWarningLaneModes",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"fsdActivationResendMs",param_2[0x8d]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("fsdActivationResendMs",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"v13LowSpeedOffsetPct",param_2[0x9c]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v13LowSpeedOffsetPct",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"v13HighSpeedOffsetPct",param_2[0x9d]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v13HighSpeedOffsetPct",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"speedDownStepKph",param_2[0x10]);
        break;
      }
      iVar6 = FUN_ram_4ff453ae("speedDownStepKph",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"fsdAutoStartReverseToDriveSpeedKph",*(undefined2 *)(param_2 + 6));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("fsdAutoStartReverseToDriveSpeedKph",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"v14SpeedTarget110",*(undefined2 *)(param_2 + 0x22));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v14SpeedTarget110",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"dndSpeedPeriodMinMs",*(undefined2 *)(param_2 + 0x30));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("dndSpeedPeriodMinMs",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"dndSpeedPeriodMaxMs",*(undefined2 *)(param_2 + 0x32));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("dndSpeedPeriodMaxMs",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"hw3ComfortTarget110",*(undefined2 *)(param_2 + 0x5e));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("hw3ComfortTarget110",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"target110",*(undefined2 *)(param_2 + 0x60));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("target110",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"hw3HurryTarget110",*(undefined2 *)(param_2 + 0x62));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("hw3HurryTarget110",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"highBeamStrobeIntervalMs",*(undefined2 *)(param_2 + 0x6a));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("highBeamStrobeIntervalMs",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"highBeamStrobeCount",*(undefined2 *)(param_2 + 0x6c));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("highBeamStrobeCount",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"gearCooldownMs",*(undefined2 *)(param_2 + 0x80));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearCooldownMs",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"gearParkSteeringThresholdDeciDeg",*(undefined2 *)(param_2 + 0x82))
        ;
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearParkSteeringThresholdDeciDeg",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"gearDriveReverseSteeringThresholdDeciDeg",
                         *(undefined2 *)(param_2 + 0x84));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("gearDriveReverseSteeringThresholdDeciDeg",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"bleObstacleSteeringThresholdDeciDeg",
                         *(undefined2 *)(param_2 + 0x86));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("bleObstacleSteeringThresholdDeciDeg",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar17 = ppuVar15;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"v13ParkingDelayMs",*(undefined2 *)(param_2 + 0x90));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v13ParkingDelayMs",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar17 = ppuVar17 + 1;
      ppuVar18 = ppuVar15;
      if (ppuVar17 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"v13ParkingDurationMs",*(undefined2 *)(param_2 + 0x92));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("v13ParkingDurationMs",*ppuVar17);
    } while (iVar6 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"stableSpeedDownIntervalMs",*(undefined2 *)(param_2 + 0xa2));
        break;
      }
      iVar6 = FUN_ram_4ff453ae("stableSpeedDownIntervalMs",*ppuVar18);
    } while (iVar6 != 0);
    do {
      ppuVar15 = ppuVar15 + 1;
      if (ppuVar15 == (undefined **)&DAT_ram_481f51dc) {
        uVar1 = param_2[0x29];
        goto LAB_ram_4808fcc0;
      }
      iVar6 = FUN_ram_4ff453ae("dndHandsOnDowngradeMode",*ppuVar15);
    } while (iVar6 != 0);
  }
  FUN_ram_4808f3d8(param_1,"hw3TargetSet");
  uVar21 = param_1[8];
  if (param_2 + 0x34 != param_2 + 0x5e) {
    puVar4 = (undefined2 *)(param_2 + 0x34);
    do {
      puVar20 = puVar4 + 7;
      do {
        local_32 = *puVar4;
        uVar14 = 0;
        puVar2 = &DAT_ram_481f5510;
        puVar3 = param_1;
        uVar22 = 0x4e;
        do {
          do {
            uVar8 = *puVar2;
            puVar13 = puVar2 + 1;
            uVar7 = *puVar3 ^ uVar22;
            uVar11 = puVar3[1] ^ uVar14;
            uVar19 = uVar22 + 0x25;
            puVar2 = puVar2 + 2;
            uVar14 = uVar14 + (uVar19 < uVar22);
            puVar9 = puVar3 + 2;
            puVar3[1] = uVar8 * uVar11 + *puVar13 * uVar7 +
                        (int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20);
            *puVar3 = uVar8 * uVar7;
            puVar3 = puVar9;
            uVar22 = uVar19;
          } while (uVar19 != 0xe2);
        } while (uVar14 != 0);
        pbVar16 = (byte *)&local_32;
        do {
          uVar14 = 0;
          puVar2 = &DAT_ram_481f5510;
          uVar22 = (uint)*pbVar16;
          puVar3 = param_1;
          do {
            uVar7 = *puVar2;
            puVar13 = puVar2 + 1;
            uVar11 = *puVar3 ^ uVar22;
            uVar8 = puVar3[1] ^ uVar14;
            uVar14 = uVar14 + (uVar22 + 0x25 < uVar22);
            puVar9 = puVar3 + 2;
            puVar2 = puVar2 + 2;
            puVar3[1] = uVar7 * uVar8 + *puVar13 * uVar11 +
                        (int)((ulonglong)uVar7 * (ulonglong)uVar11 >> 0x20);
            *puVar3 = uVar7 * uVar11;
            uVar22 = uVar22 + 0x25;
            puVar3 = puVar9;
          } while (param_1 + 8 != puVar9);
          pbVar16 = pbVar16 + 1;
        } while (pbVar16 != abStack_30);
        puVar4 = puVar4 + 1;
      } while (puVar20 != puVar4);
      puVar4 = puVar20;
    } while ((undefined2 *)(param_2 + 0x5e) != puVar20);
    uVar21 = uVar21 + 0x3f;
  }
  puVar13 = &DAT_ram_481f5510;
  puVar3 = &DAT_ram_481f5510;
  uVar14 = 0;
  uVar22 = 0x5d;
  puVar2 = param_1;
  do {
    do {
      uVar8 = *puVar3;
      puVar9 = puVar3 + 1;
      uVar7 = *puVar2 ^ uVar22;
      uVar11 = puVar2[1] ^ uVar14;
      uVar19 = uVar22 + 0x25;
      puVar3 = puVar3 + 2;
      uVar14 = uVar14 + (uVar19 < uVar22);
      puVar10 = puVar2 + 2;
      puVar2[1] = uVar8 * uVar11 + *puVar9 * uVar7 +
                  (int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20);
      *puVar2 = uVar8 * uVar7;
      uVar22 = uVar19;
      puVar2 = puVar10;
    } while (uVar19 != 0xf1);
  } while (uVar14 != 0);
  param_1[8] = uVar21 + 1;
  if (param_1[9] == param_1[10]) {
    param_1[10] = 0;
  }
  param_1[9] = param_1[9] - 1;
  FUN_ram_4808f3d8(param_1,"v14SpeedTargetTemplate");
  puVar4 = (undefined2 *)(param_2 + 0x14);
  uVar21 = param_1[8];
  if (puVar4 != (undefined2 *)(param_2 + 0x22)) {
    do {
      local_32 = *puVar4;
      uVar14 = 0;
      uVar22 = 0x4e;
      puVar2 = param_1;
      puVar3 = puVar13;
      do {
        do {
          uVar11 = *puVar3;
          puVar9 = puVar3 + 1;
          uVar8 = *puVar2 ^ uVar22;
          uVar19 = puVar2[1] ^ uVar14;
          uVar7 = uVar22 + 0x25;
          puVar3 = puVar3 + 2;
          uVar14 = uVar14 + (uVar7 < uVar22);
          puVar10 = puVar2 + 2;
          puVar2[1] = uVar11 * uVar19 + *puVar9 * uVar8 +
                      (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
          *puVar2 = uVar11 * uVar8;
          uVar22 = uVar7;
          puVar2 = puVar10;
        } while (uVar7 != 0xe2);
      } while (uVar14 != 0);
      pbVar16 = (byte *)&local_32;
      do {
        uVar14 = 0;
        uVar22 = (uint)*pbVar16;
        puVar2 = param_1;
        puVar3 = puVar13;
        do {
          uVar8 = *puVar3;
          puVar9 = puVar3 + 1;
          uVar7 = *puVar2 ^ uVar22;
          uVar11 = puVar2[1] ^ uVar14;
          uVar14 = uVar14 + (uVar22 + 0x25 < uVar22);
          puVar10 = puVar2 + 2;
          puVar3 = puVar3 + 2;
          puVar2[1] = uVar8 * uVar11 + *puVar9 * uVar7 +
                      (int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20);
          *puVar2 = uVar8 * uVar7;
          uVar22 = uVar22 + 0x25;
          puVar2 = puVar10;
        } while (param_1 + 8 != puVar10);
        pbVar16 = pbVar16 + 1;
      } while (abStack_30 != pbVar16);
      puVar4 = puVar4 + 1;
    } while ((undefined2 *)(param_2 + 0x22) != puVar4);
    uVar21 = uVar21 + 0x15;
  }
  uVar14 = 0;
  uVar22 = 0x5d;
  puVar2 = param_1;
  puVar3 = puVar13;
  do {
    do {
      uVar8 = *puVar3;
      puVar9 = puVar3 + 1;
      uVar7 = *puVar2 ^ uVar22;
      uVar11 = puVar2[1] ^ uVar14;
      uVar19 = uVar22 + 0x25;
      puVar3 = puVar3 + 2;
      uVar14 = uVar14 + (uVar19 < uVar22);
      puVar10 = puVar2 + 2;
      puVar2[1] = uVar8 * uVar11 + *puVar9 * uVar7 +
                  (int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20);
      *puVar2 = uVar8 * uVar7;
      uVar22 = uVar19;
      puVar2 = puVar10;
    } while (uVar19 != 0xf1);
  } while (uVar14 != 0);
  uVar22 = param_1[9];
  if (uVar22 == param_1[10]) {
    param_1[10] = 0;
  }
  uVar7 = 0;
  uVar14 = 0x7d;
  puVar2 = param_1;
  do {
    do {
      uVar11 = *puVar13;
      puVar3 = puVar13 + 1;
      uVar8 = *puVar2 ^ uVar14;
      uVar19 = puVar2[1] ^ uVar7;
      uVar12 = uVar14 + 0x25;
      puVar13 = puVar13 + 2;
      uVar7 = uVar7 + (uVar12 < uVar14);
      puVar9 = puVar2 + 2;
      puVar2[1] = uVar11 * uVar19 + *puVar3 * uVar8 +
                  (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar2 = uVar11 * uVar8;
      uVar14 = uVar12;
      puVar2 = puVar9;
    } while (uVar12 != 0x111);
  } while (uVar7 != 0);
  param_1[8] = uVar21 + 2;
  if (uVar5 == uVar22 - 1) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar22 - 2;
  return;
}


