/* Firmware entry: 0x48180dc8 */

undefined4 FUN_ram_48180dc8(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return 0xfffffff4;
  }
  if (-1 < (int)param_3) {
    uVar3 = 0;
    if ((param_3 != 1) && (*(ushort *)((int)param_2 + 6) != 0)) {
      puVar4 = (uint *)*param_2;
      puVar2 = puVar4 + *(ushort *)((int)param_2 + 6);
      if (param_3 == 2) {
        *param_1 = *puVar4 & 1;
        return 0;
      }
      do {
        puVar1 = puVar2 + -1;
        puVar2 = puVar2 + -1;
        uVar3 = (*puVar1 & 0xffff | (*puVar1 >> 0x10 | uVar3 << 0x10) % param_3 << 0x10) % param_3;
      } while (puVar4 != puVar2);
      if ((*(short *)(param_2 + 1) < 0) && (uVar3 != 0)) {
        uVar3 = param_3 - uVar3;
      }
    }
    *param_1 = uVar3;
    return 0;
  }
  return 0xfffffff6;
}


