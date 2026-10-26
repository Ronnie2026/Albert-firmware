/* Firmware entry: 0x48160d9c */

undefined4 FUN_ram_48160d9c(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = uVar3 >> 0x1e;
  *param_2 = uVar2;
  if (2 < uVar2 - 1) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: unknown MMC CSD structure version 0x%x\n",uVar1,
                     "sdmmc_mmc",*param_2);
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 8) >> 0x10 & 0xf;
  uVar4 = (*(uint *)(param_1 + 4) >> 0x1e | (*(uint *)(param_1 + 8) & 0x3ff) << 2) + 1 <<
          (*(uint *)(param_1 + 4) >> 0xf & 7) + 2;
  param_2[1] = uVar3 >> 0x1a & 0xf;
  param_2[4] = uVar2;
  uVar2 = 1 << uVar2;
  param_2[2] = uVar4;
  if ((int)uVar2 < 0x201) {
    param_2[3] = uVar2;
  }
  else {
    param_2[3] = 0x200;
    param_2[2] = ((int)uVar2 >> 9) * uVar4;
  }
  param_2[6] = 0;
  return 0;
}


