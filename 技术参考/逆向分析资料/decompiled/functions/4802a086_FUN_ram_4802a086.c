/* Firmware entry: 0x4802a086 */

void FUN_ram_4802a086(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_1 + 0x20,param_1 + 0x20,3);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_1 + 0x30,param_1 + 0x30,3);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_ram_480287cc(*(undefined1 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_ram_4ff3c10a();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


