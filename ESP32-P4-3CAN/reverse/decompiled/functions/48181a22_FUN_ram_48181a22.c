/* Firmware entry: 0x48181a22 */

void FUN_ram_48181a22(void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_3 >> 5;
  uVar2 = param_3 & 0x1f;
  if (0x1f < param_3) {
    if (uVar1 < param_2) {
      puVar5 = (undefined4 *)(param_2 * 4 + (int)param_1);
      do {
        puVar3 = puVar5 + ~uVar1;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar3;
        uVar4 = uVar1;
      } while ((undefined4 *)(uVar1 * 4 + (int)param_1) != puVar5);
    }
    else {
      uVar4 = param_2;
      if (param_2 == 0) {
        return;
      }
    }
    param_1 = memset(param_1,0,uVar4 << 2);
  }
  if ((uVar2 != 0) && (uVar1 < param_2)) {
    uVar4 = 0;
    puVar6 = (uint *)(uVar1 * 4 + (int)param_1);
    do {
      uVar1 = *puVar6;
      puVar7 = puVar6 + 1;
      *puVar6 = uVar4 | uVar1 << uVar2;
      uVar4 = uVar1 >> (0x20 - uVar2 & 0x1f);
      puVar6 = puVar7;
    } while (puVar7 != (uint *)((int)param_1 + param_2 * 4));
  }
  return;
}


