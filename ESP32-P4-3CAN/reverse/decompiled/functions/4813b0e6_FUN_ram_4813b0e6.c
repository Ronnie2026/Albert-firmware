/* Firmware entry: 0x4813b0e6 */

void FUN_ram_4813b0e6(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  FUN_ram_4814e762();
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  FUN_ram_4814e79e();
  if (*(char *)(param_1 + 0xe) != '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4813a9b2();
}


