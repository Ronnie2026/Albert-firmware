/* Firmware entry: 0x48193378 */

undefined4 FUN_ram_48193378(undefined4 *param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    return 0;
  }
  return 0xffffffff;
}


