/* Firmware entry: 0x4815a904 */

int FUN_ram_4815a904(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x7e < param_3) {
    return -1;
  }
  if (param_2 < param_3) {
    param_3 = param_3 - 1;
    uVar5 = param_3 >> 4;
    for (; (int)param_2 <= (int)param_3; param_3 = param_3 - 1) {
      iVar4 = (param_3 >> 4) * 4 + param_1;
      iVar3 = (param_3 & 0xf) << 1;
      iVar1 = uVar5 * 4;
      *(uint *)(iVar4 + 0x18) = param_4 << iVar3 | ~(3 << iVar3) & *(uint *)(iVar4 + 0x18);
      uVar6 = param_3 - 1 >> 4;
      if (param_3 == param_2) {
        if (uVar5 == 0xffffffff) break;
        uVar6 = 0xffffffff;
LAB_ram_4815a93e:
        uVar5 = uVar6;
        uStack_24 = *(undefined4 *)(param_1 + iVar1 + 0x18);
        pcVar2 = *(code **)(**(int **)(param_1 + 0x50) + 0x14);
        iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x20 + iVar1,&uStack_24,
                          4,uStack_24,pcVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else if (uVar6 != uVar5) goto LAB_ram_4815a93e;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


