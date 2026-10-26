/* Firmware entry: 0x48161eae */

int FUN_ram_48161eae(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[0x2f] = 20000;
  uVar3 = param_1[2];
  if (20000 < param_1[2]) {
    if ((param_1[0x29] & 0xf) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x106;
    }
    if ((param_1[0x27] & 0x400) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x106;
    }
    iVar1 = FUN_ram_4816148c();
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    if ((*param_1 & 8) == 0) {
      iVar1 = FUN_ram_48162e8c(param_1,0);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: select_card (1) returned 0x%x\n",uVar2,
                         "sdmmc_sd","sdmmc_enable_hs_mode_and_check",iVar1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
      iVar1 = FUN_ram_48162dde(param_1,param_1 + 0x22);
      if (iVar1 != 0) {
LAB_ram_48161f7a:
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: send_csd returned 0x%x\n",uVar2,"sdmmc_sd",
                         "sdmmc_enable_hs_mode_and_check",iVar1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
      iVar1 = FUN_ram_48162e8c(param_1,(short)param_1[0x2e]);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: select_card (2) returned 0x%x\n",uVar2,
                         "sdmmc_sd","sdmmc_enable_hs_mode_and_check",iVar1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
    }
    else {
      iVar1 = FUN_ram_48162dde(param_1,param_1 + 0x22);
      if (iVar1 != 0) goto LAB_ram_48161f7a;
    }
    uVar3 = param_1[2];
    if (0x32c80 < (int)param_1[2]) {
      uVar3 = 0x32c80;
    }
  }
  param_1[0x2f] = uVar3;
  return 0;
}


