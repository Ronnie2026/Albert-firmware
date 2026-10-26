/* Firmware entry: 0x480ccf42 */

void FUN_ram_480ccf42(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  char cVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  bool bVar23;
  char *pcVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  int *piVar27;
  byte *pbVar28;
  byte *pbVar29;
  char *pcVar30;
  int iVar31;
  char *pcVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined4 uStack_118;
  byte bStack_114;
  byte bStack_113;
  undefined4 uStack_110;
  uint uStack_104;
  undefined4 local_d4;
  undefined4 uStack_d0;
  char cStack_ca;
  undefined4 uStack_cc;
  undefined4 auStack_c8 [25];
  char cStack_63;
  char cStack_5f;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar32 = *(char **)(param_1 + 0x58);
  cVar12 = *(char *)((int)param_2 + 0xd);
  if ((((((*pcVar32 == '\0') && (pcVar32[1] == '\0')) && (pcVar32[2] == '\0')) &&
       ((pcVar32[8] == '\0' && (pcVar32[0xf] == '\0')))) && (pcVar32[0x3a4] == '\0')) &&
     ((pcVar32[0x3a5] == '\0' && (pcVar32[0x3fc] == '\0')))) {
LAB_ram_480cd10a:
    if (cVar12 != '\x01') goto LAB_ram_480cd2e6;
LAB_ram_480cd110:
    if (*param_2 != 0x3f5) goto LAB_ram_480cd11a;
    iVar5 = *(int *)(param_1 + 0x58);
    FUN_ram_4ff3ec14(iVar5 + 0xb18,0xffffffff);
    puVar26 = (undefined4 *)(iVar5 + 0xb38);
    puVar18 = &local_d4;
    do {
      uVar9 = puVar26[1];
      uVar11 = puVar26[2];
      uVar13 = puVar26[3];
      *puVar18 = *puVar26;
      puVar18[1] = uVar9;
      puVar18[2] = uVar11;
      puVar18[3] = uVar13;
      puVar26 = puVar26 + 4;
      puVar18 = puVar18 + 4;
    } while (puVar26 != (undefined4 *)(iVar5 + 0xbd8));
    *puVar18 = *puVar26;
    FUN_ram_4ff3ee10(iVar5 + 0xb18);
    iVar5 = *(int *)(param_1 + 0x58);
    if (((cStack_ca == '\0') || ((char)auStack_c8[0] == '\0')) || (*(char *)(iVar5 + 0x5a1) != '\0')
       ) {
LAB_ram_480cd2d2:
      *(undefined2 *)(iVar5 + 0x1b0) = 0;
      *(undefined1 *)(iVar5 + 0x1b2) = 0;
      *(undefined4 *)(iVar5 + 0x1b8) = 0;
      cVar12 = *(char *)((int)param_2 + 0xd);
    }
    else {
      iVar6 = FUN_ram_4804556a(*(undefined4 *)(param_1 + 0x5c),1);
      iVar7 = FUN_ram_48025ba6();
      if (*(char *)(iVar5 + 0x88) == '\0') goto LAB_ram_480cd2d2;
      cVar12 = *(char *)((int)param_2 + 0xd);
      if (((cVar12 == '\x01') && (*param_2 == 0x3f5)) &&
         ((*(char *)((int)param_2 + 0x1b) == '\0' && (param_2[7] == 0)))) {
        if ((((char)param_2[1] != '\b') || (iVar6 == 0)) || (500 < (uint)(iVar7 - param_3)))
        goto LAB_ram_480cd2d2;
        *(undefined2 *)(iVar5 + 0x1b0) = 0;
        uVar14 = (uint)*(byte *)((int)param_2 + 5);
        if (((uVar14 & 3) - 1 & 0xff) < 2) {
          *(undefined1 *)(iVar5 + 0x1b0) = 1;
          if ((uVar14 & 3) == 2) {
            *(undefined1 *)(iVar5 + 0x1b1) = 1;
            uVar14 = (uint)*(byte *)((int)param_2 + 5);
          }
          else {
            uVar14 = (uint)*(byte *)((int)param_2 + 5);
          }
        }
        uVar14 = (int)uVar14 >> 2 & 3;
        if (((uVar14 - 1 & 0xff) < 2) &&
           (*(byte *)(iVar5 + 0x1b0) = *(byte *)(iVar5 + 0x1b0) | 2, uVar14 == 2)) {
          *(byte *)(iVar5 + 0x1b1) = *(byte *)(iVar5 + 0x1b1) | 2;
        }
        *(int *)(iVar5 + 0x1b8) = iVar6;
        *(int *)(iVar5 + 0x1b4) = param_3;
        *(undefined1 *)(iVar5 + 0x1b2) = 1;
        cVar12 = *(char *)((int)param_2 + 0xd);
      }
    }
LAB_ram_480cd2e6:
    if (1 < (byte)(cVar12 - 1U)) goto joined_r0x480cd2f6;
LAB_ram_480cd11a:
    FUN_ram_480cca8a(param_1,param_2,param_3);
    cVar12 = *(char *)((int)param_2 + 0xd);
    if (cVar12 != '\x02') goto joined_r0x480cd2f6;
    FUN_ram_480524aa(param_1 + 0x378,param_2,param_3);
    cVar12 = *(char *)((int)param_2 + 0xd);
    if (cVar12 != '\x02') goto joined_r0x480ccf94;
    if ((*param_2 == 0x3a1) && ((char)param_2[1] == '\b')) {
      if ((*(byte *)((int)param_2 + 0xb) & 0xf) == 2) {
        piVar27 = (int *)((int)param_2 + 5);
        cVar12 = -0x40;
        do {
          iVar5 = *piVar27;
          piVar27 = (int *)((int)piVar27 + 1);
          cVar12 = cVar12 + (char)iVar5;
        } while (piVar27 != param_2 + 3);
        if ((char)param_2[3] != cVar12) goto LAB_ram_480cd160;
        bVar16 = *(byte *)(param_2 + 2) & 0x40;
        bVar22 = *(byte *)((int)param_2 + 5) >> 7;
        if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
          bVar16 = ~*(byte *)((int)param_2 + 9) & 1;
        }
        cVar12 = '\x01';
      }
      else {
LAB_ram_480cd160:
        bVar16 = 0;
        bVar22 = 0;
        cVar12 = '\0';
      }
      local_d4 = CONCAT31(local_d4._1_3_,cVar12);
      if (cVar12 != '\0') {
        iVar5 = FUN_ram_48025ba6();
        if (param_3 == 0) {
          *(undefined4 *)(param_1 + 0xbf0) = 0;
LAB_ram_480cd1a6:
          *(undefined1 *)(param_1 + 0xbed) = 0;
        }
        else {
          if (300 < (uint)(iVar5 - param_3)) {
            *(int *)(param_1 + 0xbf0) = param_3;
            goto LAB_ram_480cd1a6;
          }
          if ((*(int *)(param_1 + 0xbf0) == 0) ||
             (300 < (uint)(param_3 - *(int *)(param_1 + 0xbf0)))) {
            *(undefined1 *)(param_1 + 0xbed) = 0;
          }
          *(int *)(param_1 + 0xbf0) = param_3;
          if ((bVar22 == 0) || (bVar16 != bVar22)) goto LAB_ram_480cd1a6;
          if (*(byte *)(param_1 + 0xbed) <= bVar16) {
            *(byte *)(param_1 + 0xbed) = *(byte *)(param_1 + 0xbed) + 1;
            cVar12 = *(char *)((int)param_2 + 0xd);
            goto joined_r0x480ccf94;
          }
        }
        cVar12 = *(char *)((int)param_2 + 0xd);
        goto joined_r0x480ccf94;
      }
    }
  }
  else {
    if (cVar12 == '\x02') {
      iVar5 = *param_2;
      if (iVar5 == 0x679) {
        iVar20 = param_2[7];
        iVar35 = param_2[1];
        iVar34 = param_2[2];
        iVar33 = param_2[3];
        iVar31 = param_2[5];
        uStack_104 = param_2[6];
        iVar7 = param_2[8];
        iVar5 = param_2[1];
        bVar22 = *(byte *)((int)param_2 + 10);
        bVar16 = *(byte *)((int)param_2 + 0xb);
        cVar12 = *(char *)((int)param_2 + 0x1b);
        iVar6 = FUN_ram_4804556a(*(undefined4 *)(param_1 + 0x5c),2);
        if ((iVar20 == 0) && (cVar12 == '\0')) {
          if ((((char)iVar5 == '\a') &&
              (((iVar6 != 0 && ((byte)((bVar16 & 1) << 5 | bVar22 >> 3) == 0x3f)) &&
               (uStack_118._1_1_ = (byte)((uint)iVar35 >> 8), bVar22 = uStack_118._1_1_,
               (uStack_118._1_1_ & 6) != 6)))) &&
             (bStack_113 = (byte)((uint)iVar34 >> 8), (bStack_113 & 0x7f) < 0x65)) {
            if (iVar6 != *(int *)(pcVar32 + 0x3a0)) {
              FUN_ram_4804385c(pcVar32 + 0x80,iVar6);
            }
            if ((pcVar32[0x1fd] != '\0') && (pcVar32[0x21e] != '\0')) {
              uVar14 = 0;
              uVar10 = 0;
              pcVar24 = pcVar32;
              do {
                pcVar30 = pcVar24 + 5;
                bVar16 = (byte)pcVar32[0x1c0] >> (uVar14 & 0x1f) & 1;
                do {
                  pcVar1 = pcVar24 + 0x1df;
                  pcVar2 = pcVar24 + 0x1c1;
                  pcVar24 = pcVar24 + 1;
                  bVar16 = bVar16 & *pcVar1 == *pcVar2;
                } while (pcVar30 != pcVar24);
                if (bVar16 == 0) {
                  uVar10 = uVar10 | 1 << (uVar14 & 0x1f) & 0xffU;
                }
                uVar14 = uVar14 + 1;
                pcVar24 = pcVar30;
              } while (uVar14 != 6);
              if (uVar10 != 0) {
                *(int *)(pcVar32 + 0x254) = *(int *)(pcVar32 + 0x254) + 1;
              }
            }
            uStack_118 = CONCAT31((int3)((uint)iVar35 >> 8),7);
            uStack_104 = uStack_104 & 0xffffff;
            uStack_110._3_1_ = (undefined1)((uint)iVar33 >> 0x18);
            uStack_110._0_3_ = CONCAT12(1,(short)iVar33);
            *(undefined4 *)(pcVar32 + 0x370) = uStack_118;
            *(int *)(pcVar32 + 0x380) = iVar31;
            *(int *)(pcVar32 + 0x38c) = iVar7;
            *(undefined4 *)(pcVar32 + 0x37c) = param_4;
            pcVar32[0x388] = '\0';
            pcVar32[0x389] = '\0';
            pcVar32[0x38a] = '\0';
            pcVar32[0x38b] = '\0';
            *(int *)(pcVar32 + 0x390) = param_3;
            pcVar32[0x368] = '\x01';
            *(undefined4 *)(pcVar32 + 0x378) = uStack_110;
            *(uint *)(pcVar32 + 900) = uStack_104;
            pcVar32[0x36c] = 'y';
            pcVar32[0x36d] = '\x06';
            pcVar32[0x36e] = '\0';
            pcVar32[0x36f] = '\0';
            *(int *)(pcVar32 + 0x374) = iVar34;
            *(int *)(pcVar32 + 0x394) = iVar6;
            *(undefined4 *)(pcVar32 + 0x20c) = param_4;
            pbVar28 = (byte *)(pcVar32 + 0x1c1);
            do {
              uStack_118._2_1_ = (byte)((uint)iVar35 >> 0x10);
              uStack_118._3_1_ = (byte)((uint)iVar35 >> 0x18);
              bStack_114 = (byte)iVar34;
              pbVar29 = pbVar28 + 5;
              *pbVar28 = bVar22;
              pbVar28[1] = uStack_118._2_1_;
              pbVar28[2] = uStack_118._3_1_;
              pbVar28[3] = bStack_114;
              pbVar28[4] = bStack_113;
              pbVar28 = pbVar29;
            } while ((byte *)(pcVar32 + 0x1df) != pbVar29);
            pcVar32[0x1bf] = '\0';
            pcVar32[0x1fd] = '\0';
            pcVar32[0x21c] = '\0';
            pcVar32[0x21e] = '\0';
            iVar5 = *(int *)(pcVar32 + 0x39c) + 1;
            pcVar32[0x1c0] = '?';
            if (iVar5 == 0) {
              iVar5 = 1;
            }
            *(int *)(pcVar32 + 0x39c) = iVar5;
            *(int *)(pcVar32 + 0x23c) = iVar5;
            *(undefined4 *)(pcVar32 + 0x244) = param_4;
            FUN_ram_480439fa(pcVar32 + 0x80);
          }
          else {
            pcVar32[0x368] = '\0';
            local_d4 = 0;
            uStack_cc = 0;
            auStack_c8[0] = 0;
            auStack_c8[1] = 0;
            auStack_c8[2] = 0;
            auStack_c8[4] = 0;
            auStack_c8[5] = 0;
            pcVar32[0x36c] = '\0';
            pcVar32[0x36d] = '\0';
            pcVar32[0x36e] = '\0';
            pcVar32[0x36f] = '\0';
            pcVar32[0x374] = '\0';
            pcVar32[0x375] = '\0';
            pcVar32[0x376] = '\0';
            pcVar32[0x377] = '\0';
            pcVar32[0x378] = '\0';
            pcVar32[0x379] = '\0';
            pcVar32[0x37a] = '\0';
            pcVar32[0x37b] = '\0';
            pcVar32[0x37c] = '\0';
            pcVar32[0x37d] = '\0';
            pcVar32[0x37e] = '\0';
            pcVar32[0x37f] = '\0';
            pcVar32[0x380] = '\0';
            pcVar32[0x381] = '\0';
            pcVar32[0x382] = '\0';
            pcVar32[899] = '\0';
            pcVar32[0x388] = '\0';
            pcVar32[0x389] = '\0';
            pcVar32[0x38a] = '\0';
            pcVar32[0x38b] = '\0';
            pcVar32[0x38c] = '\0';
            pcVar32[0x38d] = '\0';
            pcVar32[0x38e] = '\0';
            pcVar32[0x38f] = '\0';
            pcVar32[0x390] = '\0';
            pcVar32[0x391] = '\0';
            pcVar32[0x392] = '\0';
            pcVar32[0x393] = '\0';
            pcVar32[0x394] = '\0';
            pcVar32[0x395] = '\0';
            pcVar32[0x396] = '\0';
            pcVar32[0x397] = '\0';
            pcVar32[0x1c0] = '\0';
            pcVar32[0x1fd] = '\0';
            pcVar32[0x1ff] = '\0';
            iVar5 = *(int *)(pcVar32 + 0x39c) + 1;
            uStack_d0 = 8;
            pcVar32[0x370] = '\b';
            pcVar32[0x371] = '\0';
            pcVar32[0x372] = '\0';
            pcVar32[0x373] = '\0';
            auStack_c8[3] = 0x10000;
            pcVar32[900] = '\0';
            pcVar32[0x385] = '\0';
            pcVar32[0x386] = '\x01';
            pcVar32[0x387] = '\0';
            if (iVar5 == 0) {
              iVar5 = 1;
            }
            *(int *)(pcVar32 + 0x39c) = iVar5;
            FUN_ram_480439fa();
          }
        }
        pcVar32 = *(char **)(param_1 + 0x58);
        cVar12 = *(char *)((int)param_2 + 0xd);
        if (pcVar32[0xf] == '\0') goto LAB_ram_480cd10a;
        if (cVar12 == '\x02') {
          iVar5 = *param_2;
          goto LAB_ram_480ccfc6;
        }
        goto joined_r0x480cde30;
      }
      if (pcVar32[0xf] != '\0') {
LAB_ram_480ccfc6:
        if (((iVar5 - 0x102U < 2) || (iVar5 == 0x3c2)) || (iVar5 == 0x31a)) {
          FUN_ram_4ff3ec14(pcVar32 + 0xb18,0xffffffff);
          pcVar24 = pcVar32 + 0xb38;
          puVar18 = &local_d4;
          do {
            uVar9 = *(undefined4 *)(pcVar24 + 4);
            uVar11 = *(undefined4 *)(pcVar24 + 8);
            uVar13 = *(undefined4 *)(pcVar24 + 0xc);
            *puVar18 = *(undefined4 *)pcVar24;
            puVar18[1] = uVar9;
            puVar18[2] = uVar11;
            puVar18[3] = uVar13;
            pcVar24 = pcVar24 + 0x10;
            puVar18 = puVar18 + 4;
          } while (pcVar24 != pcVar32 + 0xbd8);
          *puVar18 = *(undefined4 *)pcVar24;
          FUN_ram_4ff3ee10(pcVar32 + 0xb18);
          iVar5 = *(int *)(param_1 + 0x58);
          if (((cStack_ca == '\0') || ((char)auStack_c8[0] == '\0')) ||
             (*(char *)(iVar5 + 0x5a1) != '\0')) {
LAB_ram_480cd044:
            puVar25 = (undefined1 *)(iVar5 + 0x110);
            for (puVar19 = (undefined1 *)(iVar5 + 0xf0); puVar19 != puVar25; puVar19 = puVar19 + 8)
            {
              *puVar19 = 0;
              puVar19[1] = 0;
              puVar19[2] = 0;
              puVar19[3] = 0;
              puVar19[4] = 0;
              puVar19[5] = 0;
              puVar19[6] = 0;
            }
            do {
              *puVar25 = 0;
              puVar25[1] = 0;
              puVar25[2] = 0;
              puVar25[3] = 0;
              puVar25[4] = 0;
              puVar25[5] = 0;
              puVar25[6] = 0;
              puVar25 = puVar25 + 8;
            } while (puVar25 != (undefined1 *)(iVar5 + 0x130));
            cVar12 = *(char *)(iVar5 + 199);
            *(undefined4 *)(iVar5 + 0x130) = 0;
            *(undefined1 *)(iVar5 + 0x134) = 0;
            *(undefined2 *)(iVar5 + 0x136) = 0;
            *(char *)(iVar5 + 0x135) = cVar12;
            iVar6 = *(int *)(iVar5 + 0x158) + 1;
            if (iVar6 == 0) {
              iVar6 = 1;
            }
            *(int *)(iVar5 + 0x158) = iVar6;
            *(undefined1 *)(iVar5 + 400) = 0;
            if ((((*(char *)(iVar5 + 0x25d) != '\0') || (*(char *)(iVar5 + 0x25e) != cVar12)) ||
                ((*(char *)(iVar5 + 0x25f) != '\0' ||
                 ((*(char *)(iVar5 + 0x260) != *(char *)(iVar5 + 0x138) ||
                  (*(int *)(iVar5 + 0x264) != *(int *)(iVar5 + 0x15c))))))) ||
               ((*(int *)(iVar5 + 0x268) != *(int *)(iVar5 + 0x160) ||
                (*(int *)(iVar5 + 0x26c) != *(int *)(iVar5 + 0x164))))) {
              *(undefined1 *)(iVar5 + 0x25d) = 0;
              *(char *)(iVar5 + 0x25e) = cVar12;
              *(undefined1 *)(iVar5 + 0x25f) = 0;
              *(char *)(iVar5 + 0x260) = *(char *)(iVar5 + 0x138);
              *(int *)(iVar5 + 0x264) = *(int *)(iVar5 + 0x15c);
              *(int *)(iVar5 + 0x268) = *(int *)(iVar5 + 0x160);
              *(int *)(iVar5 + 0x26c) = *(int *)(iVar5 + 0x164);
              FUN_ram_480439fa(iVar5 + 0x80);
            }
          }
          else {
            pcVar32 = (char *)(iVar5 + 0x9789);
            fence();
            iVar5 = *(int *)(param_1 + 0x58);
            if (*pcVar32 != '\0') goto LAB_ram_480cd044;
            uVar9 = FUN_ram_4804556a(*(undefined4 *)(param_1 + 0x5c),2);
            uVar11 = FUN_ram_48025ba6();
            FUN_ram_48042bb2(iVar5 + 0xb8,param_2,param_3,uVar9,uVar11);
            if (((((*(char *)(iVar5 + 0x25d) != *(char *)(iVar5 + 0x134)) ||
                  (*(char *)(iVar5 + 0x25e) != *(char *)(iVar5 + 0x135))) ||
                 (*(char *)(iVar5 + 0x25f) != *(char *)(iVar5 + 0x137))) ||
                ((*(char *)(iVar5 + 0x260) != *(char *)(iVar5 + 0x138) ||
                 (*(int *)(iVar5 + 0x264) != *(int *)(iVar5 + 0x15c))))) ||
               ((*(int *)(iVar5 + 0x268) != *(int *)(iVar5 + 0x160) ||
                (*(int *)(iVar5 + 0x26c) != *(int *)(iVar5 + 0x164))))) {
              *(char *)(iVar5 + 0x25d) = *(char *)(iVar5 + 0x134);
              *(char *)(iVar5 + 0x25e) = *(char *)(iVar5 + 0x135);
              *(char *)(iVar5 + 0x25f) = *(char *)(iVar5 + 0x137);
              *(char *)(iVar5 + 0x260) = *(char *)(iVar5 + 0x138);
              *(int *)(iVar5 + 0x264) = *(int *)(iVar5 + 0x15c);
              *(int *)(iVar5 + 0x268) = *(int *)(iVar5 + 0x160);
              *(int *)(iVar5 + 0x26c) = *(int *)(iVar5 + 0x164);
              if (*(char *)(iVar5 + 0x1fd) == '\0') {
                *(undefined1 *)(iVar5 + 0x25c) = 0;
                bVar23 = false;
              }
              else {
                uVar10 = 0;
                uVar14 = 0;
                iVar6 = iVar5;
                do {
                  iVar7 = iVar6 + 5;
                  bVar22 = *(byte *)(iVar5 + 0x1c0) >> (uVar10 & 0x1f) & 1;
                  do {
                    pcVar32 = (char *)(iVar6 + 0x1df);
                    pcVar24 = (char *)(iVar6 + 0x1c1);
                    iVar6 = iVar6 + 1;
                    bVar22 = bVar22 & *pcVar32 == *pcVar24;
                  } while (iVar7 != iVar6);
                  if (bVar22 == 0) {
                    uVar14 = uVar14 | 1 << (uVar10 & 0x1f) & 0xffU;
                  }
                  uVar10 = uVar10 + 1;
                  iVar6 = iVar7;
                } while (uVar10 != 6);
                *(char *)(iVar5 + 0x25c) = (char)uVar14;
                bVar23 = 0xb < *(byte *)(iVar5 + 0x21c) && uVar14 != 0;
              }
              cVar12 = *(char *)(iVar5 + 0x21f);
              *(bool *)(iVar5 + 0x275) = bVar23;
              if (cVar12 == '\0') {
                cVar12 = *(char *)(iVar5 + 0x222);
              }
              cVar17 = *(char *)(iVar5 + 0x368);
              *(char *)(iVar5 + 0x271) = cVar12;
              *(undefined1 *)(iVar5 + 0x273) = *(undefined1 *)(iVar5 + 0x3fc);
              *(undefined1 *)(iVar5 + 0x274) = *(undefined1 *)(iVar5 + 0x221);
              if ((cVar17 != '\0') && (*(int *)(iVar5 + 0x210) != *(int *)(iVar5 + 0x39c))) {
                cVar17 = *(int *)(iVar5 + 0x214) == *(int *)(iVar5 + 0x39c);
              }
              *(char *)(iVar5 + 0x272) = cVar17;
              iVar6 = *(int *)(iVar5 + 0x224) + 1;
              if (iVar6 == 0) {
                iVar6 = 1;
              }
              *(int *)(iVar5 + 0x224) = iVar6;
            }
          }
          cVar12 = *(char *)((int)param_2 + 0xd);
          goto LAB_ram_480cd10a;
        }
        goto LAB_ram_480cd2e6;
      }
      goto LAB_ram_480cd11a;
    }
joined_r0x480cde30:
    if (cVar12 == '\x01') goto LAB_ram_480cd110;
joined_r0x480cd2f6:
    if (cVar12 == '\x04') {
      if ((*param_2 == 0x30a) && ((char)param_2[1] == '\b')) {
        iVar5 = FUN_ram_48025ba6();
        if ((param_3 == 0) || (300 < (uint)(iVar5 - param_3))) {
          bVar23 = false;
LAB_ram_480cd7dc:
          *(undefined1 *)(param_1 + 0xbae) = 0;
          *(int *)(param_1 + 0xbb0) = param_3;
          cVar12 = (char)param_2[1];
        }
        else {
          if ((*(int *)(param_1 + 0xbb0) == 0) ||
             (300 < (uint)(param_3 - *(int *)(param_1 + 0xbb0)))) {
            bVar23 = true;
            goto LAB_ram_480cd7dc;
          }
          *(int *)(param_1 + 0xbb0) = param_3;
          cVar12 = (char)param_2[1];
          bVar23 = true;
        }
        piVar27 = (int *)((int)param_2 + 5);
        if (cVar12 == '\b') {
          cVar12 = '\r';
          do {
            iVar5 = *piVar27;
            piVar27 = (int *)((int)piVar27 + 1);
            cVar12 = cVar12 + (char)iVar5;
          } while (piVar27 != param_2 + 3);
          if ((char)param_2[3] != cVar12) goto LAB_ram_480cd34a;
          bVar4 = true;
          bVar22 = *(byte *)((int)param_2 + 5) >> 3 & 3;
          bVar16 = *(byte *)((int)param_2 + 5) & 7;
        }
        else {
LAB_ram_480cd34a:
          bVar22 = 0;
          bVar16 = 0;
          bVar4 = false;
        }
        local_d4 = CONCAT31(local_d4._1_3_,bVar4);
        *(bool *)(param_1 + 0xbaf) = bVar4;
        if (bVar4) {
          *(byte *)(param_1 + 0xbac) = bVar16;
          *(byte *)(param_1 + 0xbad) = bVar22;
          if ((bVar23) && (bVar22 == 1)) {
            if (*(byte *)(param_1 + 0xbae) < 2) {
              *(byte *)(param_1 + 0xbae) = *(byte *)(param_1 + 0xbae) + 1;
            }
            goto LAB_ram_480cd376;
          }
        }
        *(undefined1 *)(param_1 + 0xbae) = 0;
      }
LAB_ram_480cd376:
      FUN_ram_480cb95c(param_1,param_2,param_3);
      FUN_ram_480c7974(param_1,param_2,param_3);
      cVar12 = *(char *)((int)param_2 + 0xd);
    }
joined_r0x480ccf94:
    if (1 < (byte)(cVar12 - 1U)) {
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar5 + 0xb18,0xffffffff);
  puVar26 = (undefined4 *)(iVar5 + 0xb38);
  puVar18 = &local_d4;
  do {
    uVar9 = puVar26[1];
    uVar11 = puVar26[2];
    uVar13 = puVar26[3];
    *puVar18 = *puVar26;
    puVar18[1] = uVar9;
    puVar18[2] = uVar11;
    puVar18[3] = uVar13;
    puVar26 = puVar26 + 4;
    puVar18 = puVar18 + 4;
  } while (puVar26 != (undefined4 *)(iVar5 + 0xbd8));
  *puVar18 = *puVar26;
  FUN_ram_4ff3ee10(iVar5 + 0xb18);
  if (((local_d4._1_1_ == '\f') && (cStack_63 != '\0')) && (cStack_5f != '\0')) {
    iVar5 = *param_2;
    cVar12 = *(char *)((int)param_2 + 0xd);
    if (iVar5 == 0x20e) {
      if (cVar12 == '\x01') {
        puVar8 = (undefined2 *)(param_1 + 0x9d0);
        bVar22 = *(byte *)(param_2 + 1);
        FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
        *(undefined1 *)(param_1 + 0x9e0) = 1;
        *(int *)(param_1 + 0x9dc) = param_3;
        *(undefined4 *)(param_1 + 0x9d0) = 0;
        *(undefined4 *)(param_1 + 0x9d4) = 0;
        *(undefined4 *)(param_1 + 0x9d8) = 0;
        *(bool *)(param_1 + 0x9e1) = 7 < bVar22;
        if (7 < bVar22) {
          uVar14 = 0;
          do {
            uVar15 = 0;
            uVar10 = 0;
            do {
              uVar21 = uVar14 + uVar15;
              uVar3 = uVar15 & 0x1f;
              uVar15 = uVar15 + 1;
              uVar10 = uVar10 | ((int)(uint)*(byte *)((int)param_2 + ((uVar21 & 0xff) >> 3) + 5) >>
                                 (uVar21 & 7) & 1U) << uVar3;
            } while (uVar15 != 9);
            *puVar8 = (short)uVar10;
            uVar14 = uVar14 + 9 & 0xff;
            puVar8 = puVar8 + 1;
          } while (uVar14 != 0x36);
        }
        if (*(char *)(param_1 + 0xa59) == '\0') {
          FUN_ram_4ff45158(param_1 + 0x9f8,param_1 + 0x9d0,0x12);
        }
        goto LAB_ram_480cd8b6;
      }
    }
    else if (iVar5 == 0x22e) {
      if (cVar12 == '\x01') {
        bVar22 = *(byte *)(param_2 + 1);
        FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
        *(undefined1 *)(param_1 + 0x9f4) = 1;
        *(int *)(param_1 + 0x9f0) = param_3;
        *(undefined4 *)(param_1 + 0x9e4) = 0;
        *(undefined4 *)(param_1 + 0x9e8) = 0;
        *(undefined4 *)(param_1 + 0x9ec) = 0;
        *(bool *)(param_1 + 0x9f5) = 7 < bVar22;
        if (7 < bVar22) {
          puVar8 = (undefined2 *)(param_1 + 0x9e4);
          uVar14 = 0;
          do {
            uVar15 = 0;
            uVar10 = 0;
            do {
              uVar21 = uVar14 + uVar15;
              uVar3 = uVar15 & 0x1f;
              uVar15 = uVar15 + 1;
              uVar10 = uVar10 | ((int)(uint)*(byte *)((int)param_2 + ((uVar21 & 0xff) >> 3) + 5) >>
                                 (uVar21 & 7) & 1U) << uVar3;
            } while (uVar15 != 9);
            *puVar8 = (short)uVar10;
            uVar14 = uVar14 + 9 & 0xff;
            puVar8 = puVar8 + 1;
          } while (uVar14 != 0x36);
        }
        if (*(char *)(param_1 + 0xa59) == '\0') {
          FUN_ram_4ff45158(param_1 + 0xa0c,param_1 + 0x9e4,0x12);
        }
        goto LAB_ram_480cd8b6;
      }
    }
    else if (iVar5 == 0x32e) {
      if (cVar12 == '\x01') {
        bVar22 = *(byte *)(param_2 + 1);
        FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
        *(undefined1 *)(param_1 + 0xa24) = 1;
        *(int *)(param_1 + 0xa20) = param_3;
        if ((bVar22 < 5) || ((*(byte *)(param_2 + 2) & 3) != 1)) {
LAB_ram_480cde12:
          cStack_5f = '\0';
        }
        else {
          uVar14 = 0;
          do {
            uVar10 = uVar14 & 0x1f;
            uVar14 = uVar14 + 2;
            if (((int)(uint)*(byte *)((int)param_2 + 5) >> uVar10 & 3U) != 0) goto LAB_ram_480cde12;
          } while (uVar14 != 8);
        }
        *(char *)(param_1 + 0xa25) = cStack_5f;
        if (*(char *)(param_1 + 0xa59) == '\0') {
          *(undefined1 *)(param_1 + 0xa30) = *(undefined1 *)(param_1 + 0xa20);
          *(undefined1 *)(param_1 + 0xa31) = *(undefined1 *)(param_1 + 0xa21);
          *(undefined1 *)(param_1 + 0xa32) = *(undefined1 *)(param_1 + 0xa22);
          *(undefined1 *)(param_1 + 0xa33) = *(undefined1 *)(param_1 + 0xa23);
          *(undefined1 *)(param_1 + 0xa34) = *(undefined1 *)(param_1 + 0xa24);
          *(char *)(param_1 + 0xa35) = cStack_5f;
        }
        goto LAB_ram_480cd8b6;
      }
    }
    else if (iVar5 == 0x33e) {
      if (cVar12 == '\x01') {
        bVar22 = *(byte *)(param_2 + 1);
        FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
        *(undefined1 *)(param_1 + 0xa2c) = 1;
        *(int *)(param_1 + 0xa28) = param_3;
        if ((bVar22 < 5) || ((*(byte *)(param_2 + 2) & 3) != 1)) {
LAB_ram_480cde16:
          cStack_5f = '\0';
        }
        else {
          uVar14 = 0;
          do {
            uVar10 = uVar14 & 0x1f;
            uVar14 = uVar14 + 2;
            if (((int)(uint)*(byte *)((int)param_2 + 5) >> uVar10 & 3U) != 0) goto LAB_ram_480cde16;
          } while (uVar14 != 8);
        }
        *(char *)(param_1 + 0xa2d) = cStack_5f;
        if (*(char *)(param_1 + 0xa59) == '\0') {
          *(undefined1 *)(param_1 + 0xa38) = *(undefined1 *)(param_1 + 0xa28);
          *(undefined1 *)(param_1 + 0xa39) = *(undefined1 *)(param_1 + 0xa29);
          *(undefined1 *)(param_1 + 0xa3a) = *(undefined1 *)(param_1 + 0xa2a);
          *(undefined1 *)(param_1 + 0xa3b) = *(undefined1 *)(param_1 + 0xa2b);
          *(undefined1 *)(param_1 + 0xa3c) = *(undefined1 *)(param_1 + 0xa2c);
          *(char *)(param_1 + 0xa3d) = cStack_5f;
        }
        goto LAB_ram_480cd8b6;
      }
    }
    else if (iVar5 == 0x389) {
      if (cVar12 == '\x01') {
        bVar22 = *(byte *)(param_2 + 1);
        FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
        if (4 < bVar22) {
          *(byte *)(param_1 + 0xa64) =
               *(byte *)((int)param_2 + 6) >> 2 & 6 |
               (byte)((int)(uint)*(byte *)((int)param_2 + 6) >> 2) & 1;
          *(byte *)(param_1 + 0xa65) =
               (byte)((int)(uint)*(byte *)((int)param_2 + 7) >> 3) & 1 |
               *(byte *)((int)param_2 + 7) >> 3 & 2;
          bVar22 = *(byte *)((int)param_2 + 9);
          *(int *)(param_1 + 0xa68) = param_3;
          *(undefined1 *)(param_1 + 0xa67) = 1;
          *(byte *)(param_1 + 0xa66) = (byte)((int)(uint)bVar22 >> 2) & 1 | bVar22 >> 2 & 2;
        }
        goto LAB_ram_480cd8b6;
      }
    }
    else if (iVar5 == 0x399) {
      if (cVar12 == '\x01') {
        bVar22 = *(byte *)(param_2 + 1);
        FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
        if (1 < bVar22) {
          *(byte *)(param_1 + 0xa6c) = *(byte *)((int)param_2 + 5) >> 4 & 3;
          *(byte *)(param_1 + 0xa6d) = *(byte *)((int)param_2 + 5) >> 6;
          bVar22 = *(byte *)((int)param_2 + 6);
          *(int *)(param_1 + 0xa70) = param_3;
          *(undefined1 *)(param_1 + 0xa6f) = 1;
          *(byte *)(param_1 + 0xa6e) = bVar22 >> 6 & 1;
        }
LAB_ram_480cd8b6:
        FUN_ram_4ff3ee10(param_1 + 0xa7c);
        return;
      }
    }
    else if ((cVar12 == '\x02') && (iVar5 == 0x2ba)) {
      bVar22 = *(byte *)(param_2 + 1);
      FUN_ram_4ff3ec14(param_1 + 0xa7c,0xffffffff);
      if (2 < bVar22) {
        bVar22 = *(byte *)((int)param_2 + 5);
        if (bVar22 == 0xff) {
          bVar22 = *(byte *)((int)param_2 + 6);
          if (bVar22 != 0xff) {
            uVar14 = bVar22 + 0x5f;
            if (0xfe < uVar14) {
              uVar14 = 0xfe;
            }
            bVar22 = (byte)uVar14;
          }
        }
        *(byte *)(param_1 + 0xa5a) = bVar22;
        bVar22 = *(byte *)((int)param_2 + 7);
        *(int *)(param_1 + 0xa60) = param_3;
        *(byte *)(param_1 + 0xa5b) = bVar22 & 1;
        *(undefined1 *)(param_1 + 0xa5c) = 1;
      }
      goto LAB_ram_480cd8b6;
    }
  }
  return;
}


