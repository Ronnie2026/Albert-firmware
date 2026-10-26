/* Firmware entry: 0x4815ed9c */

int FUN_ram_4815ed9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48162cb4(param_1,param_1 + 0xb8);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: set_relative_addr returned 0x%x\n",uVar2,
                   "sdmmc_common","sdmmc_init_rca",iVar1);
  return iVar1;
}


