/* Firmware entry: 0x4805625c */

bool FUN_ram_4805625c(byte *param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != (byte *)0x0) && (6 < param_2)) && (uVar7 = (uint)*param_1, (uVar7 & 7) == 5)) {
    uVar6 = 3;
    uVar3 = 0;
    uVar8 = 0;
    while( true ) {
      uVar4 = uVar3 & 0x1f;
      uVar3 = uVar3 + 1;
      if (((int)uVar7 >> (uVar6 & 7) & 1U) != 0) {
        uVar8 = uVar8 | 1 << uVar4;
      }
      uVar6 = uVar6 + 1 & 0xff;
      if (uVar3 == 0xc) break;
      uVar7 = (uint)param_1[uVar6 >> 3];
    }
    uVar7 = 0;
    uVar3 = 0;
    *param_3 = (short)uVar8;
    do {
      uVar4 = uVar7 & 0xff;
      uVar5 = uVar7 & 7;
      uVar6 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      if (((int)(uint)param_1[(uVar4 >> 3) + 2] >> uVar5 & 1U) != 0) {
        uVar3 = uVar3 | 1 << uVar6;
      }
    } while (uVar7 != 0xc);
    uVar6 = 0;
    uVar7 = 0;
    param_3[1] = (short)uVar3;
    do {
      uVar5 = uVar6 + 0x1c;
      uVar4 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      if (((int)(uint)param_1[(uVar5 & 0xff) >> 3] >> (uVar5 & 7) & 1U) != 0) {
        uVar7 = uVar7 | 1 << uVar4;
      }
    } while (uVar6 != 0xc);
    uVar6 = 0;
    uVar4 = 0;
    param_3[2] = (short)uVar7;
    do {
      uVar1 = uVar6 & 0xff;
      uVar2 = uVar6 & 7;
      uVar5 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      if (((int)(uint)param_1[(uVar1 >> 3) + 5] >> uVar2 & 1U) != 0) {
        uVar4 = uVar4 | 1 << uVar5;
      }
    } while (uVar6 != 0xc);
    param_3[3] = (short)uVar4;
    if ((((uVar8 & 0xffff) != 0xfff) && ((uVar3 & 0xffff) != 0xfff)) && ((uVar7 & 0xffff) != 0xfff))
    {
      return (uVar4 & 0xffff) != 0xfff;
    }
  }
  return false;
}


