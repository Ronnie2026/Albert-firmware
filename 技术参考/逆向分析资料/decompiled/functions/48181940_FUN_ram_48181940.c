/* Firmware entry: 0x48181940 */

void FUN_ram_48181940(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_3 >> 5;
  if (param_2 < uVar1) {
LAB_ram_481819e2:
    memset(param_1,0,param_2 << 2);
    return;
  }
  uVar5 = param_3 & 0x1f;
  if (uVar1 == param_2) {
    if (uVar5 != 0) goto LAB_ram_481819e2;
    if (param_3 < 0x20) {
      return;
    }
    uVar2 = 0;
LAB_ram_4818198a:
    if (param_2 < uVar2 + 1) {
      memset(param_1 + uVar2,0,4);
    }
    else {
      memset(param_1 + uVar2,0,(param_2 - uVar2) * 4);
    }
  }
  else if (0x1f < param_3) {
    puVar4 = param_1 + uVar1;
    uVar2 = param_2 - uVar1;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      puVar4[-uVar1] = *puVar4;
      puVar4 = puVar4 + 1;
    } while (uVar3 < uVar2);
    uVar1 = uVar5;
    if (param_2 <= uVar2) goto joined_r0x481819a8;
    goto LAB_ram_4818198a;
  }
  uVar1 = param_2;
  if (uVar5 == 0) {
    return;
  }
joined_r0x481819a8:
  if (uVar1 != 0) {
    puVar4 = param_1 + param_2;
    uVar1 = 0;
    do {
      uVar2 = puVar4[-1];
      puVar4 = puVar4 + -1;
      *puVar4 = uVar1 | uVar2 >> uVar5;
      uVar1 = uVar2 << (0x20 - uVar5 & 0x1f);
    } while (param_1 != puVar4);
  }
  return;
}


