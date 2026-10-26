/* Firmware entry: 0x4819de04 */

void FUN_ram_4819de04(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar13 = *(int *)(param_2 + 0x10);
  iVar15 = *(int *)(param_3 + 0x10);
  iVar4 = param_3;
  iVar14 = iVar13;
  if (iVar15 <= iVar13) {
    iVar4 = param_2;
    iVar14 = iVar15;
    iVar15 = iVar13;
    param_2 = param_3;
  }
  iVar13 = iVar15 + iVar14;
  iVar5 = FUN_ram_4819da72(param_1,*(int *)(iVar4 + 4) + (uint)(*(int *)(iVar4 + 8) < iVar13));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                     ,0x162,0,"Balloc succeeded");
  }
  puVar11 = (uint *)(iVar5 + 0x14);
  puVar12 = puVar11 + iVar13;
  for (puVar2 = puVar11; puVar2 < puVar12; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  puVar2 = (uint *)(iVar4 + 0x14);
  puVar6 = (ushort *)(param_2 + 0x14);
  puVar9 = puVar2 + iVar15;
  puVar7 = puVar6 + iVar14 * 2;
  uVar16 = 0;
  if ((uint *)(iVar4 + 0x15) <= puVar9) {
    uVar16 = (int)puVar9 + (-0x15 - iVar4) & 0xfffffffc;
  }
  for (; puVar6 < puVar7; puVar6 = puVar6 + 2) {
    uVar3 = (uint)*puVar6;
    if (uVar3 != 0) {
      uVar1 = 0;
      puVar17 = puVar2;
      puVar19 = puVar11;
      do {
        uVar10 = *puVar17;
        puVar17 = puVar17 + 1;
        uVar8 = (uVar10 & 0xffff) * uVar3 + (*puVar19 & 0xffff) + uVar1;
        uVar10 = (uVar10 >> 0x10) * uVar3 + (*puVar19 >> 0x10) + (uVar8 >> 0x10);
        uVar1 = uVar10 >> 0x10;
        *puVar19 = uVar10 * 0x10000 | uVar8 & 0xffff;
        puVar19 = puVar19 + 1;
      } while (puVar17 < puVar9);
      *(uint *)((int)puVar11 + uVar16 + 4) = uVar1;
    }
    uVar3 = (uint)puVar6[1];
    if (uVar3 != 0) {
      uVar10 = *puVar11;
      uVar8 = 0;
      puVar17 = puVar2;
      uVar1 = uVar10;
      puVar19 = puVar11;
      do {
        puVar18 = puVar17 + 1;
        uVar8 = (ushort)*puVar17 * uVar3 + uVar8 + (uVar1 >> 0x10);
        *puVar19 = uVar8 * 0x10000 | uVar10 & 0xffff;
        uVar1 = puVar19[1];
        uVar10 = *(ushort *)((int)puVar17 + 2) * uVar3 + (uVar1 & 0xffff) + (uVar8 >> 0x10);
        uVar8 = uVar10 >> 0x10;
        puVar17 = puVar18;
        puVar19 = puVar19 + 1;
      } while (puVar18 < puVar9);
      *(uint *)((int)puVar11 + uVar16 + 4) = uVar10;
    }
    puVar11 = puVar11 + 1;
  }
  while ((0 < iVar13 && (puVar2 = puVar12 + -1, puVar12 = puVar12 + -1, *puVar2 == 0))) {
    iVar13 = iVar13 + -1;
  }
  *(int *)(iVar5 + 0x10) = iVar13;
  return;
}


