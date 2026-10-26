/* Firmware entry: 0x4814ead4 */

undefined4 FUN_ram_4814ead4(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    *(undefined4 *)(param_2 + 8) = 2;
    FUN_ram_4814e908();
    return 0;
  }
  return 0xfffffff0;
}


