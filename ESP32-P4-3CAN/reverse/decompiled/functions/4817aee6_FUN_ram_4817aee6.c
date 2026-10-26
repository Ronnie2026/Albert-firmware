/* Firmware entry: 0x4817aee6 */

int FUN_ram_4817aee6(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(auStack_30);
  FUN_ram_4817fb86(auStack_28);
  if (param_4 == 0) {
    if (param_5 == 0) {
      if (param_6 != 0) {
        if ((param_1 == 0) || (param_2 == 0)) goto LAB_ram_4817af4c;
LAB_ram_4817afa6:
        iVar1 = FUN_ram_4817bf84(auStack_30,param_6,param_2);
        if (((iVar1 != 0) || (iVar1 = FUN_ram_481805c8(auStack_30,auStack_30,1), iVar1 != 0)) ||
           (iVar1 = FUN_ram_48180a3c(auStack_30,auStack_30,param_1), iVar1 != 0))
        goto LAB_ram_4817af2a;
        iVar1 = FUN_ram_481802e8(auStack_30,0);
        if (iVar1 != 0) goto LAB_ram_4817b008;
      }
    }
    else {
LAB_ram_4817af48:
      if (param_2 == 0) goto LAB_ram_4817af4c;
      iVar1 = FUN_ram_481805c8(auStack_30,param_2,1);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_48180594(auStack_28,param_5,param_3), iVar1 != 0)) ||
         (iVar1 = FUN_ram_48180a3c(auStack_28,auStack_28,auStack_30), iVar1 != 0))
      goto LAB_ram_4817af2a;
      iVar1 = FUN_ram_481802e8(auStack_28,0);
      if (iVar1 != 0) goto LAB_ram_4817b008;
      iVar1 = param_1;
      if (param_6 != 0) goto joined_r0x4817afa4;
    }
LAB_ram_4817afd4:
    iVar1 = 0;
    goto LAB_ram_4817af52;
  }
  if (param_1 != 0) {
    iVar1 = FUN_ram_481805c8(auStack_30,param_1,1);
    if (((iVar1 == 0) && (iVar1 = FUN_ram_48180594(auStack_28,param_4,param_3), iVar1 == 0)) &&
       (iVar1 = FUN_ram_48180a3c(auStack_28,auStack_28,auStack_30), iVar1 == 0)) {
      iVar1 = FUN_ram_481802e8(auStack_28,0);
      if (iVar1 != 0) goto LAB_ram_4817b008;
      if (param_5 != 0) goto LAB_ram_4817af48;
      iVar1 = param_2;
      if (param_6 == 0) goto LAB_ram_4817afd4;
joined_r0x4817afa4:
      if (iVar1 != 0) goto LAB_ram_4817afa6;
    }
    else {
LAB_ram_4817af2a:
      if (iVar1 == -0x4200) {
LAB_ram_4817b008:
        iVar1 = -0x4200;
        goto LAB_ram_4817af52;
      }
      if (iVar1 != -0x4080) {
        iVar1 = iVar1 + -0x4200;
        goto LAB_ram_4817af52;
      }
    }
  }
LAB_ram_4817af4c:
  iVar1 = -0x4080;
LAB_ram_4817af52:
  FUN_ram_4817fb90(auStack_30);
  FUN_ram_4817fb90(auStack_28);
  return iVar1;
}


