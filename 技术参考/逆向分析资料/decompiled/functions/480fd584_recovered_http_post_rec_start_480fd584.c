/* Firmware entry: 0x480fd584 */

/* WARNING: Type propagation algorithm not settling */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_rec_start_480fd584(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStack_374 [16];
  undefined1 auStack_364 [16];
  undefined1 auStack_354 [16];
  uint auStack_344 [64];
  byte bStack_244;
  uint local_240;
  undefined4 uStack_23c;
  uint local_238 [64];
  uint uStack_138;
  uint local_134 [64];
  char acStack_34 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de08 != '\0') {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"recording_download_busy\"}");
    return;
  }
  memset(&local_240,0,0x210);
  local_240 = 60000;
  uStack_23c = 0x10107;
  FUN_ram_4802a8a8(auStack_354,"include");
  iVar12 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar12 + 0x1cc4) != 0) {
    puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar7 = FUN_ram_4802b18e(auStack_354,*puVar3);
      if (iVar7 != 0) {
        pcVar8 = "include";
        goto LAB_ram_480fd638;
      }
      puVar3 = puVar3 + 2;
    } while (uVar4 < *(uint *)(iVar12 + 0x1cc4));
  }
  pcVar8 = "ids";
LAB_ram_480fd638:
  FUN_ram_4802a8a8(auStack_344,pcVar8);
  FUN_ram_4806562c(auStack_374,&DAT_ram_4ff5cb9c,auStack_344);
  FUN_ram_4802a59e(auStack_344);
  FUN_ram_4802a59e(auStack_354);
  iVar12 = FUN_ram_4802f486(auStack_374,local_238,&uStack_138);
  if (iVar12 != 0) {
    FUN_ram_4802a8a8(auStack_354,"exclude");
    FUN_ram_4806562c(auStack_344,&DAT_ram_4ff5cb9c,auStack_354);
    uVar4 = FUN_ram_4802f486(auStack_344,local_134,acStack_34);
    if (uVar4 != 0) {
      FUN_ram_4802a59e(auStack_344);
      FUN_ram_4802a59e(auStack_354);
      FUN_ram_4802a8a8(auStack_344,"buses");
      iVar12 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(int *)(iVar12 + 0x1cc4) != 0) {
        puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
        uVar16 = 0;
        do {
          uVar16 = uVar16 + 1;
          iVar7 = FUN_ram_4802b18e(auStack_344,*puVar3);
          if (iVar7 != 0) {
            FUN_ram_4802a59e(auStack_344);
            FUN_ram_4802a8a8(auStack_354,"buses");
            FUN_ram_4806562c(auStack_344,&DAT_ram_4ff5cb9c,auStack_354);
            uVar16 = FUN_ram_4802b91c(auStack_344);
            uVar16 = uVar16 & 7;
            uStack_23c = CONCAT31(uStack_23c._1_3_,(char)uVar16);
            FUN_ram_4802a59e(auStack_344);
            FUN_ram_4802a59e(auStack_354);
            goto LAB_ram_480fd79c;
          }
          puVar3 = puVar3 + 2;
        } while (uVar16 < *(uint *)(iVar12 + 0x1cc4));
      }
      FUN_ram_4802a59e(auStack_344);
      uVar16 = uStack_23c & 0xff;
LAB_ram_480fd79c:
      if (uVar16 == 0) {
        uStack_23c = CONCAT31(uStack_23c._1_3_,7);
      }
      FUN_ram_4802a8a8(auStack_364,&DAT_ram_481b71bc);
      iVar12 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(int *)(iVar12 + 0x1cc4) != 0) {
        puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
        uVar16 = 0;
        do {
          uVar16 = uVar16 + 1;
          iVar7 = FUN_ram_4802b18e(auStack_364,*puVar3);
          if (iVar7 != 0) {
            FUN_ram_4802a8a8(auStack_354,&DAT_ram_481b71bc);
            FUN_ram_4806562c(auStack_344,&DAT_ram_4ff5cb9c,auStack_354);
            bVar5 = FUN_ram_4802b18e(auStack_344,"0");
            uVar4 = (uint)(bVar5 ^ 1);
            uStack_23c = CONCAT22(uStack_23c._2_2_,CONCAT11(bVar5,(byte)uStack_23c)) ^ 0x100;
            FUN_ram_4802a59e(auStack_344);
            FUN_ram_4802a59e(auStack_354);
            goto LAB_ram_480fd834;
          }
          puVar3 = puVar3 + 2;
        } while (uVar16 < *(uint *)(iVar12 + 0x1cc4));
      }
      uStack_23c._0_2_ = CONCAT11(1,(byte)uStack_23c);
