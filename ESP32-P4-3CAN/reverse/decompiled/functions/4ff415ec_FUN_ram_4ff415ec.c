/* Firmware entry: 0x4ff415ec */

undefined4 FUN_ram_4ff415ec(uint param_1,uint param_2,int param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    if (-1 < (int)param_2) {
      puVar3 = (uint *)&DAT_ram_5008c37c;
      piVar5 = (int *)&DAT_ram_5008c380;
      uVar2 = 0x7ff;
      goto LAB_ram_4ff4163a;
    }
  }
  else {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff41258();
    }
    if (param_2 < 0x40000000) {
      puVar3 = (uint *)&DAT_ram_5008e37c;
      piVar5 = (int *)&DAT_ram_5008e380;
      uVar2 = 0x3ff;
LAB_ram_4ff4163a:
      iVar4 = 0;
      while( true ) {
        if (param_1 == 1) {
          while ((*piVar5 = iVar4, -1 < (int)(*puVar3 << 0x14) || (param_3 != 2))) {
            iVar4 = iVar4 + 1;
            if (iVar4 == 0x400) {
              return 0;
            }
          }
          *piVar5 = iVar4;
          uVar1 = *puVar3;
        }
        else {
          while ((*piVar5 = iVar4, -1 < (int)(*puVar3 << 0x13) || (param_3 != (param_1 & 1) + 1))) {
            iVar4 = iVar4 + 1;
            if (iVar4 == 0x400) {
              return 0;
            }
          }
          *piVar5 = iVar4;
          uVar1 = *puVar3;
        }
        if ((uVar1 & uVar2) == param_2 >> 0x10) break;
        iVar4 = iVar4 + 1;
        if (iVar4 == 0x400) {
          return 0;
        }
      }
      uVar2 = 0x40000000;
      if (param_1 == 1) {
        uVar2 = 0x48000000;
      }
      *param_5 = iVar4 << 0x10 | param_2 & 0xffff | uVar2;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0xa5,
                   s_mmu_hal_paddr_to_vaddr_ram_4ff58624,
                   s_mmu_ll_check_valid_paddr_region__ram_4ff54888);
}


