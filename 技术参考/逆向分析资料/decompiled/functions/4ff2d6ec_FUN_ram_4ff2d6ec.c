/* Firmware entry: 0x4ff2d6ec */

undefined4 FUN_ram_4ff2d6ec(int param_1)

{
  int *piVar1;
  uint *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  piVar1 = (int *)(param_1 + 0x2c);
  fence();
  fence();
  if (*piVar1 != 2) {
    if (*piVar1 != 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x103;
    }
    *piVar1 = 3;
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(param_1 + 0x38,0xffffffff);
    puVar2 = (uint *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 4) * 0x24);
    *puVar2 = *puVar2 & 0xfffffbff | (*(uint *)(param_1 + 0x50) & 4) << 8;
    *puVar2 = *puVar2 | 0x80000000;
    fence();
    *(undefined4 *)(param_1 + 0x2c) = 2;
    fence();
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(param_1 + 0x38);
  }
  return 0;
}


