/* Firmware entry: 0x4ff2d792 */

uint FUN_ram_4ff2d792(uint param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *param_2;
  uVar4 = *param_3;
  uVar6 = ((uVar2 >> 1) + param_1) / uVar2;
  do {
    if (param_3[1] < uVar4) {
      return 0;
    }
    uVar7 = uVar6 / uVar4;
    uVar3 = uVar7 & 0xffff;
    if (uVar4 * uVar3 == uVar6) {
      uVar9 = (uint)*(byte *)((int)param_3 + 9);
      uVar8 = (uint)*(byte *)((int)param_3 + 0xb);
      if (uVar3 <= uVar9 + uVar8 + 1) {
        uVar11 = (uint)(byte)param_3[2];
        uVar1 = (uint)*(byte *)((int)param_3 + 10);
        if (uVar11 + uVar1 <= uVar3) {
          if (param_3[1] < uVar4) {
            return 0;
          }
          uVar6 = 0x2ee;
          if ((uVar2 < 800000) && (uVar6 = 0x36b, 499999 < uVar2)) {
            uVar6 = 800;
          }
          uVar2 = (uint)(ushort)param_2[1];
          if ((ushort)param_2[1] == 0) {
            uVar2 = uVar6;
          }
          uVar2 = (uVar2 * uVar3) / 1000 - 1 & 0xffff;
          if (uVar2 < uVar9) {
            uVar9 = uVar2;
          }
          if (uVar11 < uVar9) {
            uVar2 = (uVar7 - 1) - uVar9;
            uVar11 = uVar9;
          }
          else {
            uVar2 = (uVar7 - 1) - uVar11;
          }
          if ((uVar2 & 0xffff) < uVar8) {
            uVar8 = uVar2 & 0xffff;
          }
          if (uVar8 <= uVar1) {
            uVar8 = uVar1;
          }
          if (uVar11 < 4) {
            uVar2 = 1;
            uVar10 = 1;
          }
          else {
            uVar2 = uVar11 >> 2;
            uVar10 = (undefined1)uVar2;
          }
          *param_4 = uVar4;
          *(undefined1 *)(param_4 + 1) = uVar10;
          *(char *)((int)param_4 + 5) = (char)((uVar11 - uVar2) * 0x10000 >> 0x10);
          *(char *)((int)param_4 + 6) = (char)uVar8;
          bVar5 = (byte)param_3[3];
          uVar6 = uVar8 >> 1;
          if (uVar6 < bVar5) {
            bVar5 = 1;
            if (uVar6 != 0) {
              bVar5 = (byte)uVar6;
            }
          }
          else if (bVar5 == 0) {
            bVar5 = 1;
          }
          *(byte *)((int)param_4 + 7) = bVar5;
          *(char *)(param_4 + 2) = (char)((*(ushort *)((int)param_2 + 6) * uVar3) / 1000);
          return param_1 / (((uVar11 - uVar2 & 0xffff) + uVar2 + uVar8 + 1) * uVar4);
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


