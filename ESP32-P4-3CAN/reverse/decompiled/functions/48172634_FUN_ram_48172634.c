/* Firmware entry: 0x48172634 */

void FUN_ram_48172634(undefined1 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  FUN_ram_48174022(param_1 + 0xc);
  FUN_ram_4817fb90(param_1 + 0x6c);
  FUN_ram_48173ffc(param_1 + 0x74);
  FUN_ram_48173ffc(param_1 + 0x8c);
  FUN_ram_4817fb90(param_1 + 0xa4);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


