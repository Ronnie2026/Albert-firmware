/* Firmware entry: 0x4819e630 */

undefined4 FUN_ram_4819e630(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  if (0xff < param_3) {
    *param_1 = 0x8a;
    return 0xffffffff;
  }
  *param_2 = (char)param_3;
  return 1;
}


