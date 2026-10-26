/* Firmware entry: 0x4803cb08 */

uint FUN_ram_4803cb08(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_e0,"fsdAutoStartEnabled");
  iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar4 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      uVar2 = FUN_ram_4802b18e(auStack_e0,*puVar1);
      if (uVar2 != 0) goto LAB_ram_4803cb72;
      puVar1 = puVar1 + 2;
    } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
  }
  FUN_ram_4802a8a8(auStack_d0,"fsdWarningActivationEnabled");
  iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar4 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      iVar3 = FUN_ram_4802b18e(auStack_d0,*puVar1);
      if (iVar3 != 0) goto LAB_ram_4803cbdc;
      puVar1 = puVar1 + 2;
    } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
  }
  FUN_ram_4802a8a8(auStack_c0,"fsdSideCollisionActivationEnabled");
  iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar4 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      iVar3 = FUN_ram_4802b18e(auStack_c0,*puVar1);
      if (iVar3 != 0) {
        FUN_ram_4802a59e(auStack_c0);
LAB_ram_4803cbdc:
        uVar2 = 1;
        goto LAB_ram_4803cbde;
      }
      puVar1 = puVar1 + 2;
    } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
  }
  FUN_ram_4802a8a8(auStack_b0,"fsdSteadyModeEnabled");
  iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_b0);
  if (iVar4 != 0) {
    FUN_ram_4802a59e(auStack_b0);
    uVar2 = 1;
    goto LAB_ram_4803cc66;
  }
  FUN_ram_4802a8a8(auStack_a0,"fsdDdawEnabled");
  uVar2 = 1;
  iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_a0);
  if (iVar4 == 0) {
    FUN_ram_4802a8a8(auStack_90,"fsdWarningLaneModes");
    iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_90);
    if (iVar4 == 0) {
      FUN_ram_4802a8a8(auStack_80,"fsdAutoStartLongPressEnabled");
      iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_80);
      if (iVar4 != 0) {
        FUN_ram_4802a59e(auStack_80);
        goto LAB_ram_4803ccba;
      }
      FUN_ram_4802a8a8(auStack_70,"fsdAutoStartFirstParkToDriveEnabled");
      iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_70);
      if (iVar4 == 0) {
        FUN_ram_4802a8a8(auStack_60,"fsdAutoStartGroundEnabled");
        iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_60);
        if (iVar4 != 0) {
          FUN_ram_4802a59e(auStack_60);
          goto LAB_ram_4803cd08;
        }
        FUN_ram_4802a8a8(auStack_50,"fsdAutoStartReverseToDriveSpeedKph");
        iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_50);
        if (iVar4 != 0) {
          FUN_ram_4802a59e(auStack_50);
          FUN_ram_4802a59e(auStack_60);
          FUN_ram_4802a59e(auStack_70);
          goto LAB_ram_4803cd0e;
        }
        FUN_ram_4802a8a8(auStack_40,"fsdAutoStartAvailableConfirmFrames");
        iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_40);
        if (iVar4 == 0) {
          FUN_ram_4802a8a8(auStack_30,"fsdDriverOccupiedSpoofEnabled");
          iVar4 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_30);
          FUN_ram_4802a59e(auStack_30);
          uVar2 = (uint)(iVar4 != 0);
          FUN_ram_4802a59e(auStack_40);
        }
        else {
          FUN_ram_4802a59e(auStack_40);
        }
        FUN_ram_4802a59e(auStack_50);
        FUN_ram_4802a59e(auStack_60);
        FUN_ram_4802a59e(auStack_70);
      }
      else {
LAB_ram_4803cd08:
        FUN_ram_4802a59e(auStack_70);
LAB_ram_4803cd0e:
        uVar2 = 1;
      }
      FUN_ram_4802a59e(auStack_80);
    }
    else {
LAB_ram_4803ccba:
      uVar2 = 1;
    }
    FUN_ram_4802a59e(auStack_90);
  }
  FUN_ram_4802a59e(auStack_a0);
  FUN_ram_4802a59e(auStack_b0);
LAB_ram_4803cc66:
  FUN_ram_4802a59e(auStack_c0);
LAB_ram_4803cbde:
  FUN_ram_4802a59e(auStack_d0);
LAB_ram_4803cb72:
  FUN_ram_4802a59e(auStack_e0);
  return uVar2;
}


