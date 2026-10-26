/* Firmware entry: 0x48052ffe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48052ffe(undefined4 param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  ushort uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  int *piVar18;
  char *pcVar19;
  byte bVar20;
  ushort uVar21;
  int *piVar22;
  ushort uVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined2 local_1e0 [2];
  undefined2 local_1dc;
  undefined2 uStack_1da;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 auStack_1c4 [16];
  undefined1 auStack_1b4 [16];
  int local_1a4 [18];
  undefined2 auStack_15c [60];
  int local_e4 [44];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = FUN_ram_48025ba6();
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  iVar7 = DAT_ram_4ff69f64;
  cVar16 = DAT_ram_4ff69f60;
  if (DAT_ram_4ff69f60 == '\0') {
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
LAB_ram_48053072:
    cVar16 = '\0';
    uVar15 = 0xffffffff;
  }
  else {
    uStack_1d4 = DAT_ram_4ff69f50;
    uStack_1d0 = DAT_ram_4ff69f54;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    uVar15 = iVar6 - iVar7;
    if (0x5dc < uVar15) goto LAB_ram_48053072;
  }
  iVar6 = FUN_ram_48025ba6();
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  cVar4 = DAT_ram_4ff69dc4;
  iVar7 = DAT_ram_4ff69dc0;
  cVar5 = DAT_ram_4ff69dbc;
  FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
  piVar18 = DAT_ram_4ff5c53c;
  if ((cVar4 == '\0') || (500 < (uint)(iVar6 - iVar7))) {
    if (DAT_ram_4ff6dd80 == 0) {
      uVar21 = 5;
      uVar1 = 5;
      uVar23 = 5;
      uVar2 = 5;
      pcVar19 = "unavailable";
      cVar5 = '\0';
      bVar20 = 0xff;
      cVar4 = '\0';
      goto LAB_ram_480531a2;
    }
    if (DAT_ram_4ff5c53c != (int *)0x0) {
      bVar20 = 0xff;
      cVar5 = '\0';
      piVar12 = DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49;
      if (piVar12 != DAT_ram_4ff5c53c) goto LAB_ram_480530f2;
    }
    bVar20 = 0xff;
    cVar5 = '\0';
  }
  else {
    bVar20 = cVar5 - 1;
    if (((DAT_ram_4ff6dd80 != 0) && (DAT_ram_4ff5c53c != (int *)0x0)) &&
       (piVar12 = DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49, DAT_ram_4ff5c53c != piVar12)) {
LAB_ram_480530f2:
      do {
        if (*piVar18 == DAT_ram_4ff6dd80) {
          uVar1 = *(ushort *)((int)piVar18 + 0x1e);
          uVar2 = *(ushort *)((int)piVar18 + 0x22);
          uVar21 = *(ushort *)(piVar18 + 7);
          uVar23 = *(ushort *)(piVar18 + 8);
          if ((cVar5 == '\x04') && (DAT_ram_4ff6dd80 != 0)) {
            if (cVar16 != '\0') {
              if (uVar15 < 0x5dd) {
                uVar10 = *(ushort *)(piVar18 + 5);
                if ((ushort)uStack_1d4 < uVar10) {
                  uVar10 = uVar10 - (ushort)uStack_1d4;
                }
                else {
                  uVar10 = (ushort)uStack_1d4 - uVar10;
                }
                if (uVar10 <= uVar21) {
                  uVar10 = *(ushort *)((int)piVar18 + 0x16);
                  if (uStack_1d4._2_2_ < uVar10) {
                    uVar10 = uVar10 - uStack_1d4._2_2_;
                  }
                  else {
                    uVar10 = uStack_1d4._2_2_ - uVar10;
                  }
                  if (uVar10 <= uVar1) {
                    uVar10 = *(ushort *)(piVar18 + 6);
                    if ((ushort)uStack_1d0 < uVar10) {
                      uVar10 = uVar10 - (ushort)uStack_1d0;
                    }
                    else {
                      uVar10 = (ushort)uStack_1d0 - uVar10;
                    }
                    if (uVar10 <= uVar23) {
                      uVar10 = *(ushort *)((int)piVar18 + 0x1a);
                      if (uStack_1d0._2_2_ < uVar10) {
                        uVar10 = uVar10 - uStack_1d0._2_2_;
                      }
                      else {
                        uVar10 = uStack_1d0._2_2_ - uVar10;
                      }
                      if (uVar10 <= uVar2) goto LAB_ram_48053da4;
                    }
                  }
                }
                pcVar19 = "changed";
                cVar4 = cVar16;
                goto LAB_ram_480531a2;
              }
LAB_ram_48053da4:
              if (bVar20 < 4) goto LAB_ram_48053c82;
            }
          }
          else if ((bVar20 < 4) && (cVar16 != '\0')) {
LAB_ram_48053c82:
            pcVar19 = "bound";
            cVar4 = '\0';
            goto LAB_ram_480531a2;
          }
          pcVar19 = "unavailable";
          cVar4 = '\0';
          goto LAB_ram_480531a2;
        }
        piVar18 = piVar18 + 0x49;
      } while (piVar12 != piVar18);
    }
    if ((bVar20 < 4) && (cVar16 != '\0')) {
      uVar21 = 5;
      uVar1 = 5;
      uVar23 = 5;
      uVar2 = 5;
      pcVar19 = "bound";
      cVar4 = '\0';
      goto LAB_ram_480531a2;
    }
  }
  uVar21 = 5;
  uVar23 = 5;
  uVar1 = 5;
  uVar2 = 5;
  pcVar19 = "unavailable";
  cVar4 = '\0';
LAB_ram_480531a2:
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  piVar12 = &DAT_ram_4ff61958;
  piVar18 = local_e4;
  do {
    iVar7 = piVar12[1];
    iVar6 = piVar12[2];
    iVar11 = piVar12[3];
    *piVar18 = *piVar12;
    piVar18[1] = iVar7;
    piVar18[2] = iVar6;
    piVar18[3] = iVar11;
    piVar12 = piVar12 + 4;
    piVar18 = piVar18 + 4;
  } while (piVar12 != (int *)&DAT_ram_4ff619f8);
  *piVar18 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
  piVar12 = &DAT_ram_4ff6934c;
  piVar18 = local_1a4;
  do {
    iVar7 = piVar12[1];
    iVar14 = piVar12[2];
    iVar13 = piVar12[3];
    iVar6 = piVar12[4];
    iVar11 = piVar12[5];
    *piVar18 = *piVar12;
    piVar18[1] = iVar7;
    piVar18[2] = iVar14;
    piVar18[3] = iVar13;
    piVar18[4] = iVar6;
    piVar18[5] = iVar11;
    piVar12 = piVar12 + 6;
    piVar18 = piVar18 + 6;
  } while (piVar12 != &DAT_ram_4ff69394);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
  uVar8 = FUN_ram_48025ba6();
  FUN_ram_48052b10(auStack_15c,&DAT_ram_4ff69640,uVar8);
  local_1e0[0] = auStack_15c[0];
  uVar25 = FUN_ram_4803165c();
  uStack_1d8 = (undefined2)((ulonglong)uVar25 >> 0x20);
  local_1dc = (undefined2)uVar25;
  uStack_1d6 = (undefined2)((ulonglong)uVar25 >> 0x30);
  uStack_1da = (undefined2)((ulonglong)uVar25 >> 0x10);
  FUN_ram_4802a8a8(param_1,&DAT_ram_481c4164);
  FUN_ram_4802f022(param_1,"vehicleParked");
  if (cVar5 == '\x01') {
    pcVar9 = "true";
  }
  else {
    pcVar9 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar9);
  FUN_ram_4802f022(param_1,"gearValid");
  pcVar9 = "true";
  if (3 < bVar20) {
    pcVar9 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar9);
  FUN_ram_4802f022(param_1,&DAT_ram_481c4274);
  FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
  iVar7 = DAT_ram_4ff6dd80;
  FUN_ram_4802f022(param_1,"activeDriverId");
  FUN_ram_4802aa44(auStack_15c,iVar7,10);
  FUN_ram_4802ae48(param_1,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  uVar8 = DAT_ram_4ff6dd7c;
  FUN_ram_4802f022(param_1,"lastDriverId");
  FUN_ram_4802aa44(auStack_15c,uVar8,10);
  FUN_ram_4802ae48(param_1,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  cVar5 = DAT_ram_4ff47e78;
  FUN_ram_4802f022(param_1,"autoRecognitionEnabled");
  pcVar9 = "true";
  if (cVar5 == '\0') {
    pcVar9 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar9);
  if (DAT_ram_4ff6dd79 == 2) {
    pcVar9 = "auto_matched";
  }
  else if (DAT_ram_4ff6dd79 < 3) {
    if (DAT_ram_4ff6dd79 == 0) {
      pcVar9 = "no_profile";
    }
    else {
      pcVar9 = "sticky_last";
    }
  }
  else if (DAT_ram_4ff6dd79 == 3) {
    pcVar9 = "manual";
  }
  else if (DAT_ram_4ff6dd79 == 5) {
    pcVar9 = "ambiguous";
  }
  else {
    pcVar9 = "unknown";
  }
  FUN_ram_4802a8a8(auStack_15c,pcVar9);
  FUN_ram_4802f236(param_1,"recognitionState",auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802a8a8(auStack_15c,pcVar19);
  FUN_ram_4802f236(param_1,"bindingState",auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802a8a8(auStack_1b4,&DAT_ram_481c4164);
  FUN_ram_4802f022(auStack_1b4,"valid");
  pcVar19 = "true";
  if (cVar16 == '\0') {
    pcVar19 = "false";
  }
  FUN_ram_4802af2c(auStack_1b4,pcVar19);
  uVar17 = uStack_1d4 & 0xffff;
  FUN_ram_4802f022(auStack_1b4,"track");
  FUN_ram_4802a970(auStack_15c,uVar17,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  uVar3 = uStack_1d4._2_2_;
  FUN_ram_4802f022(auStack_1b4,"backrest");
  FUN_ram_4802a970(auStack_15c,uVar3,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  uVar17 = uStack_1d0 & 0xffff;
  FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c61e0);
  FUN_ram_4802a970(auStack_15c,uVar17,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  uVar3 = uStack_1d0._2_2_;
  FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c61e8);
  FUN_ram_4802a970(auStack_15c,uVar3,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c495c);
  FUN_ram_4802aa44(auStack_15c,uVar15,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802af5a(auStack_1b4,0x7d);
  FUN_ram_4802f022(param_1,"seatPosition");
  FUN_ram_4802ae48(param_1,auStack_1b4);
  FUN_ram_4802a59e(auStack_1b4);
  FUN_ram_4802a8a8(auStack_1b4,&DAT_ram_481c4164);
  FUN_ram_4802f022(auStack_1b4,"track");
  FUN_ram_4802a970(auStack_15c,uVar21,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802f022(auStack_1b4,"backrest");
  FUN_ram_4802a970(auStack_15c,uVar1,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c61e0);
  FUN_ram_4802a970(auStack_15c,uVar23,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c61e8);
  FUN_ram_4802a970(auStack_15c,uVar2,10);
  FUN_ram_4802ae48(auStack_1b4,auStack_15c);
  FUN_ram_4802a59e(auStack_15c);
  FUN_ram_4802af5a(auStack_1b4,0x7d);
  FUN_ram_4802f022(param_1,"tolerances");
  FUN_ram_4802ae48(param_1,auStack_1b4);
  FUN_ram_4802a59e(auStack_1b4);
  iVar7 = DAT_ram_4ff5c540;
  FUN_ram_4802f022(param_1,"drivers");
  FUN_ram_4802af5a(param_1,0x5b);
  if (iVar7 == 0) {
LAB_ram_48053cc4:
    FUN_ram_4802af5a(param_1,0x5d);
    FUN_ram_4802af5a(param_1,0x7d);
    return param_1;
  }
  iVar11 = 0;
  iVar6 = 0;
  do {
    FUN_ram_4802a8a8(auStack_1c4,&DAT_ram_481c4164);
    piVar18 = (int *)((int)DAT_ram_4ff5c53c + iVar6);
    iVar13 = *piVar18;
    FUN_ram_4802f022(auStack_1c4,"id");
    FUN_ram_4802aa44(auStack_15c,iVar13,10);
    FUN_ram_4802ae48(auStack_1c4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    FUN_ram_4802f236(auStack_1c4,"name",piVar18 + 1);
    FUN_ram_4802a8a8(auStack_1b4,&DAT_ram_481c4164);
    iVar13 = piVar18[5];
    FUN_ram_4802f022(auStack_1b4,"track");
    FUN_ram_4802a970(auStack_15c,(short)iVar13,10);
    FUN_ram_4802ae48(auStack_1b4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    uVar3 = *(undefined2 *)((int)piVar18 + 0x16);
    FUN_ram_4802f022(auStack_1b4,"backrest");
    FUN_ram_4802a970(auStack_15c,uVar3,10);
    FUN_ram_4802ae48(auStack_1b4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    iVar13 = piVar18[6];
    FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c61e0);
    FUN_ram_4802a970(auStack_15c,(short)iVar13,10);
    FUN_ram_4802ae48(auStack_1b4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    uVar3 = *(undefined2 *)((int)piVar18 + 0x1a);
    FUN_ram_4802f022(auStack_1b4,&DAT_ram_481c61e8);
    FUN_ram_4802a970(auStack_15c,uVar3,10);
    FUN_ram_4802ae48(auStack_1b4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    FUN_ram_4802af5a(auStack_1b4,0x7d);
    FUN_ram_4802f022(auStack_1c4,&DAT_ram_481c6214);
    FUN_ram_4802ae48(auStack_1c4,auStack_1b4);
    FUN_ram_4802a59e(auStack_1b4);
    iVar13 = piVar18[9];
    FUN_ram_4802f022(auStack_1c4,"lastUseSequence");
    FUN_ram_4802aa44(auStack_15c,iVar13,10);
    FUN_ram_4802ae48(auStack_1c4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    if (*piVar18 == DAT_ram_4ff6dd80) {
      FUN_ram_4802f022(auStack_1c4,"bindingDirty");
      if (cVar4 == '\0') goto LAB_ram_48053b88;
      pcVar19 = "true";
    }
    else {
      FUN_ram_4802f022(auStack_1c4,"bindingDirty");
LAB_ram_48053b88:
      pcVar19 = "false";
    }
    FUN_ram_4802af2c(auStack_1c4,pcVar19);
    iVar13 = DAT_ram_4ff6dd80;
    iVar14 = *piVar18;
    FUN_ram_4802f022(auStack_1c4,"active");
    pcVar19 = "false";
    if (iVar14 == iVar13) {
      pcVar19 = "true";
    }
    FUN_ram_4802af2c(auStack_1c4,pcVar19);
    if ((*piVar18 == DAT_ram_4ff6dd80) && (DAT_ram_4ff47e78 == '\0')) {
      FUN_ram_4802f022(auStack_1c4,"manual");
      pcVar19 = "true";
    }
    else {
      FUN_ram_4802f022(auStack_1c4,"manual");
      pcVar19 = "false";
    }
    FUN_ram_4802af2c(auStack_1c4,pcVar19);
    iVar13 = DAT_ram_4ff6dd80;
    iVar14 = *piVar18;
    FUN_ram_4802a8a8(auStack_15c,&DAT_ram_481c4164);
    if (iVar14 == iVar13) {
      piVar22 = (int *)local_1e0;
      piVar24 = local_1a4;
      piVar12 = local_e4;
      pcVar19 = (char *)&local_1dc;
    }
    else {
      piVar12 = piVar18 + 0xb;
      piVar24 = piVar18 + 0x34;
      piVar22 = piVar18 + 0x46;
      pcVar19 = (char *)((int)piVar18 + 0x11a);
    }
    iVar13 = *piVar12;
    FUN_ram_4802f022(auStack_15c,"fsdEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x2b);
    FUN_ram_4802f022(auStack_15c,"enhancedAutopilotEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 2);
    FUN_ram_4802f022(auStack_15c,"fsdAutoStartEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = piVar12[0x25];
    FUN_ram_4802f022(auStack_15c,"fsdWarningActivationEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x97);
    FUN_ram_4802f022(auStack_15c,"fsdSideCollisionActivationEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = piVar12[0x26];
    FUN_ram_4802f022(auStack_15c,"fsdSteadyModeEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x96);
    FUN_ram_4802f022(auStack_15c,"fsdDdawEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0xe);
    FUN_ram_4802f022(auStack_15c,"autoSpeedOffsetEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x27);
    FUN_ram_4802f022(auStack_15c,"dndEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = piVar12[0xb];
    FUN_ram_4802f022(auStack_15c,"cabinCameraDisableEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x2a);
    FUN_ram_4802f022(auStack_15c,"isaChimeSuppressEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = piVar12[0x1c];
    FUN_ram_4802f022(auStack_15c,"dndScrollEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = *piVar24;
    FUN_ram_4802f022(auStack_15c,"dndTorqueEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x71);
    FUN_ram_4802f022(auStack_15c,"gearAutomationEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x73);
    FUN_ram_4802f022(auStack_15c,"gearBrakeToggleEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = piVar12[0x1d];
    FUN_ram_4802f022(auStack_15c,"gearParkSteeringEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x75);
    FUN_ram_4802f022(auStack_15c,"bleObstacleFeatureEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x76);
    FUN_ram_4802f022(auStack_15c,"gearScrollEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x6e);
    FUN_ram_4802f022(auStack_15c,"seatMemoryEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x65);
    FUN_ram_4802f022(auStack_15c,"fsdForceHighPhysicalEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x69);
    FUN_ram_4802f022(auStack_15c,"longPressHighBeamStrobeEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x8a);
    FUN_ram_4802f022(auStack_15c,"fsdParkStartEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *(char *)((int)piVar12 + 0x8f);
    FUN_ram_4802f022(auStack_15c,"v13SpaceToSpaceEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    iVar13 = *piVar22;
    FUN_ram_4802f022(auStack_15c,"batteryPreheatEnabled");
    pcVar9 = "false";
    if ((char)iVar13 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = *pcVar19;
    FUN_ram_4802f022(auStack_15c,"rearFogStrobeEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = pcVar19[1];
    FUN_ram_4802f022(auStack_15c,"reverseWarningEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = pcVar19[2];
    FUN_ram_4802f022(auStack_15c,"rearFogPilotEnabled");
    pcVar9 = "false";
    if (cVar16 != '\0') {
      pcVar9 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar9);
    cVar16 = pcVar19[3];
    FUN_ram_4802f022(auStack_15c,"reverseRearFogSteadyEnabled");
    pcVar19 = "false";
    if (cVar16 != '\0') {
      pcVar19 = "true";
    }
    FUN_ram_4802af2c(auStack_15c,pcVar19);
    FUN_ram_4802af5a(auStack_15c,0x7d);
    FUN_ram_4802f022(auStack_1c4,"features");
    FUN_ram_4802ae48(auStack_1c4,auStack_15c);
    FUN_ram_4802a59e(auStack_15c);
    FUN_ram_4802af5a(auStack_1c4,0x7d);
    iVar11 = iVar11 + 1;
    FUN_ram_4802ae48(param_1,auStack_1c4);
    FUN_ram_4802a59e(auStack_1c4);
    iVar6 = iVar6 + 0x124;
    if (iVar7 == iVar11) goto LAB_ram_48053cc4;
    FUN_ram_4802af5a(param_1,0x2c);
  } while( true );
}


