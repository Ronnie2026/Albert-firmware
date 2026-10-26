/* Firmware entry: 0x4802404e */

int FUN_ram_4802404e(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    if (param_1 != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))();
    }
    iVar1 = 0;
  }
  else {
    iVar1 = thunk_FUN_ram_4ff2070c(param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      if (param_1 == 0) {
        return iVar1;
      }
      FUN_ram_4ff45158(iVar1,param_1,param_2);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
    }
  }
  return iVar1;
}


