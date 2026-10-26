/* Firmware entry: 0x4802fb56 */

void FUN_ram_4802fb56(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    iVar1 = FUN_ram_4ff3c5de();
    iVar1 = iVar1 + 5000;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    fence();
    *(int *)(param_1 + 0x18d80) = iVar1;
    return;
  }
  fence();
  *(undefined4 *)(param_1 + 0x18d80) = 0;
  return;
}


