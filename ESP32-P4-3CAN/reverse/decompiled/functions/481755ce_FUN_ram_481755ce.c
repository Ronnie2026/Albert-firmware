/* Firmware entry: 0x481755ce */

int FUN_ram_481755ce(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4817fbba(param_1,0x19);
  if (iVar4 == 0) {
    puVar3 = (uint *)*param_1;
    uVar12 = *puVar3;
    uVar5 = puVar3[0xc];
    uVar6 = puVar3[0x15];
    uVar7 = puVar3[0x14];
    uVar17 = uVar12 + uVar5;
    uVar8 = uVar17 + uVar6;
    uVar9 = puVar3[0x17];
    uVar13 = uVar8 + uVar7;
    *puVar3 = uVar13 - uVar9;
    uVar12 = ((uint)(uVar17 < uVar12) + (uint)(uVar8 < uVar17) + (uint)(uVar13 < uVar8)) -
             (uint)(uVar13 < uVar9) & 0xff;
    uVar8 = puVar3[1];
    if (uVar12 == 0xff) {
      uVar13 = -(uint)(uVar8 == 0);
      uVar12 = uVar8 - 1;
    }
    else {
      uVar12 = uVar12 + uVar8;
      uVar13 = (uint)(uVar12 < uVar8);
    }
    uVar18 = puVar3[0xd];
    uVar8 = puVar3[0x16];
    uVar20 = puVar3[2];
    uVar12 = uVar12 + uVar18;
    uVar17 = uVar9 + uVar12 + uVar8;
    uVar12 = ((((uVar12 < uVar18) + uVar13 + (uint)(uVar12 + uVar8 < uVar12) & 0xff) +
              (uint)(uVar17 < uVar9)) - (uint)(uVar17 < uVar5)) - (uint)(uVar17 - uVar5 < uVar7);
    puVar3[1] = (uVar17 - uVar5) - uVar7;
    uVar13 = (uVar12 & 0xff) + uVar20;
    iVar2 = (int)(uVar12 * 0x1000000) >> 0x18;
    uVar12 = (uint)(uVar13 < uVar20);
    if (iVar2 < 0) {
      uVar12 = -(uint)(uVar20 < (uint)-iVar2);
      uVar13 = uVar20 + iVar2;
    }
    uVar21 = puVar3[0xe];
    uVar17 = puVar3[3];
    uVar20 = uVar13 + uVar21 + uVar9;
    uVar12 = ((((uVar13 + uVar21 < uVar21) + uVar12 & 0xff) + (uint)(uVar20 < uVar9)) -
             (uint)(uVar20 < uVar18)) - (uint)(uVar20 - uVar18 < uVar6);
    uVar13 = (uVar12 & 0xff) + uVar17;
    iVar2 = (int)(uVar12 * 0x1000000) >> 0x18;
    puVar3[2] = (uVar20 - uVar18) - uVar6;
    uVar12 = (uint)(uVar13 < uVar17);
    if (iVar2 < 0) {
      uVar12 = -(uint)(uVar17 < (uint)-iVar2);
      uVar13 = uVar17 + iVar2;
    }
    uVar17 = puVar3[0xf];
    uVar24 = puVar3[4];
    uVar20 = uVar13 + uVar17 + uVar5;
    uVar14 = uVar20 + uVar7;
    uVar15 = uVar14 + uVar6;
    uVar16 = (uVar15 - uVar21) - uVar8;
    uVar12 = (((((uVar13 + uVar17 < uVar17) + uVar12 + (uint)(uVar20 < uVar5) +
                 (uint)(uVar14 < uVar7) & 0xff) + (uint)(uVar15 < uVar6)) - (uint)(uVar15 < uVar21))
             - (uint)(uVar15 - uVar21 < uVar8)) - (uint)(uVar16 < uVar9);
    uVar13 = (uVar12 & 0xff) + uVar24;
    iVar2 = (int)(uVar12 * 0x1000000) >> 0x18;
    puVar3[3] = uVar16 - uVar9;
    uVar12 = (uint)(uVar13 < uVar24);
    if (iVar2 < 0) {
      uVar12 = -(uint)(uVar24 < (uint)-iVar2);
      uVar13 = uVar24 + iVar2;
    }
    uVar24 = puVar3[0x10];
    uVar22 = uVar13 + uVar6 + uVar6;
    uVar25 = uVar22 + uVar24 + uVar18;
    uVar23 = uVar5 + uVar25;
    uVar20 = uVar7 + uVar23;
    uVar14 = uVar20 + uVar8;
    uVar15 = (uVar14 - uVar17) - uVar9;
    puVar3[4] = uVar15 - uVar9;
    uVar16 = puVar3[5];
    uVar5 = (((((uVar13 + uVar6 < uVar6) + uVar12 + (uint)(uVar22 < uVar6) +
                (uint)(uVar22 + uVar24 < uVar22) + (uint)(uVar25 < uVar18) + (uint)(uVar23 < uVar5)
                + (uint)(uVar20 < uVar7) & 0xff) + (uint)(uVar14 < uVar8)) - (uint)(uVar14 < uVar17)
             ) - (uint)(uVar14 - uVar17 < uVar9)) - (uint)(uVar15 < uVar9);
    uVar12 = (uVar5 & 0xff) + uVar16;
    iVar2 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar12 < uVar16);
    if (iVar2 < 0) {
      uVar5 = -(uint)(uVar16 < (uint)-iVar2);
      uVar12 = uVar16 + iVar2;
    }
    uVar13 = puVar3[0x11];
    uVar20 = uVar12 + uVar8 + uVar8;
    uVar22 = uVar20 + uVar13 + uVar21;
    uVar16 = uVar18 + uVar22;
    uVar14 = uVar6 + uVar16;
    uVar15 = uVar14 + uVar9;
    uVar5 = (((uint)(uVar20 + uVar13 < uVar20) +
              (uVar12 + uVar8 < uVar8) + uVar5 + (uint)(uVar20 < uVar8) + (uint)(uVar22 < uVar21) +
              (uint)(uVar16 < uVar18) + (uint)(uVar14 < uVar6) & 0xff) + (uint)(uVar15 < uVar9)) -
            (uint)(uVar15 < uVar24);
    uVar12 = puVar3[6];
    iVar2 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uVar5 & 0xff) + uVar12;
    puVar3[5] = uVar15 - uVar24;
    uVar18 = (uint)(uVar5 < uVar12);
    if (iVar2 < 0) {
      uVar18 = -(uint)(uVar12 < (uint)-iVar2);
      uVar5 = uVar12 + iVar2;
    }
    uVar20 = puVar3[0x12];
    uVar15 = uVar5 + uVar9 + uVar9;
    uVar22 = uVar15 + uVar20 + uVar17;
    uVar16 = uVar21 + uVar22;
    uVar12 = uVar8 + uVar16;
    puVar3[6] = uVar12 - uVar13;
    uVar14 = puVar3[7];
    uVar5 = (((uVar5 + uVar9 < uVar9) + uVar18 + (uint)(uVar15 < uVar9) +
              (uint)(uVar15 + uVar20 < uVar15) + (uint)(uVar22 < uVar17) + (uint)(uVar16 < uVar21) &
             0xff) + (uint)(uVar12 < uVar8)) - (uint)(uVar12 < uVar13);
    uVar12 = (uVar5 & 0xff) + uVar14;
    iVar2 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar12 < uVar14);
    if (iVar2 < 0) {
      uVar5 = -(uint)(uVar14 < (uint)-iVar2);
      uVar12 = uVar14 + iVar2;
    }
    uVar15 = puVar3[0x13];
    uVar16 = puVar3[8];
    uVar18 = uVar12 + uVar15 + uVar24;
    uVar21 = uVar18 + uVar17;
    uVar14 = uVar21 + uVar9;
    uVar5 = (((uint)(uVar21 < uVar17) + (uVar12 + uVar15 < uVar15) + uVar5 + (uint)(uVar18 < uVar24)
             & 0xff) + (uint)(uVar14 < uVar9)) - (uint)(uVar14 < uVar20);
    puVar3[7] = uVar14 - uVar20;
    uVar12 = (uVar5 & 0xff) + uVar16;
    iVar2 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar12 < uVar16);
    if (iVar2 < 0) {
      uVar5 = -(uint)(uVar16 < (uint)-iVar2);
      uVar12 = uVar16 + iVar2;
    }
    uVar17 = uVar12 + uVar7 + uVar13;
    uVar18 = uVar17 + uVar24;
    puVar3[8] = uVar18 - uVar15;
    uVar21 = puVar3[9];
    uVar5 = ((uint)(uVar18 < uVar24) +
            ((uVar12 + uVar7 < uVar7) + uVar5 + (uint)(uVar17 < uVar13) & 0xff)) -
            (uint)(uVar18 < uVar15);
    uVar12 = (uVar5 & 0xff) + uVar21;
    iVar2 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar12 < uVar21);
    if (iVar2 < 0) {
      uVar5 = -(uint)(uVar21 < (uint)-iVar2);
      uVar12 = uVar21 + iVar2;
    }
    uVar17 = uVar12 + uVar6 + uVar20;
    uVar18 = uVar17 + uVar13;
    uVar12 = (((uVar12 + uVar6 < uVar6) + uVar5 + (uint)(uVar17 < uVar20) & 0xff) +
             (uint)(uVar18 < uVar13)) - (uint)(uVar18 < uVar7);
    uVar13 = puVar3[10];
    puVar3[9] = uVar18 - uVar7;
    uVar5 = (uVar12 & 0xff) + uVar13;
    iVar2 = (int)(uVar12 * 0x1000000) >> 0x18;
    uVar12 = (uint)(uVar5 < uVar13);
    if (iVar2 < 0) {
      uVar12 = -(uint)(uVar13 < (uint)-iVar2);
      uVar5 = uVar13 + iVar2;
    }
    uVar13 = uVar5 + uVar8 + uVar15;
    uVar17 = uVar13 + uVar20;
    puVar3[10] = uVar17 - uVar6;
    uVar18 = puVar3[0xb];
    uVar5 = (((uVar5 + uVar8 < uVar8) + uVar12 + (uint)(uVar13 < uVar15) & 0xff) +
            (uint)(uVar17 < uVar20)) - (uint)(uVar17 < uVar6);
    uVar6 = (uVar5 & 0xff) + uVar18;
    iVar2 = (int)(uVar5 * 0x1000000) >> 0x18;
    uVar5 = (uint)(uVar6 < uVar18);
    if (iVar2 < 0) {
      uVar5 = -(uint)(uVar18 < (uint)-iVar2);
      uVar6 = uVar18 + iVar2;
    }
    uVar12 = uVar6 + uVar9 + uVar7;
    uVar13 = uVar12 + uVar15;
    iVar19 = (int)(((((uVar6 + uVar9 < uVar9) + uVar5 + (uint)(uVar12 < uVar7) & 0xff) +
                    (uint)(uVar13 < uVar15)) - (uint)(uVar13 < uVar8)) * 0x1000000) >> 0x18;
    puVar3[0xb] = uVar13 - uVar8;
    iVar2 = iVar19;
    if (iVar19 < 0) {
      iVar2 = 0;
    }
    uVar1 = *(ushort *)((int)param_1 + 6);
    puVar3[0xc] = (int)(char)iVar2;
    if (0xd < uVar1) {
      memset(puVar3 + 0xd,0,(uVar1 - 0xd) * 4);
    }
    if (iVar19 < 0) {
      puVar10 = puVar3;
      do {
        puVar11 = puVar10 + 1;
        *puVar10 = ~*puVar10;
        puVar10 = puVar11;
      } while (puVar3 + 0xd != puVar11);
      uVar5 = *puVar3 + 1;
      *puVar3 = uVar5;
      puVar10 = puVar3;
      while ((uVar5 == 0 && (puVar10 = puVar10 + 1, puVar10 != puVar3 + 0xd))) {
        uVar5 = *puVar10 + 1;
        *puVar10 = uVar5;
      }
      uVar5 = puVar3[0xc];
      *(undefined2 *)(param_1 + 1) = 0xffff;
      puVar3[0xc] = uVar5 - iVar19;
      return 0;
    }
  }
  return iVar4;
}


