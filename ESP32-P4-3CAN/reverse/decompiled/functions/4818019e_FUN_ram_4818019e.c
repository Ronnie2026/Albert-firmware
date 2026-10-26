/* Firmware entry: 0x4818019e */

undefined4 FUN_ram_4818019e(undefined4 *param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(short *)((int)param_1 + 6) == 0) {
    return 0;
  }
  FUN_ram_48181940(*param_1,*(short *)((int)param_1 + 6),param_2);
  return 0;
}


