/* Firmware entry: 0x4813b17c */

void FUN_ram_4813b17c(undefined4 param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4813b116();
  if (param_2 != 0) {
    FUN_ram_4814e762();
    *(char *)(param_2 + 0xe) = *(char *)(param_2 + 0xe) + '\x01';
    FUN_ram_4814e79e();
    if (*(char *)(param_2 + 0xe) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4813a9b2();
    }
  }
  return;
}


