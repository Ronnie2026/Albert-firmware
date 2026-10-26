/* Firmware entry: 0x481770ec */

undefined4 FUN_ram_481770ec(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0xffffc180;
  }
  if (*param_1 == 0) {
    if (*(code **)(param_2 + 0x24) != (code *)0x0) {
      iVar1 = (**(code **)(param_2 + 0x24))();
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffc080;
      }
    }
    *param_1 = param_2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffc180;
  }
  return uVar2;
}


