/* Firmware entry: 0x480579ea */

undefined1 * FUN_ram_480579ea(undefined1 *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  char cVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  ushort uVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2[0x6c] == '\0') || ((uint)(param_3 - *(int *)(param_2 + 0x2c)) < 0x1f5)) {
LAB_ram_48057a2c:
    cVar16 = param_2[0x10];
    if ((cVar16 != '\0') && (*(int *)(param_2 + 0x18) != 0)) {
      cVar10 = param_2[0x75];
      if (cVar10 == '\0') {
        if (param_2[0x7a] == '\0') goto LAB_ram_48057aa0;
        goto LAB_ram_48057a9a;
      }
      if ((param_2[0x76] != '\0') &&
         ((param_2[0x77] != '\0' || (*(int *)(param_2 + 0x1c) != *(int *)(param_2 + 0x24))))) {
        param_2[0x10] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
        param_2[0x14] = '\0';
        param_2[0x15] = '\0';
        param_2[0x18] = '\0';
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        param_2[0x1c] = '\0';
        param_2[0x1d] = '\0';
        param_2[0x1e] = '\0';
        param_2[0x1f] = '\0';
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x75] = '\0';
        param_2[0x76] = '\0';
        param_2[0x77] = '\0';
        goto LAB_ram_48057a94;
      }
      if (param_2[0x7a] != '\0') goto LAB_ram_48057a9a;
LAB_ram_48057b8a:
      if ((((cVar10 == '\0') || (param_2[0x76] == '\0')) ||
          ((uint)(param_3 - *(int *)(param_2 + 0x34)) < 500)) ||
         ((*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x34) < 500 ||
          (iVar2 = FUN_ram_480579a8(param_2,param_3), iVar2 == 0)))) goto LAB_ram_48057aa0;
      cVar10 = *param_2;
      param_2[0x79] = cVar16 != '\x05';
      param_2[0x10] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x75] = '\0';
      param_2[0x76] = '\0';
      param_2[0x77] = '\0';
      goto joined_r0x48057c0a;
    }
LAB_ram_48057a94:
    if (param_2[0x7a] == '\0') goto LAB_ram_48057ac8;
LAB_ram_48057a9a:
    cVar10 = *param_2;
    if ((((cVar10 == '\0') || (param_2[0x6b] == '\0')) || (cVar9 = param_2[0x6c], cVar9 == '\0')) ||
       (((((param_2[0x6d] == '\0' || (param_2[0x70] == '\0')) ||
          ((param_2[0x6a] != '\0' ||
           ((500 < (uint)(param_3 - *(int *)(param_2 + 0x2c)) ||
            (500 < (uint)(param_3 - *(int *)(param_2 + 0x30)))))))) ||
         ((uint)(param_3 - *(int *)(param_2 + 0x34)) < 500)) ||
        (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x34) < 500)))) goto LAB_ram_48057aa0;
    cVar16 = param_2[0x10];
    param_2[0x7a] = '\0';
    if (cVar16 != '\0') {
      if (*(int *)(param_2 + 0x18) != 0) {
        cVar10 = param_2[0x75];
        goto LAB_ram_48057b8a;
      }
      goto joined_r0x48057c0a;
    }
  }
  else {
    param_2[0x60] = '\0';
    param_2[0x61] = '\0';
    param_2[0x5a] = '\0';
    param_2[0x5b] = '\0';
    if (param_2[0x75] != '\0') {
      param_2[0x6c] = '\0';
      *(int *)(param_2 + 0x44) = param_3;
      param_2[0x6a] = '\x01';
      goto LAB_ram_48057a2c;
    }
    iVar2 = *(int *)(param_2 + 0x24) + 1;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    *(int *)(param_2 + 0x24) = iVar2;
    param_2[0x10] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x6c] = '\0';
    *(int *)(param_2 + 0x44) = param_3;
    param_2[0x6a] = '\x01';
    if (param_2[0x7a] != '\0') goto LAB_ram_48057a9a;
LAB_ram_48057ac8:
    cVar10 = *param_2;
