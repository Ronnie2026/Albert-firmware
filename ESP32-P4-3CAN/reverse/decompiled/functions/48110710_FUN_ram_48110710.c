/* Firmware entry: 0x48110710 */

void FUN_ram_48110710(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808c7bc(param_1,param_3);
  FUN_ram_4808c2dc(param_1,"ambientEnabled",*param_2);
  FUN_ram_4808c2dc(param_1,"fsdCueEnabled",param_2[1]);
  FUN_ram_4808c2dc(param_1,"blindSpotEnabled",param_2[2]);
  FUN_ram_480bb6fa(param_1,"blindSpotBrightness",param_2[3]);
  FUN_ram_480bb6fa(param_1,"blindSpotAreas",param_2[4]);
  FUN_ram_480b4e36(param_1,"blindSpotRestoreDelayMs",*(undefined2 *)(param_2 + 6));
  FUN_ram_4808c2dc(param_1,"turnFollowEnabled",param_2[8]);
  FUN_ram_4808c2dc(param_1,"turnFollowHazards",param_2[9]);
  FUN_ram_480bb6fa(param_1,"turnFollowBrightness",param_2[10]);
  FUN_ram_480bb6fa(param_1,"turnFollowAreas",param_2[0xb]);
  FUN_ram_4808c832(param_1,"turnFollowColor");
  FUN_ram_4811064e(param_1,param_2[0xc]);
  FUN_ram_4811064e(param_1,param_2[0xd]);
  FUN_ram_4811064e(param_1,param_2[0xe]);
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
LAB_ram_48110854:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar11 = param_1[2];
    if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_48110854;
    *(undefined1 *)(*param_1 + uVar11) = 0x5d;
    iVar12 = param_1[2];
    param_1[2] = iVar12 + 1;
    *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
    param_1[3] = param_1[3] + -1;
  }
  FUN_ram_4808c2dc(param_1,"welcomeEnabled",param_2[0xf]);
  FUN_ram_480bb6fa(param_1,"welcomeStyle",param_2[0x10]);
  FUN_ram_480bb6fa(param_1,"welcomeTriggerMode",param_2[0x11]);
  FUN_ram_480bb6fa(param_1,"welcomeBrightness",param_2[0x12]);
  FUN_ram_480bb6fa(param_1,"welcomeTempo",param_2[0x13]);
  FUN_ram_480bb6fa(param_1,"welcomeZoneMask",param_2[0x14]);
  FUN_ram_4808c832(param_1,"welcomeColor");
  FUN_ram_4811064e(param_1,param_2[0x15]);
  FUN_ram_4811064e(param_1,param_2[0x16]);
  FUN_ram_4811064e(param_1,param_2[0x17]);
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) {
    uVar11 = param_1[2];
    if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
      *(undefined1 *)(*param_1 + uVar11) = 0x5d;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      goto LAB_ram_4811093a;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_4811093a:
  pcVar17 = param_2 + 0x18;
  FUN_ram_4808c832(param_1,"zones");
  do {
    if ((((char)param_1[10] == '\0') || (iVar12 = param_1[3], 10 < iVar12 - 1U)) ||
       (*(char *)((int)param_1 + iVar12 + 0x1b) != '\0')) {
LAB_ram_4811098e:
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else {
      if (*(char *)((int)param_1 + iVar12 + 0xf) == '\0') {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x2c;
          iVar12 = param_1[2];
          param_1[2] = iVar12 + 1;
          *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
          if ((char)param_1[10] != '\0') goto LAB_ram_481109d8;
        }
        goto LAB_ram_4811098e;
      }
LAB_ram_481109d8:
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      *(undefined1 *)(*param_1 + uVar11) = 0x7b;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      iVar13 = param_1[3];
      iVar12 = param_1[10];
      *(undefined1 *)((int)param_1 + iVar13 + 0xf) = 0;
      *(undefined1 *)((int)param_1 + iVar13 + 0x10) = 1;
      *(undefined1 *)((int)param_1 + iVar13 + 0x1c) = 1;
      param_1[3] = iVar13 + 1;
      if (((char)iVar12 == '\0') || (iVar13 + 1 == 0)) goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      cVar1 = *pcVar17;
      *(undefined1 *)(*param_1 + uVar11) = 0x22;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      cVar2 = s_invalid_enabled_ram_481ccbd8[9];
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 8)) goto LAB_ram_4811098e;
      pcVar14 = (char *)(*param_1 + uVar11);
      *pcVar14 = s_invalid_enabled_ram_481ccbd8[8];
      cVar10 = s_invalid_enabled_ram_481ccbd8[0xe];
      cVar6 = s_invalid_enabled_ram_481ccbd8[0xd];
      cVar5 = s_invalid_enabled_ram_481ccbd8[0xc];
      cVar4 = s_invalid_enabled_ram_481ccbd8[0xb];
      cVar3 = s_invalid_enabled_ram_481ccbd8[10];
      pcVar14[1] = cVar2;
      pcVar14[2] = cVar3;
      pcVar14[3] = cVar4;
      pcVar14[4] = cVar5;
      pcVar14[5] = cVar6;
      pcVar14[6] = cVar10;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 7;
      *(undefined1 *)(iVar12 + 7 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 3)) goto LAB_ram_4811098e;
      iVar12 = *param_1;
      *(undefined1 *)(iVar12 + uVar11) = 0x22;
      ((undefined1 *)(iVar12 + uVar11))[1] = 0x3a;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 2;
      *(undefined1 *)(iVar12 + 2 + *param_1) = 0;
      *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
      if (cVar1 == '\0') {
        pcVar14 = "false";
        uVar11 = 5;
      }
      else {
        pcVar14 = "true";
        uVar11 = 4;
      }
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar15 = param_1[2];
      if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 <= uVar11)) goto LAB_ram_4811098e;
      FUN_ram_4ff45158(*param_1 + uVar15,pcVar14,uVar11);
      iVar12 = param_1[2];
      param_1[2] = uVar11 + iVar12;
      *(undefined1 *)(*param_1 + uVar11 + iVar12) = 0;
      if (((char)param_1[10] == '\0') ||
         ((iVar12 = param_1[3], iVar12 == 0 || (*(char *)((int)param_1 + iVar12 + 0x1b) == '\0'))))
      goto LAB_ram_4811098e;
      cVar1 = pcVar17[1];
      if (*(char *)((int)param_1 + iVar12 + 0xf) == '\0') {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x2c;
          iVar12 = param_1[2];
          param_1[2] = iVar12 + 1;
          *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
          if ((char)param_1[10] != '\0') goto LAB_ram_48110b7e;
        }
        goto LAB_ram_4811098e;
      }
