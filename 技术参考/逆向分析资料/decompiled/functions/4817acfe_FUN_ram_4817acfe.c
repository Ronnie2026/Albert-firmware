/* Firmware entry: 0x4817acfe */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4817acfe(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(auStack_30);
  FUN_ram_4817fb86(auStack_28);
  if (param_6 == 0) {
    if ((param_2 == 0) || (param_3 == 0)) goto joined_r0x4817add0;
LAB_ram_4817ad52:
    iVar2 = param_5;
    iVar1 = param_4;
    if (param_1 != 0) {
      iVar2 = FUN_ram_4817bf84(auStack_30,param_2,param_3);
      if (iVar2 != 0) goto LAB_ram_4817aeca;
      iVar2 = FUN_ram_481802e8(param_1,1);
      if ((iVar2 < 1) || (iVar2 = FUN_ram_4818023e(auStack_30,param_1), iVar2 != 0))
      goto LAB_ram_4817adba;
      goto joined_r0x4817ae1c;
    }
  }
  else {
    if (param_2 == 0) {
      if ((param_3 != 0) && (iVar2 = FUN_ram_481814b6(param_3,0x32,param_6,param_7), iVar2 != 0))
      goto LAB_ram_4817adba;
    }
    else {
      iVar2 = FUN_ram_481814b6(param_2,0x32,param_6,param_7);
      if (iVar2 != 0) goto LAB_ram_4817adba;
      if (param_3 != 0) {
        iVar2 = FUN_ram_481814b6(param_3,0x32,param_6,param_7);
        if (iVar2 != 0) goto LAB_ram_4817adba;
        goto LAB_ram_4817ad52;
      }
    }
joined_r0x4817add0:
    if (param_1 == 0) goto LAB_ram_4817ad84;
joined_r0x4817ae1c:
    if ((param_4 == 0) || (param_5 == 0)) goto LAB_ram_4817ad84;
    iVar2 = FUN_ram_481802e8(param_4,1);
    if ((((iVar2 < 1) || (iVar2 = FUN_ram_481802e8(param_5,1), iVar2 < 1)) ||
        (iVar2 = FUN_ram_4818023e(param_4,param_1), -1 < iVar2)) ||
       (iVar3 = FUN_ram_4818023e(param_5,param_1), iVar2 = param_3, iVar1 = param_2, -1 < iVar3))
    goto LAB_ram_4817adba;
  }
  if ((iVar1 == 0) || (iVar2 == 0)) {
LAB_ram_4817ad84:
    FUN_ram_4817fb90(auStack_30);
    FUN_ram_4817fb90(auStack_28);
    return 0;
  }
  iVar2 = FUN_ram_481802e8(param_2,1);
  if ((0 < iVar2) && (iVar2 = FUN_ram_481802e8(param_3,1), 0 < iVar2)) {
    iVar2 = FUN_ram_4817bf84(auStack_30,param_4,param_5);
    if ((((iVar2 != 0) || (iVar2 = FUN_ram_481805c8(auStack_30,auStack_30,1), iVar2 != 0)) ||
        (iVar2 = FUN_ram_481805c8(auStack_28,param_2,1), iVar2 != 0)) ||
       (iVar2 = FUN_ram_48180a3c(auStack_30,auStack_30,auStack_28), iVar2 != 0)) {
LAB_ram_4817aeca:
      FUN_ram_4817fb90(auStack_30);
      FUN_ram_4817fb90(auStack_28);
      if (iVar2 == -0x4200) {
        return -0x4200;
      }
      return iVar2 + -0x4200;
    }
    iVar2 = FUN_ram_481802e8(auStack_30,0);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4817bf84(auStack_30,param_4,param_5);
      if ((((iVar2 != 0) || (iVar2 = FUN_ram_481805c8(auStack_30,auStack_30,1), iVar2 != 0)) ||
          (iVar2 = FUN_ram_481805c8(auStack_28,param_3,1), iVar2 != 0)) ||
         (iVar2 = FUN_ram_48180a3c(auStack_30,auStack_30,auStack_28), iVar2 != 0))
      goto LAB_ram_4817aeca;
      iVar2 = FUN_ram_481802e8(auStack_30,0);
      if (iVar2 == 0) goto LAB_ram_4817ad84;
    }
  }
LAB_ram_4817adba:
  FUN_ram_4817fb90(auStack_30);
  FUN_ram_4817fb90(auStack_28);
  return -0x4200;
}


