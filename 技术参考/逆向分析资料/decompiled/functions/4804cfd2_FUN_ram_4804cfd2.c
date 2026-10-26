/* Firmware entry: 0x4804cfd2 */

undefined1 *
FUN_ram_4804cfd2(undefined1 *param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                uint param_6)

{
  short sVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  undefined2 uVar15;
  ushort uVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_2 + 0x54) == '\0') {
    *(undefined2 *)(param_2 + 0x5c) = param_5;
    *(short *)(param_2 + 0x5a) = (short)param_4;
    cVar14 = *(char *)(param_2 + 0x56);
    if (*(char *)(param_2 + 0x55) == '\0') {
      *(undefined1 *)(param_2 + 0x57) = 1;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      if ((cVar14 != '\x06') || (cVar3 = *(char *)(param_2 + 0x88), cVar3 == '\0')) {
        cVar3 = *(char *)(param_2 + 0x66);
      }
      uVar4 = *(undefined1 *)(param_2 + 0x7d);
      uVar9 = *(undefined4 *)(param_2 + 0x80);
      param_1[5] = cVar14 == '\x06';
      param_1[4] = cVar3;
      param_1[6] = uVar4;
      *(undefined4 *)(param_1 + 8) = uVar9;
      return param_1;
    }
    if (cVar14 == '\b') {
      if ((*(char *)(param_2 + 0xa8) != '\0') &&
         (((*(char *)(param_2 + 0x48) == '\0' || (*(char *)(param_2 + 0x49) == '\0')) ||
          (*(uint *)(param_2 + 0x44) < (uint)(param_3 - *(int *)(param_2 + 0x4c)))))) {
        *(undefined1 *)(param_2 + 0xa8) = 0;
      }
      uVar4 = *(undefined1 *)(param_2 + 0x7d);
      uVar9 = *(undefined4 *)(param_2 + 0x80);
      param_1[4] = *(undefined1 *)(param_2 + 0x66);
      param_1[6] = uVar4;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 8) = uVar9;
      return param_1;
    }
  }
  else {
    cVar14 = '\x01';
    *(undefined2 *)(param_2 + 0x48) = 0;
    *(undefined1 *)(param_2 + 0x4c) = 0;
    *(undefined1 *)(param_2 + 0x4d) = 0;
    *(undefined1 *)(param_2 + 0x4e) = 0;
    *(undefined1 *)(param_2 + 0x4f) = 0;
    *(undefined1 *)(param_2 + 0x58) = 0;
    *(int *)(param_2 + 0x6c) = param_3;
    *(int *)(param_2 + 0x70) = param_3;
    *(undefined2 *)(param_2 + 0x5e) = 0;
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(undefined1 *)(param_2 + 0x68) = 0;
    *(undefined1 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined2 *)(param_2 + 0x8a) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0;
    *(undefined1 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
    *(undefined2 *)(param_2 + 0xb0) = 0;
    *(undefined1 *)(param_2 + 0xb2) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined2 *)(param_2 + 0x7c) = 0;
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_2 + 0xa4) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0x2010100;
    *(undefined1 *)(param_2 + 0x4a) = 0xf;
    *(undefined1 *)(param_2 + 0x50) = 2;
    *(undefined4 *)(param_2 + 100) = 1;
    *(undefined2 *)(param_2 + 0x5c) = param_5;
    *(short *)(param_2 + 0x5a) = (short)param_4;
  }
  if (*(char *)(param_2 + 0x48) == '\0') {
    uVar4 = *(undefined1 *)(param_2 + 0x66);
    uVar5 = *(undefined1 *)(param_2 + 0x7d);
    uVar9 = *(undefined4 *)(param_2 + 0x80);
    puVar8 = (undefined *)0x201;
LAB_ram_4804d236:
    *(undefined1 *)(param_2 + 0x67) = 0;
    *(undefined2 *)(param_2 + 0xb0) = 0;
    *(undefined1 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
    param_1[4] = uVar4;
    param_1[6] = uVar5;
    *(undefined **)(param_2 + 0x56) = puVar8;
    *(undefined2 *)(param_2 + 100) = 1;
    *(undefined2 *)(param_2 + 0x5e) = 0;
    *(undefined1 *)(param_2 + 0x68) = 0;
    *(undefined1 *)(param_2 + 0x7c) = 0;
    *(undefined1 *)(param_2 + 0xb2) = 0;
    *(undefined1 *)(param_2 + 0xa8) = 0;
    *(undefined2 *)(param_2 + 0x62) = 0;
    *(undefined2 *)(param_2 + 0x8a) = 0;
    *(undefined1 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *param_1 = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 8) = uVar9;
    return param_1;
  }
  if ((*(char *)(param_2 + 0x49) == '\0') ||
     (*(uint *)(param_2 + 0x44) < (uint)(param_3 - *(int *)(param_2 + 0x4c)))) {
    uVar4 = *(undefined1 *)(param_2 + 0x66);
    uVar5 = *(undefined1 *)(param_2 + 0x7d);
    uVar9 = *(undefined4 *)(param_2 + 0x80);
    puVar8 = &misa;
    goto LAB_ram_4804d236;
  }
  if (((*(char *)(param_2 + 0x68) != '\0') && (200 < (uint)(param_3 - *(int *)(param_2 + 0x6c)))) &&
     (*(undefined1 *)(param_2 + 0x67) = 0, *(char *)(param_2 + 0x7c) == '\0')) {
    *(undefined2 *)(param_2 + 0x56) = 0x402;
    uVar18 = param_4 + 500U & 0xffff;
    *(undefined2 *)(param_2 + 0x5e) = 0;
    *(int *)(param_2 + 0x6c) = param_3;
    *(undefined1 *)(param_2 + 0x68) = 1;
    if (uVar18 < 0x3e9) {
      if (param_4 < 0xb) {
        cVar14 = '\x02';
        bVar7 = 0;
        if (-0xb < param_4) {
LAB_ram_4804d358:
          *(char *)(param_2 + 0x58) = (*(char *)(param_2 + 0x66) != '\0') << 1;
          goto LAB_ram_4804d366;
        }
        *(undefined1 *)(param_2 + 0x66) = 1;
        *(undefined1 *)(param_2 + 0x58) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x58) = 1;
        *(undefined1 *)(param_2 + 0x66) = 0xff;
      }
LAB_ram_4804d444:
      bVar7 = 0;
      cVar14 = '\x02';
LAB_ram_4804d448:
      *(byte *)(param_2 + 0x67) = bVar7 + 1;
      if ((byte)(bVar7 + 1) == '\x03') {
LAB_ram_4804d36c:
        if (cVar14 == '\x02') {
          if ((byte)(*(char *)(param_2 + 0x4a) - 3U) < 3) {
            FUN_ram_4804cd2c(param_2,param_3);
            cVar14 = *(char *)(param_2 + 0x56);
          }
          else {
            FUN_ram_4804c858(param_2,param_3,param_6);
            cVar14 = *(char *)(param_2 + 0x56);
          }
        }
LAB_ram_4804d372:
        if (cVar14 == '\t') {
          uVar5 = *(undefined1 *)(param_2 + 0x66);
          uVar6 = *(undefined1 *)(param_2 + 0x7d);
          uVar9 = *(undefined4 *)(param_2 + 0x80);
          uVar4 = 0xb;
          goto LAB_ram_4804d4a6;
        }
        if (*(char *)(param_2 + 0xb2) != '\0') {
LAB_ram_4804d380:
          if (*(char *)(param_2 + 0x7c) == '\0') {
LAB_ram_4804d0ea:
            if (*(uint *)(param_2 + 0x28) <= (uint)(param_3 - *(int *)(param_2 + 0xb4))) {
              FUN_ram_4804cd2c(param_2,param_3);
              cVar14 = *(char *)(param_2 + 0x56);
            }
          }
        }
        if (cVar14 == '\v') {
          if ((*(uint *)(param_2 + 0x74) != 0) &&
             (*(uint *)(param_2 + 0x74) <= (uint)(param_3 - *(int *)(param_2 + 0x70)))) {
            FUN_ram_4804cb48(param_2,param_3);
            cVar14 = *(char *)(param_2 + 0x56);
            goto LAB_ram_4804d10e;
          }
LAB_ram_4804d510:
          uVar5 = *(undefined1 *)(param_2 + 0x66);
          uVar6 = *(undefined1 *)(param_2 + 0x7d);
          uVar9 = *(undefined4 *)(param_2 + 0x80);
          uVar4 = 7;
LAB_ram_4804d4a6:
          param_1[4] = uVar5;
          param_1[6] = uVar6;
          *(undefined1 *)(param_2 + 0x57) = uVar4;
          *param_1 = 0;
          *(undefined2 *)(param_1 + 2) = 0;
          param_1[5] = 0;
          *(undefined4 *)(param_1 + 8) = uVar9;
          return param_1;
        }
LAB_ram_4804d10e:
        if (cVar14 == '\x06') {
LAB_ram_4804d54c:
          uVar12 = *(uint *)(param_2 + 0x74);
          if (uVar12 != 0) {
LAB_ram_4804d552:
            if (uVar12 <= (uint)(param_3 - *(int *)(param_2 + 0x70))) {
              iVar19 = *(int *)(param_2 + 0x38);
              if (iVar19 != 0 || *(int *)(param_2 + 0x3c) != 0) {
                uVar18 = *(uint *)(param_2 + 0x78);
                *(int *)(param_2 + 0x70) = param_3;
                *(undefined2 *)(param_2 + 0x56) = 0x707;
                if (uVar18 == 0) {
                  uVar20 = 0x510c4619;
                  uVar12 = 0x4619;
                }
                else {
                  uVar10 = uVar18 << 0xd ^ uVar18;
                  uVar10 = uVar10 ^ uVar10 >> 0x11;
                  uVar20 = uVar10 ^ uVar10 << 5;
                  uVar12 = uVar20 & 0xffff;
                  if (uVar10 == uVar10 << 5) {
                    if (uVar18 == 0x9e3779b9) {
                      uVar20 = 0xa341316c;
                    }
                    else {
                      uVar20 = uVar18 ^ 0x9e3779b9;
                    }
                  }
                }
                uVar20 = uVar20 ^ uVar20 << 0xd;
                uVar20 = uVar20 ^ uVar20 >> 0x11;
                uVar20 = uVar20 ^ uVar20 << 5;
                *(uint *)(param_2 + 0x78) = uVar20;
                uVar18 = *(int *)(param_2 + 0x3c) - iVar19;
                uVar12 = (uVar20 & 0xffff) + uVar12 >> 1;
                iVar11 = __udivdi3(uVar12 * uVar18,
                                   (int)((ulonglong)uVar12 * (ulonglong)uVar18 >> 0x20),0xffff,0);
                *(undefined2 *)(param_2 + 0x5e) = 0;
                *(undefined1 *)(param_2 + 0x65) = 0;
                *(int *)(param_2 + 0x74) = iVar19 + iVar11;
LAB_ram_4804d774:
                uVar4 = *(undefined1 *)(param_2 + 0x7d);
                uVar9 = *(undefined4 *)(param_2 + 0x80);
                param_1[4] = *(undefined1 *)(param_2 + 0x66);
                param_1[6] = uVar4;
                *(undefined1 *)(param_2 + 0x57) = 7;
                *param_1 = 0;
                *(undefined2 *)(param_1 + 2) = 0;
                param_1[5] = 0;
                *(undefined4 *)(param_1 + 8) = uVar9;
                return param_1;
              }
              FUN_ram_4804cb48(param_2,param_3);
              cVar14 = *(char *)(param_2 + 0x56);
              if (cVar14 == '\a') goto LAB_ram_4804d774;
              goto LAB_ram_4804d53e;
            }
          }
LAB_ram_4804d188:
          cVar3 = *(char *)(param_2 + 0x88);
          goto LAB_ram_4804d18c;
        }
        if (cVar14 == '\a') {
          if ((*(uint *)(param_2 + 0x74) == 0) ||
             ((uint)(param_3 - *(int *)(param_2 + 0x70)) < *(uint *)(param_2 + 0x74)))
          goto LAB_ram_4804d510;
          FUN_ram_4804cb48(param_2,param_3);
          cVar14 = *(char *)(param_2 + 0x56);
LAB_ram_4804d53e:
          if (cVar14 == '\f') goto LAB_ram_4804d5a6;
LAB_ram_4804d544:
          if (cVar14 == '\x03') goto LAB_ram_4804d126;
LAB_ram_4804d15a:
          if (cVar14 == '\x05') {
LAB_ram_4804d160:
            if ((*(uint *)(param_2 + 0x74) == 0) ||
               ((uint)(param_3 - *(int *)(param_2 + 0x70)) < *(uint *)(param_2 + 0x74))) {
              uVar5 = *(undefined1 *)(param_2 + 0x66);
              uVar6 = *(undefined1 *)(param_2 + 0x7d);
              uVar9 = *(undefined4 *)(param_2 + 0x80);
              uVar4 = 5;
              goto LAB_ram_4804d4a6;
            }
            FUN_ram_4804c858(param_2,param_3,param_6);
            cVar14 = *(char *)(param_2 + 0x56);
          }
          if (cVar14 == '\x06') goto LAB_ram_4804d188;
LAB_ram_4804d390:
          if (uVar18 < 0x3e9) {
            iVar19 = (int)*(char *)(param_2 + 0x66);
            if (iVar19 == 0) {
LAB_ram_4804d6ca:
              uVar4 = *(undefined1 *)(param_2 + 0x7d);
              uVar9 = *(undefined4 *)(param_2 + 0x80);
              *(undefined2 *)(param_1 + 4) = 0;
              param_1[6] = uVar4;
              *(undefined1 *)(param_2 + 0x57) = 6;
              *param_1 = 0;
              *(undefined2 *)(param_1 + 2) = 0;
              *(undefined4 *)(param_1 + 8) = uVar9;
              return param_1;
            }
            if ((cVar14 != '\x03') && (cVar14 != '\f')) {
              uVar4 = *(undefined1 *)(param_2 + 0x7d);
              uVar9 = *(undefined4 *)(param_2 + 0x80);
              param_1[4] = *(char *)(param_2 + 0x66);
              param_1[6] = uVar4;
              *param_1 = 0;
              *(undefined2 *)(param_1 + 2) = 0;
              param_1[5] = 0;
              *(undefined4 *)(param_1 + 8) = uVar9;
              return param_1;
            }
LAB_ram_4804d626:
            FUN_ram_4804cd8e(param_2,param_6);
            uVar15 = 0xff4c;
            iVar11 = *(short *)(param_2 + 0x62) * iVar19;
            if ((-0xb5 < iVar11) && (uVar15 = 0xb4, iVar11 < 0xb5)) {
              uVar15 = (undefined2)((uint)(iVar11 * 0x10000) >> 0x10);
            }
            param_1[6] = 0;
            param_1[4] = (char)iVar19;
            *(undefined1 *)(param_2 + 0x57) = 0;
            *(undefined2 *)(param_2 + 0x5e) = uVar15;
            *(undefined4 *)(param_1 + 8) = 0;
            *(undefined2 *)(param_1 + 2) = uVar15;
            param_1[5] = 0;
            *param_1 = 1;
            return param_1;
          }
        }
        else if (cVar14 == '\f') {
LAB_ram_4804d5a6:
          if ((*(uint *)(param_2 + 0x74) != 0) &&
             (*(uint *)(param_2 + 0x74) <= (uint)(param_3 - *(int *)(param_2 + 0x70)))) {
            FUN_ram_4804c858(param_2,param_3,param_6);
            cVar14 = *(char *)(param_2 + 0x56);
            goto LAB_ram_4804d544;
          }
          if (uVar18 < 0x3e9) {
LAB_ram_4804d61e:
            iVar19 = (int)*(char *)(param_2 + 0x66);
            if (iVar19 == 0) goto LAB_ram_4804d6ca;
            goto LAB_ram_4804d626;
          }
          cVar14 = '\f';
        }
        else {
          if (cVar14 != '\x03') {
            if (cVar14 == '\x05') goto LAB_ram_4804d160;
            goto LAB_ram_4804d390;
          }
LAB_ram_4804d126:
          if ((*(uint *)(param_2 + 0x74) != 0) &&
             (*(uint *)(param_2 + 0x74) <= (uint)(param_3 - *(int *)(param_2 + 0x70)))) {
            iVar19 = *(int *)(param_2 + 0x20);
            if (iVar19 == 0 && *(int *)(param_2 + 0x24) == 0) {
              FUN_ram_4804c858(param_2,param_3,param_6);
              cVar14 = *(char *)(param_2 + 0x56);
              goto LAB_ram_4804d15a;
            }
            uVar12 = *(uint *)(param_2 + 0x78);
            *(int *)(param_2 + 0x70) = param_3;
            *(undefined2 *)(param_2 + 0x56) = 0x505;
            if (uVar12 == 0) {
              if (param_6 == 0x9e3779b9) {
                uVar10 = 0x28f2889a;
                uVar20 = 0x889a;
              }
              else {
                uVar12 = param_6 ^ 0x9e3779b9 ^ (param_6 ^ 0x9e3779b9) << 0xd;
                uVar12 = uVar12 >> 0x11 ^ uVar12;
                uVar10 = uVar12 ^ uVar12 << 5;
                uVar20 = uVar10 & 0xffff;
                if (uVar12 == uVar12 << 5) goto LAB_ram_4804d860;
              }
            }
            else {
              uVar12 = uVar12 << 0xd ^ uVar12;
              uVar12 = uVar12 ^ uVar12 >> 0x11;
              uVar10 = uVar12 ^ uVar12 << 5;
              uVar20 = uVar10 & 0xffff;
              if ((uVar12 == uVar12 << 5) && (uVar10 = 0xa341316c, param_6 != 0x9e3779b9)) {
LAB_ram_4804d860:
                uVar10 = param_6 ^ 0x9e3779b9;
              }
            }
            uVar10 = uVar10 ^ uVar10 << 0xd;
            uVar10 = uVar10 ^ uVar10 >> 0x11;
            uVar10 = uVar10 ^ uVar10 << 5;
            *(uint *)(param_2 + 0x78) = uVar10;
            uVar20 = (uVar10 & 0xffff) + uVar20 >> 1;
            uVar12 = *(int *)(param_2 + 0x24) - iVar19;
            iVar11 = __udivdi3(uVar20 * uVar12,(int)((ulonglong)uVar20 * (ulonglong)uVar12 >> 0x20),
                               0xffff,0);
            *(undefined2 *)(param_2 + 100) = 1;
            *(int *)(param_2 + 0x74) = iVar19 + iVar11;
            *(undefined2 *)(param_2 + 0x5e) = 0;
            *(undefined2 *)(param_2 + 0x62) = 0;
            goto LAB_ram_4804d160;
          }
          if (uVar18 < 0x3e9) goto LAB_ram_4804d61e;
          cVar14 = '\x03';
        }
        cVar3 = *(char *)(param_2 + 0x66);
        *param_1 = 0;
        *(undefined2 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_2 + 0x57) = 0xd;
LAB_ram_4804d1a8:
        uVar4 = *(undefined1 *)(param_2 + 0x7d);
        uVar9 = *(undefined4 *)(param_2 + 0x80);
        param_1[4] = cVar3;
        param_1[6] = uVar4;
        param_1[5] = cVar14 == '\x06';
        *(undefined4 *)(param_1 + 8) = uVar9;
        return param_1;
      }
      *(undefined1 *)(param_2 + 0x57) = 4;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      if (cVar14 == '\x06') {
        cVar3 = *(char *)(param_2 + 0x88);
LAB_ram_4804d470:
        cVar14 = '\x06';
        if (cVar3 != '\0') goto LAB_ram_4804d41a;
      }
    }
    else {
LAB_ram_4804d400:
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_2 + 0x67) = 1;
      *(undefined1 *)(param_2 + 0x57) = 4;
      cVar14 = '\x02';
    }
    cVar3 = *(char *)(param_2 + 0x66);
