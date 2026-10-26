/* Firmware entry: 0x48079a64 */

undefined4 FUN_ram_48079a64(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129ce8();
  if ((((iVar2 != 0) && (pbVar7 = *(byte **)(param_1 + 0x10), pbVar7 != (byte *)0x0)) &&
      (uVar5 = (uint)*pbVar7, uVar5 != 0)) && ((uVar5 != 0x30 || (pbVar7[1] == 0)))) {
    uVar4 = 0;
    uVar3 = 0;
    while( true ) {
      uVar9 = uVar3 * 10 + uVar5;
      uVar5 = uVar5 - 0x30;
      uVar1 = ~uVar5;
      uVar6 = uVar1 + ~((int)uVar5 >> 0x1f);
      uVar6 = uVar6 + (uVar6 < uVar1);
      uVar8 = uVar9 - 0x30;
      pbVar7 = pbVar7 + 1;
      if (9 < (uVar5 & 0xff)) break;
      uVar6 = uVar1 - (uVar6 - (((uint)((ulonglong)uVar6 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                               uVar6 / 5));
      uVar5 = (~((int)uVar5 >> 0x1f) - (uint)(uVar1 < uVar6)) * -0x33333333 + uVar6 * -0x33333334 +
              (int)((ulonglong)uVar6 * 0xcccccccd >> 0x20);
      uVar1 = uVar5 >> 1;
      if (uVar1 < uVar4) {
        return 0;
      }
      if ((uVar4 == uVar1) && ((uVar5 * -0x80000000 | uVar6 * -0x33333333 >> 1) < uVar3)) {
        return 0;
      }
      uVar5 = (uint)*pbVar7;
      uVar4 = (uint)(uVar8 < uVar9) +
              (uVar3 * 5 >> 0x1f |
              ((uint)(uVar3 * 5 < uVar3 * 4) + (uVar3 >> 0x1e | uVar4 << 2) + uVar4) * 2) +
              (uint)(uVar9 < uVar3 * 10) + -1;
      uVar3 = uVar8;
      if (uVar5 == 0) {
        *param_2 = uVar8;
        param_2[1] = uVar4;
        return 1;
      }
    }
  }
  return 0;
}


