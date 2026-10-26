/* Firmware entry: 0x480dda04 */

void FUN_ram_480dda04(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int *piVar13;
  char cVar14;
  ushort uVar15;
  uint *puVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  undefined1 uVar22;
  byte *pbVar23;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_16b;
  undefined1 uStack_125;
  undefined1 uStack_123;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar11 = param_2[1];
  bVar7 = param_3[1];
  if (bVar11 == bVar7) {
    if ((*param_3 == 0) || (param_3[0x98] == 0)) {
      FUN_ram_48025ba6();
      iVar8 = *param_1;
      iVar10 = (iVar8 + 0x7a15U & 3) << 3;
      param_1[0x38] = 2;
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      puVar16 = (uint *)(iVar8 + 0x7a15U & 0xfffffffc);
      uVar12 = *puVar16;
      *puVar16 = uVar12 & ~(0xff << iVar10);
      if (((int)uVar12 >> iVar10 & 0xffU) != 0) goto LAB_ram_480dda90;
      *(undefined1 *)((int)param_1 + 0x1e6) = 0;
    }
LAB_ram_480de160:
    bVar11 = 1;
    if (((param_2[2] == param_3[2]) &&
        (((*(uint *)(param_2 + 0x94) ^ *(uint *)(param_3 + 0x94)) & 0xff0000ff) == 0)) &&
       ((param_2[0x98] == param_3[0x98] &&
        (((*(uint *)(param_2 + 0x94) ^ *(uint *)(param_3 + 0x94)) & 0xffffff) >> 8 == 0)))) {
      bVar11 = *param_2 ^ *param_3;
    }
    if ((param_2[0x27] != param_3[0x27]) || (param_2[0x70] != param_3[0x70])) {
      if (param_2[0x65] == param_3[0x65]) {
        bVar7 = bVar11;
        if (param_3[0x69] == param_2[0x69]) {
          if (bVar11 == 0) goto LAB_ram_480ddca4;
          bVar11 = 0;
        }
        else if (bVar11 == 0) goto LAB_ram_480de18a;
        goto LAB_ram_480ddc4a;
      }
      if (bVar11 != 0) goto LAB_ram_480ddc46;
LAB_ram_480de18a:
      bVar11 = 1;
      goto LAB_ram_480ddca4;
    }
    bVar2 = param_2[0x2e];
    bVar3 = param_3[0x2e];
    bVar7 = bVar2 != bVar3;
    if ((param_2[0x65] != param_3[0x65]) || (param_2[0x69] != param_3[0x69])) {
      if (bVar11 != 0) goto LAB_ram_480ddc4a;
      if (bVar2 != bVar3) goto LAB_ram_480de18a;
      goto LAB_ram_480de1ce;
    }
    if (bVar11 != 0) {
      bVar11 = 0;
      goto LAB_ram_480ddc4a;
    }
    if (bVar2 != bVar3) goto LAB_ram_480ddca4;
  }
  else {
    if (((*param_3 == 0) || (param_3[0x98] == 0)) || ((char)param_1[0x39] != '\0')) {
      FUN_ram_48025ba6();
      iVar8 = *param_1;
      iVar10 = (iVar8 + 0x7a15U & 3) << 3;
      param_1[0x38] = 2;
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      puVar16 = (uint *)(iVar8 + 0x7a15U & 0xfffffffc);
      uVar12 = *puVar16;
      *puVar16 = uVar12 & ~(0xff << iVar10);
      if (((int)uVar12 >> iVar10 & 0xffU) == 0) {
        *(undefined1 *)((int)param_1 + 0x1e6) = 0;
      }
      else {
LAB_ram_480dda90:
        *(int *)(iVar8 + 0x7a48) = *(int *)(iVar8 + 0x7a48) + 1;
        iVar8 = *(int *)(iVar8 + 0x79cc);
        piVar13 = (int *)(iVar8 + 0x5c4);
        do {
          iVar10 = *piVar13 + 1;
          if (iVar10 == 0) {
            iVar10 = 1;
          }
          *piVar13 = iVar10;
          piVar13 = piVar13 + 0x2c;
        } while ((int *)(iVar8 + 0x7d4) != piVar13);
        *(undefined1 *)((int)param_1 + 0x1e6) = 0;
        if (bVar11 == bVar7) goto LAB_ram_480de160;
      }
    }
    pbVar23 = &DAT_ram_4ff47e44;
    do {
      iVar8 = *param_1;
      iVar17 = (uint)*pbVar23 * 0x28;
      iVar10 = iVar8 + iVar17;
      if (*(char *)(iVar10 + 0x9fa) != '\0') {
        *(undefined2 *)(iVar17 + iVar8 + 0x9fa) = 0;
        pbVar18 = (byte *)(iVar17 + 0x9d8 + iVar8);
        *(undefined1 *)(iVar10 + 0x9fd) = 2;
        *(undefined1 *)(iVar10 + 0x9fe) = 3;
        if ((*pbVar18 < 8) && (*(int *)(pbVar18 + 8) != 0 || *(int *)(pbVar18 + 0xc) != 0)) {
          iVar17 = (uint)*pbVar18 * 0x120;
          iVar10 = iVar8 + iVar17;
          if ((*(char *)(iVar10 + 0x70d6) != '\0') &&
             (((*(int *)(iVar10 + 0x70c8) == *(int *)(pbVar18 + 8) &&
               (*(int *)(iVar10 + 0x70cc) == *(int *)(pbVar18 + 0xc))) &&
              (*(char *)(iVar10 + 0x70d8) == '\0')))) {
            *(undefined1 *)(iVar10 + 0x70d7) = 0;
            *(undefined2 *)(iVar8 + iVar17 + 0x70d8) = 0x201;
            iVar10 = iVar17 + 0x3678 + iVar8 + 0x3a40;
            if ((*(int *)(iVar10 + 0x30) != 0 || *(int *)(iVar10 + 0x34) != 0) &&
               (uVar12 = (uint)*(byte *)(iVar10 + 0x29), uVar12 != 0xff)) {
              cVar14 = *(char *)(iVar10 + 0x28);
              if (cVar14 == '\x02') {
                iVar17 = 1;
              }
              else if (cVar14 == '\x04') {
                iVar17 = 2;
              }
              else {
                if (cVar14 != '\x01') goto LAB_ram_480ddc24;
                iVar17 = 0;
              }
              if (uVar12 < 0x18) {
                if (uVar12 < 0x10) {
                  iVar17 = iVar17 * 0x1228 + uVar12 * 0xe8;
                }
                else {
                  iVar17 = (uVar12 - 0x10) * 0x120;
                  iVar19 = iVar8 + iVar17;
                  if ((*(char *)(iVar19 + 0x70d6) == '\0') || (*(char *)(iVar19 + 0x70b8) != cVar14)
                     ) goto LAB_ram_480ddc24;
                  iVar17 = iVar17 + 14000;
                }
                iVar17 = iVar17 + iVar8 + 0x3a40;
                if (((*(int *)(iVar17 + 0xd8) == *(int *)(iVar10 + 0x30)) &&
                    (*(int *)(iVar17 + 0xdc) == *(int *)(iVar10 + 0x34))) &&
                   (*(char *)(iVar17 + 0xe6) == '\x01')) {
                  FUN_ram_4804691a();
                }
              }
            }
          }
        }
      }
LAB_ram_480ddc24:
      pbVar23 = pbVar23 + 1;
    } while (pbVar23 != (byte *)0x4ff47e47);
LAB_ram_480ddc46:
    bVar7 = 1;
    bVar11 = 1;
LAB_ram_480ddc4a:
    iVar8 = param_1[0x1c5] + 1;
    if (iVar8 == 0) {
      iVar8 = 1;
    }
    param_1[0x1c5] = iVar8;
    *(undefined1 *)(param_1 + 0x79) = 0;
    *(undefined1 *)((int)param_1 + 0x1e7) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
    param_1[0x7b] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    *(undefined1 *)(param_1 + 0x14b) = 0;
    param_1[0x7c] = 8;
    param_1[0x81] = 0x10000;
    if (bVar7 != 0) {
LAB_ram_480ddca4:
      iVar8 = param_1[0x1c6] + 1;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      param_1[0x1c6] = iVar8;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      *(undefined1 *)((int)param_1 + 0x28b) = 0;
      *(undefined1 *)(param_1 + 0xa3) = 0;
      *(undefined1 *)((int)param_1 + 0x28d) = 0;
      *(undefined1 *)((int)param_1 + 0x28e) = 0;
      *(undefined1 *)((int)param_1 + 0x28f) = 0;
      param_1[0xa4] = 0;
      param_1[0xa6] = 0;
      param_1[0xa7] = 0;
      param_1[0xa8] = 0;
      param_1[0xa9] = 0;
      param_1[0xab] = 0;
      param_1[0xac] = 0;
      *(undefined1 *)((int)param_1 + 0x52d) = 0;
      param_1[0xa5] = 8;
      param_1[0xaa] = 0x10000;
    }
    uStack_18c = 0;
    uStack_190 = 0;
    uStack_194 = 0x10000;
    local_198 = 0;
    uStack_19c = 0;
    uStack_1a0 = 0;
    uStack_1a4 = 0;
    uStack_1a8 = 8;
    local_1ac = 0;
    if (bVar11 != 0) {
LAB_ram_480de1ce:
      iVar8 = param_1[0x1c7] + 1;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      param_1[0x1c7] = iVar8;
      *(undefined1 *)(param_1 + 0x1d9) = 0;
      param_1[0x1da] = 0;
      param_1[0x1db] = 0;
      param_1[0x1dc] = 0;
      param_1[0x1dd] = 0;
      param_1[0x1de] = 0;
      param_1[0x1df] = 0;
      param_1[0x1e0] = 0;
      param_1[0x1e1] = 0;
      param_1[0x1e2] = 0;
      *(undefined1 *)(param_1 + 0x1e3) = 0;
      *(undefined1 *)((int)param_1 + 0x78d) = 0;
      *(undefined1 *)((int)param_1 + 0x78e) = 0;
      *(undefined1 *)((int)param_1 + 0x78f) = 0;
      *(undefined1 *)(param_1 + 0x1e4) = 0;
      *(undefined1 *)((int)param_1 + 0x791) = 0;
      *(undefined1 *)((int)param_1 + 0x792) = 0;
      *(undefined1 *)((int)param_1 + 0x793) = 0;
      *(undefined1 *)(param_1 + 0x1e5) = 0;
      *(undefined1 *)((int)param_1 + 0x795) = 0;
      *(undefined1 *)((int)param_1 + 0x796) = 0;
      *(undefined1 *)((int)param_1 + 0x797) = 0;
      *(undefined1 *)(param_1 + 0x1e6) = 0;
      *(undefined1 *)((int)param_1 + 0x799) = 0;
      *(undefined2 *)((int)param_1 + 0x52e) = 0;
    }
  }
  if (param_2[1] != param_3[1]) {
    *(undefined1 *)((int)param_1 + 0x285) = 0;
    FUN_ram_480dd0e4(param_1);
    memset(&local_1ac,0,0x44);
    uStack_1a8._0_3_ = CONCAT12(0xf,(undefined2)uStack_1a8);
    uStack_16b = 1;
    FUN_ram_4ff45158(param_1 + 0x19,&local_1ac,0x43);
    iVar8 = *param_1;
    *(undefined1 *)(param_1 + 5) = 0;
    piVar13 = (int *)(iVar8 + 0x5c4);
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined1 *)((int)param_1 + 0x112) = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0x100;
    do {
      iVar10 = *piVar13 + 1;
      if (iVar10 == 0) {
        iVar10 = 1;
      }
      *piVar13 = iVar10;
      piVar13 = piVar13 + 0x2c;
    } while ((int *)(iVar8 + 0x7d4) != piVar13);
    uStack_190 = 0xbb807d0;
    local_1ac = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    local_198 = 0;
    uStack_194 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    FUN_ram_4ff45158(param_1 + 0x84,&local_1ac,0x39);
    param_1[0x99] = 8;
    param_1[0xa5] = 8;
    param_1[0x9e] = 0x10000;
    param_1[0xaa] = 0x10000;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    *(undefined1 *)(param_1 + 0x97) = 0;
    param_1[0x98] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)((int)param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0xa3) = 0;
    *(undefined1 *)((int)param_1 + 0x28d) = 0;
    *(undefined1 *)((int)param_1 + 0x28e) = 0;
    *(undefined1 *)((int)param_1 + 0x28f) = 0;
    param_1[0xa4] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    *(undefined1 *)((int)param_1 + 0x2b5) = 0;
    param_1[99] = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined1 *)((int)param_1 + 0x192) = 0;
    param_1[0x66] = 8;
    param_1[0x6b] = 0x10000;
    param_1[0x7c] = 8;
    param_1[0x81] = 0x10000;
    param_1[0x65] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    *(undefined1 *)(param_1 + 0x79) = 0;
    *(undefined1 *)((int)param_1 + 0x1e7) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
    param_1[0x7b] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    memset(&local_1ac,0,0x16c);
    uStack_114 = 0xf000f00;
    uStack_1a0._0_2_ = CONCAT11(1,(undefined1)uStack_1a0);
    uStack_19c = CONCAT31(uStack_19c._1_3_,1);
    local_198 = 1;
    uStack_194 = CONCAT31(uStack_194._1_3_,1);
    piVar20 = &local_1ac;
    local_1ac = CONCAT22(0x2d,(undefined2)local_1ac);
    uStack_1a4 = 0x1010101;
    uStack_ec = 0xfffffc17;
    uStack_125 = 5;
    uStack_123 = 5;
    piVar13 = param_1 + 0xae;
    do {
      iVar19 = piVar20[1];
      iVar8 = piVar20[2];
      iVar10 = piVar20[3];
      iVar17 = piVar20[4];
      *piVar13 = *piVar20;
      piVar13[1] = iVar19;
      piVar13[2] = iVar8;
      piVar13[3] = iVar10;
      piVar13[4] = iVar17;
      piVar20 = piVar20 + 5;
      piVar13 = piVar13 + 5;
    } while (piVar20 != aiStack_44);
    *piVar13 = *piVar20;
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined1 *)(param_1 + 0x53) = 0;
  }
  if ((param_3[10] == 0) || (param_3[0xc] == 0)) {
    FUN_ram_480dd0e4(param_1);
    memset(&local_1ac,0,0x16c);
    uStack_114 = 0xf000f00;
    uStack_1a0._0_2_ = CONCAT11(1,(undefined1)uStack_1a0);
    uStack_19c = CONCAT31(uStack_19c._1_3_,1);
    local_198 = 1;
    uStack_194 = CONCAT31(uStack_194._1_3_,1);
    piVar20 = &local_1ac;
    local_1ac = CONCAT22(0x2d,(undefined2)local_1ac);
    uStack_1a4 = 0x1010101;
    uStack_ec = 0xfffffc17;
    uStack_125 = 5;
    uStack_123 = 5;
    piVar13 = param_1 + 0xae;
    do {
      iVar19 = piVar20[1];
      iVar8 = piVar20[2];
      iVar10 = piVar20[3];
      iVar17 = piVar20[4];
      *piVar13 = *piVar20;
      piVar13[1] = iVar19;
      piVar13[2] = iVar8;
      piVar13[3] = iVar10;
      piVar13[4] = iVar17;
      piVar20 = piVar20 + 5;
      piVar13 = piVar13 + 5;
    } while (piVar20 != aiStack_44);
    *piVar13 = *piVar20;
  }
  if (param_3[2] == 0) {
    cVar14 = *(char *)((int)param_1 + 0xee);
    if ((cVar14 == '\0') && (cVar14 = *(char *)((int)param_1 + 0xf2), cVar14 == '\0')) {
      cVar14 = *(char *)((int)param_1 + 0x4d) == '\x04';
    }
    if (((param_3[0x94] == 0) && (param_3[0x96] == 0)) && (param_3[0x97] == 0)) {
      if (((param_3[0x98] == 0) || (*(char *)((int)param_1 + 0x4d) != '\x06')) && (cVar14 == '\0'))
      {
LAB_ram_480de348:
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[6] = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        *(undefined2 *)(param_1 + 0xb) = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
    }
    else if (((param_3[0x98] == 0) || (*(char *)((int)param_1 + 0x4d) != '\x06')) &&
            ((cVar14 == '\0' && (*(char *)((int)param_1 + 0x4d) != '\x05')))) goto LAB_ram_480de348;
  }
  if (param_2[0x8a] == param_3[0x8a]) {
    if (*param_2 != *param_3) {
      cVar14 = *(char *)((int)param_1 + 0xef);
      goto joined_r0x480de300;
    }
  }
  else {
    cVar14 = *(char *)((int)param_1 + 0xef);
joined_r0x480de300:
    if (cVar14 == '\0') {
      iVar8 = *param_1;
      piVar13 = (int *)(iVar8 + 0x5c4);
      do {
        iVar10 = *piVar13 + 1;
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        *piVar13 = iVar10;
        piVar13 = piVar13 + 0x2c;
      } while ((int *)(iVar8 + 0x7d4) != piVar13);
      bVar11 = param_3[1];
      bVar7 = param_3[0x65];
      bVar2 = param_3[0x69];
      uVar4 = *(ushort *)(param_3 + 0x6a);
      uVar5 = *(ushort *)(param_3 + 0x6c);
      goto joined_r0x480de336;
    }
  }
  bVar11 = param_3[1];
  bVar7 = param_3[0x65];
  bVar2 = param_3[0x69];
  uVar4 = *(ushort *)(param_3 + 0x6a);
  uVar5 = *(ushort *)(param_3 + 0x6c);
joined_r0x480de336:
  if (bVar11 == 0xc) {
    uVar6 = 1;
    uVar22 = 0;
    cVar14 = '\f';
  }
  else if (bVar11 == 0xe) {
    uVar6 = 0;
    uVar22 = 1;
    cVar14 = '\x0e';
  }
  else {
    uVar6 = 0;
    uVar22 = 1;
    cVar14 = '\r';
  }
  uVar15 = 100;
  if ((uVar4 < 0x65) && (uVar15 = uVar4, uVar4 == 0)) {
    uVar15 = 1;
  }
  local_1ac = CONCAT31(CONCAT21(uVar15,bVar2),bVar7);
  uVar9 = uVar5;
  if (0x14 < uVar5) {
    uVar9 = 0x14;
  }
  uStack_1a8._0_3_ = CONCAT12(uVar6,uVar9);
  uStack_1a8 = CONCAT13(uVar22,(undefined3)uStack_1a8);
  if ((uVar4 == uVar15) && (uVar5 < 0x15)) {
    param_1[0xae] = local_1ac;
    param_1[0xaf] = uStack_1a8;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x35b) = 0xc;
    param_1[0xae] = local_1ac;
    param_1[0xaf] = uStack_1a8;
  }
  if (cVar14 == '\f') {
    *(undefined1 *)(param_1 + 0x1c9) = 0;
    *(undefined1 *)((int)param_1 + 0x725) = 0;
    *(undefined1 *)((int)param_1 + 0x726) = 0;
    *(undefined1 *)((int)param_1 + 0x727) = 0;
    *(undefined1 *)(param_1 + 0x1ca) = 0;
    *(undefined1 *)((int)param_1 + 0x729) = 0;
    *(undefined1 *)((int)param_1 + 0x72a) = 0;
    *(undefined1 *)((int)param_1 + 0x72b) = 0;
    *(undefined1 *)(param_1 + 0x1cb) = 0;
    *(undefined1 *)((int)param_1 + 0x72d) = 0;
    *(undefined1 *)((int)param_1 + 0x72e) = 0;
    *(undefined1 *)((int)param_1 + 0x72f) = 0;
    *(undefined1 *)(param_1 + 0x1cc) = 0;
    *(undefined1 *)((int)param_1 + 0x731) = 0;
    param_1[0x1cd] = 0;
    param_1[0x1ce] = 0;
  }
  if ((((param_1[99] == 0) && (param_1[0x6e] == 0)) && ((char)param_1[0x79] == '\0')) &&
     (*(char *)((int)param_1 + 0x9e) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x1e5) = 0;
    FUN_ram_48025ba6();
    if (*(char *)((int)param_1 + 0x65) == '\v') {
      FUN_ram_4805c6b0(*param_1,2,2,7);
    }
    puVar16 = (uint *)param_1[3];
    fence();
    uVar12 = *puVar16;
    do {
      uVar21 = uVar12 & 0xfffcffff;
      if ((uVar12 >> 0x10 & 3) != 1) {
        return;
      }
      if ((uVar12 & 0xffff) == 0) {
        return;
      }
      bVar1 = *puVar16 != uVar12;
      uVar12 = *puVar16;
    } while (bVar1);
    *puVar16 = uVar21 - 1;
  }
  return;
}


