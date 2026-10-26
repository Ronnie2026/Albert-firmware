/* Firmware entry: 0x480c2e50 */

void FUN_ram_480c2e50(uint *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     ((iVar5 = FUN_ram_4808c696(param_1,"config"), iVar5 == 0 || ((char)param_1[10] == '\0')))) {
LAB_ram_480c2e7e:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar3 = param_1[2];
    if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480c2e7e;
    *(undefined1 *)(*param_1 + uVar3) = 0x7b;
    uVar3 = param_1[2];
    param_1[2] = uVar3 + 1;
    *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
    uVar3 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar3 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar3 + 0x1c) = 1;
    param_1[3] = uVar3 + 1;
  }
  FUN_ram_4808c2dc(param_1,"fsdEnabled",*param_2);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartEnabled",param_2[2]);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartLongPressEnabled",param_2[3]);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartFirstParkToDriveEnabled",param_2[4]);
  FUN_ram_4808c2dc(param_1,"fsdAutoStartGroundEnabled",param_2[8]);
  FUN_ram_4808c2dc(param_1,"canCommsEnabled",param_2[10]);
  FUN_ram_4808c2dc(param_1,"can0TxEnabled",param_2[0xb]);
  FUN_ram_4808c2dc(param_1,"can1TxEnabled",param_2[0xc]);
  FUN_ram_4808c2dc(param_1,"can2TxEnabled",param_2[0xd]);
  FUN_ram_4808c2dc(param_1,"autoSpeedOffsetEnabled",param_2[0xe]);
  FUN_ram_4808c2dc(param_1,"hw3ManualStrategyEnabled",param_2[0x12]);
  FUN_ram_4808c2dc(param_1,"v14ManualDrivingProfileEnabled",param_2[0x25]);
  FUN_ram_4808c2dc(param_1,"dndEnabled",param_2[0x27]);
  FUN_ram_4808c2dc(param_1,"dndHandsOnDowngradeEnabled",param_2[0x28]);
  FUN_ram_4808c2dc(param_1,"isaChimeSuppressEnabled",param_2[0x2a]);
  FUN_ram_4808c2dc(param_1,"enhancedAutopilotEnabled",param_2[0x2b]);
  FUN_ram_4808c2dc(param_1,"cabinCameraDisableEnabled",param_2[0x2c]);
  FUN_ram_4808c2dc(param_1,"dndSpeedPeriodicEnabled",param_2[0x2f]);
  FUN_ram_4808c2dc(param_1,"canbServiceModeEnabled",param_2[100]);
  FUN_ram_4808c2dc(param_1,"fsdForceHighPhysicalEnabled",param_2[0x65]);
  FUN_ram_4808c2dc(param_1,"longPressHighBeamStrobeEnabled",param_2[0x69]);
  FUN_ram_4808c2dc(param_1,"seatMemoryEnabled",param_2[0x6e]);
  FUN_ram_4808c2dc(param_1,"dndScrollEnabled",param_2[0x70]);
  FUN_ram_4808c2dc(param_1,"gearAutomationEnabled",param_2[0x71]);
  FUN_ram_4808c2dc(param_1,"gearBrakeSafetyBypassEnabled",param_2[0x72]);
  FUN_ram_4808c2dc(param_1,"gearBrakeToggleEnabled",param_2[0x73]);
  FUN_ram_4808c2dc(param_1,"gearParkSteeringEnabled",param_2[0x74]);
  FUN_ram_4808c2dc(param_1,"bleObstacleFeatureEnabled",param_2[0x75]);
  FUN_ram_4808c2dc(param_1,"gearScrollEnabled",param_2[0x76]);
  FUN_ram_4808c2dc(param_1,"gearScrollBrakeAuthorizationEnabled",param_2[0x78]);
  FUN_ram_4808c2dc(param_1,"bleObstacleSteeringConfirmEnabled",param_2[0x79]);
  FUN_ram_4808c2dc(param_1,"gearSeatbeltSafetyEnabled",param_2[0x88]);
  FUN_ram_4808c2dc(param_1,"fsdDriverOccupiedSpoofEnabled",param_2[0x89]);
  FUN_ram_4808c2dc(param_1,"fsdParkStartEnabled",param_2[0x8a]);
  FUN_ram_4808c2dc(param_1,"fsdReverseStartEnabled",param_2[0x8b]);
  FUN_ram_4808c2dc(param_1,"fsdActivationResendEnabled",param_2[0x8c]);
  FUN_ram_4808c2dc(param_1,"fsdCan1ActivationEnabled",param_2[0x8e]);
  FUN_ram_4808c2dc(param_1,"v13SpaceToSpaceEnabled",param_2[0x8f]);
  FUN_ram_4808c2dc(param_1,"fsdWarningActivationEnabled",param_2[0x94]);
  FUN_ram_4808c2dc(param_1,"fsdDdawEnabled",param_2[0x96]);
  FUN_ram_4808c2dc(param_1,"fsdSideCollisionActivationEnabled",param_2[0x97]);
  FUN_ram_4808c2dc(param_1,"fsdSteadyModeEnabled",param_2[0x98]);
  FUN_ram_4808c2dc(param_1,"stableSpeedOffsetEnabled",param_2[0xa0]);
  FUN_ram_480bb6fa(param_1,"stalkControlVersion",param_2[1]);
  FUN_ram_480bb6fa(param_1,"speedOffsetDownSlewPctPerSec",param_2[0xf]);
  FUN_ram_480bb6fa(param_1,"speedOffsetMaxPctRaw",param_2[0x11]);
  FUN_ram_480bb6fa(param_1,"hw3ManualStrategy",param_2[0x13]);
  FUN_ram_480bb6fa(param_1,"v14SpeedOffsetMaxPctRaw",param_2[0x24]);
  FUN_ram_480bb6fa(param_1,"v14ManualDrivingProfile",param_2[0x26]);
  FUN_ram_480bb6fa(param_1,"v14CameraDisableDelaySec",param_2[0x2d]);
  FUN_ram_480bb6fa(param_1,"dndScrollMode",param_2[0x2e]);
  FUN_ram_480bb6fa(param_1,"seatControlBus",param_2[0x6f]);
  FUN_ram_480bb6fa(param_1,"gearAutoShiftMaxSpeedKph",param_2[0x77]);
  FUN_ram_480bb6fa(param_1,"gearShiftLimit",param_2[0x7a]);
  FUN_ram_480bb6fa(param_1,"gearLeftPositiveAction",param_2[0x7b]);
  FUN_ram_480bb6fa(param_1,"gearLeftNegativeAction",param_2[0x7c]);
  FUN_ram_480bb6fa(param_1,"gearRightPositiveAction",param_2[0x7d]);
  FUN_ram_480bb6fa(param_1,"gearRightNegativeAction",param_2[0x7e]);
  FUN_ram_480bb6fa(param_1,"fsdAutoStartAvailableConfirmFrames",param_2[9]);
  FUN_ram_480bb6fa(param_1,"fsdWarningLaneModes",param_2[0x95]);
  FUN_ram_480bb6fa(param_1,"fsdActivationResendMs",param_2[0x8d]);
  FUN_ram_480bb6fa(param_1,"v13LowSpeedOffsetPct",param_2[0x9c]);
  FUN_ram_480bb6fa(param_1,"v13HighSpeedOffsetPct",param_2[0x9d]);
  FUN_ram_480bb6fa(param_1,"speedDownStepKph",param_2[0x10]);
  FUN_ram_480b4e36(param_1,"fsdAutoStartReverseToDriveSpeedKph",*(undefined2 *)(param_2 + 6));
  FUN_ram_480b4e36(param_1,"v14SpeedTarget110",*(undefined2 *)(param_2 + 0x22));
  FUN_ram_480b4e36(param_1,"dndSpeedPeriodMinMs",*(undefined2 *)(param_2 + 0x30));
  FUN_ram_480b4e36(param_1,"dndSpeedPeriodMaxMs",*(undefined2 *)(param_2 + 0x32));
  FUN_ram_480b4e36(param_1,"hw3ComfortTarget110",*(undefined2 *)(param_2 + 0x5e));
  FUN_ram_480b4e36(param_1,"target110",*(undefined2 *)(param_2 + 0x60));
  FUN_ram_480b4e36(param_1,"hw3HurryTarget110",*(undefined2 *)(param_2 + 0x62));
  FUN_ram_480b4e36(param_1,"highBeamStrobeIntervalMs",*(undefined2 *)(param_2 + 0x6a));
  FUN_ram_480b4e36(param_1,"highBeamStrobeCount",*(undefined2 *)(param_2 + 0x6c));
  FUN_ram_480b4e36(param_1,"gearCooldownMs",*(undefined2 *)(param_2 + 0x80));
  FUN_ram_480b4e36(param_1,"gearParkSteeringThresholdDeciDeg",*(undefined2 *)(param_2 + 0x82));
  FUN_ram_480b4e36(param_1,"gearDriveReverseSteeringThresholdDeciDeg",
                   *(undefined2 *)(param_2 + 0x84));
  FUN_ram_480b4e36(param_1,"bleObstacleSteeringThresholdDeciDeg",*(undefined2 *)(param_2 + 0x86));
  FUN_ram_480b4e36(param_1,"v13ParkingDelayMs",*(undefined2 *)(param_2 + 0x90));
  FUN_ram_480b4e36(param_1,"v13ParkingDurationMs",*(undefined2 *)(param_2 + 0x92));
  FUN_ram_480b4e36(param_1,"stableSpeedDownIntervalMs",*(undefined2 *)(param_2 + 0xa2));
  FUN_ram_480bb6fa(param_1,"dndHandsOnDowngradeMode",param_2[0x29]);
  puVar9 = (undefined2 *)(param_2 + 0x5e);
  if ((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
     ((*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0' ||
      ((iVar5 = FUN_ram_4808c696(param_1,"hw3TargetSet"), iVar5 == 0 || ((char)param_1[10] == '\0'))
      )))) {
LAB_ram_480c3452:
    *(undefined1 *)(param_1 + 10) = 0;
    if (puVar9 != (undefined2 *)(param_2 + 0x34)) {
      cVar2 = '\0';
LAB_ram_480c3464:
      puVar7 = (undefined2 *)(param_2 + 0x34);
LAB_ram_480c346a:
      do {
        puVar8 = puVar7 + 7;
        do {
          uVar1 = *puVar7;
          if (((cVar2 == '\0') || (param_1[3] == 0)) ||
             (iVar5 = (param_1[3] - 1) + (int)param_1, *(char *)(iVar5 + 0x1c) != '\0'))
          goto LAB_ram_480c34f2;
          uVar3 = (uint)*(byte *)(iVar5 + 0x10);
          if (uVar3 == 0) {
            uVar3 = param_1[2];
            if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480c34f2;
            *(undefined1 *)(*param_1 + uVar3) = 0x2c;
            uVar6 = param_1[2];
            uVar3 = *param_1;
            param_1[2] = uVar6 + 1;
            *(undefined1 *)(uVar6 + 1 + uVar3) = 0;
            iVar5 = (param_1[3] - 1) + (int)param_1;
          }
          *(undefined1 *)(iVar5 + 0x10) = 0;
          local_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar3 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4,uVar3,uVar1,0);
          if ((char)param_1[10] == '\0') goto LAB_ram_480c34f2;
          uVar6 = param_1[2];
          if ((param_1[1] < uVar6) || (param_1[1] - uVar6 <= uVar3)) goto LAB_ram_480c34f2;
          FUN_ram_4ff45158(*param_1 + uVar6,&local_50,uVar3);
          uVar6 = param_1[2];
          puVar7 = puVar7 + 1;
          param_1[2] = uVar3 + uVar6;
          *(undefined1 *)(*param_1 + uVar3 + uVar6) = 0;
          cVar2 = (char)param_1[10];
        } while (puVar8 != puVar7);
        puVar7 = puVar8;
        cVar4 = cVar2;
      } while (puVar8 != puVar9);
      goto LAB_ram_480c3506;
    }
LAB_ram_480c3688:
    *(undefined1 *)(param_1 + 10) = 0;
    if (param_2 + 0x22 == param_2 + 0x14) goto LAB_ram_480c372e;
    cVar2 = '\0';
LAB_ram_480c369a:
    puVar9 = (undefined2 *)(param_2 + 0x14);
    do {
      uVar1 = *puVar9;
      if (((cVar2 == '\0') || (param_1[3] == 0)) ||
         (iVar5 = (param_1[3] - 1) + (int)param_1, *(char *)(iVar5 + 0x1c) != '\0'))
      goto LAB_ram_480c3724;
      uVar3 = (uint)*(byte *)(iVar5 + 0x10);
      if (uVar3 == 0) {
        uVar3 = param_1[2];
        if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480c3724;
        *(undefined1 *)(*param_1 + uVar3) = 0x2c;
        uVar6 = param_1[2];
        uVar3 = *param_1;
        param_1[2] = uVar6 + 1;
        *(undefined1 *)(uVar6 + 1 + uVar3) = 0;
        iVar5 = (param_1[3] - 1) + (int)param_1;
      }
      *(undefined1 *)(iVar5 + 0x10) = 0;
      local_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar3 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4,uVar3,uVar1,0);
      if ((char)param_1[10] == '\0') goto LAB_ram_480c3724;
      uVar6 = param_1[2];
      if ((param_1[1] < uVar6) || (param_1[1] - uVar6 <= uVar3)) goto LAB_ram_480c3724;
      FUN_ram_4ff45158(*param_1 + uVar6,&local_50,uVar3);
      uVar6 = param_1[2];
      puVar9 = puVar9 + 1;
      param_1[2] = uVar3 + uVar6;
      *(undefined1 *)(*param_1 + uVar3 + uVar6) = 0;
      cVar2 = (char)param_1[10];
    } while ((undefined2 *)(param_2 + 0x22) != puVar9);
  }
  else {
    uVar3 = param_1[2];
    if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480c3452;
    *(undefined1 *)(*param_1 + uVar3) = 0x5b;
    uVar3 = param_1[2];
    param_1[2] = uVar3 + 1;
    *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
    uVar3 = param_1[3];
    cVar2 = (char)param_1[10];
    *(undefined1 *)((int)param_1 + uVar3 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar3 + 0x1c) = 0;
    param_1[3] = uVar3 + 1;
    cVar4 = cVar2;
    if ((undefined2 *)(param_2 + 0x34) != puVar9) goto LAB_ram_480c3464;
LAB_ram_480c3506:
    if (((cVar4 == '\0') || (param_1[3] < 2)) ||
       (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) goto LAB_ram_480c3688;
    uVar3 = param_1[2];
    if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480c3688;
    *(undefined1 *)(*param_1 + uVar3) = 0x5d;
    uVar3 = param_1[2];
    param_1[2] = uVar3 + 1;
    *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
    uVar3 = param_1[3];
    param_1[3] = uVar3 - 1;
    if (((((char)param_1[10] == '\0') ||
         ((10 < uVar3 - 2 || (*(char *)((int)param_1 + uVar3 + 0x1a) == '\0')))) ||
        (iVar5 = FUN_ram_4808c696(param_1,"v14SpeedTargetTemplate"), iVar5 == 0)) ||
       ((char)param_1[10] == '\0')) goto LAB_ram_480c3688;
    uVar3 = param_1[2];
    if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480c3688;
    *(undefined1 *)(*param_1 + uVar3) = 0x5b;
    uVar3 = param_1[2];
    param_1[2] = uVar3 + 1;
    *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
    uVar3 = param_1[3];
    cVar2 = (char)param_1[10];
    *(undefined1 *)((int)param_1 + uVar3 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar3 + 0x1c) = 0;
    param_1[3] = uVar3 + 1;
    if (param_2 + 0x14 != param_2 + 0x22) goto LAB_ram_480c369a;
  }
  if (((cVar2 != '\0') && (1 < param_1[3])) && (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')
     ) {
    uVar3 = param_1[2];
    if ((uVar3 <= param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x5d;
      uVar3 = param_1[2];
      param_1[2] = uVar3 + 1;
      *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
      uVar6 = param_1[3];
      uVar3 = uVar6 - 1;
      param_1[3] = uVar3;
      if (((char)param_1[10] != '\0') &&
         ((1 < uVar3 && (*(char *)((int)param_1 + uVar6 + 0x1a) != '\0')))) {
        uVar3 = param_1[2];
        if ((uVar3 <= param_1[1]) && (1 < param_1[1] - uVar3)) {
          *(undefined1 *)(*param_1 + uVar3) = 0x7d;
          uVar3 = param_1[2];
          param_1[2] = uVar3 + 1;
          *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
          param_1[3] = param_1[3] - 1;
          return;
        }
      }
    }
  }
LAB_ram_480c372e:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
LAB_ram_480c34f2:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar7 = puVar7 + 1;
  } while (puVar8 != puVar7);
  cVar2 = '\0';
  puVar7 = puVar8;
  cVar4 = '\0';
  if (puVar8 == puVar9) goto LAB_ram_480c3506;
  goto LAB_ram_480c346a;
LAB_ram_480c3724:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar9 = puVar9 + 1;
  } while ((undefined2 *)(param_2 + 0x22) != puVar9);
  goto LAB_ram_480c372e;
}