LAB_ram_4804d41a:
    uVar4 = *(undefined1 *)(param_2 + 0x7d);
    uVar9 = *(undefined4 *)(param_2 + 0x80);
    param_1[4] = cVar3;
    param_1[6] = uVar4;
    param_1[5] = cVar14 == '\x06';
    *(undefined4 *)(param_1 + 8) = uVar9;
    return param_1;
  }
  uVar18 = param_4 + 500U & 0xffff;
  if (cVar14 == '\x01') {
    *(undefined2 *)(param_2 + 0x56) = 0x402;
    *(undefined2 *)(param_2 + 0x5e) = 0;
    *(undefined1 *)(param_2 + 0x67) = 0;
    *(undefined1 *)(param_2 + 0x68) = 1;
    *(int *)(param_2 + 0x6c) = param_3;
    if (uVar18 < 0x3e9) {
      if (param_4 < 0xb) {
        if (-0xb < param_4) {
          cVar14 = '\x02';
          bVar7 = 0;
          goto LAB_ram_4804d358;
        }
        *(undefined1 *)(param_2 + 0x66) = 1;
        *(undefined1 *)(param_2 + 0x58) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x58) = 1;
        *(undefined1 *)(param_2 + 0x66) = 0xff;
      }
      goto LAB_ram_4804d444;
    }
    goto LAB_ram_4804d400;
  }
  *(undefined1 *)(param_2 + 0x68) = 1;
  *(int *)(param_2 + 0x6c) = param_3;
  bVar7 = *(byte *)(param_2 + 0x67);
  if (1000 < uVar18) {
LAB_ram_4804d366:
    if (bVar7 < 3) goto LAB_ram_4804d448;
    goto LAB_ram_4804d36c;
  }
  if (cVar14 != '\x06') {
    if (param_4 < 0xb) {
LAB_ram_4804d4de:
      if (-0xb < param_4) goto LAB_ram_4804d358;
      *(undefined1 *)(param_2 + 0x66) = 1;
      *(undefined1 *)(param_2 + 0x58) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x58) = 1;
      *(undefined1 *)(param_2 + 0x66) = 0xff;
    }
    goto LAB_ram_4804d366;
  }
  cVar3 = *(char *)(param_2 + 0x88);
  if (cVar3 == '\0') {
    if (param_4 < 0xb) goto LAB_ram_4804d4de;
    *(undefined1 *)(param_2 + 0x66) = 0xff;
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (bVar7 < 3) goto LAB_ram_4804d448;
    goto LAB_ram_4804d372;
  }
  if (bVar7 < 3) {
    *(byte *)(param_2 + 0x67) = bVar7 + 1;
    if (bVar7 != 2) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_2 + 0x57) = 4;
      goto LAB_ram_4804d470;
    }
    if (*(char *)(param_2 + 0xb2) != '\0') goto LAB_ram_4804d380;
    goto LAB_ram_4804d10e;
  }
  if (*(char *)(param_2 + 0xb2) != '\0') {
    if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_ram_4804d0ea;
    goto LAB_ram_4804d54c;
  }
  uVar12 = *(uint *)(param_2 + 0x74);
  if (uVar12 != 0) goto LAB_ram_4804d552;
