/* Firmware entry: 0x4ff30018 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff30018(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte abStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_4ff571a8,s_E___lu___s___s__d___invalid_argu_ram_4ff571ac,uVar3,
                     &DAT_ram_4ff571a8,"esp_ldo_acquire_channel",0x2e);
    return 0x102;
  }
  uVar14 = *param_1 - 1;
  if (3 < uVar14) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_4ff571a8,s_E___lu___s___s__d___invalid_ldo_c_ram_4ff571d4,uVar3,
                     &DAT_ram_4ff571a8,"esp_ldo_acquire_channel",0x2f);
    return 0x102;
  }
  if ((param_1[1] == 0xce4) || (param_1[1] - 500U < 0x899)) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f50,0xffffffff);
    if ((*(byte *)(param_1 + 2) & 1) != 0) goto LAB_ram_4ff30068;
LAB_ram_4ff300d0:
    iVar13 = uVar14 * 0x10;
    iVar2 = *(int *)(&DAT_ram_4ff4b9cc + iVar13);
    if (iVar2 != 0) {
      if (((&DAT_ram_4ff4b9d0)[iVar13] & 1) != 0) {
LAB_ram_4ff30086:
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f50);
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_4ff571a8,s_E___lu___s___s__d___can_t_acquir_ram_4ff572b4,uVar3,
                         &DAT_ram_4ff571a8,"esp_ldo_acquire_channel",0x6d);
        return 0x102;
      }
      iVar4 = param_1[1];
      if (*(int *)(&DAT_ram_4ff4b9c8 + iVar13) != iVar4) {
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f50);
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_4ff571a8,s_E___lu___s___s__d___can_t_change_ram_4ff5724c,uVar3,
                         &DAT_ram_4ff571a8,"esp_ldo_acquire_channel",0x6a,param_1[1],
                         *(undefined4 *)(&DAT_ram_4ff4b9c8 + iVar13));
        return 0x102;
      }
      goto LAB_ram_4ff303fa;
    }
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,&DAT_ram_4ff571a8,s_W___lu___s__The_voltage_value__d_ram_4ff57200,uVar3,
                     &DAT_ram_4ff571a8,param_1[1],500,0xa8c);
    iVar13 = *param_1;
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f50,0xffffffff);
    uVar14 = iVar13 - 1;
    if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_ram_4ff300d0;
LAB_ram_4ff30068:
    iVar13 = uVar14 * 0x10;
    if ((((&DAT_ram_4ff4b9d0)[iVar13] & 1) == 0) || (*(int *)(&DAT_ram_4ff4b9cc + iVar13) != 0))
    goto LAB_ram_4ff30086;
  }
  iVar2 = param_1[1];
  iVar4 = FUN_ram_4ff20644();
  if (iVar4 == 0) {
LAB_ram_4ff30150:
    iVar1 = 1000;
    iVar4 = 1000;
    iVar16 = 0;
  }
  else {
    if (uVar14 == 2) {
      uVar12 = _DAT_ram_5012d050 >> 6;
      uVar15 = _DAT_ram_5012d050 >> 0xe;
      uVar11 = _DAT_ram_5012d050 >> 0x14;
    }
    else {
      if (uVar14 != 3) goto LAB_ram_4ff30150;
      uVar12 = (_DAT_ram_5012d050 >> 0x1a) + (_DAT_ram_5012d054 & 3) * 0x40;
      uVar15 = _DAT_ram_5012d054 >> 2;
      uVar11 = _DAT_ram_5012d054 >> 8;
    }
    iVar4 = 1000;
    if (((uVar12 & 0xff) != 0) && (iVar4 = (uVar12 & 0xff) + 0x3cf, (char)uVar12 < '\0')) {
      iVar4 = 0x3cf - (uVar12 & 0x7f);
    }
    iVar16 = 0;
    if ((uVar15 & 0x3f) != 0) {
      if ((uVar15 & 0x20) == 0) {
        iVar16 = ((uVar15 & 0x3f) - 3) * 0x14;
      }
      else {
        iVar16 = (-3 - (uVar15 & 0x1f)) * 0x14;
      }
    }
    iVar1 = 1000;
    if (((uVar11 & 0x3f) != 0) && (iVar1 = (uVar11 & 0x3f) + 0x3de, (uVar11 & 0x20) != 0)) {
      iVar1 = 0x3de - (uVar11 & 0x1f);
    }
  }
  iVar10 = 400000000;
  iVar5 = 2;
  uVar15 = 0;
  uVar11 = 0;
  uVar12 = 0;
  do {
    iVar9 = iVar5;
    if (uVar15 < 9) {
      iVar9 = uVar15 + 10;
    }
    uVar6 = 0;
    iVar9 = iVar9 * iVar4 + iVar16;
    uVar7 = iVar9 * -4000 + iVar2 * 80000;
    do {
      iVar8 = ((int)uVar7 >> 0x1f ^ uVar7) - ((int)uVar7 >> 0x1f);
      if (iVar8 < iVar10) {
        iVar10 = iVar8;
        uVar11 = uVar6;
        uVar12 = uVar15 & 0xff;
      }
      uVar6 = uVar6 + 1 & 0xff;
      uVar7 = uVar7 - iVar9 * iVar1;
    } while (uVar6 != 8);
    uVar15 = uVar15 + 1;
    iVar5 = iVar5 + 2;
  } while (uVar15 != 0x10);
  iVar4 = FUN_ram_4ff20644();
  if (iVar4 == 0) {
LAB_ram_4ff30300:
    uVar12 = uVar12 & 0xf;
    uVar11 = uVar11 & 7;
  }
  else if (uVar14 == 0) {
    if (((iVar2 != 0x708) || ((_DAT_ram_5012d04c >> 0x18 & 0xf) == 0)) ||
       ((_DAT_ram_5012d050 & 7) == 0)) goto LAB_ram_4ff30300;
    uVar11 = _DAT_ram_5012d050 & 7;
    uVar12 = _DAT_ram_5012d04c >> 0x18 & 0xf;
  }
  else {
    if (((uVar14 != 1) || (iVar2 != 0x708)) ||
       ((_DAT_ram_5012d04c >> 0x1c == 0 || ((_DAT_ram_5012d050 >> 3 & 7) == 0))))
    goto LAB_ram_4ff30300;
    uVar11 = _DAT_ram_5012d050 >> 3 & 7;
    uVar12 = _DAT_ram_5012d04c >> 0x1c;
  }
  abStack_34[0] = 0;
  abStack_34[1] = 3;
  abStack_34[2] = 1;
  abStack_34[3] = 4;
  iVar4 = (uint)abStack_34[uVar14] * 8;
  *(uint *)(iVar4 + 0x501151b8) =
       (uint)(iVar2 == 0xce4) << 0xe | *(uint *)(iVar4 + 0x501151b8) & 0xffffbfff;
  *(uint *)(iVar4 + 0x501151bc) = *(uint *)(iVar4 + 0x501151bc) & 0xfffffff | uVar12 << 0x1c;
  *(uint *)(iVar4 + 0x501151bc) = *(uint *)(iVar4 + 0x501151bc) & 0xfc7fffff | uVar11 << 0x17;
  abStack_34[0] = 0;
  abStack_34[1] = 3;
  abStack_34[2] = 1;
  abStack_34[3] = 4;
  iVar2 = (uint)abStack_34[uVar14] * 8;
  *(uint *)(iVar2 + 0x501151b8) =
       ((uint)param_1[2] >> 1 & 1 ^ 1) << 7 | *(uint *)(iVar2 + 0x501151b8) & 0xffffff7f;
  *(uint *)(iVar2 + 0x501151b8) = *(uint *)(iVar2 + 0x501151b8) & 0xfffff1ff;
  abStack_34[0] = 0;
  abStack_34[1] = 3;
  abStack_34[2] = 1;
  abStack_34[3] = 4;
  *(uint *)((uint)abStack_34[uVar14] * 8 + 0x501151bc) =
       *(uint *)((uint)abStack_34[uVar14] * 8 + 0x501151bc) | 0x4000000;
  abStack_34[0] = 0;
  abStack_34[1] = 3;
  abStack_34[2] = 1;
  abStack_34[3] = 4;
  uVar11 = FUN_ram_4ff20626();
  if ((99 < uVar11) && (uVar14 == 0)) {
    _DAT_ram_50115028 = _DAT_ram_50115028 & 0xff87ffff | 0x400000;
  }
  iVar2 = (abStack_34[uVar14] + 0x36) * 8;
  *(uint *)(iVar2 + 0x50115008) = *(uint *)(iVar2 + 0x50115008) | 0x100;
  iVar2 = *(int *)(&DAT_ram_4ff4b9cc + iVar13);
  iVar4 = param_1[1];
LAB_ram_4ff303fa:
  iVar1 = param_1[2];
  iVar16 = *param_1;
  *(int *)(&DAT_ram_4ff4b9c8 + iVar13) = iVar4;
  *(int *)(&DAT_ram_4ff4b9cc + iVar13) = iVar2 + 1;
  (&DAT_ram_4ff4b9d0)[iVar13] = (&DAT_ram_4ff4b9d0)[iVar13] & 0xfe | (byte)iVar1 & 1;
  *(int *)(&DAT_ram_4ff4b9c4 + iVar13) = iVar16;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f50);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = &DAT_ram_4ff4b9c4 + iVar13;
  }
  return 0;
}


