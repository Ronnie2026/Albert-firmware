/* Firmware entry: 0x480619f0 */

void FUN_ram_480619f0(int *param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  int iVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uStack_238;
  uint uStack_220;
  bool bStack_210;
  int iStack_208;
  uint uStack_204;
  int iStack_200;
  int iStack_1f8;
  int iStack_1f0;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48061530(param_1,param_3);
  if (iVar5 == 0) {
    return;
  }
  if (param_2 == 0xffffffff) {
    FUN_ram_48060d98(param_1);
    *(undefined1 *)(param_1 + 0x280) = 3;
    return;
  }
  if (*(char *)((int)param_1 + 0x5d7) != '\0') {
    if ((((uint)param_1[0x154] < param_2) && (param_1[0x163] != 0)) &&
       (*(byte *)(param_1 + 0x22) != 0)) {
      piVar15 = param_1 + 0x24;
      uVar7 = 0;
      while ((param_1[0x163] != *piVar15 || ((char)piVar15[10] != '\0'))) {
        uVar7 = uVar7 + 1;
        if ((uVar7 == *(byte *)(param_1 + 0x22)) || (piVar15 = piVar15 + 0xe, uVar7 == 0x14))
        goto LAB_ram_48061a36;
      }
      iVar5 = *param_1;
      *(undefined1 *)(param_1 + uVar7 * 0xe + 0x2e) = 1;
      *param_1 = iVar5 + 1;
    }
LAB_ram_48061a36:
    *(undefined1 *)((int)param_1 + 0x5d7) = 0;
    param_1[0x163] = 0;
  }
  cVar23 = *(char *)((int)param_1 + 0x5d2);
  if (cVar23 == '\0') {
    cVar21 = (char)param_1[0x12];
    if (cVar21 == '\0') goto LAB_ram_48062074;
LAB_ram_48061e82:
    cVar12 = *(char *)((int)param_1 + 0x50d);
    if (cVar12 == '\0') {
      if (*(char *)((int)param_1 + 0x5dd) == '\0') {
LAB_ram_48062e8a:
        uVar7 = param_1[0x17];
      }
      else {
        uVar7 = param_1[0x17];
        param_1[0x14f] = param_3;
        *(undefined1 *)((int)param_1 + 0x5dd) = 0;
        param_1[0x150] = uVar7;
      }
LAB_ram_48061fb6:
      uVar14 = (uint)(param_3 - param_1[0x14f]) / 1000;
      uVar17 = param_1[0x150] + uVar14;
      if (uVar17 < uVar14) {
        uVar17 = 0xffffffff;
      }
      cVar23 = '\0';
LAB_ram_48061fda:
      if (uVar7 == uVar17) {
        cVar21 = *(char *)((int)param_1 + 0x5d3);
      }
      else {
        param_1[0x17] = uVar17;
        cVar21 = *(char *)((int)param_1 + 0x5d3);
        *param_1 = *param_1 + 1;
      }
      goto LAB_ram_4806207a;
    }
    uVar7 = param_1[0x144];
    if (param_2 < uVar7) goto LAB_ram_480622ae;
    uVar14 = param_1[0x145];
    if (uVar14 < 0x65920080) {
      if (cVar21 == '\0') {
LAB_ram_48062074:
        cVar21 = *(char *)((int)param_1 + 0x5d3);
        goto LAB_ram_48062078;
      }
      if (*(char *)((int)param_1 + 0x5dd) == '\0') {
        uVar7 = param_1[0x17];
      }
      else {
        uVar7 = param_1[0x17];
LAB_ram_48062748:
        param_1[0x150] = uVar7;
        param_1[0x14f] = param_3;
        *(undefined1 *)((int)param_1 + 0x5dd) = 0;
      }
LAB_ram_48061f28:
      if ((0x6592007f < uVar14) && (0x6592007f < param_4)) {
LAB_ram_48061f3a:
        if ((uVar14 < param_4) && ((uint)param_1[0x144] <= param_2)) {
          uVar18 = (param_4 - uVar14) * 300000;
          uVar19 = param_2 - param_1[0x144];
          uVar17 = uVar18 + 18000;
          uVar13 = (uint)((ulonglong)uVar19 * 0xe10 >> 0x20);
          uVar14 = (int)((ulonglong)(param_4 - uVar14) * 300000 >> 0x20) + (uint)(uVar17 < uVar18);
          if ((uVar13 <= uVar14) &&
             (((uVar13 != uVar14 || (uVar19 * 0xe10 <= uVar17)) && (uVar19 != 0)))) {
            uVar17 = param_1[4];
            uVar18 = param_1[0x18];
            uVar14 = uVar17 + uVar19;
            uVar19 = uVar19 + uVar18;
            param_1[4] = uVar14;
            param_1[5] = (uint)(uVar14 < uVar17) + param_1[5];
            param_1[0x18] = uVar19;
            param_1[0x19] = (uint)(uVar19 < uVar18) + param_1[0x19];
            *param_1 = *param_1 + 1;
            *(undefined1 *)(param_1 + 0x1e) = 1;
          }
        }
      }
      goto LAB_ram_48061fb6;
    }
    if (param_4 < 0x65920080) {
      if (cVar21 == '\0') goto LAB_ram_48062074;
      uVar7 = param_1[0x17];
      if (*(char *)((int)param_1 + 0x5dd) == '\0') goto LAB_ram_48061fb6;
      param_1[0x14f] = param_3;
      *(undefined1 *)((int)param_1 + 0x5dd) = 0;
      param_1[0x150] = uVar7;
LAB_ram_48061f22:
      if (cVar12 == '\0') goto LAB_ram_48061fb6;
      uVar14 = param_1[0x145];
      goto LAB_ram_48061f28;
    }
    if (uVar14 <= param_4) {
      if (param_4 != uVar14) {
        uVar18 = (param_4 - uVar14) * 300000;
        uVar17 = uVar18 + 18000;
        uVar19 = (uint)((ulonglong)(param_2 - uVar7) * 0xe10 >> 0x20);
        uVar14 = (int)((ulonglong)(param_4 - uVar14) * 300000 >> 0x20) + (uint)(uVar17 < uVar18);
        if ((uVar19 <= uVar14) && ((uVar19 != uVar14 || ((param_2 - uVar7) * 0xe10 <= uVar17))))
        goto LAB_ram_48061eee;
        goto LAB_ram_480622ae;
      }
      if (param_2 != uVar7) goto LAB_ram_480622ae;
LAB_ram_48061eee:
      if (cVar21 == '\0') goto LAB_ram_48062074;
      if (*(char *)((int)param_1 + 0x5dd) != '\0') {
        uVar14 = param_1[0x145];
        uVar7 = param_1[0x17];
        if (uVar14 < 0x65920080) goto LAB_ram_48062748;
        if (uVar14 < param_4) {
          cVar23 = '\0';
          goto LAB_ram_48062054;
        }
        param_1[0x150] = uVar7;
        param_1[0x14f] = param_3;
        *(undefined1 *)((int)param_1 + 0x5dd) = 0;
        goto LAB_ram_48061f22;
      }
      uVar14 = param_1[0x145];
      if (uVar14 < 0x65920080) goto LAB_ram_48062e8a;
      uVar7 = param_1[0x17];
      goto LAB_ram_48061f3a;
    }
LAB_ram_480622ae:
    FUN_ram_48060d98(param_1);
    param_1[0x14b] = param_3;
    param_1[0x157] = 0;
    param_1[0x156] = 0;
    param_1[0x155] = 0;
    param_1[0x16a] = 0;
    param_1[0x16b] = 0;
    param_1[0x168] = 0;
    param_1[0x169] = 0;
    param_1[0x166] = 0;
    param_1[0x167] = 0;
    *(undefined1 *)((int)param_1 + 0x5d1) = 1;
    if (*(char *)((int)param_1 + 0x5d3) != '\0') {
      uVar16 = (ushort)*(byte *)(param_1 + 0x175);
      iVar5 = 0;
      if ((uVar16 == 0) || (iVar5 = 1, (uint)(param_3 - param_1[0x151]) < 0x5dd))
      goto LAB_ram_48062306;
    }
LAB_ram_48062302:
    uVar16 = 0;
    iVar5 = 0;
LAB_ram_48062306:
    *(ushort *)(param_1 + 0x176) = uVar16 | uVar16 << 8;
    param_1[0x162] = iVar5;
    param_1[0x172] = 0;
    param_1[0x173] = 0;
    param_1[0x170] = 0;
    param_1[0x171] = 0;
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    param_1[0x16c] = 0;
    param_1[0x16d] = 0;
    *(undefined1 *)(param_1 + 0x280) = 3;
    return;
  }
  if (param_2 < (uint)param_1[0x14c]) {
LAB_ram_48061ffc:
    FUN_ram_48060d98(param_1);
    *(undefined1 *)(param_1 + 0x280) = 3;
    if ((*(char *)((int)param_1 + 0x5d2) == '\0') && (cVar21 = (char)param_1[0x12], cVar21 != '\0'))
    {
      if (cVar23 == '\0') goto LAB_ram_48061e82;
      cVar21 = *(char *)((int)param_1 + 0x5dd);
      if (cVar21 == '\0') {
        uVar7 = (uint)(param_3 - param_1[0x14f]) / 1000;
        uVar17 = param_1[0x150] + uVar7;
        if (uVar17 < uVar7) {
          uVar17 = 0xffffffff;
        }
        uVar7 = param_1[0x17];
      }
      else {
        uVar7 = param_1[0x17];
        cVar23 = *(char *)((int)param_1 + 0x50d);
        uVar17 = uVar7;
        if (((cVar23 == '\0') || (uVar14 = param_1[0x145], uVar14 < 0x65920080)) ||
           (param_4 < 0x65920080)) {
          param_1[0x150] = uVar7;
          param_1[0x14f] = param_3;
          *(undefined1 *)((int)param_1 + 0x5dd) = 0;
          cVar23 = cVar21;
        }
        else {
          bVar1 = false;
          cVar12 = cVar23;
          if (uVar14 < param_4) {
LAB_ram_48062054:
            uVar17 = (param_4 - uVar14) + uVar7;
            bVar1 = uVar17 < uVar7;
          }
          if (bVar1) {
            uVar17 = 0xffffffff;
          }
          param_1[0x150] = uVar17;
          param_1[0x14f] = param_3;
          *(undefined1 *)((int)param_1 + 0x5dd) = 0;
          if (cVar23 == '\0') goto LAB_ram_48061f22;
        }
      }
      goto LAB_ram_48061fda;
    }
    cVar21 = *(char *)((int)param_1 + 0x5d3);
LAB_ram_4806207a:
    if ((((*(char *)((int)param_1 + 0x5d9) == '\0') || (cVar21 == '\0')) ||
        (uVar16 = (ushort)*(byte *)(param_1 + 0x175), uVar16 == 0)) ||
       (((0x5dc < (uint)(param_3 - param_1[0x151]) || (param_1[0x162] != 1)) ||
        ((char)param_1[0x176] == '\0')))) {
      param_1[0x15c] = 0;
      param_1[0x15d] = 0;
      param_1[0x15a] = 0;
      param_1[0x15b] = 0;
      param_1[0x158] = 0;
      param_1[0x159] = 0;
      if (cVar23 != '\0') {
        param_1[0x14b] = param_3;
        param_1[0x157] = 0;
        param_1[0x156] = 0;
        param_1[0x155] = 0;
        param_1[0x16a] = 0;
        param_1[0x16b] = 0;
        param_1[0x168] = 0;
        param_1[0x169] = 0;
        param_1[0x166] = 0;
        param_1[0x167] = 0;
        *(undefined1 *)((int)param_1 + 0x5d1) = 1;
        if (cVar21 == '\0') goto LAB_ram_48062302;
        uVar16 = (ushort)*(byte *)(param_1 + 0x175);
        goto LAB_ram_48062232;
      }
    }
    else if (cVar23 != '\0') {
      param_1[0x14b] = param_3;
      *(undefined1 *)((int)param_1 + 0x5d1) = 1;
      param_1[0x157] = 0;
      param_1[0x156] = 0;
      param_1[0x155] = 0;
      param_1[0x16a] = 0;
      param_1[0x16b] = 0;
      param_1[0x168] = 0;
      param_1[0x169] = 0;
      param_1[0x166] = 0;
      param_1[0x167] = 0;
LAB_ram_48062232:
      if ((uVar16 != 0) && ((uint)(param_3 - param_1[0x151]) < 0x5dd)) {
        iVar5 = 1;
        goto LAB_ram_48062306;
      }
      goto LAB_ram_48062302;
    }
    uVar17 = (uint)*(byte *)(param_1 + 0x12);
  }
  else {
    iVar5 = param_1[0x14d];
    uVar19 = param_3 - iVar5;
    uVar18 = param_2 - param_1[0x14c];
    uVar14 = uVar19 * 300 + 18000;
    uVar7 = (uint)((ulonglong)uVar18 * 0xe10 >> 0x20);
    uVar17 = (uint)(uVar14 < uVar19 * 300) + (int)((ulonglong)uVar19 * 300 >> 0x20);
    if ((uVar17 < uVar7) || ((uVar7 == uVar17 && (uVar14 < uVar18 * 0xe10)))) goto LAB_ram_48061ffc;
    if (0x9c4 < uVar19) {
      cVar23 = '\0';
      goto LAB_ram_48061ffc;
    }
    if (uVar19 == 0) {
LAB_ram_48062540:
      cVar21 = *(char *)((int)param_1 + 0x5d3);
LAB_ram_48062078:
      cVar23 = '\0';
      goto LAB_ram_4806207a;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x12);
    if (((*(char *)((int)param_1 + 0x5d5) == '\0') || (0x5dc < (uint)(param_3 - param_1[0x152]))) ||
       ((*(char *)((int)param_1 + 0x5da) - 2U & 0xfd) != 0)) {
      if (uVar18 == 0) goto LAB_ram_4806255e;
      if (uVar7 != 0) goto LAB_ram_48061ae2;
      goto LAB_ram_48062540;
    }
    if (uVar18 == 0) {
LAB_ram_4806255e:
      if (uVar7 == 0) goto LAB_ram_48062540;
      cVar21 = *(char *)((int)param_1 + 0x5d3);
      uVar14 = 0;
      if (*(char *)((int)param_1 + 0x5dd) == '\0') goto LAB_ram_48061d60;
      goto LAB_ram_48062078;
    }
    if (uVar7 == 0) {
      iVar25 = param_1[1] + 1;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *(undefined2 *)(param_1 + 0x1e) = 0;
      *(undefined1 *)((int)param_1 + 0x7a) = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x14] = param_1[1];
      param_1[1] = iVar25;
      *(undefined1 *)(param_1 + 0x12) = 1;
      if (iVar25 == 0) {
        param_1[1] = 1;
        *(undefined1 *)(param_1 + 0x143) = 1;
      }
      param_1[0x14f] = iVar5;
      param_1[0x150] = 0;
      *(undefined1 *)((int)param_1 + 0x5dd) = 0;
      param_1[0x15] = param_1[0x14e];
      if (((char)param_1[0x174] == '\0') || (uVar14 = param_1[0x160] - iVar5, 0x240c8400 < uVar14))
      {
LAB_ram_480625e6:
        iVar11 = 0;
        iVar25 = 0;
        uVar14 = 0;
        iVar22 = 0;
        uVar6 = 0;
      }
      else {
        uVar17 = param_1[0x15e];
        if ((param_1[0x15f] == 0) && (uVar17 < uVar14)) goto LAB_ram_480625e6;
        uVar14 = uVar17 - uVar14;
        iVar22 = param_1[0x15f] - (uint)(uVar17 < uVar14);
        iVar25 = param_1[0x161];
        uVar6 = 1;
        iVar11 = iVar5;
      }
      *(undefined1 *)(param_1 + 0x17c) = uVar6;
      *(char *)((int)param_1 + 0x5e1) = (char)(uVar14 >> 8);
      *(char *)(param_1 + 0x178) = (char)uVar14;
      *(char *)((int)param_1 + 0x5e2) = (char)(uVar14 >> 0x10);
      *(char *)(param_1 + 0x179) = (char)iVar22;
      *(char *)((int)param_1 + 0x5e3) = (char)(uVar14 >> 0x18);
      *(char *)((int)param_1 + 0x5e5) = (char)((uint)iVar22 >> 8);
      *(char *)(param_1 + 0x17a) = (char)iVar25;
      *(char *)((int)param_1 + 0x5e6) = (char)((uint)iVar22 >> 0x10);
      *(char *)((int)param_1 + 0x5e7) = (char)((uint)iVar22 >> 0x18);
      *(char *)((int)param_1 + 0x5e9) = (char)((uint)iVar25 >> 8);
      *(char *)(param_1 + 0x17b) = (char)iVar11;
      *(undefined1 *)((int)param_1 + 0x5f1) = 0;
      *(char *)((int)param_1 + 0x5ea) = (char)((uint)iVar25 >> 0x10);
      *(char *)((int)param_1 + 0x5eb) = (char)((uint)iVar25 >> 0x18);
      *(char *)((int)param_1 + 0x5ed) = (char)((uint)iVar11 >> 8);
      *(char *)((int)param_1 + 0x5ee) = (char)((uint)iVar11 >> 0x10);
      *(char *)((int)param_1 + 0x5ef) = (char)((uint)iVar11 >> 0x18);
      if ((param_1[2] == 0) && (*(char *)((int)param_1 + 0x5db) == '\0')) {
        param_1[2] = param_1[0x14e];
        FUN_ram_4ff45158(param_1 + 0x17e,param_1 + 0x178,0x12);
      }
      *(undefined1 *)((int)param_1 + 0x5db) = 1;
    }
LAB_ram_48061ae2:
    uVar13 = param_1[0x157];
    uVar14 = uVar18;
    uVar17 = uVar18;
    if (param_1[0x155] == uVar19) {
      if (param_1[0x156] == 0) {
        uVar20 = param_1[0x162];
        if (uVar19 == uVar13) {
          iStack_208 = param_1[0x166];
          uStack_204 = param_1[0x167];
          iVar25 = __gtdf2(iStack_208,uStack_204,0,0);
          bStack_210 = false;
          uStack_220 = 0;
          if (0 < iVar25) goto LAB_ram_4806282a;
        }
        else {
          bStack_210 = false;
          uStack_220 = 0;
        }
        goto LAB_ram_48061b04;
      }
      if (param_1[0x156] != uVar19) goto LAB_ram_48061aee;
      uVar20 = param_1[0x162];
      uStack_220 = uVar18;
      if (uVar20 != 1) {
        if (uVar19 == uVar13) {
          iStack_208 = param_1[0x166];
          uStack_204 = param_1[0x167];
          iVar25 = __gtdf2(iStack_208,uStack_204,0,0);
          if (0 < iVar25) {
            iVar25 = param_1[0x16e];
            uVar19 = param_1[0x16f];
            cVar21 = *(char *)((int)param_1 + 0x5d9);
            iVar22 = __gtdf2(iVar25,uVar19,0,0);
            if (0 < iVar22) {
              iVar22 = __unorddf2(iVar25,uVar19 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
              if ((iVar22 == 0) &&
                 (iVar22 = __gtdf2(iVar25,uVar19 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
                 iVar22 < 1)) {
                iVar22 = __unorddf2(iStack_208,uStack_204 & 0x7fffffff,DAT_ram_481f4cb8,
                                    DAT_ram_481f4cbc);
                if ((iVar22 == 0) &&
                   (iVar22 = __gtdf2(iStack_208,uStack_204 & 0x7fffffff,DAT_ram_481f4cb8,
                                     DAT_ram_481f4cbc), iVar22 < 1)) {
                  bStack_210 = false;
                  goto LAB_ram_480628f6;
                }
              }
            }
            bStack_210 = false;
LAB_ram_4806300c:
            uVar13 = 0;
            goto LAB_ram_4806297a;
          }
        }
        bStack_210 = false;
        goto LAB_ram_48061b04;
      }
      cVar12 = *(char *)((int)param_1 + 0x5d9);
      bStack_210 = false;
      uVar19 = 0;
      uVar13 = uVar18;
LAB_ram_48061b16:
      if (cVar12 != '\0') goto LAB_ram_480625b8;
      cVar21 = *(char *)((int)param_1 + 0x5d3);
      bVar1 = false;
    }
    else {
LAB_ram_48061aee:
      if (uVar19 != uVar13) {
LAB_ram_48061af2:
        uVar20 = param_1[0x162];
        bStack_210 = uVar18 != 0;
        uStack_220 = 0;
        uVar17 = 0;
LAB_ram_48061b04:
        cVar12 = *(char *)((int)param_1 + 0x5d9);
        uVar19 = 0;
        uVar14 = 0;
        uVar13 = 0;
        goto LAB_ram_48061b16;
      }
      iStack_208 = param_1[0x166];
      uStack_204 = param_1[0x167];
      iVar25 = __gtdf2(iStack_208,uStack_204,0,0);
      if (iVar25 < 1) goto LAB_ram_48061af2;
      uVar28 = __floatunsidf(uVar18);
      uVar9 = (undefined4)((ulonglong)uVar28 >> 0x20);
      uVar29 = __muldf3((int)uVar28,uVar9,param_1[0x168],param_1[0x169]);
      __divdf3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),iStack_208,uStack_204);
      uVar29 = FUN_ram_481961d2();
      iVar25 = (int)((ulonglong)uVar29 >> 0x20);
      uVar19 = (uint)uVar29;
      if ((iVar25 == 0) && (uVar19 < uVar18)) {
        uVar17 = uVar19;
      }
      uVar28 = __muldf3((int)uVar28,uVar9,param_1[0x16a],param_1[0x16b]);
      __divdf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iStack_208,uStack_204);
      uVar28 = FUN_ram_481961d2();
      if (((int)((ulonglong)uVar28 >> 0x20) != 0) ||
         (uStack_220 = (uint)uVar28, uVar17 < (uint)uVar28)) {
        uStack_220 = uVar17;
      }
      bStack_210 = true;
      if ((iVar25 != 0) || (uVar18 <= uVar19)) {
        bStack_210 = false;
      }
      uVar20 = param_1[0x162];
LAB_ram_4806282a:
      cVar21 = *(char *)((int)param_1 + 0x5d9);
      cVar12 = cVar21;
      if (cVar21 == '\0') {
        iVar25 = param_1[0x16e];
        uVar19 = param_1[0x16f];
        iVar22 = __gtdf2(iVar25,uVar19,0,0);
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        if (((iVar22 < 1) ||
            (iVar22 = __unorddf2(iVar25,uVar19,DAT_ram_481f4cb8,DAT_ram_481f4cbc), iVar22 != 0)) ||
           (iVar22 = __gtdf2(iVar25,uVar19,uVar9,uVar2), 0 < iVar22)) {
          uVar13 = 0;
        }
        else {
          iVar22 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
          if ((iVar22 == 0) && (iVar22 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2), iVar22 < 1)) {
LAB_ram_480628f6:
            uVar28 = __floatunsidf(uVar18);
            uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iVar25,uVar19);
            uVar28 = __divdf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iStack_208,uStack_204);
            uVar9 = (undefined4)((ulonglong)uVar28 >> 0x20);
            iVar25 = __gtdf2((int)uVar28,uVar9,0,0);
            if (iVar25 < 1) goto LAB_ram_4806300c;
            __adddf3((int)uVar28,uVar9,DAT_ram_481f4ce8,DAT_ram_481f4cec);
            FUN_ram_48196062();
            uVar28 = FUN_ram_48195bce();
            if (((int)((ulonglong)uVar28 >> 0x20) != 0) ||
               (uVar13 = (uint)uVar28, uVar18 < (uint)uVar28)) {
              uVar13 = uVar18;
            }
LAB_ram_4806297a:
            cVar12 = cVar21;
            if (cVar21 != '\0') goto LAB_ram_48062cfe;
          }
          else {
            uVar13 = 0;
            iStack_208 = 0;
            uStack_204 = 0x7ff00000;
          }
        }
        iStack_1f8 = param_1[0x170];
        iStack_200 = param_1[0x171];
        iVar25 = __gtdf2(iStack_1f8,iStack_200,0,0);
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        if (((iVar25 < 1) ||
            (iVar25 = __unorddf2(iStack_1f8,iStack_200,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
            iVar25 != 0)) || (iVar25 = __gtdf2(iStack_1f8,iStack_200,uVar9,uVar2), 0 < iVar25)) {
LAB_ram_48062e10:
          uVar19 = 0;
        }
        else {
          iVar25 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
          if (iVar25 != 0) {
LAB_ram_48062e08:
            iStack_208 = 0;
            uStack_204 = 0x7ff00000;
            goto LAB_ram_48062e10;
          }
          iVar25 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2);
          cVar21 = '\0';
          if (0 < iVar25) goto LAB_ram_48062e08;
LAB_ram_48062a22:
          uVar28 = __floatunsidf(uVar18);
          uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iStack_1f8,iStack_200);
          uVar28 = __divdf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iStack_208,uStack_204);
          uVar9 = (undefined4)((ulonglong)uVar28 >> 0x20);
          iVar25 = __gtdf2((int)uVar28,uVar9,0,0);
          if (iVar25 < 1) {
            uVar19 = 0;
          }
          else {
            __adddf3((int)uVar28,uVar9,DAT_ram_481f4ce8,DAT_ram_481f4cec);
            FUN_ram_48196062();
            uVar28 = FUN_ram_48195bce();
            if (((int)((ulonglong)uVar28 >> 0x20) != 0) ||
               (uVar19 = (uint)uVar28, uVar18 < (uint)uVar28)) {
              uVar19 = uVar18;
            }
          }
          bVar1 = cVar21 != '\0';
          cVar21 = cVar12;
          if (bVar1) goto LAB_ram_48062ab0;
        }
        iStack_1f0 = param_1[0x172];
        iVar22 = param_1[0x173];
        iVar25 = __gtdf2(iStack_1f0,iVar22,0,0);
        if (0 < iVar25) goto LAB_ram_48062adc;