LAB_ram_48110b7e:
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      *(undefined1 *)(*param_1 + uVar11) = 0x22;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      cVar4 = s_brightness_ram_481c5350[4];
      cVar3 = s_brightness_ram_481c5350[3];
      cVar2 = s_brightness_ram_481c5350[2];
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 0xb)) goto LAB_ram_4811098e;
      pcVar14 = (char *)(*param_1 + uVar11);
      pcVar14[1] = s_brightness_ram_481c5350[1];
      pcVar14[2] = cVar2;
      pcVar14[3] = cVar3;
      pcVar14[4] = cVar4;
      cVar6 = s_brightness_ram_481c5350[9];
      cVar5 = s_brightness_ram_481c5350[8];
      cVar4 = s_brightness_ram_481c5350[7];
      cVar3 = s_brightness_ram_481c5350[6];
      cVar2 = s_brightness_ram_481c5350[5];
      *pcVar14 = s_brightness_ram_481c5350[0];
      pcVar14[5] = cVar2;
      pcVar14[6] = cVar3;
      pcVar14[7] = cVar4;
      pcVar14[8] = cVar5;
      pcVar14[9] = cVar6;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 10;
      *(undefined1 *)(iVar12 + 10 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 3)) goto LAB_ram_4811098e;
      iVar12 = *param_1;
      *(undefined1 *)(iVar12 + uVar11) = 0x22;
      ((undefined1 *)(iVar12 + uVar11))[1] = 0x3a;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 2;
      *(undefined1 *)(iVar12 + 2 + *param_1) = 0;
      iVar12 = param_1[3];
      local_50 = 0;
      *(undefined1 *)(iVar12 + (int)param_1 + 0xf) = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar11 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4,iVar12 + (int)param_1,cVar1,0);
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar15 = param_1[2];
      if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 <= uVar11)) goto LAB_ram_4811098e;
      FUN_ram_4ff45158(*param_1 + uVar15,&local_50,uVar11);
      iVar12 = param_1[2];
      param_1[2] = uVar11 + iVar12;
      *(undefined1 *)(*param_1 + uVar11 + iVar12) = 0;
      if (((char)param_1[10] == '\0') ||
         ((iVar12 = param_1[3], iVar12 == 0 || (*(char *)((int)param_1 + iVar12 + 0x1b) == '\0'))))
      goto LAB_ram_4811098e;
      cVar1 = pcVar17[2];
      if (*(char *)((int)param_1 + iVar12 + 0xf) == '\0') {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x2c;
          iVar12 = param_1[2];
          param_1[2] = iVar12 + 1;
          *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
          if ((char)param_1[10] != '\0') goto LAB_ram_48110d0e;
        }
        goto LAB_ram_4811098e;
      }
