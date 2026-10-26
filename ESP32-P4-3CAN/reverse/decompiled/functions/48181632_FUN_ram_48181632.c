/* Firmware entry: 0x48181632 */

uint FUN_ram_48181632(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    param_2 = param_2 + param_3 * 4;
    param_1 = param_1 + param_3 * 4;
    do {
      uVar4 = *(uint *)(param_2 + -4);
      uVar5 = *(uint *)(param_1 + -4);
      uVar3 = (int)(uVar4 ^ uVar5) >> 0x1f;
      uVar3 = (int)(-(-uVar3 >> 1) | uVar3) >> 0x1f;
      uVar3 = (int)(uVar4 - uVar5 & ~uVar3 | uVar5 & uVar3) >> 0x1f;
      uVar1 = (int)(uVar3 | -(-uVar3 >> 1)) >> 0x1f | uVar1;
      uVar3 = (int)(uVar5 ^ uVar4) >> 0x1f;
      uVar3 = (int)(-(-uVar3 >> 1) | uVar3) >> 0x1f;
      uVar3 = (int)(uVar5 - uVar4 & ~uVar3 | uVar4 & uVar3) >> 0x1f;
      uVar3 = (int)(uVar3 | -(-uVar3 >> 1)) >> 0x1f;
      param_3 = param_3 + -1;
      param_2 = param_2 + -4;
      param_1 = param_1 + -4;
      uVar2 = uVar2 | ~uVar1 & uVar3;
      uVar1 = uVar1 | uVar3;
    } while (param_3 != 0);
  }
  return uVar2;
}


