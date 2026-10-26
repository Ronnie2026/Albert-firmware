/* Firmware entry: 0x480d6386 */

void FUN_ram_480d6386(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  char *__s;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190 [7];
  int iStack_174;
  int iStack_170;
  int local_150 [12];
  undefined2 uStack_120;
  char cStack_11e;
  char cStack_11d;
  char cStack_11c;
  char cStack_11b;
  char cStack_11a;
  char cStack_119;
  char cStack_118;
  undefined1 auStack_114 [20];
  undefined1 auStack_100 [16];
  int iStack_f0;
  uint uStack_ec;
  char cStack_e5;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  char cStack_d0;
  char cStack_cf;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined2 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar23 = 0;
  if (*(char *)(param_2 + 0x14) != '\0') {
    uVar23 = (uint)(*(int *)(param_2 + 8) != 0);
  }
  __s = (char *)param_1[0x1c4];
  iVar18 = *(int *)(param_2 + 4);
  if (__s != (char *)0x0) {
    pcVar13 = __s + 0x7400;
    do {
      if (((*__s != '\0') && (*(int *)(__s + 4) == iVar18)) && (*(int *)(__s + 8) == 0)) {
        if (__s[1] == '\0') {
          if (((((*(uint *)(param_2 + 0x18) ^ *(uint *)(__s + 0x10)) & 0xffff) != 0) ||
              (*(int *)(param_2 + 0x20) != *(int *)(__s + 0x18))) ||
             (*(int *)(param_2 + 0x24) != *(int *)(__s + 0x1c))) goto LAB_ram_480d63ca;
          if (uVar23 != 0) {
            *(undefined4 *)(__s + 8) = *(undefined4 *)(param_2 + 8);
            *(undefined4 *)(__s + 0xc) = *(undefined4 *)(param_2 + 0x10);
            if ((__s[0x45] & 2U) == 0) {
              iVar18 = *(int *)(param_2 + 4);
            }
            else {
              iVar11 = *param_1;
              iVar18 = FUN_ram_48025ba6();
              if (((__s[0x2d] == '\x02') && (*(int *)(__s + 0x20) == 0x3c2)) &&
                 ((__s[0x24] == '\b' &&
                  ((((__s[0x25] & 3U) == 1 && ((__s[0x28] & 0x3fU) != 0)) &&
                   ((uint)(iVar18 - param_3) < 0x3e9)))))) {
                uVar27 = *(undefined4 *)(__s + 0x24);
                uVar26 = *(undefined4 *)(__s + 0x28);
                uVar25 = *(undefined4 *)(__s + 0x2c);
                uVar7 = *(undefined4 *)(__s + 0x30);
                uVar22 = *(undefined4 *)(__s + 0x34);
                uVar21 = *(undefined4 *)(__s + 0x38);
                uVar8 = *(undefined4 *)(__s + 0x3c);
                uVar10 = *(undefined4 *)(__s + 0x40);
                *(undefined4 *)(iVar11 + 0x938c) = 0x3c2;
                *(undefined4 *)(iVar11 + 0x9390) = uVar27;
                *(undefined4 *)(iVar11 + 0x9394) = uVar26;
                *(undefined4 *)(iVar11 + 0x9398) = uVar25;
                *(undefined4 *)(iVar11 + 0x939c) = uVar7;
                *(undefined4 *)(iVar11 + 0x93a0) = uVar22;
                *(undefined4 *)(iVar11 + 0x93a4) = uVar21;
                *(undefined4 *)(iVar11 + 0x93a8) = uVar8;
                *(undefined4 *)(iVar11 + 0x93ac) = uVar10;
                *(int *)(iVar11 + 0x93b0) = param_3;
                *(undefined1 *)(iVar11 + 0x93b8) = 1;
                if (((*(char *)(iVar11 + 0x92fd) != '\0') && (*(char *)(iVar11 + 0x92f9) != '\0'))
                   && (*(char *)(iVar11 + 0x9309) == '\0')) {
                  *(undefined1 *)(iVar11 + 0x9309) = 1;
                  *(undefined2 *)(iVar11 + 0x92d8) = *(undefined2 *)(iVar11 + 0x92d6);
                }
                *(int *)(iVar11 + 0x92c8) = param_3;
                *(undefined1 *)(iVar11 + 0x9308) = 1;
              }
              iVar18 = *(int *)(param_2 + 4);
            }
            break;
          }
        }
        else if (uVar23 != 0) {
          *(undefined4 *)(__s + 8) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(__s + 0xc) = *(undefined4 *)(param_2 + 0x10);
          iVar18 = *(int *)(param_2 + 4);
          break;
        }
        memset(__s,0,0xe8);
        __s[0x20] = '\0';
        __s[0x21] = '\0';
        __s[0x22] = '\0';
        __s[0x23] = '\0';
        __s[0x28] = '\0';
        __s[0x29] = '\0';
        __s[0x2a] = '\0';
        __s[0x2b] = '\0';
        __s[0x2c] = '\0';
        __s[0x2d] = '\0';
        __s[0x2e] = '\0';
        __s[0x2f] = '\0';
        __s[0x30] = '\0';
        __s[0x31] = '\0';
        __s[0x32] = '\0';
        __s[0x33] = '\0';
        __s[0x34] = '\0';
        __s[0x35] = '\0';
        __s[0x36] = '\0';
        __s[0x37] = '\0';
        __s[0x3c] = '\0';
        __s[0x3d] = '\0';
        __s[0x3e] = '\0';
        __s[0x3f] = '\0';
        __s[0x40] = '\0';
        __s[0x41] = '\0';
        __s[0x42] = '\0';
        __s[0x43] = '\0';
        __s[0x11] = -1;
        __s[0x38] = '\0';
        __s[0x39] = '\0';
        __s[0x3a] = '\x01';
        __s[0x3b] = '\0';
        __s[0x24] = '\b';
        __s[0x25] = '\0';
        __s[0x26] = '\0';
        __s[0x27] = '\0';
        iVar18 = *(int *)(param_2 + 4);
        __s[0x60] = '\b';
        __s[0x70] = '\b';
        __s[0x80] = '\b';
        break;
      }
LAB_ram_480d63ca:
      __s = __s + 0xe8;
    } while (__s != pcVar13);
  }
  if (param_1[400] != iVar18) {
    return;
  }
  piVar14 = local_190;
  piVar16 = param_1 + 0x191;
  do {
    iVar19 = piVar16[1];
    iVar18 = piVar16[2];
    iVar11 = piVar16[3];
    *piVar14 = *piVar16;
    piVar14[1] = iVar19;
    piVar14[2] = iVar18;
    piVar14[3] = iVar11;
    piVar16 = piVar16 + 4;
    piVar14 = piVar14 + 4;
  } while (piVar16 != param_1 + 0x1a1);
  iVar18 = param_1[0x19a];
  bVar1 = *(byte *)((int)param_1 + 0x669);
  iVar19 = param_1[0x19b];
  iVar24 = param_1[0x19c];
  iVar11 = param_1[0x19e];
  cVar2 = *(char *)((int)param_1 + 0x681);
  piVar16 = local_150;
  piVar14 = param_1 + 0x1a2;
  do {
    piVar17 = piVar14;
    piVar15 = piVar16;
    iVar20 = piVar17[1];
    iVar9 = piVar17[2];
    *piVar15 = *piVar17;
    iVar12 = piVar17[3];
    piVar15[1] = iVar20;
    piVar15[2] = iVar9;
    piVar15[3] = iVar12;
    piVar14 = piVar17 + 4;
    piVar16 = piVar15 + 4;
  } while (piVar14 != param_1 + 0x1c2);
  iVar9 = piVar17[5];
  piVar15[4] = *piVar14;
  piVar15[5] = iVar9;
  param_1[400] = 0;
  iStack_b0 = 0x10000;
  iStack_c8 = 0;
  iStack_c0 = 0;
  iStack_bc = 0;
  iStack_b8 = 0;
  iStack_b4 = 0;
  iStack_ac = 0;
  iStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = (uint)uStack_8c._2_2_ << 0x10;
  iStack_c4 = 8;
  FUN_ram_4ff45158(param_1 + 0x191,&iStack_c8,0x3e);
  memset(&iStack_c8,0,0x88);
  iStack_c8 = CONCAT31(iStack_c8._1_3_,8);
  iStack_b8 = CONCAT31(iStack_b8._1_3_,8);
  iStack_a8 = CONCAT31(iStack_a8._1_3_,8);
  FUN_ram_4ff45158(param_1 + 0x1a2,&iStack_c8,0x82);
  if (uVar23 != 0) {
    iVar9 = *(int *)(param_2 + 8);
    if (((iVar9 != 0) && (cVar2 != '\0')) &&
       ((param_1[0x146] == 0 &&
        (((param_1[0x145] == iVar24 && (iVar19 != 0)) && (iVar19 != param_1[0x144])))))) {
      bVar3 = *(byte *)(param_1 + 0x13f);
      param_1[0x144] = iVar19;
      param_1[0x146] = iVar9;
      *(byte *)((int)param_1 + 0x4fd) = bVar1;
      *(char *)((int)param_1 + 0x4fe) = (char)iVar18;
      param_1[(uint)bVar3 * 0xb + 0x113] = local_190[0];
      param_1[(uint)bVar3 * 0xb + 0x114] = local_190[1];
      param_1[(uint)bVar3 * 0xb + 0x116] = local_190[3];
      param_1[(uint)bVar3 * 0xb + 0x11c] = param_3;
      param_1[(uint)bVar3 * 0xb + 0x115] = local_190[2];
      param_1[(uint)bVar3 * 0xb + 0x117] = local_190[4];
      param_1[(uint)bVar3 * 0xb + 0x118] = local_190[5];
      param_1[(uint)bVar3 * 0xb + 0x119] = local_190[6];
      param_1[(uint)bVar3 * 0xb + 0x11a] = iStack_174;
      param_1[(uint)bVar3 * 0xb + 0x11b] = iStack_170;
      *(undefined1 *)(param_1 + (uint)bVar3 * 0xb + 0x11d) = 1;
      *(byte *)(param_1 + 0x13f) = bVar3 + 1 & 3;
      iVar9 = *(int *)(param_2 + 8);
    }
    bVar4 = false;
    if ((((bVar1 & 1) != 0) && (bVar4 = false, cStack_d0 != '\0')) &&
       ((bVar4 = false, iStack_e0 == param_1[0x1c5] && (bVar4 = false, (char)param_1[0x79] != '\0'))
       )) {
      bVar4 = false;
      if (((char)uStack_120 == *(char *)((int)param_1 + 0x1e7)) &&
         (bVar4 = false, uStack_120._1_1_ == (char)param_1[0x7a])) {
        bVar4 = cStack_11e == *(char *)((int)param_1 + 0x1e9);
      }
    }
    bVar5 = false;
    if (((((bVar1 & 2) != 0) && (bVar5 = false, cStack_cf != '\0')) &&
        (bVar5 = false, iStack_dc == param_1[0x1c6])) &&
       (bVar5 = false, (char)param_1[0xa1] != '\0')) {
      bVar6 = false;
      bVar5 = false;
      if (((cStack_11d == *(char *)((int)param_1 + 0x28b)) &&
          (bVar5 = bVar6, cStack_11c == (char)param_1[0xa3])) &&
         ((cStack_11b == *(char *)((int)param_1 + 0x28d) &&
          (cStack_11a == *(char *)((int)param_1 + 0x28e))))) {
        bVar5 = cStack_119 == *(char *)((int)param_1 + 0x28f);
      }
    }
    FUN_ram_4804a1e6(&iStack_c8,param_1 + 0xae,param_3);
    if ((((bVar1 & 4) != 0) && (cStack_118 != '\0')) &&
       (((iStack_d8 == param_1[0x1c7] &&
         (((iStack_d4 == uStack_8c && ((char)param_1[0x1d9] == cStack_118)) &&
          (iStack_f0 == param_1[0x1e3])))) &&
        ((((uStack_ec ^ param_1[0x1e4]) & 0xffff) == 0 &&
         (cStack_e5 == *(char *)((int)param_1 + 0x797))))))) {
      if ((char)param_1[0x1d9] != '\x01') goto joined_r0x480d667e;
      iVar18 = FUN_ram_480d632e(auStack_114,param_1 + 0x1da);
      uVar23 = 0;
      if ((iVar18 == 0) || (uVar23 = 0, (char)param_1[0xf8] == '\0')) goto joined_r0x480d667e;
      if (param_1[0xf9] == 0) {
        iStack_1b4 = param_1[0xef];
        iStack_1ac = param_1[0xf1];
        iStack_1b0 = param_1[0xf0];
        iStack_1a8 = param_1[0xf2];
        iStack_1a4 = param_1[0xf3];
        iStack_1a0 = param_1[0xf4];
        iStack_19c = param_1[0xf5];
        iStack_198 = param_1[0xf6];
        iStack_194 = param_1[0xf7];
        uVar23 = FUN_ram_480d632e(auStack_114,&iStack_1b4);
        goto joined_r0x480d667e;
      }
    }
    uVar23 = 0;
joined_r0x480d667e:
    if (bVar4) {
      FUN_ram_48049638(param_1 + 0x19,&uStack_120,1,param_3);
      *(undefined2 *)(param_1 + 100) = uStack_120;
      param_1[0x65] = local_190[0];
      param_1[0x67] = local_190[2];
      param_1[99] = iVar9;
      param_1[0x66] = local_190[1];
      param_1[0x68] = local_190[3];
      param_1[0x69] = local_190[4];
      param_1[0x6a] = local_190[5];
      param_1[0x6b] = local_190[6];
      param_1[0x6c] = iStack_174;
      param_1[0x6d] = iStack_170;
      *(char *)((int)param_1 + 0x192) = cStack_11e;
      if (((((char)param_1[0x79] != '\0') && (*(char *)((int)param_1 + 0x1e7) == (char)uStack_120))
          && ((char)param_1[0x7a] == uStack_120._1_1_)) &&
         (*(char *)((int)param_1 + 0x1e9) == cStack_11e)) {
        *(undefined1 *)(param_1 + 0x79) = 0;
        *(undefined1 *)((int)param_1 + 0x1e7) = 0;
        *(undefined2 *)(param_1 + 0x7a) = 0;
        iStack_1b4 = 0;
        iStack_1ac = 0;
        iStack_1a8 = 0;
        iStack_1a4 = 0;
        iStack_1a0 = 0;
        iStack_198 = 0;
        iStack_194 = 0;
        param_1[0x7b] = 0;
        param_1[0x7d] = 0;
        param_1[0x7e] = 0;
        param_1[0x7f] = 0;
        param_1[0x80] = 0;
        param_1[0x82] = 0;
        param_1[0x83] = 0;
        *(undefined1 *)(param_1 + 0x14b) = 0;
        iStack_1b0 = 8;
        param_1[0x7c] = 8;
        iStack_19c = 0x10000;
        param_1[0x81] = 0x10000;
      }
    }
    if (bVar5) {
      *(char *)((int)param_1 + 0x259) = cStack_11c;
      *(char *)((int)param_1 + 0x25b) = cStack_11a;
      *(char *)(param_1 + 0x97) = cStack_119;
      param_1[0x93] = iVar9;
      param_1[0x94] = param_3;
      param_1[0xa0] = iStack_170;
      param_1[0x95] = iVar11;
      *(char *)(param_1 + 0x96) = cStack_11d;
      *(char *)((int)param_1 + 0x25a) = cStack_11b;
      param_1[0x98] = local_190[0];
      param_1[0x99] = local_190[1];
      param_1[0x9a] = local_190[2];
      param_1[0x9b] = local_190[3];
      param_1[0x9c] = local_190[4];
      param_1[0x9d] = local_190[5];
      param_1[0x9e] = local_190[6];
      param_1[0x9f] = iStack_174;
      if ((cStack_11d == '\x01') && (cStack_11b == '\0')) {
        *(undefined1 *)((int)param_1 + 0x2b5) = 1;
      }
      if ((((char)param_1[0xa1] != '\0') && (*(char *)((int)param_1 + 0x28b) == cStack_11d)) &&
         (((char)param_1[0xa3] == cStack_11c &&
          (((*(char *)((int)param_1 + 0x28d) == cStack_11b &&
            (*(char *)((int)param_1 + 0x28e) == cStack_11a)) &&
           (*(char *)((int)param_1 + 0x28f) == cStack_119)))))) {
        *(undefined1 *)(param_1 + 0xa1) = 0;
        *(undefined1 *)((int)param_1 + 0x28b) = 0;
        *(undefined1 *)(param_1 + 0xa3) = 0;
        *(undefined1 *)((int)param_1 + 0x28d) = 0;
        *(undefined1 *)((int)param_1 + 0x28e) = 0;
        *(undefined1 *)((int)param_1 + 0x28f) = 0;
        iStack_1b4 = 0;
        iStack_1ac = 0;
        iStack_1a8 = 0;
        iStack_1a4 = 0;
        iStack_1a0 = 0;
        iStack_198 = 0;
        iStack_194 = 0;
        param_1[0xa4] = 0;
        param_1[0xa6] = 0;
        param_1[0xa7] = 0;
        param_1[0xa8] = 0;
        param_1[0xa9] = 0;
        param_1[0xab] = 0;
        param_1[0xac] = 0;
        *(undefined1 *)((int)param_1 + 0x52d) = 0;
        iStack_1b0 = 8;
        param_1[0xa5] = 8;
        iStack_19c = 0x10000;
        param_1[0xaa] = 0x10000;
      }
    }
    if (uVar23 == 0) {
      return;
    }
    if (cStack_118 != '\x01') {
      if (cStack_118 != '\x02') {
        return;
      }
      if ((*(char *)((int)param_1 + 0x73a) != '\0') && (*(char *)((int)param_1 + 0x73b) == '\0')) {
        *(undefined1 *)((int)param_1 + 0x73b) = 1;
      }
      param_1[0x1ec] = iVar9;
      FUN_ram_4ff45158(param_1 + 0x1ed,&iStack_f0,0xe);
      if (param_1[0x1f1] == -1) {
        return;
      }
      param_1[0x1f1] = param_1[0x1f1] + 1;
      return;
    }
    if ((char)param_1[0x1d9] != '\x01') {
      return;
    }
    iVar18 = FUN_ram_480d632e(param_1 + 0x1da,auStack_114);
    if (iVar18 == 0) {
      return;
    }
    if ((char)param_1[0xf8] == '\0') {
      return;
    }
    if (param_1[0xf9] != 0) {
      return;
    }
    iStack_1b4 = param_1[0xef];
    iStack_1b0 = param_1[0xf0];
    iStack_1ac = param_1[0xf1];
    iStack_1a8 = param_1[0xf2];
    iStack_1a4 = param_1[0xf3];
    iStack_1a0 = param_1[0xf4];
    iStack_19c = param_1[0xf5];
    iStack_198 = param_1[0xf6];
    iStack_194 = param_1[0xf7];
    iVar18 = FUN_ram_480d632e(&iStack_1b4,auStack_114);
    if (iVar18 == 0) {
      return;
    }
    if (iVar9 != 0) {
      cVar2 = *(char *)((int)param_1 + 0x3bf);
      param_1[0xfa] = *(int *)(param_2 + 0x10);
      *(undefined1 *)((int)param_1 + 0x3ed) = *(undefined1 *)((int)param_1 + 0x3be);
      param_1[0xf9] = iVar9;
      *(char *)(param_1 + 0xfb) = cVar2;
      FUN_ram_4ff45158(param_1 + 0xfc,param_1 + 0xf4,0xe);
      param_1[0x101] = param_3;
      param_1[0x100] = param_1[0xbb];
      if (((byte)(cVar2 - 2U) < 2) || (cVar2 == '\x05')) {
        param_1[0xe8] = 0;
      }
      *(undefined1 *)(param_1 + 0xf8) = 0;
      memset(param_1 + 0xef,0,0x24);
    }
    param_1[0x1e7] = iVar9;
    FUN_ram_4ff45158(param_1 + 0x1e8,auStack_100,0xe);
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
    return;
  }
  param_1[0x1c8] = iVar19;
  if (cStack_118 == '\x02') {
    *(undefined2 *)((int)param_1 + 0x73a) = 0;
    if (cStack_d0 != '\0') goto LAB_ram_480d6a62;
    if (cStack_cf == '\0') {
      return;
    }
    if ((char)param_1[0xa1] == '\0') {
      return;
    }
    if (*(char *)((int)param_1 + 0x28b) != cStack_11d) {
      return;
    }
  }
  else {
    if (cStack_d0 != '\0') {
LAB_ram_480d6a62:
      if (((((char)param_1[0x79] != '\0') && (*(char *)((int)param_1 + 0x1e7) == (char)uStack_120))
          && ((char)param_1[0x7a] == uStack_120._1_1_)) &&
         (cStack_11e == *(char *)((int)param_1 + 0x1e9))) {
        if (iStack_e0 == param_1[0x1c5]) {
          FUN_ram_48049638(param_1 + 0x19,&uStack_120,0,param_3);
        }
        *(undefined1 *)(param_1 + 0x79) = 0;
        *(undefined1 *)(param_1 + 0x14b) = 0;
      }
    }
    if (((cStack_cf == '\0') || ((char)param_1[0xa1] == '\0')) ||
       (*(char *)((int)param_1 + 0x28b) != cStack_11d)) goto LAB_ram_480d6a8a;
  }
  if ((((char)param_1[0xa3] == cStack_11c) && (*(char *)((int)param_1 + 0x28d) == cStack_11b)) &&
     ((cStack_11a == *(char *)((int)param_1 + 0x28e) &&
      (cStack_119 == *(char *)((int)param_1 + 0x28f))))) {
    if (((((cStack_11d != '\x02') && (iStack_dc == param_1[0x1c6])) && (cStack_11d == '\x01')) &&
        ((*(char *)((int)param_1 + 0x215) != '\0' &&
         (*(char *)((int)param_1 + 0x21b) == *(char *)((int)param_1 + 0x28d))))) &&
       ((char)param_1[0xa3] == (char)((*(char *)((int)param_1 + 0x21a) == '\x01') + '\x01'))) {
      *(undefined1 *)((int)param_1 + 0x217) = 1;
      param_1[0x87] = param_3 + 0xfa;
    }
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)((int)param_1 + 0x52d) = 0;
  }
LAB_ram_480d6a8a:
  if (((cStack_118 == '\x01') && (iStack_d8 == param_1[0x1c7])) &&
     (((char)param_1[0xf8] != '\0' && (param_1[0xf9] == 0)))) {
    iStack_c8 = param_1[0xef];
    iStack_c4 = param_1[0xf0];
    iStack_c0 = param_1[0xf1];
    iStack_bc = param_1[0xf2];
    iStack_b8 = param_1[0xf3];
    iStack_b4 = param_1[0xf4];
    iStack_b0 = param_1[0xf5];
    iStack_ac = param_1[0xf6];
    iStack_a8 = param_1[0xf7];
    iVar18 = FUN_ram_480d632e(auStack_114,&iStack_c8);
    if (iVar18 != 0) {
      FUN_ram_4804b4a4(param_1 + 0xae,param_3);
      return;
    }
  }
  return;
}