LAB_ram_48110d0e:
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      *(undefined1 *)(*param_1 + uVar11) = 0x22;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 4)) goto LAB_ram_4811098e;
      puVar16 = (undefined1 *)(*param_1 + uVar11);
      *puVar16 = 0x72;
      puVar16[1] = 0x65;
      puVar16[2] = 100;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 3;
      *(undefined1 *)(iVar12 + 3 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 3)) goto LAB_ram_4811098e;
      iVar12 = *param_1;
      *(undefined1 *)(iVar12 + uVar11) = 0x22;
      ((undefined1 *)(iVar12 + uVar11))[1] = 0x3a;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 2;
      *(undefined1 *)(iVar12 + 2 + *param_1) = 0;
      iVar12 = param_1[3];
      local_50 = 0;
      *(undefined1 *)(iVar12 + (int)param_1 + 0xf) = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar11 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4,iVar12 + (int)param_1,cVar1,0);
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar15 = param_1[2];
      if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 <= uVar11)) goto LAB_ram_4811098e;
      FUN_ram_4ff45158(*param_1 + uVar15,&local_50,uVar11);
      iVar12 = param_1[2];
      param_1[2] = uVar11 + iVar12;
      *(undefined1 *)(*param_1 + uVar11 + iVar12) = 0;
      if (((char)param_1[10] == '\0') ||
         ((iVar12 = param_1[3], iVar12 == 0 || (*(char *)((int)param_1 + iVar12 + 0x1b) == '\0'))))
      goto LAB_ram_4811098e;
      cVar1 = pcVar17[3];
      if (*(char *)((int)param_1 + iVar12 + 0xf) == '\0') {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x2c;
          iVar12 = param_1[2];
          param_1[2] = iVar12 + 1;
          *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
          if ((char)param_1[10] != '\0') goto LAB_ram_48110e62;
        }
        goto LAB_ram_4811098e;
      }
