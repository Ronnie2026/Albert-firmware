/* Firmware entry: 0x4819e8c6 */

undefined4 FUN_ram_4819e8c6(undefined4 param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
    if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
      FUN_ram_4ff450c2();
    }
    param_2[0xd] = 0;
    param_2[1] = param_2[0x10];
    if (param_2[0x10] != 0) {
      *param_2 = param_2[0xf];
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  param_2[1] = 0;
  *param_2 = param_2[4];
  *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x20;
  return 0xffffffff;
}


