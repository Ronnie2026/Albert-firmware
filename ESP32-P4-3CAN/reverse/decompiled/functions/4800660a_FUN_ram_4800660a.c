/* Firmware entry: 0x4800660a */

int FUN_ram_4800660a(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  iVar1 = *param_1;
  if (iVar1 == -1) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e04,0xffffffff);
    if (*param_1 != -1) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47e04);
      iVar1 = FUN_ram_480064f2(*param_1,0xffffffff);
      return iVar1;
    }
    iVar1 = FUN_ram_4800656c(param_1,0);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e04);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = *param_1;
  }
  iVar1 = FUN_ram_480064f2(iVar1,0xffffffff);
  return iVar1;
}


