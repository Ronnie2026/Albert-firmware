/* Firmware entry: 0x480038a2 */

void FUN_ram_480038a2(undefined4 *param_1)

{
  undefined2 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0x12;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  uVar1 = FUN_ram_4ff20626();
  *(undefined1 *)((int)param_1 + 10) = 2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = uVar1;
  return;
}


