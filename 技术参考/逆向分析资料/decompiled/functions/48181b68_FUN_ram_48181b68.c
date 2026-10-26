/* Firmware entry: 0x48181b68 */

void FUN_ram_48181b68(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  iVar16 = (param_4 >> 3) - 1;
  uVar5 = 0;
  if (param_4 >> 3 != 0) {
    uVar5 = 0;
    puVar6 = param_3;
    puVar7 = param_1;
    iVar9 = iVar16;
    do {
      uVar10 = *puVar6;
      uVar14 = *puVar7;
      uVar12 = puVar7[1];
      uVar15 = uVar10 * param_5;
      uVar11 = puVar7[2];
      uVar4 = puVar7[3];
      uVar3 = puVar7[4];
      uVar2 = puVar7[5];
      uVar1 = puVar7[6];
      uVar17 = puVar7[7];
      iVar9 = iVar9 + -1;
      uVar5 = uVar5 + uVar15;
      uVar8 = uVar14 + uVar5;
      *puVar7 = uVar8;
      uVar13 = puVar6[1];
      uVar5 = (uint)(uVar8 < uVar14) +
              (uint)(uVar5 < uVar15) + (int)((ulonglong)uVar10 * (ulonglong)param_5 >> 0x20);
      uVar8 = uVar13 * param_5 + uVar5;
      uVar10 = uVar12 + uVar8;
      puVar7[1] = uVar10;
      uVar14 = puVar6[2];
      uVar5 = (uint)(uVar8 < uVar5) + (int)((ulonglong)uVar13 * (ulonglong)param_5 >> 0x20) +
              (uint)(uVar10 < uVar12);
      uVar8 = uVar14 * param_5 + uVar5;
      uVar10 = uVar11 + uVar8;
      puVar7[2] = uVar10;
      uVar12 = puVar6[3];
      uVar5 = (uint)(uVar8 < uVar5) + (int)((ulonglong)uVar14 * (ulonglong)param_5 >> 0x20) +
              (uint)(uVar10 < uVar11);
      uVar8 = uVar12 * param_5 + uVar5;
      uVar10 = uVar4 + uVar8;
      puVar7[3] = uVar10;
      uVar11 = puVar6[4];
      uVar4 = (uint)(uVar8 < uVar5) + (int)((ulonglong)uVar12 * (ulonglong)param_5 >> 0x20) +
              (uint)(uVar10 < uVar4);
      uVar8 = uVar11 * param_5 + uVar4;
      uVar5 = uVar3 + uVar8;
      puVar7[4] = uVar5;
      uVar10 = puVar6[5];
      uVar5 = (uint)(uVar5 < uVar3) +
              (uint)(uVar8 < uVar4) + (int)((ulonglong)uVar11 * (ulonglong)param_5 >> 0x20);
      uVar8 = uVar10 * param_5 + uVar5;
      uVar4 = uVar2 + uVar8;
      puVar7[5] = uVar4;
      uVar3 = puVar6[6];
      uVar5 = (uint)(uVar4 < uVar2) +
              (uint)(uVar8 < uVar5) + (int)((ulonglong)uVar10 * (ulonglong)param_5 >> 0x20);
      uVar4 = uVar3 * param_5 + uVar5;
      uVar8 = uVar1 + uVar4;
      puVar7[6] = uVar8;
      uVar2 = puVar6[7];
      uVar1 = (uint)(uVar8 < uVar1) +
              (uint)(uVar4 < uVar5) + (int)((ulonglong)uVar3 * (ulonglong)param_5 >> 0x20);
      uVar5 = uVar2 * param_5 + uVar1;
      uVar3 = uVar17 + uVar5;
      puVar7[7] = uVar3;
      uVar5 = (uint)(uVar5 < uVar1) + (int)((ulonglong)uVar2 * (ulonglong)param_5 >> 0x20) +
              (uint)(uVar3 < uVar17);
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
    } while (iVar9 != -1);
    param_1 = param_1 + iVar16 * 8 + 8;
    param_3 = param_3 + iVar16 * 8 + 8;
  }
  if ((param_4 & 7) != 0) {
    puVar7 = param_1 + (param_4 & 7);
    puVar6 = param_1;
    do {
      uVar2 = *param_3;
      uVar3 = *puVar6;
      param_1 = puVar6 + 1;
      uVar4 = uVar2 * param_5;
      param_3 = param_3 + 1;
      uVar5 = uVar5 + uVar4;
      uVar1 = uVar5 + uVar3;
      *puVar6 = uVar1;
      uVar5 = (uint)(uVar1 < uVar3) +
              (uint)(uVar5 < uVar4) + (int)((ulonglong)uVar2 * (ulonglong)param_5 >> 0x20);
      puVar6 = param_1;
    } while (param_1 != puVar7);
  }
  iVar16 = (param_2 - param_4) + -1;
  if (param_2 - param_4 != 0) {
    do {
      uVar1 = *param_1;
      iVar16 = iVar16 + -1;
      uVar5 = uVar5 + uVar1;
      *param_1 = uVar5;
      uVar5 = (uint)(uVar5 < uVar1);
      param_1 = param_1 + 1;
    } while (iVar16 != -1);
  }
  return;
}


