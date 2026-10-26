/* Firmware entry: 0x48187818 */

undefined4
FUN_ram_48187818(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined4 param_6
                )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    uVar8 = 0x40;
  }
  else {
    uVar8 = 0x80;
    if (4 < param_1 - 3) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-sha","E (%lu) %s: Unsupported SHA type\n",uVar5,"esp-sha");
      return 0xffffffff;
    }
  }
  puVar7 = &DAT_ram_4ff534d0;
  DAT_ram_4ff534d0 = 0;
  DAT_ram_4ff534d4 = 0;
  DAT_ram_4ff534d8 = 0;
  DAT_ram_4ff534dc = 0;
  DAT_ram_4ff534c0 = 0;
  DAT_ram_4ff534c4 = 0;
  DAT_ram_4ff534c8 = (undefined4 *)0x0;
  DAT_ram_4ff534cc = 0;
  iVar3 = FUN_ram_4ff20684();
  if ((iVar3 == 0) ||
     ((((iVar3 = thunk_FUN_ram_4ff21be8(param_2), iVar3 == 0 &&
        (iVar3 = thunk_FUN_ram_4ff21be8(param_4), iVar3 == 0)) && (0x3ffffff < param_2 + 0xc0000000)
       ) && (0x3ffffff < param_4 + 0xc0000000)))) {
    if (param_3 == 0) {
      if (param_5 == 0) goto LAB_ram_48187b7a;
LAB_ram_48187b80:
      DAT_ram_4ff534c0 =
           (param_5 << 0xc | param_5 | 0xc0000000) & 0xc0ffffff | DAT_ram_4ff534c0 & 0x3f000000;
    }
    else {
      DAT_ram_4ff534d0 =
           (param_3 << 0xc | param_3 | 0xc0000000) & 0xc0ffffff | DAT_ram_4ff534d0 & 0x3f000000;
      DAT_ram_4ff534d4 = param_2;
      if (param_5 == 0) goto LAB_ram_481878be;
LAB_ram_48187af6:
      DAT_ram_4ff534c0 =
           (param_5 << 0xc | param_5 | 0x80000000) & 0xc0ffffff | DAT_ram_4ff534c0 & 0x3f000000;
      DAT_ram_4ff534c8 = &DAT_ram_4ff534d0;
      DAT_ram_4ff534d4 = param_2;
    }
    DAT_ram_4ff534c4 = param_4;
    iVar3 = thunk_FUN_ram_4ff21be8(param_2);
    puVar7 = &DAT_ram_4ff534c0;
joined_r0x48187b2e:
    if (iVar3 != 0) {
      FUN_ram_4ff33956(param_2,param_3,6);
    }
    iVar3 = thunk_FUN_ram_4ff21be8(param_4);
    if (iVar3 != 0) {
      FUN_ram_4ff33956(param_4,param_5,6);
    }
    if (param_3 != 0) {
      iVar3 = FUN_ram_4ff33956(&DAT_ram_4ff534d0,0x10,6);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff36e1a(iVar3,"/IDF/components/mbedtls/port/sha/core/sha.c",0x12a,
                         "esp_sha_dma_process",
                         "esp_cache_msync(&s_dma_descr_input, sizeof(crypto_dma_desc_t), ESP_CACHE_MSYNC_FLAG_DIR_C2M | ESP_CACHE_MSYNC_FLAG_UNALIGNED)"
                        );
      }
      iVar3 = FUN_ram_4ff33956(DAT_ram_4ff534d4,(DAT_ram_4ff534d0 & 0xffffff) >> 0xc,6);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff36e1a(iVar3,"/IDF/components/mbedtls/port/sha/core/sha.c",299,
                         "esp_sha_dma_process",
                         "esp_cache_msync(s_dma_descr_input.buffer, s_dma_descr_input.dw0.length, ESP_CACHE_MSYNC_FLAG_DIR_C2M | ESP_CACHE_MSYNC_FLAG_UNALIGNED)"
                        );
      }
    }
    if (param_5 != 0) {
      iVar3 = FUN_ram_4ff33956(&DAT_ram_4ff534c0,0x10,6);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff36e1a(iVar3,"/IDF/components/mbedtls/port/sha/core/sha.c",0x12f,
                         "esp_sha_dma_process",
                         "esp_cache_msync(&s_dma_descr_buf, sizeof(crypto_dma_desc_t), ESP_CACHE_MSYNC_FLAG_DIR_C2M | ESP_CACHE_MSYNC_FLAG_UNALIGNED)"
                        );
      }
      iVar3 = FUN_ram_4ff33956(DAT_ram_4ff534c4,(DAT_ram_4ff534c0 & 0xffffff) >> 0xc,6);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff36e1a(iVar3,"/IDF/components/mbedtls/port/sha/core/sha.c",0x130,
                         "esp_sha_dma_process",
                         "esp_cache_msync(s_dma_descr_buf.buffer, s_dma_descr_buf.dw0.length, ESP_CACHE_MSYNC_FLAG_DIR_C2M | ESP_CACHE_MSYNC_FLAG_UNALIGNED)"
                        );
      }
    }
    iVar3 = FUN_ram_48188608(puVar7);
    if (iVar3 == 0) {
      FUN_ram_4818b680((param_3 + param_5) / uVar8,param_6);
      FUN_ram_4818b696();
      return 0;
    }
    uVar5 = FUN_ram_4ff44d14();
    pcVar6 = "E (%lu) %s: esp_sha_dma_start failed, no DMA channel available\n";
