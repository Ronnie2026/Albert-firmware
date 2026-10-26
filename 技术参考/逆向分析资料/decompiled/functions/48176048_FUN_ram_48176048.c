/* Firmware entry: 0x48176048 */

int FUN_ram_48176048(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4817fbba(param_1,0x11);
  if (iVar4 == 0) {
    puVar3 = (uint *)*param_1;
    uVar18 = puVar3[8];
    uVar2 = puVar3[9];
    uVar6 = puVar3[0xb];
    uVar8 = *puVar3 + uVar18;
    uVar10 = uVar8 + uVar2;
    uVar7 = puVar3[0xc];
    uVar9 = puVar3[0xd];
    uVar22 = puVar3[0xe];
    uVar5 = (uVar10 - uVar6) - uVar7;
    uVar11 = uVar5 - uVar9;
    uVar8 = (((((uint)(uVar8 < *puVar3) + (uint)(uVar10 < uVar8)) - (uint)(uVar10 < uVar6)) -
             (uint)(uVar10 - uVar6 < uVar7)) - (uint)(uVar5 < uVar9)) - (uint)(uVar11 < uVar22);
    *puVar3 = uVar11 - uVar22;
    uVar10 = puVar3[1];
    uVar5 = (uVar8 & 0xff) + uVar10;
    uVar11 = (uint)(uVar5 < uVar10);
    if ((int)uVar8 < 0) {
      uVar11 = -(uint)(uVar10 < -uVar8);
      uVar5 = uVar10 + uVar8;
    }
    uVar8 = puVar3[10];
    uVar5 = uVar5 + uVar2;
    uVar19 = uVar5 + uVar8;
    uVar20 = puVar3[0xf];
    uVar10 = (uVar19 - uVar7) - uVar9;
    uVar12 = uVar10 - uVar22;
    uVar5 = ((((((uVar5 < uVar2) + uVar11 & 0xff) + (uint)(uVar19 < uVar5)) - (uint)(uVar19 < uVar7)
              ) - (uint)(uVar19 - uVar7 < uVar9)) - (uint)(uVar10 < uVar22)) -
            (uint)(uVar12 < uVar20);
    puVar3[1] = uVar12 - uVar20;
    uVar10 = puVar3[2];
    iVar23 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uVar5 & 0xff) + uVar10;
    uVar11 = (uint)(uVar5 < uVar10);
    if (iVar23 < 0) {
      uVar11 = -(uint)(uVar10 < (uint)-iVar23);
      uVar5 = uVar10 + iVar23;
    }
    uVar10 = uVar5 + uVar8 + uVar6;
    uVar12 = (uVar10 - uVar9) - uVar22;
    uVar5 = (((((uVar5 + uVar8 < uVar8) + uVar11 & 0xff) + (uint)(uVar10 < uVar6)) -
             (uint)(uVar10 < uVar9)) - (uint)(uVar10 - uVar9 < uVar22)) - (uint)(uVar12 < uVar20);
    puVar3[2] = uVar12 - uVar20;
    uVar10 = puVar3[3];
    iVar23 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uVar5 & 0xff) + uVar10;
    uVar11 = (uint)(uVar5 < uVar10);
    if (iVar23 < 0) {
      uVar11 = -(uint)(uVar10 < (uint)-iVar23);
      uVar5 = uVar10 + iVar23;
    }
    uVar10 = uVar5 + uVar6 + uVar6;
    uVar12 = uVar10 + uVar7;
    uVar19 = uVar12 + uVar7;
    uVar13 = uVar19 + uVar9;
    uVar14 = (uVar13 - uVar20) - uVar18;
    puVar3[3] = uVar14 - uVar2;
    uVar15 = puVar3[4];
    uVar5 = (((((uVar5 + uVar6 < uVar6) + uVar11 + (uint)(uVar10 < uVar6) + (uint)(uVar12 < uVar7) +
                (uint)(uVar19 < uVar7) & 0xff) + (uint)(uVar13 < uVar9)) - (uint)(uVar13 < uVar20))
            - (uint)(uVar13 - uVar20 < uVar18)) - (uint)(uVar14 < uVar2);
    uVar10 = (uVar5 & 0xff) + uVar15;
    iVar23 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar10 < uVar15);
    if (iVar23 < 0) {
      uVar5 = -(uint)(uVar15 < (uint)-iVar23);
      uVar10 = uVar15 + iVar23;
    }
    uVar11 = uVar10 + uVar7 + uVar7;
    uVar12 = uVar11 + uVar9;
    uVar19 = uVar12 + uVar9;
    uVar13 = uVar19 + uVar22;
    puVar3[4] = (uVar13 - uVar2) - uVar8;
    uVar14 = puVar3[5];
    uVar5 = ((((uVar10 + uVar7 < uVar7) + uVar5 + (uint)(uVar11 < uVar7) + (uint)(uVar12 < uVar9) +
               (uint)(uVar19 < uVar9) & 0xff) + (uint)(uVar13 < uVar22)) - (uint)(uVar13 < uVar2)) -
            (uint)(uVar13 - uVar2 < uVar8);
    uVar10 = (uVar5 & 0xff) + uVar14;
    iVar23 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar10 < uVar14);
    if (iVar23 < 0) {
      uVar5 = -(uint)(uVar14 < (uint)-iVar23);
      uVar10 = uVar14 + iVar23;
    }
    uVar11 = uVar10 + uVar9 + uVar9;
    uVar12 = uVar11 + uVar22;
    uVar19 = uVar12 + uVar22;
    uVar13 = uVar19 + uVar20;
    uVar5 = ((((uVar10 + uVar9 < uVar9) + uVar5 + (uint)(uVar11 < uVar9) + (uint)(uVar12 < uVar22) +
               (uint)(uVar19 < uVar22) & 0xff) + (uint)(uVar13 < uVar20)) - (uint)(uVar13 < uVar8))
            - (uint)(uVar13 - uVar8 < uVar6);
    puVar3[5] = (uVar13 - uVar8) - uVar6;
    uVar10 = puVar3[6];
    iVar23 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uVar5 & 0xff) + uVar10;
    uVar11 = (uint)(uVar5 < uVar10);
    if (iVar23 < 0) {
      uVar11 = -(uint)(uVar10 < (uint)-iVar23);
      uVar5 = uVar10 + iVar23;
    }
    uVar12 = uVar5 + uVar22 + uVar22;
    uVar19 = uVar12 + uVar20;
    uVar13 = uVar19 + uVar20;
    uVar14 = uVar13 + uVar22;
    uVar15 = uVar14 + uVar9;
    uVar10 = puVar3[7];
    uVar5 = ((((uVar5 + uVar22 < uVar22) + uVar11 + (uint)(uVar12 < uVar22) +
               (uint)(uVar19 < uVar20) + (uint)(uVar13 < uVar20) + (uint)(uVar14 < uVar22) & 0xff) +
             (uint)(uVar15 < uVar9)) - (uint)(uVar15 < uVar18)) - (uint)(uVar15 - uVar18 < uVar2);
    puVar3[6] = (uVar15 - uVar18) - uVar2;
    uVar11 = (uVar5 & 0xff) + uVar10;
    iVar23 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar2 = (uint)(uVar11 < uVar10);
    if (iVar23 < 0) {
      uVar2 = -(uint)(uVar10 < (uint)-iVar23);
      uVar11 = uVar10 + iVar23;
    }
    uVar5 = uVar11 + uVar20 + uVar20;
    uVar10 = uVar5 + uVar20;
    uVar22 = uVar10 + uVar18;
    uVar12 = (uVar22 - uVar8) - uVar6;
    uVar19 = uVar12 - uVar7;
    iVar21 = (int)((((((((uVar11 + uVar20 < uVar20) + uVar2 + (uint)(uVar5 < uVar20) +
                         (uint)(uVar10 < uVar20) & 0xff) + (uint)(uVar22 < uVar18)) -
                      (uint)(uVar22 < uVar8)) - (uint)(uVar22 - uVar8 < uVar6)) -
                    (uint)(uVar12 < uVar7)) - (uint)(uVar19 < uVar9)) * 0x1000000) >> 0x18;
    puVar3[7] = uVar19 - uVar9;
    iVar23 = iVar21;
    if (iVar21 < 0) {
      iVar23 = 0;
    }
    uVar1 = *(ushort *)((int)param_1 + 6);
    puVar3[8] = (int)(char)iVar23;
    if (9 < uVar1) {
      memset(puVar3 + 9,0,(uVar1 - 9) * 4);
    }
    if (iVar21 < 0) {
      puVar16 = puVar3;
      do {
        puVar17 = puVar16 + 1;
        *puVar16 = ~*puVar16;
        puVar16 = puVar17;
      } while (puVar3 + 9 != puVar17);
      uVar2 = *puVar3 + 1;
      *puVar3 = uVar2;
      puVar16 = puVar3;
      while ((uVar2 == 0 && (puVar16 = puVar16 + 1, puVar16 != puVar3 + 9))) {
        uVar2 = *puVar16 + 1;
        *puVar16 = uVar2;
      }
      uVar2 = puVar3[8];
      *(undefined2 *)(param_1 + 1) = 0xffff;
      puVar3[8] = uVar2 - iVar21;
      return 0;
    }
  }
  return iVar4;
}


