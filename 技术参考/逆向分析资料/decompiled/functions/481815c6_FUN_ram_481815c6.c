/* Firmware entry: 0x481815c6 */

uint FUN_ram_481815c6(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (int)(*param_2 ^ param_1) >> 0x1f;
  uVar3 = (int)(uVar3 | -(-uVar3 >> 1)) >> 0x1f;
  uVar3 = (int)(*param_2 - param_1 & ~uVar3 | param_1 & uVar3) >> 0x1f;
  uVar1 = 0;
  uVar2 = 1;
  if (1 < param_3) {
    do {
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 | (int)(-*param_2 | -(*param_2 >> 1)) >> 0x1f;
    } while (param_3 != uVar2);
  }
  return ~((int)(-(-uVar3 >> 1) | uVar3) >> 0x1f) | uVar1;
}


