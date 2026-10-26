/* Firmware entry: 0x4802b236 */

undefined1 FUN_ram_4802b236(int *param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) <= param_2) {
      return 0;
    }
  }
  else {
    if ((uint)param_1[2] <= param_2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  return *(undefined1 *)((int)param_1 + param_2);
}


