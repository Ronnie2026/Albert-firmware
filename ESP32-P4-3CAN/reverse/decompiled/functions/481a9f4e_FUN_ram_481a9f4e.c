/* Firmware entry: 0x481a9f4e */

undefined4 FUN_ram_481a9f4e(int param_1,byte param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      *(byte *)(*(int *)(param_1 + 0xc) + 4) = param_2 ^ 1;
    }
    return 0;
  }
  return 0x102;
}


