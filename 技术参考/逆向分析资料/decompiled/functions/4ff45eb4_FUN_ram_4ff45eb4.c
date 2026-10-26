/* Firmware entry: 0x4ff45eb4 */

int FUN_ram_4ff45eb4(undefined4 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puStack_54;
  undefined1 auStack_50 [32];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_54 = param_1;
  iVar2 = (**(code **)(PTR_PTR_ram_4ff53080 + 8))(&puStack_54);
  if (iVar2 == 0) {
    if (*(int *)(puStack_54[1] + 0x44) == 0) {
      iVar2 = 0x6005;
    }
    else {
      if (*(code **)(puStack_54[2] + 8) != (code *)0x0) {
        iVar3 = (**(code **)(puStack_54[2] + 8))(puStack_54[3],param_3,param_4);
        if (iVar3 == 0x10d) {
          return 0x10d;
        }
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e06();
        }
      }
      if (((param_2 == (undefined1 *)0x0) || ((uint)puStack_54[5] < param_3)) ||
         (puStack_54[5] - param_3 < param_4)) {
        iVar2 = 0x102;
      }
      else if (param_4 != 0) {
        cVar1 = (**(code **)(*(int *)*puStack_54 + 0x24))((int *)*puStack_54,param_2);
        puVar5 = param_2 + -0x4ff00000;
        uVar6 = param_4;
        uVar8 = param_3;
        if (cVar1 == '\0' && puVar5 >= (undefined1 *)0xc0000) goto LAB_ram_4ff45fb0;
LAB_ram_4ff45f4e:
        uVar7 = uVar6;
        puVar9 = param_2;
        if (0x2000 < uVar6) {
          uVar7 = 0x2000;
        }
        do {
          if ((*(code **)(puStack_54[1] + 0x68) != (code *)0x0) &&
             (iVar2 = (**(code **)(puStack_54[1] + 0x68))(puStack_54,0), iVar2 != 0)) {
            return iVar2;
          }
          iVar2 = (**(code **)PTR_PTR_ram_4ff53080)(puStack_54);
          if (iVar2 != 0) {
            uVar4 = 0;
            goto LAB_ram_4ff4602c;
          }
          uVar6 = uVar6 - uVar7;
          iVar2 = (**(code **)(puStack_54[1] + 0x44))(puStack_54,puVar9,uVar8,uVar7);
          if (param_4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("esp_flash_api.c",0x49d,"esp_flash_write","len_remain < length");
          }
          if (iVar2 != 0) {
LAB_ram_4ff4602a:
            uVar4 = 1;
LAB_ram_4ff4602c:
            iVar3 = (**(code **)(PTR_PTR_ram_4ff53080 + 0xc))
                              (puStack_54,iVar2,uVar4,param_3,param_4);
            if (iVar3 == 0) {
              return iVar2;
            }
            if (DAT_ram_4ff47dac == 0) {
              return iVar2;
            }
            ets_printf(s_E__s__restore_cache_fail_ram_4ff53064,s_spi_flash_ram_4ff53094);
            return iVar2;
          }
          if (uVar6 == 0) {
            iVar2 = (**(code **)(PTR_PTR_ram_4ff53080 + 0xc))
                              (puStack_54,0,1,param_3,param_4,*(code **)(PTR_PTR_ram_4ff53080 + 0xc)
                              );
            return iVar2;
          }
          iVar2 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))(puStack_54,0);
          if (iVar2 != 0) goto LAB_ram_4ff4602a;
          uVar8 = uVar8 + uVar7;
          param_2 = param_2 + uVar7;
          if (cVar1 != '\0' || puVar5 < (undefined1 *)0xc0000) goto LAB_ram_4ff45f4e;
LAB_ram_4ff45fb0:
          uVar7 = uVar6;
          if (0x20 < uVar6) {
            uVar7 = 0x20;
          }
          FUN_ram_4ff45158(auStack_50,param_2,uVar7);
          puVar9 = auStack_50;
        } while( true );
      }
    }
  }
  return iVar2;
}


