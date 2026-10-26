/* Firmware entry: 0x4ff37026 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff37026(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = param_1[0x37];
  uVar10 = *param_1;
  if (*(char *)((int)param_1 + 5) != '\0') {
    puVar3 = param_1 + 7;
    puVar12 = param_1 + 0x27;
    iVar9 = 0;
    iVar11 = 0;
    uVar2 = uVar6 + uVar10;
    do {
      iVar4 = FUN_ram_4ff36ef4(uVar2,puVar3,8);
      if (iVar4 != 0) {
        uVar8 = 0x102;
        if (DAT_ram_4ff47dac == 0) {
          return 0x102;
        }
        uVar5 = FUN_ram_4ff44d14();
        ets_printf(s_E___lu___s___s__d___failed_to_do_ram_4ff53f5c,uVar5,
                   s_image_process_ram_4ff53e98,s_process_segment_ram_4ff581a0,0x89);
LAB_ram_4ff37160:
        if (DAT_ram_4ff47dac == 0) {
          return uVar8;
        }
        uVar5 = FUN_ram_4ff44d14();
        ets_printf(s_E___lu___s___s__d___failed_to_pr_ram_4ff53fc0,uVar5,
                   s_image_process_ram_4ff53e98,s_process_segments_ram_4ff581c4,0xc2);
        return uVar8;
      }
      uVar7 = puVar3[1];
      uVar2 = uVar2 + 8;
      if (*puVar3 + 0xb8000000 < 0x4000000) {
        uVar1 = uVar2;
        if ((iVar9 != 0) && (uVar1 = DAT_ram_4ff6d94c, iVar9 == 1)) {
          DAT_ram_4ff6d948 = uVar2;
        }
        DAT_ram_4ff6d94c = uVar1;
        iVar9 = iVar9 + 1;
      }
      if ((uVar7 & 3) != 0) {
        uVar8 = 0x103;
        if (DAT_ram_4ff47dac == 0) {
          return 0x103;
        }
        uVar5 = FUN_ram_4ff44d14();
        ets_printf(s_E___lu___s___s__d___unaligned_se_ram_4ff53f8c,uVar5,
                   s_image_process_ram_4ff53e98,s_process_segment_ram_4ff581a0,0xb0,uVar7);
        goto LAB_ram_4ff37160;
      }
      _DAT_ram_5008c380 = 0x3ff;
      _DAT_ram_5008c37c = 0;
      *puVar12 = uVar2;
      iVar11 = iVar11 + 1;
      DAT_ram_4ff47d90 = 0xffffffff;
      puVar12 = puVar12 + 1;
      uVar2 = uVar2 + puVar3[1];
      puVar3 = puVar3 + 2;
    } while (iVar11 < (int)(uint)*(byte *)((int)param_1 + 5));
    if (iVar9 == 2) {
      if (uVar2 < *param_1) {
        uVar8 = 0xffffffff;
      }
      else {
        param_1[0x37] = (param_1[0x37] - (uVar6 + uVar10)) + uVar2;
        uVar8 = 0;
      }
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_system_port_ram_4ff53f28 + 0x21,199,
                   s_process_segments_ram_4ff581b0,s_cnt____2_ram_4ff53f1c);
}


