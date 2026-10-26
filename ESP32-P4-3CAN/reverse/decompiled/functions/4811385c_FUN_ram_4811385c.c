/* Firmware entry: 0x4811385c */

/* WARNING: Removing unreachable block (ram,0x4811521a) */
/* WARNING: Removing unreachable block (ram,0x48115236) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4811385c(void)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int *piVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  size_t sVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 **ppuVar18;
  char *pcVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char *pcVar24;
  undefined4 *puVar25;
  byte bVar26;
  byte bVar27;
  uint *puVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  char *pcVar31;
  undefined4 *puVar32;
  int iVar33;
  byte *pbVar34;
  undefined4 *puVar35;
  undefined1 *puVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined1 *puVar39;
  undefined **ppuVar40;
  bool bVar41;
  uint *puVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  void *__s;
  bool bVar46;
  uint uVar47;
  undefined1 **ppuVar48;
  undefined *puVar49;
  uint uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar53;
  undefined8 uVar54;
  longlong lVar55;
  undefined1 *puStack_9e4;
  int iStack_9e0;
  int iStack_9dc;
  int iStack_9d8;
  int iStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  int iStack_9c8;
  int iStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  int iStack_9b8;
  int iStack_9b0;
  int iStack_9ac;
  undefined8 uStack_968;
  undefined4 local_920;
  undefined1 *apuStack_91c [3];
  int iStack_910;
  undefined4 uStack_90c;
  undefined1 uStack_908;
  undefined1 auStack_906 [70];
  int iStack_8c0;
  int iStack_8bc;
  uint uStack_8b8;
  uint uStack_8b4;
  int iStack_8b0;
  undefined4 auStack_8a8 [250];
  undefined1 *local_4c0;
  undefined1 *apuStack_4bc [5];
  int iStack_4a8;
  int iStack_4a4;
  undefined1 *puStack_4a0;
  undefined1 auStack_49c [84];
  undefined1 *apuStack_448 [5];
  uint uStack_434;
  undefined1 *puStack_42c;
  int iStack_428;
  undefined4 uStack_424;
  uint uStack_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  uint local_410;
  undefined4 uStack_40c;
  uint auStack_408 [7];
  char cStack_3ea;
  char acStack_3e9 [40];
  char cStack_3c1;
  char acStack_3c0 [64];
  char cStack_380;
  uint local_37c [37];
  byte local_2e8 [4];
  uint uStack_2e4;
  undefined4 uStack_2e0;
  undefined1 auStack_2dc [4];
  undefined1 auStack_2d8 [28];
  undefined1 auStack_2bc [13];
  undefined1 auStack_2af [17];
  undefined2 uStack_29e;
  undefined2 uStack_29c;
  undefined2 uStack_29a;
  undefined1 uStack_298;
  undefined1 auStack_293 [21];
  short sStack_27e;
  int iStack_27c;
  uint uStack_22c;
  undefined4 local_228 [16];
  undefined1 auStack_1e7 [48];
  undefined1 auStack_1b7 [41];
  undefined1 auStack_18e [302];
  undefined1 *apuStack_60 [7];
  char cStack_44;
  undefined1 *apuStack_40 [3];
  
  puVar3 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  *(undefined1 *)((int)DAT_ram_4ff6dc9c + 0x87b5e) = 0;
  fence();
  fence();
  *(undefined1 *)((int)puVar3 + 0x87b5d) = 0;
  FUN_ram_4ff3b5f0(DAT_ram_4ff6dcc4,0xffffffff);
  uVar22 = DAT_ram_4ff6dcc4;
  *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fe) = 0;
  FUN_ram_4ff3afa2(uVar22,0,0,0);
  puVar2 = DAT_ram_4ff6dc98;
  if (*(char *)(puVar3 + 0x21ed7) == '\x05') {
    iVar33 = puVar3[0x21ed1];
    if (iVar33 == 0) {
      pcVar19 = "{\"ok\":false,\"error\":\"command_transport_timeout\",\"reconcile\":true}";
      uVar22 = 0x41;
      iVar33 = 0x1f8;
    }
    else {
      uVar22 = puVar3[0x21ece];
      pcVar19 = (char *)((int)puVar3 + 0x30f5b);
    }
    FUN_ram_480b7404(iVar33,pcVar19,uVar22);
    return;
  }
  fence();
  fence();
  if (puVar3[0x141] != DAT_ram_4ff47e58) {
    *(undefined1 *)((int)puVar3 + 0x87b62) = 0;
    uVar22 = FUN_ram_48025ba6();
    puVar3[0x21ed4] = uVar22;
    puVar3[0x21ef0] = &DAT_ram_481df390;
    return;
  }
  if (*(char *)(puVar3 + 0x21ed7) == '\a') {
    iVar33 = FUN_ram_48025ba6();
    puVar3 = DAT_ram_4ff6dc9c;
    iVar9 = DAT_ram_4ff6dc9c[0x21ed1];
    puVar2[0x26] = iVar33 + 5000;
    if (iVar9 == 200) {
      if (*(char *)((int)puVar3 + 0x87b61) == '\0') {
        puStack_42c = &DAT_ram_481df390;
        iVar33 = FUN_ram_48076154((int)puVar3 + 0x30f5b,puVar3[0x21ece],0x1000,0x100,&puStack_42c);
        puVar42 = &DAT_ram_48223900;
        uVar22 = FUN_ram_48129c8a(iVar33,"management");
        puVar28 = &local_410;
        puVar21 = puVar42;
        do {
          uVar45 = puVar21[1];
          uVar47 = puVar21[2];
          uVar50 = puVar21[3];
          *puVar28 = *puVar21;
          puVar28[1] = uVar45;
          puVar28[2] = uVar47;
          puVar28[3] = uVar50;
          puVar21 = puVar21 + 4;
          puVar28 = puVar28 + 4;
        } while (puVar21 != (uint *)&DAT_ram_48223990);
        *puVar28 = _DAT_ram_48223990;
        uStack_420 = 0;
        iStack_41c = 0;
        iStack_418 = 0;
        iStack_414 = 0;
        uVar12 = FUN_ram_48129c8a(uVar22,"locked");
        uVar23 = FUN_ram_48129c8a(uVar22,"immediate");
        if (iVar33 == 0) goto LAB_ram_4811301c;
        iVar9 = FUN_ram_4807c156(iVar33,0);
        if (iVar9 != 0) {
          FUN_ram_48129c8a(iVar33,&DAT_ram_481c4274);
          iVar9 = FUN_ram_48129ca2();
          if (((iVar9 != 0) && (iVar9 = FUN_ram_48129d0c(uVar22), iVar9 != 0)) &&
             (iVar9 = FUN_ram_4807c156(uVar22,0), iVar9 != 0)) {
            uVar38 = FUN_ram_48129c8a(uVar22,"version");
            iVar9 = FUN_ram_480762ce(uVar38,1,0,&iStack_418);
            if (((iVar9 != 0) && (iStack_418 == 1)) && (iStack_414 == 0)) {
              uVar38 = FUN_ram_48129c8a(uVar22,"device_id");
              iVar9 = FUN_ram_480792e4(uVar38,DAT_ram_4ff6dcc8 + 0x63cf);
              if (iVar9 != 0) {
                uVar38 = FUN_ram_48129c8a(uVar22,"boot_id");
                iVar9 = FUN_ram_480792e4(uVar38,DAT_ram_4ff6dc9c + 0x8d);
                if (iVar9 != 0) {
                  uVar38 = FUN_ram_48129c8a(uVar22,"nonce");
                  iVar9 = FUN_ram_480792e4(uVar38,(int)puVar2 + 0xa3);
                  if (iVar9 != 0) {
                    uVar38 = FUN_ram_48129c8a(uVar22,"revision");
                    iVar9 = FUN_ram_480762ce(uVar38,0xffffffff,0,&uStack_420);
                    uVar45 = uStack_420;
                    if (((iVar9 != 0) && (uStack_420 != 0 || iStack_41c != 0)) &&
                       ((iVar9 = FUN_ram_48129cb4(uVar12), iVar9 != 0 &&
                        (iVar9 = FUN_ram_48129cb4(uVar23), iVar9 != 0)))) {
                      local_410 = uVar45;
                      iVar9 = FUN_ram_48129ca2(uVar12);
                      bVar41 = iVar9 != 0;
                      uStack_40c = CONCAT31(uStack_40c._1_3_,bVar41);
                      iVar11 = FUN_ram_48129ca2(uVar23);
                      uStack_434 = (uint)(iVar11 != 0);
                      uStack_40c._0_2_ = CONCAT11(iVar11 != 0,(char)uStack_40c);
                      uVar12 = FUN_ram_48129c8a(uVar22,"reason");
                      iVar11 = FUN_ram_480792e4(uVar12,&DAT_ram_481c787c);
                      if (iVar11 == 0) {
                        iVar11 = FUN_ram_480792e4(uVar12,"admin");
                        if (iVar11 != 0) {
                          cVar7 = '\x02';
                          uStack_40c._0_3_ = CONCAT12(2,(undefined2)uStack_40c);
                          FUN_ram_48129c8a(uVar22,"release");
                          goto LAB_ram_48113186;
                        }
                        iVar11 = FUN_ram_480792e4(uVar12,"update");
                        if (iVar11 == 0) {
                          FUN_ram_48129c8a(uVar22,"release");
                          goto LAB_ram_48113016;
                        }
                        uStack_40c._0_3_ = CONCAT12(1,(undefined2)uStack_40c);
                        uVar22 = FUN_ram_48129c8a(uVar22,"release");
                        puVar3 = local_228;
                        puVar29 = &DAT_ram_482233d8;
                        do {
                          puVar25 = puVar29;
                          puVar32 = puVar3;
                          uVar12 = puVar25[1];
                          uVar23 = puVar25[2];
                          *puVar32 = *puVar25;
                          uVar38 = puVar25[3];
                          puVar32[1] = uVar12;
                          puVar32[2] = uVar23;
                          puVar32[3] = uVar38;
                          puVar3 = puVar32 + 4;
                          puVar29 = puVar25 + 4;
                        } while (puVar25 + 4 != (undefined4 *)&UNK_ram_482235b8);
                        uVar12 = puVar25[5];
                        puVar32[4] = _UNK_ram_482235b8;
                        puVar32[5] = uVar12;
                        memset(&uStack_2e4,0,0x6c);
                        local_2e8[0] = 0x56;
                        local_2e8[1] = 0x33;
                        local_2e8[2] = 0x2e;
                        local_2e8[3] = 0x32;
                        uStack_2e0 = 0x322e3356;
                        FUN_ram_4ff454c4(auStack_2d8,"4d97f369e1a32f126b7121a66a70a53fca628dfa");
                        iVar11 = DAT_ram_4ff6dcc8;
                        uStack_29e = _DAT_ram_481c3de4;
                        uStack_29c = _DAT_ram_481c3de6;
                        uStack_29a = _DAT_ram_481c3de8;
                        uStack_298 = DAT_ram_481c3dea;
                        if ((DAT_ram_4ff6dcc8 == 0) ||
                           (sVar15 = strlen((char *)(DAT_ram_4ff6dcc8 + 0x63cf)), sVar15 != 0x10))
                        goto LAB_ram_48113016;
                        FUN_ram_4ff45158(auStack_2af,iVar11 + 0x63cf,0x11);
                        sStack_27e = FUN_ram_4802b91c(&DAT_ram_4ff5c850);
                        if ((DAT_ram_4ff6de60 == 0) ||
                           ((((iStack_27c = *(int *)(DAT_ram_4ff6de60 + 0x10), sStack_27e == 0 ||
                              (iStack_27c == 0)) ||
                             (iVar11 = FUN_ram_4807c1fe(uVar22,local_2e8,local_228), iVar11 == 0))
                            || (cStack_44 != '\x01')))) goto LAB_ram_48113016;
                        FUN_ram_4ff454c4((int)&uStack_40c + 3,auStack_1e7);
                        FUN_ram_4ff454c4(acStack_3e9,auStack_1b7);
                        FUN_ram_4ff454c4(acStack_3c0,auStack_18e);
                        cVar7 = '\x01';
                      }
                      else {
                        FUN_ram_48129c8a(uVar22,"release");
                        cVar7 = '\0';
LAB_ram_48113186:
                        iVar11 = FUN_ram_48129cc4();
                        if (iVar11 == 0) goto LAB_ram_48113016;
                      }
                      if ((((char)puVar2[0x25] != '\0') && (iVar9 == 0)) &&
                         ((*(char *)((int)puVar2 + 0xa1) == '\0' &&
                          (FUN_ram_48112c3a(), *(char *)((int)puVar2 + 0xa1) == '\0')))) {
                        puVar2[0x31] = (uint)"management_master_store";
                        goto LAB_ram_48113482;
                      }
                      if ((uVar45 != 0) && ((cVar7 != '\0') == bVar41)) {
                        cVar8 = uStack_40c._3_1_;
                        if (cVar7 == '\x01') {
                          if ((uStack_40c._3_1_ == 'P') && (cStack_3ea == '\0')) {
                            puVar28 = &local_410;
                            puVar21 = puVar28;
                            do {
                              pcVar19 = (char *)((int)puVar21 + 0x27);
                              puVar21 = (uint *)((int)puVar21 + 1);
                              if ((9 < (byte)(*pcVar19 - 0x30U)) && (5 < (byte)(*pcVar19 + 0x9fU)))
                              goto LAB_ram_48113820;
                            } while ((uint *)((int)acStack_3e9 + 1U) != puVar21);
                            if (cStack_3c1 == '\0') {
                              do {
                                puVar21 = puVar28 + 0x14;
                                puVar28 = (uint *)((int)puVar28 + 1);
                                if ((9 < (byte)((char)*puVar21 - 0x30U)) &&
                                   (5 < (byte)((char)*puVar21 + 0x9fU))) goto LAB_ram_48113820;
                              } while ((uint *)((int)acStack_3e9 + 0x19U) != puVar28);
                              if (cStack_380 == '\0') goto LAB_ram_481131c8;
                            }
                          }
                        }
                        else if ((uStack_40c._3_1_ == '\0' && acStack_3e9[0] == '\0') &&
                                 acStack_3c0[0] == '\0') {
LAB_ram_481131c8:
                          if (uVar45 < *puVar2) {
                            fence();
                            DAT_ram_4ff6df90 = (undefined1)puVar2[0x25];
                            puVar2[0x31] = (uint)"management_stale";
                            goto LAB_ram_48113482;
                          }
                          if (uVar45 == *puVar2) {
                            if ((((((uStack_40c ^ puVar2[1]) & 0xffffff) != 0) ||
                                 (iVar9 = FUN_ram_4ff4511a((int)&uStack_40c + 3,(int)puVar2 + 7,0x20
                                                          ), iVar9 != 0)) ||
                                (iVar9 = FUN_ram_4ff4511a(acStack_3e9,(int)puVar2 + 0x27,0x29),
                                iVar9 != 0)) ||
                               (iVar9 = FUN_ram_4ff4511a(acStack_3c0,puVar2 + 0x14,0x41), iVar9 != 0
                               )) {
                              fence();
                              DAT_ram_4ff6df90 = (undefined1)puVar2[0x25];
                              puVar2[0x31] = (uint)"management_revision_collision";
                              goto LAB_ram_48113482;
                            }
                            if (*(char *)((int)puVar2 + 0x95) != '\0') goto LAB_ram_481131d2;
                            fence();
                            DAT_ram_4ff6df90 = (undefined1)puVar2[0x25];
                            puVar2[0x31] = (uint)&DAT_ram_481df390;
LAB_ram_48113444:
                            FUN_ram_48112c3a();
                            FUN_ram_48129c8a(iVar33,"ota_action");
                            FUN_ram_4807d5a8();
                            goto LAB_ram_48113482;
                          }
LAB_ram_481131d2:
                          iVar9 = FUN_ram_4ff453ae(DAT_ram_4ff6dcc8 + 0x63cf,"299c586f77067609");
                          memset(local_2e8,0,0xc0);
                          memset(local_228,0,0xc0);
                          puVar21 = local_37c;
                          do {
                            uVar47 = puVar42[1];
                            uVar50 = puVar42[2];
                            *puVar21 = *puVar42;
                            uVar20 = puVar42[3];
                            puVar21[1] = uVar47;
                            puVar21[2] = uVar50;
                            puVar21[3] = uVar20;
                            puVar42 = puVar42 + 4;
                            puVar21 = puVar21 + 4;
                          } while (puVar42 != (uint *)&DAT_ram_48223990);
                          *puVar21 = _DAT_ram_48223990;
                          if (cVar7 == '\x01') {
                            if ((cVar8 == 'P') && (cStack_3ea == '\0')) {
                              puVar28 = &local_410;
                              puVar21 = puVar28;
                              do {
                                pcVar19 = (char *)((int)puVar21 + 0x27);
                                puVar21 = (uint *)((int)puVar21 + 1);
                                if ((9 < (byte)(*pcVar19 - 0x30U)) && (5 < (byte)(*pcVar19 + 0x9fU))
                                   ) goto LAB_ram_48113716;
                              } while ((uint *)((int)acStack_3e9 + 1U) != puVar21);
                              if (cStack_3c1 == '\0') {
                                do {
                                  puVar21 = puVar28 + 0x14;
                                  puVar28 = (uint *)((int)puVar28 + 1);
                                  if ((9 < (byte)((char)*puVar21 - 0x30U)) &&
                                     (5 < (byte)((char)*puVar21 + 0x9fU))) goto LAB_ram_48113716;
                                } while (puVar28 != (uint *)((int)acStack_3e9 + 0x19U));
                                if (cStack_380 == '\0') goto LAB_ram_4811325c;
                              }
                            }
LAB_ram_48113716:
                            if ((uStack_40c._1_1_ != '\0') && (iVar9 == 0)) {
                              *(undefined1 *)(puVar2 + 0x25) = 1;
                            }
                          }
                          else {
                            if ((cVar8 == '\0' && acStack_3e9[0] == '\0') && acStack_3c0[0] == '\0')
                            {
LAB_ram_4811325c:
                              memset((void *)((int)&uStack_2e0 + 3),0,0xb5);
                              uStack_2e4 = uVar45;
                              uStack_2e0 = CONCAT22(CONCAT11(uStack_2e0._3_1_,cVar7),
                                                    (ushort)bVar41 | (ushort)(uStack_434 << 8));
                              local_2e8[0] = 0x4d;
                              local_2e8[1] = 0x47;
                              local_2e8[2] = 0x4c;
                              local_2e8[3] = 0x31;
                              FUN_ram_4ff45158(auStack_2dc,(int)&uStack_40c + 3,0x20);
                              FUN_ram_4ff45158(auStack_2bc,acStack_3e9,0x29);
                              FUN_ram_4ff45158(auStack_293,acStack_3c0,0x41);
                              uStack_22c = 0xffffffff;
                              iVar11 = 0;
                              do {
                                iVar10 = 8;
                                uStack_22c = uStack_22c ^ local_2e8[iVar11];
                                do {
                                  iVar10 = iVar10 + -1;
                                  uStack_22c = uStack_22c >> 1 ^ -(uStack_22c & 1) & 0xedb88320;
                                } while (iVar10 != 0);
                                iVar11 = iVar11 + 1;
                              } while (iVar11 != 0xbc);
                              uStack_22c = ~uStack_22c;
                              if (DAT_ram_4ff6dd68 != '\0') {
                                fence();
                                fence();
                                if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) &&
                                   (DAT_ram_4ff5c5ca == '\0')) {
                                  cVar7 = (char)uStack_40c;
                                  iVar11 = FUN_ram_480357d6("p4_manage","policy1",local_2e8,0xc0);
                                  if ((iVar11 != 0) && (DAT_ram_4ff6dd68 != '\0')) {
                                    iStack_428 = 0;
                                    DAT_ram_4ff6dd64 =
                                         FUN_ram_48159fd2("p4_data","p4_manage",0,&uStack_424);
                                    if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_48113670:
                                      DAT_ram_4ff6dd64 = 0;
                                    }
                                    else if (DAT_ram_4ff6dd64 == 0) {
                                      iStack_428 = 0xc0;
                                      DAT_ram_4ff6dd64 =
                                           FUN_ram_4815a556(uStack_424,"policy1",local_228,
                                                            &iStack_428);
                                      FUN_ram_4815a050(uStack_424);
                                      if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_48113670;
                                      if (((DAT_ram_4ff6dd64 == 0) && (iStack_428 == 0xc0)) &&
                                         ((iVar11 = FUN_ram_4ff4511a(local_2e8,local_228,0xc0),
                                          iVar11 == 0 &&
                                          (iVar11 = FUN_ram_4807db28(local_228,0xc0,local_37c),
                                          iVar11 != 0)))) {
                                        uVar45 = puVar2[0x25];
                                        FUN_ram_4ff45158(puVar2,&local_410,0x91);
                                        *(undefined1 *)((int)puVar2 + 0x95) = 0;
                                        bVar4 = 0;
                                        if ((cVar7 != '\0') &&
                                           (bVar4 = (byte)uVar45, (byte)uVar45 == 0)) {
                                          bVar4 = iVar9 == 0 & uStack_40c._1_1_;
                                        }
                                        *(byte *)(puVar2 + 0x25) = bVar4;
                                        fence();
                                        DAT_ram_4ff6df90 = (undefined1)puVar2[0x25];
                                        puVar2[0x31] = (uint)&DAT_ram_481df390;
                                        *(undefined1 *)((int)puVar2 + 0xa1) = 0;
                                        *(undefined1 *)((int)puVar2 + 0xa2) = 0;
                                        puVar2[0x27] = 0;
                                        iVar9 = FUN_ram_48025ba6();
                                        puVar2[0x26] = iVar9 + 1000;
                                        goto LAB_ram_48113444;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            if ((char)uStack_40c != '\0') goto LAB_ram_48113716;
                          }
                          *(undefined1 *)((int)puVar2 + 0x95) = 1;
                          fence();
                          DAT_ram_4ff6df90 = (undefined1)puVar2[0x25];
                          FUN_ram_48112c3a();
                          puVar2[0x31] = (uint)"management_storage";
                          goto LAB_ram_48113482;
                        }
                      }
LAB_ram_48113820:
                      fence();
                      DAT_ram_4ff6df90 = (undefined1)puVar2[0x25];
                      puVar2[0x31] = (uint)"management_invalid";
LAB_ram_48113482:
                      FUN_ram_481295cc(iVar33);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_ram_48113016:
        FUN_ram_481295cc(iVar33);
LAB_ram_4811301c:
        puVar2[0x31] = (uint)"management_response_invalid";
        return;
      }
    }
    else if (iVar9 == 0) {
      iVar33 = 0x2d8;
      goto LAB_ram_48112f1e;
    }
    iVar33 = 0x2c4;
LAB_ram_48112f1e:
    puVar2[0x31] = (uint)("{\"ok\":false,\"error\":\"invalid_v13_speed_offset_pct\",\"field\":\"" +
                         iVar33 + 0x34);
    iVar33 = FUN_ram_48025ba6();
    puVar2[0x26] = iVar33 + 10000;
    return;
  }
  iVar33 = puVar3[0x21ed1];
  cVar7 = *(char *)((int)puVar3 + 0x87b61);
  if (99 < iVar33 - 200U) {
    if (iVar33 == 0x193) {
      pcVar19 = "auth_error";
LAB_ram_48113bc6:
      puVar3[0x21ef0] = pcVar19;
      if (cVar7 == '\0') {
LAB_ram_48113bd4:
        if (puVar3[0x21ece] - 1 < 0x800) {
          local_4c0 = &DAT_ram_481df390;
          iVar33 = FUN_ram_48076154((int)puVar3 + 0x30f5b,puVar3[0x21ece],0x800,0x40,&local_4c0);
          iVar9 = FUN_ram_48129c8a(iVar33,"error");
          iVar11 = FUN_ram_48129ce8();
          if ((iVar11 != 0) && (pbVar34 = *(byte **)(iVar9 + 0x10), pbVar34 != (byte *)0x0)) {
            sVar15 = strlen((char *)pbVar34);
            bVar41 = sVar15 - 1 < 0x40;
            if (sVar15 != 0) {
              pbVar30 = pbVar34;
              while (bVar41) {
                while (uVar45 = (uint)*pbVar30, (uVar45 - 0x61 & 0xff) < 0x1a) {
                  pbVar30 = pbVar30 + 1;
                  if (pbVar30 == pbVar34 + sVar15) goto LAB_ram_48113c64;
                }
                bVar46 = uVar45 - 0x30 < 10;
                pbVar30 = pbVar30 + 1;
                bVar41 = uVar45 == 0x5f || bVar46;
                if (pbVar34 + sVar15 == pbVar30) goto code_r0x48114902;
              }
            }
          }
          goto LAB_ram_48113c88;
        }
      }
    }
    else {
      if (0x193 < iVar33) {
        if ((iVar33 == 0x194) || (iVar33 == 0x1f5)) {
          pcVar19 = "server_not_adapted";
          goto LAB_ram_48113bc6;
        }
        if (cVar7 != '\0') goto LAB_ram_48113a62;
        puVar3[0x21ef0] = "server_error";
        goto LAB_ram_48113bd4;
      }
      pcVar19 = "auth_error";
      if (iVar33 == 0x191) goto LAB_ram_48113bc6;
      if (cVar7 == '\0') {
        if (iVar33 == 0) {
          puVar3[0x21ef0] = "network_error";
        }
        else {
          puVar3[0x21ef0] = "server_error";
          if (399 < iVar33) goto LAB_ram_48113bd4;
        }
      }
      else {
LAB_ram_48113a62:
        puVar3[0x21ef0] = "response_too_large";
      }
    }
    goto LAB_ram_48113a6e;
  }
  if (cVar7 != '\0') goto LAB_ram_48113a62;
  puStack_9e4 = &DAT_ram_481df390;
  uVar22 = 0x1000;
  if (*(char *)(puVar3 + 0x21ed7) == '\x03') {
    uVar22 = 26000;
  }
  iVar33 = FUN_ram_48076154((int)puVar3 + 0x30f5b,puVar3[0x21ece],puVar3[0x146],uVar22,&puStack_9e4)
  ;
  cVar7 = *(char *)(puVar3 + 0x21ed7);
  if ((cVar7 == '\0') || (cVar7 == '\x06')) {
    pcVar19 = "sync";
    bVar41 = true;
    pcVar24 = (char *)0x0;
  }
  else if (cVar7 == '\x01') {
    pcVar19 = "backup";
    pcVar24 = "settings";
    bVar41 = false;
  }
  else if (cVar7 == '\x02') {
    pcVar19 = "download";
    pcVar24 = "manifest";
    bVar41 = false;
  }
  else if (cVar7 == '\x03') {
    pcVar19 = "download";
    pcVar24 = "settings";
    bVar41 = false;
  }
  else {
    pcVar19 = "download";
    pcVar24 = "records";
    bVar41 = false;
  }
  iStack_9e0 = 1;
  iStack_9dc = 0;
  if (iVar33 == 0) goto LAB_ram_481141fa;
  iVar9 = FUN_ram_48079324(iVar33,DAT_ram_4ff6dcc8 + 0x63cf,pcVar19,pcVar24,0);
  if (iVar9 != 0) {
    if (!bVar41) {
LAB_ram_48113ccc:
      puVar3[0x21ef0] = &DAT_ram_481df390;
      puVar3[0x145] = 0;
      iVar9 = FUN_ram_48025ba6();
      if (*(char *)(DAT_ram_4ff6dcc8 + 0x28a) == '\0') {
        puVar14 = (undefined1 *)0xea60;
      }
      else {
        local_4c0 = (undefined1 *)0x0;
        apuStack_4bc[0] = (undefined1 *)0x0;
        uVar22 = FUN_ram_48129c8a(iVar33,"poll_after_ms");
        iVar11 = FUN_ram_480762ce(uVar22,300000,0,&local_4c0);
        puVar14 = (undefined1 *)0x1388;
        if ((iVar11 != 0) &&
           ((apuStack_4bc[0] != (undefined1 *)(uint)(local_4c0 == (undefined1 *)0x0) ||
            ((undefined1 *)0x3e6 < local_4c0 + -1)))) {
          puVar14 = local_4c0;
        }
      }
      cVar7 = *(char *)(puVar3 + 0x21ed7);
      puVar3[0x21ed4] = puVar14 + iVar9;
      iVar11 = DAT_ram_4ff6dcc8;
      iVar9 = DAT_ram_4ff6dc94;
      if (cVar7 == '\x06') {
        uVar22 = puVar3[0x21ed1];
        *(undefined1 **)(DAT_ram_4ff6dcc8 + 0x6410) = &DAT_ram_481df390;
        *(undefined4 *)(iVar11 + 0x63f8) = uVar22;
        *(char **)(iVar11 + 0x640c) = "success";
        goto LAB_ram_481141b4;
      }
      if (cVar7 != '\0') {
        if (cVar7 == '\x01') {
          puVar29 = &DAT_ram_48223370;
          ppuVar18 = &local_4c0;
          do {
            puVar39 = (undefined1 *)puVar29[1];
            puVar14 = (undefined1 *)puVar29[2];
            puVar17 = (undefined1 *)puVar29[3];
            puVar36 = (undefined1 *)puVar29[4];
            *ppuVar18 = (undefined1 *)*puVar29;
            ppuVar18[1] = puVar39;
            ppuVar18[2] = puVar14;
            ppuVar18[3] = puVar17;
            ppuVar18[4] = puVar36;
            puVar29 = puVar29 + 5;
            ppuVar18 = ppuVar18 + 5;
          } while (puVar29 != (undefined4 *)&DAT_ram_482233d4);
          *ppuVar18 = _DAT_ram_482233d4;
          uStack_968._0_4_ = (undefined1 *)0x0;
          uStack_968._4_4_ = 0;
          local_4c0 = (undefined1 *)CONCAT31(local_4c0._1_3_,1);
          memset(&local_920,0,0x41);
          iVar9 = FUN_ram_48079822(iVar33,"settings_epoch","device_revision",apuStack_4bc);
          if (iVar9 != 0) {
            uVar22 = FUN_ram_48129c8a(iVar33,"backup_revision");
            iVar9 = FUN_ram_480796de(uVar22,0xffffffff,0x1fffff,&uStack_968);
            if (iVar9 != 0) {
              uVar22 = FUN_ram_48129c8a(iVar33,"content_sha256");
              iVar9 = FUN_ram_480a3d76(uVar22,&local_920);
              if ((iVar9 != 0) &&
                 (iVar9 = FUN_ram_4ff453ae(&local_920,(int)puVar3 + 0x857e2), iVar9 == 0)) {
                pbVar34 = (byte *)(puVar3 + 0x21a4d);
                iVar10 = FUN_ram_48075bb4(apuStack_4bc,pbVar34);
                iVar11 = uStack_968._4_4_;
                iVar9 = (int)(undefined1 *)uStack_968;
                if (iVar10 != 0) {
                  iStack_4a8 = (int)(undefined1 *)uStack_968;
                  iStack_4a4 = uStack_968._4_4_;
                  puVar14 = (undefined1 *)FUN_ram_4819b728(0);
                  puStack_4a0 = puVar14;
                  FUN_ram_4ff454c4(auStack_49c,&local_920);
                  FUN_ram_4ff45158(puVar3 + 0x162,&local_4c0,0x65);
                  puVar3[0x216c2] = iVar9;
                  puVar3[0x216c3] = iVar11;
                  bVar4 = 0;
                  pbVar30 = pbVar34;
                  do {
                    bVar27 = *pbVar30;
                    pbVar30 = pbVar30 + 1;
                    bVar4 = bVar4 | bVar27;
                  } while (pbVar30 != (byte *)(puVar3 + 0x21a51));
                  if (((((bVar4 != 0) && (uVar45 = puVar3[0x21a51], uVar45 != 0)) &&
                       (iVar9 != 0 || iVar11 != 0)) &&
                      ((uVar45 == DAT_ram_4ff5bd40 &&
                       (iVar10 = FUN_ram_4ff4511a(pbVar34,&DAT_ram_4ff5bd30,0x10), iVar10 == 0))))
                     && ((char)DAT_ram_4ff5bd64 == '\0')) {
                    DAT_ram_4ff5bd44 = puVar3[0x21a4d];
                    DAT_ram_4ff5bd48 = puVar3[0x21a4e];
                    DAT_ram_4ff5bd4c = puVar3[0x21a4f];
                    DAT_ram_4ff5bd50 = puVar3[0x21a50];
                    DAT_ram_4ff5bd54 = uVar45;
                    DAT_ram_4ff5bd58 = iVar9;
                    DAT_ram_4ff5bd5c = iVar11;
                    DAT_ram_4ff5bd60 = puVar14;
                  }
                  FUN_ram_480cf4ac();
                  uVar22 = FUN_ram_48025ba6();
                  puVar3[0x21ed4] = uVar22;
                  goto LAB_ram_481141b4;
                }
              }
            }
          }
          puVar3[0x21ef0] = "backup_ack_mismatch";
          goto LAB_ram_481141b4;
        }
        if (cVar7 == '\x02') {
          memset(&local_4c0,0,0x41);
          iVar11 = FUN_ram_48129c8a(iVar33,"scopes");
          iVar10 = FUN_ram_48079324(iVar33,DAT_ram_4ff6dcc8 + 0x63cf,"download","manifest",
                                    &DAT_ram_481c3ddc);
          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
          if (iVar10 != 0) {
            iVar10 = FUN_ram_48129c8a(iVar33,"manifest_revision");
            iVar44 = FUN_ram_48129cd6();
            uVar12 = DAT_ram_481f4cbc;
            uVar22 = DAT_ram_481f4cb8;
            uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
            if (iVar44 != 0) {
              uVar45 = *(uint *)(iVar10 + 0x1c);
              uVar23 = *(undefined4 *)(iVar10 + 0x18);
              iVar10 = __unorddf2(uVar23,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
              uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
              if (iVar10 == 0) {
                iVar10 = __gtdf2(uVar23,uVar45 & 0x7fffffff,uVar22,uVar12);
                uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                if (iVar10 < 1) {
                  iVar10 = __ltdf2(uVar23,uVar45,0,0);
                  uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                  if (-1 < iVar10) {
                    iVar10 = __gtdf2(uVar23,uVar45,DAT_ram_481f4d20,DAT_ram_481f4d24);
                    uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                    if (iVar10 < 1) {
                      uVar54 = FUN_ram_48196062(uVar23,uVar45);
                      iVar10 = __nedf2(uVar23,uVar45,(int)uVar54,(int)((ulonglong)uVar54 >> 0x20));
                      uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                      if (iVar10 == 0) {
                        lVar55 = FUN_ram_48195bce(uVar23,uVar45);
                        uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                        if (lVar55 != 0) {
                          iVar10 = FUN_ram_48129c8a(iVar33,"expires_at_unix");
                          iVar44 = FUN_ram_48129cd6();
                          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                          if (iVar44 != 0) {
                            uVar45 = *(uint *)(iVar10 + 0x1c);
                            uVar22 = *(undefined4 *)(iVar10 + 0x18);
                            iVar10 = __unorddf2(uVar22,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,
                                                DAT_ram_481f4cbc);
                            uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                            if (iVar10 == 0) {
                              iVar10 = __gtdf2(uVar22,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,
                                               DAT_ram_481f4cbc);
                              uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                              if (iVar10 < 1) {
                                iVar10 = __ltdf2(uVar22,uVar45,0,0);
                                uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                if (-1 < iVar10) {
                                  iVar10 = __gtdf2(uVar22,uVar45,DAT_ram_481f4ce0,DAT_ram_481f4ce4);
                                  uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                  if (iVar10 < 1) {
                                    uVar54 = FUN_ram_48196062(uVar22,uVar45);
                                    iVar10 = __nedf2(uVar22,uVar45,(int)uVar54,
                                                     (int)((ulonglong)uVar54 >> 0x20));
                                    uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                    if (iVar10 == 0) {
                                      uVar51 = FUN_ram_48195bce(uVar22,uVar45);
                                      uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                      if (uVar51 != 0) {
                                        uVar52 = FUN_ram_4819b728(0);
                                        uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                        if (uVar52 < uVar51) {
                                          lVar53 = FUN_ram_4819b728(0);
                                          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968
                                                          );
                                          if (uVar51 <= lVar53 + 300U) {
                                            uVar22 = FUN_ram_48129c8a(iVar33,"restore_nonce");
                                            iVar10 = FUN_ram_480a3d76(uVar22,&local_4c0);
                                            uVar1 = CONCAT44(uStack_968._4_4_,
                                                             (undefined1 *)uStack_968);
                                            if (iVar10 != 0) {
                                              iVar10 = FUN_ram_48075cde(&local_4c0);
                                              uVar1 = CONCAT44(uStack_968._4_4_,
                                                               (undefined1 *)uStack_968);
                                              if (iVar10 != 0) {
                                                iVar10 = FUN_ram_48129cfa(iVar11);
                                                uVar1 = CONCAT44(uStack_968._4_4_,
                                                                 (undefined1 *)uStack_968);
                                                if (iVar10 != 0) {
                                                  bVar4 = 0;
                                                  for (puVar29 = *(undefined4 **)(iVar11 + 8);
                                                      puVar29 != (undefined4 *)0x0;
                                                      puVar29 = (undefined4 *)*puVar29) {
                                                    iVar11 = FUN_ram_480792e4(puVar29,"settings");
                                                    bVar27 = 1;
                                                    if (iVar11 == 0) {
                                                      iVar11 = FUN_ram_480792e4(puVar29,"records");
                                                      uVar1 = CONCAT44(uStack_968._4_4_,
                                                                       (undefined1 *)uStack_968);
                                                      if (iVar11 == 0) goto LAB_ram_481148b8;
                                                      bVar27 = 2;
                                                    }
                                                    bVar26 = bVar27 & bVar4;
                                                    bVar4 = bVar4 | bVar27;
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (bVar26 != 0) goto LAB_ram_481148b8;
                                                  }
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (*(byte *)(iVar9 + 0x11a41) == bVar4) {
                                                    pbVar34 = (byte *)(iVar9 + 0x11a44);
                                                    iVar11 = FUN_ram_4ff453ae(pbVar34,"latest");
                                                    if (iVar11 != 0) {
                                                      uVar45 = 0;
                                                      iVar11 = 0;
                                                      while( true ) {
                                                        lVar53 = CONCAT44(iVar11,uVar45);
                                                        uVar37 = uVar45 * 4;
                                                        uVar50 = uVar45 >> 0x1e;
                                                        uVar47 = uVar45 * 5;
                                                        uVar20 = *pbVar34 - 0x30;
                                                        uVar45 = uVar45 * 10 + uVar20;
                                                        if (*pbVar34 == 0) break;
                                                        iVar11 = (uint)(uVar45 < uVar20) +
                                                                 (((uint)(uVar47 < uVar37) +
                                                                  (iVar11 << 2 | uVar50) + iVar11) *
                                                                  2 | uVar47 >> 0x1f);
                                                        pbVar34 = pbVar34 + 1;
                                                      }
                                                      uVar1 = CONCAT44(uStack_968._4_4_,
                                                                       (undefined1 *)uStack_968);
                                                      if (lVar55 != lVar53) goto LAB_ram_481148b8;
                                                    }
                                                    uVar22 = FUN_ram_48129c8a(iVar33,"settings");
                                                    uVar12 = FUN_ram_48129c8a(iVar33,"records");
                                                    if ((bVar4 & 1) == 0) {
LAB_ram_481162b6:
                                                      if ((bVar4 & 2) == 0) {
LAB_ram_48116456:
                                                        FUN_ram_4ff454c4(iVar9 + 0x11a5c,&local_4c0)
                                                        ;
                                                        pbVar34 = (byte *)(iVar9 + 0x11ba8);
                                                        *(undefined1 *)(iVar9 + 0x11a40) = 2;
                                                        *(longlong *)(iVar9 + 0x11b60) = lVar55;
                                                        *(int *)(iVar9 + 0x11b78) = (int)uVar51;
                                                        FUN_ram_48132f46(pbVar34,0x10);
                                                        bVar4 = 0;
                                                        do {
                                                          bVar27 = *pbVar34;
                                                          pbVar34 = pbVar34 + 1;
                                                          bVar4 = bVar4 | bVar27;
                                                        } while (pbVar34 !=
                                                                 (byte *)(iVar9 + 0x11bb8));
                                                        if (bVar4 == 0) {
                                                          *(undefined1 *)(iVar9 + 0x11ba8) = 1;
                                                        }
                                                        *(undefined4 *)(iVar9 + 0x11bb8) = 1;
                                                        iVar9 = FUN_ram_480b66f6();
                                                        goto LAB_ram_48114cbe;
                                                      }
                                                      iStack_9c8 = 0;
                                                      iStack_9c4 = 0;
                                                      iStack_9b0 = 0;
                                                      iStack_9ac = 0;
                                                      uStack_968._0_4_ = (undefined1 *)0x0;
                                                      uStack_968._4_4_ = 0;
                                                      memset(&local_920,0,0x19);
                                                      uVar22 = FUN_ram_48129c8a(uVar12,
                                                  "checkpoint_revision");
                                                  iVar11 = FUN_ram_480796de(uVar22,0xffffffff,
                                                                            0x1fffff,iVar9 + 0x11b70
                                                                           );
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 != 0) {
                                                    uVar22 = FUN_ram_48129c8a(uVar12,"schema");
                                                    iVar11 = FUN_ram_480762ce(uVar22,4,0,&iStack_9c8
                                                                             );
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (((iVar11 != 0) &&
                                                        (uVar1 = CONCAT44(uStack_968._4_4_,
                                                                          (undefined1 *)uStack_968),
                                                        iStack_9c8 == 4)) &&
                                                       (uVar1 = CONCAT44(uStack_968._4_4_,
                                                                         (undefined1 *)uStack_968),
                                                       iStack_9c4 == 0)) {
                                                      iVar11 = FUN_ram_48129c8a(uVar12,
                                                  "dataset_epoch");
                                                  iVar10 = FUN_ram_48129ce8();
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if ((iVar10 != 0) &&
                                                     (pcVar19 = *(char **)(iVar11 + 0x10),
                                                     uVar1 = CONCAT44(uStack_968._4_4_,
                                                                      (undefined1 *)uStack_968),
                                                     pcVar19 != (char *)0x0)) {
                                                    sVar15 = strlen(pcVar19);
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (sVar15 < 0x19) {
                                                      uVar22 = FUN_ram_4ff45158(&local_920,pcVar19,
                                                                                sVar15 + 1);
                                                      iVar11 = FUN_ram_4807927c(uVar22,0x18);
                                                      uVar1 = CONCAT44(uStack_968._4_4_,
                                                                       (undefined1 *)uStack_968);
                                                      if (iVar11 != 0) {
                                                        uVar22 = FUN_ram_48129c8a(uVar12,
                                                  "wipe_epoch");
                                                  iVar11 = FUN_ram_48079a64(uVar22,&uStack_968);
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 != 0) {
                                                    uVar22 = FUN_ram_48129c8a(uVar12,"revision");
                                                    iVar11 = FUN_ram_480796de(uVar22,0xffffffff,0,
                                                                              &iStack_9b0);
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (iVar11 != 0) {
                                                      uVar22 = FUN_ram_48129c8a(uVar12,
                                                  "snapshot_sha256");
                                                  iVar11 = FUN_ram_480a3d76(uVar22,iVar9 + 0x11ade);
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 != 0) {
                                                    iVar11 = FUN_ram_4807927c(iVar9 + 0x11ade,0x40);
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (iVar11 != 0) {
                                                      pcVar19 = (char *)(iVar9 + 0x12660);
                                                      puVar29 = &local_920;
                                                      do {
                                                        pcVar24 = pcVar19 + 1;
                                                        cVar7 = FUN_ram_48079e88(*(undefined1 *)
                                                                                  puVar29);
                                                        cVar8 = FUN_ram_48079e88(*(undefined1 *)
                                                                                  ((int)puVar29 + 1)
                                                                                );
                                                        *pcVar19 = cVar7 * '\x10' + cVar8;
                                                        pcVar19 = pcVar24;
                                                        puVar29 = (undefined4 *)((int)puVar29 + 2);
                                                      } while (pcVar24 != (char *)(iVar9 + 0x1266c))
                                                      ;
                                                      *(undefined1 **)(iVar9 + 0x12678) =
                                                           (undefined1 *)uStack_968;
                                                      *(int *)(iVar9 + 0x1267c) = uStack_968._4_4_;
                                                      *(int *)(iVar9 + 0x12160) = iStack_9b0;
                                                      goto LAB_ram_48116456;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar23 = FUN_ram_48129c8a(uVar22,
                                                  "backup_revision");
                                                  iVar11 = FUN_ram_480796de(uVar23,0xffffffff,
                                                                            0x1fffff,iVar9 + 0x11b68
                                                                           );
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 != 0) {
                                                    iVar11 = FUN_ram_48079822(uVar22,"epoch",
                                                                              "device_revision",
                                                                              iVar9 + 0x11b94);
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (iVar11 != 0) {
                                                      uVar22 = FUN_ram_48129c8a(uVar22,
                                                  "content_sha256");
                                                  iVar11 = FUN_ram_480a3d76(uVar22,iVar9 + 0x11a9d);
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 != 0) {
                                                    iVar11 = FUN_ram_4807927c(iVar9 + 0x11a9d,0x40);
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (iVar11 != 0) goto LAB_ram_481162b6;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (cVar7 == '\x03') {
          local_920 = (undefined1 *)0x0;
          apuStack_91c[0] = (undefined1 *)0x0;
          apuStack_91c[1] = (undefined1 *)0x0;
          apuStack_91c[2] = (undefined1 *)0x0;
          iStack_910 = 0;
          memset(&local_4c0,0,0x41);
          uStack_968 = FUN_ram_48078fbc((int)DAT_ram_4ff6dc9c + 0x30f5b,DAT_ram_4ff6dc9c[0x21ece],
                                        "payload");
          uVar1 = uStack_968 & 0xffffffff;
          if (((int)uStack_968 != 0) && (uVar1 = uStack_968, *(char *)(uStack_968 >> 0x20) != '{'))
          {
            uVar1 = 0;
          }
          uVar22 = (undefined4)(uVar1 >> 0x20);
          iVar11 = (int)uVar1;
          iVar10 = FUN_ram_4807952e(iVar33,"settings");
          uVar1 = uStack_968;
          if (iVar10 != 0) {
            iVar10 = FUN_ram_48129c8a(iVar33,"backup_revision");
            iVar44 = FUN_ram_48129cd6();
            uVar1 = uStack_968;
            if (iVar44 != 0) {
              uVar45 = *(uint *)(iVar10 + 0x1c);
              uVar12 = *(undefined4 *)(iVar10 + 0x18);
              iVar10 = __unorddf2(uVar12,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
              uVar1 = uStack_968;
              if (iVar10 == 0) {
                iVar10 = __gtdf2(uVar12,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
                uVar1 = uStack_968;
                if (iVar10 < 1) {
                  iVar10 = __ltdf2(uVar12,uVar45,0,0);
                  uVar1 = uStack_968;
                  if (-1 < iVar10) {
                    iVar10 = __gtdf2(uVar12,uVar45,DAT_ram_481f4d20,DAT_ram_481f4d24);
                    uVar1 = uStack_968;
                    if (iVar10 < 1) {
                      uVar54 = FUN_ram_48196062(uVar12,uVar45);
                      iVar10 = __nedf2(uVar12,uVar45,(int)uVar54,(int)((ulonglong)uVar54 >> 0x20));
                      uVar1 = uStack_968;
                      if (iVar10 == 0) {
                        lVar55 = FUN_ram_48195bce(uVar12,uVar45);
                        uVar1 = uStack_968;
                        if (((lVar55 != 0) && (*(int *)(iVar9 + 0x11b68) == (int)lVar55)) &&
                           (*(int *)(iVar9 + 0x11b6c) == (int)((ulonglong)lVar55 >> 0x20))) {
                          iVar10 = FUN_ram_48079822(iVar33,"settings_epoch","device_revision",
                                                    &local_920);
                          uVar1 = uStack_968;
                          if ((iVar10 != 0) && (iStack_910 == *(int *)(iVar9 + 0x11ba4))) {
                            iVar10 = FUN_ram_4ff4511a(&local_920,iVar9 + 0x11b94,0x10);
                            uVar1 = uStack_968;
                            if (iVar10 == 0) {
                              iVar10 = FUN_ram_48129c8a(iVar33,"content_sha256");
                              iVar44 = FUN_ram_48129ce8();
                              uVar1 = uStack_968;
                              if ((iVar44 != 0) &&
                                 (pcVar19 = *(char **)(iVar10 + 0x10), pcVar19 != (char *)0x0)) {
                                sVar15 = strlen(pcVar19);
                                uVar1 = uStack_968;
                                if (sVar15 < 0x41) {
                                  FUN_ram_4ff45158(&local_4c0,pcVar19,sVar15 + 1);
                                  iVar10 = FUN_ram_4ff453ae(&local_4c0,iVar9 + 0x11a9d);
                                  uVar1 = uStack_968;
                                  if ((iVar10 == 0) && (iVar11 - 1U < 0x30000)) {
                                    iVar10 = FUN_ram_48034886(uVar22,iVar11,iVar9 + 0x11a9d);
                                    uVar1 = uStack_968;
                                    if (iVar10 != 0) {
                                      uStack_968._0_4_ = &DAT_ram_481df390;
                                      iVar10 = FUN_ram_480a710e(uVar22,iVar11,
                                                                DAT_ram_4ff6dcac + 0x6be8,
                                                                &uStack_968);
                                      uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                      if (iVar10 != 0) {
                                        iVar11 = FUN_ram_480b621c(&DAT_ram_4ff5bc58,iVar9 + 0x11b94,
                                                                  uVar22,iVar11);
                                        uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                        if (iVar11 != 0) {
                                          uVar6 = 3;
                                          if ((*(byte *)(iVar9 + 0x11a41) & 2) == 0) {
                                            uVar6 = 4;
                                          }
                                          *(undefined1 *)(iVar9 + 0x11a40) = uVar6;
                                          iVar9 = FUN_ram_480b66f6();
LAB_ram_48114cbe:
                                          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968
                                                          );
                                          if (iVar9 != 0) {
                                            uVar22 = FUN_ram_48025ba6();
                                            puVar3[0x21ed4] = uVar22;
                                            goto LAB_ram_481141b4;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          memset(&local_4c0,0,0x41);
          local_920 = (undefined1 *)0x0;
          apuStack_91c[0] = (undefined1 *)0x0;
          apuStack_91c[1] = (undefined1 *)0x0;
          apuStack_91c[2] = (undefined1 *)0x0;
          iStack_910 = 0;
          uStack_90c = 0;
          uStack_908 = 0;
          iStack_9b0 = 0;
          iStack_9ac = 0;
          uStack_968._0_4_ = (undefined1 *)0x0;
          uStack_968._4_4_ = 0;
          iVar11 = FUN_ram_48129c8a(iVar33,"snapshot_hex");
          iStack_9c8 = 0;
          iVar10 = FUN_ram_4807952e(iVar33,"records");
          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
          if (iVar10 != 0) {
            iVar10 = FUN_ram_48129c8a(iVar33,"schema");
            iVar44 = FUN_ram_48129cd6();
            uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
            if (iVar44 != 0) {
              uVar45 = *(uint *)(iVar10 + 0x1c);
              uVar22 = *(undefined4 *)(iVar10 + 0x18);
              iVar10 = __unorddf2(uVar22,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
              uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
              if (iVar10 == 0) {
                iVar10 = __gtdf2(uVar22,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
                uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                if (iVar10 < 1) {
                  iVar10 = __ltdf2(uVar22,uVar45,0,0);
                  uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                  if (-1 < iVar10) {
                    iVar10 = __gtdf2(uVar22,uVar45,DAT_ram_481f4d58,DAT_ram_481f4d5c);
                    uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                    if (iVar10 < 1) {
                      uVar54 = FUN_ram_48196062(uVar22,uVar45);
                      iVar10 = __nedf2(uVar22,uVar45,(int)uVar54,(int)((ulonglong)uVar54 >> 0x20));
                      uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                      if (iVar10 == 0) {
                        lVar55 = FUN_ram_48195bce(uVar22,uVar45);
                        uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                        if (lVar55 == 4) {
                          iVar10 = FUN_ram_48129c8a(iVar33,"checkpoint_revision");
                          iVar44 = FUN_ram_48129cd6();
                          uVar12 = DAT_ram_481f4cbc;
                          uVar22 = DAT_ram_481f4cb8;
                          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                          if (iVar44 != 0) {
                            uVar45 = *(uint *)(iVar10 + 0x1c);
                            uVar23 = *(undefined4 *)(iVar10 + 0x18);
                            iVar10 = __unorddf2(uVar23,uVar45 & 0x7fffffff,DAT_ram_481f4cb8,
                                                DAT_ram_481f4cbc);
                            uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                            if (iVar10 == 0) {
                              iVar10 = __gtdf2(uVar23,uVar45 & 0x7fffffff,uVar22,uVar12);
                              uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                              if (iVar10 < 1) {
                                iVar10 = __ltdf2(uVar23,uVar45,0,0);
                                uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                if (-1 < iVar10) {
                                  iVar10 = __gtdf2(uVar23,uVar45,DAT_ram_481f4d20,DAT_ram_481f4d24);
                                  uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                  if (iVar10 < 1) {
                                    uVar54 = FUN_ram_48196062(uVar23,uVar45);
                                    iVar10 = __nedf2(uVar23,uVar45,(int)uVar54,
                                                     (int)((ulonglong)uVar54 >> 0x20));
                                    uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                    if (iVar10 == 0) {
                                      lVar55 = FUN_ram_48195bce(uVar23,uVar45);
                                      uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                      if (((lVar55 != 0) &&
                                          (uVar1 = CONCAT44(uStack_968._4_4_,
                                                            (undefined1 *)uStack_968),
                                          *(int *)(iVar9 + 0x11b70) == (int)lVar55)) &&
                                         (uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968
                                                          ),
                                         *(int *)(iVar9 + 0x11b74) ==
                                         (int)((ulonglong)lVar55 >> 0x20))) {
                                        uVar22 = FUN_ram_48129c8a(iVar33,"snapshot_sha256");
                                        iVar10 = FUN_ram_480a3d76(uVar22,&local_4c0);
                                        uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968);
                                        if (iVar10 != 0) {
                                          iVar10 = FUN_ram_4ff453ae(&local_4c0,iVar9 + 0x11ade);
                                          uVar1 = CONCAT44(uStack_968._4_4_,(undefined1 *)uStack_968
                                                          );
                                          if (iVar10 == 0) {
                                            iVar10 = FUN_ram_48129ce8(iVar11);
                                            uVar22 = 0;
                                            if (iVar10 != 0) {
                                              uVar22 = *(undefined4 *)(iVar11 + 0x10);
                                            }
                                            iVar10 = FUN_ram_4807927c(uVar22,0x966);
                                            uVar1 = CONCAT44(uStack_968._4_4_,
                                                             (undefined1 *)uStack_968);
                                            if (iVar10 != 0) {
                                              pcVar24 = (char *)(DAT_ram_4ff6dc9c + 0x216c6);
                                              iVar10 = 0;
                                              pcVar19 = pcVar24;
                                              do {
                                                pcVar31 = (char *)(*(int *)(iVar11 + 0x10) + iVar10)
                                                ;
                                                cVar7 = *pcVar31;
                                                bVar4 = cVar7 - 0x30;
                                                if (9 < bVar4) {
                                                  if ((byte)(cVar7 + 0x9fU) < 6) {
                                                    bVar4 = cVar7 + 0xa9;
                                                  }
                                                  else if ((byte)(cVar7 + 0xbfU) < 6) {
                                                    bVar4 = cVar7 - 0x37;
                                                  }
                                                  else {
                                                    bVar4 = 0xff;
                                                  }
                                                }
                                                cVar7 = pcVar31[1];
                                                bVar27 = cVar7 - 0x30;
                                                if (9 < bVar27) {
                                                  if ((byte)(cVar7 + 0x9fU) < 6) {
                                                    bVar27 = cVar7 + 0xa9;
                                                  }
                                                  else if ((byte)(cVar7 + 0xbfU) < 6) {
                                                    bVar27 = cVar7 - 0x37;
                                                  }
                                                  else {
                                                    bVar27 = 0xff;
                                                  }
                                                }
                                                *pcVar19 = bVar27 + bVar4 * '\x10';
                                                iVar10 = iVar10 + 2;
                                                pcVar19 = pcVar19 + 1;
                                              } while (iVar10 != 0x966);
                                              iVar11 = FUN_ram_48034886(pcVar24,0x4b3,
                                                                        iVar9 + 0x11ade);
                                              puVar29 = DAT_ram_4ff6dc9c;
                                              uVar1 = CONCAT44(uStack_968._4_4_,
                                                               (undefined1 *)uStack_968);
                                              if (iVar11 != 0) {
                                                iVar11 = FUN_ram_48071b5e(DAT_ram_4ff6dc9c + 0x216c6
                                                                          ,0x4b3,DAT_ram_4ff6dc9c +
                                                                                 0x21d6a,&iStack_9c8
                                                                         );
                                                uVar1 = CONCAT44(uStack_968._4_4_,
                                                                 (undefined1 *)uStack_968);
                                                if (iVar11 != 0) {
                                                  FUN_ram_4802e57c(puVar29 + 0x21eaa,&local_920,0xc)
                                                  ;
                                                  uVar22 = FUN_ram_48129c8a(iVar33,"dataset_epoch");
                                                  iVar11 = FUN_ram_480792e4(uVar22,&local_920);
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 != 0) {
                                                    uVar22 = FUN_ram_48129c8a(iVar33,"wipe_epoch");
                                                    iVar11 = FUN_ram_48079a64(uVar22,&iStack_9b0);
                                                    uVar1 = CONCAT44(uStack_968._4_4_,
                                                                     (undefined1 *)uStack_968);
                                                    if (((iVar11 != 0) &&
                                                        (uVar1 = CONCAT44(uStack_968._4_4_,
                                                                          (undefined1 *)uStack_968),
                                                        *(int *)(iVar9 + 0x12678) == iStack_9b0)) &&
                                                       (uVar1 = CONCAT44(uStack_968._4_4_,
                                                                         (undefined1 *)uStack_968),
                                                       *(int *)(iVar9 + 0x1267c) == iStack_9ac)) {
                                                      uVar22 = FUN_ram_48129c8a(iVar33,"revision");
                                                      iVar11 = FUN_ram_480796de(uVar22,0xffffffff,0,
                                                                                &uStack_968);
                                                      puVar29 = DAT_ram_4ff6dc9c;
                                                      uVar1 = CONCAT44(uStack_968._4_4_,
                                                                       (undefined1 *)uStack_968);
                                                      if (((iVar11 != 0) &&
                                                          (uVar1 = CONCAT44(uStack_968._4_4_,
                                                                            (undefined1 *)uStack_968
                                                                           ),
                                                          (undefined1 *)uStack_968 ==
                                                          *(undefined1 **)(iVar9 + 0x12160))) &&
                                                         (uVar1 = CONCAT44(uStack_968._4_4_,
                                                                           (undefined1 *)uStack_968)
                                                         , uStack_968._4_4_ == 0)) {
                                                        iVar11 = FUN_ram_4ff4511a(DAT_ram_4ff6dc9c +
                                                                                  0x21eaa,iVar9 + 
                                                  0x12660,0xc);
                                                  uVar1 = CONCAT44(uStack_968._4_4_,
                                                                   (undefined1 *)uStack_968);
                                                  if (iVar11 == 0) {
                                                    FUN_ram_4ff45158(iVar9 + 0x12160,
                                                                     puVar29 + 0x21d6a,0x524);
                                                    *(undefined1 *)(iVar9 + 0x11a40) = 4;
                                                    *(undefined1 *)(iVar9 + 0x11a43) = 1;
                                                    iVar9 = FUN_ram_480b66f6();
                                                    goto LAB_ram_48114cbe;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_ram_481148b8:
        uStack_968 = uVar1;
        FUN_ram_480b69b4("restore_download_invalid_or_store_failed");
        goto LAB_ram_481141b4;
      }
      cVar7 = *(char *)((int)puVar3 + 0x87b62);
      if (*(char *)((int)puVar3 + 0x502) != '\0') {
        puVar29 = &DAT_ram_48223370;
        puVar32 = &local_920;
        do {
          uVar38 = puVar29[1];
          uVar22 = puVar29[2];
          uVar12 = puVar29[3];
          uVar23 = puVar29[4];
          *puVar32 = *puVar29;
          puVar32[1] = uVar38;
          puVar32[2] = uVar22;
          puVar32[3] = uVar12;
          puVar32[4] = uVar23;
          puVar29 = puVar29 + 5;
          puVar32 = puVar32 + 5;
        } while (puVar29 != (undefined4 *)&DAT_ram_482233d4);
        puVar29 = &DAT_ram_48223b40;
        ppuVar48 = &local_4c0;
        *puVar32 = _DAT_ram_482233d4;
        ppuVar18 = ppuVar48;
        do {
          puVar17 = (undefined1 *)puVar29[1];
          puVar14 = (undefined1 *)puVar29[2];
          *ppuVar18 = (undefined1 *)*puVar29;
          ppuVar18[1] = puVar17;
          puVar17 = (undefined1 *)puVar29[3];
          puVar36 = (undefined1 *)puVar29[4];
          ppuVar18[2] = puVar14;
          ppuVar18[3] = puVar17;
          ppuVar18[4] = puVar36;
          puVar29 = puVar29 + 5;
          ppuVar18 = ppuVar18 + 5;
        } while (puVar29 != &DAT_ram_48223bb8);
        uStack_968._0_4_ = (undefined1 *)0x0;
        uStack_968._4_4_ = 0;
        iVar9 = FUN_ram_48129c8a(iVar33,"user_backup");
        uVar22 = FUN_ram_48129c8a(iVar33,"settings_backup");
        iVar11 = FUN_ram_48079b88(uVar22,&local_920);
        if (iVar11 != 0) {
          uVar22 = FUN_ram_48129c8a(iVar33,"records_backup");
          iVar11 = FUN_ram_480a3dd2(uVar22,ppuVar48,0);
          if (iVar11 != 0) {
            uVar22 = FUN_ram_48129c8a(iVar9,"available");
            iVar11 = FUN_ram_48129d0c(iVar9);
            if ((iVar11 != 0) && (iVar11 = FUN_ram_48129cb4(uVar22), iVar11 != 0)) {
              iVar11 = FUN_ram_48129ca2(uVar22);
              if (iVar11 == 0) {
                if ((*(int **)(iVar9 + 8) == (int *)0x0) || (**(int **)(iVar9 + 8) == 0)) {
LAB_ram_48114dd8:
                  iVar9 = FUN_ram_48129c8a(iVar33,"account_data");
                  if (iVar9 == 0) {
                    bVar41 = false;
                    bVar46 = false;
LAB_ram_48114e4a:
                    FUN_ram_4ff45158(puVar3 + 0x162,&local_920,0x65);
                    puVar29 = puVar3 + 0x1b8;
                    do {
                      puVar14 = ppuVar48[1];
                      puVar17 = ppuVar48[2];
                      puVar36 = ppuVar48[3];
                      puVar39 = ppuVar48[4];
                      *puVar29 = *ppuVar48;
                      puVar29[1] = puVar14;
                      puVar29[2] = puVar17;
                      puVar29[3] = puVar36;
                      puVar29[4] = puVar39;
                      ppuVar48 = ppuVar48 + 5;
                      puVar29 = puVar29 + 5;
                    } while (ppuVar48 != apuStack_448);
                    *(bool *)(puVar3 + 0x21ed9) = bVar46;
                    *(bool *)((int)puVar3 + 0x87b65) = bVar41;
                    uVar22 = FUN_ram_48129c8a(iVar33,"account_data");
                    uVar22 = FUN_ram_48129c8a(uVar22,"state");
                    iVar9 = FUN_ram_480792e4(uVar22,"bound");
                    pcVar19 = "bound";
                    if (iVar9 == 0) {
                      iVar9 = FUN_ram_480792e4(uVar22,"unbound");
                      pcVar19 = "unbound";
                      if (iVar9 == 0) {
                        pcVar19 = "unknown";
                      }
                    }
                    puVar3[0x14] = pcVar19;
                    *(undefined1 *)((int)puVar3 + 0x87b62) = 1;
                    FUN_ram_480cf4ac();
                    goto LAB_ram_48113d2e;
                  }
                  iVar11 = FUN_ram_48129d0c();
                  if (iVar11 != 0) {
                    iVar11 = FUN_ram_48129c8a(iVar9,"settings_pending");
                    iVar9 = FUN_ram_48129c8a(iVar9,"records_pending");
                    if (((iVar11 == 0) || (iVar10 = FUN_ram_48129cb4(iVar11), iVar10 != 0)) &&
                       ((iVar9 == 0 || (iVar10 = FUN_ram_48129cb4(iVar9), iVar10 != 0)))) {
                      iVar11 = FUN_ram_48129ca2(iVar11);
                      bVar46 = iVar11 != 0;
                      iVar9 = FUN_ram_48129ca2(iVar9);
                      bVar41 = iVar9 != 0;
                      goto LAB_ram_48114e4a;
                    }
                  }
                }
              }
              else {
                uVar22 = FUN_ram_48129c8a(iVar9,"manifest_revision");
                iVar9 = FUN_ram_480796de(uVar22,0xffffffff,0x1fffff,&uStack_968);
                if (iVar9 != 0) goto LAB_ram_48114dd8;
              }
            }
          }
        }
        *(undefined1 *)((int)puVar3 + 0x87b62) = 0;
        puVar3[0x21ef0] = "invalid_backup_metadata";
        goto LAB_ram_481141b4;
      }
LAB_ram_48113d2e:
      puVar29 = &DAT_ram_48223b40;
      uVar6 = FUN_ram_480327c0(iVar33);
      iVar9 = DAT_ram_4ff6dc88;
      *(undefined1 *)((int)puVar3 + 0x4d) = uVar6;
      if (((iVar9 == 0) || (*(char *)(iVar9 + 0x6c594) == '\0')) ||
         (iVar11 = FUN_ram_480327c0(iVar33), iVar9 = DAT_ram_4ff6dc88, iVar11 == 0)) {
        *(undefined1 *)((int)puVar3 + 0x4a) = 0;
        *(undefined1 *)((int)puVar3 + 0x25) = 0;
      }
      else {
        *(undefined1 *)((int)puVar3 + 0x4a) = 1;
        *(undefined1 *)((int)puVar3 + 0x25) = 1;
        if ((iVar9 != 0) && (*(char *)(iVar9 + 0x6c594) != '\0')) {
          iVar11 = FUN_ram_48129c8a(iVar33,"view_acks");
          iVar10 = FUN_ram_48129cfa();
          if ((iVar10 != 0) && (piVar5 = *(int **)(iVar11 + 8), piVar5 != (int *)0x0)) {
            do {
              memset(&local_920,0,0x41);
              memset(&local_4c0,0,0x41);
              iVar11 = FUN_ram_48129c8a(piVar5,"path");
              iVar10 = FUN_ram_48129ce8();
              if (((iVar10 != 0) && (pcVar19 = *(char **)(iVar11 + 0x10), pcVar19 != (char *)0x0))
                 && (sVar15 = strlen(pcVar19), sVar15 < 0x41)) {
                FUN_ram_4ff45158(&local_920,pcVar19,sVar15 + 1);
                iVar11 = FUN_ram_48129c8a(piVar5,"content_sha256");
                iVar10 = FUN_ram_48129ce8();
                if (((iVar10 != 0) && (pcVar19 = *(char **)(iVar11 + 0x10), pcVar19 != (char *)0x0))
                   && (sVar15 = strlen(pcVar19), sVar15 < 0x41)) {
                  FUN_ram_4ff45158(&local_4c0,pcVar19,sVar15 + 1);
                  iVar11 = iVar9 + 0x14001;
                  ppuVar40 = &PTR_s__config_ram_481cac88_0xc_ram_482226cc;
                  do {
                    iVar10 = FUN_ram_4ff453ae(&local_920,*ppuVar40);
                    if (((iVar10 == 0) && (*(int *)(iVar11 + 0x43) != 0)) &&
                       (iVar10 = FUN_ram_4ff453ae(&local_4c0,iVar11), iVar10 == 0)) {
                      *(undefined1 *)(iVar11 + 0x47) = 1;
                    }
                    iVar11 = iVar11 + 0x804c;
                    ppuVar40 = ppuVar40 + 1;
                  } while (iVar9 + 0x74391 != iVar11);
                }
              }
              piVar5 = (int *)*piVar5;
            } while (piVar5 != (int *)0x0);
          }
          iVar11 = FUN_ram_48129c8a(iVar33,"view_resync");
          iVar10 = FUN_ram_48129cfa();
          if (iVar10 != 0) {
            for (piVar5 = *(int **)(iVar11 + 8); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
              iVar11 = FUN_ram_48129ce8(piVar5);
              if ((iVar11 != 0) && (iVar11 = piVar5[4], iVar11 != 0)) {
                ppuVar40 = &PTR_s__config_ram_481cac88_0xc_ram_482226cc;
                puVar14 = (undefined1 *)(iVar9 + 0x14048);
                do {
                  puVar16 = *ppuVar40;
                  ppuVar40 = ppuVar40 + 1;
                  iVar10 = FUN_ram_4ff453ae(iVar11,puVar16);
                  if (iVar10 == 0) {
                    *puVar14 = 0;
                  }
                  puVar14 = puVar14 + 0x804c;
                } while (ppuVar40 != (undefined **)&DAT_ram_482226fc);
              }
            }
          }
        }
      }
      *(undefined1 *)(puVar3 + 0x13) = 1;
      iVar11 = puVar3[0xf];
      iVar9 = puVar3[7];
      if (*(char *)(puVar3 + 0x12) == '\0') {
        if ((cVar7 == '\0') && (*(char *)((int)puVar3 + 0x87b62) != '\0')) goto LAB_ram_48113dc8;
LAB_ram_48113dda:
        if (iVar11 != iVar9) {
LAB_ram_48114a2e:
          uVar22 = FUN_ram_48025ba6();
          puVar3[0x21ed4] = uVar22;
        }
      }
      else {
        *(undefined1 *)(puVar3 + 9) = 1;
        puVar3[5] = puVar3[0x10];
        puVar3[6] = puVar3[0x11];
        *puVar3 = puVar3[10];
        puVar3[1] = puVar3[0xb];
        puVar3[2] = puVar3[0xc];
        puVar3[3] = puVar3[0xd];
        puVar3[4] = puVar3[0xe];
        if (iVar11 != iVar9) {
          if ((cVar7 == '\0') && (*(char *)((int)puVar3 + 0x87b62) != '\0')) goto LAB_ram_48113dc8;
          goto LAB_ram_48114a2e;
        }
        puVar3[8] = iVar11;
        if ((cVar7 == '\0') && (*(char *)((int)puVar3 + 0x87b62) != '\0')) {
LAB_ram_48113dc8:
          iVar9 = iVar9 + 1;
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          if ((iVar9 == puVar3[8]) && (iVar9 = iVar9 + 1, iVar9 == 0)) {
            iVar9 = 1;
            puVar3[7] = 1;
          }
          else {
            puVar3[7] = iVar9;
          }
          goto LAB_ram_48113dda;
        }
      }
      puVar32 = DAT_ram_4ff6dc9c;
      iVar9 = DAT_ram_4ff6dc94;
      memset(&iStack_9b0,0,0x41);
      memset(&uStack_968,0,0x41);
      uVar22 = FUN_ram_48129c8a(iVar33,"receipt_ack");
      if ((*(char *)(iVar9 + 0x9618) == '\0') || (*(char *)(iVar9 + 0x9619) == '\0')) {
LAB_ram_48113e30:
        bVar41 = false;
        uVar45 = 0;
      }
      else {
        uVar12 = FUN_ram_48129c8a(uVar22,"command_id");
        iVar10 = iVar9 + 0x961a;
        iVar11 = FUN_ram_480792e4(uVar12,iVar10);
        if (iVar11 == 0) goto LAB_ram_48113e30;
        uVar22 = FUN_ram_48129c8a(uVar22,"command_sha256");
        uVar45 = FUN_ram_480792e4(uVar22,iVar9 + 0x965b);
        if (uVar45 == 0) goto LAB_ram_48113e30;
        FUN_ram_4ff454c4(&iStack_9b0,iVar10);
        FUN_ram_4ff454c4(&uStack_968,iVar9 + 0x965b);
        bVar41 = false;
        if (*(int *)(iVar9 + 0x116a0) == 200) {
          sVar15 = strlen((char *)(iVar9 + 0x969c));
          if (sVar15 < 0x101) {
            local_4c0 = &DAT_ram_481df390;
            iVar11 = FUN_ram_48076154((char *)(iVar9 + 0x969c),sVar15,0x100,0x20,&local_4c0);
            FUN_ram_48129c8a(iVar11,&DAT_ram_481c4274);
            iVar44 = FUN_ram_48129ca2();
            if (iVar44 != 0) {
              FUN_ram_48129c8a(iVar11,"rebooting");
              iVar44 = FUN_ram_48129ca2();
              bVar41 = iVar44 != 0;
            }
            if (iVar11 != 0) {
              FUN_ram_481295cc(iVar11);
            }
          }
        }
        *(undefined1 *)(iVar9 + 0x9618) = 0;
        memset(&local_4c0,0,0x20);
        pcVar19 = (char *)(iVar9 + 0x965c);
        ppuVar18 = &local_4c0;
        do {
          cVar7 = pcVar19[-1];
          bVar4 = cVar7 - 0x30;
          if (9 < bVar4) {
            if ((byte)(cVar7 + 0x9fU) < 6) {
              bVar4 = cVar7 + 0xa9;
            }
            else if ((byte)(cVar7 + 0xbfU) < 6) {
              bVar4 = cVar7 - 0x37;
            }
            else {
              bVar4 = 0xff;
            }
          }
          cVar7 = *pcVar19;
          bVar27 = cVar7 - 0x30;
          if (9 < bVar27) {
            if ((byte)(cVar7 + 0x9fU) < 6) {
              bVar27 = cVar7 + 0xa9;
            }
            else if ((byte)(cVar7 + 0xbfU) < 6) {
              bVar27 = cVar7 - 0x37;
            }
            else {
              bVar27 = 0xff;
            }
          }
          *(byte *)ppuVar18 = bVar27 + bVar4 * '\x10';
          ppuVar18 = (undefined1 **)((int)ppuVar18 + 1);
          pcVar19 = pcVar19 + 2;
        } while (ppuVar18 != &puStack_4a0);
        for (puVar25 = puVar32 + 0x21a9f; puVar25 != puVar32 + 0x21b7f; puVar25 = puVar25 + 0x1c) {
          if (*(char *)(puVar25 + 0x1b) != '\0') {
            iVar11 = FUN_ram_4ff453ae(puVar25,iVar10);
            if ((iVar11 == 0) &&
               (iVar11 = FUN_ram_4ff4511a((int)puVar25 + 0x41,&local_4c0,0x20), iVar11 == 0)) {
              *(undefined1 *)((int)puVar25 + 0x6d) = 0;
              break;
            }
          }
        }
      }
      uVar22 = FUN_ram_48129c8a(iVar33,"resolution_ack");
      iStack_9c8 = 0;
      iStack_9c4 = 0;
      uStack_9c0 = 0;
      uStack_9bc = 0;
      iStack_9b8 = 0;
      if (*(char *)(iVar9 + 0x116b8) != '\0') {
        iVar11 = FUN_ram_48129c8a(uVar22,"event_id");
        iVar10 = FUN_ram_48129ce8();
        if (((iVar10 != 0) && (*(int *)(iVar11 + 0x10) != 0)) &&
           (iVar11 = FUN_ram_4ff453ae(*(int *)(iVar11 + 0x10),iVar9 + 0x116fa), iVar11 == 0)) {
          uVar12 = FUN_ram_48129c8a(uVar22,"command_id");
          iVar10 = iVar9 + 0x116b9;
          iVar11 = FUN_ram_480792e4(uVar12,iVar10);
          if (iVar11 != 0) {
            uVar12 = FUN_ram_48129c8a(uVar22,"action");
            iVar11 = FUN_ram_480792e4(uVar12,iVar9 + 0x1173b);
            if (((iVar11 != 0) &&
                (iVar11 = FUN_ram_48079822(uVar22,"settings_epoch","settings_revision",&iStack_9c8),
                iVar11 != 0)) &&
               (uVar47 = FUN_ram_48075bb4(&iStack_9c8,iVar9 + 0x1174c), uVar47 != 0)) {
              iVar11 = FUN_ram_48129c8a(uVar22,"error");
              if (iVar11 == 0) {
                iVar11 = FUN_ram_4ff453ae(iVar10,"cloud-backup");
                if ((iVar11 == 0) &&
                   (iVar11 = FUN_ram_4ff453ae(iVar9 + 0x1173b,"keep_device"), iVar11 == 0)) {
                  FUN_ram_4ff45158(iVar9 + 0x117c8,iVar9 + 0x11760,0x65);
                  puVar35 = (undefined4 *)(iVar9 + 0x11830);
                  puVar25 = (undefined4 *)(iVar9 + 0x118a8);
                  do {
                    uVar38 = puVar35[1];
                    uVar22 = puVar35[2];
                    uVar12 = puVar35[3];
                    uVar23 = puVar35[4];
                    *puVar25 = *puVar35;
                    puVar25[1] = uVar38;
                    puVar25[2] = uVar22;
                    puVar25[3] = uVar12;
                    puVar25[4] = uVar23;
                    puVar35 = puVar35 + 5;
                    puVar25 = puVar25 + 5;
                  } while (puVar35 != (undefined4 *)(iVar9 + 0x118a8));
                  *(undefined4 *)(iVar9 + 0x11930) = *(undefined4 *)(iVar9 + 0x11920);
                  *(undefined4 *)(iVar9 + 0x11934) = *(undefined4 *)(iVar9 + 0x11924);
                  *(undefined4 *)(iVar9 + 0x11938) = *(undefined4 *)(iVar9 + 0x11928);
                  *(undefined4 *)(iVar9 + 0x1193c) = *(undefined4 *)(iVar9 + 0x1192c);
                }
                __s = (void *)(iVar9 + 0x9398);
                do {
                  if ((*(char *)((int)__s + 0x4c) != '\0') &&
                     (iVar11 = FUN_ram_4ff453ae(__s,iVar10), iVar11 == 0)) {
                    memset(__s,0,0x4d);
                  }
                  __s = (void *)((int)__s + 0x50);
                } while (__s != (void *)(iVar9 + 0x9618));
              }
              else {
                iVar11 = FUN_ram_480792e4(iVar11,"resolution_base_changed");
                if (iVar11 == 0) goto LAB_ram_48113e64;
                puVar32[0x21ef0] = "resolution_base_changed";
              }
              *(undefined1 *)(iVar9 + 0x116b8) = 0;
              uVar45 = uVar47;
            }
          }
        }
      }
LAB_ram_48113e64:
      uVar22 = FUN_ram_48129c8a(iVar33,"restore_ack");
      iStack_9d8 = 0;
      iStack_9d4 = 0;
      uStack_9d0 = 0;
      uStack_9cc = 0;
      if (*(char *)(iVar9 + 0x11a40) == '\x06') {
        uVar12 = FUN_ram_48129c8a(uVar22,"restore_nonce");
        iVar11 = FUN_ram_480792e4(uVar12,iVar9 + 0x11a5c);
        if (iVar11 != 0) {
          uVar12 = FUN_ram_48129c8a(uVar22,"result");
          cVar7 = *(char *)(DAT_ram_4ff6dc94 + 0x11a42);
          if (cVar7 == *(char *)(DAT_ram_4ff6dc94 + 0x11a41)) {
            if (cVar7 == '\0') goto LAB_ram_48115c60;
            pcVar19 = "applied";
          }
          else if (cVar7 == '\0') {
LAB_ram_48115c60:
            pcVar19 = "failed";
          }
          else {
            pcVar19 = "partial";
          }
          uVar47 = FUN_ram_480792e4(uVar12,pcVar19);
          if (uVar47 != 0) {
            iVar11 = FUN_ram_48129c8a(uVar22,"manifest_revision");
            iVar10 = FUN_ram_48129cd6();
            if (iVar10 != 0) {
              uVar50 = *(uint *)(iVar11 + 0x1c);
              uVar12 = *(undefined4 *)(iVar11 + 0x18);
              iVar11 = __unorddf2(uVar12,uVar50 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
              if ((((iVar11 == 0) &&
                   (iVar11 = __gtdf2(uVar12,uVar50 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
                   iVar11 < 1)) && (iVar11 = __ltdf2(uVar12,uVar50,0,0), -1 < iVar11)) &&
                 (iVar11 = __gtdf2(uVar12,uVar50,DAT_ram_481f4d20,DAT_ram_481f4d24), iVar11 < 1)) {
                uVar54 = FUN_ram_48196062(uVar12,uVar50);
                iVar11 = __nedf2(uVar12,uVar50,(int)uVar54,(int)((ulonglong)uVar54 >> 0x20));
                if (iVar11 == 0) {
                  lVar55 = FUN_ram_48195bce(uVar12,uVar50);
                  if (((lVar55 != 0) && (*(int *)(iVar9 + 0x11b60) == (int)lVar55)) &&
                     (*(int *)(iVar9 + 0x11b64) == (int)((ulonglong)lVar55 >> 0x20))) {
                    bVar4 = *(byte *)(iVar9 + 0x11a42);
                    if ((bVar4 & 1) == 0) {
                      if ((bVar4 & 2) == 0) {
LAB_ram_48115728:
                        cVar7 = *(char *)(DAT_ram_4ff6dc94 + 0x11a42);
                        if (cVar7 == *(char *)(DAT_ram_4ff6dc94 + 0x11a41)) {
                          if (cVar7 == '\0') {
LAB_ram_481166e6:
                            pcVar19 = "failed";
                          }
                          else {
                            pcVar19 = "applied";
                          }
                        }
                        else {
                          if (cVar7 == '\0') goto LAB_ram_481166e6;
                          pcVar19 = "partial";
                        }
                        FUN_ram_4ff454c4(iVar9 + 0x12688,pcVar19);
                        FUN_ram_4ff454c4(iVar9 + 0x12694,iVar9 + 0x11b1f);
                        *(byte *)(iVar9 + 0x1272f) = bVar4;
                        *(undefined1 *)(iVar9 + 0x1272e) = *(undefined1 *)(iVar9 + 0x11a41);
                        memset(&local_4c0,0,0x460);
                        memset(&local_920,0,0x460);
                        memset((void *)(iVar9 + 0x11a40),0,0xc48);
                        *(undefined4 *)(iVar9 + 0x11c3c) = 1;
                        *(undefined4 *)(iVar9 + 0x11b7c) = 0xffffffff;
                        ppuVar18 = &local_4c0;
                        puVar25 = (undefined4 *)(iVar9 + 0x11cc8);
                        do {
                          puVar14 = ppuVar18[1];
                          puVar17 = ppuVar18[2];
                          puVar36 = ppuVar18[3];
                          *puVar25 = *ppuVar18;
                          puVar25[1] = puVar14;
                          puVar25[2] = puVar17;
                          puVar25[3] = puVar36;
                          ppuVar18 = ppuVar18 + 4;
                          puVar25 = puVar25 + 4;
                        } while (ppuVar18 != apuStack_60);
                        *(undefined4 *)(iVar9 + 0x12164) = 1;
                        ppuVar18 = (undefined1 **)&local_920;
                        puVar25 = (undefined4 *)(iVar9 + 0x121f0);
                        do {
                          puVar14 = ppuVar18[1];
                          puVar17 = ppuVar18[2];
                          puVar36 = ppuVar18[3];
                          *puVar25 = *ppuVar18;
                          puVar25[1] = puVar14;
                          puVar25[2] = puVar17;
                          puVar25[3] = puVar36;
                          ppuVar18 = ppuVar18 + 4;
                          puVar25 = puVar25 + 4;
                        } while (ppuVar18 != &local_4c0);
                        *(undefined2 *)((int)puVar32 + 0x87b62) = 0;
                        uVar45 = uVar47;
                      }
                      else {
LAB_ram_48115682:
                        uVar22 = FUN_ram_48129c8a(uVar22,"records_base_revision");
                        iVar11 = FUN_ram_480762ce(uVar22,0xffffffff,0x1fffff,&uStack_9d0);
                        if (iVar11 != 0) {
                          bVar4 = *(byte *)(iVar9 + 0x11a42);
                          if ((bVar4 & 2) == 0) goto LAB_ram_48116068;
                          iVar11 = FUN_ram_480b0f96(iVar9 + 0x12660,*(undefined4 *)(iVar9 + 0x11c20)
                                                    ,*(undefined4 *)(iVar9 + 0x11c24));
                          if (iVar11 != 0) {
                            if ((*(byte *)(iVar9 + 0x11a42) & 1) != 0) goto LAB_ram_48116070;
                            goto LAB_ram_481156d6;
                          }
                          if (DAT_ram_4ff6dcdc == 0) {
                            pcVar19 = "outbox_resource_wait";
                          }
                          else {
                            pcVar19 = *(char **)(DAT_ram_4ff6dcdc + 0x41114);
                          }
                          puVar32[0x21ef0] = pcVar19;
                        }
                      }
                    }
                    else {
                      uVar12 = FUN_ram_48129c8a(uVar22,"settings_base_revision");
                      iVar11 = FUN_ram_480762ce(uVar12,0xffffffff,0x1fffff,&iStack_9d8);
                      if (iVar11 != 0) {
                        bVar4 = *(byte *)(iVar9 + 0x11a42);
                        if ((bVar4 & 2) != 0) goto LAB_ram_48115682;
LAB_ram_48116068:
                        if ((bVar4 & 1) != 0) {
LAB_ram_48116070:
                          memset((void *)(iVar9 + 0x117c8),0,0x65);
                          *(undefined1 *)(iVar9 + 0x117c8) = 1;
                          *(undefined4 *)(iVar9 + 0x117cc) = *(undefined4 *)(iVar9 + 0x11ba8);
                          *(undefined4 *)(iVar9 + 0x117d0) = *(undefined4 *)(iVar9 + 0x11bac);
                          *(undefined4 *)(iVar9 + 0x117dc) = *(undefined4 *)(iVar9 + 0x11bb8);
                          *(undefined4 *)(iVar9 + 0x117d4) = *(undefined4 *)(iVar9 + 0x11bb0);
                          *(undefined4 *)(iVar9 + 0x117d8) = *(undefined4 *)(iVar9 + 0x11bb4);
                          FUN_ram_4ff454c4(iVar9 + 0x117ec,iVar9 + 0x11a9d);
                          *(int *)(iVar9 + 0x11930) = iStack_9d8;
                          *(int *)(iVar9 + 0x11934) = iStack_9d4;
LAB_ram_481156d6:
                          bVar4 = *(byte *)(iVar9 + 0x11a42);
                          if ((bVar4 & 2) != 0) {
                            puVar35 = (undefined4 *)(iVar9 + 0x11bc0);
                            puVar25 = (undefined4 *)(iVar9 + 0x118a8);
                            do {
                              uVar38 = puVar35[1];
                              uVar22 = puVar35[2];
                              uVar12 = puVar35[3];
                              uVar23 = puVar35[4];
                              *puVar25 = *puVar35;
                              puVar25[1] = uVar38;
                              puVar25[2] = uVar22;
                              puVar25[3] = uVar12;
                              puVar25[4] = uVar23;
                              puVar35 = puVar35 + 5;
                              puVar25 = puVar25 + 5;
                            } while (puVar35 != (undefined4 *)(iVar9 + 0x11c38));
                            *(undefined4 *)(iVar9 + 0x11938) = uStack_9d0;
                            *(undefined4 *)(iVar9 + 0x1193c) = uStack_9cc;
                          }
                        }
                        goto LAB_ram_48115728;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar22 = FUN_ram_48129c8a(iVar33,"records_reset_ack");
      local_4c0 = (undefined1 *)0x0;
      apuStack_4bc[0] = (undefined1 *)0x0;
      if ((*(char *)(iVar9 + 72000) == '\0') || (*(char *)(iVar9 + 0x11941) == '\0')) {
LAB_ram_48113eca:
        uVar22 = FUN_ram_48129c8a(iVar33,"epoch_transition_ack");
        if (*(char *)(iVar9 + 0x119c8) != '\0') {
LAB_ram_48113ee4:
          uVar47 = DAT_ram_4ff5bd40;
          pbVar34 = (byte *)&DAT_ram_4ff5bd30;
          bVar4 = 0;
          do {
            bVar27 = *pbVar34;
            pbVar34 = pbVar34 + 1;
            bVar4 = bVar4 | bVar27;
          } while ((uint *)pbVar34 != &DAT_ram_4ff5bd40);
          if ((bVar4 != 0) && (DAT_ram_4ff5bd40 != 0)) {
            iVar11 = FUN_ram_4ff4511a(&DAT_ram_4ff5bd30,iVar9 + 0x11a2c,0x10);
            if ((iVar11 == 0) && (*(uint *)(iVar9 + 0x11a3c) <= uVar47)) {
              iVar11 = FUN_ram_48129c8a(uVar22,"event_id");
              iVar10 = FUN_ram_48129ce8();
              if ((((iVar10 != 0) && (*(int *)(iVar11 + 0x10) != 0)) &&
                  (iVar11 = FUN_ram_4ff453ae(*(int *)(iVar11 + 0x10),iVar9 + 0x119c9), iVar11 == 0))
                 && (((iVar11 = FUN_ram_48079822(uVar22,"settings_epoch","settings_revision",
                                                 &iStack_9c8), iVar11 != 0 &&
                      (iStack_9b8 == *(int *)(iVar9 + 0x11a3c))) &&
                     (iVar11 = FUN_ram_4ff4511a(&iStack_9c8,iVar9 + 0x11a2c,0x10), iVar11 == 0)))) {
                uVar22 = FUN_ram_48129c8a(uVar22,"backup_base_revision");
                iVar11 = FUN_ram_480796de(uVar22,0xffffffff,0x1fffff,&iStack_9d8);
                if (((iVar11 != 0) && (*(int *)(iVar9 + 0x11a10) == iStack_9d8)) &&
                   ((*(int *)(iVar9 + 0x11a14) == iStack_9d4 &&
                    (iVar11 = FUN_ram_480b610a(), iVar11 != 0)))) {
                  FUN_ram_4ff45158(iVar9 + 0x117c8,puVar32 + 0x148,0x65);
                  *(undefined1 *)(iVar9 + 0x119c8) = 0;
                  *(undefined4 *)(iVar9 + 0x11930) = *(undefined4 *)(iVar9 + 0x11a10);
                  *(undefined4 *)(iVar9 + 0x11934) = *(undefined4 *)(iVar9 + 0x11a14);
                  goto LAB_ram_48113f9c;
                }
              }
            }
          }
        }
        if (uVar45 != 0) goto LAB_ram_48113f9c;
      }
      else {
        uVar12 = FUN_ram_48129c8a(uVar22,"event_id");
        iVar11 = FUN_ram_480792e4(uVar12,iVar9 + 0x11942);
        if (iVar11 == 0) goto LAB_ram_48113eca;
        uVar12 = FUN_ram_48129c8a(uVar22,"dataset_epoch");
        iVar11 = FUN_ram_480792e4(uVar12,iVar9 + 0x1199c);
        if (iVar11 == 0) goto LAB_ram_48113eca;
        uVar12 = FUN_ram_48129c8a(uVar22,"wipe_epoch");
        iVar11 = FUN_ram_48079a64(uVar12,&local_4c0);
        puVar17 = apuStack_4bc[0];
        puVar14 = local_4c0;
        if (((iVar11 == 0) || (*(undefined1 **)(iVar9 + 0x119c0) != local_4c0)) ||
           ((undefined1 *)*(uint *)(iVar9 + 0x119c4) != apuStack_4bc[0])) goto LAB_ram_48113eca;
        uVar22 = FUN_ram_48129c8a(uVar22,"checkpoint_base_revision");
        iVar11 = FUN_ram_480762ce(uVar22,0xffffffff,0x1fffff,&uStack_9d0);
        if (((iVar11 == 0) || (iVar11 = FUN_ram_480cf35c(), iVar11 == 0)) ||
           ((iVar11 = FUN_ram_4ff453ae((int)puVar32 + 0x669,iVar9 + 0x1199c), iVar11 != 0 ||
            ((puVar32[0x1b2] != *(int *)(iVar9 + 0x119c0) ||
             (puVar32[0x1b3] != *(int *)(iVar9 + 0x119c4))))))) goto LAB_ram_48113eca;
        iVar11 = FUN_ram_480b0f96(puVar32 + 0x21eaa,puVar14,puVar17);
        if (iVar11 == 0) {
          if (DAT_ram_4ff6dcdc == 0) {
            pcVar19 = "outbox_resource_wait";
          }
          else {
            pcVar19 = *(char **)(DAT_ram_4ff6dcdc + 0x41114);
          }
          puVar32[0x21ef0] = pcVar19;
          goto LAB_ram_48113eca;
        }
        puVar35 = (undefined4 *)(iVar9 + 0x118a8);
        puVar25 = puVar32 + 0x19a;
        do {
          uVar38 = puVar25[1];
          uVar22 = puVar25[2];
          uVar12 = puVar25[3];
          uVar23 = puVar25[4];
          *puVar35 = *puVar25;
          puVar35[1] = uVar38;
          puVar35[2] = uVar22;
          puVar35[3] = uVar12;
          puVar35[4] = uVar23;
          puVar25 = puVar25 + 5;
          puVar35 = puVar35 + 5;
        } while (puVar25 != puVar32 + 0x1b8);
        *(undefined4 *)(iVar9 + 0x11938) = uStack_9d0;
        *(undefined4 *)(iVar9 + 0x1193c) = uStack_9cc;
        *(undefined2 *)(iVar9 + 72000) = 0;
        uVar22 = FUN_ram_48129c8a(iVar33,"epoch_transition_ack");
        uVar45 = (uint)*(byte *)(iVar9 + 0x119c8);
        if (uVar45 != 0) goto LAB_ram_48113ee4;
LAB_ram_48113f9c:
        iVar9 = FUN_ram_480b66f6();
        if (iVar9 == 0) {
          puVar32[0x21ef0] = "control_ack_store_wait";
        }
        else if ((char)iStack_9b0 != '\0') {
          if (bVar41) {
            if (((DAT_ram_4ff5c880 == '\x01') &&
                (iVar9 = FUN_ram_4ff453ae(&DAT_ram_4ff5c881,&iStack_9b0), iVar9 == 0)) &&
               (iVar9 = FUN_ram_4ff453ae(&DAT_ram_4ff5c8c2,&uStack_968), iVar9 == 0)) {
              DAT_ram_4ff5c880 = '\x02';
            }
          }
          else if (((DAT_ram_4ff5c880 == '\x01') &&
                   (iVar9 = FUN_ram_4ff453ae(&DAT_ram_4ff5c881,&iStack_9b0), iVar9 == 0)) &&
                  (iVar9 = FUN_ram_4ff453ae(&DAT_ram_4ff5c8c2,&uStack_968), iVar9 == 0)) {
            FUN_ram_4ff45594(&DAT_ram_4ff5c903,"command_receipt_failed",0x20);
            DAT_ram_4ff5c923 = 0;
            DAT_ram_4ff5c880 = '\x04';
          }
        }
      }
      if (*(char *)((int)puVar3 + 0x502) != '\0') {
        FUN_ram_48129c8a(iVar33,"ota_action");
        FUN_ram_4807d5a8();
      }
      iVar9 = FUN_ram_48129c8a(iVar33,"records_ack");
      puVar32 = &local_920;
      do {
        uVar38 = puVar29[1];
        uVar22 = puVar29[2];
        uVar12 = puVar29[3];
        uVar23 = puVar29[4];
        *puVar32 = *puVar29;
        puVar32[1] = uVar38;
        puVar32[2] = uVar22;
        puVar32[3] = uVar12;
        puVar32[4] = uVar23;
        puVar29 = puVar29 + 5;
        puVar32 = puVar32 + 5;
      } while (puVar29 != &DAT_ram_48223bb8);
      if (iVar9 != 0) {
        iVar9 = FUN_ram_480a3dd2(iVar9,&local_920,1);
        if ((iVar9 == 0) || (iVar9 = FUN_ram_48079e0e(&local_920,puVar3 + 0x17c), iVar9 == 0)) {
          puVar3[0x21ef0] = "records_ack_mismatch";
        }
        else {
          puVar32 = &local_920;
          puVar29 = puVar3 + 0x1d6;
          do {
            uVar38 = puVar32[1];
            uVar22 = puVar32[2];
            uVar12 = puVar32[3];
            uVar23 = puVar32[4];
            *puVar29 = *puVar32;
            puVar29[1] = uVar38;
            puVar29[2] = uVar22;
            puVar29[3] = uVar12;
            puVar29[4] = uVar23;
            puVar32 = puVar32 + 5;
            puVar29 = puVar29 + 5;
          } while (puVar32 != auStack_8a8);
          puVar32 = &local_920;
          puVar29 = puVar3 + 0x1b8;
          do {
            uVar38 = puVar32[1];
            uVar22 = puVar32[2];
            uVar12 = puVar32[3];
            uVar23 = puVar32[4];
            *puVar29 = *puVar32;
            puVar29[1] = uVar38;
            puVar29[2] = uVar22;
            puVar29[3] = uVar12;
            puVar29[4] = uVar23;
            puVar32 = puVar32 + 5;
            puVar29 = puVar29 + 5;
          } while (puVar32 != auStack_8a8);
          uVar6 = FUN_ram_48079e0e(&local_920,puVar3 + 0x19a);
          *(undefined1 *)((int)puVar3 + 0xc59) = uVar6;
          puVar29 = DAT_ram_4ff6dc9c;
          if ((((((uint)local_920 & 0xff) != 0) && (*(char *)(DAT_ram_4ff6dc9c + 0x17c) != '\0')) &&
              (iVar9 = DAT_ram_4ff6dc9c[0x195], iStack_8c0 == DAT_ram_4ff6dc9c[0x194])) &&
             ((iStack_8bc == iVar9 && (iVar11 = DAT_ram_4ff6dc9c[0x198], iStack_8b0 == iVar11)))) {
            iVar44 = (int)DAT_ram_4ff6dc9c + 0x5f1;
            iVar10 = FUN_ram_4ff453ae((int)&local_920 + 1,iVar44);
            if (iVar10 == 0) {
              iVar43 = (int)puVar29 + 0x60a;
              iVar13 = FUN_ram_4ff453ae(auStack_906,iVar43);
              iVar10 = DAT_ram_4ff6dc94;
              if ((((iVar13 == 0) && (*(char *)(DAT_ram_4ff6dc94 + 0x118a8) != '\0')) &&
                  ((*(int *)(DAT_ram_4ff6dc94 + 0x11908) == iStack_8c0 &&
                   (((*(int *)(DAT_ram_4ff6dc94 + 0x1190c) == iVar9 &&
                     (iVar11 == *(int *)(DAT_ram_4ff6dc94 + 0x11918))) &&
                    (iVar9 = FUN_ram_4ff453ae(iVar44,DAT_ram_4ff6dc94 + 0x118a9), iVar9 == 0))))))
                 && (iVar9 = FUN_ram_4ff453ae(iVar43,iVar10 + 0x118c2), iVar9 == 0)) {
                uVar45 = *(uint *)(iVar10 + 0x1193c);
                uVar47 = *(uint *)(iVar10 + 0x11938);
                if ((uVar45 <= uStack_8b4) && ((uStack_8b4 != uVar45 || (uVar47 <= uStack_8b8)))) {
                  ppuVar48 = &local_4c0;
                  puVar32 = (undefined4 *)(iVar10 + 0x118a8);
                  ppuVar18 = ppuVar48;
                  do {
                    puVar39 = (undefined1 *)puVar32[1];
                    puVar14 = (undefined1 *)puVar32[2];
                    puVar17 = (undefined1 *)puVar32[3];
                    puVar36 = (undefined1 *)puVar32[4];
                    *ppuVar18 = (undefined1 *)*puVar32;
                    ppuVar18[1] = puVar39;
                    ppuVar18[2] = puVar14;
                    ppuVar18[3] = puVar17;
                    ppuVar18[4] = puVar36;
                    puVar32 = puVar32 + 5;
                    ppuVar18 = ppuVar18 + 5;
                  } while (puVar32 != (undefined4 *)(iVar10 + 0x11920));
                  puVar32 = (undefined4 *)(iVar10 + 0x118a8);
                  memset(puVar32,0,0x78);
                  *(undefined4 *)(iVar10 + 0x11938) = 0;
                  *(undefined4 *)(iVar10 + 0x1193c) = 0;
                  iVar9 = FUN_ram_480b66f6();
                  if (iVar9 == 0) {
                    do {
                      puVar14 = ppuVar48[1];
                      puVar17 = ppuVar48[2];
                      puVar36 = ppuVar48[3];
                      puVar39 = ppuVar48[4];
                      *puVar32 = *ppuVar48;
                      puVar32[1] = puVar14;
                      puVar32[2] = puVar17;
                      puVar32[3] = puVar36;
                      puVar32[4] = puVar39;
                      ppuVar48 = ppuVar48 + 5;
                      puVar32 = puVar32 + 5;
                    } while (ppuVar48 != apuStack_448);
                    *(uint *)(iVar10 + 0x11938) = uVar47;
                    *(uint *)(iVar10 + 0x1193c) = uVar45;
                    puVar29[0x21ef0] = "records_grant_store_failed";
                  }
                }
              }
            }
          }
        }
      }
      iVar9 = FUN_ram_48129c8a(iVar33,"records_acked_ids");
      if (iVar9 != 0) {
        iVar11 = FUN_ram_480cea00(&DAT_ram_4ff5be28,puVar3 + 0x21d6a);
        if (((iVar11 != 0) && (iVar11 = FUN_ram_48129cfa(iVar9), iVar11 != 0)) &&
           (iVar10 = FUN_ram_480b063e(), iVar11 = DAT_ram_4ff6dcdc, iVar10 != 0)) {
          FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,puVar3 + 0x21d6a,0x524);
          *(undefined1 *)(iVar11 + 0x41112) = 1;
          memset(&local_4c0,0,0x480);
          piVar5 = *(int **)(iVar9 + 8);
          if (piVar5 == (int *)0x0) {
            iVar9 = 0;
LAB_ram_48115916:
            uStack_968._0_4_ = (undefined1 *)((uint)(undefined1 *)uStack_968 & 0xffffff00);
            FUN_ram_480386ea(iVar11 + 0x30,puVar3 + 500,&local_4c0,iVar9,puVar3 + 0x21d6a,
                             FUN_ram_480b356e,&uStack_968);
            if ((((uint)(undefined1 *)uStack_968 & 0xff) == 0) ||
               (iVar9 = FUN_ram_480b0ed4(), iVar9 != 0)) goto LAB_ram_48114102;
          }
          else {
            iVar9 = 0;
            ppuVar18 = &local_4c0;
            do {
              iVar10 = FUN_ram_480a429c(piVar5,ppuVar18);
              ppuVar18 = ppuVar18 + 0x12;
              if (iVar10 == 0) break;
              piVar5 = (int *)*piVar5;
              iVar9 = iVar9 + 1;
              if (piVar5 == (int *)0x0) goto LAB_ram_48115916;
            } while (apuStack_40 != ppuVar18);
          }
        }
        puVar3[0x21ef0] = "records_outbox_ack_store_failed";
      }
LAB_ram_48114102:
      uVar22 = FUN_ram_48129c8a(iVar33,"domain_errors");
      iVar9 = FUN_ram_48129c8a(uVar22,"records");
      if (iVar9 != 0) {
        *(undefined1 *)((int)puVar3 + 0xc59) = 4;
        puVar3[0x21ef0] = "records_conflict";
      }
      iVar9 = FUN_ram_48129c8a(iVar33,"command");
      iVar11 = FUN_ram_48129d0c();
      if ((((iVar11 == 0) || (*(char *)(DAT_ram_4ff6dc94 + 0x9618) != '\0')) ||
          (*(char *)((int)puVar3 + 0x8175f) != '\0')) ||
         (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) != '\0')) {
        if (((iVar9 != 0) && (iVar11 = FUN_ram_48129cc4(iVar9), iVar11 == 0)) &&
           (iVar9 = FUN_ram_48129d0c(iVar9), iVar9 == 0)) {
          puVar3[0x21ef0] = "invalid_command";
        }
        uVar22 = FUN_ram_48025ba6();
        puVar3[0x144] = uVar22;
        uVar22 = FUN_ram_4819b728(0);
        iVar9 = DAT_ram_4ff6dcc8;
        puVar3[0x143] = uVar22;
        *(undefined4 *)(iVar9 + 0x63e8) = puVar3[0x144];
        uVar22 = puVar3[0x143];
        *(undefined1 *)(iVar9 + 0x6400) = 1;
        *(undefined4 *)(iVar9 + 0x63ec) = uVar22;
      }
      else {
        iVar11 = FUN_ram_480b7854(iVar33);
        uVar22 = FUN_ram_48025ba6();
        puVar3[0x144] = uVar22;
        uVar22 = FUN_ram_4819b728(0);
        iVar9 = DAT_ram_4ff6dcc8;
        puVar3[0x143] = uVar22;
        *(undefined4 *)(iVar9 + 0x63e8) = puVar3[0x144];
        uVar22 = puVar3[0x143];
        *(undefined1 *)(iVar9 + 0x6400) = 1;
        *(undefined4 *)(iVar9 + 0x63ec) = uVar22;
        if (iVar11 != 0) {
          return;
        }
      }
LAB_ram_481141b4:
      FUN_ram_481295cc(iVar33);
      return;
    }
    uVar22 = FUN_ram_48129c8a(iVar33,"status");
    iVar9 = FUN_ram_480762ce(uVar22,0,0,&iStack_9e0);
    if ((iVar9 != 0) && (iStack_9e0 == 0 && iStack_9dc == 0)) {
      iVar9 = FUN_ram_48129c8a(iVar33,"capabilities");
      uVar54 = FUN_ram_48129cfa();
      puVar16 = (undefined *)((ulonglong)uVar54 >> 0x20);
      if ((int)uVar54 != 0) {
        ppuVar40 = &PTR_s_api_call_ram_481cc0e0_ram_481f51a8;
        do {
          piVar5 = *(int **)(iVar9 + 8);
          puVar49 = *ppuVar40;
          if (piVar5 == (int *)0x0) goto LAB_ram_481141f4;
          bVar41 = false;
          do {
            uVar54 = FUN_ram_48129ce8(piVar5,puVar16);
            puVar16 = (undefined *)((ulonglong)uVar54 >> 0x20);
            if ((((int)uVar54 != 0) && (puVar16 = puVar49, piVar5[4] != 0)) &&
               (puVar49 != (undefined *)0x0)) {
              uVar54 = FUN_ram_4ff453ae();
              puVar16 = (undefined *)((ulonglong)uVar54 >> 0x20);
              bVar41 = (bool)(bVar41 | (int)uVar54 == 0);
            }
            piVar5 = (int *)*piVar5;
          } while (piVar5 != (int *)0x0);
          if (!bVar41) goto LAB_ram_481141f4;
          ppuVar40 = ppuVar40 + 1;
        } while (ppuVar40 != &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc);
        goto LAB_ram_48113ccc;
      }
    }
  }
LAB_ram_481141f4:
  FUN_ram_481295cc(iVar33);
LAB_ram_481141fa:
  puVar3[0x21ef0] = "server_not_adapted";
  iVar33 = FUN_ram_48025ba6();
  puVar3[0x21ed4] = iVar33 + 300000;
  iVar33 = DAT_ram_4ff6dcc8;
  if (*(char *)(puVar3 + 0x21ed7) == '\x06') {
    *(char **)(DAT_ram_4ff6dcc8 + 0x640c) = "failed";
    uVar22 = puVar3[0x21ed1];
    *(undefined4 *)(iVar33 + 0x6410) = puVar3[0x21ef0];
    *(undefined4 *)(iVar33 + 0x63f8) = uVar22;
  }
  return;
code_r0x48114902:
  if (uVar45 == 0x5f || bVar46) {
LAB_ram_48113c64:
    uVar22 = FUN_ram_4ff45158(puVar3 + 0x21689,pbVar34,sVar15 + 1);
    puVar3[0x21ef0] = uVar22;
  }
LAB_ram_48113c88:
  if (iVar33 != 0) {
    FUN_ram_481295cc(iVar33);
  }
LAB_ram_48113a6e:
  iVar33 = FUN_ram_48025ba6();
  uVar45 = puVar3[0x145];
  puVar3[0x145] = uVar45 + 1;
  iVar9 = puVar3[0x21ed1];
  if (iVar9 < 0x195) {
    uVar47 = 300000;
    if ((iVar9 < 0x193) && (iVar9 != 0x191)) {
      if (5 < uVar45) {
        uVar45 = 5;
      }
      uVar50 = 0;
LAB_ram_48113ab0:
      uVar47 = *(uint *)(&DAT_ram_482226fc + uVar45 * 4);
      if (*(uint *)(&DAT_ram_482226fc + uVar45 * 4) < uVar50) {
        uVar47 = uVar50;
      }
    }
  }
  else {
    uVar47 = 300000;
    if (iVar9 != 0x1f5) {
      if (5 < uVar45) {
        uVar45 = 5;
      }
      uVar50 = 0;
      if (iVar9 == 0x1ad) {
        uVar50 = puVar3[0x142];
        if (300000 < (uint)puVar3[0x142]) {
          uVar50 = 300000;
        }
      }
      goto LAB_ram_48113ab0;
    }
  }
  cVar7 = *(char *)(puVar3 + 0x21ed7);
  puVar3[0x21ed4] = iVar33 + uVar47;
  if (cVar7 == '\x01') {
    *(undefined1 *)((int)puVar3 + 0x87b62) = 0;
    return;
  }
  if (2 < (byte)(cVar7 - 2U)) goto LAB_ram_48113b6c;
  if (iVar9 < 0x19e) {
    if (iVar9 < 400) {
      return;
    }
    if ((0x221bU >> (iVar9 - 400U & 0x1f) & 1) == 0) {
      return;
    }
  }
  else if (iVar9 != 0x1f5) {
    return;
  }
  FUN_ram_480b69b4(puVar3[0x21ef0]);
  iVar33 = FUN_ram_48025ba6();
  iVar9 = puVar3[0x21ed1];
  if (iVar9 < 0x195) {
    iVar11 = 300000;
    if ((iVar9 < 0x193) && (iVar9 != 0x191)) {
LAB_ram_48113b42:
      uVar45 = puVar3[0x145];
      if (5 < uVar45) {
        uVar45 = 5;
      }
      iVar11 = *(int *)(&DAT_ram_482226fc + uVar45 * 4);
    }
  }
  else {
    iVar11 = 300000;
    if (iVar9 != 0x1f5) goto LAB_ram_48113b42;
  }
  cVar7 = *(char *)(puVar3 + 0x21ed7);
  puVar3[0x21ed4] = iVar11 + iVar33;
LAB_ram_48113b6c:
  iVar33 = DAT_ram_4ff6dcc8;
  if (cVar7 != '\x06') {
    return;
  }
  *(char **)(DAT_ram_4ff6dcc8 + 0x640c) = "failed";
  uVar22 = puVar3[0x21ed1];
  *(undefined4 *)(iVar33 + 0x6410) = puVar3[0x21ef0];
  *(undefined4 *)(iVar33 + 0x63f8) = uVar22;
  return;
}


