/* Firmware entry: 0x4815e06e */

int FUN_ram_4815e06e(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    do {
      iVar2 = FUN_ram_4815bb14(iVar1,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    iVar2 = param_2[3];
    iVar1 = param_2[1];
  }
  uVar3 = param_1[5] * 0x7e + iVar1;
  param_2[3] = iVar2 + param_1[5] * 0x7e;
  param_2[1] = uVar3;
  if (uVar3 < 0x7e) {
    uVar3 = 0x7e;
  }
  param_2[2] = uVar3 - 0x7e;
  return 0;
}


