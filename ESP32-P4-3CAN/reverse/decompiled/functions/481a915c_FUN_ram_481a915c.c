/* Firmware entry: 0x481a915c */

void FUN_ram_481a915c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar2 = 0x500c2000;
  }
  else {
    iVar2 = 0x500c3000;
  }
  param_1[1] = param_3;
  puVar3 = (uint *)(param_3 * 0x24 + iVar2);
  uVar1 = *puVar3;
  *param_1 = iVar2;
  *puVar3 = uVar1 & 0x7fffffff;
  *puVar3 = *puVar3 & 0xdfffffff;
  *puVar3 = *puVar3 & 0xfffffbff;
  *(uint *)(iVar2 + 0xfc) = *(uint *)(iVar2 + 0xfc) | 0x10000000;
  return;
}


