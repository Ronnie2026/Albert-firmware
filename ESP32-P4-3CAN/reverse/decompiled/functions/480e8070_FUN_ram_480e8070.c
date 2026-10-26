/* Firmware entry: 0x480e8070 */

void FUN_ram_480e8070(int param_1,byte *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  int iVar9;
  byte bVar10;
  ushort uVar11;
  undefined4 uVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  undefined4 uVar16;
  char cVar17;
  undefined1 uVar18;
  char cVar19;
  ushort uVar20;
  short *psVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  bool bVar29;
  undefined1 uVar30;
  undefined4 *puVar31;
  ushort *puVar32;
  byte *pbVar33;
  undefined1 *puVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  byte bVar38;
  int *piVar39;
  uint *puVar40;
  uint uVar41;
  uint uVar42;
  undefined4 local_270 [20];
  undefined4 local_220 [44];
  undefined4 local_170 [16];
  undefined4 local_130;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  char cStack_127;
  undefined1 uStack_126;
  char cStack_125;
  char cStack_124;
  char cStack_123;
  undefined2 uStack_122;
  undefined4 local_120 [2];
  undefined1 uStack_118;
  byte bStack_117;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_10c [32];
  char cStack_ec;
  char cStack_e9;
  char cStack_d4;
  undefined1 uStack_c8;
  char cStack_c2;
  char cStack_c1;
  char cStack_b5;
  undefined1 uStack_9e;
  undefined1 uStack_97;
  undefined1 uStack_7c;
  undefined1 uStack_6f;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar27 = local_270;
  iVar9 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar9,0xffffffff);
  piVar39 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar9);
  uVar12 = 0;
  if (piVar39 != (int *)0x0) {
    uVar12 = (**(code **)(*piVar39 + 0x154))(piVar39,1);
  }
  *(undefined4 *)(param_1 + 0x9c4) = uVar12;
  FUN_ram_4ff3ec14(iVar9,0xffffffff);
  piVar39 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar9);
  uVar12 = 0;
  if (piVar39 != (int *)0x0) {
    uVar12 = (**(code **)(*piVar39 + 0x154))(piVar39,2);
  }
  *(undefined4 *)(param_1 + 0x9c8) = uVar12;
  FUN_ram_4ff3ec14(iVar9,0xffffffff);
  piVar39 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar9);
  uVar12 = 0;
  if (piVar39 != (int *)0x0) {
    uVar12 = (**(code **)(*piVar39 + 0x154))(piVar39,4);
  }
  bVar10 = *param_2;
  *(undefined4 *)(param_1 + 0x9cc) = uVar12;
  param_2[0x181] = 1;
  if (bVar10 == 0xc) {
    uVar12 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(param_1 + 0x8820,0xffffffff);
    if (*(char *)(param_1 + 0x885b) != '\0') {
      *(undefined4 *)(param_1 + 0x8828) = uVar12;
      *(undefined1 *)(param_1 + 0x885b) = 0;
      *(undefined2 *)(param_1 + 0x885c) = 0;
      *(undefined1 *)(param_1 + 0x885e) = 0;
      *(undefined4 *)(param_1 + 0x8868) = 0;
      *(undefined1 *)(param_1 + 0x883e) = 0;
      *(undefined1 *)(param_1 + 0x8840) = 0;
      *(undefined1 *)(param_1 + 0x8856) = 0;
      *(char *)(param_1 + 0x8845) = *(char *)(param_1 + 0x8843);
      *(undefined1 *)(param_1 + 0x8846) = *(undefined1 *)(param_1 + 0x8844);
      if (*(char *)(param_1 + 0x8843) == '\0') {
        if (*(char *)(param_1 + 0x8842) == '\0') {
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined1 *)(param_1 + 0x8857) = 0;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x882c) + 1;
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          *(int *)(param_1 + 0x882c) = iVar9;
          *(undefined4 *)(param_1 + 0x8834) = uVar12;
          *(undefined1 *)(param_1 + 0x883c) = 0;
          *(undefined1 *)(param_1 + 0x883f) = 0;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
          *(undefined4 *)(param_1 + 0x8838) = 1;
          *(undefined1 *)(param_1 + 0x8857) = 3;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x8838) = 0;
        iVar9 = *(int *)(param_1 + 0x8860) + 1;
        if (iVar9 == 0) {
          iVar9 = 1;
        }
        *(int *)(param_1 + 0x8860) = iVar9;
        *(undefined1 *)(param_1 + 0x8857) = 0;
        *(undefined1 *)(param_1 + 0x8859) = 0;
        *(undefined1 *)(param_1 + 0x884b) = 0;
        *(undefined1 *)(param_1 + 0x8853) = 0;
        *(undefined1 *)(param_1 + 0x8855) = 0;
        *(undefined4 *)(param_1 + 0x8884) = 0;
        *(undefined4 *)(param_1 + 0x8888) = 0;
        *(undefined2 *)(param_1 + 0x8850) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 1;
        *(undefined2 *)(param_1 + 0x8848) = 1;
      }
    }
    FUN_ram_4ff3ee10(param_1 + 0x8820);
    uVar12 = FUN_ram_48025ba6();
    FUN_ram_4809f360(param_1 + 0x84a8,uVar12);
    fence();
    *(undefined1 *)(param_1 + 0x8a18) = 0;
    return;
  }
  if (bVar10 < 0xd) {
    if (bVar10 == 6) {
      iVar9 = FUN_ram_4804162c(param_2 + 0xae);
      if (iVar9 == 0) {
        return;
      }
      bVar10 = *(byte *)(param_1 + 1);
      bVar38 = param_2[0xaf];
      FUN_ram_4ff45158(param_1,param_2 + 0xae,0x36);
      iVar9 = param_1 + 0x80;
      iVar13 = FUN_ram_4804162c(param_1);
      if ((iVar13 != 0) && (iVar13 = FUN_ram_480416da(iVar9,param_1), iVar13 == 0)) {
        if (*(char *)(param_1 + 0x82) != *(char *)(param_1 + 2)) {
          *(undefined1 *)(param_1 + 0x1a4) = 0;
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          *(undefined2 *)(param_1 + 0x194) = 0;
          *(undefined4 *)(param_1 + 0x198) = 0;
          *(undefined2 *)(param_1 + 0x19c) = 0;
          *(undefined4 *)(param_1 + 0x1a0) = 0;
        }
        if ((((*(short *)(param_1 + 0x88) != *(short *)(param_1 + 8)) ||
             (*(short *)(param_1 + 0x8a) != *(short *)(param_1 + 10))) ||
            (*(short *)(param_1 + 0x8c) != *(short *)(param_1 + 0xc))) ||
           (*(char *)(param_1 + 0x8e) != *(char *)(param_1 + 0xe))) {
          *(undefined1 *)(param_1 + 0x1b2) = 0;
          *(undefined2 *)(param_1 + 0x1b0) = 0;
          *(undefined4 *)(param_1 + 0x1b8) = 0;
        }
        iVar13 = FUN_ram_4804162c(param_1);
        if (iVar13 != 0) {
          iVar13 = FUN_ram_480416da(param_1 + 0xb8,param_1);
          if (iVar13 == 0) {
            FUN_ram_4ff45158(param_1 + 0xb8,param_1,0x36);
            puVar34 = (undefined1 *)(param_1 + 0x110);
            for (puVar28 = (undefined1 *)(param_1 + 0xf0); puVar28 != puVar34; puVar28 = puVar28 + 8
                ) {
              *puVar28 = 0;
              puVar28[1] = 0;
              puVar28[2] = 0;
              puVar28[3] = 0;
              puVar28[4] = 0;
              puVar28[5] = 0;
              puVar28[6] = 0;
            }
            do {
              *puVar34 = 0;
              puVar34[1] = 0;
              puVar34[2] = 0;
              puVar34[3] = 0;
              puVar34[4] = 0;
              puVar34[5] = 0;
              puVar34[6] = 0;
              puVar34 = puVar34 + 8;
            } while (puVar34 != (undefined1 *)(param_1 + 0x130));
            *(undefined4 *)(param_1 + 0x130) = 0;
            *(undefined1 *)(param_1 + 0x134) = 0;
            *(undefined2 *)(param_1 + 0x136) = 0;
            *(undefined1 *)(param_1 + 0x135) = *(undefined1 *)(param_1 + 199);
            iVar13 = *(int *)(param_1 + 0x158) + 1;
            if (iVar13 == 0) {
              iVar13 = 1;
            }
            *(int *)(param_1 + 0x158) = iVar13;
          }
        }
        *(undefined1 *)(param_1 + 400) = 0;
        FUN_ram_4ff45158(iVar9,param_1,0x36);
        *(undefined1 *)(param_1 + 0x1bf) = 0;
        *(undefined1 *)(param_1 + 0x1c0) = 0;
        *(undefined1 *)(param_1 + 0x1fd) = 0;
        *(undefined1 *)(param_1 + 0x1ff) = 0;
        iVar13 = *(int *)(param_1 + 0x398) + 1;
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        *(int *)(param_1 + 0x398) = iVar13;
        *(int *)(param_1 + 0x240) = iVar13;
        FUN_ram_480439fa(iVar9);
      }
      uVar30 = 1;
      if (*(char *)(param_1 + 0x21f) == '\0') {
        uVar30 = *(undefined1 *)(param_1 + 0x222);
      }
      fence();
      *(undefined1 *)(param_1 + 0x5a0) = uVar30;
      if (param_2[0x180] != 0) {
        *(undefined1 *)(param_1 + 0x1a4) = 0;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        *(undefined2 *)(param_1 + 0x194) = 0;
        *(undefined4 *)(param_1 + 0x198) = 0;
        *(undefined2 *)(param_1 + 0x19c) = 0;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        *(undefined1 *)(param_1 + 0x1b2) = 0;
        *(undefined2 *)(param_1 + 0x1b0) = 0;
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        FUN_ram_48042e98(iVar9);
      }
      FUN_ram_4805932a(param_1,0x15);
      if ((param_2[0x180] != 0) || (bVar10 != bVar38)) {
        *(undefined1 *)(param_1 + 0x74) = 0;
        *(undefined1 *)(param_1 + 0x76) = 0;
      }
      FUN_ram_480599fe(param_1,0);
      param_2[0x181] = 1;
      return;
    }
    if (bVar10 < 7) {
      if (bVar10 == 3) {
        bVar10 = FUN_ram_480599fe(param_1,0);
        param_2[0x181] = bVar10;
        return;
      }
      if (3 < bVar10) {
        if (bVar10 != 4) {
          bVar10 = FUN_ram_480a0d7c(param_1 + 0x84a8,param_2 + 0xa8);
          param_2[0x181] = bVar10;
          return;
        }
        puVar27 = local_220;
        pbVar33 = param_2 + 4;
        do {
          uVar36 = *(undefined4 *)(pbVar33 + 4);
          uVar12 = *(undefined4 *)(pbVar33 + 8);
          uVar16 = *(undefined4 *)(pbVar33 + 0xc);
          *puVar27 = *(undefined4 *)pbVar33;
          puVar27[1] = uVar36;
          puVar27[2] = uVar12;
          puVar27[3] = uVar16;
          pbVar33 = pbVar33 + 0x10;
          puVar27 = puVar27 + 4;
        } while (pbVar33 != param_2 + 0xa4);
        *puVar27 = *(undefined4 *)pbVar33;
        bVar10 = FUN_ram_480e39c4(param_1);
        param_2[0x181] = bVar10;
        return;
      }
      if (bVar10 == 1) {
        bVar10 = FUN_ram_4805a08e(param_1,param_2[0x180]);
        param_2[0x181] = bVar10;
        return;
      }
      if (bVar10 != 2) {
        bVar10 = FUN_ram_48058f6e(param_1);
        param_2[0x181] = bVar10;
        return;
      }
      bVar10 = 0;
      if (*(int *)(param_2 + 0x184) != 0) {
        bVar10 = FUN_ram_4805a406(param_1,*(int *)(param_2 + 0x184),param_2 + 0x188,param_2 + 0x189)
        ;
      }
      param_2[0x181] = bVar10;
      return;
    }
    if (bVar10 == 9) {
      bVar10 = FUN_ram_480e1f6c(param_1,param_2[0x180],param_2[0x17c]);
      param_2[0x178] = bVar10;
      return;
    }
    if (bVar10 < 10) {
      if (bVar10 == 7) {
        pbVar33 = param_2 + 0xe6;
        do {
          if (pbVar33 == param_2 + 0x122) {
            FUN_ram_4ff45158(param_1 + 0x36,param_2 + 0xe4,0x3e);
            if (param_2[0x180] != 0) {
              uVar12 = FUN_ram_48025ba6();
              FUN_ram_480c70d0(param_1 + 0x79cc,uVar12);
              iVar9 = *(int *)(param_1 + 0x92b0) + 1;
              if (iVar9 == 0) {
                iVar9 = 1;
              }
              *(int *)(param_1 + 0x92b0) = iVar9;
              *(undefined1 *)(param_1 + 0x9300) = 0;
              *(undefined2 *)(param_1 + 0x92ec) = 0;
              *(undefined2 *)(param_1 + 0x92e6) = 0;
              if (*(char *)(param_1 + 0x9301) == '\0') {
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
              *(undefined1 *)(param_1 + 0x9306) = 0;
              *(undefined1 *)(param_1 + 0x9305) = 0;
              *(undefined1 *)(param_1 + 0x9309) = 0;
              *(undefined1 *)(param_1 + 0x930a) = 0;
              *(undefined2 *)(param_1 + 0x92f8) = 0;
              *(undefined1 *)(param_1 + 0x92f5) = 0;
              *(undefined2 *)(param_1 + 0x92ee) = 0;
              *(undefined4 *)(param_1 + 0x92f0) = 0;
              *(undefined1 *)(param_1 + 0x93b9) = 0;
              *(undefined4 *)(param_1 + 0x92fc) = 0x1000000;
              *(undefined1 *)(param_1 + 0x92f6) = 1;
            }
            FUN_ram_480c9e96(param_1 + 0x79cc);
            FUN_ram_4805883a(&local_130,param_1);
            uVar12 = FUN_ram_48025ba6();
            FUN_ram_4809e702(param_1 + 0x9288,&local_130,uVar12);
            param_2[0x181] = 1;
            return;
          }
          sVar5 = *(short *)pbVar33;
          pbVar33 = pbVar33 + 2;
        } while ((ushort)(sVar5 - 1U) < 0xff);
        return;
      }
      param_2[0x181] = 0;
      pbVar33 = param_2 + 0xe6;
      do {
        if (pbVar33 == param_2 + 0x122) {
          iVar9 = FUN_ram_48058d6c(param_1,param_2[5]);
          if (iVar9 == 0) {
            return;
          }
          iVar9 = param_1 + 0x36;
          FUN_ram_4ff45158(local_170,iVar9,0x3e);
          FUN_ram_4ff45158(iVar9,param_2 + 0xe4,0x3e);
          if (param_2[0x180] != 0) {
            uVar12 = FUN_ram_48025ba6();
            FUN_ram_480c70d0(param_1 + 0x79cc,uVar12);
            iVar13 = *(int *)(param_1 + 0x92b0) + 1;
            if (iVar13 == 0) {
              iVar13 = 1;
            }
            *(int *)(param_1 + 0x92b0) = iVar13;
            *(undefined1 *)(param_1 + 0x9300) = 0;
            *(undefined2 *)(param_1 + 0x92ec) = 0;
            *(undefined2 *)(param_1 + 0x92e6) = 0;
            if (*(char *)(param_1 + 0x9301) == '\0') {
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
            *(undefined1 *)(param_1 + 0x9306) = 0;
            *(undefined1 *)(param_1 + 0x9305) = 0;
            *(undefined1 *)(param_1 + 0x9309) = 0;
            *(undefined1 *)(param_1 + 0x930a) = 0;
            *(undefined2 *)(param_1 + 0x92f8) = 0;
            *(undefined1 *)(param_1 + 0x92f5) = 0;
            *(undefined2 *)(param_1 + 0x92ee) = 0;
            *(undefined4 *)(param_1 + 0x92f0) = 0;
            *(undefined1 *)(param_1 + 0x93b9) = 0;
            *(undefined4 *)(param_1 + 0x92fc) = 0x1000000;
            *(undefined1 *)(param_1 + 0x92f6) = 1;
            FUN_ram_4805883a(&local_130,param_1);
            FUN_ram_4809ec88(param_1 + 0x79cc,&local_130);
          }
          puVar27 = local_220;
          pbVar33 = param_2 + 4;
          do {
            uVar36 = *(undefined4 *)(pbVar33 + 4);
            uVar12 = *(undefined4 *)(pbVar33 + 8);
            uVar16 = *(undefined4 *)(pbVar33 + 0xc);
            *puVar27 = *(undefined4 *)pbVar33;
            puVar27[1] = uVar36;
            puVar27[2] = uVar12;
            puVar27[3] = uVar16;
            pbVar33 = pbVar33 + 0x10;
            puVar27 = puVar27 + 4;
          } while (pbVar33 != param_2 + 0xa4);
          *puVar27 = *(undefined4 *)pbVar33;
          iVar13 = FUN_ram_480e39c4(param_1);
          param_2[0x181] = (byte)iVar13;
          if (iVar13 == 0) {
            FUN_ram_4ff45158(iVar9,local_170,0x3e);
          }
          FUN_ram_480c9e96(param_1 + 0x79cc);
          FUN_ram_4805883a(&local_130,param_1);
          uVar12 = FUN_ram_48025ba6();
          FUN_ram_4809e702(param_1 + 0x9288,&local_130,uVar12);
          return;
        }
        sVar5 = *(short *)pbVar33;
        pbVar33 = pbVar33 + 2;
      } while ((ushort)(sVar5 - 1U) < 0xff);
      return;
    }
    if (bVar10 != 10) {
      if (*(int *)(param_1 + 0x89c8) != 0) {
        FUN_ram_480dce8c(param_1);
      }
      fence();
      *(undefined1 *)(param_1 + 0x8a18) = 1;
      FUN_ram_4805c396(param_1,1,2,0xe);
      uVar12 = FUN_ram_48025ba6();
      iVar9 = param_1 + 0x8820;
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      iVar13 = *(int *)(param_1 + 0x8864);
      if (*(char *)(param_1 + 0x885b) != '\0') {
        FUN_ram_4ff3ee10(iVar9);
        goto LAB_ram_480e89d8;
      }
      iVar13 = iVar13 + 1;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      cVar17 = *(char *)(param_1 + 0x8845);
      *(undefined1 *)(param_1 + 0x8844) = *(undefined1 *)(param_1 + 0x8846);
      *(int *)(param_1 + 0x8864) = iVar13;
      *(undefined4 *)(param_1 + 0x8828) = uVar12;
      *(char *)(param_1 + 0x8843) = cVar17;
      if (*(char *)(param_1 + 0x8838) == '\x01') {
        *(undefined1 *)(param_1 + 0x8842) = 1;
        if (((cVar17 != '\0') || (*(char *)(param_1 + 0x8848) != '\0')) ||
           ((*(char *)(param_1 + 0x8857) != '\0' || (*(char *)(param_1 + 0x8858) != '\0')))) {
          *(undefined1 *)(param_1 + 0x883e) = 0;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined2 *)(param_1 + 0x8838) = 0x403;
          goto LAB_ram_480e95ba;
        }
        *(undefined1 *)(param_1 + 0x883e) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 0;
        *(undefined2 *)(param_1 + 0x8838) = 0x403;
        bVar25 = true;
LAB_ram_480e899c:
        if (bVar25) goto LAB_ram_480e95ba;
        uVar30 = 2;
        uVar18 = 0;
      }
      else {
        bVar25 = *(char *)(param_1 + 0x8838) == '\x03';
        *(bool *)(param_1 + 0x8842) = bVar25;
        if ((cVar17 == '\0') && (*(char *)(param_1 + 0x8848) == '\0')) {
          if ((*(char *)(param_1 + 0x8857) == '\0') && (*(char *)(param_1 + 0x8858) == '\0')) {
            *(undefined1 *)(param_1 + 0x883e) = 0;
            goto LAB_ram_480e899c;
          }
          *(undefined1 *)(param_1 + 0x883e) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x883e) = 0;
        }
LAB_ram_480e95ba:
        uVar30 = 1;
        uVar18 = 3;
      }
      *(undefined1 *)(param_1 + 0x885c) = 0;
      *(undefined1 *)(param_1 + 0x885b) = uVar30;
      *(undefined1 *)(param_1 + 0x885d) = uVar18;
      *(undefined1 *)(param_1 + 0x885e) = 0;
      *(undefined4 *)(param_1 + 0x8868) = uVar12;
      *(undefined1 *)(param_1 + 0x8848) = 0;
      *(undefined1 *)(param_1 + 0x8857) = uVar18;
      *(undefined4 *)(param_1 + 0x886c) = 0;
      *(undefined1 *)(param_1 + 0x8847) = 0;
      *(undefined1 *)(param_1 + 0x8856) = 0;
      FUN_ram_4ff3ee10(iVar9);
LAB_ram_480e89d8:
      uVar12 = FUN_ram_48025ba6();
      FUN_ram_4809f360(param_1 + 0x84a8,uVar12);
      *(int *)(param_2 + 0x17c) = iVar13;
      return;
    }
    iVar9 = param_1 + 0x8820;
    iVar13 = FUN_ram_48025ba6();
    uVar42 = (uint)param_2[0x17c];
    FUN_ram_4ff3ec14(iVar9,0xffffffff);
    cVar17 = *(char *)(param_1 + 0x885b);
    *(int *)(param_1 + 0x8828) = iVar13;
    if (cVar17 == '\0') {
      if (*(char *)(param_1 + 0x8845) == '\0') {
        cVar19 = *(char *)(param_1 + 0x8838);
joined_r0x480e97b8:
        if ((cVar19 != '\x01') || ((uint)(iVar13 - *(int *)(param_1 + 0x8834)) < 10000))
        goto LAB_ram_480e8ca8;
LAB_ram_480e97ce:
        *(undefined1 *)(param_1 + 0x8857) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 0;
        *(undefined1 *)(param_1 + 0x8848) = 0;
        *(undefined1 *)(param_1 + 0x883e) = 0;
        *(undefined **)(param_1 + 0x8838) = &mideleg;
LAB_ram_480e97e6:
        *(undefined1 *)(param_1 + 0x883f) = 0;
        if (cVar17 != '\0') goto LAB_ram_480e9692;
      }
      else {
        if (*(char *)(param_1 + 0x8850) == '\0') {
LAB_ram_480e97b2:
          cVar19 = *(char *)(param_1 + 0x8838);
          goto joined_r0x480e97b8;
        }
        uVar23 = (uint)*(byte *)(param_1 + 0x8846) * 60000;
        iVar24 = *(int *)(param_1 + 0x8884);
        if ((uint)(iVar13 - iVar24) < uVar23) goto LAB_ram_480e97b2;
        *(uint *)(param_1 + 0x8888) = uVar23;
        *(undefined4 *)(param_1 + 0x8884) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 0;
        *(undefined1 *)(param_1 + 0x8848) = 0;
        iVar15 = *(int *)(param_1 + 0x882c) + 1;
        *(undefined1 *)(param_1 + 0x8851) = 1;
        *(undefined1 *)(param_1 + 0x8859) = 1;
        iVar24 = iVar24 + uVar23;
        if (iVar15 == 0) {
          iVar15 = 1;
        }
        *(int *)(param_1 + 0x882c) = iVar15;
        *(int *)(param_1 + 0x8834) = iVar24;
        *(undefined1 *)(param_1 + 0x883c) = 0;
        *(undefined2 *)(param_1 + 0x883e) = 0;
        *(undefined1 *)(param_1 + 0x8840) = 0;
        *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
        *(undefined4 *)(param_1 + 0x8838) = 1;
        *(undefined2 *)(param_1 + 0x8856) = 0x300;
        if (9999 < (uint)(iVar13 - iVar24)) goto LAB_ram_480e97ce;
LAB_ram_480e8ca8:
        *(undefined1 *)(param_1 + 0x883f) = 0;
      }
      if (*(char *)(param_1 + 0x8838) == '\x03') goto LAB_ram_480e9692;
      if ((uVar42 != 0xf) &&
         ((0x1e < (uVar42 - 0x1e & 0xff) || ((0x40008001U >> (uVar42 - 0x1e & 0x1f) & 1) == 0)))) {
        uVar42 = 0x2d;
      }
      *(char *)(param_1 + 0x8846) = (char)uVar42;
      if (*(char *)(param_1 + 0x8838) == '\x01') {
        *(char *)(param_1 + 0x883d) = (char)uVar42;
      }
      else if (((*(char *)(param_1 + 0x8845) != '\0') && (*(char *)(param_1 + 0x8850) != '\0')) &&
              (uVar42 * 60000 <= (uint)(iVar13 - *(int *)(param_1 + 0x8884)))) {
        *(uint *)(param_1 + 0x8888) = uVar42 * 60000;
        *(undefined4 *)(param_1 + 0x8884) = 0;
        *(undefined1 *)(param_1 + 0x8851) = 1;
        *(undefined1 *)(param_1 + 0x8845) = 0;
        *(undefined1 *)(param_1 + 0x8848) = 0;
        *(undefined1 *)(param_1 + 0x8859) = 1;
        iVar24 = *(int *)(param_1 + 0x882c) + 1;
        if (iVar24 == 0) {
          iVar24 = 1;
        }
        *(int *)(param_1 + 0x882c) = iVar24;
        *(int *)(param_1 + 0x8834) = iVar13;
        *(undefined1 *)(param_1 + 0x883c) = 0;
        *(undefined1 *)(param_1 + 0x883e) = 0;
        *(undefined1 *)(param_1 + 0x8840) = 0;
        *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
        *(undefined4 *)(param_1 + 0x8838) = 1;
        *(undefined2 *)(param_1 + 0x8856) = 0x300;
      }
      FUN_ram_4ff3ee10(iVar9);
      bVar10 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x8838) == '\x01') {
        if (9999 < (uint)(iVar13 - *(int *)(param_1 + 0x8834))) {
          *(undefined1 *)(param_1 + 0x8857) = 0;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined1 *)(param_1 + 0x883e) = 0;
          *(undefined **)(param_1 + 0x8838) = &mideleg;
          if (cVar17 == '\x01') goto LAB_ram_480e9674;
          goto LAB_ram_480e97e6;
        }
        if (cVar17 != '\x01') goto LAB_ram_480e9692;
