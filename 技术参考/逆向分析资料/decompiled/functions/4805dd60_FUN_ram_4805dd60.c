/* Firmware entry: 0x4805dd60 */

undefined1 * FUN_ram_4805dd60(undefined1 *param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  undefined1 auStack_21 [9];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0xc) = 0xff00ffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x10] = 0xff;
  puVar8 = param_1;
  do {
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0xff;
    puVar8[0x14] = 0xff;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0xff;
    puVar8[0x17] = 0xff;
    puVar8 = puVar8 + 7;
  } while (puVar8 != param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x44) = 0xff00ffff;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x48] = 0xff;
  puVar8 = param_1;
  do {
    puVar8[0x49] = 0;
    puVar8[0x4a] = 0;
    puVar8[0x4b] = 0xff;
    puVar8[0x4c] = 0xff;
    puVar8[0x4d] = 0;
    puVar8[0x4e] = 0xff;
    puVar8[0x4f] = 0xff;
    puVar8 = puVar8 + 7;
  } while (puVar8 != param_1 + 0x31);
  cVar14 = *(char *)(param_2 + 8);
  *param_1 = 1;
  if (6 < (byte)(cVar14 - 1U)) {
    param_1[8] = 1;
    *param_1 = 0;
    param_1[0xc] = param_3;
    *(undefined2 *)(param_1 + 10) = 2;
  }
  uVar9 = *(uint *)(param_2 + 4);
  cVar14 = *(char *)(param_2 + 0x4c);
  if (uVar9 < 0x800) {
    if ((cVar14 != -1) && (2 < (byte)(cVar14 - 1U))) {
      uVar12 = (uint)(byte)param_1[8];
      if (uVar12 < 8) {
LAB_ram_4805e37e:
        iVar7 = uVar12 * 7;
        param_1[8] = (char)uVar12 + '\x01';
        param_1[iVar7 + 0xb] = 0;
        param_1[iVar7 + 10] = 0x19;
        param_1[iVar7 + 0xc] = param_3;
        param_1[iVar7 + 0xe] = 0;
        param_1[iVar7 + 0xd] = 0xff;
        param_1[iVar7 + 0xf] = 0xff;
        param_1[iVar7 + 0x10] = 0xff;
      }
      *param_1 = 0;
    }
    uVar12 = 7;
    if (uVar9 != 0x3fd) {
LAB_ram_4805de3e:
      if (uVar9 != 0x3c2) goto LAB_ram_4805e23c;
      uVar12 = 3;
    }
  }
  else {
    iVar7 = (uint)(byte)param_1[8] * 7;
    param_1[8] = param_1[8] + 1;
    param_1[iVar7 + 10] = 3;
    param_1[iVar7 + 0xb] = 0;
    param_1[iVar7 + 0xe] = 0;
    param_1[iVar7 + 0xc] = param_3;
    param_1[iVar7 + 0xd] = 0xff;
    param_1[iVar7 + 0xf] = 0xff;
    param_1[iVar7 + 0x10] = 0xff;
    *param_1 = 0;
    if ((cVar14 != -1) && (2 < (byte)(cVar14 - 1U))) {
      uVar12 = (uint)(byte)param_1[8];
      if (uVar12 < 8) goto LAB_ram_4805e37e;
      goto LAB_ram_4805de3e;
    }
LAB_ram_4805e23c:
    uVar12 = 0;
  }
  cVar14 = *(char *)(param_2 + 0x31);
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar6 = (uint)*(byte *)(param_2 + 0x1a);
    if ((((cVar14 != '\0') && (*(char *)(param_2 + 0x32) == '\0')) &&
        (uVar4 = (uint)*(byte *)(param_2 + 0x34), (uVar4 - 1 & 0xff) < 8)) &&
       (*(byte *)(param_2 + 0x33) + uVar4 < 9)) {
      uVar13 = 0xff;
      if (uVar4 != 8) {
        uVar13 = (1 << (uVar4 & 0x1f)) - 1U & 0xffff;
      }
      uVar6 = uVar6 | uVar13 << (*(byte *)(param_2 + 0x33) & 0x1f) & 0xff;
    }
    if ((*(char *)(param_2 + 0x3a) == '\0') || (*(char *)(param_2 + 0x3c) != '\0')) {
      uVar12 = uVar12 & uVar6;
    }
    if (uVar12 != 0) {
      bVar1 = param_1[8];
      if (bVar1 < 8) {
        iVar7 = (uint)bVar1 * 7;
        param_1[8] = bVar1 + 1;
        param_1[iVar7 + 0xb] = 0;
        param_1[iVar7 + 10] = 10;
        param_1[iVar7 + 0xe] = 0;
        param_1[iVar7 + 0xf] = 0;
        param_1[iVar7 + 0xc] = param_3;
        param_1[iVar7 + 0xd] = 0xff;
        param_1[iVar7 + 0x10] = 0xff;
      }
      *param_1 = 0;
    }
  }
  uVar12 = (uint)*(byte *)(param_2 + 9);
  if ((uVar12 - 1 & 0xff) < 8) {
    if (cVar14 == '\0') {
      if (*(char *)(param_2 + 0x3a) == '\0') {
LAB_ram_4805de90:
        uVar6 = 1;
        do {
          iVar7 = param_2 + uVar6;
          uVar4 = uVar6 & 0xff;
          uVar6 = uVar6 + 1;
          if (*(char *)(iVar7 + 0x19) != '\0') goto LAB_ram_4805def0;
        } while ((uVar4 < uVar12) && (uVar6 != 9));
LAB_ram_4805deb0:
        bVar1 = param_1[8];
        if (bVar1 < 8) {
          iVar7 = (uint)bVar1 * 7;
          param_1[8] = bVar1 + 1;
          param_1[iVar7 + 0xb] = 0;
          param_1[iVar7 + 10] = 5;
          param_1[iVar7 + 0xc] = param_3;
          param_1[iVar7 + 0xe] = 0;
          param_1[iVar7 + 0xd] = 0xff;
          param_1[iVar7 + 0xf] = 0xff;
          param_1[iVar7 + 0x10] = 0xff;
        }
        *param_1 = 0;
      }
LAB_ram_4805def0:
      cVar14 = '\0';
    }
  }
  else {
    bVar1 = param_1[8];
    if (bVar1 < 8) {
      iVar7 = (uint)bVar1 * 7;
      param_1[8] = bVar1 + 1;
      param_1[iVar7 + 0xb] = 0;
      param_1[iVar7 + 10] = 4;
      param_1[iVar7 + 0xc] = param_3;
      param_1[iVar7 + 0xe] = 0;
      param_1[iVar7 + 0xd] = 0xff;
      param_1[iVar7 + 0xf] = 0xff;
      param_1[iVar7 + 0x10] = 0xff;
    }
    *param_1 = 0;
    if (cVar14 == '\0') {
      if (*(char *)(param_2 + 0x3a) == '\0') {
        if (uVar12 != 0) goto LAB_ram_4805de90;
        goto LAB_ram_4805deb0;
      }
      goto LAB_ram_4805def0;
    }
  }
  cVar2 = *(char *)(param_2 + 0x2a);
  if ((cVar2 == '\x02') && (*(ushort *)(param_2 + 0x2c) < 5)) {
    bVar1 = param_1[8];
    if (bVar1 < 8) {
      iVar7 = (uint)bVar1 * 7;
      param_1[8] = bVar1 + 1;
      param_1[iVar7 + 0xb] = 0;
      param_1[iVar7 + 10] = 6;
      param_1[iVar7 + 0xe] = 0;
      param_1[iVar7 + 0xc] = param_3;
      param_1[iVar7 + 0xd] = 0xff;
      param_1[iVar7 + 0xf] = 0xff;
      param_1[iVar7 + 0x10] = 0xff;
    }
    *param_1 = 0;
  }
  uVar6 = (uint)*(ushort *)(param_2 + 0x2e);
  if ((uVar6 != 0) && (0x1324 < (uVar6 - 100 & 0xffff))) {
    bVar1 = param_1[8];
    if (bVar1 < 8) {
      iVar7 = (uint)bVar1 * 7;
      param_1[8] = bVar1 + 1;
      param_1[iVar7 + 10] = 7;
      param_1[iVar7 + 0xb] = 0;
      param_1[iVar7 + 0xe] = 0;
      param_1[iVar7 + 0xc] = param_3;
      param_1[iVar7 + 0xd] = 0xff;
      param_1[iVar7 + 0xf] = 0xff;
      param_1[iVar7 + 0x10] = 0xff;
    }
    *param_1 = 0;
  }
  uVar4 = 5000;
  if ((((uVar9 != 0x370) && (uVar4 = 2000, uVar9 != 0x3fd)) && (uVar9 != 0x30a)) &&
     (uVar4 = 5000, uVar9 != 0x3c2)) {
    uVar4 = 0xffffffff;
  }
  uVar9 = *(uint *)(param_2 + 0x48);
  if ((5000000 < uVar9) ||
     ((uVar9 != 0 &&
      (((cVar2 != '\x01' || ((uVar6 != 0 && (uVar6 * 1000 <= uVar9)))) || (uVar4 <= uVar9)))))) {
    bVar1 = param_1[8];
    if (bVar1 < 8) {
      iVar7 = (uint)bVar1 * 7;
      param_1[8] = bVar1 + 1;
      param_1[iVar7 + 0xb] = 0;
      param_1[iVar7 + 10] = 0x18;
      param_1[iVar7 + 0xe] = 0;
      param_1[iVar7 + 0xc] = param_3;
      param_1[iVar7 + 0xd] = 0xff;
      param_1[iVar7 + 0xf] = 0xff;
      param_1[iVar7 + 0x10] = 0xff;
    }
    *param_1 = 0;
  }
  uVar9 = uVar12;
  if (8 < uVar12) {
    uVar9 = 8;
  }
  if (uVar12 < 8) {
    pcVar10 = (char *)((uVar9 + 10 & 0xff) + param_2);
    uVar6 = uVar9;
    do {
      if ((*pcVar10 != '\0') || (pcVar10[0x10] != '\0')) {
        bVar1 = param_1[8];
        iVar7 = (uint)bVar1 * 7;
        if (bVar1 < 8) {
          param_1[8] = bVar1 + 1;
          param_1[iVar7 + 10] = 4;
          (param_1 + iVar7 + 10)[1] = 0;
          param_1[iVar7 + 0xc] = param_3;
          param_1[iVar7 + 0xd] = 0xff;
          param_1[iVar7 + 0xe] = 0;
          param_1[iVar7 + 0xf] = (char)uVar6;
          param_1[iVar7 + 0x10] = 0xff;
        }
        *param_1 = 0;
      }
      uVar6 = uVar6 + 1 & 0xff;
      pcVar10 = pcVar10 + 1;
    } while (uVar6 != 8);
  }
  auStack_21[0] = param_3;
  if (cVar14 == '\0') goto LAB_ram_4805e074;
  uVar4 = (uint)*(byte *)(param_2 + 0x34);
  bVar1 = *(byte *)(param_2 + 0x32);
  uVar6 = (uint)bVar1;
  if (((uVar4 - 1 & 0xff) < 8) && (uVar13 = (uint)*(byte *)(param_2 + 0x33), uVar13 + uVar4 < 9)) {
    if (uVar4 == 8) {
      if (uVar6 < uVar9) {
        uVar4 = (uint)*(byte *)(param_2 + 0x37);
        uVar5 = (uint)*(byte *)(param_2 + 0x38);
        if (uVar4 <= uVar5) {
          uVar13 = 0xff << (uVar13 & 0x1f) & 0xff;
LAB_ram_4805e430:
          if ((uVar4 <= *(byte *)(param_2 + 0x36)) &&
             ((*(byte *)(param_2 + 0x36) <= uVar5 && (*(char *)(param_2 + 0x35) != '\0')))) {
            uVar13 = uVar13 & *(byte *)(param_2 + uVar6 + 0x1a);
            if (uVar13 != 0) {
              uVar4 = 0;
              do {
                if ((uVar13 >> (uVar4 & 0x1f) & 1) != 0) {
                  uVar4 = uVar4 & 0xff;
                  goto LAB_ram_4805e468;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 != 8);
              uVar4 = 0xff;
LAB_ram_4805e468:
              FUN_ram_48030e48(param_1,auStack_21,10,uVar6,uVar4);
            }
            goto LAB_ram_4805e074;
          }
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar11 = (1 << (uVar4 & 0x1f)) - 1U & 0xffff;
      uVar13 = uVar11 << (uVar13 & 0x1f) & 0xff;
      if (uVar13 != 0) {
        uVar4 = (uint)*(byte *)(param_2 + 0x37);
        uVar5 = (uint)*(byte *)(param_2 + 0x38);
        if ((uVar4 <= uVar5) && (uVar5 <= uVar11)) goto LAB_ram_4805e430;
      }
    }
  }
  bVar3 = param_1[8];
  if (bVar3 < 8) {
    iVar7 = (uint)bVar3 * 7;
    param_1[8] = bVar3 + 1;
    param_1[iVar7 + 0xb] = 0;
    param_1[iVar7 + 10] = 8;
    param_1[iVar7 + 0xe] = 0;
    param_1[iVar7 + 0xf] = bVar1;
    param_1[iVar7 + 0xc] = param_3;
    param_1[iVar7 + 0xd] = 0xff;
    param_1[iVar7 + 0x10] = 0xff;
  }
  *param_1 = 0;
LAB_ram_4805e074:
  if (*(char *)(param_2 + 0x3a) == '\0') {
    bVar1 = param_1[9];
    if (bVar1 < 8) {
      iVar7 = (uint)bVar1 * 7;
      param_1[9] = bVar1 + 1;
      param_1[iVar7 + 0x42] = 0;
      param_1[iVar7 + 0x43] = 1;
      param_1[iVar7 + 0x46] = 0;
      param_1[iVar7 + 0x44] = auStack_21[0];
      param_1[iVar7 + 0x45] = 0xff;
      param_1[iVar7 + 0x47] = 0xff;
      param_1[iVar7 + 0x48] = 0xff;
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x3c);
    uVar6 = (uint)bVar1;
    if ((((uVar9 <= uVar6) || (*(byte *)(param_2 + 0x3b) == 0)) ||
        ((uVar12 < 8 && (((uint)*(byte *)(param_2 + 0x3b) & -1 << (uVar9 & 0x1f)) != 0)))) ||
       ((*(char *)(param_2 + 0x3a) == '\x03' && (*(char *)(param_2 + 0x3e) == '\0')))) {
      bVar3 = param_1[8];
      if (bVar3 < 8) {
        iVar7 = (uint)bVar3 * 7;
        param_1[8] = bVar3 + 1;
        param_1[iVar7 + 0xb] = 0;
        param_1[iVar7 + 10] = 9;
        param_1[iVar7 + 0xe] = 0;
        param_1[iVar7 + 0xf] = bVar1;
        param_1[iVar7 + 0xc] = auStack_21[0];
        param_1[iVar7 + 0xd] = 0xff;
        param_1[iVar7 + 0x10] = 0xff;
      }
      *param_1 = 0;
      return param_1;
    }
    bVar1 = *(byte *)(param_2 + uVar6 + 0x1a);
    if (bVar1 != 0) {
      uVar9 = 0;
      do {
        if ((bVar1 >> (uVar9 & 0x1f) & 1) != 0) {
          uVar9 = uVar9 & 0xff;
          goto LAB_ram_4805e15c;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 8);
      uVar9 = 0xff;
LAB_ram_4805e15c:
      FUN_ram_48030e48(param_1,auStack_21,10,uVar6,uVar9);
    }
    if ((cVar14 != '\0') && (*(byte *)(param_2 + 0x32) == uVar6)) {
      FUN_ram_48030e48(param_1,auStack_21,10,uVar6,0xff);
    }
  }
  return param_1;
}


