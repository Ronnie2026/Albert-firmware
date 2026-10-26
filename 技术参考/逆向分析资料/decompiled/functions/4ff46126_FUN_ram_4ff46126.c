/* Firmware entry: 0x4ff46126 */

int FUN_ram_4ff46126(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iStack_74;
  undefined1 auStack_70 [64];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_74 = param_1;
  iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 8))(&iStack_74);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(iStack_74 + 4) + 0x44) == 0) {
      iVar1 = 0x6005;
    }
    else if (iStack_74 == DAT_ram_4ff6e0b8) {
      pcVar4 = *(code **)(*(int *)(iStack_74 + 8) + 8);
      if (pcVar4 != (code *)0x0) {
        iVar1 = (*pcVar4)(*(undefined4 *)(iStack_74 + 0xc),param_2,param_4);
        if (iVar1 == 0x10d) {
          return 0x10d;
        }
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e06();
        }
      }
      if (((param_3 != 0) && (param_2 <= *(uint *)(iStack_74 + 0x14))) &&
         (param_4 <= *(uint *)(iStack_74 + 0x14) - param_2)) {
        if ((param_2 & 0xf) == 0) {
          if (param_4 == 0) {
            return 0;
          }
          if ((param_4 & 0xf) != 0) {
            if (DAT_ram_4ff47dac != 0) {
              ets_printf(s_E__s__flash_encrypted_write_leng_ram_4ff52fe8,s_spi_flash_ram_4ff53094);
            }
            return 0x104;
          }
          uVar7 = param_3 + 0xb0100000;
          if ((uVar7 < 0xc0000) &&
             (iVar1 = (**(code **)PTR_PTR_ram_4ff53080)(iStack_74), iVar1 != 0)) {
            if (DAT_ram_4ff47dac == 0) {
              return iVar1;
            }
            ets_printf(s_E__s__flash_acquire_lock_failed_ram_4ff52fc4,s_spi_flash_ram_4ff53094);
            return iVar1;
          }
          uVar5 = 0;
          do {
            iVar1 = iStack_74;
            uVar8 = uVar5 + param_2;
            iVar2 = param_3 + uVar5;
            if ((uVar8 & 0x3f) == 0) {
              uVar3 = param_4 - uVar5;
              if (uVar3 < 0x40) {
LAB_ram_4ff462ae:
                if (uVar3 < 0x20) goto LAB_ram_4ff462b4;
                FUN_ram_4ff45158(auStack_70,iVar2,0x20);
                iVar2 = 0x20;
              }
              else {
                FUN_ram_4ff45158(auStack_70,iVar2,0x40);
                iVar2 = 0x40;
              }
              iVar6 = iVar2;
              if (uVar7 < 0xc0000) goto LAB_ram_4ff462c4;
LAB_ram_4ff46206:
              iVar1 = (**(code **)PTR_PTR_ram_4ff53080)(iVar1);
              if (iVar1 != 0) goto LAB_ram_4ff462da;
              pcVar4 = *(code **)(*(int *)(iStack_74 + 4) + 0x50);
              iVar1 = (*pcVar4)(iStack_74,auStack_70,uVar8,iVar6,*(int *)(iStack_74 + 4),pcVar4);
              if (iVar1 != 0) goto LAB_ram_4ff462da;
              iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(iStack_74,0);
            }
            else {
              if ((uVar8 & 0x1f) == 0) {
                uVar3 = param_4 - uVar5;
                goto LAB_ram_4ff462ae;
              }
LAB_ram_4ff462b4:
              FUN_ram_4ff45158(auStack_70,iVar2);
              iVar6 = 0x10;
              iVar2 = 0x10;
              if (0xbffff < uVar7) goto LAB_ram_4ff46206;
LAB_ram_4ff462c4:
              iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x50))(iVar1,auStack_70,uVar8,iVar2);
              iVar6 = iVar2;
            }
            if (iVar1 != 0) goto LAB_ram_4ff462da;
            uVar5 = uVar5 + iVar6;
          } while (uVar5 < param_4);
          if ((0xbffff < uVar7) ||
             (iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(iStack_74,0), iVar1 == 0)) {
            iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 0xc))
                              (iStack_74,0,0,param_2,param_4,*(code **)(PTR_PTR_ram_4ff53080 + 0xc))
            ;
            return iVar1;
          }
LAB_ram_4ff462da:
          (**(code **)(PTR_PTR_ram_4ff53080 + 4))(iStack_74,0);
          iVar2 = (**(code **)(PTR_PTR_ram_4ff53080 + 0xc))
                            (iStack_74,iVar1,0,param_2,param_4,
                             *(code **)(PTR_PTR_ram_4ff53080 + 0xc));
          if (iVar2 == 0) {
            return iVar1;
          }
          if (DAT_ram_4ff47dac == 0) {
            return iVar1;
          }
          ets_printf(s_OE__s__restore_cache_fail_ram_4ff52fa7 + 1,s_spi_flash_ram_4ff53094);
          return iVar1;
        }
        if (DAT_ram_4ff47dac != 0) {
          ets_printf(s_E__s__flash_encrypted_write_addr_ram_4ff53024,s_spi_flash_ram_4ff53094);
          return 0x102;
        }
      }
      iVar1 = 0x102;
    }
    else {
      iVar1 = 0x106;
    }
  }
  return iVar1;
}


