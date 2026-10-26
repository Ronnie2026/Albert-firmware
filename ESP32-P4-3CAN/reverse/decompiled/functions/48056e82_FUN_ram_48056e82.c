/* Firmware entry: 0x48056e82 */

void FUN_ram_48056e82(char *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1[0x6a] != '\0') && (param_5 - *(int *)(param_1 + 0x44) < 0)) {
    return;
  }
  if (param_1[0x6d] == '\0') {
    if ((param_4 == 0) || (0x1ff < param_2)) {
      cVar6 = param_1[0x74];
      goto LAB_ram_4805700e;
    }
    if ((param_1[0x6e] != '\0') && ((byte)param_1[0x6f] != param_3)) goto LAB_ram_4805702c;
    cVar10 = param_1[0x74];
    uVar5 = (uint)*(ushort *)(param_1 + 0x48);
    cVar6 = param_1[0x71];
    if (param_1[0x72] == '\0') goto joined_r0x48057450;
    cVar2 = '\0';
    if (cVar6 != '\0') {
      cVar2 = '\0';
      cVar11 = cVar10;
      if (cVar10 != '\0') {
        uVar8 = (uint)(byte)param_1[1];
        iVar13 = *(int *)(param_1 + 8);
        cVar14 = param_1[0x6f];
        cVar4 = cVar10;
        goto LAB_ram_48056efe;
      }
      goto LAB_ram_48056f40;
    }
LAB_ram_48057134:
    cVar14 = param_1[0x6f];
    uVar8 = (uint)(byte)param_1[1];
    iVar13 = *(int *)(param_1 + 8);
    if (cVar14 == '\0') {
      iVar12 = 50000;
      uVar9 = 100000;
    }
    else {
      iVar12 = 0x13a53;
      uVar9 = 0x274a6;
    }
    if (iVar13 == 0) {
      iVar3 = (uVar8 * 1000 + 100000) * uVar5;
    }
    else {
      iVar3 = iVar13 * 1000;
    }
    uVar9 = (uint)(iVar12 + iVar3) / uVar9;
    if (0xff < uVar9) {
      uVar9 = 0xff;
    }
    if ((uVar9 * 2 + 1 & 0xffff) < param_2) {
      param_1[0x66] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
    }
    cVar6 = '\0';
    cVar4 = '\0';
    cVar11 = cVar10;
    if (cVar10 != '\0') goto LAB_ram_48056efe;
LAB_ram_48056f36:
    bVar1 = cVar2 != '\0';
    cVar2 = '\0';
    if (bVar1) {
LAB_ram_48056f3a:
      param_1[0x7a] = '\0';
      cVar2 = '\x01';
    }
  }
  else {
    if (param_5 - *(int *)(param_1 + 0x30) < 0) {
      return;
    }
    if ((param_4 == 0) || (0x1ff < param_2)) {
      cVar6 = param_1[0x74];
      iVar13 = *(int *)(param_1 + 0x24) + 1;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      *(int *)(param_1 + 0x24) = iVar13;
      param_1[0x74] = '\0';
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      if (param_1[0x75] == '\0') {
        param_1[0x10] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
      }
LAB_ram_4805700e:
      param_1[0x74] = cVar6;
      param_1[0x6d] = '\0';
      return;
    }
    if ((param_1[0x6e] != '\0') && ((byte)param_1[0x6f] != param_3)) {
LAB_ram_4805702c:
      iVar13 = *(int *)(param_1 + 0x24) + 1;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      *(int *)(param_1 + 0x24) = iVar13;
      param_1[0x74] = '\0';
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      if (param_1[0x75] == '\0') {
        param_1[0x10] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
      }
      param_1[0x7a] = '\0';
      param_1[0x79] = '\0';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x71] = '\0';
      param_1[0x6d] = '\0';
      param_1[0x6f] = (char)param_3;
      param_1[0x66] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      *(int *)(param_1 + 0x44) = param_5;
      param_1[0x72] = '\0';
      param_1[0x73] = '\x01';
      param_1[0x6a] = '\x01';
      return;
    }
    cVar10 = param_1[0x74];
    uVar5 = (uint)*(ushort *)(param_1 + 0x48);
    cVar6 = param_1[0x71];
    if (*(ushort *)(param_1 + 0x4a) != param_2) {
      cVar2 = param_1[0x72];
      cVar11 = cVar10;
      if (cVar2 == '\0') {
        if (cVar10 != '\0') {
          uVar8 = (uint)(byte)param_1[1];
          iVar13 = *(int *)(param_1 + 8);
          cVar14 = param_1[0x6f];
          cVar2 = cVar10;
          cVar4 = cVar6;
          goto LAB_ram_48056efe;
        }
      }
      else {
        if (cVar6 == '\0') goto LAB_ram_48057134;
        if (cVar10 != '\0') {
          uVar8 = (uint)(byte)param_1[1];
          iVar13 = *(int *)(param_1 + 8);
          cVar14 = param_1[0x6f];
          cVar2 = cVar10;
          cVar4 = cVar10;
          goto LAB_ram_48056efe;
        }
      }
      goto LAB_ram_48056f3a;
    }
