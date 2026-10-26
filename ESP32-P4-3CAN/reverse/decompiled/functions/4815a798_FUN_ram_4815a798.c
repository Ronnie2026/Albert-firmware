/* Firmware entry: 0x4815a798 */

int FUN_ram_4815a798(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 == 0xffffffff) {
    return 0x1102;
  }
  if (*(int *)(param_2 + 0xc) == -1) {
    iVar3 = FUN_ram_4815a632(param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
  }
  if (uVar1 < 0x7e) {
    do {
      while (iVar3 = (uVar1 & 0xf) << 1,
            (*(uint *)((uVar1 >> 4) * 4 + param_1 + 0x18) >> iVar3 & 3) == 2) {
        pcVar4 = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
        iVar3 = (*pcVar4)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x40 + uVar1 * 0x20,
                          auStack_40,0x20,iVar3,pcVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_ram_4815d86c(param_2 + 0x44,auStack_40,*(undefined4 *)(param_2 + 0x38));
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_ram_4815a72c(param_2,auStack_40);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar5 = bStack_3e + uVar1;
        if (0x7e < uVar5) {
          return -1;
        }
        if (uVar1 + 1 < uVar5) {
          iVar3 = uVar1 * 0x20 + 0x20;
          do {
            iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x10))
                              (*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x40 + iVar3,
                               auStack_40,0x20);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = FUN_ram_4815a72c(param_2,auStack_40);
            iVar3 = iVar3 + 0x20;
            if (iVar2 != 0) {
              return iVar2;
            }
          } while (uVar5 * 0x20 != iVar3);
        }
        uVar1 = uVar5;
        if (uVar5 == 0x7e) {
          return 0;
        }
      }
      if (*(uint *)(param_1 + 0x3c) == uVar1) {
        return -1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x7e);
  }
  return 0;
}


