/* Firmware entry: 0x480cbd62 */

void FUN_ram_480cbd62(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  uint local_110 [20];
  undefined4 local_c0 [18];
  undefined4 auStack_78 [4];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint auStack_20 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = local_110;
  puVar16 = local_110;
  fence();
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_1 + 0xd0)) {
    FUN_ram_4ff3ec14(param_1 + 0x70,0xffffffff);
    puVar9 = &local_68;
    puVar13 = (uint *)(param_1 + 0x84);
    do {
      uVar19 = puVar13[1];
      uVar17 = puVar13[2];
      uVar2 = puVar13[3];
      uVar4 = puVar13[4];
      uVar6 = puVar13[5];
      *puVar9 = *puVar13;
      puVar9[1] = uVar19;
      puVar9[2] = uVar17;
      puVar9[3] = uVar2;
      puVar9[4] = uVar4;
      puVar9[5] = uVar6;
      puVar13 = puVar13 + 6;
      puVar9 = puVar9 + 6;
    } while (puVar13 != (uint *)(param_1 + 0xcc));
    iVar21 = *(int *)(param_1 + 0xcc);
    FUN_ram_4ff3ee10(param_1 + 0x70);
    if (iVar21 != *(int *)(param_1 + 0xd0)) {
      puVar9 = &local_68;
      puVar20 = (undefined4 *)(param_1 + 0xd4);
      do {
        uVar19 = *puVar9;
        uVar17 = puVar9[1];
        uVar2 = puVar9[2];
        uVar4 = puVar9[3];
        uVar6 = puVar9[4];
        puVar11[5] = puVar9[5];
        *puVar11 = uVar19;
        puVar11[1] = uVar17;
        puVar11[2] = uVar2;
        puVar11[3] = uVar4;
        puVar11[4] = uVar6;
        puVar9 = puVar9 + 6;
        puVar11 = puVar11 + 6;
      } while (puVar9 != auStack_20);
      FUN_ram_4804c54e(local_c0,local_110);
      puVar15 = local_c0;
      puVar12 = puVar20;
      do {
        uVar18 = puVar15[1];
        uVar3 = puVar15[2];
        uVar5 = puVar15[3];
        uVar7 = puVar15[4];
        uVar8 = puVar15[5];
        *puVar12 = *puVar15;
        puVar12[1] = uVar18;
        puVar12[2] = uVar3;
        puVar12[3] = uVar5;
        puVar12[4] = uVar7;
        puVar12[5] = uVar8;
        puVar15 = puVar15 + 6;
        puVar12 = puVar12 + 6;
      } while (puVar15 != auStack_78);
      do {
        uVar18 = puVar20[1];
        uVar3 = puVar20[2];
        uVar5 = puVar20[3];
        uVar7 = puVar20[4];
        uVar8 = puVar20[5];
        *puVar16 = *puVar20;
        puVar16[1] = uVar18;
        puVar16[2] = uVar3;
        puVar16[3] = uVar5;
        puVar16[4] = uVar7;
        puVar16[5] = uVar8;
        puVar20 = puVar20 + 6;
        puVar16 = puVar16 + 6;
      } while (puVar20 != (undefined4 *)(param_1 + 0x11c));
      FUN_ram_4804c54e(local_c0,local_110);
      puVar12 = local_c0;
      puVar20 = (undefined4 *)(param_1 + 0x11c);
      do {
        uVar18 = puVar12[1];
        uVar3 = puVar12[2];
        uVar5 = puVar12[3];
        uVar7 = puVar12[4];
        uVar8 = puVar12[5];
        *puVar20 = *puVar12;
        puVar20[1] = uVar18;
        puVar20[2] = uVar3;
        puVar20[3] = uVar5;
        puVar20[4] = uVar7;
        puVar20[5] = uVar8;
        puVar12 = puVar12 + 6;
        puVar20 = puVar20 + 6;
      } while (puVar12 != auStack_78);
      *(int *)(param_1 + 0xd0) = iVar21;
      *(undefined1 *)(param_1 + 0x170) = 1;
    }
  }
  if ((*(char *)(param_1 + 0x1d8) != '\0') && (200000 < (uint)(param_2 - *(int *)(param_1 + 0x1e0)))
     ) {
    *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + 1;
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(undefined1 *)(param_1 + 0x208) = 0;
    *(undefined2 *)(param_1 + 0x20a) = 0;
    *(undefined2 *)(param_1 + 0x20c) = 0;
    *(undefined1 *)(param_1 + 0x20e) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined1 *)(param_1 + 0x218) = 0;
    *(undefined1 *)(param_1 + 0x2da) = 0;
    uStack_64 = 8;
    *(undefined4 *)(param_1 + 0x1e8) = 8;
    uStack_50 = 0x10000;
    *(undefined4 *)(param_1 + 0x1fc) = 0x10000;
    uVar2 = *(uint *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
    if (uVar2 != 0) {
      iVar21 = *(int *)(param_1 + 0x58);
      if (uVar2 == *(uint *)(iVar21 + 0x81e8)) {
        local_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_64 = uVar2;
        FUN_ram_480cb520(iVar21 + 0x7cd0,&local_68);
      }
      iVar1 = iVar21 + 0x2864;
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      iVar14 = (uVar2 & 0x7f) * 0x14;
      iVar10 = iVar21 + 0x2000 + iVar14;
      if ((*(char *)(iVar10 + -0x1cf) == '\0') || (uVar2 != *(uint *)(iVar10 + -0x1dc))) {
        FUN_ram_4ff3ee10(iVar1);
        return;
      }
      iVar10 = iVar14 + 0x2000 + iVar21;
      *(undefined1 *)(iVar10 + -0x1e0) = 0;
      *(undefined1 *)(iVar10 + -0x1dc) = 0;
      *(undefined1 *)(iVar10 + -0x1db) = 0;
      *(undefined1 *)(iVar10 + -0x1da) = 0;
      *(undefined1 *)(iVar10 + -0x1d9) = 0;
      *(undefined1 *)(iVar10 + -0x1d8) = 0;
      *(undefined1 *)(iVar10 + -0x1d7) = 0;
      *(undefined1 *)(iVar10 + -0x1d6) = 0;
      *(undefined1 *)(iVar10 + -0x1d5) = 0;
      *(undefined1 *)(iVar10 + -0x1d4) = 0;
      *(undefined1 *)(iVar10 + -0x1d3) = 0;
      *(undefined1 *)(iVar10 + -0x1d2) = 0;
      *(undefined1 *)(iVar10 + -0x1d1) = 0;
      *(undefined1 *)(iVar10 + -0x1d0) = 0;
      *(undefined1 *)(iVar10 + -0x1cf) = 0;
      *(undefined1 *)(iVar10 + -0x1ce) = 0;
      FUN_ram_4ff3ee10(iVar1);
      uStack_58 = CONCAT22(uStack_58._2_2_,1);
      local_68 = local_68 & 0xffffff00;
      uStack_60 = uStack_60 & 0xffff0000;
      uStack_5c = 0;
      uStack_54 = 0;
      uStack_4c = 0;
      uStack_64 = uVar2;
      uStack_50 = FUN_ram_48025b94();
      FUN_ram_4805d48e(iVar21,&local_68);
    }
  }
  return;
}


