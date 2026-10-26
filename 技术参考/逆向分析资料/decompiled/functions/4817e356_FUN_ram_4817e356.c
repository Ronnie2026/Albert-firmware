/* Firmware entry: 0x4817e356 */

void FUN_ram_4817e356(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_4 >> 5;
  uVar2 = __bswapsi2(*(undefined4 *)(uVar1 * 4 + param_3));
  iVar5 = 0;
  do {
    uVar1 = uVar1 + 1 & 3;
    uVar6 = uVar2 << (param_4 & 0x1f);
    uVar2 = __bswapsi2(*(undefined4 *)(uVar1 * 4 + param_3));
    uVar6 = __bswapsi2(uVar2 >> (0x20 - (param_4 & 0x1f) & 0x1f) | uVar6);
    puVar4 = (uint *)(param_2 + iVar5);
    puVar3 = (uint *)(param_1 + iVar5);
    iVar5 = iVar5 + 4;
    *puVar3 = *puVar4 ^ uVar6;
  } while (iVar5 != 0x10);
  return;
}


