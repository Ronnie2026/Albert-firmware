/* Firmware entry: 0x4813bfbe */

void FUN_ram_4813bfbe(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x3c) != 1) {
    FUN_ram_48139604(2,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4813bf7c();
}


