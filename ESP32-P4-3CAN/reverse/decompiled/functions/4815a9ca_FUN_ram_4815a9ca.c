/* Firmware entry: 0x4815a9ca */

int FUN_ram_4815a9ca(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 & 0x1f) != 0) {
    return -1;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  iVar2 = -1;
  if (uVar1 == 0xffffffff) {
    iVar2 = -1;
  }
  else if (*(int *)(param_1 + 0x3c) == -1) {
    iVar2 = -1;
  }
  else {
    if ((uVar1 < 0x7e) &&
       (pcVar3 = *(code **)(**(int **)(param_1 + 0x50) + 0x18),
       iVar2 = (*pcVar3)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x40 + uVar1 * 0x20,
                         param_2,param_3,uVar1 * 0x20,pcVar3), iVar2 == 0)) {
      uVar1 = param_3 >> 5 & 0xffff;
      iVar2 = FUN_ram_4815a904(param_1,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x38) + uVar1,2);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + (short)(param_3 >> 5);
      *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return iVar2;
}


