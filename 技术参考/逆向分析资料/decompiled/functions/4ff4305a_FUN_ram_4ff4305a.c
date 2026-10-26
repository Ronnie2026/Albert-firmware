/* Firmware entry: 0x4ff4305a */

void FUN_ram_4ff4305a(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x800000;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xff7fffff;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}


