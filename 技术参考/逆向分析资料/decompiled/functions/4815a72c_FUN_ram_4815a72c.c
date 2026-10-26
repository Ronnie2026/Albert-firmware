/* Firmware entry: 0x4815a72c */

int FUN_ram_4815a72c(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x7d < *(uint *)(param_1 + 0x38)) {
    return -1;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x50) + 0x18);
  iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),
                    *(int *)(param_1 + 8) + 0x40 + *(uint *)(param_1 + 0x38) * 0x20,param_2,0x20,
                    pcVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4815a6ca(param_1,*(undefined4 *)(param_1 + 0x38),2);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x3c) == -1) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return iVar1;
}


