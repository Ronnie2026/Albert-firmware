/* Firmware entry: 0x4816191c */

int FUN_ram_4816191c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uStack_90;
  int local_8c [11];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 & 8) != 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): sdspi not supported timing tuning\n",uVar5,
                     "sdmmc_sd","sdmmc_do_timing_tuning",0x1a6);
    return 0x106;
  }
  if ((code *)param_1[0x13] == (code *)0x0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): input phase delay feature isn\'t supported\n"
                     ,uVar5,"sdmmc_sd","sdmmc_do_timing_tuning",0x1a7);
    return 0x106;
  }
  uVar8 = param_1[1];
  iVar13 = 0;
  piVar11 = local_8c;
  local_8c[0] = 0;
  local_8c[1] = 0;
  local_8c[2] = 0;
  local_8c[3] = 0;
  iVar2 = (*(code *)param_1[0x13])(uVar8,0);
  piVar12 = piVar11;
  do {
    if (iVar2 != 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): failed to set input delay\n",uVar5,
                       "sdmmc_sd","sdmmc_do_timing_tuning",0x1ac);
      return iVar2;
    }
    iVar2 = FUN_ram_4ff2091a(1,0x40,0x808);
    if (iVar2 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): no mem for tuning block databuf\n",uVar5,
                       "sdmmc_sd","read_tuning_block",0x170);
    }
    else {
      local_8c[5] = 0;
      local_8c[6] = 0;
      local_8c[7] = 0;
      local_8c[8] = 0;
      local_8c[9] = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_8c[4] = 0x13;
      uStack_60 = 0x40;
      uStack_5c = 0x40;
      uStack_58 = 0x40;
      uStack_54 = 0x1c50;
      local_8c[10] = iVar2;
      iVar3 = FUN_ram_4816272a(param_1,local_8c + 4);
      if (iVar3 == 0) {
        uStack_90 = 0;
        uVar14 = FUN_ram_4ff21a0a();
        uVar10 = 100000;
        uVar1 = 0;
        do {
          if ((*param_1 & 8) != 0 || (uStack_90 & 0x100) != 0) {
            iVar2 = FUN_ram_4ff4511a(&DAT_ram_48237ddc,iVar2,0x40);
            if (iVar2 == 0) {
              *piVar12 = *piVar12 + 1;
            }
            goto joined_r0x48161a48;
          }
          uVar15 = FUN_ram_4ff21a0a();
          uVar9 = (uint)uVar15 - (int)uVar14;
          uVar6 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar14 >> 0x20);
          uVar4 = (uint)((uint)uVar15 < uVar9);
          uVar7 = uVar6 - uVar4;
          if ((0 < (int)uVar7) || ((uVar6 == uVar4 && (5000000 < uVar9)))) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"sdmmc_sd","W (%lu) %s: read sectors dma - timeout\n",uVar5,
                             "sdmmc_sd");
            goto joined_r0x48161a48;
          }
          if (((int)uVar1 < (int)uVar7) || ((uVar7 == uVar1 && (uVar10 < uVar9)))) {
            uVar1 = uVar1 << 1 | uVar10 >> 0x1f;
            uVar10 = uVar10 << 1;
            FUN_ram_4ff3c2b6(1);
          }
          iVar3 = FUN_ram_48163054(param_1,&uStack_90);
        } while (iVar3 == 0);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"sdmmc_sd","W (%lu) %s: %s: sdmmc_send_cmd_send_status returned 0x%x\n",
                         uVar5,"sdmmc_sd","read_tuning_block",iVar3);
      }
      else {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"sdmmc_sd","W (%lu) %s: %s: sdmmc_send_cmd returned 0x%x\n",uVar5,
                         "sdmmc_sd","read_tuning_block",iVar3);
      }
    }
joined_r0x48161a48:
    if (iVar13 == 3) {
      uVar4 = 0;
      uVar6 = 0;
      uVar1 = 0xffffffff;
      uVar10 = 0;
      break;
    }
    iVar13 = iVar13 + 1;
    piVar12 = piVar12 + 1;
    iVar2 = (*(code *)param_1[0x13])(uVar8,iVar13);
  } while( true );
  do {
    uVar7 = uVar10;
    piVar12 = piVar11;
    if (*piVar11 == 1) {
LAB_ram_48161b98:
      uVar7 = uVar7 + 1;
      piVar11 = piVar12;
    }
    else if (uVar6 < uVar10) {
      piVar12 = piVar11 + 1;
      if (uVar1 + 1 == 3) {
        uVar1 = 2;
        goto LAB_ram_48161bd6;
      }
      uVar4 = uVar1;
      uVar6 = uVar10;
      if (piVar11[1] == 1) {
        uVar7 = 0;
        uVar1 = uVar1 + 1;
        goto LAB_ram_48161b98;
      }
      uVar7 = uVar1 + 2;
      piVar11 = piVar11 + 2;
      if (uVar7 == 3) {
        uVar4 = 0;
        uVar7 = 0;
        if (uVar10 == 0) goto LAB_ram_48161aa0;
        goto joined_r0x48161c54;
      }
      uVar1 = uVar7;
      if (*piVar11 == 1) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0;
    }
    uVar1 = uVar1 + 1;
    piVar11 = piVar11 + 1;
    uVar10 = uVar7;
  } while (uVar1 != 3);
  uVar1 = uVar4;
  uVar4 = uVar7;
  uVar10 = uVar6;
  if (uVar6 <= uVar7) {
LAB_ram_48161aa0:
    uVar4 = uVar7;
    uVar10 = uVar7;
  }
joined_r0x48161c54:
  if (uVar4 == 4) {
    uVar1 = 2;
    if (uVar10 != 4) {
LAB_ram_48161aac:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdmmc_sd.c",0x1c2,"sdmmc_do_timing_tuning",
                       "false && \"exceeds max tuning point\"");
    }
  }
  else {
LAB_ram_48161bd6:
    if (uVar10 != 1) {
      if (4 < uVar10) goto LAB_ram_48161aac;
      uVar1 = uVar1 >> 1;
    }
  }
  iVar13 = (*(code *)param_1[0x13])(uVar8,uVar1);
  if (iVar13 != 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): failed to set input delay\n",uVar5,"sdmmc_sd"
                     ,"sdmmc_do_timing_tuning",0x1c7);
  }
  return iVar13;
}


