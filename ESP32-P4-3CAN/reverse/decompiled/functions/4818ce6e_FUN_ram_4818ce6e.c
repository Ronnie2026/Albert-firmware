/* Firmware entry: 0x4818ce6e */

undefined4 FUN_ram_4818ce6e(int param_1,undefined4 *param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_3 < 2) {
      *param_2 = *(undefined4 *)(param_1 + param_3 * 4 + 0xc);
      return 0;
    }
    return 0xfffffffa;
  }
  return 0xfffffff0;
}


