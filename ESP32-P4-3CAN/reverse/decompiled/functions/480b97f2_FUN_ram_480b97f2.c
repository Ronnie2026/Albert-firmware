/* Firmware entry: 0x480b97f2 */

void FUN_ram_480b97f2(int *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined4 *puVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  bool bVar22;
  bool bVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808c2dc(param_2,"runtimeReady",*(undefined1 *)(*param_1 + 4));
  FUN_ram_4808c2dc(param_2,"canActive",*(undefined1 *)(*param_1 + 5));
  FUN_ram_480b2068(param_2,"canRtAgeMs",*(undefined4 *)(*param_1 + 0x14));
  FUN_ram_480b2068(param_2,"fsdP0AgeMs",*(undefined4 *)(*param_1 + 0x18));
  FUN_ram_4808c2dc(param_2,"temperatureValid",*(undefined1 *)(*param_1 + 6));
  iVar13 = FUN_ram_4808c696(param_2,"temperatureCx10");
  if (iVar13 != 0) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uVar16 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481cb8cc);
    iVar13 = FUN_ram_4808c90a(param_2,&uStack_60,uVar16);
    if (iVar13 == 0) {
      *(undefined1 *)(param_2 + 10) = 0;
    }
  }
  FUN_ram_480b2068(param_2,"internalTotal",*(undefined4 *)(*param_1 + 0xc));
  FUN_ram_480b2068(param_2,"internalFree",*(undefined4 *)(*param_1 + 0x10));
  FUN_ram_4808c2dc(param_2,"p0SettlementFault",*(undefined1 *)(*param_1 + 0x1c));
  FUN_ram_4808c2dc(param_2,"persistenceReady",*(undefined1 *)(*param_1 + 0x1d));
  FUN_ram_480b2068(param_2,"pendingPersistenceMask",*(undefined4 *)(param_1[1] + 0xf8));
  FUN_ram_480b2068(param_2,"persistenceWriteCount",*(undefined4 *)(param_1[1] + 0xfc));
  FUN_ram_480b2068(param_2,"persistenceFailureCount",*(undefined4 *)(param_1[1] + 0x100));
  FUN_ram_480b2068(param_2,"persistenceDeferredCount",*(undefined4 *)(param_1[1] + 0x104));
  iVar13 = FUN_ram_4808c696(param_2,"p0Loss");
  if (iVar13 != 0) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uVar16 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4);
    iVar13 = FUN_ram_4808c90a(param_2,&uStack_60,uVar16);
    if (iVar13 == 0) {
      *(undefined1 *)(param_2 + 10) = 0;
    }
  }
  iVar13 = FUN_ram_4808c696(param_2,"p1Loss");
  if (iVar13 != 0) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4);
    if ((char)param_2[10] != '\0') {
      uVar17 = param_2[2];
      if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
        FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60,uVar15);
        iVar13 = param_2[2];
        param_2[2] = uVar15 + iVar13;
        *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
        goto LAB_ram_480b9976;
      }
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
LAB_ram_480b9976:
  FUN_ram_480b967a(param_2,"p1Latency",*(undefined4 *)(*param_1 + 0x60),
                   *(undefined4 *)(*param_1 + 100));
  FUN_ram_480b967a(param_2,"persistenceFailures",*(undefined4 *)(*param_1 + 0x68),
                   *(undefined4 *)(*param_1 + 0x6c));
  iVar13 = param_1[1];
  FUN_ram_4808c832(param_2,"taskTimes");
  puVar12 = (undefined4 *)(iVar13 + 0xd4);
  if ((((char)param_2[10] == '\0') || (10 < param_2[3] - 1U)) ||
     (iVar13 = (param_2[3] - 1U) + (int)param_2, *(char *)(iVar13 + 0x1c) != '\0')) {
    *(undefined1 *)(param_2 + 10) = 0;
    pcVar14 = "can_rt";
    bVar23 = false;
    goto LAB_ram_480b9a64;
  }
  bVar22 = false;
