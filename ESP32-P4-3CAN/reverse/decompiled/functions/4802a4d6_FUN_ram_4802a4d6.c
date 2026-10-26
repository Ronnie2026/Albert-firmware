/* Firmware entry: 0x4802a4d6 */

int FUN_ram_4802a4d6(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar2 = FUN_ram_48025ba6();
      param_1[3] = iVar2;
      while (iVar2 = (**(code **)(*param_1 + 0x1c))(param_1), iVar2 < 0) {
        iVar2 = FUN_ram_48025ba6();
        if ((uint)param_1[2] <= (uint)(iVar2 - param_1[3])) {
          return iVar1;
        }
      }
      *(char *)(param_2 + iVar1) = (char)iVar2;
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
  }
  return iVar1;
}