LAB_ram_480fd834:
      FUN_ram_4802a59e(auStack_364);
      FUN_ram_4802a8a8(auStack_364,&DAT_ram_481b71c4);
      iVar12 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(int *)(iVar12 + 0x1cc4) != 0) {
        puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
        uVar16 = 0;
        do {
          uVar16 = uVar16 + 1;
          iVar7 = FUN_ram_4802b18e(auStack_364,*puVar3);
          if (iVar7 != 0) {
            FUN_ram_4802a8a8(auStack_354,&DAT_ram_481b71c4);
            FUN_ram_4806562c(auStack_344,&DAT_ram_4ff5cb9c,auStack_354);
            uVar6 = FUN_ram_4802b18e(auStack_344,"0");
            uStack_23c = CONCAT13(uStack_23c._3_1_,CONCAT12(uVar6,(undefined2)uStack_23c)) ^ 0x10000
            ;
            FUN_ram_4802a59e(auStack_344);
            FUN_ram_4802a59e(auStack_354);
            goto LAB_ram_480fd8c6;
          }
          puVar3 = puVar3 + 2;
        } while (uVar16 < *(uint *)(iVar12 + 0x1cc4));
      }
      uStack_23c._0_3_ = CONCAT12(1,(undefined2)uStack_23c);
LAB_ram_480fd8c6:
      FUN_ram_4802a59e(auStack_364);
      uStack_23c = uStack_23c & 0xffffff;
      FUN_ram_4802a8a8(auStack_344,"duration");
      iVar12 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(int *)(iVar12 + 0x1cc4) != 0) {
        puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
        uVar16 = 0;
        do {
          uVar16 = uVar16 + 1;
          iVar7 = FUN_ram_4802b18e(auStack_344,*puVar3);
          if (iVar7 != 0) {
            FUN_ram_4802a59e(auStack_344);
            FUN_ram_4802a8a8(auStack_354,"duration");
            FUN_ram_4806562c(auStack_344,&DAT_ram_4ff5cb9c,auStack_354);
            uVar16 = FUN_ram_4802b91c(auStack_344);
            FUN_ram_4802a59e(auStack_344);
            FUN_ram_4802a59e(auStack_354);
            if (0 < (int)uVar16) {
              local_240 = uVar16;
            }
            goto LAB_ram_480fd95a;
          }
          puVar3 = puVar3 + 2;
        } while (uVar16 < *(uint *)(iVar12 + 0x1cc4));
      }
      FUN_ram_4802a59e(auStack_344);
