/* Firmware entry: 0x48183dec */

void FUN_ram_48183dec(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_ram_48176a1a();
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_ram_48178af2(param_1 + 0x14,400);
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    }
    return;
  }
  return;
}