LAB_ram_48187c7e:
    FUN_ram_4ff44bf0(1,"esp-sha",pcVar6,uVar5,"esp-sha");
    return 0xffffffff;
  }
  if (param_3 == 0) {
    if (param_5 == 0) {
LAB_ram_48187b7a:
      puVar7 = (uint *)0x0;
LAB_ram_481878be:
      iVar3 = thunk_FUN_ram_4ff21be8(param_2);
      goto joined_r0x48187b2e;
    }
    if ((param_4 & 0xf) == 0) goto LAB_ram_48187b80;
LAB_ram_48187b4a:
    uVar8 = 0;
    bVar2 = false;
  }
  else {
    if ((param_2 & 0xf) == 0) {
      if (param_5 == 0) {
        DAT_ram_4ff534d0 =
             (param_3 << 0xc | param_3 | 0xc0000000) & 0xc0ffffff | DAT_ram_4ff534d0 & 0x3f000000;
        DAT_ram_4ff534d4 = param_2;
        goto LAB_ram_481878be;
      }
      if ((param_4 & 0xf) == 0) {
        DAT_ram_4ff534d0 =
             (param_3 << 0xc | param_3 | 0xc0000000) & 0xc0ffffff | DAT_ram_4ff534d0 & 0x3f000000;
        goto LAB_ram_48187af6;
      }
      goto LAB_ram_48187b4a;
    }
    bVar1 = (param_4 & 0xf) != 0;
    bVar2 = param_5 != 0 && bVar1;
    iVar3 = thunk_FUN_ram_4ff21be8(param_2);
    uVar4 = FUN_ram_4ff20956(0x10,param_3,(-(uint)(iVar3 == 0) & 0x408) + 0x404);
    if (uVar4 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      pcVar6 = "E (%lu) %s: Failed to allocate aligned SPIRAM memory\n";
      goto LAB_ram_48187c7e;
    }
    FUN_ram_4ff45158(uVar4,param_2,param_3);
    param_2 = uVar4;
    uVar8 = uVar4;
    if (param_5 == 0 || !bVar1) {
      uVar5 = FUN_ram_48187818(param_1,uVar4,param_3,param_4,param_5,param_6);
      FUN_ram_48178af2(uVar4,param_3);
      goto LAB_ram_48187a02;
    }
  }
  iVar3 = thunk_FUN_ram_4ff21be8(param_4);
  uVar4 = FUN_ram_4ff20956(0x10,param_5,(-(uint)(iVar3 == 0) & 0x408) + 0x404);
  if (uVar4 == 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-sha","E (%lu) %s: Failed to allocate aligned internal memory\n",uVar5,
                     "esp-sha");
    if (uVar8 != 0) {
      FUN_ram_48178af2(uVar8,param_3);
      thunk_FUN_ram_4ff209c6(uVar8);
    }
    return 0xffffffff;
  }
  FUN_ram_4ff45158(uVar4,param_4,param_5);
  uVar5 = FUN_ram_48187818(param_1,param_2,param_3,uVar4,param_5,param_6);
  if (bVar2) {
    FUN_ram_48178af2(uVar8,param_3);
    thunk_FUN_ram_4ff209c6(uVar8);
  }
  FUN_ram_48178af2(uVar4,param_5);
LAB_ram_48187a02:
  thunk_FUN_ram_4ff209c6(uVar4);
  return uVar5;
}


