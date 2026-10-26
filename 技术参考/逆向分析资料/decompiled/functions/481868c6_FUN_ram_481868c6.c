/* Firmware entry: 0x481868c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481868c6(char *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  uint uStack_7c;
  int iStack_74;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  uint *puStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar16 = param_4 & 0xf;
  uVar14 = param_4 >> 4;
  if (uVar16 == 0) {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_aes_dma_core.c",0x228,"esp_aes_process_dma","len > 0");
    }
  }
  else {
    uVar14 = uVar14 + 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_aes_dma_core.c",0x229,"esp_aes_process_dma",
                       "stream_bytes == 0 || stream_out != NULL");
    }
  }
  if (*param_1 != param_1[1]) {
    FUN_ram_48178af2(param_3,param_4);
    return 0xffffffde;
  }
  iVar7 = FUN_ram_4ff20684();
  if ((iVar7 == 0) ||
     ((((iVar7 = thunk_FUN_ram_4ff21be8(param_2), iVar7 == 0 &&
        (iVar7 = thunk_FUN_ram_4ff21be8(param_3), iVar7 == 0)) && (0x3ffffff < param_2 + 0xc0000000)
       ) && (0x3ffffff < param_3 + 0xc0000000)))) {
    uVar18 = 0;
    bVar1 = false;
  }
  else {
    bVar1 = (param_2 & 0xf) != 0;
    uVar18 = (uint)((param_3 & 0xf) != 0);
  }
  bVar5 = thunk_FUN_ram_4ff21be8(param_2);
  bVar6 = (bVar5 | param_2 + 0xb0100000 < 0xc0000) ^ 1;
  bVar5 = thunk_FUN_ram_4ff21be8(param_3);
  bVar5 = bVar5 | param_3 + 0xb0100000 < 0xc0000;
  uStack_7c = param_4;
  if (bVar5 == 0) {
    if (0x2000 < param_4) {
      uStack_7c = 0x2000;
    }
    uVar18 = FUN_ram_4ff20684();
    if (uVar18 != 0) goto LAB_ram_48186c3c;
    if (bVar1 || bVar6 != 0) {
      iVar8 = FUN_ram_4ff20956(1,uStack_7c,8);
      iVar7 = 8;
      uVar20 = 1;
      if (iVar8 == 0) goto LAB_ram_48186eb0;
    }
    else {
LAB_ram_48186d1a:
      iVar8 = 0;
      iVar7 = 8;
      uVar20 = 1;
    }
  }
  else {
    if (uVar18 == 0 && (!bVar1 && bVar6 == 0)) {
      iVar7 = thunk_FUN_ram_4ff21be8(param_2);
      iVar7 = FUN_ram_4ff40f0c(iVar7 + 1,0);
      iVar8 = thunk_FUN_ram_4ff21be8(param_3);
      iVar8 = FUN_ram_4ff40f0c(iVar8 + 1,0);
      if ((iVar7 == 0) || (iVar8 == 0)) {
        FUN_ram_48178af2(param_3,param_4);
        uVar20 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Getting cache line size failed\n",uVar20,"esp-aes"
                        );
        return 0xffffffff;
      }
      uVar18 = 0x10;
      if (0xf < (uint)(iVar7 << 1)) {
        uVar18 = iVar7 << 1;
      }
      uVar12 = iVar8 << 1;
      if (uVar12 < 0x10) {
        uVar12 = 0x10;
      }
      uStack_64 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      puStack_58 = (uint *)0x0;
      iStack_54 = 0;
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      aiStack_44[0] = 0;
      iVar7 = FUN_ram_481863bc(param_2,param_4,&iStack_60,&iStack_5c,uVar18,iVar7,0,0,&uStack_64,0,0
                              );
      uVar20 = uStack_64;
      if (iVar7 == 0) {
        iVar9 = FUN_ram_481863bc(param_3,param_4,&iStack_54,&iStack_50,uVar12,iVar8,&uStack_4c,
                                 &uStack_48,&puStack_58,aiStack_44,1);
        iVar4 = aiStack_44[0];
        iVar7 = iStack_50;
        iVar17 = iStack_54;
        puVar19 = puStack_58;
        iStack_74 = iStack_54;
        if (iVar9 == 0) {
          if (param_4 < 0x7d1) {
            bVar5 = 0;
          }
          else {
            _DAT_ram_500900ac = 1;
          }
          _DAT_ram_500900b0 = (uint)(param_4 >= 0x7d1);
          iVar9 = FUN_ram_4818860e(uVar20,puStack_58);
          if (iVar9 == 0) {
            FUN_ram_4818b7d2(uVar14);
            iVar9 = FUN_ram_4818635a(bVar5,puVar19 + iVar4 * 4 + -4);
            if (iVar9 == -1) {
              uVar15 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: esp_aes_dma_wait_complete failed\n",uVar15,
                               "esp-aes");
            }
            else {
              iVar9 = thunk_FUN_ram_4ff21be8(puVar19);
              iVar9 = FUN_ram_4ff40f0c(iVar9 + 1,0);
              iVar9 = FUN_ram_4ff33956(puVar19,iVar4 * 0x10 + -1 + iVar9 & -iVar9,8);
              if (iVar9 == 0) {
                if (iVar4 != 0) {
                  iVar9 = 0;
                  puVar13 = puVar19;
                  do {
                    iVar10 = FUN_ram_4ff33956(puVar13[1],
                                              (*puVar13 >> 0xc & 0xfff) + iVar8 + -1 & -iVar8,8);
                    if (iVar10 != 0) {
                      uVar15 = FUN_ram_4ff44d14();
                      FUN_ram_4ff44bf0(1,"esp-aes",
                                       "E (%lu) %s: Output DMA descriptor buffers cache sync M2C failed\n"
                                       ,uVar15,"esp-aes");
                      goto LAB_ram_48186d7c;
                    }
                    iVar9 = iVar9 + 1;
                    puVar13 = puVar13 + 4;
                  } while (iVar9 != iVar4);
                }
                FUN_ram_4818b7e4();
                uVar3 = uStack_48;
                uVar14 = uStack_4c;
                uVar15 = 0;
                if (uStack_4c == 0) {
                  if (uStack_48 == 0) goto LAB_ram_48186d86;
                }
                else {
                  uVar11 = param_4;
                  if (uStack_4c < param_4) {
                    uVar11 = uStack_4c;
                  }
                  FUN_ram_4ff45158(param_3,iVar17,uVar11);
                  if (uVar3 == 0) {
                    if ((uVar16 != 0) && (param_4 <= uVar14)) {
                      FUN_ram_4ff45158(param_5,(uVar14 - 0x10) + iVar17,0x10);
                    }
                    goto LAB_ram_48186d86;
                  }
                }
                uVar14 = param_4 + 0xf & 0xfffffff0;
                FUN_ram_4ff45158((uVar14 - uVar3) + param_3,iVar7,(param_4 + uVar3) - uVar14);
                if (uVar16 != 0) {
                  if (uVar3 < 0x10) {
                    FUN_ram_4ff45158(param_5,(uVar3 - 0x10) + param_4 + param_3,0x10 - uVar3);
                    FUN_ram_4ff45158(param_5 + (0x10 - uVar3),iVar7,uVar3);
                  }
                  else {
                    FUN_ram_4ff45158(param_5,(uVar3 - 0x10) + iVar7,0x10);
                  }
                }
                goto LAB_ram_48186d86;
              }
              uVar15 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"esp-aes",
                               "E (%lu) %s: Output DMA descriptor cache sync M2C failed\n",uVar15,
                               "esp-aes");
            }
          }
          else {
            uVar15 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"esp-aes",
                             "E (%lu) %s: esp_aes_dma_start failed, no DMA channel available\n",
                             uVar15,"esp-aes");
          }
        }
        else {
          uVar15 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Generating output DMA descriptors failed\n",
                           uVar15,"esp-aes");
        }
      }
      else {
        uVar15 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Generating input DMA descriptors failed\n",uVar15,
                         "esp-aes");
        iVar7 = 0;
        iStack_74 = 0;
        puVar19 = (uint *)0x0;
      }
LAB_ram_48186d7c:
      FUN_ram_48178af2(param_3,param_4);
      uVar15 = 0xffffffff;
LAB_ram_48186d86:
      iVar8 = iStack_60;
      if (iStack_60 != 0) {
        FUN_ram_48178af2(iStack_60,uVar18);
        thunk_FUN_ram_4ff209c6(iVar8);
      }
      iVar8 = iStack_5c;
      if (iStack_5c != 0) {
        FUN_ram_48178af2(iStack_5c,uVar18);
        thunk_FUN_ram_4ff209c6(iVar8);
      }
      if (iStack_74 != 0) {
        FUN_ram_48178af2(iStack_74,uVar12);
        thunk_FUN_ram_4ff209c6(iStack_74);
      }
      if (iVar7 != 0) {
        FUN_ram_48178af2(iVar7,uVar12);
        thunk_FUN_ram_4ff209c6(iVar7);
      }
      thunk_FUN_ram_4ff209c6(uVar20);
      thunk_FUN_ram_4ff209c6(puVar19);
      return uVar15;
    }
    if (param_4 < 0x2001) {
      iVar7 = FUN_ram_4ff20684();
      if (iVar7 != 0) goto LAB_ram_48186c3c;
LAB_ram_4818697e:
      if (!bVar1 && bVar6 == 0) goto LAB_ram_48186d1a;
      iVar7 = 8;
      uVar20 = 1;
      iVar17 = 8;
      uVar15 = 1;
LAB_ram_4818698a:
      iVar8 = FUN_ram_4ff20956(uVar15,uStack_7c,iVar17);
      if (iVar8 == 0) goto LAB_ram_48186eb0;
    }
    else {
      uStack_7c = 0x2000;
      iVar7 = FUN_ram_4ff20684();
      if (iVar7 == 0) goto LAB_ram_4818697e;
LAB_ram_48186c3c:
      iVar7 = thunk_FUN_ram_4ff21be8(param_2);
      if ((((iVar7 == 0) && (iVar7 = thunk_FUN_ram_4ff21be8(param_3), iVar7 == 0)) &&
          (0x3ffffff < param_2 + 0xc0000000)) && (0x3ffffff < param_3 + 0xc0000000)) {
        uVar20 = 1;
        uVar15 = 1;
        iVar7 = 8;
        iVar17 = 8;
      }
      else {
        iVar7 = thunk_FUN_ram_4ff21be8(param_2);
        uVar14 = FUN_ram_4ff40f0c(iVar7 + 1,0);
        uVar15 = 0x10;
        if (0x10 < uVar14) {
          iVar7 = thunk_FUN_ram_4ff21be8(param_2);
          uVar15 = FUN_ram_4ff40f0c(iVar7 + 1,0);
        }
        iVar7 = thunk_FUN_ram_4ff21be8(param_3);
        uVar14 = FUN_ram_4ff40f0c(iVar7 + 1,0);
        uVar20 = 0x10;
        if (0x10 < uVar14) {
          iVar7 = thunk_FUN_ram_4ff21be8(param_3);
          uVar20 = FUN_ram_4ff40f0c(iVar7 + 1,0);
        }
        iVar7 = thunk_FUN_ram_4ff21be8(param_2);
        iVar8 = thunk_FUN_ram_4ff21be8(param_3);
        iVar17 = (-(uint)(iVar7 == 0) & 0x408) + 0x404;
        iVar7 = (-(uint)(iVar8 == 0) & 0x408) + 0x404;
      }
      iVar8 = 0;
      if (bVar1 || bVar6 != 0) goto LAB_ram_4818698a;
    }
    bVar2 = false;
    uVar14 = param_3;
    if (uVar18 == 0) goto LAB_ram_481869a4;
  }
  uVar14 = FUN_ram_4ff20956(uVar20,uStack_7c,iVar7);
  if (uVar14 == 0) {
LAB_ram_48186eb0:
    FUN_ram_48178af2(param_3,param_4);
    uVar20 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Failed to allocate memory\n",uVar20,"esp-aes");
    return 0xffffffff;
  }
  bVar2 = true;
LAB_ram_481869a4:
  iVar7 = 0;
  while( true ) {
    uVar16 = param_4;
    if (0x2000 < param_4) {
      uVar16 = 0x2000;
    }
    if (bVar1 || bVar6 != 0) {
      FUN_ram_4ff45158(iVar8,param_2 + iVar7,uVar16);
      iVar17 = FUN_ram_481868c6(param_1,iVar8,uVar14,uVar16,param_5);
    }
    else {
      iVar17 = FUN_ram_481868c6(param_1,param_2 + iVar7,uVar14,uVar16,param_5);
    }
    if (iVar17 != 0) break;
    uVar20 = 0;
    if (bVar2) {
      FUN_ram_4ff45158(param_3 + iVar7,uVar14,uVar16);
    }
    else {
      uVar14 = param_3 + uVar16 + iVar7;
    }
    param_4 = param_4 - uVar16;
    iVar7 = uVar16 + iVar7;
    if (param_4 == 0) {
LAB_ram_481869fa:
      if ((bVar1 || bVar6 != 0) && (iVar8 != 0)) {
        FUN_ram_48178af2(iVar8,uStack_7c);
        thunk_FUN_ram_4ff209c6(iVar8);
      }
      if ((bVar2) && (uVar14 != 0)) {
        FUN_ram_48178af2(uVar14,uStack_7c);
        thunk_FUN_ram_4ff209c6(uVar14);
      }
      return uVar20;
    }
  }
  uVar20 = 0xffffffff;
  goto LAB_ram_481869fa;
}


