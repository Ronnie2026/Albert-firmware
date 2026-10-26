/* Firmware entry: 0x4810d080 */

/* Analyst-assigned name based on firmware call sites and string references. */

void recovered_can_rt_task(void)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iStack_84;
  int iStack_7c;
  int iStack_74;
  undefined1 uStack_59;
  int iStack_58;
  ushort local_54 [2];
  code *pcStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined1 uStack_44;
  
  FUN_ram_48030904(1);
  DAT_ram_4ff6a630 = FUN_ram_4ff3d9a8();
  fence();
  FUN_ram_4ff3ec14(&DAT_ram_4ff4a148,0xffffffff);
  memset(&DAT_ram_4ff4a150,0,0x80);
  DAT_ram_4ff4a1e0 = 0;
  DAT_ram_4ff4a1dc = 0;
  DAT_ram_4ff4a1d8 = 0;
  DAT_ram_4ff4a1d4 = 0;
  DAT_ram_4ff4a1d0 = 0;
  DAT_ram_4ff4a1e4 = 0;
  DAT_ram_4ff4a1e8 = 0;
  DAT_ram_4ff4a1ec = 0;
  DAT_ram_4ff4a1f0 = 0;
  DAT_ram_4ff4a1f4 = 0;
  DAT_ram_4ff4a1f8 = 0;
  DAT_ram_4ff4a200 = 0;
  DAT_ram_4ff4a1fc = 0;
  memset(&DAT_ram_4ff4a204,0,0xb0);
  FUN_ram_4ff3ee10(&DAT_ram_4ff4a148);
  iVar4 = FUN_ram_4ff3c5d4();
  iStack_74 = FUN_ram_48025b94();
  iStack_84 = FUN_ram_4ff3e824(1);
  iStack_7c = 1;
  uVar2 = 0;
  do {
    do {
      iVar5 = FUN_ram_4802d220(1);
    } while (iVar5 != 0);
    local_54[0] = 0x800;
    pcStack_50 = thunk_FUN_ram_48025b94;
    iStack_4c = FUN_ram_48025b94();
    uStack_48 = 1000;
    uStack_44 = 1;
    uStack_59 = 0;
    DAT_ram_4ff62c2c = local_54;
    DAT_ram_4ff6420c = local_54;
    FUN_ram_480927f2();
    FUN_ram_48130b50();
    iVar5 = FUN_ram_48120e26();
    if (iVar5 == 0) {
      fence();
      if (DAT_ram_4ff6df98 != '\0') {
        FUN_ram_4ff2bc94(5,0);
      }
      FUN_ram_4802ddc0();
      uVar7 = DAT_ram_4ff6dc48;
      uVar11 = (uint)DAT_ram_4ff4b8b8;
      fence();
      uVar13 = (uint)DAT_ram_4ff4b8ba;
      fence();
      uVar6 = FUN_ram_48025ba6();
      if (DAT_ram_4ff48b58 != '\0') {
        fence();
        fence();
        fence();
        DAT_ram_4ff489a4 = 2;
        DAT_ram_4ff489a8 = DAT_ram_4ff47ea0;
        DAT_ram_4ff489ac = 0;
        DAT_ram_4ff489b0 = 0xffffffff;
        DAT_ram_4ff489b4 = 0;
        DAT_ram_4ff489b8 = uVar11 - uVar13 & 0x3f;
        DAT_ram_4ff489c0 = uVar7;
        DAT_ram_4ff4899c = (DAT_ram_4ff4899c + 1U & 0xfffffffe) + 2;
        fence();
        DAT_ram_4ff489a0 = uVar6;
        DAT_ram_4ff489bc = uVar2;
      }
      FUN_ram_4802de1e();
      iVar5 = FUN_ram_4802c7b6();
      if (iVar5 != 0) {
        DAT_ram_4ff6a630 = FUN_ram_4ff3d9a8();
        fence();
        if (DAT_ram_4ff6a5ac != 0) {
          iStack_58 = 0;
          iVar5 = FUN_ram_4ff3b4aa(DAT_ram_4ff6a5ac,&iStack_58,0);
          if ((iVar5 == 1) && (iStack_58 != 0)) {
            FUN_ram_480e8070(&DAT_ram_4ff60e20);
            FUN_ram_4ff3afa2(*(undefined4 *)(iStack_58 + 0x18c),0,0,0);
          }
        }
      }
      iVar5 = DAT_ram_4ff6dc58;
      fence();
      fence();
      if ((((DAT_ram_4ff6df38 == '\0') || (DAT_ram_4ff6dc58 == 0)) ||
          (fence(), *(char *)(DAT_ram_4ff6dc58 + 0x18c6b) == '\0')) ||
         ((iVar14 = FUN_ram_4ff2bcc4(), iVar14 != 0 || (fence(), *(char *)(iVar5 + 0x18c6c) != '\0')
          ))) {
        FUN_ram_480e7d58(1,0);
        FUN_ram_4802fb02();
        iVar4 = FUN_ram_4803cdd8(1,local_54,0);
        if ((pcStack_50 == (code *)0x0) ||
           (iVar5 = (*pcStack_50)(), (uint)(iVar5 - iStack_4c) < uStack_48)) {
          FUN_ram_480e7d58(0,0);
        }
        uVar2 = uVar2 + 1 & 0xff;
        if (uVar2 < 4) {
joined_r0x4810d406:
          if (iVar4 == 0) {
            iVar5 = FUN_ram_4ff3e824(1);
            FUN_ram_4ff2a8b2(1,1,100);
            iVar4 = DAT_ram_4ff6dc58;
            if (DAT_ram_4ff6dc58 == 0) {
LAB_ram_4810d456:
              uVar7 = 0x14;
            }
            else {
              if (*(char *)(DAT_ram_4ff6dc58 + 0x2c) == '\x02') {
                uVar11 = 0;
              }
              else if (*(char *)(DAT_ram_4ff6dc58 + 0x35a4) == '\x02') {
                uVar11 = 1;
              }
              else {
                uVar11 = (uint)*(byte *)(DAT_ram_4ff6dc58 + 0x6b1c);
                if (uVar11 != 2) goto LAB_ram_4810d456;
              }
              iVar15 = uVar11 * 0x3578;
              iVar8 = iVar15 + 0x88c + DAT_ram_4ff6dc58;
              FUN_ram_4ff3ec14(iVar8,0xffffffff);
              iVar14 = iVar4 + iVar15;
              if ((((*(char *)(iVar14 + 0x895) == '\0') || (*(char *)(iVar14 + 0x896) != '\0')) ||
                  (*(char *)(iVar14 + 0x89a) != '\0')) ||
                 (((*(char *)(iVar14 + 0x89b) != '\0' || (iVar14 = FUN_ram_4ff2bcc4(), iVar14 != 0))
                  || (fence(), *(char *)(iVar4 + 0x18c6b) == '\0')))) {
LAB_ram_4810da56:
                FUN_ram_4ff3ee10(iVar8);
                goto LAB_ram_4810d456;
              }
              uVar7 = FUN_ram_4ff21a0a();
              iVar4 = FUN_ram_4ff26908(iVar15 + 0x18 + iVar4,uVar7);
              if (iVar4 == 0) goto LAB_ram_4810da56;
              FUN_ram_4ff3ee10(iVar8);
              uVar7 = 0x18;
            }
            FUN_ram_4ff3c43c(0,uVar7);
            iVar4 = FUN_ram_4ff3df3c(0,1,100);
            FUN_ram_480927f2();
            FUN_ram_4ff2a8b2(1,0,0);
            if (iVar4 == 0) {
              uVar2 = 0;
            }
            else {
              iVar4 = FUN_ram_4ff3e824(1);
              if (iVar4 != iVar5) {
                uVar2 = 0;
              }
            }
          }
        }
        else {
          iVar15 = FUN_ram_48025b94();
          iVar5 = FUN_ram_4ff3e824(1);
          iVar14 = iVar15;
          if ((iVar5 != iStack_84) ||
             (iVar5 = iStack_84, iVar14 = iStack_74, (uint)(iVar15 - iStack_74) < 20000)) {
            iStack_74 = iVar14;
            iStack_84 = iVar5;
            uVar2 = 0;
            goto joined_r0x4810d406;
          }
          DAT_ram_4ff6dd98 = DAT_ram_4ff6dd98 + 1;
          FUN_ram_4ff2a8b2(1,1,1,2);
          FUN_ram_4ff3c2b6(1);
          FUN_ram_4ff2a8b2(1,0,0,2);
          uVar2 = 0;
        }
        iVar4 = FUN_ram_4ff3c5d4();
      }
      else {
        FUN_ram_480e7d58(1);
        FUN_ram_4802fb02();
        iVar5 = FUN_ram_4ff3c5d4();
        uVar11 = uStack_48;
        if (iVar5 - iVar4 < 0) {
          uVar13 = 1000;
          uVar10 = 0;
        }
        else {
          uVar13 = 500;
          uVar10 = 0x200;
        }
        if (local_54[0] < uVar10) {
          uVar10 = local_54[0];
        }
        if (uVar13 < uStack_48) {
          uStack_48 = uVar13;
        }
        local_54[0] = local_54[0] - uVar10;
        uVar13 = FUN_ram_4803cdd8(0,local_54,&uStack_59);
        puVar1 = DAT_ram_4ff6420c;
        local_54[0] = uVar10 + local_54[0];
        uStack_48 = uVar11;
        if ((DAT_ram_4ff64213 != '\0') &&
           (((DAT_ram_4ff6420c == (ushort *)0x0 || ((char)DAT_ram_4ff6420c[8] == '\0')) ||
            (((*(code **)(DAT_ram_4ff6420c + 2) == (code *)0x0 ||
              (iVar5 = (**(code **)(DAT_ram_4ff6420c + 2))(),
              (uint)(iVar5 - *(int *)(puVar1 + 4)) < *(uint *)(puVar1 + 6))) &&
             (*DAT_ram_4ff6420c != 0)))))) {
          DAT_ram_4ff64213 = '\0';
          FUN_ram_480e72f0(&DAT_ram_4ff60e20);
        }
        FUN_ram_48032b64(local_54,&uStack_59);
        fence();
        fence();
        FUN_ram_48032fe0(0,3,0,0xffffffff,0,DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f,uVar13,
                         DAT_ram_4ff6dc48);
        FUN_ram_4ff3c5d4();
        iVar5 = FUN_ram_48031bc6(DAT_ram_4ff6dc58);
        if ((((iVar5 == 0) && (iVar5 = FUN_ram_4804160c(&DAT_ram_4ff4a2b8), iVar5 == 0)) &&
            (iVar5 = FUN_ram_48058bec(&DAT_ram_4ff60e20), iVar5 == 0)) &&
           ((DAT_ram_4ff6dfb4 == (code *)0x0 || (iVar5 = (*DAT_ram_4ff6dfb4)(), iVar5 == 0)))) {
          iVar5 = 0;
          if ((pcStack_50 == (code *)0x0) ||
             (iVar14 = (*pcStack_50)(), (uint)(iVar14 - iStack_4c) < uStack_48)) {
            FUN_ram_481046cc(&DAT_ram_4ff60e20);
            iVar14 = FUN_ram_48031bc6(DAT_ram_4ff6dc58);
            if (((iVar14 != 0) || (iVar14 = FUN_ram_4804160c(&DAT_ram_4ff4a2b8), iVar14 != 0)) ||
               (iVar14 = FUN_ram_48058bec(&DAT_ram_4ff60e20), iVar14 != 0)) goto LAB_ram_4810d6dc;
            if (DAT_ram_4ff6dfb4 != (code *)0x0) {
              iVar5 = (*DAT_ram_4ff6dfb4)();
            }
          }
        }
        else {
LAB_ram_4810d6dc:
          iVar5 = 1;
        }
        cVar12 = '\f';
        while (((pcStack_50 == (code *)0x0 ||
                (iVar14 = (*pcStack_50)(), (uint)(iVar14 - iStack_4c) < uStack_48)) &&
               (local_54[0] != 0))) {
          iVar14 = FUN_ram_4ff3c5d4();
          if (((iVar14 - iVar4 < 0) || ((iVar5 != 0 && (iVar14 - iVar4 < 0x14)))) ||
             (iStack_7c == 0)) {
            FUN_ram_480e7d58(0,0);
            iStack_7c = 1;
          }
          else {
            iStack_7c = FUN_ram_4810cf74();
            if (iStack_7c != 0) {
              iVar4 = FUN_ram_4ff3c5d4();
              iVar4 = iVar4 + 5;
              iStack_7c = 0;
            }
          }
          iVar5 = FUN_ram_480379ec();
          if ((iVar5 != 0) || (iVar5 = FUN_ram_4ff3c5d4(), iVar5 - iVar4 < 0)) break;
          cVar12 = cVar12 + -1;
          iVar5 = 0;
          if (cVar12 == '\0') break;
        }
        iVar5 = FUN_ram_480379ec();
        uVar2 = uVar2 + 1 & 0xff;
        if (uVar13 == 0) {
          if (iVar5 != 0) goto joined_r0x4810d91c;
          if (uVar2 < 4) {
LAB_ram_4810d70a:
            iVar5 = FUN_ram_4ff3c5d4();
            iVar5 = iVar4 - iVar5;
            if (iVar5 < 1) goto LAB_ram_4810d286;
            uVar7 = FUN_ram_4804160c(&DAT_ram_4ff4a2b8);
            FUN_ram_48032fe0(0,4,0,0xffffffff,0,uVar7,iVar5,DAT_ram_4ff6dc48);
            iVar15 = FUN_ram_4ff3e824(1);
            FUN_ram_4ff2a8b2(1,1,iVar5);
            iVar14 = DAT_ram_4ff6dc58;
            if (DAT_ram_4ff6dc58 == 0) {
LAB_ram_4810d78c:
              uVar7 = 0x14;
            }
            else {
              if (*(char *)(DAT_ram_4ff6dc58 + 0x2c) == '\x02') {
                uVar11 = 0;
              }
              else if (*(char *)(DAT_ram_4ff6dc58 + 0x35a4) == '\x02') {
                uVar11 = 1;
              }
              else {
                uVar11 = (uint)*(byte *)(DAT_ram_4ff6dc58 + 0x6b1c);
                if (uVar11 != 2) goto LAB_ram_4810d78c;
              }
              iVar9 = uVar11 * 0x3578;
              iVar16 = iVar9 + 0x88c + DAT_ram_4ff6dc58;
              iVar8 = DAT_ram_4ff6dc58 + iVar9 + 0x18;
              FUN_ram_4ff3ec14(iVar16,0xffffffff);
              iVar9 = iVar9 + iVar14;
              if (((((*(char *)(iVar9 + 0x895) == '\0') || (*(char *)(iVar9 + 0x896) != '\0')) ||
                   (*(char *)(iVar9 + 0x89a) != '\0')) ||
                  ((*(char *)(iVar9 + 0x89b) != '\0' || (iVar9 = FUN_ram_4ff2bcc4(), iVar9 != 0))))
                 || (fence(), *(char *)(iVar14 + 0x18c6b) == '\0')) {
                FUN_ram_4ff3ee10(iVar16);
                goto LAB_ram_4810d78c;
              }
              uVar7 = FUN_ram_4ff21a0a();
              iVar14 = FUN_ram_4ff26908(iVar8,uVar7);
              FUN_ram_4ff3ee10(iVar16);
              if (iVar14 == 0) goto LAB_ram_4810d78c;
              uVar7 = 0x18;
            }
            FUN_ram_4ff3c43c(0,uVar7);
            iVar5 = FUN_ram_4ff3df3c(0,1,iVar5);
            FUN_ram_480927f2();
            FUN_ram_4ff2a8b2(1,0,0);
            if (iVar5 == 0) {
              uVar2 = 0;
            }
            else {
              iVar5 = FUN_ram_4ff3e824(1);
              if (iVar5 != iVar15) {
                uVar2 = 0;
              }
            }
            goto LAB_ram_4810d286;
          }
          iVar5 = FUN_ram_48025b94();
          iVar14 = FUN_ram_4ff3e824(1);
          if (iStack_84 != iVar14) {
            uVar2 = 0;
            iStack_84 = iVar14;
            iStack_74 = iVar5;
            goto LAB_ram_4810d70a;
          }
          if ((uint)(iVar5 - iStack_74) < 20000) {
            uVar2 = 0;
            goto LAB_ram_4810d70a;
          }
LAB_ram_4810d96e:
          FUN_ram_481046cc(&DAT_ram_4ff60e20);
          DAT_ram_4ff6dd98 = DAT_ram_4ff6dd98 + 1;
          FUN_ram_4ff2a8b2(1,1,1,2);
          FUN_ram_4ff3c2b6(1);
          FUN_ram_4ff2a8b2(1,0,0,2);
          uVar2 = 0;
        }
        else {
          if (0x1f < uVar13) {
            DAT_ram_4ff6dd9c = DAT_ram_4ff6dd9c + 1;
          }
joined_r0x4810d91c:
          if (3 < uVar2) {
            iVar15 = FUN_ram_48025b94();
            iVar5 = FUN_ram_4ff3e824(1);
            iVar14 = iVar15;
            if ((iStack_84 == iVar5) &&
               (iVar5 = iStack_84, iVar14 = iStack_74, 19999 < (uint)(iVar15 - iStack_74)))
            goto LAB_ram_4810d96e;
            iStack_74 = iVar14;
            iStack_84 = iVar5;
            uVar2 = 0;
          }
          FUN_ram_4ff3ef0e();
        }
      }
    }
    else {
      if (iVar5 != DAT_ram_4ff6dc3c) {
        DAT_ram_4ff6dc3c = iVar5;
        DAT_ram_4ff6dc38 = FUN_ram_48025ba6();
        fence();
        DAT_ram_4ff6df34 = 0;
        fence();
        fence();
        DAT_ram_4ff6df38 = '\0';
        fence();
        fence();
        DAT_ram_4ff47ec4 = 1;
        fence();
        DAT_ram_4ff4b8c0 = DAT_ram_4ff4b8c0 + 1;
        DAT_ram_4ff6dc34 = FUN_ram_480e9e38(&DAT_ram_4ff60e20);
      }
      cVar12 = DAT_ram_4ff6dc35;
      cVar3 = cVar12;
      if (((DAT_ram_4ff6dc35 == '\0') &&
          (iVar14 = FUN_ram_48025ba6(), cVar3 = DAT_ram_4ff6dc35,
          0xf9 < (uint)(iVar14 - DAT_ram_4ff6dc38))) && (cVar3 = cVar12, DAT_ram_4ff6dc58 != 0)) {
        cVar3 = FUN_ram_48097ba6(DAT_ram_4ff6dc58,0);
      }
      DAT_ram_4ff6dc35 = cVar3;
      FUN_ram_480e7d58(1,0);
      FUN_ram_4803cdd8(1,local_54,0);
      FUN_ram_480e7d58(0,0);
      if ((DAT_ram_4ff6dc34 != '\0') && (DAT_ram_4ff6dc35 != '\0')) {
        iVar14 = DAT_ram_4ff6dc58 + 0x88c;
        iVar15 = DAT_ram_4ff6dc58 + 0xa8f4;
        do {
          FUN_ram_4ff3ec14(iVar14,0xffffffff);
          if (*(char *)(iVar14 + -0x2f2) != '\0') {
LAB_ram_4810d580:
            FUN_ram_4ff3ee10(iVar14);
            goto LAB_ram_4810d27c;
          }
          uVar7 = FUN_ram_4ff21a0a();
          iVar8 = FUN_ram_48093896(iVar14 + -0x874,uVar7);
          if ((iVar8 != 0) || (*(char *)(iVar14 + -0x2d) != '\0')) goto LAB_ram_4810d580;
          FUN_ram_4ff3ee10(iVar14);
          iVar14 = iVar14 + 0x3578;
        } while (iVar14 != iVar15);
        fence();
        fence();
        if (((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f) == 0) &&
           (iVar14 = FUN_ram_480ea12c(&DAT_ram_4ff60e20), iVar14 != 0)) {
          FUN_ram_48120e36(iVar5);
        }
      }
LAB_ram_4810d27c:
      FUN_ram_4ff3c2b6(1);
    }
LAB_ram_4810d286:
    DAT_ram_4ff6420c = (ushort *)0x0;
    DAT_ram_4ff62c2c = (ushort *)0x0;
  } while( true );
}


