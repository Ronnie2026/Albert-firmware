/* Firmware entry: 0x4814ce84 */

void FUN_ram_4814ce84(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4814d63e(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x20) = 6;
  FUN_ram_48155046(param_1);
  FUN_ram_48154b4c(param_1);
  return;
}


