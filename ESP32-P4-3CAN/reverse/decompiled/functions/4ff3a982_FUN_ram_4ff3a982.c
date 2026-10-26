/* Firmware entry: 0x4ff3a982 */

void FUN_ram_4ff3a982(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_2 != 0) && (param_3 != 0)) && (param_1 != 0)) {
    if (param_2 + 0xe0000000U < 0x10000000) {
      *(undefined4 *)(param_1 + 0x400) = 0;
      return;
    }
    iVar3 = *(int *)(param_3 + 8);
    uVar2 = 0x400;
    uVar1 = (param_4 + param_2) - iVar3;
    if (uVar1 < 0x401) {
      iVar3 = FUN_ram_4ff45158(param_1,(param_3 - param_2) + iVar3,uVar1);
      uVar2 = uVar1;
    }
    else {
      iVar3 = FUN_ram_4ff45158(param_1,(param_3 - param_2) + iVar3,0x400);
    }
    *(uint *)(iVar3 + 0x400) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x400) = 0;
  return;
}


