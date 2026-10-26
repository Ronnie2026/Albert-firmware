/* Firmware entry: 0x48171b10 */

int FUN_ram_48171b10(int *param_1,int param_2,uint param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 0) {
    return -0x6100;
  }
  uVar4 = *(uint *)(*param_1 + 4);
  *param_5 = 0;
  uVar5 = uVar4 & 0x1f;
  if (uVar5 == 0) {
    return -0x6380;
  }
  uVar1 = uVar4 & 0xf000;
  if (uVar1 == 0x1000) {
    if (param_3 == uVar5) {
      iVar2 = *(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar4 >> 0x18 & 0x7c));
      *param_5 = param_3;
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 4);
                    /* WARNING: Could not emulate address calculation at 0x48171be6 */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_1[2],param_2,param_4,param_5,UNRECOVERED_JUMPTABLE);
      return iVar2;
    }
    return -0x6280;
  }
  if (uVar1 == 0x6000) {
    iVar2 = FUN_ram_4817d51c(param_1[0xf]);
    return iVar2;
  }
  if (uVar1 == 0x9000) {
    iVar2 = FUN_ram_48182ac0(param_1[0xf]);
    return iVar2;
  }
  if (param_2 == param_4) {
    if (param_1[9] != 0) {
      return -0x6100;
    }
    if (param_3 % uVar5 != 0) {
      return -0x6100;
    }
  }
  if (uVar1 != 0x2000) {
    if (uVar1 == 0x3000) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar4 >> 0x18 & 0x7c)) +
                     0xc);
      iVar2 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_1[2],param_3,param_1 + 9,param_1 + 10,param_2,param_4,
                         UNRECOVERED_JUMPTABLE);
      if (iVar2 == 0) {
        *param_5 = param_3;
        return 0;
      }
      return iVar2;
    }
    if (uVar1 == 0x4000) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar4 >> 0x18 & 0x7c)) +
                     0x10);
      iVar2 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_3,param_1 + 9,param_1 + 10,param_2,param_4,
                         UNRECOVERED_JUMPTABLE);
    }
    else {
      if (uVar1 == 0x5000) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar4 >> 0x18 & 0x7c)) +
                       0x14);
        iVar2 = (*UNRECOVERED_JUMPTABLE)
                          (param_1[0xf],param_3,param_1 + 9,param_1 + 10,param_1 + 5,param_2,param_4
                           ,UNRECOVERED_JUMPTABLE);
        if (iVar2 == 0) {
          *param_5 = param_3;
          return 0;
        }
        return iVar2;
      }
      if ((uVar1 != 0xa000) || (param_1[9] != 0)) {
        return -0x6080;
      }
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar4 >> 0x18 & 0x7c)) +
                     0x18);
      iVar2 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_1[2],param_3,param_1 + 10,param_2,param_4,
                         UNRECOVERED_JUMPTABLE);
    }
    if (iVar2 == 0) {
      *param_5 = param_3;
      return 0;
    }
    return iVar2;
  }
  iVar2 = param_1[9];
  if (param_1[2] == 0) {
    uVar4 = uVar5 - iVar2;
    if (param_1[3] == 0) goto joined_r0x48171c84;
    if (param_3 <= uVar4) goto LAB_ram_48171c08;
    if (iVar2 != 0) goto LAB_ram_48171d80;
    uVar1 = param_3 % uVar4;
    if (param_3 % uVar4 == 0) {
      uVar1 = uVar4;
    }
  }
  else {
    if (param_1[2] == 1) {
      uVar4 = uVar5 - iVar2;
joined_r0x48171c84:
      if (param_3 < uVar4) {
LAB_ram_48171c08:
        FUN_ram_4ff45158(iVar2 + 0x14 + (int)param_1,param_2,param_3);
        param_1[9] = param_1[9] + param_3;
        return 0;
      }
    }
    if (iVar2 != 0) {
      uVar4 = uVar5 - iVar2;
LAB_ram_48171d80:
      FUN_ram_4ff45158(iVar2 + 0x14 + (int)param_1,param_2,uVar4);
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 +
                              (*(byte *)(*param_1 + 7) & 0x7c)) + 8);
      iVar3 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_1[2],uVar5,param_1 + 10,param_1 + 5,param_4,
                         UNRECOVERED_JUMPTABLE);
      if (iVar3 != 0) {
        return iVar3;
      }
      param_2 = param_2 + uVar4;
      *param_5 = *param_5 + uVar5;
      param_3 = (iVar2 + param_3) - uVar5;
      param_4 = param_4 + uVar5;
      param_1[9] = 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = param_3 % uVar5;
    if ((param_3 % uVar5 == 0) &&
       ((iVar2 = param_1[2], iVar2 != 0 || (uVar1 = uVar5, param_1[3] == 0))))
    goto LAB_ram_48171c9e;
  }
  param_3 = param_3 - uVar1;
  FUN_ram_4ff45158(param_1 + 5,param_2 + param_3,uVar1);
  param_1[9] = param_1[9] + uVar1;
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = param_1[2];
LAB_ram_48171c9e:
  UNRECOVERED_JUMPTABLE =
       *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 +
                          (*(byte *)(*param_1 + 7) & 0x7c)) + 8);
  iVar2 = (*UNRECOVERED_JUMPTABLE)
                    (param_1[0xf],iVar2,param_3,param_1 + 10,param_2,param_4,UNRECOVERED_JUMPTABLE);
  if (iVar2 == 0) {
    *param_5 = *param_5 + param_3;
    return 0;
  }
  return iVar2;
}


