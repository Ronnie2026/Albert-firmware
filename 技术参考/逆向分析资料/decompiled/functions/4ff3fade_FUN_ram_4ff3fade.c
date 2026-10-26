/* Firmware entry: 0x4ff3fade */

void FUN_ram_4ff3fade(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = param_1 + 2;
  param_1[1] = puVar1;
  param_1[2] = 0xffffffff;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  *param_1 = 0;
  return;
}


