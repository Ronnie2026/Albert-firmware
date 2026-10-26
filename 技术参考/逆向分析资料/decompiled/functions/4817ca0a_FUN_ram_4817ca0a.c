/* Firmware entry: 0x4817ca0a */

void FUN_ram_4817ca0a(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1 + 0xe0;
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return;
}


