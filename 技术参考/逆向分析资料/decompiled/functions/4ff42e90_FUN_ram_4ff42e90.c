/* Firmware entry: 0x4ff42e90 */

void FUN_ram_4ff42e90(undefined4 param_1,byte *param_2,uint *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *param_2;
  bVar3 = bVar1 >> 5;
  uVar6 = bVar1 & 0xf;
  *(byte *)(param_3 + 2) = bVar3 & 2 | bVar1 >> 7 | (byte)param_3[2] & 0xe0;
  *(short *)(param_3 + 1) = (short)uVar6;
  param_3[4] = 0;
  param_3[5] = 0;
  bVar2 = param_2[2];
  if ((char)bVar1 < '\0') {
    uVar4 = __bswapsi2((uint)param_2[4] << 0x18 |
                       (uint)bVar2 << 8 | (uint)param_2[3] << 0x10 | (uint)param_2[1]);
    *param_3 = uVar4 >> 3;
    param_2 = param_2 + 5;
    if ((bVar3 & 2) != 0) {
      return;
    }
  }
  else {
    *param_3 = (CONCAT21(CONCAT11(bVar2,param_2[1]),bVar2) & 0xffff) >> 5;
    if ((bVar3 & 2) != 0) {
      return;
    }
    param_2 = param_2 + 3;
  }
  if ((bVar1 & 0x40) != 0) {
    return;
  }
  if (uVar6 < 9) {
    if ((int)uVar6 <= (int)param_5) goto LAB_ram_4ff42f24;
  }
  else {
    uVar6 = 8;
    if (7 < (int)param_5) goto LAB_ram_4ff42f24;
  }
  uVar6 = param_5;
LAB_ram_4ff42f24:
  if (uVar6 != 0) {
    pbVar5 = param_2 + uVar6;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_4 = bVar1;
      param_4 = param_4 + 1;
    } while (pbVar5 != param_2);
  }
  return;
}


