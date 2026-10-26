/* Firmware entry: 0x4818a5d8 */

int FUN_ram_4818a5d8(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_5 == 0) {
    iVar1 = FUN_ram_4818502a(param_1,param_3,param_4);
    if (iVar1 != 0) {
      return iVar1 + -0x2600;
    }
    if (*param_4 == 6) {
      iVar2 = thunk_FUN_ram_4817b126(1,8);
      if (iVar2 == 0) {
        iVar1 = -0x2880;
      }
      else {
        iVar1 = FUN_ram_48189f18(param_2,param_3,iVar2,iVar2 + 4);
        if (iVar1 == 0) {
          *param_5 = iVar2;
          return 0;
        }
        thunk_FUN_ram_4ff209c6(iVar2);
      }
    }
    else if (((*param_2 == 5) || (*param_2 == 0)) && (param_2[1] == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = -0x2300;
    }
  }
  else {
    iVar1 = -0x2800;
  }
  return iVar1;
}


