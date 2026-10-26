/* Firmware entry: 0x4802fbc0 */

void FUN_ram_4802fbc0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  *(undefined1 *)(param_1 + 0x18c6e) = 0;
  *(int *)(param_1 + 0x18c70) = *(int *)(param_1 + 0x18c70) + 1;
  while( true ) {
    fence();
    if (*(int *)(param_1 + 0x18c74) == 0) break;
    FUN_ram_4ff3ef0e();
  }
  return;
}


