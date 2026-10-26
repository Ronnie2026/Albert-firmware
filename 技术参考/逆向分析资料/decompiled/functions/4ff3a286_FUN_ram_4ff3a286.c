/* Firmware entry: 0x4ff3a286 */

int FUN_ram_4ff3a286(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_8c = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  iStack_88 = 0;
  uVar2 = FUN_ram_4ff387c8();
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_espcoredump_src_ram_4ff55dc4 + 0x21,0x156,
                     s_esp_core_dump_image_check_ram_4ff58528,s_checksum_size_<__32_ram_4ff55db0);
  }
  iVar3 = FUN_ram_4ff3a142(&uStack_8c,&iStack_88);
  if (iVar3 == 0) {
    uVar7 = iStack_88 - uVar2;
    FUN_ram_4ff387d6(&uStack_38);
    uVar5 = uStack_8c;
    iVar3 = 0;
    for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - uVar1) {
      uVar1 = uVar6;
      if (0x20 < uVar6) {
        uVar1 = 0x20;
      }
      iVar4 = FUN_ram_4812e734(uVar5,iVar3,&uStack_5c,uVar1);
      if (iVar4 != 0) {
        uVar5 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s__Failed_to_read_data_f_ram_4ff55df8,uVar5,
                   s_esp_core_dump_flash_ram_4ff58544,iVar4);
        return iVar4;
      }
      FUN_ram_4ff387e2(&uStack_38,&uStack_5c,uVar1);
      iVar3 = iVar3 + uVar1;
    }
    FUN_ram_4ff3882e(&uStack_38,&uStack_84);
    iVar3 = FUN_ram_4812e734(uVar5,uVar7,&uStack_80,uVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4ff4511a(uStack_84,&uStack_80,uVar2);
      if (iVar3 == 0) {
        uVar5 = FUN_ram_4ff44cee();
        ets_printf(s_I___lu___s__Core_dump_data_check_ram_4ff55ebc,uVar5,
                   s_esp_core_dump_flash_ram_4ff58544);
        return 0;
      }
      uVar5 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s__Core_dump_data_check_ram_4ff55e6c,uVar5,
                 s_esp_core_dump_flash_ram_4ff58544);
      FUN_ram_4ff38774(s_Calculated_checksum_ram_4ff55e98,uStack_84);
      FUN_ram_4ff38774(s_Image_checksum_ram_4ff55eac,&uStack_80);
      iVar3 = 0x109;
    }
    else {
      uVar5 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s__Failed_to_read_check_ram_4ff55e30,uVar5,
                 s_esp_core_dump_flash_ram_4ff58544,iVar3);
    }
  }
  return iVar3;
}