LAB_ram_4804d18c:
  if (cVar3 == '\0') {
    FUN_ram_4804cf26(param_2);
    if (1000 < uVar18) {
      cVar3 = *(char *)(param_2 + 0x88);
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_2 + 0x57) = 0xd;
      cVar14 = '\x06';
      if (cVar3 == '\0') {
        cVar3 = *(char *)(param_2 + 0x66);
        cVar14 = '\x06';
      }
      goto LAB_ram_4804d1a8;
    }
  }
  else if (1000 < uVar18) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_2 + 0x57) = 0xd;
    cVar14 = '\x06';
    goto LAB_ram_4804d1a8;
  }
  uVar4 = *(undefined1 *)(param_2 + 0x7d);
  uVar9 = *(undefined4 *)(param_2 + 0x80);
  if (*(short *)(param_2 + 0x14) == 0 && *(short *)(param_2 + 0x12) == 0) {
    cVar14 = *(char *)(param_2 + 0x88);
    *param_1 = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_2 + 0x57) = 0xe;
    if (cVar14 == '\0') {
      cVar14 = *(char *)(param_2 + 0x66);
    }
    param_1[4] = cVar14;
    param_1[6] = uVar4;
    param_1[5] = 1;
    *(undefined4 *)(param_1 + 8) = uVar9;
    return param_1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    iVar19 = (int)*(char *)(param_2 + 0x88);
    if (iVar19 == 0) {
      uVar5 = *(undefined1 *)(param_2 + 0x66);
      param_1[6] = uVar4;
      param_1[4] = uVar5;
      *(undefined1 *)(param_2 + 0x57) = 6;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 8) = uVar9;
      param_1[5] = 1;
      return param_1;
    }
    sVar17 = *(short *)(param_2 + 0x8c);
    if (sVar17 == 0) {
      sVar17 = *(short *)(param_2 + 0x12);
      if (iVar19 < 0) {
        sVar17 = *(short *)(param_2 + 0x14);
      }
      *(short *)(param_2 + 0x8c) = sVar17;
    }
    iVar11 = (int)*(short *)(param_2 + 0x8e);
    if (iVar11 != 0) goto LAB_ram_4804d9a0;
    if (iVar19 < 0) {
      sVar1 = *(short *)(param_2 + 10);
      sVar2 = *(short *)(param_2 + 0xc);
    }
    else {
      sVar1 = *(short *)(param_2 + 0xe);
      sVar2 = *(short *)(param_2 + 0x10);
    }
    uVar18 = *(uint *)(param_2 + 0x78);
    if (uVar18 == 0) {
      if (param_6 == 0x9e3779b9) {
        uVar12 = 0x28f2889a;
        uVar20 = 0x889a;
      }
      else {
        uVar18 = (param_6 ^ 0x9e3779b9) << 0xd ^ param_6 ^ 0x9e3779b9;
        uVar18 = uVar18 ^ uVar18 >> 0x11;
        uVar12 = uVar18 ^ uVar18 << 5;
        uVar20 = uVar12 & 0xffff;
        if (uVar18 == uVar18 << 5) goto LAB_ram_4804d95e;
      }
    }
    else {
      uVar18 = uVar18 << 0xd ^ uVar18;
      uVar18 = uVar18 ^ uVar18 >> 0x11;
      uVar12 = uVar18 ^ uVar18 << 5;
      uVar20 = uVar12 & 0xffff;
      if ((uVar18 == uVar18 << 5) && (uVar12 = 0xa341316c, param_6 != 0x9e3779b9)) {
LAB_ram_4804d95e:
        uVar12 = param_6 ^ 0x9e3779b9;
      }
    }
    uVar12 = uVar12 << 0xd ^ uVar12;
    uVar12 = uVar12 ^ uVar12 >> 0x11;
    uVar12 = uVar12 ^ uVar12 << 5;
    *(uint *)(param_2 + 0x78) = uVar12;
    iVar13 = ((((uVar12 & 0xffff) + uVar20 >> 1) * ((int)sVar2 - (int)sVar1)) / 0xffff + (int)sVar1)
             * 0x10000;
    iVar11 = iVar13 >> 0x10;
    *(short *)(param_2 + 0x8e) = (short)((uint)iVar13 >> 0x10);