LAB_ram_480b99e2:
  pcVar14 = "can_rt";
  if (*(char *)(iVar13 + 0x10) == '\0') {
    uVar15 = param_2[2];
    if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
      *(undefined1 *)(*param_2 + uVar15) = 0x2c;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
      if ((char)param_2[10] != '\0') goto LAB_ram_480b9a1e;
    }
  }
  else {
LAB_ram_480b9a1e:
    uVar15 = param_2[2];
    if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
      *(undefined1 *)(*param_2 + uVar15) = 0x7b;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
      iVar13 = param_2[3];
      *(undefined1 *)((int)param_2 + iVar13 + 0xf) = 0;
      *(undefined1 *)((int)param_2 + iVar13 + 0x10) = 1;
      *(undefined1 *)((int)param_2 + iVar13 + 0x1c) = 1;
      param_2[3] = iVar13 + 1;
      goto LAB_ram_480b9a5e;
    }
  }
  *(undefined1 *)(param_2 + 10) = 0;
LAB_ram_480b9a5e:
  bVar23 = false;
  if (bVar22) goto LAB_ram_480b9aa6;
LAB_ram_480b9a64:
  do {
    FUN_ram_4808c96e(param_2,&DAT_ram_481c4938,pcVar14,6);
    if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], iVar13 == 0)) ||
       (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0')) {
LAB_ram_480b9a9c:
      *(undefined1 *)(param_2 + 10) = 0;
      puVar12 = puVar12 + 3;
      if (bVar23) {
LAB_ram_480b9fbc:
        *(undefined1 *)(param_2 + 10) = 0;
LAB_ram_480b9fc0:
        iVar25 = param_1[1];
        iVar13 = *param_1;
        puVar12 = (undefined4 *)(iVar25 + 0xb0);
        puVar24 = (undefined4 *)(iVar25 + 0xec);
        FUN_ram_4808c832(param_2,"buses");
        pcVar14 = (char *)(iVar13 + 0x20);
        puVar21 = &UNK_ram_481f5490;
        break;
      }
    }
    else {
      uVar16 = puVar12[1];
      if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
        uVar15 = param_2[2];
        if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
          *(undefined1 *)(*param_2 + uVar15) = 0x2c;
          iVar13 = param_2[2];
          param_2[2] = iVar13 + 1;
          *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
          if ((char)param_2[10] != '\0') goto LAB_ram_480b9ad2;
        }
        goto LAB_ram_480b9a9c;
      }
LAB_ram_480b9ad2:
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480b9a9c;
      *(undefined1 *)(*param_2 + uVar15) = 0x22;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
      cVar5 = s_lastSeenAtUs_ram_481c4940[4];
      cVar4 = s_lastSeenAtUs_ram_481c4940[3];
      cVar3 = s_lastSeenAtUs_ram_481c4940[2];
      cVar2 = s_lastSeenAtUs_ram_481c4940[1];
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0xd)) goto LAB_ram_480b9a9c;
      pcVar14 = (char *)(*param_2 + uVar15);
      *pcVar14 = s_lastSeenAtUs_ram_481c4940[0];
      pcVar14[1] = cVar2;
      pcVar14[2] = cVar3;
      pcVar14[3] = cVar4;
      pcVar14[4] = cVar5;
      cVar7 = s_lastSeenAtUs_ram_481c4940[0xb];
      cVar6 = s_lastSeenAtUs_ram_481c4940[10];
      cVar5 = s_lastSeenAtUs_ram_481c4940[9];
      cVar4 = s_lastSeenAtUs_ram_481c4940[8];
      cVar3 = s_lastSeenAtUs_ram_481c4940[7];
      cVar2 = s_lastSeenAtUs_ram_481c4940[6];
      pcVar14[5] = s_lastSeenAtUs_ram_481c4940[5];
      pcVar14[6] = cVar2;
      pcVar14[7] = cVar3;
      pcVar14[8] = cVar4;
      pcVar14[9] = cVar5;
      pcVar14[10] = cVar6;
      pcVar14[0xb] = cVar7;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 0xc;
      *(undefined1 *)(iVar13 + 0xc + *param_2) = 0;
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 3)) goto LAB_ram_480b9a9c;
      iVar13 = *param_2;
      *(undefined1 *)(iVar13 + uVar15) = 0x22;
      ((undefined1 *)(iVar13 + uVar15))[1] = 0x3a;
      iVar25 = param_2[2];
      iVar13 = *param_2;
      param_2[2] = iVar25 + 2;
      *(undefined1 *)(iVar25 + 2 + iVar13) = 0;
      *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13,uVar16,0);
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar17 = param_2[2];
      if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480b9a9c;
      FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60,uVar15);
      iVar13 = param_2[2];
      param_2[2] = uVar15 + iVar13;
      *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
      if (((char)param_2[10] == '\0') ||
         ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
      goto LAB_ram_480b9a9c;
      uVar16 = *puVar12;
      if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
        uVar15 = param_2[2];
        if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
          *(undefined1 *)(*param_2 + uVar15) = 0x2c;
          iVar13 = param_2[2];
          param_2[2] = iVar13 + 1;
          *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
          if ((char)param_2[10] != '\0') goto LAB_ram_480b9c78;
        }
        goto LAB_ram_480b9a9c;
      }
