/* Firmware entry: 0x480d4d80 */

void FUN_ram_480d4d80(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1U)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     ((iVar1 = FUN_ram_4808c696(param_1,"torque"), iVar1 == 0 || ((char)param_1[10] == '\0')))) {
LAB_ram_480d4da8:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar3 = param_1[2];
    if (((uint)param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480d4da8;
    *(undefined1 *)(*param_1 + uVar3) = 0x7b;
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    *(undefined1 *)(iVar1 + 1 + *param_1) = 0;
    iVar1 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar1 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar1 + 0x1c) = 1;
    param_1[3] = iVar1 + 1;
  }
  FUN_ram_4808c2dc(param_1,"enabled",*param_2);
  FUN_ram_4808c2dc(param_1,"maintenanceEnabled",param_2[1]);
  iVar1 = FUN_ram_4808c696(param_1,"preventiveNegativeMinCentiNm");
  if (iVar1 == 0) {
LAB_ram_480d4de6:
    iVar1 = FUN_ram_4808c696(param_1,"preventiveNegativeMaxCentiNm");
    if (iVar1 == 0) goto LAB_ram_480d4dfc;
LAB_ram_480d5058:
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4dfc;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar1 = FUN_ram_4808c696(param_1,"preventivePositiveMinCentiNm");
    if (iVar1 != 0) goto LAB_ram_480d50b0;
LAB_ram_480d4e12:
    iVar1 = FUN_ram_4808c696(param_1,"preventivePositiveMaxCentiNm");
    if (iVar1 == 0) goto LAB_ram_480d4e28;
LAB_ram_480d5108:
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4e28;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar1 = FUN_ram_4808c696(param_1,"correctiveNegativeMinCentiNm");
    if (iVar1 != 0) goto LAB_ram_480d5160;
LAB_ram_480d4e3e:
    iVar1 = FUN_ram_4808c696(param_1,"correctiveNegativeMaxCentiNm");
    if (iVar1 == 0) goto LAB_ram_480d4e54;
LAB_ram_480d51b8:
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4e54;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar1 = FUN_ram_4808c696(param_1,"correctivePositiveMinCentiNm");
  }
  else {
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4de6;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar1 = FUN_ram_4808c696(param_1,"preventiveNegativeMaxCentiNm");
    if (iVar1 != 0) goto LAB_ram_480d5058;
LAB_ram_480d4dfc:
    iVar1 = FUN_ram_4808c696(param_1,"preventivePositiveMinCentiNm");
    if (iVar1 == 0) goto LAB_ram_480d4e12;
LAB_ram_480d50b0:
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4e12;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar1 = FUN_ram_4808c696(param_1,"preventivePositiveMaxCentiNm");
    if (iVar1 != 0) goto LAB_ram_480d5108;
LAB_ram_480d4e28:
    iVar1 = FUN_ram_4808c696(param_1,"correctiveNegativeMinCentiNm");
    if (iVar1 == 0) goto LAB_ram_480d4e3e;
LAB_ram_480d5160:
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4e3e;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar1 = FUN_ram_4808c696(param_1,"correctiveNegativeMaxCentiNm");
    if (iVar1 != 0) goto LAB_ram_480d51b8;
LAB_ram_480d4e54:
    iVar1 = FUN_ram_4808c696(param_1,"correctivePositiveMinCentiNm");
  }
  if (iVar1 != 0) {
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar3 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar4)) {
        FUN_ram_4ff45158(*param_1 + uVar4,&local_30,uVar3);
        iVar1 = param_1[2];
        param_1[2] = uVar3 + iVar1;
        *(undefined1 *)(*param_1 + uVar3 + iVar1) = 0;
        goto LAB_ram_480d4e6a;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480d4e6a:
  iVar1 = FUN_ram_4808c696(param_1,"correctivePositiveMaxCentiNm");
  if (iVar1 != 0) {
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar2 = FUN_ram_4819ad74(&local_30,0x20,&DAT_ram_481cb8cc);
    iVar1 = FUN_ram_4808c90a(param_1,&local_30,uVar2);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  FUN_ram_480b4e36(param_1,"correctivePositiveFrames",*(undefined2 *)(param_2 + 0x12));
  FUN_ram_480b4e36(param_1,"correctiveNegativeFrames",*(undefined2 *)(param_2 + 0x14));
  FUN_ram_480b2068(param_1,"activityMinMs",*(undefined4 *)(param_2 + 0x18));
  FUN_ram_480b2068(param_1,"activityMaxMs",*(undefined4 *)(param_2 + 0x1c));
  FUN_ram_480b2068(param_1,"restMinMs",*(undefined4 *)(param_2 + 0x20));
  FUN_ram_480b2068(param_1,"restMaxMs",*(undefined4 *)(param_2 + 0x24));
  FUN_ram_480b2068(param_1,"h2PersistenceMs",*(undefined4 *)(param_2 + 0x28));
  FUN_ram_480b2068(param_1,"preCorrectionPauseMs",*(undefined4 *)(param_2 + 0x2c));
  FUN_ram_480b2068(param_1,"correctiveSendMinMs",*(undefined4 *)(param_2 + 0x30));
  FUN_ram_480b2068(param_1,"correctiveSendMaxMs",*(undefined4 *)(param_2 + 0x34));
  FUN_ram_480b2068(param_1,"correctivePauseMinMs",*(undefined4 *)(param_2 + 0x38));
  FUN_ram_480b2068(param_1,"correctivePauseMaxMs",*(undefined4 *)(param_2 + 0x3c));
  FUN_ram_480b2068(param_1,"stabilityVerifyMs",*(undefined4 *)(param_2 + 0x40));
  FUN_ram_480b2068(param_1,"dasFreshTimeoutMs",*(undefined4 *)(param_2 + 0x44));
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar3 = param_1[2];
    if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x7d;
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      *(undefined1 *)(iVar1 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


