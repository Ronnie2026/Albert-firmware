/* Firmware entry: 0x4801bd8e */

undefined4 FUN_ram_4801bd8e(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4801af3a();
  if (param_1 != (undefined1 *)0x0) {
    iVar7 = FUN_ram_4801ad2a();
    if ((iVar7 != 0) && (*(int *)(iVar7 + 8) == 0)) {
      puVar12 = (undefined1 *)(iVar7 + 0x10);
      iVar14 = 0;
      puVar11 = param_1;
      do {
        uVar1 = puVar12[2];
        uVar2 = puVar12[3];
        uVar3 = puVar12[4];
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        puVar11[5] = puVar12[5];
        *puVar11 = uVar4;
        puVar11[1] = uVar5;
        puVar11[2] = uVar1;
        puVar11[3] = uVar2;
        puVar11[4] = uVar3;
        iVar13 = iVar14 * 0xc;
        puVar11[6] = puVar12[6];
        iVar9 = iVar7 + iVar13;
        bVar6 = param_1[iVar13 + 7];
        iVar14 = iVar14 + 1;
        bVar15 = *(byte *)(iVar9 + 0x17) & 1;
        param_1[iVar13 + 7] = bVar6 & 0xfe | bVar15;
        bVar16 = *(byte *)(iVar9 + 0x17) & 2;
        param_1[iVar13 + 7] = bVar6 & 0xfc | bVar15 | bVar16;
        bVar17 = *(byte *)(iVar9 + 0x17) & 4;
        param_1[iVar13 + 7] = bVar6 & 0xf8 | bVar15 | bVar16 | bVar17;
        bVar18 = *(byte *)(iVar9 + 0x17) & 8;
        param_1[iVar13 + 7] = bVar6 & 0xf0 | bVar15 | bVar16 | bVar17 | bVar18;
        bVar19 = *(byte *)(iVar9 + 0x17) & 0x40;
        param_1[iVar13 + 7] = bVar6 & 0xb0 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19;
        param_1[iVar13 + 7] =
             bVar6 & 0x30 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19 |
             *(byte *)(iVar9 + 0x17) & 0x80;
        puVar11 = puVar11 + 0xc;
        puVar12 = puVar12 + 0xc;
        uVar10 = *(uint *)(iVar9 + 0x18) & 0xffffff;
        param_1[iVar13 + 8] = (char)*(uint *)(iVar9 + 0x18);
        param_1[iVar13 + 9] = (char)(uVar10 >> 8);
        param_1[iVar13 + 10] = (char)(uVar10 >> 0x10);
      } while (iVar14 != 10);
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar7 + 0x88);
    uVar8 = FUN_ram_4801af88();
    return uVar8;
  }
  return 0xffffffff;
}


