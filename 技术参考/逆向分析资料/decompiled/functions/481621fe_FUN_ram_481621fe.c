/* Firmware entry: 0x481621fe */

int FUN_ram_481621fe(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar1 = FUN_ram_48162edc(param_1,&uStack_18);
  if (iVar1 == 0) {
    iVar2 = FUN_ram_4ff4511a(param_1 + 0xa4,&uStack_18,8);
    iVar1 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_sd",
                       "E (%lu) %s: got corrupted data after increasing clock frequency\n",uVar3,
                       "sdmmc_sd");
      iVar1 = 0x108;
    }
    return iVar1;
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: send_scr returned 0x%x\n",uVar3,"sdmmc_sd",
                   "sdmmc_check_scr",iVar1);
  return iVar1;
}


