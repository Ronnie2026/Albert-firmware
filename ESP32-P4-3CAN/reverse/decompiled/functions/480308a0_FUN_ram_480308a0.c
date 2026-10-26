/* Firmware entry: 0x480308a0 */

undefined4 FUN_ram_480308a0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 1) {
    *param_1 = param_2;
  }
  else if (param_3 == 2) {
    *param_1 = *param_2;
  }
  else if ((param_3 != 3) && (param_3 == 0)) {
    *param_1 = 0;
  }
  return 0;
}


