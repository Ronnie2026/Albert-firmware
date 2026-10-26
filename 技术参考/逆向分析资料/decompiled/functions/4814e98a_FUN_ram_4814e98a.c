/* Firmware entry: 0x4814e98a */

void FUN_ram_4814e98a(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x60) = 0;
    FUN_ram_4814268a(&LAB_ram_4814e958,param_1);
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}


