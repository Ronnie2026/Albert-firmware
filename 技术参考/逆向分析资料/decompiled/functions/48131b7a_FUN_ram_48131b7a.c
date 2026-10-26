/* Firmware entry: 0x48131b7a */

void FUN_ram_48131b7a(int *param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xfff003ff | (param_2 & 0x3ff) << 10;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}


