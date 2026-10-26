/* Firmware entry: 0x481723ec */

void FUN_ram_481723ec(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = param_2 - param_3;
  pbVar6 = param_1 + (param_2 - 1);
  uVar2 = 0;
  if (param_2 != 0) {
    while (uVar3 = (int)(uVar2 ^ uVar7) >> 0x1f, uVar3 = (int)(uVar3 | -(-uVar3 >> 1)) >> 0x1f,
          uVar3 = uVar2 - uVar7 & ~uVar3 | uVar7 & uVar3,
          bVar1 = (char)((byte)(-((uint)-((int)uVar3 >> 0x1f) >> 1) >> 0x18) |
                        (byte)((int)uVar3 >> 0x1f)) >> 7, pbVar4 = param_1, param_2 != 1) {
      do {
        pbVar5 = pbVar4 + 1;
        *pbVar4 = ~bVar1 & pbVar4[1] | *pbVar4 & bVar1;
        pbVar4 = pbVar5;
      } while (pbVar6 != pbVar5);
      uVar2 = uVar2 + 1;
      *pbVar6 = *pbVar6 & bVar1;
      if (param_2 == uVar2) {
        return;
      }
    }
    *param_1 = *param_1 & bVar1;
  }
  return;
}


