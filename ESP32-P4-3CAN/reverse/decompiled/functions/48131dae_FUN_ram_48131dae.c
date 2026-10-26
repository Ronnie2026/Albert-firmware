/* Firmware entry: 0x48131dae */

void FUN_ram_48131dae(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  uVar2 = ((*(uint *)(iVar1 + 0x20) >> 2 & 3) + (1 < (*(uint *)(iVar1 + 0x20) >> 4 & 3)) + 7 +
          (uint)((*(uint *)(iVar1 + 0x20) >> 1 & 1) != 0)) * param_2;
  if (uVar2 == 0) {
    *(uint *)(iVar1 + 100) = *(uint *)(iVar1 + 100) & 0xfffffffe;
  }
  else {
    *(uint *)(iVar1 + 100) = (uVar2 & 0x3ff) << 2 | *(uint *)(iVar1 + 100) & 0xfffff003;
    *(uint *)(iVar1 + 100) = *(uint *)(iVar1 + 100) | 1;
  }
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}


