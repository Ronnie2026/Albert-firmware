/* Firmware entry: 0x48044258 */

uint FUN_ram_48044258(byte *param_1,int param_2,int param_3,uint param_4,uint param_5,byte param_6,
                     uint param_7,int param_8,undefined4 param_9,int param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  byte extraout_a1;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  byte bStack_f0;
  uint uStack_ec;
  undefined4 uStack_c8;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bStack_f0 = (byte)(param_5 >> 0x18);
  bVar6 = (byte)(param_5 >> 0x10);
  bVar13 = 0;
  if ((param_4 != 0) && (param_1[0x19f] == 0)) {
    bVar13 = param_1[0x1a2] ^ 1;
  }
  FUN_ram_4804304e(param_1,param_2,param_3,bVar13,param_7,param_8);
  bVar13 = param_1[0xb4];
  bVar12 = 0;
  if (bVar13 != 0) {
    bVar12 = param_1[0x4c];
  }
  if (param_8 == 0) {
    uVar26 = 0;
    if (param_1[2] != 0) {
      uVar10 = 0;
      if ((param_1[0x124] != 0) && ((uint)(param_2 - *(int *)(param_1 + 0x128)) < 0x5dd)) {
        uVar10 = 1;
        if ((param_1[0x114] == 0) && (uVar10 = 0, param_1[0x115] != 0)) {
          uVar10 = (uint)((uint)(param_2 - *(int *)(param_1 + 0x118)) <
                         (uint)*(ushort *)(param_1 + 6));
        }
        if ((param_1[0x11c] != 0) ||
           ((param_1[0x11d] != 0 &&
            ((uint)(param_2 - *(int *)(param_1 + 0x120)) < (uint)*(ushort *)(param_1 + 6))))) {
          uVar10 = uVar10 | 2;
        }
      }
      uVar16 = 0;
      uVar26 = 0;
      do {
        uVar17 = uVar16 & 0x1f;
        uVar18 = uVar16 & 0xf;
        uVar16 = uVar16 + 1;
        if ((param_1[4] >> uVar17 & 1) != 0) {
          uVar26 = uVar26 | uVar10 << (uVar18 << 1) & 0xff;
        }
      } while (uVar16 != 3);
    }
    if (param_1[8] == 0) goto LAB_ram_48044414;
    uVar16 = 0;
    if ((((param_1[0x132] != 0) && ((uint)(param_2 - *(int *)(param_1 + 0x134)) < 0x1f5)) &&
        (uVar16 = (uint)param_1[0x130], param_1[9] == 0)) && (uVar16 == 3)) {
      uVar16 = 0;
    }
    uVar17 = 0;
    uVar10 = 0;
    do {
      uVar18 = uVar17 & 0x1f;
      uVar14 = uVar17 & 0xf;
      uVar17 = uVar17 + 1;
      if ((param_1[0xb] >> uVar18 & 1) != 0) {
        uVar10 = uVar10 | (uVar16 & 3) << (uVar14 << 1) & 0xff;
      }
    } while (uVar17 != 3);
    uVar17 = 0;
    if (((param_1[0x132] != 0) && ((uint)(param_2 - *(int *)(param_1 + 0x134)) < 0x1f5)) &&
       ((param_1[9] != 0 || (param_1[0x130] != 3)))) {
      uVar17 = (uint)param_1[0x131];
    }
    uVar18 = 0;
    uVar16 = 0;
    do {
      uVar14 = uVar18 & 0x1f;
      uVar27 = uVar18 & 0xf;
      uVar18 = uVar18 + 1;
      if ((param_1[0xb] >> uVar14 & 1) != 0) {
        uVar16 = uVar16 | (uVar17 & 3) << (uVar27 << 1) & 0xff;
      }
    } while (uVar18 != 3);
    if ((uint)param_1[0x1a1] != (param_4 ^ 1)) goto LAB_ram_48044420;
  }
  else {
    uVar26 = 0;
LAB_ram_48044414:
    uVar16 = 0;
    uVar10 = 0;
    if ((uint)param_1[0x1a1] != (param_4 ^ 1)) {
LAB_ram_48044420:
      param_1[0x1a1] = (byte)param_4 ^ 1;
      FUN_ram_480439fa(param_1);
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar17 = (uint)param_1[0x2e8];
  if (uVar17 == 0) {
    if (bVar13 == 0) {
      return 0;
    }
  }
  else {
    iVar22 = *(int *)(param_1 + 0x314);
    if ((param_3 == iVar22) &&
       (iVar24 = *(int *)(param_1 + 0x310), (uint)(param_2 - iVar24) < 0x5dd)) {
      if (param_1[0x325] != 0) {
        return 0;
      }
      if (param_1[0x37c] != 0) {
        return 0;
      }
      iVar25 = *(int *)(param_1 + 0x31c);
      if (*(int *)(param_1 + 400) == iVar25) {
        return 0;
      }
      if (param_1[0x19f] != 0) {
        if (param_1[0x1a0] == 0) {
          return 0;
        }
        if (iVar25 == *(int *)(param_1 + 0x198)) {
          return 0;
        }
        param_1[0x19f] = 0;
        param_1[0x19d] = 0;
        FUN_ram_480439fa(param_1);
      }
      uVar18 = (uint)*param_1;
      uVar14 = 0;
      uVar27 = param_7;
      uStack_c8 = param_5;
      if (uVar18 == 0) {
        if (((param_1[1] == 0) || (param_7 == 0)) || (param_8 != 0)) {
          uVar19 = (uint)param_1[0x324];
          goto LAB_ram_48044af4;
        }
        if (bVar12 != 0) goto LAB_ram_48044520;
        param_1[0x110] = 0;
LAB_ram_480445b6:
        if ((((param_1[0x17f] == 0) || ((uint)param_1[0x182] != (param_5 >> 0x10 & 0xff))) ||
            ((uint)param_1[0x183] != param_5 >> 0x18)) ||
           ((param_1[0x184] != param_6 ||
            (bVar9 = param_1[0x182], bVar3 = param_1[0x183],
            0x27 < (uint)(param_2 - *(int *)(param_1 + 0x188)))))) {
          *(uint *)(param_1 + 0x180) = param_5;
          *(int *)(param_1 + 0x188) = param_2;
          param_1[0x184] = param_6;
          param_1[0x17f] = 1;
          bVar9 = bVar6;
          bVar3 = bStack_f0;
        }
        bStack_f0 = bVar3;
        bVar6 = bVar9;
        uStack_c8 = *(uint *)(param_1 + 0x180);
        param_6 = param_1[0x184];
        uVar19 = 0;
        uVar14 = uVar17;
      }
      else {
        uVar19 = (uint)param_1[0x324];
        if (param_8 == 0) {
          if ((param_1[1] == 0) || (param_7 == 0)) {
            if (bVar12 == 0) {
              param_1[0x110] = 0;
              uVar19 = 0;
              param_1[0x17f] = 0;
              goto LAB_ram_480445fc;
            }
            uVar27 = 0;
          }
          else {
            if (uVar19 != 0) {
              uVar27 = uVar19;
            }
            uVar18 = uVar27;
            if (bVar12 == 0) {
              param_1[0x110] = 0;
              uVar18 = param_7;
              goto LAB_ram_480445b6;
            }
          }
LAB_ram_48044520:
          iVar28 = *(int *)(param_1 + 0xd8);
          if (((param_1[0x110] == 0) || (*(int *)(param_1 + 0x108) != iVar28)) ||
             (0x27 < (uint)(param_2 - *(int *)(param_1 + 0x10c)))) {
            uVar19 = 0;
            do {
              uVar8 = FUN_ram_48042696(param_1 + 0x38,uVar19 & 0xff,param_2);
              param_1[uVar19 * 5 + 0xec] = extraout_a1;
              param_1[uVar19 * 5 + 0xe8] = (byte)uVar8;
              uVar7 = uVar19 + 1;
              param_1[uVar19 * 5 + 0xe9] = (byte)((uint)uVar8 >> 8);
              param_1[uVar19 * 5 + 0xea] = (byte)((uint)uVar8 >> 0x10);
              param_1[uVar19 * 5 + 0xeb] = (byte)((uint)uVar8 >> 0x18);
              uVar19 = uVar7;
            } while (uVar7 != 6);
            *(int *)(param_1 + 0x108) = iVar28;
            *(int *)(param_1 + 0x10c) = param_2;
            param_1[0x110] = 1;
          }
          uVar19 = 0;
          if (uVar27 != 0) goto LAB_ram_480445b6;
        }
        else {
LAB_ram_48044af4:
          if (uVar19 == 0) {
            if ((uVar10 == 0 && uVar26 == 0) && bVar12 == 0) {
              return 0;
            }
LAB_ram_48044b4c:
            if (bVar12 == 0) {
              param_1[0x110] = 0;
              uVar18 = 0;
              uVar19 = 0;
              param_1[0x17f] = 0;
              goto LAB_ram_480445fc;
            }
            uVar27 = 0;
            uVar18 = 0;
            goto LAB_ram_48044520;
          }
          if ((uVar10 != 0 || uVar26 != 0) || bVar12 != 0) goto LAB_ram_48044b4c;
          param_1[0x110] = 0;
          uVar18 = 0;
          uVar19 = uVar17;
        }
        param_1[0x17f] = 0;
      }
LAB_ram_480445fc:
      uVar27 = uVar17;
      if (param_1[0x17d] != 0) {
        uVar27 = uVar19 ^ param_1[0x17e];
      }
      uVar7 = 0;
      do {
        uStack_94 = *(undefined4 *)(param_1 + 0x2ec);
        uStack_90 = *(uint *)(param_1 + 0x2f0);
        uStack_8c = *(uint *)(param_1 + 0x2f4);
        uStack_88 = *(undefined4 *)(param_1 + 0x2f8);
        uStack_84 = *(undefined4 *)(param_1 + 0x2fc);
        uStack_80 = *(undefined4 *)(param_1 + 0x300);
        uStack_7c = *(undefined4 *)(param_1 + 0x304);
        uStack_78 = *(undefined4 *)(param_1 + 0x308);
        uStack_74 = *(undefined4 *)(param_1 + 0x30c);
        if (uVar19 == 0) {
          uStack_c8._0_3_ = CONCAT12(bVar6,(undefined2)uStack_c8);
          uStack_b4 = CONCAT31(uStack_b4._1_3_,param_6);
          uStack_c8 = CONCAT13(bStack_f0,(undefined3)uStack_c8);
          uStack_b8 = uStack_c8;
          FUN_ram_48043ec8(param_1,&uStack_94,uVar18,uVar14,uStack_c8,uStack_b4,uVar7 & 0xff,uVar26,
                           uVar10,uVar16);
          if (((uVar18 != 0) || (uVar14 != 0)) || (bVar13 != 0 || (uVar10 != 0 || uVar26 != 0))) {
            if ((uStack_90 & 0x600) == 0) {
              uStack_8c = uStack_8c & 0xffff80ff;
            }
            uStack_90 = uStack_90 & 0xfffff9ff | 0x200;
          }
        }
        pbVar20 = param_1 + uVar7 * 5;
        pbVar11 = (byte *)((int)&uStack_90 + 1);
        do {
          bVar9 = *pbVar11;
          bVar3 = pbVar20[0x15f];
          pbVar11 = pbVar11 + 1;
          pbVar20[0x15f] = bVar9;
          uVar27 = uVar27 | bVar3 != bVar9;
          pbVar20 = pbVar20 + 1;
        } while ((byte *)((int)&uStack_8c + 2) != pbVar11);
        uVar7 = uVar7 + 1;
      } while (uVar7 != 6);
      param_1[0x17e] = (byte)uVar19;
      param_1[0x17d] = 1;
      if (uVar27 == 0) {
        if (0xb < param_1[0x19c]) {
          return 0;
        }
      }
      else {
        param_1[0x19c] = 0;
        iVar28 = *(int *)(param_1 + 0x1d8) + 1;
        if (iVar28 == 0) {
          iVar28 = 1;
        }
        *(int *)(param_1 + 0x1d8) = iVar28;
        FUN_ram_480439fa(param_1);
      }
      uStack_90 = *(uint *)(param_1 + 0x2f0);
      iStack_64 = param_10 + 10000;
      iStack_5c = param_10;
      uStack_7c = *(uint *)(param_1 + 0x304) | 0x100;
      uStack_8c = *(uint *)(param_1 + 0x2f4);
      uStack_84 = *(undefined4 *)(param_1 + 0x2fc);
      uStack_88 = *(undefined4 *)(param_1 + 0x2f8);
      uStack_80 = *(undefined4 *)(param_1 + 0x300);
      uStack_94 = *(undefined4 *)(param_1 + 0x2ec);
      uStack_78 = *(undefined4 *)(param_1 + 0x308);
      uStack_74 = *(undefined4 *)(param_1 + 0x30c);
      uStack_70 = *(undefined4 *)(param_1 + 0x318);
      uStack_68 = *(undefined4 *)(param_1 + 0x18c);
      uStack_4c = 0;
      uStack_48 = 0;
      iStack_44 = uVar19 << 8;
      iStack_50 = (uint)CONCAT12((char)uVar16,CONCAT11((char)uVar10,(char)uVar26)) << 8;
      uVar8 = 0;
      iStack_6c = iVar24;
      iStack_60 = param_2;
      iStack_58 = iVar22;
      iStack_54 = iVar25;
      if (((param_8 == 0) && (param_1[8] != 0)) &&
         (iVar22 = FUN_ram_480319ac(param_1,param_2), iVar22 != 0)) {
        uVar8 = *(undefined4 *)(param_1 + 0x138);
      }
      uStack_48 = *(undefined4 *)(param_1 + 0xd8);
      iStack_44 = CONCAT31(iStack_44._1_3_,bVar12);
      uStack_4c = uVar8;
      if (uVar19 == 0) {
        uVar27 = 0;
        uVar19 = 0;
        pbVar11 = param_1;
        do {
          pbVar20 = pbVar11 + 5;
          bVar9 = param_1[0x140] >> (uVar27 & 0x1f) & 1;
          do {
            pbVar1 = pbVar11 + 0x15f;
            pbVar2 = pbVar11 + 0x141;
            pbVar11 = pbVar11 + 1;
            bVar9 = bVar9 & *pbVar1 == *pbVar2;
          } while (pbVar20 != pbVar11);
          if (bVar9 == 0) {
            uVar19 = uVar19 | 1 << (uVar27 & 0x1f) & 0xffU;
          }
          uVar27 = uVar27 + 1;
          pbVar11 = pbVar20;
        } while (uVar27 != 6);
        if (uVar19 == 0) {
          return 0;
        }
        uVar7 = (uint)param_1[0x13f];
        uVar27 = uVar7;
        do {
          uVar23 = uVar27 % 6;
          uVar27 = uVar27 + 1;
          if ((uVar19 >> uVar23 & 1) != 0) break;
          uVar23 = uVar7;
        } while (uVar7 + 6 != uVar27);
        if ((bVar12 != 0) && ((uVar19 >> (param_1[0xb8] & 0x1f) & 1) != 0)) {
          uVar23 = (uint)param_1[0xb8];
        }
        uVar27 = uVar10 ^ param_1[0x13c] | uVar16 ^ param_1[0x13d];
        if ((uVar19 & (uVar27 | uVar26 ^ param_1[0x13e])) != 0) {
          uVar23 = __ctzsi2();
          uVar23 = uVar23 & 0xff;
        }
        if ((uVar27 & uVar19 & 0x30) != 0) {
          uVar23 = __ctzsi2();
          uVar23 = uVar23 & 0xff;
        }
        uStack_c8._0_3_ = CONCAT12(bVar6,(undefined2)uStack_c8);
        uStack_b4 = CONCAT31(uStack_b4._1_3_,param_6);
        uStack_c8 = CONCAT13(bStack_f0,(undefined3)uStack_c8);
        uStack_b8 = uStack_c8;
        FUN_ram_48043ec8(param_1,&uStack_94,uVar18,uVar14,uStack_c8,uStack_b4,uVar23,uVar26,uVar10,
                         uVar16);
        if (((uVar18 != 0) || (uVar14 != 0)) || (bVar13 != 0 || (uVar10 != 0 || uVar26 != 0))) {
          if ((uStack_90 & 0x600) == 0) {
            uStack_8c = uStack_8c & 0xffff80ff;
          }
          uStack_90 = uStack_90 & 0xfffff9ff | 0x200;
        }
        uStack_ec = 0;
        uVar27 = 0;
        do {
          uStack_b8 = *(uint *)(param_1 + 0x2ec);
          uStack_b0 = *(uint *)(param_1 + 0x2f4);
          uStack_ac = *(undefined4 *)(param_1 + 0x2f8);
          uStack_a8 = *(undefined4 *)(param_1 + 0x2fc);
          uStack_a0 = *(undefined4 *)(param_1 + 0x304);
          uStack_b4 = *(uint *)(param_1 + 0x2f0);
          uStack_a4 = *(undefined4 *)(param_1 + 0x300);
          uStack_9c = *(undefined4 *)(param_1 + 0x308);
          uStack_c8._0_3_ = CONCAT12(bVar6,(undefined2)uStack_c8);
          uStack_c8 = CONCAT13(bStack_f0,(undefined3)uStack_c8);
          uStack_98 = *(undefined4 *)(param_1 + 0x30c);
          FUN_ram_48043ec8(param_1,&uStack_b8,uVar18,uVar14,uStack_c8,param_6,uVar27 & 0xff,uVar26,
                           uVar10,uVar16);
          if (((uVar18 != 0) || (uVar14 != 0)) || (bVar13 != 0 || (uVar10 != 0 || uVar26 != 0))) {
            if ((uStack_b4 & 0x600) == 0) {
              uStack_b0 = uStack_b0 & 0xffff80ff;
            }
            uStack_b4 = uStack_b4 & 0xfffff9ff | 0x200;
          }
          pcVar21 = (char *)((int)&uStack_b4 + 1);
          pcVar15 = (char *)((int)&uStack_90 + 1);
          uVar7 = uVar17;
          do {
            cVar4 = *pcVar21;
            cVar5 = *pcVar15;
            pcVar21 = pcVar21 + 1;
            pcVar15 = pcVar15 + 1;
            uVar7 = uVar7 & cVar4 == cVar5;
          } while ((char *)((int)&uStack_b0 + 2) != pcVar21);
          if ((uVar7 != 0) && ((uVar19 >> (uVar27 & 0x1f) & 1) != 0)) {
            uStack_ec = 1 << (uVar27 & 0x1f) & 0xffU | uStack_ec;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != 6);
        uVar26 = uVar23 + 1;
        do {
          uVar10 = uVar26 % 6;
          uVar26 = uVar26 + 1;
          if ((uStack_ec >> uVar10 & 1) == 0) break;
          uVar10 = uVar23;
        } while (uVar26 != uVar23 + 7);
        bVar6 = uStack_8c._2_1_ & 7;
        iStack_50 = CONCAT31(iStack_50._1_3_,(char)uVar10);
        uStack_8c = CONCAT13((byte)(uStack_ec >> 5) | uStack_8c._3_1_ & 0xfe,
                             CONCAT12(bVar6 | (byte)(uStack_ec << 3),(undefined2)uStack_8c));
      }
      FUN_ram_4ff45158(param_9,&uStack_94,0x52);
      return uVar17;
    }
    if (bVar13 == 0) goto LAB_ram_480443ca;
  }
  FUN_ram_48042e98(param_1);
  if (param_1[0x2e8] == 0) {
    return 0;
  }
LAB_ram_480443ca:
  if (*(int *)(param_1 + 0x194) != *(int *)(param_1 + 0x31c)) {
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x31c);
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
    FUN_ram_480439fa(param_1);
  }
  return 0;
}


