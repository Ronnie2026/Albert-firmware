/* Firmware entry: 0x480af438 */

undefined4 FUN_ram_480af438(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar13 = param_1[2];
  uVar5 = param_1[1];
  if (uVar5 == uVar13) {
    if (uVar13 == 0) {
      iVar7 = 0x490;
      uVar5 = 4;
LAB_ram_480af45c:
      iVar7 = FUN_ram_4ff206d8(iVar7,0x404);
      if (iVar7 != 0) {
        iVar19 = iVar7 + 4;
        uVar13 = 0;
        if (param_1[1] != 0) {
          do {
            puVar6 = (undefined4 *)(*param_1 + (-4 - iVar7) + iVar19);
            *(undefined4 *)(iVar19 + -4) = *puVar6;
            FUN_ram_4802ace6(iVar19,puVar6 + 1);
            uVar11 = puVar6[9];
            uVar1 = *(undefined2 *)(puVar6 + 10);
            uVar17 = puVar6[5];
            uVar8 = puVar6[6];
            uVar9 = puVar6[7];
            *(undefined4 *)(iVar19 + 0x1c) = puVar6[8];
            *(undefined4 *)(iVar19 + 0x20) = uVar11;
            *(undefined2 *)(iVar19 + 0x24) = uVar1;
            *(undefined4 *)(iVar19 + 0x10) = uVar17;
            *(undefined4 *)(iVar19 + 0x14) = uVar8;
            *(undefined4 *)(iVar19 + 0x18) = uVar9;
            puVar14 = puVar6 + 0xb;
            puVar12 = (undefined4 *)(iVar19 + 0x28);
            do {
              uVar8 = puVar14[1];
              uVar9 = puVar14[2];
              uVar11 = puVar14[3];
              *puVar12 = *puVar14;
              puVar12[1] = uVar8;
              puVar12[2] = uVar9;
              puVar12[3] = uVar11;
              puVar14 = puVar14 + 4;
              puVar12 = puVar12 + 4;
            } while (puVar14 != puVar6 + 0x33);
            puVar10 = (undefined4 *)(iVar19 + 0xcc);
            puVar15 = puVar6 + 0x34;
            *puVar12 = *puVar14;
            do {
              uVar18 = puVar15[1];
              uVar17 = puVar15[2];
              uVar8 = puVar15[3];
              uVar9 = puVar15[4];
              uVar11 = puVar15[5];
              *puVar10 = *puVar15;
              puVar10[1] = uVar18;
              puVar10[2] = uVar17;
              puVar10[3] = uVar8;
              puVar10[4] = uVar9;
              puVar10[5] = uVar11;
              puVar15 = puVar15 + 6;
              puVar10 = puVar10 + 6;
            } while (puVar15 != puVar6 + 0x46);
            uVar1 = *(undefined2 *)((int)puVar6 + 0x11a);
            uVar2 = *(undefined2 *)(puVar6 + 0x47);
            uVar3 = *(undefined2 *)((int)puVar6 + 0x11e);
            uVar4 = *(undefined2 *)(puVar6 + 0x48);
            uVar16 = param_1[1];
            uVar13 = uVar13 + 1;
            *(undefined2 *)(iVar19 + 0x114) = *(undefined2 *)(puVar6 + 0x46);
            *(undefined2 *)(iVar19 + 0x116) = uVar1;
            *(undefined2 *)(iVar19 + 0x118) = uVar2;
            *(undefined2 *)(iVar19 + 0x11a) = uVar3;
            *(undefined2 *)(iVar19 + 0x11c) = uVar4;
            iVar19 = iVar19 + 0x124;
          } while (uVar13 < uVar16);
          if (uVar16 != 0) {
            iVar19 = 0;
            uVar13 = 0;
            do {
              uVar13 = uVar13 + 1;
              FUN_ram_4802a59e(*param_1 + iVar19 + 4);
              iVar19 = iVar19 + 0x124;
            } while (uVar13 < (uint)param_1[1]);
          }
        }
        FUN_ram_4ff209c6(*param_1);
        param_1[2] = uVar5;
        uVar5 = param_1[1];
        *param_1 = iVar7;
        goto LAB_ram_480af5d6;
      }
    }
    else {
      uVar5 = 0xe07038;
      if (uVar13 < 0x70381d) {
        uVar5 = uVar13 << 1;
      }
      if (uVar13 < uVar5) {
        iVar7 = uVar5 * 0x124;
        goto LAB_ram_480af45c;
      }
    }
    uVar8 = 0;
  }
  else {
    iVar7 = *param_1;
LAB_ram_480af5d6:
    puVar6 = (undefined4 *)(uVar5 * 0x124 + iVar7);
    *puVar6 = *param_2;
    FUN_ram_4802ace6(puVar6 + 1,param_2 + 1);
    uVar17 = param_2[9];
    uVar1 = *(undefined2 *)(param_2 + 10);
    uVar8 = param_2[5];
    uVar9 = param_2[6];
    uVar11 = param_2[7];
    puVar6[8] = param_2[8];
    puVar6[9] = uVar17;
    *(undefined2 *)(puVar6 + 10) = uVar1;
    puVar6[5] = uVar8;
    puVar6[6] = uVar9;
    puVar6[7] = uVar11;
    puVar14 = param_2 + 0xb;
    puVar12 = puVar6 + 0xb;
    do {
      uVar8 = puVar14[1];
      uVar9 = puVar14[2];
      uVar11 = puVar14[3];
      *puVar12 = *puVar14;
      puVar12[1] = uVar8;
      puVar12[2] = uVar9;
      puVar12[3] = uVar11;
      puVar14 = puVar14 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar14 != param_2 + 0x33);
    puVar10 = puVar6 + 0x34;
    puVar15 = param_2 + 0x34;
    *puVar12 = *puVar14;
    do {
      uVar18 = puVar15[1];
      uVar17 = puVar15[2];
      uVar8 = puVar15[3];
      uVar9 = puVar15[4];
      uVar11 = puVar15[5];
      *puVar10 = *puVar15;
      puVar10[1] = uVar18;
      puVar10[2] = uVar17;
      puVar10[3] = uVar8;
      puVar10[4] = uVar9;
      puVar10[5] = uVar11;
      puVar15 = puVar15 + 6;
      puVar10 = puVar10 + 6;
    } while (puVar15 != param_2 + 0x46);
    iVar7 = param_1[1];
    uVar1 = *(undefined2 *)((int)param_2 + 0x11a);
    uVar2 = *(undefined2 *)(param_2 + 0x47);
    uVar3 = *(undefined2 *)((int)param_2 + 0x11e);
    uVar4 = *(undefined2 *)(param_2 + 0x48);
    *(undefined2 *)(puVar6 + 0x46) = *(undefined2 *)(param_2 + 0x46);
    *(undefined2 *)((int)puVar6 + 0x11a) = uVar1;
    *(undefined2 *)(puVar6 + 0x47) = uVar2;
    *(undefined2 *)((int)puVar6 + 0x11e) = uVar3;
    *(undefined2 *)(puVar6 + 0x48) = uVar4;
    param_1[1] = iVar7 + 1;
    uVar8 = 1;
  }
  return uVar8;
}


