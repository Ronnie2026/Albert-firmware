/* Firmware entry: 0x48111134 */

void FUN_ram_48111134(uint *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808c1ae();
  FUN_ram_480b2068(param_1,"id",*param_2);
  sVar3 = strlen((char *)(param_2 + 1));
  FUN_ram_4808c96e(param_1,"name",param_2 + 1,sVar3);
  FUN_ram_480b2068(param_1,"lastUseSequence",param_2[0xc]);
  FUN_ram_4808c2dc(param_1,"manual",*(undefined1 *)((int)param_2 + 0x2e));
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     (iVar4 = FUN_ram_4808c696(param_1,&DAT_ram_481c6214), iVar4 == 0)) {
LAB_ram_481111b8:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    local_40 = CONCAT31(local_40._1_3_,0x7b);
    iVar4 = FUN_ram_4808c90a(param_1,&local_40,1);
    if (iVar4 == 0) goto LAB_ram_481111b8;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 1;
    param_1[3] = uVar5 + 1;
  }
  FUN_ram_480b4e36(param_1,"track",*(undefined2 *)((int)param_2 + 0x1e));
  FUN_ram_480b4e36(param_1,"backrest",*(undefined2 *)(param_2 + 8));
  FUN_ram_480b4e36(param_1,&DAT_ram_481c61e0,*(undefined2 *)((int)param_2 + 0x22));
  FUN_ram_480b4e36(param_1,&DAT_ram_481c61e8,*(undefined2 *)(param_2 + 9));
  if ((((char)param_1[10] == '\0') || (param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) {
LAB_ram_481112b4:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_481112b4;
    *(undefined1 *)(*param_1 + uVar5) = 0x7d;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    param_1[3] = uVar5 - 1;
    if (((char)param_1[10] == '\0') ||
       ((((10 < uVar5 - 2 || (*(char *)((int)param_1 + uVar5 + 0x1a) == '\0')) ||
         (iVar4 = FUN_ram_4808c696(param_1,"tolerances"), iVar4 == 0)) ||
        ((char)param_1[10] == '\0')))) goto LAB_ram_481112b4;
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_481112b4;
    *(undefined1 *)(*param_1 + uVar5) = 0x7b;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 1;
    param_1[3] = uVar5 + 1;
  }
  FUN_ram_480b4e36(param_1,"track",*(undefined2 *)((int)param_2 + 0x26));
  FUN_ram_480b4e36(param_1,"backrest",*(undefined2 *)(param_2 + 10));
  FUN_ram_480b4e36(param_1,&DAT_ram_481c61e0,*(undefined2 *)((int)param_2 + 0x2a));
  FUN_ram_480b4e36(param_1,&DAT_ram_481c61e8,*(undefined2 *)(param_2 + 0xb));
  if ((((char)param_1[10] == '\0') || (param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) {
LAB_ram_48111336:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_48111336;
    *(undefined1 *)(*param_1 + uVar5) = 0x7d;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    param_1[3] = param_1[3] - 1;
  }
  FUN_ram_480c2e50(param_1,param_2 + 0xd);
  FUN_ram_480d4d80(param_1,param_2 + 0x36);
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     ((iVar4 = FUN_ram_4808c696(param_1,"battery"), iVar4 == 0 || ((char)param_1[10] == '\0')))) {
LAB_ram_48111368:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_48111368;
    *(undefined1 *)(*param_1 + uVar5) = 0x7b;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 1;
    param_1[3] = uVar5 + 1;
  }
  FUN_ram_4808c2dc(param_1,"batteryPreheatEnabled",*(undefined1 *)(param_2 + 0x48));
  FUN_ram_480bb6fa(param_1,"batteryPreheatDurationMin",*(undefined1 *)((int)param_2 + 0x121));
  if ((((char)param_1[10] == '\0') || (param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) {
LAB_ram_48111440:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_48111440;
    *(undefined1 *)(*param_1 + uVar5) = 0x7d;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    param_1[3] = uVar5 - 1;
    if ((((char)param_1[10] == '\0') ||
        (((10 < uVar5 - 2 || (*(char *)((int)param_1 + uVar5 + 0x1a) == '\0')) ||
         (iVar4 = FUN_ram_4808c696(param_1,"rearFog"), iVar4 == 0)))) || ((char)param_1[10] == '\0')
       ) goto LAB_ram_48111440;
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_48111440;
    *(undefined1 *)(*param_1 + uVar5) = 0x7b;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 1;
    param_1[3] = uVar5 + 1;
  }
  FUN_ram_4808c2dc(param_1,"enabled",*(undefined1 *)((int)param_2 + 0x122));
  FUN_ram_4808c2dc(param_1,"reverseWarningEnabled",*(undefined1 *)((int)param_2 + 0x123));
  FUN_ram_4808c2dc(param_1,"rearFogPilotEnabled",*(undefined1 *)(param_2 + 0x49));
  FUN_ram_4808c2dc(param_1,"reverseRearFogSteadyEnabled",*(undefined1 *)((int)param_2 + 0x125));
  FUN_ram_480b4e36(param_1,"mildDecelCx100",*(undefined2 *)((int)param_2 + 0x126));
  FUN_ram_480b4e36(param_1,"hardDecelCx100",*(undefined2 *)(param_2 + 0x4a));
  if ((((char)param_1[10] == '\0') || (param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) {
LAB_ram_4811163a:
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_ram_48110710(param_1,(int)param_2 + 0x12a,"ambient");
    if ((char)param_1[10] == '\0') goto LAB_ram_48111512;
LAB_ram_48111658:
    if ((((10 < param_1[3] - 1) || (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
        (iVar4 = FUN_ram_4808c696(param_1,"speedTarget"), iVar4 == 0)) ||
       ((char)param_1[10] == '\0')) goto LAB_ram_48111512;
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_48111512;
    *(undefined1 *)(*param_1 + uVar5) = 0x7b;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 1;
    param_1[3] = uVar5 + 1;
  }
  else {
    uVar5 = param_1[2];
    if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_4811163a;
    *(undefined1 *)(*param_1 + uVar5) = 0x7d;
    uVar5 = param_1[2];
    param_1[2] = uVar5 + 1;
    *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
    param_1[3] = param_1[3] - 1;
    FUN_ram_48110710(param_1,(int)param_2 + 0x12a,"ambient");
    if ((char)param_1[10] != '\0') goto LAB_ram_48111658;
LAB_ram_48111512:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  FUN_ram_4808c2dc(param_1,"customSpeedEnabled",*(undefined1 *)(param_2 + 0x58));
  FUN_ram_4808c2dc(param_1,"modeExplicit",*(undefined1 *)((int)param_2 + 0x161));
  puVar8 = (undefined2 *)((int)param_2 + 0x19e);
  if ((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
     ((*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0' ||
      (iVar4 = FUN_ram_4808c696(param_1,"targets"), iVar4 == 0)))) {
LAB_ram_48111558:
    *(undefined1 *)(param_1 + 10) = 0;
    cVar6 = '\0';
    if (puVar8 == (undefined2 *)((int)param_2 + 0x162)) goto LAB_ram_48111624;
LAB_ram_48111566:
    puVar2 = (undefined2 *)((int)param_2 + 0x162);
    do {
      uVar1 = *puVar2;
      if (((cVar6 == '\0') || (param_1[3] == 0)) ||
         (iVar4 = (param_1[3] - 1) + (int)param_1, *(char *)(iVar4 + 0x1c) != '\0'))
      goto LAB_ram_4811161a;
      uVar5 = (uint)*(byte *)(iVar4 + 0x10);
      if (uVar5 == 0) {
        uVar5 = param_1[2];
        if ((param_1[1] < uVar5) || (param_1[1] - uVar5 < 2)) goto LAB_ram_4811161a;
        *(undefined1 *)(*param_1 + uVar5) = 0x2c;
        uVar7 = param_1[2];
        uVar5 = *param_1;
        param_1[2] = uVar7 + 1;
        *(undefined1 *)(uVar7 + 1 + uVar5) = 0;
        iVar4 = (param_1[3] - 1) + (int)param_1;
      }
      *(undefined1 *)(iVar4 + 0x10) = 0;
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uVar5 = FUN_ram_4819ad74(&local_40,0x20,&DAT_ram_481c48f4,uVar5,uVar1,0);
      if ((char)param_1[10] == '\0') goto LAB_ram_4811161a;
      uVar7 = param_1[2];
      if ((param_1[1] < uVar7) || (param_1[1] - uVar7 <= uVar5)) goto LAB_ram_4811161a;
      FUN_ram_4ff45158(*param_1 + uVar7,&local_40,uVar5);
      uVar7 = param_1[2];
      puVar2 = puVar2 + 1;
      param_1[2] = uVar5 + uVar7;
      *(undefined1 *)(*param_1 + uVar5 + uVar7) = 0;
      cVar6 = (char)param_1[10];
    } while (puVar8 != puVar2);
  }
  else {
    local_40 = CONCAT31(local_40._1_3_,0x5b);
    iVar4 = FUN_ram_4808c90a(param_1,&local_40,1);
    if (iVar4 == 0) goto LAB_ram_48111558;
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar5 + 0x1c) = 0;
    *(undefined1 *)((int)param_1 + uVar5 + 0x10) = 1;
    param_1[3] = uVar5 + 1;
    cVar6 = (char)param_1[10];
    if ((undefined2 *)((int)param_2 + 0x162) != puVar8) goto LAB_ram_48111566;
  }
  if (((cVar6 != '\0') && (1 < param_1[3])) && (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')
     ) {
    uVar5 = param_1[2];
    if ((uVar5 <= param_1[1]) && (1 < param_1[1] - uVar5)) {
      *(undefined1 *)(*param_1 + uVar5) = 0x5d;
      uVar5 = param_1[2];
      param_1[2] = uVar5 + 1;
      *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
      uVar7 = param_1[3];
      uVar5 = uVar7 - 1;
      param_1[3] = uVar5;
      if (((char)param_1[10] != '\0') &&
         ((1 < uVar5 && (*(char *)((int)param_1 + uVar7 + 0x1a) != '\0')))) {
        uVar5 = param_1[2];
        if ((uVar5 <= param_1[1]) && (1 < param_1[1] - uVar5)) {
          *(undefined1 *)(*param_1 + uVar5) = 0x7d;
          uVar5 = param_1[2];
          param_1[2] = uVar5 + 1;
          *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
          uVar7 = param_1[3];
          uVar5 = uVar7 - 1;
          param_1[3] = uVar5;
          if ((((char)param_1[10] != '\0') && (1 < uVar5)) &&
             (*(char *)((int)param_1 + uVar7 + 0x1a) != '\0')) {
            uVar5 = param_1[2];
            if ((uVar5 <= param_1[1]) && (1 < param_1[1] - uVar5)) {
              *(undefined1 *)(*param_1 + uVar5) = 0x7d;
              uVar5 = param_1[2];
              param_1[2] = uVar5 + 1;
              *(undefined1 *)(uVar5 + 1 + *param_1) = 0;
              param_1[3] = param_1[3] - 1;
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return;
            }
          }
        }
      }
    }
  }
LAB_ram_48111624:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
LAB_ram_4811161a:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar2 = puVar2 + 1;
  } while (puVar8 != puVar2);
  goto LAB_ram_48111624;
}


