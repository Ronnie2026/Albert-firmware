/* Firmware entry: 0x48161650 */

int FUN_ram_48161650(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481628b0(param_1,0xff8000);
  if (iVar1 == 0) {
    uVar3 = 0x40ff8000;
  }
  else {
    if ((iVar1 != 0x107) && (((*param_1 & 8) == 0 || (iVar1 != 0x106)))) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: send_if_cond (1) returned 0x%x\n",uVar2,
                       "sdmmc_sd","sdmmc_init_sd_if_cond",iVar1);
      return iVar1;
    }
    uVar3 = 0xff8000;
  }
  param_1[0x1a] = uVar3;
  return 0;
}


