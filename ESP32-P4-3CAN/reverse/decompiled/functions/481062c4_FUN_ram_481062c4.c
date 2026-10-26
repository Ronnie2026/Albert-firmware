/* Firmware entry: 0x481062c4 */

void FUN_ram_481062c4(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 uVar15;
  uint *puVar16;
  int iVar17;
  char cVar18;
  char *pcVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  char cVar25;
  bool bVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  uint *puVar30;
  byte bVar31;
  int iVar32;
  char cVar33;
  char cVar34;
  byte bVar35;
  byte bVar36;
  char cVar37;
  undefined1 uVar38;
  char cVar39;
  int iVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  int iVar43;
  bool bVar44;
  int iStack_194;
  uint uStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  char cStack_160;
  bool bStack_15f;
  char cStack_15e;
  undefined1 uStack_15d;
  undefined2 uStack_15c;
  byte bStack_15a;
  undefined1 uStack_159;
  bool bStack_158;
  byte bStack_157;
  short sStack_154;
  undefined1 uStack_152;
  undefined1 uStack_151;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  char cStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  char cStack_113;
  char cStack_112;
  undefined1 uStack_111;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined1 uStack_f0;
  char cStack_ef;
  char cStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  char local_e4;
  char cStack_e3;
  char cStack_e2;
  undefined1 uStack_e1;
  undefined1 auStack_e0 [2];
  undefined1 uStack_de;
  undefined1 uStack_dc;
  byte bStack_db;
  byte bStack_da;
  char cStack_d9;
  char acStack_d8 [4];
  undefined4 local_d4 [30];
  char cStack_5a;
  char cStack_50;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar30 = (uint *)param_1[3];
  fence();
  uVar9 = *puVar30;
  do {
    uVar12 = uVar9 + 1;
    if ((int)uVar9 < 0) {
      return;
    }
    if ((uVar9 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar30 != uVar9;
    uVar9 = *puVar30;
  } while (bVar1);
  *puVar30 = uVar12;
  iVar32 = *param_1;
  FUN_ram_4ff3ec14(iVar32 + 0xb18,0xffffffff);
  puVar27 = (undefined4 *)(iVar32 + 0xb38);
  pcVar19 = &local_e4;
  do {
    uVar10 = puVar27[1];
    uVar13 = puVar27[2];
    uVar15 = puVar27[3];
    *(undefined4 *)pcVar19 = *puVar27;
    *(undefined4 *)(pcVar19 + 4) = uVar10;
    *(undefined4 *)(pcVar19 + 8) = uVar13;
    *(undefined4 *)(pcVar19 + 0xc) = uVar15;
    puVar27 = puVar27 + 4;
    pcVar19 = pcVar19 + 0x10;
  } while (puVar27 != (undefined4 *)(iVar32 + 0xbd8));
  *(undefined4 *)pcVar19 = *puVar27;
  FUN_ram_4ff3ee10(iVar32 + 0xb18);
  iVar32 = *param_1;
  bVar1 = *(int *)(iVar32 + 0x8fa0) != 0;
  bVar2 = (uint)(param_2 - *(int *)(iVar32 + 0x8fa0)) < 0x12d;
  bVar14 = bVar1 && bVar2;
  bVar4 = *(int *)(iVar32 + 0x7c64) != 0;
  bVar3 = (uint)(param_2 - *(int *)(iVar32 + 0x7c64)) < 0x1f5;
  cVar37 = bVar4 && bVar3;
  cVar33 = cStack_5a;
  cVar39 = cStack_4c;
  cVar11 = local_e4;
  if ((*(int *)(iVar32 + 0x9050) == 0) || (300 < (uint)(param_2 - *(int *)(iVar32 + 0x9050)))) {
    if (local_e4 != '\0') {
      if (bVar14) {
        cVar18 = *(char *)(iVar32 + 0x8f9c);
        *(char *)((int)param_1 + 0xe1) = cStack_4c;
        *(bool *)((int)param_1 + 0xe2) = cVar18 == '\x04';
        *(undefined1 *)((int)param_1 + 0xe3) = 1;
        cVar11 = bVar14;
        if ((cStack_4c != '\0') && (cVar11 = cStack_4c, cVar18 == '\x04')) {
LAB_ram_48106f36:
          cVar39 = '\x01';
          *(undefined2 *)((int)param_1 + 0xe6) = 0;
          *(undefined2 *)(param_1 + 0x39) = 0;
          *(undefined1 *)(param_1 + 0x38) = 2;
          cVar11 = '\x01';
          uVar9 = 0;
          goto LAB_ram_48106416;
        }
      }
      else {
        *(char *)((int)param_1 + 0xe1) = cStack_4c;
        *(undefined2 *)((int)param_1 + 0xe2) = 0x100;
      }
      goto LAB_ram_48106c40;
    }
    if (bVar1 && bVar2) {
      bVar26 = *(char *)(iVar32 + 0x8f9c) == '\x04';
      cVar18 = bVar14;
    }
    else {
      bVar26 = false;
      cVar18 = '\x01';
    }
LAB_ram_48106c2e:
    *(undefined1 *)((int)param_1 + 0xe1) = 0;
    *(bool *)((int)param_1 + 0xe2) = bVar26;
    *(char *)((int)param_1 + 0xe3) = cVar18;
LAB_ram_48106c3a:
    cStack_5a = '\0';
    cVar39 = '\0';
    cVar11 = '\0';
LAB_ram_48106c40:
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    *(undefined1 *)(param_1 + 0x38) = 2;
LAB_ram_48106c4e:
    uVar9 = 0;
    cVar33 = cStack_5a;
  }
  else {
    cVar18 = *(char *)(iVar32 + 0x902c);
    if (local_e4 == '\0') {
      if (!bVar1 || !bVar2) {
        bVar26 = false;
        goto LAB_ram_48106c2e;
      }
      cVar39 = *(char *)(iVar32 + 0x8f9c);
      *(undefined1 *)((int)param_1 + 0xe1) = 0;
      *(char *)((int)param_1 + 0xe3) = cVar18;
      *(bool *)((int)param_1 + 0xe2) = cVar39 == '\x04';
      goto LAB_ram_48106c3a;
    }
    if (!bVar1 || !bVar2) {
      *(char *)((int)param_1 + 0xe1) = cStack_4c;
      *(undefined1 *)((int)param_1 + 0xe2) = 0;
      *(char *)((int)param_1 + 0xe3) = cVar18;
      goto LAB_ram_48106c40;
    }
    cVar34 = *(char *)(iVar32 + 0x8f9c);
    *(char *)((int)param_1 + 0xe1) = cStack_4c;
    *(char *)((int)param_1 + 0xe3) = cVar18;
    *(bool *)((int)param_1 + 0xe2) = cVar34 == '\x04';
    cVar11 = bVar14;
    if ((cStack_4c == '\0') || (cVar11 = cStack_4c, cVar34 != '\x04')) goto LAB_ram_48106c40;
    if ((cVar18 != '\0') || ((param_1[0x3a] != 0 && (0x2ee < (uint)(param_2 - param_1[0x3a])))))
    goto LAB_ram_48106f36;
    uVar9 = 2;
    if ((char)param_1[0x38] != '\0') {
      if ((char)param_1[0x38] == '\x01') {
        uVar9 = 6;
        goto LAB_ram_48106416;
      }
      goto LAB_ram_48106c4e;
    }
  }
LAB_ram_48106416:
  iVar20 = (iVar32 + 0x7a15U & 3) << 3;
  puVar16 = (uint *)(iVar32 + 0x7a15U & 0xfffffffc);
  uVar12 = *puVar16;
  *puVar16 = uVar12 & ~(0xff << iVar20) | uVar9 << iVar20;
  if (uVar9 != ((int)uVar12 >> iVar20 & 0xffU)) {
    *(int *)(iVar32 + 0x7a48) = *(int *)(iVar32 + 0x7a48) + 1;
    iVar32 = *(int *)(iVar32 + 0x79cc);
    piVar21 = (int *)(iVar32 + 0x5c4);
    do {
      iVar20 = *piVar21 + 1;
      if (iVar20 == 0) {
        iVar20 = 1;
      }
      *piVar21 = iVar20;
      piVar21 = piVar21 + 0x2c;
    } while (piVar21 != (int *)(iVar32 + 0x7d4));
  }
  bVar26 = false;
  if (*(char *)((int)param_1 + 0x112) != '\0') {
    bVar26 = false;
    if (param_1[0x46] != 0) {
      bVar26 = (uint)(param_2 - param_1[0x46]) < 0xfb;
    }
  }
  uVar9 = (uint)bStack_da;
  *(undefined1 *)((int)param_1 + 0x112) = 0;
  if ((((uVar9 == 0) || (cStack_d9 == '\0')) || (acStack_d8[0] == '\0')) ||
     (iVar32 = FUN_ram_48045922(param_1[1],1,0), iVar32 == 0)) {
    iVar32 = 0;
  }
  else {
    iVar32 = FUN_ram_48045922(param_1[1],2,0);
  }
  iVar20 = *param_1;
  cVar18 = *(char *)(iVar20 + 0x8f9c);
  bVar35 = *(byte *)(iVar20 + 0x7c58);
  cVar34 = *(char *)(iVar20 + 0x904c);
  if (cStack_e3 == '\f') {
    cVar25 = '\x04';
    cVar5 = '\f';
  }
  else {
    cVar5 = '\r';
    cVar25 = '\x04';
    if (cStack_e3 == '\x0e') {
      iVar43 = iVar20 + 0x910c;
      FUN_ram_4ff3ec14(iVar43,0xffffffff);
      if ((((*(char *)(iVar20 + 0x9108) == '\0') && (*(char *)(iVar20 + 0x90d8) != '\0')) &&
          ((*(char *)(iVar20 + 0x90d9) != '\0' &&
           (((uint)(param_2 - *(int *)(iVar20 + 0x90d0)) < 0x12d &&
            (*(char *)(iVar20 + 0x90e8) != '\0')))))) && (*(char *)(iVar20 + 0x90e9) != '\0')) {
        uStack_f0 = *(undefined1 *)(iVar20 + 0x90ec);
        cStack_ef = *(char *)(iVar20 + 0x90ed);
        cStack_ee = *(char *)(iVar20 + 0x90ee);
        uStack_ed = *(undefined1 *)(iVar20 + 0x90ef);
        uStack_ec = *(undefined1 *)(iVar20 + 0x90f0);
        uStack_eb = *(undefined1 *)(iVar20 + 0x90f1);
        uStack_ea = *(undefined1 *)(iVar20 + 0x90f2);
        uStack_e9 = *(undefined1 *)(iVar20 + 0x90f3);
        uStack_e8 = *(undefined1 *)(iVar20 + 0x90f4);
        uStack_e7 = *(undefined1 *)(iVar20 + 0x90f5);
        if (300 < (uint)(param_2 - *(int *)(iVar20 + 0x90e0))) goto LAB_ram_48106ef6;
        FUN_ram_4ff3ee10(iVar43);
        if (cStack_ef == '\0') goto LAB_ram_48106f04;
        if (cStack_ee == '\x01') {
          cVar25 = '\x04';
        }
        else {
          cVar25 = (cStack_ee == '\x02') << 1;
        }
      }
      else {
LAB_ram_48106ef6:
        FUN_ram_4ff3ee10(iVar43);
LAB_ram_48106f04:
        cVar25 = '\0';
      }
      iVar20 = *param_1;
      cVar5 = '\x0e';
    }
  }
  cVar7 = *(char *)(iVar20 + 0x8fde);
  iVar43 = *(int *)(iVar20 + 0x7a4c);
  if (cVar7 == '\0') {
    cVar7 = *(char *)(iVar20 + 0x8f94);
  }
  iVar22 = *(int *)(iVar20 + 0x7a44);
  fence();
  iStack_194 = param_1[0x33];
  iVar17 = param_1[0x35];
  uVar12 = (uint)*(byte *)((int)param_1 + 0xaa);
  iVar20 = param_1[0x31];
  iVar40 = param_1[0x32];
  iVar28 = param_1[0x36];
  iVar29 = param_1[0x37];
  if (uVar12 == 0) {
    if ((cVar33 == '\0') || (iVar32 == 0)) {
      cVar33 = cVar33 + '\x01';
      *(char *)((int)param_1 + 0xa9) = cVar33;
      *(undefined1 *)((int)param_1 + 0xab) = 0;
      *(undefined2 *)(param_1 + 0x2b) = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      param_1[0x31] = 0;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      bVar8 = false;
      uVar42 = 0;
      uVar38 = 0;
      uVar41 = 0;
      cVar25 = '\0';
      uVar6 = 0;
      uVar12 = 0;
      bVar44 = false;
      bVar36 = 0;
    }
    else {
      bVar36 = *(byte *)(param_1 + 0x2a);
      uVar23 = (uint)bVar36;
      if (uVar23 == 4) {
        if (!bVar1 || !bVar2) {
          cVar33 = *(char *)((int)param_1 + 0xa9);
          uVar41 = *(undefined1 *)((int)param_1 + 0xab);
          bVar44 = true;
LAB_ram_481076ee:
          uVar12 = 0;
          goto LAB_ram_48107048;
        }
        uVar12 = 0;
LAB_ram_48107b60:
        if (cVar18 == '\x04') {
LAB_ram_48107c88:
          uVar23 = 5;
          uVar41 = 1;
          *(undefined1 *)((int)param_1 + 0xab) = 1;
          bVar44 = true;
          *(char *)(param_1 + 0x30) = cVar18;
          *(undefined2 *)(param_1 + 0x2a) = 5;
          cVar33 = '\0';
          bVar8 = false;
          cVar25 = '\0';
          uVar6 = 0;
        }
        else {
          if (cVar5 == '\x0e') {
            if (cVar18 == '\x02') goto LAB_ram_48107c88;
            if (cVar18 == '\x01') {
              cVar33 = *(char *)((int)param_1 + 0xa9);
              uVar41 = *(undefined1 *)((int)param_1 + 0xab);
              if ((cVar34 != '\0') && ((cVar25 - 2U & 0xfd) == 0)) goto LAB_ram_48107d72;
              goto LAB_ram_48107b98;
            }
          }
          else if (cVar18 == '\x01') {
            cVar33 = *(char *)((int)param_1 + 0xa9);
            uVar41 = *(undefined1 *)((int)param_1 + 0xab);
            if ((cVar34 != '\0') && (cVar25 == '\x04')) {
LAB_ram_48107d72:
              iStack_194 = iStack_194 + 1;
              uVar23 = 3;
              bVar44 = true;
              param_1[0x33] = iStack_194;
              *(char *)(param_1 + 0x30) = cVar25;
              *(undefined1 *)(param_1 + 0x2b) = 1;
              uVar6 = 1;
              param_1[0x2e] = param_2 + 200;
              param_1[0x2d] = param_2 + 2000;
              *(undefined1 *)(param_1 + 0x2a) = 3;
              bVar8 = false;
              goto LAB_ram_481071ce;
            }
LAB_ram_48107b98:
            bVar44 = uVar23 - 2 < 4;
            bVar8 = false;
            cVar25 = '\0';
            uVar6 = 0;
            goto LAB_ram_481071ce;
          }
LAB_ram_48107688:
          iVar28 = iVar28 + 1;
          *(undefined **)(param_1 + 0x2a) = &hgeie;
          param_1[0x36] = iVar28;
          *(undefined1 *)((int)param_1 + 0xab) = 0;
          uVar41 = 0;
          bVar44 = false;
          cVar33 = '\x06';
          uVar23 = 7;
          bVar8 = false;
          cVar25 = '\0';
          uVar6 = 0;
        }
      }
      else {
        if (4 < uVar23) {
          if (uVar23 == 6) {
            if (bVar1 && bVar2) {
              if (cVar18 != '\x01') {
                cVar33 = *(char *)((int)param_1 + 0xa9);
                uVar41 = *(undefined1 *)((int)param_1 + 0xab);
                bVar44 = false;
                goto LAB_ram_481076ee;
              }
LAB_ram_48107daa:
              param_1[0x2c] = 0;
              param_1[0x2d] = 0;
              param_1[0x2e] = 0;
              param_1[0x2f] = 0;
              *(undefined1 *)(param_1 + 0x30) = 0;
              param_1[0x31] = 0;
              *(undefined2 *)(param_1 + 0x2b) = 0;
              param_1[0x2a] = 1;
              if (uVar12 != 0) {
LAB_ram_48107cd0:
                uVar42 = 1;
                bVar44 = false;
                cVar33 = '\0';
                uVar41 = 0;
                uVar12 = 0;
                cVar25 = '\0';
                uVar38 = 0;
                bVar8 = false;
                uVar6 = 0;
                bVar36 = 1;
                goto LAB_ram_481065ae;
              }
            }
            else {
LAB_ram_48107936:
              param_1[0x2c] = 0;
              param_1[0x2d] = 0;
              param_1[0x2e] = 0;
              param_1[0x2f] = 0;
              *(undefined1 *)(param_1 + 0x30) = 0;
              param_1[0x31] = 0;
              *(undefined2 *)(param_1 + 0x2b) = 0;
              param_1[0x2a] = 1;
            }
            bVar44 = false;
            cVar33 = '\0';
            bVar36 = 1;
            uVar41 = 0;
            uVar12 = 0;
          }
          else {
            if (uVar23 < 7) {
LAB_ram_48107678:
              if ((bVar14) && ((char)param_1[0x30] != cVar18)) goto LAB_ram_48107688;
              if ((bool)cVar37) {
                uVar41 = *(undefined1 *)((int)param_1 + 0xab);
                bVar44 = uVar23 - 2 < 4;
                bVar8 = bVar44;
                if ((iVar43 == iVar20) || (2 < (byte)(bVar35 - 3))) goto LAB_ram_48107bfe;
                cVar33 = '\t';
                *(undefined1 *)((int)param_1 + 0xa9) = 9;
                bVar8 = false;
                cVar25 = '\0';
                uVar6 = 0;
              }
              else {
                iVar29 = iVar29 + 1;
                *(undefined2 *)(param_1 + 0x2a) = 0x208;
                param_1[0x37] = iVar29;
                *(undefined1 *)((int)param_1 + 0xab) = 0;
                uVar41 = 0;
                bVar44 = false;
                cVar33 = '\x02';
                uVar23 = 8;
                bVar8 = false;
                cVar25 = '\0';
                uVar6 = 0;
              }
              goto LAB_ram_481071ce;
            }
            if ((uVar23 - 7 & 0xff) < 2) {
              if ((!bVar1 || !bVar2) || (cVar18 == '\x01')) goto LAB_ram_48107936;
              uVar41 = *(undefined1 *)((int)param_1 + 0xab);
              cVar33 = *(char *)((int)param_1 + 0xa9);
              bVar44 = uVar23 - 2 < 4;
              uVar12 = 0;
            }
            else {
              uVar41 = *(undefined1 *)((int)param_1 + 0xab);
              cVar33 = *(char *)((int)param_1 + 0xa9);
              bVar44 = false;
              uVar12 = 0;
            }
          }
LAB_ram_48107048:
          cVar25 = '\0';
          uVar38 = 0;
          bVar8 = false;
          uVar6 = 0;
          uVar42 = 0;
          goto LAB_ram_481065ae;
        }
LAB_ram_4810719c:
        if (uVar23 == 2) {
          uVar41 = *(undefined1 *)((int)param_1 + 0xab);
          if (iVar22 == param_1[0x2f]) {
            bVar44 = true;
            bVar8 = true;
            if ((param_2 + -700) - param_1[0x2c] < 0) {
LAB_ram_48107bfe:
              bVar44 = bVar8;
              cVar33 = *(char *)((int)param_1 + 0xa9);
              bVar8 = false;
              cVar25 = '\0';
              uVar6 = 0;
            }
            else {
              cVar33 = '\x03';
              *(undefined1 *)((int)param_1 + 0xa9) = 3;
              bVar8 = false;
              cVar25 = '\0';
              uVar6 = 0;
            }
          }
          else {
            *(undefined1 *)((int)param_1 + 0xa9) = 0;
            if ((cVar34 == '\0') ||
               ((cVar25 != '\x04' && ((cVar5 != '\x0e' || (cVar25 != '\x02')))))) {
              uVar23 = 4;
              *(undefined1 *)(param_1 + 0x2a) = 4;
              bVar44 = true;
              cVar33 = '\0';
              bVar8 = false;
              cVar25 = '\0';
              uVar6 = 0;
            }
            else {
              iStack_194 = iStack_194 + 1;
              uVar23 = 3;
              param_1[0x2d] = param_2 + 2000;
              bVar44 = true;
              param_1[0x33] = iStack_194;
              *(char *)(param_1 + 0x30) = cVar25;
              *(undefined1 *)(param_1 + 0x2b) = 1;
              uVar6 = 1;
              param_1[0x2e] = param_2 + 200;
              *(undefined1 *)(param_1 + 0x2a) = 3;
              cVar33 = '\0';
              bVar8 = false;
            }
          }
        }
        else if (uVar23 == 3) {
          if (bVar1 && bVar2) {
            if ((char)param_1[0x30] == cVar18) {
              uVar23 = 5;
              uVar41 = 1;
              *(undefined1 *)((int)param_1 + 0xab) = 1;
              *(char *)(param_1 + 0x30) = cVar18;
              *(undefined2 *)(param_1 + 0x2a) = 5;
              cVar33 = '\0';
              cVar25 = '\0';
              uVar6 = 0;
LAB_ram_48107d4a:
              bVar44 = true;
              bVar8 = false;
              goto LAB_ram_481071ce;
            }
            if (cVar18 == '\x01') goto LAB_ram_4810799e;
            cVar33 = '\x06';
          }
          else {
LAB_ram_4810799e:
            if (cVar34 == '\0') {
              cVar33 = '\a';
            }
            else {
              if (param_2 - param_1[0x2d] < 0) {
                cVar33 = *(char *)((int)param_1 + 0xa9);
                uVar41 = *(undefined1 *)((int)param_1 + 0xab);
                if (((*(char *)((int)param_1 + 0xad) == '\0') && ((char)param_1[0x2b] == '\0')) &&
                   (-1 < param_2 - param_1[0x2e])) {
                  uVar6 = 1;
                  *(undefined1 *)(param_1 + 0x2b) = 1;
                  iStack_194 = iStack_194 + 1;
                  param_1[0x33] = iStack_194;
                  cVar25 = (char)param_1[0x30];
                }
                else {
                  cVar25 = '\0';
                  uVar6 = 0;
                }
                goto LAB_ram_48107d4a;
              }
              cVar33 = '\x05';
            }
          }
          iVar28 = iVar28 + 1;
          uVar23 = 7;
          *(undefined1 *)((int)param_1 + 0xab) = 0;
          *(char *)((int)param_1 + 0xa9) = cVar33;
          param_1[0x36] = iVar28;
          *(undefined1 *)(param_1 + 0x2a) = 7;
          uVar41 = 0;
          bVar44 = false;
          bVar8 = true;
          cVar25 = '\0';
          uVar6 = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x2a) = 1;
          uVar41 = *(undefined1 *)((int)param_1 + 0xab);
          if ((((bVar14) && (cVar18 == '\x01')) && ((bVar4 && bVar3 && ((bVar35 == 2 && (bVar26)))))
              ) && (cVar7 == '\0')) {
            iVar40 = iVar40 + 1;
            param_1[0x2f] = iVar22;
            param_1[0x31] = iVar43;
            param_1[0x32] = iVar40;
            *(undefined1 *)((int)param_1 + 0xaa) = 1;
            param_1[0x2c] = param_2;
            *(undefined1 *)((int)param_1 + 0xad) = 0;
            *(undefined2 *)(param_1 + 0x2a) = 2;
            cVar33 = '\0';
            cVar25 = '\0';
            bVar8 = false;
            uVar6 = 0;
            uVar42 = 0;
            uVar12 = 1;
            bVar44 = true;
            uVar38 = 1;
            bVar36 = bVar35;
            goto LAB_ram_481065ae;
          }
          cVar33 = '\x02';
          *(undefined1 *)((int)param_1 + 0xa9) = 2;
          bVar44 = false;
          uVar23 = 1;
          bVar8 = false;
          cVar25 = '\0';
          uVar6 = 0;
        }
      }
LAB_ram_481071ce:
      uVar38 = 0;
      uVar42 = 0;
      bVar36 = (byte)uVar23;
    }
  }
  else {
    bVar36 = *(byte *)(param_1 + 0x2a);
    uVar23 = (uint)bVar36;
    if (((bVar4 && bVar3) && (iVar43 != iVar20)) && (bVar35 == 6)) {
      iVar17 = iVar17 + 1;
      param_1[0x2a] = 6;
      bVar8 = uVar23 == 3;
      param_1[0x35] = iVar17;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      param_1[0x31] = 0;
      *(undefined2 *)(param_1 + 0x2b) = 0;
      uVar42 = 1;
      uVar38 = 0;
      uVar41 = 0;
      cVar25 = '\0';
      uVar6 = 0;
      uVar12 = 0;
      bVar44 = false;
      cVar33 = '\0';
      bVar36 = bVar35;
    }
    else if (bVar26) {
      iVar28 = iVar28 + 1;
      uVar42 = 1;
      param_1[0x2a] = 0xa07;
      bVar8 = uVar23 == 3;
      param_1[0x36] = iVar28;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      param_1[0x31] = 0;
      *(undefined2 *)(param_1 + 0x2b) = 0;
      uVar38 = 1;
      uVar41 = 0;
      cVar25 = '\0';
      uVar6 = 0;
      uVar12 = 0;
      bVar44 = false;
      cVar33 = '\n';
      bVar36 = 7;
    }
    else if ((param_2 + -15000) - param_1[0x2c] < 0) {
      param_1[0x31] = iVar43;
      if ((cVar33 != '\0') && (iVar32 != 0)) {
        if (uVar23 == 4) {
          if (bVar14) {
            uVar12 = 1;
            goto LAB_ram_48107b60;
          }
          bVar44 = true;
          cVar33 = *(char *)((int)param_1 + 0xa9);
          uVar41 = *(undefined1 *)((int)param_1 + 0xab);
          uVar12 = 1;
          cVar25 = '\0';
          bVar8 = false;
          uVar6 = 0;
        }
        else {
          if (uVar23 < 5) goto LAB_ram_4810719c;
          if (uVar23 == 6) {
            if (!bVar1 || !bVar2) {
              param_1[0x2c] = 0;
              param_1[0x2d] = 0;
              param_1[0x2e] = 0;
              param_1[0x2f] = 0;
              *(undefined1 *)(param_1 + 0x30) = 0;
              param_1[0x31] = 0;
              *(undefined2 *)(param_1 + 0x2b) = 0;
              param_1[0x2a] = 1;
              goto LAB_ram_48107cd0;
            }
            if (cVar18 == '\x01') goto LAB_ram_48107daa;
            cVar33 = *(char *)((int)param_1 + 0xa9);
            uVar41 = *(undefined1 *)((int)param_1 + 0xab);
            bVar44 = false;
            cVar25 = '\0';
            bVar8 = false;
            uVar6 = 0;
            uVar12 = 1;
          }
          else {
            if (uVar23 < 7) goto LAB_ram_48107678;
            uVar12 = 1;
            if ((uVar23 - 7 & 0xff) < 2) {
              uVar41 = *(undefined1 *)((int)param_1 + 0xab);
              cVar33 = *(char *)((int)param_1 + 0xa9);
              bVar44 = uVar23 - 2 < 4;
              goto LAB_ram_48107048;
            }
            cVar33 = *(char *)((int)param_1 + 0xa9);
            uVar41 = *(undefined1 *)((int)param_1 + 0xab);
            bVar44 = false;
            cVar25 = '\0';
            bVar8 = false;
            uVar6 = 0;
          }
        }
        goto LAB_ram_481071ce;
      }
      bVar8 = uVar23 == 3;
      if (uVar23 == 5) {
        iVar29 = iVar29 + 1;
        param_1[0x37] = iVar29;
        *(undefined1 *)((int)param_1 + 0xab) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0x208;
        cVar33 = '\x02';
        bVar36 = 8;
        uVar41 = 0;
      }
      else if ((uVar23 - 7 & 0xff) < 2) {
        uVar41 = *(undefined1 *)((int)param_1 + 0xab);
        cVar33 = *(char *)((int)param_1 + 0xa9);
      }
      else {
        iVar28 = iVar28 + 1;
        param_1[0x36] = iVar28;
        *(undefined1 *)((int)param_1 + 0xab) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0x207;
        cVar33 = '\x02';
        bVar36 = 7;
        uVar41 = 0;
      }
      uVar42 = 0;
      uVar38 = 0;
      cVar25 = '\0';
      uVar6 = 0;
      uVar12 = 1;
      bVar44 = false;
    }
    else {
      bVar8 = uVar23 == 3;
      if (uVar23 != 8) {
        iVar29 = iVar29 + 1;
        param_1[0x37] = iVar29;
      }
      cVar33 = '\b';
      param_1[0x2a] = 0x808;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      param_1[0x31] = 0;
      *(undefined2 *)(param_1 + 0x2b) = 0;
      uVar42 = 1;
      uVar38 = 0;
      uVar41 = 0;
      cVar25 = '\0';
      uVar6 = 0;
      uVar12 = 0;
      bVar44 = false;
      bVar36 = 8;
    }
  }
LAB_ram_481065ae:
  iVar20 = *param_1;
  uVar23 = iVar20 + 0x7a14;
  *(byte *)(param_1 + 0x3b) = bVar36;
  *(char *)((int)param_1 + 0xf1) = cVar25;
  iVar32 = (uVar23 & 3) << 3;
  *(bool *)((int)param_1 + 0xee) = bVar44;
  param_1[0x41] = iVar17;
  *(char *)((int)param_1 + 0xed) = cVar33;
  *(char *)((int)param_1 + 0xef) = (char)uVar12;
  *(undefined1 *)(param_1 + 0x3c) = uVar6;
  *(undefined1 *)((int)param_1 + 0xf2) = uVar41;
  *(undefined1 *)((int)param_1 + 0xf3) = uVar38;
  *(undefined1 *)(param_1 + 0x3d) = uVar42;
  *(bool *)((int)param_1 + 0xf5) = bVar8;
  param_1[0x3e] = iVar40;
  param_1[0x3f] = iStack_194;
  param_1[0x40] = param_1[0x34];
  param_1[0x42] = iVar28;
  param_1[0x43] = iVar29;
  puVar16 = (uint *)(uVar23 & 0xfffffffc);
  uVar23 = *puVar16;
  *puVar16 = uVar23 & ~(0xff << iVar32) | uVar12 << iVar32;
  if ((uVar12 != 0) && (((int)uVar23 >> iVar32 & 0xffU) == 0)) {
    piVar21 = (int *)(iVar20 + 0x7a48);
    iVar32 = *piVar21;
    *piVar21 = iVar32 + 1;
    if (iVar32 == -1) {
      fence();
      *piVar21 = 1;
    }
  }
  if ((char)param_1[0x3d] != '\0') {
    iVar32 = *param_1;
    piVar21 = (int *)(iVar32 + 0x5c4);
    do {
      iVar20 = *piVar21 + 1;
      if (iVar20 == 0) {
        iVar20 = 1;
      }
      *piVar21 = iVar20;
      piVar21 = piVar21 + 0x2c;
    } while ((int *)(iVar32 + 0x7d4) != piVar21);
  }
  iVar32 = *param_1;
  if (((*(char *)((int)param_1 + 0xf5) != '\0') && (*(char *)(iVar32 + 0x8fde) != '\0')) &&
     ((*(char *)(iVar32 + 0x900a) == '\x05' || (*(char *)(iVar32 + 0x900b) != '\0')))) {
    FUN_ram_480db8da(iVar32 + 0x84a8,1);
    iVar32 = *param_1;
  }
  if ((char)param_1[0x3c] != '\0') {
    iVar32 = FUN_ram_48105658(iVar32 + 0x84a8,*(undefined1 *)((int)param_1 + 0xf1),param_2,5);
    if ((char)param_1[0x2a] == '\x03') {
      *(ushort *)(param_1 + 0x2b) = (ushort)iVar32 & 0xff | (ushort)(iVar32 << 8);
      if (iVar32 == 0) {
        iVar32 = *param_1;
        param_1[0x34] = param_1[0x34] + 1;
        param_1[0x2e] = param_2 + 200;
        goto LAB_ram_48106668;
      }
      param_1[0x2e] = 0;
    }
    iVar32 = *param_1;
  }
LAB_ram_48106668:
  uStack_111 = *(undefined1 *)((int)param_1 + 0xee);
  uStack_100 = 0;
  uStack_fc = 0;
  iStack_f8 = 0;
  if (cVar11 == '\0') {
    if (cStack_e2 == '\0') {
      auStack_e0[0] = 0;
      uStack_e1 = 0;
      uStack_dc = 0;
      cStack_118 = '\0';
      cStack_113 = '\0';
    }
    else {
      cStack_118 = '\0';
      cStack_113 = '\0';
    }
  }
  else {
    if (cStack_e2 == '\0') {
      auStack_e0[0] = 0;
      uStack_e1 = 0;
      uStack_dc = 0;
    }
    cStack_113 = cStack_50;
    cStack_118 = cStack_e2;
    if ((cStack_50 == '\0') && (cStack_113 = cStack_4e, cStack_4e == '\0')) {
      cStack_113 = cStack_4d;
    }
  }
  uStack_114 = uStack_de;
  fence();
  if (*(int *)(iVar32 + 0x7a84) == param_1[0x18]) {
LAB_ram_48106c12:
    cVar33 = '\0';
  }
  else {
    param_1[0x18] = *(int *)(iVar32 + 0x7a84);
    if ((*(int *)(iVar32 + 0x7a88) == 0) ||
       (cVar33 = cStack_113, 500 < (uint)(param_2 - *(int *)(iVar32 + 0x7a88))))
    goto LAB_ram_48106c12;
  }
  iVar32 = *param_1;
  iVar20 = param_1[0x39];
  uStack_110._0_2_ = CONCAT11(cVar33,*(undefined1 *)((int)param_1 + 0xf2));
  uStack_110._0_3_ = CONCAT12((char)iVar20,(undefined2)uStack_110);
  uStack_110 = CONCAT13(bVar14,(undefined3)uStack_110);
  uStack_108 = *(undefined4 *)(iVar32 + 0x8fa8);
  uStack_104 = *(undefined4 *)(iVar32 + 0x8fb0);
  uStack_10c = (uint)CONCAT11(*(int *)(iVar32 + 0x8fac) != 0 &&
                              (uint)(param_2 - *(int *)(iVar32 + 0x8fac)) < 0x12d,
                              *(undefined1 *)(iVar32 + 0x8f9c));
  iStack_11c = param_2;
  uStack_117 = uStack_e1;
  uStack_116 = auStack_e0[0];
  uStack_115 = uStack_dc;
  cStack_112 = cVar39;
  if (uVar9 == 0) {
LAB_ram_4810673c:
    uStack_100._0_1_ = 0;
    if (cStack_e3 != '\f') goto LAB_ram_48106746;
LAB_ram_48106e00:
    bVar14 = false;
    if (((char)param_1[0x51] != '\0') && (bVar14 = false, 4 < *(byte *)(param_1 + 0x53))) {
      iVar43 = param_1[0x52];
      goto joined_r0x4810675a;
    }
  }
  else {
    iVar32 = FUN_ram_48045922(param_1[1],1,0);
    if (iVar32 == 0) {
      iVar32 = *param_1;
      goto LAB_ram_4810673c;
    }
    if (cStack_e3 == '\f') {
      if ((acStack_d8[0] == '\0') || (iVar32 = FUN_ram_48045922(param_1[1],2,0), iVar32 == 0)) {
        iVar32 = *param_1;
        uStack_100._0_1_ = 0;
      }
      else {
        iVar32 = *param_1;
        uStack_100._0_1_ = 1;
      }
      goto LAB_ram_48106e00;
    }
    if ((acStack_d8[0] == '\0') || (iVar32 = FUN_ram_48045922(param_1[1],2,0), iVar32 == 0)) {
      iVar32 = *param_1;
      uStack_100._0_1_ = 0;
    }
    else {
      iVar32 = *param_1;
      uStack_100._0_1_ = 1;
    }
LAB_ram_48106746:
    bVar14 = false;
    if (4 < *(byte *)(iVar32 + 0x8fdc)) {
      iVar43 = *(int *)(iVar32 + 0x8fd8);
joined_r0x4810675a:
      bVar14 = false;
      if (iVar43 != 0) {
        bVar14 = (uint)(param_2 - iVar43) < 0x12d;
      }
    }
  }
  uStack_100 = CONCAT13((char)param_1[0x61],
                        CONCAT12(param_1[0x62] != 0 && (uint)(param_2 - param_1[0x62]) < 0xfb,
                                 CONCAT11(bVar14,(char)uStack_100)));
  bVar14 = false;
  if ((*(int *)(iVar32 + 0x7c64) != 0) && ((uint)(param_2 - *(int *)(iVar32 + 0x7c64)) < 0x1f5)) {
    bVar14 = *(byte *)(iVar32 + 0x7c58) - 3 < 4;
  }
  cVar39 = *(char *)(iVar32 + 0x8fde);
  if (cVar39 == '\0') {
    cVar39 = *(char *)(iVar32 + 0x8f94);
  }
  iStack_f8 = param_1[0x22];
  piVar21 = param_1 + 5;
  uStack_fc._0_2_ = CONCAT11(cVar39,bVar14);
  FUN_ram_480486a2(&uStack_190,piVar21,&iStack_11c);
  param_1[0x13] = uStack_190;
  param_1[0x14] = iStack_18c;
  param_1[0x15] = iStack_188;
  param_1[0x16] = iStack_184;
  param_1[0x17] = iStack_180;
  if ((uStack_190 >> 0x18 != 0) &&
     (iVar32 = FUN_ram_48105658(iVar32 + 0x84a8,4,param_2,3), iVar32 != 0)) {
    if (((char)param_1[10] != '\0') && (param_1[0x11] != -1)) {
      param_1[0x11] = param_1[0x11] + 1;
    }
    FUN_ram_480486a2(&uStack_190,piVar21,&iStack_11c);
    param_1[0x13] = uStack_190;
    param_1[0x14] = iStack_18c;
    param_1[0x15] = iStack_188;
    param_1[0x16] = iStack_184;
    param_1[0x17] = iStack_180;
  }
  uVar12 = (uint)*(byte *)(param_1 + 0x13);
  if (((bVar26) && (cVar18 == '\x04')) && (bVar1 && bVar2)) {
    cVar39 = (char)param_1[0x38];
    if (cVar39 == '\0') {
      if (uVar12 != 0) goto LAB_ram_481067fc;
      iVar32 = param_1[99];
      if (*(char *)((int)param_1 + 0xee) != '\0') {
LAB_ram_481075ba:
        *(undefined1 *)(param_1 + 0x47) = 0;
        uVar12 = 0;
        goto LAB_ram_4810680a;
      }
LAB_ram_48107498:
      if (iVar32 != 0) {
        *(undefined1 *)(param_1 + 0x47) = 0;
        goto LAB_ram_48106b88;
      }
      iVar32 = 0;
      if ((param_1[0x6e] != 0) || ((char)param_1[0x79] != '\0')) goto LAB_ram_481075ba;
      iVar32 = *param_1;
      if (bVar4 && bVar3) {
        cVar37 = *(char *)(iVar32 + 0x7a40);
      }
      if (*(char *)((int)param_1 + 0xe1) != '\0') goto LAB_ram_481074c2;
LAB_ram_481075c4:
      uVar12 = 2;
      if (cVar39 == '\0') goto LAB_ram_4810750e;
      goto LAB_ram_481075c8;
    }
    if (cVar39 == '\x01') {
      if ((uVar12 == 0) && (*(char *)((int)param_1 + 0xee) == '\0')) {
        if (param_1[99] == 0) {
          iVar32 = *param_1;
          if (!bVar4 || !bVar3) goto LAB_ram_48107eda;
          cVar33 = *(char *)((int)param_1 + 0xe1);
          cVar37 = *(char *)(iVar32 + 0x7a40);
        }
        else {
          iVar32 = *param_1;
          if (bVar4 && bVar3) {
            cVar33 = *(char *)((int)param_1 + 0xe1);
            goto LAB_ram_48107984;
          }
LAB_ram_48107eda:
          cVar33 = *(char *)((int)param_1 + 0xe1);
        }
        if (cVar33 == '\0') goto LAB_ram_481075c8;
LAB_ram_481074c2:
        if ((*(char *)((int)param_1 + 0xe2) == '\0') || (*(char *)((int)param_1 + 0xe3) != '\0'))
        goto LAB_ram_481075c4;
        if (cVar39 != '\x01') {
          if (cVar39 == '\0') {
            uVar12 = 2;
            if (((cVar37 == '\0') || (param_1[0x3a] == 0)) ||
               (0x2ee < (uint)(param_2 - param_1[0x3a]))) goto LAB_ram_4810750e;
            *(undefined1 *)(param_1 + 0x38) = 1;
            *(undefined1 *)((int)param_1 + 0xe7) = 0;
            *(bool *)(param_1 + 0x39) = bVar35 == 1;
            *(bool *)((int)param_1 + 0xe5) = bVar35 != 1;
            goto LAB_ram_4810750c;
          }
          goto LAB_ram_481075ce;
        }
        *(undefined2 *)((int)param_1 + 0xe6) = 0;
        *(undefined2 *)(param_1 + 0x39) = 0;
        *(undefined1 *)(param_1 + 0x38) = 2;
        uVar12 = 0;
      }
      else {
        iVar32 = *param_1;
        cVar33 = *(char *)((int)param_1 + 0xe1);
        if ((bool)cVar37) {
LAB_ram_48107984:
          if (cVar33 != '\0') {
            cVar37 = *(char *)(iVar32 + 0x7a40);
            goto LAB_ram_481074c2;
          }
        }
        else if (cVar33 != '\0') goto LAB_ram_481074c2;
LAB_ram_481075c8:
        if (cVar39 == '\x01') {
LAB_ram_4810750c:
          uVar12 = 6;
        }
        else {
LAB_ram_481075ce:
          uVar12 = 0;
        }
      }
LAB_ram_4810750e:
      iVar43 = (iVar32 + 0x7a15U & 3) << 3;
      puVar16 = (uint *)(iVar32 + 0x7a15U & 0xfffffffc);
      uVar23 = *puVar16;
      *puVar16 = uVar23 & ~(0xff << iVar43) | uVar12 << iVar43;
      if (uVar12 != ((int)uVar23 >> iVar43 & 0xffU)) {
        *(int *)(iVar32 + 0x7a48) = *(int *)(iVar32 + 0x7a48) + 1;
        iVar32 = *(int *)(iVar32 + 0x79cc);
        piVar24 = (int *)(iVar32 + 0x5c4);
        do {
          iVar43 = *piVar24 + 1;
          if (iVar43 == 0) {
            iVar43 = 1;
          }
          *piVar24 = iVar43;
          piVar24 = piVar24 + 0x2c;
        } while ((int *)(iVar32 + 0x7d4) != piVar24);
      }
      if ((char)param_1[0x38] == '\x01') {
        iVar32 = *param_1;
        fence();
        if (((*(char *)(iVar32 + 0x7a14) != '\0') || (fence(), *(char *)(iVar32 + 0x7a15) == '\x06')
            ) && ((*(char *)(iVar32 + 0x7a40) != '\0' &&
                  (((uint)(param_2 - *(int *)(iVar32 + 0x7a3c)) < 0x1f5 &&
                   (*(int *)(iVar32 + 0x7a3c) == *(int *)(iVar32 + 0x7c64))))))) {
          FUN_ram_480d9a80(iVar32 + 0x79cc,iVar32 + 0x7a18,param_2,1);
        }
      }
      cVar39 = (char)param_1[0x39];
      uStack_110._0_3_ = CONCAT12(cVar39,(undefined2)uStack_110);
      if ((char)iVar20 == '\0') {
        if (cVar39 == '\0') {
LAB_ram_481075d4:
          uVar12 = (uint)*(byte *)(param_1 + 0x13);
          goto LAB_ram_481067fc;
        }
        *(undefined1 *)((int)param_1 + 0x1e6) = 1;
      }
      else if (cVar39 != '\0') goto LAB_ram_481075d4;
      FUN_ram_480486a2(&uStack_190,piVar21,&iStack_11c);
      param_1[0x13] = uStack_190;
      param_1[0x14] = iStack_18c;
      param_1[0x15] = iStack_188;
      param_1[0x16] = iStack_184;
      param_1[0x17] = iStack_180;
      uVar12 = uStack_190 & 0xff;
      goto LAB_ram_481067fc;
    }
    if (uVar12 != 0) goto LAB_ram_481067fc;
    if (*(char *)((int)param_1 + 0xee) == '\0') {
      iVar32 = param_1[99];
      goto LAB_ram_48107498;
    }
    iVar32 = param_1[99];
    *(undefined1 *)(param_1 + 0x47) = 0;
    uVar12 = 0;
  }
  else {
LAB_ram_481067fc:
    *(undefined1 *)(param_1 + 0x47) = 0;
    if (uVar12 == 1) {
      if ((char)uStack_100 == '\0') {
        iVar32 = param_1[99];
        *(undefined1 *)(param_1 + 0x47) = 1;
      }
      else {
        if ((uStack_110._3_1_ != '\0') && ((char)uStack_10c == '\x04')) goto LAB_ram_48106806;
        iVar32 = param_1[99];
        *(undefined1 *)(param_1 + 0x47) = 2;
      }
    }
    else {
LAB_ram_48106806:
      iVar32 = param_1[99];
    }
  }
LAB_ram_4810680a:
  if (((iVar32 != 0) || (param_1[0x6e] != 0)) || ((char)param_1[0x79] != '\0'))
  goto LAB_ram_48106b88;
  cVar39 = *(char *)((int)param_1 + 0x4d);
  uStack_15d = 0;
  uStack_15c = 0;
  bStack_15a = 0;
  bStack_157 = 1;
  uStack_159 = cVar39 == '\x04';
  if (cVar39 == '\x06') {
    cVar33 = *(char *)((int)param_1 + 0x1e6);
    if (cVar11 == '\0') {
      cStack_160 = '\0';
    }
    else {
LAB_ram_4810685e:
      cStack_160 = *(char *)((int)param_1 + 0x4e);
    }
    iVar32 = *param_1;
    if (*(int *)(iVar32 + 0x7c64) == 0) goto LAB_ram_481072ce;
    cStack_15e = *(char *)(iVar32 + 0x7c58);
    uVar23 = param_2 - *(int *)(iVar32 + 0x7c64);
    bStack_15f = uVar23 < 0x1f5;
    cVar37 = cStack_160;
    cVar11 = bStack_15f;
    if ((cVar33 == '\0') || (cStack_160 == '\0')) goto LAB_ram_48106920;
    if (500 < uVar23) {
      cVar11 = '\0';
      goto LAB_ram_48106920;
    }
    cVar11 = cStack_160;
    if ((1 < (byte)(cStack_15e - 1U)) ||
       (cVar37 = *(char *)((int)param_1 + 0x9e), cVar33 = cStack_160, cVar18 = cStack_160,
       cVar34 = cStack_160, cVar11 = cVar37, cVar37 != '\0')) goto LAB_ram_48106920;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1e6) = 0;
    if (cVar39 == '\x04') {
      if (cStack_e3 == '\f') {
        if (cVar11 != '\0') {
          cVar33 = '\0';
          goto LAB_ram_4810685e;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x1e5) = 1;
        if (cVar11 != '\0') goto LAB_ram_4810685c;
      }
    }
    else if ((cVar11 != '\0') &&
            ((cStack_e2 != '\0' ||
             ((((cStack_50 != '\0' || (cStack_4e != '\0')) || (cStack_4d != '\0')) &&
              (cVar39 == '\x05')))))) {
LAB_ram_4810685c:
      cVar33 = '\0';
      goto LAB_ram_4810685e;
    }
    iVar32 = *param_1;
    cStack_160 = '\0';
    if (*(int *)(iVar32 + 0x7c64) != 0) {
      cStack_15e = *(char *)(iVar32 + 0x7c58);
      bStack_15f = (uint)(param_2 - *(int *)(iVar32 + 0x7c64)) < 0x1f5;
      cVar37 = '\0';
      cVar11 = bStack_15f;
      goto LAB_ram_48106920;
    }
LAB_ram_481072ce:
    cStack_15e = *(char *)(iVar32 + 0x7c58);
    bStack_15f = false;
    cVar37 = cStack_160;
    cVar11 = '\0';
LAB_ram_48106920:
    *(undefined1 *)((int)param_1 + 0x1e6) = 0;
    cVar33 = cVar37;
    cVar18 = cVar11;
    cVar34 = '\0';
  }
  cVar37 = cStack_15e;
  bStack_158 = uVar12 == 2;
  iStack_164 = param_2;
  if (acStack_d8[0] == '\0') {
    if (uVar9 == 0) {
      if (*(char *)((int)param_1 + 0x1e5) == '\0') {
        iVar32 = 0;
        uVar9 = 0;
LAB_ram_48107380:
        if (cStack_e3 == '\f') goto LAB_ram_481073ec;
        goto LAB_ram_48107386;
      }
      if ((char)param_1[0x5d] == '\0') goto LAB_ram_4810739e;
      iVar32 = 0;
      uVar9 = 0;
LAB_ram_48106946:
      iVar20 = param_1[0x5e];
joined_r0x481073fa:
      uStack_15c._0_1_ = false;
      if (iVar20 != 0) goto LAB_ram_4810694e;
      goto LAB_ram_48106956;
    }
    uVar9 = (uint)*(byte *)((int)param_1 + 0x1e5);
    if (cStack_e3 == '\f') {
      if (uVar9 != 0) {
LAB_ram_48107324:
        if (((char)param_1[0x5d] == '\0') || (param_1[0x5e] == 0)) goto LAB_ram_4810739e;
        uStack_15c._0_1_ = (uint)(param_2 - param_1[0x5e]) < 0xfb;
        goto LAB_ram_4810733e;
      }
      if (((char)param_1[0x51] == '\0') || (iVar20 = param_1[0x52], iVar20 == 0))
      goto LAB_ram_4810739e;
LAB_ram_48107428:
      iVar32 = 0;
LAB_ram_4810694e:
      uStack_15c._0_1_ = (uint)(param_2 - iVar20) < 0xfb;
      goto LAB_ram_48106956;
    }
    if (uVar9 != 0) goto LAB_ram_48107324;
    if (((char)param_1[0x5d] != '\0') && (iVar20 = param_1[0x5e], iVar20 != 0))
    goto LAB_ram_48107428;
LAB_ram_4810739e:
    uStack_15c._0_1_ = false;
LAB_ram_4810733e:
    uVar9 = 0;
LAB_ram_48107342:
    iVar32 = 0;
    if (((char)param_1[0x79] != '\0') || (*(char *)((int)param_1 + 0x9e) != '\0'))
    goto LAB_ram_4810695e;
  }
  else {
    iVar32 = FUN_ram_48045922(param_1[1],2,0);
    if (iVar32 == 0) {
      if (uVar9 == 0) {
LAB_ram_481073ce:
        iVar32 = param_1[99];
        uVar9 = 0;
        goto LAB_ram_4810737a;
      }
      if ((cStack_e3 != '\f') || (*(char *)((int)param_1 + 0x1e5) != '\0')) goto LAB_ram_4810736c;
      uVar9 = 0;
LAB_ram_481073e8:
      iVar32 = param_1[99];
LAB_ram_481073ec:
      uStack_15c._0_1_ = false;
      if ((char)param_1[0x51] != '\0') {
        iVar20 = param_1[0x52];
        goto joined_r0x481073fa;
      }
    }
    else {
      if (uVar9 == 0) goto LAB_ram_481073ce;
      if ((cStack_e3 == '\f') && (*(char *)((int)param_1 + 0x1e5) == '\0')) goto LAB_ram_481073e8;
LAB_ram_4810736c:
      uVar9 = FUN_ram_48045922(param_1[1],2,0);
      iVar32 = param_1[99];
LAB_ram_4810737a:
      if (*(char *)((int)param_1 + 0x1e5) == '\0') goto LAB_ram_48107380;
LAB_ram_48107386:
      uStack_15c._0_1_ = false;
      if ((char)param_1[0x5d] != '\0') goto LAB_ram_48106946;
    }
LAB_ram_48106956:
    if (iVar32 == 0) {
      if (param_1[0x6e] == 0) goto LAB_ram_48107342;
      iVar32 = 0;
    }
LAB_ram_4810695e:
    if (*(char *)(*param_1 + 0xa4a) != '\0') {
      *(byte *)(*param_1 + 0xa4e) = (char)uStack_15c ^ 1;
    }
  }
  cVar11 = '\0';
  if ((param_1[0x60] != 0) && ((uint)(param_2 - param_1[0x60]) < 0xfb)) {
    cVar11 = (char)param_1[0x5f];
  }
  uStack_15c = CONCAT11(cVar11,(char)uStack_15c);
  bStack_15a = 0;
  if (*(char *)((int)param_1 + 0x2b5) == '\0') {
    bStack_15a = *(byte *)((int)param_1 + 0x285) ^ 1;
  }
  puVar16 = (uint *)param_1[3];
  bStack_157 = bStack_db;
  iVar20 = 0;
  if ((((iVar32 == 0) && (param_1[0x6e] == 0)) && ((char)param_1[0x79] == '\0')) &&
     (*(char *)((int)param_1 + 0x9e) == '\0')) {
    if ((((cVar33 == '\0') || (cVar18 == '\0')) ||
        ((cVar37 != '\x02' || (((bool)(char)uStack_15c == false || (cVar11 != '\0')))))) ||
       (bStack_15a == 0)) {
      fence();
      if ((*puVar16 >> 0x10 & 3) == 1) goto LAB_ram_48107232;
    }
    else {
      if (bStack_db < 0xb) {
        if (bStack_db == 0) {
          bStack_db = 1;
        }
      }
      else {
        bStack_db = 10;
      }
      fence();
      if ((*puVar16 >> 0x10 & 3) == 1) goto LAB_ram_48107232;
      if (bStack_db <= *(byte *)((int)param_1 + 0x6b)) goto LAB_ram_4810728a;
    }
  }
  else {
    fence();
    if ((*puVar16 >> 0x10 & 3) != 1) {
LAB_ram_4810728a:
      puVar16 = (uint *)param_1[3];
      fence();
      uVar12 = *puVar16;
      do {
        uVar23 = uVar12 + 1;
        if (((uVar12 & 0x80030000) != 0) || ((uVar12 & 0xffff) == 0xffff)) goto LAB_ram_481069e0;
        bVar1 = *puVar16 != uVar12;
        uVar12 = *puVar16;
      } while (bVar1);
      *puVar16 = uVar23 | 0x10000;
    }
LAB_ram_48107232:
    if (uVar9 != 0) {
      if ((cStack_e3 == '\f') && (*(char *)((int)param_1 + 0x1e5) == '\0')) {
        if ((char)param_1[0x51] == '\0') {
          uVar38 = 2;
          uVar10 = 0xb;
        }
        else {
          uVar38 = *(undefined1 *)((int)param_1 + 0x12d);
          uVar10 = 0xb;
        }
      }
      else {
        uVar38 = 2;
        uVar10 = 6;
      }
      iVar20 = FUN_ram_4805c396(*param_1,2,uVar38,uVar10);
    }
  }
LAB_ram_481069e0:
  uStack_15d = (undefined1)iVar20;
  if ((((char)param_1[0x47] == '\0') && (cStack_160 != '\0')) && (3 < (byte)(cStack_15e - 3U))) {
    if (bStack_15f == false) {
      *(undefined1 *)(param_1 + 0x47) = 3;
    }
    else if (cStack_15e == '\x02') {
      if ((char)uStack_15c == '\0') {
        *(undefined1 *)(param_1 + 0x47) = 5;
      }
      else if (bStack_15a == 0) {
        *(undefined1 *)(param_1 + 0x47) = 6;
      }
      else if (iVar20 == 0) {
        *(undefined1 *)(param_1 + 0x47) = 7;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x47) = 4;
    }
  }
  uVar9 = FUN_ram_48048fea(param_1 + 0x19,&iStack_164);
  uStack_170 = (undefined2)uVar9;
  uStack_16e = (undefined1)(uVar9 >> 0x10);
  if ((uVar9 & 0xff) != 0) {
    *(undefined1 *)((int)param_1 + 0x1e6) = 0;
  }
  if (((param_1[99] == 0) && (param_1[0x6e] == 0)) &&
     (((char)param_1[0x79] == '\0' && (*(char *)((int)param_1 + 0x9e) == '\0')))) {
    *(undefined1 *)((int)param_1 + 0x1e5) = 0;
    FUN_ram_48025ba6();
    if (*(char *)((int)param_1 + 0x65) == '\v') {
      FUN_ram_4805c6b0(*param_1,2,2,7);
    }
    puVar16 = (uint *)param_1[3];
    fence();
    uVar12 = *puVar16;
    do {
      uVar23 = uVar12 & 0xfffcffff;
      if (((uVar12 >> 0x10 & 3) != 1) || ((uVar12 & 0xffff) == 0)) goto LAB_ram_48106aa0;
      bVar1 = *puVar16 != uVar12;
      uVar12 = *puVar16;
    } while (bVar1);
    *puVar16 = uVar23 - 1;
  }
LAB_ram_48106aa0:
  iVar32 = param_1[0x19];
  cVar33 = *(char *)((int)param_1 + 0x65);
  sStack_154 = (short)param_1[0x19];
  uStack_151 = (undefined1)param_1[0x1f];
  uStack_152 = *(undefined1 *)((int)param_1 + 0x6b);
  if (sStack_154 == 0x209) {
    iVar20 = param_1[0x22];
    cVar37 = (char)param_1[5];
    if (cVar39 == '\x06') {
      if ((cVar37 != '\0') && (iVar20 != param_1[6])) {
        if (cVar37 == '\x04') goto LAB_ram_48107312;
        param_1[6] = iVar20;
        *(undefined1 *)(param_1 + 5) = 0;
        if ((char)param_1[0x38] == '\x01') {
          if (((char)param_1[0x39] == '\0') ||
             (*(undefined2 *)(param_1 + 0x39) = 0x100, *(byte *)((int)param_1 + 0xe7) < 3)) {
            iVar20 = 6;
          }
          else {
            *(undefined1 *)(param_1 + 0x38) = 2;
            *(undefined2 *)((int)param_1 + 0xe6) = 0;
            *(undefined1 *)((int)param_1 + 0xe5) = 0;
            iVar20 = 0;
          }
        }
        else {
          iVar20 = (uint)((char)param_1[0x38] == '\0') << 1;
        }
        FUN_ram_480c763c(*param_1 + 0x79cc,iVar20);
      }
    }
    else if ((cVar37 != '\0') && (iVar20 != param_1[6])) {
      if (cVar37 != '\x04') {
        *(undefined1 *)(param_1 + 5) = 0;
      }
LAB_ram_48107312:
      param_1[6] = iVar20;
    }
  }
  if (((byte)((char)iVar32 - 8U) < 2) && (cVar33 != '\x02')) {
    if ((char)param_1[5] == '\x05') {
      *(undefined1 *)(param_1 + 5) = 0;
      param_1[6] = 0;
      if ((cVar39 == '\x06') && (cVar34 == '\0')) {
LAB_ram_481070dc:
        if ((char)param_1[0x38] == '\x01') {
          if (((char)param_1[0x39] == '\0') ||
             (*(undefined2 *)(param_1 + 0x39) = 0x100, *(byte *)((int)param_1 + 0xe7) < 3)) {
            iVar32 = 6;
          }
          else {
            *(undefined1 *)(param_1 + 0x38) = 2;
            *(undefined2 *)((int)param_1 + 0xe6) = 0;
            *(undefined1 *)((int)param_1 + 0xe5) = 0;
            iVar32 = 0;
          }
        }
        else {
          iVar32 = (uint)((char)param_1[0x38] == '\0') << 1;
        }
        FUN_ram_480c763c(*param_1 + 0x79cc,iVar32);
      }
    }
    else if ((cVar39 == '\x06') && (cVar34 == '\0')) {
      if ((char)param_1[5] == '\x06') {
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[6] = 0;
      }
      goto LAB_ram_481070dc;
    }
  }
  if ((uVar9 & 0xff) == 0) goto LAB_ram_48106b88;
  fence();
  if ((*(uint *)param_1[3] >> 0x10 & 3) == 1) {
    iStack_140 = DAT_ram_48222d48;
    uStack_13c = DAT_ram_48222d4c;
    iStack_120 = DAT_ram_48222d68;
    uStack_138 = DAT_ram_48222d50;
    uStack_134 = DAT_ram_48222d54;
    iStack_130 = DAT_ram_48222d58;
    iStack_12c = DAT_ram_48222d5c;
    iStack_128 = DAT_ram_48222d60;
    iStack_124 = DAT_ram_48222d64;
    if ((cStack_e3 == '\f') && (*(char *)((int)param_1 + 0x1e5) == '\0')) {
      if ((char)param_1[0x51] != '\0') {
        iStack_12c = param_1[0x4d];
        iStack_120 = param_1[0x50];
        iStack_140 = param_1[0x48];
        uStack_13c = param_1[0x49];
        uStack_138 = param_1[0x4a];
        uStack_134 = param_1[0x4b];
        iStack_130 = param_1[0x4c];
        iStack_128 = param_1[0x4e];
        iStack_124 = param_1[0x4f];
        cVar33 = '\0';
        if (uStack_170._1_1_ == '\x02') {
          cVar33 = '\x03';
        }
        cVar39 = (char)param_1[0x49];
        if (((cVar39 == '\x03') || (cVar39 == '\b')) &&
           (*(byte *)((int)param_1 + 0x125) ==
            ((&DAT_ram_48222cb0)[*(byte *)((int)param_1 + 0x126) & 0xf] ^
            (&DAT_ram_48222ca8)[*(byte *)((int)param_1 + 0x126) >> 4 & 7]))) {
          iVar20 = 0;
          bVar31 = 0;
          if (cVar33 != '\0') {
            iVar20 = 3;
            bVar31 = 0x30;
          }
          iVar32 = param_1[0x48];
          uStack_16c = 0;
          uStack_168 = 0;
          FUN_ram_4ff45158(&uStack_16c,(int)param_1 + 0x125,cVar39);
          uVar9 = uStack_16c._1_1_ + 1 & 0xf;
          uStack_13c._0_2_ = CONCAT11((undefined1)uStack_16c,(undefined1)uStack_13c);
          uStack_13c = CONCAT13(uStack_16c._2_1_,CONCAT12(uStack_16c._1_1_,(undefined2)uStack_13c));
          uStack_138 = CONCAT13(uStack_168._2_1_,
                                CONCAT12(uStack_168._1_1_,
                                         CONCAT11((undefined1)uStack_168,uStack_16c._3_1_)));
          uStack_134 = CONCAT31(uStack_134._1_3_,uStack_168._3_1_);
          bVar36 = (&DAT_ram_48222cb0)[uVar9] ^ (&DAT_ram_48222ca8)[iVar20];
          bVar31 = bVar31 | (byte)uVar9 | uStack_16c._1_1_ & 0x80;
          bVar35 = uStack_16c._2_1_ & 0xfc;
          if (param_1[0x1c5] + 1 == 0) {
            param_1[0x1c5] = 1;
            uVar38 = 2;
LAB_ram_48107ac2:
            iVar20 = iVar32;
            if (*(char *)((int)param_1 + 0x1e5) != '\0') goto LAB_ram_48107a26;
          }
          else {
            param_1[0x1c5] = param_1[0x1c5] + 1;
            uVar38 = 2;
          }
          uStack_16c = 0;
          iVar20 = FUN_ram_48025b94();
          uStack_13c._0_2_ = CONCAT11(bVar36,cVar39);
          uStack_13c._0_3_ = CONCAT12(bVar31,(undefined2)uStack_13c);
          uStack_13c = CONCAT13(bVar35,(undefined3)uStack_13c);
          uStack_134._0_2_ = CONCAT11(uVar38,(undefined1)uStack_134);
          iStack_140 = iVar32;
          iVar32 = FUN_ram_4805cb5e(*param_1,&iStack_140,0,5,1,1,iVar20 + 100000,5,&uStack_16c,4,
                                    (uint)((char)uStack_170 == '\x02') << 2,1,0,0);
          if (iVar32 != 0) {
            param_1[0x70] = iStack_140;
            param_1[0x71] = uStack_13c;
            param_1[0x72] = uStack_138;
            param_1[0x73] = uStack_134;
            param_1[0x74] = iStack_130;
            param_1[0x75] = iStack_12c;
            param_1[0x76] = iStack_128;
            param_1[0x77] = iStack_124;
            param_1[0x78] = iStack_120;
            param_1[0x6e] = uStack_16c;
            *(undefined2 *)(param_1 + 0x6f) = uStack_170;
            *(undefined1 *)((int)param_1 + 0x1be) = uStack_16e;
            FUN_ram_480553f6(puVar30);
            return;
          }
        }
      }
    }
    else if ((char)param_1[0x5d] != '\0') {
      iStack_124 = param_1[0x5b];
      iStack_120 = param_1[0x5c];
      iVar32 = param_1[0x54];
      uStack_13c = param_1[0x55];
      uStack_138 = param_1[0x56];
      uStack_134 = param_1[0x57];
      iStack_130 = param_1[0x58];
      iStack_12c = param_1[0x59];
      iStack_128 = param_1[0x5a];
      bVar35 = *(byte *)((int)param_1 + 0x157);
      uVar38 = *(undefined1 *)((int)param_1 + 0x15d);
      iStack_140 = iVar32;
      if ((((iVar32 == 0x3c2) && ((char)param_1[0x55] == '\b')) &&
          (bVar36 = *(byte *)((int)param_1 + 0x155), (bVar36 & 3) == 1)) &&
         ((byte)(uStack_170._1_1_ - 1U) < 2)) {
        uStack_138 = param_1[0x56];
        uStack_13c._0_2_ = CONCAT11(bVar36,(undefined1)uStack_13c);
        uStack_13c = CONCAT13(bVar35,CONCAT12(*(byte *)((int)param_1 + 0x156),(undefined2)uStack_13c
                                             ));
        uStack_134._1_3_ = (undefined3)((uint)uStack_134 >> 8);
        uStack_134 = CONCAT31(uStack_134._1_3_,(char)param_1[0x57]);
        bVar31 = *(byte *)((int)param_1 + 0x156) & 0xcf | uStack_170._1_1_ << 4;
        if (param_1[0x1c5] + 1 == 0) {
          param_1[0x1c5] = 1;
        }
        else {
          param_1[0x1c5] = param_1[0x1c5] + 1;
        }
        iStack_140 = 0x3c2;
        cVar39 = '\b';
        iVar20 = 0x3c2;
        if (cStack_e3 == '\f') goto LAB_ram_48107ac2;
LAB_ram_48107a26:
        uStack_13c._0_2_ = CONCAT11(bVar36,cVar39);
        uStack_13c._0_3_ = CONCAT12(bVar31,(undefined2)uStack_13c);
        uStack_13c = CONCAT13(bVar35,(undefined3)uStack_13c);
        uStack_134._0_2_ = CONCAT11(uVar38,(undefined1)uStack_134);
        param_1[0x7b] = iVar20;
        *(byte *)((int)param_1 + 0x4ff) = bVar31;
        param_1[0x7c] = uStack_13c;
        param_1[0x7e] = uStack_134;
        *(char *)((int)param_1 + 0x1e7) = (char)uStack_170;
        *(char *)(param_1 + 0x7a) = uStack_170._1_1_;
        *(undefined1 *)((int)param_1 + 0x1e9) = uStack_16e;
        param_1[0x7d] = uStack_138;
        param_1[0x7f] = iStack_130;
        param_1[0x80] = iStack_12c;
        param_1[0x81] = iStack_128;
        param_1[0x82] = iStack_124;
        param_1[0x83] = iStack_120;
        *(undefined1 *)(param_1 + 0x79) = 1;
        *(undefined1 *)(param_1 + 0x14b) = 1;
        goto LAB_ram_48106b88;
      }
    }
  }
  FUN_ram_48049638(param_1 + 0x19,&uStack_170,0,param_2);
  FUN_ram_480c5a3a(param_1);
LAB_ram_48106b88:
  fence();
  uVar9 = *puVar30;
  while( true ) {
    uVar12 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      return;
    }
    if ((uVar9 & 0xffff) == 0) break;
    bVar1 = *puVar30 == uVar9;
    uVar9 = *puVar30;
    if (bVar1) {
      *puVar30 = uVar12;
      return;
    }
  }
  return;
}