LAB_ram_48062e3e:
        uVar14 = 0;
        goto LAB_ram_48061b16;
      }
      if (uVar20 == 1) {
        iVar25 = param_1[0x16c];
        uVar19 = param_1[0x16d];
        iVar22 = __gtdf2(iVar25,uVar19,0,0);
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        if (0 < iVar22) {
          iVar22 = __unorddf2(iVar25,uVar19,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
          if ((iVar22 != 0) || (iVar22 = __gtdf2(iVar25,uVar19,uVar9,uVar2), 0 < iVar22))
          goto LAB_ram_48062e90;
          iVar22 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
          if (iVar22 == 0) {
            iVar22 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2);
            goto joined_r0x48062cee;
          }
          goto LAB_ram_48062cf2;
        }
        iStack_1f8 = param_1[0x170];
        iStack_200 = param_1[0x171];
        iVar25 = __gtdf2(iStack_1f8,iStack_200,0,0);
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        if (((0 < iVar25) &&
            (iVar25 = __unorddf2(iStack_1f8,iStack_200,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
            iVar25 == 0)) && (iVar25 = __gtdf2(iStack_1f8,iStack_200,uVar9,uVar2), iVar25 < 1)) {
          iVar25 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
          if ((iVar25 == 0) && (iVar25 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2), iVar25 < 1)) {
            uVar13 = 0;
            goto LAB_ram_48062a22;
          }
          uVar13 = 0;
          goto LAB_ram_48062dfa;
        }
        uVar13 = 0;
        uVar19 = 0;
LAB_ram_48062ab0:
        iStack_1f0 = param_1[0x16c];
        iVar22 = param_1[0x16d];
        cVar12 = cVar21;
      }
      else {
        iVar25 = param_1[0x16e];
        uVar19 = param_1[0x16f];
        iVar22 = __gtdf2(iVar25,uVar19,0,0);
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        if (((iVar22 < 1) ||
            (iVar22 = __unorddf2(iVar25,uVar19,DAT_ram_481f4cb8,DAT_ram_481f4cbc), iVar22 != 0)) ||
           (iVar22 = __gtdf2(iVar25,uVar19,uVar9,uVar2), 0 < iVar22)) {
LAB_ram_48062e90:
          uVar13 = 0;
        }
        else {
          iVar22 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
          if (iVar22 == 0) {
            iVar22 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2);
joined_r0x48062cee:
            if (iVar22 < 1) goto LAB_ram_480628f6;
          }
LAB_ram_48062cf2:
          uVar13 = 0;
          iStack_208 = 0;
          uStack_204 = 0x7ff00000;
        }
