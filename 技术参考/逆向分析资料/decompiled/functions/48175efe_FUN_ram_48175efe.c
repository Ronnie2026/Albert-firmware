/* Firmware entry: 0x48175efe */

int FUN_ram_48175efe(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4817fbba(param_1,0xc);
  if (iVar3 == 0) {
    puVar6 = (uint *)*param_1;
    uVar1 = *(ushort *)((int)param_1 + 6);
    uVar2 = puVar6[10];
    uVar4 = *puVar6 + puVar6[6];
    uVar9 = (uint)(uVar4 < *puVar6) + puVar6[1];
    uVar4 = uVar4 + uVar2;
    uVar10 = puVar6[0xb];
    uVar12 = uVar9 + puVar6[7];
    uVar7 = uVar12 + (uVar4 < uVar2);
    uVar9 = (uint)(uVar9 < puVar6[1]) + (uint)(uVar12 < uVar9) + (uint)(uVar7 < uVar12) +
            (uint)(uVar7 + uVar10 < uVar7);
    uVar11 = puVar6[8];
    uVar13 = puVar6[2] + uVar9;
    uVar12 = (uint)(uVar13 < uVar9);
    uVar5 = puVar6[6] + uVar13;
    uVar8 = puVar6[3] + uVar12;
    uVar14 = (uVar5 < uVar13) + uVar8;
    uVar5 = uVar5 + uVar11;
    uVar16 = puVar6[7] + uVar14;
    uVar9 = (uVar5 < uVar11) + uVar16;
    uVar15 = uVar9 + puVar6[9];
    uVar13 = (uVar5 + uVar2 < uVar5) + uVar15;
    uVar9 = (uint)(uVar14 < uVar8) + (uint)(uVar8 < uVar12) + (uint)(uVar16 < uVar14) +
            (uint)(uVar9 < uVar16) + (uint)(uVar15 < uVar9) + (uint)(uVar13 < uVar15) +
            (uint)(uVar13 + uVar10 < uVar13);
    uVar8 = puVar6[4] + uVar9;
    uVar11 = uVar11 + uVar8;
    uVar12 = (uint)(uVar8 < uVar9) + puVar6[5];
    uVar14 = (uVar11 < uVar8) + uVar12;
    uVar8 = puVar6[9] + uVar14;
    uVar9 = uVar8 + (uVar2 + uVar11 < uVar11);
    *puVar6 = uVar4;
    puVar6[6] = (uint)(uVar14 < uVar12) + (uint)(uVar12 < puVar6[5]) + (uint)(uVar8 < uVar14) +
                (uint)(uVar9 < uVar8) + (uint)(uVar10 + uVar9 < uVar9);
    puVar6[1] = uVar7 + uVar10;
    puVar6[2] = uVar5 + uVar2;
    puVar6[3] = uVar13 + uVar10;
    puVar6[4] = uVar2 + uVar11;
    puVar6[5] = uVar10 + uVar9;
    if (puVar6 + 7 < puVar6 + uVar1) {
      memset(puVar6 + 7,0,(uint)uVar1 * 4 - 0x1c);
      return 0;
    }
  }
  return iVar3;
}


