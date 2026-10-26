/* Firmware entry: 0x480e0028 */

void FUN_ram_480e0028(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  short *psVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  int iStack_8c;
  int iStack_7c;
  uint uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar5 = "\x01\x02\x04";
LAB_ram_480e0060:
  do {
    cVar1 = *pcVar5;
    if (cVar1 == '\x01') {
      iVar21 = 0;
LAB_ram_480e0074:
      iVar11 = *param_1;
      iVar17 = iVar11 + 0x2864;
      FUN_ram_4ff3ec14(iVar17,0xffffffff);
      piVar12 = *(int **)(iVar11 + 0x1e08);
      FUN_ram_4ff3ee10(iVar17);
      if ((piVar12 != (int *)0x0) &&
         (iVar11 = (**(code **)(*piVar12 + 0x154))(piVar12,cVar1), iVar11 != 0)) {
        iVar17 = *param_1;
        iVar8 = iVar21 * 4 + iVar17;
        iVar13 = *(int *)(iVar8 + 0x93e0);
        if (iVar13 == iVar11) goto LAB_ram_480e0216;
        *(int *)(iVar8 + 0x93e0) = iVar11;
        if (iVar13 == 0) {
          iStack_8c = iVar17 + 0x3a40;
          if (cVar1 != '\x02') goto LAB_ram_480e00ec;
LAB_ram_480e063a:
          iStack_7c = 1;
          iVar8 = iVar17;
        }
        else {
          pcVar20 = (char *)(iVar17 + 0x9e8);
          cVar15 = '\0';
          do {
            while (*pcVar20 == cVar1) {
              cVar16 = cVar15 + '\x01';
              FUN_ram_4805c6b0(iVar17,cVar15,2,4);
              pcVar20 = pcVar20 + 0x28;
              cVar15 = cVar16;
              if (cVar16 == '\b') goto LAB_ram_480e0616;
            }
            cVar15 = cVar15 + '\x01';
            pcVar20 = pcVar20 + 0x28;
          } while (cVar15 != '\b');
LAB_ram_480e0616:
          iVar17 = *param_1;
          *(undefined1 *)(iVar17 + iVar21 + 0x3a3c) = 1;
          iStack_8c = iVar17 + 0x3a40;
          if (cVar1 == '\x02') goto LAB_ram_480e063a;
LAB_ram_480e00ec:
          iVar8 = iVar17;
          if (cVar1 == '\x04') {
            iStack_7c = 2;
          }
          else {
            iStack_7c = 0;
          }
        }
        iVar22 = iVar8 + 0x5ef0;
        iVar18 = 0;
        bVar3 = 0;
        iVar17 = iVar8 + iStack_7c * 0x1228;
LAB_ram_480e0144:
        do {
          iVar9 = 1;
          if (cVar1 != '\x02') {
            iVar9 = (uint)(cVar1 == '\x04') << 1;
          }
          if (bVar3 < 0x10) {
            if (*(char *)(iVar9 * 0x1228 + iVar8 + iVar18 + 0x3b26) != '\x01') {
              bVar3 = bVar3 + 1;
              iVar22 = iVar22 + 0x120;
              iVar18 = iVar18 + 0xe8;
              goto LAB_ram_480e0144;
            }
LAB_ram_480e064c:
            iVar9 = FUN_ram_4804691a(iStack_8c,cVar1,bVar3,5,10,0);
            if ((iVar9 != 0) && (iVar9 = *(int *)(iVar17 + 0x4c30), iVar9 != -1)) {
              *(int *)(iVar17 + 0x4c30) = iVar9 + 1;
            }
          }
          else if (((*(char *)(iVar22 + -0x1a) != '\0') && (*(char *)(iVar22 + -0x38) == cVar1)) &&
                  (*(char *)(iVar22 + 0xe6) == '\x01')) goto LAB_ram_480e064c;
          bVar3 = bVar3 + 1;
          iVar22 = iVar22 + 0x120;
          iVar18 = iVar18 + 0xe8;
        } while (bVar3 != 0x18);
        iVar17 = *param_1;
        iVar18 = 1;
        *(int *)(iStack_7c * 0x1228 + iVar8 + 0x4c58) = iVar11;
        if (cVar1 == '\x01') {
          iVar8 = *(int *)(iVar17 + 0x33e8);
          if (iVar8 == 0) {
            if (iVar13 == 0) goto LAB_ram_480e0216;
          }
          else {
            if (iVar13 == 0) goto LAB_ram_480e0216;
            iVar17 = iVar8 + 0x18;
            iVar18 = 0;
            do {
              FUN_ram_4ff3ec14(iVar8 + 0xc,0xffffffff);
              if (((*(ushort *)(iVar18 * 0x48 + iVar8 + 0x5e) & 1) != 0) &&
                 (iVar13 == *(int *)(iVar17 + 0x10))) {
                if (*(char *)(iVar17 + 0x41) == '\0') {
                  sVar6 = *(short *)(iVar8 + 0x3bfc);
                  *(undefined1 *)(iVar17 + 0x41) = 2;
                  *(short *)(iVar8 + 0x3bfc) = sVar6 + -1;
                }
                iVar9 = iVar8 + iVar18 * 0x48;
                iVar22 = *(int *)(iVar9 + 0x5c);
                if (iVar22 << 0xc < 0) {
LAB_ram_480e0738:
                  iVar22 = iVar18 * 0x48 + iVar8;
                  if (((*(int *)(iVar22 + 0x5c) << 10 < 0) && (-1 < *(int *)(iVar22 + 0x5c) << 0xe))
                     && (*(char *)(iVar17 + 0x41) != '\0')) {
                    *(byte *)(iVar22 + 0x5e) = *(byte *)(iVar22 + 0x5e) & 0xfe;
                    *(undefined2 *)(iVar17 + 0x3e) = *(undefined2 *)(iVar8 + 0x3bf0);
                    *(undefined2 *)(iVar8 + 0x3bf0) = *(undefined2 *)(iVar17 + 0x3c);
                    *(short *)(iVar8 + 0x3bf8) = *(short *)(iVar8 + 0x3bf8) + -1;
                    *(short *)(iVar8 + 0x3bfa) = *(short *)(iVar8 + 0x3bfa) + 1;
                  }
                }
                else if (*(char *)(iVar17 + 0x40) != '\x03') {
                  if (iVar22 << 0xe < 0) {
                    if (*(char *)(iVar17 + 0x42) == '\0') {
                      *(undefined1 *)(iVar17 + 0x42) = 4;
                    }
                    FUN_ram_48044d4c(iVar8 + 8,iVar17);
                  }
                  else {
                    FUN_ram_480375b2(iVar8 + 8,iVar17,4,param_3,1);
                    if (*(int *)(iVar9 + 0x5c) << 0xc < 0) goto LAB_ram_480e0738;
                  }
                }
              }
              FUN_ram_4ff3ee10(iVar8 + 0xc);
              iVar18 = iVar18 + 1;
              iVar17 = iVar17 + 0x48;
            } while (iVar18 != 0xce);
            iVar17 = *param_1;
          }
          FUN_ram_480c7f4c(iVar17 + 0x79cc,1);
          FUN_ram_480dd734(*param_1 + 0x7cd0,1);
          iVar18 = *param_1;
          iVar8 = *(int *)(iVar18 + 0x8500);
          iVar13 = iVar18 + 0x84a8;
          *(undefined2 *)(iVar8 + 0x1b0) = 0;
          iVar17 = *(int *)(iVar18 + 0x8500);
          *(undefined1 *)(iVar8 + 0x74) = 0;
          *(undefined1 *)(iVar8 + 0x76) = 0;
          *(undefined1 *)(iVar8 + 0x1a4) = 0;
          *(undefined4 *)(iVar8 + 0x1ac) = 0;
          *(undefined2 *)(iVar8 + 0x194) = 0;
          *(undefined4 *)(iVar8 + 0x198) = 0;
          *(undefined2 *)(iVar8 + 0x19c) = 0;
          *(undefined4 *)(iVar8 + 0x1a0) = 0;
          *(undefined1 *)(iVar8 + 0x1b2) = 0;
          *(undefined4 *)(iVar8 + 0x1b8) = 0;
          FUN_ram_48042e98(iVar17 + 0x80);
          iVar17 = iVar18 + 0x8520;
          FUN_ram_4ff3ec14(iVar17,0xffffffff);
          *(undefined1 *)(iVar18 + 0x8fa4) = 0;
        }
        else {
          if (iVar13 == 0) goto LAB_ram_480e0216;
          FUN_ram_480c7f4c(iVar17 + 0x79cc,cVar1);
          iVar17 = *param_1;
          FUN_ram_480dd734(iVar17 + 0x7cd0,cVar1);
          if (cVar1 == '\x02') {
            *(undefined2 *)(iVar17 + 0x7de0) = 0x100;
            *(undefined1 *)(iVar17 + 0x7de2) = 0;
            *(undefined1 *)(iVar17 + 0x7e54) = 0;
            *(undefined1 *)(iVar17 + 0x7e4c) = 0;
            if ((*(int *)(iVar17 + 0x8300) != 0 || *(int *)(iVar17 + 0x8304) != 0) &&
               (uVar4 = (uint)*(byte *)(iVar17 + 0x82f9), uVar4 != 0xff)) {
              cVar15 = *(char *)(iVar17 + 0x82f8);
              if (cVar15 != '\x02') {
                if (cVar15 == '\x04') {
                  iVar18 = 2;
                }
                else {
                  if (cVar15 != '\x01') goto LAB_ram_480e0870;
                  iVar18 = 0;
                }
              }
              if (uVar4 < 0x18) {
                iVar8 = *(int *)(iVar17 + 0x7cd8);
                if (uVar4 < 0x10) {
                  iVar8 = iVar18 * 0x1228 + uVar4 * 0xe8 + iVar8;
                  if (iVar8 != 0) goto LAB_ram_480e084c;
                }
                else {
                  iVar18 = (uVar4 - 0x10) * 0x120;
                  iVar13 = iVar8 + iVar18;
                  if ((*(char *)(iVar13 + 0x3696) != '\0') && (*(char *)(iVar13 + 0x3678) == cVar15)
                     ) {
                    iVar8 = iVar18 + 14000 + iVar8;
LAB_ram_480e084c:
                    if (((*(int *)(iVar8 + 0xd8) == *(int *)(iVar17 + 0x8300)) &&
                        (*(int *)(iVar8 + 0xdc) == *(int *)(iVar17 + 0x8304))) &&
                       (*(char *)(iVar8 + 0xe6) == '\x01')) {
                      FUN_ram_4804691a();
                    }
                  }
                }
              }
            }
LAB_ram_480e0870:
            *(undefined4 *)(iVar17 + 0x8300) = 0;
            *(undefined4 *)(iVar17 + 0x8304) = 0;
            *(undefined4 *)(iVar17 + 0x8308) = 0;
            *(undefined4 *)(iVar17 + 0x830c) = 0;
            *(undefined4 *)(iVar17 + 0x80f4) = 0;
            *(undefined4 *)(iVar17 + 0x80fc) = 0;
            *(undefined4 *)(iVar17 + 0x8100) = 0;
            *(undefined4 *)(iVar17 + 0x8104) = 0;
            *(undefined4 *)(iVar17 + 0x8108) = 0;
            *(undefined4 *)(iVar17 + 0x8110) = 0;
            *(undefined4 *)(iVar17 + 0x8114) = 0;
            *(undefined1 *)(iVar17 + 0x8118) = 0;
            *(undefined4 *)(iVar17 + 0x81d4) = 0;
            *(undefined4 *)(iVar17 + 0x81d8) = 0;
            *(undefined4 *)(iVar17 + 0x81dc) = 0;
            *(undefined4 *)(iVar17 + 0x81e0) = 0;
            *(undefined4 *)(iVar17 + 0x81e8) = 0;
            *(undefined4 *)(iVar17 + 0x81fc) = 0;
            *(undefined4 *)(iVar17 + 0x81cc) = 0;
            *(undefined4 *)(iVar17 + 0x81d0) = 0;
            *(undefined2 *)(iVar17 + 0x82f8) = 0xff00;
            *(undefined4 *)(iVar17 + 0x80f8) = 8;
            *(undefined4 *)(iVar17 + 0x810c) = 0x10000;
            iVar8 = iVar17 + 0x811c;
            do {
              uStack_6c = 0;
              iStack_68 = 8;
              uStack_64 = 0;
              iStack_60 = 0;
              uStack_5c = 0;
              uStack_58 = 0;
              uStack_54 = 0x10000;
              uStack_50 = 0;
              uStack_4c = 0;
              uStack_48 = 0;
              uStack_44 = 0;
              iVar8 = FUN_ram_4ff45158(iVar8,&uStack_6c,0x29);
              iVar8 = iVar8 + 0x2c;
            } while (iVar17 + 0x81cc != iVar8);
            iVar18 = *param_1;
            iVar8 = *(int *)(iVar17 + 0x81e4) + 1;
            *(int *)(iVar17 + 0x81e4) = iVar8;
            if (iVar8 == 0) {
              *(undefined4 *)(iVar17 + 0x81e4) = 1;
            }
            iVar13 = iVar18 + 0x84a8;
            FUN_ram_4804385c(*(int *)(iVar18 + 0x8500) + 0x80,iVar11);
            iVar17 = iVar18 + 0x8520;
            FUN_ram_4ff3ec14(iVar17,0xffffffff);
            *(undefined2 *)(iVar18 + 0x9140) = 0;
          }
          else {
            iVar13 = *param_1 + 0x84a8;
            iVar17 = *param_1 + 0x8520;
            FUN_ram_4ff3ec14(iVar17,0xffffffff);
          }
        }
        FUN_ram_4ff3ee10(iVar17);
        FUN_ram_480df3bc(iVar13,cVar1);
        iVar17 = *param_1;
        iVar8 = *(int *)(iVar17 + 0x92b0) + 1;
        if (iVar8 == 0) {
          iVar8 = 1;
        }
        *(int *)(iVar17 + 0x92b0) = iVar8;
        *(undefined1 *)(iVar17 + 0x9300) = 0;
        *(undefined2 *)(iVar17 + 0x92ec) = 0;
        *(undefined2 *)(iVar17 + 0x92e6) = 0;
        if (*(char *)(iVar17 + 0x9301) == '\0') {
          *(undefined1 *)(iVar17 + 0x929c) = 0;
          *(undefined1 *)(iVar17 + 0x929e) = 0;
          *(undefined1 *)(iVar17 + 0x929f) = 0;
          *(undefined1 *)(iVar17 + 0x92a0) = 0;
          *(undefined1 *)(iVar17 + 0x92a1) = 0;
          *(undefined1 *)(iVar17 + 0x92a4) = 0;
          *(undefined1 *)(iVar17 + 0x92a5) = 0;
          *(undefined1 *)(iVar17 + 0x92a6) = 0;
          *(undefined1 *)(iVar17 + 0x92a7) = 0;
          *(undefined1 *)(iVar17 + 0x92a8) = 0;
          *(undefined1 *)(iVar17 + 0x92a9) = 0;
          *(undefined1 *)(iVar17 + 0x92aa) = 0;
          *(undefined1 *)(iVar17 + 0x92ab) = 0;
          *(undefined2 *)(iVar17 + 0x92ac) = 0;
        }
        *(undefined4 *)(iVar17 + 0x92fc) = 0x1000000;
        *(undefined1 *)(iVar17 + 0x9306) = 0;
        *(undefined1 *)(iVar17 + 0x9305) = 0;
        *(undefined1 *)(iVar17 + 0x9309) = 0;
        *(undefined1 *)(iVar17 + 0x930a) = 0;
        *(undefined2 *)(iVar17 + 0x92f8) = 0;
        *(undefined1 *)(iVar17 + 0x92f5) = 0;
        *(undefined2 *)(iVar17 + 0x92ee) = 0;
        *(undefined4 *)(iVar17 + 0x92f0) = 0;
        *(undefined1 *)(iVar17 + 0x93b9) = 0;
        *(undefined1 *)(iVar17 + 0x92f6) = 1;
        if (cVar1 == '\x02') {
          *(undefined2 *)(iVar17 + 0x93d6) = 0;
          *(undefined1 *)(iVar17 + 0x93de) = 1;
          if (((*(int *)(iVar17 + 0x93c4) == 0) && (*(int *)(iVar17 + 0x93c0) == 0)) &&
             (*(char *)(iVar17 + 0x93d8) != '\0')) {
            FUN_ram_480c3f56(iVar17 + 0x9288,0,2);
            iVar17 = *param_1;
            goto LAB_ram_480e0216;
          }
        }
        iVar17 = *param_1;
LAB_ram_480e0216:
        FUN_ram_480dcdda(iVar17,cVar1);
        uStack_6c = uStack_6c & 0xffffff00;
        iStack_68 = 0;
        uStack_64 = uStack_64 & 0xffff0000;
        iStack_60 = 0;
        uStack_5c = uStack_5c & 0xffff0000;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
LAB_ram_480e0236:
        iVar17 = *param_1;
        psVar14 = *(short **)(iVar17 + 0x33ec);
        if (psVar14 == (short *)0x0) goto LAB_ram_480e054e;
LAB_ram_480e0246:
        if ((((char)psVar14[8] != '\0') || (*(char *)(iVar17 + iVar21 + 0x3a3c) == '\0')) ||
           (sVar6 = *psVar14, sVar6 == 0)) goto LAB_ram_480e01be;
        if (*(code **)(psVar14 + 2) != (code *)0x0) {
          iVar17 = (**(code **)(psVar14 + 2))();
          if (*(uint *)(psVar14 + 6) <= (uint)(iVar17 - *(int *)(psVar14 + 4)))
          goto LAB_ram_480e01be;
          sVar6 = *psVar14;
          iVar17 = *param_1;
        }
        *psVar14 = sVar6 + -1;
        do {
          iVar8 = iVar17 + 0x2864;
          uStack_6c = uStack_6c & 0xffffff00;
          iStack_68 = 0;
          uStack_64 = uStack_64 & 0xffff0000;
          iStack_60 = 0;
          uStack_5c = uStack_5c & 0xffff0000;
          uStack_54 = 0;
          uStack_50 = 0;
          FUN_ram_4ff3ec14(iVar8,0xffffffff);
          sVar6 = 0x80;
LAB_ram_480e02ba:
          psVar14 = *(short **)(iVar17 + 0x1e0c);
          if (psVar14 != (short *)0x0) {
            sVar7 = *psVar14;
            if (sVar7 != 0) {
              if (*(code **)(psVar14 + 2) != (code *)0x0) {
                iVar13 = (**(code **)(psVar14 + 2))();
                if (*(uint *)(psVar14 + 6) <= (uint)(iVar13 - *(int *)(psVar14 + 4)))
                goto LAB_ram_480e056c;
                sVar7 = *psVar14;
              }
              *psVar14 = sVar7 + -1;
              goto LAB_ram_480e02ea;
            }
            goto LAB_ram_480e056c;
          }
LAB_ram_480e02ea:
          if (cVar1 == '\x01') {
            uVar4 = (uint)*(byte *)(iVar17 + 0x1e10);
            iVar13 = 0;
            bVar3 = *(byte *)(iVar17 + 0x1e10) + 1 & 0x7f;
          }
          else if (cVar1 == '\x02') {
            uVar4 = (uint)*(byte *)(iVar17 + 0x1e11);
            iVar13 = 1;
            bVar3 = *(byte *)(iVar17 + 0x1e11) + 1 & 0x7f;
          }
          else {
            uVar4 = (uint)*(byte *)(iVar17 + 0x1e12);
            iVar13 = 2;
            bVar3 = *(byte *)(iVar17 + 0x1e12) + 1 & 0x7f;
          }
          *(byte *)(iVar13 + iVar17 + 0x2000 + -0x1f0) = bVar3;
          iVar13 = iVar17 + 0x2000 + uVar4 * 0x14;
          if (((*(char *)(iVar13 + -0x1cf) == '\0') || (cVar1 != *(char *)(iVar13 + -0x1d0))) ||
             (iVar18 = *(int *)(iVar13 + -0x1d4), iVar18 == iVar11)) goto LAB_ram_480e0560;
          bVar3 = *(byte *)(iVar13 + -0x1e0);
          uVar19 = (uint)bVar3;
          iVar13 = *(int *)(iVar13 + -0x1dc);
          puVar10 = (undefined1 *)(uVar4 * 0x14 + 0x1e20 + iVar17);
          *puVar10 = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10[0x12] = 0;
          uStack_64._0_2_ = CONCAT11(cVar1,(undefined1)uStack_64);
          uStack_5c = CONCAT31(uStack_5c._1_3_,1);
          uStack_6c = CONCAT31(uStack_6c._1_3_,bVar3);
          uStack_50 = 0x40000000;
          iStack_68 = iVar13;
          iStack_60 = iVar18;
          FUN_ram_4ff3ee10(iVar8);
          uVar2 = FUN_ram_48025b94();
          iVar17 = *param_1;
          uStack_54 = uVar2;
          FUN_ram_4805d48e(iVar17,&uStack_6c);
          if (uVar19 < 0x10) {
            FUN_ram_4ff3ec14(iVar17 + 0xb20,0xffffffff);
            iVar8 = uVar19 * 4 + iVar17;
            *(undefined4 *)(iVar8 + 0x1564) = 0x40000000;
            *(undefined4 *)(iVar8 + 0x1524) = param_2;
            *(int *)(iVar8 + 0x14e4) = *(int *)(iVar8 + 0x14e4) + 1;
            FUN_ram_4ff3ee10(iVar17 + 0xb20);
          }
          iVar17 = *param_1;
          FUN_ram_480cb520(iVar17 + 0x7cd0,&uStack_6c);
          FUN_ram_480df834(iVar17 + 0x84a8,&uStack_6c);
          if ((*(int *)(iVar17 + 0x93c4) == iVar13) && (iVar13 != 0)) {
            *(undefined4 *)(iVar17 + 0x93c4) = 0;
            if (*(char *)(iVar17 + 0x93d9) == '\0') {
              *(undefined2 *)(iVar17 + 0x93da) = 1;
            }
            FUN_ram_480c3f56(iVar17 + 0x9288,0,2);
          }
          if (((*(char *)(iVar17 + 0x7ce0) != '\0') || (*(char *)(iVar17 + 0x8528) != '\0')) ||
             (uVar19 != 0xe)) goto LAB_ram_480e0236;
          piVar12 = (int *)(iVar17 + 0x981c);
          while ((piVar12[1] != iVar13 || (iVar8 = *piVar12, iVar8 == 0))) {
            piVar12 = piVar12 + 2;
            if ((int *)(iVar17 + 0x987c) == piVar12) goto LAB_ram_480e0236;
          }
          FUN_ram_4ff3ec14(iVar17 + 0xb28,0xffffffff);
          if (*(char *)(iVar17 + 0x9b06) != '\0') {
            *(char *)(iVar17 + 0x9b06) = *(char *)(iVar17 + 0x9b06) + -1;
          }
          uVar4 = *(byte *)(iVar17 + 0x9b04) + 1 & 0x1f;
          if (*(byte *)(iVar17 + 0x9b05) == uVar4) {
            *(int *)(iVar17 + 0x9b08) = *(int *)(iVar17 + 0x9b08) + 1;
          }
          else {
            puVar10 = (undefined1 *)(iVar17 + (uint)*(byte *)(iVar17 + 0x9b04) * 0x14 + 0x9884);
            puVar10[1] = (char)((uint)iVar8 >> 8);
            puVar10[8] = (char)uVar2;
            puVar10[2] = (char)((uint)iVar8 >> 0x10);
            *puVar10 = (char)iVar8;
            puVar10[4] = 0;
            puVar10[0xc] = 0;
            puVar10[0xd] = 0;
            puVar10[0xe] = 0;
            puVar10[0x10] = 0;
            puVar10[3] = (char)((uint)iVar8 >> 0x18);
            puVar10[9] = (char)((uint)uVar2 >> 8);
            puVar10[10] = (char)((uint)uVar2 >> 0x10);
            puVar10[0xb] = (char)((uint)uVar2 >> 0x18);
            puVar10[0xf] = 0x40;
            *(char *)(iVar17 + 0x9b04) = (char)uVar4;
          }
          FUN_ram_4ff3ee10(iVar17 + 0xb28);
          iVar17 = *param_1;
          *piVar12 = 0;
          piVar12[1] = 0;
          psVar14 = *(short **)(iVar17 + 0x33ec);
          if (psVar14 != (short *)0x0) goto LAB_ram_480e0246;
LAB_ram_480e054e:
          if (*(char *)(iVar17 + iVar21 + 0x3a3c) == '\0') break;
        } while( true );
      }
    }
    else {
      iVar21 = 2;
      if (cVar1 == '\x02') {
        iVar21 = 1;
        goto LAB_ram_480e0074;
      }
      if (cVar1 == '\x04') goto LAB_ram_480e0074;
      iVar11 = *param_1;
      iVar21 = iVar11 + 0x2864;
      FUN_ram_4ff3ec14(iVar21,0xffffffff);
      piVar12 = *(int **)(iVar11 + 0x1e08);
      FUN_ram_4ff3ee10(iVar21);
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0x154))(piVar12,cVar1);
      }
    }
LAB_ram_480e01be:
    pcVar5 = pcVar5 + 1;
    if (pcVar5 == "") {
      return;
    }
  } while( true );
LAB_ram_480e0560:
  sVar6 = sVar6 + -1;
  if (sVar6 == 0) {
LAB_ram_480e056c:
    FUN_ram_4ff3ee10(iVar8);
    psVar14 = *(short **)(*param_1 + 0x33ec);
    if ((psVar14 != (short *)0x0) && (*psVar14 == 0)) goto LAB_ram_480e01be;
    *(undefined1 *)(*param_1 + iVar21 + 0x3a3c) = 0;
    pcVar5 = pcVar5 + 1;
    if (pcVar5 == "") {
      return;
    }
    goto LAB_ram_480e0060;
  }
  goto LAB_ram_480e02ba;
}


