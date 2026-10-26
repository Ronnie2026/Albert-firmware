/* Firmware entry: 0x48156c38 */

void FUN_ram_48156c38(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if ((*(byte *)(*(int *)(param_1 + 0x10) + 0xe7) & 1) == 0) {
    return;
  }
  FUN_ram_48149bb6();
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN_ram_48142636(40000,FUN_ram_48156c38,param_1);
  return;
}


