/* Firmware entry: 0x480270e2 */

void FUN_ram_480270e2(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
        iVar1 = *param_1;
      }
    }
    FUN_ram_4800b652((char)param_1[1],param_2,param_3);
    if (*param_1 != 0) {
      FUN_ram_4ff3afa2(*param_1,0,0,0);
      return;
    }
  }
  return;
}


