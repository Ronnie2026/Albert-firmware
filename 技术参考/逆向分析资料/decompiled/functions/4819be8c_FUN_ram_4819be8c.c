/* Firmware entry: 0x4819be8c */

void FUN_ram_4819be8c(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (PTR_DAT_ram_4ff4bb0c_ram_4ff47fc4 == param_1) {
    return;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xc) != 0) {
      iVar1 = 0;
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + iVar1);
        while (piVar2 != (int *)0x0) {
          piVar2 = (int *)*piVar2;
          FUN_ram_4ff450c2(param_1);
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 != 0x80);
      FUN_ram_4ff450c2(param_1,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc));
    }
    if (**(int **)(param_1 + 0x24) != 0) {
      FUN_ram_4ff450c2(param_1);
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_ram_4ff450c2(param_1);
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4819bf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1);
    return;
  }
  return;
}


