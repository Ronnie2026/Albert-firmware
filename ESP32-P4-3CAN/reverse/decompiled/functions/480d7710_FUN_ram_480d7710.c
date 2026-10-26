/* Firmware entry: 0x480d7710 */

void FUN_ram_480d7710(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  undefined4 *puVar17;
  int iStack_19c;
  undefined1 uStack_198;
  undefined1 uStack_197;
  undefined2 uStack_196;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  uint uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  char cStack_10c;
  int iStack_100;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 uStack_ca;
  byte abStack_c8 [4];
  undefined4 local_c4 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = (uint *)param_1[3];
  fence();
  uVar10 = *puVar11;
  do {
    uVar5 = uVar10 + 1;
    if ((int)uVar10 < 0) {
      return;
    }
    if ((uVar10 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar11 != uVar10;
    uVar10 = *puVar11;
  } while (bVar1);
  *puVar11 = uVar5;
  iVar12 = *param_1;
  FUN_ram_4ff3ec14(iVar12 + 0xb18,0xffffffff);
  puVar9 = (undefined4 *)(iVar12 + 0xb38);
  puVar17 = &local_d4;
  do {
    uVar4 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    *puVar17 = *puVar9;
    puVar17[1] = uVar4;
    puVar17[2] = uVar6;
    puVar17[3] = uVar7;
    puVar9 = puVar9 + 4;
    puVar17 = puVar17 + 4;
  } while (puVar9 != (undefined4 *)(iVar12 + 0xbd8));
  *puVar17 = *puVar9;
  FUN_ram_4ff3ee10(iVar12 + 0xb18);
  bVar14 = 1;
  uStack_196 = &sedeleg;
  uStack_194 = 0x100;
  uStack_198 = 1;
  uStack_190 = 1;
  uStack_18c = 1;
  puVar17 = (undefined4 *)param_1[1];
  if (local_d4._1_1_ == '\f') {
    uStack_197 = uStack_ca;
    if (abStack_c8[0] == 0) {
      uStack_196 = (undefined *)0x100;
      uStack_194 = 0x101;
    }
    else {
      bVar14 = FUN_ram_48045922(puVar17,2,0);
      uStack_196 = (undefined *)CONCAT11(uStack_196._1_1_,bVar14);
      puVar17 = (undefined4 *)param_1[1];
      bVar14 = bVar14 ^ 1;
    }
    uStack_194 = CONCAT13(bVar14,(undefined3)uStack_194);
    FUN_ram_4ff3ec14(puVar17 + 0x297,0xffffffff);
    piVar13 = (int *)*puVar17;
    FUN_ram_4ff3ee10(puVar17 + 0x297);
    if (piVar13 == (int *)0x0) {
      cVar16 = '\f';
      uVar6 = 0xc;
      uVar4 = 0;
    }
    else {
      cVar16 = '\f';
      uVar6 = 0xc;
      uVar4 = (**(code **)(*piVar13 + 0x154))(piVar13,2);
    }
  }
  else {
    uStack_197 = uStack_ca;
    if (local_d4._1_1_ == '\x0e') {
      cVar16 = '\x0e';
      cVar15 = '\x0e';
      if (abStack_c8[0] != 0) goto LAB_ram_480d7c82;
LAB_ram_480d7800:
      uVar8 = 1;
      uStack_196 = (undefined *)CONCAT11(1,abStack_c8[0]);
      iVar12 = FUN_ram_48045922(puVar17,1,0);
      uVar3 = uVar8;
      bVar14 = abStack_c8[0];
      cVar16 = cVar15;
      if (iVar12 != 0) goto LAB_ram_480d7812;
LAB_ram_480d7ca6:
      uVar8 = uVar3;
      uStack_196 = (undefined *)((ushort)uStack_196 & 0xff);
      bVar14 = 1;
    }
    else {
      cVar16 = '\r';
      cVar15 = cVar16;
      if (abStack_c8[0] == 0) goto LAB_ram_480d7800;
LAB_ram_480d7c82:
      bVar14 = FUN_ram_48045922(puVar17,2,0);
      uVar8 = 0;
      uStack_196 = (undefined *)CONCAT11(uStack_196._1_1_,bVar14);
      iVar12 = FUN_ram_48045922(param_1[1],1,0);
      uVar3 = 0;
      if (iVar12 == 0) goto LAB_ram_480d7ca6;
LAB_ram_480d7812:
      bVar14 = bVar14 ^ 1;
    }
    puVar9 = (undefined4 *)param_1[1];
    puVar17 = puVar9 + 0x297;
    uStack_194 = CONCAT31(uStack_194._1_3_,uVar8);
    uStack_194 = CONCAT13(bVar14,(undefined3)uStack_194);
    FUN_ram_4ff3ec14(puVar17,0xffffffff);
    piVar13 = (int *)*puVar9;
    FUN_ram_4ff3ee10(puVar17);
    uVar4 = 0;
    uVar6 = 6;
    if (piVar13 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar13 + 0x154))(piVar13,2);
      uVar6 = 6;
    }
  }
  piVar13 = param_1 + 0xae;
  uStack_18c = uVar4;
  uStack_198 = FUN_ram_4805c396(*param_1,4,2,uVar6);
  FUN_ram_4804bb9a(piVar13,param_2,&uStack_198);
  iVar12 = param_1[0x102];
  if ((iVar12 != 0) && (param_1[0x102] = 0, iVar12 == param_1[0x1e7])) {
    param_1[0x1e7] = 0;
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)((int)param_1 + 0x7a1) = 0;
    *(undefined1 *)((int)param_1 + 0x7a2) = 0;
    *(undefined1 *)((int)param_1 + 0x7a3) = 0;
    *(undefined1 *)(param_1 + 0x1e9) = 0;
    *(undefined1 *)((int)param_1 + 0x7a5) = 0;
    *(undefined1 *)((int)param_1 + 0x7a6) = 0;
    *(undefined1 *)((int)param_1 + 0x7a7) = 0;
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    *(undefined1 *)((int)param_1 + 0x7a9) = 0;
    *(undefined1 *)((int)param_1 + 0x7aa) = 0;
    *(undefined1 *)((int)param_1 + 0x7ab) = 0;
    *(undefined1 *)(param_1 + 0x1eb) = 0;
    *(undefined1 *)((int)param_1 + 0x7ad) = 0;
  }
  FUN_ram_4804a1e6(&uStack_140,piVar13,param_2);
  if (uStack_140._3_1_ == 10) {
    FUN_ram_480cb382(param_1,param_2);
  }
  if (cVar16 != '\f') {
    if ((((((*(char *)((int)param_1 + 0x2be) == '\0') && ((char)param_1[0xae] != '\0')) &&
          (*(char *)((int)param_1 + 0x2c1) != '\0')) &&
         ((*(char *)((int)param_1 + 0x2c2) != '\0' && ((char)param_1[0xb1] == '\0')))) &&
        (*(char *)((int)param_1 + 0x2c5) != '\0')) &&
       ((((*(char *)((int)param_1 + 0x2c6) == '\0' && (*(char *)((int)param_1 + 0x2c7) == '\0')) &&
         (((char)param_1[0xb2] != '\0' &&
          ((((char)param_1[0xd9] == '\0' && (1 < (byte)((char)param_1[0xd6] - 3U))) &&
           (*(char *)((int)param_1 + 0x35a) != '\x04')))))) &&
        ((*(char *)((int)param_1 + 0x35a) != '\t' && (*(char *)((int)param_1 + 0x371) == '\0'))))))
    {
      uVar10 = (uint)*(byte *)(param_1 + 0xfb);
      if ((char)param_1[0xf8] == '\0') {
        if (uVar10 < 9) goto joined_r0x480d7a20;
        goto LAB_ram_480d7a22;
      }
      if (((8 < uVar10) || ((0x111U >> (uVar10 & 0x1f) & 1) == 0)) ||
         (uVar10 = (uint)*(byte *)((int)param_1 + 0x3bf), 8 < uVar10)) goto LAB_ram_480d7a22;
joined_r0x480d7a20:
      if ((0x111U >> (uVar10 & 0x1f) & 1) == 0) goto LAB_ram_480d7a22;
      cVar15 = *(char *)((int)param_1 + 0x739);
      if (*(char *)((int)param_1 + 0x359) == '\x04') {
        if (*(char *)((int)param_1 + 0x35d) == '\0') goto LAB_ram_480d7e52;
      }
      else if (*(char *)((int)param_1 + 0x35d) != '\0') {
LAB_ram_480d7e52:
        if (cVar15 == '\0') {
          *(undefined1 *)((int)param_1 + 0x739) = 1;
        }
        goto LAB_ram_480d79bc;
      }
    }
    else {
LAB_ram_480d7a22:
      cVar15 = *(char *)((int)param_1 + 0x739);
    }
    if (cVar15 != '\0') {
      *(undefined1 *)((int)param_1 + 0x739) = 0;
      *(undefined2 *)((int)param_1 + 0x73a) = 0;
    }
    if ((char)param_1[0x1d9] == '\x02') {
      *(undefined1 *)(param_1 + 0x1d9) = 0;
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
LAB_ram_480d79bc:
  FUN_ram_4804a1e6(&uStack_140,piVar13,param_2);
  if (uStack_140._3_1_ == 10) {
    *(undefined1 *)(param_1 + 0x1d9) = 0;
  }
  if (param_1[0x1e7] != 0) {
    if ((char)param_1[499] == '\0') goto LAB_ram_480d79e2;
    goto LAB_ram_480d7bdc;
  }
  if (((((((char)param_1[0xf8] == '\0') || (param_1[0xf9] != 0)) &&
        (FUN_ram_4804a1e6(&uStack_140,piVar13,param_2), iStack_100 == 0)) &&
       (((char)uStack_138 == '\0' && (uStack_13c._2_1_ == '\0')))) &&
      ((uStack_138._1_1_ == '\0' && ((uStack_138._2_1_ == '\0' && (cStack_10c == '\0')))))) &&
     ((uStack_140._3_1_ < 2 || (uStack_140._3_1_ == 10)))) {
    if (((char)param_1[499] != '\0') && (iVar12 = FUN_ram_480a108a(param_1,param_2), iVar12 == 0)) {
      *(undefined1 *)(param_1 + 499) = 0;
      FUN_ram_480553f6(param_1[3]);
      if (param_1[0x1e7] != 0) goto LAB_ram_480d7bdc;
    }
LAB_ram_480d7c78:
    bVar1 = true;
  }
  else {
    if ((char)param_1[499] != '\0') goto LAB_ram_480d7c78;
    *(undefined1 *)(param_1 + 499) = 1;
    bVar1 = false;
  }
  if (((param_1[0x1cf] == 0) && ((char)param_1[0xf8] != '\0')) && (param_1[0xf9] == 0)) {
    uStack_168 = param_1[0xf7];
    uStack_188 = param_1[0xef];
    iStack_184 = param_1[0xf0];
    iStack_180 = param_1[0xf1];
    iStack_17c = param_1[0xf2];
    uStack_178 = param_1[0xf3];
    iStack_174 = param_1[0xf4];
    uVar10 = param_1[0xf5];
    iStack_16c = param_1[0xf6];
    uStack_170 = uVar10;
    if ((iStack_174 == 0x3c2) && (cVar16 != '\f')) {
      if (((char)param_1[0x1d9] != '\x01') ||
         (iVar12 = FUN_ram_480d632e(&uStack_188,param_1 + 0x1da), iVar12 == 0)) {
        iVar12 = param_1[0x1c7] + 1;
        if (iVar12 == 0) {
          iVar12 = 1;
        }
        param_1[0x1c7] = iVar12;
      }
      param_1[0x1de] = uStack_178;
      param_1[0x1df] = iStack_174;
      param_1[0x1e0] = uStack_170;
      param_1[0x1da] = uStack_188;
      param_1[0x1db] = iStack_184;
      param_1[0x1dc] = iStack_180;
      param_1[0x1dd] = iStack_17c;
      param_1[0x1e1] = iStack_16c;
      param_1[0x1e2] = uStack_168;
      *(undefined1 *)(param_1 + 0x1d9) = 1;
      FUN_ram_4ff45158(param_1 + 0x1e3,&iStack_174,0xe);
    }
    else {
      uStack_170._1_1_ = (char)(uVar10 >> 8);
      uStack_124 = DAT_ram_48222d64;
      uStack_120 = DAT_ram_48222d68;
      iStack_19c = 0;
      uStack_130 = DAT_ram_48222d58;
      uStack_12c = DAT_ram_48222d5c;
      uStack_128 = DAT_ram_48222d60;
      uStack_170._0_1_ = (undefined1)uVar10;
      uVar8 = 1;
      if (uStack_170._1_1_ != '\x01') {
        uVar8 = 2;
      }
      uStack_170._3_1_ = (undefined1)(uVar10 >> 0x18);
      uStack_168._1_1_ = (undefined1)((uint)uStack_168 >> 8);
      uStack_170._2_1_ = (undefined1)(uVar10 >> 0x10);
      uStack_134._2_2_ = (undefined2)((uint)DAT_ram_48222d54 >> 0x10);
      uStack_138 = CONCAT13((undefined1)uStack_168,(int3)((uint)iStack_16c >> 8));
      uStack_134 = CONCAT31(CONCAT21(uStack_134._2_2_,uVar8),uStack_168._1_1_);
      uStack_13c._3_1_ = (undefined1)iStack_16c;
      uStack_13c._0_3_ =
           CONCAT12(uStack_170._3_1_,CONCAT11(uStack_170._2_1_,(undefined1)uStack_170));
      uStack_160 = uStack_13c;
      uStack_15c = uStack_138;
      uStack_158 = uStack_134;
      uStack_154 = DAT_ram_48222d58;
      uStack_150 = DAT_ram_48222d5c;
      uStack_14c = DAT_ram_48222d60;
      uStack_148 = DAT_ram_48222d64;
      uStack_144 = DAT_ram_48222d68;
      iStack_164 = iStack_174;
      uStack_140 = iStack_174;
      if ((uVar10 & 0xff) < 9) {
        uVar10 = uStack_178 & 0xff;
        bVar2 = uVar10 == 2;
        if (uVar10 == 1) {
          uVar10 = 3;
        }
        else if (uVar10 != 2) {
          uVar10 = 1;
        }
        iVar12 = FUN_ram_48025b94();
        iVar12 = FUN_ram_4805cb5e(*param_1,&iStack_164,bVar2,8,uVar10,1,iVar12 + 100000,7,
                                  &iStack_19c,0x10,((uStack_188 >> 8 & 0xff ^ 1) & 0xf) << 4,1,0,0);
        if (iVar12 != 0) {
          iVar12 = param_1[0x1c7] + 1;
          if (iVar12 == 0) {
            iVar12 = 1;
          }
          param_1[0x1c7] = iVar12;
          param_1[0x1cf] = iStack_19c;
          param_1[0x1d0] = uStack_188;
          param_1[0x1d1] = iStack_184;
          param_1[0x1d2] = iStack_180;
          param_1[0x1d3] = iStack_17c;
          param_1[0x1d4] = uStack_178;
          param_1[0x1d5] = iStack_174;
          param_1[0x1d6] = uStack_170;
          param_1[0x1d7] = iStack_16c;
          param_1[0x1d8] = uStack_168;
          if ((char)param_1[499] != '\0') {
            if (!bVar1) {
              return;
            }
            FUN_ram_480553f6(puVar11);
            return;
          }
          goto LAB_ram_480d79e2;
        }
        if ((char)param_1[0xf8] != '\0') goto LAB_ram_480d7e5e;
      }
      else {
LAB_ram_480d7e5e:
        *(undefined1 *)(param_1 + 0xf8) = 0;
        param_1[0xf0] = 0;
        param_1[0xf1] = 0;
        param_1[0xf2] = 0;
        param_1[0xf3] = 0;
        param_1[0xf4] = 0;
        param_1[0xf5] = 0;
        param_1[0xf6] = 0;
        param_1[0xf7] = 0;
        param_1[0x105] = param_1[0x105] + 1;
        *(undefined1 *)((int)param_1 + 0x35b) = 5;
        param_1[0xef] = 0;
        if (*(char *)((int)param_1 + 0x3be) == '\0') {
          if (((byte)(*(char *)((int)param_1 + 0x3bf) - 2U) < 2) ||
             (*(char *)((int)param_1 + 0x3bf) == '\x05')) {
            *(undefined1 *)((int)param_1 + 0x39d) = 1;
            param_1[0xe8] = param_2 + 5;
          }
          else {
            FUN_ram_4804a9c8(piVar13,param_2,5,'\a' - (char)param_1[0xd9]);
          }
        }
        else {
          if ((param_1[0xf9] != 0) && (param_1[0x102] == 0)) {
            param_1[0x102] = param_1[0xf9];
          }
          param_1[0xf9] = 0;
          param_1[0xfa] = 0;
          *(undefined2 *)(param_1 + 0xfb) = 0;
          param_1[0x100] = 0;
          param_1[0x101] = 0;
          param_1[0xef] = 0;
          param_1[0xf0] = 0;
          param_1[0xf1] = 0;
          param_1[0xf2] = 0;
          param_1[0xf3] = 0;
          param_1[0xf4] = 0;
          param_1[0xf5] = 0;
          param_1[0xf6] = 0;
          param_1[0xf7] = 0;
          *(undefined1 *)((int)param_1 + 0x35d) = 0;
          *(undefined1 *)((int)param_1 + 0x35e) = 0;
          param_1[0xd8] = 0;
          *(undefined2 *)(param_1 + 0xd9) = 0;
          *(undefined1 *)(param_1 + 0xe1) = 0;
          param_1[0xe2] = 0;
          param_1[0xe3] = 0;
          *(undefined1 *)(param_1 + 0xe5) = 0;
          param_1[0xe6] = 0;
          *(undefined2 *)(param_1 + 0xe7) = 0;
          param_1[0xe8] = 0;
          *(undefined1 *)((int)param_1 + 0x371) = 0;
          param_1[0xee] = 0;
          *(undefined2 *)(param_1 + 0xd6) = 5;
          *(undefined1 *)((int)param_1 + 0x35a) = 10;
        }
      }
      iVar12 = FUN_ram_480a108a(param_1,param_2);
      if (iVar12 == 0) {
        FUN_ram_480cc7e2(param_1,param_2);
        goto joined_r0x480d7ed0;
      }
    }
    if ((char)param_1[499] == '\0') {
LAB_ram_480d79e2:
      *(undefined1 *)(param_1 + 499) = 1;
      return;
    }
  }
joined_r0x480d7ed0:
  if (!bVar1) {
    return;
  }
LAB_ram_480d7bdc:
  fence();
  uVar10 = *puVar11;
  while( true ) {
    uVar5 = uVar10 - 1;
    if ((int)uVar10 < 0) {
      return;
    }
    if ((uVar10 & 0xffff) == 0) break;
    bVar1 = *puVar11 == uVar10;
    uVar10 = *puVar11;
    if (bVar1) {
      *puVar11 = uVar5;
      return;
    }
  }
  return;
}


