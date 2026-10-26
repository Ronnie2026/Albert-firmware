/* Firmware entry: 0x481710dc */

undefined4 FUN_ram_481710dc(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x78) != 0) {
    return *(undefined4 *)(param_1 + 0x80);
  }
  return 0;
}


