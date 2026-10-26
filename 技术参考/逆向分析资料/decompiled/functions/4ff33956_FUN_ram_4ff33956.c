/* Firmware entry: 0x4ff33956 */

undefined4 FUN_ram_4ff33956(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___null_pointer_ram_4ff56c98,uVar3,s_cache_ram_4ff56c90,
                 s_esp_cache_msync_ram_4ff53e08,0x61);
    }
  }
  else {
    if (param_1 + param_2 < param_1) {
      if (DAT_ram_4ff47dac == 0) {
        return 0x102;
      }
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___wrong_size__t_ram_4ff56cec,uVar3,s_cache_ram_4ff56c90,
                 s_esp_cache_msync_ram_4ff53e08,0x66);
      return 0x102;
    }
    if (((param_3 & 0xc) == 0xc) || ((param_3 & 0x30) == 0x30)) {
      if (DAT_ram_4ff47dac == 0) {
        return 0x102;
      }
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___both_C2M_and_ram_4ff56d24,uVar3,s_cache_ram_4ff56c90,
                 s_esp_cache_msync_ram_4ff53e08,0x6a);
      return 0x102;
    }
    uStack_28 = 0;
    auStack_24[0] = 0;
    iVar1 = FUN_ram_4ff40dd6(param_1,param_2,&uStack_28,auStack_24);
    if (iVar1 == 0) {
      if (DAT_ram_4ff47dac == 0) {
        return 0x102;
      }
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___invalid_addr_ram_4ff56db8,uVar3,s_cache_ram_4ff56c90,
                 s_esp_cache_msync_ram_4ff53e08,0x71);
      return 0x102;
    }
    uVar2 = FUN_ram_4ff40f0c(uStack_28,(param_3 & 0x20) >> 5);
    if ((param_3 & 2) == 0) {
      if ((param_1 % uVar2 != 0) || (param_2 % uVar2 != 0)) {
        if (DAT_ram_4ff47dac == 0) {
          return 0x102;
        }
        uVar3 = FUN_ram_4ff44d14();
        ets_printf(s_E___lu___s___s__d___start_addres_ram_4ff56dec,uVar3,s_cache_ram_4ff56c90,
                   s_esp_cache_msync_ram_4ff53e08,0x7a,param_1,param_2,uVar2);
        return 0x102;
      }
      if ((param_3 & 8) != 0) {
        FUN_ram_4ff3eb8c();
        FUN_ram_4ff3ec14(&DAT_ram_4ff47f10,0xffffffff);
        iVar1 = FUN_ram_4ff40e22(param_1,param_2);
        FUN_ram_4ff3eb8c();
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f10);
        if (iVar1 != 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_mm_esp_cach_ram_4ff56eb4 + 0x18,0x89,
                         s_esp_cache_msync_ram_4ff53df8,s_valid_ram_4ff56eac);
      }
    }
    else if ((param_3 & 8) != 0) {
      if (DAT_ram_4ff47dac == 0) {
        return 0x102;
      }
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___M2C_directio_ram_4ff56e5c,uVar3,s_cache_ram_4ff56c90,
                 s_esp_cache_msync_ram_4ff53e08,0x82);
      return 0x102;
    }
    if ((param_3 & 0x20) == 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ec14(&DAT_ram_4ff47f10,0xffffffff);
      iVar1 = FUN_ram_4ff40eb2(param_1,param_2);
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(&DAT_ram_4ff47f10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_mm_esp_cach_ram_4ff56eb4 + 0x18,0x44,
                         s_s_c2m_ops_ram_4ff53dec,s_valid_ram_4ff56eac);
      }
      if ((param_3 & 1) != 0) {
        FUN_ram_4ff3eb8c();
        FUN_ram_4ff3ec14(&DAT_ram_4ff47f10,0xffffffff);
        iVar1 = FUN_ram_4ff40e22(param_1,param_2);
        FUN_ram_4ff3eb8c();
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f10);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88(s___IDF_components_esp_mm_esp_cach_ram_4ff56eb4 + 0x18,0x98,
                           s_esp_cache_msync_ram_4ff53df8,s_valid_ram_4ff56eac);
        }
      }
      return 0;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s___s__d___C2M_directio_ram_4ff56ee0,uVar3,s_cache_ram_4ff56c90,
                 s_esp_cache_msync_ram_4ff53e08,0x8d);
    }
  }
  return 0x102;
}


