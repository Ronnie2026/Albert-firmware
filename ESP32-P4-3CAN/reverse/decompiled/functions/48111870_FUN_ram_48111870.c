/* Firmware entry: 0x48111870 */

bool FUN_ram_48111870(int *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar9 = FUN_ram_48076846(param_2);
  if (iVar9 != 0) {
    FUN_ram_4808c168(param_1);
    FUN_ram_480b2068(param_1,"schema_version",1);
    FUN_ram_480b2068(param_1,"active_driver_id",*param_2);
    FUN_ram_480b2068(param_1,"last_driver_id",param_2[1]);
    FUN_ram_480b2068(param_1,"next_driver_id",param_2[2]);
    FUN_ram_480b2068(param_1,"next_driver_use_sequence",param_2[3]);
    FUN_ram_4808c2dc(param_1,"auto_recognition_enabled",*(undefined1 *)(param_2 + 4));
    FUN_ram_4808c7bc(param_1,"globals");
    FUN_ram_480c2e50(param_1,param_2 + 0xd1f);
    FUN_ram_480d4d80(param_1,param_2 + 0xd48);
    FUN_ram_4808c7bc(param_1,"battery");
    FUN_ram_4808c2dc(param_1,"batteryPreheatEnabled",*(undefined1 *)(param_2 + 0xd5a));
    FUN_ram_480bb6fa(param_1,"batteryPreheatDurationMin",*(undefined1 *)((int)param_2 + 0x3569));
    FUN_ram_4808c244(param_1);
    FUN_ram_4808c7bc(param_1,"rearFog");
    FUN_ram_4808c2dc(param_1,"enabled",*(undefined1 *)((int)param_2 + 0x356a));
    FUN_ram_4808c2dc(param_1,"reverseWarningEnabled",*(undefined1 *)((int)param_2 + 0x356b));
    FUN_ram_4808c2dc(param_1,"rearFogPilotEnabled",*(undefined1 *)(param_2 + 0xd5b));
    FUN_ram_4808c2dc(param_1,"reverseRearFogSteadyEnabled",*(undefined1 *)((int)param_2 + 0x356d));
    FUN_ram_480b4e36(param_1,"mildDecelCx100",*(undefined2 *)((int)param_2 + 0x356e));
    FUN_ram_480b4e36(param_1,"hardDecelCx100",*(undefined2 *)(param_2 + 0xd5c));
    FUN_ram_4808c244(param_1);
    FUN_ram_4808c7bc(param_1,"ussRadar");
    FUN_ram_480bb6fa(param_1,"preset",*(undefined1 *)((int)param_2 + 0x3572));
    FUN_ram_480b4e36(param_1,"sdiBlockMax",*(undefined2 *)(param_2 + 0xd5d));
    FUN_ram_480b4e36(param_1,"sdiCautionMax",*(undefined2 *)((int)param_2 + 0x3576));
    FUN_ram_480bb6fa(param_1,"minValidSdi",*(undefined1 *)(param_2 + 0xd5e));
    FUN_ram_480bb6fa(param_1,"radarBlockMaxRaw",*(undefined1 *)((int)param_2 + 0x3579));
    FUN_ram_4808c244(param_1);
    FUN_ram_48110710(param_1,(int)param_2 + 0x357a,"ambientDefault");
    FUN_ram_480d5398(param_1,param_2 + 0xd6c,"speedTargetDefault");
    FUN_ram_4808c2dc(param_1,"apAutoOffEnabled",*(undefined1 *)((int)param_2 + 0x35ee));
    FUN_ram_4808c2dc(param_1,"cloudEnabled",*(undefined1 *)((int)param_2 + 0x35ef));
    FUN_ram_480b4e36(param_1,"cloudIntervalSec",*(undefined2 *)(param_2 + 0xd7c));
    FUN_ram_4808c244(param_1);
    FUN_ram_4808c832(param_1,"drivers");
    puVar16 = param_2 + 5;
    uVar15 = 0;
    if (*(char *)(param_2 + 0xd05) != '\0') {
      do {
        FUN_ram_48111134(param_1,puVar16);
        uVar15 = uVar15 + 1;
        puVar16 = puVar16 + 0x68;
      } while (uVar15 < *(byte *)(param_2 + 0xd05));
    }
    FUN_ram_4808c290(param_1);
    FUN_ram_4808c832(param_1,"seat_slots");
    for (iVar9 = (int)param_2 + 0x3415; iVar9 != (int)param_2 + 0x3479; iVar9 = iVar9 + 10) {
      if ((((char)param_1[10] == '\0') || (iVar11 = param_1[3], 10 < iVar11 - 1U)) ||
         (*(char *)((int)param_1 + iVar11 + 0x1b) != '\0')) {
LAB_ram_48111b60:
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        if (*(char *)((int)param_1 + iVar11 + 0xf) == '\0') {
          uVar15 = param_1[2];
          if ((uVar15 <= (uint)param_1[1]) && (1 < param_1[1] - uVar15)) {
            *(undefined1 *)(*param_1 + uVar15) = 0x2c;
            iVar11 = param_1[2];
            param_1[2] = iVar11 + 1;
            *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_48111baa;
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111baa:
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x7b;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        iVar12 = param_1[3];
        iVar11 = param_1[10];
        *(undefined1 *)((int)param_1 + iVar12 + 0xf) = 0;
        *(undefined1 *)((int)param_1 + iVar12 + 0x10) = 1;
        *(undefined1 *)((int)param_1 + iVar12 + 0x1c) = 1;
        param_1[3] = iVar12 + 1;
        if (((char)iVar11 == '\0') || (iVar12 + 1 == 0)) goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x22;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        cVar4 = s_track_ram_481c61cc[4];
        cVar3 = s_track_ram_481c61cc[3];
        cVar2 = s_track_ram_481c61cc[2];
        cVar1 = s_track_ram_481c61cc[0];
        if ((char)param_1[10] == '\0') goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 6)) goto LAB_ram_48111b60;
        pcVar13 = (char *)(*param_1 + uVar15);
        pcVar13[1] = s_track_ram_481c61cc[1];
        *pcVar13 = cVar1;
        pcVar13[2] = cVar2;
        pcVar13[3] = cVar3;
        pcVar13[4] = cVar4;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 5;
        *(undefined1 *)(iVar11 + 5 + *param_1) = 0;
        iVar11 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar15 = FUN_ram_4819ad74(&uStack_50,0x20,&DAT_ram_481c48f4);
          if ((char)param_1[10] != '\0') {
            uVar10 = param_1[2];
            if ((uVar10 <= (uint)param_1[1]) && (uVar15 < param_1[1] - uVar10)) {
              FUN_ram_4ff45158(*param_1 + uVar10,&uStack_50,uVar15);
              iVar11 = param_1[2];
              param_1[2] = uVar15 + iVar11;
              *(undefined1 *)(*param_1 + uVar15 + iVar11) = 0;
              goto LAB_ram_48111cf8;
            }
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111cf8:
        if ((((char)param_1[10] == '\0') || (iVar11 = param_1[3], iVar11 == 0)) ||
           (*(char *)((int)param_1 + iVar11 + 0x1b) == '\0')) goto LAB_ram_48111b60;
        if (*(char *)((int)param_1 + iVar11 + 0xf) == '\0') {
          uVar15 = param_1[2];
          if ((uVar15 <= (uint)param_1[1]) && (1 < param_1[1] - uVar15)) {
            *(undefined1 *)(*param_1 + uVar15) = 0x2c;
            iVar11 = param_1[2];
            param_1[2] = iVar11 + 1;
            *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_48111d4c;
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111d4c:
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x22;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        cVar2 = s_backrest_ram_481c61d4[2];
        cVar1 = s_backrest_ram_481c61d4[1];
        if ((char)param_1[10] == '\0') goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 9)) goto LAB_ram_48111b60;
        pcVar13 = (char *)(*param_1 + uVar15);
        *pcVar13 = s_backrest_ram_481c61d4[0];
        pcVar13[1] = cVar1;
        pcVar13[2] = cVar2;
        cVar4 = s_backrest_ram_481c61d4[7];
        cVar3 = s_backrest_ram_481c61d4[6];
        cVar2 = s_backrest_ram_481c61d4[5];
        cVar1 = s_backrest_ram_481c61d4[3];
        pcVar13[4] = s_backrest_ram_481c61d4[4];
        pcVar13[5] = cVar2;
        pcVar13[6] = cVar3;
        pcVar13[3] = cVar1;
        pcVar13[7] = cVar4;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 8;
        *(undefined1 *)(iVar11 + 8 + *param_1) = 0;
        iVar11 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar15 = FUN_ram_4819ad74(&uStack_50,0x20,&DAT_ram_481c48f4);
          if ((char)param_1[10] != '\0') {
            uVar10 = param_1[2];
            if ((uVar10 <= (uint)param_1[1]) && (uVar15 < param_1[1] - uVar10)) {
              FUN_ram_4ff45158(*param_1 + uVar10,&uStack_50,uVar15);
              iVar11 = param_1[2];
              param_1[2] = uVar15 + iVar11;
              *(undefined1 *)(*param_1 + uVar15 + iVar11) = 0;
              goto LAB_ram_48111e58;
            }
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111e58:
        if ((((char)param_1[10] == '\0') || (iVar11 = param_1[3], iVar11 == 0)) ||
           (*(char *)((int)param_1 + iVar11 + 0x1b) == '\0')) goto LAB_ram_48111b60;
        if (*(char *)((int)param_1 + iVar11 + 0xf) == '\0') {
          uVar15 = param_1[2];
          if ((uVar15 <= (uint)param_1[1]) && (1 < param_1[1] - uVar15)) {
            *(undefined1 *)(*param_1 + uVar15) = 0x2c;
            iVar11 = param_1[2];
            param_1[2] = iVar11 + 1;
            *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_48111eb2;
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111eb2:
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x22;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        uVar7 = DAT_ram_481c61e3;
        uVar6 = DAT_ram_481c61e2;
        uVar5 = DAT_ram_481c61e1;
        if ((char)param_1[10] == '\0') goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 5)) goto LAB_ram_48111b60;
        puVar14 = (undefined1 *)(*param_1 + uVar15);
        *puVar14 = DAT_ram_481c61e0;
        puVar14[1] = uVar5;
        puVar14[2] = uVar6;
        puVar14[3] = uVar7;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 4;
        *(undefined1 *)(iVar11 + 4 + *param_1) = 0;
        iVar11 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar15 = FUN_ram_4819ad74(&uStack_50,0x20,&DAT_ram_481c48f4);
          if ((char)param_1[10] != '\0') {
            uVar10 = param_1[2];
            if ((uVar10 <= (uint)param_1[1]) && (uVar15 < param_1[1] - uVar10)) {
              FUN_ram_4ff45158(*param_1 + uVar10,&uStack_50,uVar15);
              iVar11 = param_1[2];
              param_1[2] = uVar15 + iVar11;
              *(undefined1 *)(*param_1 + uVar15 + iVar11) = 0;
              goto LAB_ram_48111f9e;
            }
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111f9e:
        if ((((char)param_1[10] == '\0') || (iVar11 = param_1[3], iVar11 == 0)) ||
           (*(char *)((int)param_1 + iVar11 + 0x1b) == '\0')) goto LAB_ram_48111b60;
        if (*(char *)((int)param_1 + iVar11 + 0xf) == '\0') {
          uVar15 = param_1[2];
          if ((uVar15 <= (uint)param_1[1]) && (1 < param_1[1] - uVar15)) {
            *(undefined1 *)(*param_1 + uVar15) = 0x2c;
            iVar11 = param_1[2];
            param_1[2] = iVar11 + 1;
            *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_48111ff8;
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48111ff8:
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x22;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        uVar7 = DAT_ram_481c61eb;
        uVar6 = DAT_ram_481c61ea;
        uVar5 = DAT_ram_481c61e9;
        if ((char)param_1[10] == '\0') goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 5)) goto LAB_ram_48111b60;
        puVar14 = (undefined1 *)(*param_1 + uVar15);
        *puVar14 = DAT_ram_481c61e8;
        puVar14[1] = uVar5;
        puVar14[2] = uVar6;
        puVar14[3] = uVar7;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 4;
        *(undefined1 *)(iVar11 + 4 + *param_1) = 0;
        iVar11 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar15 = FUN_ram_4819ad74(&uStack_50,0x20,&DAT_ram_481c48f4);
          if ((char)param_1[10] != '\0') {
            uVar10 = param_1[2];
            if ((uVar10 <= (uint)param_1[1]) && (uVar15 < param_1[1] - uVar10)) {
              FUN_ram_4ff45158(*param_1 + uVar10,&uStack_50,uVar15);
              iVar11 = param_1[2];
              param_1[2] = uVar15 + iVar11;
              *(undefined1 *)(*param_1 + uVar15 + iVar11) = 0;
              goto LAB_ram_481120e4;
            }
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_481120e4:
        if ((((char)param_1[10] == '\0') || (iVar11 = param_1[3], iVar11 == 0)) ||
           (*(char *)((int)param_1 + iVar11 + 0x1b) == '\0')) goto LAB_ram_48111b60;
        if (*(char *)((int)param_1 + iVar11 + 0xf) == '\0') {
          uVar15 = param_1[2];
          if ((uVar15 <= (uint)param_1[1]) && (1 < param_1[1] - uVar15)) {
            *(undefined1 *)(*param_1 + uVar15) = 0x2c;
            iVar11 = param_1[2];
            param_1[2] = iVar11 + 1;
            *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_48112136;
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48112136:
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x22;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        cVar1 = s_validMarker_ram_481c8808[2];
        if ((char)param_1[10] == '\0') goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 0xc)) goto LAB_ram_48111b60;
        pcVar13 = (char *)(*param_1 + uVar15);
        *pcVar13 = s_validMarker_ram_481c8808[0];
        cVar4 = s_validMarker_ram_481c8808[5];
        cVar3 = s_validMarker_ram_481c8808[4];
        cVar2 = s_validMarker_ram_481c8808[3];
        pcVar13[2] = cVar1;
        pcVar13[3] = cVar2;
        pcVar13[4] = cVar3;
        pcVar13[5] = cVar4;
        cVar8 = s_validMarker_ram_481c8808[10];
        cVar4 = s_validMarker_ram_481c8808[9];
        cVar3 = s_validMarker_ram_481c8808[8];
        cVar2 = s_validMarker_ram_481c8808[6];
        cVar1 = s_validMarker_ram_481c8808[1];
        pcVar13[7] = s_validMarker_ram_481c8808[7];
        pcVar13[8] = cVar3;
        pcVar13[9] = cVar4;
        pcVar13[1] = cVar1;
        pcVar13[6] = cVar2;
        pcVar13[10] = cVar8;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 0xb;
        *(undefined1 *)(iVar11 + 0xb + *param_1) = 0;
        iVar11 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar15 = FUN_ram_4819ad74(&uStack_50,0x20,&DAT_ram_481c48f4);
          if ((char)param_1[10] != '\0') {
            uVar10 = param_1[2];
            if ((uVar10 <= (uint)param_1[1]) && (uVar15 < param_1[1] - uVar10)) {
              FUN_ram_4ff45158(*param_1 + uVar10,&uStack_50,uVar15);
              iVar11 = param_1[2];
              param_1[2] = uVar15 + iVar11;
              *(undefined1 *)(*param_1 + uVar15 + iVar11) = 0;
              goto LAB_ram_4811225a;
            }
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_4811225a:
        if ((((char)param_1[10] == '\0') || (iVar11 = param_1[3], iVar11 == 0)) ||
           (*(char *)((int)param_1 + iVar11 + 0x1b) == '\0')) goto LAB_ram_48111b60;
        if (*(char *)((int)param_1 + iVar11 + 0xf) == '\0') {
          uVar15 = param_1[2];
          if ((uVar15 <= (uint)param_1[1]) && (1 < param_1[1] - uVar15)) {
            *(undefined1 *)(*param_1 + uVar15) = 0x2c;
            iVar11 = param_1[2];
            param_1[2] = iVar11 + 1;
            *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
            if ((char)param_1[10] != '\0') goto LAB_ram_481122ac;
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_481122ac:
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x22;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        if ((char)param_1[10] == '\0') goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 0xe)) goto LAB_ram_48111b60;
        FUN_ram_4ff45158(*param_1 + uVar15,"formatVersion");
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 0xd;
        *(undefined1 *)(iVar11 + 0xd + *param_1) = 0;
        iVar11 = FUN_ram_4808c90a(param_1,&DAT_ram_481c67c4,2);
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uVar15 = FUN_ram_4819ad74(&uStack_50,0x20,&DAT_ram_481c48f4);
          if ((char)param_1[10] != '\0') {
            uVar10 = param_1[2];
            if ((uVar10 <= (uint)param_1[1]) && (uVar15 < param_1[1] - uVar10)) {
              FUN_ram_4ff45158(*param_1 + uVar10,&uStack_50,uVar15);
              iVar11 = param_1[2];
              param_1[2] = uVar15 + iVar11;
              *(undefined1 *)(*param_1 + uVar15 + iVar11) = 0;
              goto LAB_ram_48112380;
            }
          }
          goto LAB_ram_48111b60;
        }
LAB_ram_48112380:
        if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
           (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) goto LAB_ram_48111b60;
        uVar15 = param_1[2];
        if (((uint)param_1[1] < uVar15) || (param_1[1] - uVar15 < 2)) goto LAB_ram_48111b60;
        *(undefined1 *)(*param_1 + uVar15) = 0x7d;
        iVar11 = param_1[2];
        param_1[2] = iVar11 + 1;
        *(undefined1 *)(iVar11 + 1 + *param_1) = 0;
        param_1[3] = param_1[3] + -1;
      }
    }
    FUN_ram_4808c290(param_1);
    iVar9 = FUN_ram_4808c64a(param_1);
    if (iVar9 != 0) {
      return (uint)param_1[2] < 0x30001;
    }
  }
  return false;
}


