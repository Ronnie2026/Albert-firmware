/* Firmware entry: 0x4ff430de */

void FUN_ram_4ff430de(int *param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if (param_2 == 0) {
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffffbf;
    *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
    do {
    } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
    return;
  }
  *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) & 0xffffff00 | param_2 & 0xff;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x40;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}


