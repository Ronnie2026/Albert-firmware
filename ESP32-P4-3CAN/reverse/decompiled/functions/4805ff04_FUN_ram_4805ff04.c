/* Firmware entry: 0x4805ff04 */

void FUN_ram_4805ff04(int param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar23 = *(undefined4 *)(param_2 + 0x10);
  uVar17 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 4) = uVar4;
  *(undefined4 *)(param_3 + 8) = uVar23;
  *(undefined4 *)(param_3 + 0xc) = uVar17;
  *param_3 = 1;
  puVar14 = (uint *)(param_3 + 0x38);
  iVar12 = 0;
  while( true ) {
    while( true ) {
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      local_50 = 0;
      uVar27 = 0;
      uVar29 = 0;
      uVar5 = 0;
      bVar2 = false;
      iVar19 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar28 = 0;
      do {
        iVar20 = iVar19 * 0x30 + iVar12 * 0x60 + param_1;
        uVar18 = *(uint *)(iVar20 + 0x4c);
        uVar15 = *(uint *)(iVar20 + 0x24);
        uVar13 = *(uint *)(iVar20 + 0x28);
        uVar10 = *(uint *)(iVar20 + 0x2c);
        uVar30 = *(uint *)(iVar20 + 0x30);
        uVar31 = *(uint *)(iVar20 + 0x34);
        uVar32 = *(uint *)(iVar20 + 0x38);
        uVar33 = *(uint *)(iVar20 + 0x3c);
        uVar3 = *(uint *)(iVar20 + 0x40);
        uVar6 = *(uint *)(iVar20 + 0x44);
        uVar7 = *(uint *)(iVar20 + 0x48);
        uVar16 = uVar25;
        uVar11 = uVar26;
        uVar8 = uVar28;
        if ((((uVar18 != 0) && (uVar18 == *(uint *)(iVar20 + 0x4c))) &&
            (uVar18 == *(uint *)(iVar20 + 0x4c))) && (*(uint *)(iVar20 + 0x50) == ~uVar18)) {
          uVar21 = 0x811c9dc5;
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar15 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar13 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar10 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar30 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar31 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar32 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar33 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar3 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar9 = uVar24 & 0x1f;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar21 ^ uVar6 >> uVar9 & 0xff) * 0x1000193;
          } while (uVar24 != 0x20);
          uVar24 = 0;
          do {
            uVar22 = uVar21;
            uVar9 = uVar7 >> (uVar24 & 0x1f) & 0xff;
            uVar24 = uVar24 + 8;
            uVar21 = (uVar9 ^ uVar22) * 0x1000193;
          } while (uVar24 != 0x20);
          if (uVar9 == uVar22) {
            uVar21 = 0xffffffff;
          }
          if (uVar18 == uVar21) {
            uVar8 = uVar7;
            uVar11 = uVar10;
            uVar16 = uVar15;
            if ((bVar2) && ((int)(uVar15 - uVar25) < 1)) {
              uVar3 = uStack_48;
              uVar6 = uStack_44;
              uVar8 = uVar28;
              uVar11 = uVar26;
              uVar13 = uVar5;
              uVar16 = uVar25;
              uVar30 = uVar29;
              uVar31 = uVar27;
              uVar32 = local_50;
              uVar33 = uStack_4c;
            }
            uVar27 = uVar31;
            uVar29 = uVar30;
            uVar5 = uVar13;
            bVar2 = true;
            local_50 = uVar32;
            uStack_4c = uVar33;
            uStack_48 = uVar3;
            uStack_44 = uVar6;
          }
        }
        bVar1 = iVar19 != 1;
        iVar19 = 1;
        uVar25 = uVar16;
        uVar26 = uVar11;
        uVar28 = uVar8;
      } while (bVar1);
      if (bVar2) break;
      iVar12 = iVar12 + 1;
      puVar14 = puVar14 + 10;
      if (iVar12 == 10) {
        return;
      }
    }
    param_3[iVar12 + 0x2c] = 1;
    *puVar14 = uVar16;
    puVar14[1] = uVar5;
    puVar14[5] = local_50;
    puVar14[2] = uVar11;
    puVar14[3] = uVar29;
    puVar14[6] = uStack_4c;
    puVar14[4] = uVar27;
    puVar14[9] = uVar8;
    puVar14[7] = uStack_48;
    puVar14[8] = uStack_44;
    if (*(uint *)(param_3 + 0x28) < uVar5) {
      *(uint *)(param_3 + 0x28) = uVar5;
    }
    if (iVar12 == 9) break;
    if ((*(int *)(param_3 + 0x24) == 0) && (uVar29 != 0)) {
      *(uint *)(param_3 + 0x24) = uVar29;
    }
    iVar12 = iVar12 + 1;
    puVar14 = puVar14 + 10;
  }
  *(uint *)(param_3 + 0x24) = uVar29;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return;
}


