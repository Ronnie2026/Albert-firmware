/* Firmware entry: 0x4ff43334 */

int FUN_ram_4ff43334(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 != (int *)0x0) {
    iVar3 = *param_1;
    if (iVar3 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ec14(iVar3,0xffffffff);
    }
    iVar3 = FUN_ram_4ff4398e(param_1[4],param_2);
    if (iVar3 != 0) {
      iVar1 = FUN_ram_4ff4347c();
      param_1[1] = param_1[1] - iVar1;
      iVar1 = FUN_ram_4ff43478();
      uVar2 = param_1[1] - iVar1;
      param_1[1] = uVar2;
      if (uVar2 < (uint)param_1[2]) {
        param_1[2] = uVar2;
      }
    }
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(iVar1);
      return iVar3;
    }
    return iVar3;
  }
  return 0;
}


