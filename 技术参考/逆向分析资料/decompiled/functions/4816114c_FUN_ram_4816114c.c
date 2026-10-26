/* Firmware entry: 0x4816114c */

int FUN_ram_4816114c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(uint *)(param_1 + 0xc4) & 1) == 0) || (*(short *)(param_1 + 0xb8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_mmc.c",0xf4,"sdmmc_init_mmc_check_ext_csd",
                     "card->is_mem == 1 && card->rca != 0");
  }
  iVar1 = 0;
  if (26000 < *(uint *)(param_1 + 0xbc)) {
    iVar1 = FUN_ram_4ff206d8(0x200,8);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_480020d8();
      iVar3 = FUN_ram_48163054(param_1,auStack_24);
      if (iVar3 == 0) {
        if ((auStack_24[0] & 0x1e00) == 0x800) {
          iVar3 = FUN_ram_48160e56(param_1,iVar1,0x200,uVar2);
          if (iVar3 == 0) {
            if (*(char *)(param_1 + 0xb4) == *(char *)(iVar1 + 0xc0)) {
              if (*(char *)(param_1 + 0xb7) == *(char *)(iVar1 + 0xe7)) goto LAB_ram_48161256;
            }
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: Data integrity test fail in HS mode\n",
                             uVar2,"sdmmc_mmc","sdmmc_init_mmc_check_ext_csd");
            iVar3 = -1;
          }
          else {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: send_ext_csd_data error 0x%x\n",uVar2,
                             "sdmmc_mmc","sdmmc_init_mmc_check_ext_csd",iVar3);
          }
        }
        else {
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: card not in transfer state\n",uVar2,
                           "sdmmc_mmc","sdmmc_init_mmc_check_ext_csd");
          iVar3 = 0x103;
        }
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: send_status returned 0x%x\n",uVar2,
                         "sdmmc_mmc","sdmmc_init_mmc_check_ext_csd",iVar3);
      }
LAB_ram_48161256:
      thunk_FUN_ram_4ff209c6(iVar1);
      return iVar3;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: not enough mem, err=0x%x\n",uVar2,"sdmmc_mmc",
                     "sdmmc_init_mmc_check_ext_csd",0x101);
    iVar1 = 0x101;
  }
  return iVar1;
}


