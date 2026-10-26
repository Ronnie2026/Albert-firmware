/* Firmware entry: 0x4816a72e */

undefined4 FUN_ram_4816a72e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x68);
  }
  return 0;
}


