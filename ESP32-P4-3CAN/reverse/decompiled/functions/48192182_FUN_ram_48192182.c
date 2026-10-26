/* Firmware entry: 0x48192182 */

void FUN_ram_48192182(undefined4 *param_1,int param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == 4) {
      *param_1 = param_3;
      return;
    }
    if ((param_2 == 2) || (param_2 == 5)) {
      param_1[1] = param_3;
      return;
    }
    if ((param_2 == 3) || (param_2 == 6)) {
      param_1[2] = param_3;
      return;
    }
    if (param_2 == 1) {
      param_1[3] = param_3;
      return;
    }
  }
  return;
}


