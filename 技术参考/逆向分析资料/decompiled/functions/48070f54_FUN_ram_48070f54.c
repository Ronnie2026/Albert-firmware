/* Firmware entry: 0x48070f54 */

byte FUN_ram_48070f54(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar21 = *(int *)(param_1 + 4);
  if (iVar21 == 0) {
    return 0;
  }
  bVar15 = *(byte *)(param_1 + 0x88);
  if (0x14 < bVar15) {
    return 0;
  }
  uVar22 = *(uint *)(param_1 + 0x1c);
  uVar23 = *(uint *)(param_1 + 0x14);
  uVar25 = *(uint *)(param_1 + 0x18);
  uVar26 = *(uint *)(param_1 + 0x10);
  if ((uVar23 < uVar22) || ((uVar22 == uVar23 && (uVar26 < uVar25)))) {
    return 0;
  }
  uVar24 = *(uint *)(param_1 + 0x24);
  uVar28 = *(uint *)(param_1 + 0x20);
  if ((uVar22 < uVar24) ||
     ((((uVar24 == uVar22 && (uVar25 < uVar28)) || (uVar24 < *(uint *)(param_1 + 0x4f4))) ||
      ((*(uint *)(param_1 + 0x4f4) == uVar24 && (uVar28 < *(uint *)(param_1 + 0x4f0))))))) {
    return 0;
  }
  uVar16 = *(uint *)(param_1 + 0x34);
  uVar9 = *(uint *)(param_1 + 0x30);
  if (uVar23 < uVar16) {
    return 0;
  }
  if ((uVar16 == uVar23) && (uVar26 < uVar9)) {
    return 0;
  }
  uVar13 = *(uint *)(param_1 + 0x3c);
  uVar7 = *(uint *)(param_1 + 0x38);
  if (uVar22 < uVar13) {
    return 0;
  }
  if ((uVar13 == uVar22) && (uVar25 < uVar7)) {
    return 0;
  }
  uVar10 = *(uint *)(param_1 + 0x44);
  uVar4 = *(uint *)(param_1 + 0x40);
  if (uVar24 < uVar10) {
    return 0;
  }
  if ((uVar10 == uVar24) && (uVar28 < uVar4)) {
    return 0;
  }
  if (uVar16 < uVar13) {
    return 0;
  }
  if ((uVar13 == uVar16) && (uVar9 < uVar7)) {
    return 0;
  }
  if (uVar13 < uVar10) {
    return 0;
  }
  if ((uVar10 == uVar13) && (uVar7 < uVar4)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x50d) == '\0') {
    if (*(int *)(param_1 + 0x510) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x514) != 0) {
      return 0;
    }
  }
  uVar7 = uVar25 - uVar7;
  uVar13 = (uVar22 - uVar13) - (uint)(uVar25 < uVar7);
  uVar16 = (uVar23 - uVar16) - (uint)(uVar26 < uVar26 - uVar9);
  if (uVar16 < uVar13) {
    return 0;
  }
  if ((uVar13 == uVar16) && (uVar26 - uVar9 < uVar7)) {
    return 0;
  }
  uVar4 = uVar28 - uVar4;
  uVar9 = (uVar24 - uVar10) - (uint)(uVar28 < uVar4);
  if (uVar13 < uVar9) {
    return 0;
  }
  if ((uVar9 == uVar13) && (uVar7 < uVar4)) {
    return 0;
  }
  if (uVar9 < *(uint *)(param_1 + 0x4fc)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x4fc) == uVar9) && (uVar4 < *(uint *)(param_1 + 0x4f8))) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 == '\0') {
    iVar5 = FUN_ram_48070f04(param_1 + 0x50);
    if (iVar5 == 0) {
      return 0;
    }
    uVar4 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar13 = 0;
    uVar16 = 0;
    uVar7 = 0;
  }
  else {
    if (3 < *(byte *)(param_1 + 0x79)) {
      return 0;
    }
    if (3 < *(byte *)(param_1 + 0x7a)) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 100);
    uVar13 = *(uint *)(param_1 + 0x6c);
    uVar16 = *(uint *)(param_1 + 0x60);
    uVar9 = *(uint *)(param_1 + 0x68);
    if (uVar7 < uVar13) {
      return 0;
    }
    if ((uVar13 == uVar7) && (uVar16 < uVar9)) {
      return 0;
    }
    uVar10 = *(uint *)(param_1 + 0x74);
    uVar4 = *(uint *)(param_1 + 0x70);
    if (uVar13 < uVar10) {
      return 0;
    }
    if ((uVar10 == uVar13) && (uVar9 < uVar4)) {
      return 0;
    }
    if (uVar10 < *(uint *)(param_1 + 0x84)) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x84) == uVar10) && (uVar4 < *(uint *)(param_1 + 0x80))) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x50);
    if (iVar5 == 0) {
      return 0;
    }
    if (1 < *(byte *)(param_1 + 0x79)) {
      return 0;
    }
    if (*(byte *)(param_1 + 0x7a) != 0) {
      return 0;
    }
    if (iVar21 == iVar5) {
      return 0;
    }
    if (iVar21 - iVar5 < 0) {
      return 0;
    }
  }
  bVar12 = 0;
  piVar27 = (int *)(param_1 + 0x90);
  do {
    if (bVar12 < bVar15) {
      bVar2 = *(byte *)((int)piVar27 + 0x29);
      if (3 < bVar2) {
        return 0;
      }
      bVar3 = *(byte *)((int)piVar27 + 0x2a);
      if (3 < bVar3) {
        return 0;
      }
      uVar11 = piVar27[5];
      uVar17 = piVar27[7];
      uVar29 = piVar27[4];
      uVar8 = piVar27[6];
      if (uVar11 < uVar17) {
        return 0;
      }
      if ((uVar17 == uVar11) && (uVar29 < uVar8)) {
        return 0;
      }
      uVar14 = piVar27[9];
      uVar6 = piVar27[8];
      if (uVar17 < uVar14) {
        return 0;
      }
      if ((uVar14 == uVar17) && (uVar8 < uVar6)) {
        return 0;
      }
      if (uVar14 < (uint)piVar27[0xd]) {
        return 0;
      }
      if ((piVar27[0xd] == uVar14) && (uVar6 < (uint)piVar27[0xc])) {
        return 0;
      }
      iVar5 = *piVar27;
      if (iVar5 == 0) {
        return 0;
      }
      if (1 < (byte)(bVar2 - 2)) {
        return 0;
      }
      if (bVar2 == 2) {
        if (bVar3 != 1) {
          return 0;
        }
      }
      else {
        if (1 < (byte)(bVar3 - 2)) {
          return 0;
        }
        if ((char)piVar27[10] == '\0') {
          return 0;
        }
      }
      if (cVar1 == '\0') {
        if (bVar12 != 0) goto LAB_ram_480712b0;
        if (iVar21 == *(int *)(param_1 + 0x90)) {
          return 0;
        }
        if (iVar21 - *(int *)(param_1 + 0x90) < 0) {
          return 0;
        }
      }
      else {
        iVar18 = *(int *)(param_1 + 0x50);
        if (iVar18 == iVar5) {
          return 0;
        }
        if (bVar12 == 0) {
          if (iVar18 == *(int *)(param_1 + 0x90)) {
            return 0;
          }
          if (iVar18 - *(int *)(param_1 + 0x90) < 0) {
            return 0;
          }
        }
        else {
LAB_ram_480712b0:
          if (piVar27[-0xe] == iVar5) {
            return 0;
          }
          piVar19 = (int *)(param_1 + 0x90);
          if (piVar27[-0xe] - iVar5 < 0) {
            return 0;
          }
          do {
            piVar20 = piVar19 + 0xe;
            if (*piVar19 == iVar5) {
              return 0;
            }
            piVar19 = piVar20;
          } while (piVar20 != piVar27);
        }
      }
      if (~uVar7 < uVar11) {
        return 0;
      }
      if ((uVar11 == ~uVar7) && (~uVar16 < uVar29)) {
        return 0;
      }
      if (~uVar13 < uVar17) {
        return 0;
      }
      if ((uVar17 == ~uVar13) && (~uVar9 < uVar8)) {
        return 0;
      }
      if (~uVar10 < uVar14) {
        return 0;
      }
      if ((uVar14 == ~uVar10) && (~uVar4 < uVar6)) {
        return 0;
      }
      uVar29 = uVar29 + uVar16;
      uVar8 = uVar8 + uVar9;
      uVar6 = uVar6 + uVar4;
      uVar7 = (uint)(uVar29 < uVar16) + uVar11 + uVar7;
      uVar13 = (uint)(uVar8 < uVar9) + uVar17 + uVar13;
      uVar10 = (uint)(uVar6 < uVar4) + uVar14 + uVar10;
    }
    else {
      iVar5 = FUN_ram_48070f04(piVar27);
      uVar6 = uVar4;
      uVar8 = uVar9;
      uVar29 = uVar16;
      if (iVar5 == 0) {
        return 0;
      }
    }
    bVar12 = bVar12 + 1;
    piVar27 = piVar27 + 0xe;
    uVar4 = uVar6;
    uVar9 = uVar8;
    uVar16 = uVar29;
    if (bVar12 == 0x14) {
      if ((uVar7 <= uVar23) && ((uVar7 != uVar23 || (uVar29 <= uVar26)))) {
        bVar15 = 1;
        if ((uVar22 < uVar13) || ((uVar13 == uVar22 && (uVar25 < uVar8)))) {
          bVar15 = 0;
        }
        bVar12 = 1;
        if ((uVar24 < uVar10) || ((uVar10 == uVar24 && (uVar28 < uVar6)))) {
          bVar12 = 0;
        }
        return bVar15 & bVar12;
      }
      return 0;
    }
  } while( true );
}


