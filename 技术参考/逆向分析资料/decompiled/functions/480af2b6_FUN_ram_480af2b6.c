/* Firmware entry: 0x480af2b6 */

undefined4 FUN_ram_480af2b6(int *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 <= (uint)param_1[2]) {
    return 1;
  }
  if ((param_2 < 0xe07039) && (iVar6 = FUN_ram_4ff206d8(param_2 * 0x124,0x404), iVar6 != 0)) {
    iVar18 = iVar6 + 4;
    uVar17 = 0;
    if (param_1[1] != 0) {
      do {
        puVar5 = (undefined4 *)(*param_1 + (-4 - iVar6) + iVar18);
        *(undefined4 *)(iVar18 + -4) = *puVar5;
        FUN_ram_4802ace6(iVar18,puVar5 + 1);
        uVar10 = puVar5[9];
        uVar1 = *(undefined2 *)(puVar5 + 10);
        uVar15 = puVar5[5];
        uVar7 = puVar5[6];
        uVar8 = puVar5[7];
        *(undefined4 *)(iVar18 + 0x1c) = puVar5[8];
        *(undefined4 *)(iVar18 + 0x20) = uVar10;
        *(undefined2 *)(iVar18 + 0x24) = uVar1;
        *(undefined4 *)(iVar18 + 0x10) = uVar15;
        *(undefined4 *)(iVar18 + 0x14) = uVar7;
        *(undefined4 *)(iVar18 + 0x18) = uVar8;
        puVar12 = puVar5 + 0xb;
        puVar11 = (undefined4 *)(iVar18 + 0x28);
        do {
          uVar7 = puVar12[1];
          uVar8 = puVar12[2];
          uVar10 = puVar12[3];
          *puVar11 = *puVar12;
          puVar11[1] = uVar7;
          puVar11[2] = uVar8;
          puVar11[3] = uVar10;
          puVar12 = puVar12 + 4;
          puVar11 = puVar11 + 4;
        } while (puVar12 != puVar5 + 0x33);
        puVar9 = (undefined4 *)(iVar18 + 0xcc);
        puVar13 = puVar5 + 0x34;
        *puVar11 = *puVar12;
        do {
          uVar16 = puVar13[1];
          uVar15 = puVar13[2];
          uVar7 = puVar13[3];
          uVar8 = puVar13[4];
          uVar10 = puVar13[5];
          *puVar9 = *puVar13;
          puVar9[1] = uVar16;
          puVar9[2] = uVar15;
          puVar9[3] = uVar7;
          puVar9[4] = uVar8;
          puVar9[5] = uVar10;
          puVar13 = puVar13 + 6;
          puVar9 = puVar9 + 6;
        } while (puVar13 != puVar5 + 0x46);
        uVar1 = *(undefined2 *)((int)puVar5 + 0x11a);
        uVar2 = *(undefined2 *)(puVar5 + 0x47);
        uVar3 = *(undefined2 *)((int)puVar5 + 0x11e);
        uVar4 = *(undefined2 *)(puVar5 + 0x48);
        uVar14 = param_1[1];
        uVar17 = uVar17 + 1;
        *(undefined2 *)(iVar18 + 0x114) = *(undefined2 *)(puVar5 + 0x46);
        *(undefined2 *)(iVar18 + 0x116) = uVar1;
        *(undefined2 *)(iVar18 + 0x118) = uVar2;
        *(undefined2 *)(iVar18 + 0x11a) = uVar3;
        *(undefined2 *)(iVar18 + 0x11c) = uVar4;
        iVar18 = iVar18 + 0x124;
      } while (uVar17 < uVar14);
      if (uVar14 != 0) {
        iVar18 = 0;
        uVar17 = 0;
        do {
          uVar17 = uVar17 + 1;
          FUN_ram_4802a59e(*param_1 + iVar18 + 4);
          iVar18 = iVar18 + 0x124;
        } while (uVar17 < (uint)param_1[1]);
      }
    }
    FUN_ram_4ff209c6(*param_1);
    *param_1 = iVar6;
    param_1[2] = param_2;
    return 1;
  }
  return 0;
}


