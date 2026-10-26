/* Firmware entry: 0x4814d1a8 */

void FUN_ram_4814d1a8(undefined4 param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset((void *)(param_2 + 8),0,0x58);
  *(undefined1 *)(param_2 + 0x3c) = 0x60;
  *(undefined1 *)(param_2 + 0x1b) = 0x60;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  FUN_ram_4814ce84(param_1);
  return;
}


