/* Firmware entry: 0x4815f0be */

int FUN_ram_4815f0be(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(uint *)(param_1 + 0xbc);
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_common.c",0xed,"sdmmc_init_host_frequency",
                     "card->max_freq_khz <= card->host.max_freq_khz");
  }
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 == 4) {
    if ((uVar3 != 100000) && (uVar3 != 0x32c80)) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_common",
                       "E (%lu) %s: %s(%d): auto tuning only supported for SDR50 / SDR104\n",uVar1,
                       "sdmmc_common","sdmmc_init_host_frequency",0xf4);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x102;
    }
    if (400 < uVar2) goto LAB_ram_4815f0e2;
  }
  else {
    if (400 < uVar2) {
LAB_ram_4815f0e2:
      iVar4 = (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 4));
      if (iVar4 != 0) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: failed to switch bus frequency (0x%x)\n",
                         uVar1,"sdmmc_common",iVar4);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x48);
    }
    if (iVar4 == 0) goto LAB_ram_4815f0f2;
  }
  if (*(code **)(param_1 + 0x4c) == (code *)0x0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: input phase delay feature isn\'t supported\n",
                     uVar1,"sdmmc_common");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x106;
  }
  iVar4 = (**(code **)(param_1 + 0x4c))(*(undefined4 *)(param_1 + 4),iVar4);
  if (iVar4 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: host.set_input_delay failed (0x%x)\n",uVar1,
                     "sdmmc_common",iVar4);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar4;
  }
LAB_ram_4815f0f2:
  iVar4 = (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 4),param_1 + 0xc0);
  if (iVar4 == 0) {
    iVar4 = 0;
    if ((*(uint *)(param_1 + 0xc4) & 0x100) != 0) {
      if (*(code **)(param_1 + 0x24) == (code *)0x0) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_common",
                         "E (%lu) %s: host doesn\'t support DDR mode or voltage switching\n",uVar1,
                         "sdmmc_common");
        iVar4 = 0x106;
      }
      else {
        iVar4 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 4),1);
        if (iVar4 != 0) {
          uVar1 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: failed to switch bus to DDR mode (0x%x)\n",
                           uVar1,"sdmmc_common",iVar4);
        }
      }
    }
    return iVar4;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: failed to get real working frequency (0x%x)\n",
                   uVar1,"sdmmc_common",iVar4);
  return iVar4;
}


