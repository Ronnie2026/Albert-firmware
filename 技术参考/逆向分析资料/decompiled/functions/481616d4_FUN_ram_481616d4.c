/* Firmware entry: 0x481616d4 */

int FUN_ram_481616d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  if ((-1 < *(int *)(param_1 + 0x68) << 1) &&
     (iVar1 = FUN_ram_48162d98(param_1,param_1 + 0x88), iVar1 != 0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: set_blocklen returned 0x%x\n",uVar2,"sdmmc_sd",
                     "sdmmc_init_sd_blocklen",iVar1);
  }
  return iVar1;
}


