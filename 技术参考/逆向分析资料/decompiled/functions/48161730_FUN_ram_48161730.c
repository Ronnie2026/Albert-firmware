/* Firmware entry: 0x48161730 */

int FUN_ram_48161730(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48162edc(param_1,param_1 + 0x29);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: send_scr (1) returned 0x%x\n",uVar2,"sdmmc_sd",
                     "sdmmc_init_sd_scr",iVar1);
    return iVar1;
  }
  if (((param_1[0x29] >> 5 & 4) != 0) && ((*param_1 & 2) != 0)) {
    param_1[0x31] = param_1[0x31] & 0xffffff3f | 0x80;
    return 0;
  }
  param_1[0x31] = param_1[0x31] & 0xffffff3f;
  return 0;
}


