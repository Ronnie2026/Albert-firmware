/* Firmware entry: 0x4ff34f78 */

void FUN_ram_4ff34f78(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return;
  }
  uVar6 = 0;
  while( true ) {
    iStack_24 = 0;
    FUN_ram_4ff4127c(1,2,param_3,param_4 + uVar6,0x10000,&iStack_24);
    if (iStack_24 != 0x10000) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0x53,
                       s_s_do_load_from_flash_ram_4ff53e6c,
                       s_actual_mapped_len____CONFIG_MMU__ram_4ff55768);
    }
    FUN_ram_4ff4127c(0,1,&DAT_ram_43ff0000,param_1 + uVar6,0x10000,&iStack_24);
    if (iStack_24 != 0x10000) break;
    FUN_ram_4ff40e22(param_3,0x10000);
    FUN_ram_4ff40e22(&DAT_ram_43ff0000,0x10000);
    puVar5 = (undefined4 *)&DAT_ram_43ff0000;
    puVar4 = param_3;
    do {
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar5 != (undefined4 *)0x44000000);
    uVar6 = uVar6 + 0x10000;
    param_3 = param_3 + 0x4000;
    if (param_2 <= uVar6) {
      if (uVar6 == (param_2 + 0xffff & 0xffff0000)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0x69,
                       s_s_do_load_from_flash_ram_4ff53e6c,
                       s_mapped_size____ALIGN_UP_BY_size__ram_4ff557d0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_psram_xip_i_ram_4ff55794 + 0x24,0x56,
                   s_s_do_load_from_flash_ram_4ff53e6c,
                   s_actual_mapped_len____CONFIG_MMU__ram_4ff55768);
}


