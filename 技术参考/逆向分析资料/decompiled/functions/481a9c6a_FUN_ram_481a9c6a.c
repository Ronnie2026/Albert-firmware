/* Firmware entry: 0x481a9c6a */

int FUN_ram_481a9c6a(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    param_3 = param_2;
  }
  iVar1 = FUN_ram_481a9b02(param_1,param_3);
  if (iVar1 != 0) {
    FUN_ram_481a9916(iVar1,*(int *)(iVar1 + 0x14) + param_1,param_2 - *(int *)(iVar1 + 0x14));
  }
  return iVar1;
}


