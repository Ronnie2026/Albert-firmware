/* Firmware entry: 0x48131cdc */

void FUN_ram_48131cdc(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) & 0xfffffffe;
  *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) & 0xfffffff7;
  *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) & 0xffffffef;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffbfff;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xfffffffd;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0xc;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffffcf | 0x10;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xfff003ff;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xfffffeff;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffdfff;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}


