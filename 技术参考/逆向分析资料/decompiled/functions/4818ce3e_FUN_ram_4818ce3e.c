/* Firmware entry: 0x4818ce3e */

undefined4 FUN_ram_4818ce3e(int param_1,undefined4 *param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  if (param_3 < 2) {
    if (param_2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + param_3 * 4 + 0xc) = *param_2;
      return 0;
    }
    *(undefined4 *)(param_1 + param_3 * 4 + 0xc) = DAT_ram_48236f9c;
    return 0;
  }
  return 0xfffffffa;
}


