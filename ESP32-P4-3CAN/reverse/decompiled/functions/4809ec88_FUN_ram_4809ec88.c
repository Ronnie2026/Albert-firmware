/* Firmware entry: 0x4809ec88 */

void FUN_ram_4809ec88(int *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  char cStack_74;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  byte bStack_63;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48025ba6();
  if (param_2[10] == 0) {
    bVar18 = 0;
    if (param_2[0x8a] == 0) {
      iVar17 = param_1[0xb3];
      *(undefined1 *)(param_1 + 0xb2) = 0;
      *(undefined1 *)(param_1 + 0xb1) = 0;
      *(undefined1 *)((int)param_1 + 0x2c6) = 0;
    }
    else {
      iVar17 = param_1[0xb3];
      *(undefined1 *)(param_1 + 0xb2) = 0;
      *(undefined1 *)((int)param_1 + 0x2c6) = 0;
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
LAB_ram_4809ecce:
    bVar19 = bVar18;
    if (param_2[1] == 0xc) {
      cVar1 = '\f';
      if (param_1[0xa6] == 0) {
        uVar13 = 0;
        uVar4 = 0;
        uVar16 = 0;
        uVar8 = 0;
        uVar15 = 0;
        uVar25 = 0x4000;
        uVar21 = 0;
      }
      else {
        if ((uint)(iVar5 - param_1[0xa6]) < 0x1f5) {
          uVar8 = 0;
          uVar15 = 0;
          uVar4 = 0;
          uVar25 = 0x4000;
          uVar13 = 0;
          uVar21 = 0;
          goto LAB_ram_4809ee8e;
        }
        uVar16 = 0;
        uVar8 = 0;
        uVar13 = 0;
        uVar25 = 0x4000;
        uVar4 = 0;
        uVar15 = 0;
        uVar21 = 0;
      }
    }
    else {
      if (param_2[1] == 0xe) {
        uVar8 = 0;
        uVar15 = 0;
        uVar4 = 0;
LAB_ram_4809f254:
        uVar21 = 0;
        if ((char)param_1[0xab] != '\0') {
          uVar21 = (uint)((uint)(iVar5 - param_1[0xac]) < 0x3e9 & *(byte *)((int)param_1 + 0x2ad))
                   << 5;
        }
        iVar24 = param_1[0xa6];
        uVar13 = 4;
        cVar1 = '\x0e';
        if (iVar24 != 0) goto LAB_ram_4809ee80;
LAB_ram_4809f1ec:
        uVar25 = 0;
        uVar16 = 0;
        if (bVar18 == 0) {
          bVar19 = 0;
          goto LAB_ram_4809ecf4;
        }
      }
      else {
        iVar24 = param_1[0xa6];
        if (iVar24 == 0) {
          uVar13 = 0;
          uVar4 = 0;
          uVar16 = 0;
          uVar8 = 0;
          uVar15 = 0;
          uVar21 = 0;
          cVar1 = '\r';
          uVar25 = 0;
          goto LAB_ram_4809ecf4;
        }
        uVar8 = 0;
        uVar21 = 0;
        uVar13 = 0;
        uVar4 = 0;
        cVar1 = '\r';
        uVar15 = 0;
LAB_ram_4809ee80:
        if (500 < (uint)(iVar5 - iVar24)) goto LAB_ram_4809f1ec;
        uVar25 = 0;
LAB_ram_4809ee8e:
        uVar16 = (uint)(*(byte *)(param_1 + 0xa3) - 3 < 4);
        uVar21 = uVar21 | uVar16 << 4;
        bVar19 = 0;
        if (bVar18 == 0) goto LAB_ram_4809ecf4;
      }
      bVar19 = param_2[0xc];
      if (bVar19 != 0) goto LAB_ram_4809ee26;
LAB_ram_4809eeac:
      bVar19 = 1;
    }
  }
  else {
    if (param_2[0x8a] == 0) {
      iVar17 = param_1[0xb3];
      *(undefined1 *)(param_1 + 0xb2) = 0;
      *(undefined1 *)(param_1 + 0xb1) = 0;
      *(undefined1 *)((int)param_1 + 0x2c6) = 0;
    }
    else if ((*param_2 == 0) || (param_2[0xb] == 0)) {
      iVar17 = param_1[0xb3];
      *(undefined1 *)(param_1 + 0xb2) = 0;
      *(undefined1 *)((int)param_1 + 0x2c6) = 0;
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
    else if ((char)param_1[0xb2] == '\0') {
      if (*(char *)((int)param_1 + 0x2c7) == '\0') {
        iVar17 = param_1[0xb3];
        *(undefined1 *)((int)param_1 + 0x2c6) = 0;
        *(undefined1 *)(param_1 + 0xb2) = 1;
        *(undefined1 *)(param_1 + 0xb1) = 1;
      }
      else {
        cVar1 = *(char *)((int)param_1 + 0x2c5);
        *(undefined1 *)(param_1 + 0xb2) = 1;
        *(char *)((int)param_1 + 0x2c6) = cVar1;
        iVar17 = param_1[0xb3];
joined_r0x4809edc2:
        uVar11 = 1;
        if ((cVar1 == '\x01') && (uVar11 = 4, 1000 < (uint)(iVar5 - iVar17))) goto LAB_ram_4809edd4;
        *(undefined1 *)(param_1 + 0xb1) = uVar11;
      }
    }
    else {
      iVar17 = param_1[0xb3];
      if (*(char *)((int)param_1 + 0x2c7) != '\0') {
        cVar1 = *(char *)((int)param_1 + 0x2c5);
        goto joined_r0x4809edc2;
      }
LAB_ram_4809edd4:
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
    bVar18 = param_2[0xb];
    if (bVar18 == 0) goto LAB_ram_4809ecce;
    uVar8 = (uint)*param_2;
    uVar4 = uVar8 << 1;
    if (param_2[1] != 0xc) {
      if (param_2[1] != 0xe) {
        iVar24 = param_1[0xa6];
        if (iVar24 == 0) {
          cVar1 = '\r';
          uVar25 = 0;
          goto LAB_ram_4809ee1e;
        }
        uVar21 = 0;
        uVar13 = 0;
        cVar1 = '\r';
        uVar15 = 1;
        goto LAB_ram_4809ee80;
      }
      uVar15 = 1;
      goto LAB_ram_4809f254;
    }
    cVar1 = '\f';
    if (param_1[0xa6] != 0) {
      if (500 < (uint)(iVar5 - param_1[0xa6])) {
        uVar25 = 0x4000;
        goto LAB_ram_4809ee1e;
      }
      uVar15 = 1;
      uVar25 = 0x4000;
      uVar13 = 0;
      uVar21 = 0;
      cVar1 = '\f';
      goto LAB_ram_4809ee8e;
    }
    uVar25 = 0x4000;
LAB_ram_4809ee1e:
    uVar21 = 0;
    uVar16 = 0;
    uVar15 = 1;
    uVar13 = 0;
    bVar19 = param_2[0xc];
    if (bVar19 == 0) goto LAB_ram_4809eeac;
LAB_ram_4809ee26:
    if ((((param_2[0xa0] != 0) && (bVar19 = param_2[0xa0], param_2[0xe] != 0)) &&
        (bVar18 = *(byte *)(param_1 + 0x1d), bVar19 = param_2[0xe], bVar18 != 0)) &&
       (bVar19 = bVar18, (uint)(iVar5 - param_1[0x1c]) < 0x1f5)) {
      uVar21 = uVar21 | (uint)((*(byte *)((int)param_1 + 0x51) & 0xf) == 6) << 7;
    }
  }
LAB_ram_4809ecf4:
  if ((param_1[0x24] == 0) || (500 < (uint)(iVar5 - param_1[0x24]))) {
    if (param_2[0x96] == 0) goto LAB_ram_4809f13e;
    if (bVar19 != 0) goto LAB_ram_4809f114;
LAB_ram_4809eecc:
    if (uVar16 == 0) {
      uVar2 = 0;
      uVar20 = 0;
      uVar10 = 0;
      uVar22 = 0;
      goto LAB_ram_4809eed8;
    }
LAB_ram_4809f17e:
    uVar22 = 0;
LAB_ram_4809f180:
    if ((param_2[0x27] == 0) || (param_2[0x2c] == 0)) {
LAB_ram_4809f1c2:
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar9 = 2;
      uVar10 = 1;
      if (cVar1 == '\x0e') {
        if ((((char)param_1[0xab] == '\0') || (1000 < (uint)(iVar5 - param_1[0xac]))) ||
           (*(char *)((int)param_1 + 0x2ad) == '\0')) goto LAB_ram_4809f1c2;
        uVar2 = (uint)param_2[0x2d];
        if (10 < uVar2) {
          uVar2 = 10;
        }
        if (uVar2 < 3) {
          uVar2 = 3;
        }
        uVar10 = (uint)(uVar2 * 1000 <= (uint)(iVar5 - param_1[0xad]));
        uVar9 = uVar10 << 1;
      }
    }
    uVar2 = (uint)param_2[0xe];
    uVar20 = (uint)param_2[0x2b];
    uVar21 = uVar2 << 3 | uVar20 << 2 | uVar21 | uVar22 | uVar9;
joined_r0x4809f14a:
    if (bVar19 == 0) {
      uVar20 = 0;
      uVar10 = 0;
      uVar22 = 0;
    }
    else {
      uVar10 = uVar10 << 3;
      uVar20 = uVar20 << 4;
      uVar22 = uVar2 << 5;
    }
  }
  else {
    if (param_2[0x96] == 0) {
LAB_ram_4809f13e:
      if (uVar16 != 0) goto LAB_ram_4809f17e;
      uVar2 = 0;
      uVar20 = 0;
      uVar10 = 0;
      goto joined_r0x4809f14a;
    }
    if (bVar19 == 0) goto LAB_ram_4809eecc;
    bStack_63 = (byte)((uint)param_1[0x21] >> 8);
    if (bStack_63 < 3) {
      if (param_1[0xa4] == 0) {
        uVar22 = 0;
        if (uVar16 == 0) {
          uVar22 = 0;
          uVar20 = 0;
          uVar2 = 0;
          uVar10 = 0;
          goto LAB_ram_4809eed8;
        }
        goto LAB_ram_4809f180;
      }
      if ((300 < (uint)(iVar5 - param_1[0xa4])) || (*(char *)((int)param_1 + 0x28d) != '\x04'))
      goto LAB_ram_4809f114;
      if (uVar16 != 0) {
        uVar22 = 0x40;
        goto LAB_ram_4809f180;
      }
      uVar21 = uVar21 | 0x40;
    }
    else {
LAB_ram_4809f114:
      if (uVar16 != 0) goto LAB_ram_4809f17e;
    }
    uVar2 = 0;
    uVar22 = 0;
    uVar20 = 0;
    uVar10 = 0;
  }
LAB_ram_4809eed8:
  uVar9 = 0;
  if (((uVar8 != 0) && ((char)param_1[0xb2] != '\0')) &&
     ((*(char *)((int)param_1 + 0x2c7) != '\0' && (*(char *)((int)param_1 + 0x2c5) == '\x01')))) {
    uVar9 = (uint)((uint)(iVar5 - iVar17) < 0x3e9) << 7;
  }
  if (param_2[0x12] == 0) {
    bVar18 = *(byte *)((int)param_1 + 0x17d);
    if (bVar18 == 3) goto LAB_ram_4809f208;
    uVar8 = 0x100;
    if (2 < bVar18) goto LAB_ram_4809ef26;
LAB_ram_4809ef16:
    if (bVar18 != 1) {
      uVar8 = (uint)(bVar18 == 2) << 9;
      goto LAB_ram_4809ef26;
    }
  }
  else {
    bVar18 = param_2[0x13];
    if (bVar18 == 3) {
LAB_ram_4809f208:
      uVar8 = 0x200;
      goto LAB_ram_4809ef26;
    }
    if (bVar18 < 3) goto LAB_ram_4809ef16;
  }
  uVar8 = 0x100;
LAB_ram_4809ef26:
  if (param_2[0x25] == 0) {
    uVar12 = (*(byte *)((int)param_1 + 0x296) & 7) << 0xb;
  }
  else {
    uVar12 = 0x1000;
    if (param_2[0x26] < 5) {
      uVar12 = (uint)param_2[0x26] << 0xb;
    }
  }
  FUN_ram_4ff3ec14(param_1 + 4,0xffffffff);
  iVar26 = param_1[6];
  iVar24 = param_1[7];
  iVar5 = param_1[8];
  uVar6 = param_1[9];
  FUN_ram_4ff3ee10(param_1 + 4);
  if (((bVar19 == 0) || (uVar2 == 0)) ||
     ((param_2[0xa0] != 0 || (cStack_74 = (char)iVar26, cStack_74 == '\0')))) {
    *(undefined1 *)(param_1 + 0x59) = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    uVar2 = 0;
    iVar5 = 0;
    iVar23 = 0;
  }
  else {
    iVar23 = param_1[0x5d];
    uStack_68 = (undefined1)uVar6;
    if ((((iVar23 == 0) || ((char)param_1[0x59] == '\0')) || (param_1[0x5a] != iVar24)) ||
       ((param_1[0x5b] != iVar5 || (param_1[0x5c] != uVar6)))) {
      iVar23 = param_1[0x58] + 1;
      if (iVar23 == 0) {
        iVar23 = 1;
      }
      uVar2 = (uint)*(byte *)(param_1 + 0x5f);
      param_1[0x58] = iVar23;
      iVar7 = uVar2 * 0x14;
      param_1[uVar2 * 5 + 0x30] = iVar23;
      *(char *)(param_1 + uVar2 * 5 + 0x31) = cStack_74;
      uStack_67 = (undefined1)(uVar6 >> 8);
      uStack_66 = (undefined1)(uVar6 >> 0x10);
      uStack_65 = (undefined1)(uVar6 >> 0x18);
      param_1[uVar2 * 5 + 0x32] = iVar24;
      param_1[uVar2 * 5 + 0x33] = iVar5;
      *(undefined1 *)(param_1 + uVar2 * 5 + 0x34) = uStack_68;
      *(undefined1 *)((int)param_1 + iVar7 + 0xd1) = uStack_67;
      *(undefined1 *)((int)param_1 + iVar7 + 0xd2) = uStack_66;
      *(undefined1 *)((int)param_1 + iVar7 + 0xd3) = uStack_65;
      iVar23 = param_1[0x58];
      param_1[0x5c] = uVar6;
      *(byte *)(param_1 + 0x5f) = (char)param_1[0x5f] + 1U & 7;
      param_1[0x5d] = iVar23;
      param_1[0x59] = iVar26;
      param_1[0x5a] = iVar24;
      param_1[0x5b] = iVar5;
    }
    iVar5 = param_1[0xa8];
    uVar15 = uVar15 | (uVar6 & 0xff) << 0x10;
    uVar2 = 0x40;
  }
  uVar8 = uVar4 | uVar15 | uVar25 | uVar13 | uVar22 | uVar10 | uVar20 | uVar9 | uVar8 | uVar12 |
          uVar2 | 0x5000000;
  FUN_ram_4ff3ec14(param_1 + 10,0xffffffff);
  iVar24 = param_1[0x11];
  if (((param_1[0xc] != uVar8) || (param_1[0xd] != uVar21)) ||
     ((param_1[0xe] != iVar23 || ((param_1[0xf] != iVar5 || (iVar17 != param_1[0x10])))))) {
    iVar24 = iVar24 + 1;
    if (iVar24 == 0) {
      iVar24 = 1;
    }
    param_1[0x11] = iVar24;
  }
  iVar7 = *param_1;
  iVar26 = iVar7 + 0x2864;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar21;
  param_1[0xe] = iVar23;
  param_1[0xf] = iVar5;
  param_1[0x10] = iVar17;
  FUN_ram_4ff3ec14(iVar26,0xffffffff);
  piVar3 = *(int **)(iVar7 + 0x1e08);
  FUN_ram_4ff3ee10(iVar26);
  if (piVar3 != (int *)0x0) {
    pcVar14 = *(code **)(*piVar3 + 0x9c);
    if (pcVar14 == (code *)&LAB_ram_4802c216) {
      pcVar14 = *(code **)(*piVar3 + 0x98);
      (*pcVar14)(piVar3,1,iVar24,bVar19,uVar16,pcVar14);
    }
    else {
      (*pcVar14)(piVar3,iVar24,bVar19,uVar16);
    }
  }
  FUN_ram_4ff3ee10(param_1 + 10);
  return;
}