LAB_ram_480fd95a:
      if ((uVar4 == 0) && (uStack_23c._2_1_ == '\0')) {
        pcVar8 = "{\"ok\":false,\"error\":\"rx_or_tx_required\"}";
        uVar9 = 400;
      }
      else {
        fence();
        fence();
        if (DAT_ram_4ff6df04 == '\0') {
          if ((DAT_ram_4ff6deac == 0) || (DAT_ram_4ff6dea8 == 0)) {
            pcVar8 = "{\"ok\":false,\"error\":\"can_bg_unavailable\"}";
            uVar9 = 0x1f7;
          }
          else {
            iVar12 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dea8,1000);
            if (iVar12 == 1) {
              fence();
              DAT_ram_4ff6dea4 = 0;
              if (DAT_ram_4ff6df2c != (int *)0x0) {
                (**(code **)(*DAT_ram_4ff6df2c + 0xf0))(DAT_ram_4ff6df2c,0);
                (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,0);
                (**(code **)(*DAT_ram_4ff6df2c + 0xf4))();
                (**(code **)(*DAT_ram_4ff6df2c + 0x120))();
              }
              FUN_ram_480329ca();
              piVar2 = DAT_ram_4ff6df2c;
              DAT_ram_4ff6dea1 = 0;
              DAT_ram_4ff6dea2 = 0;
              fence();
              DAT_ram_4ff6dea0 = 0;
              fence();
              DAT_ram_4ff6de9c = 0;
              fence();
              fence();
              if (DAT_ram_4ff6df04 != '\0') {
                FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
                goto LAB_ram_480fdacc;
              }
              if (DAT_ram_4ff6df2c != (int *)0x0) {
                memset(auStack_344,0,0x104);
                bStack_244 = 0;
                if (uStack_23c._1_1_ != '\0') {
                  bStack_244 = (byte)uStack_23c & 7;
                }
                if ((char)uStack_138 == '\0') {
                  memset(auStack_344,0xff,0x100);
                }
                else {
                  puVar13 = local_238;
                  puVar10 = puVar13 + (byte)((char)uStack_138 - 1);
                  do {
                    uVar4 = *puVar13;
                    puVar14 = auStack_344 + (uVar4 >> 5);
                    if (uVar4 < 0x800) {
                      *puVar14 = 1 << (uVar4 & 0x1f) | *puVar14;
                    }
                  } while ((puVar10 != puVar13) && (puVar13 = puVar13 + 1, &uStack_138 != puVar13));
                }
                if (acStack_34[0] != '\0') {
                  puVar13 = local_134;
                  puVar10 = puVar13 + (byte)(acStack_34[0] - 1);
                  do {
                    uVar4 = *puVar13;
                    puVar14 = auStack_344 + (uVar4 >> 5);
                    if (uVar4 < 0x800) {
                      *puVar14 = ~(1 << (uVar4 & 0x1f)) & *puVar14;
                    }
                  } while ((puVar10 != puVar13) &&
                          (puVar13 = puVar13 + 1, (uint *)acStack_34 != puVar13));
                }
                iVar12 = (**(code **)(*piVar2 + 0x11c))(piVar2,auStack_344);
                if ((iVar12 != 0) && (iVar12 = FUN_ram_480fd2fc(1), iVar12 != 0)) {
                  iVar12 = FUN_ram_4802eb3a();
                  if (iVar12 != 0) {
                    FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
                    fence();
                    fence();
                    if (DAT_ram_4ff6df04 == '\0') {
                      FUN_ram_4ff3ee10();
                      FUN_ram_4ff3abd4(DAT_ram_4ff6def4,0);
                      FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
                      DAT_ram_4ff6df00 = DAT_ram_4ff6df00 + 1;
                      puVar10 = &local_240;
                      puVar13 = (uint *)&DAT_ram_4ff48b5c;
                      do {
                        puVar15 = puVar13;
                        puVar14 = puVar10;
                        uVar11 = puVar14[1];
                        uVar4 = puVar14[2];
                        *puVar15 = *puVar14;
                        uVar16 = puVar14[3];
                        puVar15[1] = uVar11;
                        uVar11 = puVar14[4];
                        puVar15[2] = uVar4;
                        puVar15[3] = uVar16;
                        puVar15[4] = uVar11;
                        puVar10 = puVar14 + 5;
                        puVar13 = puVar15 + 5;
                      } while (puVar10 != local_134 + 0x3f);
                      uVar4 = puVar14[6];
                      puVar15[5] = *puVar10;
                      *(char *)(puVar15 + 6) = (char)uVar4;
                      cVar1 = DAT_ram_4ff48c64;
                      FUN_ram_4802c55c(&DAT_ram_4ff5cd80,&DAT_ram_4ff48b64,DAT_ram_4ff48c64);
                      FUN_ram_4802c55c(&DAT_ram_4ff5cc80,&DAT_ram_4ff48c68,DAT_ram_4ff48d68);
                      DAT_ram_4ff6def8 = cVar1 != '\0';
                      if (3599999 < DAT_ram_4ff48b5c - 1U) {
                        DAT_ram_4ff48b5c = 60000;
                      }
                      DAT_ram_4ff6df14 = 0;
                      DAT_ram_4ff6df1c = 0;
                      DAT_ram_4ff6df18 = 0;
                      fence();
                      DAT_ram_4ff6defc = 0;
                      fence();
                      DAT_ram_4ff5ce8c = 0;
                      DAT_ram_4ff5ce90 = 0;
                      DAT_ram_4ff5ce94 = 0;
                      DAT_ram_4ff5ce80 = 0;
                      DAT_ram_4ff5ce84 = 0;
                      DAT_ram_4ff5ce88 = 0;
                      DAT_ram_4ff6df10 = FUN_ram_48025ba6();
                      DAT_ram_4ff6df0c = FUN_ram_48025b94();
                      DAT_ram_4ff6df08 = 0;
                      DAT_ram_4ff6df06 = 0;
                      DAT_ram_4ff6defa = 0;
                      DAT_ram_4ff6def9 = 0;
                      fence();
                      DAT_ram_4ff6df04 = 1;
                      fence();
                      FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
                      if (DAT_ram_4ff6df2c != (int *)0x0) {
                        (**(code **)(*DAT_ram_4ff6df2c + 0xf0))(DAT_ram_4ff6df2c,1);
                        (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,1);
                      }
                      fence();
                      DAT_ram_4ff6dea4 = 1;
                      FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
                      FUN_ram_4802cf56(auStack_344);
                      FUN_ram_4802a8a8(auStack_354,"{\"ok\":true,\"cap\":");
                      FUN_ram_4802afaa(auStack_354,auStack_344[2]);
                      FUN_ram_4802af5a(auStack_354,0x7d);
                      FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",auStack_354);
                      FUN_ram_4802a59e(auStack_354);
                      FUN_ram_4802a59e(auStack_374);
                      return;
                    }
                    FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
                  }
                  fence();
                  DAT_ram_4ff6dea4 = 0;
                  if (DAT_ram_4ff6df2c != (int *)0x0) {
                    (**(code **)(*DAT_ram_4ff6df2c + 0xf0))(DAT_ram_4ff6df2c,0);
                    (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,0);
                    (**(code **)(*DAT_ram_4ff6df2c + 0xf4))();
                    (**(code **)(*DAT_ram_4ff6df2c + 0x120))();
                  }
                  FUN_ram_480fd2fc(0);
                  FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
                  pcVar8 = "{\"ok\":false,\"error\":\"buffer_unavailable\"}";
                  uVar9 = 0x1f7;
                  goto LAB_ram_480fd9b8;
                }
              }
              FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
              pcVar8 = "{\"ok\":false,\"error\":\"filter_transition_failed\"}";
              uVar9 = 0x1f7;
            }
            else {
              pcVar8 = "{\"ok\":false,\"error\":\"recorder_pipeline_busy\"}";
              uVar9 = 0x1f7;
            }
          }
        }
        else {
LAB_ram_480fdacc:
          pcVar8 = "{\"ok\":false,\"error\":\"recorder_active\"}";
          uVar9 = 0x199;
        }
      }
LAB_ram_480fd9b8:
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar9,"application/json",pcVar8);
      goto LAB_ram_480fd680;
    }
    FUN_ram_4802a59e(auStack_344);
    FUN_ram_4802a59e(auStack_354);
  }
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                   "{\"ok\":false,\"error\":\"invalid_id_list\"}");
LAB_ram_480fd680:
  FUN_ram_4802a59e(auStack_374);
  return;
}


