/* Firmware entry: 0x4ff32a0e */

void FUN_ram_4ff32a0e(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_ram_4ff210fc(param_1[5],param_1[2],0);
    return;
  }
  if (iVar1 == 1) {
    if (param_1[1] == DAT_ram_4ff6d9d4) {
      FUN_ram_4ff32230(param_1[5],param_1 + 2);
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_ram_4ff3218a();
    return;
  }
  FUN_ram_4ff3280a(param_1);
  return;
}


