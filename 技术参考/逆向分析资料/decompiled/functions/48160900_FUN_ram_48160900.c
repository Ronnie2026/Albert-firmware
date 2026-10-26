/* Firmware entry: 0x48160900 */

int FUN_ram_48160900(undefined4 param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  if (param_4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_io.c",0x2a8,"sdmmc_io_get_cis_data","inout_cis_size");
  }
  iVar1 = FUN_ram_481604a4(param_1,0,9,0x4000000,&uStack_64,3);
  if (iVar1 == 0) {
    uStack_64 = uStack_64 & 0xffffff;
    if (uStack_64 - 0x1000 < 0x17000) {
      uVar4 = *param_4;
      if (uVar4 == 0) {
        uVar4 = 0xffffffff;
      }
      uVar6 = 0;
      iVar1 = 0;
      uVar5 = param_3;
      do {
        iVar2 = FUN_ram_4816065e(param_1,0,uStack_64 + uVar6,&uStack_60);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = iVar1 - uVar6;
        if (iVar1 == -1) {
          iVar1 = (uStack_60 & 0xff) + 1;
        }
        else if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("sdmmc_io.c",0x28f,"check_tuples_in_buffer","cis_offset >= 0");
        }
        for (; iVar1 < 0x20; iVar1 = iVar1 + *(byte *)((int)&uStack_60 + iVar1 + 1) + 2) {
          if (*(char *)((int)&uStack_60 + iVar1) == -1) {
            iVar1 = iVar1 + 1;
            iVar2 = param_3 - uVar6;
            if (iVar1 < (int)(param_3 - uVar6)) {
              iVar2 = iVar1;
            }
            if (0 < iVar2) {
              FUN_ram_4ff45158(param_2 + uVar6,&uStack_60);
            }
            *param_4 = uVar6 + iVar1;
            if (uVar6 + iVar1 <= param_3) {
              return 0;
            }
            return 0x104;
          }
          if (iVar1 == 0x1f) break;
        }
        iVar1 = uVar6 + iVar1;
        uVar6 = uVar6 + 0x20;
        if (0 < (int)uVar5) {
          uVar3 = uVar5;
          if (0x20 < (int)uVar5) {
            uVar3 = 0x20;
          }
          FUN_ram_4ff45158(param_2 + -0x20 + uVar6,&uStack_60,uVar3);
        }
        uVar5 = uVar5 - 0x20;
      } while (uVar6 < uVar4);
      iVar1 = 0x105;
    }
    else {
      iVar1 = 0x108;
    }
  }
  return iVar1;
}


