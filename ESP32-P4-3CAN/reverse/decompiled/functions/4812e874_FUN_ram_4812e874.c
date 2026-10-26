/* Firmware entry: 0x4812e874 */

bool FUN_ram_4812e874(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x8c01) {
    return false;
  }
  iVar1 = FUN_ram_4812d062();
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (param_1 < uVar2) {
    return param_1 + param_2 <= uVar2;
  }
  return uVar2 + *(int *)(iVar1 + 0x10) <= param_1;
}


