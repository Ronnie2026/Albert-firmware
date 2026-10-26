/* Firmware entry: 0x481270e2 */

uint FUN_ram_481270e2(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_ram_4ff3fdde(*(int *)(param_1 + 8),0);
    return uVar1 >> 1 & 1;
  }
  return *(uint *)(param_1 + 0xc) >> 1 & 1;
}


