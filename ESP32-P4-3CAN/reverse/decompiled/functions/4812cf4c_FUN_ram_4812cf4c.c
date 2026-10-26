/* Firmware entry: 0x4812cf4c */

void FUN_ram_4812cf4c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)(param_1 + param_3 * 0x20);
  *puVar1 = param_2;
  uVar2 = FUN_ram_4812e9f6(puVar1);
  uVar4 = *(uint *)(param_4 + 0x14);
  puVar1[7] = uVar2;
  iVar3 = FUN_ram_4812e61e(param_4,-param_3 & uVar4);
  if (iVar3 != 0) {
    return;
  }
  FUN_ram_4812e4d6(param_4,*(uint *)(param_4 + 0x14) & -param_3,puVar1,0x20);
  return;
}


