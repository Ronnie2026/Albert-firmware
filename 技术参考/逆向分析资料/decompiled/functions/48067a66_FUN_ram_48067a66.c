/* Firmware entry: 0x48067a66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48067a66(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined1 auStack_18c [16];
  undefined1 auStack_17c [16];
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [16];
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined2 uStack_148;
  undefined2 uStack_146;
  byte local_d4 [2];
  byte bStack_d2;
  undefined4 auStack_d0 [2];
  byte bStack_c6;
  undefined4 auStack_c4 [5];
  byte bStack_ad;
  byte bStack_aa;
  byte bStack_a9;
  byte bStack_a8;
  byte bStack_6f;
  byte bStack_6b;
  byte bStack_66;
  byte bStack_64;
  byte bStack_63;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_4a;
  byte bStack_45;
  byte bStack_40;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(&uStack_14c,"driverId");
  iVar11 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar11 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      iVar3 = FUN_ram_4802b18e(&uStack_14c,*puVar1);
      if (iVar3 != 0) {
        FUN_ram_4802a59e(&uStack_14c);
        goto LAB_ram_48067af6;
      }
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar11 + 0x1cc4));
  }
  FUN_ram_4802a8a8(local_d4,"driverFeature");
  iVar11 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar11 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      iVar3 = FUN_ram_4802b18e(local_d4,*puVar1);
      if (iVar3 != 0) {
        FUN_ram_4802a59e(local_d4);
        FUN_ram_4802a59e(&uStack_14c);
LAB_ram_48067af6:
        FUN_ram_4802a8a8(local_d4,"expected");
        iVar4 = FUN_ram_4802b18e(local_d4,"plain");
        iVar3 = DAT_ram_4ff5cbe8;
        iVar11 = DAT_ram_4ff5cbdc;
        if ((iVar4 == 0) ||
           (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0'))
        {
          iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar4 + 0x1cc4) != 0) {
            puVar1 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
            uVar2 = 0;
            do {
              iVar5 = FUN_ram_4802b18e(local_d4,*puVar1);
              if (iVar5 != 0) {
                FUN_ram_4802a8a8(auStack_18c,
                                 *(undefined4 *)(iVar3 + (iVar11 * 0x3a8 + uVar2) * 8 + 0xcc8));
                goto LAB_ram_48067ba4;
              }
              uVar2 = uVar2 + 1;
              puVar1 = puVar1 + 2;
            } while (uVar2 < *(uint *)(iVar4 + 0x1cc4));
          }
          FUN_ram_4802a8a8(auStack_18c,&DAT_ram_481df390);
        }
        else {
          puVar8 = *(undefined1 **)(iVar4 + 0x43c);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_ram_481df390;
          }
          FUN_ram_4802a888(auStack_18c,puVar8,*(undefined4 *)(iVar4 + 0x438));
        }
LAB_ram_48067ba4:
        FUN_ram_4802a59e(local_d4);
        FUN_ram_4802a8a8(auStack_17c,"driverId");
        iVar11 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if (*(int *)(iVar11 + 0x1cc4) == 0) {
LAB_ram_48067d50:
          FUN_ram_4802a59e(auStack_17c);
          FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                           "{\"ok\":false,\"error\":\"invalid_driver_feature\"}");
        }
        else {
          puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
          uVar2 = 0;
          while( true ) {
            uVar2 = uVar2 + 1;
            iVar3 = FUN_ram_4802b18e(auStack_17c,*puVar1);
            if (iVar3 != 0) break;
            puVar1 = puVar1 + 2;
            if (*(uint *)(iVar11 + 0x1cc4) <= uVar2) goto LAB_ram_48067d50;
          }
          FUN_ram_4802a8a8(auStack_16c,"driverFeature");
          iVar4 = FUN_ram_4802b18e(auStack_16c,"plain");
          iVar3 = DAT_ram_4ff5cbe8;
          iVar11 = DAT_ram_4ff5cbdc;
          if ((iVar4 == 0) ||
             (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0'
             )) {
            iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
            if (*(int *)(iVar4 + 0x1cc4) != 0) {
              puVar1 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
              uVar2 = 0;
              do {
                iVar5 = FUN_ram_4802b18e(auStack_16c,*puVar1);
                if (iVar5 != 0) {
                  FUN_ram_4802a8a8(auStack_15c,
                                   *(undefined4 *)(iVar3 + (iVar11 * 0x3a8 + uVar2) * 8 + 0xcc8));
                  goto LAB_ram_48067c4a;
                }
                uVar2 = uVar2 + 1;
                puVar1 = puVar1 + 2;
              } while (uVar2 < *(uint *)(iVar4 + 0x1cc4));
            }
            FUN_ram_4802a8a8(auStack_15c,&DAT_ram_481df390);
          }
          else {
            puVar8 = *(undefined1 **)(iVar4 + 0x43c);
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &DAT_ram_481df390;
            }
            FUN_ram_4802a888(auStack_15c,puVar8,*(undefined4 *)(iVar4 + 0x438));
          }
LAB_ram_48067c4a:
          FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
          puVar1 = &DAT_ram_4ff61958;
          pbVar12 = local_d4;
          do {
            uVar6 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            *(undefined4 *)pbVar12 = *puVar1;
            *(undefined4 *)(pbVar12 + 4) = uVar6;
            *(undefined4 *)(pbVar12 + 8) = uVar9;
            *(undefined4 *)(pbVar12 + 0xc) = uVar10;
            puVar1 = puVar1 + 4;
            pbVar12 = pbVar12 + 0x10;
          } while (puVar1 != (undefined4 *)&DAT_ram_4ff619f8);
          *(undefined4 *)pbVar12 = _DAT_ram_4ff619f8;
          FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
          iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdEnabled");
          if (iVar11 == 0) {
            iVar11 = FUN_ram_4802b18e(auStack_15c,"enhancedAutopilotEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_a9;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdAutoStartEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_d2;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdWarningActivationEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_40;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdSideCollisionActivationEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_3d;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdSteadyModeEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_3c;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdDdawEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_3e;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"autoSpeedOffsetEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_c6;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"dndEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_ad;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"cabinCameraDisableEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_a8;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"isaChimeSuppressEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_aa;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"dndScrollEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_64;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"gearAutomationEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_63;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"gearBrakeToggleEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_61;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"gearParkSteeringEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_60;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"bleObstacleFeatureEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_5f;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"gearScrollEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_5e;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"seatMemoryEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_66;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdForceHighPhysicalEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_6f;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"longPressHighBeamStrobeEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_6b;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"fsdParkStartEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_4a;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"v13SpaceToSpaceEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)bStack_45;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"dndTorqueEnabled");
            if (iVar11 != 0) {
              FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
              uVar2 = (uint)(byte)DAT_ram_4ff6934c;
              FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"batteryPreheatEnabled");
            if (iVar11 != 0) {
              uVar6 = FUN_ram_48025ba6();
              FUN_ram_48052b10(&uStack_14c,&DAT_ram_4ff69640,uVar6);
              uVar2 = (uint)(byte)uStack_14c;
              goto LAB_ram_48067cb4;
            }
            uVar13 = FUN_ram_4803165c();
            uStack_148 = (undefined2)((ulonglong)uVar13 >> 0x20);
            uStack_146 = (undefined2)((ulonglong)uVar13 >> 0x30);
            uStack_14c = (undefined2)uVar13;
            uStack_14a = (undefined2)((ulonglong)uVar13 >> 0x10);
            iVar11 = FUN_ram_4802b18e(auStack_15c,"rearFogStrobeEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)(byte)uStack_14c;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"reverseWarningEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)uStack_14c._1_1_;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"rearFogPilotEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)(byte)uStack_14a;
              goto LAB_ram_48067cb4;
            }
            iVar11 = FUN_ram_4802b18e(auStack_15c,"reverseRearFogSteadyEnabled");
            if (iVar11 != 0) {
              uVar2 = (uint)uStack_14a._1_1_;
              goto LAB_ram_48067cb4;
            }
LAB_ram_48067d44:
            FUN_ram_4802a59e(auStack_15c);
            FUN_ram_4802a59e(auStack_16c);
            goto LAB_ram_48067d50;
          }
          uVar2 = (uint)local_d4[0];
LAB_ram_48067cb4:
          iVar11 = FUN_ram_4802b18e(auStack_18c,"0");
          if ((iVar11 == 0) && (iVar11 = FUN_ram_4802b18e(auStack_18c,"1"), iVar11 == 0))
          goto LAB_ram_48067d44;
          FUN_ram_4802a59e(auStack_15c);
          FUN_ram_4802a59e(auStack_16c);
          FUN_ram_4802a59e(auStack_17c);
          if (DAT_ram_4ff6dd80 == 0) {
LAB_ram_48067ce2:
            FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                             "{\"ok\":false,\"error\":\"driver_changed\"}");
          }
          else {
            FUN_ram_4802a8a8(auStack_15c,"driverId");
            FUN_ram_4806562c(&uStack_14c,&DAT_ram_4ff5cb9c,auStack_15c);
            FUN_ram_4802aa44(local_d4,DAT_ram_4ff6dd80,10);
            iVar11 = FUN_ram_4802b13e(&uStack_14c,local_d4);
            if (iVar11 == 0) {
              FUN_ram_4802a59e(local_d4);
              FUN_ram_4802a59e(&uStack_14c);
              FUN_ram_4802a59e(auStack_15c);
              goto LAB_ram_48067ce2;
            }
            FUN_ram_4802a59e(local_d4);
            FUN_ram_4802a59e(&uStack_14c);
            FUN_ram_4802a59e(auStack_15c);
            uVar7 = FUN_ram_4802b18e(auStack_18c,"1");
            if (uVar7 == uVar2) goto LAB_ram_48067d00;
            FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                             "{\"ok\":false,\"error\":\"driver_feature_stale\"}");
          }
        }
        iVar11 = 0;
LAB_ram_48067d00:
        FUN_ram_4802a59e(auStack_18c);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar11;
      }
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar11 + 0x1cc4));
  }
  FUN_ram_4802a59e(local_d4);
  FUN_ram_4802a59e(&uStack_14c);
  return 1;
}


