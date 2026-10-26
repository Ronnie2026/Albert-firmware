/* Firmware entry: 0x4816148c */

int FUN_ram_4816148c(uint *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4ff206d8(0x40,8);
  if (iVar2 == 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: not enough mem, err=0x%x\n",uVar5,"sdmmc_sd",
                     "sdmmc_enter_higher_speed_mode",0x101);
    return 0x101;
  }
  if (((param_1[0x29] & 0xf) != 0) && ((param_1[0x27] & 0x400) != 0)) {
    iVar3 = FUN_ram_48161344(param_1,0,1,0,iVar2);
    if (iVar3 != 0) goto LAB_ram_481614f2;
    uVar1 = *(ushort *)(iVar2 + 0x32);
    if (((*param_1 & 0x10) == 0) || ((param_1[0x31] & 0x200) == 0)) {
      if ((int)param_1[2] < 0x32c80) {
        if ((int)param_1[2] < 100000) {
          if ((((uVar1 & 2) != 0) && ((param_1[0x29] & 0xf) != 0)) && ((param_1[0x27] & 0x400) != 0)
             ) {
            iVar3 = FUN_ram_48161344(param_1,1,1,1,iVar2);
            goto LAB_ram_481614f2;
          }
        }
        else if ((((uVar1 & 4) != 0) && ((param_1[0x29] & 0xf) != 0)) &&
                ((param_1[0x27] & 0x400) != 0)) {
          iVar3 = FUN_ram_48161344(param_1,1,1,2,iVar2);
          goto LAB_ram_481614f2;
        }
      }
      else if ((((uVar1 & 8) != 0) && ((param_1[0x29] & 0xf) != 0)) &&
              ((param_1[0x27] & 0x400) != 0)) {
        iVar3 = FUN_ram_48161344(param_1,1,1,3,iVar2);
        goto LAB_ram_481614f2;
      }
    }
    else if ((((uVar1 & 0x10) != 0) && ((param_1[0x29] & 0xf) != 0)) &&
            ((param_1[0x27] & 0x400) != 0)) {
      iVar3 = FUN_ram_48161344(param_1,1,1,4,iVar2);
      if (iVar3 == 0) {
        param_1[0x31] = param_1[0x31] | 0x100;
        iVar4 = (*(code *)param_1[9])(param_1[1],1);
        iVar3 = 0;
        if (iVar4 != 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: failed to switch bus to DDR mode (0x%x)\n",
                           uVar5,"sdmmc_sd","sdmmc_enter_higher_speed_mode",iVar4);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar4;
        }
      }
      goto LAB_ram_481614f2;
    }
  }
  iVar3 = 0x106;
LAB_ram_481614f2:
  thunk_FUN_ram_4ff209c6(iVar2);
  return iVar3;
}


