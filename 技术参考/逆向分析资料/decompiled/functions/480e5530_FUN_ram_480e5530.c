/* Firmware entry: 0x480e5530 */

void FUN_ram_480e5530(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint uVar14;
  byte bVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  undefined1 uVar23;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined2 uStack_298;
  undefined4 local_294 [2];
  byte bStack_28b;
  undefined4 auStack_288 [3];
  byte abStack_27a [16];
  char cStack_26a;
  ushort uStack_266;
  char cStack_264;
  char cStack_263;
  byte bStack_262;
  byte bStack_261;
  byte bStack_260;
  char cStack_25a;
  byte bStack_258;
  char cStack_250;
  char cStack_248;
  undefined1 uStack_244;
  undefined1 uStack_243;
  undefined1 uStack_23b;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_1fa;
  undefined4 uStack_1ec;
  undefined1 uStack_1b8;
  undefined4 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_182;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined1 uStack_164;
  int iStack_160;
  uint auStack_150 [3];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&uStack_244,0,0xf4);
  uStack_220._0_3_ = CONCAT12(1,(undefined2)uStack_220);
  uStack_1fa = 1;
  uStack_182 = 1;
  uStack_23b = 5;
  puVar16 = &DAT_ram_48223d70;
  puVar19 = local_294;
  uStack_234 = CONCAT31(uStack_234._1_3_,8);
  uStack_210 = 8;
  uStack_198 = 8;
  uStack_1ec = 0xffffffff;
  uStack_1b8 = 0xff;
  do {
    uVar7 = puVar16[1];
    uVar8 = puVar16[2];
    uVar12 = puVar16[3];
    *puVar19 = *puVar16;
    puVar19[1] = uVar7;
    puVar19[2] = uVar8;
    puVar19[3] = uVar12;
    puVar16 = puVar16 + 4;
    puVar19 = puVar19 + 4;
  } while (puVar16 != (undefined4 *)&DAT_ram_48223dc0);
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  if ((*(char *)(param_1 + 0x128c) != '\x03') || (*(byte *)(param_1 + 0x1298) <= param_2))
  goto LAB_ram_480e5690;
  iVar21 = param_1 + param_2 * 0xf4;
  FUN_ram_4ff45158(local_294,(uint)*(byte *)(iVar21 + 0x718) * 0x50 + param_1 + 0x158,0x4d);
  if (*(int *)(iVar21 + 0x7a0) != 0) {
    *(int *)(iVar21 + 0x794) = *(int *)(iVar21 + 0x794) + 1;
    goto LAB_ram_480e5690;
  }
  if (*(char *)(iVar21 + 0x809) != '\0') {
    uVar22 = (uint)uStack_266;
    uVar17 = param_3 - *(int *)(iVar21 + 0x7f0);
    iVar21 = param_2 * 0xf4 + 0x718 + param_1;
    if (uVar22 == 0) {
      uVar5 = 1000;
      if (*(int *)(iVar21 + 0xe4) == 0) {
LAB_ram_480e566e:
        if (uVar5 < uVar17) goto LAB_ram_480e5672;
      }
      else {
        uVar5 = *(int *)(iVar21 + 0xe4) * 3;
        if (99 < uVar5) {
          if (5000 < uVar5) {
            uVar5 = 5000;
          }
          goto LAB_ram_480e566e;
        }
        if (100 < uVar17) goto LAB_ram_480e5672;
      }
      iVar4 = FUN_ram_48025b94();
      if (*(int *)(iVar21 + 0xe4) == 0) {
        uVar17 = 1000000;
      }
      else {
        uVar5 = *(int *)(iVar21 + 0xe4) * 3;
        uVar17 = 100000;
        if (99 < uVar5) {
          if (5000 < uVar5) {
            uVar5 = 5000;
          }
          uVar17 = uVar5 * 1000;
        }
      }
    }
    else {
      if (uVar22 < uVar17) goto LAB_ram_480e5672;
      iVar4 = FUN_ram_48025b94();
      uVar17 = uVar22 * 1000;
    }
    if (*(char *)(iVar21 + 0xe0) != '\0') {
      iVar18 = param_2 * 0xf4 + param_1;
      uVar5 = iVar4 - *(int *)(iVar18 + 0x7f4);
      if ((-1 < (int)uVar5) && (uVar5 <= uVar17)) {
        *(undefined4 *)(iVar18 + 0x7a0) = 0xffffffff;
        FUN_ram_4ff45158(&uStack_244,iVar21,0xf3);
        FUN_ram_4ff3ee10(param_1);
        iVar4 = FUN_ram_48045922(param_4 + 0x1e08,uStack_243,0);
        if ((iVar4 != 0) &&
           ((cStack_264 == '\0' ||
            (iVar4 = FUN_ram_4805eda8(param_1,uStack_244,param_3,param_4), iVar4 != 0)))) {
          puVar6 = memset(auStack_150,0,0x120);
          uStack_2b8 = CONCAT22((short)((uint)DAT_ram_482230c8 >> 0x10),0x708);
          uStack_2c0 = CONCAT22((short)((uint)DAT_ram_482230c0 >> 0x10),&sedeleg);
          uStack_2a8 = CONCAT22(0xffff,CONCAT11(0xff,(char)DAT_ram_482230d8));
          uStack_2a4 = 0xffffffff;
          auStack_150[2] = uStack_2b8;
          auStack_150[0] = uStack_2c0;
          uStack_2a0 = CONCAT31((int3)((uint)DAT_ram_482230e0 >> 8),0xff);
          uStack_2b4 = DAT_ram_482230cc;
          uStack_2b0 = DAT_ram_482230d0;
          uStack_2ac = DAT_ram_482230d4;
          uStack_2bc = 0x3fd;
          auStack_150[1] = 0x3fd;
          uStack_144 = DAT_ram_482230cc;
          bVar11 = false;
          uStack_138 = uStack_2a8;
          uStack_134 = 0xffffffff;
          uStack_140 = DAT_ram_482230d0;
          uStack_13c = DAT_ram_482230d4;
          uStack_130 = 0xff;
LAB_ram_480e5826:
          if (!bVar11) {
            if (cStack_250 != '\0') {
              FUN_ram_4805d88e(&uStack_2c0,local_294,&iStack_238,uStack_1a0);
              if ((uStack_2c0 & 0xff) == 0) goto LAB_ram_480e5848;
              bVar15 = (byte)((uint)uStack_2a4 >> 8) & 1;
              bVar11 = cStack_26a == '\0';
              uVar23 = 2;
              goto LAB_ram_480e58c2;
            }
            if (uStack_22c._1_1_ != '\x01') goto LAB_ram_480e5890;
            bVar11 = true;
            if ((iStack_238 == 0x3fd) && ((uStack_234 & 0xff) == 8)) {
              puVar9 = &uStack_244;
              puVar13 = puVar6;
              do {
                pbVar1 = (byte *)((int)puVar13 + 0x11);
                pbVar2 = (byte *)((int)puVar13 + 9);
                puVar13 = (uint *)((int)puVar13 + 1);
                if (((puVar9[0x11] ^ *pbVar1) & *pbVar2) != 0) goto LAB_ram_480e5826;
                puVar9 = puVar9 + 1;
              } while (auStack_150 + 2 != puVar13);
              if (bStack_28b != 0) {
                uVar5 = (uint)bStack_260;
                uVar17 = 0;
                do {
                  uVar14 = (uint)abStack_27a[uVar17];
                  if ((((cStack_263 != '\0') && ((uint)bStack_262 == (uVar17 & 0xff))) &&
                      ((uVar5 - 1 & 0xff) < 8)) && (uVar5 + bStack_261 < 9)) {
                    uVar10 = 0xff;
                    if (uVar5 != 8) {
                      uVar10 = (1 << (uVar5 & 0x1f)) - 1U & 0xffff;
                    }
                    uVar14 = uVar10 << (bStack_261 & 0x1f) & 0xff | uVar14;
                  }
                  if ((cStack_25a != '\0') && ((uVar17 & 0xff) == (uint)bStack_258)) {
                    uVar14 = 0xff;
                  }
                  if ((uVar14 & *(byte *)((int)puVar6 + uVar17 + 0x19)) != 0) {
                    FUN_ram_4ff3ec14(param_1,0xffffffff);
                    iVar21 = param_2 * 0xf4 + param_1;
                    if (*(int *)(iVar21 + 0x7a0) == -1) {
                      *(undefined4 *)(iVar21 + 0x7a0) = 0;
                    }
                    *(undefined1 *)(param_2 * 0xf4 + param_1 + 0x721) = 3;
                    goto LAB_ram_480e5690;
                  }
                  uVar17 = uVar17 + 1;
                } while (bStack_28b != uVar17);
              }
            }
            goto LAB_ram_480e5826;
          }
LAB_ram_480e5890:
          FUN_ram_4805d88e(&uStack_2c0,local_294,&iStack_238,uStack_1a0);
          if ((uStack_2c0 & 0xff) == 0) {
LAB_ram_480e5848:
            FUN_ram_4ff3ec14(param_1,0xffffffff);
            iVar21 = param_2 * 0xf4 + param_1;
            if (*(int *)(iVar21 + 0x7a0) == -1) {
              *(undefined4 *)(iVar21 + 0x7a0) = 0;
            }
            iVar21 = param_2 * 0xf4 + param_1;
            *(int *)(iVar21 + 0x788) = *(int *)(iVar21 + 0x788) + 1;
            goto LAB_ram_480e5690;
          }
          bVar15 = (byte)((uint)uStack_2a4 >> 8) & 1;
          bVar11 = cStack_26a == '\0';
          uVar23 = bVar11;
          if (cStack_250 != '\0') {
            uVar23 = 2;
          }
LAB_ram_480e58c2:
          uStack_2e8 = 0;
          FUN_ram_4ff3ec14(param_4 + 0x8200,0xffffffff);
          cVar20 = *(char *)(param_4 + 0x8209);
          FUN_ram_4ff3ee10(param_4 + 0x8200);
          iVar4 = FUN_ram_4ff22e9e(&iStack_238,0);
          if (((iVar4 == 1) &&
              (uVar17 = FUN_ram_480409ae(&iStack_238,0,0), (0x80001U >> (uVar17 & 0x1f) & 1) != 0))
             && (cStack_248 != -1)) {
            if (cStack_248 != '\x01') {
              cVar20 = '\x03';
              if (cStack_248 == '\x02') {
                iVar4 = 2;
                cVar20 = cStack_248;
              }
              goto LAB_ram_480e5918;
            }
          }
          else if ((((cVar20 == '\0') || (uStack_22c._1_1_ != '\x02')) || (iStack_238 != 0x3c2)) ||
                  (((char)uStack_234 != '\b' ||
                   (uVar17 = uStack_234 >> 8 & 3, cStack_248 = (char)uVar17, uVar17 != 1)))) {
            cVar20 = '\x04' - (char)iVar4;
            goto LAB_ram_480e5918;
          }
          iVar4 = 3;
          cVar20 = cStack_248;
LAB_ram_480e5918:
          if (uVar22 == 0) {
            iVar18 = 1000000;
            if (iStack_160 != 0) {
              uVar17 = iStack_160 * 3;
              iVar18 = 100000;
              if (99 < uVar17) {
                if (5000 < uVar17) {
                  uVar17 = 5000;
                }
                iVar18 = uVar17 * 1000;
              }
            }
          }
          else {
            iVar18 = uVar22 * 1000;
          }
          bVar3 = uStack_2a4._1_1_ & 0xfe;
          uStack_2a4 = CONCAT22(CONCAT11(uStack_2a4._3_1_,(char)iVar4),
                                CONCAT11(bVar3 | bVar15 | bVar11,(undefined1)uStack_2a4));
          uStack_2cc = uStack_2a4;
          uStack_308 = uStack_2a4;
          uStack_2dc = uStack_2b4;
          uStack_318 = uStack_2b4;
          uStack_2d8 = uStack_2b0;
          uStack_314 = uStack_2b0;
          uStack_2e0 = uStack_2b8;
          uStack_31c = uStack_2b8;
          uStack_2d4 = uStack_2ac;
          uStack_310 = uStack_2ac;
          uStack_2d0 = uStack_2a8;
          uStack_30c = uStack_2a8;
          uStack_2c8 = uStack_2a0;
          uStack_304 = uStack_2a0;
          uStack_2c4 = uStack_29c;
          uStack_300 = uStack_29c;
          uStack_2e4 = uStack_2bc;
          local_320 = uStack_2bc;
          iVar4 = FUN_ram_480a061e(param_4 + 0x2870,&local_320,uVar23,&uStack_2e8,param_2,iVar18);
          FUN_ram_4ff3ec14(param_1,0xffffffff);
          iVar18 = param_2 * 0xf4 + param_1;
          *(char *)(iVar18 + 0x7a4) = cVar20;
          *(undefined4 *)(iVar18 + 0x748) = uStack_2bc;
          *(int *)(iVar18 + 0x780) = *(int *)(iVar18 + 0x780) + 1;
          *(undefined4 *)(iVar18 + 0x74c) = uStack_2b8;
          *(undefined4 *)(iVar18 + 0x750) = uStack_2b4;
          *(undefined4 *)(iVar18 + 0x754) = uStack_2b0;
          *(undefined4 *)(iVar18 + 0x758) = uStack_2ac;
          *(undefined4 *)(iVar18 + 0x75c) = uStack_2a8;
          *(undefined4 *)(iVar18 + 0x760) = uStack_2a4;
          *(undefined4 *)(iVar18 + 0x764) = uStack_2a0;
          *(undefined4 *)(iVar18 + 0x768) = uStack_29c;
          if (iVar4 == 0) {
            *(undefined4 *)(iVar18 + 0x7a0) = 0;
            *(int *)(iVar18 + 0x788) = *(int *)(iVar18 + 0x788) + 1;
          }
          else {
            *(undefined2 *)(iVar18 + 0x7be) = uStack_298;
            *(int *)(iVar18 + 0x7c0) = iStack_238;
            *(uint *)(iVar18 + 0x7c4) = uStack_234;
            *(undefined4 *)(iVar18 + 0x7c8) = uStack_230;
            *(undefined4 *)(iVar18 + 0x7cc) = uStack_22c;
            *(undefined4 *)(iVar18 + 0x7a0) = uStack_2e8;
            *(undefined4 *)(iVar18 + 2000) = uStack_228;
            *(undefined4 *)(iVar18 + 0x7d4) = uStack_224;
            *(undefined4 *)(iVar18 + 0x7d8) = uStack_220;
            *(undefined4 *)(iVar18 + 0x7dc) = uStack_21c;
            *(undefined4 *)(iVar18 + 0x7e0) = uStack_218;
            *(undefined1 *)(iVar21 + 0xcc) = uStack_168;
            *(undefined1 *)(iVar21 + 0xcd) = uStack_167;
            *(undefined1 *)(iVar21 + 0xce) = uStack_166;
            *(undefined1 *)(iVar21 + 0xcf) = uStack_165;
            *(undefined1 *)(iVar21 + 0xd0) = uStack_164;
            *(undefined4 *)(iVar18 + 0x7ec) = uStack_16c;
          }
          *(undefined1 *)(param_2 * 0xf4 + param_1 + 0x721) = 1;
          FUN_ram_4ff3ee10(param_1);
          FUN_ram_480e4fac(param_4 + 0x2870);
          return;
        }
        FUN_ram_4ff3ec14(param_1,0xffffffff);
        iVar21 = param_2 * 0xf4 + param_1;
        if (*(int *)(iVar21 + 0x7a0) == -1) {
          *(undefined4 *)(iVar21 + 0x7a0) = 0;
        }
        *(undefined1 *)(param_2 * 0xf4 + param_1 + 0x721) = 2;
        goto LAB_ram_480e5690;
      }
    }
  }
LAB_ram_480e5672:
  *(undefined1 *)(param_2 * 0xf4 + param_1 + 0x721) = 0;
  if ((cStack_26a == '\x02') || (param_5 != 0)) {
    iVar21 = param_2 * 0xf4 + param_1;
    *(int *)(iVar21 + 0x798) = *(int *)(iVar21 + 0x798) + 1;
  }
LAB_ram_480e5690:
  FUN_ram_4ff3ee10(param_1);
  return;
}


