/* Firmware entry: 0x4816206e */

int FUN_ram_4816206e(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0x106;
  if ((*(uint *)(param_1 + 0xa4) & 0xf) != 0) {
    iVar1 = 0x106;
    if ((*(uint *)(param_1 + 0x9c) & 0x400) == 0) {
      return 0x106;
    }
    iVar2 = FUN_ram_4ff2091a(1,0x40,8);
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): no mem for response buf\n",uVar3,"sdmmc_sd"
                       ,"sdmmc_select_current_limit",0x23c);
      iVar1 = 0x101;
    }
    else {
      if ((((*(uint *)(param_1 + 0xa4) & 0xf) == 0) || ((*(uint *)(param_1 + 0x9c) & 0x400) == 0))
         || (iVar1 = FUN_ram_48161344(param_1,1,4,param_2,iVar2), iVar1 != 0)) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_sd",
                         "E (%lu) %s: %s(%d): %s: sdmmc_send_cmd_switch_func (1) returned 0x%x\n",
                         uVar3,"sdmmc_sd","sdmmc_select_current_limit",0x23f,
                         "sdmmc_select_current_limit",iVar1);
      }
      else {
        uVar4 = *(uint *)(iVar2 + 0x30) >> 4 & 0xf;
        if (uVar4 == 0xf) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): switch group4 result fail\n",uVar3,
                           "sdmmc_sd","sdmmc_select_current_limit",0x242);
          iVar1 = 0x106;
        }
        else if (uVar4 != param_2) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s(%d): fail to switch to type 0x%x\n",uVar3,
                           "sdmmc_sd","sdmmc_select_current_limit",0x244,param_2);
          iVar1 = 0x102;
        }
      }
      thunk_FUN_ram_4ff209c6(iVar2);
    }
  }
  return iVar1;
}


