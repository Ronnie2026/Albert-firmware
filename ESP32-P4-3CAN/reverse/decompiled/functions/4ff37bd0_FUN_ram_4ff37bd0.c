/* Firmware entry: 0x4ff37bd0 */

int FUN_ram_4ff37bd0(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff36ca4();
  if ((iVar1 != 0) && ((*(int *)(param_1 + 0x88) - 1U < 2 || (*(int *)(param_1 + 0x88) == 5)))) {
    *(undefined4 *)(param_1 + 0x88) = 0x19;
    return iVar1;
  }
  return 0;
}


