/* Firmware entry: 0x4802428a */

undefined4 FUN_ram_4802428a(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))();
      *param_1 = 0;
    }
    FUN_ram_481659f4();
    return 0;
  }
  return 0xffffffff;
}


