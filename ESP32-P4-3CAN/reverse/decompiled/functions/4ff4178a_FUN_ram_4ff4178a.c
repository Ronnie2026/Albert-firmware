/* Firmware entry: 0x4ff4178a */

void FUN_ram_4ff4178a(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xdfffffff;
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0x7fffffff;
  return;
}


