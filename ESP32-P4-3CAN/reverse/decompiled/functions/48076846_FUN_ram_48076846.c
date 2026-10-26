/* Firmware entry: 0x48076846 */

byte FUN_ram_48076846(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  bool bVar8;
  ushort uVar9;
  short *psVar10;
  short *psVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar18 = (uint)*(byte *)(param_1 + 0xd05);
  if (0x20 < uVar18) {
    return 0;
  }
  iVar19 = param_1[2];
  if (iVar19 == 0) {
    return 0;
  }
  if (param_1[3] == 0) {
    return 0;
  }
  iVar5 = FUN_ram_4807649e(param_1 + 0xd1f);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = FUN_ram_4804e2a8(param_1 + 0xd48);
  if (iVar5 != 0) {
    return 0;
  }
  if (*(byte *)((int)param_1 + 0x3569) != 0xf) {
    uVar14 = *(byte *)((int)param_1 + 0x3569) - 0x1e;
    if (0x1e < (uVar14 & 0xff)) {
      return 0;
    }
    if ((0x40008001U >> (uVar14 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  if (0xaa < (ushort)(*(short *)((int)param_1 + 0x356e) - 0x1eU)) {
    return 0;
  }
  if (400 < (ushort)(*(ushort *)(param_1 + 0xd5c) - 100)) {
    return 0;
  }
  if (*(ushort *)(param_1 + 0xd5c) < (ushort)(*(short *)((int)param_1 + 0x356e) + 0x14U)) {
    return 0;
  }
  uVar14 = (uint)*(byte *)((int)param_1 + 0x3572);
  if (3 < uVar14) {
    return 0;
  }
  uVar4 = (ushort)(byte)*(ushort *)(param_1 + 0xd5e);
  uVar1 = *(ushort *)(param_1 + 0xd5d);
  uVar2 = *(ushort *)((int)param_1 + 0x3576);
  if (uVar14 == 3) {
    uVar9 = uVar1;
    if (0x1ff < uVar1) {
      uVar9 = 0x1ff;
    }
    uVar13 = uVar2;
    if (0x1ff < uVar2) {
      uVar13 = 0x1ff;
    }
    if (6 < uVar4) {
      uVar4 = 6;
    }
    uVar4 = uVar4 | (ushort)*(byte *)((int)param_1 + 0x3579) << 8;
  }
  else {
    iVar5 = uVar14 * 6;
    uVar4 = *(ushort *)(&DAT_ram_48222c74 + iVar5);
    uVar9 = *(ushort *)(&DAT_ram_48222c70 + iVar5);
    uVar13 = *(ushort *)(&DAT_ram_48222c72 + iVar5);
  }
  if (uVar9 != uVar1) {
    return 0;
  }
  if (uVar13 != uVar2) {
    return 0;
  }
  if (uVar4 != *(ushort *)(param_1 + 0xd5e)) {
    return 0;
  }
  iVar5 = FUN_ram_4804162c((int)param_1 + 0x357a);
  if (iVar5 == 0) {
    return 0;
  }
  psVar10 = (short *)((int)param_1 + 0x35b2);
  while (psVar10 != (short *)((int)param_1 + 0x35ee)) {
    sVar3 = *psVar10;
    psVar10 = psVar10 + 1;
    if (0xfe < (ushort)(sVar3 - 1U)) {
      return 0;
    }
  }
  for (psVar10 = (short *)((int)param_1 + 0x3415); psVar10 != (short *)((int)param_1 + 0x3479);
      psVar10 = psVar10 + 5) {
    if ((char)psVar10[4] == 'Z') {
      if (*(char *)((int)psVar10 + 9) != '\x02') {
        return 0;
      }
    }
    else {
      if ((char)psVar10[4] != '\0') {
        return 0;
      }
      if (*psVar10 != 0) {
        return 0;
      }
      if (psVar10[1] != 0) {
        return 0;
      }
      if (psVar10[2] != 0) {
        return 0;
      }
      if (psVar10[3] != 0) {
        return 0;
      }
      if (*(char *)((int)psVar10 + 9) != '\0') {
        return 0;
      }
    }
  }
  if (0x11d < (ushort)((short)param_1[0xd7c] - 0xfU)) {
    return 0;
  }
  iVar5 = *param_1;
  iVar21 = param_1[1];
  bVar8 = iVar5 == 0;
  bVar12 = iVar21 == 0;
  if (uVar18 != 0) {
    psVar10 = (short *)((int)param_1 + 0x1b2);
    uVar14 = 0;
    piVar22 = param_1 + 5;
    do {
      iVar20 = *piVar22;
      if (iVar20 == 0) {
        return 0;
      }
      if (iVar19 == iVar20) {
        return 0;
      }
      psVar11 = psVar10 + -0xcd;
      pvVar6 = memchr(psVar11,0,0x19);
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
      if (0x17 < (uint)((int)pvVar6 + (-1 - (int)psVar11))) {
        return 0;
      }
      iVar7 = FUN_ram_480763ea(psVar11);
      if (iVar7 == 0) {
        return 0;
      }
      iVar7 = FUN_ram_4807649e(psVar10 + -0xb5);
      if (iVar7 == 0) {
        return 0;
      }
      iVar7 = FUN_ram_4804e2a8(psVar10 + -99);
      if (iVar7 != 0) {
        return 0;
      }
      if (*(byte *)((int)piVar22 + 0x121) != 0xf) {
        uVar15 = *(byte *)((int)piVar22 + 0x121) - 0x1e;
        if (0x1e < (uVar15 & 0xff)) {
          return 0;
        }
        if ((0x40008001U >> (uVar15 & 0x1f) & 1) == 0) {
          return 0;
        }
      }
      if (0xaa < (ushort)(*(short *)((int)piVar22 + 0x126) - 0x1eU)) {
        return 0;
      }
      if (400 < (ushort)(*(ushort *)(piVar22 + 0x4a) - 100)) {
        return 0;
      }
      if (*(ushort *)(piVar22 + 0x4a) < (ushort)(*(short *)((int)piVar22 + 0x126) + 0x14U)) {
        return 0;
      }
      iVar7 = FUN_ram_4804162c(psVar10 + -0x3a);
      if (iVar7 == 0) {
        return 0;
      }
      psVar11 = psVar10 + -0x1e;
      do {
        sVar3 = *psVar11;
        psVar11 = psVar11 + 1;
        if (0xfe < (ushort)(sVar3 - 1U)) {
          return 0;
        }
      } while (psVar11 != psVar10);
      piVar16 = param_1 + 5;
      if (uVar14 != 0) {
        do {
          piVar17 = piVar16 + 0x68;
          if (iVar20 == *piVar16) {
            return 0;
          }
          piVar16 = piVar17;
        } while (piVar17 != piVar22);
      }
      bVar8 = (bool)(iVar5 == iVar20 | bVar8);
      bVar12 = (bool)(iVar21 == iVar20 | bVar12);
      uVar14 = uVar14 + 1;
      piVar22 = piVar22 + 0x68;
      psVar10 = psVar10 + 0xd0;
    } while (uVar14 != uVar18);
  }
  return bVar8 & bVar12;
}