LAB_ram_480b9c78:
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480b9a9c;
      *(undefined1 *)(*param_2 + uVar15) = 0x22;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
      cVar2 = s_sampledAtUs_ram_481c4950[2];
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0xc)) goto LAB_ram_480b9a9c;
      pcVar14 = (char *)(*param_2 + uVar15);
      *pcVar14 = s_sampledAtUs_ram_481c4950[0];
      cVar5 = s_sampledAtUs_ram_481c4950[5];
      cVar4 = s_sampledAtUs_ram_481c4950[4];
      cVar3 = s_sampledAtUs_ram_481c4950[3];
      pcVar14[2] = cVar2;
      pcVar14[3] = cVar3;
      pcVar14[4] = cVar4;
      pcVar14[5] = cVar5;
      cVar6 = s_sampledAtUs_ram_481c4950[10];
      cVar5 = s_sampledAtUs_ram_481c4950[9];
      cVar4 = s_sampledAtUs_ram_481c4950[8];
      cVar3 = s_sampledAtUs_ram_481c4950[7];
      cVar2 = s_sampledAtUs_ram_481c4950[6];
      pcVar14[1] = s_sampledAtUs_ram_481c4950[1];
      pcVar14[6] = cVar2;
      pcVar14[7] = cVar3;
      pcVar14[8] = cVar4;
      pcVar14[9] = cVar5;
      pcVar14[10] = cVar6;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 0xb;
      *(undefined1 *)(iVar13 + 0xb + *param_2) = 0;
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 3)) goto LAB_ram_480b9a9c;
      iVar13 = *param_2;
      *(undefined1 *)(iVar13 + uVar15) = 0x22;
      ((undefined1 *)(iVar13 + uVar15))[1] = 0x3a;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 2;
      *(undefined1 *)(iVar13 + 2 + *param_2) = 0;
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar17 = param_2[2];
      if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480b9a9c;
      FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60,uVar15);
      iVar13 = param_2[2];
      param_2[2] = uVar15 + iVar13;
      *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
      if (((char)param_2[10] == '\0') ||
         ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
      goto LAB_ram_480b9a9c;
      uVar16 = puVar12[2];
      if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
        uVar15 = param_2[2];
        if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
          *(undefined1 *)(*param_2 + uVar15) = 0x2c;
          iVar13 = param_2[2];
          param_2[2] = iVar13 + 1;
          *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
          if ((char)param_2[10] != '\0') goto LAB_ram_480b9e16;
        }
        goto LAB_ram_480b9a9c;
      }
