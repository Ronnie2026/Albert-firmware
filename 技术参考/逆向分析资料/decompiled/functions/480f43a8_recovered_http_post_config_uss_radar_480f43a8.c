/* Firmware entry: 0x480f43a8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_config_uss_radar_480f43a8(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int aiStack_54 [2];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *******pppppppuStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  undefined4 *******apppppppuStack_30 [2];
  uint uStack_28;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0')) {
    if (DAT_ram_4ff6dd51 == '\0') {
      FUN_ram_48037d22(apppppppuStack_30,"pending","settings_unavailable");
      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x1f7,"application/json",apppppppuStack_30);
      FUN_ram_4802a59e(apppppppuStack_30);
      return;
    }
    aiStack_54[0] = 0;
    aiStack_54[1] = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    pppppppuStack_44 = (undefined4 *******)0x0;
    uStack_40 = 0;
    iVar2 = FUN_ram_480371ce("revision",0xffffffff,aiStack_54);
    if ((((iVar2 == 0) ||
         (iVar2 = FUN_ram_480371ce("gearUssDistancePreset",3,aiStack_54 + 1), iVar2 == 0)) ||
        ((iVar2 = FUN_ram_480371ce("gearUssSdiBlockMax",0x1ff,&uStack_4c), iVar2 == 0 ||
         ((iVar2 = FUN_ram_480371ce("gearUssSdiCautionMax",0x1ff,&uStack_48), iVar2 == 0 ||
          (iVar2 = FUN_ram_480371ce("gearUssMinValidSdi",6,&pppppppuStack_44), iVar2 == 0)))))) ||
       (iVar5 = FUN_ram_480371ce("gearUssRadarBlockMaxRaw",0xff,&uStack_40),
       iVar2 = DAT_ram_4ff4898c, iVar5 == 0)) {
      if ((DAT_ram_4ff6dd50 == '\0') || (fence(), (DAT_ram_4ff6de94 & 0x40) != 0)) {
        pcVar7 = "pending";
      }
      else {
        pcVar7 = "stored";
      }
      FUN_ram_48037d22(apppppppuStack_30,pcVar7,"invalid_radar_config");
      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,400,"application/json",apppppppuStack_30);
      FUN_ram_4802a59e(apppppppuStack_30);
      return;
    }
    if (DAT_ram_4ff4898c == aiStack_54[0]) {
      uStack_3c = CONCAT22((undefined2)uStack_4c,(short)_DAT_ram_4ff48984);
      iStack_34 = DAT_ram_4ff4898c;
      puStack_38 = (undefined1 *)
                   CONCAT13((undefined1)uStack_40,CONCAT12(pppppppuStack_44._0_1_,(short)uStack_48))
      ;
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)aiStack_54[1]);
      FUN_ram_4803153a(&uStack_3c);
      iVar5 = FUN_ram_480f40a6(&DAT_ram_4ff60e20,(int)&uStack_3c + 2);
      if (iVar5 == 0) {
        uVar6 = FUN_ram_4802d0de();
        FUN_ram_48037d22(apppppppuStack_30,uVar6,"radar_busy");
        uVar6 = 0x1f7;
      }
      else {
        DAT_ram_4ff4898c = iVar2 + 1;
        if (DAT_ram_4ff4898c == 0) {
          DAT_ram_4ff4898c = 1;
        }
        _DAT_ram_4ff48984 = uStack_3c;
        _DAT_ram_4ff48988 = puStack_38;
        DAT_ram_4ff6dd50 = '\0';
        iStack_34 = DAT_ram_4ff4898c;
        FUN_ram_4802e260(0x40);
        iVar2 = FUN_ram_480ee046(0x40);
        if (iVar2 == 0) {
          pcVar7 = "pending";
          pcVar8 = "flash_write";
          uVar6 = 500;
        }
        else {
          pcVar7 = "stored";
          uVar6 = 200;
          pcVar8 = (char *)0x0;
        }
        FUN_ram_48037d22(apppppppuStack_30,pcVar7,pcVar8);
      }
    }
    else {
      uVar6 = FUN_ram_4802d0de();
      FUN_ram_48037d22(apppppppuStack_30,uVar6,"stale_revision");
      uVar6 = 0x199;
    }
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,uVar6,"application/json",apppppppuStack_30);
    FUN_ram_4802a59e(apppppppuStack_30);
  }
  else {
    if ((DAT_ram_4ff6dd50 == '\0') || (fence(), (DAT_ram_4ff6de94 & 0x40) != 0)) {
      pcVar7 = "pending";
    }
    else {
      pcVar7 = "stored";
    }
    FUN_ram_48037d22(apppppppuStack_30,pcVar7,"ota_busy");
    iVar5 = DAT_ram_4ff5cbe8;
    iVar2 = DAT_ram_4ff5cbdc;
    if ((char)bStack_21 < '\0') {
      apppppppuStack_30[0] = apppppppuStack_30;
      uStack_28 = bStack_21 & 0x7f;
    }
    else if (apppppppuStack_30[0] == (undefined4 *******)0x0) {
      uStack_28 = 0;
    }
    uStack_48 = 0x199;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    pppppppuStack_44 = apppppppuStack_30[0];
    uStack_40 = uStack_28;
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_48,&pppppppuStack_44,&uStack_40);
        DAT_ram_4ff5cbc8 = '\0';
      }
      uVar3 = uStack_40;
      if (uStack_40 == 0) {
        uVar3 = 1;
      }
      iVar4 = FUN_ram_4ff206d8(uVar3,0x404);
      iVar9 = iVar5 + iVar2 * 0x1d40;
      *(int *)(iVar9 + 0x1cdc) = iVar4;
      if (iVar4 == 0) {
        if (*(char *)(iVar9 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar5 + iVar2 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (uStack_40 != 0) {
          FUN_ram_4ff45158(iVar4,pppppppuStack_44,uStack_40);
          iVar4 = *(int *)(iVar9 + 0x1cdc);
        }
        iVar2 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iVar2 + 0x44c) != '\0') && (*(char *)(iVar2 + 0x44c) != '\x06')) {
          *(int *)(iVar2 + 0x1ce0) = iVar4;
          *(uint *)(iVar2 + 0x1ce4) = uStack_40;
          *(undefined4 *)(iVar2 + 0x1ce8) = 0;
          puStack_38 = &LAB_ram_4802d3f2;
          uStack_3c = iVar2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_48,"application/json",iVar2,&LAB_ram_4802d3f2);
        }
      }
    }
    FUN_ram_4802a59e(apppppppuStack_30);
  }
  return;
}


