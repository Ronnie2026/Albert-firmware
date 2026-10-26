/* Firmware entry: 0x4ff3549a */

uint FUN_ram_4ff3549a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(uint *)(param_1 + 8);
  if (((uVar2 & 2) == 0) || (uVar1 = 0, *(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x2c))) {
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      if ((*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x24)) && ((uVar2 & 4) == 0)) {
        return 0;
      }
      uVar1 = 1;
      if ((uVar2 & 3) == 0) {
        return *(uint *)(*(int *)(param_1 + 0x28) + 4) >> 3 & 1;
      }
    }
  }
  return uVar1;
}


