/* Firmware entry: 0x4ff2520a */

/* Analyst-assigned name based on firmware call sites and string references. */

void recovered_fsd_p0_task(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint3 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  int local_e0;
  int iStack_b8;
  int iStack_b4;
  uint uStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  ushort uStack_98;
  undefined1 uStack_96;
  byte bStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  uint uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_ram_48030904(0);
  iStack_b4 = FUN_ram_48025b94();
  iStack_b8 = FUN_ram_4ff3e824(1);
  do {
    do {
      iVar13 = FUN_ram_4802d220(0,1);
    } while (iVar13 != 0);
    fence();
    if (DAT_ram_4ff6df98 != '\0') {
      FUN_ram_4ff2bc94(5,0);
    }
    DAT_ram_4ff6ddac = FUN_ram_48025b94();
    uVar7 = (uint)DAT_ram_4ff4b8b8;
    fence();
    uVar11 = (uint)DAT_ram_4ff4b8ba;
    fence();
    uVar14 = FUN_ram_48025ba6();
    if (DAT_ram_4ff48b58 != '\0') {
      fence();
      fence();
      fence();
      DAT_ram_4ff489cc = 5;
      DAT_ram_4ff489d0 = DAT_ram_4ff47ea0;
      DAT_ram_4ff489d4 = 0;
      DAT_ram_4ff489d8 = 0xffffffff;
      DAT_ram_4ff489dc = 0;
      DAT_ram_4ff489e0 = uVar7 - uVar11 & 0x3f;
      DAT_ram_4ff489e4 = 0;
      DAT_ram_4ff489e8 = 0;
      DAT_ram_4ff489c4 = (DAT_ram_4ff489c4 + 1U & 0xfffffffe) + 2;
      fence();
      DAT_ram_4ff489c8 = uVar14;
    }
    iVar13 = FUN_ram_4ff2bcc4();
    piVar5 = DAT_ram_4ff6dc58;
    if (iVar13 == 0) {
      fence();
      fence();
      if ((((DAT_ram_4ff6df38 == '\0') || (DAT_ram_4ff6dc58 == (int *)0x0)) ||
          (fence(), *(char *)((int)DAT_ram_4ff6dc58 + 0x18c6b) == '\0')) ||
         ((iVar13 = FUN_ram_4ff2bcc4(), iVar13 != 0 || (fence(), (char)piVar5[0x631b] != '\0'))))
      goto LAB_ram_4ff2536c;
      cVar10 = '\0';
      uVar7 = DAT_ram_48222d48;
      uVar11 = DAT_ram_48222d4c;
      uVar19 = DAT_ram_48222d50;
      uVar20 = DAT_ram_48222d54;
      iVar13 = DAT_ram_48222d58;
      uVar21 = DAT_ram_48222d5c;
      uVar22 = DAT_ram_48222d60;
      uVar14 = DAT_ram_48222d64;
      uVar23 = DAT_ram_48222d68;
      local_e0 = 1;
      do {
        uStack_8c = uVar7;
        uStack_88 = uVar11;
        uStack_84 = uVar19;
        uStack_80 = uVar20;
        iStack_7c = iVar13;
        uStack_78 = uVar21;
        uStack_74 = uVar22;
        uStack_70 = uVar14;
        uStack_6c = uVar23;
        iVar17 = FUN_ram_4ff22a32(DAT_ram_4ff6dc58,local_e0,&uStack_8c,0,0);
        piVar5 = DAT_ram_4ff6dc58;
        if (iVar17 == 0) {
          if ((local_e0 != 1) || (*(char *)((int)DAT_ram_4ff6dc58 + 0x18c67) == '\0')) break;
          fence();
          if (*(char *)((int)DAT_ram_4ff6dc58 + 0x18c6b) == '\0') break;
          if ((char)DAT_ram_4ff6dc58[0xb] == '\x02') {
            uVar18 = 0;
          }
          else if ((char)DAT_ram_4ff6dc58[0xd69] == '\x02') {
            uVar18 = 1;
          }
          else {
            uVar18 = (uint)*(byte *)(DAT_ram_4ff6dc58 + 0x1ac7);
            if (uVar18 != 2) break;
          }
          iVar17 = uVar18 * 0x3578;
          if (DAT_ram_4ff6dc58[uVar18 * 0xd5e + 0x2a] == 0) {
            if ((*(char *)((int)DAT_ram_4ff6dc58 + 0x18c67) == '\0') ||
               (fence(), *(char *)((int)DAT_ram_4ff6dc58 + 0x18c6b) == '\0')) break;
            if ((char)DAT_ram_4ff6dc58[0xb] == '\x02') {
              iVar17 = 0;
            }
            else if ((char)DAT_ram_4ff6dc58[0xd69] == '\x02') {
              iVar17 = 1;
            }
            else {
              if ((char)DAT_ram_4ff6dc58[0x1ac7] != '\x02') break;
              iVar17 = 2;
            }
            iVar26 = DAT_ram_4ff6dc58[iVar17 * 0xd5e + 0x12];
            if (iVar26 == 0) break;
            piVar8 = DAT_ram_4ff6dc58 + iVar17 * 0xd5e + 0x223;
            FUN_ram_4ff3ec14(piVar8,0xffffffff);
            cVar3 = *(char *)((int)piVar5 + iVar17 * 0x3578 + 0x89b);
            FUN_ram_4ff3ee10(piVar8);
            if ((cVar3 != '\0') || (iVar17 = FUN_ram_4ff3b4aa(iVar26,&iStack_a0,0), iVar17 != 1))
            break;
            iVar17 = 0;
            do {
              *(undefined1 *)((int)&local_68 + iVar17) = 0;
              iVar17 = iVar17 + 1;
            } while (iVar17 != 0x24);
            uVar4 = CONCAT21(uStack_5c._2_2_,bStack_95) & 0xffff7f;
            uStack_5c._3_1_ = (undefined1)(uVar4 >> 0x10);
            uStack_5c._0_3_ = CONCAT12(bStack_95 >> 7,(short)uVar4 << 8);
            uStack_5c = CONCAT31(uStack_5c._1_3_,uStack_8d);
            uStack_8c = (uint)uStack_98;
            uStack_64._0_2_ = CONCAT11(uStack_94,uStack_96);
            uStack_64 = CONCAT13(uStack_92,CONCAT12(uStack_93,(undefined2)uStack_64));
            uStack_60 = CONCAT13(uStack_8e,CONCAT12(uStack_8f,CONCAT11(uStack_90,uStack_91)));
            uStack_50._0_3_ = CONCAT12(1,(undefined2)uStack_50);
            iStack_58 = iStack_a0;
            uStack_48 = uStack_9c;
            uStack_80 = uStack_5c;
            uStack_88 = uStack_64;
            uStack_84 = uStack_60;
            uStack_74 = uStack_50;
            iStack_7c = iStack_a0;
            uStack_78 = uStack_54;
            uStack_6c = uStack_9c;
            uStack_70 = uStack_4c;
            local_68 = uStack_8c;
          }
          else {
            piVar8 = DAT_ram_4ff6dc58 + uVar18 * 0xd5e + 0x223;
            FUN_ram_4ff3ec14(piVar8,0xffffffff);
            if ((((*(char *)((int)piVar5 + iVar17 + 0x89b) != '\0') ||
                 (*(char *)((int)piVar5 + iVar17 + 0x89a) != '\0')) ||
                (*(char *)((int)piVar5 + iVar17 + 0x85f) == -1)) ||
               (((iVar26 = FUN_ram_4ff3b9c2(piVar5[uVar18 * 0xd5e + 0x2a]), iVar26 == 0 ||
                 ((char)piVar5[uVar18 * 0xd5e + 0x218] == -1)) ||
                (iVar26 = FUN_ram_4ff3b4aa(piVar5[uVar18 * 0xd5e + 0x2a],&uStack_8c,0), iVar26 != 1)
                ))) {
              FUN_ram_4ff3ee10(piVar8);
              break;
            }
            *(char *)(piVar5 + uVar18 * 0xd5e + 0x218) =
                 (char)piVar5[uVar18 * 0xd5e + 0x218] + '\x01';
            iVar26 = FUN_ram_4ff3b9c2(piVar5[uVar18 * 0xd5e + 0x2a]);
            piVar5[uVar18 * 0xd5e + 0xbc5] = iVar26;
            *(char *)((int)piVar5 + iVar17 + 0x85f) =
                 *(char *)((int)piVar5 + iVar17 + 0x85f) + '\x01';
            uStack_78 = FUN_ram_4ff21a0a();
            uStack_80 = CONCAT13(1,(undefined3)uStack_80);
            FUN_ram_4ff3ee10(piVar8);
          }
        }
        uVar18 = uStack_80 >> 8 & 0xff;
        if (uVar18 == 2) {
          if (((uStack_8c == 0x3fd) && ((uStack_88 & 0xff) == 8)) && ((uStack_88 & 0x700) == 0)) {
            iVar17 = iStack_7c;
            if ((uStack_80._2_1_ == '\0') && (iStack_7c == 0)) {
              iVar17 = FUN_ram_48025b94();
            }
            local_68 = 0;
            uStack_60 = 0;
            uStack_5c = 0;
            iStack_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            uStack_64 = 0xff;
            if (DAT_ram_4ff6dfd8 != (code *)0x0) {
              (*DAT_ram_4ff6dfd8)(&uStack_8c,DAT_ram_4ff6dfe4,iVar17,&local_68);
            }
            uVar18 = uStack_80 >> 8 & 0xff;
          }
          local_e0 = 2;
          if (*(byte *)(DAT_ram_4ff6dc58 + 0xb) != uVar18) goto LAB_ram_4ff2597c;
LAB_ram_4ff25a82:
          iVar26 = 0x88c;
          iVar17 = 0;
LAB_ram_4ff25a8a:
          piVar5 = DAT_ram_4ff6dc58;
          iVar26 = iVar26 + (int)DAT_ram_4ff6dc58;
          FUN_ram_4ff3ec14(iVar26,0xffffffff);
          cVar3 = *(char *)((int)piVar5 + iVar17 * 0x3578 + 0x85f);
          if (cVar3 != '\0') {
            *(char *)((int)piVar5 + iVar17 * 0x3578 + 0x85f) = cVar3 + -1;
          }
          if ((char)piVar5[iVar17 * 0xd5e + 0x218] != '\0') {
            *(char *)(piVar5 + iVar17 * 0xd5e + 0x218) = (char)piVar5[iVar17 * 0xd5e + 0x218] + -1;
          }
          iVar17 = piVar5[iVar17 * 0xd5e + 0x162];
          FUN_ram_4ff3ee10(iVar26);
          if (iVar17 != 0) {
            FUN_ram_4ff3e004(iVar17,0,0,2,0);
          }
        }
        else {
          if ((((uVar18 == 1) && (uStack_8c == 0x3fd)) && ((char)uStack_88 == '\b')) &&
             ((uStack_88 & 0x700) == 0)) {
            fence();
            if (DAT_ram_4ff6df98 == '\0') {
              fence();
              if ((DAT_ram_4ff4b8b8 + 1 & 0x3f) != DAT_ram_4ff4b8ba) {
                iVar17 = iStack_7c;
                if ((uStack_80._2_1_ == '\0') && (iStack_7c == 0)) {
                  iVar17 = FUN_ram_48025b94();
                }
                iVar26 = FUN_ram_48025b94();
                if ((uint)(iVar26 - iVar17) < 0x7d1) {
                  uStack_64 = 0xff;
                  local_68 = 0;
                  uStack_60 = 0;
                  uStack_5c = 0;
                  iStack_58 = 0;
                  uStack_54 = 0;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  uStack_48 = 0;
                  uStack_44 = 0;
                  uVar12 = 0;
                  if (DAT_ram_4ff6dfd8 != (code *)0x0) {
                    uVar12 = (*DAT_ram_4ff6dfd8)(&uStack_8c,DAT_ram_4ff6dfe4,iVar17,&local_68);
                  }
                  uStack_64._0_3_ = CONCAT12(uVar12,(undefined2)uStack_64);
                  FUN_ram_48031046(&uStack_8c,&local_68);
                }
                else {
                  if (DAT_ram_4ff6dfe0 != (code *)0x0) {
                    (*DAT_ram_4ff6dfe0)(&uStack_8c);
                  }
                  DAT_ram_4ff6dfa4 = DAT_ram_4ff6dfa4 + 1;
                  local_68 = 0;
                  uStack_60 = 0;
                  uStack_5c = 0;
                  iStack_58 = 0;
                  uStack_54 = 0;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  uStack_48 = 0;
                  uStack_44 = 0;
                  uStack_64 = CONCAT31(0x100,uStack_88._1_1_) & 0xffff07;
                  uStack_64._0_2_ = CONCAT11(4,(undefined1)uStack_64);
                  FUN_ram_48031046(&uStack_8c,&local_68);
                }
                goto LAB_ram_4ff25c90;
              }
              DAT_ram_4ff6dfa8 = DAT_ram_4ff6dfa8 + 1;
              if (DAT_ram_4ff6dfe0 != (code *)0x0) {
                (*DAT_ram_4ff6dfe0)(&uStack_8c);
              }
              if (DAT_ram_4ff6dfe4 != (int *)0x0) {
                (**(code **)(*DAT_ram_4ff6dfe4 + 0x14c))();
                goto LAB_ram_4ff25c90;
              }
            }
            else {
LAB_ram_4ff25c90:
              if (DAT_ram_4ff6dfe4 != (int *)0x0) {
                (**(code **)(*DAT_ram_4ff6dfe4 + 0xac))(DAT_ram_4ff6dfe4,&uStack_8c);
              }
            }
            uVar18 = uStack_80 >> 8 & 0xff;
          }
          if (*(byte *)(DAT_ram_4ff6dc58 + 0xb) == uVar18) goto LAB_ram_4ff25a82;
LAB_ram_4ff2597c:
          if (*(byte *)(DAT_ram_4ff6dc58 + 0xd69) == uVar18) {
            iVar26 = 0x3e04;
            iVar17 = 1;
            goto LAB_ram_4ff25a8a;
          }
          if (*(byte *)(DAT_ram_4ff6dc58 + 0x1ac7) == uVar18) {
            iVar26 = 0x737c;
            iVar17 = 2;
            goto LAB_ram_4ff25a8a;
          }
        }
        uVar6 = uStack_8c;
        uVar9 = (uint)DAT_ram_4ff4b8b8;
        fence();
        uVar24 = (uint)DAT_ram_4ff4b8ba;
        fence();
        uVar18 = uStack_88 >> 8;
        uVar25 = FUN_ram_48025ba6();
        if (DAT_ram_4ff48b58 != '\0') {
          fence();
          fence();
          fence();
          DAT_ram_4ff489cc = 6;
          DAT_ram_4ff489d0 = DAT_ram_4ff47ea0;
          DAT_ram_4ff489d4 = 0;
          DAT_ram_4ff489d8 = 0xffffffff;
          DAT_ram_4ff489dc = 0;
          DAT_ram_4ff489e0 = uVar9 - uVar24 & 0x3f;
          DAT_ram_4ff489e4 = uVar6;
          DAT_ram_4ff489e8 = uVar18 & 7;
          DAT_ram_4ff489c4 = (DAT_ram_4ff489c4 + 1U & 0xfffffffe) + 2;
          fence();
          DAT_ram_4ff489c8 = uVar25;
        }
        fence();
        if (DAT_ram_4ff6df98 != '\0') {
          FUN_ram_4ff2bc94(5,0);
          break;
        }
        cVar10 = cVar10 + '\x01';
      } while (cVar10 != ' ');
      piVar5 = DAT_ram_4ff6dc58;
      FUN_ram_4ff3ec14(&DAT_ram_4ff68814,0xffffffff);
      uVar19 = DAT_ram_4ff68820;
      uVar11 = DAT_ram_4ff6881c;
      uVar23 = DAT_ram_4ff68824;
      uVar14 = DAT_ram_4ff68828;
      iVar13 = DAT_ram_4ff6882c;
      uVar25 = DAT_ram_4ff68830;
      FUN_ram_4ff3ee10(&DAT_ram_4ff68814);
      uStack_5c = (uint)((byte)(uVar19 >> 6) & 1) << 0x10;
      local_68 = CONCAT31((int3)(((uint)(CONCAT11((char)(uVar19 >> 1),(char)uVar19) & 0xff01) <<
                                 0x10) >> 8),(char)uVar11) & 0x1ffff01;
      uVar7 = CONCAT22(local_68._2_2_,CONCAT11((char)(uVar11 >> 1),(char)local_68));
      local_68 = uVar7 & 0xffff01ff;
      uStack_60 = CONCAT13((char)(uVar11 >> 5),
                           CONCAT12((char)(uVar11 >> 4),
                                    CONCAT11((char)(uVar11 >> 3),(char)(uVar11 >> 0xe)))) &
                  0x1010101;
      uStack_5c = CONCAT31(uStack_5c._1_3_,(char)(uVar11 >> 6)) & 0xffffff01;
      uStack_5c._0_3_ =
           (uint3)CONCAT22(uStack_5c._2_2_,CONCAT11((char)(uVar11 >> 7),(undefined1)uStack_5c)) &
           0xff01ff;
      uStack_54 = CONCAT13((char)(uVar11 >> 8),
                           CONCAT12((char)(uVar11 >> 0xf),
                                    CONCAT11((char)(uVar19 >> 5),(char)(uVar19 >> 4)))) & 0x7010101;
      uStack_5c = (uint)(uint3)uStack_5c;
      uStack_64 = CONCAT13((char)(uVar11 >> 2),
                           CONCAT12((char)(uVar19 >> 7),
                                    CONCAT11((char)(uVar19 >> 3),(char)(uVar19 >> 2)))) & 0x1010101;
      uVar12 = 5;
      if ((uVar11 >> 0x18 != 0) && (uVar12 = (undefined1)(uVar11 >> 0x18), 100 < uVar11 >> 0x18)) {
        uVar12 = 100;
      }
      uStack_50._0_3_ =
           CONCAT12(uVar12,CONCAT11((char)(uVar11 >> 0x10),(char)(uVar11 >> 0xb))) & 0xffff07;
      uStack_50 = (uint)(uint3)uStack_50;
      fence();
      fence();
      if (DAT_ram_4ff6df34 == '\0') {
LAB_ram_4ff25682:
        local_68 = uVar7 & 0xffff0100;
      }
      else {
        fence();
        fence();
        if (DAT_ram_4ff6df30 != '\0') goto LAB_ram_4ff25682;
        fence();
        fence();
        if (DAT_ram_4ff6df38 == '\0') goto LAB_ram_4ff25682;
        fence();
        fence();
        if (DAT_ram_4ff47ec4 != '\0') goto LAB_ram_4ff25682;
      }
      iStack_58 = iVar13;
      uStack_4c = uVar23;
      uStack_48 = uVar14;
      uStack_44 = uVar25;
      iVar17 = FUN_ram_48025b94();
      iVar13 = DAT_ram_4ff5cfc0;
      iVar26 = DAT_ram_4ff5cfc0 + 0xc;
      FUN_ram_4ff3ec14(iVar26,0xffffffff);
      bVar2 = *(byte *)(iVar13 + 0x3bf6);
      FUN_ram_4ff3ee10(iVar26);
      if (((bVar2 & DAT_ram_4ff5cfc6) == 0) &&
         (iVar26 = (**(code **)(*piVar5 + 0xb4))(piVar5,DAT_ram_4ff5cfc4), iVar13 = DAT_ram_4ff5cffc
         , iVar26 == 0)) {
        fence();
        if ((DAT_ram_4ff4b8d0 == '\0') || (DAT_ram_4ff5cfc8 == (int *)0x0)) {
          iVar26 = DAT_ram_4ff5cffc + 0xc;
          FUN_ram_4ff3ec14(iVar26,0xffffffff);
          bVar2 = *(byte *)(iVar13 + 0x3bf6);
          FUN_ram_4ff3ee10(iVar26);
          bVar1 = false;
          if ((bVar2 & DAT_ram_4ff5d002) == 0) goto LAB_ram_4ff25716;
LAB_ram_4ff260de:
          FUN_ram_4805f8e4(&DAT_ram_4ff5cffc,&local_68,piVar5,iVar17);
        }
        else {
          uVar7 = (**(code **)(*DAT_ram_4ff5cfc8 + 4))();
          iVar13 = DAT_ram_4ff5cffc;
          bVar1 = uVar7 < 0xc;
          iVar26 = DAT_ram_4ff5cffc + 0xc;
          FUN_ram_4ff3ec14(iVar26,0xffffffff);
          bVar2 = *(byte *)(iVar13 + 0x3bf6);
          FUN_ram_4ff3ee10(iVar26);
          if ((bVar2 & DAT_ram_4ff5d002) == 0) {
LAB_ram_4ff25716:
            iVar13 = (**(code **)(*piVar5 + 0xb4))(piVar5,DAT_ram_4ff5d000);
            if ((iVar13 == 0) &&
               (((fence(), iVar13 = DAT_ram_4ff5cffc, DAT_ram_4ff4b8d0 == '\0' ||
                 (DAT_ram_4ff5d004 == (int *)0x0)) ||
                (uVar7 = (**(code **)(*DAT_ram_4ff5d004 + 4))(), iVar13 = DAT_ram_4ff5cffc,
                0xb < uVar7)))) {
              DAT_ram_4ff5cffc = iVar13;
              if (bVar1) goto LAB_ram_4ff25cd2;
              if (((DAT_ram_4ff5d000 == '\x01') && (DAT_ram_4ff5d034 != '\0')) &&
                 (((char)local_68 != '\0' &&
                  (uStack_54._2_1_ = (char)(uStack_54 >> 0x10), bVar1 = uStack_54._2_1_ != '\0',
                  bVar1)))) {
                FUN_ram_4ff3ec14(iVar13 + 0xc,0xffffffff);
                bVar2 = *(byte *)(iVar13 + 0x3bf6);
                FUN_ram_4ff3ee10(iVar13 + 0xc);
                iVar13 = DAT_ram_4ff5d028;
                if ((((bVar2 & 6) == 0) && ((uint)(iVar17 - DAT_ram_4ff5d02c) < 0x7a121)) &&
                   ((DAT_ram_4ff5d028 != 0 &&
                    ((iVar26 = (**(code **)(*piVar5 + 0x84))(piVar5,0), iVar13 == iVar26 &&
                     (iVar13 = FUN_ram_4ff22ce0(&DAT_ram_4ff4b8c8,&DAT_ram_4ff5d008), iVar13 == 0)))
                    ))) {
                  uVar7 = uStack_50 >> 0x10 & 0xff;
                  if (uVar7 == 0) {
                    uVar7 = 5;
                  }
                  else if (100 < uVar7) {
                    uVar7 = 100;
                  }
                  if (uVar7 * 1000 <= (uint)(iVar17 - DAT_ram_4ff5d030)) goto LAB_ram_4ff260de;
                }
              }
              goto LAB_ram_4ff2574c;
            }
          }
          FUN_ram_4805f8e4(&DAT_ram_4ff5cffc,&local_68,piVar5,iVar17);
          if (bVar1) goto LAB_ram_4ff25ce8;
        }
LAB_ram_4ff2574c:
        if (cVar10 == '\0') goto LAB_ram_4ff25750;
LAB_ram_4ff25d02:
        iVar17 = FUN_ram_48025b94();
        iVar26 = FUN_ram_4ff3e824(1);
        iVar13 = iVar17;
        if ((iStack_b8 == iVar26) && (iVar13 = iStack_b4, 19999 < (uint)(iVar17 - iStack_b4))) {
          FUN_ram_4ff2a8b2(2,1);
          FUN_ram_4ff3c2b6(1);
          FUN_ram_4ff2a8b2(2,0,0);
        }
        iStack_b4 = iVar13;
        iStack_b8 = iVar26;
        if (cVar10 != ' ') goto LAB_ram_4ff25750;
        FUN_ram_4ff3df3c(0,1,0);
        fence();
        DAT_ram_4ff6dc40._0_1_ = 1;
        if (DAT_ram_4ff6dc4c != 0) {
          FUN_ram_4ff3e004(DAT_ram_4ff6dc4c,0,0,2,0);
        }
        fence();
        fence();
        FUN_ram_48032fe0(1,7,0,0xffffffff,0,DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f,0,0);
LAB_ram_4ff2581e:
        uVar7 = 1;
      }
      else {
        iVar13 = DAT_ram_4ff5cffc;
        iVar26 = DAT_ram_4ff5cffc + 0xc;
        FUN_ram_4ff3ec14(iVar26,0xffffffff);
        bVar2 = *(byte *)(iVar13 + 0x3bf6);
        FUN_ram_4ff3ee10(iVar26);
        if ((bVar2 & DAT_ram_4ff5d002) == 0) {
          bVar1 = true;
          goto LAB_ram_4ff25716;
        }
LAB_ram_4ff25cd2:
        FUN_ram_4805f8e4(&DAT_ram_4ff5cffc,&local_68,piVar5,iVar17);
LAB_ram_4ff25ce8:
        FUN_ram_4805f8e4(&DAT_ram_4ff5cfc0,&local_68,piVar5,iVar17);
        if (cVar10 != '\0') goto LAB_ram_4ff25d02;
LAB_ram_4ff25750:
        fence();
        fence();
        FUN_ram_48032fe0(1,7,0,0xffffffff,0,DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f,0,0);
        piVar5 = DAT_ram_4ff6dc58;
        FUN_ram_4ff3ec14(&DAT_ram_4ff68814,0xffffffff);
        uVar7 = DAT_ram_4ff6881c;
        FUN_ram_4ff3ee10(&DAT_ram_4ff68814);
        iVar13 = DAT_ram_4ff5cfc0;
        uVar19 = uVar7 >> 0x18;
        uVar11 = 5;
        if ((uVar19 != 0) && (uVar11 = uVar19, 100 < uVar19)) {
          uVar11 = 100;
        }
        fence();
        fence();
        uStack_a8 = 0;
        if (DAT_ram_4ff6df34 != '\0') {
          fence();
          fence();
          if (DAT_ram_4ff6df30 == '\0') {
            fence();
            fence();
            if (DAT_ram_4ff6df38 != '\0') {
              fence();
              fence();
              if (DAT_ram_4ff47ec4 == '\0') {
                uStack_a8 = uVar7 & 1;
              }
            }
          }
        }
        iVar17 = DAT_ram_4ff5cfc0 + 0xc;
        FUN_ram_4ff3ec14(iVar17,0xffffffff);
        bVar2 = *(byte *)(iVar13 + 0x3bf6);
        FUN_ram_4ff3ee10(iVar17);
        if ((((bVar2 & DAT_ram_4ff5cfc6) != 0) ||
            (iVar13 = (**(code **)(*piVar5 + 0xb4))(piVar5,DAT_ram_4ff5cfc4), iVar13 != 0)) ||
           ((fence(), DAT_ram_4ff4b8d0 != '\0' &&
            ((DAT_ram_4ff5cfc8 != (int *)0x0 &&
             (uVar19 = (**(code **)(*DAT_ram_4ff5cfc8 + 4))(), uVar19 < 0xc))))))
        goto LAB_ram_4ff2581e;
        iVar17 = FUN_ram_48025b94();
        iVar13 = DAT_ram_4ff5cffc;
        iVar26 = DAT_ram_4ff5cffc + 0xc;
        FUN_ram_4ff3ec14(iVar26,0xffffffff);
        bVar2 = *(byte *)(iVar13 + 0x3bf6);
        FUN_ram_4ff3ee10(iVar26);
        if (((bVar2 & DAT_ram_4ff5d002) != 0) ||
           ((iVar13 = (**(code **)(*piVar5 + 0xb4))(piVar5,DAT_ram_4ff5d000), iVar13 != 0 ||
            (((fence(), DAT_ram_4ff4b8d0 != '\0' && (DAT_ram_4ff5d004 != (int *)0x0)) &&
             (uVar19 = (**(code **)(*DAT_ram_4ff5d004 + 4))(), uVar19 < 0xc))))))
        goto LAB_ram_4ff2581e;
        iVar13 = DAT_ram_4ff5cffc;
        if ((((DAT_ram_4ff5d000 == '\x01') && (DAT_ram_4ff5d034 != '\0')) && (uStack_a8 != 0)) &&
           ((int)(uVar7 << 0x10) < 0)) {
          iVar26 = DAT_ram_4ff5cffc + 0xc;
          FUN_ram_4ff3ec14(iVar26,0xffffffff);
          bVar2 = *(byte *)(iVar13 + 0x3bf6);
          FUN_ram_4ff3ee10(iVar26);
          iVar13 = DAT_ram_4ff5d028;
          if ((((bVar2 & 6) != 0) || (500000 < (uint)(iVar17 - DAT_ram_4ff5d02c))) ||
             ((DAT_ram_4ff5d028 == 0 ||
              ((iVar26 = (**(code **)(*piVar5 + 0x84))(piVar5,0), iVar13 != iVar26 ||
               (iVar13 = FUN_ram_4ff22ce0(&DAT_ram_4ff4b8c8,&DAT_ram_4ff5d008), iVar13 != 0))))))
          goto LAB_ram_4ff261be;
          if ((uVar11 * 1000 <= (uint)(iVar17 - DAT_ram_4ff5d030)) ||
             (uVar7 = (DAT_ram_4ff5d030 + 999 + uVar11 * 1000) - iVar17, uVar7 < 1000))
          goto LAB_ram_4ff2581e;
          uVar7 = uVar7 / 1000;
          if (100 < uVar7) {
            uVar7 = 100;
          }
        }
        else {
LAB_ram_4ff261be:
          uVar7 = 100;
        }
      }
      FUN_ram_4ff2a8b2(2,1,uVar7);
      iVar13 = FUN_ram_4ff3e824(1);
    }
    else {
LAB_ram_4ff2536c:
      DAT_ram_4ff4b8c0 = DAT_ram_4ff4b8c0 + 1;
      if ((DAT_ram_4ff6dc58 != (int *)0x0) && (DAT_ram_4ff6dc58[0x5c58] != 0)) {
        FUN_ram_4ff3abd4(DAT_ram_4ff6dc58[0x5c58],0);
      }
      uVar7 = (uint)DAT_ram_4ff4b8b8;
      fence();
      uVar11 = (uint)DAT_ram_4ff4b8ba;
      fence();
      uVar14 = FUN_ram_48025ba6();
      if (DAT_ram_4ff48b58 != '\0') {
        fence();
        fence();
        fence();
        DAT_ram_4ff489cc = 7;
        DAT_ram_4ff489d0 = DAT_ram_4ff47ea0;
        DAT_ram_4ff489d4 = 0;
        DAT_ram_4ff489d8 = 0xffffffff;
        DAT_ram_4ff489dc = 0;
        DAT_ram_4ff489e0 = uVar7 - uVar11 & 0x3f;
        DAT_ram_4ff489e4 = 0;
        DAT_ram_4ff489e8 = 0;
        DAT_ram_4ff489c4 = (DAT_ram_4ff489c4 + 1U & 0xfffffffe) + 2;
        fence();
        DAT_ram_4ff489c8 = uVar14;
      }
      FUN_ram_4ff2a8b2(2,1,100);
      iVar13 = FUN_ram_4ff3e824(1);
      uVar7 = 100;
    }
    iVar15 = FUN_ram_4ff3df3c(0,1,uVar7);
    FUN_ram_4ff2a8b2(2,0,0,1);
    iVar16 = FUN_ram_4ff3e824(1);
    iVar17 = iStack_b8;
    iVar26 = iStack_b4;
    if ((iVar15 != 0) && (iVar16 == iVar13)) {
      iVar13 = FUN_ram_48025b94();
      iVar17 = FUN_ram_4ff3e824(1);
      iVar26 = iVar13;
      if ((iVar17 == iStack_b8) &&
         (iVar17 = iStack_b8, iVar26 = iStack_b4, 19999 < (uint)(iVar13 - iStack_b4))) {
        FUN_ram_4ff2a8b2(2,1);
        FUN_ram_4ff3c2b6(1);
        FUN_ram_4ff2a8b2(2,0,0);
      }
    }
    iStack_b4 = iVar26;
    iStack_b8 = iVar17;
    FUN_ram_48130b50();
  } while( true );
}