LAB_ram_480b9e16:
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480b9a9c;
      *(undefined1 *)(*param_2 + uVar15) = 0x22;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
      uVar10 = DAT_ram_481c4960;
      uVar9 = DAT_ram_481c495f;
      uVar8 = DAT_ram_481c495e;
      uVar1 = DAT_ram_481c495d;
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 6)) goto LAB_ram_480b9a9c;
      puVar20 = (undefined1 *)(*param_2 + uVar15);
      *puVar20 = DAT_ram_481c495c;
      puVar20[1] = uVar1;
      puVar20[2] = uVar8;
      puVar20[3] = uVar9;
      puVar20[4] = uVar10;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 5;
      *(undefined1 *)(iVar13 + 5 + *param_2) = 0;
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 3)) goto LAB_ram_480b9a9c;
      iVar13 = *param_2;
      *(undefined1 *)(iVar13 + uVar15) = 0x22;
      ((undefined1 *)(iVar13 + uVar15))[1] = 0x3a;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 2;
      *(undefined1 *)(iVar13 + 2 + *param_2) = 0;
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      uVar17 = param_2[2];
      if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480b9a9c;
      FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60,uVar15);
      iVar13 = param_2[2];
      param_2[2] = uVar15 + iVar13;
      *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
      if ((char)param_2[10] == '\0') goto LAB_ram_480b9a9c;
      bVar22 = true;
      if (((uint)param_2[3] < 2) || (*(char *)((int)param_2 + param_2[3] + 0x1bU) == '\0'))
      goto LAB_ram_480b9a9c;
      uVar15 = param_2[2];
      if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480b9a9c;
      *(undefined1 *)(*param_2 + uVar15) = 0x7d;
      iVar13 = param_2[2];
      param_2[2] = iVar13 + 1;
      *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
      iVar13 = param_2[3];
      param_2[3] = iVar13 - 1U;
      if (bVar23) {
        if ((((char)param_2[10] == '\0') || (iVar13 - 1U < 2)) ||
           (*(char *)((int)param_2 + iVar13 + 0x1a) != '\0')) goto LAB_ram_480b9fbc;
        uVar15 = param_2[2];
        if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480b9fbc;
        *(undefined1 *)(*param_2 + uVar15) = 0x5d;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        param_2[3] = param_2[3] + -1;
        goto LAB_ram_480b9fc0;
      }
      puVar12 = puVar12 + 3;
      if ((char)param_2[10] != '\0') {
        if ((iVar13 - 2U < 0xb) &&
           (iVar13 = (iVar13 - 2U) + (int)param_2, *(char *)(iVar13 + 0x1c) == '\0'))
        goto LAB_ram_480b99e2;
        *(undefined1 *)(param_2 + 10) = 0;
      }
    }
LAB_ram_480b9aa6:
    pcVar14 = "fsd_p0";
    bVar23 = true;
  } while( true );
