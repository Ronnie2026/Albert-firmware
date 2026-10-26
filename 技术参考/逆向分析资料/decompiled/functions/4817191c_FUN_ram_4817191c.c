/* Firmware entry: 0x4817191c */

void FUN_ram_4817191c(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    if (param_1[0x10] != 0) {
      FUN_ram_48178b14(param_1[0x10],0x24);
    }
    if (param_1[0xf] != 0) {
      (**(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 +
                           (*(byte *)(*param_1 + 7) & 0x7c)) + 0x28))();
    }
    FUN_ram_48178af2(param_1,0x44);
    return;
  }
  return;
}


