/* Firmware entry: 0x48183558 */

int FUN_ram_48183558(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(int *)(param_1 + 0x40) + 7U >> 3;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  iVar2 = FUN_ram_481800da(param_2,param_3,uVar1);
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x40) < uVar1 * 8) &&
       (iVar3 = FUN_ram_4818019e(param_2,uVar1 * 8 - *(uint *)(param_1 + 0x40)), iVar3 != 0)) {
      return iVar3;
    }
    iVar3 = FUN_ram_4818023e(param_2,param_1 + 0x34);
    if (-1 < iVar3) {
      iVar2 = FUN_ram_48180594(param_2,param_2,param_1 + 0x34);
      return iVar2;
    }
  }
  return iVar2;
}


