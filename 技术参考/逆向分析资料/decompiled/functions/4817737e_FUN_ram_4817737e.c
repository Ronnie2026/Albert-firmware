/* Firmware entry: 0x4817737e */

undefined4
FUN_ram_4817737e(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    if (param_4 != 0) {
      if (param_3 == 0) {
        return 0xffffc180;
      }
      iVar1 = *param_1;
      if (iVar1 == 0) {
        return 0xffffc180;
      }
      goto LAB_ram_481773d4;
    }
    if (*param_1 == 0) {
      return 0xffffc180;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xffffc180;
    }
    iVar1 = *param_1;
    if (iVar1 == 0) {
      return 0xffffc180;
    }
    if (param_4 != 0) goto LAB_ram_481773d4;
  }
  FUN_ram_4817697e(param_2);
  param_4 = FUN_ram_48176d4c();
  if (param_4 == 0) {
    return 0xffffc180;
  }
  iVar1 = *param_1;
LAB_ram_481773d4:
  if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x481773e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar1 + 0x14))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffc100;
}