LAB_ram_48062cfe:
        cVar21 = cVar12;
        if (uVar20 < 2) {
          iStack_1f8 = param_1[0x170];
          iStack_200 = param_1[0x171];
          iVar25 = __gtdf2(iStack_1f8,iStack_200,0,0);
          uVar2 = DAT_ram_481f4cbc;
          uVar9 = DAT_ram_481f4cb8;
          if (((0 < iVar25) &&
              (iVar25 = __unorddf2(iStack_1f8,iStack_200,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
              iVar25 == 0)) && (iVar25 = __gtdf2(iStack_1f8,iStack_200,uVar9,uVar2), iVar25 < 1)) {
            iVar25 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
            if (iVar25 == 0) {
              iVar25 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2);
joined_r0x48062ffc:
              cVar21 = cVar23;
              if (iVar25 < 1) goto LAB_ram_48062a22;
            }
LAB_ram_48062dfa:
            iStack_208 = 0;
            uStack_204 = 0x7ff00000;
            cVar21 = cVar12;
          }
LAB_ram_48062e02:
          uVar19 = 0;
          goto LAB_ram_48062ab0;
        }
        iStack_1f0 = param_1[0x16c];
        iVar26 = param_1[0x170];
        iVar11 = param_1[0x171];
        iVar22 = param_1[0x16d];
        iVar25 = __gtdf2(iStack_1f0,iVar22,iVar26,iVar11);
        iStack_200 = iVar22;
        iStack_1f8 = iStack_1f0;
        if (iVar25 < 1) {
          iStack_200 = iVar11;
          iStack_1f8 = iVar26;
        }
        iVar25 = __gtdf2(iStack_1f8,iStack_200,0,0);
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        uVar19 = 0;
        if (0 < iVar25) {
          iVar25 = __unorddf2(iStack_1f8,iStack_200,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
          if ((iVar25 == 0) && (iVar25 = __gtdf2(iStack_1f8,iStack_200,uVar9,uVar2), iVar25 < 1)) {
            iVar25 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2);
            if (iVar25 == 0) {
              iVar25 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2);
              goto joined_r0x48062ffc;
            }
            goto LAB_ram_48062dfa;
          }
          goto LAB_ram_48062e02;
        }
      }
      iVar25 = __gtdf2(iStack_1f0,iVar22,0,0);
      if (0 < iVar25) {
LAB_ram_48062adc:
        uVar2 = DAT_ram_481f4cbc;
        uVar9 = DAT_ram_481f4cb8;
        iVar25 = __unorddf2(iStack_1f0,iVar22,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
        if ((((iVar25 == 0) && (iVar25 = __gtdf2(iStack_1f0,iVar22,uVar9,uVar2), iVar25 < 1)) &&
            (iVar25 = __unorddf2(iStack_208,uStack_204,uVar9,uVar2), iVar25 == 0)) &&
           (iVar25 = __gtdf2(iStack_208,uStack_204,uVar9,uVar2), iVar25 < 1)) {
          uVar28 = __floatunsidf(uVar18);
          uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iStack_1f0,iVar22);
          uVar28 = __divdf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),iStack_208,uStack_204);
          uVar9 = (undefined4)((ulonglong)uVar28 >> 0x20);
          iVar25 = __gtdf2((int)uVar28,uVar9,0,0);
          if (0 < iVar25) {
            __adddf3((int)uVar28,uVar9,DAT_ram_481f4ce8,DAT_ram_481f4cec);
            FUN_ram_48196062();
            uVar28 = FUN_ram_48195bce();
            if (((int)((ulonglong)uVar28 >> 0x20) == 0) && ((uint)uVar28 <= uVar18)) {
              uVar14 = (uint)uVar28;
            }
            goto LAB_ram_48061b16;
          }
        }
        goto LAB_ram_48062e3e;
      }
      uVar14 = 0;
