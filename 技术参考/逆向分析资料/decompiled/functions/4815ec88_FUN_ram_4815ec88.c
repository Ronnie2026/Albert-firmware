/* Firmware entry: 0x4815ec88 */

int FUN_ram_4815ec88(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 & 8) == 0) {
    iVar1 = FUN_ram_48162b3e(param_1,auStack_20);
    if (iVar1 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: all_send_cid returned 0x%x\n",uVar3,
                       "sdmmc_common","sdmmc_init_cid",iVar1);
      return iVar1;
    }
    if ((param_1[0x31] & 4) != 0) {
      FUN_ram_4ff45158(param_1 + 0x1b,auStack_20,0x10);
      return 0;
    }
    iVar1 = FUN_ram_48162348(auStack_20,param_1 + 0x1b);
    if (iVar1 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: decoding CID failed (0x%x)\n",uVar3,
                       "sdmmc_common","sdmmc_init_cid",iVar1);
    }
  }
  else {
    iVar2 = FUN_ram_48162bc8(param_1,param_1 + 0x1b);
    iVar1 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: send_cid returned 0x%x\n",uVar3,
                       "sdmmc_common","sdmmc_init_cid",iVar2);
      return iVar2;
    }
  }
  return iVar1;
}


