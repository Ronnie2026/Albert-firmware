/* Firmware entry: 0x481a91aa */

void FUN_ram_481a91aa(int *param_1)

{
  int iVar1;
  uint *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  puVar2 = (uint *)(param_1[1] * 0x24 + iVar1);
  *puVar2 = *puVar2 & 0x7fffffff;
  *puVar2 = *puVar2 & 0xdfffffff;
  *puVar2 = *puVar2 & 0xfffffbff;
  *(uint *)(iVar1 + 0xfc) = *(uint *)(iVar1 + 0xfc) & 0xefffffff;
  *param_1 = 0;
  return;
}