LAB_ram_480625b8:
      cVar21 = *(char *)((int)param_1 + 0x5d3);
      bVar1 = false;
      if ((cVar21 != '\0') && (bVar1 = false, (char)param_1[0x175] != '\0')) {
        bVar1 = (uint)(param_3 - param_1[0x151]) < 0x5dd;
      }
    }
    uStack_238 = 0;
    iVar25 = 0;
    uVar24 = (uint)*(byte *)(param_1 + 0x176);
    uVar27 = param_1[0x13c];
    uVar10 = param_1[0x13d];
    if (uVar24 == 0) {
      uVar4 = uVar19;
      if (uVar19 < uVar13) {
        uVar4 = uVar13;
      }
      if ((uVar10 != 0) || (uVar3 = 0, uVar4 < uVar27)) {
        uVar3 = uVar10;
        uVar4 = uVar27;
      }
      param_1[0x13c] = uVar4;
      param_1[0x13d] = uVar3;
      if (!bVar1) {
        iVar22 = param_1[0x13f];
        param_1[0x158] = 0;
        param_1[0x159] = 0;
        uVar10 = param_1[0x13e];
        if ((iVar22 == 0) && (uVar10 < uVar19)) {
          iVar22 = 0;
          uVar10 = uVar19;
        }
        if ((iVar22 == 0) && (uVar10 < uVar13)) {
          iVar22 = 0;
          uVar10 = uVar13;
        }
        param_1[0x13e] = uVar10;
        param_1[0x13f] = iVar22;
        param_1[0x15a] = 0;
        param_1[0x15b] = 0;
        uVar27 = param_1[0x20];
        uVar10 = param_1[0x21];
        if (uVar7 == 0) goto LAB_ram_48062758;
LAB_ram_48062724:
        uVar4 = param_1[0x15c];
        uVar3 = param_1[0x15d];
        uVar7 = 0;
LAB_ram_48062644:
        if ((uVar10 == 0) && (uVar27 < uVar19)) {
          uVar10 = 0;
          uVar27 = uVar19;
        }
        if ((uVar10 < uStack_238) || ((uStack_238 == uVar10 && (uVar27 < uVar13)))) {
          uVar27 = uVar13;
          uVar10 = uStack_238;
        }
        param_1[0x20] = uVar27;
        param_1[0x21] = uVar10;
        if (bVar1) goto LAB_ram_4806265c;
        goto LAB_ram_480626b4;
      }
      if (uVar20 == 0) {
        uVar10 = 0;
LAB_ram_4806259c:
        uVar4 = param_1[0x15a];
        iVar22 = param_1[0x15b];
        param_1[0x158] = uVar10;
        param_1[0x159] = 0;
        uVar10 = 0;
        uVar27 = uVar13;
        goto LAB_ram_48061b86;
      }
      uVar10 = uVar14;
      if (uVar20 != 1) goto LAB_ram_4806259c;
      param_1[0x158] = uVar14;
      param_1[0x159] = 0;
      uVar7 = param_1[0x13e];
      iVar22 = param_1[0x13f];
      if (uVar19 < uVar13) {
        uVar19 = uVar13;
      }
      if ((iVar22 == 0) && (uVar7 < uVar19)) {
        iVar22 = 0;
        uVar7 = uVar19;
      }
      uVar27 = param_1[0x20];
      uVar10 = param_1[0x21];
      param_1[0x13e] = uVar7;
      param_1[0x13f] = iVar22;
LAB_ram_48062f20:
      param_1[0x15a] = uVar14;
      param_1[0x15b] = 0;
LAB_ram_48062f28:
      if ((uVar10 == 0) && (uVar27 < uVar19)) {
        uVar10 = 0;
        uVar27 = uVar19;
      }
      param_1[0x20] = uVar27;
      param_1[0x21] = uVar10;
    }
    else {
      uVar4 = param_1[0x158];
      uVar3 = uVar4 + uVar13;
      uVar8 = (uint)(uVar3 < uVar4) + param_1[0x159];
      if ((uVar10 == 0) && (uVar27 < uVar19)) {
        uVar10 = 0;
        uVar27 = uVar19;
      }
      if ((uVar8 < uVar10) || ((uVar10 == uVar8 && (uVar3 < uVar27)))) {
        uVar3 = uVar27;
        uVar8 = uVar10;
      }
      if ((bVar1) && (uVar20 != 0)) {
        if (uVar20 == 1) {
          iVar11 = (uint)(uVar4 + uVar14 < uVar4) + param_1[0x159];
          uVar10 = uVar4 + uVar14;
        }
        else {
          iVar11 = 0;
          uVar10 = uVar14;
        }
      }
      else {
        uVar10 = 0;
        iVar11 = 0;
      }
      uVar4 = param_1[0x15a];
      iVar22 = param_1[0x15b];
      param_1[0x13c] = uVar3;
      param_1[0x158] = uVar10;
      param_1[0x13d] = uVar8;
      param_1[0x159] = iVar11;
      uVar10 = (uint)(uVar4 + uVar13 < uVar4) + iVar22;
      uVar27 = uVar4 + uVar13;
LAB_ram_48061b86:
      uVar3 = param_1[0x13f];
      uVar8 = param_1[0x13e];
      if ((uVar3 == 0) && (uVar8 < uVar19)) {
        uVar3 = 0;
        uVar8 = uVar19;
      }
      if ((uVar3 < uVar10) || ((uVar10 == uVar3 && (uVar8 < uVar27)))) {
        uVar8 = uVar27;
        uVar3 = uVar10;
      }
      uVar27 = param_1[0x20];
      uVar10 = param_1[0x21];
      param_1[0x13e] = uVar8;
      param_1[0x13f] = uVar3;
      if (bVar1) {
        if (uVar20 == 0) {
          param_1[0x15a] = 0;
          param_1[0x15b] = 0;
          if (uVar7 == 0) {
            if (uVar19 < uVar13) {
              uVar19 = uVar13;
            }
            if ((uVar10 != 0) || (uVar7 = 0, uVar19 < uVar27)) {
              uVar7 = uVar10;
              uVar19 = uVar27;
            }
            goto LAB_ram_480626ac;
          }
LAB_ram_48062628:
          if (uVar24 == 0) goto LAB_ram_48062724;
          uVar4 = param_1[0x15c];
          uVar3 = param_1[0x15d];
          uStack_238 = (uVar13 + uVar4 < uVar13) + uVar3;
          uVar13 = uVar13 + uVar4;
          uVar7 = uVar24;
          goto LAB_ram_48062644;
        }
        if (uVar20 != 1) {
          param_1[0x15a] = uVar14;
          param_1[0x15b] = 0;
          if (uVar7 == 0) {
            if (uVar19 < uVar13) {
              uVar19 = uVar13;
            }
            if ((uVar10 != 0) || (uVar7 = 0, uVar19 < uVar27)) {
              uVar7 = uVar10;
              uVar19 = uVar27;
            }
            param_1[0x20] = uVar19;
            param_1[0x21] = uVar7;
            goto LAB_ram_48061be8;
          }
          goto LAB_ram_48062628;
        }
        if (uVar24 == 0) {
          if (uVar19 < uVar13) {
            uVar19 = uVar13;
          }
          goto LAB_ram_48062f20;
        }
        param_1[0x15b] = (uint)(uVar4 + uVar14 < uVar4) + iVar22;
        param_1[0x15a] = uVar4 + uVar14;
        if (uVar7 == 0) {
          if (uVar19 < uVar13) {
            uVar19 = uVar13;
          }
          goto LAB_ram_48062f28;
        }
        uVar4 = param_1[0x15c];
        uVar3 = param_1[0x15d];
        uVar13 = uVar4 + uVar13;
        uVar24 = (uVar13 < uVar4) + uVar3;
        if ((uVar10 == 0) && (uVar27 < uVar19)) {
          uVar10 = 0;
          uVar27 = uVar19;
        }
        if ((uVar24 < uVar10) || ((uVar10 == uVar24 && (uVar13 < uVar27)))) {
          uVar13 = uVar27;
          uVar24 = uVar10;
        }
        param_1[0x20] = uVar13;
        param_1[0x21] = uVar24;
LAB_ram_4806265c:
        if (uVar20 != 0) {
          if (uVar20 == 1) {
            uVar19 = (-uVar7 & uVar4) + uVar14;
            iVar25 = (uint)(uVar19 < uVar14) + (-(uint)(uVar7 != 0) & uVar3);
            uVar14 = uVar19;
          }
          goto LAB_ram_48061be8;
        }
      }
      else {
        param_1[0x15a] = 0;
        param_1[0x15b] = 0;
        if (uVar7 != 0) goto LAB_ram_48062628;
LAB_ram_48062758:
        if (uVar19 < uVar13) {
          uVar19 = uVar13;
        }
        if ((uVar10 != 0) || (uVar7 = 0, uVar19 < uVar27)) {
          uVar7 = uVar10;
          uVar19 = uVar27;
        }
LAB_ram_480626ac:
        param_1[0x20] = uVar19;
        param_1[0x21] = uVar7;
      }
LAB_ram_480626b4:
      uVar14 = 0;
      iVar25 = 0;
    }
