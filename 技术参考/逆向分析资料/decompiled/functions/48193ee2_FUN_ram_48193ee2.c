/* Firmware entry: 0x48193ee2 */

void FUN_ram_48193ee2(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    *(int *)(iVar1 + 0x14) = param_3 + 1;
    *(undefined4 *)(iVar1 + 0x10) = param_2;
  }
  return;
}