joined_r0x48057c0a:
    if ((cVar10 == '\0') || (param_2[0x6b] == '\0')) goto LAB_ram_48057aa0;
    cVar9 = param_2[0x6c];
  }
  if ((((((cVar9 == '\0') || (param_2[0x6d] == '\0')) || (bVar19 = param_2[0x70], bVar19 == 0)) ||
       ((param_2[0x6a] != '\0' || (500 < (uint)(param_3 - *(int *)(param_2 + 0x2c)))))) ||
      (500 < (uint)(param_3 - *(int *)(param_2 + 0x30)))) || (param_2[0x7b] != '\0'))
  goto LAB_ram_48057aa0;
  cVar16 = param_2[0x7e];
  bVar21 = bVar19;
  bVar11 = bVar19;
  if (param_2[0x71] == '\0') {
    if (param_2[0xc] != '\0') {
      bVar18 = param_2[0xd];
      if (bVar18 == 0) {
        if (cVar16 == '\0') goto LAB_ram_48057aa0;
      }
      else if (cVar16 == '\0') goto LAB_ram_48057d34;
LAB_ram_48057ca4:
      uVar20 = *(ushort *)(param_2 + 0x4c);
      bVar18 = bVar19;
      goto LAB_ram_48057caa;
    }
    bVar18 = 0;
    if (cVar16 != '\0') goto LAB_ram_480581e6;
LAB_ram_48057d34:
    bVar15 = param_2[0x6f];
    uVar22 = *(uint *)(param_2 + 8);
    uVar3 = (uint)*(ushort *)(param_2 + 0x48);
    if (bVar15 == 0) {
      iVar2 = 50000;
      uVar17 = 100000;
    }
    else {
      iVar2 = 0x13a53;
      uVar17 = 0x274a6;
    }
    if (uVar22 == 0) {
      uVar17 = (((uint)(byte)param_2[1] * 1000 + 100000) * uVar3 + iVar2) / uVar17;
      if (0xff < uVar17) {
        uVar17 = 0xff;
      }
      uVar23 = (uint)*(ushort *)(param_2 + 0x4a);
      uVar17 = (uVar17 & 0x7fff) << 1;
LAB_ram_48057e46:
      uVar8 = uVar23 + 1;
      if ((uVar17 <= uVar8) && (uVar23 <= uVar17 + 1)) goto LAB_ram_48057cc2;
      uVar22 = uVar17;
      if (uVar23 < uVar17) {
        param_2[0x74] = '\0';
        bVar7 = 0;
        if (bVar15 != 0) goto LAB_ram_48058270;
        uVar3 = (uVar3 & 0x7fff) << 1;
        bVar21 = 0;
        bVar11 = bVar18;
        if (bVar18 != 0) goto LAB_ram_480582ec;
        goto LAB_ram_4805829e;
      }
      if (bVar15 == 0) {
        uVar3 = (uVar3 & 0x7fff) << 1;
        if (bVar18 != 0) {
          if (param_2[0x66] != '\0') goto LAB_ram_480583de;
          bVar18 = param_2[0x65];
          param_2[100] = '\x01';
          if (bVar18 != 0) {
            bVar21 = 0;
            goto LAB_ram_480585a8;
          }
          bVar18 = param_2[0x62];
          bVar21 = 0;
          bVar15 = 0;
          goto joined_r0x48057e88;
        }
        bVar21 = 0;
        if (param_2[100] != '\0') goto LAB_ram_480582aa;
        if (param_2[0x67] != '\x01') {
          param_2[0x74] = '\x01';
          bVar21 = 0;
          bVar11 = 0;
          if (uVar23 < uVar17) goto LAB_ram_480582ec;
          bVar18 = 0;
          goto LAB_ram_480583f4;
        }
        bVar21 = 0;
      }
      else {
        uVar3 = (uVar3 * 200000 + 0x13a53) / 0x274a6;
        if (bVar18 == 0) goto LAB_ram_4805829e;
        bVar21 = param_2[0x66];
        if (bVar21 != 0) goto LAB_ram_480583e0;
LAB_ram_480580a8:
        param_2[100] = '\x01';
        uVar22 = uVar17;
        bVar21 = bVar18;
        if (uVar23 < uVar17) goto LAB_ram_480582ec;
LAB_ram_480580b2:
        bVar18 = param_2[0x65];
        if (bVar18 == 0) {
          bVar18 = param_2[0x62];
          if (bVar18 != 0) {
            bVar15 = 0;
            bVar7 = bVar18;
LAB_ram_48057e8c:
            cVar16 = param_2[99];
            bVar11 = bVar18;
            if ((cVar16 != '\0') &&
               (iVar2 = *(int *)(param_2 + 0x50), (uint)(param_3 - iVar2) < 0x1f5)) {
              uVar22 = FUN_ram_4805777e(param_2);
              iVar5 = 100000;
              if (bVar21 != 0) {
                iVar5 = 0x274a6;
              }
              iVar13 = *(uint *)(param_2 + 0x54) * 1000;
              uVar4 = iVar13 - 1;
              uVar8 = uVar4 + iVar5;
              uVar24 = __udivdi3(uVar8,((int)((ulonglong)*(uint *)(param_2 + 0x54) * 1000 >> 0x20) -
                                       (uint)(iVar13 == 0)) + (uint)(uVar8 < uVar4),iVar5,0);
              uVar8 = (uint)uVar24;
              if (((int)((ulonglong)uVar24 >> 0x20) != 0) || (0xff < uVar8)) {
                uVar8 = 0xff;
              }
              uVar4 = uVar8 << 1;
              if ((uVar8 & 0x7fff) << 1 < uVar22) {
                uVar4 = uVar22;
              }
              *(short *)(param_2 + 0x58) = (short)uVar4;
              param_2[0x65] = '\x01';
              if (bVar15 != 0) {
                if (((uVar4 & 0xffff) + 1 & 0xffff) < uVar23) goto LAB_ram_48058630;
                goto LAB_ram_48058544;
              }
              uVar22 = uVar17;
              if (cVar16 != '\0') goto LAB_ram_48057f32;
              goto LAB_ram_48057fa4;
            }
          }
LAB_ram_480580c8:
          if (bVar11 == 0) goto LAB_ram_480585d8;
          param_2[0x74] = '\x01';
          uVar22 = uVar17;
          bVar18 = bVar11;
LAB_ram_480580d6:
          bVar11 = bVar18;
          if (uVar23 < uVar22) goto LAB_ram_480582ec;
          goto LAB_ram_480583f4;
        }
LAB_ram_480585a8:
        bVar7 = param_2[0x62];
        if (bVar7 == 0) {
          if (uVar23 <= *(ushort *)(param_2 + 0x58) + 1) goto LAB_ram_48058544;
        }
        else {
          uVar22 = uVar17;
          if (param_2[99] != '\0') {
            iVar2 = *(int *)(param_2 + 0x50);
LAB_ram_48057f32:
            uVar22 = uVar17;
            if ((uint)(param_3 - iVar2) < 0x1f5) {
              iVar2 = 100000;
              if (bVar21 != 0) {
                iVar2 = 0x274a6;
              }
              iVar5 = *(uint *)(param_2 + 0x54) * 1000;
              uVar8 = iVar5 - 1;
              uVar17 = uVar8 + iVar2;
              uVar24 = __udivdi3(uVar17,((int)((ulonglong)*(uint *)(param_2 + 0x54) * 1000 >> 0x20)
                                        - (uint)(iVar5 == 0)) + (uint)(uVar17 < uVar8),iVar2,0);
              uVar17 = (uint)uVar24;
              if (((int)((ulonglong)uVar24 >> 0x20) != 0) || (0xff < uVar17)) {
                uVar17 = 0xff;
              }
              uVar20 = (ushort)(uVar17 << 1);
              if ((uVar17 & 0x7fff) << 1 < (uint)*(ushort *)(param_2 + 0x58)) {
                uVar20 = *(ushort *)(param_2 + 0x58);
              }
              *(ushort *)(param_2 + 0x58) = uVar20;
            }
          }
LAB_ram_48057fa4:
          uVar8 = (uint)*(ushort *)(param_2 + 0x58);
          uVar17 = uVar22;
          if (uVar23 <= uVar8 + 1) goto LAB_ram_48058544;
          if (((bVar7 != 0) && (uVar20 = (ushort)(byte)param_2[99], param_2[99] != 0)) &&
             ((uint)(param_3 - *(int *)(param_2 + 0x50)) < 0x1f5)) {
            uVar4 = FUN_ram_4805777e(param_2);
            iVar2 = 100000;
            if (bVar21 != 0) {
              iVar2 = 0x274a6;
            }
            iVar5 = *(uint *)(param_2 + 0x54) * 1000;
            uVar14 = iVar5 - 1;
            uVar17 = uVar14 + iVar2;
            uVar24 = __udivdi3(uVar17,((int)((ulonglong)*(uint *)(param_2 + 0x54) * 1000 >> 0x20) -
                                      (uint)(iVar5 == 0)) + (uint)(uVar17 < uVar14),iVar2,0);
            uVar14 = (uint)uVar24;
            if (((int)((ulonglong)uVar24 >> 0x20) != 0) || (0xff < uVar14)) {
              uVar14 = 0xff;
            }
            if (uVar4 < uVar8) {
              uVar4 = uVar8;
            }
            uVar17 = uVar14 << 1;
            if ((uVar14 & 0x7fff) << 1 < (uVar4 & 0xffff)) {
              uVar17 = uVar4;
            }
            uVar17 = uVar17 & 0xffff;
            uVar8 = uVar17 + 1 & 0xffff;
            if ((bVar18 == 0) && (param_2[0x67] == '\x01')) {
              if (uVar23 <= uVar8) goto LAB_ram_48058642;
            }
            else {
              param_2[0x74] = '\x01';
              if (uVar23 <= uVar8) goto LAB_ram_480580d6;
            }
            param_2[0x74] = '\0';
            bVar19 = 0;
            goto LAB_ram_48058112;
          }
        }
        if (bVar18 != 0) goto LAB_ram_480585e6;
        uVar22 = uVar17;
        if (param_2[0x67] != '\x01') goto LAB_ram_48058556;
      }
LAB_ram_48058642:
      if (uVar23 < uVar22) {
        bVar18 = 0;
        uVar20 = 0;
        bVar19 = 0;
      }
      else {
LAB_ram_4805866e:
        if (param_2[0x74] != '\0') {
          bVar18 = 0;
          goto LAB_ram_480583f4;
        }
        bVar18 = 0;
        uVar20 = 0;
        bVar19 = 0;
      }
      goto LAB_ram_48058112;
    }
    uVar17 = (uVar22 * 1000 + iVar2) / uVar17;
    if (0xff < uVar17) {
      uVar17 = 0xff;
    }
    uVar23 = (uint)*(ushort *)(param_2 + 0x4a);
    uVar17 = (uVar17 & 0x7fff) << 1;
    if (bVar18 == 0) goto LAB_ram_48057e46;
    if (bVar15 == 0) {
      uVar8 = 0x32;
      uVar4 = uVar23 * 0x32;
    }
    else {
      uVar8 = uVar23 * 0x274a6 + 1000;
      uVar4 = __udivdi3(uVar8,(uint)(uVar8 < uVar23 * 0x274a6) + uVar23 / 0x6840,2000,0);
      uVar8 = 0x51;
    }
    if (uVar22 < uVar4) {
      uVar4 = uVar4 - uVar22;
    }
    else {
      uVar4 = uVar22 - uVar4;
    }
    if (uVar4 <= uVar8) {
      param_2[0x74] = '\0';
      param_2[0x7e] = '\0';
      goto LAB_ram_48057dcc;
    }
    if (uVar23 < uVar17) {
      param_2[0x74] = '\0';
      if (bVar15 == 0) {
        uVar3 = (uVar3 & 0x7fff) << 1;
        uVar22 = uVar17;
        bVar11 = bVar18;
        goto LAB_ram_480582ec;
      }
      uVar3 = (uVar3 * 200000 + 0x13a53) / 0x274a6;
      bVar18 = 0;
      goto LAB_ram_48058348;
    }
    if (bVar15 == 0) {
      uVar3 = (uVar3 & 0x7fff) << 1;
      bVar18 = 0;
      if (param_2[0x66] == '\0') goto LAB_ram_480580a8;
LAB_ram_480583de:
      bVar21 = 0;
    }
    else {
      bVar21 = param_2[0x66];
      uVar3 = (uVar3 * 200000 + 0x13a53) / 0x274a6;
      bVar18 = bVar15;
      if (bVar21 == 0) goto LAB_ram_480580a8;
    }
LAB_ram_480583e0:
    uVar22 = uVar17;
    if (uVar23 < uVar17) goto LAB_ram_480582ec;
LAB_ram_480583e4:
    bVar11 = param_2[100];
    if (bVar11 == 0) {
      param_2[0x74] = '\x01';
      uVar22 = uVar17;
      bVar18 = bVar19;
    }
    else {
      bVar18 = param_2[0x65];
      if (bVar18 == 0) {
        bVar18 = param_2[0x62];
        bVar15 = bVar18;
joined_r0x48057e88:
        bVar7 = bVar18;
        if (bVar18 != 0) goto LAB_ram_48057e8c;
        goto LAB_ram_480580c8;
      }
LAB_ram_48058536:
      if (*(ushort *)(param_2 + 0x58) + 1 < uVar23) {
LAB_ram_48058630:
        if (bVar18 != 0) goto LAB_ram_480585e6;
        cVar16 = param_2[0x67];
      }
      else {
LAB_ram_48058544:
        param_2[0x66] = '\x01';
        if (bVar18 != 0) goto LAB_ram_480585e6;
        cVar16 = param_2[0x67];
      }
      uVar22 = uVar17;
      if (cVar16 == '\x01') goto LAB_ram_48058642;
LAB_ram_48058556:
      param_2[0x74] = '\x01';
      bVar18 = 0;
      uVar22 = uVar17;
      bVar11 = bVar18;
      if (uVar23 < uVar17) goto LAB_ram_480582ec;
    }
LAB_ram_480583f4:
    if (param_2[0x60] == '\0') {
LAB_ram_480584d8:
      uVar17 = (uint)*(ushort *)(param_2 + 2);
LAB_ram_48058426:
      if ((param_2[0x78] != '\0') && ((uint)(param_3 - *(int *)(param_2 + 0x38)) < uVar17)) {
LAB_ram_48057aa0:
        *param_1 = 0;
        *(undefined2 *)(param_1 + 2) = 0;
        *(undefined2 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined2 *)(param_1 + 0x10) = 0;
        return param_1;
      }
      uVar8 = 100000;
      if (bVar21 != 0) {
        uVar8 = 0x274a6;
      }
      uVar8 = ((uint)(byte)param_2[0xe] * 100000 + (uVar8 >> 1)) / uVar8;
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      uVar17 = uVar22;
      if (((bVar18 != 0) && (*(int *)(param_2 + 8) != 0)) && (uVar17 = 0, uVar22 != 0)) {
        uVar17 = uVar22 - 1 & 0xffff;
      }
      uVar4 = 0;
      if ((uVar8 & 0x7fff) * 2 < uVar23) {
        uVar4 = uVar23 + (uVar8 & 0x7fff) * -2 & 0xffff;
      }
      if (uVar17 < uVar4) {
        uVar17 = uVar4;
      }
      *(short *)(param_2 + 0x5a) = (short)uVar17;
      param_2[0x60] = '\x01';
      if (uVar23 <= uVar17 + 1) goto LAB_ram_48057aa0;
    }
    else {
      uVar17 = (uint)*(ushort *)(param_2 + 0x5a);
      if (uVar23 <= uVar17 + 1) {
        if (param_2[0x61] == '\0') {
          param_2[0x60] = '\0';
          param_2[0x5a] = '\0';
          param_2[0x5b] = '\0';
          goto LAB_ram_480584d8;
        }
        if ((uint)(param_3 - *(int *)(param_2 + 0x5c)) < (uint)*(ushort *)(param_2 + 2))
        goto LAB_ram_48057aa0;
        param_2[0x60] = '\0';
        param_2[0x61] = '\0';
        param_2[0x5a] = '\0';
        param_2[0x5b] = '\0';
        uVar17 = 100;
        goto LAB_ram_48058426;
      }
      if ((param_2[0x78] != '\0') && ((uint)(param_3 - *(int *)(param_2 + 0x38)) < 100))
      goto LAB_ram_48057aa0;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x24);
    iVar2 = *(int *)(param_2 + 0x28) + 1;
    *(int *)(param_2 + 0x28) = iVar2;
    uVar20 = 0x100;
    if (iVar2 == 0) {
      bVar21 = 0;
      uVar20 = 0x100;
      bVar11 = bVar19;
      goto LAB_ram_48058140;
    }
LAB_ram_480581c2:
    if (((bVar18 == 0) && (param_2[0x67] == '\x01')) &&
       ((param_2[0x69] != '\0' && (uVar12 = 5, (byte)param_2[0x68] < 2)))) goto LAB_ram_4805819c;
  }
  else {
    if (cVar16 == '\0') goto LAB_ram_48057aa0;
    if (param_2[0xc] != '\0') goto LAB_ram_48057ca4;
LAB_ram_480581e6:
    uVar20 = *(ushort *)(param_2 + 0x4c);
    bVar18 = 0;
LAB_ram_48057caa:
    uVar17 = (uint)uVar20;
    uVar23 = (uint)*(ushort *)(param_2 + 0x4a);
    uVar8 = uVar23 + 1;
    if ((uVar17 <= uVar8) && (uVar23 <= uVar17 + 1)) {
      uVar22 = *(uint *)(param_2 + 8);
LAB_ram_48057cc2:
      param_2[0x74] = '\0';
      param_2[0x7e] = '\0';
      if (bVar18 == 0) {
        if (param_2[0x6f] == '\0') {
          iVar2 = 50000;
          uVar3 = 100000;
        }
        else {
          iVar2 = 0x13a53;
          uVar3 = 0x274a6;
        }
        if (uVar22 == 0) {
LAB_ram_48058372:
          iVar5 = ((uint)(byte)param_2[1] * 1000 + 100000) * (uint)*(ushort *)(param_2 + 0x48);
        }
        else {
          iVar5 = uVar22 * 1000;
        }
        uVar3 = (uint)(iVar2 + iVar5) / uVar3;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        uVar3 = (uVar3 & 0x7fff) * 2;
        if ((uVar8 < uVar3) || (uVar3 + 1 < uVar23)) goto LAB_ram_48057aa0;
      }
      else {
        if (uVar22 == 0) {
          if (param_2[0x6f] == '\0') {
            uVar3 = 100000;
            iVar2 = 50000;
          }
          else {
            uVar3 = 0x274a6;
            iVar2 = 0x13a53;
          }
          goto LAB_ram_48058372;
        }
LAB_ram_48057dcc:
        if (param_2[0x6f] == '\0') {
          uVar3 = 0x32;
          uVar23 = uVar23 * 0x32;
        }
        else {
          uVar3 = uVar23 * 0x274a6 + 1000;
          uVar23 = __udivdi3(uVar3,(uint)(uVar3 < uVar23 * 0x274a6) + uVar23 / 0x6840,2000,0);
          uVar3 = 0x51;
        }
        if (uVar22 < uVar23) {
          uVar23 = uVar23 - uVar22;
        }
        else {
          uVar23 = uVar22 - uVar23;
        }
        if (uVar3 < uVar23) goto LAB_ram_48057aa0;
      }
      param_2[0x69] = '\0';
      param_2[0x72] = '\x01';
      goto LAB_ram_48057aa0;
    }
    uVar3 = (uint)*(ushort *)(param_2 + 0x48);
    bVar7 = param_2[0x6f];
    uVar20 = (ushort)bVar7;
    uVar22 = uVar17;
    if (uVar23 < uVar17) {
      param_2[0x74] = '\0';
      if (bVar7 == 0) {
        uVar3 = (uVar3 & 0x7fff) << 1;
      }
      else {
LAB_ram_48058270:
        uVar3 = (uVar3 * 200000 + 0x13a53) / 0x274a6;
        bVar1 = bVar18 == 0;
        bVar18 = bVar7;
        if (bVar1) {
          if (bVar7 == 0) {
LAB_ram_4805829e:
            uVar22 = uVar17;
            if (uVar23 < uVar17) {
              bVar11 = 0;
            }
            else {
              if (param_2[100] == '\0') {
                if (param_2[0x67] != '\x01') {
                  param_2[0x74] = '\x01';
                  bVar18 = 0;
                  goto LAB_ram_480583f4;
                }
                goto LAB_ram_4805866e;
              }
LAB_ram_480582aa:
              bVar15 = param_2[0x66];
              if (param_2[0x65] != '\0') {
                bVar18 = 0;
                if (bVar15 == 0) goto LAB_ram_480585a8;
                bVar18 = 0;
                goto LAB_ram_48058536;
              }
              if (param_2[0x62] != 0) {
                bVar18 = 0;
                bVar7 = param_2[0x62];
                goto LAB_ram_48057e8c;
              }
LAB_ram_480585d8:
              uVar22 = uVar17;
              if (param_2[0x67] == '\x01') goto LAB_ram_48058642;
              bVar18 = 0;
LAB_ram_480585e6:
              param_2[0x74] = '\x01';
              uVar22 = uVar17;
              bVar11 = bVar18;
              if (uVar17 <= uVar23) goto LAB_ram_480583f4;
            }
LAB_ram_480582ec:
            bVar18 = bVar11;
            uVar20 = 0;
            bVar19 = 0;
          }
          else {
            uVar20 = 0;
            bVar18 = 0;
            uVar22 = uVar17;
            bVar19 = bVar7;
          }
        }
        else {
LAB_ram_48058348:
          if (uVar17 <= uVar23) goto LAB_ram_480584e0;
          uVar22 = uVar17;
          if (bVar18 == 0) goto LAB_ram_480582ec;
          uVar20 = 0;
          bVar19 = bVar18;
        }
      }
    }
    else if (bVar7 == 0) {
      uVar3 = (uVar3 & 0x7fff) << 1;
      if (bVar18 != 0) {
        if (param_2[0x66] == '\0') {
          param_2[100] = '\x01';
        }
LAB_ram_4805810c:
        uVar20 = 0;
        uVar22 = uVar17;
        bVar18 = bVar19;
      }
    }
    else {
      uVar3 = (uVar3 * 200000 + 0x13a53) / 0x274a6;
      if (bVar18 == 0) {
        uVar20 = 0;
      }
      else {
        if (uVar17 <= uVar23) {
LAB_ram_480584e0:
          bVar21 = param_2[0x66];
          if (bVar21 == 0) {
            param_2[100] = '\x01';
            bVar21 = bVar19;
            if (bVar18 == 0) goto LAB_ram_480580b2;
          }
          else if (bVar18 == 0) goto LAB_ram_480583e4;
          goto LAB_ram_4805810c;
        }
        uVar20 = 0;
        bVar19 = bVar18;
      }
    }
LAB_ram_48058112:
    param_2[0x60] = '\0';
    param_2[0x61] = '\0';
    param_2[0x5a] = '\0';
    param_2[0x5b] = '\0';
    if (((param_2[0x78] != '\0') && ((uint)(param_3 - *(int *)(param_2 + 0x38)) < 100)) &&
       (param_2[0x73] == '\0')) goto LAB_ram_48057aa0;
    uVar6 = *(undefined4 *)(param_2 + 0x24);
    iVar2 = *(int *)(param_2 + 0x28) + 1;
    *(int *)(param_2 + 0x28) = iVar2;
    bVar11 = 0;
    bVar21 = bVar19;
    if (iVar2 == 0) {
LAB_ram_48058140:
      iVar2 = 1;
      param_2[0x28] = '\x01';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
    }
    bVar19 = bVar11;
    if (bVar21 == 0) goto LAB_ram_480581c2;
  }
  if (uVar23 < uVar22) {
    if (((param_2[0x79] != '\0') || (uVar3 = (uVar23 / 10 + 1) * 0xa0000 >> 0x10, uVar22 < uVar3))
       || (uVar12 = 2, (int)(uVar3 - uVar23) < 3)) {
      uVar3 = uVar23 + 2;
      if (0x1ff < (uVar3 & 0xffff)) {
        uVar3 = 0x1ff;
      }
      uVar3 = uVar3 & 0xffff;
      uVar12 = 1;
    }
  }
  else if (((param_2[0x79] != '\0') || ((param_2[0x74] != '\0' && (bVar19 == 0)))) ||
          ((uVar3 = ((uVar23 + 9) / 10) * 10 - 10 & 0xffff, uVar3 < uVar17 ||
           (uVar12 = 4, (int)(uVar23 - uVar3) < 3)))) {
    uVar3 = uVar23;
    if (uVar23 < 2) {
      uVar3 = 2;
    }
    uVar3 = uVar3 - 2 & 0xffff;
    uVar12 = 3;
  }
LAB_ram_4805819c:
  *(short *)(param_1 + 2) = (short)uVar23;
  *(short *)(param_1 + 4) = (short)uVar3;
  *(ushort *)(param_1 + 0x10) = uVar20;
  *param_1 = uVar12;
  *(int *)(param_1 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  return param_1;
}


