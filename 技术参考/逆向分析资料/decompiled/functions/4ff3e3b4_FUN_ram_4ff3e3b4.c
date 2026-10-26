/* Firmware entry: 0x4ff3e3b4 */

bool FUN_ram_4ff3e3b4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("freertos_tasks_c_additions.h",0x5b,"xTaskIncrementTickOtherCores",
                     "xCoreID != 0");
  }
  if ((&DAT_ram_4ff6d9f8)[mhartid] != 0) {
    return false;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  uVar2 = *(uint *)(&DAT_ram_4ff58c24 + *(int *)((&DAT_ram_4ff6da3c)[iVar1] + 0x2c) * 0x14);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return (&DAT_ram_4ff6da14)[iVar1] != 0 || 1 < uVar2;
}