LAB_ram_48110e62:
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      *(undefined1 *)(*param_1 + uVar11) = 0x22;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      cVar5 = s_green_ram_481c535c[4];
      cVar4 = s_green_ram_481c535c[3];
      cVar3 = s_green_ram_481c535c[2];
      cVar2 = s_green_ram_481c535c[1];
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 6)) goto LAB_ram_4811098e;
      pcVar14 = (char *)(*param_1 + uVar11);
      *pcVar14 = s_green_ram_481c535c[0];
      pcVar14[1] = cVar2;
      pcVar14[2] = cVar3;
      pcVar14[3] = cVar4;
      pcVar14[4] = cVar5;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 5;
      *(undefined1 *)(iVar12 + 5 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 3)) goto LAB_ram_4811098e;
      iVar12 = *param_1;
      *(undefined1 *)(iVar12 + uVar11) = 0x22;
      ((undefined1 *)(iVar12 + uVar11))[1] = 0x3a;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 2;
      *(undefined1 *)(iVar12 + 2 + *param_1) = 0;
      iVar12 = param_1[3];
      local_50 = 0;
      *(undefined1 *)(iVar12 + (int)param_1 + 0xf) = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar11 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4,iVar12 + (int)param_1,cVar1,0);
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar15 = param_1[2];
      if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 <= uVar11)) goto LAB_ram_4811098e;
      FUN_ram_4ff45158(*param_1 + uVar15,&local_50,uVar11);
      iVar12 = param_1[2];
      param_1[2] = uVar11 + iVar12;
      *(undefined1 *)(*param_1 + uVar11 + iVar12) = 0;
      if (((char)param_1[10] == '\0') ||
         ((iVar12 = param_1[3], iVar12 == 0 || (*(char *)((int)param_1 + iVar12 + 0x1b) == '\0'))))
      goto LAB_ram_4811098e;
      cVar1 = pcVar17[4];
      if (*(char *)((int)param_1 + iVar12 + 0xf) == '\0') {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x2c;
          iVar12 = param_1[2];
          param_1[2] = iVar12 + 1;
          *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
          if ((char)param_1[10] != '\0') goto LAB_ram_48110fce;
        }
        goto LAB_ram_4811098e;
      }
LAB_ram_48110fce:
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      *(undefined1 *)(*param_1 + uVar11) = 0x22;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      uVar9 = DAT_ram_481c5367;
      uVar8 = DAT_ram_481c5366;
      uVar7 = DAT_ram_481c5365;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 5)) goto LAB_ram_4811098e;
      puVar16 = (undefined1 *)(*param_1 + uVar11);
      *puVar16 = DAT_ram_481c5364;
      puVar16[1] = uVar7;
      puVar16[2] = uVar8;
      puVar16[3] = uVar9;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 4;
      *(undefined1 *)(iVar12 + 4 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 3)) goto LAB_ram_4811098e;
      iVar12 = *param_1;
      *(undefined1 *)(iVar12 + uVar11) = 0x22;
      ((undefined1 *)(iVar12 + uVar11))[1] = 0x3a;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 2;
      *(undefined1 *)(iVar12 + 2 + *param_1) = 0;
      iVar12 = param_1[3];
      local_50 = 0;
      *(undefined1 *)(iVar12 + (int)param_1 + 0xf) = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar11 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4,iVar12 + (int)param_1,cVar1,0);
      if ((char)param_1[10] == '\0') goto LAB_ram_4811098e;
      uVar15 = param_1[2];
      if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 <= uVar11)) goto LAB_ram_4811098e;
      FUN_ram_4ff45158(*param_1 + uVar15,&local_50,uVar11);
      iVar12 = param_1[2];
      param_1[2] = uVar11 + iVar12;
      *(undefined1 *)(*param_1 + uVar11 + iVar12) = 0;
      if (((char)param_1[10] == '\0') ||
         (((uint)param_1[3] < 2 || (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0'))))
      goto LAB_ram_4811098e;
      uVar11 = param_1[2];
      if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_4811098e;
      *(undefined1 *)(*param_1 + uVar11) = 0x7d;
      iVar12 = param_1[2];
      param_1[2] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
    }
    pcVar17 = pcVar17 + 5;
    if (param_2 + 0x36 == pcVar17) {
      FUN_ram_4808c290(param_1);
      FUN_ram_4808c244(param_1);
      return;
    }
  } while( true );
}


