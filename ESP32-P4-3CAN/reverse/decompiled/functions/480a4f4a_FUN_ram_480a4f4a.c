/* Firmware entry: 0x480a4f4a */

undefined4 FUN_ram_480a4f4a(int param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined1 uStack_4d;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = 0x1000d01;
  *(undefined1 *)(param_2 + 1) = 1;
  param_2[2] = 0x1010101;
  param_2[3] = 0x2010101;
  param_2[4] = 0x200f001;
  *(undefined2 *)((int)param_2 + 6) = 0xf;
  param_2[9] = 0x10200f0;
  param_2[8] = 0x82008c;
  param_2[0xb] = 0x10301;
  param_2[0xc] = 0x1f401388;
  param_2[5] = 0x46003c;
  uStack_30 = 0x46003c;
  param_2[6] = 0x5a0050;
  uStack_2c = 0x5a0050;
  param_2[7] = 0x780064;
  uStack_28 = 0x780064;
  param_2[0xd] = 0x3c003c;
  local_4c = 0x3c003c;
  param_2[0xe] = 0x500046;
  uStack_48 = 0x500046;
  param_2[0xf] = 0x64005a;
  uStack_44 = 0x64005a;
  param_2[0x10] = 0x3c0078;
  uStack_40 = 0x3c0078;
  param_2[0x11] = 0x4d0042;
  param_2[10] = 0x10001;
  uStack_3c = 0x4d0042;
  param_2[0x12] = 0x630058;
  uStack_38 = 0x630058;
  param_2[0x13] = 0x84006e;
  uStack_34 = 0x84006e;
  param_2[0x14] = 0x46003c;
  param_2[0x15] = 0x5a0050;
  param_2[0x16] = 0x780064;
  *(undefined2 *)(param_2 + 0x17) = 0x8c;
  param_2[0x22] = 0x10001;
  *(undefined1 *)(param_2 + 0x26) = 0;
  *(undefined2 *)((int)param_2 + 0x5e) = 0x6e;
  param_2[0x18] = 0x820079;
  param_2[0x1a] = 0x2d0100;
  param_2[0x1b] = 0x2000000;
  param_2[0x1c] = 0x1000001;
  param_2[0x1e] = 0x10000;
  *(undefined1 *)((int)param_2 + 0x7e) = 2;
  param_2[0x20] = 0x4b003e8;
  param_2[0x21] = 0x12c04b0;
  param_2[0x23] = 0x500;
  param_2[0x24] = 0x753007d0;
  *(undefined2 *)(param_2 + 0x27) = 0xa3c;
  param_2[0x28] = 0x1f40a00;
  param_2[0x19] = 0x100;
  param_2[0x1d] = 0x100;
  *(undefined2 *)(param_2 + 0x1f) = 0x100;
  param_2[0x25] = 0x100;
  uStack_24 = 0x8c;
  iVar2 = FUN_ram_48129d0c();
  if (iVar2 == 0) {
    return 0;
  }
  for (piVar10 = *(int **)(param_1 + 8); piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
    iVar2 = piVar10[8];
    if (iVar2 == 0) {
      return 0;
    }
    ppuVar1 = &PTR_s_fsdEnabled_ram_481c623c_ram_482228f4;
    while( true ) {
      puVar5 = *ppuVar1;
      ppuVar1 = ppuVar1 + 1;
      iVar3 = FUN_ram_4ff453ae(iVar2,puVar5);
      if (iVar3 == 0) break;
      if (ppuVar1 == &PTR_s_command_id_ram_481cc0d4_ram_48222a40) {
        return 0;
      }
    }
  }
  uVar4 = FUN_ram_48129c8a(param_1,"fsdEnabled");
  iVar2 = FUN_ram_48129cb4();
  if (iVar2 != 0) {
    iVar2 = FUN_ram_48129ca2(uVar4);
    *(bool *)param_2 = iVar2 != 0;
    uVar4 = FUN_ram_48129c8a(param_1,"fsdAutoStartEnabled");
    iVar2 = FUN_ram_48129cb4();
    if (iVar2 != 0) {
      iVar2 = FUN_ram_48129ca2(uVar4);
      *(bool *)((int)param_2 + 2) = iVar2 != 0;
      iVar2 = FUN_ram_4807806e(param_1,"fsdAutoStartLongPressEnabled",(int)param_2 + 3);
      if ((((((((((iVar2 != 0) &&
                 (iVar2 = FUN_ram_4807806e(param_1,"fsdAutoStartFirstParkToDriveEnabled",param_2 + 1
                                          ), iVar2 != 0)) &&
                (iVar2 = FUN_ram_4807806e(param_1,"fsdAutoStartGroundEnabled",param_2 + 2),
                iVar2 != 0)) &&
               ((iVar2 = FUN_ram_4807806e(param_1,"canCommsEnabled",(int)param_2 + 10), iVar2 != 0
                && (iVar2 = FUN_ram_4807806e(param_1,"can0TxEnabled",(int)param_2 + 0xb), iVar2 != 0
                   )))) &&
              (iVar2 = FUN_ram_4807806e(param_1,"can1TxEnabled",param_2 + 3), iVar2 != 0)) &&
             ((iVar2 = FUN_ram_4807806e(param_1,"can2TxEnabled",(int)param_2 + 0xd), iVar2 != 0 &&
              (iVar2 = FUN_ram_4807806e(param_1,"autoSpeedOffsetEnabled",(int)param_2 + 0xe),
              iVar2 != 0)))) &&
            ((iVar2 = FUN_ram_4807806e(param_1,"hw3ManualStrategyEnabled",(int)param_2 + 0x12),
             iVar2 != 0 &&
             (((iVar2 = FUN_ram_4807806e(param_1,"v14ManualDrivingProfileEnabled",
                                         (int)param_2 + 0x25), iVar2 != 0 &&
               (iVar2 = FUN_ram_4807806e(param_1,"dndEnabled",(int)param_2 + 0x27), iVar2 != 0)) &&
              (iVar2 = FUN_ram_4807806e(param_1,"dndHandsOnDowngradeEnabled",param_2 + 10),
              iVar2 != 0)))))) &&
           ((((iVar2 = FUN_ram_4807806e(param_1,"isaChimeSuppressEnabled",(int)param_2 + 0x2a),
              iVar2 != 0 &&
              (iVar2 = FUN_ram_4807806e(param_1,"enhancedAutopilotEnabled",(int)param_2 + 0x2b),
              iVar2 != 0)) &&
             (iVar2 = FUN_ram_4807806e(param_1,"cabinCameraDisableEnabled",param_2 + 0xb),
             iVar2 != 0)) &&
            ((iVar2 = FUN_ram_4807806e(param_1,"dndSpeedPeriodicEnabled",(int)param_2 + 0x2f),
             iVar2 != 0 &&
             (iVar2 = FUN_ram_4807806e(param_1,"canbServiceModeEnabled",param_2 + 0x19), iVar2 != 0)
             ))))) &&
          ((((iVar2 = FUN_ram_4807806e(param_1,"fsdForceHighPhysicalEnabled",(int)param_2 + 0x65),
             iVar2 != 0 &&
             (((iVar2 = FUN_ram_4807806e(param_1,"longPressHighBeamStrobeEnabled",
                                         (int)param_2 + 0x69), iVar2 != 0 &&
               (iVar2 = FUN_ram_4807806e(param_1,"seatMemoryEnabled",(int)param_2 + 0x6e),
               iVar2 != 0)) &&
              (iVar2 = FUN_ram_4807806e(param_1,"dndScrollEnabled",param_2 + 0x1c), iVar2 != 0))))
            && (((iVar2 = FUN_ram_4807806e(param_1,"gearAutomationEnabled",(int)param_2 + 0x71),
                 iVar2 != 0 &&
                 (iVar2 = FUN_ram_4807806e(param_1,"gearBrakeSafetyBypassEnabled",
                                           (int)param_2 + 0x72), iVar2 != 0)) &&
                ((iVar2 = FUN_ram_4807806e(param_1,"gearBrakeToggleEnabled",(int)param_2 + 0x73),
                 iVar2 != 0 &&
                 (((iVar2 = FUN_ram_4807806e(param_1,"gearParkSteeringEnabled",param_2 + 0x1d),
                   iVar2 != 0 &&
                   (iVar2 = FUN_ram_4807806e(param_1,"bleObstacleFeatureEnabled",(int)param_2 + 0x75
                                            ), iVar2 != 0)) &&
                  ((iVar2 = FUN_ram_4807806e(param_1,"gearScrollEnabled",(int)param_2 + 0x76),
                   iVar2 != 0 &&
                   ((((iVar2 = FUN_ram_4807806e(param_1,"gearScrollBrakeAuthorizationEnabled",
                                                param_2 + 0x1e), iVar2 != 0 &&
                      (iVar2 = FUN_ram_4807806e(param_1,"bleObstacleSteeringConfirmEnabled",
                                                (int)param_2 + 0x79), iVar2 != 0)) &&
                     (iVar2 = FUN_ram_4807806e(param_1,"gearSeatbeltSafetyEnabled",param_2 + 0x22),
                     iVar2 != 0)) &&
                    ((iVar2 = FUN_ram_4807806e(param_1,"fsdDriverOccupiedSpoofEnabled",
                                               (int)param_2 + 0x89), iVar2 != 0 &&
                     (iVar2 = FUN_ram_4807806e(param_1,"fsdParkStartEnabled",(int)param_2 + 0x8a),
                     iVar2 != 0)))))))))))))) &&
           ((iVar2 = FUN_ram_4807806e(param_1,"fsdReverseStartEnabled",(int)param_2 + 0x8b),
            iVar2 != 0 &&
            ((iVar2 = FUN_ram_4807806e(param_1,"fsdActivationResendEnabled",param_2 + 0x23),
             iVar2 != 0 &&
             (iVar2 = FUN_ram_4807806e(param_1,"fsdCan1ActivationEnabled",(int)param_2 + 0x8e),
             iVar2 != 0)))))))) &&
         ((((((((iVar2 = FUN_ram_4807806e(param_1,"v13SpaceToSpaceEnabled",(int)param_2 + 0x8f),
                iVar2 != 0 &&
                (((iVar2 = FUN_ram_4807806e(param_1,"fsdWarningActivationEnabled",param_2 + 0x25),
                  iVar2 != 0 &&
                  (iVar2 = FUN_ram_4807806e(param_1,"fsdDdawEnabled",(int)param_2 + 0x96),
                  iVar2 != 0)) &&
                 (iVar2 = FUN_ram_4807806e(param_1,"fsdSideCollisionActivationEnabled",
                                           (int)param_2 + 0x97), iVar2 != 0)))) &&
               (((iVar2 = FUN_ram_4807806e(param_1,"fsdSteadyModeEnabled",param_2 + 0x26),
                 iVar2 != 0 &&
                 (iVar2 = FUN_ram_4807806e(param_1,"stableSpeedOffsetEnabled",param_2 + 0x28),
                 iVar2 != 0)) &&
                (iVar2 = FUN_ram_480a4d0a(param_1,"stalkControlVersion",0xff,0,(int)param_2 + 1),
                iVar2 != 0)))) &&
              (((iVar2 = FUN_ram_480a4d0a(param_1,"speedOffsetDownSlewPctPerSec",0xff,0,
                                          (int)param_2 + 0xf), iVar2 != 0 &&
                (iVar2 = FUN_ram_480a4d0a(param_1,"speedOffsetMaxPctRaw",0xff,0,(int)param_2 + 0x11)
                , iVar2 != 0)) &&
               ((iVar2 = FUN_ram_480a4d0a(param_1,"hw3ManualStrategy",0xff,0,(int)param_2 + 0x13),
                iVar2 != 0 &&
                (((iVar2 = FUN_ram_480a4d0a(param_1,"v14SpeedOffsetMaxPctRaw",0xff,0,param_2 + 9),
                  iVar2 != 0 &&
                  (iVar2 = FUN_ram_480a4d0a(param_1,"v14ManualDrivingProfile",0xff,0,
                                            (int)param_2 + 0x26), iVar2 != 0)) &&
                 (iVar2 = FUN_ram_480a4d0a(param_1,"v14CameraDisableDelaySec",0xff,0,
                                           (int)param_2 + 0x2d), iVar2 != 0)))))))) &&
             ((iVar2 = FUN_ram_480a4d0a(param_1,"dndScrollMode",0xff,0,(int)param_2 + 0x2e),
              iVar2 != 0 &&
              (iVar2 = FUN_ram_480a4d0a(param_1,"seatControlBus",0xff,0,(int)param_2 + 0x6f),
              iVar2 != 0)))) &&
            (((iVar2 = FUN_ram_480a4d0a(param_1,"gearAutoShiftMaxSpeedKph",0xff,0,
                                        (int)param_2 + 0x77), iVar2 != 0 &&
              (((iVar2 = FUN_ram_480a4d0a(param_1,"gearShiftLimit",0xff,0,(int)param_2 + 0x7a),
                iVar2 != 0 &&
                (iVar2 = FUN_ram_480a4d0a(param_1,"gearLeftPositiveAction",0xff,0,
                                          (int)param_2 + 0x7b), iVar2 != 0)) &&
               ((iVar2 = FUN_ram_480a4d0a(param_1,"gearLeftNegativeAction",0xff,0,param_2 + 0x1f),
                iVar2 != 0 &&
                ((((iVar2 = FUN_ram_480a4d0a(param_1,"gearRightPositiveAction",0xff,0,
                                             (int)param_2 + 0x7d), iVar2 != 0 &&
                   (iVar2 = FUN_ram_480a4d0a(param_1,"gearRightNegativeAction",0xff,0,
                                             (int)param_2 + 0x7e), iVar2 != 0)) &&
                  (iVar2 = FUN_ram_480a4d0a(param_1,"fsdAutoStartAvailableConfirmFrames",0xff,0,
                                            (int)param_2 + 9), iVar2 != 0)) &&
                 ((iVar2 = FUN_ram_480a4d0a(param_1,"fsdWarningLaneModes",0xff,0,(int)param_2 + 0x95
                                           ), iVar2 != 0 &&
                  (iVar2 = FUN_ram_480a4d0a(param_1,"fsdActivationResendMs",0xff,0,
                                            (int)param_2 + 0x8d), iVar2 != 0)))))))))) &&
             (iVar2 = FUN_ram_480a4d0a(param_1,"v13LowSpeedOffsetPct",0xff,0,param_2 + 0x27),
             iVar2 != 0)))) &&
           (((iVar2 = FUN_ram_480a4d0a(param_1,"v13HighSpeedOffsetPct",0xff,0,(int)param_2 + 0x9d),
             iVar2 != 0 &&
             (iVar2 = FUN_ram_480a4e2a(param_1,"fsdAutoStartReverseToDriveSpeedKph",0xffff,0,
                                       (int)param_2 + 6), iVar2 != 0)) &&
            ((((iVar2 = FUN_ram_480a4e2a(param_1,"v14SpeedTarget110",0xffff,0,(int)param_2 + 0x22),
               iVar2 != 0 &&
               (((iVar2 = FUN_ram_480a4e2a(param_1,"dndSpeedPeriodMinMs",0xffff,0,param_2 + 0xc),
                 iVar2 != 0 &&
                 (iVar2 = FUN_ram_480a4e2a(param_1,"dndSpeedPeriodMaxMs",0xffff,0,
                                           (int)param_2 + 0x32), iVar2 != 0)) &&
                (iVar2 = FUN_ram_480a4e2a(param_1,"hw3ComfortTarget110",0xffff,0,(int)param_2 + 0x5e
                                         ), iVar2 != 0)))) &&
              (((iVar2 = FUN_ram_480a4e2a(param_1,"target110",0xffff,0,param_2 + 0x18), iVar2 != 0
                && (iVar2 = FUN_ram_480a4e2a(param_1,"hw3HurryTarget110",0xffff,0,
                                             (int)param_2 + 0x62), iVar2 != 0)) &&
               (iVar2 = FUN_ram_480a4e2a(param_1,"highBeamStrobeIntervalMs",0xffff,0,
                                         (int)param_2 + 0x6a), iVar2 != 0)))) &&
             ((iVar2 = FUN_ram_480a4e2a(param_1,"highBeamStrobeCount",0xffff,0,param_2 + 0x1b),
              iVar2 != 0 &&
              (iVar2 = FUN_ram_480a4e2a(param_1,"gearCooldownMs",0xffff,0,param_2 + 0x20),
              iVar2 != 0)))))))) &&
          (((iVar2 = FUN_ram_480a4e2a(param_1,"gearParkSteeringThresholdDeciDeg",0xffff,0,
                                      (int)param_2 + 0x82), iVar2 != 0 &&
            (((iVar2 = FUN_ram_480a4e2a(param_1,"gearDriveReverseSteeringThresholdDeciDeg",0xffff,0,
                                        param_2 + 0x21), iVar2 != 0 &&
              (iVar2 = FUN_ram_480a4e2a(param_1,"bleObstacleSteeringThresholdDeciDeg",0xffff,0,
                                        (int)param_2 + 0x86), iVar2 != 0)) &&
             (iVar2 = FUN_ram_480a4e2a(param_1,"v13ParkingDelayMs",0xffff,0,param_2 + 0x24),
             iVar2 != 0)))) &&
           ((iVar2 = FUN_ram_480a4e2a(param_1,"v13ParkingDurationMs",0xffff,0,(int)param_2 + 0x92),
            iVar2 != 0 &&
            (iVar2 = FUN_ram_480a4e2a(param_1,"stableSpeedDownIntervalMs",0xffff,0,
                                      (int)param_2 + 0xa2), iVar2 != 0)))))))) {
        iVar2 = FUN_ram_48129c8a(param_1,"speedDownStepKph");
        if (iVar2 == 0) {
          if (0x26ac < (ushort)(*(short *)((int)param_2 + 0xa2) - 100U)) {
            return 0;
          }
          *(undefined1 *)(param_2 + 4) = 1;
          *(undefined2 *)((int)param_2 + 0xa2) = 500;
        }
        else {
          iVar2 = FUN_ram_480a4d0a(param_1,"speedDownStepKph",10,0,param_2 + 4);
          if (iVar2 == 0) {
            return 0;
          }
          if (*(char *)(param_2 + 4) == '\0') {
            return 0;
          }
        }
        uStack_4d = 0;
        iVar2 = FUN_ram_480a4d0a(param_1,"dndHandsOnDowngradeMode",2,0,&uStack_4d);
        if (iVar2 != 0) {
          *(undefined1 *)((int)param_2 + 0x29) = uStack_4d;
          memset(&local_4c,0,0x2a);
          iVar2 = FUN_ram_480780aa(param_1,"hw3TargetSet",&local_4c,0x15);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_ram_480780aa(param_1,"v14SpeedTargetTemplate",param_2 + 5,7), iVar2 != 0))
          {
            puVar7 = &local_4c;
            iVar2 = 0;
            puVar6 = param_2 + 0xd;
            do {
              iVar3 = 0;
              do {
                puVar8 = (undefined2 *)((int)puVar7 + iVar3);
                puVar9 = (undefined2 *)((int)puVar6 + iVar3);
                iVar3 = iVar3 + 2;
                *puVar9 = *puVar8;
              } while (iVar3 != 0xe);
              iVar2 = iVar2 + 7;
              puVar7 = (undefined4 *)((int)puVar7 + 0xe);
              puVar6 = (undefined4 *)((int)puVar6 + 0xe);
            } while (iVar2 != 0x15);
            uVar4 = FUN_ram_4807649e(param_2);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}


