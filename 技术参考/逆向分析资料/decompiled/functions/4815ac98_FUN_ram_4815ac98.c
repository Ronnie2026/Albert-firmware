/* Firmware entry: 0x4815ac98 */

int FUN_ram_4815ac98(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x7d < param_2) {
    return -1;
  }
  if ((*(uint *)((param_2 >> 4) * 4 + param_1 + 0x18) >> ((param_2 & 0xf) << 1) & 3) == 2) {
    pcVar4 = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
    iVar1 = (*pcVar4)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + param_2 * 0x20 + 0x40,
                      auStack_40,0x20,pcVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4815d6be(auStack_40,param_2 & 0xff);
    if (iVar1 != 0) {
      FUN_ram_4815d918(param_1 + 0x44,param_2);
      uVar6 = param_2 + bStack_3e;
      uVar3 = uVar6;
      while (uVar3 = uVar3 - 1, (int)param_2 <= (int)uVar3) {
        if (0x7d < (int)uVar3) {
          return -1;
        }
        if ((*(uint *)((uVar3 >> 4) * 4 + param_1 + 0x18) >> ((uVar3 & 0xf) << 1) & 3) == 2) {
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        }
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
      }
      if (bStack_3e == 1) {
        iVar1 = FUN_ram_4815a6ca(param_1,param_2,0);
      }
      else {
        iVar1 = FUN_ram_4815a904(param_1,param_2,uVar6,0);
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      goto LAB_ram_4815acdc;
    }
    FUN_ram_4815d918(param_1 + 0x44,param_2);
    iVar1 = FUN_ram_4815a6ca(param_1,param_2,0);
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  }
  else {
    iVar1 = FUN_ram_4815a6ca(param_1,param_2,0);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar6 = param_2 + 1;
LAB_ram_4815acdc:
  uVar3 = *(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x3c) == param_2) {
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    uVar2 = uVar3;
    if (0x7e < uVar3) {
      uVar2 = 0x7e;
    }
    uVar5 = uVar6;
    if (uVar6 < uVar2) {
      do {
        if ((*(uint *)((uVar5 >> 4) * 4 + param_1 + 0x18) >> ((uVar5 & 0xf) << 1) & 3) == 2) {
          *(uint *)(param_1 + 0x3c) = uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  if (uVar3 < uVar6) {
    *(uint *)(param_1 + 0x38) = uVar6;
  }
  return 0;
}


