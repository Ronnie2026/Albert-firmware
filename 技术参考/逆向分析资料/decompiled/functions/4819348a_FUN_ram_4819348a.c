/* Firmware entry: 0x4819348a */

void FUN_ram_4819348a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) &&
     (iVar1 = **(int **)(param_1 + 0x38), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
  }
  return;
}