LAB_ram_480e9674:
        if (200 < (uint)(iVar13 - *(int *)(param_1 + 0x8868))) {
          *(undefined1 *)(param_1 + 0x885b) = 3;
          *(undefined1 *)(param_1 + 0x885c) = 3;
        }
      }
      else if (cVar17 == '\x01') goto LAB_ram_480e9674;
LAB_ram_480e9692:
      *(undefined1 *)(param_1 + 0x883f) = 1;
      FUN_ram_4ff3ee10(iVar9);
      bVar10 = 2;
    }
    iVar24 = *(int *)(param_1 + 0x89c8);
    param_2[0x178] = bVar10;
    if (iVar24 != 0) {
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      iVar13 = FUN_ram_48053de0(iVar9,param_1 + 0x89d8,iVar13);
      FUN_ram_4ff3ee10(iVar9);
      if (iVar13 == 0) {
        FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x8500),*(undefined4 *)(param_1 + 0x89c8));
        iVar9 = *(int *)(param_1 + 0x8500);
        piVar39 = (int *)(iVar9 + 0x614);
        do {
          iVar13 = *piVar39 + 1;
          if (iVar13 == 0) {
            iVar13 = 1;
          }
          *piVar39 = iVar13;
          piVar39 = piVar39 + 0x2c;
        } while ((int *)(iVar9 + 0x824) != piVar39);
      }
    }
    goto LAB_ram_480e8f20;
  }
  if (bVar10 == 0x13) {
    FUN_ram_480df148(param_1 + 0x84a8,1);
    *(undefined2 *)(param_1 + 0x9278) = 0;
    *(int *)(param_1 + 0x9274) = *(int *)(param_1 + 0x9274) + 1;
    return;
  }
  if (0x13 < bVar10) {
    if (bVar10 == 0x16) {
      *(byte *)(param_1 + 0x9285) = param_2[0x180];
      *(undefined1 *)(param_1 + 0x9284) = 0;
      return;
    }
    if (bVar10 < 0x17) {
      if (bVar10 != 0x14) {
        FUN_ram_480df148(param_1 + 0x84a8,1);
        return;
      }
      uVar42 = *(uint *)(param_2 + 0x17c);
      FUN_ram_4805883a(&local_130,param_1);
      if (((cStack_c2 != '\0') && (uVar42 - 1 < 0xffffff)) &&
         (((uVar42 & uVar42 - 1) == 0 &&
          (iVar9 = FUN_ram_48025ba6(), *(int *)(param_1 + 0x91d8) == 0x4f3)))) {
        cVar17 = '\x02';
        if (cStack_c1 == '\x01') {
          cVar17 = '\x01';
        }
        if (((*(char *)(param_1 + 0x91e5) == cVar17) && (*(int *)(param_1 + 0x91fc) != 0)) &&
           (((uint)(iVar9 - *(int *)(param_1 + 0x91fc)) < 0x1f5 &&
            ((*(char *)(param_1 + 0x9200) == '\0' &&
             (iVar9 = FUN_ram_4805c396(param_1,0,*(char *)(param_1 + 0x91e5),0xd), iVar9 != 0))))))
        {
          if ((uVar42 != *(uint *)(param_1 + 0x9204)) || (*(char *)(param_1 + 0x91b0) != '\0')) {
            FUN_ram_480df148(param_1 + 0x84a8,1);
          }
          *(uint *)(param_1 + 0x9204) = uVar42;
          uVar12 = FUN_ram_48025ba6();
          *(undefined4 *)(param_1 + 0x920c) = 0;
          *(undefined4 *)(param_1 + 0x9208) = uVar12;
          *(int *)(param_1 + 0x9274) = *(int *)(param_1 + 0x9274) + 1;
          param_2[0x181] = (byte)iVar9;
          return;
        }
      }
      param_2[0x181] = 0;
      return;
    }
    if (bVar10 == 0x17) {
      bVar10 = FUN_ram_480e33be(param_1);
      param_2[0x181] = bVar10;
      return;
    }
    if (bVar10 != 0x18) {
      return;
    }
    bVar25 = false;
    if (*(char *)(param_1 + 0x5a1) != '\0') {
      fence();
      bVar25 = *(char *)(param_1 + 0x9789) == '\0';
    }
    *(undefined1 *)(param_1 + 0x5a1) = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x1b2) = 0;
    *(undefined2 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    puVar34 = (undefined1 *)(param_1 + 0x110);
    for (puVar28 = (undefined1 *)(param_1 + 0xf0); puVar28 != puVar34; puVar28 = puVar28 + 8) {
      *puVar28 = 0;
      puVar28[1] = 0;
      puVar28[2] = 0;
      puVar28[3] = 0;
      puVar28[4] = 0;
      puVar28[5] = 0;
      puVar28[6] = 0;
    }
    do {
      *puVar34 = 0;
      puVar34[1] = 0;
      puVar34[2] = 0;
      puVar34[3] = 0;
      puVar34[4] = 0;
      puVar34[5] = 0;
      puVar34[6] = 0;
      puVar34 = puVar34 + 8;
    } while (puVar34 != (undefined1 *)(param_1 + 0x130));
    cVar17 = *(char *)(param_1 + 199);
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(undefined2 *)(param_1 + 0x136) = 0;
    *(char *)(param_1 + 0x135) = cVar17;
    iVar13 = *(int *)(param_1 + 0x158) + 1;
    if (iVar13 == 0) {
      iVar13 = 1;
    }
    *(int *)(param_1 + 0x158) = iVar13;
    *(undefined1 *)(param_1 + 400) = 0;
    if ((((*(char *)(param_1 + 0x25d) != '\0') || (*(char *)(param_1 + 0x25e) != cVar17)) ||
        (*(char *)(param_1 + 0x25f) != '\0')) ||
       (((*(char *)(param_1 + 0x260) != *(char *)(param_1 + 0x138) ||
         (*(int *)(param_1 + 0x15c) != *(int *)(param_1 + 0x264))) ||
        ((*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x268) ||
         (*(int *)(param_1 + 0x26c) != *(int *)(param_1 + 0x164))))))) {
      *(undefined1 *)(param_1 + 0x25d) = 0;
      *(char *)(param_1 + 0x25e) = cVar17;
      *(undefined1 *)(param_1 + 0x25f) = 0;
      *(char *)(param_1 + 0x260) = *(char *)(param_1 + 0x138);
      *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x15c);
      *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x160);
      *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x164);
      if (*(char *)(param_1 + 0x1fd) == '\0') {
        *(undefined1 *)(param_1 + 0x25c) = 0;
        bVar29 = false;
      }
      else {
        uVar42 = 0;
        uVar23 = 0;
        iVar13 = param_1;
        do {
          iVar24 = iVar13 + 5;
          bVar10 = *(byte *)(param_1 + 0x1c0) >> (uVar42 & 0x1f) & 1;
          do {
            pcVar1 = (char *)(iVar13 + 0x1df);
            pcVar2 = (char *)(iVar13 + 0x1c1);
            iVar13 = iVar13 + 1;
            bVar10 = bVar10 & *pcVar1 == *pcVar2;
          } while (iVar13 != iVar24);
          if (bVar10 == 0) {
            uVar23 = uVar23 | 1 << (uVar42 & 0x1f) & 0xffU;
          }
          uVar42 = uVar42 + 1;
          iVar13 = iVar24;
        } while (uVar42 != 6);
        *(char *)(param_1 + 0x25c) = (char)uVar23;
        bVar29 = 0xb < *(byte *)(param_1 + 0x21c) && uVar23 != 0;
      }
      cVar17 = *(char *)(param_1 + 0x21f);
      *(bool *)(param_1 + 0x275) = bVar29;
      if (cVar17 == '\0') {
        cVar17 = *(char *)(param_1 + 0x222);
      }
      cVar19 = *(char *)(param_1 + 0x368);
      *(char *)(param_1 + 0x271) = cVar17;
      *(undefined1 *)(param_1 + 0x273) = *(undefined1 *)(param_1 + 0x3fc);
      *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_1 + 0x221);
      if ((cVar19 != '\0') && (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x39c))) {
        cVar19 = *(int *)(param_1 + 0x214) == *(int *)(param_1 + 0x39c);
      }
      *(char *)(param_1 + 0x272) = cVar19;
      iVar13 = *(int *)(param_1 + 0x224) + 1;
      if (iVar13 == 0) {
        iVar13 = 1;
      }
      *(int *)(param_1 + 0x224) = iVar13;
    }
    if (!bVar25) {
      *(undefined2 *)(param_1 + 0x33f0) = 0;
      *(undefined1 *)(param_1 + 0x33f2) = 1;
      FUN_ram_48047848(param_1 + 0x2878);
      iVar24 = param_1 + 0x2880;
      iVar13 = param_1 + 0x33c0;
      puVar27 = local_170;
      puVar31 = &DAT_ram_48222eb8;
      do {
        do {
          puVar26 = puVar27;
          uVar12 = puVar31[1];
          uVar16 = puVar31[2];
          *puVar26 = *puVar31;
          uVar36 = puVar31[3];
          puVar26[1] = uVar12;
          puVar26[2] = uVar16;
          puVar26[3] = uVar36;
          puVar31 = puVar31 + 4;
          puVar27 = puVar26 + 4;
        } while (puVar31 != &DAT_ram_48222ee8);
        puVar26[5] = DAT_ram_48222eec;
        puVar26[4] = DAT_ram_48222ee8;
        FUN_ram_4ff3ec14(iVar13,0xffffffff);
        if (*(char *)(iVar24 + 0xe8) == '\x04') {
          FUN_ram_4ff45158(local_170,iVar24 + 0xa8,0x35);
          memset(auStack_10c,0,0xcc);
          bStack_117 = bStack_117 & 0xfc;
          uStack_12c = 8;
          uStack_7c = 8;
          uStack_116 = 1;
          uStack_9e = 1;
          local_130 = 0;
          uStack_12b = 0;
          uStack_12a = 0;
          uStack_129 = 0;
          uStack_128 = 0;
          cStack_127 = '\0';
          uStack_126 = 0;
          cStack_125 = '\0';
          cStack_124 = '\0';
          cStack_123 = '\0';
          uStack_122 = 0;
          local_120[0] = 0;
          local_120[1] = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_c8 = 0xff;
          uStack_97 = 0xff;
          uStack_6f = 0xff;
          FUN_ram_4ff45158(iVar24,&local_130,0xea);
          FUN_ram_4ff3ee10(iVar13);
          FUN_ram_480dc4f2(*(undefined4 *)(param_1 + 0x2870),local_170);
        }
        else {
          FUN_ram_4ff3ee10(iVar13);
        }
        iVar24 = iVar24 + 0xf0;
        puVar27 = local_170;
        puVar31 = &DAT_ram_48222eb8;
      } while (iVar24 != iVar13);
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      *(undefined1 *)(param_1 + 0x1e13) = 0;
      pbVar33 = &DAT_ram_48222c28;
      FUN_ram_4ff3ee10(iVar9);
      do {
        uVar42 = (uint)*pbVar33;
        FUN_ram_4ff3ec14(iVar9,0xffffffff);
        iVar13 = *(int *)(param_1 + 0x1e08);
        FUN_ram_4ff3ee10(iVar9);
        if ((iVar13 != 0) && (((uVar42 - 1 & 0xff) < 2 || (uVar42 == 4)))) {
          uVar23 = (uint)*(byte *)(iVar13 + 0x10);
          iVar24 = (iVar13 + 0x10U & 3) << 3;
          puVar40 = (uint *)(iVar13 + 0x10U & 0xfffffffc);
          do {
            uVar35 = 0xff << iVar24;
            uVar41 = *puVar40;
            if ((uVar41 & uVar35) == (uVar23 << iVar24 & uVar35)) {
              *puVar40 = uVar41 & ~uVar35 | (uVar23 & ~uVar42) << iVar24 & uVar35;
            }
            cVar17 = (char)uVar23;
            uVar23 = (int)uVar41 >> iVar24 & 0xff;
          } while ((char)((int)uVar41 >> iVar24) != cVar17);
        }
        pbVar33 = pbVar33 + 1;
        FUN_ram_480e2e1e(param_1,uVar42);
      } while (pbVar33 != &UNK_ram_48222c2b);
      FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
      puVar31 = (undefined4 *)(param_1 + 0xb38);
      puVar27 = &local_130;
      do {
        uVar12 = puVar31[1];
        uVar16 = puVar31[2];
        uVar36 = puVar31[3];
        *puVar27 = *puVar31;
        puVar27[1] = uVar12;
        puVar27[2] = uVar16;
        puVar27[3] = uVar36;
        puVar31 = puVar31 + 4;
        puVar27 = puVar27 + 4;
      } while (puVar31 != (undefined4 *)(param_1 + 0xbd8));
      *puVar27 = *puVar31;
      FUN_ram_4ff3ee10(param_1 + 0xb18);
      cVar17 = cStack_125;
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      iVar13 = *(int *)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(iVar9);
      cVar19 = cStack_124;
      if (iVar13 != 0) {
        uVar42 = (uint)*(byte *)(iVar13 + 0x10);
        iVar24 = (iVar13 + 0x10U & 3) << 3;
        puVar40 = (uint *)(iVar13 + 0x10U & 0xfffffffc);
        if (cVar17 == '\0') {
          do {
            uVar41 = 0xff << iVar24;
            uVar23 = *puVar40;
            if ((uVar23 & uVar41) == (uVar42 << iVar24 & uVar41)) {
              *puVar40 = uVar23 & ~uVar41 | (uVar42 & 0xfffffffe) << iVar24 & uVar41;
            }
            cVar17 = (char)uVar42;
            uVar42 = (int)uVar23 >> iVar24 & 0xff;
          } while ((char)((int)uVar23 >> iVar24) != cVar17);
        }
        else {
          do {
            uVar41 = 0xff << iVar24;
            uVar23 = *puVar40;
            if ((uVar23 & uVar41) == (uVar42 << iVar24 & uVar41)) {
              *puVar40 = uVar23 & ~uVar41 | (uVar42 | 1) << iVar24 & uVar41;
            }
            cVar17 = (char)uVar42;
            uVar42 = (int)uVar23 >> iVar24 & 0xff;
          } while ((char)((int)uVar23 >> iVar24) != cVar17);
        }
      }
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      iVar13 = *(int *)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(iVar9);
      cVar17 = cStack_123;
      if (iVar13 != 0) {
        uVar42 = (uint)*(byte *)(iVar13 + 0x10);
        iVar24 = (iVar13 + 0x10U & 3) << 3;
        puVar40 = (uint *)(iVar13 + 0x10U & 0xfffffffc);
        if (cVar19 == '\0') {
          do {
            uVar41 = 0xff << iVar24;
            uVar23 = *puVar40;
            if ((uVar23 & uVar41) == (uVar42 << iVar24 & uVar41)) {
              *puVar40 = uVar23 & ~uVar41 | (uVar42 & 0xfffffffd) << iVar24 & uVar41;
            }
            cVar19 = (char)uVar42;
            uVar42 = (int)uVar23 >> iVar24 & 0xff;
          } while ((char)((int)uVar23 >> iVar24) != cVar19);
        }
        else {
          do {
            uVar41 = 0xff << iVar24;
            uVar23 = *puVar40;
            if ((uVar23 & uVar41) == (uVar42 << iVar24 & uVar41)) {
              *puVar40 = uVar23 & ~uVar41 | (uVar42 | 2) << iVar24 & uVar41;
            }
            cVar19 = (char)uVar42;
            uVar42 = (int)uVar23 >> iVar24 & 0xff;
          } while ((char)((int)uVar23 >> iVar24) != cVar19);
        }
      }
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      iVar13 = *(int *)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(iVar9);
      uVar30 = uStack_126;
      if (iVar13 != 0) {
        uVar42 = (uint)*(byte *)(iVar13 + 0x10);
        iVar24 = (iVar13 + 0x10U & 3) << 3;
        puVar40 = (uint *)(iVar13 + 0x10U & 0xfffffffc);
        if (cVar17 == '\0') {
          do {
            uVar41 = 0xff << iVar24;
            uVar23 = *puVar40;
            if ((uVar23 & uVar41) == (uVar42 << iVar24 & uVar41)) {
              *puVar40 = uVar23 & ~uVar41 | (uVar42 & 0xfffffffb) << iVar24 & uVar41;
            }
            cVar17 = (char)uVar42;
            uVar42 = (int)uVar23 >> iVar24 & 0xff;
          } while ((char)((int)uVar23 >> iVar24) != cVar17);
        }
        else {
          do {
            uVar41 = 0xff << iVar24;
            uVar23 = *puVar40;
            if ((uVar23 & uVar41) == (uVar42 << iVar24 & uVar41)) {
              *puVar40 = uVar23 & ~uVar41 | (uVar42 | 4) << iVar24 & uVar41;
            }
            cVar17 = (char)uVar42;
            uVar42 = (int)uVar23 >> iVar24 & 0xff;
          } while ((char)((int)uVar23 >> iVar24) != cVar17);
        }
      }
      fence();
      *(undefined1 *)(param_1 + 0x9789) = 0;
      FUN_ram_4ff3ec14(iVar9,0xffffffff);
      *(undefined1 *)(param_1 + 0x1e13) = uVar30;
      FUN_ram_4ff3ee10(iVar9);
      FUN_ram_4809ec88(param_1 + 0x79cc,&local_130);
    }
    param_2[0x181] = 1;
    return;
  }
  if (bVar10 == 0x10) {
    bVar10 = param_2[0x180];
    FUN_ram_4809f544(param_1 + 0x84a8);
    FUN_ram_4805932a(param_1,0xf);
    FUN_ram_4805932a(param_1,9);
    uVar12 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(param_1 + 0x8a1c,0xffffffff);
    bVar38 = 0;
    if (*(char *)(param_1 + 0x8add) == '\0') {
      if (bVar10 == 0) {
        if (*(char *)(param_1 + 0x8ad0) != '\0') {
          *(undefined2 *)(param_1 + 0x8ad0) = 0;
          *(undefined1 *)(param_1 + 0x8ad2) = 0;
          *(undefined4 *)(param_1 + 0x8ad4) = 0;
          *(undefined1 *)(param_1 + 0x8ade) = 1;
          *(undefined1 *)(param_1 + 0x8ae1) = 1;
          if (*(char *)(param_1 + 0x8ab0) != '\0') {
            *(int *)(param_1 + 0x8b00) = *(int *)(param_1 + 0x8b00) + 1;
          }
          *(undefined4 *)(param_1 + 0x8ab4) = uVar12;
          *(byte *)(param_1 + 0x8af0) = *(byte *)(param_1 + 0x8af0) | 4;
          *(undefined1 *)(param_1 + 0x8ab0) = 1;
          *(undefined1 *)(param_1 + 0x8ad9) = 1;
        }
      }
      else {
        bVar38 = 0;
        if ((*(char *)(param_1 + 0x8a26) == '\0') ||
           (bVar38 = 0, *(char *)(param_1 + 0x8ac8) != '\0')) goto LAB_ram_480e9522;
        if (*(char *)(param_1 + 0x8ad0) == '\0') {
          bVar38 = 0;
          if (*(char *)(param_1 + 0x8adf) == '\0') goto LAB_ram_480e9522;
          *(undefined1 *)(param_1 + 0x8ad2) = 0;
          *(undefined4 *)(param_1 + 0x8ad4) = 0;
          *(undefined2 *)(param_1 + 0x8ad0) = 1;
          if (*(char *)(param_1 + 0x8ab0) != '\0') {
            *(int *)(param_1 + 0x8b00) = *(int *)(param_1 + 0x8b00) + 1;
          }
          *(undefined4 *)(param_1 + 0x8ab4) = uVar12;
          *(byte *)(param_1 + 0x8af0) = *(byte *)(param_1 + 0x8af0) | 1;
          *(undefined1 *)(param_1 + 0x8ab0) = 1;
          *(undefined1 *)(param_1 + 0x8ad9) = 1;
        }
      }
      bVar38 = 1;
    }
LAB_ram_480e9522:
    FUN_ram_4ff3ee10(param_1 + 0x8a1c);
    param_2[0x181] = bVar38;
    return;
  }
  if (0x10 < bVar10) {
    if (bVar10 != 0x11) {
      bVar10 = FUN_ram_480df568(param_1,param_2[0x17c]);
      param_2[0x181] = bVar10;
      return;
    }
    uVar23 = *(uint *)(param_2 + 0x17c);
    uVar42 = uVar23 & 0xff;
    if (uVar42 < 10) {
      uVar42 = uVar42 < 5 ^ 1;
      iVar9 = FUN_ram_48025ba6();
      bVar10 = *(byte *)(param_1 + 0x8000 + uVar42 + 0x1140);
      if (((bVar10 != 0) &&
          (iVar13 = *(int *)(param_1 + 0x8000 + (uVar42 + 0x324) * 4 + 0x4b4), iVar13 != 0)) &&
         ((uint)(iVar9 - iVar13) < 0x5dd)) {
        FUN_ram_4ff3ec14(param_1 + 0x8520,0xffffffff);
        puVar32 = (ushort *)((uVar42 + 0x1226) * 8 + param_1);
        uVar23 = uVar23 & 0xff;
        uVar11 = puVar32[1];
        if (0xffe < puVar32[1]) {
          uVar11 = 0xffe;
        }
        uVar14 = puVar32[2];
        if (0xffe < puVar32[2]) {
          uVar14 = 0xffe;
        }
        uVar20 = puVar32[3];
        if (0xffe < puVar32[3]) {
          uVar20 = 0xffe;
        }
        uVar8 = *puVar32;
        if (0xffe < uVar8) {
          uVar8 = 0xffe;
        }
        iVar13 = uVar23 * 10;
        iVar9 = param_1 + iVar13;
        *(ushort *)(uVar23 * 10 + param_1 + 0x914c) = uVar8;
        *(ushort *)(iVar9 + 0x914e) = uVar11;
        *(ushort *)(iVar9 + 0x9152) = uVar20;
        *(ushort *)(iVar9 + 0x9150) = uVar14;
        *(undefined2 *)(iVar13 + param_1 + 0x9154) = 0x25a;
        FUN_ram_4ff3ee10(param_1 + 0x8520);
        *(int *)(param_1 + 0x9274) = *(int *)(param_1 + 0x9274) + 1;
        *(undefined2 *)(param_1 + 0x9278) = 0;
        *(undefined2 *)(param_1 + 0x9284) = 1;
        psVar21 = (short *)(param_1 + 0x914c);
        uVar42 = 0;
        uVar41 = 0;
        uVar23 = 0;
LAB_ram_480e8b56:
        do {
          if (((((char)psVar21[4] == 'Z') && (*(char *)((int)psVar21 + 9) == '\x02')) &&
              ((*psVar21 != 0xfff && ((psVar21[1] != 0xfff && (psVar21[2] != 0xfff)))))) &&
             (psVar21[3] != 0xfff)) {
            uVar35 = 1 << (uVar23 - (((uint)((ulonglong)uVar23 * 0xcccccccd >> 0x20) & 0xfc) +
                                    uVar23 / 5) & 0x1f) & 0xff;
            if (uVar23 < 5) {
              uVar41 = uVar35 | uVar41;
              uVar23 = uVar23 + 1 & 0xff;
              psVar21 = psVar21 + 5;
              goto LAB_ram_480e8b56;
            }
            uVar42 = uVar42 | uVar35;
          }
          uVar23 = uVar23 + 1 & 0xff;
          psVar21 = psVar21 + 5;
        } while (uVar23 != 10);
        FUN_ram_4ff3ec14(*(undefined4 *)(param_1 + 0x8510),0xffffffff);
        *(char *)(*(int *)(param_1 + 0x850c) + 0xddc) = (char)uVar41;
        *(char *)(*(int *)(param_1 + 0x850c) + 0xddd) = (char)uVar42;
        FUN_ram_4ff3ee10(*(undefined4 *)(param_1 + 0x8510));
        goto LAB_ram_480e8ba0;
      }
    }
    bVar10 = 0;
LAB_ram_480e8ba0:
    param_2[0x181] = bVar10;
    return;
  }
  if (bVar10 == 0xe) {
    pbVar33 = param_2 + 0x124;
    do {
      uVar37 = *(undefined4 *)(pbVar33 + 4);
      uVar12 = *(undefined4 *)(pbVar33 + 8);
      uVar16 = *(undefined4 *)(pbVar33 + 0xc);
      uVar36 = *(undefined4 *)(pbVar33 + 0x10);
      uVar22 = *(undefined4 *)(pbVar33 + 0x14);
      *puVar27 = *(undefined4 *)pbVar33;
      puVar27[1] = uVar37;
      puVar27[2] = uVar12;
      puVar27[3] = uVar16;
      puVar27[4] = uVar36;
      puVar27[5] = uVar22;
      pbVar33 = pbVar33 + 0x18;
      puVar27 = puVar27 + 6;
    } while (pbVar33 != param_2 + 0x16c);
    FUN_ram_4805aa04(param_1,local_270);
    return;
  }
  if (bVar10 != 0xf) {
    FUN_ram_480e1d26(param_1,param_2 + 0x174);
    param_2[0x181] = 1;
    return;
  }
  FUN_ram_4809f544(param_1 + 0x84a8);
  FUN_ram_4805932a(param_1,0xf);
  FUN_ram_4805932a(param_1,9);
  iVar9 = param_1 + 0x8a1c;
  FUN_ram_4ff3ec14(iVar9,0xffffffff);
  uVar6 = *(undefined2 *)(param_2 + 0x16e);
  uVar11 = *(ushort *)(param_2 + 0x170);
  uVar7 = *(undefined2 *)(param_2 + 0x172);
  cVar17 = *(char *)(param_1 + 0x8a24);
  cVar19 = *(char *)(param_1 + 0x8a26);
  *(undefined2 *)(param_1 + 0x8a24) = *(undefined2 *)(param_2 + 0x16c);
  *(undefined2 *)(param_1 + 0x8a2a) = uVar7;
  bVar10 = *(byte *)(param_1 + 0x8a27);
  *(ushort *)(param_1 + 0x8a28) = uVar11;
  *(undefined2 *)(param_1 + 0x8a26) = uVar6;
  if (uVar11 < 0x1e) {
    *(undefined2 *)(param_1 + 0x8a28) = 0x1e;
    if (*(ushort *)(param_1 + 0x8a2a) < 100) {
      *(undefined2 *)(param_1 + 0x8a2a) = 100;
    }
    else if (500 < *(ushort *)(param_1 + 0x8a2a)) {
      *(undefined2 *)(param_1 + 0x8a2a) = 500;
    }
  }
  else if (uVar11 < 0xc9) {
    uVar14 = *(ushort *)(param_1 + 0x8a2a);
    uVar11 = uVar11 + 0x14;
    if (uVar14 < 100) {
      *(undefined2 *)(param_1 + 0x8a2a) = 100;
      if (100 < uVar11) goto LAB_ram_480e965c;
    }
    else {
      if (uVar14 < 0x1f5) goto LAB_ram_480e9d16;
      *(undefined2 *)(param_1 + 0x8a2a) = 500;
    }
  }
  else {
    uVar14 = *(ushort *)(param_1 + 0x8a2a);
    *(undefined2 *)(param_1 + 0x8a28) = 200;
    if (uVar14 < 100) {
      uVar11 = 0xdc;
LAB_ram_480e965c:
      *(ushort *)(param_1 + 0x8a2a) = uVar11;
    }
    else if (uVar14 < 0x1f5) {
      uVar11 = 0xdc;
LAB_ram_480e9d16:
      if (uVar14 < uVar11) goto LAB_ram_480e965c;
    }
    else {
      *(undefined2 *)(param_1 + 0x8a2a) = 500;
    }
  }
  cVar3 = *(char *)(param_1 + 0x8a25);
  cVar4 = *(char *)(param_1 + 0x8a26);
  bVar38 = *(byte *)(param_1 + 0x8a27);
  if (((cVar17 == '\0') && (*(char *)(param_1 + 0x8a24) != '\0')) ||
     ((*(char *)(param_1 + 0x8a25) == '\0' && (cVar3 != '\0')))) {
    *(undefined1 *)(param_1 + 0x8ac8) = 0;
LAB_ram_480e8e4c:
    if (cVar4 == '\0') {
LAB_ram_480e8e50:
      if (*(char *)(param_1 + 0x8ad0) != '\0') {
LAB_ram_480e8fc6:
        if (*(char *)(param_1 + 0x8add) == '\0') {
LAB_ram_480e8fd2:
          *(undefined2 *)(param_1 + 0x8ad0) = 0;
          *(undefined1 *)(param_1 + 0x8ad2) = 0;
          *(undefined4 *)(param_1 + 0x8ad4) = 0;
          *(undefined1 *)(param_1 + 0x8ade) = 1;
          *(undefined1 *)(param_1 + 0x8ae1) = 3;
          if (*(char *)(param_1 + 0x8ab0) != '\0') {
            *(int *)(param_1 + 0x8b00) = *(int *)(param_1 + 0x8b00) + 1;
          }
          *(undefined4 *)(param_1 + 0x8ab4) = 0;
          *(byte *)(param_1 + 0x8af0) = *(byte *)(param_1 + 0x8af0) | 4;
          *(undefined1 *)(param_1 + 0x8ab0) = 1;
          *(undefined1 *)(param_1 + 0x8ad9) = 1;
        }
      }
    }
LAB_ram_480e8e5c:
    if (bVar10 != bVar38) {
      cVar17 = *(char *)(param_1 + 0x8ab0);
      if ((bVar38 == 0) && (*(char *)(param_1 + 0x8b05) == '\x02')) {
        *(undefined1 *)(param_1 + 0x8ade) = 1;
        *(undefined1 *)(param_1 + 0x8ae1) = 3;
        if (cVar17 != '\0') {
          *(int *)(param_1 + 0x8b00) = *(int *)(param_1 + 0x8b00) + 1;
        }
        *(undefined4 *)(param_1 + 0x8ab4) = 0;
        *(byte *)(param_1 + 0x8af0) = *(byte *)(param_1 + 0x8af0) | 4;
        *(undefined1 *)(param_1 + 0x8ab0) = 1;
        *(undefined1 *)(param_1 + 0x8ad9) = 1;
      }
      else {
LAB_ram_480e8e74:
        if (cVar17 != '\0') {
          *(int *)(param_1 + 0x8b00) = *(int *)(param_1 + 0x8b00) + 1;
        }
        *(undefined4 *)(param_1 + 0x8ab4) = 0;
        *(byte *)(param_1 + 0x8af0) = *(byte *)(param_1 + 0x8af0) | 1;
        *(undefined1 *)(param_1 + 0x8ab0) = 1;
        *(undefined1 *)(param_1 + 0x8ad9) = 1;
      }
    }
  }
  else {
    if (cVar19 == '\0') {
      if (cVar4 == '\0') {
        if (bVar10 != 0) goto LAB_ram_480e8e50;
        if (bVar38 == 0) {
          if (*(char *)(param_1 + 0x8ad0) == '\0') goto LAB_ram_480e8ea0;
        }
        else {
          *(undefined1 *)(param_1 + 0x8ac8) = 0;
          if (*(char *)(param_1 + 0x8ad0) == '\0') goto LAB_ram_480e99ba;
        }
        goto LAB_ram_480e8fc6;
      }
      *(undefined1 *)(param_1 + 0x8ac8) = 0;
      goto LAB_ram_480e8e5c;
    }
    if (bVar10 != 0) goto LAB_ram_480e8e4c;
    if (bVar38 != 0) {
      *(undefined1 *)(param_1 + 0x8ac8) = 0;
      if ((cVar4 == '\0') && (*(char *)(param_1 + 0x8ad0) != '\0')) goto LAB_ram_480e8fc6;
LAB_ram_480e99ba:
      cVar17 = *(char *)(param_1 + 0x8ab0);
      goto LAB_ram_480e8e74;
    }
    if (((cVar4 == '\0') && (*(char *)(param_1 + 0x8ad0) != '\0')) &&
       (*(char *)(param_1 + 0x8add) == '\0')) goto LAB_ram_480e8fd2;
  }
