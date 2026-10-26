/* Firmware entry: 0x4ff45520 */

int FUN_ram_4ff45520(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return 0;
  }
  while (3 < param_3) {
    uVar2 = *param_1;
    if (uVar2 != *param_2) break;
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    if ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) != 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  uVar3 = (uint)(byte)*param_1;
  uVar2 = (uint)(byte)*param_2;
  if (uVar3 == uVar2) {
    puVar1 = (uint *)((param_3 - 1) + (int)param_1);
    do {
      param_2 = (uint *)((int)param_2 + 1);
      if (param_1 == puVar1) {
        return 0;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = (uint)*(byte *)param_1;
      uVar2 = (uint)*(byte *)param_2;
    } while (uVar3 == uVar2);
  }
  return uVar3 - uVar2;
}


