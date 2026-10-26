/* Firmware entry: 0x481949d6 */

uint FUN_ram_481949d6(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0 < (int)param_2) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0x1f;
      uVar3 = uVar3 + 1;
      if ((*param_1 & 1 << (param_3 & 0x1f)) != 0) {
        uVar2 = uVar2 | 1 << uVar1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != uVar3);
    return uVar2;
  }
  return 0;
}


