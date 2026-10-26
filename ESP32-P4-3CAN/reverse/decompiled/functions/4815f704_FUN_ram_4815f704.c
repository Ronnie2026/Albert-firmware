/* Firmware entry: 0x4815f704 */

undefined4 FUN_ram_4815f704(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff206d8(0x200,8);
  if (iVar1 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: not enough mem, err=0x%x\n",uVar3,
                     "sdmmc_common","sdmmc_allocate_aligned_buf",0x101);
    uVar3 = 0x101;
  }
  else {
    iVar2 = FUN_ram_480020d8();
    if (iVar2 != 0x200) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdmmc_common.c",0x19b,"sdmmc_allocate_aligned_buf",
                       "actual_size == SDMMC_IO_BLOCK_SIZE");
    }
    *(int *)(param_1 + 0x54) = iVar1;
    uVar3 = 0;
  }
  return uVar3;
}


