/* Firmware entry: 0x4803281a */

void FUN_ram_4803281a(int param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int *piVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = (int)(param_3 - 1) / 2;
  piVar16 = (int *)*param_5;
  iVar11 = param_5[1];
  pbVar12 = (byte *)param_5[2];
  if (param_2 < iVar14) {
    iVar13 = *piVar16;
    iVar7 = param_2;
    do {
      iVar5 = (iVar7 + 1) * 2;
      uVar6 = (uint)*(ushort *)((iVar7 + 1) * 4 + param_1);
      uVar10 = (uint)*(ushort *)((iVar5 + 0x7fffffff) * 2 + param_1);
      iVar7 = (uint)*pbVar12 * 0x800;
      uVar8 = *(int *)(uVar6 * 4 + iVar13) - *(int *)((iVar7 + uVar6) * 4 + iVar11);
      uVar3 = *(int *)(uVar10 * 4 + iVar13) - *(int *)((iVar7 + uVar10) * 4 + iVar11);
      bVar2 = uVar6 < uVar10;
      if (uVar3 != uVar8) {
        bVar2 = uVar3 < uVar8;
      }
      iVar7 = iVar5 - (uint)bVar2;
      iVar4 = iVar7 * 2;
      puVar9 = (ushort *)(param_1 + iVar4);
      *(ushort *)(param_1 + iVar5 + -2) = *puVar9;
    } while (iVar7 < iVar14);
    if (((param_3 & 1) == 0) && (iVar14 = iVar7, (int)(param_3 - 2) / 2 == iVar7))
    goto LAB_ram_48032986;
  }
  else {
    puVar9 = (ushort *)(param_2 * 2 + param_1);
    if (((param_3 & 1) != 0) || (iVar14 = param_2, param_2 != (int)(param_3 - 2) / 2))
    goto LAB_ram_48032964;
LAB_ram_48032986:
    iVar7 = (iVar14 + 1) * 2 + -1;
    iVar4 = iVar7 * 2;
    *puVar9 = *(ushort *)((iVar14 + 1) * 4 + param_1 + -2);
    puVar9 = (ushort *)(param_1 + iVar4);
  }
  if (param_2 < iVar7) {
    iVar14 = *piVar16;
    iVar13 = *(int *)(param_4 * 4 + iVar14);
    while( true ) {
      iVar7 = (iVar7 + -1) / 2;
      puVar15 = (ushort *)(iVar7 * 2 + param_1);
      uVar1 = *puVar15;
      uVar3 = (uint)uVar1;
      iVar5 = (uint)*pbVar12 * 0x800;
      bVar2 = uVar3 < param_4;
      uVar6 = iVar13 - *(int *)((iVar5 + param_4) * 4 + iVar11);
      uVar3 = *(int *)(uVar3 * 4 + iVar14) - *(int *)((iVar5 + uVar3) * 4 + iVar11);
      if (uVar3 != uVar6) {
        bVar2 = uVar6 < uVar3;
      }
      puVar9 = (ushort *)(param_1 + iVar4);
      if (!bVar2) break;
      *puVar9 = uVar1;
      if (iVar7 <= param_2) {
        *puVar15 = (ushort)param_4;
        return;
      }
      iVar4 = iVar7 << 1;
    }
  }
LAB_ram_48032964:
  *puVar9 = (ushort)param_4;
  return;
}


