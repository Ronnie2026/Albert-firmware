/* Firmware entry: 0x48155dc6 */

void FUN_ram_48155dc6(int *param_1)

{
  undefined1 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  uVar1 = *(undefined1 *)(*param_1 + 7);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = uVar1;
  return;
}


