/* Firmware entry: 0x481a976e */

void FUN_ram_481a976e(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar1 = param_1[2];
    if (param_2 < (uint)param_1[2]) {
      uVar1 = param_2;
    }
    param_1[2] = uVar1;
  }
  else {
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    iVar2 = *param_1;
    uVar1 = param_1[2];
    if (param_2 < (uint)param_1[2]) {
      uVar1 = param_2;
    }
    param_1[2] = uVar1;
    if (iVar2 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(iVar2);
      return;
    }
  }
  return;
}