LAB_ram_48061be8:
    param_1[0x15c] = uVar14;
    param_1[0x15d] = iVar25;
    if ((char)param_1[0x177] == '\0') {
      param_1[10] = param_1[0x14e];
      if (((char)param_1[0x174] == '\0') || (uVar7 = param_1[0x160] - iVar5, 0x240c8400 < uVar7)) {
LAB_ram_480625f0:
        uVar6 = 0;
        iVar5 = 0;
        iVar25 = 0;
        uVar7 = 0;
        iVar22 = 0;
      }
      else {
        uVar14 = param_1[0x15e];
        if ((param_1[0x15f] == 0) && (uVar14 < uVar7)) goto LAB_ram_480625f0;
        uVar7 = uVar14 - uVar7;
        iVar22 = param_1[0x15f] - (uint)(uVar14 < uVar7);
        iVar25 = param_1[0x161];
        uVar6 = 1;
      }
      *(char *)(param_1 + 0x184) = (char)uVar7;
      *(undefined1 *)(param_1 + 0x188) = uVar6;
      *(char *)(param_1 + 0x185) = (char)iVar22;
      *(char *)((int)param_1 + 0x611) = (char)(uVar7 >> 8);
      *(char *)((int)param_1 + 0x612) = (char)(uVar7 >> 0x10);
      *(char *)((int)param_1 + 0x613) = (char)(uVar7 >> 0x18);
      *(char *)(param_1 + 0x186) = (char)iVar25;
      *(char *)((int)param_1 + 0x615) = (char)((uint)iVar22 >> 8);
      *(char *)((int)param_1 + 0x616) = (char)((uint)iVar22 >> 0x10);
      *(char *)((int)param_1 + 0x617) = (char)((uint)iVar22 >> 0x18);
      *(char *)((int)param_1 + 0x619) = (char)((uint)iVar25 >> 8);
      *(char *)(param_1 + 0x187) = (char)iVar5;
      *(undefined1 *)((int)param_1 + 0x621) = 0;
      *(char *)((int)param_1 + 0x61a) = (char)((uint)iVar25 >> 0x10);
      *(char *)((int)param_1 + 0x61b) = (char)((uint)iVar25 >> 0x18);
      *(char *)((int)param_1 + 0x61d) = (char)((uint)iVar5 >> 8);
      *(char *)((int)param_1 + 0x61e) = (char)((uint)iVar5 >> 0x10);
      *(char *)((int)param_1 + 0x61f) = (char)((uint)iVar5 >> 0x18);
      *(undefined1 *)(param_1 + 0x177) = 1;
    }
    uVar19 = param_1[4];
    uVar14 = uVar19 + uVar18;
    param_1[4] = uVar14;
    uVar7 = param_1[6] + uVar17;
    uVar20 = param_1[0x1c];
    param_1[7] = (uint)(uVar7 < (uint)param_1[6]) + param_1[7];
    uVar13 = param_1[8];
    uVar10 = param_1[0x1a];
    param_1[5] = (uint)(uVar14 < uVar19) + param_1[5];
    uVar27 = uVar20 + uStack_220;
    uVar19 = param_1[0x18];
    param_1[6] = uVar7;
    uStack_220 = uVar13 + uStack_220;
    uVar17 = uVar17 + uVar10;
    uVar18 = uVar18 + uVar19;
    uVar14 = (uint)*(byte *)(param_1 + 0x12);
    param_1[0x18] = uVar18;
    param_1[8] = uStack_220;
    param_1[9] = (uint)(uStack_220 < uVar13) + param_1[9];
    param_1[0x19] = (uint)(uVar18 < uVar19) + param_1[0x19];
    param_1[0x1a] = uVar17;
    param_1[0x1b] = (uint)(uVar17 < uVar10) + param_1[0x1b];
    param_1[0x1c] = uVar27;
    param_1[0x1d] = (uint)(uVar27 < uVar20) + param_1[0x1d];
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | bStack_210;
    *param_1 = *param_1 + 1;
    uVar17 = uVar14;
    if ((uVar14 != 0) &&
       (uVar17 = (uint)*(byte *)((int)param_1 + 0x5dd), uVar7 = uVar14, uVar17 == 0)) {
LAB_ram_48061d60:
      uVar17 = uVar7;
      uVar18 = (uint)(param_3 - param_1[0x14f]) / 1000;
      uVar7 = param_1[0x150] + uVar18;
      if (uVar7 < uVar18) {
        uVar7 = 0xffffffff;
      }
      if (uVar7 != param_1[0x17]) {
        param_1[0x17] = uVar7;
        *param_1 = *param_1 + 1;
      }
      if (uVar14 == 0) goto LAB_ram_48062078;
    }
  }
  param_1[0x14c] = param_2;
  param_1[0x14d] = param_3;
  param_1[0x14e] = param_4;
  if (((char)param_1[0x174] == '\0') || (uVar7 = param_1[0x160] - param_3, 0x240c8400 < uVar7)) {
LAB_ram_480620fa:
    uVar6 = 0;
    iVar25 = 0;
    uVar7 = 0;
    iVar22 = 0;
    iVar5 = 0;
  }
  else {
    uVar14 = param_1[0x15e];
    if ((param_1[0x15f] == 0) && (uVar14 < uVar7)) goto LAB_ram_480620fa;
    uVar7 = uVar14 - uVar7;
    iVar22 = param_1[0x15f] - (uint)(uVar14 < uVar7);
    iVar25 = param_1[0x161];
    uVar6 = 1;
    iVar5 = param_3;
  }
  *(char *)(param_1 + 0x18a) = (char)uVar7;
  *(char *)(param_1 + 0x18b) = (char)iVar22;
  *(char *)(param_1 + 0x18c) = (char)iVar25;
  *(char *)(param_1 + 0x18d) = (char)iVar5;
  *(undefined1 *)(param_1 + 0x18e) = uVar6;
  *(char *)((int)param_1 + 0x629) = (char)(uVar7 >> 8);
  *(char *)((int)param_1 + 0x62a) = (char)(uVar7 >> 0x10);
  *(char *)((int)param_1 + 0x62b) = (char)(uVar7 >> 0x18);
  *(undefined1 *)((int)param_1 + 0x639) = 0;
  *(char *)((int)param_1 + 0x62d) = (char)((uint)iVar22 >> 8);
  *(char *)((int)param_1 + 0x62e) = (char)((uint)iVar22 >> 0x10);
  *(char *)((int)param_1 + 0x62f) = (char)((uint)iVar22 >> 0x18);
  *(char *)((int)param_1 + 0x631) = (char)((uint)iVar25 >> 8);
  *(char *)((int)param_1 + 0x632) = (char)((uint)iVar25 >> 0x10);
  *(char *)((int)param_1 + 0x633) = (char)((uint)iVar25 >> 0x18);
  *(char *)((int)param_1 + 0x635) = (char)((uint)iVar5 >> 8);
  *(char *)((int)param_1 + 0x636) = (char)((uint)iVar5 >> 0x10);
  *(char *)((int)param_1 + 0x637) = (char)((uint)iVar5 >> 0x18);
  *(undefined1 *)((int)param_1 + 0x5d2) = 1;
  if (uVar17 != 0) {
    if (param_4 < 0x65920080) {
      param_4 = 0;
      if (*(char *)((int)param_1 + 0x50d) != '\0') {
LAB_ram_48061db4:
        if ((param_1[0x144] == param_2) && (param_1[0x145] == param_4)) goto LAB_ram_48061dd0;
      }
    }
    else if ((*(char *)((int)param_1 + 0x50d) != '\0') && (0x6592007f < (uint)param_1[0x145])) {
      if ((uint)param_1[0x145] <= param_4) goto LAB_ram_48061db4;
      param_4 = 0;
    }
    param_1[0x144] = param_2;
    param_1[0x145] = param_4;
    *param_1 = *param_1 + 1;
    *(undefined1 *)((int)param_1 + 0x50d) = 1;
  }
LAB_ram_48061dd0:
  param_1[0x14b] = param_3;
  param_1[0x157] = 0;
  param_1[0x156] = 0;
  param_1[0x155] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined1 *)((int)param_1 + 0x5d1) = 1;
  if (cVar21 != '\0') {
    uVar16 = (ushort)*(byte *)(param_1 + 0x175);
    iVar5 = 0;
    if ((uVar16 == 0) || (iVar5 = 1, (uint)(param_3 - param_1[0x151]) < 0x5dd))
    goto LAB_ram_48061e1e;
  }
  uVar16 = 0;
  iVar5 = 0;
LAB_ram_48061e1e:
  *(ushort *)(param_1 + 0x176) = uVar16 | uVar16 << 8;
  param_1[0x162] = iVar5;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined1 *)(param_1 + 0x280) = 1;
  return;
}