LAB_ram_480b9ffa:
  if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], 10 < iVar13 - 1U)) ||
     (*(char *)((int)param_2 + iVar13 + 0x1b) != '\0')) {
LAB_ram_480ba026:
    *(undefined1 *)(param_2 + 10) = 0;
  }
  else {
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480ba074;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba074:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x7b;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    iVar19 = param_2[3];
    iVar13 = param_2[10];
    *(undefined1 *)((int)param_2 + iVar19 + 0xf) = 0;
    *(undefined1 *)((int)param_2 + iVar19 + 0x10) = 1;
    *(undefined1 *)((int)param_2 + iVar19 + 0x1c) = 1;
    param_2[3] = iVar19 + 1;
    if (((char)iVar13 == '\0') || (iVar19 + 1 == 0)) goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    uVar1 = *puVar21;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 4)) goto LAB_ram_480ba026;
    puVar20 = (undefined1 *)(*param_2 + uVar15);
    *puVar20 = 0x62;
    puVar20[1] = 0x75;
    puVar20[2] = 0x73;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 3;
    *(undefined1 *)(iVar13 + 3 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 != 0) {
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar1,0);
      if ((char)param_2[10] != '\0') {
        uVar17 = param_2[2];
        if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
          FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60,uVar15);
          iVar13 = param_2[2];
          param_2[2] = uVar15 + iVar13;
          *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
          goto LAB_ram_480ba28c;
        }
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba28c:
    if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], iVar13 == 0)) ||
       (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0')) goto LAB_ram_480ba026;
    cVar2 = *pcVar14;
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480ba2ce;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba2ce:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar6 = s_completionUnknown_ram_481d1718[0x10];
    cVar5 = s_completionUnknown_ram_481d1718[0xf];
    cVar4 = s_completionUnknown_ram_481d1718[0xe];
    cVar3 = s_completionUnknown_ram_481d1718[0xd];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (uVar17 = 5, param_2[1] - uVar15 < 6)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_completionUnknown_ram_481d1718[0xc];
    pcVar18[2] = cVar4;
    pcVar18[4] = cVar6;
    pcVar18[1] = cVar3;
    pcVar18[3] = cVar5;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 5;
    *(undefined1 *)(iVar13 + 5 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 == 0) goto LAB_ram_480ba026;
    *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
    if (cVar2 == '\0') {
      cVar2 = (char)param_2[10];
      pcVar18 = "false";
    }
    else {
      cVar2 = (char)param_2[10];
      pcVar18 = "true";
      uVar17 = 4;
    }
    if (cVar2 == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 <= uVar17)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar15,pcVar18,uVar17);
    iVar13 = param_2[2];
    param_2[2] = uVar17 + iVar13;
    *(undefined1 *)(*param_2 + uVar17 + iVar13) = 0;
    if (((char)param_2[10] == '\0') ||
       ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
    goto LAB_ram_480ba026;
    cVar2 = pcVar14[1];
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480ba44e;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba44e:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar5 = s_No_buffer_space_available_ram_481e3558[0x13];
    cVar4 = s_No_buffer_space_available_ram_481e3558[0x12];
    cVar3 = s_No_buffer_space_available_ram_481e3558[0x11];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 10)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_No_buffer_space_available_ram_481e3558[0x10];
    pcVar18[1] = cVar3;
    pcVar18[2] = cVar4;
    pcVar18[3] = cVar5;
    cVar6 = s_No_buffer_space_available_ram_481e3558[0x18];
    cVar5 = s_No_buffer_space_available_ram_481e3558[0x17];
    cVar4 = s_No_buffer_space_available_ram_481e3558[0x16];
    cVar3 = s_No_buffer_space_available_ram_481e3558[0x14];
    pcVar18[5] = s_No_buffer_space_available_ram_481e3558[0x15];
    pcVar18[6] = cVar4;
    pcVar18[7] = cVar5;
    pcVar18[4] = cVar3;
    pcVar18[8] = cVar6;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 9;
    *(undefined1 *)(iVar13 + 9 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 == 0) goto LAB_ram_480ba026;
    *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
    if (cVar2 == '\0') {
      cVar2 = (char)param_2[10];
      pcVar18 = "false";
      uVar15 = 5;
    }
    else {
      cVar2 = (char)param_2[10];
      pcVar18 = "true";
      uVar15 = 4;
    }
    if (cVar2 == '\0') goto LAB_ram_480ba026;
    uVar17 = param_2[2];
    if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar17,pcVar18,uVar15);
    iVar13 = param_2[2];
    param_2[2] = uVar15 + iVar13;
    *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
    if (((char)param_2[10] == '\0') ||
       ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
    goto LAB_ram_480ba026;
    cVar2 = pcVar14[2];
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480ba5ee;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba5ee:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar3 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x37];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 8)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x34];
    cVar11 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x3a];
    cVar7 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x39];
    cVar6 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x38];
    cVar5 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x36];
    cVar4 = s_Operating_mode_must_not_be_set_w_ram_481d7a04[0x35];
    pcVar18[3] = cVar3;
    pcVar18[4] = cVar6;
    pcVar18[5] = cVar7;
    pcVar18[1] = cVar4;
    pcVar18[2] = cVar5;
    pcVar18[6] = cVar11;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 7;
    *(undefined1 *)(iVar13 + 7 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 == 0) goto LAB_ram_480ba026;
    *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
    if (cVar2 == '\0') {
      cVar2 = (char)param_2[10];
      pcVar18 = "false";
      uVar15 = 5;
    }
    else {
      cVar2 = (char)param_2[10];
      pcVar18 = "true";
      uVar15 = 4;
    }
    if (cVar2 == '\0') goto LAB_ram_480ba026;
    uVar17 = param_2[2];
    if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar17,pcVar18,uVar15);
    iVar13 = param_2[2];
    param_2[2] = uVar15 + iVar13;
    *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
    if (((char)param_2[10] == '\0') ||
       ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
    goto LAB_ram_480ba026;
    cVar2 = pcVar14[3];
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480ba770;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba770:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar5 = s_can_recovering_ram_481c4c58[8];
    cVar4 = s_can_recovering_ram_481c4c58[7];
    cVar3 = s_can_recovering_ram_481c4c58[6];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0xb)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    pcVar18[1] = s_can_recovering_ram_481c4c58[5];
    pcVar18[2] = cVar3;
    pcVar18[3] = cVar4;
    pcVar18[4] = cVar5;
    cVar7 = s_can_recovering_ram_481c4c58[0xd];
    cVar6 = s_can_recovering_ram_481c4c58[0xc];
    cVar5 = s_can_recovering_ram_481c4c58[0xb];
    cVar4 = s_can_recovering_ram_481c4c58[10];
    cVar3 = s_can_recovering_ram_481c4c58[9];
    *pcVar18 = s_can_recovering_ram_481c4c58[4];
    pcVar18[6] = cVar4;
    pcVar18[7] = cVar5;
    pcVar18[8] = cVar6;
    pcVar18[5] = cVar3;
    pcVar18[9] = cVar7;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 10;
    *(undefined1 *)(iVar13 + 10 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 == 0) goto LAB_ram_480ba026;
    *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
    if (cVar2 == '\0') {
      cVar2 = (char)param_2[10];
      pcVar18 = "false";
      uVar15 = 5;
    }
    else {
      cVar2 = (char)param_2[10];
      pcVar18 = "true";
      uVar15 = 4;
    }
    if (cVar2 == '\0') goto LAB_ram_480ba026;
    uVar17 = param_2[2];
    if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar17,pcVar18,uVar15);
    iVar13 = param_2[2];
    param_2[2] = uVar15 + iVar13;
    *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
    if (((char)param_2[10] == '\0') ||
       ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
    goto LAB_ram_480ba026;
    cVar2 = pcVar14[4];
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480ba912;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480ba912:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar7 = s_busOff_ram_481c496c[5];
    cVar6 = s_busOff_ram_481c496c[4];
    cVar5 = s_busOff_ram_481c496c[3];
    cVar4 = s_busOff_ram_481c496c[2];
    cVar3 = s_busOff_ram_481c496c[1];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 7)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_busOff_ram_481c496c[0];
    pcVar18[2] = cVar4;
    pcVar18[3] = cVar5;
    pcVar18[4] = cVar6;
    pcVar18[1] = cVar3;
    pcVar18[5] = cVar7;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 6;
    *(undefined1 *)(iVar13 + 6 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 == 0) goto LAB_ram_480ba026;
    *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
    if (cVar2 == '\0') {
      cVar2 = (char)param_2[10];
      pcVar18 = "false";
      uVar15 = 5;
    }
    else {
      cVar2 = (char)param_2[10];
      pcVar18 = "true";
      uVar15 = 4;
    }
    if (cVar2 == '\0') goto LAB_ram_480ba026;
    uVar17 = param_2[2];
    if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar17,pcVar18,uVar15);
    iVar13 = param_2[2];
    param_2[2] = uVar15 + iVar13;
    *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
    if (((char)param_2[10] == '\0') ||
       ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
    goto LAB_ram_480ba026;
    cVar2 = pcVar14[5];
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480baa9e;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480baa9e:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar4 = s_userDisabled_ram_481c4974[2];
    cVar3 = s_userDisabled_ram_481c4974[1];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0xd)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_userDisabled_ram_481c4974[0];
    pcVar18[1] = cVar3;
    pcVar18[2] = cVar4;
    cVar5 = s_userDisabled_ram_481c4974[6];
    cVar4 = s_userDisabled_ram_481c4974[5];
    cVar3 = s_userDisabled_ram_481c4974[4];
    pcVar18[3] = s_userDisabled_ram_481c4974[3];
    pcVar18[4] = cVar3;
    pcVar18[5] = cVar4;
    pcVar18[6] = cVar5;
    cVar6 = s_userDisabled_ram_481c4974[0xb];
    cVar5 = s_userDisabled_ram_481c4974[10];
    cVar4 = s_userDisabled_ram_481c4974[9];
    cVar3 = s_userDisabled_ram_481c4974[7];
    pcVar18[8] = s_userDisabled_ram_481c4974[8];
    pcVar18[9] = cVar4;
    pcVar18[10] = cVar5;
    pcVar18[7] = cVar3;
    pcVar18[0xb] = cVar6;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 0xc;
    *(undefined1 *)(iVar13 + 0xc + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 == 0) goto LAB_ram_480ba026;
    *(undefined1 *)((int)param_2 + param_2[3] + 0xf) = 0;
    if (cVar2 == '\0') {
      cVar2 = (char)param_2[10];
      pcVar18 = "false";
      uVar15 = 5;
    }
    else {
      cVar2 = (char)param_2[10];
      pcVar18 = "true";
      uVar15 = 4;
    }
    if (cVar2 == '\0') goto LAB_ram_480ba026;
    uVar17 = param_2[2];
    if (((uint)param_2[1] < uVar17) || (param_2[1] - uVar17 <= uVar15)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar17,pcVar18,uVar15);
    iVar13 = param_2[2];
    param_2[2] = uVar15 + iVar13;
    *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
    if (((char)param_2[10] == '\0') ||
       ((iVar13 = param_2[3], iVar13 == 0 || (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0'))))
    goto LAB_ram_480ba026;
    uVar16 = *(undefined4 *)(pcVar14 + 8);
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480bac58;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480bac58:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar3 = s_rawAgeMs_ram_481c4984[2];
    cVar2 = s_rawAgeMs_ram_481c4984[1];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 9)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_rawAgeMs_ram_481c4984[0];
    pcVar18[1] = cVar2;
    pcVar18[2] = cVar3;
    cVar5 = s_rawAgeMs_ram_481c4984[7];
    cVar4 = s_rawAgeMs_ram_481c4984[6];
    cVar3 = s_rawAgeMs_ram_481c4984[5];
    cVar2 = s_rawAgeMs_ram_481c4984[3];
    pcVar18[4] = s_rawAgeMs_ram_481c4984[4];
    pcVar18[5] = cVar3;
    pcVar18[6] = cVar4;
    pcVar18[3] = cVar2;
    pcVar18[7] = cVar5;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 8;
    *(undefined1 *)(iVar13 + 8 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 != 0) {
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] != '\0') {
        uVar17 = param_2[2];
        if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
          FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60);
          iVar13 = param_2[2];
          param_2[2] = uVar15 + iVar13;
          *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
          goto LAB_ram_480badbe;
        }
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480badbe:
    if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], iVar13 == 0)) ||
       (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0')) goto LAB_ram_480ba026;
    uVar16 = *(undefined4 *)(pcVar14 + 0xc);
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480badfc;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480badfc:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0x15)) goto LAB_ram_480ba026;
    FUN_ram_4ff45158(*param_2 + uVar15,"activationQueueDepth");
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 0x14;
    *(undefined1 *)(iVar13 + 0x14 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 != 0) {
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] != '\0') {
        uVar17 = param_2[2];
        if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
          FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60);
          iVar13 = param_2[2];
          param_2[2] = uVar15 + iVar13;
          *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
          goto LAB_ram_480baf22;
        }
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480baf22:
    if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], iVar13 == 0)) ||
       (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0')) goto LAB_ram_480ba026;
    uVar16 = *puVar24;
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480baf62;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480baf62:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar2 = s_rxCount_ram_481c49a8[3];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 8)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_rxCount_ram_481c49a8[0];
    cVar7 = s_rxCount_ram_481c49a8[6];
    cVar6 = s_rxCount_ram_481c49a8[5];
    cVar5 = s_rxCount_ram_481c49a8[4];
    cVar4 = s_rxCount_ram_481c49a8[2];
    cVar3 = s_rxCount_ram_481c49a8[1];
    pcVar18[3] = cVar2;
    pcVar18[4] = cVar5;
    pcVar18[5] = cVar6;
    pcVar18[1] = cVar3;
    pcVar18[2] = cVar4;
    pcVar18[6] = cVar7;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 7;
    *(undefined1 *)(iVar13 + 7 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 != 0) {
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] != '\0') {
        uVar17 = param_2[2];
        if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
          FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60);
          iVar13 = param_2[2];
          param_2[2] = uVar15 + iVar13;
          *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
          goto LAB_ram_480bb0b8;
        }
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480bb0b8:
    if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], iVar13 == 0)) ||
       (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0')) goto LAB_ram_480ba026;
    uVar16 = puVar12[1];
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480bb0f8;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480bb0f8:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar4 = s_lastRxAtUs_ram_481c49b0[4];
    cVar3 = s_lastRxAtUs_ram_481c49b0[3];
    cVar2 = s_lastRxAtUs_ram_481c49b0[2];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0xb)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    pcVar18[1] = s_lastRxAtUs_ram_481c49b0[1];
    pcVar18[2] = cVar2;
    pcVar18[3] = cVar3;
    pcVar18[4] = cVar4;
    cVar6 = s_lastRxAtUs_ram_481c49b0[9];
    cVar5 = s_lastRxAtUs_ram_481c49b0[8];
    cVar4 = s_lastRxAtUs_ram_481c49b0[7];
    cVar3 = s_lastRxAtUs_ram_481c49b0[6];
    cVar2 = s_lastRxAtUs_ram_481c49b0[5];
    *pcVar18 = s_lastRxAtUs_ram_481c49b0[0];
    pcVar18[6] = cVar3;
    pcVar18[7] = cVar4;
    pcVar18[8] = cVar5;
    pcVar18[5] = cVar2;
    pcVar18[9] = cVar6;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 10;
    *(undefined1 *)(iVar13 + 10 + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 != 0) {
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] != '\0') {
        uVar17 = param_2[2];
        if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
          FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60);
          iVar13 = param_2[2];
          param_2[2] = uVar15 + iVar13;
          *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
          goto LAB_ram_480bb266;
        }
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480bb266:
    if ((((char)param_2[10] == '\0') || (iVar13 = param_2[3], iVar13 == 0)) ||
       (*(char *)((int)param_2 + iVar13 + 0x1b) == '\0')) goto LAB_ram_480ba026;
    uVar16 = *puVar12;
    if (*(char *)((int)param_2 + iVar13 + 0xf) == '\0') {
      uVar15 = param_2[2];
      if ((uVar15 <= (uint)param_2[1]) && (1 < param_2[1] - uVar15)) {
        *(undefined1 *)(*param_2 + uVar15) = 0x2c;
        iVar13 = param_2[2];
        param_2[2] = iVar13 + 1;
        *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
        if ((char)param_2[10] != '\0') goto LAB_ram_480bb2a6;
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480bb2a6:
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x22;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    cVar2 = s_sampledAtUs_ram_481c4950[2];
    if ((char)param_2[10] == '\0') goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 0xc)) goto LAB_ram_480ba026;
    pcVar18 = (char *)(*param_2 + uVar15);
    *pcVar18 = s_sampledAtUs_ram_481c4950[0];
    cVar5 = s_sampledAtUs_ram_481c4950[5];
    cVar4 = s_sampledAtUs_ram_481c4950[4];
    cVar3 = s_sampledAtUs_ram_481c4950[3];
    pcVar18[2] = cVar2;
    pcVar18[3] = cVar3;
    pcVar18[4] = cVar4;
    pcVar18[5] = cVar5;
    cVar6 = s_sampledAtUs_ram_481c4950[10];
    cVar5 = s_sampledAtUs_ram_481c4950[9];
    cVar4 = s_sampledAtUs_ram_481c4950[8];
    cVar3 = s_sampledAtUs_ram_481c4950[6];
    cVar2 = s_sampledAtUs_ram_481c4950[1];
    pcVar18[7] = s_sampledAtUs_ram_481c4950[7];
    pcVar18[8] = cVar4;
    pcVar18[9] = cVar5;
    pcVar18[1] = cVar2;
    pcVar18[6] = cVar3;
    pcVar18[10] = cVar6;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 0xb;
    *(undefined1 *)(iVar13 + 0xb + *param_2) = 0;
    iVar13 = FUN_ram_4808c90a(param_2,&DAT_ram_481c67c4,2);
    if (iVar13 != 0) {
      iVar13 = param_2[3];
      *(undefined1 *)(iVar13 + (int)param_2 + 0xf) = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uVar15 = FUN_ram_4819ad74(&uStack_60,0x20,&DAT_ram_481c48f4,iVar13 + (int)param_2,uVar16,0);
      if ((char)param_2[10] != '\0') {
        uVar17 = param_2[2];
        if ((uVar17 <= (uint)param_2[1]) && (uVar15 < param_2[1] - uVar17)) {
          FUN_ram_4ff45158(*param_2 + uVar17,&uStack_60,uVar15);
          iVar13 = param_2[2];
          param_2[2] = uVar15 + iVar13;
          *(undefined1 *)(*param_2 + uVar15 + iVar13) = 0;
          goto LAB_ram_480bb41a;
        }
      }
      goto LAB_ram_480ba026;
    }
LAB_ram_480bb41a:
    if ((((char)param_2[10] == '\0') || ((uint)param_2[3] < 2)) ||
       (*(char *)((int)param_2 + param_2[3] + 0x1bU) == '\0')) goto LAB_ram_480ba026;
    uVar15 = param_2[2];
    if (((uint)param_2[1] < uVar15) || (param_2[1] - uVar15 < 2)) goto LAB_ram_480ba026;
    *(undefined1 *)(*param_2 + uVar15) = 0x7d;
    iVar13 = param_2[2];
    param_2[2] = iVar13 + 1;
    *(undefined1 *)(iVar13 + 1 + *param_2) = 0;
    param_2[3] = param_2[3] + -1;
  }
  puVar12 = puVar12 + 3;
  puVar24 = puVar24 + 1;
  pcVar14 = pcVar14 + 0x10;
  puVar21 = puVar21 + 1;
  if (puVar12 == (undefined4 *)(iVar25 + 0xd4)) {
    FUN_ram_4808c290(param_2);
    return;
  }
  goto LAB_ram_480b9ffa;
}