LAB_ram_4804d9a0:
    uVar16 = sVar17 - 1;
    uVar18 = (uint)*(ushort *)(param_2 + 0x8a);
    uVar12 = uVar16 - uVar18;
    if ((int)uVar12 < (int)uVar18) {
      uVar18 = uVar12 & 0xffff;
    }
    if (iVar19 < 0) {
      sVar17 = *(short *)(param_2 + 10);
    }
    else {
      sVar17 = *(short *)(param_2 + 0xe);
    }
    if (1 < uVar16) {
      iVar11 = (int)((((iVar11 - sVar17) * uVar18) / (uint)(uVar16 >> 1) + (int)sVar17) * 0x10000)
               >> 0x10;
    }
    iVar19 = iVar19 * iVar11;
    *(short *)(param_2 + 0x62) = (short)iVar11;
    uVar15 = 0xff06;
    if ((-0xfb < iVar19) && (uVar15 = 0xfa, iVar19 < 0xfb)) {
      uVar15 = (undefined2)((uint)(iVar19 * 0x10000) >> 0x10);
    }
    *(undefined1 *)(param_2 + 0x57) = 0;
    *(undefined2 *)(param_2 + 0x5e) = uVar15;
    param_1[4] = *(char *)(param_2 + 0x88);
    param_1[6] = uVar4;
    param_1[5] = 1;
    *(undefined2 *)(param_1 + 2) = uVar15;
    *(undefined4 *)(param_1 + 8) = uVar9;
    *param_1 = 1;
    return param_1;
  }
  if (*(char *)(param_2 + 0xba) < 0) {
    sVar17 = *(short *)(param_2 + 10);
  }
  else {
    sVar17 = *(short *)(param_2 + 0xe);
  }
  if (*(char *)(param_2 + 0xbb) < 0) {
    sVar1 = *(short *)(param_2 + 10);
  }
  else {
    sVar1 = *(short *)(param_2 + 0xe);
  }
  iVar19 = *(byte *)(param_2 + 0xb9) + 1;
  iVar19 = (10 - iVar19) * (int)*(char *)(param_2 + 0xba) * (int)sVar17 +
           (int)*(char *)(param_2 + 0xbb) * (int)sVar1 * iVar19;
  if (iVar19 < -0x9cd) {
    *(undefined2 *)(param_2 + 0x5e) = 0xff06;
    *(undefined2 *)(param_1 + 2) = 0xff06;
    *param_1 = 1;
LAB_ram_4804dab6:
    uVar5 = 0xff;
  }
  else {
    if (iVar19 < 0x9ce) {
      *param_1 = 1;
      sVar17 = (short)(iVar19 / 10);
      *(short *)(param_2 + 0x5e) = sVar17;
      *(short *)(param_1 + 2) = sVar17;
      if (iVar19 < -9) goto LAB_ram_4804dab6;
    }
    else {
      sVar17 = 0xfa;
      *(undefined2 *)(param_2 + 0x5e) = 0xfa;
      *(undefined2 *)(param_1 + 2) = 0xfa;
      *param_1 = 1;
    }
    uVar5 = sVar17 != 0;
  }
  *(undefined1 *)(param_2 + 0x57) = 0;
  param_1[4] = uVar5;
  param_1[6] = uVar4;
  param_1[5] = 1;
  *(undefined4 *)(param_1 + 8) = uVar9;
  return param_1;
}


