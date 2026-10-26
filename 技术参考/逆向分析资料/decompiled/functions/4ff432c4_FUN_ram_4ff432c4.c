/* Firmware entry: 0x4ff432c4 */

void FUN_ram_4ff432c4(int *param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_ram_4ff431d4(param_1,param_2 + -8);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
    }
    iVar1 = FUN_ram_4ff4347c(param_2);
    param_1[1] = param_1[1] + iVar1;
    iVar1 = FUN_ram_4ff43478();
    param_1[1] = param_1[1] + iVar1;
    FUN_ram_4ff4348a(param_1[4],param_2);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(iVar1);
      return;
    }
  }
  return;
}


