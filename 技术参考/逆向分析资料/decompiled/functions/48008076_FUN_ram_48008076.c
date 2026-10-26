/* Firmware entry: 0x48008076 */

void FUN_ram_48008076(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_ram_481a7d8c();
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_ram_481a7d8c();
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_ram_481a7d8c();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_ram_481a7d8c();
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_ram_481a7d8c();
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_ram_481a7c88();
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_ram_4ff36a52();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_ram_4ff36a52();
  }
  FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x1c));
  FUN_ram_4ff209c6(param_1);
  return;
}


