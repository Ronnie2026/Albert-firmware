/* Firmware entry: 0x480c90ae */

void FUN_ram_480c90ae(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[0xa0] != '\0') && (*(char *)((int)param_1 + 0x281) != '\0')) &&
     (0x5dc < (uint)(param_3 - param_1[0xa2]))) {
    *(undefined1 *)((int)param_1 + 0x281) = 0;
    FUN_ram_480c6f6c(param_1,param_3);
  }
  if (((*(char *)(param_2 + 0xa0) != '\0') || (*(char *)(param_2 + 10) == '\0')) ||
     ((*(char *)(param_2 + 0xe) == '\0' || (*(char *)(param_2 + 0xb) == '\0')))) {
    *(undefined1 *)(param_1 + 0x65) = 0;
    *(undefined2 *)((int)param_1 + 0x196) = 0;
    param_1[0x66] = 0;
    param_1[0x69] = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6b] = 0;
    *(undefined2 *)((int)param_1 + 0x246) = 0;
    param_1[0x92] = 0;
    *(undefined2 *)((int)param_1 + 0x24e) = 0;
    param_1[0x94] = 0;
    *(undefined2 *)(param_1 + 0x95) = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    param_1[0x67] = -0xffffeff;
    param_1[0x68] = 2;
    if (param_1[0x7d] + 1 == 0) {
      iVar10 = param_1[0x7e];
      param_1[0x7d] = 1;
    }
    else {
      iVar10 = param_1[0x7e];
      param_1[0x7d] = param_1[0x7d] + 1;
    }
    iVar10 = iVar10 + 1;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7e] = iVar10;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    *(undefined2 *)(param_1 + 0x9d) = 0;
    *(undefined1 *)((int)param_1 + 0x276) = 0;
    param_1[0x9e] = 0;
    param_1[0xa8] = 0;
    FUN_ram_4ff3ec14(param_1 + 4,0xffffffff);
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_ram_4ff3ee10(param_1 + 4);
    FUN_ram_4ff3ec14(param_1[2],0xffffffff);
    *(undefined1 *)(param_1[1] + 0x804) = 0;
    iVar10 = param_1[1];
    *(undefined1 *)(iVar10 + 0x810) = 0;
    iVar11 = param_1[1];
    *(undefined2 *)(iVar10 + 0x80e) = 0;
    *(undefined1 *)(iVar11 + 0x816) = 0;
    iVar10 = param_1[1];
    *(undefined2 *)(iVar11 + 0x812) = 0;
    *(undefined2 *)(iVar11 + 0x814) = 0;
    *(undefined1 *)(iVar10 + 0x817) = 0;
    *(undefined1 *)(param_1[1] + 0x818) = 0;
    *(undefined1 *)(param_1[1] + 0x835) = 0;
    iVar11 = param_1[1];
    iVar10 = param_1[2];
    *(undefined4 *)(iVar11 + 0x838) = 0;
    *(undefined4 *)(iVar11 + 0x83c) = 0;
    *(undefined2 *)(iVar11 + 0x81a) = 0;
    *(undefined4 *)(iVar11 + 0x81c) = 0;
    *(undefined4 *)(iVar11 + 0x820) = 0;
    *(undefined1 *)(iVar11 + 0x824) = 0;
    *(undefined2 *)(iVar11 + 0x828) = 0;
    *(undefined2 *)(iVar11 + 0x826) = 0;
    *(undefined4 *)(iVar11 + 0x82c) = 0;
    *(undefined4 *)(iVar11 + 0x830) = 0;
    *(undefined1 *)(iVar11 + 0x834) = 0;
    FUN_ram_4ff3ee10(iVar10);
    return;
  }
  if (*(char *)((int)param_1 + 0x189) == '\0') {
LAB_ram_480c9618:
    *(undefined1 *)(param_1 + 0x65) = 0;
    *(undefined2 *)((int)param_1 + 0x196) = 0;
    param_1[0x66] = 0;
    param_1[0x69] = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6b] = 0;
    *(undefined2 *)((int)param_1 + 0x246) = 0;
    param_1[0x92] = 0;
    *(undefined2 *)((int)param_1 + 0x24e) = 0;
    param_1[0x94] = 0;
    *(undefined2 *)(param_1 + 0x95) = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    param_1[0x67] = -0xffffeff;
    iVar10 = param_1[0x7d] + 1;
    param_1[0x68] = 2;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7d] = iVar10;
    iVar10 = param_1[0x7e] + 1;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7e] = iVar10;
    FUN_ram_4809ebc2(param_1);
    return;
  }
  if (500 < (uint)(param_3 - param_1[0xa7])) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    param_1[0x61] = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    *(undefined2 *)(param_1 + 0x9d) = 0;
    *(undefined1 *)((int)param_1 + 0x276) = 0;
    param_1[0x9e] = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    iVar10 = param_1[0x7d] + 1;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7d] = iVar10;
    iVar10 = param_1[0x7e] + 1;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7e] = iVar10;
    *(undefined2 *)((int)param_1 + 0x246) = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    *(undefined2 *)(param_1 + 0x95) = 0;
    FUN_ram_4809ebc2(param_1);
    if (*(char *)((int)param_1 + 0x189) == '\0') goto LAB_ram_480c9618;
  }
  uVar12 = param_1[99];
  uVar13 = (uint)*(ushort *)((int)param_1 + 0x25a);
  uVar17 = 0x3c;
  uVar16 = 1;
  if (*(char *)(param_2 + 1) == '\f') {
    uVar17 = 0xf0;
    uVar16 = 4;
  }
  cVar8 = *(char *)((int)param_1 + 0x276);
  uVar7 = *(ushort *)(param_2 + 0xa2);
  uVar14 = uVar12 & 0xffff;
  if (cVar8 == '\0') {
    uVar15 = FUN_ram_4809df80(param_1,uVar13,param_2,param_3);
    iVar11 = *param_1;
    iVar10 = iVar11 + 0xb18;
    FUN_ram_4ff3ec14(iVar10,0xffffffff);
    cVar6 = *(char *)(iVar11 + 0xb39);
    FUN_ram_4ff3ee10(iVar10);
    cVar8 = *(char *)((int)param_1 + 0x276);
    cVar3 = *(char *)(*param_1 + 0x36);
    if ((cVar6 == '\f') || (cVar6 == '\x0e')) {
      if ((cVar3 != '\0') || (*(char *)(*param_1 + 0x37) == '\0')) goto LAB_ram_480c9694;
    }
    else if (cVar3 != '\0') {
LAB_ram_480c9694:
      cVar6 = '\x04';
      goto LAB_ram_480c92b4;
    }
    if (0x31 < uVar13) {
      cVar6 = '\0';
      if (((((char)param_1[0xa0] != '\0') && (*(char *)((int)param_1 + 0x281) != '\0')) &&
          (*(char *)((int)param_1 + 0x282) != '\0')) &&
         (((uint)(param_3 - param_1[0xa2]) < 0x5dd && (cVar6 = '\x02', (char)param_1[0xa1] != '\0'))
         )) {
        cVar6 = *(char *)((int)param_1 + 0x283);
      }
      bVar5 = *(byte *)(param_2 + 0x10);
      goto LAB_ram_480c94dc;
    }
    bVar5 = *(byte *)(param_2 + 0x10);
    cVar6 = '\x03';
    if (uVar13 == 0) goto LAB_ram_480c92bc;
    if ((uVar14 - 1 & 0xffff) < 0x96) goto LAB_ram_480c92ce;
  }
  else {
    uVar15 = param_1[0x9e];
    cVar6 = (char)param_1[0x9f];
LAB_ram_480c92b4:
    bVar5 = *(byte *)(param_2 + 0x10);
    if (uVar13 == 0) {
LAB_ram_480c92bc:
      uVar13 = uVar14;
      if (0x95 < (uVar14 - 1 & 0xffff)) goto LAB_ram_480c94f4;
    }
    else {
LAB_ram_480c94dc:
      if ((0x95 < (uVar14 - 1 & 0xffff)) || (0x96 < uVar13)) goto LAB_ram_480c94f4;
    }
LAB_ram_480c92ce:
    if (uVar15 - 1 < 0x639c) {
      if (uVar7 < 100) {
        uVar7 = 100;
      }
      if (10000 < uVar7) {
        uVar7 = 10000;
      }
      if (bVar5 == 0) {
        bVar5 = 1;
      }
      if (10 < bVar5) {
        bVar5 = 10;
      }
      if (*(char *)((int)param_1 + 0x246) == '\0') {
        if (*(char *)((int)param_1 + 0x249) == '\0') {
          cVar3 = false;
        }
        else {
          cVar3 = *(ushort *)((int)param_1 + 0x23e) == uVar13;
        }
        bVar2 = false;
        if (cVar8 == '\0') {
          bVar1 = false;
        }
        else {
LAB_ram_480c932c:
          bVar1 = false;
          if (((((char)param_1[0x7b] != '\0') &&
               (bVar1 = false, (uint)(param_3 - param_1[0x70]) < 0xbb9)) &&
              (*(ushort *)(param_1 + 0x79) == uVar13)) &&
             (((param_1[0x71] == uVar15 && (*(ushort *)((int)param_1 + 0x1e6) == uVar7)) &&
              (((char)param_1[0x7a] == cVar6 &&
               ((*(byte *)((int)param_1 + 0x1e9) == uVar16 &&
                (*(byte *)((int)param_1 + 0x1ea) == uVar17)))))))) {
            bVar1 = *(byte *)((int)param_1 + 0x1eb) == bVar5;
          }
        }
LAB_ram_480c934e:
        *(char *)((int)param_1 + 0x242) = cVar6;
        *(short *)(param_1 + 0x8f) = (short)uVar12;
        *(short *)((int)param_1 + 0x23e) = (short)uVar13;
        param_1[0x83] = uVar15;
        *(ushort *)(param_1 + 0x90) = uVar7;
        *(byte *)((int)param_1 + 0x245) = bVar5;
        *(char *)((int)param_1 + 0x243) = (char)uVar16;
        *(char *)(param_1 + 0x91) = (char)uVar17;
        param_1[0x87] = param_3;
        iVar10 = param_1[0x7d] + 1;
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        param_1[0x7d] = iVar10;
        iVar10 = param_1[0x7e] + 1;
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        param_1[0x7e] = iVar10;
        param_1[0x94] = 0;
        *(undefined2 *)((int)param_1 + 0x246) = 1;
        if (bVar1) {
          uVar13 = param_1[0x72];
          *(undefined1 *)((int)param_1 + 0x252) = 1;
          param_1[0x86] = param_1[0x73];
          *(undefined1 *)((int)param_1 + 0x249) = *(undefined1 *)((int)param_1 + 0x1ed);
          *(undefined1 *)((int)param_1 + 0x24f) = *(undefined1 *)((int)param_1 + 0x1ee);
          *(undefined1 *)(param_1 + 0x7b) = 0;
          param_1[0x84] = uVar13;
          param_1[0x87] = param_1[0x74];
          *(undefined1 *)((int)param_1 + 0x24a) = *(undefined1 *)((int)param_1 + 0x1ef);
          *(char *)((int)param_1 + 0x24b) = (char)param_1[0x7c];
          *(undefined1 *)((int)param_1 + 0x253) = *(undefined1 *)((int)param_1 + 0x1f1);
          *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)((int)param_1 + 0x1f2);
          param_1[0x89] = param_1[0x75];
          param_1[0x8a] = param_1[0x76];
          param_1[0x8b] = param_1[0x77];
          param_1[0x88] = param_1[0x78];
        }
        else if (bVar2) {
          *(undefined1 *)((int)param_1 + 0x24f) = 1;
          *(undefined1 *)((int)param_1 + 0x249) = 1;
          *(undefined2 *)((int)param_1 + 0x24a) = 0x100;
          if ((((char)param_1[0x93] != '\0') && (*(char *)((int)param_1 + 0x24d) != '\0')) &&
             ((uint)(param_3 - param_1[0x80]) < 0x1f5)) {
LAB_ram_480c970e:
            FUN_ram_480565b2(param_1 + 0x70,param_3);
          }
LAB_ram_480c9714:
          uVar13 = param_1[0x84];
        }
        else if ((cVar3 == '\0') && (cVar8 == '\0')) {
          *(undefined1 *)((int)param_1 + 0x24f) = 0;
          *(undefined1 *)((int)param_1 + 0x249) = 0;
          *(undefined2 *)((int)param_1 + 0x24a) = 0;
          if (param_1[0x84] != uVar15) {
            param_1[0x84] = uVar15;
            if (iVar10 + 1 == 0) {
              param_1[0x7e] = 1;
            }
            else {
              param_1[0x7e] = iVar10 + 1;
            }
          }
          param_1[0x86] = param_3;
          if ((((char)param_1[0x93] != '\0') && (*(char *)((int)param_1 + 0x24d) != '\0')) &&
             ((uint)(param_3 - param_1[0x80]) < 0x1f5)) {
            if ((uVar15 < (uint)param_1[0x7f]) &&
               (((*(char *)((int)param_1 + 0x24e) == '\0' || (500 < (uint)(param_3 - param_1[0x82]))
                 ) || (uVar15 < (uint)param_1[0x81])))) {
              *(undefined1 *)((int)param_1 + 0x24f) = 1;
              *(undefined1 *)((int)param_1 + 0x24b) = 1;
              goto LAB_ram_480c970e;
            }
            goto LAB_ram_480c9714;
          }
          uVar13 = param_1[0x84];
          *(undefined1 *)((int)param_1 + 0x24b) = 1;
        }
        else {
          uVar13 = param_1[0x84];
          if ((uint)param_1[0x84] < uVar15) {
            param_1[0x84] = uVar15;
            uVar13 = uVar15;
            if (iVar10 + 1 == 0) {
              param_1[0x7e] = 1;
            }
            else {
              param_1[0x7e] = iVar10 + 1;
            }
          }
          *(bool *)((int)param_1 + 0x249) = uVar15 < uVar13;
          param_1[0x86] = param_3;
        }
        if (uVar14 * 100 <= uVar13) {
          if (((int)((ulonglong)uVar13 * (ulonglong)uVar16 >> 0x20) == 0) &&
             (uVar13 * uVar16 <= (uVar16 * 100 + uVar17) * uVar14)) goto LAB_ram_480c952a;
        }
      }
      else {
        uVar4 = (uint)*(ushort *)((int)param_1 + 0x23e);
        if (uVar4 != uVar13) {
          bVar2 = uVar13 < uVar4;
          if (cVar8 != '\0') {
            cVar3 = '\0';
            goto LAB_ram_480c932c;
          }
          if (uVar4 < uVar13) {
            *(ushort *)(param_1 + 0x79) = *(ushort *)((int)param_1 + 0x23e);
            *(undefined1 *)((int)param_1 + 0x1ed) = *(undefined1 *)((int)param_1 + 0x249);
            param_1[0x71] = param_1[0x83];
            param_1[0x72] = param_1[0x84];
            param_1[0x74] = param_1[0x87];
            param_1[0x76] = param_1[0x8a];
            param_1[0x77] = param_1[0x8b];
            param_1[0x78] = param_1[0x88];
            *(short *)((int)param_1 + 0x1e6) = (short)param_1[0x90];
            *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)((int)param_1 + 0x242);
            *(short *)((int)param_1 + 0x1ea) = (short)param_1[0x91];
            param_1[0x70] = param_3;
            param_1[0x73] = param_1[0x86];
            param_1[0x75] = param_1[0x89];
            *(undefined1 *)(param_1 + 0x7b) = 1;
            *(undefined1 *)((int)param_1 + 0x1ee) = *(undefined1 *)((int)param_1 + 0x24f);
            *(undefined1 *)((int)param_1 + 0x1f1) = *(undefined1 *)((int)param_1 + 0x253);
            cVar3 = '\0';
            *(undefined1 *)((int)param_1 + 0x1ef) = *(undefined1 *)((int)param_1 + 0x24a);
            *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((int)param_1 + 0x24b);
            *(short *)((int)param_1 + 0x1f2) = (short)param_1[0x94];
            bVar1 = false;
          }
          else {
            cVar3 = '\0';
            bVar1 = false;
          }
          goto LAB_ram_480c934e;
        }
        if ((((param_1[0x83] != uVar15) || (*(ushort *)(param_1 + 0x90) != uVar7)) ||
            (*(byte *)((int)param_1 + 0x245) != bVar5)) ||
           (((*(char *)((int)param_1 + 0x242) != cVar6 ||
             (uVar4 = (uint)*(byte *)((int)param_1 + 0x243), uVar16 != uVar4)) ||
            (*(byte *)(param_1 + 0x91) != uVar17)))) {
          cVar3 = *(char *)((int)param_1 + 0x249);
          bVar2 = false;
          if (cVar8 != '\0') goto LAB_ram_480c932c;
          bVar1 = false;
          goto LAB_ram_480c934e;
        }
        if (*(ushort *)(param_1 + 0x8f) == uVar14) goto LAB_ram_480c952a;
        if (cVar8 == '\0') {
          cVar3 = *(char *)((int)param_1 + 0x249);
          bVar2 = false;
          bVar1 = false;
          goto LAB_ram_480c934e;
        }
        *(short *)(param_1 + 0x8f) = (short)uVar12;
        iVar11 = param_1[0x7d] + 1;
        iVar10 = param_1[0x7e] + 1;
        if (iVar11 == 0) {
          iVar11 = 1;
        }
        param_1[0x7d] = iVar11;
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        uVar16 = param_1[0x84];
        param_1[0x7e] = iVar10;
        *(undefined1 *)((int)param_1 + 0x247) = 0;
        *(undefined1 *)((int)param_1 + 0x252) = 1;
        if (uVar14 * 100 <= uVar16) {
          if (((int)((ulonglong)uVar16 * (ulonglong)uVar4 >> 0x20) == 0) &&
             (uVar16 * uVar4 <= (uVar4 * 100 + uVar17) * uVar14)) goto LAB_ram_480c952a;
        }
      }
      *(undefined1 *)((int)param_1 + 0x24a) = 1;
      goto LAB_ram_480c952a;
    }
  }
LAB_ram_480c94f4:
  *(undefined2 *)((int)param_1 + 0x246) = 0;
  param_1[0x92] = 0;
  *(undefined2 *)((int)param_1 + 0x24e) = 0;
  param_1[0x94] = 0;
  *(undefined2 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  iVar10 = param_1[0x7d] + 1;
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  param_1[0x7d] = iVar10;
  iVar10 = param_1[0x7e] + 1;
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  param_1[0x7e] = iVar10;
LAB_ram_480c952a:
  FUN_ram_480c8fe6(param_1,param_3);
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  uVar9 = 0;
  *(char *)(param_1[1] + 0x804) = (char)uVar12;
  if (*(char *)((int)param_1 + 0x246) != '\0') {
    uVar9 = (undefined2)((uint)param_1[0x83] / 100);
  }
  iVar10 = param_1[2];
  *(undefined2 *)(param_1[1] + 0x80e) = uVar9;
  FUN_ram_4ff3ee10(iVar10);
  FUN_ram_480c7da6(param_1,param_2);
  return;
}


