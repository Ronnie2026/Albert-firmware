/* Firmware entry: 0x48081e52 */

int * FUN_ram_48081e52(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  char cVar28;
  char cVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  char cVar33;
  int iVar34;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar27 = *param_3;
  if (((char)param_3[1] == '\0') || (cVar13 = *(char *)((int)param_3 + 5), cVar13 == '\0')) {
    iVar30 = param_2[2];
    cVar3 = '\0';
LAB_ram_48081e8c:
    cVar13 = '\0';
    *(char *)(param_2 + 1) = cVar3;
    uVar16 = param_3[0x14];
    uVar18 = param_3[0x15];
    if ((char)param_2[4] == '\0') goto LAB_ram_48082238;
LAB_ram_48081ea0:
    uVar21 = param_2[7];
    if ((uVar18 < uVar21) || ((uVar21 == uVar18 && (uVar16 < (uint)param_2[6])))) {
      param_2[6] = uVar16;
      param_2[7] = uVar18;
      goto LAB_ram_48082250;
    }
    uVar24 = uVar16 - param_2[6];
    iVar22 = (uVar18 - uVar21) - (uint)(uVar16 < uVar24);
    uVar21 = param_2[8] + uVar24;
    param_2[9] = (uint)(uVar21 < (uint)param_2[8]) + param_2[9] + iVar22;
    param_2[6] = uVar16;
    param_2[7] = uVar18;
    param_2[8] = uVar21;
    uVar18 = param_3[0x16];
    uVar21 = param_3[0x17];
    iVar19 = iVar22;
    uVar16 = uVar24;
    if ((char)param_2[10] == '\0') goto LAB_ram_48082264;
LAB_ram_48081ee8:
    uVar14 = param_2[0xd];
    iVar22 = iVar19;
    uVar24 = uVar16;
    if ((uVar21 < uVar14) || ((uVar14 == uVar21 && (uVar18 < (uint)param_2[0xc])))) {
      param_2[0xc] = uVar18;
      param_2[0xd] = uVar21;
      goto LAB_ram_48082272;
    }
    uVar4 = uVar18 - param_2[0xc];
    iVar7 = (uVar21 - uVar14) - (uint)(uVar18 < uVar4);
    uVar16 = param_2[0xe] + uVar4;
    param_2[0xc] = uVar18;
    param_2[0xd] = uVar21;
    param_2[0xf] = (uint)(uVar16 < (uint)param_2[0xe]) + param_2[0xf] + iVar7;
    param_2[0xe] = uVar16;
    uVar18 = param_3[0x18];
    uVar21 = param_3[0x19];
    uVar16 = uVar4;
    iVar19 = iVar7;
    if ((char)param_2[0x10] != '\0') goto LAB_ram_48081f30;
LAB_ram_48082286:
    param_2[0x12] = uVar18;
    param_2[0x13] = uVar21;
    param_2[0x14] = uVar18;
    param_2[0x15] = uVar21;
    *(undefined1 *)(param_2 + 0x10) = 1;
LAB_ram_48082294:
    cVar29 = (char)param_2[0x16];
    uVar21 = param_3[0x1a];
    uVar18 = param_3[0x1b];
    cVar33 = (char)param_3[7];
    uVar16 = 0;
    uVar9 = 0;
    iVar19 = 0;
    iVar12 = 0;
    if (cVar29 == '\0') goto LAB_ram_480822ac;
LAB_ram_48081f82:
    uVar14 = param_2[0x19];
    uVar9 = uVar16;
    iVar12 = iVar19;
    if ((uVar18 < uVar14) || ((uVar14 == uVar18 && (uVar21 < (uint)param_2[0x18])))) {
      param_2[0x18] = uVar21;
      param_2[0x19] = uVar18;
      if (cVar33 == '\0') {
        if (cVar3 != '\0') {
          if (cVar13 != '\0') {
            cVar29 = (char)param_2[3];
            cVar33 = (char)param_2[0x20];
            cVar13 = (char)param_2[0x22];
            goto joined_r0x480829a2;
          }
          goto LAB_ram_480822fe;
        }
        goto LAB_ram_48082706;
      }
      *(undefined1 *)(param_2 + 3) = 1;
      goto joined_r0x4808241c;
    }
    uVar15 = uVar21 - param_2[0x18];
    iVar19 = (uVar18 - uVar14) - (uint)(uVar21 < uVar15);
    uVar16 = param_2[0x1a] + uVar15;
    param_2[0x19] = uVar18;
    param_2[0x1b] = (uint)(uVar16 < (uint)param_2[0x1a]) + param_2[0x1b] + iVar19;
    param_2[0x18] = uVar21;
    param_2[0x1a] = uVar16;
    if (cVar33 != '\0') {
      *(undefined1 *)(param_2 + 3) = 1;
    }
    if (cVar3 == '\0') {
      cVar33 = (char)param_2[0x20];
      if (iVar19 != 0 || uVar15 != 0) {
        cVar28 = (char)param_2[3];
        param_2[0x23] = iVar27;
        *(undefined1 *)(param_2 + 0x22) = 1;
        cVar13 = cVar29;
        cVar29 = cVar28;
        goto joined_r0x48082712;
      }
      cVar13 = (char)param_2[0x22];
      cVar28 = cVar13;
      if ((char)param_2[3] == '\0') goto LAB_ram_48082716;
      goto LAB_ram_48081fee;
    }
    if (cVar13 != '\0') {
      cVar33 = (char)param_2[0x20];
      cVar29 = (char)param_2[3];
      if (uVar15 == 0 && iVar19 == 0) {
        cVar13 = (char)param_2[0x22];
joined_r0x480829a2:
        if (cVar29 == '\0') goto LAB_ram_480829a6;
        goto LAB_ram_48082482;
      }
      cVar28 = '\x01';
      param_2[0x23] = iVar27;
      *(undefined1 *)(param_2 + 0x22) = 1;
      if (cVar29 == '\0') {
LAB_ram_480829a6:
        cVar28 = '\0';
        bVar26 = 0;
      }
      else {
        bVar26 = 2;
        cVar13 = cVar29;
      }
      goto LAB_ram_48082352;
    }
    if (uVar24 != 0 || iVar22 != 0) {
      param_2[0x1d] = iVar27;
      *(undefined1 *)(param_2 + 0x1c) = 1;
    }
    bVar1 = uVar4 != 0;
    bVar2 = iVar7 != 0;
    uVar4 = uVar15;
    iVar7 = iVar19;
    if (bVar1 || bVar2) goto LAB_ram_4808244c;
LAB_ram_48082456:
    if (uVar9 == 0 && iVar12 == 0) {
      cVar33 = (char)param_2[0x20];
    }
    else {
LAB_ram_48082322:
      cVar33 = '\x01';
      param_2[0x21] = iVar27;
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    if (uVar4 == 0 && iVar7 == 0) goto LAB_ram_480829cc;
    cVar13 = '\x01';
    param_2[0x23] = iVar27;
    *(undefined1 *)(param_2 + 0x22) = 1;
LAB_ram_48082472:
    if ((char)param_2[3] != '\0') {
      cVar29 = cVar3;
      cVar28 = cVar13;
      if (cVar3 != '\0') goto LAB_ram_48082482;
LAB_ram_48081fee:
      cVar13 = cVar28;
      cVar29 = *(char *)((int)param_3 + 0x1d);
      if (cVar29 == '\0') {
        cVar29 = '\x01';
        cVar28 = '\x01';
        goto LAB_ram_48081ffa;
      }
      if (*(char *)((int)param_3 + 6) == '\0') {
        cVar28 = '\x01';
        bVar26 = 2;
        goto LAB_ram_480823e2;
      }
      bVar26 = 2;
      cVar28 = '\x01';
      cVar29 = *(char *)((int)param_3 + 6);
      goto LAB_ram_48082004;
    }
    cVar28 = '\0';
    bVar26 = 0;
    cVar29 = '\0';
    if (cVar3 != '\0') goto LAB_ram_48082352;
LAB_ram_48082716:
    if (*(char *)((int)param_3 + 0x1d) == '\0') {
      cVar6 = *(char *)((int)param_3 + 6);
      iVar19 = param_3[3];
      cVar29 = '\0';
      if (cVar6 == '\0') {
        if (iVar19 == 0) {
          cVar28 = '\a';
          bVar26 = 2;
          goto LAB_ram_480820b2;
        }
LAB_ram_4808272e:
        bVar26 = 2;
        cVar28 = '\a';
        goto LAB_ram_48082010;
      }
      if (iVar19 != 0) goto LAB_ram_4808272e;
      iVar22 = param_3[2];
      bVar26 = 2;
      cVar28 = '\a';
      goto LAB_ram_48082792;
    }
    cVar6 = *(char *)((int)param_3 + 6);
    if (cVar6 == '\0') {
      cVar29 = '\0';
      if (param_3[3] == 0) {
        cVar28 = '\0';
        bVar26 = 0;
        goto LAB_ram_480820b2;
      }
      uStack_44 = param_3[4];
      uVar16 = __udivdi3(uStack_44 * 100,(int)((ulonglong)uStack_44 * 100 >> 0x20),param_3[3],0);
      if (5 < uVar16) {
        if (uStack_44 < 0x10001) goto LAB_ram_48082ad6;
        bVar26 = 0;
        cVar28 = '\0';
        goto LAB_ram_48082952;
      }
      goto LAB_ram_4808298e;
    }
    iVar22 = param_3[2];
    iVar19 = param_3[3];
    if (iVar22 < 800) {
      if (iVar19 == 0) {
        cVar29 = '\0';
        bVar26 = 0;
        cVar28 = '\0';
        goto LAB_ram_48082792;
      }
      cVar29 = '\0';
      bVar26 = 0;
      cVar28 = '\0';
      goto LAB_ram_48082010;
    }
    if (iVar19 == 0) {
      cVar29 = '\0';
      cVar28 = '\b';
      goto LAB_ram_48082aea;
    }
    uStack_44 = param_3[4];
    uVar16 = __udivdi3(uStack_44 * 100,(int)((ulonglong)uStack_44 * 100 >> 0x20),iVar19,0);
    if (5 < uVar16) {
      cVar29 = '\0';
      if (uStack_44 < 0x10001) {
        cVar28 = '\b';
        goto LAB_ram_4808296a;
      }
      bVar26 = 2;
      cVar28 = '\b';
      cVar29 = '\0';
      goto LAB_ram_480828d8;
    }
    cVar29 = '\0';
    cVar28 = '\b';
LAB_ram_4808296a:
    bVar26 = 2;
  }
  else {
    cVar3 = (char)param_2[1];
    if (cVar3 != '\0') {
      iVar30 = param_2[2];
      goto LAB_ram_48081e8c;
    }
    param_2[2] = iVar27;
    *(char *)(param_2 + 1) = cVar13;
    uVar16 = param_3[0x14];
    uVar18 = param_3[0x15];
    iVar30 = iVar27;
    cVar3 = cVar13;
    if ((char)param_2[4] != '\0') goto LAB_ram_48081ea0;
LAB_ram_48082238:
    param_2[6] = uVar16;
    param_2[7] = uVar18;
    param_2[8] = uVar16;
    param_2[9] = uVar18;
    *(undefined1 *)(param_2 + 4) = 1;
LAB_ram_48082250:
    uVar18 = param_3[0x16];
    uVar21 = param_3[0x17];
    uVar16 = 0;
    uVar24 = 0;
    iVar19 = 0;
    iVar22 = 0;
    if ((char)param_2[10] != '\0') goto LAB_ram_48081ee8;
LAB_ram_48082264:
    param_2[0xc] = uVar18;
    param_2[0xd] = uVar21;
    param_2[0xe] = uVar18;
    param_2[0xf] = uVar21;
    *(undefined1 *)(param_2 + 10) = 1;
LAB_ram_48082272:
    uVar18 = param_3[0x18];
    uVar21 = param_3[0x19];
    uVar16 = 0;
    uVar4 = 0;
    iVar19 = 0;
    iVar7 = 0;
    if ((char)param_2[0x10] == '\0') goto LAB_ram_48082286;
LAB_ram_48081f30:
    uVar14 = param_2[0x13];
    uVar4 = uVar16;
    iVar7 = iVar19;
    if ((uVar21 < uVar14) || ((uVar14 == uVar21 && (uVar18 < (uint)param_2[0x12])))) {
      param_2[0x12] = uVar18;
      param_2[0x13] = uVar21;
      goto LAB_ram_48082294;
    }
    uVar16 = param_2[0x14];
    uVar9 = uVar18 - param_2[0x12];
    iVar12 = (uVar21 - uVar14) - (uint)(uVar18 < uVar9);
    uVar14 = uVar16 + uVar9;
    cVar29 = (char)param_2[0x16];
    param_2[0x12] = uVar18;
    param_2[0x14] = uVar14;
    param_2[0x13] = uVar21;
    param_2[0x15] = (uint)(uVar14 < uVar16) + param_2[0x15] + iVar12;
    uVar21 = param_3[0x1a];
    uVar18 = param_3[0x1b];
    cVar33 = (char)param_3[7];
    uVar16 = uVar9;
    iVar19 = iVar12;
    if (cVar29 != '\0') goto LAB_ram_48081f82;
LAB_ram_480822ac:
    bVar26 = 0;
    param_2[0x18] = uVar21;
    param_2[0x19] = uVar18;
    param_2[0x1a] = uVar21;
    param_2[0x1b] = uVar18;
    *(undefined1 *)(param_2 + 0x16) = 1;
    if (cVar33 == '\0') {
      if (cVar3 == '\0') {
LAB_ram_48082706:
        cVar33 = (char)param_2[0x20];
        cVar28 = (char)param_2[0x22];
        cVar13 = cVar28;
        cVar29 = (char)param_2[3];
joined_r0x48082712:
        if (cVar29 != '\0') goto LAB_ram_48081fee;
        goto LAB_ram_48082716;
      }
      if (cVar13 == '\0') {
LAB_ram_480822fe:
        if (uVar24 == 0 && iVar22 == 0) {
          if (uVar4 == 0 && iVar7 == 0) {
            if (iVar12 == 0 && uVar9 == 0) goto LAB_ram_48082aca;
            param_2[0x21] = iVar27;
            *(undefined1 *)(param_2 + 0x20) = 1;
            cVar33 = '\x01';
          }
          else {
            param_2[0x1f] = iVar27;
            *(undefined1 *)(param_2 + 0x1e) = 1;
            if (iVar12 == 0 && uVar9 == 0) goto LAB_ram_48082aca;
            *(undefined1 *)(param_2 + 0x20) = 1;
            param_2[0x21] = iVar27;
            cVar33 = '\x01';
          }
LAB_ram_480829cc:
          cVar13 = (char)param_2[0x22];
        }
        else {
          *(undefined1 *)(param_2 + 0x1c) = 1;
          param_2[0x1d] = iVar27;
          if (uVar4 != 0 || iVar7 != 0) {
            uVar15 = 0;
            iVar19 = 0;
LAB_ram_4808244c:
            param_2[0x1f] = iVar27;
            *(undefined1 *)(param_2 + 0x1e) = 1;
            uVar4 = uVar15;
            iVar7 = iVar19;
            goto LAB_ram_48082456;
          }
          if (iVar12 != 0 || uVar9 != 0) goto LAB_ram_48082322;
LAB_ram_48082aca:
          cVar33 = (char)param_2[0x20];
          cVar13 = (char)param_2[0x22];
        }
        goto LAB_ram_48082472;
      }
      cVar29 = (char)param_2[3];
      cVar33 = (char)param_2[0x20];
      cVar13 = (char)param_2[0x22];
      if (cVar29 == '\0') {
        cVar28 = '\0';
        goto LAB_ram_48082352;
      }
LAB_ram_48082482:
      cVar28 = '\x01';
      bVar26 = 2;
    }
    else {
      *(undefined1 *)(param_2 + 3) = 1;
joined_r0x4808241c:
      if (cVar3 == '\0') {
        cVar33 = (char)param_2[0x20];
        cVar28 = (char)param_2[0x22];
        goto LAB_ram_48081fee;
      }
      if (cVar13 == '\0') goto LAB_ram_480822fe;
      cVar29 = '\x01';
      cVar33 = (char)param_2[0x20];
      cVar13 = (char)param_2[0x22];
      cVar28 = '\x01';
      bVar26 = 2;
    }
LAB_ram_48082352:
    uVar16 = param_3[5];
    if (uVar16 == 0xffffffff) {
      uVar16 = iVar27 - iVar30;
    }
    uVar18 = param_3[6];
    if (uVar18 == 0xffffffff) {
      uVar18 = iVar27 - iVar30;
    }
    if (uVar16 < 0xbb9) {
      if ((3000 < uVar18) && (bVar26 != 2)) {
        cVar28 = '\x03';
        bVar26 = 2;
      }
    }
    else if (bVar26 != 2) {
      cVar28 = '\x02';
      bVar26 = 2;
    }
    piVar20 = param_3 + 8;
    do {
      if ((char)*piVar20 == '\0') {
        if ((char)piVar20[1] != '\0') {
          if (bVar26 != 2) {
            cVar28 = '\x05';
          }
          goto LAB_ram_480823c0;
        }
LAB_ram_4808255c:
        if (bVar26 != 2) {
          cVar28 = '\x04';
        }
LAB_ram_480823c0:
        bVar26 = 2;
      }
      else if (*(char *)((int)piVar20 + 5) == '\0') {
        cVar6 = *(char *)((int)piVar20 + 1);
        if ((char)piVar20[1] != '\0') {
          if (bVar26 == 2) {
            if ((cVar6 != '\0') &&
               ((*(char *)((int)piVar20 + 2) != '\0' || (*(char *)((int)piVar20 + 3) != '\0'))))
            goto LAB_ram_480826e4;
          }
          else {
            if ((cVar6 != '\0') &&
               ((*(char *)((int)piVar20 + 2) != '\0' || (*(char *)((int)piVar20 + 3) != '\0')))) {
              cVar28 = '\x05';
              bVar26 = 2;
              goto LAB_ram_480823c2;
            }
            cVar28 = '\x05';
          }
          goto LAB_ram_480823c0;
        }
        if ((cVar6 == '\0') ||
           ((*(char *)((int)piVar20 + 2) == '\0' && (*(char *)((int)piVar20 + 3) == '\0'))))
        goto LAB_ram_4808255c;
LAB_ram_480826e4:
        uVar16 = piVar20[2];
        if (uVar16 == 0xffffffff) {
          uVar16 = iVar27 - iVar30;
        }
        if ((5000 < uVar16) && (bVar26 != 2)) {
          bVar26 = 2;
          cVar28 = '\x06';
        }
      }
LAB_ram_480823c2:
      piVar20 = piVar20 + 4;
    } while (piVar20 != param_3 + 0x14);
    if (*(char *)((int)param_3 + 0x1d) == '\0') {
      if (bVar26 == 2) {
LAB_ram_48081ffa:
        cVar6 = *(char *)((int)param_3 + 6);
      }
      else {
        cVar6 = *(char *)((int)param_3 + 6);
        cVar28 = '\a';
      }
      bVar26 = 2;
      if (cVar6 != '\0') goto LAB_ram_48082004;
LAB_ram_480823e2:
      iVar19 = param_3[3];
      if (iVar19 == 0) {
        cVar6 = '\0';
        if (cVar3 == '\0') goto LAB_ram_480820b2;
        goto LAB_ram_4808204a;
      }
      cVar6 = '\0';
LAB_ram_48082010:
      uStack_44 = param_3[4];
      uVar16 = __udivdi3(uStack_44 * 100,(int)((ulonglong)uStack_44 * 100 >> 0x20),iVar19,0);
      if (uVar16 < 6) {
        if (bVar26 != 2) {
          cVar28 = '\t';
          bVar26 = 2;
          if (cVar3 != '\0') goto LAB_ram_4808204a;
LAB_ram_4808298e:
          cVar28 = '\t';
          bVar26 = 2;
          goto LAB_ram_480820b2;
        }
LAB_ram_4808295a:
        if (cVar3 == '\0') goto LAB_ram_4808296a;
LAB_ram_4808204a:
        uVar16 = param_3[5];
        if (uVar16 == 0xffffffff) {
          uVar16 = iVar27 - iVar30;
        }
        uVar18 = param_3[6];
        if (uVar18 == 0xffffffff) {
          uVar18 = iVar27 - iVar30;
        }
        piVar20 = param_3 + 8;
        do {
          if (((char)*piVar20 == '\0') || (*(char *)((int)piVar20 + 5) == '\0')) {
            uVar21 = piVar20[2];
            if (*(char *)((int)piVar20 + 3) == '\0') {
              if (uVar21 == 0xffffffff) {
                uVar21 = iVar27 - iVar30;
              }
              if (uVar21 < 0x9c5) {
                if ((piVar20[3] != 0) && (bVar26 == 0)) {
                  cVar28 = '\x0e';
                  bVar26 = 1;
                }
              }
              else if (bVar26 == 0) {
                cVar28 = '\r';
                bVar26 = 1;
              }
            }
            else if (bVar26 == 0) {
              cVar28 = '\n';
              bVar26 = 1;
            }
          }
          piVar20 = piVar20 + 4;
        } while (param_3 + 0x14 != piVar20);
        if (uVar16 < 0x3e9) {
          if (uVar18 < 0x3e9) {
            if ((cVar6 == '\0') || (param_3[2] < 700)) {
              if (iVar19 != 0) {
                uStack_44 = param_3[4];
                uVar16 = __udivdi3(uStack_44 * 100,(int)((ulonglong)uStack_44 * 100 >> 0x20),iVar19,
                                   0);
                goto LAB_ram_48082952;
              }
            }
            else if (bVar26 == 0) {
              if (iVar19 != 0) {
                uStack_44 = param_3[4];
                goto LAB_ram_480828ec;
              }
              goto LAB_ram_4808279e;
            }
          }
          else {
            if (bVar26 != 0) goto LAB_ram_4808282e;
            if ((cVar6 == '\0') || (param_3[2] < 700)) {
              bVar26 = 1;
              cVar28 = '\f';
            }
            else {
              cVar28 = '\f';
              bVar26 = 1;
            }
          }
        }
        else {
          if (bVar26 == 0) {
            if (uVar18 < 0x3e9) {
              if ((cVar6 == '\0') || (param_3[2] < 700)) {
                bVar26 = 1;
                cVar28 = '\v';
              }
              else {
                cVar28 = '\v';
                bVar26 = 1;
              }
              goto LAB_ram_480820b2;
            }
            cVar28 = '\v';
            bVar26 = 1;
          }
LAB_ram_4808282e:
          if (((cVar6 == '\0') || (param_3[2] < 700)) && (iVar19 != 0)) {
            uStack_44 = param_3[4];
            uVar16 = __udivdi3(uStack_44 * 100,(int)((ulonglong)uStack_44 * 100 >> 0x20),iVar19,0);
            if (10 < uVar16) {
LAB_ram_48082864:
              if (uStack_44 < 0x20001) goto LAB_ram_4808286e;
            }
          }
        }
      }
      else {
        if (uStack_44 < 0x10001) {
          if (bVar26 == 2) goto LAB_ram_4808295a;
          if (cVar3 == '\0') {
            if (cVar6 == '\0') {
LAB_ram_48082ad6:
              bVar26 = 2;
              cVar28 = '\t';
            }
            else {
              bVar26 = 2;
              cVar28 = '\t';
            }
            goto LAB_ram_480820b2;
          }
          cVar28 = '\t';
          bVar26 = 2;
          goto LAB_ram_4808204a;
        }
        if (cVar3 != '\0') goto LAB_ram_4808204a;
LAB_ram_480828d8:
        if ((cVar6 != '\0') && (699 < param_3[2])) {
          if (bVar26 != 0) goto LAB_ram_4808296a;
LAB_ram_480828ec:
          uVar16 = __udivdi3(uStack_44 * 100,(int)((ulonglong)uStack_44 * 100 >> 0x20),iVar19,0);
          if (10 < uVar16) {
            cVar28 = '\x0f';
            bVar26 = 1;
            goto LAB_ram_480820b2;
          }
          goto LAB_ram_4808279e;
        }
LAB_ram_48082952:
        if (10 < uVar16) goto LAB_ram_48082864;
LAB_ram_4808286e:
        if (bVar26 == 0) {
          cVar28 = '\x10';
          bVar26 = 1;
        }
      }
    }
    else {
      if (*(char *)((int)param_3 + 6) == '\0') goto LAB_ram_480823e2;
      if ((799 < param_3[2]) && (bVar26 != 2)) {
        bVar26 = 2;
        cVar28 = '\b';
      }
LAB_ram_48082004:
      iVar19 = param_3[3];
      if (iVar19 != 0) {
        cVar6 = '\x01';
        goto LAB_ram_48082010;
      }
      cVar6 = cVar3;
      if (cVar3 != '\0') goto LAB_ram_4808204a;
      iVar22 = param_3[2];
LAB_ram_48082792:
      if (iVar22 < 700) goto LAB_ram_480820b2;
      if (bVar26 != 0) {
LAB_ram_48082aea:
        bVar26 = 2;
        goto LAB_ram_480820b2;
      }
LAB_ram_4808279e:
      cVar28 = '\x0f';
      bVar26 = 1;
    }
  }
LAB_ram_480820b2:
  cVar3 = (char)param_2[0x1e];
  cVar6 = cVar28;
  bVar17 = bVar26;
  if ((char)param_2[0x1c] == '\0') {
    if (cVar3 != '\0') {
      iVar19 = param_2[0x1f];
      if (9999 < (uint)(iVar27 - iVar19)) goto LAB_ram_480820d2;
LAB_ram_48082494:
      cVar3 = '\x12';
LAB_ram_48082496:
      iVar30 = (10000 - iVar27) + iVar19;
      if (cVar33 == '\0') {
        if (cVar13 == '\0') goto LAB_ram_480825ac;
        iVar19 = param_2[0x23];
        if ((uint)(iVar27 - iVar19) < 10000) {
LAB_ram_4808250e:
          bVar5 = 2;
          goto LAB_ram_48082512;
        }
LAB_ram_480824bc:
        if (1 < bVar26) {
          bVar5 = 2;
          goto LAB_ram_4808262e;
        }
        *(undefined1 *)(param_2 + 0x27) = 0;
        param_2[0x28] = 0;
        if ((char)param_2[0x24] != '\0') goto LAB_ram_480824d2;
LAB_ram_48082a3e:
        *(undefined1 *)(param_2 + 0x24) = 1;
        bVar5 = 2;
        cVar6 = cVar3;
      }
      else {
        iVar19 = param_2[0x21];
        if ((uint)(iVar27 - iVar19) < 10000) goto LAB_ram_480824b8;
        if (cVar13 != '\0') {
          iVar19 = param_2[0x23];
          if (9999 < (uint)(iVar27 - iVar19)) goto LAB_ram_480824bc;
          goto LAB_ram_4808250e;
        }
LAB_ram_480825ac:
        cVar13 = (char)param_2[0x24];
        if (1 < bVar26) {
          bVar5 = 2;
          goto LAB_ram_48082114;
        }
        *(undefined1 *)(param_2 + 0x27) = 0;
        param_2[0x28] = 0;
        if (cVar13 != '\0') {
LAB_ram_480824d2:
          bVar5 = 2;
          cVar6 = cVar3;
          goto LAB_ram_480824d6;
        }
        *(undefined1 *)(param_2 + 0x24) = 1;
        bVar5 = 2;
        cVar6 = cVar3;
      }
LAB_ram_480825c8:
      bVar10 = 2;
      bVar8 = 2;
      *(char *)((int)param_2 + 0x92) = cVar6;
      *(undefined1 *)((int)param_2 + 0x93) = 0;
      *(undefined1 *)((int)param_2 + 0x91) = 2;
      uVar16 = 0;
      uVar11 = 0;
      cVar13 = cVar6;
      goto LAB_ram_4808215e;
    }
    if ((cVar33 == '\0') || (iVar19 = param_2[0x21], 9999 < (uint)(iVar27 - iVar19)))
    goto LAB_ram_48082612;
LAB_ram_480820e2:
    cVar3 = '\x13';
    bVar5 = 1;
LAB_ram_480820e6:
    iVar30 = (10000 - iVar27) + iVar19;
    if ((cVar13 != '\0') && (iVar19 = param_2[0x23], (uint)(iVar27 - iVar19) < 10000)) {
LAB_ram_48082512:
      cVar13 = cVar3;
      bVar8 = bVar5;
      if (iVar30 == 0) goto LAB_ram_48082516;
    }
LAB_ram_48082108:
    if (bVar26 < bVar5) {
      cVar13 = (char)param_2[0x24];
      cVar6 = cVar3;
      bVar17 = bVar5;
      goto LAB_ram_48082114;
    }
LAB_ram_4808262e:
    *(undefined1 *)(param_2 + 0x27) = 0;
    param_2[0x28] = 0;
    if ((char)param_2[0x24] == '\0') goto LAB_ram_48082642;
LAB_ram_48082120:
    uVar11 = 2;
    if (bVar17 != 2) {
      bVar8 = *(byte *)((int)param_2 + 0x91);
      if (bVar17 == bVar8) goto LAB_ram_48082690;
      cVar13 = cVar6;
      if (bVar8 < bVar17) {
        if (*(char *)((int)param_2 + 0x93) == '\0') {
          *(undefined1 *)((int)param_2 + 0x93) = 1;
          *(byte *)(param_2 + 0x25) = bVar17;
          *(char *)((int)param_2 + 0x95) = cVar6;
          param_2[0x26] = iVar27;
          uVar16 = 2000;
          uVar11 = 1;
        }
        else {
          uVar16 = 2000;
LAB_ram_480827e4:
          if ((*(byte *)(param_2 + 0x25) == bVar17) && (*(char *)((int)param_2 + 0x95) == cVar6)) {
            if (uVar16 <= (uint)(iVar27 - param_2[0x26])) {
              *(byte *)((int)param_2 + 0x91) = bVar17;
              goto LAB_ram_48082690;
            }
            uVar16 = uVar16 + (param_2[0x26] - iVar27);
          }
          else {
            *(byte *)(param_2 + 0x25) = bVar17;
            *(char *)((int)param_2 + 0x95) = cVar6;
            param_2[0x26] = iVar27;
            *(undefined1 *)((int)param_2 + 0x93) = 1;
          }
          uVar11 = 2;
          cVar13 = cVar6;
          if (bVar8 < bVar17) {
            uVar11 = 1;
          }
        }
      }
      else {
        if (*(char *)((int)param_2 + 0x93) != '\0') {
          uVar16 = 5000;
          goto LAB_ram_480827e4;
        }
        *(byte *)(param_2 + 0x25) = bVar17;
        *(char *)((int)param_2 + 0x95) = cVar6;
        param_2[0x26] = iVar27;
        *(undefined1 *)((int)param_2 + 0x93) = 1;
        uVar16 = 5000;
      }
LAB_ram_48082152:
      cVar6 = *(char *)((int)param_2 + 0x92);
      *(undefined1 *)(param_2 + 0x27) = uVar11;
      param_2[0x28] = uVar16;
      bVar10 = bVar17;
      goto LAB_ram_4808215e;
    }
LAB_ram_480824d6:
    bVar10 = 2;
    bVar17 = *(byte *)((int)param_2 + 0x91);
    if (*(byte *)((int)param_2 + 0x91) != 2) {
      bVar8 = 2;
      *(undefined1 *)((int)param_2 + 0x91) = 2;
      *(char *)((int)param_2 + 0x92) = cVar6;
      *(undefined1 *)((int)param_2 + 0x93) = 0;
      uVar16 = 0;
      uVar11 = 0;
      cVar13 = cVar6;
      goto LAB_ram_4808215e;
    }
  }
  else {
    if ((uint)(iVar27 - param_2[0x1d]) < 10000) {
      iVar30 = (param_2[0x1d] + 10000) - iVar27;
      if ((cVar3 == '\0') || (iVar19 = param_2[0x1f], 9999 < (uint)(iVar27 - iVar19))) {
        if ((cVar33 != '\0') && (iVar19 = param_2[0x21], (uint)(iVar27 - iVar19) < 10000)) {
          cVar3 = '\x11';
LAB_ram_480824b8:
          if (iVar30 != 0) goto LAB_ram_480824bc;
          bVar5 = 2;
          goto LAB_ram_480820e6;
        }
        if (cVar13 == '\0') {
LAB_ram_480825aa:
          cVar3 = '\x11';
          goto LAB_ram_480825ac;
        }
        iVar19 = param_2[0x23];
        if (9999 < (uint)(iVar27 - iVar19)) goto LAB_ram_480825e0;
        cVar3 = '\x11';
        bVar5 = 2;
        cVar13 = '\x11';
        bVar8 = 2;
        if (iVar30 != 0) goto LAB_ram_48082108;
LAB_ram_48082516:
        bVar5 = bVar8;
        cVar3 = cVar13;
        iVar30 = (10000 - iVar27) + iVar19;
        goto LAB_ram_48082108;
      }
      if (iVar30 == 0) {
        cVar3 = '\x11';
        goto LAB_ram_48082496;
      }
      if ((cVar33 != '\0') && ((uint)(iVar27 - param_2[0x21]) < 10000)) {
        cVar3 = '\x11';
        goto LAB_ram_480824bc;
      }
      if (cVar13 == '\0') goto LAB_ram_480825aa;
LAB_ram_480825e0:
      if (1 < bVar26) {
        bVar5 = 2;
        cVar3 = '\x11';
        goto LAB_ram_4808262e;
      }
      *(undefined1 *)(param_2 + 0x27) = 0;
      param_2[0x28] = 0;
      if ((char)param_2[0x24] == '\0') {
        cVar3 = '\x11';
        goto LAB_ram_48082a3e;
      }
      cVar6 = '\x11';
      cVar3 = '\x11';
      bVar5 = 2;
      goto LAB_ram_480824d6;
    }
    if ((cVar3 != '\0') && (iVar19 = param_2[0x1f], (uint)(iVar27 - iVar19) < 10000))
    goto LAB_ram_48082494;
LAB_ram_480820d2:
    if ((cVar33 != '\0') && (iVar19 = param_2[0x21], (uint)(iVar27 - iVar19) < 10000))
    goto LAB_ram_480820e2;
LAB_ram_48082612:
    if (cVar13 != '\0') {
      if ((uint)(iVar27 - param_2[0x23]) < 10000) {
        cVar3 = '\x14';
        bVar5 = 1;
        iVar30 = (10000 - iVar27) + param_2[0x23];
        goto LAB_ram_48082108;
      }
      bVar5 = 0;
      cVar3 = '\0';
      iVar30 = 0;
      goto LAB_ram_4808262e;
    }
    cVar13 = (char)param_2[0x24];
    bVar5 = 0;
    cVar3 = '\0';
    iVar30 = 0;
LAB_ram_48082114:
    *(undefined1 *)(param_2 + 0x27) = 0;
    param_2[0x28] = 0;
    if (cVar13 != '\0') goto LAB_ram_48082120;
LAB_ram_48082642:
    *(undefined1 *)(param_2 + 0x24) = 1;
    if (bVar17 == 2) goto LAB_ram_480825c8;
    *(undefined1 *)((int)param_2 + 0x91) = 0;
    *(undefined1 *)((int)param_2 + 0x92) = 0;
    if (bVar17 != 0) {
      if (*(char *)((int)param_2 + 0x93) != '\0') {
        bVar8 = 0;
        uVar16 = 2000;
        goto LAB_ram_480827e4;
      }
      *(undefined1 *)((int)param_2 + 0x93) = 1;
      *(byte *)(param_2 + 0x25) = bVar17;
      *(char *)((int)param_2 + 0x95) = cVar6;
      param_2[0x26] = iVar27;
      uVar16 = 2000;
      uVar11 = 1;
      bVar8 = 0;
      cVar13 = cVar6;
      goto LAB_ram_48082152;
    }
  }
LAB_ram_48082690:
  bVar8 = bVar17;
  *(char *)((int)param_2 + 0x92) = cVar6;
  *(undefined1 *)((int)param_2 + 0x93) = 0;
  uVar16 = 0;
  uVar11 = 0;
  cVar13 = cVar6;
  bVar10 = bVar8;
LAB_ram_4808215e:
  iVar34 = param_2[8];
  iVar32 = param_2[0xe];
  iVar19 = param_2[9];
  iVar25 = param_2[0xf];
  iVar31 = param_2[0x14];
  iVar23 = param_2[0x15];
  *(byte *)(param_1 + 2) = bVar8;
  *(char *)((int)param_1 + 9) = cVar6;
  iVar7 = param_2[0x1b];
  iVar22 = param_2[0x1a];
  *(byte *)((int)param_1 + 10) = bVar10;
  *(char *)((int)param_1 + 0xb) = cVar13;
  iVar12 = *param_2;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[1] = iVar27;
  *(byte *)(param_1 + 3) = bVar26;
  *(char *)((int)param_1 + 0xd) = cVar28;
  *(char *)((int)param_1 + 0x1d) = cVar29;
  *(byte *)((int)param_1 + 0xe) = bVar5;
  *(char *)((int)param_1 + 0xf) = cVar3;
  *(undefined1 *)(param_1 + 4) = uVar11;
  param_1[5] = uVar16;
  param_1[6] = iVar30;
  param_1[8] = iVar34;
  param_1[10] = iVar32;
  param_1[0xc] = iVar31;
  param_1[9] = iVar19;
  param_1[0xb] = iVar25;
  param_1[0xd] = iVar23;
  *param_2 = iVar12 + 1;
  *param_1 = iVar12 + 1;
  param_1[0xe] = iVar22;
  *(bool *)(param_1 + 7) =
       (((iVar34 != 0 || iVar32 != 0) || iVar31 != 0) || iVar22 != 0) ||
       (((iVar19 != 0 || iVar25 != 0) || iVar23 != 0) || iVar7 != 0);
  param_1[0xf] = iVar7;
  return param_1;
}


