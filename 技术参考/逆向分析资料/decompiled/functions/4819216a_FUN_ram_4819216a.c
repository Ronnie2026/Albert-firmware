/* Firmware entry: 0x4819216a */

undefined4 FUN_ram_4819216a(int param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x6e0);
    return 0;
  }
  return 0x102;
}


