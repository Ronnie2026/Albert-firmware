/* Firmware entry: 0x4807a88c */

undefined1 FUN_ram_4807a88c(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  ushort uVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(ushort *)(param_1 + 0x22500);
  if (0x400 < uVar3) {
    return 0;
  }
  bVar1 = param_1[0x22502];
  uVar5 = 0;
  if (bVar1 < 0x15) {
    uVar13 = *(uint *)(param_1 + 0x2250c);
    uVar15 = *(uint *)(param_1 + 0x22508);
    if (uVar15 == 0 && uVar13 == 0) {
      return uVar5;
    }
    if (uVar3 != 0) {
      pbVar12 = param_1 + 0xc;
      uVar18 = 0;
      pbVar4 = param_1;
      do {
        bVar17 = 0;
        pbVar9 = pbVar4;
        do {
          bVar8 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          bVar17 = bVar17 | bVar8;
        } while (pbVar9 != pbVar12);
        if (((bVar17 == 0) || (iVar14 = *(int *)(pbVar12 + 0xc), iVar14 == 0)) ||
           (iVar14 != *(int *)(pbVar12 + 0x3c))) {
          return 0;
        }
        uVar10 = *(uint *)(pbVar12 + 0x18);
        if (*(uint *)(pbVar12 + 0x14) == 0 && uVar10 == 0) {
          return 0;
        }
        if (uVar13 <= uVar10) {
          if (uVar13 != uVar10) {
            return 0;
          }
          if (uVar15 <= *(uint *)(pbVar12 + 0x14)) {
            return 0;
          }
        }
        bVar17 = pbVar12[0x65];
        if (3 < bVar17) {
          return 0;
        }
        bVar8 = pbVar12[0x66];
        if (3 < bVar8) {
          return 0;
        }
        uVar10 = *(uint *)(pbVar12 + 0x58);
        if (*(uint *)(pbVar12 + 0x50) < uVar10) {
          return 0;
        }
        if ((*(uint *)(pbVar12 + 0x50) == uVar10) &&
           (*(uint *)(pbVar12 + 0x4c) < *(uint *)(pbVar12 + 0x54))) {
          return 0;
        }
        uVar7 = *(uint *)(pbVar12 + 0x60);
        if (uVar10 < uVar7) {
          return 0;
        }
        if ((uVar7 == uVar10) && (*(uint *)(pbVar12 + 0x54) < *(uint *)(pbVar12 + 0x5c))) {
          return 0;
        }
        if (uVar7 < *(uint *)(pbVar12 + 0x70)) {
          return 0;
        }
        if ((*(uint *)(pbVar12 + 0x70) == uVar7) &&
           (*(uint *)(pbVar12 + 0x5c) < *(uint *)(pbVar12 + 0x6c))) {
          return 0;
        }
        if (1 < (byte)(bVar17 - 2)) {
          return 0;
        }
        if (bVar17 == 2) {
          if (bVar8 != 1) {
            return 0;
          }
        }
        else {
          if (1 < (byte)(bVar8 - 2)) {
            return 0;
          }
          if (pbVar12[100] == 0) {
            return 0;
          }
        }
        if (uVar18 != 0) {
          iVar11 = *(int *)(pbVar12 + 4);
          iVar16 = *(int *)(pbVar12 + 8);
          pbVar9 = param_1;
          do {
            if ((((*(int *)(pbVar9 + 0x10) == iVar11) && (*(int *)(pbVar9 + 0x14) == iVar16)) &&
                (iVar14 == *(int *)(pbVar9 + 0x18))) &&
               (iVar6 = FUN_ram_4ff4511a(pbVar9,pbVar4,0xc), iVar6 == 0)) {
              return 0;
            }
            pbVar9 = pbVar9 + 0x88;
          } while (pbVar9 != pbVar4);
        }
        uVar18 = uVar18 + 1;
        pbVar4 = pbVar4 + 0x88;
        pbVar12 = pbVar12 + 0x88;
      } while (uVar3 != uVar18);
    }
    if (bVar1 != 0) {
      pbVar12 = param_1 + 0x2200c;
      pbVar4 = param_1 + 0x22000;
      bVar17 = 0;
      while( true ) {
        bVar8 = 0;
        pbVar9 = pbVar4;
        do {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          bVar8 = bVar8 | bVar2;
        } while (pbVar9 != pbVar12);
        if ((bVar8 == 0) || (iVar14 = *(int *)(pbVar4 + 0x18), iVar14 == 0)) break;
        if (bVar17 != 0) {
          iVar11 = *(int *)(pbVar4 + 0x10);
          iVar16 = *(int *)(pbVar4 + 0x14);
          pbVar9 = param_1 + 0x22000;
          do {
            if (((*(int *)(pbVar9 + 0x10) == iVar11) && (*(int *)(pbVar9 + 0x14) == iVar16)) &&
               ((iVar14 == *(int *)(pbVar9 + 0x18) &&
                (iVar6 = FUN_ram_4ff4511a(pbVar9,pbVar4,0xc), iVar6 == 0)))) {
              return 0;
            }
            pbVar9 = pbVar9 + 0x40;
          } while (pbVar9 != pbVar4);
        }
        bVar17 = bVar17 + 1;
        pbVar4 = pbVar4 + 0x40;
        pbVar12 = pbVar12 + 0x40;
        if (bVar1 == bVar17) {
          return 1;
        }
      }
      return 0;
    }
    uVar5 = 1;
  }
  return uVar5;
}