LAB_ram_480e8ea0:
  if (*(char *)(param_1 + 0x8a24) == '\0') {
    *(undefined4 *)(param_1 + 0x8b3c) = 0;
    *(undefined4 *)(param_1 + 0x8b40) = 0;
    *(undefined2 *)(param_1 + 0x8b44) = 0;
    if (((*(char *)(param_1 + 0x8a69) != '\x04') &&
        (*(byte *)(param_1 + 0x8a65) = *(byte *)(param_1 + 0x8a64) | *(byte *)(param_1 + 0x8a66),
        *(byte *)(param_1 + 0x8a66) == 0)) && (*(char *)(param_1 + 0x8ab1) == '\0')) {
      *(undefined4 *)(param_1 + 0x8a64) = 0;
      *(undefined2 *)(param_1 + 0x8a68) = 0;
      *(undefined4 *)(param_1 + 0x8a6c) = 0;
      *(undefined4 *)(param_1 + 0x8a70) = 0;
      *(undefined1 *)(param_1 + 0x8adc) = 0;
      *(undefined1 *)(param_1 + 0x8a79) = 0;
      *(undefined4 *)(param_1 + 0x8a7c) = 0;
      *(undefined1 *)(param_1 + 0x8a7b) = 0;
      *(undefined1 *)(param_1 + 0x8a88) = 0;
    }
    if (cVar3 != '\0') goto LAB_ram_480e8ea8;
    FUN_ram_480544e4(iVar9,0,1);
    if (cVar4 == '\0') {
      bVar10 = 8;
      if (*(char *)(param_1 + 0x8ac8) == '\0') {
        bVar10 = bVar38 ^ 1;
      }
    }
    else {
      bVar10 = *(char *)(param_1 + 0x8ac8) << 3;
    }
  }
  else {
    if (cVar3 == '\0') {
      FUN_ram_480544e4(iVar9,0,1);
    }
LAB_ram_480e8ea8:
    bVar10 = *(char *)(param_1 + 0x8ac8) << 3;
  }
  *(byte *)(param_1 + 0x8a6a) = bVar10;
  FUN_ram_4ff3ee10(iVar9);
  uVar12 = FUN_ram_48025ba6();
  FUN_ram_48053f2a(&local_130,iVar9,uVar12);
  bVar25 = true;
  if (((((*(int *)(param_1 + 0x8c20) == 0) && (*(int *)(param_1 + 0x8c48) == 0)) &&
       (*(int *)(param_1 + 0x8bf8) == 0)) &&
      ((*(int *)(param_1 + 0x8bd0) == 0 && (cStack_127 == '\0')))) &&
     ((cStack_d4 == '\0' && ((cStack_b5 == '\0' && (cStack_e9 == '\0')))))) {
    bVar25 = cStack_ec != '\0';
  }
  fence();
  *(bool *)(param_1 + 0x8c70) = bVar25;
LAB_ram_480e8f20:
  FUN_ram_480599fe(param_1,0);
  return;
}


