/* Firmware entry: 0x4815ee6a */

int FUN_ram_4815ee6a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(uint *)(param_1 + 0xc4) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_common.c",0x96,"sdmmc_init_csd","card->is_mem == 1");
  }
  iVar1 = FUN_ram_48162dde(param_1,param_1 + 0x88);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: send_csd returned 0x%x\n",uVar2,
                     "sdmmc_common","sdmmc_init_csd",iVar1);
    return iVar1;
  }
  if ((-1 < *(int *)(param_1 + 0x68) << 1) &&
     (uVar3 = 0xffffffff / *(uint *)(param_1 + 0x94) + 1, uVar3 < *(uint *)(param_1 + 0x90))) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"sdmmc_common",
                     "W (%lu) %s: %s: SDSC card reports capacity=%u. Limiting to %u.\n",uVar2,
                     "sdmmc_common","sdmmc_init_csd",*(undefined4 *)(param_1 + 0x90),uVar3);
    *(uint *)(param_1 + 0x90) = uVar3;
    return 0;
  }
  return 0;
}


