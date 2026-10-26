/* Firmware entry: 0x4818705c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4818705c(char *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                int param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puStack_8c;
  uint *puStack_78;
  uint *puStack_74;
  uint *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != param_1[1]) {
    FUN_ram_48178af2(param_3,param_4);
    return 0xffffffde;
  }
  iVar4 = thunk_FUN_ram_4ff21be8(param_5);
  iVar4 = FUN_ram_4ff40f0c(iVar4 + 1,0);
  iVar5 = thunk_FUN_ram_4ff21be8(param_2);
  iVar5 = FUN_ram_4ff40f0c(iVar5 + 1,0);
  iVar6 = thunk_FUN_ram_4ff21be8(param_3);
  iVar6 = FUN_ram_4ff40f0c(iVar6 + 1,0);
  if (((iVar4 == 0) || (iVar5 == 0)) || (iVar6 == 0)) {
    FUN_ram_48178af2(param_3,param_4);
    uVar9 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Getting cache line size failed\n",uVar9,"esp-aes");
  }
  else {
    puStack_78 = (uint *)0x0;
    puStack_74 = (uint *)0x0;
    puStack_70 = (uint *)0x0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uVar12 = iVar4 << 1;
    if ((uint)(iVar4 << 1) < 0x10) {
      uVar12 = 0x10;
    }
    iVar4 = FUN_ram_481863bc(param_5,param_6,&uStack_6c,&uStack_68,uVar12,iVar4,0,0,&puStack_78,
                             &uStack_64,0);
    puVar1 = puStack_78;
    if (iVar4 != 0) {
      FUN_ram_48178af2(param_3,param_4);
      uVar9 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Generating aad DMA descriptors failed\n",uVar9,
                       "esp-aes");
      return 0xffffffff;
    }
    uVar12 = iVar5 << 1;
    if ((uint)(iVar5 << 1) < 0x10) {
      uVar12 = 0x10;
    }
    iStack_60 = 0;
    iStack_5c = 0;
    uStack_58 = 0;
    iVar4 = FUN_ram_481863bc(param_2,param_4,&iStack_60,&iStack_5c,uVar12,iVar5,0,0,&puStack_74,
                             &uStack_58,0);
    puVar2 = puStack_74;
    if (iVar4 != 0) {
      FUN_ram_48178af2(param_3,param_4);
      uVar9 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Generating input DMA descriptors failed\n",uVar9,
                       "esp-aes");
      return 0xffffffff;
    }
    puStack_8c = puStack_74;
    puVar3 = puVar1;
    if (puVar1 != (uint *)0x0) {
      do {
        puVar7 = puVar3;
        puVar3 = (uint *)puVar7[2];
      } while ((uint *)puVar7[2] != (uint *)0x0);
      puVar7[2] = (uint)puStack_74;
      *puVar7 = *puVar7 & 0xbfffffff;
      iVar4 = FUN_ram_4ff33956(puVar7,0x10,6);
      puStack_8c = puVar1;
      if (iVar4 != 0) goto LAB_ram_481874b2;
    }
    uVar16 = iVar6 << 1;
    if ((uint)(iVar6 << 1) < 0x10) {
      uVar16 = 0x10;
    }
    iStack_54 = 0;
    iStack_50 = 0;
    uStack_4c = 0;
    iStack_48 = 0;
    aiStack_44[0] = 0;
    iVar4 = FUN_ram_481863bc(param_3,param_4,&iStack_54,&iStack_50,uVar16,iVar6,&uStack_4c,
                             &iStack_48,&puStack_70,aiStack_44,1);
    iVar5 = aiStack_44[0];
    puVar3 = puStack_70;
    if (iVar4 != 0) {
      FUN_ram_48178af2(param_3,param_4);
      uVar9 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Generating output DMA descriptors failed\n",uVar9,
                       "esp-aes");
      return 0xffffffff;
    }
    puVar7 = (uint *)FUN_ram_48002128(8,1,0x10,0xc);
    if (puVar7 == (uint *)0x0) {
      FUN_ram_48178af2(param_3,param_4);
      uVar9 = FUN_ram_4ff44d14();
      pcVar11 = "E (%lu) %s: Failed to allocate memory for len descriptor\n";
    }
    else {
      uVar8 = FUN_ram_48002128(8,4,4,0xc);
      if (uVar8 != 0) {
        uVar9 = __bswapsi2(param_6 << 3);
        *(undefined4 *)(uVar8 + 4) = uVar9;
        uVar9 = __bswapsi2(param_4 << 3);
        uVar13 = *puVar7;
        *(undefined4 *)(uVar8 + 0xc) = uVar9;
        puVar7[1] = uVar8;
        puVar7[2] = 0;
        *puVar7 = uVar13 & 0x3f000000 | 0xc0010010;
        iVar4 = FUN_ram_4ff33956(uVar8,0x10,6);
        if ((iVar4 == 0) && (iVar4 = FUN_ram_4ff33956(puVar7,0x10,6), iVar4 == 0)) {
          puVar15 = puStack_8c;
          puVar14 = puVar7;
          if (puStack_8c != (uint *)0x0) {
            do {
              puVar14 = puVar15;
              puVar15 = (uint *)puVar14[2];
            } while ((uint *)puVar14[2] != (uint *)0x0);
            puVar14[2] = (uint)puVar7;
            *puVar14 = *puVar14 & 0xbfffffff;
            iVar4 = FUN_ram_4ff33956(puVar14,0x10,6);
            puVar14 = puStack_8c;
            if (iVar4 != 0) {
LAB_ram_481874b2:
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff36e1a(iVar4,"/IDF/components/mbedtls/port/aes/dma/esp_aes_dma_core.c",0x15b
                               ,"dma_desc_append",
                               "esp_cache_msync(it, sizeof(crypto_dma_desc_t), ESP_CACHE_MSYNC_FLAG_DIR_C2M | ESP_CACHE_MSYNC_FLAG_UNALIGNED)"
                              );
            }
          }
          puStack_8c = puVar14;
          if (2000 < param_4) {
            _DAT_ram_500900ac = 1;
            _DAT_ram_500900b0 = 1;
            iVar4 = FUN_ram_4818860e(puStack_8c,puVar3);
          }
          else {
            _DAT_ram_500900b0 = 0;
            iVar4 = FUN_ram_4818860e(puStack_8c,puVar3);
          }
          if (iVar4 == 0) {
            FUN_ram_4818b900((param_4 >> 4) + (uint)((param_4 & 0xf) != 0));
            iVar4 = FUN_ram_4818635a(2000 < param_4,puVar3 + iVar5 * 4 + -4);
            if (iVar4 == -1) {
              uVar9 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: esp_aes_dma_wait_complete failed\n",uVar9,
                               "esp-aes");
            }
            else {
              iVar4 = thunk_FUN_ram_4ff21be8(puVar3);
              iVar4 = FUN_ram_4ff40f0c(iVar4 + 1,0);
              iVar4 = FUN_ram_4ff33956(puVar3,iVar5 * 0x10 + -1 + iVar4 & -iVar4,8);
              if (iVar4 == 0) {
                if (iVar5 != 0) {
                  iVar4 = 0;
                  puVar15 = puVar3;
                  do {
                    iVar10 = FUN_ram_4ff33956(puVar15[1],
                                              (*puVar15 >> 0xc & 0xfff) + iVar6 + -1 & -iVar6,8);
                    if (iVar10 != 0) {
                      uVar9 = FUN_ram_4ff44d14();
                      FUN_ram_4ff44bf0(1,"esp-aes",
                                       "E (%lu) %s: Output DMA descriptor buffers cache sync M2C failed\n"
                                       ,uVar9,"esp-aes");
                      goto LAB_ram_48187394;
                    }
                    iVar4 = iVar4 + 1;
                    puVar15 = puVar15 + 4;
                  } while (iVar4 != iVar5);
                }
                FUN_ram_4818b7e4();
                iVar4 = iStack_54;
                if (uStack_4c != 0) {
                  uVar13 = param_4;
                  if (uStack_4c < param_4) {
                    uVar13 = uStack_4c;
                  }
                  FUN_ram_4ff45158(param_3,iStack_54,uVar13);
                }
                iVar5 = iStack_50;
                uVar9 = 0;
                if (iStack_48 != 0) {
                  uVar13 = param_4 + 0xf & 0xfffffff0;
                  FUN_ram_4ff45158(param_3 + (uVar13 - iStack_48),iStack_50,
                                   (param_4 + iStack_48) - uVar13);
                }
                goto LAB_ram_481873a2;
              }
              uVar9 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"esp-aes",
                               "E (%lu) %s: Output DMA descriptor cache sync M2C failed\n",uVar9,
                               "esp-aes");
            }
          }
          else {
            uVar9 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"esp-aes",
                             "E (%lu) %s: esp_aes_dma_start failed, no DMA channel available\n",
                             uVar9,"esp-aes");
          }
        }
        else {
          uVar9 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Length DMA descriptor cache sync C2M failed\n",
                           uVar9,"esp-aes");
        }
LAB_ram_48187394:
        FUN_ram_48178af2(param_3,param_4);
        uVar9 = 0xffffffff;
        iVar5 = iStack_50;
        iVar4 = iStack_54;
LAB_ram_481873a2:
        thunk_FUN_ram_4ff209c6(uStack_6c);
        thunk_FUN_ram_4ff209c6(uStack_68);
        thunk_FUN_ram_4ff209c6(puVar1);
        iVar6 = iStack_60;
        if (iStack_60 != 0) {
          FUN_ram_48178af2(iStack_60,uVar12);
          thunk_FUN_ram_4ff209c6(iVar6);
        }
        iVar6 = iStack_5c;
        if (iStack_5c != 0) {
          FUN_ram_48178af2(iStack_5c,uVar12);
          thunk_FUN_ram_4ff209c6(iVar6);
        }
        thunk_FUN_ram_4ff209c6(puVar2);
        if (iVar4 != 0) {
          FUN_ram_48178af2(iVar4,uVar16);
          thunk_FUN_ram_4ff209c6(iVar4);
        }
        if (iVar5 != 0) {
          FUN_ram_48178af2(iVar5,uVar16);
          thunk_FUN_ram_4ff209c6(iVar5);
        }
        thunk_FUN_ram_4ff209c6(puVar3);
        thunk_FUN_ram_4ff209c6(uVar8);
        thunk_FUN_ram_4ff209c6(puVar7);
        return uVar9;
      }
      FUN_ram_48178af2(param_3,param_4);
      uVar9 = FUN_ram_4ff44d14();
      pcVar11 = "E (%lu) %s: Failed to allocate memory for len buffer\n";
    }
    FUN_ram_4ff44bf0(1,"esp-aes",pcVar11,uVar9,"esp-aes");
  }
  return 0xffffffff;
}


