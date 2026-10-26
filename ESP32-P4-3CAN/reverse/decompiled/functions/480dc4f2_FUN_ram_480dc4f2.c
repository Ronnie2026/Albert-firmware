/* Firmware entry: 0x480dc4f2 */

void FUN_ram_480dc4f2(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char cVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  undefined4 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined4 local_b0 [18];
  undefined2 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar12 = *(uint *)(param_2 + 4);
  if (uVar12 == 0) {
    return;
  }
  bVar1 = false;
  if (*(char *)(param_2 + 0x14) != '\0') {
    bVar1 = *(int *)(param_2 + 8) != 0;
  }
  if (uVar12 >> 0x18 == 0xe) {
    puVar19 = (uint *)(param_1 + 0x981c);
    do {
      uVar21 = *puVar19;
      if (uVar12 == uVar21) {
        if (bVar1) {
          puVar19[1] = *(uint *)(param_2 + 8);
          uVar2 = FUN_ram_48025b94();
          FUN_ram_4ff3ec14(param_1 + 0xb28,0xffffffff);
          bVar5 = 1;
        }
        else {
          puVar19[1] = 0;
          uVar2 = FUN_ram_48025b94();
          FUN_ram_4ff3ec14(param_1 + 0xb28,0xffffffff);
          bVar5 = 2;
        }
        if (bVar5 <= *(byte *)(param_1 + 0x9b06)) {
          *(byte *)(param_1 + 0x9b06) = *(byte *)(param_1 + 0x9b06) - bVar5;
        }
        uVar12 = *(byte *)(param_1 + 0x9b04) + 1 & 0x1f;
        if (*(byte *)(param_1 + 0x9b05) == uVar12) {
          *(int *)(param_1 + 0x9b08) = *(int *)(param_1 + 0x9b08) + 1;
        }
        else {
          puVar13 = (undefined1 *)((uint)*(byte *)(param_1 + 0x9b04) * 0x14 + 0x9884 + param_1);
          *puVar13 = (char)uVar21;
          puVar13[4] = 0;
          puVar13[8] = (char)uVar2;
          puVar13[0xc] = 0;
          puVar13[0xd] = 0;
          puVar13[0xe] = 0;
          puVar13[0xf] = 0;
          puVar13[0x10] = bVar5;
          puVar13[1] = (char)(uVar21 >> 8);
          puVar13[2] = (char)(uVar21 >> 0x10);
          puVar13[3] = (char)(uVar21 >> 0x18);
          puVar13[9] = (char)((uint)uVar2 >> 8);
          puVar13[10] = (char)((uint)uVar2 >> 0x10);
          puVar13[0xb] = (char)((uint)uVar2 >> 0x18);
          *(char *)(param_1 + 0x9b04) = (char)uVar12;
        }
        FUN_ram_4ff3ee10(param_1 + 0xb28);
        if (!bVar1) {
          *puVar19 = 0;
          puVar19[1] = 0;
          FUN_ram_4805d240(param_1,param_2);
          cVar11 = *(char *)(param_2 + 0xd);
          iVar18 = 1;
          if (cVar11 == '\x01') {
            FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
            iVar18 = 0;
            goto LAB_ram_480dc82a;
          }
          if (cVar11 == '\x02') {
            FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
            goto LAB_ram_480dc82a;
          }
          if (cVar11 == '\x04') {
            FUN_ram_4ff3ec14();
            goto LAB_ram_480dc744;
          }
          FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
          goto LAB_ram_480dcc4e;
        }
        break;
      }
      puVar19 = puVar19 + 2;
    } while ((uint *)(param_1 + 0x987c) != puVar19);
    FUN_ram_4805d240(param_1,param_2);
    cVar11 = *(char *)(param_2 + 0xd);
    if (cVar11 == '\x01') goto LAB_ram_480dc80e;
LAB_ram_480dc546:
    iVar18 = 1;
    if (cVar11 == '\x02') goto LAB_ram_480dc810;
    if (cVar11 != '\x04') {
      FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
      if (bVar1) {
        *(int *)(param_1 + 0x1374) = *(int *)(param_1 + 0x1374) + 1;
      }
      else {
LAB_ram_480dcc4e:
        *(int *)(param_1 + 0x1378) = *(int *)(param_1 + 0x1378) + 1;
      }
      goto LAB_ram_480dc58e;
    }
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    iVar18 = 2;
    if (bVar1) goto LAB_ram_480dc56c;
LAB_ram_480dc744:
    iVar14 = *(int *)(param_1 + 0x1378);
    iVar18 = 2;
  }
  else {
    FUN_ram_4805d240(param_1,param_2);
    cVar11 = *(char *)(param_2 + 0xd);
    if (cVar11 != '\x01') goto LAB_ram_480dc546;
LAB_ram_480dc80e:
    iVar18 = 0;
LAB_ram_480dc810:
    FUN_ram_4ff3ec14(param_1 + 0xb20,0xffffffff);
    if (bVar1) {
LAB_ram_480dc56c:
      iVar18 = iVar18 * 4 + param_1;
      *(int *)(param_1 + 0x1374) = *(int *)(param_1 + 0x1374) + 1;
      *(int *)(iVar18 + 5000) = *(int *)(iVar18 + 5000) + 1;
      goto LAB_ram_480dc58e;
    }
LAB_ram_480dc82a:
    iVar14 = *(int *)(param_1 + 0x1378);
  }
  iVar18 = iVar18 * 4 + param_1;
  *(int *)(param_1 + 0x1378) = iVar14 + 1;
  *(int *)(iVar18 + 0x1394) = *(int *)(iVar18 + 0x1394) + 1;
LAB_ram_480dc58e:
  FUN_ram_4ff3ee10(param_1 + 0xb20);
  FUN_ram_480d7266(param_1 + 0x7cd0,param_2);
  FUN_ram_480db9d4(param_1 + 0x84a8,param_2);
  if ((*(int *)(param_2 + 4) == *(int *)(param_1 + 0x93c0)) && (*(int *)(param_2 + 4) != 0)) {
    cVar11 = *(char *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x93c0) = 0;
    if ((cVar11 == '\0') || (*(int *)(param_2 + 8) == 0)) {
      if (*(char *)(param_1 + 0x93d9) == '\0') {
        if ((*(int *)(param_1 + 0x9314) == *(int *)(param_1 + 0x92a4)) &&
           (*(char *)(param_1 + 0x9301) == '\0')) {
          *(undefined1 *)(param_1 + 0x929c) = 0;
          *(undefined1 *)(param_1 + 0x929e) = 0;
          *(undefined1 *)(param_1 + 0x929f) = 0;
          *(undefined1 *)(param_1 + 0x92a0) = 0;
          *(undefined1 *)(param_1 + 0x92a1) = 0;
          *(undefined1 *)(param_1 + 0x92a4) = 0;
          *(undefined1 *)(param_1 + 0x92a5) = 0;
          *(undefined1 *)(param_1 + 0x92a6) = 0;
          *(undefined1 *)(param_1 + 0x92a7) = 0;
          *(undefined1 *)(param_1 + 0x92a8) = 0;
          *(undefined1 *)(param_1 + 0x92a9) = 0;
          *(undefined1 *)(param_1 + 0x92aa) = 0;
          *(undefined1 *)(param_1 + 0x92ab) = 0;
          *(undefined1 *)(param_1 + 0x92ac) = 0;
          *(undefined1 *)(param_1 + 0x92ad) = 0;
        }
        FUN_ram_4805c6b0(*(undefined4 *)(param_1 + 0x9288),7,3,0);
        FUN_ram_480599fe(*(undefined4 *)(param_1 + 0x9288),0);
      }
      else if (*(char *)(param_1 + 0x93de) == '\0') {
        *(undefined1 *)(param_1 + 0x93dd) = 1;
        *(char *)(param_1 + 0x93d5) = *(char *)(param_1 + 0x93d5) + '\x01';
        uVar2 = FUN_ram_48025ba6();
        *(undefined4 *)(param_1 + 0x93d0) = uVar2;
      }
      else {
        FUN_ram_480c3f56(param_1 + 0x9288,0,2);
      }
    }
    else {
      *(int *)(param_1 + 0x93c4) = *(int *)(param_2 + 8);
      *(byte *)(param_1 + 0x93d4) = *(byte *)(param_1 + 0x9349) >> 4;
      *(undefined4 *)(param_1 + 0x9368) = *(undefined4 *)(param_1 + 0x9344);
      *(undefined4 *)(param_1 + 0x936c) = *(undefined4 *)(param_1 + 0x9348);
      *(undefined4 *)(param_1 + 0x9370) = *(undefined4 *)(param_1 + 0x934c);
      *(undefined4 *)(param_1 + 0x9374) = *(undefined4 *)(param_1 + 0x9350);
      *(undefined4 *)(param_1 + 0x9378) = *(undefined4 *)(param_1 + 0x9354);
      *(undefined4 *)(param_1 + 0x937c) = *(undefined4 *)(param_1 + 0x9358);
      *(undefined4 *)(param_1 + 0x9380) = *(undefined4 *)(param_1 + 0x935c);
      *(undefined4 *)(param_1 + 0x9384) = *(undefined4 *)(param_1 + 0x9360);
      *(undefined4 *)(param_1 + 0x9388) = *(undefined4 *)(param_1 + 0x9364);
      uVar2 = FUN_ram_48025ba6();
      *(undefined4 *)(param_1 + 0x93cc) = uVar2;
      *(undefined1 *)(param_1 + 0x93d7) = 1;
      if (*(char *)(param_1 + 0x93d9) == '\0') {
        uVar2 = FUN_ram_48025ba6();
        *(undefined4 *)(param_1 + 0x93c8) = uVar2;
        *(undefined1 *)(param_1 + 0x93d8) = 1;
        if ((*(int *)(param_1 + 0x9314) == *(int *)(param_1 + 0x92a4)) &&
           (*(char *)(param_1 + 0x9301) == '\0')) {
          *(undefined1 *)(param_1 + 0x9304) = 1;
          *(undefined1 *)(param_1 + 0x9301) = 1;
          *(undefined4 *)(param_1 + 0x92c4) = uVar2;
          *(undefined4 *)(param_1 + 0x92c0) = uVar2;
          *(int *)(param_1 + 0x92cc) = *(int *)(param_1 + 0x92cc) + 1;
          if ((*(char *)(param_1 + 0x92ad) != '\0') &&
             ((*(char *)(param_1 + 0x92ec) != '\0' && (*(char *)(param_1 + 0x92ed) == '\0')))) {
            *(undefined4 *)(param_1 + 0x92e8) = uVar2;
            *(undefined1 *)(param_1 + 0x92ed) = 1;
          }
          if ((*(char *)(param_1 + 0x929c) == '\x05') &&
             (*(int *)(param_1 + 0x92a8) == *(int *)(param_1 + 0x92b0))) {
            *(char *)(param_1 + 0x92f4) = *(char *)(param_1 + 0x92f4) + '\x01';
          }
          *(undefined1 *)(param_1 + 0x92ff) = 0;
        }
      }
    }
  }
  cVar11 = *(char *)(param_2 + 0x18);
  iVar18 = 2;
  if (cVar11 == '\x02') {
    iVar18 = 1;
  }
  else if (cVar11 != '\x04') {
    if (cVar11 != '\x01') {
      return;
    }
    iVar18 = 0;
  }
  uVar12 = (uint)*(byte *)(param_2 + 0x19);
  if (uVar12 < 0x18) {
    iVar14 = *(int *)(param_2 + 0x20);
    iVar16 = *(int *)(param_2 + 0x24);
    if (uVar12 < 0x10) {
      if (iVar14 == 0 && iVar16 == 0) {
        return;
      }
      iVar18 = iVar18 * 0x1228 + uVar12 * 0xe8 + 0x3a40;
    }
    else {
      iVar18 = (uVar12 - 0x10) * 0x120;
      iVar9 = param_1 + iVar18;
      if (*(char *)(iVar9 + 0x70d6) == '\0') {
        return;
      }
      if (*(char *)(iVar9 + 0x70b8) != cVar11) {
        return;
      }
      if (iVar14 == 0 && iVar16 == 0) {
        return;
      }
      iVar18 = iVar18 + 0x70f0;
    }
    iVar18 = iVar18 + param_1;
    iVar9 = *(int *)(iVar18 + 0xd8);
    iVar20 = *(int *)(iVar18 + 0xdc);
    if (((iVar14 == iVar9) && (iVar16 == iVar20)) && (*(char *)(iVar18 + 0xe6) == '\x03')) {
      if (*(char *)(iVar18 + 0x51) == '\0') {
        puVar10 = &DAT_ram_48222f40;
        puVar8 = local_b0;
        do {
          uVar2 = puVar10[1];
          uVar17 = puVar10[2];
          uVar15 = puVar10[3];
          uVar4 = puVar10[4];
          uVar6 = puVar10[5];
          *puVar8 = *puVar10;
          puVar8[1] = uVar2;
          puVar8[2] = uVar17;
          puVar8[3] = uVar15;
          puVar8[4] = uVar4;
          puVar8[5] = uVar6;
          puVar10 = puVar10 + 6;
          puVar8 = puVar8 + 6;
        } while (puVar10 != &DAT_ram_48222f88);
      }
      else {
        if (*(char *)(iVar18 + 0xb4) != '\0') {
          *(undefined1 *)(iVar18 + 0xe6) = 4;
          return;
        }
        bVar5 = *(byte *)(iVar18 + 0x52);
        uStack_118 = (uint)CONCAT11(*(byte *)(param_2 + 0x19),cVar11);
        if (bVar5 != 0) {
          pbVar22 = (byte *)(iVar18 + 0x58);
          bVar7 = 0;
          do {
            bVar7 = bVar7 + 1;
            iVar20 = (uint)*pbVar22 * 0x120;
            iVar9 = param_1 + iVar20;
            if (((((*pbVar22 < 8) && (*(int *)(pbVar22 + 8) != 0 || *(int *)(pbVar22 + 0xc) != 0))
                 && ((*(char *)(iVar9 + 0x70d6) != '\0' &&
                     ((*(int *)(iVar9 + 0x70c8) == *(int *)(pbVar22 + 8) &&
                      (iVar3 = iVar20 + 0x70b8 + param_1,
                      *(int *)(iVar9 + 0x70cc) == *(int *)(pbVar22 + 0xc))))))) &&
                (((*(uint *)(iVar3 + 0x28) ^ uStack_118) & 0xffff) == 0)) &&
               ((*(int *)(iVar3 + 0x30) == iVar14 && (*(int *)(iVar3 + 0x34) == iVar16)))) {
              *(undefined2 *)(param_1 + iVar20 + 0x70e0) = 0xff00;
              *(undefined4 *)(iVar9 + 0x70e8) = 0;
              *(undefined4 *)(iVar9 + 0x70ec) = 0;
              bVar5 = *(byte *)(iVar18 + 0x52);
            }
            pbVar22 = pbVar22 + 0x18;
          } while (bVar7 < bVar5);
          iVar9 = *(int *)(iVar18 + 0xd8);
          iVar20 = *(int *)(iVar18 + 0xdc);
        }
        puVar10 = &DAT_ram_48222f40;
        puVar8 = local_b0;
        do {
          uVar2 = puVar10[1];
          uVar17 = puVar10[2];
          uVar15 = puVar10[3];
          uVar4 = puVar10[4];
          uVar6 = puVar10[5];
          *puVar8 = *puVar10;
          puVar8[1] = uVar2;
          puVar8[2] = uVar17;
          puVar8[3] = uVar15;
          puVar8[4] = uVar4;
          puVar8[5] = uVar6;
          puVar10 = puVar10 + 6;
          puVar8 = puVar8 + 6;
        } while (puVar10 != &DAT_ram_48222f88);
      }
      uStack_f4 = 8;
      uStack_5c = 8;
      uStack_e0 = 0x10000;
      uStack_d4 = 0x1000000;
      uStack_c4 = 1;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fe = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_b6 = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_50 = 0xff00;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_22 = 0;
      uStack_24 = 0xffff;
      iVar18 = FUN_ram_4ff45158(iVar18,&uStack_108,0xe7);
      *(int *)(iVar18 + 0xd8) = iVar9;
      *(int *)(iVar18 + 0xdc) = iVar20;
    }
  }
  return;
}


