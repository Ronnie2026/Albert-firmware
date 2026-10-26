/* Firmware entry: 0x4ff34062 */

int FUN_ram_4ff34062(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_30;
  uint uStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff59fcc == '\0') && (iVar3 = FUN_ram_4ff34230(), iVar3 != 0)) {
    return iVar3;
  }
  iVar3 = FUN_ram_4ff20626();
  if (iVar3 == 300) {
    FUN_ram_4ff21aca();
  }
  local_30 = 0;
  iVar3 = FUN_ram_4ff34f58(&local_30);
  uVar2 = local_30;
  if (iVar3 == 0) {
    aiStack_24[0] = 0;
    iVar4 = FUN_ram_4ff35272(0,local_30,aiStack_24);
    iVar3 = aiStack_24[0];
    if (iVar4 == 0) {
      iVar4 = FUN_ram_4ff350f8(aiStack_24[0],uVar2,aiStack_24);
      if (iVar4 == 0) {
        iVar3 = iVar3 + aiStack_24[0];
        uVar2 = uVar2 + iVar3 * -0x10000;
        uStack_2c = 0;
        local_30 = uVar2;
        iVar4 = FUN_ram_481a60d4(0x1e,2,&uStack_2c);
        uVar1 = uStack_2c;
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0x133,
                           "s_psram_mapping",s_ret____ESP_OK_ram_4ff55338);
        }
        uVar6 = uStack_2c;
        if (uVar2 < uStack_2c) {
          uVar6 = uVar2;
        }
        iStack_28 = 0;
        iVar4 = FUN_ram_481a61e2(uVar6,0x1e,2,&iStack_28);
        if (iVar4 == 0) {
          aiStack_24[0] = 0;
          FUN_ram_4ff4127c(1,2,iStack_28,iVar3 * 0x10000,uVar6,aiStack_24);
          DAT_ram_4ff59fd4 = iStack_28 + uVar6;
          DAT_ram_4ff59fe8 = iStack_28;
          DAT_ram_4ff59fd0 = iStack_28;
          DAT_ram_4ff59fd8 = uVar6;
          DAT_ram_4ff59fec = DAT_ram_4ff59fd4;
          DAT_ram_4ff59ff0 = uVar6;
          if ((uVar1 < uVar2) && (1 < DAT_ram_4ff47dac)) {
            uVar5 = FUN_ram_4ff44d14();
            ets_printf(s_W___lu___s__Virtual_address_not_e_ram_4ff553e0,uVar5,
                       s_esp_psram_ram_4ff4c5a8,uVar6 >> 0x14);
          }
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          DAT_ram_4ff59fcd = 1;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0x138,
                         "s_psram_mapping",s_ret____ESP_OK_ram_4ff55338);
      }
      if (DAT_ram_4ff47dac != 0) {
        uVar5 = FUN_ram_4ff44d14();
        ets_printf(s_E___lu___s__No_enough_psram_memo_ram_4ff553ac,uVar5,s_esp_psram_ram_4ff4c5a8);
      }
    }
    else if (DAT_ram_4ff47dac != 0) {
      uVar5 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__No_enough_psram_memo_ram_4ff5537c,uVar5,s_esp_psram_ram_4ff4c5a8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0x1dc,"esp_psram_init",
                   s_ret____ESP_OK_ram_4ff55338);
}


