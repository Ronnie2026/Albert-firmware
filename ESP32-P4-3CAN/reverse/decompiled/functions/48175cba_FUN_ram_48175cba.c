/* Firmware entry: 0x48175cba */

int FUN_ram_48175cba(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4817fbba(param_1,0xf);
  if (iVar4 == 0) {
    puVar3 = (uint *)*param_1;
    uVar13 = 0;
    uVar16 = puVar3[7];
    uVar15 = puVar3[0xb];
    uVar7 = puVar3[1];
    uVar8 = *puVar3 - uVar16;
    uVar9 = -(uint)(*puVar3 < uVar16);
    *puVar3 = uVar8 - uVar15;
    uVar8 = (uint)(uVar8 < uVar15);
    iVar5 = uVar9 - uVar8;
    if (uVar9 != uVar8) {
      uVar13 = -(uint)(uVar7 < (uint)-iVar5) & 0xff;
      uVar7 = uVar7 + iVar5;
    }
    uVar10 = puVar3[8];
    uVar8 = puVar3[0xc];
    uVar9 = puVar3[2];
    puVar3[1] = (uVar7 - uVar10) - uVar8;
    iVar5 = (int)(((uVar13 - (uVar7 < uVar10)) - (uint)(uVar7 - uVar10 < uVar8)) * 0x1000000) >>
            0x18;
    uVar7 = 0;
    if (iVar5 != 0) {
      uVar7 = -(uint)(uVar9 < (uint)-iVar5) & 0xff;
      uVar9 = uVar9 + iVar5;
    }
    uVar14 = puVar3[9];
    uVar13 = puVar3[0xd];
    uVar18 = puVar3[3];
    iVar5 = (int)(((uVar7 - (uVar9 < uVar14)) - (uint)(uVar9 - uVar14 < uVar13)) * 0x1000000) >>
            0x18;
    puVar3[2] = (uVar9 - uVar14) - uVar13;
    uVar7 = 0;
    if (iVar5 != 0) {
      uVar7 = -(uint)(uVar18 < (uint)-iVar5) & 0xff;
      uVar18 = uVar18 + iVar5;
    }
    uVar6 = puVar3[10];
    uVar19 = puVar3[4];
    uVar9 = (uVar16 - uVar6) + uVar18;
    uVar2 = uVar9 + uVar15;
    uVar7 = uVar7 + ((uint)(uVar9 < uVar16) - (uint)(uVar18 < uVar6)) + (uint)(uVar2 < uVar15);
    puVar3[3] = uVar2;
    uVar9 = (uVar7 & 0xff) + uVar19;
    iVar5 = (int)(uVar7 * 0x1000000) >> 0x18;
    uVar7 = (uint)(uVar9 < uVar19);
    if (iVar5 < 0) {
      uVar7 = -(uint)(uVar19 < (uint)-iVar5);
      uVar9 = uVar19 + iVar5;
    }
    uVar2 = (uVar10 - uVar15) + uVar9;
    uVar16 = uVar8 + uVar2;
    puVar3[4] = uVar16;
    uVar18 = puVar3[5];
    uVar7 = ((uint)(uVar2 < uVar10) - (uint)(uVar9 < uVar15)) + uVar7 + (uint)(uVar16 < uVar8);
    uVar9 = (uVar7 & 0xff) + uVar18;
    uVar15 = (uint)(uVar9 < uVar18);
    if ((int)uVar7 < 0) {
      uVar15 = -(uint)(uVar18 < -uVar7);
      uVar9 = uVar18 + uVar7;
    }
    uVar7 = (uVar14 - uVar8) + uVar9;
    uVar16 = uVar13 + uVar7;
    puVar3[5] = uVar16;
    uVar10 = puVar3[6];
    uVar8 = ((uint)(uVar7 < uVar14) - (uint)(uVar9 < uVar8)) + uVar15 + (uint)(uVar16 < uVar13);
    uVar9 = (uVar8 & 0xff) + uVar10;
    uVar7 = (uint)(uVar9 < uVar10);
    if ((int)uVar8 < 0) {
      uVar7 = -(uint)(uVar10 < -uVar8);
      uVar9 = uVar10 + uVar8;
    }
    uVar8 = (uVar6 - uVar13) + uVar9;
    iVar17 = ((uint)(uVar8 < uVar6) - (uint)(uVar9 < uVar13)) + uVar7;
    puVar3[6] = uVar8;
    iVar5 = iVar17;
    if (iVar17 < 0) {
      iVar5 = 0;
    }
    uVar1 = *(ushort *)((int)param_1 + 6);
    puVar3[7] = (int)(char)iVar5;
    if (8 < uVar1) {
      memset(puVar3 + 8,0,(uVar1 - 8) * 4);
    }
    if (iVar17 < 0) {
      puVar11 = puVar3;
      do {
        puVar12 = puVar11 + 1;
        *puVar11 = ~*puVar11;
        puVar11 = puVar12;
      } while (puVar3 + 8 != puVar12);
      uVar7 = *puVar3 + 1;
      *puVar3 = uVar7;
      puVar11 = puVar3;
      while ((uVar7 == 0 && (puVar11 = puVar11 + 1, puVar11 != puVar3 + 8))) {
        uVar7 = *puVar11 + 1;
        *puVar11 = uVar7;
      }
      uVar7 = puVar3[7];
      *(undefined2 *)(param_1 + 1) = 0xffff;
      puVar3[7] = uVar7 - iVar17;
      return 0;
    }
  }
  return iVar4;
}