joined_r0x48057450:
    cVar2 = '\0';
    cVar11 = cVar10;
    if (cVar10 != '\0') {
      cVar2 = '\0';
      uVar8 = (uint)(byte)param_1[1];
      iVar13 = *(int *)(param_1 + 8);
      cVar14 = param_1[0x6f];
      cVar4 = cVar6;
LAB_ram_48056efe:
      if (cVar14 == '\0') {
        iVar12 = 50000;
        uVar9 = 100000;
      }
      else {
        iVar12 = 0x13a53;
        uVar9 = 0x274a6;
      }
      if (iVar13 == 0) {
        iVar13 = (uVar8 * 1000 + 100000) * uVar5;
      }
      else {
        iVar13 = iVar13 * 1000;
      }
      uVar9 = (uint)(iVar13 + iVar12) / uVar9;
      if (0xff < uVar9) {
        uVar9 = 0xff;
      }
      cVar11 = (uVar9 & 0x7fff) << 1 < param_2;
      cVar6 = cVar4;
      goto LAB_ram_48056f36;
    }
  }
LAB_ram_48056f40:
  param_1[0x6f] = (char)param_3;
  *(short *)(param_1 + 0x4a) = (short)param_2;
  *(int *)(param_1 + 0x30) = param_5;
  param_1[0x6a] = '\0';
  param_1[0x6e] = '\x01';
  param_1[0x6d] = '\x01';
  if (param_3 == 0) {
    uVar8 = (uVar5 & 0x7fff) << 1;
  }
  else {
    uVar8 = (uVar5 * 200000 + 0x13a53) / 0x274a6;
  }
  uVar9 = param_2 + 1;
  if ((uVar8 <= uVar9) && (param_2 <= uVar8 + 1)) {
    param_1[0x69] = '\0';
  }
  cVar14 = param_1[0x10];
  if ((cVar14 == '\0') || (*(int *)(param_1 + 0x18) == 0)) {
LAB_ram_480571ac:
    if (cVar2 != '\0') {
LAB_ram_480571b2:
      param_1[0x79] = '\0';
      if (cVar10 != '\0') {
        if (param_3 == 0) {
          iVar13 = 50000;
          uVar8 = 100000;
        }
        else {
          iVar13 = 0x13a53;
          uVar8 = 0x274a6;
        }
        if (*(int *)(param_1 + 8) == 0) {
          iVar12 = ((uint)(byte)param_1[1] * 1000 + 100000) * uVar5;
        }
        else {
          iVar12 = *(int *)(param_1 + 8) * 1000;
        }
        uVar8 = (uint)(iVar12 + iVar13) / uVar8;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        if (param_2 <= (uVar8 & 0x7fff) << 1) {
          param_1[0x74] = '\0';
        }
      }
    }
  }
  else if (param_1[0x75] == '\0') {
    if (cVar2 != '\0') {
      iVar13 = *(int *)(param_1 + 0x24) + 1;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      *(int *)(param_1 + 0x24) = iVar13;
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      param_1[0x10] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x74] = cVar11;
      cVar14 = '\0';
      cVar10 = cVar11;
      goto LAB_ram_480571b2;
    }
  }
  else {
    if (param_2 == *(ushort *)(param_1 + 0x12)) goto LAB_ram_480571ac;
    if ((*(ushort *)(param_1 + 0x14) == param_2) &&
       (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x24))) {
      param_1[0x79] = '\0';
      param_1[0x77] = '\x01';
    }
    else if (cVar2 != '\0') {
      iVar13 = *(int *)(param_1 + 0x24) + 1;
      if ((((param_1[0x21] == '\0') || (param_1[0x60] == '\0')) ||
          (*(ushort *)(param_1 + 0x12) <= param_2)) || (param_2 < *(ushort *)(param_1 + 0x5a))) {
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        *(int *)(param_1 + 0x24) = iVar13;
        param_1[0x60] = '\0';
        param_1[0x61] = '\0';
        param_1[0x5a] = '\0';
        param_1[0x5b] = '\0';
      }
      else {
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        *(int *)(param_1 + 0x24) = iVar13;
      }
      param_1[0x74] = cVar11;
      param_1[0x79] = '\0';
      param_1[0x77] = '\x01';
    }
  }
  if (((cVar6 != '\0') && (param_1[0x7d] != '\0')) &&
     ((cVar6 = param_1[0x7c], cVar6 != '\0' && ((uint)(param_5 - *(int *)(param_1 + 0x3c)) < 0x3e9))
     )) {
    if (*(ushort *)(param_1 + 0x4c) <= uVar9) {
      cVar6 = *(ushort *)(param_1 + 0x4c) + 1 < param_2;
    }
    param_1[0x7e] = cVar6;
  }
  if (((*param_1 == '\0') || (param_1[0x6b] == '\0')) ||
     ((param_1[0x6c] == '\0' ||
      ((param_1[0x70] == '\0' || (500 < (uint)(param_5 - *(int *)(param_1 + 0x2c))))))))
  goto LAB_ram_4805723a;
  uVar8 = *(uint *)(param_1 + 8);
  if (param_1[0xc] == '\0') {
    if (param_3 == 0) {
      iVar13 = 50000;
      uVar7 = 100000;
    }
    else {
      iVar13 = 0x13a53;
      uVar7 = 0x274a6;
    }
    if (uVar8 == 0) goto LAB_ram_48057370;
    iVar12 = uVar8 * 1000;
LAB_ram_48057388:
    uVar7 = (uint)(iVar12 + iVar13) / uVar7;
    if (0xff < uVar7) {
      uVar7 = 0xff;
    }
    uVar5 = (uVar7 & 0x7fff) * 2;
    if ((uVar9 < uVar5) || (uVar5 + 1 < param_2)) goto LAB_ram_4805723a;
  }
  else {
    if (uVar8 == 0) {
      if (param_3 == 0) {
        iVar13 = 50000;
        uVar7 = 100000;
      }
      else {
        iVar13 = 0x13a53;
        uVar7 = 0x274a6;
      }
LAB_ram_48057370:
      iVar12 = ((uint)(byte)param_1[1] * 1000 + 100000) * uVar5;
      goto LAB_ram_48057388;
    }
    if (param_3 == 0) {
      uVar5 = 0x32;
      param_2 = param_2 * 0x32;
    }
    else {
      uVar5 = param_2 * 0x274a6 + 1000;
      param_2 = __udivdi3(uVar5,(uint)(uVar5 < param_2 * 0x274a6) +
                                (int)((ulonglong)param_2 * 0x274a6 >> 0x20),2000,0);
      uVar5 = 0x51;
    }
    if (uVar8 < param_2) {
      param_2 = param_2 - uVar8;
    }
    else {
      param_2 = uVar8 - param_2;
    }
    if (uVar5 < param_2) goto LAB_ram_4805723a;
  }
  param_1[0x69] = '\0';
  param_1[0x72] = '\x01';
LAB_ram_4805723a:
  if (((((cVar14 != '\0') && (*(int *)(param_1 + 0x18) != 0)) && (param_1[0x75] != '\0')) &&
      (param_1[0x76] != '\0')) &&
     ((param_1[0x77] != '\0' || (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x24))))) {
    param_1[0x10] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    return;
  }
  return;
}


